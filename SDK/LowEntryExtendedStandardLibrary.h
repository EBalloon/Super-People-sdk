// Enum LowEntryExtendedStandardLibrary.ELowEntryBatteryState
enum class ELowEntryBatteryState : uint8_t {
	Charging = 0,
	Discharging = 1,
	Full = 2,
	NotCharging = 3,
	Unknown = 4,
	ELowEntryBatteryState_MAX = 5,
};

// Enum LowEntryExtendedStandardLibrary.ELowEntryExtendedStandardLibrary0to9
enum class ELowEntryExtendedStandardLibrary0to9 : uint8_t {
	_0_ = 0,
	_1_ = 1,
	_2_ = 2,
	_3_ = 3,
	_4_ = 4,
	_5_ = 5,
	_6_ = 6,
	_7_ = 7,
	_8_ = 8,
	_9_ = 9,
	_MAX = 10,
};

// Enum LowEntryExtendedStandardLibrary.ELowEntryExtendedStandardLibrary1to10other
enum class ELowEntryExtendedStandardLibrary1to10other : uint8_t {
	_1_ = 1,
	_2_ = 2,
	_3_ = 3,
	_4_ = 4,
	_5_ = 5,
	_6_ = 6,
	_7_ = 7,
	_8_ = 8,
	_9_ = 9,
	_10_ = 10,
	Other = 0,
	ELowEntryExtendedStandardLibrary1to10other_MAX = 11,
};

// Enum LowEntryExtendedStandardLibrary.ELowEntryExtendedStandardLibraryTrueOrFalse
enum class ELowEntryExtendedStandardLibraryTrueOrFalse : uint8_t {
	_True_ = 0,
	_False_ = 1,
	_MAX = 2,
};

// Enum LowEntryExtendedStandardLibrary.ELowEntryHmacAlgorithm
enum class ELowEntryHmacAlgorithm : uint8_t {
	MD5 = 0,
	SHA1 = 1,
	SHA256 = 2,
	SHA512 = 3,
	ELowEntryHmacAlgorithm_MAX = 4,
};

// Enum LowEntryExtendedStandardLibrary.ELowEntryImageFormat
enum class ELowEntryImageFormat : uint8_t {
	Invalid = 0,
	PNG = 1,
	JPEG = 2,
	GrayscaleJPEG = 3,
	BMP = 4,
	ICO = 5,
	EXR = 6,
	ICNS = 7,
	ELowEntryImageFormat_MAX = 8,
};

// Enum LowEntryExtendedStandardLibrary.ELowEntryRGBFormat
enum class ELowEntryRGBFormat : uint8_t {
	Invalid = 0,
	RGBA = 1,
	BGRA = 2,
	Gray = 3,
	ELowEntryRGBFormat_MAX = 4,
};

// Enum LowEntryExtendedStandardLibrary.ELowEntrySplitScreenType
enum class ELowEntrySplitScreenType : uint8_t {
	None = 0,
	TwoPlayer_Horizontal = 1,
	TwoPlayer_Vertical = 2,
	ThreePlayer_FavorTop = 3,
	ThreePlayer_FavorBottom = 4,
	ThreePlayer_Vertical = 5,
	FourPlayer_Grid = 6,
	FourPlayer_Vertical = 7,
	ELowEntrySplitScreenType_MAX = 8,
};

// Enum LowEntryExtendedStandardLibrary.ELowEntrySplitScreenTypeThreePlayers
enum class ELowEntrySplitScreenTypeThreePlayers : uint8_t {
	FavorTop = 0,
	FavorBottom = 1,
	ELowEntrySplitScreenTypeThreePlayers_MAX = 2,
};

// Enum LowEntryExtendedStandardLibrary.ELowEntrySplitScreenTypeTwoPlayers
enum class ELowEntrySplitScreenTypeTwoPlayers : uint8_t {
	Horizontal = 0,
	Vertical = 1,
	ELowEntrySplitScreenTypeTwoPlayers_MAX = 2,
};

// Class LowEntryExtendedStandardLibrary.LowEntryBitDataEntry
class ULowEntryBitDataEntry : public Object {

public:

	char Type; // 0x28 (1)
	char ByteValue; // 0x29 (1)
	int32_t IntegerValue; // 0x2C (4)
	struct ULowEntryLong LongBytesValue; // 0x30 (8)
	float FloatValue; // 0x38 (4)
	struct ULowEntryDouble DoubleBytesValue; // 0x40 (8)
	char BooleanValue : 0; // 0x48 (1)
	struct FString StringUtf8Value; // 0x50 (16)
	struct TArray<char> ByteArrayValue; // 0x60 (16)
	struct TArray<int32_t> IntegerArrayValue; // 0x70 (16)
	struct TArray<struct ULowEntryLong> LongBytesArrayValue; // 0x80 (16)
	struct TArray<float> FloatArrayValue; // 0x90 (16)
	struct TArray<struct ULowEntryDouble> DoubleBytesArrayValue; // 0xA0 (16)
	struct TArray<char> BooleanArrayValue; // 0xB0 (16)
	struct TArray<struct FString> StringUtf8ArrayValue; // 0xC0 (16)
};

// Class LowEntryExtendedStandardLibrary.LowEntryBitDataReader
class ULowEntryBitDataReader : public Object {

public:

	struct TArray<char> Bytes; // 0x28 (16)
	int32_t Position; // 0x38 (4)
	char CurrentByte; // 0x3C (1)
	int32_t CurrentBytePosition; // 0x40 (4)

	void SetPosition(int32_t Position_); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.SetPosition(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1078680>
	void Reset(); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.Reset(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1078660>
	int32_t Remaining(); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.Remaining(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1078630>
	struct TArray<struct FString> GetStringUtf8Array(); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetStringUtf8Array(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1078550>
	struct FString GetStringUtf8(); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetStringUtf8(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x10784D0>
	struct TArray<int32_t> GetPositiveInteger3Array(); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetPositiveInteger3Array(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1078450>
	int32_t GetPositiveInteger3(); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetPositiveInteger3(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1078420>
	struct TArray<int32_t> GetPositiveInteger2Array(); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetPositiveInteger2Array(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x10783A0>
	int32_t GetPositiveInteger2(); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetPositiveInteger2(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1078370>
	struct TArray<int32_t> GetPositiveInteger1Array(); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetPositiveInteger1Array(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x10782F0>
	int32_t GetPositiveInteger1(); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetPositiveInteger1(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x10782C0>
	int32_t GetPosition(); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetPosition(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1078290>
	struct TArray<struct ULowEntryLong> GetLongBytesArray(); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetLongBytesArray(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1078210>
	struct ULowEntryLong GetLongBytes(); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetLongBytes(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x10781E0>
	int32_t GetIntegerMostSignificantBits(int32_t BitCount); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetIntegerMostSignificantBits(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1078150>
	int32_t GetIntegerLeastSignificantBits(int32_t BitCount); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetIntegerLeastSignificantBits(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x10780C0>
	struct TArray<int32_t> GetIntegerArrayMostSignificantBits(int32_t BitCount); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetIntegerArrayMostSignificantBits(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1077FE0>
	struct TArray<int32_t> GetIntegerArrayLeastSignificantBits(int32_t BitCount); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetIntegerArrayLeastSignificantBits(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1077F00>
	struct TArray<int32_t> GetIntegerArray(); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetIntegerArray(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1077E50>
	int32_t GetInteger(); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetInteger(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1077ED0>
	struct TArray<float> GetFloatArray(); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetFloatArray(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1077E50>
	float GetFloat(); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetFloat(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1077E20>
	struct TArray<struct ULowEntryDouble> GetDoubleBytesArray(); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetDoubleBytesArray(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1077DA0>
	struct ULowEntryDouble GetDoubleBytes(); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetDoubleBytes(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1077D70>
	struct ULowEntryBitDataReader GetClone(); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetClone(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1077D40>
	char GetByteMostSignificantBits(int32_t BitCount); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetByteMostSignificantBits(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1077CB0>
	char GetByteLeastSignificantBits(int32_t BitCount); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetByteLeastSignificantBits(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1077C20>
	struct TArray<char> GetByteArrayMostSignificantBits(int32_t BitCount); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetByteArrayMostSignificantBits(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1077B40>
	struct TArray<char> GetByteArrayLeastSignificantBits(int32_t BitCount); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetByteArrayLeastSignificantBits(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1077A60>
	struct TArray<char> GetByteArray(); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetByteArray(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x10779E0>
	char GetByte(); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetByte(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x10779B0>
	struct TArray<char> GetBooleanArray(); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetBooleanArray(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1077930>
	char GetBoolean(); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetBoolean(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1077900>
	struct TArray<char> GetBitArray(); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetBitArray(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1077930>
	char GetBit(); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetBit(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1077900>
	void Empty(); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.Empty(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x10778E0>
};

// Class LowEntryExtendedStandardLibrary.LowEntryBitDataWriter
class ULowEntryBitDataWriter : public Object {

public:

	struct TArray<char> Bytes; // 0x28 (16)
	char CurrentByte; // 0x38 (1)
	int32_t CurrentBytePosition; // 0x3C (4)

	void AddStringUtf8Array(struct TArray<struct FString>& Value); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddStringUtf8Array(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1077810>
	void AddStringUtf8(struct FString Value); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddStringUtf8(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1077770>
	void AddPositiveInteger3Array(struct TArray<int32_t>& Value); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddPositiveInteger3Array(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x10776C0>
	void AddPositiveInteger3(int32_t Value); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddPositiveInteger3(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1077640>
	void AddPositiveInteger2Array(struct TArray<int32_t>& Value); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddPositiveInteger2Array(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1077590>
	void AddPositiveInteger2(int32_t Value); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddPositiveInteger2(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1077510>
	void AddPositiveInteger1Array(struct TArray<int32_t>& Value); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddPositiveInteger1Array(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1077460>
	void AddPositiveInteger1(int32_t Value); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddPositiveInteger1(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x10773E0>
	void AddLongBytesArray(struct TArray<struct ULowEntryLong>& Value); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddLongBytesArray(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1076D50>
	void AddLongBytes(struct ULowEntryLong Value); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddLongBytes(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1076CD0>
	void AddIntegerMostSignificantBits(int32_t Value, int32_t BitCount); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddIntegerMostSignificantBits(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1077320>
	void AddIntegerLeastSignificantBits(int32_t Value, int32_t BitCount); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddIntegerLeastSignificantBits(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1077260>
	void AddIntegerArrayMostSignificantBits(struct TArray<int32_t>& Value, int32_t BitCount); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddIntegerArrayMostSignificantBits(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1077160>
	void AddIntegerArrayLeastSignificantBits(struct TArray<int32_t>& Value, int32_t BitCount); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddIntegerArrayLeastSignificantBits(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1077060>
	void AddIntegerArray(struct TArray<int32_t>& Value); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddIntegerArray(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1076FB0>
	void AddInteger(int32_t Value); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddInteger(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1076F30>
	void AddFloatArray(struct TArray<float>& Value); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddFloatArray(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1076E80>
	void AddFloat(float Value); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddFloat(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1076E00>
	void AddDoubleBytesArray(struct TArray<struct ULowEntryDouble>& Value); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddDoubleBytesArray(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1076D50>
	void AddDoubleBytes(struct ULowEntryDouble Value); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddDoubleBytes(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1076CD0>
	void AddByteMostSignificantBits(char Value, int32_t BitCount); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddByteMostSignificantBits(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1076C10>
	void AddByteLeastSignificantBits(char Value, int32_t BitCount); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddByteLeastSignificantBits(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1076B50>
	void AddByteArrayMostSignificantBits(struct TArray<char>& Value, int32_t BitCount); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddByteArrayMostSignificantBits(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1076A50>
	void AddByteArrayLeastSignificantBits(struct TArray<char>& Value, int32_t BitCount); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddByteArrayLeastSignificantBits(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1076950>
	void AddByteArray(struct TArray<char>& Value); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddByteArray(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x10768A0>
	void AddByte(char Value); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddByte(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1076820>
	void AddBooleanArray(struct TArray<char>& Value); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddBooleanArray(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1076770>
	void AddBoolean(char Value); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddBoolean(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x10766E0>
	void AddBitArray(struct TArray<char>& Value); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddBitArray(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1076770>
	void AddBit(char Value); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddBit(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x10766E0>
};

// Class LowEntryExtendedStandardLibrary.LowEntryByteArray
class ULowEntryByteArray : public Object {

public:

	struct TArray<char> ByteArray; // 0x28 (16)
};

// Class LowEntryExtendedStandardLibrary.LowEntryByteDataEntry
class ULowEntryByteDataEntry : public Object {

public:

	char Type; // 0x28 (1)
	char ByteValue; // 0x29 (1)
	int32_t IntegerValue; // 0x2C (4)
	struct ULowEntryLong LongBytesValue; // 0x30 (8)
	float FloatValue; // 0x38 (4)
	struct ULowEntryDouble DoubleBytesValue; // 0x40 (8)
	char BooleanValue : 0; // 0x48 (1)
	struct FString StringUtf8Value; // 0x50 (16)
	struct TArray<char> ByteArrayValue; // 0x60 (16)
	struct TArray<int32_t> IntegerArrayValue; // 0x70 (16)
	struct TArray<struct ULowEntryLong> LongBytesArrayValue; // 0x80 (16)
	struct TArray<float> FloatArrayValue; // 0x90 (16)
	struct TArray<struct ULowEntryDouble> DoubleBytesArrayValue; // 0xA0 (16)
	struct TArray<char> BooleanArrayValue; // 0xB0 (16)
	struct TArray<struct FString> StringUtf8ArrayValue; // 0xC0 (16)
};

// Class LowEntryExtendedStandardLibrary.LowEntryByteDataReader
class ULowEntryByteDataReader : public Object {

public:

	struct TArray<char> Bytes; // 0x28 (16)
	int32_t Position; // 0x38 (4)

	void SetPosition(int32_t Position_); // Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.SetPosition(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x108DEF0>
	void Reset(); // Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.Reset(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x108CC40>
	int32_t Remaining(); // Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.Remaining(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x108C7A0>
	struct TArray<struct FString> GetStringUtf8Array(); // Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetStringUtf8Array(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1086FC0>
	struct FString GetStringUtf8(); // Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetStringUtf8(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1086F40>
	struct TArray<int32_t> GetPositiveInteger3Array(); // Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetPositiveInteger3Array(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1086AE0>
	int32_t GetPositiveInteger3(); // Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetPositiveInteger3(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1086AB0>
	struct TArray<int32_t> GetPositiveInteger2Array(); // Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetPositiveInteger2Array(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1086A30>
	int32_t GetPositiveInteger2(); // Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetPositiveInteger2(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1086A00>
	struct TArray<int32_t> GetPositiveInteger1Array(); // Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetPositiveInteger1Array(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1086980>
	int32_t GetPositiveInteger1(); // Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetPositiveInteger1(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1086950>
	int32_t GetPosition(); // Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetPosition(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1086920>
	struct TArray<struct ULowEntryLong> GetLongBytesArray(); // Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetLongBytesArray(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1086640>
	struct ULowEntryLong GetLongBytes(); // Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetLongBytes(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1086610>
	struct TArray<int32_t> GetIntegerArray(); // Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetIntegerArray(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1086490>
	int32_t GetInteger(); // Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetInteger(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1086460>
	struct TArray<float> GetFloatArray(); // Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetFloatArray(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1086320>
	float GetFloat(); // Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetFloat(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x10862F0>
	struct TArray<struct ULowEntryDouble> GetDoubleBytesArray(); // Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetDoubleBytesArray(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1086270>
	struct ULowEntryDouble GetDoubleBytes(); // Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetDoubleBytes(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1086240>
	struct ULowEntryByteDataReader GetClone(); // Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetClone(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1086210>
	struct TArray<char> GetByteArray(); // Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetByteArray(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1085EE0>
	char GetByte(); // Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetByte(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1085EB0>
	struct TArray<char> GetBooleanArray(); // Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetBooleanArray(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1085E30>
	char GetBoolean(); // Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetBoolean(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1085E00>
	void Empty(); // Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.Empty(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1084F60>
};

// Class LowEntryExtendedStandardLibrary.LowEntryByteDataWriter
class ULowEntryByteDataWriter : public Object {

public:

	struct TArray<char> Bytes; // 0x28 (16)

	void AddStringUtf8Array(struct TArray<struct FString>& Value); // Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddStringUtf8Array(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x107E230>
	void AddStringUtf8(struct FString Value); // Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddStringUtf8(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x107E190>
	void AddPositiveInteger3Array(struct TArray<int32_t>& Value); // Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddPositiveInteger3Array(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x107E0E0>
	void AddPositiveInteger3(int32_t Value); // Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddPositiveInteger3(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x107E060>
	void AddPositiveInteger2Array(struct TArray<int32_t>& Value); // Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddPositiveInteger2Array(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x107DFB0>
	void AddPositiveInteger2(int32_t Value); // Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddPositiveInteger2(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x107DF30>
	void AddPositiveInteger1Array(struct TArray<int32_t>& Value); // Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddPositiveInteger1Array(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x107DE80>
	void AddPositiveInteger1(int32_t Value); // Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddPositiveInteger1(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x107DE00>
	void AddLongBytesArray(struct TArray<struct ULowEntryLong>& Value); // Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddLongBytesArray(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x107DAF0>
	void AddLongBytes(struct ULowEntryLong Value); // Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddLongBytes(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x107DA70>
	void AddIntegerArray(struct TArray<int32_t>& Value); // Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddIntegerArray(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x107DD50>
	void AddInteger(int32_t Value); // Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddInteger(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x107DCD0>
	void AddFloatArray(struct TArray<float>& Value); // Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddFloatArray(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x107DC20>
	void AddFloat(float Value); // Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddFloat(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x107DBA0>
	void AddDoubleBytesArray(struct TArray<struct ULowEntryDouble>& Value); // Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddDoubleBytesArray(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x107DAF0>
	void AddDoubleBytes(struct ULowEntryDouble Value); // Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddDoubleBytes(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x107DA70>
	void AddByteArray(struct TArray<char>& Value); // Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddByteArray(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x107D9C0>
	void AddByte(char Value); // Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddByte(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x107D940>
	void AddBooleanArray(struct TArray<char>& Value); // Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddBooleanArray(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x107D890>
	void AddBoolean(char Value); // Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddBoolean(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x107D800>
};

// Class LowEntryExtendedStandardLibrary.LowEntryDouble
class ULowEntryDouble : public Object {

public:

	struct TArray<char> Bytes; // 0x28 (16)

	void SetBytes(struct TArray<char>& ByteArray, int32_t Index, int32_t Length); // Function LowEntryExtendedStandardLibrary.LowEntryDouble.SetBytes(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x108DB40>
	char LongBytes_LessThan(struct ULowEntryLong Value); // Function LowEntryExtendedStandardLibrary.LowEntryDouble.LongBytes_LessThan(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x108A570>
	char LongBytes_GreaterThan(struct ULowEntryLong Value); // Function LowEntryExtendedStandardLibrary.LowEntryDouble.LongBytes_GreaterThan(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x108A4E0>
	char Integer_LessThan(int32_t Value); // Function LowEntryExtendedStandardLibrary.LowEntryDouble.Integer_LessThan(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1089210>
	char Integer_GreaterThan(int32_t Value); // Function LowEntryExtendedStandardLibrary.LowEntryDouble.Integer_GreaterThan(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1089180>
	struct TArray<char> GetBytes(); // Function LowEntryExtendedStandardLibrary.LowEntryDouble.GetBytes(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1086050>
	void Float_Subtract(float Value); // Function LowEntryExtendedStandardLibrary.LowEntryDouble.Float_Subtract(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1085570>
	char Float_LessThan(float Value); // Function LowEntryExtendedStandardLibrary.LowEntryDouble.Float_LessThan(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x10854E0>
	char Float_GreaterThan(float Value); // Function LowEntryExtendedStandardLibrary.LowEntryDouble.Float_GreaterThan(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1085450>
	char Float_Equals(float Value); // Function LowEntryExtendedStandardLibrary.LowEntryDouble.Float_Equals(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x10853C0>
	void Float_Add(float Value); // Function LowEntryExtendedStandardLibrary.LowEntryDouble.Float_Add(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1085340>
	void DoubleBytes_Subtract(struct ULowEntryDouble Value); // Function LowEntryExtendedStandardLibrary.LowEntryDouble.DoubleBytes_Subtract(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1084EB0>
	char DoubleBytes_LessThan(struct ULowEntryDouble Value); // Function LowEntryExtendedStandardLibrary.LowEntryDouble.DoubleBytes_LessThan(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1084E20>
	char DoubleBytes_GreaterThan(struct ULowEntryDouble Value); // Function LowEntryExtendedStandardLibrary.LowEntryDouble.DoubleBytes_GreaterThan(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1084D90>
	char DoubleBytes_Equals(struct ULowEntryDouble Value); // Function LowEntryExtendedStandardLibrary.LowEntryDouble.DoubleBytes_Equals(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1084D00>
	void DoubleBytes_Add(struct ULowEntryDouble Value); // Function LowEntryExtendedStandardLibrary.LowEntryDouble.DoubleBytes_Add(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1084C80>
	struct ULowEntryDouble CreateClone(); // Function LowEntryExtendedStandardLibrary.LowEntryDouble.CreateClone(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1084440>
	struct FString CastToString(int32_t MinFractionalDigits); // Function LowEntryExtendedStandardLibrary.LowEntryDouble.CastToString(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1083DA0>
	struct ULowEntryLong CastToLongBytes(); // Function LowEntryExtendedStandardLibrary.LowEntryDouble.CastToLongBytes(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1083D70>
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

	void WaitTillDone(struct Object WorldContextObject, struct FLatentActionInfo LatentInfo, char& Result_); // Function LowEntryExtendedStandardLibrary.LowEntryLatentActionBoolean.WaitTillDone(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x10929C0>
	char IsDone(); // Function LowEntryExtendedStandardLibrary.LowEntryLatentActionBoolean.IsDone(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1092660>
	void GetResult(char& Result_); // Function LowEntryExtendedStandardLibrary.LowEntryLatentActionBoolean.GetResult(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x10920B0>
	void Done(char Result_); // Function LowEntryExtendedStandardLibrary.LowEntryLatentActionBoolean.Done(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1091A60>
};

// Class LowEntryExtendedStandardLibrary.LowEntryLatentActionFloat
class ULowEntryLatentActionFloat : public Object {

public:

	char Finished : 0; // 0x28 (1)
	float Result; // 0x2C (4)
	int32_t KeepAliveCount; // 0x30 (4)

	void WaitTillDone(struct Object WorldContextObject, struct FLatentActionInfo LatentInfo, float& Result_); // Function LowEntryExtendedStandardLibrary.LowEntryLatentActionFloat.WaitTillDone(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1092B00>
	char IsDone(); // Function LowEntryExtendedStandardLibrary.LowEntryLatentActionFloat.IsDone(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1092660>
	void GetResult(float& Result_); // Function LowEntryExtendedStandardLibrary.LowEntryLatentActionFloat.GetResult(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1092140>
	void Done(float Result_); // Function LowEntryExtendedStandardLibrary.LowEntryLatentActionFloat.Done(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1091AF0>
};

// Class LowEntryExtendedStandardLibrary.LowEntryLatentActionInteger
class ULowEntryLatentActionInteger : public Object {

public:

	char Finished : 0; // 0x28 (1)
	int32_t Result; // 0x2C (4)
	int32_t KeepAliveCount; // 0x30 (4)

	void WaitTillDone(struct Object WorldContextObject, struct FLatentActionInfo LatentInfo, int32_t& Result_); // Function LowEntryExtendedStandardLibrary.LowEntryLatentActionInteger.WaitTillDone(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1092C40>
	char IsDone(); // Function LowEntryExtendedStandardLibrary.LowEntryLatentActionInteger.IsDone(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1092660>
	void GetResult(int32_t& Result_); // Function LowEntryExtendedStandardLibrary.LowEntryLatentActionInteger.GetResult(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x10921E0>
	void Done(int32_t Result_); // Function LowEntryExtendedStandardLibrary.LowEntryLatentActionInteger.Done(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1091B70>
};

// Class LowEntryExtendedStandardLibrary.LowEntryLatentActionNone
class ULowEntryLatentActionNone : public Object {

public:

	char Finished : 0; // 0x28 (1)
	int32_t KeepAliveCount; // 0x2C (4)

	void WaitTillDone(struct Object WorldContextObject, struct FLatentActionInfo LatentInfo); // Function LowEntryExtendedStandardLibrary.LowEntryLatentActionNone.WaitTillDone(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1092D80>
	char IsDone(); // Function LowEntryExtendedStandardLibrary.LowEntryLatentActionNone.IsDone(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1092660>
	void Done(); // Function LowEntryExtendedStandardLibrary.LowEntryLatentActionNone.Done(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1091BF0>
};

// Class LowEntryExtendedStandardLibrary.LowEntryLatentActionObject
class ULowEntryLatentActionObject : public Object {

public:

	char Finished : 0; // 0x28 (1)
	struct Object Result; // 0x30 (8)
	int32_t KeepAliveCount; // 0x38 (4)

	void WaitTillDone(struct Object WorldContextObject, struct FLatentActionInfo LatentInfo, struct Object& Result_); // Function LowEntryExtendedStandardLibrary.LowEntryLatentActionObject.WaitTillDone(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1092E70>
	char IsDone(); // Function LowEntryExtendedStandardLibrary.LowEntryLatentActionObject.IsDone(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1092660>
	void GetResult(struct Object& Result_); // Function LowEntryExtendedStandardLibrary.LowEntryLatentActionObject.GetResult(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1092270>
	void Done(struct Object Result_); // Function LowEntryExtendedStandardLibrary.LowEntryLatentActionObject.Done(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1091C10>
};

// Class LowEntryExtendedStandardLibrary.LowEntryLatentActionString
class ULowEntryLatentActionString : public Object {

public:

	char Finished : 0; // 0x28 (1)
	struct FString Result; // 0x30 (16)
	int32_t KeepAliveCount; // 0x40 (4)

	void WaitTillDone(struct Object WorldContextObject, struct FLatentActionInfo LatentInfo, struct FString& Result_); // Function LowEntryExtendedStandardLibrary.LowEntryLatentActionString.WaitTillDone(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1092FB0>
	char IsDone(); // Function LowEntryExtendedStandardLibrary.LowEntryLatentActionString.IsDone(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1092660>
	void GetResult(struct FString& Result_); // Function LowEntryExtendedStandardLibrary.LowEntryLatentActionString.GetResult(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1092300>
	void Done(struct FString Result_); // Function LowEntryExtendedStandardLibrary.LowEntryLatentActionString.Done(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1091C90>
};

// Class LowEntryExtendedStandardLibrary.LowEntryLong
class ULowEntryLong : public Object {

public:

	struct TArray<char> Bytes; // 0x28 (16)

	void SetBytes(struct TArray<char>& ByteArray, int32_t Index, int32_t Length); // Function LowEntryExtendedStandardLibrary.LowEntryLong.SetBytes(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x108DB40>
	void LongBytes_Subtract(struct ULowEntryLong Value); // Function LowEntryExtendedStandardLibrary.LowEntryLong.LongBytes_Subtract(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x10928C0>
	char LongBytes_LessThan(struct ULowEntryLong Value); // Function LowEntryExtendedStandardLibrary.LowEntryLong.LongBytes_LessThan(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1092830>
	char LongBytes_GreaterThan(struct ULowEntryLong Value); // Function LowEntryExtendedStandardLibrary.LowEntryLong.LongBytes_GreaterThan(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x10927A0>
	char LongBytes_Equals(struct ULowEntryLong Value); // Function LowEntryExtendedStandardLibrary.LowEntryLong.LongBytes_Equals(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1092710>
	void LongBytes_Add(struct ULowEntryLong Value); // Function LowEntryExtendedStandardLibrary.LowEntryLong.LongBytes_Add(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1092690>
	void Integer_Subtract(int32_t Value); // Function LowEntryExtendedStandardLibrary.LowEntryLong.Integer_Subtract(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x10925E0>
	char Integer_LessThan(int32_t Value); // Function LowEntryExtendedStandardLibrary.LowEntryLong.Integer_LessThan(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1092550>
	char Integer_GreaterThan(int32_t Value); // Function LowEntryExtendedStandardLibrary.LowEntryLong.Integer_GreaterThan(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x10924C0>
	char Integer_Equals(int32_t Value); // Function LowEntryExtendedStandardLibrary.LowEntryLong.Integer_Equals(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1092430>
	void Integer_Add(int32_t Value); // Function LowEntryExtendedStandardLibrary.LowEntryLong.Integer_Add(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x10923B0>
	struct TArray<char> GetBytes(); // Function LowEntryExtendedStandardLibrary.LowEntryLong.GetBytes(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1086050>
	char Float_LessThan(float Value); // Function LowEntryExtendedStandardLibrary.LowEntryLong.Float_LessThan(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1091F30>
	char Float_GreaterThan(float Value); // Function LowEntryExtendedStandardLibrary.LowEntryLong.Float_GreaterThan(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1091EA0>
	char DoubleBytes_LessThan(struct ULowEntryDouble Value); // Function LowEntryExtendedStandardLibrary.LowEntryLong.DoubleBytes_LessThan(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1091E10>
	char DoubleBytes_GreaterThan(struct ULowEntryDouble Value); // Function LowEntryExtendedStandardLibrary.LowEntryLong.DoubleBytes_GreaterThan(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1091D80>
	struct ULowEntryLong CreateClone(); // Function LowEntryExtendedStandardLibrary.LowEntryLong.CreateClone(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1091A30>
	struct FString CastToString(); // Function LowEntryExtendedStandardLibrary.LowEntryLong.CastToString(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x10919B0>
	struct ULowEntryDouble CastToDoubleBytes(); // Function LowEntryExtendedStandardLibrary.LowEntryLong.CastToDoubleBytes(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1091980>
};

// Class LowEntryExtendedStandardLibrary.LowEntryParsedHashcash
class ULowEntryParsedHashcash : public Object {

public:

	char Valid : 0; // 0x28 (1)
	struct FString Resource; // 0x30 (16)
	struct FDateTime Date; // 0x40 (8)
	int32_t Bits; // 0x48 (4)

	struct FString ToString(); // Function LowEntryExtendedStandardLibrary.LowEntryParsedHashcash.ToString(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1092940>
	struct FString GetResource(); // Function LowEntryExtendedStandardLibrary.LowEntryParsedHashcash.GetResource(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1092030>
	struct FDateTime GetDate(); // Function LowEntryExtendedStandardLibrary.LowEntryParsedHashcash.GetDate(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1091FF0>
	int32_t GetBits(); // Function LowEntryExtendedStandardLibrary.LowEntryParsedHashcash.GetBits(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1091FC0>
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
	struct TArray<struct FLowEntryRegexCaptureGroup> CaptureGroups; // 0x20 (16)
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
inline struct TArray<struct FString> ULowEntryBitDataReader::GetStringUtf8Array() {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetStringUtf8Array");

	struct GetStringUtf8Array_Params {
		
		struct TArray<struct FString> ReturnValue;

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
inline struct TArray<int32_t> ULowEntryBitDataReader::GetPositiveInteger3Array() {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetPositiveInteger3Array");

	struct GetPositiveInteger3Array_Params {
		
		struct TArray<int32_t> ReturnValue;

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
inline struct TArray<int32_t> ULowEntryBitDataReader::GetPositiveInteger2Array() {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetPositiveInteger2Array");

	struct GetPositiveInteger2Array_Params {
		
		struct TArray<int32_t> ReturnValue;

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
inline struct TArray<int32_t> ULowEntryBitDataReader::GetPositiveInteger1Array() {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetPositiveInteger1Array");

	struct GetPositiveInteger1Array_Params {
		
		struct TArray<int32_t> ReturnValue;

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
inline struct TArray<struct ULowEntryLong> ULowEntryBitDataReader::GetLongBytesArray() {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetLongBytesArray");

	struct GetLongBytesArray_Params {
		
		struct TArray<struct ULowEntryLong> ReturnValue;

	}; GetLongBytesArray_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetLongBytes
inline struct ULowEntryLong ULowEntryBitDataReader::GetLongBytes() {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetLongBytes");

	struct GetLongBytes_Params {
		
		struct ULowEntryLong ReturnValue;

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
inline struct TArray<int32_t> ULowEntryBitDataReader::GetIntegerArrayMostSignificantBits(int32_t BitCount) {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetIntegerArrayMostSignificantBits");

	struct GetIntegerArrayMostSignificantBits_Params {
		int32_t BitCount;
		struct TArray<int32_t> ReturnValue;

	}; GetIntegerArrayMostSignificantBits_Params Params;

	Params.BitCount = BitCount;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetIntegerArrayLeastSignificantBits
inline struct TArray<int32_t> ULowEntryBitDataReader::GetIntegerArrayLeastSignificantBits(int32_t BitCount) {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetIntegerArrayLeastSignificantBits");

	struct GetIntegerArrayLeastSignificantBits_Params {
		int32_t BitCount;
		struct TArray<int32_t> ReturnValue;

	}; GetIntegerArrayLeastSignificantBits_Params Params;

	Params.BitCount = BitCount;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetIntegerArray
inline struct TArray<int32_t> ULowEntryBitDataReader::GetIntegerArray() {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetIntegerArray");

	struct GetIntegerArray_Params {
		
		struct TArray<int32_t> ReturnValue;

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
inline struct TArray<float> ULowEntryBitDataReader::GetFloatArray() {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetFloatArray");

	struct GetFloatArray_Params {
		
		struct TArray<float> ReturnValue;

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
inline struct TArray<struct ULowEntryDouble> ULowEntryBitDataReader::GetDoubleBytesArray() {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetDoubleBytesArray");

	struct GetDoubleBytesArray_Params {
		
		struct TArray<struct ULowEntryDouble> ReturnValue;

	}; GetDoubleBytesArray_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetDoubleBytes
inline struct ULowEntryDouble ULowEntryBitDataReader::GetDoubleBytes() {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetDoubleBytes");

	struct GetDoubleBytes_Params {
		
		struct ULowEntryDouble ReturnValue;

	}; GetDoubleBytes_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetClone
inline struct ULowEntryBitDataReader ULowEntryBitDataReader::GetClone() {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetClone");

	struct GetClone_Params {
		
		struct ULowEntryBitDataReader ReturnValue;

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
inline struct TArray<char> ULowEntryBitDataReader::GetByteArrayMostSignificantBits(int32_t BitCount) {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetByteArrayMostSignificantBits");

	struct GetByteArrayMostSignificantBits_Params {
		int32_t BitCount;
		struct TArray<char> ReturnValue;

	}; GetByteArrayMostSignificantBits_Params Params;

	Params.BitCount = BitCount;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetByteArrayLeastSignificantBits
inline struct TArray<char> ULowEntryBitDataReader::GetByteArrayLeastSignificantBits(int32_t BitCount) {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetByteArrayLeastSignificantBits");

	struct GetByteArrayLeastSignificantBits_Params {
		int32_t BitCount;
		struct TArray<char> ReturnValue;

	}; GetByteArrayLeastSignificantBits_Params Params;

	Params.BitCount = BitCount;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetByteArray
inline struct TArray<char> ULowEntryBitDataReader::GetByteArray() {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetByteArray");

	struct GetByteArray_Params {
		
		struct TArray<char> ReturnValue;

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
inline struct TArray<char> ULowEntryBitDataReader::GetBooleanArray() {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetBooleanArray");

	struct GetBooleanArray_Params {
		
		struct TArray<char> ReturnValue;

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
inline struct TArray<char> ULowEntryBitDataReader::GetBitArray() {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetBitArray");

	struct GetBitArray_Params {
		
		struct TArray<char> ReturnValue;

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
inline void ULowEntryBitDataWriter::AddStringUtf8Array(struct TArray<struct FString>& Value) {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddStringUtf8Array");

	struct AddStringUtf8Array_Params {
		struct TArray<struct FString>& Value;
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
inline void ULowEntryBitDataWriter::AddPositiveInteger3Array(struct TArray<int32_t>& Value) {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddPositiveInteger3Array");

	struct AddPositiveInteger3Array_Params {
		struct TArray<int32_t>& Value;
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
inline void ULowEntryBitDataWriter::AddPositiveInteger2Array(struct TArray<int32_t>& Value) {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddPositiveInteger2Array");

	struct AddPositiveInteger2Array_Params {
		struct TArray<int32_t>& Value;
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
inline void ULowEntryBitDataWriter::AddPositiveInteger1Array(struct TArray<int32_t>& Value) {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddPositiveInteger1Array");

	struct AddPositiveInteger1Array_Params {
		struct TArray<int32_t>& Value;
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
inline void ULowEntryBitDataWriter::AddLongBytesArray(struct TArray<struct ULowEntryLong>& Value) {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddLongBytesArray");

	struct AddLongBytesArray_Params {
		struct TArray<struct ULowEntryLong>& Value;
	}; AddLongBytesArray_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Value = Params.Value;

}

// Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddLongBytes
inline void ULowEntryBitDataWriter::AddLongBytes(struct ULowEntryLong Value) {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddLongBytes");

	struct AddLongBytes_Params {
		struct ULowEntryLong Value;
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
inline void ULowEntryBitDataWriter::AddIntegerArrayMostSignificantBits(struct TArray<int32_t>& Value, int32_t BitCount) {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddIntegerArrayMostSignificantBits");

	struct AddIntegerArrayMostSignificantBits_Params {
		struct TArray<int32_t>& Value;
		int32_t BitCount;
	}; AddIntegerArrayMostSignificantBits_Params Params;

	Params.BitCount = BitCount;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Value = Params.Value;

}

// Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddIntegerArrayLeastSignificantBits
inline void ULowEntryBitDataWriter::AddIntegerArrayLeastSignificantBits(struct TArray<int32_t>& Value, int32_t BitCount) {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddIntegerArrayLeastSignificantBits");

	struct AddIntegerArrayLeastSignificantBits_Params {
		struct TArray<int32_t>& Value;
		int32_t BitCount;
	}; AddIntegerArrayLeastSignificantBits_Params Params;

	Params.BitCount = BitCount;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Value = Params.Value;

}

// Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddIntegerArray
inline void ULowEntryBitDataWriter::AddIntegerArray(struct TArray<int32_t>& Value) {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddIntegerArray");

	struct AddIntegerArray_Params {
		struct TArray<int32_t>& Value;
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
inline void ULowEntryBitDataWriter::AddFloatArray(struct TArray<float>& Value) {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddFloatArray");

	struct AddFloatArray_Params {
		struct TArray<float>& Value;
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
inline void ULowEntryBitDataWriter::AddDoubleBytesArray(struct TArray<struct ULowEntryDouble>& Value) {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddDoubleBytesArray");

	struct AddDoubleBytesArray_Params {
		struct TArray<struct ULowEntryDouble>& Value;
	}; AddDoubleBytesArray_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Value = Params.Value;

}

// Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddDoubleBytes
inline void ULowEntryBitDataWriter::AddDoubleBytes(struct ULowEntryDouble Value) {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddDoubleBytes");

	struct AddDoubleBytes_Params {
		struct ULowEntryDouble Value;
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
inline void ULowEntryBitDataWriter::AddByteArrayMostSignificantBits(struct TArray<char>& Value, int32_t BitCount) {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddByteArrayMostSignificantBits");

	struct AddByteArrayMostSignificantBits_Params {
		struct TArray<char>& Value;
		int32_t BitCount;
	}; AddByteArrayMostSignificantBits_Params Params;

	Params.BitCount = BitCount;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Value = Params.Value;

}

// Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddByteArrayLeastSignificantBits
inline void ULowEntryBitDataWriter::AddByteArrayLeastSignificantBits(struct TArray<char>& Value, int32_t BitCount) {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddByteArrayLeastSignificantBits");

	struct AddByteArrayLeastSignificantBits_Params {
		struct TArray<char>& Value;
		int32_t BitCount;
	}; AddByteArrayLeastSignificantBits_Params Params;

	Params.BitCount = BitCount;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Value = Params.Value;

}

// Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddByteArray
inline void ULowEntryBitDataWriter::AddByteArray(struct TArray<char>& Value) {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddByteArray");

	struct AddByteArray_Params {
		struct TArray<char>& Value;
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
inline void ULowEntryBitDataWriter::AddBooleanArray(struct TArray<char>& Value) {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddBooleanArray");

	struct AddBooleanArray_Params {
		struct TArray<char>& Value;
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
inline void ULowEntryBitDataWriter::AddBitArray(struct TArray<char>& Value) {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddBitArray");

	struct AddBitArray_Params {
		struct TArray<char>& Value;
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
inline struct TArray<struct FString> ULowEntryByteDataReader::GetStringUtf8Array() {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetStringUtf8Array");

	struct GetStringUtf8Array_Params {
		
		struct TArray<struct FString> ReturnValue;

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
inline struct TArray<int32_t> ULowEntryByteDataReader::GetPositiveInteger3Array() {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetPositiveInteger3Array");

	struct GetPositiveInteger3Array_Params {
		
		struct TArray<int32_t> ReturnValue;

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
inline struct TArray<int32_t> ULowEntryByteDataReader::GetPositiveInteger2Array() {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetPositiveInteger2Array");

	struct GetPositiveInteger2Array_Params {
		
		struct TArray<int32_t> ReturnValue;

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
inline struct TArray<int32_t> ULowEntryByteDataReader::GetPositiveInteger1Array() {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetPositiveInteger1Array");

	struct GetPositiveInteger1Array_Params {
		
		struct TArray<int32_t> ReturnValue;

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
inline struct TArray<struct ULowEntryLong> ULowEntryByteDataReader::GetLongBytesArray() {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetLongBytesArray");

	struct GetLongBytesArray_Params {
		
		struct TArray<struct ULowEntryLong> ReturnValue;

	}; GetLongBytesArray_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetLongBytes
inline struct ULowEntryLong ULowEntryByteDataReader::GetLongBytes() {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetLongBytes");

	struct GetLongBytes_Params {
		
		struct ULowEntryLong ReturnValue;

	}; GetLongBytes_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetIntegerArray
inline struct TArray<int32_t> ULowEntryByteDataReader::GetIntegerArray() {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetIntegerArray");

	struct GetIntegerArray_Params {
		
		struct TArray<int32_t> ReturnValue;

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
inline struct TArray<float> ULowEntryByteDataReader::GetFloatArray() {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetFloatArray");

	struct GetFloatArray_Params {
		
		struct TArray<float> ReturnValue;

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
inline struct TArray<struct ULowEntryDouble> ULowEntryByteDataReader::GetDoubleBytesArray() {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetDoubleBytesArray");

	struct GetDoubleBytesArray_Params {
		
		struct TArray<struct ULowEntryDouble> ReturnValue;

	}; GetDoubleBytesArray_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetDoubleBytes
inline struct ULowEntryDouble ULowEntryByteDataReader::GetDoubleBytes() {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetDoubleBytes");

	struct GetDoubleBytes_Params {
		
		struct ULowEntryDouble ReturnValue;

	}; GetDoubleBytes_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetClone
inline struct ULowEntryByteDataReader ULowEntryByteDataReader::GetClone() {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetClone");

	struct GetClone_Params {
		
		struct ULowEntryByteDataReader ReturnValue;

	}; GetClone_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetByteArray
inline struct TArray<char> ULowEntryByteDataReader::GetByteArray() {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetByteArray");

	struct GetByteArray_Params {
		
		struct TArray<char> ReturnValue;

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
inline struct TArray<char> ULowEntryByteDataReader::GetBooleanArray() {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetBooleanArray");

	struct GetBooleanArray_Params {
		
		struct TArray<char> ReturnValue;

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
inline void ULowEntryByteDataWriter::AddStringUtf8Array(struct TArray<struct FString>& Value) {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddStringUtf8Array");

	struct AddStringUtf8Array_Params {
		struct TArray<struct FString>& Value;
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
inline void ULowEntryByteDataWriter::AddPositiveInteger3Array(struct TArray<int32_t>& Value) {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddPositiveInteger3Array");

	struct AddPositiveInteger3Array_Params {
		struct TArray<int32_t>& Value;
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
inline void ULowEntryByteDataWriter::AddPositiveInteger2Array(struct TArray<int32_t>& Value) {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddPositiveInteger2Array");

	struct AddPositiveInteger2Array_Params {
		struct TArray<int32_t>& Value;
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
inline void ULowEntryByteDataWriter::AddPositiveInteger1Array(struct TArray<int32_t>& Value) {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddPositiveInteger1Array");

	struct AddPositiveInteger1Array_Params {
		struct TArray<int32_t>& Value;
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
inline void ULowEntryByteDataWriter::AddLongBytesArray(struct TArray<struct ULowEntryLong>& Value) {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddLongBytesArray");

	struct AddLongBytesArray_Params {
		struct TArray<struct ULowEntryLong>& Value;
	}; AddLongBytesArray_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Value = Params.Value;

}

// Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddLongBytes
inline void ULowEntryByteDataWriter::AddLongBytes(struct ULowEntryLong Value) {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddLongBytes");

	struct AddLongBytes_Params {
		struct ULowEntryLong Value;
	}; AddLongBytes_Params Params;

	Params.Value = Value;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddIntegerArray
inline void ULowEntryByteDataWriter::AddIntegerArray(struct TArray<int32_t>& Value) {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddIntegerArray");

	struct AddIntegerArray_Params {
		struct TArray<int32_t>& Value;
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
inline void ULowEntryByteDataWriter::AddFloatArray(struct TArray<float>& Value) {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddFloatArray");

	struct AddFloatArray_Params {
		struct TArray<float>& Value;
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
inline void ULowEntryByteDataWriter::AddDoubleBytesArray(struct TArray<struct ULowEntryDouble>& Value) {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddDoubleBytesArray");

	struct AddDoubleBytesArray_Params {
		struct TArray<struct ULowEntryDouble>& Value;
	}; AddDoubleBytesArray_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Value = Params.Value;

}

// Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddDoubleBytes
inline void ULowEntryByteDataWriter::AddDoubleBytes(struct ULowEntryDouble Value) {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddDoubleBytes");

	struct AddDoubleBytes_Params {
		struct ULowEntryDouble Value;
	}; AddDoubleBytes_Params Params;

	Params.Value = Value;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddByteArray
inline void ULowEntryByteDataWriter::AddByteArray(struct TArray<char>& Value) {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddByteArray");

	struct AddByteArray_Params {
		struct TArray<char>& Value;
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
inline void ULowEntryByteDataWriter::AddBooleanArray(struct TArray<char>& Value) {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddBooleanArray");

	struct AddBooleanArray_Params {
		struct TArray<char>& Value;
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
inline void ULowEntryDouble::SetBytes(struct TArray<char>& ByteArray, int32_t Index, int32_t Length) {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryDouble.SetBytes");

	struct SetBytes_Params {
		struct TArray<char>& ByteArray;
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
inline char ULowEntryDouble::LongBytes_LessThan(struct ULowEntryLong Value) {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryDouble.LongBytes_LessThan");

	struct LongBytes_LessThan_Params {
		struct ULowEntryLong Value;
		char ReturnValue;

	}; LongBytes_LessThan_Params Params;

	Params.Value = Value;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function LowEntryExtendedStandardLibrary.LowEntryDouble.LongBytes_GreaterThan
inline char ULowEntryDouble::LongBytes_GreaterThan(struct ULowEntryLong Value) {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryDouble.LongBytes_GreaterThan");

	struct LongBytes_GreaterThan_Params {
		struct ULowEntryLong Value;
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
inline struct TArray<char> ULowEntryDouble::GetBytes() {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryDouble.GetBytes");

	struct GetBytes_Params {
		
		struct TArray<char> ReturnValue;

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
inline void ULowEntryDouble::DoubleBytes_Subtract(struct ULowEntryDouble Value) {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryDouble.DoubleBytes_Subtract");

	struct DoubleBytes_Subtract_Params {
		struct ULowEntryDouble Value;
	}; DoubleBytes_Subtract_Params Params;

	Params.Value = Value;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function LowEntryExtendedStandardLibrary.LowEntryDouble.DoubleBytes_LessThan
inline char ULowEntryDouble::DoubleBytes_LessThan(struct ULowEntryDouble Value) {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryDouble.DoubleBytes_LessThan");

	struct DoubleBytes_LessThan_Params {
		struct ULowEntryDouble Value;
		char ReturnValue;

	}; DoubleBytes_LessThan_Params Params;

	Params.Value = Value;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function LowEntryExtendedStandardLibrary.LowEntryDouble.DoubleBytes_GreaterThan
inline char ULowEntryDouble::DoubleBytes_GreaterThan(struct ULowEntryDouble Value) {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryDouble.DoubleBytes_GreaterThan");

	struct DoubleBytes_GreaterThan_Params {
		struct ULowEntryDouble Value;
		char ReturnValue;

	}; DoubleBytes_GreaterThan_Params Params;

	Params.Value = Value;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function LowEntryExtendedStandardLibrary.LowEntryDouble.DoubleBytes_Equals
inline char ULowEntryDouble::DoubleBytes_Equals(struct ULowEntryDouble Value) {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryDouble.DoubleBytes_Equals");

	struct DoubleBytes_Equals_Params {
		struct ULowEntryDouble Value;
		char ReturnValue;

	}; DoubleBytes_Equals_Params Params;

	Params.Value = Value;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function LowEntryExtendedStandardLibrary.LowEntryDouble.DoubleBytes_Add
inline void ULowEntryDouble::DoubleBytes_Add(struct ULowEntryDouble Value) {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryDouble.DoubleBytes_Add");

	struct DoubleBytes_Add_Params {
		struct ULowEntryDouble Value;
	}; DoubleBytes_Add_Params Params;

	Params.Value = Value;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function LowEntryExtendedStandardLibrary.LowEntryDouble.CreateClone
inline struct ULowEntryDouble ULowEntryDouble::CreateClone() {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryDouble.CreateClone");

	struct CreateClone_Params {
		
		struct ULowEntryDouble ReturnValue;

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
inline struct ULowEntryLong ULowEntryDouble::CastToLongBytes() {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryDouble.CastToLongBytes");

	struct CastToLongBytes_Params {
		
		struct ULowEntryLong ReturnValue;

	}; CastToLongBytes_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function LowEntryExtendedStandardLibrary.LowEntryLatentActionBoolean.WaitTillDone
inline void ULowEntryLatentActionBoolean::WaitTillDone(struct Object WorldContextObject, struct FLatentActionInfo LatentInfo, char& Result_) {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryLatentActionBoolean.WaitTillDone");

	struct WaitTillDone_Params {
		struct Object WorldContextObject;
		struct FLatentActionInfo LatentInfo;
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
inline void ULowEntryLatentActionFloat::WaitTillDone(struct Object WorldContextObject, struct FLatentActionInfo LatentInfo, float& Result_) {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryLatentActionFloat.WaitTillDone");

	struct WaitTillDone_Params {
		struct Object WorldContextObject;
		struct FLatentActionInfo LatentInfo;
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
inline void ULowEntryLatentActionInteger::WaitTillDone(struct Object WorldContextObject, struct FLatentActionInfo LatentInfo, int32_t& Result_) {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryLatentActionInteger.WaitTillDone");

	struct WaitTillDone_Params {
		struct Object WorldContextObject;
		struct FLatentActionInfo LatentInfo;
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
inline void ULowEntryLatentActionNone::WaitTillDone(struct Object WorldContextObject, struct FLatentActionInfo LatentInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryLatentActionNone.WaitTillDone");

	struct WaitTillDone_Params {
		struct Object WorldContextObject;
		struct FLatentActionInfo LatentInfo;
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
inline void ULowEntryLatentActionObject::WaitTillDone(struct Object WorldContextObject, struct FLatentActionInfo LatentInfo, struct Object& Result_) {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryLatentActionObject.WaitTillDone");

	struct WaitTillDone_Params {
		struct Object WorldContextObject;
		struct FLatentActionInfo LatentInfo;
		struct Object& Result_;
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
inline void ULowEntryLatentActionObject::GetResult(struct Object& Result_) {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryLatentActionObject.GetResult");

	struct GetResult_Params {
		struct Object& Result_;
	}; GetResult_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Result_ = Params.Result_;

}

// Function LowEntryExtendedStandardLibrary.LowEntryLatentActionObject.Done
inline void ULowEntryLatentActionObject::Done(struct Object Result_) {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryLatentActionObject.Done");

	struct Done_Params {
		struct Object Result_;
	}; Done_Params Params;

	Params.Result_ = Result_;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function LowEntryExtendedStandardLibrary.LowEntryLatentActionString.WaitTillDone
inline void ULowEntryLatentActionString::WaitTillDone(struct Object WorldContextObject, struct FLatentActionInfo LatentInfo, struct FString& Result_) {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryLatentActionString.WaitTillDone");

	struct WaitTillDone_Params {
		struct Object WorldContextObject;
		struct FLatentActionInfo LatentInfo;
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
inline void ULowEntryLong::SetBytes(struct TArray<char>& ByteArray, int32_t Index, int32_t Length) {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryLong.SetBytes");

	struct SetBytes_Params {
		struct TArray<char>& ByteArray;
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
inline void ULowEntryLong::LongBytes_Subtract(struct ULowEntryLong Value) {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryLong.LongBytes_Subtract");

	struct LongBytes_Subtract_Params {
		struct ULowEntryLong Value;
	}; LongBytes_Subtract_Params Params;

	Params.Value = Value;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function LowEntryExtendedStandardLibrary.LowEntryLong.LongBytes_LessThan
inline char ULowEntryLong::LongBytes_LessThan(struct ULowEntryLong Value) {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryLong.LongBytes_LessThan");

	struct LongBytes_LessThan_Params {
		struct ULowEntryLong Value;
		char ReturnValue;

	}; LongBytes_LessThan_Params Params;

	Params.Value = Value;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function LowEntryExtendedStandardLibrary.LowEntryLong.LongBytes_GreaterThan
inline char ULowEntryLong::LongBytes_GreaterThan(struct ULowEntryLong Value) {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryLong.LongBytes_GreaterThan");

	struct LongBytes_GreaterThan_Params {
		struct ULowEntryLong Value;
		char ReturnValue;

	}; LongBytes_GreaterThan_Params Params;

	Params.Value = Value;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function LowEntryExtendedStandardLibrary.LowEntryLong.LongBytes_Equals
inline char ULowEntryLong::LongBytes_Equals(struct ULowEntryLong Value) {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryLong.LongBytes_Equals");

	struct LongBytes_Equals_Params {
		struct ULowEntryLong Value;
		char ReturnValue;

	}; LongBytes_Equals_Params Params;

	Params.Value = Value;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function LowEntryExtendedStandardLibrary.LowEntryLong.LongBytes_Add
inline void ULowEntryLong::LongBytes_Add(struct ULowEntryLong Value) {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryLong.LongBytes_Add");

	struct LongBytes_Add_Params {
		struct ULowEntryLong Value;
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
inline struct TArray<char> ULowEntryLong::GetBytes() {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryLong.GetBytes");

	struct GetBytes_Params {
		
		struct TArray<char> ReturnValue;

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
inline char ULowEntryLong::DoubleBytes_LessThan(struct ULowEntryDouble Value) {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryLong.DoubleBytes_LessThan");

	struct DoubleBytes_LessThan_Params {
		struct ULowEntryDouble Value;
		char ReturnValue;

	}; DoubleBytes_LessThan_Params Params;

	Params.Value = Value;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function LowEntryExtendedStandardLibrary.LowEntryLong.DoubleBytes_GreaterThan
inline char ULowEntryLong::DoubleBytes_GreaterThan(struct ULowEntryDouble Value) {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryLong.DoubleBytes_GreaterThan");

	struct DoubleBytes_GreaterThan_Params {
		struct ULowEntryDouble Value;
		char ReturnValue;

	}; DoubleBytes_GreaterThan_Params Params;

	Params.Value = Value;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function LowEntryExtendedStandardLibrary.LowEntryLong.CreateClone
inline struct ULowEntryLong ULowEntryLong::CreateClone() {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryLong.CreateClone");

	struct CreateClone_Params {
		
		struct ULowEntryLong ReturnValue;

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
inline struct ULowEntryDouble ULowEntryLong::CastToDoubleBytes() {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryLong.CastToDoubleBytes");

	struct CastToDoubleBytes_Params {
		
		struct ULowEntryDouble ReturnValue;

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
inline struct FDateTime ULowEntryParsedHashcash::GetDate() {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryParsedHashcash.GetDate");

	struct GetDate_Params {
		
		struct FDateTime ReturnValue;

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

