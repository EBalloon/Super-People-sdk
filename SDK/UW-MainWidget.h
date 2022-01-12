// WidgetBlueprintGeneratedClass UW-MainWidget.UW-MainWidget_C
class UUW-MainWidget_C : public UBravoHotelMainWidget {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x458 (8)
	struct UWidgetAnimation Anim_HideWidget; // 0x460 (8)
	struct UWidgetAnimation HideLaserPoint; // 0x468 (8)
	struct UWidgetAnimation ShowLaserPoint; // 0x470 (8)
	struct UBackgroundBlur BackgroundBlur_154; // 0x478 (8)
	struct UCanvasPanel Canvas; // 0x480 (8)
	struct UHorizontalBox HB_PerkSpin; // 0x488 (8)
	struct UImage RedCircle; // 0x490 (8)
	struct UTextBlock TextBlock_Start; // 0x498 (8)
	struct UUW-CompassWidget_C UW-CompassWidget; // 0x4A0 (8)
	struct UUW-HUDMessageWidget_C UW-HUDMessageWidget; // 0x4A8 (8)
	struct UUW-InteractionWidget_C UW-InteractionWidget; // 0x4B0 (8)
	struct UUW-JetpackWidget_C UW-JetpackWidget; // 0x4B8 (8)
	struct UUW-MS_C UW-MS; // 0x4C0 (8)
	struct UUW-PerkLevelUp_02_C UW-PerkLevelUp_02; // 0x4C8 (8)
	struct UUW-VehicleWidget_C UW-VehicleWidget; // 0x4D0 (8)
	struct ABravoHotelCharacter TargetPawn; // 0x4D8 (8)
	struct FDisplayAbility LastDisplayAbility; // 0x4E0 (12)
	struct TArray<struct UUW-GainPerk_C> GainPerkPopups; // 0x4F0 (16)
	struct UUW-Radar_Cursor_C UW-RaderCursorWidget; // 0x500 (8)
	struct UUserWidget UW-DefaultCursorWidget; // 0x508 (8)
	struct FTimerHandle Timer_IsMouseWidgetInMap; // 0x510 (8)
	struct UUW-NitroBoomTargetWidget_C UW-NitroBoomTargetWidget; // 0x518 (8)
	char bIsShow : 0; // 0x520 (1)
	float TmpViewportUpAngle; // 0x524 (4)
	float TmpViewportSideAngle; // 0x528 (4)
	struct FVector2D CenterPosition; // 0x52C (8)
	struct UUW-MapImageWidget_C UW-MapImageRef; // 0x538 (8)
	struct FTimerHandle Timer_AutoPerkDeck; // 0x540 (8)
	int32_t LastPlayZoneID; // 0x548 (4)
	char bShowLevelUp : 0; // 0x54C (1)
	char IsPlayingUltimateSound : 0; // 0x54D (1)
	char bIsUnlockUltimateSkill : 0; // 0x54E (1)

	void HideSkillMouseCursor(); // Function UW-MainWidget.UW-MainWidget_C.HideSkillMouseCursor(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void ShowSkillMouseCursor(); // Function UW-MainWidget.UW-MainWidget_C.ShowSkillMouseCursor(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void CheckUltimateSound(int32_t CurrentLevel); // Function UW-MainWidget.UW-MainWidget_C.CheckUltimateSound(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void UpdateAllInvalidationbox(); // Function UW-MainWidget.UW-MainWidget_C.UpdateAllInvalidationbox(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void SetSightInfoPosition(enum class EFireType FireType); // Function UW-MainWidget.UW-MainWidget_C.SetSightInfoPosition(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void ShowProgressMessage(int32_t Type, int32_t Time); // Function UW-MainWidget.UW-MainWidget_C.ShowProgressMessage(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void UpdateNitroTargetWidget(struct FVector2D TargetPosition); // Function UW-MainWidget.UW-MainWidget_C.UpdateNitroTargetWidget(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void Change Mouse Widget(); // Function UW-MainWidget.UW-MainWidget_C.Change Mouse Widget(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void ResetMouseWidget(); // Function UW-MainWidget.UW-MainWidget_C.ResetMouseWidget(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	struct UUserWidget GetMiniMapWidget(); // Function UW-MainWidget.UW-MainWidget_C.GetMiniMapWidget(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <Game_BE.exe+0x2B80160>
	void CheckChangedPlayZone(); // Function UW-MainWidget.UW-MainWidget_C.CheckChangedPlayZone(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void HideMapImageWidget(char SetTimer); // Function UW-MainWidget.UW-MainWidget_C.HideMapImageWidget(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void ShowMapImageWidget(); // Function UW-MainWidget.UW-MainWidget_C.ShowMapImageWidget(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void CheckMapImageWidget(enum class EToggleWidgetModeType PreType, enum class EToggleWidgetModeType CurrentType); // Function UW-MainWidget.UW-MainWidget_C.CheckMapImageWidget(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void CheckWorldMapGuideWidget(enum class EToggleWidgetModeType PreType, enum class EToggleWidgetModeType CurrentType); // Function UW-MainWidget.UW-MainWidget_C.CheckWorldMapGuideWidget(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void ADSGuideWidget(enum class EFireType PreFireType, enum class EFireType FireType); // Function UW-MainWidget.UW-MainWidget_C.ADSGuideWidget(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void HideSmartpingSelectionMenu(); // Function UW-MainWidget.UW-MainWidget_C.HideSmartpingSelectionMenu(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void AddDeathUserWidget(struct FKillBroadcastUIInfo BroadCastInfo); // Function UW-MainWidget.UW-MainWidget_C.AddDeathUserWidget(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void SetVisibleWorldTeamPositionWidget(enum class EToggleWidgetModeType ToggleType); // Function UW-MainWidget.UW-MainWidget_C.SetVisibleWorldTeamPositionWidget(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void CalcMinMaxViewportPositionForTeamPositionWidget(); // Function UW-MainWidget.UW-MainWidget_C.CalcMinMaxViewportPositionForTeamPositionWidget(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void ShowZeroingDistance(); // Function UW-MainWidget.UW-MainWidget_C.ShowZeroingDistance(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	struct UBravoHotelInteractionWidget GetInteractiveWidget(); // Function UW-MainWidget.UW-MainWidget_C.GetInteractiveWidget(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void WorldMapReInit(); // Function UW-MainWidget.UW-MainWidget_C.WorldMapReInit(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void ChangeWidgetVisibleByToggleType(enum class EToggleWidgetModeType CurrentType); // Function UW-MainWidget.UW-MainWidget_C.ChangeWidgetVisibleByToggleType(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	char IsOpenSystemPopup(); // Function UW-MainWidget.UW-MainWidget_C.IsOpenSystemPopup(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void UpdateLaserPoint(float DeltaTime); // Function UW-MainWidget.UW-MainWidget_C.UpdateLaserPoint(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void CheckAutoOpenPerkDeck(); // Function UW-MainWidget.UW-MainWidget_C.CheckAutoOpenPerkDeck(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void GetSightViewRatio(enum class EWeaponAttachmentItem SightType, struct FVector2D& Translation); // Function UW-MainWidget.UW-MainWidget_C.GetSightViewRatio(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <Game_BE.exe+0x2B80160>
	void RemovePerkPopup(struct UUW-GainPerk_C PerkPopup); // Function UW-MainWidget.UW-MainWidget_C.RemovePerkPopup(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void Play Stat Animation(enum class EPerkLevelUpType LevelUpType, struct FDisplayAbility DisplayAbility); // Function UW-MainWidget.UW-MainWidget_C.Play Stat Animation(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void OnReadyToSnipe(enum class EFireType FireType); // Function UW-MainWidget.UW-MainWidget_C.OnReadyToSnipe(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void On Battle Royale State Changed(enum class EBattleRoyaleState PreviousState, enum class EBattleRoyaleState CurrentState); // Function UW-MainWidget.UW-MainWidget_C.On Battle Royale State Changed(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	char OnDrop(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation Operation); // Function UW-MainWidget.UW-MainWidget_C.OnDrop(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void ClosePopup(); // Function UW-MainWidget.UW-MainWidget_C.ClosePopup(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void OpenPopup(); // Function UW-MainWidget.UW-MainWidget_C.OpenPopup(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void Construct(); // Function UW-MainWidget.UW-MainWidget_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void OnChangeFireType_Event_1(enum class EFireType PreFireType, enum class EFireType NewFireType); // Function UW-MainWidget.UW-MainWidget_C.OnChangeFireType_Event_1(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void BindDelegates(); // Function UW-MainWidget.UW-MainWidget_C.BindDelegates(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void UnbindDelegates(); // Function UW-MainWidget.UW-MainWidget_C.UnbindDelegates(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void ReadyGivePerk(); // Function UW-MainWidget.UW-MainWidget_C.ReadyGivePerk(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void OpenPerkDeck(); // Function UW-MainWidget.UW-MainWidget_C.OpenPerkDeck(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void UpdateLineOfFire(struct FVector2D& Pos, char LastUpdate, float delataTime); // Function UW-MainWidget.UW-MainWidget_C.UpdateLineOfFire(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void ShowLineOfFire(struct FVector2D& Pos); // Function UW-MainWidget.UW-MainWidget_C.ShowLineOfFire(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void ShowHittedDamage(struct ABravoHotelCharacter InstigatorCharacter); // Function UW-MainWidget.UW-MainWidget_C.ShowHittedDamage(Event|Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void ShowDeathUserWidget(struct FKillBroadcastUIInfo& Info); // Function UW-MainWidget.UW-MainWidget_C.ShowDeathUserWidget(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void LevelUpEvent(struct FPerkUIInfo PerkInfo, int32_t CurrentLevel, enum class EPerkLevelUpType LevelUpType, struct FDisplayAbility DisplayAbility, int32_t LastLevel); // Function UW-MainWidget.UW-MainWidget_C.LevelUpEvent(Event|Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void OnChangedToggleType(enum class EToggleWidgetModeType PreType, enum class EToggleWidgetModeType CurrentType); // Function UW-MainWidget.UW-MainWidget_C.OnChangedToggleType(Event|Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void HideHUDMessage(enum class EHUDMessageType MessageType); // Function UW-MainWidget.UW-MainWidget_C.HideHUDMessage(Event|Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void AddCoreInfoSmartping(struct ABravoHotelPlayerState PlayerState); // Function UW-MainWidget.UW-MainWidget_C.AddCoreInfoSmartping(Event|Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void AddCoreInfoRouteping(struct ABravoHotelPlayerState PlayerState); // Function UW-MainWidget.UW-MainWidget_C.AddCoreInfoRouteping(Event|Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void AddRequestMessage(struct ABravoHotelPlayerState PlayerState, struct FString Message); // Function UW-MainWidget.UW-MainWidget_C.AddRequestMessage(Event|Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void AddCoreInfoRequestResuscitation(struct ABravoHotelPlayerState PlayerState); // Function UW-MainWidget.UW-MainWidget_C.AddCoreInfoRequestResuscitation(Event|Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void ShowHUDMessage(struct FBravoHotelHUDMessageRow MessageRow); // Function UW-MainWidget.UW-MainWidget_C.ShowHUDMessage(Event|Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void OnAllLevelLoadedFirstTime(); // Function UW-MainWidget.UW-MainWidget_C.OnAllLevelLoadedFirstTime(Event|Public|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void BPOnViewportSized(); // Function UW-MainWidget.UW-MainWidget_C.BPOnViewportSized(Event|Public|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void CheckVisiblilityPerkDeck_BP(); // Function UW-MainWidget.UW-MainWidget_C.CheckVisiblilityPerkDeck_BP(Event|Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void ChangeMouseCursorWidget(); // Function UW-MainWidget.UW-MainWidget_C.ChangeMouseCursorWidget(Event|Public|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void ResetMouseCursorWidget(); // Function UW-MainWidget.UW-MainWidget_C.ResetMouseCursorWidget(Event|Public|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void OnDoSkillBySkillMap(); // Function UW-MainWidget.UW-MainWidget_C.OnDoSkillBySkillMap(Event|Public|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void UpdateNitroBoomWidget(struct FVector2D TargetPosition); // Function UW-MainWidget.UW-MainWidget_C.UpdateNitroBoomWidget(Event|Public|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void SetTeamSize(int32_t Size); // Function UW-MainWidget.UW-MainWidget_C.SetTeamSize(Event|Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void HideNitroBoomWidget(); // Function UW-MainWidget.UW-MainWidget_C.HideNitroBoomWidget(Event|Public|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void Timer_ShowProgressMessage(); // Function UW-MainWidget.UW-MainWidget_C.Timer_ShowProgressMessage(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void OnPhaseChanged1(int32_t PrevPhase, int32_t CurrentPhase); // Function UW-MainWidget.UW-MainWidget_C.OnPhaseChanged1(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void OnBlueZoneDelegate_Event_1(); // Function UW-MainWidget.UW-MainWidget_C.OnBlueZoneDelegate_Event_1(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void OnBlueZoneStateChanged_Event_1(enum class EBluseZoneState PrevState, enum class EBluseZoneState CurrentState); // Function UW-MainWidget.UW-MainWidget_C.OnBlueZoneStateChanged_Event_1(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void OnChangedPlayerInfos(); // Function UW-MainWidget.UW-MainWidget_C.OnChangedPlayerInfos(Event|Public|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void UpdateChargeGauge(float MaxChargeValue, float CurrentChargeValue); // Function UW-MainWidget.UW-MainWidget_C.UpdateChargeGauge(Event|Public|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void RemoveChargeGauge(); // Function UW-MainWidget.UW-MainWidget_C.RemoveChargeGauge(Event|Public|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void StopChargeGauge(); // Function UW-MainWidget.UW-MainWidget_C.StopChargeGauge(Event|Public|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void OnRemoveChargeGauge(); // Function UW-MainWidget.UW-MainWidget_C.OnRemoveChargeGauge(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void ShowAnim(); // Function UW-MainWidget.UW-MainWidget_C.ShowAnim(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void HideAnim(); // Function UW-MainWidget.UW-MainWidget_C.HideAnim(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void ShowStatupAnim(struct FStatupAnimParameters& StatupParameters); // Function UW-MainWidget.UW-MainWidget_C.ShowStatupAnim(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void K2_UpdateAllInvalidationbox(); // Function UW-MainWidget.UW-MainWidget_C.K2_UpdateAllInvalidationbox(Event|Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void ExecuteUbergraph_UW-MainWidget(int32_t EntryPoint); // Function UW-MainWidget.UW-MainWidget_C.ExecuteUbergraph_UW-MainWidget(Final|UbergraphFunction|HasDefaults) // <Game_BE.exe+0x2B80160>
};

// Function UW-MainWidget.UW-MainWidget_C.HideSkillMouseCursor
inline void UUW-MainWidget_C::HideSkillMouseCursor() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MainWidget.UW-MainWidget_C.HideSkillMouseCursor");

	struct HideSkillMouseCursor_Params {
		
	}; HideSkillMouseCursor_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MainWidget.UW-MainWidget_C.ShowSkillMouseCursor
inline void UUW-MainWidget_C::ShowSkillMouseCursor() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MainWidget.UW-MainWidget_C.ShowSkillMouseCursor");

	struct ShowSkillMouseCursor_Params {
		
	}; ShowSkillMouseCursor_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MainWidget.UW-MainWidget_C.CheckUltimateSound
inline void UUW-MainWidget_C::CheckUltimateSound(int32_t CurrentLevel) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MainWidget.UW-MainWidget_C.CheckUltimateSound");

	struct CheckUltimateSound_Params {
		int32_t CurrentLevel;
	}; CheckUltimateSound_Params Params;

	Params.CurrentLevel = CurrentLevel;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MainWidget.UW-MainWidget_C.UpdateAllInvalidationbox
inline void UUW-MainWidget_C::UpdateAllInvalidationbox() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MainWidget.UW-MainWidget_C.UpdateAllInvalidationbox");

	struct UpdateAllInvalidationbox_Params {
		
	}; UpdateAllInvalidationbox_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MainWidget.UW-MainWidget_C.SetSightInfoPosition
inline void UUW-MainWidget_C::SetSightInfoPosition(enum class EFireType FireType) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MainWidget.UW-MainWidget_C.SetSightInfoPosition");

	struct SetSightInfoPosition_Params {
		enum class EFireType FireType;
	}; SetSightInfoPosition_Params Params;

	Params.FireType = FireType;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MainWidget.UW-MainWidget_C.ShowProgressMessage
inline void UUW-MainWidget_C::ShowProgressMessage(int32_t Type, int32_t Time) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MainWidget.UW-MainWidget_C.ShowProgressMessage");

	struct ShowProgressMessage_Params {
		int32_t Type;
		int32_t Time;
	}; ShowProgressMessage_Params Params;

	Params.Type = Type;
	Params.Time = Time;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MainWidget.UW-MainWidget_C.UpdateNitroTargetWidget
inline void UUW-MainWidget_C::UpdateNitroTargetWidget(struct FVector2D TargetPosition) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MainWidget.UW-MainWidget_C.UpdateNitroTargetWidget");

	struct UpdateNitroTargetWidget_Params {
		struct FVector2D TargetPosition;
	}; UpdateNitroTargetWidget_Params Params;

	Params.TargetPosition = TargetPosition;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MainWidget.UW-MainWidget_C.Change Mouse Widget
inline void UUW-MainWidget_C::Change Mouse Widget() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MainWidget.UW-MainWidget_C.Change Mouse Widget");

	struct Change Mouse Widget_Params {
		
	}; Change Mouse Widget_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MainWidget.UW-MainWidget_C.ResetMouseWidget
inline void UUW-MainWidget_C::ResetMouseWidget() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MainWidget.UW-MainWidget_C.ResetMouseWidget");

	struct ResetMouseWidget_Params {
		
	}; ResetMouseWidget_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MainWidget.UW-MainWidget_C.GetMiniMapWidget
inline struct UUserWidget UUW-MainWidget_C::GetMiniMapWidget() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MainWidget.UW-MainWidget_C.GetMiniMapWidget");

	struct GetMiniMapWidget_Params {
		
		struct UUserWidget ReturnValue;

	}; GetMiniMapWidget_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UW-MainWidget.UW-MainWidget_C.CheckChangedPlayZone
inline void UUW-MainWidget_C::CheckChangedPlayZone() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MainWidget.UW-MainWidget_C.CheckChangedPlayZone");

	struct CheckChangedPlayZone_Params {
		
	}; CheckChangedPlayZone_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MainWidget.UW-MainWidget_C.HideMapImageWidget
inline void UUW-MainWidget_C::HideMapImageWidget(char SetTimer) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MainWidget.UW-MainWidget_C.HideMapImageWidget");

	struct HideMapImageWidget_Params {
		char SetTimer;
	}; HideMapImageWidget_Params Params;

	Params.SetTimer = SetTimer;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MainWidget.UW-MainWidget_C.ShowMapImageWidget
inline void UUW-MainWidget_C::ShowMapImageWidget() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MainWidget.UW-MainWidget_C.ShowMapImageWidget");

	struct ShowMapImageWidget_Params {
		
	}; ShowMapImageWidget_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MainWidget.UW-MainWidget_C.CheckMapImageWidget
inline void UUW-MainWidget_C::CheckMapImageWidget(enum class EToggleWidgetModeType PreType, enum class EToggleWidgetModeType CurrentType) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MainWidget.UW-MainWidget_C.CheckMapImageWidget");

	struct CheckMapImageWidget_Params {
		enum class EToggleWidgetModeType PreType;
		enum class EToggleWidgetModeType CurrentType;
	}; CheckMapImageWidget_Params Params;

	Params.PreType = PreType;
	Params.CurrentType = CurrentType;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MainWidget.UW-MainWidget_C.CheckWorldMapGuideWidget
inline void UUW-MainWidget_C::CheckWorldMapGuideWidget(enum class EToggleWidgetModeType PreType, enum class EToggleWidgetModeType CurrentType) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MainWidget.UW-MainWidget_C.CheckWorldMapGuideWidget");

	struct CheckWorldMapGuideWidget_Params {
		enum class EToggleWidgetModeType PreType;
		enum class EToggleWidgetModeType CurrentType;
	}; CheckWorldMapGuideWidget_Params Params;

	Params.PreType = PreType;
	Params.CurrentType = CurrentType;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MainWidget.UW-MainWidget_C.ADSGuideWidget
inline void UUW-MainWidget_C::ADSGuideWidget(enum class EFireType PreFireType, enum class EFireType FireType) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MainWidget.UW-MainWidget_C.ADSGuideWidget");

	struct ADSGuideWidget_Params {
		enum class EFireType PreFireType;
		enum class EFireType FireType;
	}; ADSGuideWidget_Params Params;

	Params.PreFireType = PreFireType;
	Params.FireType = FireType;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MainWidget.UW-MainWidget_C.HideSmartpingSelectionMenu
inline void UUW-MainWidget_C::HideSmartpingSelectionMenu() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MainWidget.UW-MainWidget_C.HideSmartpingSelectionMenu");

	struct HideSmartpingSelectionMenu_Params {
		
	}; HideSmartpingSelectionMenu_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MainWidget.UW-MainWidget_C.AddDeathUserWidget
inline void UUW-MainWidget_C::AddDeathUserWidget(struct FKillBroadcastUIInfo BroadCastInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MainWidget.UW-MainWidget_C.AddDeathUserWidget");

	struct AddDeathUserWidget_Params {
		struct FKillBroadcastUIInfo BroadCastInfo;
	}; AddDeathUserWidget_Params Params;

	Params.BroadCastInfo = BroadCastInfo;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MainWidget.UW-MainWidget_C.SetVisibleWorldTeamPositionWidget
inline void UUW-MainWidget_C::SetVisibleWorldTeamPositionWidget(enum class EToggleWidgetModeType ToggleType) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MainWidget.UW-MainWidget_C.SetVisibleWorldTeamPositionWidget");

	struct SetVisibleWorldTeamPositionWidget_Params {
		enum class EToggleWidgetModeType ToggleType;
	}; SetVisibleWorldTeamPositionWidget_Params Params;

	Params.ToggleType = ToggleType;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MainWidget.UW-MainWidget_C.CalcMinMaxViewportPositionForTeamPositionWidget
inline void UUW-MainWidget_C::CalcMinMaxViewportPositionForTeamPositionWidget() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MainWidget.UW-MainWidget_C.CalcMinMaxViewportPositionForTeamPositionWidget");

	struct CalcMinMaxViewportPositionForTeamPositionWidget_Params {
		
	}; CalcMinMaxViewportPositionForTeamPositionWidget_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MainWidget.UW-MainWidget_C.ShowZeroingDistance
inline void UUW-MainWidget_C::ShowZeroingDistance() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MainWidget.UW-MainWidget_C.ShowZeroingDistance");

	struct ShowZeroingDistance_Params {
		
	}; ShowZeroingDistance_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MainWidget.UW-MainWidget_C.GetInteractiveWidget
inline struct UBravoHotelInteractionWidget UUW-MainWidget_C::GetInteractiveWidget() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MainWidget.UW-MainWidget_C.GetInteractiveWidget");

	struct GetInteractiveWidget_Params {
		
		struct UBravoHotelInteractionWidget ReturnValue;

	}; GetInteractiveWidget_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UW-MainWidget.UW-MainWidget_C.WorldMapReInit
inline void UUW-MainWidget_C::WorldMapReInit() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MainWidget.UW-MainWidget_C.WorldMapReInit");

	struct WorldMapReInit_Params {
		
	}; WorldMapReInit_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MainWidget.UW-MainWidget_C.ChangeWidgetVisibleByToggleType
inline void UUW-MainWidget_C::ChangeWidgetVisibleByToggleType(enum class EToggleWidgetModeType CurrentType) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MainWidget.UW-MainWidget_C.ChangeWidgetVisibleByToggleType");

	struct ChangeWidgetVisibleByToggleType_Params {
		enum class EToggleWidgetModeType CurrentType;
	}; ChangeWidgetVisibleByToggleType_Params Params;

	Params.CurrentType = CurrentType;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MainWidget.UW-MainWidget_C.IsOpenSystemPopup
inline char UUW-MainWidget_C::IsOpenSystemPopup() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MainWidget.UW-MainWidget_C.IsOpenSystemPopup");

	struct IsOpenSystemPopup_Params {
		
		char ReturnValue;

	}; IsOpenSystemPopup_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UW-MainWidget.UW-MainWidget_C.UpdateLaserPoint
inline void UUW-MainWidget_C::UpdateLaserPoint(float DeltaTime) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MainWidget.UW-MainWidget_C.UpdateLaserPoint");

	struct UpdateLaserPoint_Params {
		float DeltaTime;
	}; UpdateLaserPoint_Params Params;

	Params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MainWidget.UW-MainWidget_C.CheckAutoOpenPerkDeck
inline void UUW-MainWidget_C::CheckAutoOpenPerkDeck() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MainWidget.UW-MainWidget_C.CheckAutoOpenPerkDeck");

	struct CheckAutoOpenPerkDeck_Params {
		
	}; CheckAutoOpenPerkDeck_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MainWidget.UW-MainWidget_C.GetSightViewRatio
inline void UUW-MainWidget_C::GetSightViewRatio(enum class EWeaponAttachmentItem SightType, struct FVector2D& Translation) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MainWidget.UW-MainWidget_C.GetSightViewRatio");

	struct GetSightViewRatio_Params {
		enum class EWeaponAttachmentItem SightType;
		struct FVector2D& Translation;
	}; GetSightViewRatio_Params Params;

	Params.SightType = SightType;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Translation = Params.Translation;

}

// Function UW-MainWidget.UW-MainWidget_C.RemovePerkPopup
inline void UUW-MainWidget_C::RemovePerkPopup(struct UUW-GainPerk_C PerkPopup) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MainWidget.UW-MainWidget_C.RemovePerkPopup");

	struct RemovePerkPopup_Params {
		struct UUW-GainPerk_C PerkPopup;
	}; RemovePerkPopup_Params Params;

	Params.PerkPopup = PerkPopup;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MainWidget.UW-MainWidget_C.Play Stat Animation
inline void UUW-MainWidget_C::Play Stat Animation(enum class EPerkLevelUpType LevelUpType, struct FDisplayAbility DisplayAbility) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MainWidget.UW-MainWidget_C.Play Stat Animation");

	struct Play Stat Animation_Params {
		enum class EPerkLevelUpType LevelUpType;
		struct FDisplayAbility DisplayAbility;
	}; Play Stat Animation_Params Params;

	Params.LevelUpType = LevelUpType;
	Params.DisplayAbility = DisplayAbility;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MainWidget.UW-MainWidget_C.OnReadyToSnipe
inline void UUW-MainWidget_C::OnReadyToSnipe(enum class EFireType FireType) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MainWidget.UW-MainWidget_C.OnReadyToSnipe");

	struct OnReadyToSnipe_Params {
		enum class EFireType FireType;
	}; OnReadyToSnipe_Params Params;

	Params.FireType = FireType;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MainWidget.UW-MainWidget_C.On Battle Royale State Changed
inline void UUW-MainWidget_C::On Battle Royale State Changed(enum class EBattleRoyaleState PreviousState, enum class EBattleRoyaleState CurrentState) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MainWidget.UW-MainWidget_C.On Battle Royale State Changed");

	struct On Battle Royale State Changed_Params {
		enum class EBattleRoyaleState PreviousState;
		enum class EBattleRoyaleState CurrentState;
	}; On Battle Royale State Changed_Params Params;

	Params.PreviousState = PreviousState;
	Params.CurrentState = CurrentState;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MainWidget.UW-MainWidget_C.OnDrop
inline char UUW-MainWidget_C::OnDrop(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation Operation) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MainWidget.UW-MainWidget_C.OnDrop");

	struct OnDrop_Params {
		struct FGeometry MyGeometry;
		struct FPointerEvent PointerEvent;
		struct UDragDropOperation Operation;
		char ReturnValue;

	}; OnDrop_Params Params;

	Params.MyGeometry = MyGeometry;
	Params.PointerEvent = PointerEvent;
	Params.Operation = Operation;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UW-MainWidget.UW-MainWidget_C.ClosePopup
inline void UUW-MainWidget_C::ClosePopup() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MainWidget.UW-MainWidget_C.ClosePopup");

	struct ClosePopup_Params {
		
	}; ClosePopup_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MainWidget.UW-MainWidget_C.OpenPopup
inline void UUW-MainWidget_C::OpenPopup() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MainWidget.UW-MainWidget_C.OpenPopup");

	struct OpenPopup_Params {
		
	}; OpenPopup_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MainWidget.UW-MainWidget_C.Construct
inline void UUW-MainWidget_C::Construct() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MainWidget.UW-MainWidget_C.Construct");

	struct Construct_Params {
		
	}; Construct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MainWidget.UW-MainWidget_C.OnChangeFireType_Event_1
inline void UUW-MainWidget_C::OnChangeFireType_Event_1(enum class EFireType PreFireType, enum class EFireType NewFireType) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MainWidget.UW-MainWidget_C.OnChangeFireType_Event_1");

	struct OnChangeFireType_Event_1_Params {
		enum class EFireType PreFireType;
		enum class EFireType NewFireType;
	}; OnChangeFireType_Event_1_Params Params;

	Params.PreFireType = PreFireType;
	Params.NewFireType = NewFireType;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MainWidget.UW-MainWidget_C.BindDelegates
inline void UUW-MainWidget_C::BindDelegates() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MainWidget.UW-MainWidget_C.BindDelegates");

	struct BindDelegates_Params {
		
	}; BindDelegates_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MainWidget.UW-MainWidget_C.UnbindDelegates
inline void UUW-MainWidget_C::UnbindDelegates() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MainWidget.UW-MainWidget_C.UnbindDelegates");

	struct UnbindDelegates_Params {
		
	}; UnbindDelegates_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MainWidget.UW-MainWidget_C.ReadyGivePerk
inline void UUW-MainWidget_C::ReadyGivePerk() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MainWidget.UW-MainWidget_C.ReadyGivePerk");

	struct ReadyGivePerk_Params {
		
	}; ReadyGivePerk_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MainWidget.UW-MainWidget_C.OpenPerkDeck
inline void UUW-MainWidget_C::OpenPerkDeck() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MainWidget.UW-MainWidget_C.OpenPerkDeck");

	struct OpenPerkDeck_Params {
		
	}; OpenPerkDeck_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MainWidget.UW-MainWidget_C.UpdateLineOfFire
inline void UUW-MainWidget_C::UpdateLineOfFire(struct FVector2D& Pos, char LastUpdate, float delataTime) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MainWidget.UW-MainWidget_C.UpdateLineOfFire");

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

// Function UW-MainWidget.UW-MainWidget_C.ShowLineOfFire
inline void UUW-MainWidget_C::ShowLineOfFire(struct FVector2D& Pos) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MainWidget.UW-MainWidget_C.ShowLineOfFire");

	struct ShowLineOfFire_Params {
		struct FVector2D& Pos;
	}; ShowLineOfFire_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Pos = Params.Pos;

}

// Function UW-MainWidget.UW-MainWidget_C.ShowHittedDamage
inline void UUW-MainWidget_C::ShowHittedDamage(struct ABravoHotelCharacter InstigatorCharacter) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MainWidget.UW-MainWidget_C.ShowHittedDamage");

	struct ShowHittedDamage_Params {
		struct ABravoHotelCharacter InstigatorCharacter;
	}; ShowHittedDamage_Params Params;

	Params.InstigatorCharacter = InstigatorCharacter;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MainWidget.UW-MainWidget_C.ShowDeathUserWidget
inline void UUW-MainWidget_C::ShowDeathUserWidget(struct FKillBroadcastUIInfo& Info) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MainWidget.UW-MainWidget_C.ShowDeathUserWidget");

	struct ShowDeathUserWidget_Params {
		struct FKillBroadcastUIInfo& Info;
	}; ShowDeathUserWidget_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Info = Params.Info;

}

// Function UW-MainWidget.UW-MainWidget_C.LevelUpEvent
inline void UUW-MainWidget_C::LevelUpEvent(struct FPerkUIInfo PerkInfo, int32_t CurrentLevel, enum class EPerkLevelUpType LevelUpType, struct FDisplayAbility DisplayAbility, int32_t LastLevel) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MainWidget.UW-MainWidget_C.LevelUpEvent");

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

// Function UW-MainWidget.UW-MainWidget_C.OnChangedToggleType
inline void UUW-MainWidget_C::OnChangedToggleType(enum class EToggleWidgetModeType PreType, enum class EToggleWidgetModeType CurrentType) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MainWidget.UW-MainWidget_C.OnChangedToggleType");

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

// Function UW-MainWidget.UW-MainWidget_C.HideHUDMessage
inline void UUW-MainWidget_C::HideHUDMessage(enum class EHUDMessageType MessageType) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MainWidget.UW-MainWidget_C.HideHUDMessage");

	struct HideHUDMessage_Params {
		enum class EHUDMessageType MessageType;
	}; HideHUDMessage_Params Params;

	Params.MessageType = MessageType;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MainWidget.UW-MainWidget_C.AddCoreInfoSmartping
inline void UUW-MainWidget_C::AddCoreInfoSmartping(struct ABravoHotelPlayerState PlayerState) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MainWidget.UW-MainWidget_C.AddCoreInfoSmartping");

	struct AddCoreInfoSmartping_Params {
		struct ABravoHotelPlayerState PlayerState;
	}; AddCoreInfoSmartping_Params Params;

	Params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MainWidget.UW-MainWidget_C.AddCoreInfoRouteping
inline void UUW-MainWidget_C::AddCoreInfoRouteping(struct ABravoHotelPlayerState PlayerState) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MainWidget.UW-MainWidget_C.AddCoreInfoRouteping");

	struct AddCoreInfoRouteping_Params {
		struct ABravoHotelPlayerState PlayerState;
	}; AddCoreInfoRouteping_Params Params;

	Params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MainWidget.UW-MainWidget_C.AddRequestMessage
inline void UUW-MainWidget_C::AddRequestMessage(struct ABravoHotelPlayerState PlayerState, struct FString Message) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MainWidget.UW-MainWidget_C.AddRequestMessage");

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

// Function UW-MainWidget.UW-MainWidget_C.AddCoreInfoRequestResuscitation
inline void UUW-MainWidget_C::AddCoreInfoRequestResuscitation(struct ABravoHotelPlayerState PlayerState) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MainWidget.UW-MainWidget_C.AddCoreInfoRequestResuscitation");

	struct AddCoreInfoRequestResuscitation_Params {
		struct ABravoHotelPlayerState PlayerState;
	}; AddCoreInfoRequestResuscitation_Params Params;

	Params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MainWidget.UW-MainWidget_C.ShowHUDMessage
inline void UUW-MainWidget_C::ShowHUDMessage(struct FBravoHotelHUDMessageRow MessageRow) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MainWidget.UW-MainWidget_C.ShowHUDMessage");

	struct ShowHUDMessage_Params {
		struct FBravoHotelHUDMessageRow MessageRow;
	}; ShowHUDMessage_Params Params;

	Params.MessageRow = MessageRow;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MainWidget.UW-MainWidget_C.OnAllLevelLoadedFirstTime
inline void UUW-MainWidget_C::OnAllLevelLoadedFirstTime() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MainWidget.UW-MainWidget_C.OnAllLevelLoadedFirstTime");

	struct OnAllLevelLoadedFirstTime_Params {
		
	}; OnAllLevelLoadedFirstTime_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MainWidget.UW-MainWidget_C.BPOnViewportSized
inline void UUW-MainWidget_C::BPOnViewportSized() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MainWidget.UW-MainWidget_C.BPOnViewportSized");

	struct BPOnViewportSized_Params {
		
	}; BPOnViewportSized_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MainWidget.UW-MainWidget_C.CheckVisiblilityPerkDeck_BP
inline void UUW-MainWidget_C::CheckVisiblilityPerkDeck_BP() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MainWidget.UW-MainWidget_C.CheckVisiblilityPerkDeck_BP");

	struct CheckVisiblilityPerkDeck_BP_Params {
		
	}; CheckVisiblilityPerkDeck_BP_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MainWidget.UW-MainWidget_C.ChangeMouseCursorWidget
inline void UUW-MainWidget_C::ChangeMouseCursorWidget() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MainWidget.UW-MainWidget_C.ChangeMouseCursorWidget");

	struct ChangeMouseCursorWidget_Params {
		
	}; ChangeMouseCursorWidget_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MainWidget.UW-MainWidget_C.ResetMouseCursorWidget
inline void UUW-MainWidget_C::ResetMouseCursorWidget() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MainWidget.UW-MainWidget_C.ResetMouseCursorWidget");

	struct ResetMouseCursorWidget_Params {
		
	}; ResetMouseCursorWidget_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MainWidget.UW-MainWidget_C.OnDoSkillBySkillMap
inline void UUW-MainWidget_C::OnDoSkillBySkillMap() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MainWidget.UW-MainWidget_C.OnDoSkillBySkillMap");

	struct OnDoSkillBySkillMap_Params {
		
	}; OnDoSkillBySkillMap_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MainWidget.UW-MainWidget_C.UpdateNitroBoomWidget
inline void UUW-MainWidget_C::UpdateNitroBoomWidget(struct FVector2D TargetPosition) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MainWidget.UW-MainWidget_C.UpdateNitroBoomWidget");

	struct UpdateNitroBoomWidget_Params {
		struct FVector2D TargetPosition;
	}; UpdateNitroBoomWidget_Params Params;

	Params.TargetPosition = TargetPosition;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MainWidget.UW-MainWidget_C.SetTeamSize
inline void UUW-MainWidget_C::SetTeamSize(int32_t Size) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MainWidget.UW-MainWidget_C.SetTeamSize");

	struct SetTeamSize_Params {
		int32_t Size;
	}; SetTeamSize_Params Params;

	Params.Size = Size;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MainWidget.UW-MainWidget_C.HideNitroBoomWidget
inline void UUW-MainWidget_C::HideNitroBoomWidget() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MainWidget.UW-MainWidget_C.HideNitroBoomWidget");

	struct HideNitroBoomWidget_Params {
		
	}; HideNitroBoomWidget_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MainWidget.UW-MainWidget_C.Timer_ShowProgressMessage
inline void UUW-MainWidget_C::Timer_ShowProgressMessage() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MainWidget.UW-MainWidget_C.Timer_ShowProgressMessage");

	struct Timer_ShowProgressMessage_Params {
		
	}; Timer_ShowProgressMessage_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MainWidget.UW-MainWidget_C.OnPhaseChanged1
inline void UUW-MainWidget_C::OnPhaseChanged1(int32_t PrevPhase, int32_t CurrentPhase) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MainWidget.UW-MainWidget_C.OnPhaseChanged1");

	struct OnPhaseChanged1_Params {
		int32_t PrevPhase;
		int32_t CurrentPhase;
	}; OnPhaseChanged1_Params Params;

	Params.PrevPhase = PrevPhase;
	Params.CurrentPhase = CurrentPhase;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MainWidget.UW-MainWidget_C.OnBlueZoneDelegate_Event_1
inline void UUW-MainWidget_C::OnBlueZoneDelegate_Event_1() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MainWidget.UW-MainWidget_C.OnBlueZoneDelegate_Event_1");

	struct OnBlueZoneDelegate_Event_1_Params {
		
	}; OnBlueZoneDelegate_Event_1_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MainWidget.UW-MainWidget_C.OnBlueZoneStateChanged_Event_1
inline void UUW-MainWidget_C::OnBlueZoneStateChanged_Event_1(enum class EBluseZoneState PrevState, enum class EBluseZoneState CurrentState) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MainWidget.UW-MainWidget_C.OnBlueZoneStateChanged_Event_1");

	struct OnBlueZoneStateChanged_Event_1_Params {
		enum class EBluseZoneState PrevState;
		enum class EBluseZoneState CurrentState;
	}; OnBlueZoneStateChanged_Event_1_Params Params;

	Params.PrevState = PrevState;
	Params.CurrentState = CurrentState;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MainWidget.UW-MainWidget_C.OnChangedPlayerInfos
inline void UUW-MainWidget_C::OnChangedPlayerInfos() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MainWidget.UW-MainWidget_C.OnChangedPlayerInfos");

	struct OnChangedPlayerInfos_Params {
		
	}; OnChangedPlayerInfos_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MainWidget.UW-MainWidget_C.UpdateChargeGauge
inline void UUW-MainWidget_C::UpdateChargeGauge(float MaxChargeValue, float CurrentChargeValue) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MainWidget.UW-MainWidget_C.UpdateChargeGauge");

	struct UpdateChargeGauge_Params {
		float MaxChargeValue;
		float CurrentChargeValue;
	}; UpdateChargeGauge_Params Params;

	Params.MaxChargeValue = MaxChargeValue;
	Params.CurrentChargeValue = CurrentChargeValue;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MainWidget.UW-MainWidget_C.RemoveChargeGauge
inline void UUW-MainWidget_C::RemoveChargeGauge() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MainWidget.UW-MainWidget_C.RemoveChargeGauge");

	struct RemoveChargeGauge_Params {
		
	}; RemoveChargeGauge_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MainWidget.UW-MainWidget_C.StopChargeGauge
inline void UUW-MainWidget_C::StopChargeGauge() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MainWidget.UW-MainWidget_C.StopChargeGauge");

	struct StopChargeGauge_Params {
		
	}; StopChargeGauge_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MainWidget.UW-MainWidget_C.OnRemoveChargeGauge
inline void UUW-MainWidget_C::OnRemoveChargeGauge() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MainWidget.UW-MainWidget_C.OnRemoveChargeGauge");

	struct OnRemoveChargeGauge_Params {
		
	}; OnRemoveChargeGauge_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MainWidget.UW-MainWidget_C.ShowAnim
inline void UUW-MainWidget_C::ShowAnim() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MainWidget.UW-MainWidget_C.ShowAnim");

	struct ShowAnim_Params {
		
	}; ShowAnim_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MainWidget.UW-MainWidget_C.HideAnim
inline void UUW-MainWidget_C::HideAnim() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MainWidget.UW-MainWidget_C.HideAnim");

	struct HideAnim_Params {
		
	}; HideAnim_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MainWidget.UW-MainWidget_C.ShowStatupAnim
inline void UUW-MainWidget_C::ShowStatupAnim(struct FStatupAnimParameters& StatupParameters) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MainWidget.UW-MainWidget_C.ShowStatupAnim");

	struct ShowStatupAnim_Params {
		struct FStatupAnimParameters& StatupParameters;
	}; ShowStatupAnim_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	StatupParameters = Params.StatupParameters;

}

// Function UW-MainWidget.UW-MainWidget_C.K2_UpdateAllInvalidationbox
inline void UUW-MainWidget_C::K2_UpdateAllInvalidationbox() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MainWidget.UW-MainWidget_C.K2_UpdateAllInvalidationbox");

	struct K2_UpdateAllInvalidationbox_Params {
		
	}; K2_UpdateAllInvalidationbox_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MainWidget.UW-MainWidget_C.ExecuteUbergraph_UW-MainWidget
inline void UUW-MainWidget_C::ExecuteUbergraph_UW-MainWidget(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MainWidget.UW-MainWidget_C.ExecuteUbergraph_UW-MainWidget");

	struct ExecuteUbergraph_UW-MainWidget_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_UW-MainWidget_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

