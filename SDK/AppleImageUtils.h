// Enum AppleImageUtils.EAppleTextureType
enum class EAppleTextureType : uint8_t {
	Unknown = 0,
	Image = 1,
	PixelBuffer = 2,
	Surface = 3,
	MetalTexture = 4,
	EAppleTextureType_MAX = 5,
};

// Enum AppleImageUtils.ETextureRotationDirection
enum class ETextureRotationDirection : uint8_t {
	None = 0,
	Left = 1,
	Right = 2,
	Down = 3,
	ETextureRotationDirection_MAX = 4,
};

// Class AppleImageUtils.AppleImageUtilsBaseAsyncTaskBlueprintProxy
class UAppleImageUtilsBaseAsyncTaskBlueprintProxy : public Object {

public:

	struct FMulticastInlineDelegate OnSuccess; // 0x30 (16)
	struct FMulticastInlineDelegate OnFailure; // 0x40 (16)
	struct Unknown ConversionResult; // 0x60 (32)

	struct Unknown CreateProxyObjectForConvertToTIFF(struct Unknown SourceImage, char bWantColor, char bUseGpu, float Scale, enum class Unknow Rotate); // Function AppleImageUtils.AppleImageUtilsBaseAsyncTaskBlueprintProxy.CreateProxyObjectForConvertToTIFF(Final|Native|Static|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18652A0>
	struct Unknown CreateProxyObjectForConvertToPNG(struct Unknown SourceImage, char bWantColor, char bUseGpu, float Scale, enum class Unknow Rotate); // Function AppleImageUtils.AppleImageUtilsBaseAsyncTaskBlueprintProxy.CreateProxyObjectForConvertToPNG(Final|Native|Static|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1865100>
	struct Unknown CreateProxyObjectForConvertToJPEG(struct Unknown SourceImage, int32_t Quality, char bWantColor, char bUseGpu, float Scale, enum class Unknow Rotate); // Function AppleImageUtils.AppleImageUtilsBaseAsyncTaskBlueprintProxy.CreateProxyObjectForConvertToJPEG(Final|Native|Static|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1864F30>
	struct Unknown CreateProxyObjectForConvertToHEIF(struct Unknown SourceImage, int32_t Quality, char bWantColor, char bUseGpu, float Scale, enum class Unknow Rotate); // Function AppleImageUtils.AppleImageUtilsBaseAsyncTaskBlueprintProxy.CreateProxyObjectForConvertToHEIF(Final|Native|Static|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1864D60>
};

// ScriptStruct AppleImageUtils.AppleImageUtilsImageConversionResult
struct FAppleImageUtilsImageConversionResult {
	struct FString Error; // 0x0 (16)
	struct TArray<Unknown> ImageData; // 0x10 (16)
};

// Function AppleImageUtils.AppleImageUtilsBaseAsyncTaskBlueprintProxy.CreateProxyObjectForConvertToTIFF
inline struct Unknown UAppleImageUtilsBaseAsyncTaskBlueprintProxy::CreateProxyObjectForConvertToTIFF(struct Unknown SourceImage, char bWantColor, char bUseGpu, float Scale, enum class Unknow Rotate) {
	static auto fn = UObject::FindObject<UFunction>("Function AppleImageUtils.AppleImageUtilsBaseAsyncTaskBlueprintProxy.CreateProxyObjectForConvertToTIFF");

	struct CreateProxyObjectForConvertToTIFF_Params {
		struct Unknown SourceImage;
		char bWantColor;
		char bUseGpu;
		float Scale;
		enum class Unknow Rotate;
		struct Unknown ReturnValue;

	}; CreateProxyObjectForConvertToTIFF_Params Params;

	Params.SourceImage = SourceImage;
	Params.bWantColor = bWantColor;
	Params.bUseGpu = bUseGpu;
	Params.Scale = Scale;
	Params.Rotate = Rotate;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function AppleImageUtils.AppleImageUtilsBaseAsyncTaskBlueprintProxy.CreateProxyObjectForConvertToPNG
inline struct Unknown UAppleImageUtilsBaseAsyncTaskBlueprintProxy::CreateProxyObjectForConvertToPNG(struct Unknown SourceImage, char bWantColor, char bUseGpu, float Scale, enum class Unknow Rotate) {
	static auto fn = UObject::FindObject<UFunction>("Function AppleImageUtils.AppleImageUtilsBaseAsyncTaskBlueprintProxy.CreateProxyObjectForConvertToPNG");

	struct CreateProxyObjectForConvertToPNG_Params {
		struct Unknown SourceImage;
		char bWantColor;
		char bUseGpu;
		float Scale;
		enum class Unknow Rotate;
		struct Unknown ReturnValue;

	}; CreateProxyObjectForConvertToPNG_Params Params;

	Params.SourceImage = SourceImage;
	Params.bWantColor = bWantColor;
	Params.bUseGpu = bUseGpu;
	Params.Scale = Scale;
	Params.Rotate = Rotate;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function AppleImageUtils.AppleImageUtilsBaseAsyncTaskBlueprintProxy.CreateProxyObjectForConvertToJPEG
inline struct Unknown UAppleImageUtilsBaseAsyncTaskBlueprintProxy::CreateProxyObjectForConvertToJPEG(struct Unknown SourceImage, int32_t Quality, char bWantColor, char bUseGpu, float Scale, enum class Unknow Rotate) {
	static auto fn = UObject::FindObject<UFunction>("Function AppleImageUtils.AppleImageUtilsBaseAsyncTaskBlueprintProxy.CreateProxyObjectForConvertToJPEG");

	struct CreateProxyObjectForConvertToJPEG_Params {
		struct Unknown SourceImage;
		int32_t Quality;
		char bWantColor;
		char bUseGpu;
		float Scale;
		enum class Unknow Rotate;
		struct Unknown ReturnValue;

	}; CreateProxyObjectForConvertToJPEG_Params Params;

	Params.SourceImage = SourceImage;
	Params.Quality = Quality;
	Params.bWantColor = bWantColor;
	Params.bUseGpu = bUseGpu;
	Params.Scale = Scale;
	Params.Rotate = Rotate;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function AppleImageUtils.AppleImageUtilsBaseAsyncTaskBlueprintProxy.CreateProxyObjectForConvertToHEIF
inline struct Unknown UAppleImageUtilsBaseAsyncTaskBlueprintProxy::CreateProxyObjectForConvertToHEIF(struct Unknown SourceImage, int32_t Quality, char bWantColor, char bUseGpu, float Scale, enum class Unknow Rotate) {
	static auto fn = UObject::FindObject<UFunction>("Function AppleImageUtils.AppleImageUtilsBaseAsyncTaskBlueprintProxy.CreateProxyObjectForConvertToHEIF");

	struct CreateProxyObjectForConvertToHEIF_Params {
		struct Unknown SourceImage;
		int32_t Quality;
		char bWantColor;
		char bUseGpu;
		float Scale;
		enum class Unknow Rotate;
		struct Unknown ReturnValue;

	}; CreateProxyObjectForConvertToHEIF_Params Params;

	Params.SourceImage = SourceImage;
	Params.Quality = Quality;
	Params.bWantColor = bWantColor;
	Params.bUseGpu = bUseGpu;
	Params.Scale = Scale;
	Params.Rotate = Rotate;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

