// Enum LowEntryExtendedStandardLibrary.ELowEntryBatteryState
enum class ELowEntryBatteryState : uint8 {
	ELowEntryBatteryState = 0,
	ELowEntryBatteryState = 1,
	ELowEntryBatteryState = 2,
	ELowEntryBatteryState = 3,
	ELowEntryBatteryState = 4,
	ELowEntryBatteryState = 5
};

// Enum LowEntryExtendedStandardLibrary.ELowEntryExtendedStandardLibrary0to9
enum class ELowEntryExtendedStandardLibrary0to9 : uint8 {
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
	ELowEntryExtendedStandardLibrary0to = 10
};

// Enum LowEntryExtendedStandardLibrary.ELowEntryExtendedStandardLibrary1to10other
enum class ELowEntryExtendedStandardLibrary1to10other : uint8 {
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
	ELowEntryExtendedStandardLibrary1to10other = 11
};

// Enum LowEntryExtendedStandardLibrary.ELowEntryExtendedStandardLibraryTrueOrFalse
enum class ELowEntryExtendedStandardLibraryTrueOrFalse : uint8 {
	ELowEntryExtendedStandardLibraryTrueOrFalse = 0,
	ELowEntryExtendedStandardLibraryTrueOrFalse = 1,
	ELowEntryExtendedStandardLibraryTrueOrFalse = 2
};

// Enum LowEntryExtendedStandardLibrary.ELowEntryHmacAlgorithm
enum class ELowEntryHmacAlgorithm : uint8 {
	ELowEntryHmacAlgorithm = 0,
	ELowEntryHmacAlgorithm = 1,
	ELowEntryHmacAlgorithm = 2,
	ELowEntryHmacAlgorithm = 3,
	ELowEntryHmacAlgorithm = 4
};

// Enum LowEntryExtendedStandardLibrary.ELowEntryImageFormat
enum class ELowEntryImageFormat : uint8 {
	ELowEntryImageFormat = 0,
	ELowEntryImageFormat = 1,
	ELowEntryImageFormat = 2,
	ELowEntryImageFormat = 3,
	ELowEntryImageFormat = 4,
	ELowEntryImageFormat = 5,
	ELowEntryImageFormat = 6,
	ELowEntryImageFormat = 7,
	ELowEntryImageFormat = 8
};

// Enum LowEntryExtendedStandardLibrary.ELowEntryRGBFormat
enum class ELowEntryRGBFormat : uint8 {
	ELowEntryRGBFormat = 0,
	ELowEntryRGBFormat = 1,
	ELowEntryRGBFormat = 2,
	ELowEntryRGBFormat = 3,
	ELowEntryRGBFormat = 4
};

// Enum LowEntryExtendedStandardLibrary.ELowEntrySplitScreenType
enum class ELowEntrySplitScreenType : uint8 {
	ELowEntrySplitScreenType = 0,
	ELowEntrySplitScreenType = 1,
	ELowEntrySplitScreenType = 2,
	ELowEntrySplitScreenType = 3,
	ELowEntrySplitScreenType = 4,
	ELowEntrySplitScreenType = 5,
	ELowEntrySplitScreenType = 6,
	ELowEntrySplitScreenType = 7,
	ELowEntrySplitScreenType = 8
};

// Enum LowEntryExtendedStandardLibrary.ELowEntrySplitScreenTypeThreePlayers
enum class ELowEntrySplitScreenTypeThreePlayers : uint8 {
	ELowEntrySplitScreenTypeThreePlayers = 0,
	ELowEntrySplitScreenTypeThreePlayers = 1,
	ELowEntrySplitScreenTypeThreePlayers = 2
};

// Enum LowEntryExtendedStandardLibrary.ELowEntrySplitScreenTypeTwoPlayers
enum class ELowEntrySplitScreenTypeTwoPlayers : uint8 {
	ELowEntrySplitScreenTypeTwoPlayers = 0,
	ELowEntrySplitScreenTypeTwoPlayers = 1,
	ELowEntrySplitScreenTypeTwoPlayers = 2
};

// Class LowEntryExtendedStandardLibrary.LowEntryBitDataEntry
struct ULowEntryBitDataEntry : Object {
	char Type; //  0x28 Size(1)
	char ByteValue; //  0x29 Size(1)
	int32_t IntegerValue; //  0x2c Size(4)
	struct Unknown LongBytesValue; //  0x30 Size(8)
	float FloatValue; //  0x38 Size(4)
	struct Unknown DoubleBytesValue; //  0x40 Size(8)
	char BooleanValue; //  0x48 Size(1)
	struct FString StringUtf8Value; //  0x50 Size(10)
	struct TArray<Unknown> ByteArrayValue; //  0x60 Size(10)
	struct TArray<Unknown> IntegerArrayValue; //  0x70 Size(10)
	struct TArray<Unknown> LongBytesArrayValue; //  0x80 Size(10)
	struct TArray<Unknown> FloatArrayValue; //  0x90 Size(10)
	struct TArray<Unknown> DoubleBytesArrayValue; //  0xa0 Size(10)
	struct TArray<Unknown> BooleanArrayValue; //  0xb0 Size(10)
	struct TArray<Unknown> StringUtf8ArrayValue; //  0xc0 Size(10)
};

// Class LowEntryExtendedStandardLibrary.LowEntryBitDataReader
struct ULowEntryBitDataReader : Object {
	struct TArray<Unknown> Bytes; //  0x28 Size(10)
	int32_t Position; //  0x38 Size(4)
	char CurrentByte; //  0x3c Size(1)
	int32_t CurrentBytePosition; //  0x40 Size(4)

	void SetPosition(int32_t Position_); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.SetPosition(Final|Native|Public|BlueprintCallable) // <Game+0x1061040>
};

// Class LowEntryExtendedStandardLibrary.LowEntryBitDataWriter
struct ULowEntryBitDataWriter : Object {
	struct TArray<Unknown> Bytes; //  0x28 Size(10)
	char CurrentByte; //  0x38 Size(1)
	int32_t CurrentBytePosition; //  0x3c Size(4)

	void AddStringUtf8Array(struct TArray<Unknown>& Value); // Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddStringUtf8Array(Final|Native|Public|HasOutParms|BlueprintCallable) // <Game+0x10601d0>
};

// Class LowEntryExtendedStandardLibrary.LowEntryByteArray
struct ULowEntryByteArray : Object {
	struct TArray<Unknown> ByteArray; //  0x28 Size(10)
};

// Class LowEntryExtendedStandardLibrary.LowEntryByte
struct ULowEntryByte : Object {
	char Type; //  0x28 Size(1)
	char ByteValue; //  0x29 Size(1)
	int32_t IntegerValue; //  0x2c Size(4)
	struct Unknown LongBytesValue; //  0x30 Size(8)
	float FloatValue; //  0x38 Size(4)
	struct Unknown DoubleBytesValue; //  0x40 Size(8)
	char BooleanValue; //  0x48 Size(1)
	struct FString StringUtf8Value; //  0x50 Size(10)
	struct TArray<Unknown> ByteArrayValue; //  0x60 Size(10)
	struct TArray<Unknown> IntegerArrayValue; //  0x70 Size(10)
	struct TArray<Unknown> LongBytesArrayValue; //  0x80 Size(10)
	struct TArray<Unknown> FloatArrayValue; //  0x90 Size(10)
	struct TArray<Unknown> DoubleBytesArrayValue; //  0xa0 Size(10)
	struct TArray<Unknown> BooleanArrayValue; //  0xb0 Size(10)
	struct TArray<Unknown> StringUtf8ArrayValue; //  0xc0 Size(10)
};

// Class LowEntryExtendedStandardLibrary.LowEntryByte
struct ULowEntryByte : Object {
	struct TArray<Unknown> Bytes; //  0x28 Size(10)
	int32_t Position; //  0x38 Size(4)

	void SetPosition(int32_t Position_); // Function LowEntryExtendedStandardLibrary.LowEntryByte.SetPosition(Final|Native|Public|BlueprintCallable) // <Game+0x10768b0>
};

// Class LowEntryExtendedStandardLibrary.LowEntryByte
struct ULowEntryByte : Object {
	struct TArray<Unknown> Bytes; //  0x28 Size(10)

	void AddStringUtf8Array(struct TArray<Unknown>& Value); // Function LowEntryExtendedStandardLibrary.LowEntryByte.AddStringUtf8Array(Final|Native|Public|HasOutParms|BlueprintCallable) // <Game+0x1066bf0>
};

// Class LowEntryExtendedStandardLibrary.LowEntryDouble
struct ULowEntryDouble : Object {
	struct TArray<Unknown> Bytes; //  0x28 Size(10)

	void SetBytes(struct TArray<Unknown>& ByteArray, int32_t Index, int32_t Length); // Function LowEntryExtendedStandardLibrary.LowEntryDouble.SetBytes(Final|Native|Public|HasOutParms|BlueprintCallable) // <Game+0x1076500>
};

// Class LowEntryExtendedStandardLibrary.LowEntryExecutionQueue
struct ULowEntryExecutionQueue : Object {
	int32_t Count; //  0x28 Size(4)
	char Next; //  0x2c Size(1)
};

// Class LowEntryExtendedStandardLibrary.LowEntryLatentActionBoolean
struct ULowEntryLatentActionBoolean : Object {
	char Finished; //  0x28 Size(1)
	char Result; //  0x29 Size(1)
	int32_t KeepAliveCount; //  0x2c Size(4)

	void WaitTillDone(struct Unknown WorldContextObject, struct Unknown LatentInfo, char& Result_); // Function LowEntryExtendedStandardLibrary.LowEntryLatentActionBoolean.WaitTillDone(Final|Native|Public|HasOutParms|BlueprintCallable) // <Game+0x107b380>
};

// Class LowEntryExtendedStandardLibrary.LowEntryLatentActionFloat
struct ULowEntryLatentActionFloat : Object {
	char Finished; //  0x28 Size(1)
	float Result; //  0x2c Size(4)
	int32_t KeepAliveCount; //  0x30 Size(4)

	void WaitTillDone(struct Unknown WorldContextObject, struct Unknown LatentInfo, float& Result_); // Function LowEntryExtendedStandardLibrary.LowEntryLatentActionFloat.WaitTillDone(Final|Native|Public|HasOutParms|BlueprintCallable) // <Game+0x107b4c0>
};

// Class LowEntryExtendedStandardLibrary.LowEntryLatentActionInteger
struct ULowEntryLatentActionInteger : Object {
	char Finished; //  0x28 Size(1)
	int32_t Result; //  0x2c Size(4)
	int32_t KeepAliveCount; //  0x30 Size(4)

	void WaitTillDone(struct Unknown WorldContextObject, struct Unknown LatentInfo, int32_t& Result_); // Function LowEntryExtendedStandardLibrary.LowEntryLatentActionInteger.WaitTillDone(Final|Native|Public|HasOutParms|BlueprintCallable) // <Game+0x107b600>
};

// Class LowEntryExtendedStandardLibrary.LowEntryLatentActionNone
struct ULowEntryLatentActionNone : Object {
	char Finished; //  0x28 Size(1)
	int32_t KeepAliveCount; //  0x2c Size(4)

	void WaitTillDone(struct Unknown WorldContextObject, struct Unknown LatentInfo); // Function LowEntryExtendedStandardLibrary.LowEntryLatentActionNone.WaitTillDone(Final|Native|Public|BlueprintCallable) // <Game+0x107b740>
};

// Class LowEntryExtendedStandardLibrary.LowEntryLatentActionObject
struct ULowEntryLatentActionObject : Object {
	char Finished; //  0x28 Size(1)
	struct Unknown Result; //  0x30 Size(8)
	int32_t KeepAliveCount; //  0x38 Size(4)

	void WaitTillDone(struct Unknown WorldContextObject, struct Unknown LatentInfo, struct Unknown& Result_); // Function LowEntryExtendedStandardLibrary.LowEntryLatentActionObject.WaitTillDone(Final|Native|Public|HasOutParms|BlueprintCallable) // <Game+0x107b830>
};

// Class LowEntryExtendedStandardLibrary.LowEntryLatentActionString
struct ULowEntryLatentActionString : Object {
	char Finished; //  0x28 Size(1)
	struct FString Result; //  0x30 Size(10)
	int32_t KeepAliveCount; //  0x40 Size(4)

	void WaitTillDone(struct Unknown WorldContextObject, struct Unknown LatentInfo, struct FString& Result_); // Function LowEntryExtendedStandardLibrary.LowEntryLatentActionString.WaitTillDone(Final|Native|Public|HasOutParms|BlueprintCallable) // <Game+0x107b970>
};

// Class LowEntryExtendedStandardLibrary.LowEntryLong
struct ULowEntryLong : Object {
	struct TArray<Unknown> Bytes; //  0x28 Size(10)

	void SetBytes(struct TArray<Unknown>& ByteArray, int32_t Index, int32_t Length); // Function LowEntryExtendedStandardLibrary.LowEntryLong.SetBytes(Final|Native|Public|HasOutParms|BlueprintCallable) // <Game+0x1076500>
};

// Class LowEntryExtendedStandardLibrary.LowEntryParsedHashcash
struct ULowEntryParsedHashcash : Object {
	char Valid; //  0x28 Size(1)
	struct FString Resource; //  0x30 Size(10)
	struct Unknown Date; //  0x40 Size(8)
	int32_t Bits; //  0x48 Size(4)

	struct FString ToString(); // Function LowEntryExtendedStandardLibrary.LowEntryParsedHashcash.ToString(Final|Native|Public|BlueprintCallable|BlueprintPure) // <Game+0x107b300>
};

