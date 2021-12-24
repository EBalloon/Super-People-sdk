// Enum OculusHMD.EBoundaryType
enum class EBoundaryType : uint8_t {
	EBoundaryType = 0,
	EBoundaryType = 1,
	EBoundaryType = 2,
};

// Enum OculusHMD.EFixedFoveatedRenderingLevel
enum class EFixedFoveatedRenderingLevel : uint8_t {
	EFixedFoveatedRenderingLevel = 0,
	EFixedFoveatedRenderingLevel = 1,
	EFixedFoveatedRenderingLevel = 2,
	EFixedFoveatedRenderingLevel = 3,
	EFixedFoveatedRenderingLevel = 4,
	EFixedFoveatedRenderingLevel = 5,
};

// Enum OculusHMD.ETrackedDeviceType
enum class ETrackedDeviceType : uint8_t {
	ETrackedDeviceType = 0,
	ETrackedDeviceType = 1,
	ETrackedDeviceType = 2,
	ETrackedDeviceType = 3,
	ETrackedDeviceType = 4,
	ETrackedDeviceType = 5,
	ETrackedDeviceType = 6,
	ETrackedDeviceType = 7,
};

// Class OculusHMD.OculusHMDRuntimeSettings
class UOculusHMDRuntimeSettings : public Object {

public:

	char bAutoEnabled : 0; // 0x28 (1)
	struct TArray<Unknown> SplashDescs; // 0x30 (16)
	char bSupportsDash : 0; // 0x40 (1)
	char bCompositesDepth : 0; // 0x41 (1)
	char bHQDistortion : 0; // 0x42 (1)
	float PixelDensityMin; // 0x44 (4)
	float PixelDensityMax; // 0x48 (4)
	int32_t CPULevel; // 0x4C (4)
	int32_t GPULevel; // 0x50 (4)
	enum class Unknow FFRLevel; // 0x54 (1)
	char bChromaCorrection : 0; // 0x55 (1)
	char bRecenterHMDWithController : 0; // 0x56 (1)
};

// Class OculusHMD.OculusSceneCaptureCubemap
class UOculusSceneCaptureCubemap : public Object {

public:

	struct TArray<Unknown> CaptureComponents; // 0x38 (16)
};

// ScriptStruct OculusHMD.GuardianTestResult
struct FGuardianTestResult {
	char IsTriggering : 0; // 0x0 (1)
	enum class Unknow DeviceType; // 0x1 (1)
	float ClosestDistance; // 0x4 (4)
	struct Unknown ClosestPoint; // 0x8 (12)
	struct Unknown ClosestPointNormal; // 0x14 (12)
};

// ScriptStruct OculusHMD.HmdUserProfile
struct FHmdUserProfile {
	struct FString Name; // 0x0 (16)
	struct FString gender; // 0x10 (16)
	float PlayerHeight; // 0x20 (4)
	float EyeHeight; // 0x24 (4)
	float IPD; // 0x28 (4)
	struct Unknown NeckToEyeDistance; // 0x2C (8)
	struct TArray<Unknown> ExtraFields; // 0x38 (16)
};

// ScriptStruct OculusHMD.HmdUserProfileField
struct FHmdUserProfileField {
	struct FString FieldName; // 0x0 (16)
	struct FString FieldValue; // 0x10 (16)
};

// ScriptStruct OculusHMD.OculusSplashDesc
struct FOculusSplashDesc {
	struct Unknown TexturePath; // 0x0 (24)
	struct Unknown TransformInMeters; // 0x20 (48)
	struct Unknown QuadSizeInMeters; // 0x50 (8)
	struct Unknown DeltaRotation; // 0x60 (16)
	struct Unknown TextureOffset; // 0x70 (8)
	struct Unknown TextureScale; // 0x78 (8)
	char bNoAlphaChannel : 0; // 0x80 (1)
};

