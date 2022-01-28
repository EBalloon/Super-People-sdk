// WidgetBlueprintGeneratedClass BP-SpectatorWidget.BP-SpectatorWidget_C
class UBP-SpectatorWidget_C : public UBravoHotelSpectatorWidget {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x250 (8)
	struct UWidgetAnimation BackgroundBlurFadeIn; // 0x258 (8)
	struct UWidgetAnimation Idle; // 0x260 (8)
	struct UBackgroundBlur BackgroundBlur_1; // 0x268 (8)
	struct UButton BTN-Exit; // 0x270 (8)
	struct UButton Btn-NextTarget; // 0x278 (8)
	struct UButton Btn-PreTarget; // 0x280 (8)
	struct UButton Btn-Replay; // 0x288 (8)
	struct UCanvasPanel Canvas_Main; // 0x290 (8)
	struct UHorizontalBox KillcamBtns; // 0x298 (8)
	struct UHorizontalBox MemberChangeBox; // 0x2A0 (8)
	struct UTextBlock TextDepth_Replay; // 0x2A8 (8)
	struct UUW-SpectatingTargetInfo_C UW-SpectatingTargetInfo; // 0x2B0 (8)
	char bIsKillCam : 0; // 0x2B8 (1)

	struct UBravoHotelInteractionWidget GetInteractiveWidget(); // Function BP-SpectatorWidget.BP-SpectatorWidget_C.GetInteractiveWidget(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void SetTargetPlayerInfo(struct ABravoHotelPlayerState PlayerState); // Function BP-SpectatorWidget.BP-SpectatorWidget_C.SetTargetPlayerInfo(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	enum class ESlateVisibility GetVisibility_1(); // Function BP-SpectatorWidget.BP-SpectatorWidget_C.GetVisibility_1(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	struct FText GetText_1(); // Function BP-SpectatorWidget.BP-SpectatorWidget_C.GetText_1(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void SetReplayBtn(char bVisiable); // Function BP-SpectatorWidget.BP-SpectatorWidget_C.SetReplayBtn(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void SetTargetBtn(char bVisiable); // Function BP-SpectatorWidget.BP-SpectatorWidget_C.SetTargetBtn(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void AddKillMsgByMolotovFlame(struct FText& Killer, struct FText& WeaponName, struct FText& Victim, char bHeasShot, char bLocalKiller, char bByTeam, char bTeamDead, int32_t AliveCount, char bKnockOut, int32_t KillerTierID, int32_t DiedTierID); // Function BP-SpectatorWidget.BP-SpectatorWidget_C.AddKillMsgByMolotovFlame(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void AddKillMsgByVehicle(struct FText& Killer, struct FText& Victim, char bLocalKiller, char bByTeam, char bTeamDead, int32_t AliveCount, char bKnockOut, int32_t KillerTierID, int32_t DiedTierID); // Function BP-SpectatorWidget.BP-SpectatorWidget_C.AddKillMsgByVehicle(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void AddKillMsgByWeapon(struct FText& Killer, struct FText& WeaponName, struct FText& Victim, char bHeasShot, char bLocalKiller, char bByTeam, char bTeamDead, int32_t AliveCount, char bKnockOut, int32_t KillerTierID, int32_t DiedTierID); // Function BP-SpectatorWidget.BP-SpectatorWidget_C.AddKillMsgByWeapon(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void AddKillMsgCrash(struct FText& Victim, char bTeamDead, int32_t AliveCount, char bKnockOut, int32_t DiedTierID); // Function BP-SpectatorWidget.BP-SpectatorWidget_C.AddKillMsgCrash(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void AddKillMsgFallToDeath(struct FText& Victim, char bTeamDead, int32_t AliveCount, char bKnockOut, int32_t DiedTierID); // Function BP-SpectatorWidget.BP-SpectatorWidget_C.AddKillMsgFallToDeath(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void AddKillMsgKnockOut(struct FText& Killer, struct FText& Victim, char bLocalKiller, char bByTeam, char bTeamDead, int32_t AliveCount, char bKnockOut, int32_t KillerTierID, int32_t DiedTierID); // Function BP-SpectatorWidget.BP-SpectatorWidget_C.AddKillMsgKnockOut(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void AddKillMsgMagneticField(struct FText& Victim, char bTeamDead, int32_t AliveCount, char bKnockOut, int32_t DiedTierID); // Function BP-SpectatorWidget.BP-SpectatorWidget_C.AddKillMsgMagneticField(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void AddKillMsgNoOxygen(struct FText& Victim, char bTeamDead, int32_t AliveCount, char bKnockOut, int32_t DiedTierID); // Function BP-SpectatorWidget.BP-SpectatorWidget_C.AddKillMsgNoOxygen(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void AddKillMsgRedZone(struct FText& Victim, char bTeamDead, int32_t AliveCount, char bKnockOut, int32_t DiedTierID); // Function BP-SpectatorWidget.BP-SpectatorWidget_C.AddKillMsgRedZone(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void AddKillMsgSuicide(struct FText& Victim, char bTeamDead, int32_t AliveCount, char bKnockOut, int32_t DiedTierID); // Function BP-SpectatorWidget.BP-SpectatorWidget_C.AddKillMsgSuicide(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void AddPerkMessage(struct FName PerkName, int32_t Level); // Function BP-SpectatorWidget.BP-SpectatorWidget_C.AddPerkMessage(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void AddPingMessage(struct FString MessageTag, char UsingBackGround); // Function BP-SpectatorWidget.BP-SpectatorWidget_C.AddPingMessage(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void AddRequestMessage(struct ABravoHotelPlayerState PlayerState, struct FString Message); // Function BP-SpectatorWidget.BP-SpectatorWidget_C.AddRequestMessage(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void Close(); // Function BP-SpectatorWidget.BP-SpectatorWidget_C.Close(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void FinishPerkSpin(enum class EPerkLevelUpType LevelUpType); // Function BP-SpectatorWidget.BP-SpectatorWidget_C.FinishPerkSpin(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void HideAmplifier(); // Function BP-SpectatorWidget.BP-SpectatorWidget_C.HideAmplifier(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void HideBlueZoneNotiMessage(); // Function BP-SpectatorWidget.BP-SpectatorWidget_C.HideBlueZoneNotiMessage(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void HideMinimapWidget(); // Function BP-SpectatorWidget.BP-SpectatorWidget_C.HideMinimapWidget(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void HideTeamPositionWidget(); // Function BP-SpectatorWidget.BP-SpectatorWidget_C.HideTeamPositionWidget(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void HideVehicleWidget(); // Function BP-SpectatorWidget.BP-SpectatorWidget_C.HideVehicleWidget(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void LevelUpEvent(struct FPerkUIInfo PerkInfo, int32_t CurrentLevel, enum class EPerkLevelUpType LevelUpType, struct FDisplayAbility DisplayAbility, int32_t LastLevel); // Function BP-SpectatorWidget.BP-SpectatorWidget_C.LevelUpEvent(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void OnChangedToggleType(enum class EToggleWidgetModeType PreType, enum class EToggleWidgetModeType CurrentType); // Function BP-SpectatorWidget.BP-SpectatorWidget_C.OnChangedToggleType(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void Open(); // Function BP-SpectatorWidget.BP-SpectatorWidget_C.Open(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void OpenMainMenu(); // Function BP-SpectatorWidget.BP-SpectatorWidget_C.OpenMainMenu(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void PlaySupplyBoxMessage(struct FString Message); // Function BP-SpectatorWidget.BP-SpectatorWidget_C.PlaySupplyBoxMessage(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void ResetMiniMapPlayers(); // Function BP-SpectatorWidget.BP-SpectatorWidget_C.ResetMiniMapPlayers(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void ResetWorldMap(); // Function BP-SpectatorWidget.BP-SpectatorWidget_C.ResetWorldMap(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void SetNickName(struct FText& NickName); // Function BP-SpectatorWidget.BP-SpectatorWidget_C.SetNickName(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void SetToggleMinimap(char bToggle); // Function BP-SpectatorWidget.BP-SpectatorWidget_C.SetToggleMinimap(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void ShowAmplifier(struct FString InText); // Function BP-SpectatorWidget.BP-SpectatorWidget_C.ShowAmplifier(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void ShowBlueZoneNotiMessage(struct FString Title, struct FString Desc); // Function BP-SpectatorWidget.BP-SpectatorWidget_C.ShowBlueZoneNotiMessage(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void ShowCommonMessage(struct FCommonMessageInfo& MessageInfo); // Function BP-SpectatorWidget.BP-SpectatorWidget_C.ShowCommonMessage(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void ShowDeathAndAliveMessage(struct FText& Victim, int32_t AliveCount); // Function BP-SpectatorWidget.BP-SpectatorWidget_C.ShowDeathAndAliveMessage(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void ShowDeathUserWidget(struct FKillBroadcastUIInfo& Info); // Function BP-SpectatorWidget.BP-SpectatorWidget_C.ShowDeathUserWidget(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void ShowEnergyItemUse(int32_t Type); // Function BP-SpectatorWidget.BP-SpectatorWidget_C.ShowEnergyItemUse(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void ShowGameProgressMessage(int32_t Type, int32_t Time); // Function BP-SpectatorWidget.BP-SpectatorWidget_C.ShowGameProgressMessage(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void ShowGameWaitMessage(int32_t Time); // Function BP-SpectatorWidget.BP-SpectatorWidget_C.ShowGameWaitMessage(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void ShowHittedDamage(struct ABravoHotelCharacter InstigatorCharacter); // Function BP-SpectatorWidget.BP-SpectatorWidget_C.ShowHittedDamage(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void ShowInventoryNotEnoughSpaceMessage(); // Function BP-SpectatorWidget.BP-SpectatorWidget_C.ShowInventoryNotEnoughSpaceMessage(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void ShowLineOfFire(struct FVector2D& Pos); // Function BP-SpectatorWidget.BP-SpectatorWidget_C.ShowLineOfFire(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void ShowMinimapWidget(); // Function BP-SpectatorWidget.BP-SpectatorWidget_C.ShowMinimapWidget(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void ShowMyKillInfo(struct FText& WeaponName, struct FText& Victim, int32_t KillCount, int32_t AliveCount, char bHeadShot, char bTeamKill); // Function BP-SpectatorWidget.BP-SpectatorWidget_C.ShowMyKillInfo(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void ShowMyKnockOutInfo(struct FText& WeaponName, struct FText& Victim, char bHeadShot, char bTeamKill); // Function BP-SpectatorWidget.BP-SpectatorWidget_C.ShowMyKnockOutInfo(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void ShowNuclearMessage(int32_t Count); // Function BP-SpectatorWidget.BP-SpectatorWidget_C.ShowNuclearMessage(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void ShowRedZoneBombMessage(); // Function BP-SpectatorWidget.BP-SpectatorWidget_C.ShowRedZoneBombMessage(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void ShowRedZoneStartMessage(); // Function BP-SpectatorWidget.BP-SpectatorWidget_C.ShowRedZoneStartMessage(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void ShowReverseSideTeamPositionWidget(int32_t TeamIconIndex, float Angle, struct FVector2D ScreenMaxSize); // Function BP-SpectatorWidget.BP-SpectatorWidget_C.ShowReverseSideTeamPositionWidget(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void ShowTeamPositionWidget(int32_t TeamIndex, struct FVector2D ScreenPosition, char bNetCullDistance); // Function BP-SpectatorWidget.BP-SpectatorWidget_C.ShowTeamPositionWidget(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void ShowVehicleWidget(struct UBravoHotelVehicleSeatComponent VehicleSeat); // Function BP-SpectatorWidget.BP-SpectatorWidget_C.ShowVehicleWidget(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void TeamInfoVisibility(char bState); // Function BP-SpectatorWidget.BP-SpectatorWidget_C.TeamInfoVisibility(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void ToggleMiniMap(); // Function BP-SpectatorWidget.BP-SpectatorWidget_C.ToggleMiniMap(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void UpdateLineOfFire(struct FVector2D& Pos, char LastUpdate, float delataTime); // Function BP-SpectatorWidget.BP-SpectatorWidget_C.UpdateLineOfFire(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void BndEvt__Btn-Exit_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function BP-SpectatorWidget.BP-SpectatorWidget_C.BndEvt__Btn-Exit_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void BndEvt__Btn-NextTarget_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function BP-SpectatorWidget.BP-SpectatorWidget_C.BndEvt__Btn-NextTarget_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void BndEvt__Btn-PreTarget_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // Function BP-SpectatorWidget.BP-SpectatorWidget_C.BndEvt__Btn-PreTarget_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void BndEvt__Btn-Replay_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function BP-SpectatorWidget.BP-SpectatorWidget_C.BndEvt__Btn-Replay_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void AddCoreInfoRouteping(struct ABravoHotelPlayerState PlayerState); // Function BP-SpectatorWidget.BP-SpectatorWidget_C.AddCoreInfoRouteping(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void StartBackGroundBlur(); // Function BP-SpectatorWidget.BP-SpectatorWidget_C.StartBackGroundBlur(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void ResetBackGroundBlur(); // Function BP-SpectatorWidget.BP-SpectatorWidget_C.ResetBackGroundBlur(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void BndEvt__Button_Return_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature(); // Function BP-SpectatorWidget.BP-SpectatorWidget_C.BndEvt__Button_Return_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void AddCoreInfoSmartping(struct ABravoHotelPlayerState PlayerState); // Function BP-SpectatorWidget.BP-SpectatorWidget_C.AddCoreInfoSmartping(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void AddCoreInfoRequestResuscitation(struct ABravoHotelPlayerState PlayerState); // Function BP-SpectatorWidget.BP-SpectatorWidget_C.AddCoreInfoRequestResuscitation(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void Show(); // Function BP-SpectatorWidget.BP-SpectatorWidget_C.Show(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void Hide(); // Function BP-SpectatorWidget.BP-SpectatorWidget_C.Hide(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void ExecuteUbergraph_BP-SpectatorWidget(int32_t EntryPoint); // Function BP-SpectatorWidget.BP-SpectatorWidget_C.ExecuteUbergraph_BP-SpectatorWidget(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
};

// Function BP-SpectatorWidget.BP-SpectatorWidget_C.GetInteractiveWidget
inline struct UBravoHotelInteractionWidget UBP-SpectatorWidget_C::GetInteractiveWidget() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-SpectatorWidget.BP-SpectatorWidget_C.GetInteractiveWidget");

	struct GetInteractiveWidget_Params {
		
		struct UBravoHotelInteractionWidget ReturnValue;

	}; GetInteractiveWidget_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function BP-SpectatorWidget.BP-SpectatorWidget_C.SetTargetPlayerInfo
inline void UBP-SpectatorWidget_C::SetTargetPlayerInfo(struct ABravoHotelPlayerState PlayerState) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-SpectatorWidget.BP-SpectatorWidget_C.SetTargetPlayerInfo");

	struct SetTargetPlayerInfo_Params {
		struct ABravoHotelPlayerState PlayerState;
	}; SetTargetPlayerInfo_Params Params;

	Params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-SpectatorWidget.BP-SpectatorWidget_C.GetVisibility_1
inline enum class ESlateVisibility UBP-SpectatorWidget_C::GetVisibility_1() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-SpectatorWidget.BP-SpectatorWidget_C.GetVisibility_1");

	struct GetVisibility_1_Params {
		
		enum class ESlateVisibility ReturnValue;

	}; GetVisibility_1_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function BP-SpectatorWidget.BP-SpectatorWidget_C.GetText_1
inline struct FText UBP-SpectatorWidget_C::GetText_1() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-SpectatorWidget.BP-SpectatorWidget_C.GetText_1");

	struct GetText_1_Params {
		
		struct FText ReturnValue;

	}; GetText_1_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function BP-SpectatorWidget.BP-SpectatorWidget_C.SetReplayBtn
inline void UBP-SpectatorWidget_C::SetReplayBtn(char bVisiable) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-SpectatorWidget.BP-SpectatorWidget_C.SetReplayBtn");

	struct SetReplayBtn_Params {
		char bVisiable;
	}; SetReplayBtn_Params Params;

	Params.bVisiable = bVisiable;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-SpectatorWidget.BP-SpectatorWidget_C.SetTargetBtn
inline void UBP-SpectatorWidget_C::SetTargetBtn(char bVisiable) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-SpectatorWidget.BP-SpectatorWidget_C.SetTargetBtn");

	struct SetTargetBtn_Params {
		char bVisiable;
	}; SetTargetBtn_Params Params;

	Params.bVisiable = bVisiable;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-SpectatorWidget.BP-SpectatorWidget_C.AddKillMsgByMolotovFlame
inline void UBP-SpectatorWidget_C::AddKillMsgByMolotovFlame(struct FText& Killer, struct FText& WeaponName, struct FText& Victim, char bHeasShot, char bLocalKiller, char bByTeam, char bTeamDead, int32_t AliveCount, char bKnockOut, int32_t KillerTierID, int32_t DiedTierID) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-SpectatorWidget.BP-SpectatorWidget_C.AddKillMsgByMolotovFlame");

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

// Function BP-SpectatorWidget.BP-SpectatorWidget_C.AddKillMsgByVehicle
inline void UBP-SpectatorWidget_C::AddKillMsgByVehicle(struct FText& Killer, struct FText& Victim, char bLocalKiller, char bByTeam, char bTeamDead, int32_t AliveCount, char bKnockOut, int32_t KillerTierID, int32_t DiedTierID) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-SpectatorWidget.BP-SpectatorWidget_C.AddKillMsgByVehicle");

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

// Function BP-SpectatorWidget.BP-SpectatorWidget_C.AddKillMsgByWeapon
inline void UBP-SpectatorWidget_C::AddKillMsgByWeapon(struct FText& Killer, struct FText& WeaponName, struct FText& Victim, char bHeasShot, char bLocalKiller, char bByTeam, char bTeamDead, int32_t AliveCount, char bKnockOut, int32_t KillerTierID, int32_t DiedTierID) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-SpectatorWidget.BP-SpectatorWidget_C.AddKillMsgByWeapon");

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

// Function BP-SpectatorWidget.BP-SpectatorWidget_C.AddKillMsgCrash
inline void UBP-SpectatorWidget_C::AddKillMsgCrash(struct FText& Victim, char bTeamDead, int32_t AliveCount, char bKnockOut, int32_t DiedTierID) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-SpectatorWidget.BP-SpectatorWidget_C.AddKillMsgCrash");

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

// Function BP-SpectatorWidget.BP-SpectatorWidget_C.AddKillMsgFallToDeath
inline void UBP-SpectatorWidget_C::AddKillMsgFallToDeath(struct FText& Victim, char bTeamDead, int32_t AliveCount, char bKnockOut, int32_t DiedTierID) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-SpectatorWidget.BP-SpectatorWidget_C.AddKillMsgFallToDeath");

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

// Function BP-SpectatorWidget.BP-SpectatorWidget_C.AddKillMsgKnockOut
inline void UBP-SpectatorWidget_C::AddKillMsgKnockOut(struct FText& Killer, struct FText& Victim, char bLocalKiller, char bByTeam, char bTeamDead, int32_t AliveCount, char bKnockOut, int32_t KillerTierID, int32_t DiedTierID) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-SpectatorWidget.BP-SpectatorWidget_C.AddKillMsgKnockOut");

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

// Function BP-SpectatorWidget.BP-SpectatorWidget_C.AddKillMsgMagneticField
inline void UBP-SpectatorWidget_C::AddKillMsgMagneticField(struct FText& Victim, char bTeamDead, int32_t AliveCount, char bKnockOut, int32_t DiedTierID) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-SpectatorWidget.BP-SpectatorWidget_C.AddKillMsgMagneticField");

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

// Function BP-SpectatorWidget.BP-SpectatorWidget_C.AddKillMsgNoOxygen
inline void UBP-SpectatorWidget_C::AddKillMsgNoOxygen(struct FText& Victim, char bTeamDead, int32_t AliveCount, char bKnockOut, int32_t DiedTierID) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-SpectatorWidget.BP-SpectatorWidget_C.AddKillMsgNoOxygen");

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

// Function BP-SpectatorWidget.BP-SpectatorWidget_C.AddKillMsgRedZone
inline void UBP-SpectatorWidget_C::AddKillMsgRedZone(struct FText& Victim, char bTeamDead, int32_t AliveCount, char bKnockOut, int32_t DiedTierID) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-SpectatorWidget.BP-SpectatorWidget_C.AddKillMsgRedZone");

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

// Function BP-SpectatorWidget.BP-SpectatorWidget_C.AddKillMsgSuicide
inline void UBP-SpectatorWidget_C::AddKillMsgSuicide(struct FText& Victim, char bTeamDead, int32_t AliveCount, char bKnockOut, int32_t DiedTierID) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-SpectatorWidget.BP-SpectatorWidget_C.AddKillMsgSuicide");

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

// Function BP-SpectatorWidget.BP-SpectatorWidget_C.AddPerkMessage
inline void UBP-SpectatorWidget_C::AddPerkMessage(struct FName PerkName, int32_t Level) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-SpectatorWidget.BP-SpectatorWidget_C.AddPerkMessage");

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

// Function BP-SpectatorWidget.BP-SpectatorWidget_C.AddPingMessage
inline void UBP-SpectatorWidget_C::AddPingMessage(struct FString MessageTag, char UsingBackGround) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-SpectatorWidget.BP-SpectatorWidget_C.AddPingMessage");

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

// Function BP-SpectatorWidget.BP-SpectatorWidget_C.AddRequestMessage
inline void UBP-SpectatorWidget_C::AddRequestMessage(struct ABravoHotelPlayerState PlayerState, struct FString Message) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-SpectatorWidget.BP-SpectatorWidget_C.AddRequestMessage");

	struct AddRequestMessage_Params {
		struct ABravoHotelPlayerState PlayerState;
		struct FString Message;
	}; AddRequestMessage_Params Params;

	Params.PlayerState = PlayerState;
	Params.Message = Message;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-SpectatorWidget.BP-SpectatorWidget_C.Close
inline void UBP-SpectatorWidget_C::Close() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-SpectatorWidget.BP-SpectatorWidget_C.Close");

	struct Close_Params {
		
	}; Close_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-SpectatorWidget.BP-SpectatorWidget_C.FinishPerkSpin
inline void UBP-SpectatorWidget_C::FinishPerkSpin(enum class EPerkLevelUpType LevelUpType) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-SpectatorWidget.BP-SpectatorWidget_C.FinishPerkSpin");

	struct FinishPerkSpin_Params {
		enum class EPerkLevelUpType LevelUpType;
	}; FinishPerkSpin_Params Params;

	Params.LevelUpType = LevelUpType;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-SpectatorWidget.BP-SpectatorWidget_C.HideAmplifier
inline void UBP-SpectatorWidget_C::HideAmplifier() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-SpectatorWidget.BP-SpectatorWidget_C.HideAmplifier");

	struct HideAmplifier_Params {
		
	}; HideAmplifier_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-SpectatorWidget.BP-SpectatorWidget_C.HideBlueZoneNotiMessage
inline void UBP-SpectatorWidget_C::HideBlueZoneNotiMessage() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-SpectatorWidget.BP-SpectatorWidget_C.HideBlueZoneNotiMessage");

	struct HideBlueZoneNotiMessage_Params {
		
	}; HideBlueZoneNotiMessage_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-SpectatorWidget.BP-SpectatorWidget_C.HideMinimapWidget
inline void UBP-SpectatorWidget_C::HideMinimapWidget() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-SpectatorWidget.BP-SpectatorWidget_C.HideMinimapWidget");

	struct HideMinimapWidget_Params {
		
	}; HideMinimapWidget_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-SpectatorWidget.BP-SpectatorWidget_C.HideTeamPositionWidget
inline void UBP-SpectatorWidget_C::HideTeamPositionWidget() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-SpectatorWidget.BP-SpectatorWidget_C.HideTeamPositionWidget");

	struct HideTeamPositionWidget_Params {
		
	}; HideTeamPositionWidget_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-SpectatorWidget.BP-SpectatorWidget_C.HideVehicleWidget
inline void UBP-SpectatorWidget_C::HideVehicleWidget() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-SpectatorWidget.BP-SpectatorWidget_C.HideVehicleWidget");

	struct HideVehicleWidget_Params {
		
	}; HideVehicleWidget_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-SpectatorWidget.BP-SpectatorWidget_C.LevelUpEvent
inline void UBP-SpectatorWidget_C::LevelUpEvent(struct FPerkUIInfo PerkInfo, int32_t CurrentLevel, enum class EPerkLevelUpType LevelUpType, struct FDisplayAbility DisplayAbility, int32_t LastLevel) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-SpectatorWidget.BP-SpectatorWidget_C.LevelUpEvent");

	struct LevelUpEvent_Params {
		struct FPerkUIInfo PerkInfo;
		int32_t CurrentLevel;
		enum class EPerkLevelUpType LevelUpType;
		struct FDisplayAbility DisplayAbility;
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

// Function BP-SpectatorWidget.BP-SpectatorWidget_C.OnChangedToggleType
inline void UBP-SpectatorWidget_C::OnChangedToggleType(enum class EToggleWidgetModeType PreType, enum class EToggleWidgetModeType CurrentType) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-SpectatorWidget.BP-SpectatorWidget_C.OnChangedToggleType");

	struct OnChangedToggleType_Params {
		enum class EToggleWidgetModeType PreType;
		enum class EToggleWidgetModeType CurrentType;
	}; OnChangedToggleType_Params Params;

	Params.PreType = PreType;
	Params.CurrentType = CurrentType;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-SpectatorWidget.BP-SpectatorWidget_C.Open
inline void UBP-SpectatorWidget_C::Open() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-SpectatorWidget.BP-SpectatorWidget_C.Open");

	struct Open_Params {
		
	}; Open_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-SpectatorWidget.BP-SpectatorWidget_C.OpenMainMenu
inline void UBP-SpectatorWidget_C::OpenMainMenu() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-SpectatorWidget.BP-SpectatorWidget_C.OpenMainMenu");

	struct OpenMainMenu_Params {
		
	}; OpenMainMenu_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-SpectatorWidget.BP-SpectatorWidget_C.PlaySupplyBoxMessage
inline void UBP-SpectatorWidget_C::PlaySupplyBoxMessage(struct FString Message) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-SpectatorWidget.BP-SpectatorWidget_C.PlaySupplyBoxMessage");

	struct PlaySupplyBoxMessage_Params {
		struct FString Message;
	}; PlaySupplyBoxMessage_Params Params;

	Params.Message = Message;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-SpectatorWidget.BP-SpectatorWidget_C.ResetMiniMapPlayers
inline void UBP-SpectatorWidget_C::ResetMiniMapPlayers() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-SpectatorWidget.BP-SpectatorWidget_C.ResetMiniMapPlayers");

	struct ResetMiniMapPlayers_Params {
		
	}; ResetMiniMapPlayers_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-SpectatorWidget.BP-SpectatorWidget_C.ResetWorldMap
inline void UBP-SpectatorWidget_C::ResetWorldMap() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-SpectatorWidget.BP-SpectatorWidget_C.ResetWorldMap");

	struct ResetWorldMap_Params {
		
	}; ResetWorldMap_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-SpectatorWidget.BP-SpectatorWidget_C.SetNickName
inline void UBP-SpectatorWidget_C::SetNickName(struct FText& NickName) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-SpectatorWidget.BP-SpectatorWidget_C.SetNickName");

	struct SetNickName_Params {
		struct FText& NickName;
	}; SetNickName_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	NickName = Params.NickName;

}

// Function BP-SpectatorWidget.BP-SpectatorWidget_C.SetToggleMinimap
inline void UBP-SpectatorWidget_C::SetToggleMinimap(char bToggle) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-SpectatorWidget.BP-SpectatorWidget_C.SetToggleMinimap");

	struct SetToggleMinimap_Params {
		char bToggle;
	}; SetToggleMinimap_Params Params;

	Params.bToggle = bToggle;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-SpectatorWidget.BP-SpectatorWidget_C.ShowAmplifier
inline void UBP-SpectatorWidget_C::ShowAmplifier(struct FString InText) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-SpectatorWidget.BP-SpectatorWidget_C.ShowAmplifier");

	struct ShowAmplifier_Params {
		struct FString InText;
	}; ShowAmplifier_Params Params;

	Params.InText = InText;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-SpectatorWidget.BP-SpectatorWidget_C.ShowBlueZoneNotiMessage
inline void UBP-SpectatorWidget_C::ShowBlueZoneNotiMessage(struct FString Title, struct FString Desc) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-SpectatorWidget.BP-SpectatorWidget_C.ShowBlueZoneNotiMessage");

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

// Function BP-SpectatorWidget.BP-SpectatorWidget_C.ShowCommonMessage
inline void UBP-SpectatorWidget_C::ShowCommonMessage(struct FCommonMessageInfo& MessageInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-SpectatorWidget.BP-SpectatorWidget_C.ShowCommonMessage");

	struct ShowCommonMessage_Params {
		struct FCommonMessageInfo& MessageInfo;
	}; ShowCommonMessage_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	MessageInfo = Params.MessageInfo;

}

// Function BP-SpectatorWidget.BP-SpectatorWidget_C.ShowDeathAndAliveMessage
inline void UBP-SpectatorWidget_C::ShowDeathAndAliveMessage(struct FText& Victim, int32_t AliveCount) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-SpectatorWidget.BP-SpectatorWidget_C.ShowDeathAndAliveMessage");

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

// Function BP-SpectatorWidget.BP-SpectatorWidget_C.ShowDeathUserWidget
inline void UBP-SpectatorWidget_C::ShowDeathUserWidget(struct FKillBroadcastUIInfo& Info) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-SpectatorWidget.BP-SpectatorWidget_C.ShowDeathUserWidget");

	struct ShowDeathUserWidget_Params {
		struct FKillBroadcastUIInfo& Info;
	}; ShowDeathUserWidget_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Info = Params.Info;

}

// Function BP-SpectatorWidget.BP-SpectatorWidget_C.ShowEnergyItemUse
inline void UBP-SpectatorWidget_C::ShowEnergyItemUse(int32_t Type) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-SpectatorWidget.BP-SpectatorWidget_C.ShowEnergyItemUse");

	struct ShowEnergyItemUse_Params {
		int32_t Type;
	}; ShowEnergyItemUse_Params Params;

	Params.Type = Type;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-SpectatorWidget.BP-SpectatorWidget_C.ShowGameProgressMessage
inline void UBP-SpectatorWidget_C::ShowGameProgressMessage(int32_t Type, int32_t Time) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-SpectatorWidget.BP-SpectatorWidget_C.ShowGameProgressMessage");

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

// Function BP-SpectatorWidget.BP-SpectatorWidget_C.ShowGameWaitMessage
inline void UBP-SpectatorWidget_C::ShowGameWaitMessage(int32_t Time) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-SpectatorWidget.BP-SpectatorWidget_C.ShowGameWaitMessage");

	struct ShowGameWaitMessage_Params {
		int32_t Time;
	}; ShowGameWaitMessage_Params Params;

	Params.Time = Time;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-SpectatorWidget.BP-SpectatorWidget_C.ShowHittedDamage
inline void UBP-SpectatorWidget_C::ShowHittedDamage(struct ABravoHotelCharacter InstigatorCharacter) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-SpectatorWidget.BP-SpectatorWidget_C.ShowHittedDamage");

	struct ShowHittedDamage_Params {
		struct ABravoHotelCharacter InstigatorCharacter;
	}; ShowHittedDamage_Params Params;

	Params.InstigatorCharacter = InstigatorCharacter;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-SpectatorWidget.BP-SpectatorWidget_C.ShowInventoryNotEnoughSpaceMessage
inline void UBP-SpectatorWidget_C::ShowInventoryNotEnoughSpaceMessage() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-SpectatorWidget.BP-SpectatorWidget_C.ShowInventoryNotEnoughSpaceMessage");

	struct ShowInventoryNotEnoughSpaceMessage_Params {
		
	}; ShowInventoryNotEnoughSpaceMessage_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-SpectatorWidget.BP-SpectatorWidget_C.ShowLineOfFire
inline void UBP-SpectatorWidget_C::ShowLineOfFire(struct FVector2D& Pos) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-SpectatorWidget.BP-SpectatorWidget_C.ShowLineOfFire");

	struct ShowLineOfFire_Params {
		struct FVector2D& Pos;
	}; ShowLineOfFire_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Pos = Params.Pos;

}

// Function BP-SpectatorWidget.BP-SpectatorWidget_C.ShowMinimapWidget
inline void UBP-SpectatorWidget_C::ShowMinimapWidget() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-SpectatorWidget.BP-SpectatorWidget_C.ShowMinimapWidget");

	struct ShowMinimapWidget_Params {
		
	}; ShowMinimapWidget_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-SpectatorWidget.BP-SpectatorWidget_C.ShowMyKillInfo
inline void UBP-SpectatorWidget_C::ShowMyKillInfo(struct FText& WeaponName, struct FText& Victim, int32_t KillCount, int32_t AliveCount, char bHeadShot, char bTeamKill) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-SpectatorWidget.BP-SpectatorWidget_C.ShowMyKillInfo");

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

// Function BP-SpectatorWidget.BP-SpectatorWidget_C.ShowMyKnockOutInfo
inline void UBP-SpectatorWidget_C::ShowMyKnockOutInfo(struct FText& WeaponName, struct FText& Victim, char bHeadShot, char bTeamKill) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-SpectatorWidget.BP-SpectatorWidget_C.ShowMyKnockOutInfo");

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

// Function BP-SpectatorWidget.BP-SpectatorWidget_C.ShowNuclearMessage
inline void UBP-SpectatorWidget_C::ShowNuclearMessage(int32_t Count) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-SpectatorWidget.BP-SpectatorWidget_C.ShowNuclearMessage");

	struct ShowNuclearMessage_Params {
		int32_t Count;
	}; ShowNuclearMessage_Params Params;

	Params.Count = Count;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-SpectatorWidget.BP-SpectatorWidget_C.ShowRedZoneBombMessage
inline void UBP-SpectatorWidget_C::ShowRedZoneBombMessage() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-SpectatorWidget.BP-SpectatorWidget_C.ShowRedZoneBombMessage");

	struct ShowRedZoneBombMessage_Params {
		
	}; ShowRedZoneBombMessage_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-SpectatorWidget.BP-SpectatorWidget_C.ShowRedZoneStartMessage
inline void UBP-SpectatorWidget_C::ShowRedZoneStartMessage() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-SpectatorWidget.BP-SpectatorWidget_C.ShowRedZoneStartMessage");

	struct ShowRedZoneStartMessage_Params {
		
	}; ShowRedZoneStartMessage_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-SpectatorWidget.BP-SpectatorWidget_C.ShowReverseSideTeamPositionWidget
inline void UBP-SpectatorWidget_C::ShowReverseSideTeamPositionWidget(int32_t TeamIconIndex, float Angle, struct FVector2D ScreenMaxSize) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-SpectatorWidget.BP-SpectatorWidget_C.ShowReverseSideTeamPositionWidget");

	struct ShowReverseSideTeamPositionWidget_Params {
		int32_t TeamIconIndex;
		float Angle;
		struct FVector2D ScreenMaxSize;
	}; ShowReverseSideTeamPositionWidget_Params Params;

	Params.TeamIconIndex = TeamIconIndex;
	Params.Angle = Angle;
	Params.ScreenMaxSize = ScreenMaxSize;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-SpectatorWidget.BP-SpectatorWidget_C.ShowTeamPositionWidget
inline void UBP-SpectatorWidget_C::ShowTeamPositionWidget(int32_t TeamIndex, struct FVector2D ScreenPosition, char bNetCullDistance) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-SpectatorWidget.BP-SpectatorWidget_C.ShowTeamPositionWidget");

	struct ShowTeamPositionWidget_Params {
		int32_t TeamIndex;
		struct FVector2D ScreenPosition;
		char bNetCullDistance;
	}; ShowTeamPositionWidget_Params Params;

	Params.TeamIndex = TeamIndex;
	Params.ScreenPosition = ScreenPosition;
	Params.bNetCullDistance = bNetCullDistance;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-SpectatorWidget.BP-SpectatorWidget_C.ShowVehicleWidget
inline void UBP-SpectatorWidget_C::ShowVehicleWidget(struct UBravoHotelVehicleSeatComponent VehicleSeat) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-SpectatorWidget.BP-SpectatorWidget_C.ShowVehicleWidget");

	struct ShowVehicleWidget_Params {
		struct UBravoHotelVehicleSeatComponent VehicleSeat;
	}; ShowVehicleWidget_Params Params;

	Params.VehicleSeat = VehicleSeat;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-SpectatorWidget.BP-SpectatorWidget_C.TeamInfoVisibility
inline void UBP-SpectatorWidget_C::TeamInfoVisibility(char bState) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-SpectatorWidget.BP-SpectatorWidget_C.TeamInfoVisibility");

	struct TeamInfoVisibility_Params {
		char bState;
	}; TeamInfoVisibility_Params Params;

	Params.bState = bState;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-SpectatorWidget.BP-SpectatorWidget_C.ToggleMiniMap
inline void UBP-SpectatorWidget_C::ToggleMiniMap() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-SpectatorWidget.BP-SpectatorWidget_C.ToggleMiniMap");

	struct ToggleMiniMap_Params {
		
	}; ToggleMiniMap_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-SpectatorWidget.BP-SpectatorWidget_C.UpdateLineOfFire
inline void UBP-SpectatorWidget_C::UpdateLineOfFire(struct FVector2D& Pos, char LastUpdate, float delataTime) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-SpectatorWidget.BP-SpectatorWidget_C.UpdateLineOfFire");

	struct UpdateLineOfFire_Params {
		struct FVector2D& Pos;
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

// Function BP-SpectatorWidget.BP-SpectatorWidget_C.BndEvt__Btn-Exit_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
inline void UBP-SpectatorWidget_C::BndEvt__Btn-Exit_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-SpectatorWidget.BP-SpectatorWidget_C.BndEvt__Btn-Exit_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	struct BndEvt__Btn-Exit_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params {
		
	}; BndEvt__Btn-Exit_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-SpectatorWidget.BP-SpectatorWidget_C.BndEvt__Btn-NextTarget_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
inline void UBP-SpectatorWidget_C::BndEvt__Btn-NextTarget_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-SpectatorWidget.BP-SpectatorWidget_C.BndEvt__Btn-NextTarget_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	struct BndEvt__Btn-NextTarget_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params {
		
	}; BndEvt__Btn-NextTarget_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-SpectatorWidget.BP-SpectatorWidget_C.BndEvt__Btn-PreTarget_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
inline void UBP-SpectatorWidget_C::BndEvt__Btn-PreTarget_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-SpectatorWidget.BP-SpectatorWidget_C.BndEvt__Btn-PreTarget_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	struct BndEvt__Btn-PreTarget_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params {
		
	}; BndEvt__Btn-PreTarget_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-SpectatorWidget.BP-SpectatorWidget_C.BndEvt__Btn-Replay_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
inline void UBP-SpectatorWidget_C::BndEvt__Btn-Replay_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-SpectatorWidget.BP-SpectatorWidget_C.BndEvt__Btn-Replay_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	struct BndEvt__Btn-Replay_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params {
		
	}; BndEvt__Btn-Replay_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-SpectatorWidget.BP-SpectatorWidget_C.AddCoreInfoRouteping
inline void UBP-SpectatorWidget_C::AddCoreInfoRouteping(struct ABravoHotelPlayerState PlayerState) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-SpectatorWidget.BP-SpectatorWidget_C.AddCoreInfoRouteping");

	struct AddCoreInfoRouteping_Params {
		struct ABravoHotelPlayerState PlayerState;
	}; AddCoreInfoRouteping_Params Params;

	Params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-SpectatorWidget.BP-SpectatorWidget_C.StartBackGroundBlur
inline void UBP-SpectatorWidget_C::StartBackGroundBlur() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-SpectatorWidget.BP-SpectatorWidget_C.StartBackGroundBlur");

	struct StartBackGroundBlur_Params {
		
	}; StartBackGroundBlur_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-SpectatorWidget.BP-SpectatorWidget_C.ResetBackGroundBlur
inline void UBP-SpectatorWidget_C::ResetBackGroundBlur() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-SpectatorWidget.BP-SpectatorWidget_C.ResetBackGroundBlur");

	struct ResetBackGroundBlur_Params {
		
	}; ResetBackGroundBlur_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-SpectatorWidget.BP-SpectatorWidget_C.BndEvt__Button_Return_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
inline void UBP-SpectatorWidget_C::BndEvt__Button_Return_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-SpectatorWidget.BP-SpectatorWidget_C.BndEvt__Button_Return_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");

	struct BndEvt__Button_Return_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params {
		
	}; BndEvt__Button_Return_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-SpectatorWidget.BP-SpectatorWidget_C.AddCoreInfoSmartping
inline void UBP-SpectatorWidget_C::AddCoreInfoSmartping(struct ABravoHotelPlayerState PlayerState) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-SpectatorWidget.BP-SpectatorWidget_C.AddCoreInfoSmartping");

	struct AddCoreInfoSmartping_Params {
		struct ABravoHotelPlayerState PlayerState;
	}; AddCoreInfoSmartping_Params Params;

	Params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-SpectatorWidget.BP-SpectatorWidget_C.AddCoreInfoRequestResuscitation
inline void UBP-SpectatorWidget_C::AddCoreInfoRequestResuscitation(struct ABravoHotelPlayerState PlayerState) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-SpectatorWidget.BP-SpectatorWidget_C.AddCoreInfoRequestResuscitation");

	struct AddCoreInfoRequestResuscitation_Params {
		struct ABravoHotelPlayerState PlayerState;
	}; AddCoreInfoRequestResuscitation_Params Params;

	Params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-SpectatorWidget.BP-SpectatorWidget_C.Show
inline void UBP-SpectatorWidget_C::Show() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-SpectatorWidget.BP-SpectatorWidget_C.Show");

	struct Show_Params {
		
	}; Show_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-SpectatorWidget.BP-SpectatorWidget_C.Hide
inline void UBP-SpectatorWidget_C::Hide() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-SpectatorWidget.BP-SpectatorWidget_C.Hide");

	struct Hide_Params {
		
	}; Hide_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-SpectatorWidget.BP-SpectatorWidget_C.ExecuteUbergraph_BP-SpectatorWidget
inline void UBP-SpectatorWidget_C::ExecuteUbergraph_BP-SpectatorWidget(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-SpectatorWidget.BP-SpectatorWidget_C.ExecuteUbergraph_BP-SpectatorWidget");

	struct ExecuteUbergraph_BP-SpectatorWidget_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_BP-SpectatorWidget_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

