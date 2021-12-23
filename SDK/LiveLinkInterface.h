// Enum LiveLinkInterface.ELiveLinkCameraProjectionMode
enum class ELiveLinkCameraProjectionMode : uint8 {
	ELiveLinkCameraProjectionMode = 0
	ELiveLinkCameraProjectionMode = 1
	ELiveLinkCameraProjectionMode = 2
};

// Enum LiveLinkInterface.ELiveLinkSourceMode
enum class ELiveLinkSourceMode : uint8 {
	ELiveLinkSourceMode = 0
	ELiveLinkSourceMode = 1
	ELiveLinkSourceMode = 2
	ELiveLinkSourceMode = 3
};

// Class LiveLinkInterface.LiveLinkSourceSettings
class ULiveLinkSourceSettings : Object {
	enum class Unknow Mode; // 0x28 (1)
	struct Unknown BufferSettings; // 0x30 (80)
	struct FString ConnectionString; // 0x80 (16)
	struct Unknown* Factory; // 0x90 (8)
};

// Class LiveLinkInterface.LiveLinkCurveRemapSettings
class ULiveLinkCurveRemapSettings : ULiveLinkSourceSettings {
	struct Unknown CurveConversionSettings; // 0x98 (80)
};

// Class LiveLinkInterface.LiveLinkSubjectSettings
class ULiveLinkSubjectSettings : Object {
	struct TArray<Unknown> PreProcessors; // 0x28 (16)
	struct Unknown InterpolationProcessor; // 0x38 (8)
	struct TArray<Unknown> Translators; // 0x40 (16)
	struct Unknown* Role; // 0x50 (8)
};

// Class LiveLinkInterface.LiveLinkVirtualSubject
class ULiveLinkVirtualSubject : Object {
	struct Unknown* Role; // 0x30 (8)
	struct TArray<Unknown> Subjects; // 0x38 (16)
	struct TArray<Unknown> FrameTranslators; // 0x48 (16)
};

// ScriptStruct LiveLinkInterface.SubjectMetadata
struct FSubjectMetadata {
	struct TMap<Unknown, Unknown>Unknown StringMetadata; // 0x0 (80)
	struct Unknown SceneTimecode; // 0x50 (20)
	struct Unknown SceneFramerate; // 0x64 (8)
};

// ScriptStruct LiveLinkInterface.LiveLinkBaseFrameData
struct FLiveLinkBaseFrameData {
	struct Unknown WorldTime; // 0x0 (16)
	struct Unknown MetaData; // 0x10 (96)
	struct TArray<Unknown> PropertyValues; // 0x70 (16)
};

// ScriptStruct LiveLinkInterface.LiveLinkMetaData
struct FLiveLinkMetaData {
	struct TMap<Unknown, Unknown>Unknown StringMetadata; // 0x0 (80)
	struct Unknown SceneTime; // 0x50 (16)
};

// ScriptStruct LiveLinkInterface.LiveLinkWorldTime
struct FLiveLinkWorldTime {
	double Time; // 0x0 (8)
	double Offset; // 0x8 (8)
};

// ScriptStruct LiveLinkInterface.LiveLinkAnimationFrameData
struct FLiveLinkAnimationFrameData : FLiveLinkBaseFrameData {
	struct TArray<Unknown> Transforms; // 0xA0 (16)
};

// ScriptStruct LiveLinkInterface.LiveLinkBaseStaticData
struct FLiveLinkBaseStaticData {
	struct TArray<Unknown> PropertyNames; // 0x0 (16)
};

// ScriptStruct LiveLinkInterface.LiveLinkSkeletonStaticData
struct FLiveLinkSkeletonStaticData : FLiveLinkBaseStaticData {
	struct TArray<Unknown> BoneNames; // 0x10 (16)
	struct TArray<Unknown> BoneParents; // 0x20 (16)
};

// ScriptStruct LiveLinkInterface.LiveLinkBasicBlueprintData
struct FLiveLinkBasicBlueprintData : FLiveLinkBaseBlueprintData {
	struct Unknown StaticData; // 0x8 (16)
	struct Unknown FrameData; // 0x18 (160)
};

// ScriptStruct LiveLinkInterface.LiveLinkCameraBlueprintData
struct FLiveLinkCameraBlueprintData : FLiveLinkBaseBlueprintData {
	struct Unknown StaticData; // 0x8 (32)
	struct Unknown FrameData; // 0x30 (240)
};

// ScriptStruct LiveLinkInterface.LiveLinkTransformFrameData
struct FLiveLinkTransformFrameData : FLiveLinkBaseFrameData {
	struct Unknown Transform; // 0xA0 (48)
};

// ScriptStruct LiveLinkInterface.LiveLinkCameraFrameData
struct FLiveLinkCameraFrameData : FLiveLinkTransformFrameData {
	float FieldOfView; // 0xD0 (4)
	float AspectRatio; // 0xD4 (4)
	float FocalLength; // 0xD8 (4)
	float Aperture; // 0xDC (4)
	float FocusDistance; // 0xE0 (4)
	enum class Unknow ProjectionMode; // 0xE4 (1)
};

// ScriptStruct LiveLinkInterface.LiveLinkCameraStaticData
struct FLiveLinkCameraStaticData : FLiveLinkTransformStaticData {
	char bIsFieldOfViewSupported : 0; // 0x10 (1)
	char bIsAspectRatioSupported : 0; // 0x11 (1)
	char bIsFocalLengthSupported : 0; // 0x12 (1)
	char bIsProjectionModeSupported : 0; // 0x13 (1)
	float FilmBackWidth; // 0x14 (4)
	float FilmBackHeight; // 0x18 (4)
	char bIsApertureSupported : 0; // 0x1C (1)
	char bIsFocusDistanceSupported : 0; // 0x1D (1)
};

// ScriptStruct LiveLinkInterface.LiveLinkCurveConversionSettings
struct FLiveLinkCurveConversionSettings {
	struct TMap<Unknown, Unknown>Unknown CurveConversionAssetMap; // 0x0 (80)
};

// ScriptStruct LiveLinkInterface.LiveLinkLightBlueprintData
struct FLiveLinkLightBlueprintData : FLiveLinkBaseBlueprintData {
	struct Unknown StaticData; // 0x8 (32)
	struct Unknown FrameData; // 0x30 (256)
};

// ScriptStruct LiveLinkInterface.LiveLinkLightFrameData
struct FLiveLinkLightFrameData : FLiveLinkTransformFrameData {
	float Temperature; // 0xD0 (4)
	float Intensity; // 0xD4 (4)
	struct Unknown LightColor; // 0xD8 (4)
	float InnerConeAngle; // 0xDC (4)
	float OuterConeAngle; // 0xE0 (4)
	float AttenuationRadius; // 0xE4 (4)
	float SourceRadius; // 0xE8 (4)
	float SoftSourceRadius; // 0xEC (4)
	float SourceLength; // 0xF0 (4)
};

// ScriptStruct LiveLinkInterface.LiveLinkLightStaticData
struct FLiveLinkLightStaticData : FLiveLinkTransformStaticData {
	char bIsTemperatureSupported : 0; // 0x10 (1)
	char bIsIntensitySupported : 0; // 0x11 (1)
	char bIsLightColorSupported : 0; // 0x12 (1)
	char bIsInnerConeAngleSupported : 0; // 0x13 (1)
	char bIsOuterConeAngleSupported : 0; // 0x14 (1)
	char bIsAttenuationRadiusSupported : 0; // 0x15 (1)
	char bIsSourceLenghtSupported : 0; // 0x16 (1)
	char bIsSourceRadiusSupported : 0; // 0x17 (1)
	char bIsSoftSourceRadiusSupported : 0; // 0x18 (1)
};

// ScriptStruct LiveLinkInterface.LiveLinkSubjectPreset
struct FLiveLinkSubjectPreset {
	struct Unknown Key; // 0x0 (24)
	struct Unknown* Role; // 0x18 (8)
	struct Unknown Settings; // 0x20 (8)
	struct Unknown VirtualSubject; // 0x28 (8)
	char bEnabled : 0; // 0x30 (1)
};

// ScriptStruct LiveLinkInterface.LiveLinkSubjectKey
struct FLiveLinkSubjectKey {
	struct Unknown Source; // 0x0 (16)
	struct Unknown SubjectName; // 0x10 (8)
};

// ScriptStruct LiveLinkInterface.LiveLinkSubjectName
struct FLiveLinkSubjectName {
	struct FName Name; // 0x0 (8)
};

// ScriptStruct LiveLinkInterface.LiveLinkSourcePreset
struct FLiveLinkSourcePreset {
	struct Unknown Guid; // 0x0 (16)
	struct Unknown Settings; // 0x10 (8)
	struct FText SourceType; // 0x18 (24)
};

// ScriptStruct LiveLinkInterface.LiveLinkRefSkeleton
struct FLiveLinkRefSkeleton {
	struct TArray<Unknown> BoneNames; // 0x0 (16)
	struct TArray<Unknown> BoneParents; // 0x10 (16)
};

// ScriptStruct LiveLinkInterface.LiveLinkSubjectRepresentation
struct FLiveLinkSubjectRepresentation {
	struct Unknown Subject; // 0x0 (8)
	struct Unknown* Role; // 0x8 (8)
};

// ScriptStruct LiveLinkInterface.LiveLinkInterpolationSettings
struct FLiveLinkInterpolationSettings {
	char bUseInterpolation : 0; // 0x0 (1)
	float InterpolationOffset; // 0x4 (4)
};

// ScriptStruct LiveLinkInterface.LiveLinkTimeSynchronizationSettings
struct FLiveLinkTimeSynchronizationSettings {
	struct Unknown FrameRate; // 0x0 (8)
	struct Unknown FrameOffset; // 0x8 (4)
};

// ScriptStruct LiveLinkInterface.LiveLinkSourceDebugInfo
struct FLiveLinkSourceDebugInfo {
	struct Unknown SubjectName; // 0x0 (8)
	int32_t SnapshotIndex; // 0x8 (4)
	int32_t NumberOfBufferAtSnapshot; // 0xC (4)
};

// ScriptStruct LiveLinkInterface.LiveLinkSourceBufferManagementSettings
struct FLiveLinkSourceBufferManagementSettings {
	char bValidEngineTimeEnabled : 0; // 0x0 (1)
	float ValidEngineTime; // 0x4 (4)
	float EngineTimeOffset; // 0x8 (4)
	double EngineTimeClockOffset; // 0x10 (8)
	struct Unknown TimecodeFrameRate; // 0x18 (8)
	char bGenerateSubFrame : 0; // 0x20 (1)
	char bUseTimecodeSmoothLatest : 0; // 0x21 (1)
	struct Unknown SourceTimecodeFrameRate; // 0x24 (8)
	char bValidTimecodeFrameEnabled : 0; // 0x2C (1)
	int32_t ValidTimecodeFrame; // 0x30 (4)
	float TimecodeFrameOffset; // 0x34 (4)
	double TimecodeClockOffset; // 0x38 (8)
	int32_t LatestOffset; // 0x40 (4)
	int32_t MaxNumberOfFrameToBuffered; // 0x44 (4)
	char bKeepAtLeastOneFrame : 0; // 0x48 (1)
};

// ScriptStruct LiveLinkInterface.LiveLinkTransformBlueprintData
struct FLiveLinkTransformBlueprintData : FLiveLinkBaseBlueprintData {
	struct Unknown StaticData; // 0x8 (16)
	struct Unknown FrameData; // 0x20 (208)
};

// ScriptStruct LiveLinkInterface.LiveLinkFrameData
struct FLiveLinkFrameData {
	struct TArray<Unknown> Transforms; // 0x0 (16)
	struct TArray<Unknown> CurveElements; // 0x10 (16)
	struct Unknown WorldTime; // 0x20 (16)
	struct Unknown MetaData; // 0x30 (96)
};

// ScriptStruct LiveLinkInterface.LiveLinkCurveElement
struct FLiveLinkCurveElement {
	struct FName CurveName; // 0x0 (8)
	float CurveValue; // 0x8 (4)
};

// ScriptStruct LiveLinkInterface.LiveLinkTimeCode_Base_DEPRECATED
struct FLiveLinkTimeCode_Base_DEPRECATED {
	int32_t Seconds; // 0x0 (4)
	int32_t Frames; // 0x4 (4)
	struct Unknown FrameRate; // 0x8 (8)
};

// ScriptStruct LiveLinkInterface.LiveLinkTime
struct FLiveLinkTime {
	double WorldTime; // 0x0 (8)
	struct Unknown SceneTime; // 0x8 (16)
};

