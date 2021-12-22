// Enum LuminRuntimeSettings.ELuminPrivilege
enum class ELuminPrivilege : uint8 {
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
	ELuminPrivilege = 37
};

// Enum LuminRuntimeSettings.ELuminFrameTimingHint
enum class ELuminFrameTimingHint : uint8 {
	ELuminFrameTimingHint = 0,
	ELuminFrameTimingHint = 1,
	ELuminFrameTimingHint_61 = 2,
	ELuminFrameTimingHint_121 = 3,
	ELuminFrameTimingHint = 4
};

// Enum LuminRuntimeSettings.ELuminComponentType
enum class ELuminComponentType : uint8 {
	ELuminComponentType = 0,
	ELuminComponentType = 1,
	ELuminComponentType = 2,
	ELuminComponentType = 3,
	ELuminComponentType = 4,
	ELuminComponentType = 5,
	ELuminComponentType = 6,
	ELuminComponentType = 7,
	ELuminComponentType = 8
};

// Enum LuminRuntimeSettings.ELuminComponentSubElementType
enum class ELuminComponentSubElementType : uint8 {
	ELuminComponentSubElementType = 0,
	ELuminComponentSubElementType = 1,
	ELuminComponentSubElementType = 2,
	ELuminComponentSubElementType = 3,
	ELuminComponentSubElementType = 4,
	ELuminComponentSubElementType = 5
};

// Class LuminRuntimeSettings.LuminRuntimeSettings
struct ULuminRuntimeSettings : Object {
	struct FString PackageName; //  0x28 Size(10)
	struct FString ApplicationDisplayName; //  0x38 Size(10)
	enum class Unknow FrameTimingHint; //  0x48 Size(1)
	char bProtectedContent; //  0x49 Size(1)
	char bManualCallToAppReady; //  0x4a Size(1)
	char bUseMobileRendering; //  0x4b Size(1)
	char bUseVulkan; //  0x4c Size(1)
	struct Unknown Certificate; //  0x50 Size(10)
	struct Unknown IconModelPath; //  0x60 Size(10)
	struct Unknown IconPortalPath; //  0x70 Size(10)
	struct Unknown LocalizedIconInfos; //  0x80 Size(10)
	int32_t VersionCode; //  0x90 Size(4)
	int32_t MinimumAPILevel; //  0x94 Size(4)
	struct TArray<Unknown> AppPrivileges; //  0x98 Size(10)
	struct TArray<Unknown> ExtraComponentSubElements; //  0xa8 Size(10)
	struct TArray<Unknown> ExtraComponentElements; //  0xb8 Size(10)
	struct FString SpatializationPlugin; //  0xc8 Size(10)
	struct FString ReverbPlugin; //  0xd8 Size(10)
	struct FString OcclusionPlugin; //  0xe8 Size(10)
	int32_t SoundCueCookQualityIndex; //  0xf8 Size(4)
	char bRemoveDebugInfo; //  0xfc Size(1)
	struct Unknown VulkanValidationLayerLibs; //  0x100 Size(10)
	char bFrameVignette; //  0x110 Size(1)
	struct TArray<Unknown> LocalizedAppNames; //  0x118 Size(10)
};

