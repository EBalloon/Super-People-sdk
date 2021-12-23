// Enum MaterialShaderQualitySettings.EMobileCSMQuality
enum class EMobileCSMQuality : uint8 {
	EMobileCSMQuality = 0
	EMobileCSMQuality = 1
	EMobileCSMQuality = 2
	EMobileCSMQuality = 3
	EMobileCSMQuality = 4
};

// Class MaterialShaderQualitySettings.MaterialShaderQualitySettings
struct UMaterialShaderQualitySettings : Object {
	struct TMap<Unknown, Unknown>Unknown ForwardSettingMap; // 0x28 (80)
};

// Class MaterialShaderQualitySettings.ShaderPlatformQualitySettings
struct UShaderPlatformQualitySettings : Object {
	struct Unknown QualityOverrides[0x3]; // 0x28 (27)
};

