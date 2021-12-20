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
	Unknown State; //  0x50 Size(1)

	char IsCapturing(); // Function MovieSceneCapture.MovieSceneCaptureProtocolBase.IsCapturing(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <Game+0x350bbb0>
};

// Class MovieSceneCapture.MasterAudioSubmixCapturePro
struct UMasterAudioSubmixCaptureProt : UMovieSceneAudioCaptureProto {
	struct FString Filename; //  0x58 Size(10)
};

// Class MovieSceneCapture.CompositionGraphCaptureProtocol
struct UCompositionGraphCaptureProtocol : UMovieSceneImageCaptureProto {
	Unknown IncludeRenderPasses; //  0x58 Size(10)
	char bCaptureFramesInHDR; //  0x68 Size(1)
	int32_t HDRCompressionQuality; //  0x6c Size(4)
	Unknown CaptureGamut; //  0x70 Size(1)
	Unknown PostProcessingMaterial; //  0x78 Size(18)
	char bDisableScreenPercentage; //  0x90 Size(1)
	Unknown PostProcessingMaterialPtr; //  0x98 Size(8)
};

// Class MovieSceneCapture.CompressedImageSequenceProtocol
struct UCompressedImageSequenceProtocol : UImageSequenceProtocol {
	int32_t CompressionQuality; //  0xd8 Size(4)
};

// Class MovieSceneCapture.ImageSequenceProtocol_EXR
struct UImageSequenceProtocol_EXR : UImageSequenceProtocol {
	char bCompressed; //  0xd8 Size(1)
	Unknown CaptureGamut; //  0xd9 Size(1)
};

// Class MovieSceneCapture.MovieSceneCapture
struct UMovieSceneCapture : Object {
	Unknown ImageCaptureProtocolType; //  0x38 Size(18)
	Unknown AudioCaptureProtocolType; //  0x50 Size(18)
	Unknown ImageCaptureProtocol; //  0x68 Size(8)
	Unknown AudioCaptureProtocol; //  0x70 Size(8)
	Unknown Settings; //  0x78 Size(70)
	char bUseSeparateProcess; //  0xe8 Size(1)
	char bCloseEditorWhenCaptureStarts; //  0xe9 Size(1)
	struct FString AdditionalCommandLineArguments; //  0xf0 Size(10)
	struct FString InheritedCommandLineArguments; //  0x100 Size(10)

	void SetImageCaptureProtocolType(Unknown ProtocolType); // Function MovieSceneCapture.MovieSceneCapture.SetImageCaptureProtocolType(Final|Native|Public|BlueprintCallable) // <Game+0x350bea0>
};

// Class MovieSceneCapture.LevelCapture
struct ULevelCapture : UMovieSceneCapture {
	char bAutoStartCapture; //  0x220 Size(1)
	Unknown PrerequisiteActorId; //  0x22c Size(10)
};

// Class MovieSceneCapture.UserDefinedCaptureProtocol
struct UUserDefinedCaptureProtocol : UMovieSceneImageCaptureProtot {
	Unknown World; //  0x58 Size(8)

	void StopCapturingFinalPixels(); // Function MovieSceneCapture.UserDefinedCaptureProtocol.StopCapturingFinalPixels(Final|Native|Public|BlueprintCallable) // <Game+0x350c0b0>
};

// Class MovieSceneCapture.UserDefinedImageCaptureProtocol
struct UUserDefinedImageCaptureProtocol : UUserDefinedCaptureProtocol {
	Unknown Format; //  0xd8 Size(1)
	char bEnableCompression; //  0xd9 Size(1)
	int32_t CompressionQuality; //  0xdc Size(4)

	void WriteImageToDisk(Unknown& PixelData, Unknown& StreamID, Unknown& FrameMetrics, char bCopyImageData); // Function MovieSceneCapture.UserDefinedImageCaptureProtocol.WriteImageToDisk(Final|Native|Public|HasOutParms|BlueprintCallable) // <Game+0x350c0d0>
};

// Class MovieSceneCapture.VideoCaptureProtocol
struct UVideoCaptureProtocol : UFrameGrabberProtocol {
	char bUseCompression; //  0x68 Size(1)
	float CompressionQuality; //  0x6c Size(4)
};

