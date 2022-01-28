// BlueprintGeneratedClass BP-DeathCam.BP-DeathCam_C
class ABP-DeathCam_C : public UActor {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x328 (8)
	struct UCameraComponent FirstCamera; // 0x330 (8)
	struct USpringArmComponent FirstSpringArm; // 0x338 (8)
	struct UCameraComponent ThirdCamera; // 0x340 (8)
	struct UCameraComponent SecondCamera; // 0x348 (8)
	struct USceneComponent DefaultSceneRoot; // 0x350 (8)
	float DeltaSeconds; // 0x358 (4)
	struct FVector TargetDeltaLocation; // 0x35C (12)
	struct ABravoHotelCharacter Character; // 0x368 (8)
	float LowerBoundCameraHeightDelta; // 0x370 (4)
	char bHeightUpdateFinished : 0; // 0x374 (1)
	float ThridCameraRotationYawDelta; // 0x378 (4)
	float ThirdCameraMinHeight; // 0x37C (4)
	float FirstSpringArmDeltaZ; // 0x380 (4)

	void CheckThirdCameraLocationRange(); // Function BP-DeathCam.BP-DeathCam_C.CheckThirdCameraLocationRange(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void UpdateActorRotationToPelvis(); // Function BP-DeathCam.BP-DeathCam_C.UpdateActorRotationToPelvis(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void GetActiveCamera(struct UCameraComponent& ActiveCamera); // Function BP-DeathCam.BP-DeathCam_C.GetActiveCamera(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void UpdateLowerBoundCameraHeight(); // Function BP-DeathCam.BP-DeathCam_C.UpdateLowerBoundCameraHeight(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void PreventCameraWallCollision(); // Function BP-DeathCam.BP-DeathCam_C.PreventCameraWallCollision(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void InitReferences(char& bSuccess); // Function BP-DeathCam.BP-DeathCam_C.InitReferences(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void UpdateCameraHeightToHead(); // Function BP-DeathCam.BP-DeathCam_C.UpdateCameraHeightToHead(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void UserConstructionScript(); // Function BP-DeathCam.BP-DeathCam_C.UserConstructionScript(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void ReceiveBeginPlay(); // Function BP-DeathCam.BP-DeathCam_C.ReceiveBeginPlay(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void ReceiveTick(float DeltaSeconds); // Function BP-DeathCam.BP-DeathCam_C.ReceiveTick(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void K2_OnEndViewTarget(struct APlayerController PC); // Function BP-DeathCam.BP-DeathCam_C.K2_OnEndViewTarget(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void ExecuteUbergraph_BP-DeathCam(int32_t EntryPoint); // Function BP-DeathCam.BP-DeathCam_C.ExecuteUbergraph_BP-DeathCam(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
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
inline void ABP-DeathCam_C::GetActiveCamera(struct UCameraComponent& ActiveCamera) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-DeathCam.BP-DeathCam_C.GetActiveCamera");

	struct GetActiveCamera_Params {
		struct UCameraComponent& ActiveCamera;
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
inline void ABP-DeathCam_C::K2_OnEndViewTarget(struct APlayerController PC) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-DeathCam.BP-DeathCam_C.K2_OnEndViewTarget");

	struct K2_OnEndViewTarget_Params {
		struct APlayerController PC;
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

