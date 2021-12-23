// Enum LowEntryExtendedStandardLibrary.ELowEntryBatteryState
enum class ELowEntryBatteryState : uint8 {
	ELowEntryBatteryState = 0
	ELowEntryBatteryState = 1
	ELowEntryBatteryState = 2
	ELowEntryBatteryState = 3
	ELowEntryBatteryState = 4
	ELowEntryBatteryState = 5
};

// Enum LowEntryExtendedStandardLibrary.ELowEntryExtendedStandardLibrary0to9
enum class ELowEntryExtendedStandardLibrary0to9 : uint8 {
	ELowEntryExtendedStandardLibrary0to = 0
	ELowEntryExtendedStandardLibrary0to = 1
	ELowEntryExtendedStandardLibrary0to = 2
	ELowEntryExtendedStandardLibrary0to = 3
	ELowEntryExtendedStandardLibrary0to = 4
	ELowEntryExtendedStandardLibrary0to = 5
	ELowEntryExtendedStandardLibrary0to = 6
	ELowEntryExtendedStandardLibrary0to = 7
	ELowEntryExtendedStandardLibrary0to = 8
	ELowEntryExtendedStandardLibrary0to = 9
	ELowEntryExtendedStandardLibrary0to = 10
};

// Enum LowEntryExtendedStandardLibrary.ELowEntryExtendedStandardLibrary1to10other
enum class ELowEntryExtendedStandardLibrary1to10other : uint8 {
	ELowEntryExtendedStandardLibrary1to10other = 1
	ELowEntryExtendedStandardLibrary1to10other = 2
	ELowEntryExtendedStandardLibrary1to10other = 3
	ELowEntryExtendedStandardLibrary1to10other = 4
	ELowEntryExtendedStandardLibrary1to10other = 5
	ELowEntryExtendedStandardLibrary1to10other = 6
	ELowEntryExtendedStandardLibrary1to10other = 7
	ELowEntryExtendedStandardLibrary1to10other = 8
	ELowEntryExtendedStandardLibrary1to10other = 9
	ELowEntryExtendedStandardLibrary1to10other = 10
	ELowEntryExtendedStandardLibrary1to10other = 0
	ELowEntryExtendedStandardLibrary1to10other = 11
};

// Enum LowEntryExtendedStandardLibrary.ELowEntryExtendedStandardLibraryTrueOrFalse
enum class ELowEntryExtendedStandardLibraryTrueOrFalse : uint8 {
	ELowEntryExtendedStandardLibraryTrueOrFalse = 0
	ELowEntryExtendedStandardLibraryTrueOrFalse = 1
	ELowEntryExtendedStandardLibraryTrueOrFalse = 2
};

// Enum LowEntryExtendedStandardLibrary.ELowEntryHmacAlgorithm
enum class ELowEntryHmacAlgorithm : uint8 {
	ELowEntryHmacAlgorithm = 0
	ELowEntryHmacAlgorithm = 1
	ELowEntryHmacAlgorithm = 2
	ELowEntryHmacAlgorithm = 3
	ELowEntryHmacAlgorithm = 4
};

// Enum LowEntryExtendedStandardLibrary.ELowEntryImageFormat
enum class ELowEntryImageFormat : uint8 {
	ELowEntryImageFormat = 0
	ELowEntryImageFormat = 1
	ELowEntryImageFormat = 2
	ELowEntryImageFormat = 3
	ELowEntryImageFormat = 4
	ELowEntryImageFormat = 5
	ELowEntryImageFormat = 6
	ELowEntryImageFormat = 7
	ELowEntryImageFormat = 8
};

// Enum LowEntryExtendedStandardLibrary.ELowEntryRGBFormat
enum class ELowEntryRGBFormat : uint8 {
	ELowEntryRGBFormat = 0
	ELowEntryRGBFormat = 1
	ELowEntryRGBFormat = 2
	ELowEntryRGBFormat = 3
	ELowEntryRGBFormat = 4
};

// Enum LowEntryExtendedStandardLibrary.ELowEntrySplitScreenType
enum class ELowEntrySplitScreenType : uint8 {
	ELowEntrySplitScreenType = 0
	ELowEntrySplitScreenType = 1
	ELowEntrySplitScreenType = 2
	ELowEntrySplitScreenType = 3
	ELowEntrySplitScreenType = 4
	ELowEntrySplitScreenType = 5
	ELowEntrySplitScreenType = 6
	ELowEntrySplitScreenType = 7
	ELowEntrySplitScreenType = 8
};

// Enum LowEntryExtendedStandardLibrary.ELowEntrySplitScreenTypeThreePlayers
enum class ELowEntrySplitScreenTypeThreePlayers : uint8 {
	ELowEntrySplitScreenTypeThreePlayers = 0
	ELowEntrySplitScreenTypeThreePlayers = 1
	ELowEntrySplitScreenTypeThreePlayers = 2
};

// Enum LowEntryExtendedStandardLibrary.ELowEntrySplitScreenTypeTwoPlayers
enum class ELowEntrySplitScreenTypeTwoPlayers : uint8 {
	ELowEntrySplitScreenTypeTwoPlayers = 0
	ELowEntrySplitScreenTypeTwoPlayers = 1
	ELowEntrySplitScreenTypeTwoPlayers = 2
};

// Class LowEntryExtendedStandardLibrary.LowEntryBitDataEntry
struct ULowEntryBitDataEntry : Object {
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
struct ULowEntryBitDataReader : Object {
	struct TArray<Unknown> Bytes; // 0x28 (16)
	int32_t Position; // 0x38 (4)
	char CurrentByte; // 0x3C (1)
	int32_t CurrentBytePosition; // 0x40 (4)

	void SetPosition(int32_t Position_); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.SetPosition(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1061040>
	void Reset(); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.Reset(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1061020>
	int32_t Remaining(); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.Remaining(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1060FF0>
	struct TArray<Unknown> GetStringUtf8Array(); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetStringUtf8Array(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1060F10>
	struct FString GetStringUtf8(); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetStringUtf8(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1060E90>
	struct TArray<Unknown> GetPositiveInteger3Array(); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetPositiveInteger3Array(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1060E10>
	int32_t GetPositiveInteger3(); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetPositiveInteger3(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1060DE0>
	struct TArray<Unknown> GetPositiveInteger2Array(); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetPositiveInteger2Array(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1060D60>
	int32_t GetPositiveInteger2(); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetPositiveInteger2(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1060D30>
	struct TArray<Unknown> GetPositiveInteger1Array(); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetPositiveInteger1Array(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1060CB0>
	int32_t GetPositiveInteger1(); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetPositiveInteger1(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1060C80>
	int32_t GetPosition(); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetPosition(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1060C50>
	struct TArray<Unknown> GetLongBytesArray(); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetLongBytesArray(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1060BD0>
	struct Unknown GetLongBytes(); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetLongBytes(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1060BA0>
	int32_t GetIntegerMostSignificantBits(int32_t BitCount); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetIntegerMostSignificantBits(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1060B10>
	int32_t GetIntegerLeastSignificantBits(int32_t BitCount); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetIntegerLeastSignificantBits(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1060A80>
	struct TArray<Unknown> GetIntegerArrayMostSignificantBits(int32_t BitCount); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetIntegerArrayMostSignificantBits(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x10609A0>
	struct TArray<Unknown> GetIntegerArrayLeastSignificantBits(int32_t BitCount); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetIntegerArrayLeastSignificantBits(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x10608C0>
	struct TArray<Unknown> GetIntegerArray(); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetIntegerArray(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1060810>
	int32_t GetInteger(); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetInteger(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1060890>
	struct TArray<Unknown> GetFloatArray(); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetFloatArray(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1060810>
	float GetFloat(); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetFloat(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x10607E0>
	struct TArray<Unknown> GetDoubleBytesArray(); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetDoubleBytesArray(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1060760>
	struct Unknown GetDoubleBytes(); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetDoubleBytes(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1060730>
	struct Unknown GetClone(); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetClone(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1060700>
	char GetByteMostSignificantBits(int32_t BitCount); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetByteMostSignificantBits(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1060670>
	char GetByteLeastSignificantBits(int32_t BitCount); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetByteLeastSignificantBits(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x10605E0>
	struct TArray<Unknown> GetByteArrayMostSignificantBits(int32_t BitCount); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetByteArrayMostSignificantBits(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1060500>
	struct TArray<Unknown> GetByteArrayLeastSignificantBits(int32_t BitCount); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetByteArrayLeastSignificantBits(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1060420>
	struct TArray<Unknown> GetByteArray(); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetByteArray(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x10603A0>
	char GetByte(); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetByte(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1060370>
	struct TArray<Unknown> GetBooleanArray(); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetBooleanArray(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x10602F0>
	char GetBoolean(); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetBoolean(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x10602C0>
	struct TArray<Unknown> GetBitArray(); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetBitArray(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x10602F0>
	char GetBit(); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetBit(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x10602C0>
	void Empty(); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.Empty(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x10602A0>
};

// Class LowEntryExtendedStandardLibrary.LowEntryBitDataWriter
struct ULowEntryBitDataWriter : Object {
	struct TArray<Unknown> Bytes; // 0x28 (16)
	char CurrentByte; // 0x38 (1)
	int32_t CurrentBytePosition; // 0x3C (4)

	void AddStringUtf8Array(struct TArray<Unknown>& Value); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddStringUtf8Array(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x10601D0>
	void AddStringUtf8(struct FString Value); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddStringUtf8(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1060130>
	void AddPositiveInteger3Array(struct TArray<Unknown>& Value); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddPositiveInteger3Array(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1060080>
	void AddPositiveInteger3(int32_t Value); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddPositiveInteger3(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1060000>
	void AddPositiveInteger2Array(struct TArray<Unknown>& Value); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddPositiveInteger2Array(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x105FF50>
	void AddPositiveInteger2(int32_t Value); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddPositiveInteger2(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x105FED0>
	void AddPositiveInteger1Array(struct TArray<Unknown>& Value); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddPositiveInteger1Array(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x105FE20>
	void AddPositiveInteger1(int32_t Value); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddPositiveInteger1(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x105FDA0>
	void AddLongBytesArray(struct TArray<Unknown>& Value); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddLongBytesArray(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x105F710>
	void AddLongBytes(struct Unknown Value); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddLongBytes(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x105F690>
	void AddIntegerMostSignificantBits(int32_t Value, int32_t BitCount); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddIntegerMostSignificantBits(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x105FCE0>
	void AddIntegerLeastSignificantBits(int32_t Value, int32_t BitCount); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddIntegerLeastSignificantBits(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x105FC20>
	void AddIntegerArrayMostSignificantBits(struct TArray<Unknown>& Value, int32_t BitCount); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddIntegerArrayMostSignificantBits(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x105FB20>
	void AddIntegerArrayLeastSignificantBits(struct TArray<Unknown>& Value, int32_t BitCount); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddIntegerArrayLeastSignificantBits(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x105FA20>
	void AddIntegerArray(struct TArray<Unknown>& Value); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddIntegerArray(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x105F970>
	void AddInteger(int32_t Value); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddInteger(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x105F8F0>
	void AddFloatArray(struct TArray<Unknown>& Value); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddFloatArray(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x105F840>
	void AddFloat(float Value); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddFloat(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x105F7C0>
	void AddDoubleBytesArray(struct TArray<Unknown>& Value); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddDoubleBytesArray(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x105F710>
	void AddDoubleBytes(struct Unknown Value); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddDoubleBytes(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x105F690>
	void AddByteMostSignificantBits(char Value, int32_t BitCount); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddByteMostSignificantBits(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x105F5D0>
	void AddByteLeastSignificantBits(char Value, int32_t BitCount); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddByteLeastSignificantBits(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x105F510>
	void AddByteArrayMostSignificantBits(struct TArray<Unknown>& Value, int32_t BitCount); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddByteArrayMostSignificantBits(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x105F410>
	void AddByteArrayLeastSignificantBits(struct TArray<Unknown>& Value, int32_t BitCount); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddByteArrayLeastSignificantBits(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x105F310>
	void AddByteArray(struct TArray<Unknown>& Value); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddByteArray(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x105F260>
	void AddByte(char Value); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddByte(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x105F1E0>
	void AddBooleanArray(struct TArray<Unknown>& Value); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddBooleanArray(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x105F130>
	void AddBoolean(char Value); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddBoolean(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x105F0A0>
	void AddBitArray(struct TArray<Unknown>& Value); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddBitArray(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x105F130>
	void AddBit(char Value); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddBit(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x105F0A0>
};

// Class LowEntryExtendedStandardLibrary.LowEntryByteArray
struct ULowEntryByteArray : Object {
	struct TArray<Unknown> ByteArray; // 0x28 (16)
};

// Class LowEntryExtendedStandardLibrary.LowEntryByteDataEntry
struct ULowEntryByteDataEntry : Object {
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
struct ULowEntryByteDataReader : Object {
	struct TArray<Unknown> Bytes; // 0x28 (16)
	int32_t Position; // 0x38 (4)

	void SetPosition(int32_t Position_); // Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.SetPosition(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x10768B0>
	void Reset(); // Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.Reset(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1075600>
	int32_t Remaining(); // Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.Remaining(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1075160>
	struct TArray<Unknown> GetStringUtf8Array(); // Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetStringUtf8Array(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x106F980>
	struct FString GetStringUtf8(); // Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetStringUtf8(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x106F900>
	struct TArray<Unknown> GetPositiveInteger3Array(); // Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetPositiveInteger3Array(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x106F4A0>
	int32_t GetPositiveInteger3(); // Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetPositiveInteger3(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x106F470>
	struct TArray<Unknown> GetPositiveInteger2Array(); // Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetPositiveInteger2Array(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x106F3F0>
	int32_t GetPositiveInteger2(); // Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetPositiveInteger2(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x106F3C0>
	struct TArray<Unknown> GetPositiveInteger1Array(); // Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetPositiveInteger1Array(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x106F340>
	int32_t GetPositiveInteger1(); // Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetPositiveInteger1(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x106F310>
	int32_t GetPosition(); // Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetPosition(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x106F2E0>
	struct TArray<Unknown> GetLongBytesArray(); // Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetLongBytesArray(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x106F000>
	struct Unknown GetLongBytes(); // Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetLongBytes(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x106EFD0>
	struct TArray<Unknown> GetIntegerArray(); // Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetIntegerArray(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x106EE50>
	int32_t GetInteger(); // Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetInteger(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x106EE20>
	struct TArray<Unknown> GetFloatArray(); // Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetFloatArray(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x106ECE0>
	float GetFloat(); // Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetFloat(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x106ECB0>
	struct TArray<Unknown> GetDoubleBytesArray(); // Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetDoubleBytesArray(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x106EC30>
	struct Unknown GetDoubleBytes(); // Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetDoubleBytes(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x106EC00>
	struct Unknown GetClone(); // Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetClone(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x106EBD0>
	struct TArray<Unknown> GetByteArray(); // Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetByteArray(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x106E8A0>
	char GetByte(); // Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetByte(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x106E870>
	struct TArray<Unknown> GetBooleanArray(); // Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetBooleanArray(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x106E7F0>
	char GetBoolean(); // Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetBoolean(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x106E7C0>
	void Empty(); // Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.Empty(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x106D920>
};

// Class LowEntryExtendedStandardLibrary.LowEntryByteDataWriter
struct ULowEntryByteDataWriter : Object {
	struct TArray<Unknown> Bytes; // 0x28 (16)

	void AddStringUtf8Array(struct TArray<Unknown>& Value); // Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddStringUtf8Array(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1066BF0>
	void AddStringUtf8(struct FString Value); // Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddStringUtf8(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1066B50>
	void AddPositiveInteger3Array(struct TArray<Unknown>& Value); // Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddPositiveInteger3Array(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1066AA0>
	void AddPositiveInteger3(int32_t Value); // Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddPositiveInteger3(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1066A20>
	void AddPositiveInteger2Array(struct TArray<Unknown>& Value); // Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddPositiveInteger2Array(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1066970>
	void AddPositiveInteger2(int32_t Value); // Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddPositiveInteger2(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x10668F0>
	void AddPositiveInteger1Array(struct TArray<Unknown>& Value); // Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddPositiveInteger1Array(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1066840>
	void AddPositiveInteger1(int32_t Value); // Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddPositiveInteger1(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x10667C0>
	void AddLongBytesArray(struct TArray<Unknown>& Value); // Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddLongBytesArray(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x10664B0>
	void AddLongBytes(struct Unknown Value); // Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddLongBytes(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1066430>
	void AddIntegerArray(struct TArray<Unknown>& Value); // Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddIntegerArray(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1066710>
	void AddInteger(int32_t Value); // Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddInteger(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1066690>
	void AddFloatArray(struct TArray<Unknown>& Value); // Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddFloatArray(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x10665E0>
	void AddFloat(float Value); // Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddFloat(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1066560>
	void AddDoubleBytesArray(struct TArray<Unknown>& Value); // Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddDoubleBytesArray(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x10664B0>
	void AddDoubleBytes(struct Unknown Value); // Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddDoubleBytes(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1066430>
	void AddByteArray(struct TArray<Unknown>& Value); // Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddByteArray(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1066380>
	void AddByte(char Value); // Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddByte(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1066300>
	void AddBooleanArray(struct TArray<Unknown>& Value); // Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddBooleanArray(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1066250>
	void AddBoolean(char Value); // Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddBoolean(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x10661C0>
};

// Class LowEntryExtendedStandardLibrary.LowEntryDouble
struct ULowEntryDouble : Object {
	struct TArray<Unknown> Bytes; // 0x28 (16)

	void SetBytes(struct TArray<Unknown>& ByteArray, int32_t Index, int32_t Length); // Function LowEntryExtendedStandardLibrary.LowEntryDouble.SetBytes(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1076500>
	char LongBytes_LessThan(struct Unknown Value); // Function LowEntryExtendedStandardLibrary.LowEntryDouble.LongBytes_LessThan(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1072F30>
	char LongBytes_GreaterThan(struct Unknown Value); // Function LowEntryExtendedStandardLibrary.LowEntryDouble.LongBytes_GreaterThan(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1072EA0>
	char Integer_LessThan(int32_t Value); // Function LowEntryExtendedStandardLibrary.LowEntryDouble.Integer_LessThan(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1071BD0>
	char Integer_GreaterThan(int32_t Value); // Function LowEntryExtendedStandardLibrary.LowEntryDouble.Integer_GreaterThan(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1071B40>
	struct TArray<Unknown> GetBytes(); // Function LowEntryExtendedStandardLibrary.LowEntryDouble.GetBytes(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x106EA10>
	void Float_Subtract(float Value); // Function LowEntryExtendedStandardLibrary.LowEntryDouble.Float_Subtract(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x106DF30>
	char Float_LessThan(float Value); // Function LowEntryExtendedStandardLibrary.LowEntryDouble.Float_LessThan(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x106DEA0>
	char Float_GreaterThan(float Value); // Function LowEntryExtendedStandardLibrary.LowEntryDouble.Float_GreaterThan(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x106DE10>
	char Float_Equals(float Value); // Function LowEntryExtendedStandardLibrary.LowEntryDouble.Float_Equals(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x106DD80>
	void Float_Add(float Value); // Function LowEntryExtendedStandardLibrary.LowEntryDouble.Float_Add(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x106DD00>
	void DoubleBytes_Subtract(struct Unknown Value); // Function LowEntryExtendedStandardLibrary.LowEntryDouble.DoubleBytes_Subtract(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x106D870>
	char DoubleBytes_LessThan(struct Unknown Value); // Function LowEntryExtendedStandardLibrary.LowEntryDouble.DoubleBytes_LessThan(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x106D7E0>
	char DoubleBytes_GreaterThan(struct Unknown Value); // Function LowEntryExtendedStandardLibrary.LowEntryDouble.DoubleBytes_GreaterThan(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x106D750>
	char DoubleBytes_Equals(struct Unknown Value); // Function LowEntryExtendedStandardLibrary.LowEntryDouble.DoubleBytes_Equals(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x106D6C0>
	void DoubleBytes_Add(struct Unknown Value); // Function LowEntryExtendedStandardLibrary.LowEntryDouble.DoubleBytes_Add(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x106D640>
	struct Unknown CreateClone(); // Function LowEntryExtendedStandardLibrary.LowEntryDouble.CreateClone(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x106CE00>
	struct FString CastToString(int32_t MinFractionalDigits); // Function LowEntryExtendedStandardLibrary.LowEntryDouble.CastToString(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x106C760>
	struct Unknown CastToLongBytes(); // Function LowEntryExtendedStandardLibrary.LowEntryDouble.CastToLongBytes(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x106C730>
};

// Class LowEntryExtendedStandardLibrary.LowEntryExecutionQueue
struct ULowEntryExecutionQueue : Object {
	int32_t Count; // 0x28 (4)
	char Next : 0; // 0x2C (1)
};

// Class LowEntryExtendedStandardLibrary.LowEntryLatentActionBoolean
struct ULowEntryLatentActionBoolean : Object {
	char Finished : 0; // 0x28 (1)
	char Result : 0; // 0x29 (1)
	int32_t KeepAliveCount; // 0x2C (4)

	void WaitTillDone(struct Unknown WorldContextObject, struct Unknown LatentInfo, char& Result_); // Function LowEntryExtendedStandardLibrary.LowEntryLatentActionBoolean.WaitTillDone(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x107B380>
	char IsDone(); // Function LowEntryExtendedStandardLibrary.LowEntryLatentActionBoolean.IsDone(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x107B020>
	void GetResult(char& Result_); // Function LowEntryExtendedStandardLibrary.LowEntryLatentActionBoolean.GetResult(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x107AA70>
	void Done(char Result_); // Function LowEntryExtendedStandardLibrary.LowEntryLatentActionBoolean.Done(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x107A420>
};

// Class LowEntryExtendedStandardLibrary.LowEntryLatentActionFloat
struct ULowEntryLatentActionFloat : Object {
	char Finished : 0; // 0x28 (1)
	float Result; // 0x2C (4)
	int32_t KeepAliveCount; // 0x30 (4)

	void WaitTillDone(struct Unknown WorldContextObject, struct Unknown LatentInfo, float& Result_); // Function LowEntryExtendedStandardLibrary.LowEntryLatentActionFloat.WaitTillDone(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x107B4C0>
	char IsDone(); // Function LowEntryExtendedStandardLibrary.LowEntryLatentActionFloat.IsDone(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x107B020>
	void GetResult(float& Result_); // Function LowEntryExtendedStandardLibrary.LowEntryLatentActionFloat.GetResult(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x107AB00>
	void Done(float Result_); // Function LowEntryExtendedStandardLibrary.LowEntryLatentActionFloat.Done(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x107A4B0>
};

// Class LowEntryExtendedStandardLibrary.LowEntryLatentActionInteger
struct ULowEntryLatentActionInteger : Object {
	char Finished : 0; // 0x28 (1)
	int32_t Result; // 0x2C (4)
	int32_t KeepAliveCount; // 0x30 (4)

	void WaitTillDone(struct Unknown WorldContextObject, struct Unknown LatentInfo, int32_t& Result_); // Function LowEntryExtendedStandardLibrary.LowEntryLatentActionInteger.WaitTillDone(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x107B600>
	char IsDone(); // Function LowEntryExtendedStandardLibrary.LowEntryLatentActionInteger.IsDone(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x107B020>
	void GetResult(int32_t& Result_); // Function LowEntryExtendedStandardLibrary.LowEntryLatentActionInteger.GetResult(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x107ABA0>
	void Done(int32_t Result_); // Function LowEntryExtendedStandardLibrary.LowEntryLatentActionInteger.Done(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x107A530>
};

// Class LowEntryExtendedStandardLibrary.LowEntryLatentActionNone
struct ULowEntryLatentActionNone : Object {
	char Finished : 0; // 0x28 (1)
	int32_t KeepAliveCount; // 0x2C (4)

	void WaitTillDone(struct Unknown WorldContextObject, struct Unknown LatentInfo); // Function LowEntryExtendedStandardLibrary.LowEntryLatentActionNone.WaitTillDone(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x107B740>
	char IsDone(); // Function LowEntryExtendedStandardLibrary.LowEntryLatentActionNone.IsDone(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x107B020>
	void Done(); // Function LowEntryExtendedStandardLibrary.LowEntryLatentActionNone.Done(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x107A5B0>
};

// Class LowEntryExtendedStandardLibrary.LowEntryLatentActionObject
struct ULowEntryLatentActionObject : Object {
	char Finished : 0; // 0x28 (1)
	struct Unknown Result; // 0x30 (8)
	int32_t KeepAliveCount; // 0x38 (4)

	void WaitTillDone(struct Unknown WorldContextObject, struct Unknown LatentInfo, struct Unknown& Result_); // Function LowEntryExtendedStandardLibrary.LowEntryLatentActionObject.WaitTillDone(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x107B830>
	char IsDone(); // Function LowEntryExtendedStandardLibrary.LowEntryLatentActionObject.IsDone(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x107B020>
	void GetResult(struct Unknown& Result_); // Function LowEntryExtendedStandardLibrary.LowEntryLatentActionObject.GetResult(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x107AC30>
	void Done(struct Unknown Result_); // Function LowEntryExtendedStandardLibrary.LowEntryLatentActionObject.Done(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x107A5D0>
};

// Class LowEntryExtendedStandardLibrary.LowEntryLatentActionString
struct ULowEntryLatentActionString : Object {
	char Finished : 0; // 0x28 (1)
	struct FString Result; // 0x30 (16)
	int32_t KeepAliveCount; // 0x40 (4)

	void WaitTillDone(struct Unknown WorldContextObject, struct Unknown LatentInfo, struct FString& Result_); // Function LowEntryExtendedStandardLibrary.LowEntryLatentActionString.WaitTillDone(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x107B970>
	char IsDone(); // Function LowEntryExtendedStandardLibrary.LowEntryLatentActionString.IsDone(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x107B020>
	void GetResult(struct FString& Result_); // Function LowEntryExtendedStandardLibrary.LowEntryLatentActionString.GetResult(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x107ACC0>
	void Done(struct FString Result_); // Function LowEntryExtendedStandardLibrary.LowEntryLatentActionString.Done(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x107A650>
};

// Class LowEntryExtendedStandardLibrary.LowEntryLong
struct ULowEntryLong : Object {
	struct TArray<Unknown> Bytes; // 0x28 (16)

	void SetBytes(struct TArray<Unknown>& ByteArray, int32_t Index, int32_t Length); // Function LowEntryExtendedStandardLibrary.LowEntryLong.SetBytes(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1076500>
	void LongBytes_Subtract(struct Unknown Value); // Function LowEntryExtendedStandardLibrary.LowEntryLong.LongBytes_Subtract(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x107B280>
	char LongBytes_LessThan(struct Unknown Value); // Function LowEntryExtendedStandardLibrary.LowEntryLong.LongBytes_LessThan(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x107B1F0>
	char LongBytes_GreaterThan(struct Unknown Value); // Function LowEntryExtendedStandardLibrary.LowEntryLong.LongBytes_GreaterThan(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x107B160>
	char LongBytes_Equals(struct Unknown Value); // Function LowEntryExtendedStandardLibrary.LowEntryLong.LongBytes_Equals(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x107B0D0>
	void LongBytes_Add(struct Unknown Value); // Function LowEntryExtendedStandardLibrary.LowEntryLong.LongBytes_Add(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x107B050>
	void Integer_Subtract(int32_t Value); // Function LowEntryExtendedStandardLibrary.LowEntryLong.Integer_Subtract(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x107AFA0>
	char Integer_LessThan(int32_t Value); // Function LowEntryExtendedStandardLibrary.LowEntryLong.Integer_LessThan(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x107AF10>
	char Integer_GreaterThan(int32_t Value); // Function LowEntryExtendedStandardLibrary.LowEntryLong.Integer_GreaterThan(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x107AE80>
	char Integer_Equals(int32_t Value); // Function LowEntryExtendedStandardLibrary.LowEntryLong.Integer_Equals(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x107ADF0>
	void Integer_Add(int32_t Value); // Function LowEntryExtendedStandardLibrary.LowEntryLong.Integer_Add(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x107AD70>
	struct TArray<Unknown> GetBytes(); // Function LowEntryExtendedStandardLibrary.LowEntryLong.GetBytes(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x106EA10>
	char Float_LessThan(float Value); // Function LowEntryExtendedStandardLibrary.LowEntryLong.Float_LessThan(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x107A8F0>
	char Float_GreaterThan(float Value); // Function LowEntryExtendedStandardLibrary.LowEntryLong.Float_GreaterThan(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x107A860>
	char DoubleBytes_LessThan(struct Unknown Value); // Function LowEntryExtendedStandardLibrary.LowEntryLong.DoubleBytes_LessThan(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x107A7D0>
	char DoubleBytes_GreaterThan(struct Unknown Value); // Function LowEntryExtendedStandardLibrary.LowEntryLong.DoubleBytes_GreaterThan(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x107A740>
	struct Unknown CreateClone(); // Function LowEntryExtendedStandardLibrary.LowEntryLong.CreateClone(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x107A3F0>
	struct FString CastToString(); // Function LowEntryExtendedStandardLibrary.LowEntryLong.CastToString(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x107A370>
	struct Unknown CastToDoubleBytes(); // Function LowEntryExtendedStandardLibrary.LowEntryLong.CastToDoubleBytes(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x107A340>
};

// Class LowEntryExtendedStandardLibrary.LowEntryParsedHashcash
struct ULowEntryParsedHashcash : Object {
	char Valid : 0; // 0x28 (1)
	struct FString Resource; // 0x30 (16)
	struct Unknown Date; // 0x40 (8)
	int32_t Bits; // 0x48 (4)

	struct FString ToString(); // Function LowEntryExtendedStandardLibrary.LowEntryParsedHashcash.ToString(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x107B300>
	struct FString GetResource(); // Function LowEntryExtendedStandardLibrary.LowEntryParsedHashcash.GetResource(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x107A9F0>
	struct Unknown GetDate(); // Function LowEntryExtendedStandardLibrary.LowEntryParsedHashcash.GetDate(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x107A9B0>
	int32_t GetBits(); // Function LowEntryExtendedStandardLibrary.LowEntryParsedHashcash.GetBits(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x107A980>
};

