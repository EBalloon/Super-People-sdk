// BlueprintGeneratedClass BP-DeathCam.BP-DeathCam_C
class ABP-DeathCam_C : public UActor {

public:

	struct Unknown UberGraphFrame; // 0x300 (8)
	struct Unknown FirstCamera; // 0x308 (8)
	struct Unknown FirstSpringArm; // 0x310 (8)
	struct Unknown ThirdCamera; // 0x318 (8)
	struct Unknown SecondCamera; // 0x320 (8)
	struct Unknown DefaultSceneRoot; // 0x328 (8)
	float DeltaSeconds; // 0x330 (4)
	struct Unknown TargetDeltaLocation; // 0x334 (12)
	struct Unknown Character; // 0x340 (8)
	float LowerBoundCameraHeightDelta; // 0x348 (4)
	char bHeightUpdateFinished : 0; // 0x34C (1)
	float ThridCameraRotationYawDelta; // 0x350 (4)
	float ThirdCameraMinHeight; // 0x354 (4)
	float FirstSpringArmDeltaZ; // 0x358 (4)

	void CheckThirdCameraLocationRange(); // Function BP-DeathCam.BP-DeathCam_C.CheckThirdCameraLocationRange(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void UpdateActorRotationToPelvis(); // Function BP-DeathCam.BP-DeathCam_C.UpdateActorRotationToPelvis(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void GetActiveCamera(struct Unknown& ActiveCamera); // Function BP-DeathCam.BP-DeathCam_C.GetActiveCamera(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void UpdateLowerBoundCameraHeight(); // Function BP-DeathCam.BP-DeathCam_C.UpdateLowerBoundCameraHeight(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void PreventCameraWallCollision(); // Function BP-DeathCam.BP-DeathCam_C.PreventCameraWallCollision(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void InitReferences(char& bSuccess); // Function BP-DeathCam.BP-DeathCam_C.InitReferences(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void UpdateCameraHeightToHead(); // Function BP-DeathCam.BP-DeathCam_C.UpdateCameraHeightToHead(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void UserConstructionScript(); // Function BP-DeathCam.BP-DeathCam_C.UserConstructionScript(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void ReceiveBeginPlay(); // Function BP-DeathCam.BP-DeathCam_C.ReceiveBeginPlay(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void ReceiveTick(float DeltaSeconds); // Function BP-DeathCam.BP-DeathCam_C.ReceiveTick(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void K2_OnEndViewTarget(struct Unknown PC); // Function BP-DeathCam.BP-DeathCam_C.K2_OnEndViewTarget(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void ExecuteUbergraph_BP-DeathCam(int32_t EntryPoint); // Function BP-DeathCam.BP-DeathCam_C.ExecuteUbergraph_BP-DeathCam(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
};

// Function BP-DeathCam.BP-DeathCam_C.CheckThirdCameraLocationRange
inline void ABP-DeathCam_C::CheckThirdCameraLocationRange() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-DeathCam.BP-DeathCam_C.CheckThirdCameraLocationRange");

	struct CheckThirdCameraLocationRange_Params {
		
	}; CheckThirdCameraLocationRange_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-DeathCam.BP-DeathCam_C.UpdateActorRotationToPelvis
inline void ABP-DeathCam_C::UpdateActorRotationToPelvis() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-DeathCam.BP-DeathCam_C.UpdateActorRotationToPelvis");

	struct UpdateActorRotationToPelvis_Params {
		
	}; UpdateActorRotationToPelvis_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-DeathCam.BP-DeathCam_C.GetActiveCamera
inline void ABP-DeathCam_C::GetActiveCamera(struct Unknown& ActiveCamera) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-DeathCam.BP-DeathCam_C.GetActiveCamera");

	struct GetActiveCamera_Params {
		struct Unknown& ActiveCamera;
	}; GetActiveCamera_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	ActiveCamera = Params.ActiveCamera;

}

// Function BP-DeathCam.BP-DeathCam_C.UpdateLowerBoundCameraHeight
inline void ABP-DeathCam_C::UpdateLowerBoundCameraHeight() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-DeathCam.BP-DeathCam_C.UpdateLowerBoundCameraHeight");

	struct UpdateLowerBoundCameraHeight_Params {
		
	}; UpdateLowerBoundCameraHeight_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-DeathCam.BP-DeathCam_C.PreventCameraWallCollision
inline void ABP-DeathCam_C::PreventCameraWallCollision() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-DeathCam.BP-DeathCam_C.PreventCameraWallCollision");

	struct PreventCameraWallCollision_Params {
		
	}; PreventCameraWallCollision_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-DeathCam.BP-DeathCam_C.InitReferences
inline void ABP-DeathCam_C::InitReferences(char& bSuccess) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-DeathCam.BP-DeathCam_C.InitReferences");

	struct InitReferences_Params {
		char& bSuccess;
	}; InitReferences_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	bSuccess = Params.bSuccess;

}

// Function BP-DeathCam.BP-DeathCam_C.UpdateCameraHeightToHead
inline void ABP-DeathCam_C::UpdateCameraHeightToHead() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-DeathCam.BP-DeathCam_C.UpdateCameraHeightToHead");

	struct UpdateCameraHeightToHead_Params {
		
	}; UpdateCameraHeightToHead_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-DeathCam.BP-DeathCam_C.UserConstructionScript
inline void ABP-DeathCam_C::UserConstructionScript() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-DeathCam.BP-DeathCam_C.UserConstructionScript");

	struct UserConstructionScript_Params {
		
	}; UserConstructionScript_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-DeathCam.BP-DeathCam_C.ReceiveBeginPlay
inline void ABP-DeathCam_C::ReceiveBeginPlay() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-DeathCam.BP-DeathCam_C.ReceiveBeginPlay");

	struct ReceiveBeginPlay_Params {
		
	}; ReceiveBeginPlay_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-DeathCam.BP-DeathCam_C.ReceiveTick
inline void ABP-DeathCam_C::ReceiveTick(float DeltaSeconds) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-DeathCam.BP-DeathCam_C.ReceiveTick");

	struct ReceiveTick_Params {
		float DeltaSeconds;
	}; ReceiveTick_Params Params;

	Params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-DeathCam.BP-DeathCam_C.K2_OnEndViewTarget
inline void ABP-DeathCam_C::K2_OnEndViewTarget(struct Unknown PC) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-DeathCam.BP-DeathCam_C.K2_OnEndViewTarget");

	struct K2_OnEndViewTarget_Params {
		struct Unknown PC;
	}; K2_OnEndViewTarget_Params Params;

	Params.PC = PC;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-DeathCam.BP-DeathCam_C.ExecuteUbergraph_BP-DeathCam
inline void ABP-DeathCam_C::ExecuteUbergraph_BP-DeathCam(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-DeathCam.BP-DeathCam_C.ExecuteUbergraph_BP-DeathCam");

	struct ExecuteUbergraph_BP-DeathCam_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_BP-DeathCam_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

