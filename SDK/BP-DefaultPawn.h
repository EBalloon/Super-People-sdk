// BlueprintGeneratedClass BP-DefaultPawn.BP-DefaultPawn_C
class ABP-DefaultPawn_C : public ABravoHotelCharacterPrefab {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3AE0 (8)
	struct UBP-LadderComponent_C BP-LadderComponent; // 0x3AE8 (8)
	struct UParticleSystemComponent OutBlueZone; // 0x3AF0 (8)
	struct UBP-GrassCollision_Character_C BP-FoliageCollision; // 0x3AF8 (8)
	struct UChildActorComponent DevCamera_ChildActor; // 0x3B00 (8)
	struct UTeamInfoUpdaterComponent TeamInfoUpdater; // 0x3B08 (8)
	float VelocityZ_LandingDamage; // 0x3B10 (4)
	struct ABP-CharacterRecording_C CharacterPreviewRef; // 0x3B18 (8)
	struct AChat_System_C Chat System; // 0x3B20 (8)
	char ShowChatToggle : 0; // 0x3B28 (1)
	float CurrentViewportSizeX; // 0x3B2C (4)
	float CurrentViewportSizeY; // 0x3B30 (4)
	char OutScreenPosition : 0; // 0x3B34 (1)
	int32_t SightNumForTset; // 0x3B38 (4)
	char bDefaultAmplifier : 0; // 0x3B3C (1)
	float CurrentTeamInfoHeight; // 0x3B40 (4)

	void ForceInitRecordingCharacter(); // Function BP-DefaultPawn.BP-DefaultPawn_C.ForceInitRecordingCharacter(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void CheckAimingCancelation(); // Function BP-DefaultPawn.BP-DefaultPawn_C.CheckAimingCancelation(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void CorrectionScreenPosition(struct FVector2D& ScreenPosition, char& RetOutScreenPosition); // Function BP-DefaultPawn.BP-DefaultPawn_C.CorrectionScreenPosition(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void LoadTableData(); // Function BP-DefaultPawn.BP-DefaultPawn_C.LoadTableData(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void UserConstructionScript(); // Function BP-DefaultPawn.BP-DefaultPawn_C.UserConstructionScript(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void InpActEvt_Six_K2Node_InputKeyEvent_7(struct FKey Key); // Function BP-DefaultPawn.BP-DefaultPawn_C.InpActEvt_Six_K2Node_InputKeyEvent_7(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void InpActEvt_RightBracket_K2Node_InputKeyEvent_6(struct FKey Key); // Function BP-DefaultPawn.BP-DefaultPawn_C.InpActEvt_RightBracket_K2Node_InputKeyEvent_6(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void InpActEvt_LeftBracket_K2Node_InputKeyEvent_5(struct FKey Key); // Function BP-DefaultPawn.BP-DefaultPawn_C.InpActEvt_LeftBracket_K2Node_InputKeyEvent_5(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void InpActEvt_Divide_K2Node_InputKeyEvent_4(struct FKey Key); // Function BP-DefaultPawn.BP-DefaultPawn_C.InpActEvt_Divide_K2Node_InputKeyEvent_4(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void InpActEvt_Hyphen_K2Node_InputKeyEvent_3(struct FKey Key); // Function BP-DefaultPawn.BP-DefaultPawn_C.InpActEvt_Hyphen_K2Node_InputKeyEvent_3(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void InpActEvt_Ctrl+Shift_F_K2Node_InputKeyEvent_2(struct FKey Key); // Function BP-DefaultPawn.BP-DefaultPawn_C.InpActEvt_Ctrl+Shift_F_K2Node_InputKeyEvent_2(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void InpActEvt_Semicolon_K2Node_InputKeyEvent_1(struct FKey Key); // Function BP-DefaultPawn.BP-DefaultPawn_C.InpActEvt_Semicolon_K2Node_InputKeyEvent_1(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void K2_EnterSceneOfWin(); // Function BP-DefaultPawn.BP-DefaultPawn_C.K2_EnterSceneOfWin(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void ReadyTeleport(); // Function BP-DefaultPawn.BP-DefaultPawn_C.ReadyTeleport(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void ServerPlayTeleportEffect(); // Function BP-DefaultPawn.BP-DefaultPawn_C.ServerPlayTeleportEffect(Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void MultiPlayTeleportEffect(); // Function BP-DefaultPawn.BP-DefaultPawn_C.MultiPlayTeleportEffect(Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void PlayTeleportEffect(); // Function BP-DefaultPawn.BP-DefaultPawn_C.PlayTeleportEffect(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void DoTeleportEffect(); // Function BP-DefaultPawn.BP-DefaultPawn_C.DoTeleportEffect(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void ServerCrazyJump(); // Function BP-DefaultPawn.BP-DefaultPawn_C.ServerCrazyJump(Net|NetServer|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void ServerResetCrazyJump(); // Function BP-DefaultPawn.BP-DefaultPawn_C.ServerResetCrazyJump(Net|NetServer|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void K2_OnGoParachute(); // Function BP-DefaultPawn.BP-DefaultPawn_C.K2_OnGoParachute(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void ServerLaunch(struct FVector LaunchVelocity); // Function BP-DefaultPawn.BP-DefaultPawn_C.ServerLaunch(Net|NetServer|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void K2_Cheat_ToggleCharacterDebugCamera(); // Function BP-DefaultPawn.BP-DefaultPawn_C.K2_Cheat_ToggleCharacterDebugCamera(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void K2_FPSK_OnStartADS(); // Function BP-DefaultPawn.BP-DefaultPawn_C.K2_FPSK_OnStartADS(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void K2_FPSK_OnEndADS(); // Function BP-DefaultPawn.BP-DefaultPawn_C.K2_FPSK_OnEndADS(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void SwitchMovementModeEvent(char MovementMode, enum class ECustomMovementMode CustomMovementMode); // Function BP-DefaultPawn.BP-DefaultPawn_C.SwitchMovementModeEvent(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void ServerSwitchMovementModeEvent(char MovementMode, enum class ECustomMovementMode CustomMovementMode); // Function BP-DefaultPawn.BP-DefaultPawn_C.ServerSwitchMovementModeEvent(Net|NetServer|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void MulticastSwitchMovementMode(char MovementMode, enum class ECustomMovementMode CustomMovementMode); // Function BP-DefaultPawn.BP-DefaultPawn_C.MulticastSwitchMovementMode(Net|NetMulticast|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void DoPlayDynamicMontage(struct UAnimSequence AnimSequence, struct FName SlotName, float PlayRate); // Function BP-DefaultPawn.BP-DefaultPawn_C.DoPlayDynamicMontage(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void ServerPlayDynamicMontage(struct UAnimSequence AnimSequence, struct FName SlotName, float PlayRate); // Function BP-DefaultPawn.BP-DefaultPawn_C.ServerPlayDynamicMontage(Net|NetServer|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void MulticastPlayDynamicMontage(struct UAnimSequence AnimSequence, struct FName SlotName, float PlayRate); // Function BP-DefaultPawn.BP-DefaultPawn_C.MulticastPlayDynamicMontage(Net|NetMulticast|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void ReceiveBeginPlay(); // Function BP-DefaultPawn.BP-DefaultPawn_C.ReceiveBeginPlay(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void OnLanded(struct FHitResult& Hit); // Function BP-DefaultPawn.BP-DefaultPawn_C.OnLanded(Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void ReceiveDestroyed(); // Function BP-DefaultPawn.BP-DefaultPawn_C.ReceiveDestroyed(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void InitRecordingCharacter(); // Function BP-DefaultPawn.BP-DefaultPawn_C.InitRecordingCharacter(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void SetVisibleOutBlueZoneBlizzard(char Visible); // Function BP-DefaultPawn.BP-DefaultPawn_C.SetVisibleOutBlueZoneBlizzard(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void K2_UpdateMutable_PreviewPawn(char bChangeGender); // Function BP-DefaultPawn.BP-DefaultPawn_C.K2_UpdateMutable_PreviewPawn(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void OnDeath(); // Function BP-DefaultPawn.BP-DefaultPawn_C.OnDeath(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void AddCharacterRotation(float Val); // Function BP-DefaultPawn.BP-DefaultPawn_C.AddCharacterRotation(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void SetRecordingCharacterTickRate(float TickRate); // Function BP-DefaultPawn.BP-DefaultPawn_C.SetRecordingCharacterTickRate(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void Spawn Chat on Server(); // Function BP-DefaultPawn.BP-DefaultPawn_C.Spawn Chat on Server(Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void ExecuteUbergraph_BP-DefaultPawn(int32_t EntryPoint); // Function BP-DefaultPawn.BP-DefaultPawn_C.ExecuteUbergraph_BP-DefaultPawn(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
};

// Function BP-DefaultPawn.BP-DefaultPawn_C.ForceInitRecordingCharacter
inline void ABP-DefaultPawn_C::ForceInitRecordingCharacter() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-DefaultPawn.BP-DefaultPawn_C.ForceInitRecordingCharacter");

	struct ForceInitRecordingCharacter_Params {
		
	}; ForceInitRecordingCharacter_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-DefaultPawn.BP-DefaultPawn_C.CheckAimingCancelation
inline void ABP-DefaultPawn_C::CheckAimingCancelation() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-DefaultPawn.BP-DefaultPawn_C.CheckAimingCancelation");

	struct CheckAimingCancelation_Params {
		
	}; CheckAimingCancelation_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-DefaultPawn.BP-DefaultPawn_C.CorrectionScreenPosition
inline void ABP-DefaultPawn_C::CorrectionScreenPosition(struct FVector2D& ScreenPosition, char& RetOutScreenPosition) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-DefaultPawn.BP-DefaultPawn_C.CorrectionScreenPosition");

	struct CorrectionScreenPosition_Params {
		struct FVector2D& ScreenPosition;
		char& RetOutScreenPosition;
	}; CorrectionScreenPosition_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	ScreenPosition = Params.ScreenPosition;
	RetOutScreenPosition = Params.RetOutScreenPosition;

}

// Function BP-DefaultPawn.BP-DefaultPawn_C.LoadTableData
inline void ABP-DefaultPawn_C::LoadTableData() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-DefaultPawn.BP-DefaultPawn_C.LoadTableData");

	struct LoadTableData_Params {
		
	}; LoadTableData_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-DefaultPawn.BP-DefaultPawn_C.UserConstructionScript
inline void ABP-DefaultPawn_C::UserConstructionScript() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-DefaultPawn.BP-DefaultPawn_C.UserConstructionScript");

	struct UserConstructionScript_Params {
		
	}; UserConstructionScript_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-DefaultPawn.BP-DefaultPawn_C.InpActEvt_Six_K2Node_InputKeyEvent_7
inline void ABP-DefaultPawn_C::InpActEvt_Six_K2Node_InputKeyEvent_7(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-DefaultPawn.BP-DefaultPawn_C.InpActEvt_Six_K2Node_InputKeyEvent_7");

	struct InpActEvt_Six_K2Node_InputKeyEvent_7_Params {
		struct FKey Key;
	}; InpActEvt_Six_K2Node_InputKeyEvent_7_Params Params;

	Params.Key = Key;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-DefaultPawn.BP-DefaultPawn_C.InpActEvt_RightBracket_K2Node_InputKeyEvent_6
inline void ABP-DefaultPawn_C::InpActEvt_RightBracket_K2Node_InputKeyEvent_6(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-DefaultPawn.BP-DefaultPawn_C.InpActEvt_RightBracket_K2Node_InputKeyEvent_6");

	struct InpActEvt_RightBracket_K2Node_InputKeyEvent_6_Params {
		struct FKey Key;
	}; InpActEvt_RightBracket_K2Node_InputKeyEvent_6_Params Params;

	Params.Key = Key;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-DefaultPawn.BP-DefaultPawn_C.InpActEvt_LeftBracket_K2Node_InputKeyEvent_5
inline void ABP-DefaultPawn_C::InpActEvt_LeftBracket_K2Node_InputKeyEvent_5(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-DefaultPawn.BP-DefaultPawn_C.InpActEvt_LeftBracket_K2Node_InputKeyEvent_5");

	struct InpActEvt_LeftBracket_K2Node_InputKeyEvent_5_Params {
		struct FKey Key;
	}; InpActEvt_LeftBracket_K2Node_InputKeyEvent_5_Params Params;

	Params.Key = Key;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-DefaultPawn.BP-DefaultPawn_C.InpActEvt_Divide_K2Node_InputKeyEvent_4
inline void ABP-DefaultPawn_C::InpActEvt_Divide_K2Node_InputKeyEvent_4(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-DefaultPawn.BP-DefaultPawn_C.InpActEvt_Divide_K2Node_InputKeyEvent_4");

	struct InpActEvt_Divide_K2Node_InputKeyEvent_4_Params {
		struct FKey Key;
	}; InpActEvt_Divide_K2Node_InputKeyEvent_4_Params Params;

	Params.Key = Key;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-DefaultPawn.BP-DefaultPawn_C.InpActEvt_Hyphen_K2Node_InputKeyEvent_3
inline void ABP-DefaultPawn_C::InpActEvt_Hyphen_K2Node_InputKeyEvent_3(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-DefaultPawn.BP-DefaultPawn_C.InpActEvt_Hyphen_K2Node_InputKeyEvent_3");

	struct InpActEvt_Hyphen_K2Node_InputKeyEvent_3_Params {
		struct FKey Key;
	}; InpActEvt_Hyphen_K2Node_InputKeyEvent_3_Params Params;

	Params.Key = Key;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-DefaultPawn.BP-DefaultPawn_C.InpActEvt_Ctrl+Shift_F_K2Node_InputKeyEvent_2
inline void ABP-DefaultPawn_C::InpActEvt_Ctrl+Shift_F_K2Node_InputKeyEvent_2(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-DefaultPawn.BP-DefaultPawn_C.InpActEvt_Ctrl+Shift_F_K2Node_InputKeyEvent_2");

	struct InpActEvt_Ctrl+Shift_F_K2Node_InputKeyEvent_2_Params {
		struct FKey Key;
	}; InpActEvt_Ctrl+Shift_F_K2Node_InputKeyEvent_2_Params Params;

	Params.Key = Key;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-DefaultPawn.BP-DefaultPawn_C.InpActEvt_Semicolon_K2Node_InputKeyEvent_1
inline void ABP-DefaultPawn_C::InpActEvt_Semicolon_K2Node_InputKeyEvent_1(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-DefaultPawn.BP-DefaultPawn_C.InpActEvt_Semicolon_K2Node_InputKeyEvent_1");

	struct InpActEvt_Semicolon_K2Node_InputKeyEvent_1_Params {
		struct FKey Key;
	}; InpActEvt_Semicolon_K2Node_InputKeyEvent_1_Params Params;

	Params.Key = Key;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-DefaultPawn.BP-DefaultPawn_C.K2_EnterSceneOfWin
inline void ABP-DefaultPawn_C::K2_EnterSceneOfWin() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-DefaultPawn.BP-DefaultPawn_C.K2_EnterSceneOfWin");

	struct K2_EnterSceneOfWin_Params {
		
	}; K2_EnterSceneOfWin_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-DefaultPawn.BP-DefaultPawn_C.ReadyTeleport
inline void ABP-DefaultPawn_C::ReadyTeleport() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-DefaultPawn.BP-DefaultPawn_C.ReadyTeleport");

	struct ReadyTeleport_Params {
		
	}; ReadyTeleport_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-DefaultPawn.BP-DefaultPawn_C.ServerPlayTeleportEffect
inline void ABP-DefaultPawn_C::ServerPlayTeleportEffect() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-DefaultPawn.BP-DefaultPawn_C.ServerPlayTeleportEffect");

	struct ServerPlayTeleportEffect_Params {
		
	}; ServerPlayTeleportEffect_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-DefaultPawn.BP-DefaultPawn_C.MultiPlayTeleportEffect
inline void ABP-DefaultPawn_C::MultiPlayTeleportEffect() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-DefaultPawn.BP-DefaultPawn_C.MultiPlayTeleportEffect");

	struct MultiPlayTeleportEffect_Params {
		
	}; MultiPlayTeleportEffect_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-DefaultPawn.BP-DefaultPawn_C.PlayTeleportEffect
inline void ABP-DefaultPawn_C::PlayTeleportEffect() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-DefaultPawn.BP-DefaultPawn_C.PlayTeleportEffect");

	struct PlayTeleportEffect_Params {
		
	}; PlayTeleportEffect_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-DefaultPawn.BP-DefaultPawn_C.DoTeleportEffect
inline void ABP-DefaultPawn_C::DoTeleportEffect() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-DefaultPawn.BP-DefaultPawn_C.DoTeleportEffect");

	struct DoTeleportEffect_Params {
		
	}; DoTeleportEffect_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-DefaultPawn.BP-DefaultPawn_C.ServerCrazyJump
inline void ABP-DefaultPawn_C::ServerCrazyJump() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-DefaultPawn.BP-DefaultPawn_C.ServerCrazyJump");

	struct ServerCrazyJump_Params {
		
	}; ServerCrazyJump_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-DefaultPawn.BP-DefaultPawn_C.ServerResetCrazyJump
inline void ABP-DefaultPawn_C::ServerResetCrazyJump() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-DefaultPawn.BP-DefaultPawn_C.ServerResetCrazyJump");

	struct ServerResetCrazyJump_Params {
		
	}; ServerResetCrazyJump_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-DefaultPawn.BP-DefaultPawn_C.K2_OnGoParachute
inline void ABP-DefaultPawn_C::K2_OnGoParachute() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-DefaultPawn.BP-DefaultPawn_C.K2_OnGoParachute");

	struct K2_OnGoParachute_Params {
		
	}; K2_OnGoParachute_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-DefaultPawn.BP-DefaultPawn_C.ServerLaunch
inline void ABP-DefaultPawn_C::ServerLaunch(struct FVector LaunchVelocity) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-DefaultPawn.BP-DefaultPawn_C.ServerLaunch");

	struct ServerLaunch_Params {
		struct FVector LaunchVelocity;
	}; ServerLaunch_Params Params;

	Params.LaunchVelocity = LaunchVelocity;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-DefaultPawn.BP-DefaultPawn_C.K2_Cheat_ToggleCharacterDebugCamera
inline void ABP-DefaultPawn_C::K2_Cheat_ToggleCharacterDebugCamera() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-DefaultPawn.BP-DefaultPawn_C.K2_Cheat_ToggleCharacterDebugCamera");

	struct K2_Cheat_ToggleCharacterDebugCamera_Params {
		
	}; K2_Cheat_ToggleCharacterDebugCamera_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-DefaultPawn.BP-DefaultPawn_C.K2_FPSK_OnStartADS
inline void ABP-DefaultPawn_C::K2_FPSK_OnStartADS() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-DefaultPawn.BP-DefaultPawn_C.K2_FPSK_OnStartADS");

	struct K2_FPSK_OnStartADS_Params {
		
	}; K2_FPSK_OnStartADS_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-DefaultPawn.BP-DefaultPawn_C.K2_FPSK_OnEndADS
inline void ABP-DefaultPawn_C::K2_FPSK_OnEndADS() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-DefaultPawn.BP-DefaultPawn_C.K2_FPSK_OnEndADS");

	struct K2_FPSK_OnEndADS_Params {
		
	}; K2_FPSK_OnEndADS_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-DefaultPawn.BP-DefaultPawn_C.SwitchMovementModeEvent
inline void ABP-DefaultPawn_C::SwitchMovementModeEvent(char MovementMode, enum class ECustomMovementMode CustomMovementMode) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-DefaultPawn.BP-DefaultPawn_C.SwitchMovementModeEvent");

	struct SwitchMovementModeEvent_Params {
		char MovementMode;
		enum class ECustomMovementMode CustomMovementMode;
	}; SwitchMovementModeEvent_Params Params;

	Params.MovementMode = MovementMode;
	Params.CustomMovementMode = CustomMovementMode;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-DefaultPawn.BP-DefaultPawn_C.ServerSwitchMovementModeEvent
inline void ABP-DefaultPawn_C::ServerSwitchMovementModeEvent(char MovementMode, enum class ECustomMovementMode CustomMovementMode) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-DefaultPawn.BP-DefaultPawn_C.ServerSwitchMovementModeEvent");

	struct ServerSwitchMovementModeEvent_Params {
		char MovementMode;
		enum class ECustomMovementMode CustomMovementMode;
	}; ServerSwitchMovementModeEvent_Params Params;

	Params.MovementMode = MovementMode;
	Params.CustomMovementMode = CustomMovementMode;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-DefaultPawn.BP-DefaultPawn_C.MulticastSwitchMovementMode
inline void ABP-DefaultPawn_C::MulticastSwitchMovementMode(char MovementMode, enum class ECustomMovementMode CustomMovementMode) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-DefaultPawn.BP-DefaultPawn_C.MulticastSwitchMovementMode");

	struct MulticastSwitchMovementMode_Params {
		char MovementMode;
		enum class ECustomMovementMode CustomMovementMode;
	}; MulticastSwitchMovementMode_Params Params;

	Params.MovementMode = MovementMode;
	Params.CustomMovementMode = CustomMovementMode;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-DefaultPawn.BP-DefaultPawn_C.DoPlayDynamicMontage
inline void ABP-DefaultPawn_C::DoPlayDynamicMontage(struct UAnimSequence AnimSequence, struct FName SlotName, float PlayRate) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-DefaultPawn.BP-DefaultPawn_C.DoPlayDynamicMontage");

	struct DoPlayDynamicMontage_Params {
		struct UAnimSequence AnimSequence;
		struct FName SlotName;
		float PlayRate;
	}; DoPlayDynamicMontage_Params Params;

	Params.AnimSequence = AnimSequence;
	Params.SlotName = SlotName;
	Params.PlayRate = PlayRate;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-DefaultPawn.BP-DefaultPawn_C.ServerPlayDynamicMontage
inline void ABP-DefaultPawn_C::ServerPlayDynamicMontage(struct UAnimSequence AnimSequence, struct FName SlotName, float PlayRate) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-DefaultPawn.BP-DefaultPawn_C.ServerPlayDynamicMontage");

	struct ServerPlayDynamicMontage_Params {
		struct UAnimSequence AnimSequence;
		struct FName SlotName;
		float PlayRate;
	}; ServerPlayDynamicMontage_Params Params;

	Params.AnimSequence = AnimSequence;
	Params.SlotName = SlotName;
	Params.PlayRate = PlayRate;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-DefaultPawn.BP-DefaultPawn_C.MulticastPlayDynamicMontage
inline void ABP-DefaultPawn_C::MulticastPlayDynamicMontage(struct UAnimSequence AnimSequence, struct FName SlotName, float PlayRate) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-DefaultPawn.BP-DefaultPawn_C.MulticastPlayDynamicMontage");

	struct MulticastPlayDynamicMontage_Params {
		struct UAnimSequence AnimSequence;
		struct FName SlotName;
		float PlayRate;
	}; MulticastPlayDynamicMontage_Params Params;

	Params.AnimSequence = AnimSequence;
	Params.SlotName = SlotName;
	Params.PlayRate = PlayRate;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-DefaultPawn.BP-DefaultPawn_C.ReceiveBeginPlay
inline void ABP-DefaultPawn_C::ReceiveBeginPlay() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-DefaultPawn.BP-DefaultPawn_C.ReceiveBeginPlay");

	struct ReceiveBeginPlay_Params {
		
	}; ReceiveBeginPlay_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-DefaultPawn.BP-DefaultPawn_C.OnLanded
inline void ABP-DefaultPawn_C::OnLanded(struct FHitResult& Hit) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-DefaultPawn.BP-DefaultPawn_C.OnLanded");

	struct OnLanded_Params {
		struct FHitResult& Hit;
	}; OnLanded_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Hit = Params.Hit;

}

// Function BP-DefaultPawn.BP-DefaultPawn_C.ReceiveDestroyed
inline void ABP-DefaultPawn_C::ReceiveDestroyed() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-DefaultPawn.BP-DefaultPawn_C.ReceiveDestroyed");

	struct ReceiveDestroyed_Params {
		
	}; ReceiveDestroyed_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-DefaultPawn.BP-DefaultPawn_C.InitRecordingCharacter
inline void ABP-DefaultPawn_C::InitRecordingCharacter() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-DefaultPawn.BP-DefaultPawn_C.InitRecordingCharacter");

	struct InitRecordingCharacter_Params {
		
	}; InitRecordingCharacter_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-DefaultPawn.BP-DefaultPawn_C.SetVisibleOutBlueZoneBlizzard
inline void ABP-DefaultPawn_C::SetVisibleOutBlueZoneBlizzard(char Visible) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-DefaultPawn.BP-DefaultPawn_C.SetVisibleOutBlueZoneBlizzard");

	struct SetVisibleOutBlueZoneBlizzard_Params {
		char Visible;
	}; SetVisibleOutBlueZoneBlizzard_Params Params;

	Params.Visible = Visible;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-DefaultPawn.BP-DefaultPawn_C.K2_UpdateMutable_PreviewPawn
inline void ABP-DefaultPawn_C::K2_UpdateMutable_PreviewPawn(char bChangeGender) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-DefaultPawn.BP-DefaultPawn_C.K2_UpdateMutable_PreviewPawn");

	struct K2_UpdateMutable_PreviewPawn_Params {
		char bChangeGender;
	}; K2_UpdateMutable_PreviewPawn_Params Params;

	Params.bChangeGender = bChangeGender;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-DefaultPawn.BP-DefaultPawn_C.OnDeath
inline void ABP-DefaultPawn_C::OnDeath() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-DefaultPawn.BP-DefaultPawn_C.OnDeath");

	struct OnDeath_Params {
		
	}; OnDeath_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-DefaultPawn.BP-DefaultPawn_C.AddCharacterRotation
inline void ABP-DefaultPawn_C::AddCharacterRotation(float Val) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-DefaultPawn.BP-DefaultPawn_C.AddCharacterRotation");

	struct AddCharacterRotation_Params {
		float Val;
	}; AddCharacterRotation_Params Params;

	Params.Val = Val;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-DefaultPawn.BP-DefaultPawn_C.SetRecordingCharacterTickRate
inline void ABP-DefaultPawn_C::SetRecordingCharacterTickRate(float TickRate) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-DefaultPawn.BP-DefaultPawn_C.SetRecordingCharacterTickRate");

	struct SetRecordingCharacterTickRate_Params {
		float TickRate;
	}; SetRecordingCharacterTickRate_Params Params;

	Params.TickRate = TickRate;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-DefaultPawn.BP-DefaultPawn_C.Spawn Chat on Server
inline void ABP-DefaultPawn_C::Spawn Chat on Server() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-DefaultPawn.BP-DefaultPawn_C.Spawn Chat on Server");

	struct Spawn Chat on Server_Params {
		
	}; Spawn Chat on Server_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-DefaultPawn.BP-DefaultPawn_C.ExecuteUbergraph_BP-DefaultPawn
inline void ABP-DefaultPawn_C::ExecuteUbergraph_BP-DefaultPawn(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-DefaultPawn.BP-DefaultPawn_C.ExecuteUbergraph_BP-DefaultPawn");

	struct ExecuteUbergraph_BP-DefaultPawn_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_BP-DefaultPawn_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

