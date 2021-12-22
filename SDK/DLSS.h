// Enum DLSS.EDLSSSettingOverride
enum class EDLSSSettingOverride : uint8 {
	EDLSSSettingOverride = 0,
	EDLSSSettingOverride = 1,
	EDLSSSettingOverride = 2,
	EDLSSSettingOverride = 3
};

// Class DLSS.DLSSOverrideSettings
struct UDLSSOverrideSettings : Object {
	enum class Unknow EnableDLSSInEditorViewports; //  0x28 Size(1)
	enum class Unknow EnableScreenpercentageManipulationInDLSSEditorViewportsOverride; //  0x29 Size(1)
	enum class Unknow EnableDLSSInPlayInEditorViewportsOverri; //  0x2a Size(1)
	char bShowDLSSIncompatiblePluginsToolsWarnings; //  0x2b Size(1)
	enum class Unknow Show; //  0x2c Size(1)
};

// Class DLSS.DLSSSettings
struct UDLSSSettings : Object {
	char bEnableDLSSD3D12; //  0x28 Size(1)
	char bEnableDLSSD3D11; //  0x29 Size(1)
	char bEnableDLSSVulkan; //  0x2a Size(1)
	char bEnableDLSSInEditorViewports; //  0x2b Size(1)
	char bEnableScreenpercentageManipulationInDLSSEditorViewports; //  0x2c Size(1)
	char bEnableDLSSInPlayInEditorViewports; //  0x2d Size(1)
	char bShowDLSSSDebugOnScreenMess; //  0x2e Size(1)
	struct FString GenericDLSSBinaryPath; //  0x30 Size(10)
	char bGenericDLSSBinaryExists; //  0x40 Size(1)
	uint32_t NVIDIANGXApplicationId; //  0x44 Size(4)
	struct FString CustomDLSSBinaryPath; //  0x48 Size(10)
	char bCustomDLSSBinaryExists; //  0x58 Size(1)
};

