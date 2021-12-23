// Enum ImageWriteQueue.EDesiredImageFormat
enum class EDesiredImageFormat : uint8 {
	EDesiredImageFormat = 0
	EDesiredImageFormat = 1
	EDesiredImageFormat = 2
	EDesiredImageFormat = 3
	EDesiredImageFormat = 4
};

// ScriptStruct ImageWriteQueue.ImageWriteOptions
struct FImageWriteOptions {
	enum class Unknow Format; // 0x0 (1)
	struct FDelegate OnComplete; // 0x4 (16)
	int32_t CompressionQuality; // 0x14 (4)
	char bOverwriteFile : 0; // 0x18 (1)
	char bAsync : 0; // 0x19 (1)
};

