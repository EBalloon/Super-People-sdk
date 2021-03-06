// BlueprintGeneratedClass BP_AreaRectLight.BP_AreaRectLight_C
class ABP_AreaRectLight_C : public UActor {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x328 (8)
	struct UArrowComponent Arrow; // 0x330 (8)
	struct USceneComponent DefaultSceneRoot; // 0x338 (8)
	struct TArray<struct USpotLightComponent> LightList; // 0x340 (16)
	float Intensity; // 0x350 (4)
	struct FLinearColor Color; // 0x354 (16)
	float FocalAngleOuter; // 0x364 (4)
	float FocalAngleInner; // 0x368 (4)
	float AttenuationDistance; // 0x36C (4)
	float LightWidth; // 0x370 (4)
	float LightLength; // 0x374 (4)
	char CastShadows : 0; // 0x378 (1)
	int32_t LightSamplesSquared; // 0x37C (4)
	float SourceRadiusMult; // 0x380 (4)
	float CenterOfInterestLength; // 0x384 (4)
	char Enabled : 0; // 0x388 (1)
	struct FLightingChannels Channels; // 0x389 (1)
	float SoftRadius; // 0x38C (4)
	float ShadowBias; // 0x390 (4)
	float ShadowResolutionScale; // 0x394 (4)
	struct TArray<int32_t> LightSet01; // 0x398 (16)
	struct TArray<int32_t> LightSet02; // 0x3A8 (16)
	struct TArray<int32_t> LightSet03; // 0x3B8 (16)
	char LightVisibility01 : 0; // 0x3C8 (1)
	char LightVisibility02 : 0; // 0x3C9 (1)
	char LightVisibility03 : 0; // 0x3CA (1)
	char LightVisibility04 : 0; // 0x3CB (1)
	char LightVisibility05 : 0; // 0x3CC (1)
	char LightVisibility06 : 0; // 0x3CD (1)
	char LightVisibility07 : 0; // 0x3CE (1)
	char LightVisibility08 : 0; // 0x3CF (1)
	char LightVisibility09 : 0; // 0x3D0 (1)

	void NewFunction_1(); // Function BP_AreaRectLight.BP_AreaRectLight_C.NewFunction_1(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void LightArraySetup(); // Function BP_AreaRectLight.BP_AreaRectLight_C.LightArraySetup(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void UpdateLightValues(); // Function BP_AreaRectLight.BP_AreaRectLight_C.UpdateLightValues(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void UserConstructionScript(); // Function BP_AreaRectLight.BP_AreaRectLight_C.UserConstructionScript(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void ReceiveBeginPlay(); // Function BP_AreaRectLight.BP_AreaRectLight_C.ReceiveBeginPlay(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void ReceiveTick(float DeltaSeconds); // Function BP_AreaRectLight.BP_AreaRectLight_C.ReceiveTick(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void ExecuteUbergraph_BP_AreaRectLight(int32_t EntryPoint); // Function BP_AreaRectLight.BP_AreaRectLight_C.ExecuteUbergraph_BP_AreaRectLight(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
};

// Function BP_AreaRectLight.BP_AreaRectLight_C.NewFunction_1
inline void ABP_AreaRectLight_C::NewFunction_1() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AreaRectLight.BP_AreaRectLight_C.NewFunction_1");

	struct NewFunction_1_Params {
		
	}; NewFunction_1_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_AreaRectLight.BP_AreaRectLight_C.LightArraySetup
inline void ABP_AreaRectLight_C::LightArraySetup() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AreaRectLight.BP_AreaRectLight_C.LightArraySetup");

	struct LightArraySetup_Params {
		
	}; LightArraySetup_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_AreaRectLight.BP_AreaRectLight_C.UpdateLightValues
inline void ABP_AreaRectLight_C::UpdateLightValues() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AreaRectLight.BP_AreaRectLight_C.UpdateLightValues");

	struct UpdateLightValues_Params {
		
	}; UpdateLightValues_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_AreaRectLight.BP_AreaRectLight_C.UserConstructionScript
inline void ABP_AreaRectLight_C::UserConstructionScript() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AreaRectLight.BP_AreaRectLight_C.UserConstructionScript");

	struct UserConstructionScript_Params {
		
	}; UserConstructionScript_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_AreaRectLight.BP_AreaRectLight_C.ReceiveBeginPlay
inline void ABP_AreaRectLight_C::ReceiveBeginPlay() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AreaRectLight.BP_AreaRectLight_C.ReceiveBeginPlay");

	struct ReceiveBeginPlay_Params {
		
	}; ReceiveBeginPlay_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_AreaRectLight.BP_AreaRectLight_C.ReceiveTick
inline void ABP_AreaRectLight_C::ReceiveTick(float DeltaSeconds) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AreaRectLight.BP_AreaRectLight_C.ReceiveTick");

	struct ReceiveTick_Params {
		float DeltaSeconds;
	}; ReceiveTick_Params Params;

	Params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_AreaRectLight.BP_AreaRectLight_C.ExecuteUbergraph_BP_AreaRectLight
inline void ABP_AreaRectLight_C::ExecuteUbergraph_BP_AreaRectLight(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AreaRectLight.BP_AreaRectLight_C.ExecuteUbergraph_BP_AreaRectLight");

	struct ExecuteUbergraph_BP_AreaRectLight_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_BP_AreaRectLight_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

