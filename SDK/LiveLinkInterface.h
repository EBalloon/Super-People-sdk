// Enum LiveLinkInterface.ELiveLinkCameraProjectionMode
enum class ELiveLinkCameraProjectionMode : uint8 {
	ELiveLinkCameraProjectionMode = 0,
	ELiveLinkCameraProjectionMode = 1,
	ELiveLinkCameraProjectionMode = 2
};

// Enum LiveLinkInterface.ELiveLinkSourceMode
enum class ELiveLinkSourceMode : uint8 {
	ELiveLinkSourceMode = 0,
	ELiveLinkSourceMode = 1,
	ELiveLinkSourceMode = 2,
	ELiveLinkSourceMode = 3
};

// Class LiveLinkInterface.LiveLinkSourceSettings
struct ULiveLinkSourceSettings : Object {
	enum class Unknow Mode; //  0x28 Size(1)
	struct Unknown BufferSettings; //  0x30 Size(50)
	struct FString ConnectionString; //  0x80 Size(10)
	struct Unknown* Factory; //  0x90 Size(8)
};

// Class LiveLinkInterface.LiveLinkCurveRemapSettings
struct ULiveLinkCurveRemapSettings : ULiveLinkSourceSettings {
	struct Unknown CurveConversionSettings; //  0x98 Size(50)
};

// Class LiveLinkInterface.LiveLinkSubjectSettings
struct ULiveLinkSubjectSettings : Object {
	struct TArray<Unknown> PreProcessors; //  0x28 Size(10)
	struct Unknown InterpolationProcessor; //  0x38 Size(8)
	struct TArray<Unknown> Translators; //  0x40 Size(10)
	struct Unknown* Role; //  0x50 Size(8)
};

// Class LiveLinkInterface.LiveLinkVirtualSubject
struct ULiveLinkVirtualSubject : Object {
	struct Unknown* Role; //  0x30 Size(8)
	struct TArray<Unknown> Subjects; //  0x38 Size(10)
	struct TArray<Unknown> FrameTranslators; //  0x48 Size(10)
};

