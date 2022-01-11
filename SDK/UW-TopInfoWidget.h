// WidgetBlueprintGeneratedClass UW-TopInfoWidget.UW-TopInfoWidget_C
class UUW-TopInfoWidget_C : public UBravoHotelTopInfoWidget {

public:

	struct Unknown UberGraphFrame; // 0x278 (8)
	struct Unknown Anim_HideWidget; // 0x280 (8)
	struct Unknown Canvas; // 0x288 (8)
	struct Unknown Canvas_Minimap; // 0x290 (8)
	struct Unknown CanvasPanel_StatupFirst; // 0x298 (8)
	struct Unknown CanvasPanel_StatupThird; // 0x2A0 (8)
	struct Unknown T_GameVersion; // 0x2A8 (8)
	struct Unknown UW-CastingWidget; // 0x2B0 (8)
	struct Unknown UW-DamageLogWidget; // 0x2B8 (8)
	struct Unknown UW-HUDMessageWidget; // 0x2C0 (8)
	struct Unknown UW-Inventory_Perk; // 0x2C8 (8)
	struct Unknown UW-KillInfoWidget; // 0x2D0 (8)
	struct Unknown UW-MinimapWidget; // 0x2D8 (8)
	struct Unknown UW-PlayerInfoWidget_02; // 0x2E0 (8)
	struct Unknown UW-StatupWidget; // 0x2E8 (8)
	struct Unknown UW-TeamInfoWidget; // 0x2F0 (8)
	struct Unknown UW-Volume; // 0x2F8 (8)
	struct Unknown Vertical_MinimapAndTeamInfo; // 0x300 (8)
	struct Unknown PlayerController; // 0x308 (8)
	struct Unknown UW-Inventory_ItemSlotHover; // 0x310 (8)
	struct Unknown MainWidget; // 0x318 (8)
	enum class Unknow CurrentState; // 0x320 (1)
	struct Unknown LastDisplayAbility; // 0x324 (12)

	void ShowStatupAnim(struct Unknown& StatupParams); // Function UW-TopInfoWidget.UW-TopInfoWidget_C.ShowStatupAnim(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void CheckStatupAnim(struct Unknown& DisplayAbility); // Function UW-TopInfoWidget.UW-TopInfoWidget_C.CheckStatupAnim(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void OnShowNotRecorverHPMessage(char Type, int32_t ItemId); // Function UW-TopInfoWidget.UW-TopInfoWidget_C.OnShowNotRecorverHPMessage(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void On Battle Royale State Changed(enum class Unknow PreviousState, enum class Unknow CurrentState); // Function UW-TopInfoWidget.UW-TopInfoWidget_C.On Battle Royale State Changed(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void ShowAmmoReloadedMessage(int32_t ReloadedAmmoCount); // Function UW-TopInfoWidget.UW-TopInfoWidget_C.ShowAmmoReloadedMessage(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void ShowProgressMessage(int32_t Type, int32_t Time); // Function UW-TopInfoWidget.UW-TopInfoWidget_C.ShowProgressMessage(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void ShowKillMessage(struct FText WeaponName, struct FText Victim, char HeadShot, char TeamKill); // Function UW-TopInfoWidget.UW-TopInfoWidget_C.ShowKillMessage(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void SetGameVersion(); // Function UW-TopInfoWidget.UW-TopInfoWidget_C.SetGameVersion(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void ChangeWidgetVisibleByToggleType(enum class Unknow CurrentType); // Function UW-TopInfoWidget.UW-TopInfoWidget_C.ChangeWidgetVisibleByToggleType(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	struct Unknown GetSlotHoverWidget(); // Function UW-TopInfoWidget.UW-TopInfoWidget_C.GetSlotHoverWidget(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void ShowFireModeLog(enum class Unknow Mode); // Function UW-TopInfoWidget.UW-TopInfoWidget_C.ShowFireModeLog(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void GetMainWidget(struct Unknown& MainWidget); // Function UW-TopInfoWidget.UW-TopInfoWidget_C.GetMainWidget(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <Game_BE.exe+0x2B80160>
	void GetWearableLevels(int32_t& HelmetLevel, int32_t& ArmorLevel, int32_t& BagLevel); // Function UW-TopInfoWidget.UW-TopInfoWidget_C.GetWearableLevels(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void CreateHoverWidget(); // Function UW-TopInfoWidget.UW-TopInfoWidget_C.CreateHoverWidget(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void SetPerkInfo(); // Function UW-TopInfoWidget.UW-TopInfoWidget_C.SetPerkInfo(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	char OnDrop(struct Unknown MyGeometry, struct Unknown PointerEvent, struct Unknown Operation); // Function UW-TopInfoWidget.UW-TopInfoWidget_C.OnDrop(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	int32_t GetFinalAliveCount(int32_t AliveCount); // Function UW-TopInfoWidget.UW-TopInfoWidget_C.GetFinalAliveCount(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <Game_BE.exe+0x2B80160>
	void Destruct(); // Function UW-TopInfoWidget.UW-TopInfoWidget_C.Destruct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void ResetPerkDeck(); // Function UW-TopInfoWidget.UW-TopInfoWidget_C.ResetPerkDeck(Event|Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void SetEnergy(float energy); // Function UW-TopInfoWidget.UW-TopInfoWidget_C.SetEnergy(Event|Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void ShowHealthRecovery(); // Function UW-TopInfoWidget.UW-TopInfoWidget_C.ShowHealthRecovery(Event|Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void HideHealthRecovery(); // Function UW-TopInfoWidget.UW-TopInfoWidget_C.HideHealthRecovery(Event|Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void ShowEnergyRecovery(); // Function UW-TopInfoWidget.UW-TopInfoWidget_C.ShowEnergyRecovery(Event|Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void HideEnergyRecovery(); // Function UW-TopInfoWidget.UW-TopInfoWidget_C.HideEnergyRecovery(Event|Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void SetArmorInfo(char bHasHelmet, float HelmetGauge, char bHasChest, float ChestGauge, char bHasBackpack, float BackpackGauge); // Function UW-TopInfoWidget.UW-TopInfoWidget_C.SetArmorInfo(Event|Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void ResetMyInfo(); // Function UW-TopInfoWidget.UW-TopInfoWidget_C.ResetMyInfo(Event|Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void ShowNotRecorverHPMessage(char Type, int32_t ItemId); // Function UW-TopInfoWidget.UW-TopInfoWidget_C.ShowNotRecorverHPMessage(Event|Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void SetCurrentWeaponFireMode(enum class Unknow FireMode); // Function UW-TopInfoWidget.UW-TopInfoWidget_C.SetCurrentWeaponFireMode(Event|Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void ShowPerkDeck(); // Function UW-TopInfoWidget.UW-TopInfoWidget_C.ShowPerkDeck(Event|Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void HidePerkDeck(); // Function UW-TopInfoWidget.UW-TopInfoWidget_C.HidePerkDeck(Event|Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void PlayReadyGivePerk(); // Function UW-TopInfoWidget.UW-TopInfoWidget_C.PlayReadyGivePerk(Event|Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void PlayKillGivePerk(int32_t KillCount); // Function UW-TopInfoWidget.UW-TopInfoWidget_C.PlayKillGivePerk(Event|Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void OnChangedToggleType(enum class Unknow PreType, enum class Unknow CurrentType); // Function UW-TopInfoWidget.UW-TopInfoWidget_C.OnChangedToggleType(Event|Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void CheckVisibilityPerkDeck(); // Function UW-TopInfoWidget.UW-TopInfoWidget_C.CheckVisibilityPerkDeck(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void HideHUDMessage(enum class Unknow MessageType); // Function UW-TopInfoWidget.UW-TopInfoWidget_C.HideHUDMessage(Event|Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void AddKillMessage(struct Unknown& Info); // Function UW-TopInfoWidget.UW-TopInfoWidget_C.AddKillMessage(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void ShowCastingUI(struct Unknown& CastingInfo); // Function UW-TopInfoWidget.UW-TopInfoWidget_C.ShowCastingUI(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void HideCastingUI(); // Function UW-TopInfoWidget.UW-TopInfoWidget_C.HideCastingUI(Event|Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void Construct(); // Function UW-TopInfoWidget.UW-TopInfoWidget_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void OpenInventory(); // Function UW-TopInfoWidget.UW-TopInfoWidget_C.OpenInventory(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void CloseInventory(); // Function UW-TopInfoWidget.UW-TopInfoWidget_C.CloseInventory(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void PlayShowAnim(); // Function UW-TopInfoWidget.UW-TopInfoWidget_C.PlayShowAnim(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void PlayHideAnim(); // Function UW-TopInfoWidget.UW-TopInfoWidget_C.PlayHideAnim(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void OnChangedPlayerInfos(); // Function UW-TopInfoWidget.UW-TopInfoWidget_C.OnChangedPlayerInfos(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void ShowHUDMessage(struct Unknown MessageRow); // Function UW-TopInfoWidget.UW-TopInfoWidget_C.ShowHUDMessage(Event|Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void K2_SetPerkInfo(); // Function UW-TopInfoWidget.UW-TopInfoWidget_C.K2_SetPerkInfo(Event|Protected|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void ShowMyKillCountMessage(char bIsKill, struct FText& Message); // Function UW-TopInfoWidget.UW-TopInfoWidget_C.ShowMyKillCountMessage(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void ShowHitDamageLog(struct Unknown& HitDamageLogInfo); // Function UW-TopInfoWidget.UW-TopInfoWidget_C.ShowHitDamageLog(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void LevelUpEvent(struct Unknown PerkInfo, int32_t CurrentLevel, enum class Unknow LevelUpType, struct Unknown DisplayAbility, int32_t LastLevel); // Function UW-TopInfoWidget.UW-TopInfoWidget_C.LevelUpEvent(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void PreConstruct(char IsDesignTime); // Function UW-TopInfoWidget.UW-TopInfoWidget_C.PreConstruct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void ExecuteUbergraph_UW-TopInfoWidget(int32_t EntryPoint); // Function UW-TopInfoWidget.UW-TopInfoWidget_C.ExecuteUbergraph_UW-TopInfoWidget(Final|UbergraphFunction|HasDefaults) // <Game_BE.exe+0x2B80160>
};

// Function UW-TopInfoWidget.UW-TopInfoWidget_C.ShowStatupAnim
inline void UUW-TopInfoWidget_C::ShowStatupAnim(struct Unknown& StatupParams) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-TopInfoWidget.UW-TopInfoWidget_C.ShowStatupAnim");

	struct ShowStatupAnim_Params {
		struct Unknown& StatupParams;
	}; ShowStatupAnim_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	StatupParams = Params.StatupParams;

}

// Function UW-TopInfoWidget.UW-TopInfoWidget_C.CheckStatupAnim
inline void UUW-TopInfoWidget_C::CheckStatupAnim(struct Unknown& DisplayAbility) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-TopInfoWidget.UW-TopInfoWidget_C.CheckStatupAnim");

	struct CheckStatupAnim_Params {
		struct Unknown& DisplayAbility;
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
inline void UUW-TopInfoWidget_C::On Battle Royale State Changed(enum class Unknow PreviousState, enum class Unknow CurrentState) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-TopInfoWidget.UW-TopInfoWidget_C.On Battle Royale State Changed");

	struct On Battle Royale State Changed_Params {
		enum class Unknow PreviousState;
		enum class Unknow CurrentState;
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
inline void UUW-TopInfoWidget_C::ChangeWidgetVisibleByToggleType(enum class Unknow CurrentType) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-TopInfoWidget.UW-TopInfoWidget_C.ChangeWidgetVisibleByToggleType");

	struct ChangeWidgetVisibleByToggleType_Params {
		enum class Unknow CurrentType;
	}; ChangeWidgetVisibleByToggleType_Params Params;

	Params.CurrentType = CurrentType;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-TopInfoWidget.UW-TopInfoWidget_C.GetSlotHoverWidget
inline struct Unknown UUW-TopInfoWidget_C::GetSlotHoverWidget() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-TopInfoWidget.UW-TopInfoWidget_C.GetSlotHoverWidget");

	struct GetSlotHoverWidget_Params {
		
		struct Unknown ReturnValue;

	}; GetSlotHoverWidget_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UW-TopInfoWidget.UW-TopInfoWidget_C.ShowFireModeLog
inline void UUW-TopInfoWidget_C::ShowFireModeLog(enum class Unknow Mode) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-TopInfoWidget.UW-TopInfoWidget_C.ShowFireModeLog");

	struct ShowFireModeLog_Params {
		enum class Unknow Mode;
	}; ShowFireModeLog_Params Params;

	Params.Mode = Mode;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-TopInfoWidget.UW-TopInfoWidget_C.GetMainWidget
inline void UUW-TopInfoWidget_C::GetMainWidget(struct Unknown& MainWidget) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-TopInfoWidget.UW-TopInfoWidget_C.GetMainWidget");

	struct GetMainWidget_Params {
		struct Unknown& MainWidget;
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
inline char UUW-TopInfoWidget_C::OnDrop(struct Unknown MyGeometry, struct Unknown PointerEvent, struct Unknown Operation) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-TopInfoWidget.UW-TopInfoWidget_C.OnDrop");

	struct OnDrop_Params {
		struct Unknown MyGeometry;
		struct Unknown PointerEvent;
		struct Unknown Operation;
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
inline void UUW-TopInfoWidget_C::SetCurrentWeaponFireMode(enum class Unknow FireMode) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-TopInfoWidget.UW-TopInfoWidget_C.SetCurrentWeaponFireMode");

	struct SetCurrentWeaponFireMode_Params {
		enum class Unknow FireMode;
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
inline void UUW-TopInfoWidget_C::OnChangedToggleType(enum class Unknow PreType, enum class Unknow CurrentType) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-TopInfoWidget.UW-TopInfoWidget_C.OnChangedToggleType");

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
inline void UUW-TopInfoWidget_C::HideHUDMessage(enum class Unknow MessageType) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-TopInfoWidget.UW-TopInfoWidget_C.HideHUDMessage");

	struct HideHUDMessage_Params {
		enum class Unknow MessageType;
	}; HideHUDMessage_Params Params;

	Params.MessageType = MessageType;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-TopInfoWidget.UW-TopInfoWidget_C.AddKillMessage
inline void UUW-TopInfoWidget_C::AddKillMessage(struct Unknown& Info) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-TopInfoWidget.UW-TopInfoWidget_C.AddKillMessage");

	struct AddKillMessage_Params {
		struct Unknown& Info;
	}; AddKillMessage_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Info = Params.Info;

}

// Function UW-TopInfoWidget.UW-TopInfoWidget_C.ShowCastingUI
inline void UUW-TopInfoWidget_C::ShowCastingUI(struct Unknown& CastingInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-TopInfoWidget.UW-TopInfoWidget_C.ShowCastingUI");

	struct ShowCastingUI_Params {
		struct Unknown& CastingInfo;
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
inline void UUW-TopInfoWidget_C::ShowHUDMessage(struct Unknown MessageRow) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-TopInfoWidget.UW-TopInfoWidget_C.ShowHUDMessage");

	struct ShowHUDMessage_Params {
		struct Unknown MessageRow;
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
inline void UUW-TopInfoWidget_C::ShowHitDamageLog(struct Unknown& HitDamageLogInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-TopInfoWidget.UW-TopInfoWidget_C.ShowHitDamageLog");

	struct ShowHitDamageLog_Params {
		struct Unknown& HitDamageLogInfo;
	}; ShowHitDamageLog_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	HitDamageLogInfo = Params.HitDamageLogInfo;

}

// Function UW-TopInfoWidget.UW-TopInfoWidget_C.LevelUpEvent
inline void UUW-TopInfoWidget_C::LevelUpEvent(struct Unknown PerkInfo, int32_t CurrentLevel, enum class Unknow LevelUpType, struct Unknown DisplayAbility, int32_t LastLevel) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-TopInfoWidget.UW-TopInfoWidget_C.LevelUpEvent");

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

