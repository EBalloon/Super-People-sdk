// Enum OculusMR.EOculusMR_BoundaryType
enum class EOculusMR_BoundaryType : uint8 {
	EOculusMR_BoundaryType = 0,
	EOculusMR_BoundaryType = 1,
	EOculusMR_BoundaryType = 2
};

// Enum OculusMR.EOculusMR_CompositionMethod
enum class EOculusMR_CompositionMethod : uint8 {
	EOculusMR_CompositionMethod = 0,
	EOculusMR_CompositionMethod = 1,
	EOculusMR_CompositionMethod = 2
};

// Enum OculusMR.EOculusMR_DepthQuality
enum class EOculusMR_DepthQuality : uint8 {
	EOculusMR_DepthQuality = 0,
	EOculusMR_DepthQuality = 1,
	EOculusMR_DepthQuality = 2,
	EOculusMR_DepthQuality = 3
};

// Enum OculusMR.EOculusMR_PostProcessEffects
enum class EOculusMR_PostProcessEffects : uint8 {
	EOculusMR_PostProcessEffects = 0,
	EOculusMR_PostProcessEffects = 1,
	EOculusMR_PostProcessEffects = 2
};

// Enum OculusMR.EOculusMR_VirtualGreenScreenType
enum class EOculusMR_VirtualGreenScreenType : uint8 {
	EOculusMR_VirtualGreenScreenType = 0,
	EOculusMR_VirtualGreenScreenType = 1,
	EOculusMR_VirtualGreenScreenType = 2,
	EOculusMR_VirtualGreenScreenType = 3
};

// Enum OculusMR.EOculusMR_ClippingReference
enum class EOculusMR_ClippingReference : uint8 {
	EOculusMR_ClippingReference = 0,
	EOculusMR_ClippingReference = 1,
	EOculusMR_ClippingReference = 2
};

// Enum OculusMR.EOculusMR_CameraDev1
enum class EOculusMR_CameraDeveferenc : uint8 {
	EOculusMR_CameraDev = 0,
	EOculusMR_CameraDeveference = 1,
	EOculusMR_CameraDev = 2,
	EOculusMR_CameraDeveference = 3,
	EOculusMR_CameraDev = 4
};

// Class OculusMR.OculusMR_BoundaryActor
struct AOculusMR_BoundaryActor : UActor {
	Unknown BoundaryMeshComponent; //  0x310 Size(8)
};

// Class OculusMR.OculusMR_BoundaryMeshComponent
struct UOculusMR_BoundaryMeshComponent : UMeshComponent {
	Unknown BoundaryType; //  0x4e8 Size(1)
	float BottomZ; //  0x4ec Size(4)
	float TopZ; //  0x4f0 Size(4)
	Unknown WhiteMaterial; //  0x4f8 Size(8)
	Unknown CastingCameraActor; //  0x500 Size(8)
};

// Class OculusMR.OculusMR_CastingCameraActor
struct AOculusMR_CastingCameraActor : ASceneCapture2D {
	Unknown VRNotificationComponent; //  0x328 Size(8)
	Unknown CameraColorTexture; //  0x330 Size(8)
	Unknown CameraDepthTexture; //  0x338 Size(8)
	Unknown PlaneMeshComponent; //  0x340 Size(8)
	Unknown ChromaKeyMaterial; //  0x348 Size(8)
	Unknown ChromaKeyLitMaterial; //  0x350 Size(8)
	Unknown OpaqueColoredMaterial; //  0x358 Size(8)
	Unknown ChromaKeyMaterialInstance; //  0x360 Size(8)
	Unknown ChromaKeyLitMaterialInstance; //  0x368 Size(8)
	Unknown CameraFrameMaterialInstance; //  0x370 Size(8)
	Unknown BackdropMaterialInstance; //  0x378 Size(8)
	Unknown BoundaryActor; //  0x380 Size(8)
	Unknown BoundarySceneCaptureActor; //  0x388 Size(8)
	Unknown DefaultTexture_White; //  0x390 Size(8)
	Unknown BackgroundRenderTargets; //  0x3e8 Size(10)
	Unknown ForegroundCaptureActor; //  0x3f8 Size(8)
	Unknown ForegroundRenderTargets; //  0x400 Size(10)
	Unknown MRSettings; //  0x410 Size(8)
	Unknown MRState; //  0x418 Size(8)
};

// Class OculusMR.OculusMR_Settings
struct UOculusMR_Settings : Object {
	Unknown ClippingReference; //  0x28 Size(1)
	char bUseTrackedCameraResolution; //  0x29 Size(1)
	int32_t WidthPerView; //  0x2c Size(4)
	int32_t HeightPerView; //  0x30 Size(4)
	float CastingLatency; //  0x34 Size(4)
	Unknown BackdropColor; //  0x38 Size(4)
	float HandPoseStateLatency; //  0x3c Size(4)
	Unknown ChromaKeyColor; //  0x40 Size(4)
	float ChromaKeySimilarity; //  0x44 Size(4)
	float ChromaKeySmoothRange; //  0x48 Size(4)
	float ChromaKeySpillRange; //  0x4c Size(4)
	Unknown VirtualGreenScreenType; //  0x50 Size(1)
	float DynamicLightingDepthSmoothFactor; //  0x54 Size(4)
	float DynamicLightingDepthVariationClampingValue; //  0x58 Size(4)
	Unknown ExternalCompositionPostProcessEffects; //  0x5c Size(1)
	char bIsCasting; //  0x5d Size(1)
	Unknown CompositionMethod; //  0x5e Size(1)
	Unknown CapturingCamera; //  0x5f Size(1)
	char bUseDynamicLighting; //  0x60 Size(1)
	Unknown DepthQuality; //  0x61 Size(1)

	void SetUseDynamicLighting(char Val); // Function OculusMR.OculusMR_Settings.SetUseDynamicLighting(Final|Native|Public|BlueprintCallable) // <Game+0x1895210>
};

// Class OculusMR.OculusMR_State
struct UOculusMR_State : Object {
	Unknown TrackedCamera; //  0x28 Size(70)
	Unknown TrackingReferenceComponent; //  0x98 Size(8)
	Unknown ScalingFactor; //  0xa0 Size(8)
	char ChangeCameraStateRequested; //  0xac Size(1)
	char BindToTrackedCameraIndexRequested; //  0xad Size(1)
};

