// BlueprintGeneratedClass BP-WinCam.BP-WinCam_C
class ABP-WinCam_C : public UActor {

public:

	struct Unknown UberGraphFrame; // 0x310 (8)
	struct Unknown WorldViewCamera; // 0x318 (8)
	struct Unknown FarCamera; // 0x320 (8)
	struct Unknown NearCamera; // 0x328 (8)
	struct Unknown DefaultSceneRoot; // 0x330 (8)
	struct Unknown CharacterRef; // 0x338 (8)
	struct Unknown TargetNearCameraTransform; // 0x340 (48)
	float DeltaTime; // 0x370 (4)
	struct Unknown TargetFarCameraTransform; // 0x380 (48)
	struct Unknown PlayerControllerRef; // 0x3B0 (8)
	char bIsBackgroundScene : 0; // 0x3B8 (1)
	struct TArray<Unknown> WinTeamCharacters; // 0x3C0 (16)
	struct TArray<Unknown> DuoLocation_Near; // 0x3D0 (16)
	struct Unknown CharacterOriginLocation; // 0x3E0 (12)
	struct TArray<Unknown> DuoRotation_Near; // 0x3F0 (16)
	struct TArray<Unknown> DuoLocation_Far; // 0x400 (16)
	struct TArray<Unknown> DuoRotation_Far; // 0x410 (16)
	struct TArray<Unknown> TrioLocation_Near; // 0x420 (16)
	struct TArray<Unknown> TrioRotation_Near; // 0x430 (16)
	struct TArray<Unknown> TrioLocation_Far; // 0x440 (16)
	struct TArray<Unknown> TrioRotation_Far; // 0x450 (16)
	struct TArray<Unknown> SquadLocation_Near; // 0x460 (16)
	struct TArray<Unknown> SquadRotation_Near; // 0x470 (16)
	struct TArray<Unknown> SquadLocation_Far; // 0x480 (16)
	struct TArray<Unknown> SquadRotation_Far; // 0x490 (16)
	struct Unknown CharacterOriginRotation; // 0x4A0 (12)

	void GetFloorLocation(struct Unknown InLocation, struct Unknown& OutLocation); // Function BP-WinCam.BP-WinCam_C.GetFloorLocation(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void UpdateCharacterRotation(); // Function BP-WinCam.BP-WinCam_C.UpdateCharacterRotation(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void UpdateCharacterLocation(); // Function BP-WinCam.BP-WinCam_C.UpdateCharacterLocation(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void PlayWinAnimation(struct Unknown TargetCharacter); // Function BP-WinCam.BP-WinCam_C.PlayWinAnimation(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void GetWinMontage(struct Unknown TargetCharacter, struct Unknown& WinMontage); // Function BP-WinCam.BP-WinCam_C.GetWinMontage(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void CheckWorldViewCameraLocationRange(); // Function BP-WinCam.BP-WinCam_C.CheckWorldViewCameraLocationRange(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void GetActiveCamera(struct Unknown& ActiveCamera); // Function BP-WinCam.BP-WinCam_C.GetActiveCamera(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void PreventCameraWallCollision(); // Function BP-WinCam.BP-WinCam_C.PreventCameraWallCollision(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void InitReferences(char& bSuccess); // Function BP-WinCam.BP-WinCam_C.InitReferences(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void ReceiveBeginPlay(); // Function BP-WinCam.BP-WinCam_C.ReceiveBeginPlay(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void ReceiveTick(float DeltaSeconds); // Function BP-WinCam.BP-WinCam_C.ReceiveTick(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Start Background Scene(); // Function BP-WinCam.BP-WinCam_C.Start Background Scene(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void OnFinishMatchEndAnimation(); // Function BP-WinCam.BP-WinCam_C.OnFinishMatchEndAnimation(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void ExecuteUbergraph_BP-WinCam(int32_t EntryPoint); // Function BP-WinCam.BP-WinCam_C.ExecuteUbergraph_BP-WinCam(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
};

// Function BP-WinCam.BP-WinCam_C.GetFloorLocation
inline void ABP-WinCam_C::GetFloorLocation(struct Unknown InLocation, struct Unknown& OutLocation) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-WinCam.BP-WinCam_C.GetFloorLocation");

	struct GetFloorLocation_Params {
		struct Unknown InLocation;
		struct Unknown& OutLocation;
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
inline void ABP-WinCam_C::PlayWinAnimation(struct Unknown TargetCharacter) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-WinCam.BP-WinCam_C.PlayWinAnimation");

	struct PlayWinAnimation_Params {
		struct Unknown TargetCharacter;
	}; PlayWinAnimation_Params Params;

	Params.TargetCharacter = TargetCharacter;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-WinCam.BP-WinCam_C.GetWinMontage
inline void ABP-WinCam_C::GetWinMontage(struct Unknown TargetCharacter, struct Unknown& WinMontage) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-WinCam.BP-WinCam_C.GetWinMontage");

	struct GetWinMontage_Params {
		struct Unknown TargetCharacter;
		struct Unknown& WinMontage;
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
inline void ABP-WinCam_C::GetActiveCamera(struct Unknown& ActiveCamera) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-WinCam.BP-WinCam_C.GetActiveCamera");

	struct GetActiveCamera_Params {
		struct Unknown& ActiveCamera;
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

