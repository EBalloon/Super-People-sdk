// BlueprintGeneratedClass BP-WinCam.BP-WinCam_C
class ABP-WinCam_C : public UActor {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x300 (8)
	struct UCameraComponent WorldViewCamera; // 0x308 (8)
	struct UCameraComponent FarCamera; // 0x310 (8)
	struct UCameraComponent NearCamera; // 0x318 (8)
	struct USceneComponent DefaultSceneRoot; // 0x320 (8)
	struct ABravoHotelCharacter CharacterRef; // 0x328 (8)
	struct FTransform TargetNearCameraTransform; // 0x330 (48)
	float DeltaTime; // 0x360 (4)
	struct FTransform TargetFarCameraTransform; // 0x370 (48)
	struct ABravoHotelPlayerController PlayerControllerRef; // 0x3A0 (8)
	char bIsBackgroundScene : 0; // 0x3A8 (1)
	struct TArray<struct ABravoHotelCharacter> WinTeamCharacters; // 0x3B0 (16)
	struct TArray<struct FVector> DuoLocation_Near; // 0x3C0 (16)
	struct FVector CharacterOriginLocation; // 0x3D0 (12)
	struct TArray<struct FRotator> DuoRotation_Near; // 0x3E0 (16)
	struct TArray<struct FVector> DuoLocation_Far; // 0x3F0 (16)
	struct TArray<struct FRotator> DuoRotation_Far; // 0x400 (16)
	struct TArray<struct FVector> TrioLocation_Near; // 0x410 (16)
	struct TArray<struct FRotator> TrioRotation_Near; // 0x420 (16)
	struct TArray<struct FVector> TrioLocation_Far; // 0x430 (16)
	struct TArray<struct FRotator> TrioRotation_Far; // 0x440 (16)
	struct TArray<struct FVector> SquadLocation_Near; // 0x450 (16)
	struct TArray<struct FRotator> SquadRotation_Near; // 0x460 (16)
	struct TArray<struct FVector> SquadLocation_Far; // 0x470 (16)
	struct TArray<struct FRotator> SquadRotation_Far; // 0x480 (16)
	struct FRotator CharacterOriginRotation; // 0x490 (12)

	void GetFloorLocation(struct FVector InLocation, struct FVector& OutLocation); // Function BP-WinCam.BP-WinCam_C.GetFloorLocation(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void UpdateCharacterRotation(); // Function BP-WinCam.BP-WinCam_C.UpdateCharacterRotation(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void UpdateCharacterLocation(); // Function BP-WinCam.BP-WinCam_C.UpdateCharacterLocation(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void PlayWinAnimation(struct ABravoHotelCharacter TargetCharacter); // Function BP-WinCam.BP-WinCam_C.PlayWinAnimation(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void GetWinMontage(struct ABravoHotelCharacter TargetCharacter, struct UAnimMontage& WinMontage); // Function BP-WinCam.BP-WinCam_C.GetWinMontage(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void CheckWorldViewCameraLocationRange(); // Function BP-WinCam.BP-WinCam_C.CheckWorldViewCameraLocationRange(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void GetActiveCamera(struct UCameraComponent& ActiveCamera); // Function BP-WinCam.BP-WinCam_C.GetActiveCamera(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void PreventCameraWallCollision(); // Function BP-WinCam.BP-WinCam_C.PreventCameraWallCollision(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void InitReferences(char& bSuccess); // Function BP-WinCam.BP-WinCam_C.InitReferences(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void ReceiveBeginPlay(); // Function BP-WinCam.BP-WinCam_C.ReceiveBeginPlay(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void ReceiveTick(float DeltaSeconds); // Function BP-WinCam.BP-WinCam_C.ReceiveTick(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void Start Background Scene(); // Function BP-WinCam.BP-WinCam_C.Start Background Scene(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void OnFinishMatchEndAnimation(); // Function BP-WinCam.BP-WinCam_C.OnFinishMatchEndAnimation(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void ExecuteUbergraph_BP-WinCam(int32_t EntryPoint); // Function BP-WinCam.BP-WinCam_C.ExecuteUbergraph_BP-WinCam(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
};

// Function BP-WinCam.BP-WinCam_C.GetFloorLocation
inline void ABP-WinCam_C::GetFloorLocation(struct FVector InLocation, struct FVector& OutLocation) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-WinCam.BP-WinCam_C.GetFloorLocation");

	struct GetFloorLocation_Params {
		struct FVector InLocation;
		struct FVector& OutLocation;
	}; GetFloorLocation_Params Params;

	Params.InLocation = InLocation;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	OutLocation = Params.OutLocation;

}

// Function BP-WinCam.BP-WinCam_C.UpdateCharacterRotation
inline void ABP-WinCam_C::UpdateCharacterRotation() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-WinCam.BP-WinCam_C.UpdateCharacterRotation");

	struct UpdateCharacterRotation_Params {
		
	}; UpdateCharacterRotation_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-WinCam.BP-WinCam_C.UpdateCharacterLocation
inline void ABP-WinCam_C::UpdateCharacterLocation() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-WinCam.BP-WinCam_C.UpdateCharacterLocation");

	struct UpdateCharacterLocation_Params {
		
	}; UpdateCharacterLocation_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-WinCam.BP-WinCam_C.PlayWinAnimation
inline void ABP-WinCam_C::PlayWinAnimation(struct ABravoHotelCharacter TargetCharacter) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-WinCam.BP-WinCam_C.PlayWinAnimation");

	struct PlayWinAnimation_Params {
		struct ABravoHotelCharacter TargetCharacter;
	}; PlayWinAnimation_Params Params;

	Params.TargetCharacter = TargetCharacter;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-WinCam.BP-WinCam_C.GetWinMontage
inline void ABP-WinCam_C::GetWinMontage(struct ABravoHotelCharacter TargetCharacter, struct UAnimMontage& WinMontage) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-WinCam.BP-WinCam_C.GetWinMontage");

	struct GetWinMontage_Params {
		struct ABravoHotelCharacter TargetCharacter;
		struct UAnimMontage& WinMontage;
	}; GetWinMontage_Params Params;

	Params.TargetCharacter = TargetCharacter;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	WinMontage = Params.WinMontage;

}

// Function BP-WinCam.BP-WinCam_C.CheckWorldViewCameraLocationRange
inline void ABP-WinCam_C::CheckWorldViewCameraLocationRange() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-WinCam.BP-WinCam_C.CheckWorldViewCameraLocationRange");

	struct CheckWorldViewCameraLocationRange_Params {
		
	}; CheckWorldViewCameraLocationRange_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-WinCam.BP-WinCam_C.GetActiveCamera
inline void ABP-WinCam_C::GetActiveCamera(struct UCameraComponent& ActiveCamera) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-WinCam.BP-WinCam_C.GetActiveCamera");

	struct GetActiveCamera_Params {
		struct UCameraComponent& ActiveCamera;
	}; GetActiveCamera_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	ActiveCamera = Params.ActiveCamera;

}

// Function BP-WinCam.BP-WinCam_C.PreventCameraWallCollision
inline void ABP-WinCam_C::PreventCameraWallCollision() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-WinCam.BP-WinCam_C.PreventCameraWallCollision");

	struct PreventCameraWallCollision_Params {
		
	}; PreventCameraWallCollision_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-WinCam.BP-WinCam_C.InitReferences
inline void ABP-WinCam_C::InitReferences(char& bSuccess) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-WinCam.BP-WinCam_C.InitReferences");

	struct InitReferences_Params {
		char& bSuccess;
	}; InitReferences_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	bSuccess = Params.bSuccess;

}

// Function BP-WinCam.BP-WinCam_C.ReceiveBeginPlay
inline void ABP-WinCam_C::ReceiveBeginPlay() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-WinCam.BP-WinCam_C.ReceiveBeginPlay");

	struct ReceiveBeginPlay_Params {
		
	}; ReceiveBeginPlay_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-WinCam.BP-WinCam_C.ReceiveTick
inline void ABP-WinCam_C::ReceiveTick(float DeltaSeconds) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-WinCam.BP-WinCam_C.ReceiveTick");

	struct ReceiveTick_Params {
		float DeltaSeconds;
	}; ReceiveTick_Params Params;

	Params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-WinCam.BP-WinCam_C.Start Background Scene
inline void ABP-WinCam_C::Start Background Scene() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-WinCam.BP-WinCam_C.Start Background Scene");

	struct Start Background Scene_Params {
		
	}; Start Background Scene_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-WinCam.BP-WinCam_C.OnFinishMatchEndAnimation
inline void ABP-WinCam_C::OnFinishMatchEndAnimation() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-WinCam.BP-WinCam_C.OnFinishMatchEndAnimation");

	struct OnFinishMatchEndAnimation_Params {
		
	}; OnFinishMatchEndAnimation_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-WinCam.BP-WinCam_C.ExecuteUbergraph_BP-WinCam
inline void ABP-WinCam_C::ExecuteUbergraph_BP-WinCam(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-WinCam.BP-WinCam_C.ExecuteUbergraph_BP-WinCam");

	struct ExecuteUbergraph_BP-WinCam_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_BP-WinCam_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

