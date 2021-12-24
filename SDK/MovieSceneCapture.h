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
	EMovieSceneCaptureProtocolState = 0,
	EMovieSceneCaptureProtocolState = 1,
	EMovieSceneCaptureProtocolState = 2,
	EMovieSceneCaptureProtocolState = 3,
	EMovieSceneCaptureProtocolState = 4,
};

// Class MovieSceneCapture.MovieSceneCaptureProtocolBase
class UMovieSceneCaptureProtocolBase : public Object {

public:

	enum class Unknow State; // 0x50 (1)

	char IsCapturing(); // Function MovieSceneCapture.MovieSceneCaptureProtocolBase.IsCapturing(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x35187C0>
	enum class Unknow GetState(); // Function MovieSceneCapture.MovieSceneCaptureProtocolBase.GetState(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2EF9990>
};

// Class MovieSceneCapture.MasterAudioSubmixCaptureProtocol
class UMasterAudioSubmixCaptureProtocol : public UMovieSceneAudioCaptureProtocolBase {

public:

	struct FString Filename; // 0x58 (16)
};

// Class MovieSceneCapture.CompositionGraphCaptureProtocol
class UCompositionGraphCaptureProtocol : public UMovieSceneImageCaptureProtocolBase {

public:

	struct Unknown IncludeRenderPasses; // 0x58 (16)
	char bCaptureFramesInHDR : 0; // 0x68 (1)
	int32_t HDRCompressionQuality; // 0x6C (4)
	char CaptureGamut; // 0x70 (1)
	struct Unknown PostProcessingMaterial; // 0x78 (24)
	char bDisableScreenPercentage : 0; // 0x90 (1)
	struct Unknown PostProcessingMaterialPtr; // 0x98 (8)
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

	struct Unknown ImageCaptureProtocolType; // 0x38 (24)
	struct Unknown AudioCaptureProtocolType; // 0x50 (24)
	struct Unknown ImageCaptureProtocol; // 0x68 (8)
	struct Unknown AudioCaptureProtocol; // 0x70 (8)
	struct Unknown Settings; // 0x78 (112)
	char bUseSeparateProcess : 0; // 0xE8 (1)
	char bCloseEditorWhenCaptureStarts : 0; // 0xE9 (1)
	struct FString AdditionalCommandLineArguments; // 0xF0 (16)
	struct FString InheritedCommandLineArguments; // 0x100 (16)

	void SetImageCaptureProtocolType(struct Unknown* ProtocolType); // Function MovieSceneCapture.MovieSceneCapture.SetImageCaptureProtocolType(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3518AB0>
	void SetAudioCaptureProtocolType(struct Unknown* ProtocolType); // Function MovieSceneCapture.MovieSceneCapture.SetAudioCaptureProtocolType(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3518A30>
	struct Unknown GetImageCaptureProtocol(); // Function MovieSceneCapture.MovieSceneCapture.GetImageCaptureProtocol(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3518770>
	struct Unknown GetAudioCaptureProtocol(); // Function MovieSceneCapture.MovieSceneCapture.GetAudioCaptureProtocol(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x35186D0>
};

// Class MovieSceneCapture.LevelCapture
class ULevelCapture : public UMovieSceneCapture {

public:

	char bAutoStartCapture : 0; // 0x220 (1)
	struct Unknown PrerequisiteActorId; // 0x22C (16)
};

// Class MovieSceneCapture.UserDefinedCaptureProtocol
class UUserDefinedCaptureProtocol : public UMovieSceneImageCaptureProtocolBase {

public:

	struct Unknown World; // 0x58 (8)

	void StopCapturingFinalPixels(); // Function MovieSceneCapture.UserDefinedCaptureProtocol.StopCapturingFinalPixels(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3518CC0>
	void StartCapturingFinalPixels(struct Unknown& StreamID); // Function MovieSceneCapture.UserDefinedCaptureProtocol.StartCapturingFinalPixels(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3518B30>
	void ResolveBuffer(struct Unknown Buffer, struct Unknown& BufferID); // Function MovieSceneCapture.UserDefinedCaptureProtocol.ResolveBuffer(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3518860>
	void OnWarmUp(); // Function MovieSceneCapture.UserDefinedCaptureProtocol.OnWarmUp(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnTick(); // Function MovieSceneCapture.UserDefinedCaptureProtocol.OnTick(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnStartCapture(); // Function MovieSceneCapture.UserDefinedCaptureProtocol.OnStartCapture(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	char OnSetup(); // Function MovieSceneCapture.UserDefinedCaptureProtocol.OnSetup(Native|Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3518830>
	void OnPreTick(); // Function MovieSceneCapture.UserDefinedCaptureProtocol.OnPreTick(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnPixelsReceived(struct Unknown& Pixels, struct Unknown& ID, struct Unknown FrameMetrics); // Function MovieSceneCapture.UserDefinedCaptureProtocol.OnPixelsReceived(Event|Protected|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnPauseCapture(); // Function MovieSceneCapture.UserDefinedCaptureProtocol.OnPauseCapture(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnFinalize(); // Function MovieSceneCapture.UserDefinedCaptureProtocol.OnFinalize(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnCaptureFrame(); // Function MovieSceneCapture.UserDefinedCaptureProtocol.OnCaptureFrame(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	char OnCanFinalize(); // Function MovieSceneCapture.UserDefinedCaptureProtocol.OnCanFinalize(Native|Event|Protected|BlueprintEvent|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3518800>
	void OnBeginFinalize(); // Function MovieSceneCapture.UserDefinedCaptureProtocol.OnBeginFinalize(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	struct Unknown GetCurrentFrameMetrics(); // Function MovieSceneCapture.UserDefinedCaptureProtocol.GetCurrentFrameMetrics(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3518750>
	struct FString GenerateFilename(struct Unknown& InFrameMetrics); // Function MovieSceneCapture.UserDefinedCaptureProtocol.GenerateFilename(Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3518350>
};

// Class MovieSceneCapture.UserDefinedImageCaptureProtocol
class UUserDefinedImageCaptureProtocol : public UUserDefinedCaptureProtocol {

public:

	enum class Unknow Format; // 0xD8 (1)
	char bEnableCompression : 0; // 0xD9 (1)
	int32_t CompressionQuality; // 0xDC (4)

	void WriteImageToDisk(struct Unknown& PixelData, struct Unknown& StreamID, struct Unknown& FrameMetrics, char bCopyImageData); // Function MovieSceneCapture.UserDefinedImageCaptureProtocol.WriteImageToDisk(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3518CE0>
	struct FString GenerateFilenameForCurrentFrame(); // Function MovieSceneCapture.UserDefinedImageCaptureProtocol.GenerateFilenameForCurrentFrame(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3518650>
	struct FString GenerateFilenameForBuffer(struct Unknown Buffer, struct Unknown& StreamID); // Function MovieSceneCapture.UserDefinedImageCaptureProtocol.GenerateFilenameForBuffer(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3518440>
};

// Class MovieSceneCapture.VideoCaptureProtocol
class UVideoCaptureProtocol : public UFrameGrabberProtocol {

public:

	char bUseCompression : 0; // 0x68 (1)
	float CompressionQuality; // 0x6C (4)
};

// ScriptStruct MovieSceneCapture.CompositionGraphCapturePasses
struct FCompositionGraphCapturePasses {
	struct TArray<Unknown> Value; // 0x0 (16)
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
	struct Unknown OutputDirectory; // 0x0 (16)
	struct Unknown* GameModeOverride; // 0x10 (8)
	struct FString OutputFormat; // 0x18 (16)
	char bOverwriteExisting : 0; // 0x28 (1)
	char bUseRelativeFrameNumbers : 0; // 0x29 (1)
	int32_t HandleFrames; // 0x2C (4)
	struct FString MovieExtension; // 0x30 (16)
	char ZeroPadFrameNumbers; // 0x40 (1)
	struct Unknown FrameRate; // 0x44 (8)
	char bUseCustomFrameRate : 0; // 0x4C (1)
	struct Unknown CustomFrameRate; // 0x50 (8)
	struct Unknown Resolution; // 0x58 (8)
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
	struct TMap<Unknown, Unknown> Identifiers; // 0x0 (80)
};

