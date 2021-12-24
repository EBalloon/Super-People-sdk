// Enum OculusMR.EOculusMR_BoundaryType
enum class EOculusMR_BoundaryType : uint8_t {
	EOculusMR_BoundaryType = 0,
	EOculusMR_BoundaryType = 1,
	EOculusMR_BoundaryType = 2,
};

// Enum OculusMR.EOculusMR_CompositionMethod
enum class EOculusMR_CompositionMethod : uint8_t {
	EOculusMR_CompositionMethod = 0,
	EOculusMR_CompositionMethod = 1,
	EOculusMR_CompositionMethod = 2,
};

// Enum OculusMR.EOculusMR_DepthQuality
enum class EOculusMR_DepthQuality : uint8_t {
	EOculusMR_DepthQuality = 0,
	EOculusMR_DepthQuality = 1,
	EOculusMR_DepthQuality = 2,
	EOculusMR_DepthQuality = 3,
};

// Enum OculusMR.EOculusMR_PostProcessEffects
enum class EOculusMR_PostProcessEffects : uint8_t {
	EOculusMR_PostProcessEffects = 0,
	EOculusMR_PostProcessEffects = 1,
	EOculusMR_PostProcessEffects = 2,
};

// Enum OculusMR.EOculusMR_VirtualGreenScreenType
enum class EOculusMR_VirtualGreenScreenType : uint8_t {
	EOculusMR_VirtualGreenScreenType = 0,
	EOculusMR_VirtualGreenScreenType = 1,
	EOculusMR_VirtualGreenScreenType = 2,
	EOculusMR_VirtualGreenScreenType = 3,
};

// Enum OculusMR.EOculusMR_ClippingReference
enum class EOculusMR_ClippingReference : uint8_t {
	EOculusMR_ClippingReference = 0,
	EOculusMR_ClippingReference = 1,
	EOculusMR_ClippingReference = 2,
};

// Enum OculusMR.EOculusMR_CameraDev
enum class EOculusMR_CameraDev : uint8_t {
	EOculusMR_CameraDeveference = 0,
	EOculusMR_CameraDeveference = 1,
	EOculusMR_CameraDev = 2,
	EOculusMR_CameraDev = 3,
	EOculusMR_CameraDev = 4,
};

// Class OculusMR.OculusMR_BoundaryActor
class AOculusMR_BoundaryActor : public UActor {

public:

	struct Unknown BoundaryMeshComponent; // 0x310 (8)
};

// Class OculusMR.OculusMR_BoundaryMeshComponent
class UOculusMR_BoundaryMeshComponent : public UMeshComponent {

public:

	enum class Unknow BoundaryType; // 0x4E8 (1)
	float BottomZ; // 0x4EC (4)
	float TopZ; // 0x4F0 (4)
	struct Unknown WhiteMaterial; // 0x4F8 (8)
	struct Unknown CastingCameraActor; // 0x500 (8)
};

// Class OculusMR.OculusMR_CastingCameraActor
class AOculusMR_CastingCameraActor : public ASceneCapture2D {

public:

	struct Unknown VRNotificationComponent; // 0x328 (8)
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
	struct Unknown MRSettings; // 0x410 (8)
	struct Unknown MRState; // 0x418 (8)
};

// Class OculusMR.OculusMR_Settings
class UOculusMR_Settings : public Object {

public:

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

	void SetUseDynamicLighting(char Val); // Function OculusMR.OculusMR_Settings.SetUseDynamicLighting(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1897480>
	void SetIsCasting(char Val); // Function OculusMR.OculusMR_Settings.SetIsCasting(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18972F0>
	void SetDepthQuality(enum class Unknow Val); // Function OculusMR.OculusMR_Settings.SetDepthQuality(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1897270>
	void SetCompositionMethod(enum class Unknow Val); // Function OculusMR.OculusMR_Settings.SetCompositionMethod(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1897130>
	void SetCapturingCamera(enum class Unknow Val); // Function OculusMR.OculusMR_Settings.SetCapturingCamera(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18970B0>
	void SaveToIni(); // Function OculusMR.OculusMR_Settings.SaveToIni(Final|Native|Public|BlueprintCallable|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1897090>
	void LoadFromIni(); // Function OculusMR.OculusMR_Settings.LoadFromIni(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1897070>
	char GetUseDynamicLighting(); // Function OculusMR.OculusMR_Settings.GetUseDynamicLighting(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1896FF0>
	char GetIsCasting(); // Function OculusMR.OculusMR_Settings.GetIsCasting(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1896F40>
	enum class Unknow GetDepthQuality(); // Function OculusMR.OculusMR_Settings.GetDepthQuality(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1896F20>
	enum class Unknow GetCompositionMethod(); // Function OculusMR.OculusMR_Settings.GetCompositionMethod(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1896F00>
	enum class Unknow GetCapturingCamera(); // Function OculusMR.OculusMR_Settings.GetCapturingCamera(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1896EE0>
	int32_t GetBindToTrackedCameraIndex(); // Function OculusMR.OculusMR_Settings.GetBindToTrackedCameraIndex(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1896EC0>
	void BindToTrackedCameraIndexIfAvailable(int32_t InTrackedCameraIndex); // Function OculusMR.OculusMR_Settings.BindToTrackedCameraIndexIfAvailable(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1896E20>
};

// Class OculusMR.OculusMR_State
class UOculusMR_State : public Object {

public:

	struct Unknown TrackedCamera; // 0x28 (112)
	struct Unknown TrackingReferenceComponent; // 0x98 (8)
	double ScalingFactor; // 0xA0 (8)
	char ChangeCameraStateRequested : 0; // 0xAC (1)
	char BindToTrackedCameraIndexRequested : 0; // 0xAD (1)
};

// ScriptStruct OculusMR.OculusMR_PlaneMeshTriangle
struct FOculusMR_PlaneMeshTriangle {
	struct Unknown Vertex0; // 0x0 (12)
	struct Unknown UV0; // 0xC (8)
	struct Unknown Vertex1; // 0x14 (12)
	struct Unknown UV1; // 0x20 (8)
	struct Unknown Vertex2; // 0x28 (12)
	struct Unknown UV2; // 0x34 (8)
};

// ScriptStruct OculusMR.TrackedCamera
struct FTrackedCamera {
	int32_t Index; // 0x0 (4)
	struct FString Name; // 0x8 (16)
	float FieldOfView; // 0x18 (4)
	int32_t SizeX; // 0x1C (4)
	int32_t SizeY; // 0x20 (4)
	enum class Unknow AttachedTrackedDevice; // 0x24 (1)
	struct Unknown CalibratedRotation; // 0x28 (12)
	struct Unknown CalibratedOffset; // 0x34 (12)
	struct Unknown UserRotation; // 0x40 (12)
	struct Unknown UserOffset; // 0x4C (12)
	struct Unknown RawRotation; // 0x58 (12)
	struct Unknown RawOffset; // 0x64 (12)
};

