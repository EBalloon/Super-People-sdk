// Enum CoherentRenderingPlugin.ECoherentRenderingSettingsSeverity
enum class ECoherentRenderingSettingsSeverity : uint8 {
	ECoherentRenderingSettingsSeverity = 0,
	ECoherentRenderingSettingsSeverity = 1,
	ECoherentRenderingSettingsSeverity = 2,
	ECoherentRenderingSettingsSeverity = 3,
	ECoherentRenderingSettingsSeverity = 4,
	ECoherentRenderingSettingsSeverity = 5,
	ECoherentRenderingSettingsSeverity = 6
};

// Class CoherentRenderingPlugin.CoherentRenderingSettings
struct UCoherentRenderingSettings : Object {
	enum class Unknow RenderingLogSeverity; //  0x28 Size(1)
	char ShowWarningsOnScreen; //  0x29 Size(1)
	struct FString DeveloperOptions; //  0x30 Size(10)
};

// Class CoherentRenderingPlugin.CohTextureUserWrapData
struct UCohTextureUserWrapData : Object {
	struct Unknown Texture; //  0x70 Size(8)
};

