// Enum OculusHMD.EBoundaryType
enum class EBoundaryType : uint8 {
	EBoundaryType = 0
	EBoundaryType = 1
	EBoundaryType = 2
};

// Enum OculusHMD.EFixedFoveatedRenderingLevel
enum class EFixedFoveatedRenderingLevel : uint8 {
	EFixedFoveatedRenderingLevel = 0
	EFixedFoveatedRenderingLevel = 1
	EFixedFoveatedRenderingLevel = 2
	EFixedFoveatedRenderingLevel = 3
	EFixedFoveatedRenderingLevel = 4
	EFixedFoveatedRenderingLevel = 5
};

// Enum OculusHMD.ETrackedDeviceType
enum class ETrackedDeviceType : uint8 {
	ETrackedDeviceType = 0
	ETrackedDeviceType = 1
	ETrackedDeviceType = 2
	ETrackedDeviceType = 3
	ETrackedDeviceType = 4
	ETrackedDeviceType = 5
	ETrackedDeviceType = 6
	ETrackedDeviceType = 7
};

// Class OculusHMD.OculusHMDRuntimeSettings
struct UOculusHMDRuntimeSettings : Object {
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
	char b : 0; // 0x56 (1)
};

// Class OculusHMD.OculusSceneCaptureCubemap
struct UOculusSceneCaptureCubemap : Object {
	struct TArray<Unknown> CaptureComponents; // 0x38 (16)
};

