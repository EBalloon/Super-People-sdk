// Enum OculusMR.EOculusMR_BoundaryType
enum class EOculusMR_BoundaryType : uint8 {
	EOculusMR_BoundaryType = 0
	EOculusMR_BoundaryType = 1
	EOculusMR_BoundaryType = 2
};

// Enum OculusMR.EOculusMR_CompositionMethod
enum class EOculusMR_CompositionMethod : uint8 {
	EOculusMR_CompositionMethod = 0
	EOculusMR_CompositionMethod = 1
	EOculusMR_CompositionMethod = 2
};

// Enum OculusMR.EOculusMR_DepthQuality
enum class EOculusMR_DepthQuality : uint8 {
	EOculusMR_DepthQuality = 0
	EOculusMR_DepthQuality = 1
	EOculusMR_DepthQuality = 2
	EOculusMR_DepthQuality = 3
};

// Enum OculusMR.EOculusMR_PostProcessEffects
enum class EOculusMR_PostProcessEffects : uint8 {
	EOculusMR_PostProcessEffects = 0
	EOculusMR_PostProcessEffects = 1
	EOculusMR_PostProcessEffects = 2
};

// Enum OculusMR.EOculusMR_VirtualGreenScreenType
enum class EOculusMR_VirtualGreenScreenType : uint8 {
	EOculusMR_VirtualGreenScreenType = 0
	EOculusMR_VirtualGreenScreenType = 1
	EOculusMR_VirtualGreenScreenType = 2
	EOculusMR_VirtualGreenScreenType = 3
};

// Enum OculusMR.EOculusMR_ClippingReference
enum class EOculusMR_ClippingReference : uint8 {
	EOculusMR_ClippingReference = 0
	EOculusMR_ClippingReference = 1
	EOculusMR_ClippingReference = 2
};

// Enum OculusMR.EOculusMR_CameraDev
enum class EOculusMR_CameraDevy : uint8 {
	EOculusMR_CameraDeveferenc = 0
	EOculusMR_CameraDev = 1
	EOculusMR_CameraDev = 2
	EOculusMR_CameraDev = 3
	EOculusMR_CameraDev = 4
};

// Class OculusMR.OculusMR_BoundaryActor
struct AOculusMR_BoundaryActor : UActor {
	struct Unknown BoundaryMeshComponent; // 0x310 (8)
};

// Class OculusMR.OculusMR_BoundaryMeshComponent
struct UOculusMR_BoundaryMeshComponent : UMeshComponent {
	enum class Unknow BoundaryType; // 0x4E8 (1)
	float BottomZ; // 0x4EC (4)
	float TopZ; // 0x4F0 (4)
	struct Unknown WhiteMaterial; // 0x4F8 (8)
	struct Unknown CastingCameraActor; // 0x500 (8)
};

// Class OculusMR.OculusMR_CastingCameraActor
struct AOculusMR_CastingCameraActor : ASceneCapture2D {
	struct Unknown V; // 0x328 (8)
	struct Unknown CameraColorTexture; // 0x330 (8)
	struct Unknown CameraDepthTexture; // 0x338 (8)
	struct Unknown PlaneMeshComponent; // 0x340 (8)
	struct Unknown ChromaKeyMaterial; // 0x348 (8)
	struct Unknown ChromaKeyLitMaterial; // 0x350 (8)
	struct Unknown OpaqueColoredMaterial; // 0x358 (8)
	struct Unknown ChromaKeyMaterialInstance; // 0x360 (8)
	struct Unknown ChromaKeyLitMaterialInstance; // 0x368 (8)
	struct Unknown CameraFrameMaterialInstance; // 0x370 (8)
	struct Unknown BackdropMaterialInstance; // 0x378 (8)
	struct Unknown BoundaryActor; // 0x380 (8)
	struct Unknown BoundarySceneCaptureActor; // 0x388 (8)
	struct Unknown DefaultTexture_White; // 0x390 (8)
	struct TArray<Unknown> BackgroundRenderTargets; // 0x3E8 (16)
	struct Unknown ForegroundCaptureActor; // 0x3F8 (8)
	struct TArray<Unknown> ForegroundRenderTargets; // 0x400 (16)
	struct Unknown M; // 0x410 (8)
	struct Unknown M; // 0x418 (8)
};

// Class OculusMR.OculusMR_Settings
struct UOculusMR_Settings : Object {
	enum class Unknow ClippingReference; // 0x28 (1)
	char bUseTrackedCameraResolution : 0; // 0x29 (1)
	int32_t WidthPerView; // 0x2C (4)
	int32_t HeightPerView; // 0x30 (4)
	float CastingLatency; // 0x34 (4)
	struct Unknown BackdropColor; // 0x38 (4)
	float HandPoseStateLatency; // 0x3C (4)
	struct Unknown ChromaKeyColor; // 0x40 (4)
	float ChromaKeySimilarity; // 0x44 (4)
	float ChromaKeySmoothRange; // 0x48 (4)
	float ChromaKeySpillRange; // 0x4C (4)
	enum class Unknow VirtualGreenScreenType; // 0x50 (1)
	float DynamicLightingDepthSmoothFactor; // 0x54 (4)
	float DynamicLightingDepthVariationClampingValue; // 0x58 (4)
	enum class Unknow ExternalCompositionPostProcessEffects; // 0x5C (1)
	char bIsCasting : 0; // 0x5D (1)
	enum class Unknow CompositionMethod; // 0x5E (1)
	enum class Unknow CapturingCamera; // 0x5F (1)
	char bUseDynamicLighting : 0; // 0x60 (1)
	enum class Unknow DepthQuality; // 0x61 (1)

	void SetUseDynamicLighting(char Val); // Function OculusMR.OculusMR_Settings.SetUseDynamicLighting(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1896010>
	void SetIsCasting(char Val); // Function OculusMR.OculusMR_Settings.SetIsCasting(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1895E80>
	void SetDepthQuality(enum class Unknow Val); // Function OculusMR.OculusMR_Settings.SetDepthQuality(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1895E00>
	void SetCompositionMethod(enum class Unknow Val); // Function OculusMR.OculusMR_Settings.SetCompositionMethod(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1895CC0>
	void SetCapturingCamera(enum class Unknow Val); // Function OculusMR.OculusMR_Settings.SetCapturingCamera(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1895C40>
	void SaveToIni(); // Function OculusMR.OculusMR_Settings.SaveToIni(Final|Native|Public|BlueprintCallable|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1895C20>
	void LoadFromIni(); // Function OculusMR.OculusMR_Settings.LoadFromIni(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1895C00>
	char GetUseDynamicLighting(); // Function OculusMR.OculusMR_Settings.GetUseDynamicLighting(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1895B80>
	char GetIsCasting(); // Function OculusMR.OculusMR_Settings.GetIsCasting(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1895AD0>
	enum class Unknow GetDepthQuality(); // Function OculusMR.OculusMR_Settings.GetDepthQuality(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1895AB0>
	enum class Unknow GetCompositionMethod(); // Function OculusMR.OculusMR_Settings.GetCompositionMethod(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1895A90>
	enum class Unknow GetCapturingCamera(); // Function OculusMR.OculusMR_Settings.GetCapturingCamera(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1895A70>
	int32_t GetBindToTrackedCameraIndex(); // Function OculusMR.OculusMR_Settings.GetBindToTrackedCameraIndex(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1895A50>
	void BindToTrackedCameraIndexIfAvailable(int32_t InTrackedCameraIndex); // Function OculusMR.OculusMR_Settings.BindToTrackedCameraIndexIfAvailable(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18959B0>
};

// Class OculusMR.OculusMR_State
struct UOculusMR_State : Object {
	struct Unknown TrackedCamera; // 0x28 (112)
	struct Unknown TrackingReferenceComponent; // 0x98 (8)
	double ScalingFactor; // 0xA0 (8)
	char ChangeCameraStateRequested : 0; // 0xAC (1)
	char BindToTrackedCameraIndexRequested : 0; // 0xAD (1)
};

