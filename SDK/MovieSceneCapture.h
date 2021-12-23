// Enum MovieSceneCapture.EHDRCaptureGamut
enum class EHDRCaptureGamut : uint8 {
	HCGM_Rec709 = 0
	HCGM_P3DCI = 1
	HCGM_Rec2020 = 2
	HCGM_ACES = 3
	HCGM_ACEScg = 4
	HCGM_Linear = 5
	HCGM_MAX = 6
};

// Enum MovieSceneCapture.EMovieSceneCaptureProtocolState
enum class EMovieSceneCaptureProtocolState : uint8 {
	EMovieSceneCaptureProtocolState = 0
	EMovieSceneCaptureProtocolState = 1
	EMovieSceneCaptureProtocolState = 2
	EMovieSceneCaptureProtocolState = 3
	EMovieSceneCaptureProtocolState = 4
};

// Class MovieSceneCapture.MovieSceneCaptureProtocolBase
struct UMovieSceneCaptureProtocolBase : Object {
	enum class Unknow State; // 0x50 (1)

	char IsCapturing(); // Function MovieSceneCapture.MovieSceneCaptureProtocolBase.IsCapturing(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x35174C0>
	enum class Unknow GetState(); // Function MovieSceneCapture.MovieSceneCaptureProtocolBase.GetState(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2EF8680>
};

// Class MovieSceneCapture.MasterAudioSubmixCaptureProtocol
struct UMasterAudioSubmixCaptureProtocol : UMovieSceneAudioCaptureProtocolBase {
	struct FString Filename; // 0x58 (16)
};

// Class MovieSceneCapture.CompositionGraphCaptureProtocol
struct UCompositionGraphCaptureProtocol : UMovieSceneImageCaptureProtocolBase {
	struct Unknown IncludeRenderPasses; // 0x58 (16)
	char bCaptureFramesInHDR : 0; // 0x68 (1)
	int32_t HDRCompressionQuality; // 0x6C (4)
	char CaptureGamut; // 0x70 (1)
	struct Unknown PostProcessingMaterial; // 0x78 (24)
	char bDisableScreenPercentage : 0; // 0x90 (1)
	struct Unknown PostProcessingMaterialPtr; // 0x98 (8)
};

// Class MovieSceneCapture.CompressedImageSequenceProtocol
struct UCompressedImageSequenceProtocol : UImageSequenceProtocol {
	int32_t CompressionQuality; // 0xD8 (4)
};

// Class MovieSceneCapture.ImageSequenceProtocol_EXR
struct UImageSequenceProtocol_EXR : UImageSequenceProtocol {
	char bCompressed : 0; // 0xD8 (1)
	char CaptureGamut; // 0xD9 (1)
};

// Class MovieSceneCapture.MovieSceneCapture
struct UMovieSceneCapture : Object {
	struct Unknown ImageCaptureProtocolType; // 0x38 (24)
	struct Unknown AudioCaptureProtocolType; // 0x50 (24)
	struct Unknown ImageCaptureProtocol; // 0x68 (8)
	struct Unknown AudioCaptureProtocol; // 0x70 (8)
	struct Unknown Settings; // 0x78 (112)
	char bUseSeparateProcess : 0; // 0xE8 (1)
	char bCloseEditorWhenCaptureStarts : 0; // 0xE9 (1)
	struct FString AdditionalCommandLineArguments; // 0xF0 (16)
	struct FString InheritedCommandLineArguments; // 0x100 (16)

	void SetImageCaptureProtocolType(struct Unknown* ProtocolType); // Function MovieSceneCapture.MovieSceneCapture.SetImageCaptureProtocolType(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x35177B0>
	void SetAudioCaptureProtocolType(struct Unknown* ProtocolType); // Function MovieSceneCapture.MovieSceneCapture.SetAudioCaptureProtocolType(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3517730>
	struct Unknown GetImageCaptureProtocol(); // Function MovieSceneCapture.MovieSceneCapture.GetImageCaptureProtocol(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3517470>
	struct Unknown GetAudioCaptureProtocol(); // Function MovieSceneCapture.MovieSceneCapture.GetAudioCaptureProtocol(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x35173D0>
};

// Class MovieSceneCapture.LevelCapture
struct ULevelCapture : UMovieSceneCapture {
	char bAutoStartCapture : 0; // 0x220 (1)
	struct Unknown PrerequisiteActorId; // 0x22C (16)
};

// Class MovieSceneCapture.UserDefinedCaptureProtocol
struct UUserDefinedCaptureProtocol : UMovieSceneImageCaptureProtocolBase {
	struct Unknown World; // 0x58 (8)

	void StopCapturingFinalPixels(); // Function MovieSceneCapture.UserDefinedCaptureProtocol.StopCapturingFinalPixels(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x35179C0>
	void StartCapturingFinalPixels(struct Unknown& StreamID); // Function MovieSceneCapture.UserDefinedCaptureProtocol.StartCapturingFinalPixels(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3517830>
	void ResolveBuffer(struct Unknown Buffer, struct Unknown& BufferID); // Function MovieSceneCapture.UserDefinedCaptureProtocol.ResolveBuffer(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3517560>
	void OnWarmUp(); // Function MovieSceneCapture.UserDefinedCaptureProtocol.OnWarmUp(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void OnTick(); // Function MovieSceneCapture.UserDefinedCaptureProtocol.OnTick(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void OnStartCapture(); // Function MovieSceneCapture.UserDefinedCaptureProtocol.OnStartCapture(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	char OnSetup(); // Function MovieSceneCapture.UserDefinedCaptureProtocol.OnSetup(Native|Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3517530>
	void OnPreTick(); // Function MovieSceneCapture.UserDefinedCaptureProtocol.OnPreTick(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void OnPixelsReceived(struct Unknown& Pixels, struct Unknown& ID, struct Unknown FrameMetrics); // Function MovieSceneCapture.UserDefinedCaptureProtocol.OnPixelsReceived(Event|Protected|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void OnPauseCapture(); // Function MovieSceneCapture.UserDefinedCaptureProtocol.OnPauseCapture(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void OnFinalize(); // Function MovieSceneCapture.UserDefinedCaptureProtocol.OnFinalize(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void OnCaptureFrame(); // Function MovieSceneCapture.UserDefinedCaptureProtocol.OnCaptureFrame(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	char OnCanFinalize(); // Function MovieSceneCapture.UserDefinedCaptureProtocol.OnCanFinalize(Native|Event|Protected|BlueprintEvent|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3517500>
	void OnBeginFinalize(); // Function MovieSceneCapture.UserDefinedCaptureProtocol.OnBeginFinalize(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	struct Unknown GetCurrentFrameMetrics(); // Function MovieSceneCapture.UserDefinedCaptureProtocol.GetCurrentFrameMetrics(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3517450>
	struct FString GenerateFilename(struct Unknown& InFrameMetrics); // Function MovieSceneCapture.UserDefinedCaptureProtocol.GenerateFilename(Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3517050>
};

// Class MovieSceneCapture.UserDefinedImageCaptureProtocol
struct UUserDefinedImageCaptureProtocol : UUserDefinedCaptureProtocol {
	enum class Unknow Format; // 0xD8 (1)
	char bEnableCompression : 0; // 0xD9 (1)
	int32_t CompressionQuality; // 0xDC (4)

	void WriteImageToDisk(struct Unknown& PixelData, struct Unknown& StreamID, struct Unknown& FrameMetrics, char bCopyImageData); // Function MovieSceneCapture.UserDefinedImageCaptureProtocol.WriteImageToDisk(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x35179E0>
	struct FString GenerateFilenameForCurrentFrame(); // Function MovieSceneCapture.UserDefinedImageCaptureProtocol.GenerateFilenameForCurrentFrame(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3517350>
	struct FString GenerateFilenameForBuffer(struct Unknown Buffer, struct Unknown& StreamID); // Function MovieSceneCapture.UserDefinedImageCaptureProtocol.GenerateFilenameForBuffer(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3517140>
};

// Class MovieSceneCapture.VideoCaptureProtocol
struct UVideoCaptureProtocol : UFrameGrabberProtocol {
	char bUseCompression : 0; // 0x68 (1)
	float CompressionQuality; // 0x6C (4)
};

