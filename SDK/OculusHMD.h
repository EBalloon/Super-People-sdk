// Enum OculusHMD.EBoundaryType
enum class EBoundaryType : uint8_t {
	Boundary_Outer = 0,
	Boundary_PlayArea = 1,
	Boundary_MAX = 2,
};

// Enum OculusHMD.EFixedFoveatedRenderingLevel
enum class EFixedFoveatedRenderingLevel : uint8_t {
	FFR_Off = 0,
	FFR_Low = 1,
	FFR_Medium = 2,
	FFR_High = 3,
	FFR_HighTop = 4,
	FFR_MAX = 5,
};

// Enum OculusHMD.ETrackedDeviceType
enum class ETrackedDeviceType : uint8_t {
	None = 0,
	HMD = 1,
	LTouch = 2,
	RTouch = 3,
	Touch = 4,
	DeviceObjectZero = 5,
	All = 6,
	ETrackedDeviceType_MAX = 7,
};

// Class OculusHMD.OculusHMDRuntimeSettings
class UOculusHMDRuntimeSettings : public Object {

public:

	char bAutoEnabled : 0; // 0x28 (1)
	struct TArray<struct FOculusSplashDesc> SplashDescs; // 0x30 (16)
	char bSupportsDash : 0; // 0x40 (1)
	char bCompositesDepth : 0; // 0x41 (1)
	char bHQDistortion : 0; // 0x42 (1)
	float PixelDensityMin; // 0x44 (4)
	float PixelDensityMax; // 0x48 (4)
	int32_t CPULevel; // 0x4C (4)
	int32_t GPULevel; // 0x50 (4)
	enum class EFixedFoveatedRenderingLevel FFRLevel; // 0x54 (1)
	char bChromaCorrection : 0; // 0x55 (1)
	char bRecenterHMDWithController : 0; // 0x56 (1)
};

// Class OculusHMD.OculusSceneCaptureCubemap
class UOculusSceneCaptureCubemap : public Object {

public:

	struct TArray<struct USceneCaptureComponent2D> CaptureComponents; // 0x38 (16)
};

// ScriptStruct OculusHMD.GuardianTestResult
struct FGuardianTestResult {
	char IsTriggering : 0; // 0x0 (1)
	enum class ETrackedDeviceType DeviceType; // 0x1 (1)
	float ClosestDistance; // 0x4 (4)
	struct FVector ClosestPoint; // 0x8 (12)
	struct FVector ClosestPointNormal; // 0x14 (12)
};

// ScriptStruct OculusHMD.HmdUserProfile
struct FHmdUserProfile {
	struct FString Name; // 0x0 (16)
	struct FString gender; // 0x10 (16)
	float PlayerHeight; // 0x20 (4)
	float EyeHeight; // 0x24 (4)
	float IPD; // 0x28 (4)
	struct FVector2D NeckToEyeDistance; // 0x2C (8)
	struct TArray<struct FHmdUserProfileField> ExtraFields; // 0x38 (16)
};

// ScriptStruct OculusHMD.HmdUserProfileField
struct FHmdUserProfileField {
	struct FString FieldName; // 0x0 (16)
	struct FString FieldValue; // 0x10 (16)
};

// ScriptStruct OculusHMD.OculusSplashDesc
struct FOculusSplashDesc {
	struct FSoftObjectPath TexturePath; // 0x0 (24)
	struct FTransform TransformInMeters; // 0x20 (48)
	struct FVector2D QuadSizeInMeters; // 0x50 (8)
	struct FQuat DeltaRotation; // 0x60 (16)
	struct FVector2D TextureOffset; // 0x70 (8)
	struct FVector2D TextureScale; // 0x78 (8)
	char bNoAlphaChannel : 0; // 0x80 (1)
};

