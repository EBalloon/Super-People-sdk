// Enum OculusHMD.EBoundaryType
enum class EBoundaryType : uint8 {
	EBoundaryType = 0,
	EBoundaryType = 1,
	EBoundaryType = 2
};

// Enum OculusHMD.EFixedFoveatedRenderingLevel
enum class EFixedFoveatedRenderingLevel : uint8 {
	EFixedFoveatedRenderingLevel = 0,
	EFixedFoveatedRenderingLevel = 1,
	EFixedFoveatedRenderingLevel = 2,
	EFixedFoveatedRenderingLevel = 3,
	EFixedFoveatedRenderingLevel = 4,
	EFixedFoveatedRenderingLevel = 5
};

// Enum OculusHMD.ETrackedDeviceType
enum class ETrackedDeviceType : uint8 {
	ETrackedDeviceType = 0,
	ETrackedDeviceType = 1,
	ETrackedDeviceType = 2,
	ETrackedDeviceType = 3,
	ETrackedDeviceType = 4,
	ETrackedDeviceType = 5,
	ETrackedDeviceType = 6,
	ETrackedDeviceType = 7
};

// Class OculusHMD.OculusHMDRuntimeSettings
struct UOculusHMDRuntimeSettings : Object {
	char bAutoEnabled; //  0x28 Size(1)
	Unknown SplashDescs; //  0x30 Size(10)
	char bSupportsDash; //  0x40 Size(1)
	char bCompositesDepth; //  0x41 Size(1)
	char bHQDistortion; //  0x42 Size(1)
	float PixelDensityMin; //  0x44 Size(4)
	float PixelDensityMax; //  0x48 Size(4)
	int32_t CPULevel; //  0x4c Size(4)
	int32_t GPULevel; //  0x50 Size(4)
	Unknown FFRLevel; //  0x54 Size(1)
	char bChromaCorrection; //  0x55 Size(1)
	char bRecenterHMDWithController; //  0x56 Size(1)
};

// Class OculusHMD.OculusSceneCaptureCubemap
struct UOculusSceneCaptureCubemap : Object {
	Unknown CaptureComponents; //  0x38 Size(10)
};

