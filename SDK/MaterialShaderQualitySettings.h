// Enum MaterialShaderQualitySettings.EMobileCSMQuality
enum class EMobileCSMQuality : uint8_t {
	NoFiltering = 0,
	PCF_1x1 = 1,
	PCF_2x2 = 2,
	PCF_3x3 = 3,
	EMobileCSMQuality_MAX = 4,
};

// Class MaterialShaderQualitySettings.MaterialShaderQualitySettings
class UMaterialShaderQualitySettings : public Object {

public:

	struct TMap<Unknown, Unknown> ForwardSettingMap; // 0x28 (80)
};

// Class MaterialShaderQualitySettings.ShaderPlatformQualitySettings
class UShaderPlatformQualitySettings : public Object {

public:

	struct Unknown QualityOverrides[0x3]; // 0x28 (27)
};

// ScriptStruct MaterialShaderQualitySettings.MaterialQualityOverrides
struct FMaterialQualityOverrides {
	char bDiscardQualityDuringCook : 0; // 0x0 (1)
	char bEnableOverride : 0; // 0x1 (1)
	char bForceFullyRough : 0; // 0x2 (1)
	char bForceNonMetal : 0; // 0x3 (1)
	char bForceDisableLMDirectionality : 0; // 0x4 (1)
	char bForceLQReflections : 0; // 0x5 (1)
	char bForceDisablePreintegratedGF : 0; // 0x6 (1)
	char bDisableMaterialNormalCalculation : 0; // 0x7 (1)
	enum class Unknow MobileCSMQuality; // 0x8 (1)
};

