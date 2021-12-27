// Enum DLSS.EDLSSSettingOverride
enum class EDLSSSettingOverride : uint8_t {
	EDLSSSettingOverride = 0,
	EDLSSSettingOverride = 1,
	EDLSSSettingOverride = 2,
	EDLSSSettingOverride = 3,
};

// Class DLSS.DLSSOverrideSettings
class UDLSSOverrideSettings : public Object {

public:

	enum class Unknow EnableDLSSInEditorViewportsOverride; // 0x28 (1)
	enum class Unknow EnableScreenpercentageManipulationInDLSSEditorViewportsOverride; // 0x29 (1)
	enum class Unknow EnableDLSSInPlayInEditorViewportsOverride; // 0x2A (1)
	char bShowDLSSIncompatiblePluginsToolsWarnings : 0; // 0x2B (1)
	enum class Unknow ShowDLSSSDebugOnScreenMessages; // 0x2C (1)
};

// Class DLSS.DLSSSettings
class UDLSSSettings : public Object {

public:

	char bEnableDLSSD3D12 : 0; // 0x28 (1)
	char bEnableDLSSD3D11 : 0; // 0x29 (1)
	char bEnableDLSSVulkan : 0; // 0x2A (1)
	char bEnableDLSSInEditorViewports : 0; // 0x2B (1)
	char bEnableScreenpercentageManipulationInDLSSEditorViewports : 0; // 0x2C (1)
	char bEnableDLSSInPlayInEditorViewports : 0; // 0x2D (1)
	char bShowDLSSSDebugOnScreenMessages : 0; // 0x2E (1)
	struct FString GenericDLSSBinaryPath; // 0x30 (16)
	char bGenericDLSSBinaryExists : 0; // 0x40 (1)
	uint32_t NVIDIANGXApplicationId; // 0x44 (4)
	struct FString CustomDLSSBinaryPath; // 0x48 (16)
	char bCustomDLSSBinaryExists : 0; // 0x58 (1)
};

