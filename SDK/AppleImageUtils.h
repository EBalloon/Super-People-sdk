// Enum AppleImageUtils.EAppleTextureType
enum class EAppleTextureType : uint8_t {
	EAppleTextureType = 0,
	EAppleTextureType = 1,
	EAppleTextureType = 2,
	EAppleTextureType = 3,
	EAppleTextureType = 4,
	EAppleTextureType = 5,
};

// Enum AppleImageUtils.ETextureRotationDirection
enum class ETextureRotationDirection : uint8_t {
	ETextureRotationDirection = 0,
	ETextureRotationDirection = 1,
	ETextureRotationDirection = 2,
	ETextureRotationDirection = 3,
	ETextureRotationDirection = 4,
};

// Class AppleImageUtils.AppleImageUtilsBaseAsyncTaskBlueprintProxy
class UAppleImageUtilsBaseAsyncTaskBlueprintProxy : public Object {

public:

	struct FMulticastInlineDelegate OnSuccess; // 0x30 (16)
	struct FMulticastInlineDelegate OnFailure; // 0x40 (16)
	struct Unknown ConversionResult; // 0x60 (32)

	struct Unknown CreateProxyObjectForConvertToTIFF(struct Unknown SourceImage, char bWantColor, char bUseGpu, float Scale, enum class Unknow Rotate); // Function AppleImageUtils.AppleImageUtilsBaseAsyncTaskBlueprintProxy.CreateProxyObjectForConvertToTIFF(Final|Native|Static|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1850980>
	struct Unknown CreateProxyObjectForConvertToPNG(struct Unknown SourceImage, char bWantColor, char bUseGpu, float Scale, enum class Unknow Rotate); // Function AppleImageUtils.AppleImageUtilsBaseAsyncTaskBlueprintProxy.CreateProxyObjectForConvertToPNG(Final|Native|Static|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18507E0>
	struct Unknown CreateProxyObjectForConvertToJPEG(struct Unknown SourceImage, int32_t Quality, char bWantColor, char bUseGpu, float Scale, enum class Unknow Rotate); // Function AppleImageUtils.AppleImageUtilsBaseAsyncTaskBlueprintProxy.CreateProxyObjectForConvertToJPEG(Final|Native|Static|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1850610>
	struct Unknown CreateProxyObjectForConvertToHEIF(struct Unknown SourceImage, int32_t Quality, char bWantColor, char bUseGpu, float Scale, enum class Unknow Rotate); // Function AppleImageUtils.AppleImageUtilsBaseAsyncTaskBlueprintProxy.CreateProxyObjectForConvertToHEIF(Final|Native|Static|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1850440>
};

// ScriptStruct AppleImageUtils.AppleImageUtilsImageConversionResult
struct FAppleImageUtilsImageConversionResult {
	struct FString Error; // 0x0 (16)
	struct TArray<Unknown> ImageData; // 0x10 (16)
};

