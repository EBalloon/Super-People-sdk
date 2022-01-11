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

	struct Unknown BoundaryMeshComponent; // 0x318 (8)
};

// Class OculusMR.OculusMR_BoundaryMeshComponent
class UOculusMR_BoundaryMeshComponent : public UMeshComponent {

public:

	enum class Unknow BoundaryType; // 0x4D8 (1)
	float BottomZ; // 0x4DC (4)
	float TopZ; // 0x4E0 (4)
	struct Unknown WhiteMaterial; // 0x4E8 (8)
	struct Unknown CastingCameraActor; // 0x4F0 (8)
};

// Class OculusMR.OculusMR_CastingCameraActor
class AOculusMR_CastingCameraActor : public ASceneCapture2D {

public:

	struct Unknown VRNotificationComponent; // 0x330 (8)
	struct Unknown CameraColorTexture; // 0x338 (8)
	struct Unknown CameraDepthTexture; // 0x340 (8)
	struct Unknown PlaneMeshComponent; // 0x348 (8)
	struct Unknown ChromaKeyMaterial; // 0x350 (8)
	struct Unknown ChromaKeyLitMaterial; // 0x358 (8)
	struct Unknown OpaqueColoredMaterial; // 0x360 (8)
	struct Unknown ChromaKeyMaterialInstance; // 0x368 (8)
	struct Unknown ChromaKeyLitMaterialInstance; // 0x370 (8)
	struct Unknown CameraFrameMaterialInstance; // 0x378 (8)
	struct Unknown BackdropMaterialInstance; // 0x380 (8)
	struct Unknown BoundaryActor; // 0x388 (8)
	struct Unknown BoundarySceneCaptureActor; // 0x390 (8)
	struct Unknown DefaultTexture_White; // 0x398 (8)
	struct TArray<Unknown> BackgroundRenderTargets; // 0x3F8 (16)
	struct Unknown ForegroundCaptureActor; // 0x408 (8)
	struct TArray<Unknown> ForegroundRenderTargets; // 0x410 (16)
	struct Unknown MRSettings; // 0x420 (8)
	struct Unknown MRState; // 0x428 (8)
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

	void SetUseDynamicLighting(char Val); // Function OculusMR.OculusMR_Settings.SetUseDynamicLighting(Final|Native|Public|BlueprintCallable) // <Game_BE.exe+0x18AB700>
	void SetIsCasting(char Val); // Function OculusMR.OculusMR_Settings.SetIsCasting(Final|Native|Public|BlueprintCallable) // <Game_BE.exe+0x18AB570>
	void SetDepthQuality(enum class Unknow Val); // Function OculusMR.OculusMR_Settings.SetDepthQuality(Final|Native|Public|BlueprintCallable) // <Game_BE.exe+0x18AB4F0>
	void SetCompositionMethod(enum class Unknow Val); // Function OculusMR.OculusMR_Settings.SetCompositionMethod(Final|Native|Public|BlueprintCallable) // <Game_BE.exe+0x18AB3B0>
	void SetCapturingCamera(enum class Unknow Val); // Function OculusMR.OculusMR_Settings.SetCapturingCamera(Final|Native|Public|BlueprintCallable) // <Game_BE.exe+0x18AB330>
	void SaveToIni(); // Function OculusMR.OculusMR_Settings.SaveToIni(Final|Native|Public|BlueprintCallable|Const) // <Game_BE.exe+0x18AB310>
	void LoadFromIni(); // Function OculusMR.OculusMR_Settings.LoadFromIni(Final|Native|Public|BlueprintCallable) // <Game_BE.exe+0x18AB2F0>
	char GetUseDynamicLighting(); // Function OculusMR.OculusMR_Settings.GetUseDynamicLighting(Final|Native|Public|BlueprintCallable) // <Game_BE.exe+0x18AB270>
	char GetIsCasting(); // Function OculusMR.OculusMR_Settings.GetIsCasting(Final|Native|Public|BlueprintCallable) // <Game_BE.exe+0x18AB1C0>
	enum class Unknow GetDepthQuality(); // Function OculusMR.OculusMR_Settings.GetDepthQuality(Final|Native|Public|BlueprintCallable) // <Game_BE.exe+0x18AB1A0>
	enum class Unknow GetCompositionMethod(); // Function OculusMR.OculusMR_Settings.GetCompositionMethod(Final|Native|Public|BlueprintCallable) // <Game_BE.exe+0x18AB180>
	enum class Unknow GetCapturingCamera(); // Function OculusMR.OculusMR_Settings.GetCapturingCamera(Final|Native|Public|BlueprintCallable) // <Game_BE.exe+0x18AB160>
	int32_t GetBindToTrackedCameraIndex(); // Function OculusMR.OculusMR_Settings.GetBindToTrackedCameraIndex(Final|Native|Public|BlueprintCallable) // <Game_BE.exe+0x18AB140>
	void BindToTrackedCameraIndexIfAvailable(int32_t InTrackedCameraIndex); // Function OculusMR.OculusMR_Settings.BindToTrackedCameraIndexIfAvailable(Final|Native|Public|BlueprintCallable) // <Game_BE.exe+0x18AB0A0>
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
inline void UOculusMR_Settings::SetDepthQuality(enum class Unknow Val) {
	static auto fn = UObject::FindObject<UFunction>("Function OculusMR.OculusMR_Settings.SetDepthQuality");

	struct SetDepthQuality_Params {
		enum class Unknow Val;
	}; SetDepthQuality_Params Params;

	Params.Val = Val;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function OculusMR.OculusMR_Settings.SetCompositionMethod
inline void UOculusMR_Settings::SetCompositionMethod(enum class Unknow Val) {
	static auto fn = UObject::FindObject<UFunction>("Function OculusMR.OculusMR_Settings.SetCompositionMethod");

	struct SetCompositionMethod_Params {
		enum class Unknow Val;
	}; SetCompositionMethod_Params Params;

	Params.Val = Val;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function OculusMR.OculusMR_Settings.SetCapturingCamera
inline void UOculusMR_Settings::SetCapturingCamera(enum class Unknow Val) {
	static auto fn = UObject::FindObject<UFunction>("Function OculusMR.OculusMR_Settings.SetCapturingCamera");

	struct SetCapturingCamera_Params {
		enum class Unknow Val;
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
inline enum class Unknow UOculusMR_Settings::GetDepthQuality() {
	static auto fn = UObject::FindObject<UFunction>("Function OculusMR.OculusMR_Settings.GetDepthQuality");

	struct GetDepthQuality_Params {
		
		enum class Unknow ReturnValue;

	}; GetDepthQuality_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function OculusMR.OculusMR_Settings.GetCompositionMethod
inline enum class Unknow UOculusMR_Settings::GetCompositionMethod() {
	static auto fn = UObject::FindObject<UFunction>("Function OculusMR.OculusMR_Settings.GetCompositionMethod");

	struct GetCompositionMethod_Params {
		
		enum class Unknow ReturnValue;

	}; GetCompositionMethod_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function OculusMR.OculusMR_Settings.GetCapturingCamera
inline enum class Unknow UOculusMR_Settings::GetCapturingCamera() {
	static auto fn = UObject::FindObject<UFunction>("Function OculusMR.OculusMR_Settings.GetCapturingCamera");

	struct GetCapturingCamera_Params {
		
		enum class Unknow ReturnValue;

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

