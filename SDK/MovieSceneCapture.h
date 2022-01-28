// Enum MovieSceneCapture.EHDRCaptureGamut
enum class EHDRCaptureGamut : uint8_t {
	HCGM_Rec709 = 0,
	HCGM_P3DCI = 1,
	HCGM_Rec2020 = 2,
	HCGM_ACES = 3,
	HCGM_ACEScg = 4,
	HCGM_Linear = 5,
	HCGM_MAX = 6,
};

// Enum MovieSceneCapture.EMovieSceneCaptureProtocolState
enum class EMovieSceneCaptureProtocolState : uint8_t {
	Idle = 0,
	Initialized = 1,
	Capturing = 2,
	Finalizing = 3,
	EMovieSceneCaptureProtocolState_MAX = 4,
};

// Class MovieSceneCapture.MovieSceneCaptureProtocolBase
class UMovieSceneCaptureProtocolBase : public Object {

public:

	enum class EMovieSceneCaptureProtocolState State; // 0x50 (1)

	char IsCapturing(); // Function MovieSceneCapture.MovieSceneCaptureProtocolBase.IsCapturing(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D06F80>
	enum class EMovieSceneCaptureProtocolState GetState(); // Function MovieSceneCapture.MovieSceneCaptureProtocolBase.GetState(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x36E8B10>
};

// Class MovieSceneCapture.MasterAudioSubmixCaptureProtocol
class UMasterAudioSubmixCaptureProtocol : public UMovieSceneAudioCaptureProtocolBase {

public:

	struct FString Filename; // 0x58 (16)
};

// Class MovieSceneCapture.CompositionGraphCaptureProtocol
class UCompositionGraphCaptureProtocol : public UMovieSceneImageCaptureProtocolBase {

public:

	struct FCompositionGraphCapturePasses IncludeRenderPasses; // 0x58 (16)
	char bCaptureFramesInHDR : 0; // 0x68 (1)
	int32_t HDRCompressionQuality; // 0x6C (4)
	char CaptureGamut; // 0x70 (1)
	struct FSoftObjectPath PostProcessingMaterial; // 0x78 (24)
	char bDisableScreenPercentage : 0; // 0x90 (1)
	struct UMaterialInterface PostProcessingMaterialPtr; // 0x98 (8)
};

// Class MovieSceneCapture.CompressedImageSequenceProtocol
class UCompressedImageSequenceProtocol : public UImageSequenceProtocol {

public:

	int32_t CompressionQuality; // 0xD8 (4)
};

// Class MovieSceneCapture.ImageSequenceProtocol_EXR
class UImageSequenceProtocol_EXR : public UImageSequenceProtocol {

public:

	char bCompressed : 0; // 0xD8 (1)
	char CaptureGamut; // 0xD9 (1)
};

// Class MovieSceneCapture.MovieSceneCapture
class UMovieSceneCapture : public Object {

public:

	struct FSoftClassPath ImageCaptureProtocolType; // 0x38 (24)
	struct FSoftClassPath AudioCaptureProtocolType; // 0x50 (24)
	struct UMovieSceneImageCaptureProtocolBase ImageCaptureProtocol; // 0x68 (8)
	struct UMovieSceneAudioCaptureProtocolBase AudioCaptureProtocol; // 0x70 (8)
	struct FMovieSceneCaptureSettings Settings; // 0x78 (112)
	char bUseSeparateProcess : 0; // 0xE8 (1)
	char bCloseEditorWhenCaptureStarts : 0; // 0xE9 (1)
	struct FString AdditionalCommandLineArguments; // 0xF0 (16)
	struct FString InheritedCommandLineArguments; // 0x100 (16)

	void SetImageCaptureProtocolType(struct UClass* ProtocolType); // Function MovieSceneCapture.MovieSceneCapture.SetImageCaptureProtocolType(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D07270>
	void SetAudioCaptureProtocolType(struct UClass* ProtocolType); // Function MovieSceneCapture.MovieSceneCapture.SetAudioCaptureProtocolType(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D071F0>
	struct UMovieSceneCaptureProtocolBase GetImageCaptureProtocol(); // Function MovieSceneCapture.MovieSceneCapture.GetImageCaptureProtocol(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D06F30>
	struct UMovieSceneCaptureProtocolBase GetAudioCaptureProtocol(); // Function MovieSceneCapture.MovieSceneCapture.GetAudioCaptureProtocol(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D06E90>
};

// Class MovieSceneCapture.LevelCapture
class ULevelCapture : public UMovieSceneCapture {

public:

	char bAutoStartCapture : 0; // 0x220 (1)
	struct FGuid PrerequisiteActorId; // 0x22C (16)
};

// Class MovieSceneCapture.UserDefinedCaptureProtocol
class UUserDefinedCaptureProtocol : public UMovieSceneImageCaptureProtocolBase {

public:

	struct UWorld World; // 0x58 (8)

	void StopCapturingFinalPixels(); // Function MovieSceneCapture.UserDefinedCaptureProtocol.StopCapturingFinalPixels(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D07480>
	void StartCapturingFinalPixels(struct FCapturedPixelsID& StreamID); // Function MovieSceneCapture.UserDefinedCaptureProtocol.StartCapturingFinalPixels(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D072F0>
	void ResolveBuffer(struct UTexture Buffer, struct FCapturedPixelsID& BufferID); // Function MovieSceneCapture.UserDefinedCaptureProtocol.ResolveBuffer(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D07020>
	void OnWarmUp(); // Function MovieSceneCapture.UserDefinedCaptureProtocol.OnWarmUp(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void OnTick(); // Function MovieSceneCapture.UserDefinedCaptureProtocol.OnTick(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void OnStartCapture(); // Function MovieSceneCapture.UserDefinedCaptureProtocol.OnStartCapture(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	char OnSetup(); // Function MovieSceneCapture.UserDefinedCaptureProtocol.OnSetup(Native|Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D06FF0>
	void OnPreTick(); // Function MovieSceneCapture.UserDefinedCaptureProtocol.OnPreTick(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void OnPixelsReceived(struct FCapturedPixels& Pixels, struct FCapturedPixelsID& ID, struct FFrameMetrics FrameMetrics); // Function MovieSceneCapture.UserDefinedCaptureProtocol.OnPixelsReceived(Event|Protected|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void OnPauseCapture(); // Function MovieSceneCapture.UserDefinedCaptureProtocol.OnPauseCapture(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void OnFinalize(); // Function MovieSceneCapture.UserDefinedCaptureProtocol.OnFinalize(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void OnCaptureFrame(); // Function MovieSceneCapture.UserDefinedCaptureProtocol.OnCaptureFrame(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	char OnCanFinalize(); // Function MovieSceneCapture.UserDefinedCaptureProtocol.OnCanFinalize(Native|Event|Protected|BlueprintEvent|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D06FC0>
	void OnBeginFinalize(); // Function MovieSceneCapture.UserDefinedCaptureProtocol.OnBeginFinalize(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	struct FFrameMetrics GetCurrentFrameMetrics(); // Function MovieSceneCapture.UserDefinedCaptureProtocol.GetCurrentFrameMetrics(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D06F10>
	struct FString GenerateFilename(struct FFrameMetrics& InFrameMetrics); // Function MovieSceneCapture.UserDefinedCaptureProtocol.GenerateFilename(Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D06B10>
};

// Class MovieSceneCapture.UserDefinedImageCaptureProtocol
class UUserDefinedImageCaptureProtocol : public UUserDefinedCaptureProtocol {

public:

	enum class EDesiredImageFormat Format; // 0xD8 (1)
	char bEnableCompression : 0; // 0xD9 (1)
	int32_t CompressionQuality; // 0xDC (4)

	void WriteImageToDisk(struct FCapturedPixels& PixelData, struct FCapturedPixelsID& StreamID, struct FFrameMetrics& FrameMetrics, char bCopyImageData); // Function MovieSceneCapture.UserDefinedImageCaptureProtocol.WriteImageToDisk(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D074A0>
	struct FString GenerateFilenameForCurrentFrame(); // Function MovieSceneCapture.UserDefinedImageCaptureProtocol.GenerateFilenameForCurrentFrame(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D06E10>
	struct FString GenerateFilenameForBuffer(struct UTexture Buffer, struct FCapturedPixelsID& StreamID); // Function MovieSceneCapture.UserDefinedImageCaptureProtocol.GenerateFilenameForBuffer(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D06C00>
};

// Class MovieSceneCapture.VideoCaptureProtocol
class UVideoCaptureProtocol : public UFrameGrabberProtocol {

public:

	char bUseCompression : 0; // 0x68 (1)
	float CompressionQuality; // 0x6C (4)
};

// ScriptStruct MovieSceneCapture.CompositionGraphCapturePasses
struct FCompositionGraphCapturePasses {
	struct TArray<struct FString> Value; // 0x0 (16)
};

// ScriptStruct MovieSceneCapture.FrameMetrics
struct FFrameMetrics {
	float TotalElapsedTime; // 0x0 (4)
	float FrameDelta; // 0x4 (4)
	int32_t FrameNumber; // 0x8 (4)
	int32_t NumDroppedFrames; // 0xC (4)
};

// ScriptStruct MovieSceneCapture.MovieSceneCaptureSettings
struct FMovieSceneCaptureSettings {
	struct FDirectoryPath OutputDirectory; // 0x0 (16)
	struct UClass* GameModeOverride; // 0x10 (8)
	struct FString OutputFormat; // 0x18 (16)
	char bOverwriteExisting : 0; // 0x28 (1)
	char bUseRelativeFrameNumbers : 0; // 0x29 (1)
	int32_t HandleFrames; // 0x2C (4)
	struct FString MovieExtension; // 0x30 (16)
	char ZeroPadFrameNumbers; // 0x40 (1)
	struct FFrameRate FrameRate; // 0x44 (8)
	char bUseCustomFrameRate : 0; // 0x4C (1)
	struct FFrameRate CustomFrameRate; // 0x50 (8)
	struct FCaptureResolution Resolution; // 0x58 (8)
	char bEnableTextureStreaming : 0; // 0x60 (1)
	char bCinematicEngineScalability : 0; // 0x61 (1)
	char bCinematicMode : 0; // 0x62 (1)
	char bAllowMovement : 0; // 0x63 (1)
	char bAllowTurning : 0; // 0x64 (1)
	char bShowPlayer : 0; // 0x65 (1)
	char bShowHUD : 0; // 0x66 (1)
	char bUsePathTracer : 0; // 0x67 (1)
	int32_t PathTracerSamplePerPixel; // 0x68 (4)
};

// ScriptStruct MovieSceneCapture.CaptureResolution
struct FCaptureResolution {
	int32_t ResX; // 0x0 (4)
	int32_t ResY; // 0x4 (4)
};

// ScriptStruct MovieSceneCapture.CapturedPixelsID
struct FCapturedPixelsID {
	struct TMap<struct FName, struct FName> Identifiers; // 0x0 (80)
};

// Function MovieSceneCapture.MovieSceneCaptureProtocolBase.IsCapturing
inline char UMovieSceneCaptureProtocolBase::IsCapturing() {
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.MovieSceneCaptureProtocolBase.IsCapturing");

	struct IsCapturing_Params {
		
		char ReturnValue;

	}; IsCapturing_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MovieSceneCapture.MovieSceneCaptureProtocolBase.GetState
inline enum class EMovieSceneCaptureProtocolState UMovieSceneCaptureProtocolBase::GetState() {
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.MovieSceneCaptureProtocolBase.GetState");

	struct GetState_Params {
		
		enum class EMovieSceneCaptureProtocolState ReturnValue;

	}; GetState_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MovieSceneCapture.MovieSceneCapture.SetImageCaptureProtocolType
inline void UMovieSceneCapture::SetImageCaptureProtocolType(struct UClass* ProtocolType) {
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.MovieSceneCapture.SetImageCaptureProtocolType");

	struct SetImageCaptureProtocolType_Params {
		struct UClass* ProtocolType;
	}; SetImageCaptureProtocolType_Params Params;

	Params.ProtocolType = ProtocolType;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MovieSceneCapture.MovieSceneCapture.SetAudioCaptureProtocolType
inline void UMovieSceneCapture::SetAudioCaptureProtocolType(struct UClass* ProtocolType) {
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.MovieSceneCapture.SetAudioCaptureProtocolType");

	struct SetAudioCaptureProtocolType_Params {
		struct UClass* ProtocolType;
	}; SetAudioCaptureProtocolType_Params Params;

	Params.ProtocolType = ProtocolType;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MovieSceneCapture.MovieSceneCapture.GetImageCaptureProtocol
inline struct UMovieSceneCaptureProtocolBase UMovieSceneCapture::GetImageCaptureProtocol() {
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.MovieSceneCapture.GetImageCaptureProtocol");

	struct GetImageCaptureProtocol_Params {
		
		struct UMovieSceneCaptureProtocolBase ReturnValue;

	}; GetImageCaptureProtocol_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MovieSceneCapture.MovieSceneCapture.GetAudioCaptureProtocol
inline struct UMovieSceneCaptureProtocolBase UMovieSceneCapture::GetAudioCaptureProtocol() {
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.MovieSceneCapture.GetAudioCaptureProtocol");

	struct GetAudioCaptureProtocol_Params {
		
		struct UMovieSceneCaptureProtocolBase ReturnValue;

	}; GetAudioCaptureProtocol_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MovieSceneCapture.UserDefinedCaptureProtocol.StopCapturingFinalPixels
inline void UUserDefinedCaptureProtocol::StopCapturingFinalPixels() {
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.UserDefinedCaptureProtocol.StopCapturingFinalPixels");

	struct StopCapturingFinalPixels_Params {
		
	}; StopCapturingFinalPixels_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MovieSceneCapture.UserDefinedCaptureProtocol.StartCapturingFinalPixels
inline void UUserDefinedCaptureProtocol::StartCapturingFinalPixels(struct FCapturedPixelsID& StreamID) {
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.UserDefinedCaptureProtocol.StartCapturingFinalPixels");

	struct StartCapturingFinalPixels_Params {
		struct FCapturedPixelsID& StreamID;
	}; StartCapturingFinalPixels_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	StreamID = Params.StreamID;

}

// Function MovieSceneCapture.UserDefinedCaptureProtocol.ResolveBuffer
inline void UUserDefinedCaptureProtocol::ResolveBuffer(struct UTexture Buffer, struct FCapturedPixelsID& BufferID) {
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.UserDefinedCaptureProtocol.ResolveBuffer");

	struct ResolveBuffer_Params {
		struct UTexture Buffer;
		struct FCapturedPixelsID& BufferID;
	}; ResolveBuffer_Params Params;

	Params.Buffer = Buffer;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	BufferID = Params.BufferID;

}

// Function MovieSceneCapture.UserDefinedCaptureProtocol.OnWarmUp
inline void UUserDefinedCaptureProtocol::OnWarmUp() {
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.UserDefinedCaptureProtocol.OnWarmUp");

	struct OnWarmUp_Params {
		
	}; OnWarmUp_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MovieSceneCapture.UserDefinedCaptureProtocol.OnTick
inline void UUserDefinedCaptureProtocol::OnTick() {
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.UserDefinedCaptureProtocol.OnTick");

	struct OnTick_Params {
		
	}; OnTick_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MovieSceneCapture.UserDefinedCaptureProtocol.OnStartCapture
inline void UUserDefinedCaptureProtocol::OnStartCapture() {
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.UserDefinedCaptureProtocol.OnStartCapture");

	struct OnStartCapture_Params {
		
	}; OnStartCapture_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MovieSceneCapture.UserDefinedCaptureProtocol.OnSetup
inline char UUserDefinedCaptureProtocol::OnSetup() {
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.UserDefinedCaptureProtocol.OnSetup");

	struct OnSetup_Params {
		
		char ReturnValue;

	}; OnSetup_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MovieSceneCapture.UserDefinedCaptureProtocol.OnPreTick
inline void UUserDefinedCaptureProtocol::OnPreTick() {
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.UserDefinedCaptureProtocol.OnPreTick");

	struct OnPreTick_Params {
		
	}; OnPreTick_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MovieSceneCapture.UserDefinedCaptureProtocol.OnPixelsReceived
inline void UUserDefinedCaptureProtocol::OnPixelsReceived(struct FCapturedPixels& Pixels, struct FCapturedPixelsID& ID, struct FFrameMetrics FrameMetrics) {
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.UserDefinedCaptureProtocol.OnPixelsReceived");

	struct OnPixelsReceived_Params {
		struct FCapturedPixels& Pixels;
		struct FCapturedPixelsID& ID;
		struct FFrameMetrics FrameMetrics;
	}; OnPixelsReceived_Params Params;

	Params.FrameMetrics = FrameMetrics;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Pixels = Params.Pixels;
	ID = Params.ID;

}

// Function MovieSceneCapture.UserDefinedCaptureProtocol.OnPauseCapture
inline void UUserDefinedCaptureProtocol::OnPauseCapture() {
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.UserDefinedCaptureProtocol.OnPauseCapture");

	struct OnPauseCapture_Params {
		
	}; OnPauseCapture_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MovieSceneCapture.UserDefinedCaptureProtocol.OnFinalize
inline void UUserDefinedCaptureProtocol::OnFinalize() {
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.UserDefinedCaptureProtocol.OnFinalize");

	struct OnFinalize_Params {
		
	}; OnFinalize_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MovieSceneCapture.UserDefinedCaptureProtocol.OnCaptureFrame
inline void UUserDefinedCaptureProtocol::OnCaptureFrame() {
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.UserDefinedCaptureProtocol.OnCaptureFrame");

	struct OnCaptureFrame_Params {
		
	}; OnCaptureFrame_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MovieSceneCapture.UserDefinedCaptureProtocol.OnCanFinalize
inline char UUserDefinedCaptureProtocol::OnCanFinalize() {
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.UserDefinedCaptureProtocol.OnCanFinalize");

	struct OnCanFinalize_Params {
		
		char ReturnValue;

	}; OnCanFinalize_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MovieSceneCapture.UserDefinedCaptureProtocol.OnBeginFinalize
inline void UUserDefinedCaptureProtocol::OnBeginFinalize() {
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.UserDefinedCaptureProtocol.OnBeginFinalize");

	struct OnBeginFinalize_Params {
		
	}; OnBeginFinalize_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MovieSceneCapture.UserDefinedCaptureProtocol.GetCurrentFrameMetrics
inline struct FFrameMetrics UUserDefinedCaptureProtocol::GetCurrentFrameMetrics() {
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.UserDefinedCaptureProtocol.GetCurrentFrameMetrics");

	struct GetCurrentFrameMetrics_Params {
		
		struct FFrameMetrics ReturnValue;

	}; GetCurrentFrameMetrics_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MovieSceneCapture.UserDefinedCaptureProtocol.GenerateFilename
inline struct FString UUserDefinedCaptureProtocol::GenerateFilename(struct FFrameMetrics& InFrameMetrics) {
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.UserDefinedCaptureProtocol.GenerateFilename");

	struct GenerateFilename_Params {
		struct FFrameMetrics& InFrameMetrics;
		struct FString ReturnValue;

	}; GenerateFilename_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	InFrameMetrics = Params.InFrameMetrics;


	return params.ReturnValue;
}

// Function MovieSceneCapture.UserDefinedImageCaptureProtocol.WriteImageToDisk
inline void UUserDefinedImageCaptureProtocol::WriteImageToDisk(struct FCapturedPixels& PixelData, struct FCapturedPixelsID& StreamID, struct FFrameMetrics& FrameMetrics, char bCopyImageData) {
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.UserDefinedImageCaptureProtocol.WriteImageToDisk");

	struct WriteImageToDisk_Params {
		struct FCapturedPixels& PixelData;
		struct FCapturedPixelsID& StreamID;
		struct FFrameMetrics& FrameMetrics;
		char bCopyImageData;
	}; WriteImageToDisk_Params Params;

	Params.bCopyImageData = bCopyImageData;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	PixelData = Params.PixelData;
	StreamID = Params.StreamID;
	FrameMetrics = Params.FrameMetrics;

}

// Function MovieSceneCapture.UserDefinedImageCaptureProtocol.GenerateFilenameForCurrentFrame
inline struct FString UUserDefinedImageCaptureProtocol::GenerateFilenameForCurrentFrame() {
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.UserDefinedImageCaptureProtocol.GenerateFilenameForCurrentFrame");

	struct GenerateFilenameForCurrentFrame_Params {
		
		struct FString ReturnValue;

	}; GenerateFilenameForCurrentFrame_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MovieSceneCapture.UserDefinedImageCaptureProtocol.GenerateFilenameForBuffer
inline struct FString UUserDefinedImageCaptureProtocol::GenerateFilenameForBuffer(struct UTexture Buffer, struct FCapturedPixelsID& StreamID) {
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.UserDefinedImageCaptureProtocol.GenerateFilenameForBuffer");

	struct GenerateFilenameForBuffer_Params {
		struct UTexture Buffer;
		struct FCapturedPixelsID& StreamID;
		struct FString ReturnValue;

	}; GenerateFilenameForBuffer_Params Params;

	Params.Buffer = Buffer;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	StreamID = Params.StreamID;


	return params.ReturnValue;
}

