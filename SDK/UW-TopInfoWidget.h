// WidgetBlueprintGeneratedClass UW-TopInfoWidget.UW-TopInfoWidget_C
class UUW-TopInfoWidget_C : public UBravoHotelTopInfoWidget {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x278 (8)
	struct UWidgetAnimation Anim_HideWidget; // 0x280 (8)
	struct UCanvasPanel Canvas; // 0x288 (8)
	struct UCanvasPanel Canvas_Minimap; // 0x290 (8)
	struct UCanvasPanel CanvasPanel_StatupFirst; // 0x298 (8)
	struct UCanvasPanel CanvasPanel_StatupThird; // 0x2A0 (8)
	struct UTextBlock T_GameVersion; // 0x2A8 (8)
	struct UUW-CastingWidget_C UW-CastingWidget; // 0x2B0 (8)
	struct UUW-HUDMessageWidget_C UW-HUDMessageWidget; // 0x2B8 (8)
	struct UUW-Inventory_Perk_C UW-Inventory_Perk; // 0x2C0 (8)
	struct UUW-ListWidget_C UW-ListWidget_DamageLog; // 0x2C8 (8)
	struct UUW-ListWidget_C UW-ListWidget_GainPerk; // 0x2D0 (8)
	struct UUW-ListWidget_C UW-ListWidget_KillMessage; // 0x2D8 (8)
	struct UUW-MinimapWidget_C UW-MinimapWidget; // 0x2E0 (8)
	struct UUW-PlayerInfoWidget_Renew_C UW-PlayerInfoWidget_02; // 0x2E8 (8)
	struct UUW-StatupWidget_C UW-StatupWidget; // 0x2F0 (8)
	struct UUW-TeamInfoWidget_C UW-TeamInfoWidget; // 0x2F8 (8)
	struct UUW-Volume_C UW-Volume; // 0x300 (8)
	struct UVerticalBox Vertical_MinimapAndTeamInfo; // 0x308 (8)
	struct ABravoHotelPlayerController PlayerController; // 0x310 (8)
	struct UUW-Inventory_ItemSlotHover_C UW-Inventory_ItemSlotHover; // 0x318 (8)
	struct UBravoHotelMainWidget MainWidget; // 0x320 (8)
	enum class EPlayerState CurrentState; // 0x328 (1)
	struct FDisplayAbility LastDisplayAbility; // 0x32C (12)

	void ShowStatupAnim(struct FStatupAnimParameters& StatupParams); // Function UW-TopInfoWidget.UW-TopInfoWidget_C.ShowStatupAnim(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void CheckStatupAnim(struct FDisplayAbility& DisplayAbility); // Function UW-TopInfoWidget.UW-TopInfoWidget_C.CheckStatupAnim(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void OnShowNotRecorverHPMessage(char Type, int32_t ItemId); // Function UW-TopInfoWidget.UW-TopInfoWidget_C.OnShowNotRecorverHPMessage(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void On Battle Royale State Changed(enum class EBattleRoyaleState PreviousState, enum class EBattleRoyaleState CurrentState); // Function UW-TopInfoWidget.UW-TopInfoWidget_C.On Battle Royale State Changed(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void ShowAmmoReloadedMessage(int32_t ReloadedAmmoCount); // Function UW-TopInfoWidget.UW-TopInfoWidget_C.ShowAmmoReloadedMessage(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void ShowProgressMessage(int32_t Type, int32_t Time); // Function UW-TopInfoWidget.UW-TopInfoWidget_C.ShowProgressMessage(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void ShowKillMessage(struct FText WeaponName, struct FText Victim, char HeadShot, char TeamKill); // Function UW-TopInfoWidget.UW-TopInfoWidget_C.ShowKillMessage(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void SetGameVersion(); // Function UW-TopInfoWidget.UW-TopInfoWidget_C.SetGameVersion(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void ChangeWidgetVisibleByToggleType(enum class EToggleWidgetModeType CurrentType); // Function UW-TopInfoWidget.UW-TopInfoWidget_C.ChangeWidgetVisibleByToggleType(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	struct UUserWidget GetSlotHoverWidget(); // Function UW-TopInfoWidget.UW-TopInfoWidget_C.GetSlotHoverWidget(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void ShowFireModeLog(enum class EWeaponFireMode Mode); // Function UW-TopInfoWidget.UW-TopInfoWidget_C.ShowFireModeLog(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void GetMainWidget(struct UBravoHotelMainWidget& MainWidget); // Function UW-TopInfoWidget.UW-TopInfoWidget_C.GetMainWidget(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void GetWearableLevels(int32_t& HelmetLevel, int32_t& ArmorLevel, int32_t& BagLevel); // Function UW-TopInfoWidget.UW-TopInfoWidget_C.GetWearableLevels(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void CreateHoverWidget(); // Function UW-TopInfoWidget.UW-TopInfoWidget_C.CreateHoverWidget(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void SetPerkInfo(); // Function UW-TopInfoWidget.UW-TopInfoWidget_C.SetPerkInfo(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	char OnDrop(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation Operation); // Function UW-TopInfoWidget.UW-TopInfoWidget_C.OnDrop(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	int32_t GetFinalAliveCount(int32_t AliveCount); // Function UW-TopInfoWidget.UW-TopInfoWidget_C.GetFinalAliveCount(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void Destruct(); // Function UW-TopInfoWidget.UW-TopInfoWidget_C.Destruct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void ResetPerkDeck(); // Function UW-TopInfoWidget.UW-TopInfoWidget_C.ResetPerkDeck(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void SetEnergy(float energy); // Function UW-TopInfoWidget.UW-TopInfoWidget_C.SetEnergy(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void ShowHealthRecovery(); // Function UW-TopInfoWidget.UW-TopInfoWidget_C.ShowHealthRecovery(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void HideHealthRecovery(); // Function UW-TopInfoWidget.UW-TopInfoWidget_C.HideHealthRecovery(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void ShowEnergyRecovery(); // Function UW-TopInfoWidget.UW-TopInfoWidget_C.ShowEnergyRecovery(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void HideEnergyRecovery(); // Function UW-TopInfoWidget.UW-TopInfoWidget_C.HideEnergyRecovery(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void SetArmorInfo(char bHasHelmet, float HelmetGauge, char bHasChest, float ChestGauge, char bHasBackpack, float BackpackGauge); // Function UW-TopInfoWidget.UW-TopInfoWidget_C.SetArmorInfo(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void ResetMyInfo(); // Function UW-TopInfoWidget.UW-TopInfoWidget_C.ResetMyInfo(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void ShowNotRecorverHPMessage(char Type, int32_t ItemId); // Function UW-TopInfoWidget.UW-TopInfoWidget_C.ShowNotRecorverHPMessage(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void SetCurrentWeaponFireMode(enum class EWeaponFireMode FireMode); // Function UW-TopInfoWidget.UW-TopInfoWidget_C.SetCurrentWeaponFireMode(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void ShowPerkDeck(); // Function UW-TopInfoWidget.UW-TopInfoWidget_C.ShowPerkDeck(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void HidePerkDeck(); // Function UW-TopInfoWidget.UW-TopInfoWidget_C.HidePerkDeck(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void PlayReadyGivePerk(); // Function UW-TopInfoWidget.UW-TopInfoWidget_C.PlayReadyGivePerk(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void PlayKillGivePerk(int32_t KillCount); // Function UW-TopInfoWidget.UW-TopInfoWidget_C.PlayKillGivePerk(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void OnChangedToggleType(enum class EToggleWidgetModeType PreType, enum class EToggleWidgetModeType CurrentType); // Function UW-TopInfoWidget.UW-TopInfoWidget_C.OnChangedToggleType(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void CheckVisibilityPerkDeck(); // Function UW-TopInfoWidget.UW-TopInfoWidget_C.CheckVisibilityPerkDeck(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void HideHUDMessage(enum class EHUDMessageType MessageType); // Function UW-TopInfoWidget.UW-TopInfoWidget_C.HideHUDMessage(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void AddKillMessage(struct FKillBroadcastUIInfo& Info); // Function UW-TopInfoWidget.UW-TopInfoWidget_C.AddKillMessage(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void ShowCastingUI(struct FCastingInfo& CastingInfo); // Function UW-TopInfoWidget.UW-TopInfoWidget_C.ShowCastingUI(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void HideCastingUI(); // Function UW-TopInfoWidget.UW-TopInfoWidget_C.HideCastingUI(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void Construct(); // Function UW-TopInfoWidget.UW-TopInfoWidget_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void OpenInventory(); // Function UW-TopInfoWidget.UW-TopInfoWidget_C.OpenInventory(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void CloseInventory(); // Function UW-TopInfoWidget.UW-TopInfoWidget_C.CloseInventory(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void PlayShowAnim(); // Function UW-TopInfoWidget.UW-TopInfoWidget_C.PlayShowAnim(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void PlayHideAnim(); // Function UW-TopInfoWidget.UW-TopInfoWidget_C.PlayHideAnim(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void OnChangedPlayerInfos(); // Function UW-TopInfoWidget.UW-TopInfoWidget_C.OnChangedPlayerInfos(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void ShowHUDMessage(struct FBravoHotelHUDMessageRow MessageRow); // Function UW-TopInfoWidget.UW-TopInfoWidget_C.ShowHUDMessage(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void K2_SetPerkInfo(); // Function UW-TopInfoWidget.UW-TopInfoWidget_C.K2_SetPerkInfo(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void ShowMyKillCountMessage(char bIsKill, struct FText& Message); // Function UW-TopInfoWidget.UW-TopInfoWidget_C.ShowMyKillCountMessage(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void ShowHitDamageLog(struct FHitDamageLogInfo& HitDamageLogInfo); // Function UW-TopInfoWidget.UW-TopInfoWidget_C.ShowHitDamageLog(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void LevelUpEvent(struct FPerkUIInfo PerkInfo, int32_t CurrentLevel, enum class EPerkLevelUpType LevelUpType, struct FDisplayAbility DisplayAbility, int32_t LastLevel); // Function UW-TopInfoWidget.UW-TopInfoWidget_C.LevelUpEvent(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void PreConstruct(char IsDesignTime); // Function UW-TopInfoWidget.UW-TopInfoWidget_C.PreConstruct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void ExecuteUbergraph_UW-TopInfoWidget(int32_t EntryPoint); // Function UW-TopInfoWidget.UW-TopInfoWidget_C.ExecuteUbergraph_UW-TopInfoWidget(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
};

// Function UW-TopInfoWidget.UW-TopInfoWidget_C.ShowStatupAnim
inline void UUW-TopInfoWidget_C::ShowStatupAnim(struct FStatupAnimParameters& StatupParams) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-TopInfoWidget.UW-TopInfoWidget_C.ShowStatupAnim");

	struct ShowStatupAnim_Params {
		struct FStatupAnimParameters& StatupParams;
	}; ShowStatupAnim_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	StatupParams = Params.StatupParams;

}

// Function UW-TopInfoWidget.UW-TopInfoWidget_C.CheckStatupAnim
inline void UUW-TopInfoWidget_C::CheckStatupAnim(struct FDisplayAbility& DisplayAbility) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-TopInfoWidget.UW-TopInfoWidget_C.CheckStatupAnim");

	struct CheckStatupAnim_Params {
		struct FDisplayAbility& DisplayAbility;
	}; CheckStatupAnim_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	DisplayAbility = Params.DisplayAbility;

}

// Function UW-TopInfoWidget.UW-TopInfoWidget_C.OnShowNotRecorverHPMessage
inline void UUW-TopInfoWidget_C::OnShowNotRecorverHPMessage(char Type, int32_t ItemId) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-TopInfoWidget.UW-TopInfoWidget_C.OnShowNotRecorverHPMessage");

	struct OnShowNotRecorverHPMessage_Params {
		char Type;
		int32_t ItemId;
	}; OnShowNotRecorverHPMessage_Params Params;

	Params.Type = Type;
	Params.ItemId = ItemId;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-TopInfoWidget.UW-TopInfoWidget_C.On Battle Royale State Changed
inline void UUW-TopInfoWidget_C::On Battle Royale State Changed(enum class EBattleRoyaleState PreviousState, enum class EBattleRoyaleState CurrentState) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-TopInfoWidget.UW-TopInfoWidget_C.On Battle Royale State Changed");

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

// Function UW-TopInfoWidget.UW-TopInfoWidget_C.ShowAmmoReloadedMessage
inline void UUW-TopInfoWidget_C::ShowAmmoReloadedMessage(int32_t ReloadedAmmoCount) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-TopInfoWidget.UW-TopInfoWidget_C.ShowAmmoReloadedMessage");

	struct ShowAmmoReloadedMessage_Params {
		int32_t ReloadedAmmoCount;
	}; ShowAmmoReloadedMessage_Params Params;

	Params.ReloadedAmmoCount = ReloadedAmmoCount;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-TopInfoWidget.UW-TopInfoWidget_C.ShowProgressMessage
inline void UUW-TopInfoWidget_C::ShowProgressMessage(int32_t Type, int32_t Time) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-TopInfoWidget.UW-TopInfoWidget_C.ShowProgressMessage");

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

// Function UW-TopInfoWidget.UW-TopInfoWidget_C.ShowKillMessage
inline void UUW-TopInfoWidget_C::ShowKillMessage(struct FText WeaponName, struct FText Victim, char HeadShot, char TeamKill) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-TopInfoWidget.UW-TopInfoWidget_C.ShowKillMessage");

	struct ShowKillMessage_Params {
		struct FText WeaponName;
		struct FText Victim;
		char HeadShot;
		char TeamKill;
	}; ShowKillMessage_Params Params;

	Params.WeaponName = WeaponName;
	Params.Victim = Victim;
	Params.HeadShot = HeadShot;
	Params.TeamKill = TeamKill;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-TopInfoWidget.UW-TopInfoWidget_C.SetGameVersion
inline void UUW-TopInfoWidget_C::SetGameVersion() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-TopInfoWidget.UW-TopInfoWidget_C.SetGameVersion");

	struct SetGameVersion_Params {
		
	}; SetGameVersion_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-TopInfoWidget.UW-TopInfoWidget_C.ChangeWidgetVisibleByToggleType
inline void UUW-TopInfoWidget_C::ChangeWidgetVisibleByToggleType(enum class EToggleWidgetModeType CurrentType) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-TopInfoWidget.UW-TopInfoWidget_C.ChangeWidgetVisibleByToggleType");

	struct ChangeWidgetVisibleByToggleType_Params {
		enum class EToggleWidgetModeType CurrentType;
	}; ChangeWidgetVisibleByToggleType_Params Params;

	Params.CurrentType = CurrentType;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-TopInfoWidget.UW-TopInfoWidget_C.GetSlotHoverWidget
inline struct UUserWidget UUW-TopInfoWidget_C::GetSlotHoverWidget() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-TopInfoWidget.UW-TopInfoWidget_C.GetSlotHoverWidget");

	struct GetSlotHoverWidget_Params {
		
		struct UUserWidget ReturnValue;

	}; GetSlotHoverWidget_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UW-TopInfoWidget.UW-TopInfoWidget_C.ShowFireModeLog
inline void UUW-TopInfoWidget_C::ShowFireModeLog(enum class EWeaponFireMode Mode) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-TopInfoWidget.UW-TopInfoWidget_C.ShowFireModeLog");

	struct ShowFireModeLog_Params {
		enum class EWeaponFireMode Mode;
	}; ShowFireModeLog_Params Params;

	Params.Mode = Mode;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-TopInfoWidget.UW-TopInfoWidget_C.GetMainWidget
inline void UUW-TopInfoWidget_C::GetMainWidget(struct UBravoHotelMainWidget& MainWidget) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-TopInfoWidget.UW-TopInfoWidget_C.GetMainWidget");

	struct GetMainWidget_Params {
		struct UBravoHotelMainWidget& MainWidget;
	}; GetMainWidget_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	MainWidget = Params.MainWidget;

}

// Function UW-TopInfoWidget.UW-TopInfoWidget_C.GetWearableLevels
inline void UUW-TopInfoWidget_C::GetWearableLevels(int32_t& HelmetLevel, int32_t& ArmorLevel, int32_t& BagLevel) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-TopInfoWidget.UW-TopInfoWidget_C.GetWearableLevels");

	struct GetWearableLevels_Params {
		int32_t& HelmetLevel;
		int32_t& ArmorLevel;
		int32_t& BagLevel;
	}; GetWearableLevels_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	HelmetLevel = Params.HelmetLevel;
	ArmorLevel = Params.ArmorLevel;
	BagLevel = Params.BagLevel;

}

// Function UW-TopInfoWidget.UW-TopInfoWidget_C.CreateHoverWidget
inline void UUW-TopInfoWidget_C::CreateHoverWidget() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-TopInfoWidget.UW-TopInfoWidget_C.CreateHoverWidget");

	struct CreateHoverWidget_Params {
		
	}; CreateHoverWidget_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-TopInfoWidget.UW-TopInfoWidget_C.SetPerkInfo
inline void UUW-TopInfoWidget_C::SetPerkInfo() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-TopInfoWidget.UW-TopInfoWidget_C.SetPerkInfo");

	struct SetPerkInfo_Params {
		
	}; SetPerkInfo_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-TopInfoWidget.UW-TopInfoWidget_C.OnDrop
inline char UUW-TopInfoWidget_C::OnDrop(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation Operation) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-TopInfoWidget.UW-TopInfoWidget_C.OnDrop");

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

// Function UW-TopInfoWidget.UW-TopInfoWidget_C.GetFinalAliveCount
inline int32_t UUW-TopInfoWidget_C::GetFinalAliveCount(int32_t AliveCount) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-TopInfoWidget.UW-TopInfoWidget_C.GetFinalAliveCount");

	struct GetFinalAliveCount_Params {
		int32_t AliveCount;
		int32_t ReturnValue;

	}; GetFinalAliveCount_Params Params;

	Params.AliveCount = AliveCount;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UW-TopInfoWidget.UW-TopInfoWidget_C.Destruct
inline void UUW-TopInfoWidget_C::Destruct() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-TopInfoWidget.UW-TopInfoWidget_C.Destruct");

	struct Destruct_Params {
		
	}; Destruct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-TopInfoWidget.UW-TopInfoWidget_C.ResetPerkDeck
inline void UUW-TopInfoWidget_C::ResetPerkDeck() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-TopInfoWidget.UW-TopInfoWidget_C.ResetPerkDeck");

	struct ResetPerkDeck_Params {
		
	}; ResetPerkDeck_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-TopInfoWidget.UW-TopInfoWidget_C.SetEnergy
inline void UUW-TopInfoWidget_C::SetEnergy(float energy) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-TopInfoWidget.UW-TopInfoWidget_C.SetEnergy");

	struct SetEnergy_Params {
		float energy;
	}; SetEnergy_Params Params;

	Params.energy = energy;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-TopInfoWidget.UW-TopInfoWidget_C.ShowHealthRecovery
inline void UUW-TopInfoWidget_C::ShowHealthRecovery() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-TopInfoWidget.UW-TopInfoWidget_C.ShowHealthRecovery");

	struct ShowHealthRecovery_Params {
		
	}; ShowHealthRecovery_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-TopInfoWidget.UW-TopInfoWidget_C.HideHealthRecovery
inline void UUW-TopInfoWidget_C::HideHealthRecovery() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-TopInfoWidget.UW-TopInfoWidget_C.HideHealthRecovery");

	struct HideHealthRecovery_Params {
		
	}; HideHealthRecovery_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-TopInfoWidget.UW-TopInfoWidget_C.ShowEnergyRecovery
inline void UUW-TopInfoWidget_C::ShowEnergyRecovery() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-TopInfoWidget.UW-TopInfoWidget_C.ShowEnergyRecovery");

	struct ShowEnergyRecovery_Params {
		
	}; ShowEnergyRecovery_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-TopInfoWidget.UW-TopInfoWidget_C.HideEnergyRecovery
inline void UUW-TopInfoWidget_C::HideEnergyRecovery() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-TopInfoWidget.UW-TopInfoWidget_C.HideEnergyRecovery");

	struct HideEnergyRecovery_Params {
		
	}; HideEnergyRecovery_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-TopInfoWidget.UW-TopInfoWidget_C.SetArmorInfo
inline void UUW-TopInfoWidget_C::SetArmorInfo(char bHasHelmet, float HelmetGauge, char bHasChest, float ChestGauge, char bHasBackpack, float BackpackGauge) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-TopInfoWidget.UW-TopInfoWidget_C.SetArmorInfo");

	struct SetArmorInfo_Params {
		char bHasHelmet;
		float HelmetGauge;
		char bHasChest;
		float ChestGauge;
		char bHasBackpack;
		float BackpackGauge;
	}; SetArmorInfo_Params Params;

	Params.bHasHelmet = bHasHelmet;
	Params.HelmetGauge = HelmetGauge;
	Params.bHasChest = bHasChest;
	Params.ChestGauge = ChestGauge;
	Params.bHasBackpack = bHasBackpack;
	Params.BackpackGauge = BackpackGauge;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-TopInfoWidget.UW-TopInfoWidget_C.ResetMyInfo
inline void UUW-TopInfoWidget_C::ResetMyInfo() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-TopInfoWidget.UW-TopInfoWidget_C.ResetMyInfo");

	struct ResetMyInfo_Params {
		
	}; ResetMyInfo_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-TopInfoWidget.UW-TopInfoWidget_C.ShowNotRecorverHPMessage
inline void UUW-TopInfoWidget_C::ShowNotRecorverHPMessage(char Type, int32_t ItemId) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-TopInfoWidget.UW-TopInfoWidget_C.ShowNotRecorverHPMessage");

	struct ShowNotRecorverHPMessage_Params {
		char Type;
		int32_t ItemId;
	}; ShowNotRecorverHPMessage_Params Params;

	Params.Type = Type;
	Params.ItemId = ItemId;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-TopInfoWidget.UW-TopInfoWidget_C.SetCurrentWeaponFireMode
inline void UUW-TopInfoWidget_C::SetCurrentWeaponFireMode(enum class EWeaponFireMode FireMode) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-TopInfoWidget.UW-TopInfoWidget_C.SetCurrentWeaponFireMode");

	struct SetCurrentWeaponFireMode_Params {
		enum class EWeaponFireMode FireMode;
	}; SetCurrentWeaponFireMode_Params Params;

	Params.FireMode = FireMode;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-TopInfoWidget.UW-TopInfoWidget_C.ShowPerkDeck
inline void UUW-TopInfoWidget_C::ShowPerkDeck() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-TopInfoWidget.UW-TopInfoWidget_C.ShowPerkDeck");

	struct ShowPerkDeck_Params {
		
	}; ShowPerkDeck_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-TopInfoWidget.UW-TopInfoWidget_C.HidePerkDeck
inline void UUW-TopInfoWidget_C::HidePerkDeck() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-TopInfoWidget.UW-TopInfoWidget_C.HidePerkDeck");

	struct HidePerkDeck_Params {
		
	}; HidePerkDeck_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-TopInfoWidget.UW-TopInfoWidget_C.PlayReadyGivePerk
inline void UUW-TopInfoWidget_C::PlayReadyGivePerk() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-TopInfoWidget.UW-TopInfoWidget_C.PlayReadyGivePerk");

	struct PlayReadyGivePerk_Params {
		
	}; PlayReadyGivePerk_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-TopInfoWidget.UW-TopInfoWidget_C.PlayKillGivePerk
inline void UUW-TopInfoWidget_C::PlayKillGivePerk(int32_t KillCount) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-TopInfoWidget.UW-TopInfoWidget_C.PlayKillGivePerk");

	struct PlayKillGivePerk_Params {
		int32_t KillCount;
	}; PlayKillGivePerk_Params Params;

	Params.KillCount = KillCount;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-TopInfoWidget.UW-TopInfoWidget_C.OnChangedToggleType
inline void UUW-TopInfoWidget_C::OnChangedToggleType(enum class EToggleWidgetModeType PreType, enum class EToggleWidgetModeType CurrentType) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-TopInfoWidget.UW-TopInfoWidget_C.OnChangedToggleType");

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

// Function UW-TopInfoWidget.UW-TopInfoWidget_C.CheckVisibilityPerkDeck
inline void UUW-TopInfoWidget_C::CheckVisibilityPerkDeck() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-TopInfoWidget.UW-TopInfoWidget_C.CheckVisibilityPerkDeck");

	struct CheckVisibilityPerkDeck_Params {
		
	}; CheckVisibilityPerkDeck_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-TopInfoWidget.UW-TopInfoWidget_C.HideHUDMessage
inline void UUW-TopInfoWidget_C::HideHUDMessage(enum class EHUDMessageType MessageType) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-TopInfoWidget.UW-TopInfoWidget_C.HideHUDMessage");

	struct HideHUDMessage_Params {
		enum class EHUDMessageType MessageType;
	}; HideHUDMessage_Params Params;

	Params.MessageType = MessageType;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-TopInfoWidget.UW-TopInfoWidget_C.AddKillMessage
inline void UUW-TopInfoWidget_C::AddKillMessage(struct FKillBroadcastUIInfo& Info) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-TopInfoWidget.UW-TopInfoWidget_C.AddKillMessage");

	struct AddKillMessage_Params {
		struct FKillBroadcastUIInfo& Info;
	}; AddKillMessage_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Info = Params.Info;

}

// Function UW-TopInfoWidget.UW-TopInfoWidget_C.ShowCastingUI
inline void UUW-TopInfoWidget_C::ShowCastingUI(struct FCastingInfo& CastingInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-TopInfoWidget.UW-TopInfoWidget_C.ShowCastingUI");

	struct ShowCastingUI_Params {
		struct FCastingInfo& CastingInfo;
	}; ShowCastingUI_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	CastingInfo = Params.CastingInfo;

}

// Function UW-TopInfoWidget.UW-TopInfoWidget_C.HideCastingUI
inline void UUW-TopInfoWidget_C::HideCastingUI() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-TopInfoWidget.UW-TopInfoWidget_C.HideCastingUI");

	struct HideCastingUI_Params {
		
	}; HideCastingUI_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-TopInfoWidget.UW-TopInfoWidget_C.Construct
inline void UUW-TopInfoWidget_C::Construct() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-TopInfoWidget.UW-TopInfoWidget_C.Construct");

	struct Construct_Params {
		
	}; Construct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-TopInfoWidget.UW-TopInfoWidget_C.OpenInventory
inline void UUW-TopInfoWidget_C::OpenInventory() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-TopInfoWidget.UW-TopInfoWidget_C.OpenInventory");

	struct OpenInventory_Params {
		
	}; OpenInventory_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-TopInfoWidget.UW-TopInfoWidget_C.CloseInventory
inline void UUW-TopInfoWidget_C::CloseInventory() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-TopInfoWidget.UW-TopInfoWidget_C.CloseInventory");

	struct CloseInventory_Params {
		
	}; CloseInventory_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-TopInfoWidget.UW-TopInfoWidget_C.PlayShowAnim
inline void UUW-TopInfoWidget_C::PlayShowAnim() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-TopInfoWidget.UW-TopInfoWidget_C.PlayShowAnim");

	struct PlayShowAnim_Params {
		
	}; PlayShowAnim_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-TopInfoWidget.UW-TopInfoWidget_C.PlayHideAnim
inline void UUW-TopInfoWidget_C::PlayHideAnim() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-TopInfoWidget.UW-TopInfoWidget_C.PlayHideAnim");

	struct PlayHideAnim_Params {
		
	}; PlayHideAnim_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-TopInfoWidget.UW-TopInfoWidget_C.OnChangedPlayerInfos
inline void UUW-TopInfoWidget_C::OnChangedPlayerInfos() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-TopInfoWidget.UW-TopInfoWidget_C.OnChangedPlayerInfos");

	struct OnChangedPlayerInfos_Params {
		
	}; OnChangedPlayerInfos_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-TopInfoWidget.UW-TopInfoWidget_C.ShowHUDMessage
inline void UUW-TopInfoWidget_C::ShowHUDMessage(struct FBravoHotelHUDMessageRow MessageRow) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-TopInfoWidget.UW-TopInfoWidget_C.ShowHUDMessage");

	struct ShowHUDMessage_Params {
		struct FBravoHotelHUDMessageRow MessageRow;
	}; ShowHUDMessage_Params Params;

	Params.MessageRow = MessageRow;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-TopInfoWidget.UW-TopInfoWidget_C.K2_SetPerkInfo
inline void UUW-TopInfoWidget_C::K2_SetPerkInfo() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-TopInfoWidget.UW-TopInfoWidget_C.K2_SetPerkInfo");

	struct K2_SetPerkInfo_Params {
		
	}; K2_SetPerkInfo_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-TopInfoWidget.UW-TopInfoWidget_C.ShowMyKillCountMessage
inline void UUW-TopInfoWidget_C::ShowMyKillCountMessage(char bIsKill, struct FText& Message) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-TopInfoWidget.UW-TopInfoWidget_C.ShowMyKillCountMessage");

	struct ShowMyKillCountMessage_Params {
		char bIsKill;
		struct FText& Message;
	}; ShowMyKillCountMessage_Params Params;

	Params.bIsKill = bIsKill;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Message = Params.Message;

}

// Function UW-TopInfoWidget.UW-TopInfoWidget_C.ShowHitDamageLog
inline void UUW-TopInfoWidget_C::ShowHitDamageLog(struct FHitDamageLogInfo& HitDamageLogInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-TopInfoWidget.UW-TopInfoWidget_C.ShowHitDamageLog");

	struct ShowHitDamageLog_Params {
		struct FHitDamageLogInfo& HitDamageLogInfo;
	}; ShowHitDamageLog_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	HitDamageLogInfo = Params.HitDamageLogInfo;

}

// Function UW-TopInfoWidget.UW-TopInfoWidget_C.LevelUpEvent
inline void UUW-TopInfoWidget_C::LevelUpEvent(struct FPerkUIInfo PerkInfo, int32_t CurrentLevel, enum class EPerkLevelUpType LevelUpType, struct FDisplayAbility DisplayAbility, int32_t LastLevel) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-TopInfoWidget.UW-TopInfoWidget_C.LevelUpEvent");

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

// Function UW-TopInfoWidget.UW-TopInfoWidget_C.PreConstruct
inline void UUW-TopInfoWidget_C::PreConstruct(char IsDesignTime) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-TopInfoWidget.UW-TopInfoWidget_C.PreConstruct");

	struct PreConstruct_Params {
		char IsDesignTime;
	}; PreConstruct_Params Params;

	Params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-TopInfoWidget.UW-TopInfoWidget_C.ExecuteUbergraph_UW-TopInfoWidget
inline void UUW-TopInfoWidget_C::ExecuteUbergraph_UW-TopInfoWidget(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-TopInfoWidget.UW-TopInfoWidget_C.ExecuteUbergraph_UW-TopInfoWidget");

	struct ExecuteUbergraph_UW-TopInfoWidget_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_UW-TopInfoWidget_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

