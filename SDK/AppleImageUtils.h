// Enum AppleImageUtils.EAppleTextureType
enum class EAppleTextureType : uint8 {
	EAppleTextureType = 0,
	EAppleTextureType = 1,
	EAppleTextureType = 2,
	EAppleTextureType = 3,
	EAppleTextureType = 4,
	EAppleTextureType = 5
};

// Enum AppleImageUtils.ETextureRotationDirection
enum class ETextureRotationDirection : uint8 {
	ETextureRotationDirection = 0,
	ETextureRotationDirection = 1,
	ETextureRotationDirection = 2,
	ETextureRotationDirection = 3,
	ETextureRotationDirection = 4
};

// Class AppleImageUtils.AppleImageUtilsBaseAsyncTasoxyi
struct UAppleImageUtilsBaseAsyncTasoxyi : Object {
	struct FMulticastInlineDelegate OnSuccess; //  0x30 Size(10)
	struct FMulticastInlineDelegate OnFailure; //  0x40 Size(10)
	struct Unknown ConversionResult; //  0x60 Size(20)

	struct Unknown CreateProxyObjectForConvertToTIFF(struct Unknown SourceImage, char bWantColor, char bUseGpu, float Scale, enum class Unknow Rotate); // Function AppleImageUtils.AppleImageUtilsBaseAsyncTas.CreateProxyObjectForConvertToTIFF(Final|Native|Static|Public|BlueprintCallable) // <Game+0x184f510>
};

