// Enum LuminRuntimeSettings.ELuminPrivilege
enum class ELuminPrivilege : uint8_t {
	Invalid = 0,
	BatteryInfo = 1,
	CameraCapture = 2,
	ComputerVision = 3,
	WorldReconstruction = 4,
	InAppPurchase = 5,
	AudioCaptureMic = 6,
	DrmCertificates = 7,
	Occlusion = 8,
	LowLatencyLightwear = 9,
	Internet = 10,
	IdentityRead = 11,
	BackgroundDownload = 12,
	BackgroundUpload = 13,
	MediaDrm = 14,
	Media = 15,
	MediaMetadata = 16,
	PowerInfo = 17,
	LocalAreaNetwork = 18,
	VoiceInput = 19,
	Documents = 20,
	ConnectBackgroundMusicService = 21,
	RegisterBackgroundMusicService = 22,
	PcfRead = 23,
	PwFoundObjRead = 23,
	NormalNotificationsUsage = 24,
	MusicService = 25,
	ControllerPose = 26,
	GesturesSubscribe = 27,
	GesturesConfig = 28,
	AddressBookRead = 29,
	AddressBookWrite = 30,
	AddressBookBasicAccess = 31,
	CoarseLocation = 32,
	FineLocation = 33,
	HandMesh = 34,
	WifiStatusRead = 35,
	SocialConnectionsInvitesAccess = 36,
	ELuminPrivilege_MAX = 37,
};

// Enum LuminRuntimeSettings.ELuminFrameTimingHint
enum class ELuminFrameTimingHint : uint8_t {
	Unspecified = 0,
	Maximum = 1,
	FPS_61 = 2,
	FPS_121 = 3,
	ELuminFrameTimingHint_MAX = 4,
};

// Enum LuminRuntimeSettings.ELuminComponentType
enum class ELuminComponentType : uint8_t {
	Universe = 0,
	Fullscreen = 1,
	SearchProvider = 2,
	MusicService = 3,
	Screens = 4,
	ScreensImmersive = 5,
	Console = 6,
	SystemUI = 7,
	ELuminComponentType_MAX = 8,
};

// Enum LuminRuntimeSettings.ELuminComponentSubElementType
enum class ELuminComponentSubElementType : uint8_t {
	FileExtension = 0,
	MimeType = 1,
	Mode = 2,
	MusicAttribute = 3,
	Schema = 4,
	ELuminComponentSubElementType_MAX = 5,
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

