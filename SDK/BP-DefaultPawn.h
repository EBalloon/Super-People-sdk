// BlueprintGeneratedClass BP-DefaultPawn.BP-DefaultPawn_C
class ABP-DefaultPawn_C : public ABravoHotelCharacterPrefab {

public:

	struct Unknown UberGraphFrame; // 0x3B40 (8)
	struct Unknown BP-LadderComponent; // 0x3B48 (8)
	struct Unknown OutBlueZone; // 0x3B50 (8)
	struct Unknown BP-FoliageCollision; // 0x3B58 (8)
	struct Unknown DevCamera_ChildActor; // 0x3B60 (8)
	struct Unknown TeamInfoUpdater; // 0x3B68 (8)
	float VelocityZ_LandingDamage; // 0x3B70 (4)
	struct Unknown CharacterPreviewRef; // 0x3B78 (8)
	struct Unknown Chat System; // 0x3B80 (8)
	char ShowChatToggle : 0; // 0x3B88 (1)
	float CurrentViewportSizeX; // 0x3B8C (4)
	float CurrentViewportSizeY; // 0x3B90 (4)
	char OutScreenPosition : 0; // 0x3B94 (1)
	int32_t SightNumForTset; // 0x3B98 (4)
	char bDefaultAmplifier : 0; // 0x3B9C (1)
	float CurrentTeamInfoHeight; // 0x3BA0 (4)

	void ForceInitRecordingCharacter(); // Function BP-DefaultPawn.BP-DefaultPawn_C.ForceInitRecordingCharacter(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void CheckAimingCancelation(); // Function BP-DefaultPawn.BP-DefaultPawn_C.CheckAimingCancelation(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void CorrectionScreenPosition(struct Unknown& ScreenPosition, char& RetOutScreenPosition); // Function BP-DefaultPawn.BP-DefaultPawn_C.CorrectionScreenPosition(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void LoadTableData(); // Function BP-DefaultPawn.BP-DefaultPawn_C.LoadTableData(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void UserConstructionScript(); // Function BP-DefaultPawn.BP-DefaultPawn_C.UserConstructionScript(Event|Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void InpActEvt_Six_K2Node_InputKeyEvent_7(struct Unknown Key); // Function BP-DefaultPawn.BP-DefaultPawn_C.InpActEvt_Six_K2Node_InputKeyEvent_7(BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void InpActEvt_RightBracket_K2Node_InputKeyEvent_6(struct Unknown Key); // Function BP-DefaultPawn.BP-DefaultPawn_C.InpActEvt_RightBracket_K2Node_InputKeyEvent_6(BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void InpActEvt_LeftBracket_K2Node_InputKeyEvent_5(struct Unknown Key); // Function BP-DefaultPawn.BP-DefaultPawn_C.InpActEvt_LeftBracket_K2Node_InputKeyEvent_5(BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void InpActEvt_Divide_K2Node_InputKeyEvent_4(struct Unknown Key); // Function BP-DefaultPawn.BP-DefaultPawn_C.InpActEvt_Divide_K2Node_InputKeyEvent_4(BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void InpActEvt_Hyphen_K2Node_InputKeyEvent_3(struct Unknown Key); // Function BP-DefaultPawn.BP-DefaultPawn_C.InpActEvt_Hyphen_K2Node_InputKeyEvent_3(BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void InpActEvt_Ctrl+Shift_F_K2Node_InputKeyEvent_2(struct Unknown Key); // Function BP-DefaultPawn.BP-DefaultPawn_C.InpActEvt_Ctrl+Shift_F_K2Node_InputKeyEvent_2(BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void InpActEvt_Semicolon_K2Node_InputKeyEvent_1(struct Unknown Key); // Function BP-DefaultPawn.BP-DefaultPawn_C.InpActEvt_Semicolon_K2Node_InputKeyEvent_1(BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void K2_EnterSceneOfWin(); // Function BP-DefaultPawn.BP-DefaultPawn_C.K2_EnterSceneOfWin(Event|Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void ReadyTeleport(); // Function BP-DefaultPawn.BP-DefaultPawn_C.ReadyTeleport(Event|Public|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void ServerPlayTeleportEffect(); // Function BP-DefaultPawn.BP-DefaultPawn_C.ServerPlayTeleportEffect(Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void MultiPlayTeleportEffect(); // Function BP-DefaultPawn.BP-DefaultPawn_C.MultiPlayTeleportEffect(Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void PlayTeleportEffect(); // Function BP-DefaultPawn.BP-DefaultPawn_C.PlayTeleportEffect(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void DoTeleportEffect(); // Function BP-DefaultPawn.BP-DefaultPawn_C.DoTeleportEffect(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void ServerCrazyJump(); // Function BP-DefaultPawn.BP-DefaultPawn_C.ServerCrazyJump(Net|NetServer|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void ServerResetCrazyJump(); // Function BP-DefaultPawn.BP-DefaultPawn_C.ServerResetCrazyJump(Net|NetServer|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void K2_OnGoParachute(); // Function BP-DefaultPawn.BP-DefaultPawn_C.K2_OnGoParachute(Event|Public|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void ServerLaunch(struct Unknown LaunchVelocity); // Function BP-DefaultPawn.BP-DefaultPawn_C.ServerLaunch(Net|NetServer|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void K2_Cheat_ToggleCharacterDebugCamera(); // Function BP-DefaultPawn.BP-DefaultPawn_C.K2_Cheat_ToggleCharacterDebugCamera(Event|Public|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void K2_FPSK_OnStartADS(); // Function BP-DefaultPawn.BP-DefaultPawn_C.K2_FPSK_OnStartADS(Event|Public|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void K2_FPSK_OnEndADS(); // Function BP-DefaultPawn.BP-DefaultPawn_C.K2_FPSK_OnEndADS(Event|Public|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void SwitchMovementModeEvent(char MovementMode, enum class Unknow CustomMovementMode); // Function BP-DefaultPawn.BP-DefaultPawn_C.SwitchMovementModeEvent(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void ServerSwitchMovementModeEvent(char MovementMode, enum class Unknow CustomMovementMode); // Function BP-DefaultPawn.BP-DefaultPawn_C.ServerSwitchMovementModeEvent(Net|NetServer|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void MulticastSwitchMovementMode(char MovementMode, enum class Unknow CustomMovementMode); // Function BP-DefaultPawn.BP-DefaultPawn_C.MulticastSwitchMovementMode(Net|NetMulticast|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void DoPlayDynamicMontage(struct Unknown AnimSequence, struct FName SlotName, float PlayRate); // Function BP-DefaultPawn.BP-DefaultPawn_C.DoPlayDynamicMontage(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void ServerPlayDynamicMontage(struct Unknown AnimSequence, struct FName SlotName, float PlayRate); // Function BP-DefaultPawn.BP-DefaultPawn_C.ServerPlayDynamicMontage(Net|NetServer|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void MulticastPlayDynamicMontage(struct Unknown AnimSequence, struct FName SlotName, float PlayRate); // Function BP-DefaultPawn.BP-DefaultPawn_C.MulticastPlayDynamicMontage(Net|NetMulticast|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void ReceiveBeginPlay(); // Function BP-DefaultPawn.BP-DefaultPawn_C.ReceiveBeginPlay(Event|Protected|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void OnLanded(struct Unknown& Hit); // Function BP-DefaultPawn.BP-DefaultPawn_C.OnLanded(Event|Public|HasOutParms|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void ReceiveDestroyed(); // Function BP-DefaultPawn.BP-DefaultPawn_C.ReceiveDestroyed(Event|Public|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void InitRecordingCharacter(); // Function BP-DefaultPawn.BP-DefaultPawn_C.InitRecordingCharacter(Event|Protected|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void SetVisibleOutBlueZoneBlizzard(char Visible); // Function BP-DefaultPawn.BP-DefaultPawn_C.SetVisibleOutBlueZoneBlizzard(Event|Public|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void K2_UpdateMutable_PreviewPawn(char bChangeGender); // Function BP-DefaultPawn.BP-DefaultPawn_C.K2_UpdateMutable_PreviewPawn(Event|Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void OnDeath(); // Function BP-DefaultPawn.BP-DefaultPawn_C.OnDeath(Event|Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void AddCharacterRotation(float Val); // Function BP-DefaultPawn.BP-DefaultPawn_C.AddCharacterRotation(Event|Protected|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void SetRecordingCharacterTickRate(float TickRate); // Function BP-DefaultPawn.BP-DefaultPawn_C.SetRecordingCharacterTickRate(Event|Protected|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void Spawn Chat on Server(); // Function BP-DefaultPawn.BP-DefaultPawn_C.Spawn Chat on Server(Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void ExecuteUbergraph_BP-DefaultPawn(int32_t EntryPoint); // Function BP-DefaultPawn.BP-DefaultPawn_C.ExecuteUbergraph_BP-DefaultPawn(Final|UbergraphFunction|HasDefaults) // <Game_BE.exe+0x2B80160>
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
inline void ABP-DefaultPawn_C::CorrectionScreenPosition(struct Unknown& ScreenPosition, char& RetOutScreenPosition) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-DefaultPawn.BP-DefaultPawn_C.CorrectionScreenPosition");

	struct CorrectionScreenPosition_Params {
		struct Unknown& ScreenPosition;
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
inline void ABP-DefaultPawn_C::InpActEvt_Six_K2Node_InputKeyEvent_7(struct Unknown Key) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-DefaultPawn.BP-DefaultPawn_C.InpActEvt_Six_K2Node_InputKeyEvent_7");

	struct InpActEvt_Six_K2Node_InputKeyEvent_7_Params {
		struct Unknown Key;
	}; InpActEvt_Six_K2Node_InputKeyEvent_7_Params Params;

	Params.Key = Key;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-DefaultPawn.BP-DefaultPawn_C.InpActEvt_RightBracket_K2Node_InputKeyEvent_6
inline void ABP-DefaultPawn_C::InpActEvt_RightBracket_K2Node_InputKeyEvent_6(struct Unknown Key) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-DefaultPawn.BP-DefaultPawn_C.InpActEvt_RightBracket_K2Node_InputKeyEvent_6");

	struct InpActEvt_RightBracket_K2Node_InputKeyEvent_6_Params {
		struct Unknown Key;
	}; InpActEvt_RightBracket_K2Node_InputKeyEvent_6_Params Params;

	Params.Key = Key;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-DefaultPawn.BP-DefaultPawn_C.InpActEvt_LeftBracket_K2Node_InputKeyEvent_5
inline void ABP-DefaultPawn_C::InpActEvt_LeftBracket_K2Node_InputKeyEvent_5(struct Unknown Key) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-DefaultPawn.BP-DefaultPawn_C.InpActEvt_LeftBracket_K2Node_InputKeyEvent_5");

	struct InpActEvt_LeftBracket_K2Node_InputKeyEvent_5_Params {
		struct Unknown Key;
	}; InpActEvt_LeftBracket_K2Node_InputKeyEvent_5_Params Params;

	Params.Key = Key;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-DefaultPawn.BP-DefaultPawn_C.InpActEvt_Divide_K2Node_InputKeyEvent_4
inline void ABP-DefaultPawn_C::InpActEvt_Divide_K2Node_InputKeyEvent_4(struct Unknown Key) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-DefaultPawn.BP-DefaultPawn_C.InpActEvt_Divide_K2Node_InputKeyEvent_4");

	struct InpActEvt_Divide_K2Node_InputKeyEvent_4_Params {
		struct Unknown Key;
	}; InpActEvt_Divide_K2Node_InputKeyEvent_4_Params Params;

	Params.Key = Key;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-DefaultPawn.BP-DefaultPawn_C.InpActEvt_Hyphen_K2Node_InputKeyEvent_3
inline void ABP-DefaultPawn_C::InpActEvt_Hyphen_K2Node_InputKeyEvent_3(struct Unknown Key) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-DefaultPawn.BP-DefaultPawn_C.InpActEvt_Hyphen_K2Node_InputKeyEvent_3");

	struct InpActEvt_Hyphen_K2Node_InputKeyEvent_3_Params {
		struct Unknown Key;
	}; InpActEvt_Hyphen_K2Node_InputKeyEvent_3_Params Params;

	Params.Key = Key;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-DefaultPawn.BP-DefaultPawn_C.InpActEvt_Ctrl+Shift_F_K2Node_InputKeyEvent_2
inline void ABP-DefaultPawn_C::InpActEvt_Ctrl+Shift_F_K2Node_InputKeyEvent_2(struct Unknown Key) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-DefaultPawn.BP-DefaultPawn_C.InpActEvt_Ctrl+Shift_F_K2Node_InputKeyEvent_2");

	struct InpActEvt_Ctrl+Shift_F_K2Node_InputKeyEvent_2_Params {
		struct Unknown Key;
	}; InpActEvt_Ctrl+Shift_F_K2Node_InputKeyEvent_2_Params Params;

	Params.Key = Key;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-DefaultPawn.BP-DefaultPawn_C.InpActEvt_Semicolon_K2Node_InputKeyEvent_1
inline void ABP-DefaultPawn_C::InpActEvt_Semicolon_K2Node_InputKeyEvent_1(struct Unknown Key) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-DefaultPawn.BP-DefaultPawn_C.InpActEvt_Semicolon_K2Node_InputKeyEvent_1");

	struct InpActEvt_Semicolon_K2Node_InputKeyEvent_1_Params {
		struct Unknown Key;
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
inline void ABP-DefaultPawn_C::ServerLaunch(struct Unknown LaunchVelocity) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-DefaultPawn.BP-DefaultPawn_C.ServerLaunch");

	struct ServerLaunch_Params {
		struct Unknown LaunchVelocity;
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
inline void ABP-DefaultPawn_C::SwitchMovementModeEvent(char MovementMode, enum class Unknow CustomMovementMode) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-DefaultPawn.BP-DefaultPawn_C.SwitchMovementModeEvent");

	struct SwitchMovementModeEvent_Params {
		char MovementMode;
		enum class Unknow CustomMovementMode;
	}; SwitchMovementModeEvent_Params Params;

	Params.MovementMode = MovementMode;
	Params.CustomMovementMode = CustomMovementMode;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-DefaultPawn.BP-DefaultPawn_C.ServerSwitchMovementModeEvent
inline void ABP-DefaultPawn_C::ServerSwitchMovementModeEvent(char MovementMode, enum class Unknow CustomMovementMode) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-DefaultPawn.BP-DefaultPawn_C.ServerSwitchMovementModeEvent");

	struct ServerSwitchMovementModeEvent_Params {
		char MovementMode;
		enum class Unknow CustomMovementMode;
	}; ServerSwitchMovementModeEvent_Params Params;

	Params.MovementMode = MovementMode;
	Params.CustomMovementMode = CustomMovementMode;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-DefaultPawn.BP-DefaultPawn_C.MulticastSwitchMovementMode
inline void ABP-DefaultPawn_C::MulticastSwitchMovementMode(char MovementMode, enum class Unknow CustomMovementMode) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-DefaultPawn.BP-DefaultPawn_C.MulticastSwitchMovementMode");

	struct MulticastSwitchMovementMode_Params {
		char MovementMode;
		enum class Unknow CustomMovementMode;
	}; MulticastSwitchMovementMode_Params Params;

	Params.MovementMode = MovementMode;
	Params.CustomMovementMode = CustomMovementMode;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-DefaultPawn.BP-DefaultPawn_C.DoPlayDynamicMontage
inline void ABP-DefaultPawn_C::DoPlayDynamicMontage(struct Unknown AnimSequence, struct FName SlotName, float PlayRate) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-DefaultPawn.BP-DefaultPawn_C.DoPlayDynamicMontage");

	struct DoPlayDynamicMontage_Params {
		struct Unknown AnimSequence;
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
inline void ABP-DefaultPawn_C::ServerPlayDynamicMontage(struct Unknown AnimSequence, struct FName SlotName, float PlayRate) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-DefaultPawn.BP-DefaultPawn_C.ServerPlayDynamicMontage");

	struct ServerPlayDynamicMontage_Params {
		struct Unknown AnimSequence;
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
inline void ABP-DefaultPawn_C::MulticastPlayDynamicMontage(struct Unknown AnimSequence, struct FName SlotName, float PlayRate) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-DefaultPawn.BP-DefaultPawn_C.MulticastPlayDynamicMontage");

	struct MulticastPlayDynamicMontage_Params {
		struct Unknown AnimSequence;
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
inline void ABP-DefaultPawn_C::OnLanded(struct Unknown& Hit) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-DefaultPawn.BP-DefaultPawn_C.OnLanded");

	struct OnLanded_Params {
		struct Unknown& Hit;
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

