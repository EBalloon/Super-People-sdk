// WidgetBlueprintGeneratedClass BP-SpectatorHUD.BP-SpectatorHUD_C
class UBP-SpectatorHUD_C : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown BackgroundBlurFadeIn; // 0x250 (8)
	struct Unknown Idle; // 0x258 (8)
	struct Unknown BackgroundBlur_1; // 0x260 (8)
	struct Unknown BTN-Exit; // 0x268 (8)
	struct Unknown Btn-NextTarget; // 0x270 (8)
	struct Unknown Btn-PreTarget; // 0x278 (8)
	struct Unknown Btn-Replay; // 0x280 (8)
	struct Unknown Canvas_Main; // 0x288 (8)
	struct Unknown KillcamBtns; // 0x290 (8)
	struct Unknown MemberChangeBox; // 0x298 (8)
	struct Unknown TextDepth_Replay; // 0x2A0 (8)
	struct Unknown UW-SpectatingTargetInfo; // 0x2A8 (8)
	char bIsKillCam : 0; // 0x2B0 (1)

	struct Unknown GetInteractiveWidget(); // Function BP-SpectatorHUD.BP-SpectatorHUD_C.GetInteractiveWidget(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void SetTargetPlayerInfo(struct Unknown PlayerState); // Function BP-SpectatorHUD.BP-SpectatorHUD_C.SetTargetPlayerInfo(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	enum class Unknow GetVisibility_1(); // Function BP-SpectatorHUD.BP-SpectatorHUD_C.GetVisibility_1(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <Game_BE.exe+0x2B812B0>
	struct FText GetText_1(); // Function BP-SpectatorHUD.BP-SpectatorHUD_C.GetText_1(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <Game_BE.exe+0x2B812B0>
	void SetReplayBtn(char bVisiable); // Function BP-SpectatorHUD.BP-SpectatorHUD_C.SetReplayBtn(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void SetTargetBtn(char bVisiable); // Function BP-SpectatorHUD.BP-SpectatorHUD_C.SetTargetBtn(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void AddCoreInfoRouteping(struct Unknown PlayerState); // Function BP-SpectatorHUD.BP-SpectatorHUD_C.AddCoreInfoRouteping(Event|Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void AddCoreInfoSmartping(struct Unknown PlayerState); // Function BP-SpectatorHUD.BP-SpectatorHUD_C.AddCoreInfoSmartping(Event|Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void AddKillMsgByMolotovFlame(struct FText& Killer, struct FText& WeaponName, struct FText& Victim, char bHeasShot, char bLocalKiller, char bByTeam, char bTeamDead, int32_t AliveCount, char bKnockOut, int32_t KillerTierID, int32_t DiedTierID); // Function BP-SpectatorHUD.BP-SpectatorHUD_C.AddKillMsgByMolotovFlame(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void AddKillMsgByVehicle(struct FText& Killer, struct FText& Victim, char bLocalKiller, char bByTeam, char bTeamDead, int32_t AliveCount, char bKnockOut, int32_t KillerTierID, int32_t DiedTierID); // Function BP-SpectatorHUD.BP-SpectatorHUD_C.AddKillMsgByVehicle(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void AddKillMsgByWeapon(struct FText& Killer, struct FText& WeaponName, struct FText& Victim, char bHeasShot, char bLocalKiller, char bByTeam, char bTeamDead, int32_t AliveCount, char bKnockOut, int32_t KillerTierID, int32_t DiedTierID); // Function BP-SpectatorHUD.BP-SpectatorHUD_C.AddKillMsgByWeapon(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void AddKillMsgCrash(struct FText& Victim, char bTeamDead, int32_t AliveCount, char bKnockOut, int32_t DiedTierID); // Function BP-SpectatorHUD.BP-SpectatorHUD_C.AddKillMsgCrash(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void AddKillMsgFallToDeath(struct FText& Victim, char bTeamDead, int32_t AliveCount, char bKnockOut, int32_t DiedTierID); // Function BP-SpectatorHUD.BP-SpectatorHUD_C.AddKillMsgFallToDeath(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void AddKillMsgKnockOut(struct FText& Killer, struct FText& Victim, char bLocalKiller, char bByTeam, char bTeamDead, int32_t AliveCount, char bKnockOut, int32_t KillerTierID, int32_t DiedTierID); // Function BP-SpectatorHUD.BP-SpectatorHUD_C.AddKillMsgKnockOut(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void AddKillMsgMagneticField(struct FText& Victim, char bTeamDead, int32_t AliveCount, char bKnockOut, int32_t DiedTierID); // Function BP-SpectatorHUD.BP-SpectatorHUD_C.AddKillMsgMagneticField(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void AddKillMsgNoOxygen(struct FText& Victim, char bTeamDead, int32_t AliveCount, char bKnockOut, int32_t DiedTierID); // Function BP-SpectatorHUD.BP-SpectatorHUD_C.AddKillMsgNoOxygen(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void AddKillMsgRedZone(struct FText& Victim, char bTeamDead, int32_t AliveCount, char bKnockOut, int32_t DiedTierID); // Function BP-SpectatorHUD.BP-SpectatorHUD_C.AddKillMsgRedZone(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void AddKillMsgSuicide(struct FText& Victim, char bTeamDead, int32_t AliveCount, char bKnockOut, int32_t DiedTierID); // Function BP-SpectatorHUD.BP-SpectatorHUD_C.AddKillMsgSuicide(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void AddPerkMessage(struct FName PerkName, int32_t Level); // Function BP-SpectatorHUD.BP-SpectatorHUD_C.AddPerkMessage(Event|Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void AddPingMessage(struct FString MessageTag, char UsingBackGround); // Function BP-SpectatorHUD.BP-SpectatorHUD_C.AddPingMessage(Event|Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void AddRequestMessage(struct Unknown PlayerState, struct FString Message); // Function BP-SpectatorHUD.BP-SpectatorHUD_C.AddRequestMessage(Event|Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void Close(); // Function BP-SpectatorHUD.BP-SpectatorHUD_C.Close(Event|Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void FinishPerkSpin(enum class Unknow LevelUpType); // Function BP-SpectatorHUD.BP-SpectatorHUD_C.FinishPerkSpin(Event|Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void HideAmplifier(); // Function BP-SpectatorHUD.BP-SpectatorHUD_C.HideAmplifier(Event|Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void HideBlueZoneNotiMessage(); // Function BP-SpectatorHUD.BP-SpectatorHUD_C.HideBlueZoneNotiMessage(Event|Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void HideMinimapWidget(); // Function BP-SpectatorHUD.BP-SpectatorHUD_C.HideMinimapWidget(Event|Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void HideTeamPositionWidget(); // Function BP-SpectatorHUD.BP-SpectatorHUD_C.HideTeamPositionWidget(Event|Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void HideVehicleWidget(); // Function BP-SpectatorHUD.BP-SpectatorHUD_C.HideVehicleWidget(Event|Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void LevelUpEvent(struct Unknown PerkInfo, int32_t CurrentLevel, enum class Unknow LevelUpType, struct Unknown DisplayAbility, int32_t LastLevel); // Function BP-SpectatorHUD.BP-SpectatorHUD_C.LevelUpEvent(Event|Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void OnChangedToggleType(enum class Unknow PreType, enum class Unknow CurrentType); // Function BP-SpectatorHUD.BP-SpectatorHUD_C.OnChangedToggleType(Event|Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void Open(); // Function BP-SpectatorHUD.BP-SpectatorHUD_C.Open(Event|Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void OpenMainMenu(); // Function BP-SpectatorHUD.BP-SpectatorHUD_C.OpenMainMenu(Event|Public|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void PlaySupplyBoxMessage(struct FString Message); // Function BP-SpectatorHUD.BP-SpectatorHUD_C.PlaySupplyBoxMessage(Event|Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void ResetMiniMapPlayers(); // Function BP-SpectatorHUD.BP-SpectatorHUD_C.ResetMiniMapPlayers(Event|Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void ResetWorldMap(); // Function BP-SpectatorHUD.BP-SpectatorHUD_C.ResetWorldMap(Event|Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void SetNickName(struct FText& NickName); // Function BP-SpectatorHUD.BP-SpectatorHUD_C.SetNickName(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void SetToggleMinimap(char bToggle); // Function BP-SpectatorHUD.BP-SpectatorHUD_C.SetToggleMinimap(Event|Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void ShowAmplifier(struct FString InText); // Function BP-SpectatorHUD.BP-SpectatorHUD_C.ShowAmplifier(Event|Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void ShowBlueZoneNotiMessage(struct FString Title, struct FString Desc); // Function BP-SpectatorHUD.BP-SpectatorHUD_C.ShowBlueZoneNotiMessage(Event|Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void ShowCommonMessage(struct Unknown& MessageInfo); // Function BP-SpectatorHUD.BP-SpectatorHUD_C.ShowCommonMessage(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void ShowDeathAndAliveMessage(struct FText& Victim, int32_t AliveCount); // Function BP-SpectatorHUD.BP-SpectatorHUD_C.ShowDeathAndAliveMessage(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void ShowDeathUserWidget(struct Unknown& Info); // Function BP-SpectatorHUD.BP-SpectatorHUD_C.ShowDeathUserWidget(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void ShowEnergyItemUse(int32_t Type); // Function BP-SpectatorHUD.BP-SpectatorHUD_C.ShowEnergyItemUse(Event|Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void ShowGameProgressMessage(int32_t Type, int32_t Time); // Function BP-SpectatorHUD.BP-SpectatorHUD_C.ShowGameProgressMessage(Event|Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void ShowGameWaitMessage(int32_t Time); // Function BP-SpectatorHUD.BP-SpectatorHUD_C.ShowGameWaitMessage(Event|Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void ShowHittedDamage(struct Unknown InstigatorCharacter); // Function BP-SpectatorHUD.BP-SpectatorHUD_C.ShowHittedDamage(Event|Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void ShowInventoryNotEnoughSpaceMessage(); // Function BP-SpectatorHUD.BP-SpectatorHUD_C.ShowInventoryNotEnoughSpaceMessage(Event|Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void ShowLineOfFire(struct Unknown& Pos); // Function BP-SpectatorHUD.BP-SpectatorHUD_C.ShowLineOfFire(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void ShowMinimapWidget(); // Function BP-SpectatorHUD.BP-SpectatorHUD_C.ShowMinimapWidget(Event|Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void ShowMyKillInfo(struct FText& WeaponName, struct FText& Victim, int32_t KillCount, int32_t AliveCount, char bHeadShot, char bTeamKill); // Function BP-SpectatorHUD.BP-SpectatorHUD_C.ShowMyKillInfo(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void ShowMyKnockOutInfo(struct FText& WeaponName, struct FText& Victim, char bHeadShot, char bTeamKill); // Function BP-SpectatorHUD.BP-SpectatorHUD_C.ShowMyKnockOutInfo(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void ShowNuclearMessage(int32_t Count); // Function BP-SpectatorHUD.BP-SpectatorHUD_C.ShowNuclearMessage(Event|Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void ShowRedZoneBombMessage(); // Function BP-SpectatorHUD.BP-SpectatorHUD_C.ShowRedZoneBombMessage(Event|Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void ShowRedZoneStartMessage(); // Function BP-SpectatorHUD.BP-SpectatorHUD_C.ShowRedZoneStartMessage(Event|Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void ShowReverseSideTeamPositionWidget(int32_t TeamIconIndex, float Angle, struct Unknown ScreenMaxSize); // Function BP-SpectatorHUD.BP-SpectatorHUD_C.ShowReverseSideTeamPositionWidget(Event|Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void ShowTeamPositionWidget(int32_t TeamIndex, struct Unknown ScreenPosition, char bNetCullDistance); // Function BP-SpectatorHUD.BP-SpectatorHUD_C.ShowTeamPositionWidget(Event|Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void ShowVehicleWidget(struct Unknown VehicleSeat); // Function BP-SpectatorHUD.BP-SpectatorHUD_C.ShowVehicleWidget(Event|Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void TeamInfoVisibility(char bState); // Function BP-SpectatorHUD.BP-SpectatorHUD_C.TeamInfoVisibility(Event|Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void ToggleMiniMap(); // Function BP-SpectatorHUD.BP-SpectatorHUD_C.ToggleMiniMap(Event|Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void UpdateLineOfFire(struct Unknown& Pos, char LastUpdate, float delataTime); // Function BP-SpectatorHUD.BP-SpectatorHUD_C.UpdateLineOfFire(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void BndEvt__Btn-Exit_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function BP-SpectatorHUD.BP-SpectatorHUD_C.BndEvt__Btn-Exit_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void BndEvt__Btn-NextTarget_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function BP-SpectatorHUD.BP-SpectatorHUD_C.BndEvt__Btn-NextTarget_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void BndEvt__Btn-PreTarget_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // Function BP-SpectatorHUD.BP-SpectatorHUD_C.BndEvt__Btn-PreTarget_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void BndEvt__Btn-Replay_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function BP-SpectatorHUD.BP-SpectatorHUD_C.BndEvt__Btn-Replay_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void OpenPopup(); // Function BP-SpectatorHUD.BP-SpectatorHUD_C.OpenPopup(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void StartBackGroundBlur(); // Function BP-SpectatorHUD.BP-SpectatorHUD_C.StartBackGroundBlur(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void ResetBackGroundBlur(); // Function BP-SpectatorHUD.BP-SpectatorHUD_C.ResetBackGroundBlur(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void BndEvt__Button_Return_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature(); // Function BP-SpectatorHUD.BP-SpectatorHUD_C.BndEvt__Button_Return_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void AddCoreInfoRequestResuscitation(struct Unknown PlayerState); // Function BP-SpectatorHUD.BP-SpectatorHUD_C.AddCoreInfoRequestResuscitation(Event|Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void ClosePopup(); // Function BP-SpectatorHUD.BP-SpectatorHUD_C.ClosePopup(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void HideAnim(); // Function BP-SpectatorHUD.BP-SpectatorHUD_C.HideAnim(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void ShowAnim(); // Function BP-SpectatorHUD.BP-SpectatorHUD_C.ShowAnim(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void ExecuteUbergraph_BP-SpectatorHUD(int32_t EntryPoint); // Function BP-SpectatorHUD.BP-SpectatorHUD_C.ExecuteUbergraph_BP-SpectatorHUD(Final|UbergraphFunction|HasDefaults) // <Game_BE.exe+0x2B812B0>
};

// Function BP-SpectatorHUD.BP-SpectatorHUD_C.GetInteractiveWidget
inline struct Unknown UBP-SpectatorHUD_C::GetInteractiveWidget() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-SpectatorHUD.BP-SpectatorHUD_C.GetInteractiveWidget");

	struct GetInteractiveWidget_Params {
		
		struct Unknown ReturnValue;

	}; GetInteractiveWidget_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function BP-SpectatorHUD.BP-SpectatorHUD_C.SetTargetPlayerInfo
inline void UBP-SpectatorHUD_C::SetTargetPlayerInfo(struct Unknown PlayerState) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-SpectatorHUD.BP-SpectatorHUD_C.SetTargetPlayerInfo");

	struct SetTargetPlayerInfo_Params {
		struct Unknown PlayerState;
	}; SetTargetPlayerInfo_Params Params;

	Params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-SpectatorHUD.BP-SpectatorHUD_C.GetVisibility_1
inline enum class Unknow UBP-SpectatorHUD_C::GetVisibility_1() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-SpectatorHUD.BP-SpectatorHUD_C.GetVisibility_1");

	struct GetVisibility_1_Params {
		
		enum class Unknow ReturnValue;

	}; GetVisibility_1_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function BP-SpectatorHUD.BP-SpectatorHUD_C.GetText_1
inline struct FText UBP-SpectatorHUD_C::GetText_1() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-SpectatorHUD.BP-SpectatorHUD_C.GetText_1");

	struct GetText_1_Params {
		
		struct FText ReturnValue;

	}; GetText_1_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function BP-SpectatorHUD.BP-SpectatorHUD_C.SetReplayBtn
inline void UBP-SpectatorHUD_C::SetReplayBtn(char bVisiable) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-SpectatorHUD.BP-SpectatorHUD_C.SetReplayBtn");

	struct SetReplayBtn_Params {
		char bVisiable;
	}; SetReplayBtn_Params Params;

	Params.bVisiable = bVisiable;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-SpectatorHUD.BP-SpectatorHUD_C.SetTargetBtn
inline void UBP-SpectatorHUD_C::SetTargetBtn(char bVisiable) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-SpectatorHUD.BP-SpectatorHUD_C.SetTargetBtn");

	struct SetTargetBtn_Params {
		char bVisiable;
	}; SetTargetBtn_Params Params;

	Params.bVisiable = bVisiable;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-SpectatorHUD.BP-SpectatorHUD_C.AddCoreInfoRouteping
inline void UBP-SpectatorHUD_C::AddCoreInfoRouteping(struct Unknown PlayerState) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-SpectatorHUD.BP-SpectatorHUD_C.AddCoreInfoRouteping");

	struct AddCoreInfoRouteping_Params {
		struct Unknown PlayerState;
	}; AddCoreInfoRouteping_Params Params;

	Params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-SpectatorHUD.BP-SpectatorHUD_C.AddCoreInfoSmartping
inline void UBP-SpectatorHUD_C::AddCoreInfoSmartping(struct Unknown PlayerState) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-SpectatorHUD.BP-SpectatorHUD_C.AddCoreInfoSmartping");

	struct AddCoreInfoSmartping_Params {
		struct Unknown PlayerState;
	}; AddCoreInfoSmartping_Params Params;

	Params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-SpectatorHUD.BP-SpectatorHUD_C.AddKillMsgByMolotovFlame
inline void UBP-SpectatorHUD_C::AddKillMsgByMolotovFlame(struct FText& Killer, struct FText& WeaponName, struct FText& Victim, char bHeasShot, char bLocalKiller, char bByTeam, char bTeamDead, int32_t AliveCount, char bKnockOut, int32_t KillerTierID, int32_t DiedTierID) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-SpectatorHUD.BP-SpectatorHUD_C.AddKillMsgByMolotovFlame");

	struct AddKillMsgByMolotovFlame_Params {
		struct FText& Killer;
		struct FText& WeaponName;
		struct FText& Victim;
		char bHeasShot;
		char bLocalKiller;
		char bByTeam;
		char bTeamDead;
		int32_t AliveCount;
		char bKnockOut;
		int32_t KillerTierID;
		int32_t DiedTierID;
	}; AddKillMsgByMolotovFlame_Params Params;

	Params.bHeasShot = bHeasShot;
	Params.bLocalKiller = bLocalKiller;
	Params.bByTeam = bByTeam;
	Params.bTeamDead = bTeamDead;
	Params.AliveCount = AliveCount;
	Params.bKnockOut = bKnockOut;
	Params.KillerTierID = KillerTierID;
	Params.DiedTierID = DiedTierID;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Killer = Params.Killer;
	WeaponName = Params.WeaponName;
	Victim = Params.Victim;

}

// Function BP-SpectatorHUD.BP-SpectatorHUD_C.AddKillMsgByVehicle
inline void UBP-SpectatorHUD_C::AddKillMsgByVehicle(struct FText& Killer, struct FText& Victim, char bLocalKiller, char bByTeam, char bTeamDead, int32_t AliveCount, char bKnockOut, int32_t KillerTierID, int32_t DiedTierID) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-SpectatorHUD.BP-SpectatorHUD_C.AddKillMsgByVehicle");

	struct AddKillMsgByVehicle_Params {
		struct FText& Killer;
		struct FText& Victim;
		char bLocalKiller;
		char bByTeam;
		char bTeamDead;
		int32_t AliveCount;
		char bKnockOut;
		int32_t KillerTierID;
		int32_t DiedTierID;
	}; AddKillMsgByVehicle_Params Params;

	Params.bLocalKiller = bLocalKiller;
	Params.bByTeam = bByTeam;
	Params.bTeamDead = bTeamDead;
	Params.AliveCount = AliveCount;
	Params.bKnockOut = bKnockOut;
	Params.KillerTierID = KillerTierID;
	Params.DiedTierID = DiedTierID;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Killer = Params.Killer;
	Victim = Params.Victim;

}

// Function BP-SpectatorHUD.BP-SpectatorHUD_C.AddKillMsgByWeapon
inline void UBP-SpectatorHUD_C::AddKillMsgByWeapon(struct FText& Killer, struct FText& WeaponName, struct FText& Victim, char bHeasShot, char bLocalKiller, char bByTeam, char bTeamDead, int32_t AliveCount, char bKnockOut, int32_t KillerTierID, int32_t DiedTierID) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-SpectatorHUD.BP-SpectatorHUD_C.AddKillMsgByWeapon");

	struct AddKillMsgByWeapon_Params {
		struct FText& Killer;
		struct FText& WeaponName;
		struct FText& Victim;
		char bHeasShot;
		char bLocalKiller;
		char bByTeam;
		char bTeamDead;
		int32_t AliveCount;
		char bKnockOut;
		int32_t KillerTierID;
		int32_t DiedTierID;
	}; AddKillMsgByWeapon_Params Params;

	Params.bHeasShot = bHeasShot;
	Params.bLocalKiller = bLocalKiller;
	Params.bByTeam = bByTeam;
	Params.bTeamDead = bTeamDead;
	Params.AliveCount = AliveCount;
	Params.bKnockOut = bKnockOut;
	Params.KillerTierID = KillerTierID;
	Params.DiedTierID = DiedTierID;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Killer = Params.Killer;
	WeaponName = Params.WeaponName;
	Victim = Params.Victim;

}

// Function BP-SpectatorHUD.BP-SpectatorHUD_C.AddKillMsgCrash
inline void UBP-SpectatorHUD_C::AddKillMsgCrash(struct FText& Victim, char bTeamDead, int32_t AliveCount, char bKnockOut, int32_t DiedTierID) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-SpectatorHUD.BP-SpectatorHUD_C.AddKillMsgCrash");

	struct AddKillMsgCrash_Params {
		struct FText& Victim;
		char bTeamDead;
		int32_t AliveCount;
		char bKnockOut;
		int32_t DiedTierID;
	}; AddKillMsgCrash_Params Params;

	Params.bTeamDead = bTeamDead;
	Params.AliveCount = AliveCount;
	Params.bKnockOut = bKnockOut;
	Params.DiedTierID = DiedTierID;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Victim = Params.Victim;

}

// Function BP-SpectatorHUD.BP-SpectatorHUD_C.AddKillMsgFallToDeath
inline void UBP-SpectatorHUD_C::AddKillMsgFallToDeath(struct FText& Victim, char bTeamDead, int32_t AliveCount, char bKnockOut, int32_t DiedTierID) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-SpectatorHUD.BP-SpectatorHUD_C.AddKillMsgFallToDeath");

	struct AddKillMsgFallToDeath_Params {
		struct FText& Victim;
		char bTeamDead;
		int32_t AliveCount;
		char bKnockOut;
		int32_t DiedTierID;
	}; AddKillMsgFallToDeath_Params Params;

	Params.bTeamDead = bTeamDead;
	Params.AliveCount = AliveCount;
	Params.bKnockOut = bKnockOut;
	Params.DiedTierID = DiedTierID;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Victim = Params.Victim;

}

// Function BP-SpectatorHUD.BP-SpectatorHUD_C.AddKillMsgKnockOut
inline void UBP-SpectatorHUD_C::AddKillMsgKnockOut(struct FText& Killer, struct FText& Victim, char bLocalKiller, char bByTeam, char bTeamDead, int32_t AliveCount, char bKnockOut, int32_t KillerTierID, int32_t DiedTierID) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-SpectatorHUD.BP-SpectatorHUD_C.AddKillMsgKnockOut");

	struct AddKillMsgKnockOut_Params {
		struct FText& Killer;
		struct FText& Victim;
		char bLocalKiller;
		char bByTeam;
		char bTeamDead;
		int32_t AliveCount;
		char bKnockOut;
		int32_t KillerTierID;
		int32_t DiedTierID;
	}; AddKillMsgKnockOut_Params Params;

	Params.bLocalKiller = bLocalKiller;
	Params.bByTeam = bByTeam;
	Params.bTeamDead = bTeamDead;
	Params.AliveCount = AliveCount;
	Params.bKnockOut = bKnockOut;
	Params.KillerTierID = KillerTierID;
	Params.DiedTierID = DiedTierID;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Killer = Params.Killer;
	Victim = Params.Victim;

}

// Function BP-SpectatorHUD.BP-SpectatorHUD_C.AddKillMsgMagneticField
inline void UBP-SpectatorHUD_C::AddKillMsgMagneticField(struct FText& Victim, char bTeamDead, int32_t AliveCount, char bKnockOut, int32_t DiedTierID) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-SpectatorHUD.BP-SpectatorHUD_C.AddKillMsgMagneticField");

	struct AddKillMsgMagneticField_Params {
		struct FText& Victim;
		char bTeamDead;
		int32_t AliveCount;
		char bKnockOut;
		int32_t DiedTierID;
	}; AddKillMsgMagneticField_Params Params;

	Params.bTeamDead = bTeamDead;
	Params.AliveCount = AliveCount;
	Params.bKnockOut = bKnockOut;
	Params.DiedTierID = DiedTierID;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Victim = Params.Victim;

}

// Function BP-SpectatorHUD.BP-SpectatorHUD_C.AddKillMsgNoOxygen
inline void UBP-SpectatorHUD_C::AddKillMsgNoOxygen(struct FText& Victim, char bTeamDead, int32_t AliveCount, char bKnockOut, int32_t DiedTierID) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-SpectatorHUD.BP-SpectatorHUD_C.AddKillMsgNoOxygen");

	struct AddKillMsgNoOxygen_Params {
		struct FText& Victim;
		char bTeamDead;
		int32_t AliveCount;
		char bKnockOut;
		int32_t DiedTierID;
	}; AddKillMsgNoOxygen_Params Params;

	Params.bTeamDead = bTeamDead;
	Params.AliveCount = AliveCount;
	Params.bKnockOut = bKnockOut;
	Params.DiedTierID = DiedTierID;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Victim = Params.Victim;

}

// Function BP-SpectatorHUD.BP-SpectatorHUD_C.AddKillMsgRedZone
inline void UBP-SpectatorHUD_C::AddKillMsgRedZone(struct FText& Victim, char bTeamDead, int32_t AliveCount, char bKnockOut, int32_t DiedTierID) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-SpectatorHUD.BP-SpectatorHUD_C.AddKillMsgRedZone");

	struct AddKillMsgRedZone_Params {
		struct FText& Victim;
		char bTeamDead;
		int32_t AliveCount;
		char bKnockOut;
		int32_t DiedTierID;
	}; AddKillMsgRedZone_Params Params;

	Params.bTeamDead = bTeamDead;
	Params.AliveCount = AliveCount;
	Params.bKnockOut = bKnockOut;
	Params.DiedTierID = DiedTierID;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Victim = Params.Victim;

}

// Function BP-SpectatorHUD.BP-SpectatorHUD_C.AddKillMsgSuicide
inline void UBP-SpectatorHUD_C::AddKillMsgSuicide(struct FText& Victim, char bTeamDead, int32_t AliveCount, char bKnockOut, int32_t DiedTierID) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-SpectatorHUD.BP-SpectatorHUD_C.AddKillMsgSuicide");

	struct AddKillMsgSuicide_Params {
		struct FText& Victim;
		char bTeamDead;
		int32_t AliveCount;
		char bKnockOut;
		int32_t DiedTierID;
	}; AddKillMsgSuicide_Params Params;

	Params.bTeamDead = bTeamDead;
	Params.AliveCount = AliveCount;
	Params.bKnockOut = bKnockOut;
	Params.DiedTierID = DiedTierID;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Victim = Params.Victim;

}

// Function BP-SpectatorHUD.BP-SpectatorHUD_C.AddPerkMessage
inline void UBP-SpectatorHUD_C::AddPerkMessage(struct FName PerkName, int32_t Level) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-SpectatorHUD.BP-SpectatorHUD_C.AddPerkMessage");

	struct AddPerkMessage_Params {
		struct FName PerkName;
		int32_t Level;
	}; AddPerkMessage_Params Params;

	Params.PerkName = PerkName;
	Params.Level = Level;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-SpectatorHUD.BP-SpectatorHUD_C.AddPingMessage
inline void UBP-SpectatorHUD_C::AddPingMessage(struct FString MessageTag, char UsingBackGround) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-SpectatorHUD.BP-SpectatorHUD_C.AddPingMessage");

	struct AddPingMessage_Params {
		struct FString MessageTag;
		char UsingBackGround;
	}; AddPingMessage_Params Params;

	Params.MessageTag = MessageTag;
	Params.UsingBackGround = UsingBackGround;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-SpectatorHUD.BP-SpectatorHUD_C.AddRequestMessage
inline void UBP-SpectatorHUD_C::AddRequestMessage(struct Unknown PlayerState, struct FString Message) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-SpectatorHUD.BP-SpectatorHUD_C.AddRequestMessage");

	struct AddRequestMessage_Params {
		struct Unknown PlayerState;
		struct FString Message;
	}; AddRequestMessage_Params Params;

	Params.PlayerState = PlayerState;
	Params.Message = Message;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-SpectatorHUD.BP-SpectatorHUD_C.Close
inline void UBP-SpectatorHUD_C::Close() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-SpectatorHUD.BP-SpectatorHUD_C.Close");

	struct Close_Params {
		
	}; Close_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-SpectatorHUD.BP-SpectatorHUD_C.FinishPerkSpin
inline void UBP-SpectatorHUD_C::FinishPerkSpin(enum class Unknow LevelUpType) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-SpectatorHUD.BP-SpectatorHUD_C.FinishPerkSpin");

	struct FinishPerkSpin_Params {
		enum class Unknow LevelUpType;
	}; FinishPerkSpin_Params Params;

	Params.LevelUpType = LevelUpType;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-SpectatorHUD.BP-SpectatorHUD_C.HideAmplifier
inline void UBP-SpectatorHUD_C::HideAmplifier() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-SpectatorHUD.BP-SpectatorHUD_C.HideAmplifier");

	struct HideAmplifier_Params {
		
	}; HideAmplifier_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-SpectatorHUD.BP-SpectatorHUD_C.HideBlueZoneNotiMessage
inline void UBP-SpectatorHUD_C::HideBlueZoneNotiMessage() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-SpectatorHUD.BP-SpectatorHUD_C.HideBlueZoneNotiMessage");

	struct HideBlueZoneNotiMessage_Params {
		
	}; HideBlueZoneNotiMessage_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-SpectatorHUD.BP-SpectatorHUD_C.HideMinimapWidget
inline void UBP-SpectatorHUD_C::HideMinimapWidget() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-SpectatorHUD.BP-SpectatorHUD_C.HideMinimapWidget");

	struct HideMinimapWidget_Params {
		
	}; HideMinimapWidget_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-SpectatorHUD.BP-SpectatorHUD_C.HideTeamPositionWidget
inline void UBP-SpectatorHUD_C::HideTeamPositionWidget() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-SpectatorHUD.BP-SpectatorHUD_C.HideTeamPositionWidget");

	struct HideTeamPositionWidget_Params {
		
	}; HideTeamPositionWidget_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-SpectatorHUD.BP-SpectatorHUD_C.HideVehicleWidget
inline void UBP-SpectatorHUD_C::HideVehicleWidget() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-SpectatorHUD.BP-SpectatorHUD_C.HideVehicleWidget");

	struct HideVehicleWidget_Params {
		
	}; HideVehicleWidget_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-SpectatorHUD.BP-SpectatorHUD_C.LevelUpEvent
inline void UBP-SpectatorHUD_C::LevelUpEvent(struct Unknown PerkInfo, int32_t CurrentLevel, enum class Unknow LevelUpType, struct Unknown DisplayAbility, int32_t LastLevel) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-SpectatorHUD.BP-SpectatorHUD_C.LevelUpEvent");

	struct LevelUpEvent_Params {
		struct Unknown PerkInfo;
		int32_t CurrentLevel;
		enum class Unknow LevelUpType;
		struct Unknown DisplayAbility;
		int32_t LastLevel;
	}; LevelUpEvent_Params Params;

	Params.PerkInfo = PerkInfo;
	Params.CurrentLevel = CurrentLevel;
	Params.LevelUpType = LevelUpType;
	Params.DisplayAbility = DisplayAbility;
	Params.LastLevel = LastLevel;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-SpectatorHUD.BP-SpectatorHUD_C.OnChangedToggleType
inline void UBP-SpectatorHUD_C::OnChangedToggleType(enum class Unknow PreType, enum class Unknow CurrentType) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-SpectatorHUD.BP-SpectatorHUD_C.OnChangedToggleType");

	struct OnChangedToggleType_Params {
		enum class Unknow PreType;
		enum class Unknow CurrentType;
	}; OnChangedToggleType_Params Params;

	Params.PreType = PreType;
	Params.CurrentType = CurrentType;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-SpectatorHUD.BP-SpectatorHUD_C.Open
inline void UBP-SpectatorHUD_C::Open() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-SpectatorHUD.BP-SpectatorHUD_C.Open");

	struct Open_Params {
		
	}; Open_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-SpectatorHUD.BP-SpectatorHUD_C.OpenMainMenu
inline void UBP-SpectatorHUD_C::OpenMainMenu() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-SpectatorHUD.BP-SpectatorHUD_C.OpenMainMenu");

	struct OpenMainMenu_Params {
		
	}; OpenMainMenu_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-SpectatorHUD.BP-SpectatorHUD_C.PlaySupplyBoxMessage
inline void UBP-SpectatorHUD_C::PlaySupplyBoxMessage(struct FString Message) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-SpectatorHUD.BP-SpectatorHUD_C.PlaySupplyBoxMessage");

	struct PlaySupplyBoxMessage_Params {
		struct FString Message;
	}; PlaySupplyBoxMessage_Params Params;

	Params.Message = Message;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-SpectatorHUD.BP-SpectatorHUD_C.ResetMiniMapPlayers
inline void UBP-SpectatorHUD_C::ResetMiniMapPlayers() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-SpectatorHUD.BP-SpectatorHUD_C.ResetMiniMapPlayers");

	struct ResetMiniMapPlayers_Params {
		
	}; ResetMiniMapPlayers_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-SpectatorHUD.BP-SpectatorHUD_C.ResetWorldMap
inline void UBP-SpectatorHUD_C::ResetWorldMap() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-SpectatorHUD.BP-SpectatorHUD_C.ResetWorldMap");

	struct ResetWorldMap_Params {
		
	}; ResetWorldMap_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-SpectatorHUD.BP-SpectatorHUD_C.SetNickName
inline void UBP-SpectatorHUD_C::SetNickName(struct FText& NickName) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-SpectatorHUD.BP-SpectatorHUD_C.SetNickName");

	struct SetNickName_Params {
		struct FText& NickName;
	}; SetNickName_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	NickName = Params.NickName;

}

// Function BP-SpectatorHUD.BP-SpectatorHUD_C.SetToggleMinimap
inline void UBP-SpectatorHUD_C::SetToggleMinimap(char bToggle) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-SpectatorHUD.BP-SpectatorHUD_C.SetToggleMinimap");

	struct SetToggleMinimap_Params {
		char bToggle;
	}; SetToggleMinimap_Params Params;

	Params.bToggle = bToggle;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-SpectatorHUD.BP-SpectatorHUD_C.ShowAmplifier
inline void UBP-SpectatorHUD_C::ShowAmplifier(struct FString InText) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-SpectatorHUD.BP-SpectatorHUD_C.ShowAmplifier");

	struct ShowAmplifier_Params {
		struct FString InText;
	}; ShowAmplifier_Params Params;

	Params.InText = InText;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-SpectatorHUD.BP-SpectatorHUD_C.ShowBlueZoneNotiMessage
inline void UBP-SpectatorHUD_C::ShowBlueZoneNotiMessage(struct FString Title, struct FString Desc) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-SpectatorHUD.BP-SpectatorHUD_C.ShowBlueZoneNotiMessage");

	struct ShowBlueZoneNotiMessage_Params {
		struct FString Title;
		struct FString Desc;
	}; ShowBlueZoneNotiMessage_Params Params;

	Params.Title = Title;
	Params.Desc = Desc;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-SpectatorHUD.BP-SpectatorHUD_C.ShowCommonMessage
inline void UBP-SpectatorHUD_C::ShowCommonMessage(struct Unknown& MessageInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-SpectatorHUD.BP-SpectatorHUD_C.ShowCommonMessage");

	struct ShowCommonMessage_Params {
		struct Unknown& MessageInfo;
	}; ShowCommonMessage_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	MessageInfo = Params.MessageInfo;

}

// Function BP-SpectatorHUD.BP-SpectatorHUD_C.ShowDeathAndAliveMessage
inline void UBP-SpectatorHUD_C::ShowDeathAndAliveMessage(struct FText& Victim, int32_t AliveCount) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-SpectatorHUD.BP-SpectatorHUD_C.ShowDeathAndAliveMessage");

	struct ShowDeathAndAliveMessage_Params {
		struct FText& Victim;
		int32_t AliveCount;
	}; ShowDeathAndAliveMessage_Params Params;

	Params.AliveCount = AliveCount;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Victim = Params.Victim;

}

// Function BP-SpectatorHUD.BP-SpectatorHUD_C.ShowDeathUserWidget
inline void UBP-SpectatorHUD_C::ShowDeathUserWidget(struct Unknown& Info) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-SpectatorHUD.BP-SpectatorHUD_C.ShowDeathUserWidget");

	struct ShowDeathUserWidget_Params {
		struct Unknown& Info;
	}; ShowDeathUserWidget_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Info = Params.Info;

}

// Function BP-SpectatorHUD.BP-SpectatorHUD_C.ShowEnergyItemUse
inline void UBP-SpectatorHUD_C::ShowEnergyItemUse(int32_t Type) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-SpectatorHUD.BP-SpectatorHUD_C.ShowEnergyItemUse");

	struct ShowEnergyItemUse_Params {
		int32_t Type;
	}; ShowEnergyItemUse_Params Params;

	Params.Type = Type;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-SpectatorHUD.BP-SpectatorHUD_C.ShowGameProgressMessage
inline void UBP-SpectatorHUD_C::ShowGameProgressMessage(int32_t Type, int32_t Time) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-SpectatorHUD.BP-SpectatorHUD_C.ShowGameProgressMessage");

	struct ShowGameProgressMessage_Params {
		int32_t Type;
		int32_t Time;
	}; ShowGameProgressMessage_Params Params;

	Params.Type = Type;
	Params.Time = Time;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-SpectatorHUD.BP-SpectatorHUD_C.ShowGameWaitMessage
inline void UBP-SpectatorHUD_C::ShowGameWaitMessage(int32_t Time) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-SpectatorHUD.BP-SpectatorHUD_C.ShowGameWaitMessage");

	struct ShowGameWaitMessage_Params {
		int32_t Time;
	}; ShowGameWaitMessage_Params Params;

	Params.Time = Time;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-SpectatorHUD.BP-SpectatorHUD_C.ShowHittedDamage
inline void UBP-SpectatorHUD_C::ShowHittedDamage(struct Unknown InstigatorCharacter) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-SpectatorHUD.BP-SpectatorHUD_C.ShowHittedDamage");

	struct ShowHittedDamage_Params {
		struct Unknown InstigatorCharacter;
	}; ShowHittedDamage_Params Params;

	Params.InstigatorCharacter = InstigatorCharacter;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-SpectatorHUD.BP-SpectatorHUD_C.ShowInventoryNotEnoughSpaceMessage
inline void UBP-SpectatorHUD_C::ShowInventoryNotEnoughSpaceMessage() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-SpectatorHUD.BP-SpectatorHUD_C.ShowInventoryNotEnoughSpaceMessage");

	struct ShowInventoryNotEnoughSpaceMessage_Params {
		
	}; ShowInventoryNotEnoughSpaceMessage_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-SpectatorHUD.BP-SpectatorHUD_C.ShowLineOfFire
inline void UBP-SpectatorHUD_C::ShowLineOfFire(struct Unknown& Pos) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-SpectatorHUD.BP-SpectatorHUD_C.ShowLineOfFire");

	struct ShowLineOfFire_Params {
		struct Unknown& Pos;
	}; ShowLineOfFire_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Pos = Params.Pos;

}

// Function BP-SpectatorHUD.BP-SpectatorHUD_C.ShowMinimapWidget
inline void UBP-SpectatorHUD_C::ShowMinimapWidget() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-SpectatorHUD.BP-SpectatorHUD_C.ShowMinimapWidget");

	struct ShowMinimapWidget_Params {
		
	}; ShowMinimapWidget_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-SpectatorHUD.BP-SpectatorHUD_C.ShowMyKillInfo
inline void UBP-SpectatorHUD_C::ShowMyKillInfo(struct FText& WeaponName, struct FText& Victim, int32_t KillCount, int32_t AliveCount, char bHeadShot, char bTeamKill) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-SpectatorHUD.BP-SpectatorHUD_C.ShowMyKillInfo");

	struct ShowMyKillInfo_Params {
		struct FText& WeaponName;
		struct FText& Victim;
		int32_t KillCount;
		int32_t AliveCount;
		char bHeadShot;
		char bTeamKill;
	}; ShowMyKillInfo_Params Params;

	Params.KillCount = KillCount;
	Params.AliveCount = AliveCount;
	Params.bHeadShot = bHeadShot;
	Params.bTeamKill = bTeamKill;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	WeaponName = Params.WeaponName;
	Victim = Params.Victim;

}

// Function BP-SpectatorHUD.BP-SpectatorHUD_C.ShowMyKnockOutInfo
inline void UBP-SpectatorHUD_C::ShowMyKnockOutInfo(struct FText& WeaponName, struct FText& Victim, char bHeadShot, char bTeamKill) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-SpectatorHUD.BP-SpectatorHUD_C.ShowMyKnockOutInfo");

	struct ShowMyKnockOutInfo_Params {
		struct FText& WeaponName;
		struct FText& Victim;
		char bHeadShot;
		char bTeamKill;
	}; ShowMyKnockOutInfo_Params Params;

	Params.bHeadShot = bHeadShot;
	Params.bTeamKill = bTeamKill;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	WeaponName = Params.WeaponName;
	Victim = Params.Victim;

}

// Function BP-SpectatorHUD.BP-SpectatorHUD_C.ShowNuclearMessage
inline void UBP-SpectatorHUD_C::ShowNuclearMessage(int32_t Count) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-SpectatorHUD.BP-SpectatorHUD_C.ShowNuclearMessage");

	struct ShowNuclearMessage_Params {
		int32_t Count;
	}; ShowNuclearMessage_Params Params;

	Params.Count = Count;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-SpectatorHUD.BP-SpectatorHUD_C.ShowRedZoneBombMessage
inline void UBP-SpectatorHUD_C::ShowRedZoneBombMessage() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-SpectatorHUD.BP-SpectatorHUD_C.ShowRedZoneBombMessage");

	struct ShowRedZoneBombMessage_Params {
		
	}; ShowRedZoneBombMessage_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-SpectatorHUD.BP-SpectatorHUD_C.ShowRedZoneStartMessage
inline void UBP-SpectatorHUD_C::ShowRedZoneStartMessage() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-SpectatorHUD.BP-SpectatorHUD_C.ShowRedZoneStartMessage");

	struct ShowRedZoneStartMessage_Params {
		
	}; ShowRedZoneStartMessage_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-SpectatorHUD.BP-SpectatorHUD_C.ShowReverseSideTeamPositionWidget
inline void UBP-SpectatorHUD_C::ShowReverseSideTeamPositionWidget(int32_t TeamIconIndex, float Angle, struct Unknown ScreenMaxSize) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-SpectatorHUD.BP-SpectatorHUD_C.ShowReverseSideTeamPositionWidget");

	struct ShowReverseSideTeamPositionWidget_Params {
		int32_t TeamIconIndex;
		float Angle;
		struct Unknown ScreenMaxSize;
	}; ShowReverseSideTeamPositionWidget_Params Params;

	Params.TeamIconIndex = TeamIconIndex;
	Params.Angle = Angle;
	Params.ScreenMaxSize = ScreenMaxSize;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-SpectatorHUD.BP-SpectatorHUD_C.ShowTeamPositionWidget
inline void UBP-SpectatorHUD_C::ShowTeamPositionWidget(int32_t TeamIndex, struct Unknown ScreenPosition, char bNetCullDistance) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-SpectatorHUD.BP-SpectatorHUD_C.ShowTeamPositionWidget");

	struct ShowTeamPositionWidget_Params {
		int32_t TeamIndex;
		struct Unknown ScreenPosition;
		char bNetCullDistance;
	}; ShowTeamPositionWidget_Params Params;

	Params.TeamIndex = TeamIndex;
	Params.ScreenPosition = ScreenPosition;
	Params.bNetCullDistance = bNetCullDistance;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-SpectatorHUD.BP-SpectatorHUD_C.ShowVehicleWidget
inline void UBP-SpectatorHUD_C::ShowVehicleWidget(struct Unknown VehicleSeat) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-SpectatorHUD.BP-SpectatorHUD_C.ShowVehicleWidget");

	struct ShowVehicleWidget_Params {
		struct Unknown VehicleSeat;
	}; ShowVehicleWidget_Params Params;

	Params.VehicleSeat = VehicleSeat;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-SpectatorHUD.BP-SpectatorHUD_C.TeamInfoVisibility
inline void UBP-SpectatorHUD_C::TeamInfoVisibility(char bState) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-SpectatorHUD.BP-SpectatorHUD_C.TeamInfoVisibility");

	struct TeamInfoVisibility_Params {
		char bState;
	}; TeamInfoVisibility_Params Params;

	Params.bState = bState;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-SpectatorHUD.BP-SpectatorHUD_C.ToggleMiniMap
inline void UBP-SpectatorHUD_C::ToggleMiniMap() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-SpectatorHUD.BP-SpectatorHUD_C.ToggleMiniMap");

	struct ToggleMiniMap_Params {
		
	}; ToggleMiniMap_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-SpectatorHUD.BP-SpectatorHUD_C.UpdateLineOfFire
inline void UBP-SpectatorHUD_C::UpdateLineOfFire(struct Unknown& Pos, char LastUpdate, float delataTime) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-SpectatorHUD.BP-SpectatorHUD_C.UpdateLineOfFire");

	struct UpdateLineOfFire_Params {
		struct Unknown& Pos;
		char LastUpdate;
		float delataTime;
	}; UpdateLineOfFire_Params Params;

	Params.LastUpdate = LastUpdate;
	Params.delataTime = delataTime;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Pos = Params.Pos;

}

// Function BP-SpectatorHUD.BP-SpectatorHUD_C.BndEvt__Btn-Exit_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
inline void UBP-SpectatorHUD_C::BndEvt__Btn-Exit_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-SpectatorHUD.BP-SpectatorHUD_C.BndEvt__Btn-Exit_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	struct BndEvt__Btn-Exit_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params {
		
	}; BndEvt__Btn-Exit_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-SpectatorHUD.BP-SpectatorHUD_C.BndEvt__Btn-NextTarget_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
inline void UBP-SpectatorHUD_C::BndEvt__Btn-NextTarget_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-SpectatorHUD.BP-SpectatorHUD_C.BndEvt__Btn-NextTarget_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	struct BndEvt__Btn-NextTarget_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params {
		
	}; BndEvt__Btn-NextTarget_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-SpectatorHUD.BP-SpectatorHUD_C.BndEvt__Btn-PreTarget_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
inline void UBP-SpectatorHUD_C::BndEvt__Btn-PreTarget_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-SpectatorHUD.BP-SpectatorHUD_C.BndEvt__Btn-PreTarget_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	struct BndEvt__Btn-PreTarget_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params {
		
	}; BndEvt__Btn-PreTarget_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-SpectatorHUD.BP-SpectatorHUD_C.BndEvt__Btn-Replay_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
inline void UBP-SpectatorHUD_C::BndEvt__Btn-Replay_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-SpectatorHUD.BP-SpectatorHUD_C.BndEvt__Btn-Replay_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	struct BndEvt__Btn-Replay_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params {
		
	}; BndEvt__Btn-Replay_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-SpectatorHUD.BP-SpectatorHUD_C.OpenPopup
inline void UBP-SpectatorHUD_C::OpenPopup() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-SpectatorHUD.BP-SpectatorHUD_C.OpenPopup");

	struct OpenPopup_Params {
		
	}; OpenPopup_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-SpectatorHUD.BP-SpectatorHUD_C.StartBackGroundBlur
inline void UBP-SpectatorHUD_C::StartBackGroundBlur() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-SpectatorHUD.BP-SpectatorHUD_C.StartBackGroundBlur");

	struct StartBackGroundBlur_Params {
		
	}; StartBackGroundBlur_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-SpectatorHUD.BP-SpectatorHUD_C.ResetBackGroundBlur
inline void UBP-SpectatorHUD_C::ResetBackGroundBlur() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-SpectatorHUD.BP-SpectatorHUD_C.ResetBackGroundBlur");

	struct ResetBackGroundBlur_Params {
		
	}; ResetBackGroundBlur_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-SpectatorHUD.BP-SpectatorHUD_C.BndEvt__Button_Return_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
inline void UBP-SpectatorHUD_C::BndEvt__Button_Return_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-SpectatorHUD.BP-SpectatorHUD_C.BndEvt__Button_Return_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");

	struct BndEvt__Button_Return_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params {
		
	}; BndEvt__Button_Return_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-SpectatorHUD.BP-SpectatorHUD_C.AddCoreInfoRequestResuscitation
inline void UBP-SpectatorHUD_C::AddCoreInfoRequestResuscitation(struct Unknown PlayerState) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-SpectatorHUD.BP-SpectatorHUD_C.AddCoreInfoRequestResuscitation");

	struct AddCoreInfoRequestResuscitation_Params {
		struct Unknown PlayerState;
	}; AddCoreInfoRequestResuscitation_Params Params;

	Params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-SpectatorHUD.BP-SpectatorHUD_C.ClosePopup
inline void UBP-SpectatorHUD_C::ClosePopup() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-SpectatorHUD.BP-SpectatorHUD_C.ClosePopup");

	struct ClosePopup_Params {
		
	}; ClosePopup_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-SpectatorHUD.BP-SpectatorHUD_C.HideAnim
inline void UBP-SpectatorHUD_C::HideAnim() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-SpectatorHUD.BP-SpectatorHUD_C.HideAnim");

	struct HideAnim_Params {
		
	}; HideAnim_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-SpectatorHUD.BP-SpectatorHUD_C.ShowAnim
inline void UBP-SpectatorHUD_C::ShowAnim() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-SpectatorHUD.BP-SpectatorHUD_C.ShowAnim");

	struct ShowAnim_Params {
		
	}; ShowAnim_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-SpectatorHUD.BP-SpectatorHUD_C.ExecuteUbergraph_BP-SpectatorHUD
inline void UBP-SpectatorHUD_C::ExecuteUbergraph_BP-SpectatorHUD(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-SpectatorHUD.BP-SpectatorHUD_C.ExecuteUbergraph_BP-SpectatorHUD");

	struct ExecuteUbergraph_BP-SpectatorHUD_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_BP-SpectatorHUD_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

