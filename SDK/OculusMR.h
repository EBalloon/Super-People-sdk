// Enum OculusMR.EOculusMR_BoundaryType
enum class EOculusMR_BoundaryType : uint8_t {
	BT_OuterBoundary = 0,
	BT_PlayArea = 1,
	BT_MAX = 2,
};

// Enum OculusMR.EOculusMR_CompositionMethod
enum class EOculusMR_CompositionMethod : uint8_t {
	ExternalComposition = 0,
	DirectComposition = 1,
	EOculusMR_MAX = 2,
};

// Enum OculusMR.EOculusMR_DepthQuality
enum class EOculusMR_DepthQuality : uint8_t {
	DQ_Low = 0,
	DQ_Medium = 1,
	DQ_High = 2,
	DQ_MAX = 3,
};

// Enum OculusMR.EOculusMR_PostProcessEffects
enum class EOculusMR_PostProcessEffects : uint8_t {
	PPE_Off = 0,
	PPE_On = 1,
	PPE_MAX = 2,
};

// Enum OculusMR.EOculusMR_VirtualGreenScreenType
enum class EOculusMR_VirtualGreenScreenType : uint8_t {
	VGS_Off = 0,
	VGS_OuterBoundary = 1,
	VGS_PlayArea = 2,
	VGS_MAX = 3,
};

// Enum OculusMR.EOculusMR_ClippingReference
enum class EOculusMR_ClippingReference : uint8_t {
	CR_TrackingReference = 0,
	CR_Head = 1,
	CR_MAX = 2,
};

// Enum OculusMR.EOculusMR_CameraDeviceEnum
enum class EOculusMR_CameraDeviceEnum : uint8_t {
	CD_None = 0,
	CD_WebCamera0 = 1,
	CD_WebCamera1 = 2,
	CD_ZEDCamera = 3,
	CD_MAX = 4,
};

// Class OculusMR.OculusMR_BoundaryActor
class AOculusMR_BoundaryActor : public UActor {

public:

	struct UOculusMR_BoundaryMeshComponent BoundaryMeshComponent; // 0x300 (8)
};

// Class OculusMR.OculusMR_BoundaryMeshComponent
class UOculusMR_BoundaryMeshComponent : public UMeshComponent {

public:

	enum class EOculusMR_BoundaryType BoundaryType; // 0x4D0 (1)
	float BottomZ; // 0x4D4 (4)
	float TopZ; // 0x4D8 (4)
	struct UMaterial WhiteMaterial; // 0x4E0 (8)
	struct AOculusMR_CastingCameraActor CastingCameraActor; // 0x4E8 (8)
};

// Class OculusMR.OculusMR_CastingCameraActor
class AOculusMR_CastingCameraActor : public ASceneCapture2D {

public:

	struct UVRNotificationsComponent VRNotificationComponent; // 0x318 (8)
	struct UTexture2D CameraColorTexture; // 0x320 (8)
	struct UTexture2D CameraDepthTexture; // 0x328 (8)
	struct UOculusMR_PlaneMeshComponent PlaneMeshComponent; // 0x330 (8)
	struct UMaterial ChromaKeyMaterial; // 0x338 (8)
	struct UMaterial ChromaKeyLitMaterial; // 0x340 (8)
	struct UMaterial OpaqueColoredMaterial; // 0x348 (8)
	struct UMaterialInstanceDynamic ChromaKeyMaterialInstance; // 0x350 (8)
	struct UMaterialInstanceDynamic ChromaKeyLitMaterialInstance; // 0x358 (8)
	struct UMaterialInstanceDynamic CameraFrameMaterialInstance; // 0x360 (8)
	struct UMaterialInstanceDynamic BackdropMaterialInstance; // 0x368 (8)
	struct AOculusMR_BoundaryActor BoundaryActor; // 0x370 (8)
	struct ASceneCapture2D BoundarySceneCaptureActor; // 0x378 (8)
	struct UTexture2D DefaultTexture_White; // 0x380 (8)
	struct TArray<struct UTextureRenderTarget2D> BackgroundRenderTargets; // 0x3D8 (16)
	struct ASceneCapture2D ForegroundCaptureActor; // 0x3E8 (8)
	struct TArray<struct UTextureRenderTarget2D> ForegroundRenderTargets; // 0x3F0 (16)
	struct UOculusMR_Settings MRSettings; // 0x400 (8)
	struct UOculusMR_State MRState; // 0x408 (8)
};

// Class OculusMR.OculusMR_Settings
class UOculusMR_Settings : public Object {

public:

	enum class EOculusMR_ClippingReference ClippingReference; // 0x28 (1)
	char bUseTrackedCameraResolution : 0; // 0x29 (1)
	int32_t WidthPerView; // 0x2C (4)
	int32_t HeightPerView; // 0x30 (4)
	float CastingLatency; // 0x34 (4)
	struct FColor BackdropColor; // 0x38 (4)
	float HandPoseStateLatency; // 0x3C (4)
	struct FColor ChromaKeyColor; // 0x40 (4)
	float ChromaKeySimilarity; // 0x44 (4)
	float ChromaKeySmoothRange; // 0x48 (4)
	float ChromaKeySpillRange; // 0x4C (4)
	enum class EOculusMR_VirtualGreenScreenType VirtualGreenScreenType; // 0x50 (1)
	float DynamicLightingDepthSmoothFactor; // 0x54 (4)
	float DynamicLightingDepthVariationClampingValue; // 0x58 (4)
	enum class EOculusMR_PostProcessEffects ExternalCompositionPostProcessEffects; // 0x5C (1)
	char bIsCasting : 0; // 0x5D (1)
	enum class EOculusMR_CompositionMethod CompositionMethod; // 0x5E (1)
	enum class EOculusMR_CameraDeviceEnum CapturingCamera; // 0x5F (1)
	char bUseDynamicLighting : 0; // 0x60 (1)
	enum class EOculusMR_DepthQuality DepthQuality; // 0x61 (1)

	void SetUseDynamicLighting(char Val); // Function OculusMR.OculusMR_Settings.SetUseDynamicLighting(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18AD9A0>
	void SetIsCasting(char Val); // Function OculusMR.OculusMR_Settings.SetIsCasting(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18AD810>
	void SetDepthQuality(enum class EOculusMR_DepthQuality Val); // Function OculusMR.OculusMR_Settings.SetDepthQuality(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18AD790>
	void SetCompositionMethod(enum class EOculusMR_CompositionMethod Val); // Function OculusMR.OculusMR_Settings.SetCompositionMethod(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18AD650>
	void SetCapturingCamera(enum class EOculusMR_CameraDeviceEnum Val); // Function OculusMR.OculusMR_Settings.SetCapturingCamera(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18AD5D0>
	void SaveToIni(); // Function OculusMR.OculusMR_Settings.SaveToIni(Final|Native|Public|BlueprintCallable|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18AD5B0>
	void LoadFromIni(); // Function OculusMR.OculusMR_Settings.LoadFromIni(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18AD590>
	char GetUseDynamicLighting(); // Function OculusMR.OculusMR_Settings.GetUseDynamicLighting(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18AD510>
	char GetIsCasting(); // Function OculusMR.OculusMR_Settings.GetIsCasting(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18AD460>
	enum class EOculusMR_DepthQuality GetDepthQuality(); // Function OculusMR.OculusMR_Settings.GetDepthQuality(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18AD440>
	enum class EOculusMR_CompositionMethod GetCompositionMethod(); // Function OculusMR.OculusMR_Settings.GetCompositionMethod(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18AD420>
	enum class EOculusMR_CameraDeviceEnum GetCapturingCamera(); // Function OculusMR.OculusMR_Settings.GetCapturingCamera(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18AD400>
	int32_t GetBindToTrackedCameraIndex(); // Function OculusMR.OculusMR_Settings.GetBindToTrackedCameraIndex(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18AD3E0>
	void BindToTrackedCameraIndexIfAvailable(int32_t InTrackedCameraIndex); // Function OculusMR.OculusMR_Settings.BindToTrackedCameraIndexIfAvailable(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18AD340>
};

// Class OculusMR.OculusMR_State
class UOculusMR_State : public Object {

public:

	struct FTrackedCamera TrackedCamera; // 0x28 (112)
	struct USceneComponent TrackingReferenceComponent; // 0x98 (8)
	double ScalingFactor; // 0xA0 (8)
	char ChangeCameraStateRequested : 0; // 0xAC (1)
	char BindToTrackedCameraIndexRequested : 0; // 0xAD (1)
};

// ScriptStruct OculusMR.OculusMR_PlaneMeshTriangle
struct FOculusMR_PlaneMeshTriangle {
	struct FVector Vertex0; // 0x0 (12)
	struct FVector2D UV0; // 0xC (8)
	struct FVector Vertex1; // 0x14 (12)
	struct FVector2D UV1; // 0x20 (8)
	struct FVector Vertex2; // 0x28 (12)
	struct FVector2D UV2; // 0x34 (8)
};

// ScriptStruct OculusMR.TrackedCamera
struct FTrackedCamera {
	int32_t Index; // 0x0 (4)
	struct FString Name; // 0x8 (16)
	float FieldOfView; // 0x18 (4)
	int32_t SizeX; // 0x1C (4)
	int32_t SizeY; // 0x20 (4)
	enum class ETrackedDeviceType AttachedTrackedDevice; // 0x24 (1)
	struct FRotator CalibratedRotation; // 0x28 (12)
	struct FVector CalibratedOffset; // 0x34 (12)
	struct FRotator UserRotation; // 0x40 (12)
	struct FVector UserOffset; // 0x4C (12)
	struct FRotator RawRotation; // 0x58 (12)
	struct FVector RawOffset; // 0x64 (12)
};

// Function OculusMR.OculusMR_Settings.SetUseDynamicLighting
inline void UOculusMR_Settings::SetUseDynamicLighting(char Val) {
	static auto fn = UObject::FindObject<UFunction>("Function OculusMR.OculusMR_Settings.SetUseDynamicLighting");

	struct SetUseDynamicLighting_Params {
		char Val;
	}; SetUseDynamicLighting_Params Params;

	Params.Val = Val;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function OculusMR.OculusMR_Settings.SetIsCasting
inline void UOculusMR_Settings::SetIsCasting(char Val) {
	static auto fn = UObject::FindObject<UFunction>("Function OculusMR.OculusMR_Settings.SetIsCasting");

	struct SetIsCasting_Params {
		char Val;
	}; SetIsCasting_Params Params;

	Params.Val = Val;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function OculusMR.OculusMR_Settings.SetDepthQuality
inline void UOculusMR_Settings::SetDepthQuality(enum class EOculusMR_DepthQuality Val) {
	static auto fn = UObject::FindObject<UFunction>("Function OculusMR.OculusMR_Settings.SetDepthQuality");

	struct SetDepthQuality_Params {
		enum class EOculusMR_DepthQuality Val;
	}; SetDepthQuality_Params Params;

	Params.Val = Val;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function OculusMR.OculusMR_Settings.SetCompositionMethod
inline void UOculusMR_Settings::SetCompositionMethod(enum class EOculusMR_CompositionMethod Val) {
	static auto fn = UObject::FindObject<UFunction>("Function OculusMR.OculusMR_Settings.SetCompositionMethod");

	struct SetCompositionMethod_Params {
		enum class EOculusMR_CompositionMethod Val;
	}; SetCompositionMethod_Params Params;

	Params.Val = Val;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function OculusMR.OculusMR_Settings.SetCapturingCamera
inline void UOculusMR_Settings::SetCapturingCamera(enum class EOculusMR_CameraDeviceEnum Val) {
	static auto fn = UObject::FindObject<UFunction>("Function OculusMR.OculusMR_Settings.SetCapturingCamera");

	struct SetCapturingCamera_Params {
		enum class EOculusMR_CameraDeviceEnum Val;
	}; SetCapturingCamera_Params Params;

	Params.Val = Val;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function OculusMR.OculusMR_Settings.SaveToIni
inline void UOculusMR_Settings::SaveToIni() {
	static auto fn = UObject::FindObject<UFunction>("Function OculusMR.OculusMR_Settings.SaveToIni");

	struct SaveToIni_Params {
		
	}; SaveToIni_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function OculusMR.OculusMR_Settings.LoadFromIni
inline void UOculusMR_Settings::LoadFromIni() {
	static auto fn = UObject::FindObject<UFunction>("Function OculusMR.OculusMR_Settings.LoadFromIni");

	struct LoadFromIni_Params {
		
	}; LoadFromIni_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function OculusMR.OculusMR_Settings.GetUseDynamicLighting
inline char UOculusMR_Settings::GetUseDynamicLighting() {
	static auto fn = UObject::FindObject<UFunction>("Function OculusMR.OculusMR_Settings.GetUseDynamicLighting");

	struct GetUseDynamicLighting_Params {
		
		char ReturnValue;

	}; GetUseDynamicLighting_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function OculusMR.OculusMR_Settings.GetIsCasting
inline char UOculusMR_Settings::GetIsCasting() {
	static auto fn = UObject::FindObject<UFunction>("Function OculusMR.OculusMR_Settings.GetIsCasting");

	struct GetIsCasting_Params {
		
		char ReturnValue;

	}; GetIsCasting_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function OculusMR.OculusMR_Settings.GetDepthQuality
inline enum class EOculusMR_DepthQuality UOculusMR_Settings::GetDepthQuality() {
	static auto fn = UObject::FindObject<UFunction>("Function OculusMR.OculusMR_Settings.GetDepthQuality");

	struct GetDepthQuality_Params {
		
		enum class EOculusMR_DepthQuality ReturnValue;

	}; GetDepthQuality_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function OculusMR.OculusMR_Settings.GetCompositionMethod
inline enum class EOculusMR_CompositionMethod UOculusMR_Settings::GetCompositionMethod() {
	static auto fn = UObject::FindObject<UFunction>("Function OculusMR.OculusMR_Settings.GetCompositionMethod");

	struct GetCompositionMethod_Params {
		
		enum class EOculusMR_CompositionMethod ReturnValue;

	}; GetCompositionMethod_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function OculusMR.OculusMR_Settings.GetCapturingCamera
inline enum class EOculusMR_CameraDeviceEnum UOculusMR_Settings::GetCapturingCamera() {
	static auto fn = UObject::FindObject<UFunction>("Function OculusMR.OculusMR_Settings.GetCapturingCamera");

	struct GetCapturingCamera_Params {
		
		enum class EOculusMR_CameraDeviceEnum ReturnValue;

	}; GetCapturingCamera_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function OculusMR.OculusMR_Settings.GetBindToTrackedCameraIndex
inline int32_t UOculusMR_Settings::GetBindToTrackedCameraIndex() {
	static auto fn = UObject::FindObject<UFunction>("Function OculusMR.OculusMR_Settings.GetBindToTrackedCameraIndex");

	struct GetBindToTrackedCameraIndex_Params {
		
		int32_t ReturnValue;

	}; GetBindToTrackedCameraIndex_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function OculusMR.OculusMR_Settings.BindToTrackedCameraIndexIfAvailable
inline void UOculusMR_Settings::BindToTrackedCameraIndexIfAvailable(int32_t InTrackedCameraIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function OculusMR.OculusMR_Settings.BindToTrackedCameraIndexIfAvailable");

	struct BindToTrackedCameraIndexIfAvailable_Params {
		int32_t InTrackedCameraIndex;
	}; BindToTrackedCameraIndexIfAvailable_Params Params;

	Params.InTrackedCameraIndex = InTrackedCameraIndex;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

