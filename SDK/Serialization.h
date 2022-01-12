// ScriptStruct Serialization.StructSerializerTestStruct
struct FStructSerializerTestStruct {
	struct FStructSerializerNumericTestStruct Numerics; // 0x0 (48)
	struct FStructSerializerBooleanTestStruct Booleans; // 0x30 (3)
	struct FStructSerializerObjectTestStruct Objects; // 0x38 (160)
	struct FStructSerializerBuiltinTestStruct Builtins; // 0xE0 (144)
	struct FStructSerializerArrayTestStruct Arrays; // 0x170 (96)
	struct FStructSerializerMapTestStruct Maps; // 0x1D0 (320)
	struct FStructSerializerSetTestStruct Sets; // 0x310 (320)
};

// ScriptStruct Serialization.StructSerializerSetTestStruct
struct FStructSerializerSetTestStruct {
	struct TSet<struct FString> StrSet; // 0x0 (80)
	struct TSet<int32_t> IntSet; // 0x50 (80)
	struct TSet<struct FName> NameSet; // 0xA0 (80)
	struct TSet<struct FStructSerializerBuiltinTestStruct> StructSet; // 0xF0 (80)
};

// ScriptStruct Serialization.StructSerializerBuiltinTestStruct
struct FStructSerializerBuiltinTestStruct {
	struct FGuid Guid; // 0x0 (16)
	struct FName Name; // 0x10 (8)
	struct FString String; // 0x18 (16)
	struct FText Text; // 0x28 (24)
	struct FVector Vector; // 0x40 (12)
	struct FVector4 Vector4; // 0x50 (16)
	struct FRotator Rotator; // 0x60 (12)
	struct FQuat Quat; // 0x70 (16)
	struct FColor Color; // 0x80 (4)
};

// ScriptStruct Serialization.StructSerializerMapTestStruct
struct FStructSerializerMapTestStruct {
	struct TMap<int32_t, struct FString> IntToStr; // 0x0 (80)
	struct TMap<struct FString, struct FString> StrToStr; // 0x50 (80)
	struct TMap<struct FString, struct FVector> StrToVec; // 0xA0 (80)
	struct TMap<struct FString, struct FStructSerializerBuiltinTestStruct> StrToStruct; // 0xF0 (80)
};

// ScriptStruct Serialization.StructSerializerArrayTestStruct
struct FStructSerializerArrayTestStruct {
	struct TArray<int32_t> Int32Array; // 0x0 (16)
	struct TArray<char> ByteArray; // 0x10 (16)
	int32_t StaticSingleElement; // 0x20 (4)
	int32_t StaticInt32Array[0x3]; // 0x24 (12)
	float StaticFloatArray[0x3]; // 0x30 (12)
	struct TArray<struct FVector> VectorArray; // 0x40 (16)
	struct TArray<struct FStructSerializerBuiltinTestStruct> StructArray; // 0x50 (16)
};

// ScriptStruct Serialization.StructSerializerObjectTestStruct
struct FStructSerializerObjectTestStruct {
	struct UClass* Class; // 0x0 (8)
	struct UClass* SubClass; // 0x8 (8)
	struct TSoftClassPtr<UObject> SoftClass; // 0x10 (40)
	struct Object Object; // 0x38 (8)
	struct TWeakObjectPtr<struct UMetaData> WeakObject; // 0x40 (8)
	struct TSoftObjectPtr<UMetaData> SoftObject; // 0x48 (40)
	struct FSoftClassPath ClassPath; // 0x70 (24)
	struct FSoftObjectPath ObjectPath; // 0x88 (24)
};

// ScriptStruct Serialization.StructSerializerBooleanTestStruct
struct FStructSerializerBooleanTestStruct {
	char BoolFalse : 0; // 0x0 (1)
	char BoolTrue : 0; // 0x1 (1)
	char Bitfield0 : 0; // 0x2 (1)
	char Bitfield1 : 0; // 0x2 (1)
	char Bitfield2Set : 0; // 0x2 (1)
	char Bitfield3 : 0; // 0x2 (1)
	char Bitfield4Set : 0; // 0x2 (1)
	char Bitfield5Set : 0; // 0x2 (1)
	char Bitfield6 : 0; // 0x2 (1)
	char Bitfield7Set : 0; // 0x2 (1)
};

// ScriptStruct Serialization.StructSerializerNumericTestStruct
struct FStructSerializerNumericTestStruct {
	int8_t Int8; // 0x0 (1)
	int16_t Int16; // 0x2 (2)
	int32_t Int32; // 0x4 (4)
	int64_t Int64; // 0x8 (8)
	char UInt8; // 0x10 (1)
	uint16_t UInt16; // 0x12 (2)
	uint32_t UInt32; // 0x14 (4)
	uint64_t UInt64; // 0x18 (8)
	float Float; // 0x20 (4)
	double Double; // 0x28 (8)
};

// ScriptStruct Serialization.StructSerializerByteArray
struct FStructSerializerByteArray {
	int32_t Dummy1; // 0x0 (4)
	struct TArray<char> ByteArray; // 0x8 (16)
	int32_t Dummy2; // 0x18 (4)
	struct TArray<int8_t> Int8Array; // 0x20 (16)
	int32_t Dummy3; // 0x30 (4)
};

