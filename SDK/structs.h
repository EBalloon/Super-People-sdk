
#pragma once

#ifdef _MSC_VER
#pragma pack(push, 0x8)
#endif

template<typename Fn>
inline Fn GetVFunction(const void* instance, std::size_t index)
{
	auto vtable = *reinterpret_cast<const void***>(const_cast<void*>(instance));
	return reinterpret_cast<Fn>(vtable[index]);
}

struct UObject
{
public:
	void** VTableObject;
	uint32_t ObjectFlags;
	int32_t InternalIndex;
	struct UClass* Class;
	struct FName* Name;
	UObject* Outer;

	inline void ProcessEvent(struct UFunction* function, void* Params)
	{
		return GetVFunction<void(*)(UObject*, struct UFunction*, void*)>(this, 66 /*0x42*/)(this, function, Params);
	}
};


struct UClass {
public:
	UClass* SuperClass;
};

struct UField : public UObject
{
public:
	class UField* Next;
};

struct UStruct : public UField
{
public:
	char inheritedPad[16];
	class UStruct* SuperField;
	class UField* Children;
	int32_t PropertySize;
	int32_t MinAlignment;
	char Unknown[64];
};

struct UFunction : public UStruct
{
public:
	int32_t FunctionFlags;
	int16_t RepOffset;
	int8_t NumParms;
	char Unknown_008F[1];
	int16_t ParmsSize;
	int16_t ReturnValueOffset;
	int16_t RPCId;
	int16_t RPCResponseId;
	class UProperty* FirstPropertyToInit;
	class UFunction* EventGraphFunction;
	int32_t  EventGraphCallOffset;
	void* Func;
};

struct FUObjectItem
{
public:
	UObject* Object;
	int32_t Flags;
	int32_t ClusterIndex;
	int32_t SerialNumber;

	enum class ObjectFlags : int32_t
	{
		None = 0,
		Native = 1 << 25,
		Async = 1 << 26,
		AsyncLoading = 1 << 27,
		Unreachable = 1 << 28,
		PendingKill = 1 << 29,
		RootSet = 1 << 30,
		NoStrongReference = 1 << 31
	};

	inline bool IsUnreachable() const
	{
		return !!(Flags & static_cast<std::underlying_type_t<ObjectFlags>>(ObjectFlags::Unreachable));
	}
	inline bool IsPendingKill() const
	{
		return !!(Flags & static_cast<std::underlying_type_t<ObjectFlags>>(ObjectFlags::PendingKill));
	}
};

struct TUObjectArray
{
public:
	static uintptr_t g_total_objects;
	static uintptr_t g_objects;

	inline int32_t Num() const
	{
		return *(int32_t*)((uintptr_t)GetModuleHandleA(0) + g_total_objects);
	}

	inline UObject* GetByIndex(int32_t index) const
	{
		static auto objects = *(uintptr_t*)((uintptr_t)GetModuleHandleA(0) + g_objects);
		return (UObject*)(*(uintptr_t*)(*(uintptr_t*)(objects + 8 * (index / 66560)) + 24 * (index % 66560)));
	}

	inline FUObjectItem* GetItemByIndex(int32_t index) const
	{
		if (index < NumElements)
		{
			return (FUObjectItem*)GetByIndex(index);
		}
		return nullptr;
	}

private:
	FUObjectItem* Objects;
	int32_t MaxElements;
	int32_t NumElements;
};

struct FUObjectArray
{
public:
	int32_t ObjFirstGCIndex;
	int32_t ObjLastNonGCIndex;
	int32_t MaxObjectsNotConsideredByGC;
	int32_t OpenForDisregardForGC;
	TUObjectArray ObjObjects;
};

template<class T>
struct TArray
{
	friend struct FString;

public:
	inline TArray()
	{
		Data = nullptr;
		Count = Max = 0;
	};

	inline int Num() const
	{
		return Count;
	};

	inline T& operator[](int i)
	{
		return Data[i];
	};

	inline const T& operator[](int i) const
	{
		return Data[i];
	};

	inline bool IsValidIndex(int i) const
	{
		return i < Num();
	}

private:
	T* Data;
	int32_t Count;
	int32_t Max;
};

class FNameEntry
{
public:
	static const auto NAME_WIDE_MASK = 0x1;
	static const auto NAME_INDEX_SHIFT = 1;

	int32_t Index;
	FNameEntry* HashNext;
	union
	{
		char AnsiName[1024];
		wchar_t WideName[1024];
	};

	inline const int32_t GetIndex() const
	{
		return Index >> NAME_INDEX_SHIFT;
	}

	inline bool IsWide() const
	{
		return Index & NAME_WIDE_MASK;
	}

	inline const char* GetAnsiName() const
	{
		return AnsiName;
	}

	inline const wchar_t* GetWideName() const
	{
		return WideName;
	}
};

template<typename ElementType, int32_t MaxTotalElements, int32_t ElementsPerChunk>
class TStaticIndirectArrayThreadSafeRead
{
public:
	inline size_t Num() const
	{
		return *(uint32_t*)((uintptr_t)this + 2048);
	}

	inline bool IsValidIndex(int32_t index) const
	{
		return index < Num() && index >= 0;
	}

	inline ElementType const* const& operator[](int32_t index) const
	{
		return *GetItemPtr(index);
	}

private:
	inline ElementType const* const* GetItemPtr(int32_t Index) const
	{
		int32_t ChunkIndex = Index / ElementsPerChunk;
		int32_t WithinChunkIndex = Index % ElementsPerChunk;
		ElementType** Chunk = Chunks[ChunkIndex];
		return Chunk + WithinChunkIndex;
	}

	enum
	{
		ChunkTableSize = (MaxTotalElements + ElementsPerChunk - 1) / ElementsPerChunk
	};

	ElementType** Chunks[ChunkTableSize];
};

using TNameEntryArray = TStaticIndirectArrayThreadSafeRead<FNameEntry, 2 * 1024 * 1024, 16384>;

struct FName
{
	union
	{
		struct
		{
			int32_t ComparisonIndex;
			int32_t Number;
		};

		uint64_t CompositeComparisonValue;
	};

	inline FName()
		: ComparisonIndex(0),
		Number(0)
	{
	};

	inline FName(int32_t i)
		: ComparisonIndex(i),
		Number(0)
	{
	};

	FName(const char* nameToFind)
		: ComparisonIndex(0),
		Number(0)
	{
		static std::set<int> cache;

		for (auto i : cache)
		{
			if (!std::strcmp(GetGlobalNames()[i]->GetAnsiName(), nameToFind))
			{
				ComparisonIndex = i;

				return;
			}
		}

		for (auto i = 0; i < GetGlobalNames().Num(); ++i)
		{
			if (GetGlobalNames()[i] != nullptr)
			{
				if (!std::strcmp(GetGlobalNames()[i]->GetAnsiName(), nameToFind))
				{
					cache.insert(i);

					ComparisonIndex = i;

					return;
				}
			}
		}
	};

	static TNameEntryArray* GNames;
	static inline TNameEntryArray& GetGlobalNames()
	{
		return *GNames;
	};

	inline const char* GetName() const
	{
		return GetGlobalNames()[ComparisonIndex]->GetAnsiName();
	};

	inline bool operator==(const FName& other) const
	{
		return ComparisonIndex == other.ComparisonIndex;
	};
};

struct FString : private TArray<wchar_t>
{
	inline FString()
	{
	};

	FString(const wchar_t* other)
	{
		Max = Count = *other ? std::wcslen(other) + 1 : 0;

		if (Count)
		{
			Data = const_cast<wchar_t*>(other);
		}
	};

	inline bool IsValid() const
	{
		return Data != nullptr;
	}

	inline const wchar_t* c_str() const
	{
		return Data;
	}

	std::string ToString() const
	{
		auto length = std::wcslen(Data);

		std::string str(length, '\0');

		std::use_facet<std::ctype<wchar_t>>(std::locale()).narrow(Data, Data + length, '?', &str[0]);

		return str;
	}
};

template<class TEnum>
class TEnumAsByte
{
public:
	inline TEnumAsByte()
	{
	}

	inline TEnumAsByte(TEnum _value)
		: value(static_cast<uint8_t>(_value))
	{
	}

	explicit inline TEnumAsByte(int32_t _value)
		: value(static_cast<uint8_t>(_value))
	{
	}

	explicit inline TEnumAsByte(uint8_t _value)
		: value(_value)
	{
	}

	inline operator TEnum() const
	{
		return (TEnum)value;
	}

	inline TEnum GetValue() const
	{
		return (TEnum)value;
	}

private:
	uint8_t value;
};

struct FDateTime {
};

class FTextData {
public:
	wchar_t* Name;
	int32_t Length;
};
struct FText {
	FTextData* Data;
};

#ifdef _MSC_VER
#pragma pack(pop)
#endif
    