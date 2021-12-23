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
struct ULiveLinkSourceSettings : Object {
	enum class Unknow Mode; // 0x28 (1)
	struct Unknown BufferSettings; // 0x30 (80)
	struct FString ConnectionString; // 0x80 (16)
	struct Unknown* Factory; // 0x90 (8)
};

// Class LiveLinkInterface.LiveLinkCurveRemapSettings
struct ULiveLinkCurveRemapSettings : ULiveLinkSourceSettings {
	struct Unknown CurveConversionSettings; // 0x98 (80)
};

// Class LiveLinkInterface.LiveLinkSubjectSettings
struct ULiveLinkSubjectSettings : Object {
	struct TArray<Unknown> PreProcessors; // 0x28 (16)
	struct Unknown InterpolationProcessor; // 0x38 (8)
	struct TArray<Unknown> Translators; // 0x40 (16)
	struct Unknown* Role; // 0x50 (8)
};

// Class LiveLinkInterface.LiveLinkVirtualSubject
struct ULiveLinkVirtualSubject : Object {
	struct Unknown* Role; // 0x30 (8)
	struct TArray<Unknown> Subjects; // 0x38 (16)
	struct TArray<Unknown> FrameTranslators; // 0x48 (16)
};

