// Enum ZipUtility.ZipUtilityCompressionLevel
enum class ZipUtilityCompressionLevel : uint8 {
	COMPRESSION_LEVEL_NONE = 0,
	COMPRESSION_LEVEL_FAST = 1,
	COMPRESSION_LEVEL_NORMAL = 2,
	COMPRESSION_LEVEL_MAX = 3
};

// Enum ZipUtility.EZipUtilityCompressionFormat
enum class EZipUtilityCompressionFormat : uint8 {
	EZipUtilityCompressionFormat = 0,
	EZipUtilityCompressionFormat = 1,
	EZipUtilityCompressionFormat = 2,
	EZipUtilityCompressionFormat = 3,
	EZipUtilityCompressionFormat = 4,
	EZipUtilityCompressionFormat = 5,
	EZipUtilityCompressionFormat = 6,
	EZipUtilityCompressionFormat = 7,
	EZipUtilityCompressionFormat = 8,
	EZipUtilityCompressionFormat = 9,
	EZipUtilityCompressionFormat = 10,
	EZipUtilityCompressionFormat = 11
};

// Enum ZipUtility.EZipUtilityCompletionState
enum class EZipUtilityCompletionState : uint8 {
	SUCCESS = 0,
	FAILURE_NOT_FOUND = 1,
	FAILURE_UNKNOWN = 2,
	EZipUtilityCompletionState_MAX = 3
};

// Class ZipUtility.ZipFileFunctionInternalCallback
struct UZipFileFunctionInternalCallback : Object {
	enum class Unknow CompressionFormat; //  0x30 Size(1)
	struct FString File; //  0x38 Size(10)
	struct FString DestinationFolder; //  0x48 Size(10)
	int32_t FileIndex; //  0x58 Size(4)
	struct Unknown Callback; //  0x60 Size(8)
	char bSingleFile; //  0x68 Size(1)
	char bFileFound; //  0x69 Size(1)
	char bUnzipto; //  0x6a Size(1)
};

