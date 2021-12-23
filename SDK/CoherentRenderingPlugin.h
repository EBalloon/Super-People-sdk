// Enum CoherentRenderingPlugin.ECoherentRenderingSettingsSeverity
enum class ECoherentRenderingSettingsSeverity : uint8 {
	ECoherentRenderingSettingsSeverity = 0
	ECoherentRenderingSettingsSeverity = 1
	ECoherentRenderingSettingsSeverity = 2
	ECoherentRenderingSettingsSeverity = 3
	ECoherentRenderingSettingsSeverity = 4
	ECoherentRenderingSettingsSeverity = 5
	ECoherentRenderingSettingsSeverity = 6
};

// Class CoherentRenderingPlugin.CoherentRenderingSettings
class UCoherentRenderingSettings : Object {
	enum class Unknow RenderingLogSeverity; // 0x28 (1)
	char ShowWarningsOnScreen : 0; // 0x29 (1)
	struct FString DeveloperOptions; // 0x30 (16)
};

// Class CoherentRenderingPlugin.CohTextureUserWrapData
class UCohTextureUserWrapData : Object {
	struct Unknown Texture; // 0x70 (8)
};

