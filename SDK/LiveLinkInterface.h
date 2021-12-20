// Enum LiveLinkInterface.ELiveLinkCameraProjectionMo
enum class ELiveLinkCameraProjectionMo : uint8 {
	ELiveLinkCameraProjectionMo = 0,
	ELiveLinkCameraProjectionMo = 1,
	ELiveLinkCameraProjectionMo = 2
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
	Unknown Mode; //  0x28 Size(1)
	Unknown BufferSettings; //  0x30 Size(50)
	struct FString ConnectionString; //  0x80 Size(10)
	Unknown Factory; //  0x90 Size(8)
};

// Class LiveLinkInterface.LiveLinkCurveRemapSettings
struct ULiveLinkCurveRemapSettings : ULiveLinkSourceSettings {
	Unknown CurveConversionSettings; //  0x98 Size(50)
};

// Class LiveLinkInterface.LiveLinkSubjectSettings
struct ULiveLinkSubjectSettings : Object {
	Unknown PreProcessors; //  0x28 Size(10)
	Unknown InterpolationProcessor; //  0x38 Size(8)
	Unknown Translators; //  0x40 Size(10)
	Unknown Role; //  0x50 Size(8)
};

// Class LiveLinkInterface.LiveLinkVirtualSubject
struct ULiveLinkVirtualSubject : Object {
	Unknown Role; //  0x30 Size(8)
	Unknown Subjects; //  0x38 Size(10)
	Unknown FrameTranslators; //  0x48 Size(10)
};

