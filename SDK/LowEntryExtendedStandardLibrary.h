// Enum LowEntryExtendedStandardLibrary.ELowEntryBatteryState
enum class ELowEntryBatteryState : uint8_t {
	ELowEntryBatteryState = 0,
	ELowEntryBatteryState = 1,
	ELowEntryBatteryState = 2,
	ELowEntryBatteryState = 3,
	ELowEntryBatteryState = 4,
	ELowEntryBatteryState = 5,
};

// Enum LowEntryExtendedStandardLibrary.ELowEntryExtendedStandardLibrary0to9
enum class ELowEntryExtendedStandardLibrary0to9 : uint8_t {
	ELowEntryExtendedStandardLibrary0to = 0,
	ELowEntryExtendedStandardLibrary0to = 1,
	ELowEntryExtendedStandardLibrary0to = 2,
	ELowEntryExtendedStandardLibrary0to = 3,
	ELowEntryExtendedStandardLibrary0to = 4,
	ELowEntryExtendedStandardLibrary0to = 5,
	ELowEntryExtendedStandardLibrary0to = 6,
	ELowEntryExtendedStandardLibrary0to = 7,
	ELowEntryExtendedStandardLibrary0to = 8,
	ELowEntryExtendedStandardLibrary0to = 9,
	ELowEntryExtendedStandardLibrary0to = 10,
};

// Enum LowEntryExtendedStandardLibrary.ELowEntryExtendedStandardLibrary1to10other
enum class ELowEntryExtendedStandardLibrary1to10other : uint8_t {
	ELowEntryExtendedStandardLibrary1to10other = 1,
	ELowEntryExtendedStandardLibrary1to10other = 2,
	ELowEntryExtendedStandardLibrary1to10other = 3,
	ELowEntryExtendedStandardLibrary1to10other = 4,
	ELowEntryExtendedStandardLibrary1to10other = 5,
	ELowEntryExtendedStandardLibrary1to10other = 6,
	ELowEntryExtendedStandardLibrary1to10other = 7,
	ELowEntryExtendedStandardLibrary1to10other = 8,
	ELowEntryExtendedStandardLibrary1to10other = 9,
	ELowEntryExtendedStandardLibrary1to10other = 10,
	ELowEntryExtendedStandardLibrary1to10other = 0,
	ELowEntryExtendedStandardLibrary1to10other = 11,
};

// Enum LowEntryExtendedStandardLibrary.ELowEntryExtendedStandardLibraryTrueOrFalse
enum class ELowEntryExtendedStandardLibraryTrueOrFalse : uint8_t {
	ELowEntryExtendedStandardLibraryTrueOrFalse = 0,
	ELowEntryExtendedStandardLibraryTrueOrFalse = 1,
	ELowEntryExtendedStandardLibraryTrueOrFalse = 2,
};

// Enum LowEntryExtendedStandardLibrary.ELowEntryHmacAlgorithm
enum class ELowEntryHmacAlgorithm : uint8_t {
	ELowEntryHmacAlgorithm = 0,
	ELowEntryHmacAlgorithm = 1,
	ELowEntryHmacAlgorithm = 2,
	ELowEntryHmacAlgorithm = 3,
	ELowEntryHmacAlgorithm = 4,
};

// Enum LowEntryExtendedStandardLibrary.ELowEntryImageFormat
enum class ELowEntryImageFormat : uint8_t {
	ELowEntryImageFormat = 0,
	ELowEntryImageFormat = 1,
	ELowEntryImageFormat = 2,
	ELowEntryImageFormat = 3,
	ELowEntryImageFormat = 4,
	ELowEntryImageFormat = 5,
	ELowEntryImageFormat = 6,
	ELowEntryImageFormat = 7,
	ELowEntryImageFormat = 8,
};

// Enum LowEntryExtendedStandardLibrary.ELowEntryRGBFormat
enum class ELowEntryRGBFormat : uint8_t {
	ELowEntryRGBFormat = 0,
	ELowEntryRGBFormat = 1,
	ELowEntryRGBFormat = 2,
	ELowEntryRGBFormat = 3,
	ELowEntryRGBFormat = 4,
};

// Enum LowEntryExtendedStandardLibrary.ELowEntrySplitScreenType
enum class ELowEntrySplitScreenType : uint8_t {
	ELowEntrySplitScreenType = 0,
	ELowEntrySplitScreenType = 1,
	ELowEntrySplitScreenType = 2,
	ELowEntrySplitScreenType = 3,
	ELowEntrySplitScreenType = 4,
	ELowEntrySplitScreenType = 5,
	ELowEntrySplitScreenType = 6,
	ELowEntrySplitScreenType = 7,
	ELowEntrySplitScreenType = 8,
};

// Enum LowEntryExtendedStandardLibrary.ELowEntrySplitScreenTypeThreePlayers
enum class ELowEntrySplitScreenTypeThreePlayers : uint8_t {
	ELowEntrySplitScreenTypeThreePlayers = 0,
	ELowEntrySplitScreenTypeThreePlayers = 1,
	ELowEntrySplitScreenTypeThreePlayers = 2,
};

// Enum LowEntryExtendedStandardLibrary.ELowEntrySplitScreenTypeTwo
enum class ELowEntrySplitScreenTypeTwo : uint8_t {
	ELowEntrySplitScreenTypeTwo = 0,
	ELowEntrySplitScreenTypeTwo = 1,
	ELowEntrySplitScreenTypeTwo = 2,
};

// Class LowEntryExtendedStandardLibrary.LowEntryBitDataEntry
class ULowEntryBitDataEntry : public Object {

public:

	char Type; // 0x28 (1)
	char ByteValue; // 0x29 (1)
	int32_t IntegerValue; // 0x2C (4)
	struct Unknown LongBytesValue; // 0x30 (8)
	float FloatValue; // 0x38 (4)
	struct Unknown DoubleBytesValue; // 0x40 (8)
	char BooleanValue : 0; // 0x48 (1)
	struct FString StringUtf8Value; // 0x50 (16)
	struct TArray<Unknown> ByteArrayValue; // 0x60 (16)
	struct TArray<Unknown> IntegerArrayValue; // 0x70 (16)
	struct TArray<Unknown> LongBytesArrayValue; // 0x80 (16)
	struct TArray<Unknown> FloatArrayValue; // 0x90 (16)
	struct TArray<Unknown> DoubleBytesArrayValue; // 0xA0 (16)
	struct TArray<Unknown> BooleanArrayValue; // 0xB0 (16)
	struct TArray<Unknown> StringUtf8ArrayValue; // 0xC0 (16)
};

// Class LowEntryExtendedStandardLibrary.LowEntryBitDataReader
class ULowEntryBitDataReader : public Object {

public:

	struct TArray<Unknown> Bytes; // 0x28 (16)
	int32_t Position; // 0x38 (4)
	char CurrentByte; // 0x3C (1)
	int32_t CurrentBytePosition; // 0x40 (4)

	void SetPosition(int32_t Position_); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.SetPosition(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1062470>
	void Reset(); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.Reset(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1062450>
	int32_t Remaining(); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.Remaining(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1062420>
	struct TArray<Unknown> GetStringUtf8Array(); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetStringUtf8Array(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1062340>
	struct FString GetStringUtf8(); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetStringUtf8(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x10622C0>
	struct TArray<Unknown> GetPositiveInteger3Array(); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetPositiveInteger3Array(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1062240>
	int32_t GetPositiveInteger3(); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetPositiveInteger3(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1062210>
	struct TArray<Unknown> GetPositiveInteger2Array(); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetPositiveInteger2Array(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1062190>
	int32_t GetPositiveInteger2(); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetPositiveInteger2(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1062160>
	struct TArray<Unknown> GetPositiveInteger1Array(); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetPositiveInteger1Array(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x10620E0>
	int32_t GetPositiveInteger1(); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetPositiveInteger1(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x10620B0>
	int32_t GetPosition(); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetPosition(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1062080>
	struct TArray<Unknown> GetLongBytesArray(); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetLongBytesArray(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1062000>
	struct Unknown GetLongBytes(); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetLongBytes(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1061FD0>
	int32_t GetIntegerMostSignificantBits(int32_t BitCount); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetIntegerMostSignificantBits(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1061F40>
	int32_t GetIntegerLeastSignificantBits(int32_t BitCount); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetIntegerLeastSignificantBits(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1061EB0>
	struct TArray<Unknown> GetIntegerArrayMostSignificantBits(int32_t BitCount); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetIntegerArrayMostSignificantBits(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1061DD0>
	struct TArray<Unknown> GetIntegerArrayLeastSignificantBits(int32_t BitCount); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetIntegerArrayLeastSignificantBits(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1061CF0>
	struct TArray<Unknown> GetIntegerArray(); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetIntegerArray(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1061C40>
	int32_t GetInteger(); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetInteger(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1061CC0>
	struct TArray<Unknown> GetFloatArray(); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetFloatArray(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1061C40>
	float GetFloat(); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetFloat(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1061C10>
	struct TArray<Unknown> GetDoubleBytesArray(); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetDoubleBytesArray(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1061B90>
	struct Unknown GetDoubleBytes(); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetDoubleBytes(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1061B60>
	struct Unknown GetClone(); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetClone(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1061B30>
	char GetByteMostSignificantBits(int32_t BitCount); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetByteMostSignificantBits(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1061AA0>
	char GetByteLeastSignificantBits(int32_t BitCount); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetByteLeastSignificantBits(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1061A10>
	struct TArray<Unknown> GetByteArrayMostSignificantBits(int32_t BitCount); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetByteArrayMostSignificantBits(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1061930>
	struct TArray<Unknown> GetByteArrayLeastSignificantBits(int32_t BitCount); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetByteArrayLeastSignificantBits(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1061850>
	struct TArray<Unknown> GetByteArray(); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetByteArray(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x10617D0>
	char GetByte(); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetByte(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x10617A0>
	struct TArray<Unknown> GetBooleanArray(); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetBooleanArray(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1061720>
	char GetBoolean(); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetBoolean(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x10616F0>
	struct TArray<Unknown> GetBitArray(); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetBitArray(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1061720>
	char GetBit(); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetBit(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x10616F0>
	void Empty(); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.Empty(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x10616D0>
};

// Class LowEntryExtendedStandardLibrary.LowEntryBitDataWriter
class ULowEntryBitDataWriter : public Object {

public:

	struct TArray<Unknown> Bytes; // 0x28 (16)
	char CurrentByte; // 0x38 (1)
	int32_t CurrentBytePosition; // 0x3C (4)

	void AddStringUtf8Array(struct TArray<Unknown>& Value); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddStringUtf8Array(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1061600>
	void AddStringUtf8(struct FString Value); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddStringUtf8(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1061560>
	void AddPositiveInteger3Array(struct TArray<Unknown>& Value); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddPositiveInteger3Array(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x10614B0>
	void AddPositiveInteger3(int32_t Value); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddPositiveInteger3(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1061430>
	void AddPositiveInteger2Array(struct TArray<Unknown>& Value); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddPositiveInteger2Array(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1061380>
	void AddPositiveInteger2(int32_t Value); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddPositiveInteger2(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1061300>
	void AddPositiveInteger1Array(struct TArray<Unknown>& Value); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddPositiveInteger1Array(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1061250>
	void AddPositiveInteger1(int32_t Value); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddPositiveInteger1(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x10611D0>
	void AddLongBytesArray(struct TArray<Unknown>& Value); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddLongBytesArray(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1060B40>
	void AddLongBytes(struct Unknown Value); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddLongBytes(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1060AC0>
	void AddIntegerMostSignificantBits(int32_t Value, int32_t BitCount); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddIntegerMostSignificantBits(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1061110>
	void AddIntegerLeastSignificantBits(int32_t Value, int32_t BitCount); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddIntegerLeastSignificantBits(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1061050>
	void AddIntegerArrayMostSignificantBits(struct TArray<Unknown>& Value, int32_t BitCount); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddIntegerArrayMostSignificantBits(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1060F50>
	void AddIntegerArrayLeastSignificantBits(struct TArray<Unknown>& Value, int32_t BitCount); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddIntegerArrayLeastSignificantBits(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1060E50>
	void AddIntegerArray(struct TArray<Unknown>& Value); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddIntegerArray(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1060DA0>
	void AddInteger(int32_t Value); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddInteger(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1060D20>
	void AddFloatArray(struct TArray<Unknown>& Value); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddFloatArray(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1060C70>
	void AddFloat(float Value); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddFloat(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1060BF0>
	void AddDoubleBytesArray(struct TArray<Unknown>& Value); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddDoubleBytesArray(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1060B40>
	void AddDoubleBytes(struct Unknown Value); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddDoubleBytes(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1060AC0>
	void AddByteMostSignificantBits(char Value, int32_t BitCount); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddByteMostSignificantBits(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1060A00>
	void AddByteLeastSignificantBits(char Value, int32_t BitCount); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddByteLeastSignificantBits(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1060940>
	void AddByteArrayMostSignificantBits(struct TArray<Unknown>& Value, int32_t BitCount); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddByteArrayMostSignificantBits(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1060840>
	void AddByteArrayLeastSignificantBits(struct TArray<Unknown>& Value, int32_t BitCount); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddByteArrayLeastSignificantBits(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1060740>
	void AddByteArray(struct TArray<Unknown>& Value); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddByteArray(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1060690>
	void AddByte(char Value); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddByte(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1060610>
	void AddBooleanArray(struct TArray<Unknown>& Value); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddBooleanArray(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1060560>
	void AddBoolean(char Value); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddBoolean(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x10604D0>
	void AddBitArray(struct TArray<Unknown>& Value); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddBitArray(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1060560>
	void AddBit(char Value); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddBit(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x10604D0>
};

// Class LowEntryExtendedStandardLibrary.LowEntryByteArray
class ULowEntryByteArray : public Object {

public:

	struct TArray<Unknown> ByteArray; // 0x28 (16)
};

// Class LowEntryExtendedStandardLibrary.LowEntryByteDataEntry
class ULowEntryByteDataEntry : public Object {

public:

	char Type; // 0x28 (1)
	char ByteValue; // 0x29 (1)
	int32_t IntegerValue; // 0x2C (4)
	struct Unknown LongBytesValue; // 0x30 (8)
	float FloatValue; // 0x38 (4)
	struct Unknown DoubleBytesValue; // 0x40 (8)
	char BooleanValue : 0; // 0x48 (1)
	struct FString StringUtf8Value; // 0x50 (16)
	struct TArray<Unknown> ByteArrayValue; // 0x60 (16)
	struct TArray<Unknown> IntegerArrayValue; // 0x70 (16)
	struct TArray<Unknown> LongBytesArrayValue; // 0x80 (16)
	struct TArray<Unknown> FloatArrayValue; // 0x90 (16)
	struct TArray<Unknown> DoubleBytesArrayValue; // 0xA0 (16)
	struct TArray<Unknown> BooleanArrayValue; // 0xB0 (16)
	struct TArray<Unknown> StringUtf8ArrayValue; // 0xC0 (16)
};

// Class LowEntryExtendedStandardLibrary.LowEntryByteDataReader
class ULowEntryByteDataReader : public Object {

public:

	struct TArray<Unknown> Bytes; // 0x28 (16)
	int32_t Position; // 0x38 (4)

	void SetPosition(int32_t Position_); // Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.SetPosition(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1077CE0>
	void Reset(); // Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.Reset(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1076A30>
	int32_t Remaining(); // Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.Remaining(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1076590>
	struct TArray<Unknown> GetStringUtf8Array(); // Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetStringUtf8Array(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1070DB0>
	struct FString GetStringUtf8(); // Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetStringUtf8(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1070D30>
	struct TArray<Unknown> GetPositiveInteger3Array(); // Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetPositiveInteger3Array(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x10708D0>
	int32_t GetPositiveInteger3(); // Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetPositiveInteger3(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x10708A0>
	struct TArray<Unknown> GetPositiveInteger2Array(); // Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetPositiveInteger2Array(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1070820>
	int32_t GetPositiveInteger2(); // Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetPositiveInteger2(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x10707F0>
	struct TArray<Unknown> GetPositiveInteger1Array(); // Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetPositiveInteger1Array(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1070770>
	int32_t GetPositiveInteger1(); // Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetPositiveInteger1(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1070740>
	int32_t GetPosition(); // Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetPosition(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1070710>
	struct TArray<Unknown> GetLongBytesArray(); // Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetLongBytesArray(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1070430>
	struct Unknown GetLongBytes(); // Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetLongBytes(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1070400>
	struct TArray<Unknown> GetIntegerArray(); // Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetIntegerArray(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1070280>
	int32_t GetInteger(); // Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetInteger(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1070250>
	struct TArray<Unknown> GetFloatArray(); // Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetFloatArray(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1070110>
	float GetFloat(); // Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetFloat(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x10700E0>
	struct TArray<Unknown> GetDoubleBytesArray(); // Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetDoubleBytesArray(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1070060>
	struct Unknown GetDoubleBytes(); // Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetDoubleBytes(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1070030>
	struct Unknown GetClone(); // Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetClone(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1070000>
	struct TArray<Unknown> GetByteArray(); // Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetByteArray(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x106FCD0>
	char GetByte(); // Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetByte(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x106FCA0>
	struct TArray<Unknown> GetBooleanArray(); // Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetBooleanArray(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x106FC20>
	char GetBoolean(); // Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetBoolean(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x106FBF0>
	void Empty(); // Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.Empty(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x106ED50>
};

// Class LowEntryExtendedStandardLibrary.LowEntryByteDataWriter
class ULowEntryByteDataWriter : public Object {

public:

	struct TArray<Unknown> Bytes; // 0x28 (16)

	void AddStringUtf8Array(struct TArray<Unknown>& Value); // Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddStringUtf8Array(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1068020>
	void AddStringUtf8(struct FString Value); // Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddStringUtf8(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1067F80>
	void AddPositiveInteger3Array(struct TArray<Unknown>& Value); // Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddPositiveInteger3Array(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1067ED0>
	void AddPositiveInteger3(int32_t Value); // Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddPositiveInteger3(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1067E50>
	void AddPositiveInteger2Array(struct TArray<Unknown>& Value); // Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddPositiveInteger2Array(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1067DA0>
	void AddPositiveInteger2(int32_t Value); // Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddPositiveInteger2(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1067D20>
	void AddPositiveInteger1Array(struct TArray<Unknown>& Value); // Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddPositiveInteger1Array(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1067C70>
	void AddPositiveInteger1(int32_t Value); // Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddPositiveInteger1(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1067BF0>
	void AddLongBytesArray(struct TArray<Unknown>& Value); // Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddLongBytesArray(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x10678E0>
	void AddLongBytes(struct Unknown Value); // Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddLongBytes(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1067860>
	void AddIntegerArray(struct TArray<Unknown>& Value); // Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddIntegerArray(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1067B40>
	void AddInteger(int32_t Value); // Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddInteger(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1067AC0>
	void AddFloatArray(struct TArray<Unknown>& Value); // Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddFloatArray(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1067A10>
	void AddFloat(float Value); // Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddFloat(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1067990>
	void AddDoubleBytesArray(struct TArray<Unknown>& Value); // Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddDoubleBytesArray(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x10678E0>
	void AddDoubleBytes(struct Unknown Value); // Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddDoubleBytes(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1067860>
	void AddByteArray(struct TArray<Unknown>& Value); // Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddByteArray(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x10677B0>
	void AddByte(char Value); // Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddByte(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1067730>
	void AddBooleanArray(struct TArray<Unknown>& Value); // Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddBooleanArray(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1067680>
	void AddBoolean(char Value); // Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddBoolean(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x10675F0>
};

// Class LowEntryExtendedStandardLibrary.LowEntryDouble
class ULowEntryDouble : public Object {

public:

	struct TArray<Unknown> Bytes; // 0x28 (16)

	void SetBytes(struct TArray<Unknown>& ByteArray, int32_t Index, int32_t Length); // Function LowEntryExtendedStandardLibrary.LowEntryDouble.SetBytes(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1077930>
	char LongBytes_LessThan(struct Unknown Value); // Function LowEntryExtendedStandardLibrary.LowEntryDouble.LongBytes_LessThan(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1074360>
	char LongBytes_GreaterThan(struct Unknown Value); // Function LowEntryExtendedStandardLibrary.LowEntryDouble.LongBytes_GreaterThan(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x10742D0>
	char Integer_LessThan(int32_t Value); // Function LowEntryExtendedStandardLibrary.LowEntryDouble.Integer_LessThan(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1073000>
	char Integer_GreaterThan(int32_t Value); // Function LowEntryExtendedStandardLibrary.LowEntryDouble.Integer_GreaterThan(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1072F70>
	struct TArray<Unknown> GetBytes(); // Function LowEntryExtendedStandardLibrary.LowEntryDouble.GetBytes(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x106FE40>
	void Float_Subtract(float Value); // Function LowEntryExtendedStandardLibrary.LowEntryDouble.Float_Subtract(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x106F360>
	char Float_LessThan(float Value); // Function LowEntryExtendedStandardLibrary.LowEntryDouble.Float_LessThan(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x106F2D0>
	char Float_GreaterThan(float Value); // Function LowEntryExtendedStandardLibrary.LowEntryDouble.Float_GreaterThan(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x106F240>
	char Float_Equals(float Value); // Function LowEntryExtendedStandardLibrary.LowEntryDouble.Float_Equals(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x106F1B0>
	void Float_Add(float Value); // Function LowEntryExtendedStandardLibrary.LowEntryDouble.Float_Add(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x106F130>
	void DoubleBytes_Subtract(struct Unknown Value); // Function LowEntryExtendedStandardLibrary.LowEntryDouble.DoubleBytes_Subtract(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x106ECA0>
	char DoubleBytes_LessThan(struct Unknown Value); // Function LowEntryExtendedStandardLibrary.LowEntryDouble.DoubleBytes_LessThan(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x106EC10>
	char DoubleBytes_GreaterThan(struct Unknown Value); // Function LowEntryExtendedStandardLibrary.LowEntryDouble.DoubleBytes_GreaterThan(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x106EB80>
	char DoubleBytes_Equals(struct Unknown Value); // Function LowEntryExtendedStandardLibrary.LowEntryDouble.DoubleBytes_Equals(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x106EAF0>
	void DoubleBytes_Add(struct Unknown Value); // Function LowEntryExtendedStandardLibrary.LowEntryDouble.DoubleBytes_Add(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x106EA70>
	struct Unknown CreateClone(); // Function LowEntryExtendedStandardLibrary.LowEntryDouble.CreateClone(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x106E230>
	struct FString CastToString(int32_t MinFractionalDigits); // Function LowEntryExtendedStandardLibrary.LowEntryDouble.CastToString(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x106DB90>
	struct Unknown CastToLongBytes(); // Function LowEntryExtendedStandardLibrary.LowEntryDouble.CastToLongBytes(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x106DB60>
};

// Class LowEntryExtendedStandardLibrary.LowEntryExecutionQueue
class ULowEntryExecutionQueue : public Object {

public:

	int32_t Count; // 0x28 (4)
	char Next : 0; // 0x2C (1)
};

// Class LowEntryExtendedStandardLibrary.LowEntryLatentActionBoolean
class ULowEntryLatentActionBoolean : public Object {

public:

	char Finished : 0; // 0x28 (1)
	char Result : 0; // 0x29 (1)
	int32_t KeepAliveCount; // 0x2C (4)

	void WaitTillDone(struct Unknown WorldContextObject, struct Unknown LatentInfo, char& Result_); // Function LowEntryExtendedStandardLibrary.LowEntryLatentActionBoolean.WaitTillDone(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x107C7B0>
	char IsDone(); // Function LowEntryExtendedStandardLibrary.LowEntryLatentActionBoolean.IsDone(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x107C450>
	void GetResult(char& Result_); // Function LowEntryExtendedStandardLibrary.LowEntryLatentActionBoolean.GetResult(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x107BEA0>
	void Done(char Result_); // Function LowEntryExtendedStandardLibrary.LowEntryLatentActionBoolean.Done(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x107B850>
};

// Class LowEntryExtendedStandardLibrary.LowEntryLatentActionFloat
class ULowEntryLatentActionFloat : public Object {

public:

	char Finished : 0; // 0x28 (1)
	float Result; // 0x2C (4)
	int32_t KeepAliveCount; // 0x30 (4)

	void WaitTillDone(struct Unknown WorldContextObject, struct Unknown LatentInfo, float& Result_); // Function LowEntryExtendedStandardLibrary.LowEntryLatentActionFloat.WaitTillDone(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x107C8F0>
	char IsDone(); // Function LowEntryExtendedStandardLibrary.LowEntryLatentActionFloat.IsDone(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x107C450>
	void GetResult(float& Result_); // Function LowEntryExtendedStandardLibrary.LowEntryLatentActionFloat.GetResult(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x107BF30>
	void Done(float Result_); // Function LowEntryExtendedStandardLibrary.LowEntryLatentActionFloat.Done(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x107B8E0>
};

// Class LowEntryExtendedStandardLibrary.LowEntryLatentActionInteger
class ULowEntryLatentActionInteger : public Object {

public:

	char Finished : 0; // 0x28 (1)
	int32_t Result; // 0x2C (4)
	int32_t KeepAliveCount; // 0x30 (4)

	void WaitTillDone(struct Unknown WorldContextObject, struct Unknown LatentInfo, int32_t& Result_); // Function LowEntryExtendedStandardLibrary.LowEntryLatentActionInteger.WaitTillDone(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x107CA30>
	char IsDone(); // Function LowEntryExtendedStandardLibrary.LowEntryLatentActionInteger.IsDone(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x107C450>
	void GetResult(int32_t& Result_); // Function LowEntryExtendedStandardLibrary.LowEntryLatentActionInteger.GetResult(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x107BFD0>
	void Done(int32_t Result_); // Function LowEntryExtendedStandardLibrary.LowEntryLatentActionInteger.Done(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x107B960>
};

// Class LowEntryExtendedStandardLibrary.LowEntryLatentActionNone
class ULowEntryLatentActionNone : public Object {

public:

	char Finished : 0; // 0x28 (1)
	int32_t KeepAliveCount; // 0x2C (4)

	void WaitTillDone(struct Unknown WorldContextObject, struct Unknown LatentInfo); // Function LowEntryExtendedStandardLibrary.LowEntryLatentActionNone.WaitTillDone(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x107CB70>
	char IsDone(); // Function LowEntryExtendedStandardLibrary.LowEntryLatentActionNone.IsDone(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x107C450>
	void Done(); // Function LowEntryExtendedStandardLibrary.LowEntryLatentActionNone.Done(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x107B9E0>
};

// Class LowEntryExtendedStandardLibrary.LowEntryLatentActionObject
class ULowEntryLatentActionObject : public Object {

public:

	char Finished : 0; // 0x28 (1)
	struct Unknown Result; // 0x30 (8)
	int32_t KeepAliveCount; // 0x38 (4)

	void WaitTillDone(struct Unknown WorldContextObject, struct Unknown LatentInfo, struct Unknown& Result_); // Function LowEntryExtendedStandardLibrary.LowEntryLatentActionObject.WaitTillDone(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x107CC60>
	char IsDone(); // Function LowEntryExtendedStandardLibrary.LowEntryLatentActionObject.IsDone(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x107C450>
	void GetResult(struct Unknown& Result_); // Function LowEntryExtendedStandardLibrary.LowEntryLatentActionObject.GetResult(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x107C060>
	void Done(struct Unknown Result_); // Function LowEntryExtendedStandardLibrary.LowEntryLatentActionObject.Done(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x107BA00>
};

// Class LowEntryExtendedStandardLibrary.LowEntryLatentActionString
class ULowEntryLatentActionString : public Object {

public:

	char Finished : 0; // 0x28 (1)
	struct FString Result; // 0x30 (16)
	int32_t KeepAliveCount; // 0x40 (4)

	void WaitTillDone(struct Unknown WorldContextObject, struct Unknown LatentInfo, struct FString& Result_); // Function LowEntryExtendedStandardLibrary.LowEntryLatentActionString.WaitTillDone(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x107CDA0>
	char IsDone(); // Function LowEntryExtendedStandardLibrary.LowEntryLatentActionString.IsDone(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x107C450>
	void GetResult(struct FString& Result_); // Function LowEntryExtendedStandardLibrary.LowEntryLatentActionString.GetResult(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x107C0F0>
	void Done(struct FString Result_); // Function LowEntryExtendedStandardLibrary.LowEntryLatentActionString.Done(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x107BA80>
};

// Class LowEntryExtendedStandardLibrary.LowEntryLong
class ULowEntryLong : public Object {

public:

	struct TArray<Unknown> Bytes; // 0x28 (16)

	void SetBytes(struct TArray<Unknown>& ByteArray, int32_t Index, int32_t Length); // Function LowEntryExtendedStandardLibrary.LowEntryLong.SetBytes(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1077930>
	void LongBytes_Subtract(struct Unknown Value); // Function LowEntryExtendedStandardLibrary.LowEntryLong.LongBytes_Subtract(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x107C6B0>
	char LongBytes_LessThan(struct Unknown Value); // Function LowEntryExtendedStandardLibrary.LowEntryLong.LongBytes_LessThan(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x107C620>
	char LongBytes_GreaterThan(struct Unknown Value); // Function LowEntryExtendedStandardLibrary.LowEntryLong.LongBytes_GreaterThan(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x107C590>
	char LongBytes_Equals(struct Unknown Value); // Function LowEntryExtendedStandardLibrary.LowEntryLong.LongBytes_Equals(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x107C500>
	void LongBytes_Add(struct Unknown Value); // Function LowEntryExtendedStandardLibrary.LowEntryLong.LongBytes_Add(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x107C480>
	void Integer_Subtract(int32_t Value); // Function LowEntryExtendedStandardLibrary.LowEntryLong.Integer_Subtract(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x107C3D0>
	char Integer_LessThan(int32_t Value); // Function LowEntryExtendedStandardLibrary.LowEntryLong.Integer_LessThan(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x107C340>
	char Integer_GreaterThan(int32_t Value); // Function LowEntryExtendedStandardLibrary.LowEntryLong.Integer_GreaterThan(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x107C2B0>
	char Integer_Equals(int32_t Value); // Function LowEntryExtendedStandardLibrary.LowEntryLong.Integer_Equals(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x107C220>
	void Integer_Add(int32_t Value); // Function LowEntryExtendedStandardLibrary.LowEntryLong.Integer_Add(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x107C1A0>
	struct TArray<Unknown> GetBytes(); // Function LowEntryExtendedStandardLibrary.LowEntryLong.GetBytes(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x106FE40>
	char Float_LessThan(float Value); // Function LowEntryExtendedStandardLibrary.LowEntryLong.Float_LessThan(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x107BD20>
	char Float_GreaterThan(float Value); // Function LowEntryExtendedStandardLibrary.LowEntryLong.Float_GreaterThan(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x107BC90>
	char DoubleBytes_LessThan(struct Unknown Value); // Function LowEntryExtendedStandardLibrary.LowEntryLong.DoubleBytes_LessThan(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x107BC00>
	char DoubleBytes_GreaterThan(struct Unknown Value); // Function LowEntryExtendedStandardLibrary.LowEntryLong.DoubleBytes_GreaterThan(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x107BB70>
	struct Unknown CreateClone(); // Function LowEntryExtendedStandardLibrary.LowEntryLong.CreateClone(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x107B820>
	struct FString CastToString(); // Function LowEntryExtendedStandardLibrary.LowEntryLong.CastToString(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x107B7A0>
	struct Unknown CastToDoubleBytes(); // Function LowEntryExtendedStandardLibrary.LowEntryLong.CastToDoubleBytes(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x107B770>
};

// Class LowEntryExtendedStandardLibrary.LowEntryParsedHashcash
class ULowEntryParsedHashcash : public Object {

public:

	char Valid : 0; // 0x28 (1)
	struct FString Resource; // 0x30 (16)
	struct Unknown Date; // 0x40 (8)
	int32_t Bits; // 0x48 (4)

	struct FString ToString(); // Function LowEntryExtendedStandardLibrary.LowEntryParsedHashcash.ToString(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x107C730>
	struct FString GetResource(); // Function LowEntryExtendedStandardLibrary.LowEntryParsedHashcash.GetResource(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x107BE20>
	struct Unknown GetDate(); // Function LowEntryExtendedStandardLibrary.LowEntryParsedHashcash.GetDate(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x107BDE0>
	int32_t GetBits(); // Function LowEntryExtendedStandardLibrary.LowEntryParsedHashcash.GetBits(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x107BDB0>
};

// ScriptStruct LowEntryExtendedStandardLibrary.LowEntryRegexCaptureGroup
struct FLowEntryRegexCaptureGroup {
	int32_t CaptureGroupNumber; // 0x0 (4)
	int32_t BeginIndex; // 0x4 (4)
	int32_t EndIndex; // 0x8 (4)
	struct FString Match; // 0x10 (16)
};

// ScriptStruct LowEntryExtendedStandardLibrary.LowEntryRegexMatch
struct FLowEntryRegexMatch {
	int32_t MatchNumber; // 0x0 (4)
	int32_t BeginIndex; // 0x4 (4)
	int32_t EndIndex; // 0x8 (4)
	struct FString Match; // 0x10 (16)
	struct TArray<Unknown> CaptureGroups; // 0x20 (16)
};

