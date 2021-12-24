// Enum LuminRuntimeSettings.ELuminPrivilege
enum class ELuminPrivilege : uint8_t {
	ELuminPrivilege = 0,
	ELuminPrivilege = 1,
	ELuminPrivilege = 2,
	ELuminPrivilege = 3,
	ELuminPrivilege = 4,
	ELuminPrivilege = 5,
	ELuminPrivilege = 6,
	ELuminPrivilege = 7,
	ELuminPrivilege = 8,
	ELuminPrivilege = 9,
	ELuminPrivilege = 10,
	ELuminPrivilege = 11,
	ELuminPrivilege = 12,
	ELuminPrivilege = 13,
	ELuminPrivilege = 14,
	ELuminPrivilege = 15,
	ELuminPrivilege = 16,
	ELuminPrivilege = 17,
	ELuminPrivilege = 18,
	ELuminPrivilege = 19,
	ELuminPrivilege = 20,
	ELuminPrivilege = 21,
	ELuminPrivilege = 22,
	ELuminPrivilege = 23,
	ELuminPrivilege = 23,
	ELuminPrivilege = 24,
	ELuminPrivilege = 25,
	ELuminPrivilege = 26,
	ELuminPrivilege = 27,
	ELuminPrivilege = 28,
	ELuminPrivilege = 29,
	ELuminPrivilege = 30,
	ELuminPrivilege = 31,
	ELuminPrivilege = 32,
	ELuminPrivilege = 33,
	ELuminPrivilege = 34,
	ELuminPrivilege = 35,
	ELuminPrivilege = 36,
	ELuminPrivilege = 37,
};

// Enum LuminRuntimeSettings.ELuminFrameTimingHint
enum class ELuminFrameTimingHint : uint8_t {
	ELuminFrameTimingHint = 0,
	ELuminFrameTimingHint = 1,
	ELuminFrameTimingHint_61 = 2,
	ELuminFrameTimingHint_121 = 3,
	ELuminFrameTimingHint = 4,
};

// Enum LuminRuntimeSettings.ELuminComponentType
enum class ELuminComponentType : uint8_t {
	ELuminComponentType = 0,
	ELuminComponentType = 1,
	ELuminComponentType = 2,
	ELuminComponentType = 3,
	ELuminComponentType = 4,
	ELuminComponentType = 5,
	ELuminComponentType = 6,
	ELuminComponentType = 7,
	ELuminComponentType = 8,
};

// Enum LuminRuntimeSettings.ELuminComponentSubElementType
enum class ELuminComponentSubElementType : uint8_t {
	ELuminComponentSubElementType = 0,
	ELuminComponentSubElementType = 1,
	ELuminComponentSubElementType = 2,
	ELuminComponentSubElementType = 3,
	ELuminComponentSubElementType = 4,
	ELuminComponentSubElementType = 5,
};

// Class LuminRuntimeSettings.LuminRuntimeSettings
class ULuminRuntimeSettings : public Object {

public:

	struct FString PackageName; // 0x28 (16)
	struct FString ApplicationDisplayName; // 0x38 (16)
	enum class Unknow FrameTimingHint; // 0x48 (1)
	char bProtectedContent : 0; // 0x49 (1)
	char bManualCallToAppReady : 0; // 0x4A (1)
	char bUseMobileRendering : 0; // 0x4B (1)
	char bUseVulkan : 0; // 0x4C (1)
	struct Unknown Certificate; // 0x50 (16)
	struct Unknown IconModelPath; // 0x60 (16)
	struct Unknown IconPortalPath; // 0x70 (16)
	struct Unknown LocalizedIconInfos; // 0x80 (16)
	int32_t VersionCode; // 0x90 (4)
	int32_t MinimumAPILevel; // 0x94 (4)
	struct TArray<Unknown> AppPrivileges; // 0x98 (16)
	struct TArray<Unknown> ExtraComponentSubElements; // 0xA8 (16)
	struct TArray<Unknown> ExtraComponentElements; // 0xB8 (16)
	struct FString SpatializationPlugin; // 0xC8 (16)
	struct FString ReverbPlugin; // 0xD8 (16)
	struct FString OcclusionPlugin; // 0xE8 (16)
	int32_t SoundCueCookQualityIndex; // 0xF8 (4)
	char bRemoveDebugInfo : 0; // 0xFC (1)
	struct Unknown VulkanValidationLayerLibs; // 0x100 (16)
	char bFrameVignette : 0; // 0x110 (1)
	struct TArray<Unknown> LocalizedAppNames; // 0x118 (16)
};

// ScriptStruct LuminRuntimeSettings.LocalizedIconInfos
struct FLocalizedIconInfos {
	struct TArray<Unknown> IconData; // 0x0 (16)
};

// ScriptStruct LuminRuntimeSettings.LocalizedIconInfo
struct FLocalizedIconInfo {
	struct FString LanguageCode; // 0x0 (16)
	struct Unknown IconModelPath; // 0x10 (16)
	struct Unknown IconPortalPath; // 0x20 (16)
};

// ScriptStruct LuminRuntimeSettings.LocalizedAppName
struct FLocalizedAppName {
	struct FString LanguageCode; // 0x0 (16)
	struct FString AppName; // 0x10 (16)
};

// ScriptStruct LuminRuntimeSettings.LuminComponentElement
struct FLuminComponentElement {
	struct FString Name; // 0x0 (16)
	struct FString VisibleName; // 0x10 (16)
	struct FString ExecutableName; // 0x20 (16)
	enum class Unknow ComponentType; // 0x30 (1)
	struct TArray<Unknown> ExtraComponentSubElements; // 0x38 (16)
};

// ScriptStruct LuminRuntimeSettings.LuminComponentSubElement
struct FLuminComponentSubElement {
	enum class Unknow ElementType; // 0x0 (1)
	struct FString Value; // 0x8 (16)
};

