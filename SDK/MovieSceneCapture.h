// Enum MovieSceneCapture.EHDRCaptureGamut
enum class EHDRCaptureGamut : uint8 {
	HCGM_Rec709 = 0,
	HCGM_P3DCI = 1,
	HCGM_Rec2020 = 2,
	HCGM_ACES = 3,
	HCGM_ACEScg = 4,
	HCGM_Linear = 5,
	HCGM_MAX = 6
};

// Enum MovieSceneCapture.EMovieSceneCaptureProtocolState
enum class EMovieSceneCaptureProtocolState : uint8 {
	EMovieSceneCaptureProtocolState = 0,
	EMovieSceneCaptureProtocolState = 1,
	EMovieSceneCaptureProtocolState = 2,
	EMovieSceneCaptureProtocolState = 3,
	EMovieSceneCaptureProtocolState = 4
};

// Class MovieSceneCapture.MovieSceneCaptureProtocolBase
struct UMovieSceneCaptureProtocolBase : Object {
	enum class Unknow State; //  0x50 Size(1)

	char IsCapturing(); // Function MovieSceneCapture.MovieSceneCaptureProtocolBase.IsCapturing(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <Game+0x35174c0>
};

// Class MovieSceneCapture.MasterAudioSubmixCaptureProtocol
struct UMasterAudioSubmixCaptureProtocol : UMovieSceneAudioCaptureProtocolBase {
	struct FString Filename; //  0x58 Size(10)
};

// Class MovieSceneCapture.CompositionGraphCaptureProtocol
struct UCompositionGraphCaptureProtocol : UMovieSceneImageCaptureProtocolBase {
	struct Unknown IncludeRenderPasses; //  0x58 Size(10)
	char bCaptureFramesInHDR; //  0x68 Size(1)
	int32_t HDRCompressionQuality; //  0x6c Size(4)
	char CaptureGamut; //  0x70 Size(1)
	struct Unknown PostProcessingMaterial; //  0x78 Size(18)
	char bDisableScreenPercentage; //  0x90 Size(1)
	struct Unknown PostProcessingMaterialPtr; //  0x98 Size(8)
};

// Class MovieSceneCapture.CompressedImageSequenceProtocol
struct UCompressedImageSequenceProtocol : UImageSequenceProtocol {
	int32_t CompressionQuality; //  0xd8 Size(4)
};

// Class MovieSceneCapture.ImageSequenceProtocol_EXR
struct UImageSequenceProtocol_EXR : UImageSequenceProtocol {
	char bCompressed; //  0xd8 Size(1)
	char CaptureGamut; //  0xd9 Size(1)
};

// Class MovieSceneCapture.MovieSceneCapture
struct UMovieSceneCapture : Object {
	struct Unknown ImageCaptureProtocolType; //  0x38 Size(18)
	struct Unknown AudioCaptureProtocolType; //  0x50 Size(18)
	struct Unknown ImageCaptureProtocol; //  0x68 Size(8)
	struct Unknown AudioCaptureProtocol; //  0x70 Size(8)
	struct Unknown Settings; //  0x78 Size(70)
	char bUseSeparateProcess; //  0xe8 Size(1)
	char bCloseEditorWhenCaptureStarts; //  0xe9 Size(1)
	struct FString AdditionalCommandLineArguments; //  0xf0 Size(10)
	struct FString InheritedCommandLineArguments; //  0x100 Size(10)

	void SetImageCaptureProtocolType(struct Unknown* ProtocolType); // Function MovieSceneCapture.MovieSceneCapture.SetImageCaptureProtocolType(Final|Native|Public|BlueprintCallable) // <Game+0x35177b0>
};

// Class MovieSceneCapture.LevelCapture
struct ULevelCapture : UMovieSceneCapture {
	char bAutoStartCapture; //  0x220 Size(1)
	struct Unknown PrerequisiteActorId; //  0x22c Size(10)
};

// Class MovieSceneCapture.User
struct UUser : UMovieSceneImageCaptureProtocolBase {
	struct Unknown World; //  0x58 Size(8)

	void StopCapturingFinalPixels(); // Function MovieSceneCapture.User.StopCapturingFinalPixels(Final|Native|Public|BlueprintCallable) // <Game+0x35179c0>
};

// Class MovieSceneCapture.User
struct UUser : UUser {
	enum class Unknow Format; //  0xd8 Size(1)
	char bEnableCompression; //  0xd9 Size(1)
	int32_t CompressionQuality; //  0xdc Size(4)

	void WriteImageTo(struct Unknown& PixelData, struct Unknown& StreamID, struct Unknown& FrameMetrics, char bCopyImageData); // Function MovieSceneCapture.User.WriteImageTo(Final|Native|Public|HasOutParms|BlueprintCallable) // <Game+0x35179e0>
};

// Class MovieSceneCapture.VideoCaptureProtocol
struct UVideoCaptureProtocol : UFrameGrabberProtocol {
	char bUseCompression; //  0x68 Size(1)
	float CompressionQuality; //  0x6c Size(4)
};

