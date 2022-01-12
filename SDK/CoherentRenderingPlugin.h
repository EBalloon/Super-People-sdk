// Enum CoherentRenderingPlugin.ECoherentRenderingSettingsSeverity
enum class ECoherentRenderingSettingsSeverity : uint8_t {
	Trace = 0,
	Debug = 1,
	Info = 2,
	Warning = 3,
	AssertFailure = 4,
	Error = 5,
	ECoherentRenderingSettingsSeverity_MAX = 6,
};

// Class CoherentRenderingPlugin.CoherentRenderingSettings
class UCoherentRenderingSettings : public Object {

public:

	enum class ECoherentRenderingSettingsSeverity RenderingLogSeverity; // 0x28 (1)
	char ShowWarningsOnScreen : 0; // 0x29 (1)
	struct FString DeveloperOptions; // 0x30 (16)
};

// Class CoherentRenderingPlugin.CohTextureUserWrapData
class UCohTextureUserWrapData : public Object {

public:

	struct UTexture Texture; // 0x70 (8)
};

