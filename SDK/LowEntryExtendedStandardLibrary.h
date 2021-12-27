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

// Enum LowEntryExtendedStandardLibrary.ELowEntrySplitScreenTypeTwoPlayers
enum class ELowEntrySplitScreenTypeTwoPlayers : uint8_t {
	ELowEntrySplitScreenTypeTwoPlayers = 0,
	ELowEntrySplitScreenTypeTwoPlayers = 1,
	ELowEntrySplitScreenTypeTwoPlayers = 2,
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

// Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.SetPosition
inline void ULowEntryBitDataReader::SetPosition(int32_t Position_) {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.SetPosition");

	struct SetPosition_Params {
		int32_t Position_;
	}; SetPosition_Params Params;

	Params.Position_ = Position_;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.Reset
inline void ULowEntryBitDataReader::Reset() {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.Reset");

	struct Reset_Params {
		
	}; Reset_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.Remaining
inline int32_t ULowEntryBitDataReader::Remaining() {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.Remaining");

	struct Remaining_Params {
		
		int32_t ReturnValue;

	}; Remaining_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetStringUtf8Array
inline struct TArray<Unknown> ULowEntryBitDataReader::GetStringUtf8Array() {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetStringUtf8Array");

	struct GetStringUtf8Array_Params {
		
		struct TArray<Unknown> ReturnValue;

	}; GetStringUtf8Array_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetStringUtf8
inline struct FString ULowEntryBitDataReader::GetStringUtf8() {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetStringUtf8");

	struct GetStringUtf8_Params {
		
		struct FString ReturnValue;

	}; GetStringUtf8_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetPositiveInteger3Array
inline struct TArray<Unknown> ULowEntryBitDataReader::GetPositiveInteger3Array() {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetPositiveInteger3Array");

	struct GetPositiveInteger3Array_Params {
		
		struct TArray<Unknown> ReturnValue;

	}; GetPositiveInteger3Array_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetPositiveInteger3
inline int32_t ULowEntryBitDataReader::GetPositiveInteger3() {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetPositiveInteger3");

	struct GetPositiveInteger3_Params {
		
		int32_t ReturnValue;

	}; GetPositiveInteger3_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetPositiveInteger2Array
inline struct TArray<Unknown> ULowEntryBitDataReader::GetPositiveInteger2Array() {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetPositiveInteger2Array");

	struct GetPositiveInteger2Array_Params {
		
		struct TArray<Unknown> ReturnValue;

	}; GetPositiveInteger2Array_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetPositiveInteger2
inline int32_t ULowEntryBitDataReader::GetPositiveInteger2() {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetPositiveInteger2");

	struct GetPositiveInteger2_Params {
		
		int32_t ReturnValue;

	}; GetPositiveInteger2_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetPositiveInteger1Array
inline struct TArray<Unknown> ULowEntryBitDataReader::GetPositiveInteger1Array() {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetPositiveInteger1Array");

	struct GetPositiveInteger1Array_Params {
		
		struct TArray<Unknown> ReturnValue;

	}; GetPositiveInteger1Array_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetPositiveInteger1
inline int32_t ULowEntryBitDataReader::GetPositiveInteger1() {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetPositiveInteger1");

	struct GetPositiveInteger1_Params {
		
		int32_t ReturnValue;

	}; GetPositiveInteger1_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetPosition
inline int32_t ULowEntryBitDataReader::GetPosition() {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetPosition");

	struct GetPosition_Params {
		
		int32_t ReturnValue;

	}; GetPosition_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetLongBytesArray
inline struct TArray<Unknown> ULowEntryBitDataReader::GetLongBytesArray() {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetLongBytesArray");

	struct GetLongBytesArray_Params {
		
		struct TArray<Unknown> ReturnValue;

	}; GetLongBytesArray_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetLongBytes
inline struct Unknown ULowEntryBitDataReader::GetLongBytes() {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetLongBytes");

	struct GetLongBytes_Params {
		
		struct Unknown ReturnValue;

	}; GetLongBytes_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetIntegerMostSignificantBits
inline int32_t ULowEntryBitDataReader::GetIntegerMostSignificantBits(int32_t BitCount) {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetIntegerMostSignificantBits");

	struct GetIntegerMostSignificantBits_Params {
		int32_t BitCount;
		int32_t ReturnValue;

	}; GetIntegerMostSignificantBits_Params Params;

	Params.BitCount = BitCount;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetIntegerLeastSignificantBits
inline int32_t ULowEntryBitDataReader::GetIntegerLeastSignificantBits(int32_t BitCount) {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetIntegerLeastSignificantBits");

	struct GetIntegerLeastSignificantBits_Params {
		int32_t BitCount;
		int32_t ReturnValue;

	}; GetIntegerLeastSignificantBits_Params Params;

	Params.BitCount = BitCount;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetIntegerArrayMostSignificantBits
inline struct TArray<Unknown> ULowEntryBitDataReader::GetIntegerArrayMostSignificantBits(int32_t BitCount) {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetIntegerArrayMostSignificantBits");

	struct GetIntegerArrayMostSignificantBits_Params {
		int32_t BitCount;
		struct TArray<Unknown> ReturnValue;

	}; GetIntegerArrayMostSignificantBits_Params Params;

	Params.BitCount = BitCount;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetIntegerArrayLeastSignificantBits
inline struct TArray<Unknown> ULowEntryBitDataReader::GetIntegerArrayLeastSignificantBits(int32_t BitCount) {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetIntegerArrayLeastSignificantBits");

	struct GetIntegerArrayLeastSignificantBits_Params {
		int32_t BitCount;
		struct TArray<Unknown> ReturnValue;

	}; GetIntegerArrayLeastSignificantBits_Params Params;

	Params.BitCount = BitCount;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetIntegerArray
inline struct TArray<Unknown> ULowEntryBitDataReader::GetIntegerArray() {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetIntegerArray");

	struct GetIntegerArray_Params {
		
		struct TArray<Unknown> ReturnValue;

	}; GetIntegerArray_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetInteger
inline int32_t ULowEntryBitDataReader::GetInteger() {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetInteger");

	struct GetInteger_Params {
		
		int32_t ReturnValue;

	}; GetInteger_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetFloatArray
inline struct TArray<Unknown> ULowEntryBitDataReader::GetFloatArray() {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetFloatArray");

	struct GetFloatArray_Params {
		
		struct TArray<Unknown> ReturnValue;

	}; GetFloatArray_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetFloat
inline float ULowEntryBitDataReader::GetFloat() {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetFloat");

	struct GetFloat_Params {
		
		float ReturnValue;

	}; GetFloat_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetDoubleBytesArray
inline struct TArray<Unknown> ULowEntryBitDataReader::GetDoubleBytesArray() {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetDoubleBytesArray");

	struct GetDoubleBytesArray_Params {
		
		struct TArray<Unknown> ReturnValue;

	}; GetDoubleBytesArray_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetDoubleBytes
inline struct Unknown ULowEntryBitDataReader::GetDoubleBytes() {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetDoubleBytes");

	struct GetDoubleBytes_Params {
		
		struct Unknown ReturnValue;

	}; GetDoubleBytes_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetClone
inline struct Unknown ULowEntryBitDataReader::GetClone() {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetClone");

	struct GetClone_Params {
		
		struct Unknown ReturnValue;

	}; GetClone_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetByteMostSignificantBits
inline char ULowEntryBitDataReader::GetByteMostSignificantBits(int32_t BitCount) {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetByteMostSignificantBits");

	struct GetByteMostSignificantBits_Params {
		int32_t BitCount;
		char ReturnValue;

	}; GetByteMostSignificantBits_Params Params;

	Params.BitCount = BitCount;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetByteLeastSignificantBits
inline char ULowEntryBitDataReader::GetByteLeastSignificantBits(int32_t BitCount) {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetByteLeastSignificantBits");

	struct GetByteLeastSignificantBits_Params {
		int32_t BitCount;
		char ReturnValue;

	}; GetByteLeastSignificantBits_Params Params;

	Params.BitCount = BitCount;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetByteArrayMostSignificantBits
inline struct TArray<Unknown> ULowEntryBitDataReader::GetByteArrayMostSignificantBits(int32_t BitCount) {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetByteArrayMostSignificantBits");

	struct GetByteArrayMostSignificantBits_Params {
		int32_t BitCount;
		struct TArray<Unknown> ReturnValue;

	}; GetByteArrayMostSignificantBits_Params Params;

	Params.BitCount = BitCount;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetByteArrayLeastSignificantBits
inline struct TArray<Unknown> ULowEntryBitDataReader::GetByteArrayLeastSignificantBits(int32_t BitCount) {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetByteArrayLeastSignificantBits");

	struct GetByteArrayLeastSignificantBits_Params {
		int32_t BitCount;
		struct TArray<Unknown> ReturnValue;

	}; GetByteArrayLeastSignificantBits_Params Params;

	Params.BitCount = BitCount;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetByteArray
inline struct TArray<Unknown> ULowEntryBitDataReader::GetByteArray() {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetByteArray");

	struct GetByteArray_Params {
		
		struct TArray<Unknown> ReturnValue;

	}; GetByteArray_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetByte
inline char ULowEntryBitDataReader::GetByte() {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetByte");

	struct GetByte_Params {
		
		char ReturnValue;

	}; GetByte_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetBooleanArray
inline struct TArray<Unknown> ULowEntryBitDataReader::GetBooleanArray() {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetBooleanArray");

	struct GetBooleanArray_Params {
		
		struct TArray<Unknown> ReturnValue;

	}; GetBooleanArray_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetBoolean
inline char ULowEntryBitDataReader::GetBoolean() {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetBoolean");

	struct GetBoolean_Params {
		
		char ReturnValue;

	}; GetBoolean_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetBitArray
inline struct TArray<Unknown> ULowEntryBitDataReader::GetBitArray() {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetBitArray");

	struct GetBitArray_Params {
		
		struct TArray<Unknown> ReturnValue;

	}; GetBitArray_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetBit
inline char ULowEntryBitDataReader::GetBit() {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetBit");

	struct GetBit_Params {
		
		char ReturnValue;

	}; GetBit_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.Empty
inline void ULowEntryBitDataReader::Empty() {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.Empty");

	struct Empty_Params {
		
	}; Empty_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddStringUtf8Array
inline void ULowEntryBitDataWriter::AddStringUtf8Array(struct TArray<Unknown>& Value) {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddStringUtf8Array");

	struct AddStringUtf8Array_Params {
		struct TArray<Unknown>& Value;
	}; AddStringUtf8Array_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Value = Params.Value;

}

// Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddStringUtf8
inline void ULowEntryBitDataWriter::AddStringUtf8(struct FString Value) {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddStringUtf8");

	struct AddStringUtf8_Params {
		struct FString Value;
	}; AddStringUtf8_Params Params;

	Params.Value = Value;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddPositiveInteger3Array
inline void ULowEntryBitDataWriter::AddPositiveInteger3Array(struct TArray<Unknown>& Value) {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddPositiveInteger3Array");

	struct AddPositiveInteger3Array_Params {
		struct TArray<Unknown>& Value;
	}; AddPositiveInteger3Array_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Value = Params.Value;

}

// Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddPositiveInteger3
inline void ULowEntryBitDataWriter::AddPositiveInteger3(int32_t Value) {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddPositiveInteger3");

	struct AddPositiveInteger3_Params {
		int32_t Value;
	}; AddPositiveInteger3_Params Params;

	Params.Value = Value;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddPositiveInteger2Array
inline void ULowEntryBitDataWriter::AddPositiveInteger2Array(struct TArray<Unknown>& Value) {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddPositiveInteger2Array");

	struct AddPositiveInteger2Array_Params {
		struct TArray<Unknown>& Value;
	}; AddPositiveInteger2Array_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Value = Params.Value;

}

// Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddPositiveInteger2
inline void ULowEntryBitDataWriter::AddPositiveInteger2(int32_t Value) {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddPositiveInteger2");

	struct AddPositiveInteger2_Params {
		int32_t Value;
	}; AddPositiveInteger2_Params Params;

	Params.Value = Value;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddPositiveInteger1Array
inline void ULowEntryBitDataWriter::AddPositiveInteger1Array(struct TArray<Unknown>& Value) {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddPositiveInteger1Array");

	struct AddPositiveInteger1Array_Params {
		struct TArray<Unknown>& Value;
	}; AddPositiveInteger1Array_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Value = Params.Value;

}

// Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddPositiveInteger1
inline void ULowEntryBitDataWriter::AddPositiveInteger1(int32_t Value) {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddPositiveInteger1");

	struct AddPositiveInteger1_Params {
		int32_t Value;
	}; AddPositiveInteger1_Params Params;

	Params.Value = Value;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddLongBytesArray
inline void ULowEntryBitDataWriter::AddLongBytesArray(struct TArray<Unknown>& Value) {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddLongBytesArray");

	struct AddLongBytesArray_Params {
		struct TArray<Unknown>& Value;
	}; AddLongBytesArray_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Value = Params.Value;

}

// Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddLongBytes
inline void ULowEntryBitDataWriter::AddLongBytes(struct Unknown Value) {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddLongBytes");

	struct AddLongBytes_Params {
		struct Unknown Value;
	}; AddLongBytes_Params Params;

	Params.Value = Value;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddIntegerMostSignificantBits
inline void ULowEntryBitDataWriter::AddIntegerMostSignificantBits(int32_t Value, int32_t BitCount) {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddIntegerMostSignificantBits");

	struct AddIntegerMostSignificantBits_Params {
		int32_t Value;
		int32_t BitCount;
	}; AddIntegerMostSignificantBits_Params Params;

	Params.Value = Value;
	Params.BitCount = BitCount;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddIntegerLeastSignificantBits
inline void ULowEntryBitDataWriter::AddIntegerLeastSignificantBits(int32_t Value, int32_t BitCount) {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddIntegerLeastSignificantBits");

	struct AddIntegerLeastSignificantBits_Params {
		int32_t Value;
		int32_t BitCount;
	}; AddIntegerLeastSignificantBits_Params Params;

	Params.Value = Value;
	Params.BitCount = BitCount;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddIntegerArrayMostSignificantBits
inline void ULowEntryBitDataWriter::AddIntegerArrayMostSignificantBits(struct TArray<Unknown>& Value, int32_t BitCount) {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddIntegerArrayMostSignificantBits");

	struct AddIntegerArrayMostSignificantBits_Params {
		struct TArray<Unknown>& Value;
		int32_t BitCount;
	}; AddIntegerArrayMostSignificantBits_Params Params;

	Params.BitCount = BitCount;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Value = Params.Value;

}

// Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddIntegerArrayLeastSignificantBits
inline void ULowEntryBitDataWriter::AddIntegerArrayLeastSignificantBits(struct TArray<Unknown>& Value, int32_t BitCount) {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddIntegerArrayLeastSignificantBits");

	struct AddIntegerArrayLeastSignificantBits_Params {
		struct TArray<Unknown>& Value;
		int32_t BitCount;
	}; AddIntegerArrayLeastSignificantBits_Params Params;

	Params.BitCount = BitCount;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Value = Params.Value;

}

// Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddIntegerArray
inline void ULowEntryBitDataWriter::AddIntegerArray(struct TArray<Unknown>& Value) {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddIntegerArray");

	struct AddIntegerArray_Params {
		struct TArray<Unknown>& Value;
	}; AddIntegerArray_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Value = Params.Value;

}

// Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddInteger
inline void ULowEntryBitDataWriter::AddInteger(int32_t Value) {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddInteger");

	struct AddInteger_Params {
		int32_t Value;
	}; AddInteger_Params Params;

	Params.Value = Value;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddFloatArray
inline void ULowEntryBitDataWriter::AddFloatArray(struct TArray<Unknown>& Value) {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddFloatArray");

	struct AddFloatArray_Params {
		struct TArray<Unknown>& Value;
	}; AddFloatArray_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Value = Params.Value;

}

// Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddFloat
inline void ULowEntryBitDataWriter::AddFloat(float Value) {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddFloat");

	struct AddFloat_Params {
		float Value;
	}; AddFloat_Params Params;

	Params.Value = Value;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddDoubleBytesArray
inline void ULowEntryBitDataWriter::AddDoubleBytesArray(struct TArray<Unknown>& Value) {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddDoubleBytesArray");

	struct AddDoubleBytesArray_Params {
		struct TArray<Unknown>& Value;
	}; AddDoubleBytesArray_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Value = Params.Value;

}

// Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddDoubleBytes
inline void ULowEntryBitDataWriter::AddDoubleBytes(struct Unknown Value) {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddDoubleBytes");

	struct AddDoubleBytes_Params {
		struct Unknown Value;
	}; AddDoubleBytes_Params Params;

	Params.Value = Value;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddByteMostSignificantBits
inline void ULowEntryBitDataWriter::AddByteMostSignificantBits(char Value, int32_t BitCount) {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddByteMostSignificantBits");

	struct AddByteMostSignificantBits_Params {
		char Value;
		int32_t BitCount;
	}; AddByteMostSignificantBits_Params Params;

	Params.Value = Value;
	Params.BitCount = BitCount;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddByteLeastSignificantBits
inline void ULowEntryBitDataWriter::AddByteLeastSignificantBits(char Value, int32_t BitCount) {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddByteLeastSignificantBits");

	struct AddByteLeastSignificantBits_Params {
		char Value;
		int32_t BitCount;
	}; AddByteLeastSignificantBits_Params Params;

	Params.Value = Value;
	Params.BitCount = BitCount;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddByteArrayMostSignificantBits
inline void ULowEntryBitDataWriter::AddByteArrayMostSignificantBits(struct TArray<Unknown>& Value, int32_t BitCount) {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddByteArrayMostSignificantBits");

	struct AddByteArrayMostSignificantBits_Params {
		struct TArray<Unknown>& Value;
		int32_t BitCount;
	}; AddByteArrayMostSignificantBits_Params Params;

	Params.BitCount = BitCount;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Value = Params.Value;

}

// Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddByteArrayLeastSignificantBits
inline void ULowEntryBitDataWriter::AddByteArrayLeastSignificantBits(struct TArray<Unknown>& Value, int32_t BitCount) {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddByteArrayLeastSignificantBits");

	struct AddByteArrayLeastSignificantBits_Params {
		struct TArray<Unknown>& Value;
		int32_t BitCount;
	}; AddByteArrayLeastSignificantBits_Params Params;

	Params.BitCount = BitCount;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Value = Params.Value;

}

// Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddByteArray
inline void ULowEntryBitDataWriter::AddByteArray(struct TArray<Unknown>& Value) {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddByteArray");

	struct AddByteArray_Params {
		struct TArray<Unknown>& Value;
	}; AddByteArray_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Value = Params.Value;

}

// Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddByte
inline void ULowEntryBitDataWriter::AddByte(char Value) {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddByte");

	struct AddByte_Params {
		char Value;
	}; AddByte_Params Params;

	Params.Value = Value;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddBooleanArray
inline void ULowEntryBitDataWriter::AddBooleanArray(struct TArray<Unknown>& Value) {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddBooleanArray");

	struct AddBooleanArray_Params {
		struct TArray<Unknown>& Value;
	}; AddBooleanArray_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Value = Params.Value;

}

// Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddBoolean
inline void ULowEntryBitDataWriter::AddBoolean(char Value) {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddBoolean");

	struct AddBoolean_Params {
		char Value;
	}; AddBoolean_Params Params;

	Params.Value = Value;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddBitArray
inline void ULowEntryBitDataWriter::AddBitArray(struct TArray<Unknown>& Value) {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddBitArray");

	struct AddBitArray_Params {
		struct TArray<Unknown>& Value;
	}; AddBitArray_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Value = Params.Value;

}

// Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddBit
inline void ULowEntryBitDataWriter::AddBit(char Value) {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddBit");

	struct AddBit_Params {
		char Value;
	}; AddBit_Params Params;

	Params.Value = Value;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.SetPosition
inline void ULowEntryByteDataReader::SetPosition(int32_t Position_) {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.SetPosition");

	struct SetPosition_Params {
		int32_t Position_;
	}; SetPosition_Params Params;

	Params.Position_ = Position_;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.Reset
inline void ULowEntryByteDataReader::Reset() {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.Reset");

	struct Reset_Params {
		
	}; Reset_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.Remaining
inline int32_t ULowEntryByteDataReader::Remaining() {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.Remaining");

	struct Remaining_Params {
		
		int32_t ReturnValue;

	}; Remaining_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetStringUtf8Array
inline struct TArray<Unknown> ULowEntryByteDataReader::GetStringUtf8Array() {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetStringUtf8Array");

	struct GetStringUtf8Array_Params {
		
		struct TArray<Unknown> ReturnValue;

	}; GetStringUtf8Array_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetStringUtf8
inline struct FString ULowEntryByteDataReader::GetStringUtf8() {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetStringUtf8");

	struct GetStringUtf8_Params {
		
		struct FString ReturnValue;

	}; GetStringUtf8_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetPositiveInteger3Array
inline struct TArray<Unknown> ULowEntryByteDataReader::GetPositiveInteger3Array() {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetPositiveInteger3Array");

	struct GetPositiveInteger3Array_Params {
		
		struct TArray<Unknown> ReturnValue;

	}; GetPositiveInteger3Array_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetPositiveInteger3
inline int32_t ULowEntryByteDataReader::GetPositiveInteger3() {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetPositiveInteger3");

	struct GetPositiveInteger3_Params {
		
		int32_t ReturnValue;

	}; GetPositiveInteger3_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetPositiveInteger2Array
inline struct TArray<Unknown> ULowEntryByteDataReader::GetPositiveInteger2Array() {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetPositiveInteger2Array");

	struct GetPositiveInteger2Array_Params {
		
		struct TArray<Unknown> ReturnValue;

	}; GetPositiveInteger2Array_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetPositiveInteger2
inline int32_t ULowEntryByteDataReader::GetPositiveInteger2() {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetPositiveInteger2");

	struct GetPositiveInteger2_Params {
		
		int32_t ReturnValue;

	}; GetPositiveInteger2_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetPositiveInteger1Array
inline struct TArray<Unknown> ULowEntryByteDataReader::GetPositiveInteger1Array() {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetPositiveInteger1Array");

	struct GetPositiveInteger1Array_Params {
		
		struct TArray<Unknown> ReturnValue;

	}; GetPositiveInteger1Array_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetPositiveInteger1
inline int32_t ULowEntryByteDataReader::GetPositiveInteger1() {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetPositiveInteger1");

	struct GetPositiveInteger1_Params {
		
		int32_t ReturnValue;

	}; GetPositiveInteger1_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetPosition
inline int32_t ULowEntryByteDataReader::GetPosition() {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetPosition");

	struct GetPosition_Params {
		
		int32_t ReturnValue;

	}; GetPosition_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetLongBytesArray
inline struct TArray<Unknown> ULowEntryByteDataReader::GetLongBytesArray() {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetLongBytesArray");

	struct GetLongBytesArray_Params {
		
		struct TArray<Unknown> ReturnValue;

	}; GetLongBytesArray_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetLongBytes
inline struct Unknown ULowEntryByteDataReader::GetLongBytes() {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetLongBytes");

	struct GetLongBytes_Params {
		
		struct Unknown ReturnValue;

	}; GetLongBytes_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetIntegerArray
inline struct TArray<Unknown> ULowEntryByteDataReader::GetIntegerArray() {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetIntegerArray");

	struct GetIntegerArray_Params {
		
		struct TArray<Unknown> ReturnValue;

	}; GetIntegerArray_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetInteger
inline int32_t ULowEntryByteDataReader::GetInteger() {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetInteger");

	struct GetInteger_Params {
		
		int32_t ReturnValue;

	}; GetInteger_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetFloatArray
inline struct TArray<Unknown> ULowEntryByteDataReader::GetFloatArray() {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetFloatArray");

	struct GetFloatArray_Params {
		
		struct TArray<Unknown> ReturnValue;

	}; GetFloatArray_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetFloat
inline float ULowEntryByteDataReader::GetFloat() {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetFloat");

	struct GetFloat_Params {
		
		float ReturnValue;

	}; GetFloat_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetDoubleBytesArray
inline struct TArray<Unknown> ULowEntryByteDataReader::GetDoubleBytesArray() {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetDoubleBytesArray");

	struct GetDoubleBytesArray_Params {
		
		struct TArray<Unknown> ReturnValue;

	}; GetDoubleBytesArray_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetDoubleBytes
inline struct Unknown ULowEntryByteDataReader::GetDoubleBytes() {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetDoubleBytes");

	struct GetDoubleBytes_Params {
		
		struct Unknown ReturnValue;

	}; GetDoubleBytes_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetClone
inline struct Unknown ULowEntryByteDataReader::GetClone() {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetClone");

	struct GetClone_Params {
		
		struct Unknown ReturnValue;

	}; GetClone_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetByteArray
inline struct TArray<Unknown> ULowEntryByteDataReader::GetByteArray() {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetByteArray");

	struct GetByteArray_Params {
		
		struct TArray<Unknown> ReturnValue;

	}; GetByteArray_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetByte
inline char ULowEntryByteDataReader::GetByte() {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetByte");

	struct GetByte_Params {
		
		char ReturnValue;

	}; GetByte_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetBooleanArray
inline struct TArray<Unknown> ULowEntryByteDataReader::GetBooleanArray() {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetBooleanArray");

	struct GetBooleanArray_Params {
		
		struct TArray<Unknown> ReturnValue;

	}; GetBooleanArray_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetBoolean
inline char ULowEntryByteDataReader::GetBoolean() {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetBoolean");

	struct GetBoolean_Params {
		
		char ReturnValue;

	}; GetBoolean_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.Empty
inline void ULowEntryByteDataReader::Empty() {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.Empty");

	struct Empty_Params {
		
	}; Empty_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddStringUtf8Array
inline void ULowEntryByteDataWriter::AddStringUtf8Array(struct TArray<Unknown>& Value) {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddStringUtf8Array");

	struct AddStringUtf8Array_Params {
		struct TArray<Unknown>& Value;
	}; AddStringUtf8Array_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Value = Params.Value;

}

// Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddStringUtf8
inline void ULowEntryByteDataWriter::AddStringUtf8(struct FString Value) {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddStringUtf8");

	struct AddStringUtf8_Params {
		struct FString Value;
	}; AddStringUtf8_Params Params;

	Params.Value = Value;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddPositiveInteger3Array
inline void ULowEntryByteDataWriter::AddPositiveInteger3Array(struct TArray<Unknown>& Value) {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddPositiveInteger3Array");

	struct AddPositiveInteger3Array_Params {
		struct TArray<Unknown>& Value;
	}; AddPositiveInteger3Array_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Value = Params.Value;

}

// Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddPositiveInteger3
inline void ULowEntryByteDataWriter::AddPositiveInteger3(int32_t Value) {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddPositiveInteger3");

	struct AddPositiveInteger3_Params {
		int32_t Value;
	}; AddPositiveInteger3_Params Params;

	Params.Value = Value;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddPositiveInteger2Array
inline void ULowEntryByteDataWriter::AddPositiveInteger2Array(struct TArray<Unknown>& Value) {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddPositiveInteger2Array");

	struct AddPositiveInteger2Array_Params {
		struct TArray<Unknown>& Value;
	}; AddPositiveInteger2Array_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Value = Params.Value;

}

// Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddPositiveInteger2
inline void ULowEntryByteDataWriter::AddPositiveInteger2(int32_t Value) {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddPositiveInteger2");

	struct AddPositiveInteger2_Params {
		int32_t Value;
	}; AddPositiveInteger2_Params Params;

	Params.Value = Value;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddPositiveInteger1Array
inline void ULowEntryByteDataWriter::AddPositiveInteger1Array(struct TArray<Unknown>& Value) {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddPositiveInteger1Array");

	struct AddPositiveInteger1Array_Params {
		struct TArray<Unknown>& Value;
	}; AddPositiveInteger1Array_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Value = Params.Value;

}

// Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddPositiveInteger1
inline void ULowEntryByteDataWriter::AddPositiveInteger1(int32_t Value) {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddPositiveInteger1");

	struct AddPositiveInteger1_Params {
		int32_t Value;
	}; AddPositiveInteger1_Params Params;

	Params.Value = Value;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddLongBytesArray
inline void ULowEntryByteDataWriter::AddLongBytesArray(struct TArray<Unknown>& Value) {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddLongBytesArray");

	struct AddLongBytesArray_Params {
		struct TArray<Unknown>& Value;
	}; AddLongBytesArray_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Value = Params.Value;

}

// Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddLongBytes
inline void ULowEntryByteDataWriter::AddLongBytes(struct Unknown Value) {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddLongBytes");

	struct AddLongBytes_Params {
		struct Unknown Value;
	}; AddLongBytes_Params Params;

	Params.Value = Value;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddIntegerArray
inline void ULowEntryByteDataWriter::AddIntegerArray(struct TArray<Unknown>& Value) {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddIntegerArray");

	struct AddIntegerArray_Params {
		struct TArray<Unknown>& Value;
	}; AddIntegerArray_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Value = Params.Value;

}

// Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddInteger
inline void ULowEntryByteDataWriter::AddInteger(int32_t Value) {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddInteger");

	struct AddInteger_Params {
		int32_t Value;
	}; AddInteger_Params Params;

	Params.Value = Value;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddFloatArray
inline void ULowEntryByteDataWriter::AddFloatArray(struct TArray<Unknown>& Value) {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddFloatArray");

	struct AddFloatArray_Params {
		struct TArray<Unknown>& Value;
	}; AddFloatArray_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Value = Params.Value;

}

// Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddFloat
inline void ULowEntryByteDataWriter::AddFloat(float Value) {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddFloat");

	struct AddFloat_Params {
		float Value;
	}; AddFloat_Params Params;

	Params.Value = Value;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddDoubleBytesArray
inline void ULowEntryByteDataWriter::AddDoubleBytesArray(struct TArray<Unknown>& Value) {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddDoubleBytesArray");

	struct AddDoubleBytesArray_Params {
		struct TArray<Unknown>& Value;
	}; AddDoubleBytesArray_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Value = Params.Value;

}

// Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddDoubleBytes
inline void ULowEntryByteDataWriter::AddDoubleBytes(struct Unknown Value) {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddDoubleBytes");

	struct AddDoubleBytes_Params {
		struct Unknown Value;
	}; AddDoubleBytes_Params Params;

	Params.Value = Value;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddByteArray
inline void ULowEntryByteDataWriter::AddByteArray(struct TArray<Unknown>& Value) {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddByteArray");

	struct AddByteArray_Params {
		struct TArray<Unknown>& Value;
	}; AddByteArray_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Value = Params.Value;

}

// Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddByte
inline void ULowEntryByteDataWriter::AddByte(char Value) {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddByte");

	struct AddByte_Params {
		char Value;
	}; AddByte_Params Params;

	Params.Value = Value;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddBooleanArray
inline void ULowEntryByteDataWriter::AddBooleanArray(struct TArray<Unknown>& Value) {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddBooleanArray");

	struct AddBooleanArray_Params {
		struct TArray<Unknown>& Value;
	}; AddBooleanArray_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Value = Params.Value;

}

// Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddBoolean
inline void ULowEntryByteDataWriter::AddBoolean(char Value) {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddBoolean");

	struct AddBoolean_Params {
		char Value;
	}; AddBoolean_Params Params;

	Params.Value = Value;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function LowEntryExtendedStandardLibrary.LowEntryDouble.SetBytes
inline void ULowEntryDouble::SetBytes(struct TArray<Unknown>& ByteArray, int32_t Index, int32_t Length) {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryDouble.SetBytes");

	struct SetBytes_Params {
		struct TArray<Unknown>& ByteArray;
		int32_t Index;
		int32_t Length;
	}; SetBytes_Params Params;

	Params.Index = Index;
	Params.Length = Length;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	ByteArray = Params.ByteArray;

}

// Function LowEntryExtendedStandardLibrary.LowEntryDouble.LongBytes_LessThan
inline char ULowEntryDouble::LongBytes_LessThan(struct Unknown Value) {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryDouble.LongBytes_LessThan");

	struct LongBytes_LessThan_Params {
		struct Unknown Value;
		char ReturnValue;

	}; LongBytes_LessThan_Params Params;

	Params.Value = Value;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function LowEntryExtendedStandardLibrary.LowEntryDouble.LongBytes_GreaterThan
inline char ULowEntryDouble::LongBytes_GreaterThan(struct Unknown Value) {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryDouble.LongBytes_GreaterThan");

	struct LongBytes_GreaterThan_Params {
		struct Unknown Value;
		char ReturnValue;

	}; LongBytes_GreaterThan_Params Params;

	Params.Value = Value;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function LowEntryExtendedStandardLibrary.LowEntryDouble.Integer_LessThan
inline char ULowEntryDouble::Integer_LessThan(int32_t Value) {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryDouble.Integer_LessThan");

	struct Integer_LessThan_Params {
		int32_t Value;
		char ReturnValue;

	}; Integer_LessThan_Params Params;

	Params.Value = Value;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function LowEntryExtendedStandardLibrary.LowEntryDouble.Integer_GreaterThan
inline char ULowEntryDouble::Integer_GreaterThan(int32_t Value) {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryDouble.Integer_GreaterThan");

	struct Integer_GreaterThan_Params {
		int32_t Value;
		char ReturnValue;

	}; Integer_GreaterThan_Params Params;

	Params.Value = Value;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function LowEntryExtendedStandardLibrary.LowEntryDouble.GetBytes
inline struct TArray<Unknown> ULowEntryDouble::GetBytes() {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryDouble.GetBytes");

	struct GetBytes_Params {
		
		struct TArray<Unknown> ReturnValue;

	}; GetBytes_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function LowEntryExtendedStandardLibrary.LowEntryDouble.Float_Subtract
inline void ULowEntryDouble::Float_Subtract(float Value) {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryDouble.Float_Subtract");

	struct Float_Subtract_Params {
		float Value;
	}; Float_Subtract_Params Params;

	Params.Value = Value;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function LowEntryExtendedStandardLibrary.LowEntryDouble.Float_LessThan
inline char ULowEntryDouble::Float_LessThan(float Value) {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryDouble.Float_LessThan");

	struct Float_LessThan_Params {
		float Value;
		char ReturnValue;

	}; Float_LessThan_Params Params;

	Params.Value = Value;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function LowEntryExtendedStandardLibrary.LowEntryDouble.Float_GreaterThan
inline char ULowEntryDouble::Float_GreaterThan(float Value) {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryDouble.Float_GreaterThan");

	struct Float_GreaterThan_Params {
		float Value;
		char ReturnValue;

	}; Float_GreaterThan_Params Params;

	Params.Value = Value;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function LowEntryExtendedStandardLibrary.LowEntryDouble.Float_Equals
inline char ULowEntryDouble::Float_Equals(float Value) {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryDouble.Float_Equals");

	struct Float_Equals_Params {
		float Value;
		char ReturnValue;

	}; Float_Equals_Params Params;

	Params.Value = Value;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function LowEntryExtendedStandardLibrary.LowEntryDouble.Float_Add
inline void ULowEntryDouble::Float_Add(float Value) {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryDouble.Float_Add");

	struct Float_Add_Params {
		float Value;
	}; Float_Add_Params Params;

	Params.Value = Value;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function LowEntryExtendedStandardLibrary.LowEntryDouble.DoubleBytes_Subtract
inline void ULowEntryDouble::DoubleBytes_Subtract(struct Unknown Value) {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryDouble.DoubleBytes_Subtract");

	struct DoubleBytes_Subtract_Params {
		struct Unknown Value;
	}; DoubleBytes_Subtract_Params Params;

	Params.Value = Value;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function LowEntryExtendedStandardLibrary.LowEntryDouble.DoubleBytes_LessThan
inline char ULowEntryDouble::DoubleBytes_LessThan(struct Unknown Value) {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryDouble.DoubleBytes_LessThan");

	struct DoubleBytes_LessThan_Params {
		struct Unknown Value;
		char ReturnValue;

	}; DoubleBytes_LessThan_Params Params;

	Params.Value = Value;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function LowEntryExtendedStandardLibrary.LowEntryDouble.DoubleBytes_GreaterThan
inline char ULowEntryDouble::DoubleBytes_GreaterThan(struct Unknown Value) {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryDouble.DoubleBytes_GreaterThan");

	struct DoubleBytes_GreaterThan_Params {
		struct Unknown Value;
		char ReturnValue;

	}; DoubleBytes_GreaterThan_Params Params;

	Params.Value = Value;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function LowEntryExtendedStandardLibrary.LowEntryDouble.DoubleBytes_Equals
inline char ULowEntryDouble::DoubleBytes_Equals(struct Unknown Value) {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryDouble.DoubleBytes_Equals");

	struct DoubleBytes_Equals_Params {
		struct Unknown Value;
		char ReturnValue;

	}; DoubleBytes_Equals_Params Params;

	Params.Value = Value;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function LowEntryExtendedStandardLibrary.LowEntryDouble.DoubleBytes_Add
inline void ULowEntryDouble::DoubleBytes_Add(struct Unknown Value) {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryDouble.DoubleBytes_Add");

	struct DoubleBytes_Add_Params {
		struct Unknown Value;
	}; DoubleBytes_Add_Params Params;

	Params.Value = Value;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function LowEntryExtendedStandardLibrary.LowEntryDouble.CreateClone
inline struct Unknown ULowEntryDouble::CreateClone() {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryDouble.CreateClone");

	struct CreateClone_Params {
		
		struct Unknown ReturnValue;

	}; CreateClone_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function LowEntryExtendedStandardLibrary.LowEntryDouble.CastToString
inline struct FString ULowEntryDouble::CastToString(int32_t MinFractionalDigits) {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryDouble.CastToString");

	struct CastToString_Params {
		int32_t MinFractionalDigits;
		struct FString ReturnValue;

	}; CastToString_Params Params;

	Params.MinFractionalDigits = MinFractionalDigits;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function LowEntryExtendedStandardLibrary.LowEntryDouble.CastToLongBytes
inline struct Unknown ULowEntryDouble::CastToLongBytes() {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryDouble.CastToLongBytes");

	struct CastToLongBytes_Params {
		
		struct Unknown ReturnValue;

	}; CastToLongBytes_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function LowEntryExtendedStandardLibrary.LowEntryLatentActionBoolean.WaitTillDone
inline void ULowEntryLatentActionBoolean::WaitTillDone(struct Unknown WorldContextObject, struct Unknown LatentInfo, char& Result_) {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryLatentActionBoolean.WaitTillDone");

	struct WaitTillDone_Params {
		struct Unknown WorldContextObject;
		struct Unknown LatentInfo;
		char& Result_;
	}; WaitTillDone_Params Params;

	Params.WorldContextObject = WorldContextObject;
	Params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Result_ = Params.Result_;

}

// Function LowEntryExtendedStandardLibrary.LowEntryLatentActionBoolean.IsDone
inline char ULowEntryLatentActionBoolean::IsDone() {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryLatentActionBoolean.IsDone");

	struct IsDone_Params {
		
		char ReturnValue;

	}; IsDone_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function LowEntryExtendedStandardLibrary.LowEntryLatentActionBoolean.GetResult
inline void ULowEntryLatentActionBoolean::GetResult(char& Result_) {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryLatentActionBoolean.GetResult");

	struct GetResult_Params {
		char& Result_;
	}; GetResult_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Result_ = Params.Result_;

}

// Function LowEntryExtendedStandardLibrary.LowEntryLatentActionBoolean.Done
inline void ULowEntryLatentActionBoolean::Done(char Result_) {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryLatentActionBoolean.Done");

	struct Done_Params {
		char Result_;
	}; Done_Params Params;

	Params.Result_ = Result_;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function LowEntryExtendedStandardLibrary.LowEntryLatentActionFloat.WaitTillDone
inline void ULowEntryLatentActionFloat::WaitTillDone(struct Unknown WorldContextObject, struct Unknown LatentInfo, float& Result_) {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryLatentActionFloat.WaitTillDone");

	struct WaitTillDone_Params {
		struct Unknown WorldContextObject;
		struct Unknown LatentInfo;
		float& Result_;
	}; WaitTillDone_Params Params;

	Params.WorldContextObject = WorldContextObject;
	Params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Result_ = Params.Result_;

}

// Function LowEntryExtendedStandardLibrary.LowEntryLatentActionFloat.IsDone
inline char ULowEntryLatentActionFloat::IsDone() {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryLatentActionFloat.IsDone");

	struct IsDone_Params {
		
		char ReturnValue;

	}; IsDone_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function LowEntryExtendedStandardLibrary.LowEntryLatentActionFloat.GetResult
inline void ULowEntryLatentActionFloat::GetResult(float& Result_) {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryLatentActionFloat.GetResult");

	struct GetResult_Params {
		float& Result_;
	}; GetResult_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Result_ = Params.Result_;

}

// Function LowEntryExtendedStandardLibrary.LowEntryLatentActionFloat.Done
inline void ULowEntryLatentActionFloat::Done(float Result_) {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryLatentActionFloat.Done");

	struct Done_Params {
		float Result_;
	}; Done_Params Params;

	Params.Result_ = Result_;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function LowEntryExtendedStandardLibrary.LowEntryLatentActionInteger.WaitTillDone
inline void ULowEntryLatentActionInteger::WaitTillDone(struct Unknown WorldContextObject, struct Unknown LatentInfo, int32_t& Result_) {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryLatentActionInteger.WaitTillDone");

	struct WaitTillDone_Params {
		struct Unknown WorldContextObject;
		struct Unknown LatentInfo;
		int32_t& Result_;
	}; WaitTillDone_Params Params;

	Params.WorldContextObject = WorldContextObject;
	Params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Result_ = Params.Result_;

}

// Function LowEntryExtendedStandardLibrary.LowEntryLatentActionInteger.IsDone
inline char ULowEntryLatentActionInteger::IsDone() {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryLatentActionInteger.IsDone");

	struct IsDone_Params {
		
		char ReturnValue;

	}; IsDone_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function LowEntryExtendedStandardLibrary.LowEntryLatentActionInteger.GetResult
inline void ULowEntryLatentActionInteger::GetResult(int32_t& Result_) {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryLatentActionInteger.GetResult");

	struct GetResult_Params {
		int32_t& Result_;
	}; GetResult_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Result_ = Params.Result_;

}

// Function LowEntryExtendedStandardLibrary.LowEntryLatentActionInteger.Done
inline void ULowEntryLatentActionInteger::Done(int32_t Result_) {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryLatentActionInteger.Done");

	struct Done_Params {
		int32_t Result_;
	}; Done_Params Params;

	Params.Result_ = Result_;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function LowEntryExtendedStandardLibrary.LowEntryLatentActionNone.WaitTillDone
inline void ULowEntryLatentActionNone::WaitTillDone(struct Unknown WorldContextObject, struct Unknown LatentInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryLatentActionNone.WaitTillDone");

	struct WaitTillDone_Params {
		struct Unknown WorldContextObject;
		struct Unknown LatentInfo;
	}; WaitTillDone_Params Params;

	Params.WorldContextObject = WorldContextObject;
	Params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function LowEntryExtendedStandardLibrary.LowEntryLatentActionNone.IsDone
inline char ULowEntryLatentActionNone::IsDone() {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryLatentActionNone.IsDone");

	struct IsDone_Params {
		
		char ReturnValue;

	}; IsDone_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function LowEntryExtendedStandardLibrary.LowEntryLatentActionNone.Done
inline void ULowEntryLatentActionNone::Done() {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryLatentActionNone.Done");

	struct Done_Params {
		
	}; Done_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function LowEntryExtendedStandardLibrary.LowEntryLatentActionObject.WaitTillDone
inline void ULowEntryLatentActionObject::WaitTillDone(struct Unknown WorldContextObject, struct Unknown LatentInfo, struct Unknown& Result_) {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryLatentActionObject.WaitTillDone");

	struct WaitTillDone_Params {
		struct Unknown WorldContextObject;
		struct Unknown LatentInfo;
		struct Unknown& Result_;
	}; WaitTillDone_Params Params;

	Params.WorldContextObject = WorldContextObject;
	Params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Result_ = Params.Result_;

}

// Function LowEntryExtendedStandardLibrary.LowEntryLatentActionObject.IsDone
inline char ULowEntryLatentActionObject::IsDone() {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryLatentActionObject.IsDone");

	struct IsDone_Params {
		
		char ReturnValue;

	}; IsDone_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function LowEntryExtendedStandardLibrary.LowEntryLatentActionObject.GetResult
inline void ULowEntryLatentActionObject::GetResult(struct Unknown& Result_) {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryLatentActionObject.GetResult");

	struct GetResult_Params {
		struct Unknown& Result_;
	}; GetResult_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Result_ = Params.Result_;

}

// Function LowEntryExtendedStandardLibrary.LowEntryLatentActionObject.Done
inline void ULowEntryLatentActionObject::Done(struct Unknown Result_) {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryLatentActionObject.Done");

	struct Done_Params {
		struct Unknown Result_;
	}; Done_Params Params;

	Params.Result_ = Result_;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function LowEntryExtendedStandardLibrary.LowEntryLatentActionString.WaitTillDone
inline void ULowEntryLatentActionString::WaitTillDone(struct Unknown WorldContextObject, struct Unknown LatentInfo, struct FString& Result_) {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryLatentActionString.WaitTillDone");

	struct WaitTillDone_Params {
		struct Unknown WorldContextObject;
		struct Unknown LatentInfo;
		struct FString& Result_;
	}; WaitTillDone_Params Params;

	Params.WorldContextObject = WorldContextObject;
	Params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Result_ = Params.Result_;

}

// Function LowEntryExtendedStandardLibrary.LowEntryLatentActionString.IsDone
inline char ULowEntryLatentActionString::IsDone() {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryLatentActionString.IsDone");

	struct IsDone_Params {
		
		char ReturnValue;

	}; IsDone_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function LowEntryExtendedStandardLibrary.LowEntryLatentActionString.GetResult
inline void ULowEntryLatentActionString::GetResult(struct FString& Result_) {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryLatentActionString.GetResult");

	struct GetResult_Params {
		struct FString& Result_;
	}; GetResult_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Result_ = Params.Result_;

}

// Function LowEntryExtendedStandardLibrary.LowEntryLatentActionString.Done
inline void ULowEntryLatentActionString::Done(struct FString Result_) {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryLatentActionString.Done");

	struct Done_Params {
		struct FString Result_;
	}; Done_Params Params;

	Params.Result_ = Result_;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function LowEntryExtendedStandardLibrary.LowEntryLong.SetBytes
inline void ULowEntryLong::SetBytes(struct TArray<Unknown>& ByteArray, int32_t Index, int32_t Length) {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryLong.SetBytes");

	struct SetBytes_Params {
		struct TArray<Unknown>& ByteArray;
		int32_t Index;
		int32_t Length;
	}; SetBytes_Params Params;

	Params.Index = Index;
	Params.Length = Length;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	ByteArray = Params.ByteArray;

}

// Function LowEntryExtendedStandardLibrary.LowEntryLong.LongBytes_Subtract
inline void ULowEntryLong::LongBytes_Subtract(struct Unknown Value) {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryLong.LongBytes_Subtract");

	struct LongBytes_Subtract_Params {
		struct Unknown Value;
	}; LongBytes_Subtract_Params Params;

	Params.Value = Value;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function LowEntryExtendedStandardLibrary.LowEntryLong.LongBytes_LessThan
inline char ULowEntryLong::LongBytes_LessThan(struct Unknown Value) {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryLong.LongBytes_LessThan");

	struct LongBytes_LessThan_Params {
		struct Unknown Value;
		char ReturnValue;

	}; LongBytes_LessThan_Params Params;

	Params.Value = Value;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function LowEntryExtendedStandardLibrary.LowEntryLong.LongBytes_GreaterThan
inline char ULowEntryLong::LongBytes_GreaterThan(struct Unknown Value) {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryLong.LongBytes_GreaterThan");

	struct LongBytes_GreaterThan_Params {
		struct Unknown Value;
		char ReturnValue;

	}; LongBytes_GreaterThan_Params Params;

	Params.Value = Value;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function LowEntryExtendedStandardLibrary.LowEntryLong.LongBytes_Equals
inline char ULowEntryLong::LongBytes_Equals(struct Unknown Value) {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryLong.LongBytes_Equals");

	struct LongBytes_Equals_Params {
		struct Unknown Value;
		char ReturnValue;

	}; LongBytes_Equals_Params Params;

	Params.Value = Value;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function LowEntryExtendedStandardLibrary.LowEntryLong.LongBytes_Add
inline void ULowEntryLong::LongBytes_Add(struct Unknown Value) {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryLong.LongBytes_Add");

	struct LongBytes_Add_Params {
		struct Unknown Value;
	}; LongBytes_Add_Params Params;

	Params.Value = Value;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function LowEntryExtendedStandardLibrary.LowEntryLong.Integer_Subtract
inline void ULowEntryLong::Integer_Subtract(int32_t Value) {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryLong.Integer_Subtract");

	struct Integer_Subtract_Params {
		int32_t Value;
	}; Integer_Subtract_Params Params;

	Params.Value = Value;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function LowEntryExtendedStandardLibrary.LowEntryLong.Integer_LessThan
inline char ULowEntryLong::Integer_LessThan(int32_t Value) {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryLong.Integer_LessThan");

	struct Integer_LessThan_Params {
		int32_t Value;
		char ReturnValue;

	}; Integer_LessThan_Params Params;

	Params.Value = Value;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function LowEntryExtendedStandardLibrary.LowEntryLong.Integer_GreaterThan
inline char ULowEntryLong::Integer_GreaterThan(int32_t Value) {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryLong.Integer_GreaterThan");

	struct Integer_GreaterThan_Params {
		int32_t Value;
		char ReturnValue;

	}; Integer_GreaterThan_Params Params;

	Params.Value = Value;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function LowEntryExtendedStandardLibrary.LowEntryLong.Integer_Equals
inline char ULowEntryLong::Integer_Equals(int32_t Value) {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryLong.Integer_Equals");

	struct Integer_Equals_Params {
		int32_t Value;
		char ReturnValue;

	}; Integer_Equals_Params Params;

	Params.Value = Value;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function LowEntryExtendedStandardLibrary.LowEntryLong.Integer_Add
inline void ULowEntryLong::Integer_Add(int32_t Value) {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryLong.Integer_Add");

	struct Integer_Add_Params {
		int32_t Value;
	}; Integer_Add_Params Params;

	Params.Value = Value;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function LowEntryExtendedStandardLibrary.LowEntryLong.GetBytes
inline struct TArray<Unknown> ULowEntryLong::GetBytes() {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryLong.GetBytes");

	struct GetBytes_Params {
		
		struct TArray<Unknown> ReturnValue;

	}; GetBytes_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function LowEntryExtendedStandardLibrary.LowEntryLong.Float_LessThan
inline char ULowEntryLong::Float_LessThan(float Value) {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryLong.Float_LessThan");

	struct Float_LessThan_Params {
		float Value;
		char ReturnValue;

	}; Float_LessThan_Params Params;

	Params.Value = Value;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function LowEntryExtendedStandardLibrary.LowEntryLong.Float_GreaterThan
inline char ULowEntryLong::Float_GreaterThan(float Value) {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryLong.Float_GreaterThan");

	struct Float_GreaterThan_Params {
		float Value;
		char ReturnValue;

	}; Float_GreaterThan_Params Params;

	Params.Value = Value;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function LowEntryExtendedStandardLibrary.LowEntryLong.DoubleBytes_LessThan
inline char ULowEntryLong::DoubleBytes_LessThan(struct Unknown Value) {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryLong.DoubleBytes_LessThan");

	struct DoubleBytes_LessThan_Params {
		struct Unknown Value;
		char ReturnValue;

	}; DoubleBytes_LessThan_Params Params;

	Params.Value = Value;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function LowEntryExtendedStandardLibrary.LowEntryLong.DoubleBytes_GreaterThan
inline char ULowEntryLong::DoubleBytes_GreaterThan(struct Unknown Value) {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryLong.DoubleBytes_GreaterThan");

	struct DoubleBytes_GreaterThan_Params {
		struct Unknown Value;
		char ReturnValue;

	}; DoubleBytes_GreaterThan_Params Params;

	Params.Value = Value;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function LowEntryExtendedStandardLibrary.LowEntryLong.CreateClone
inline struct Unknown ULowEntryLong::CreateClone() {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryLong.CreateClone");

	struct CreateClone_Params {
		
		struct Unknown ReturnValue;

	}; CreateClone_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function LowEntryExtendedStandardLibrary.LowEntryLong.CastToString
inline struct FString ULowEntryLong::CastToString() {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryLong.CastToString");

	struct CastToString_Params {
		
		struct FString ReturnValue;

	}; CastToString_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function LowEntryExtendedStandardLibrary.LowEntryLong.CastToDoubleBytes
inline struct Unknown ULowEntryLong::CastToDoubleBytes() {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryLong.CastToDoubleBytes");

	struct CastToDoubleBytes_Params {
		
		struct Unknown ReturnValue;

	}; CastToDoubleBytes_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function LowEntryExtendedStandardLibrary.LowEntryParsedHashcash.ToString
inline struct FString ULowEntryParsedHashcash::ToString() {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryParsedHashcash.ToString");

	struct ToString_Params {
		
		struct FString ReturnValue;

	}; ToString_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function LowEntryExtendedStandardLibrary.LowEntryParsedHashcash.GetResource
inline struct FString ULowEntryParsedHashcash::GetResource() {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryParsedHashcash.GetResource");

	struct GetResource_Params {
		
		struct FString ReturnValue;

	}; GetResource_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function LowEntryExtendedStandardLibrary.LowEntryParsedHashcash.GetDate
inline struct Unknown ULowEntryParsedHashcash::GetDate() {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryParsedHashcash.GetDate");

	struct GetDate_Params {
		
		struct Unknown ReturnValue;

	}; GetDate_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function LowEntryExtendedStandardLibrary.LowEntryParsedHashcash.GetBits
inline int32_t ULowEntryParsedHashcash::GetBits() {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryParsedHashcash.GetBits");

	struct GetBits_Params {
		
		int32_t ReturnValue;

	}; GetBits_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

