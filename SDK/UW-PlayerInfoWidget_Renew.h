// WidgetBlueprintGeneratedClass UW-PlayerInfoWidget_Renew.UW-PlayerInfoWidget_Renew_C
class UUW-PlayerInfoWidget_Renew_C : public UBravoHotelPlayerInfoWidget {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2C0 (8)
	struct UWidgetAnimation Lung_Red; // 0x2C8 (8)
	struct UWidgetAnimation Weaving_Stand; // 0x2D0 (8)
	struct UWidgetAnimation Weaving_Sit; // 0x2D8 (8)
	struct UHorizontalBox HorizontalBox_Backpack_Star; // 0x2E0 (8)
	struct UHorizontalBox HorizontalBox_Chest_Star; // 0x2E8 (8)
	struct UHorizontalBox HorizontalBox_Damage; // 0x2F0 (8)
	struct UHorizontalBox HorizontalBox_Helmet_Star; // 0x2F8 (8)
	struct UHorizontalBox HorizontalBox_Levels; // 0x300 (8)
	struct UImage Image_BackPack_Star; // 0x308 (8)
	struct UImage Image_C4; // 0x310 (8)
	struct UImage Image_Chest_Star; // 0x318 (8)
	struct UImage Image_DamageBg; // 0x320 (8)
	struct UImage Image_FireMode; // 0x328 (8)
	struct UImage Image_Helmet_Star; // 0x330 (8)
	struct UImage Image_Time; // 0x338 (8)
	struct UImage Image_Timer; // 0x340 (8)
	struct UImage Image_Weapon; // 0x348 (8)
	struct UOverlay Overlay_Tab; // 0x350 (8)
	struct UProgressBar ProgressBar_Backpack; // 0x358 (8)
	struct UProgressBar ProgressBar_Chest; // 0x360 (8)
	struct UProgressBar ProgressBar_Helmet; // 0x368 (8)
	struct USizeBox SizeBox_Backpack; // 0x370 (8)
	struct USizeBox SizeBox_Chest; // 0x378 (8)
	struct USizeBox SizeBox_Helmet; // 0x380 (8)
	struct UTextBlock T_C4Time; // 0x388 (8)
	struct UTextBlock T_Damage; // 0x390 (8)
	struct UTextBlock T_PerkWeaponAmmo; // 0x398 (8)
	struct UTextBlock T_SlotIndex; // 0x3A0 (8)
	struct UTextBlock T_WeaponName; // 0x3A8 (8)
	struct UTextBlock TextBlock_bulletCount; // 0x3B0 (8)
	struct UTextBlock TextBlock_bulletMaxCount; // 0x3B8 (8)
	struct UUW-GameBuffSlot_C UW-GameBuffSlot; // 0x3C0 (8)
	struct UUW-GameBuffSlot_C UW-GameBuffSlot_2; // 0x3C8 (8)
	struct UUW-GameBuffSlot_C UW-GameBuffSlot_3; // 0x3D0 (8)
	struct UUW-GameBuffSlot_C UW-GameBuffSlot_4; // 0x3D8 (8)
	struct UUW-GameBuffSlot_C UW-GameBuffSlot_5; // 0x3E0 (8)
	struct UUW-GameBuffSlot_C UW-GameBuffSlot_6; // 0x3E8 (8)
	struct UUW-GameBuffSlot_BoostCover_C UW-GameBuffSlot_BoostCover; // 0x3F0 (8)
	struct UUW-PlayerInfo_Progress_Renew_C UW-PlayerInfo_Progress_Renew; // 0x3F8 (8)
	struct UWidgetSwitcher WidgetSwitcher_Bullet; // 0x400 (8)
	struct UWidgetSwitcher WidgetSwitcher_C4; // 0x408 (8)
	struct UWidgetSwitcher WidgetSwitcher_Stance; // 0x410 (8)
	struct UWidgetAnimation Anim_LastHeadbanging; // 0x418 (8)
	struct FTimerHandle Timer_UpdateInfos; // 0x420 (8)
	char bIsCoolTimeWeapon : 0; // 0x428 (1)
	struct ABravoHotelWeaponBase CurrentWeapon; // 0x430 (8)
	struct ABravoHotelCharacter TargetPawnRef; // 0x438 (8)
	struct UMaterialInstanceDynamic CoolTimeMaterial; // 0x440 (8)
	struct FWeaponWidgetInfo WeaponInfo; // 0x448 (168)
	int32_t SlotIndex; // 0x4F0 (4)

	void IsNoDamageWeapon(char& Weapon); // Function UW-PlayerInfoWidget_Renew.UW-PlayerInfoWidget_Renew_C.IsNoDamageWeapon(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void SetFistMode(); // Function UW-PlayerInfoWidget_Renew.UW-PlayerInfoWidget_Renew_C.SetFistMode(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void IsMeleeWeapon(char& bTrue); // Function UW-PlayerInfoWidget_Renew.UW-PlayerInfoWidget_Renew_C.IsMeleeWeapon(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void OnAddBuffs(struct FBuffSlot& AddBuffs); // Function UW-PlayerInfoWidget_Renew.UW-PlayerInfoWidget_Renew_C.OnAddBuffs(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void HiddenAllBuffs(); // Function UW-PlayerInfoWidget_Renew.UW-PlayerInfoWidget_Renew_C.HiddenAllBuffs(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void SetStar(int32_t Level, struct FSlateColor Tint, struct UImage Image); // Function UW-PlayerInfoWidget_Renew.UW-PlayerInfoWidget_Renew_C.SetStar(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void SetArmorInfo(char HasHelmet, float HelmetGauge, char HasChest, float ChestGauge, char HasBackpack, float BackpackGauge, int32_t HelmetLevel, int32_t ArmorLevel, int32_t BagLevel); // Function UW-PlayerInfoWidget_Renew.UW-PlayerInfoWidget_Renew_C.SetArmorInfo(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void IsPerkWeapon(char& Weapon); // Function UW-PlayerInfoWidget_Renew.UW-PlayerInfoWidget_Renew_C.IsPerkWeapon(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void ChangePawn(); // Function UW-PlayerInfoWidget_Renew.UW-PlayerInfoWidget_Renew_C.ChangePawn(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void SetBulletCount(struct FString BulletCount, struct FString BulletMaxCount); // Function UW-PlayerInfoWidget_Renew.UW-PlayerInfoWidget_Renew_C.SetBulletCount(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void SetWeaponFireMode(enum class EWeaponFireMode FireMode); // Function UW-PlayerInfoWidget_Renew.UW-PlayerInfoWidget_Renew_C.SetWeaponFireMode(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void UpdateDamage(); // Function UW-PlayerInfoWidget_Renew.UW-PlayerInfoWidget_Renew_C.UpdateDamage(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void UpdateTimer(); // Function UW-PlayerInfoWidget_Renew.UW-PlayerInfoWidget_Renew_C.UpdateTimer(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void UpdateInfos(); // Function UW-PlayerInfoWidget_Renew.UW-PlayerInfoWidget_Renew_C.UpdateInfos(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void SetUpdateTimer(); // Function UW-PlayerInfoWidget_Renew.UW-PlayerInfoWidget_Renew_C.SetUpdateTimer(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void SetLungRed(char Flag); // Function UW-PlayerInfoWidget_Renew.UW-PlayerInfoWidget_Renew_C.SetLungRed(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void OnSetStance(char IsFirstPerson, int32_t Stance, char IsHeadbanging); // Function UW-PlayerInfoWidget_Renew.UW-PlayerInfoWidget_Renew_C.OnSetStance(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void ResetWeaponInfo(); // Function UW-PlayerInfoWidget_Renew.UW-PlayerInfoWidget_Renew_C.ResetWeaponInfo(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void SetWeaponInfo(struct FWeaponWidgetInfo& WeaponInfo); // Function UW-PlayerInfoWidget_Renew.UW-PlayerInfoWidget_Renew_C.SetWeaponInfo(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void Init(); // Function UW-PlayerInfoWidget_Renew.UW-PlayerInfoWidget_Renew_C.Init(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void OnLoaded_97B8B47B466730860C4DE6A59E985E90(struct Object Loaded); // Function UW-PlayerInfoWidget_Renew.UW-PlayerInfoWidget_Renew_C.OnLoaded_97B8B47B466730860C4DE6A59E985E90(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void AddBuff(struct FBuffSlot AddBuffs); // Function UW-PlayerInfoWidget_Renew.UW-PlayerInfoWidget_Renew_C.AddBuff(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void StopLastHeadbangingAnim(); // Function UW-PlayerInfoWidget_Renew.UW-PlayerInfoWidget_Renew_C.StopLastHeadbangingAnim(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void SetStance(char bIsFirstPerson, int32_t Stance, char bIsHeadbanging); // Function UW-PlayerInfoWidget_Renew.UW-PlayerInfoWidget_Renew_C.SetStance(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void SetBackpackPercent(float Percent); // Function UW-PlayerInfoWidget_Renew.UW-PlayerInfoWidget_Renew_C.SetBackpackPercent(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void Set PaperSprite AsycLoad(struct TSoftObjectPtr<UPaperSprite> IconTexture, struct UImage TargetImage); // Function UW-PlayerInfoWidget_Renew.UW-PlayerInfoWidget_Renew_C.Set PaperSprite AsycLoad(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void SetRedLungAnim(char bIsRed); // Function UW-PlayerInfoWidget_Renew.UW-PlayerInfoWidget_Renew_C.SetRedLungAnim(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void ResetCurrentWeaponInfo(int32_t SlotIndex); // Function UW-PlayerInfoWidget_Renew.UW-PlayerInfoWidget_Renew_C.ResetCurrentWeaponInfo(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void SetCurrentWeaponInfo(struct FWeaponWidgetInfo SetWeaponInfo); // Function UW-PlayerInfoWidget_Renew.UW-PlayerInfoWidget_Renew_C.SetCurrentWeaponInfo(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void SetFireMode(enum class EWeaponFireMode SetFireMode); // Function UW-PlayerInfoWidget_Renew.UW-PlayerInfoWidget_Renew_C.SetFireMode(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void SetWeaponBulletCount(int32_t CurrentAmmo, int32_t TotalAmmo); // Function UW-PlayerInfoWidget_Renew.UW-PlayerInfoWidget_Renew_C.SetWeaponBulletCount(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void Construct(); // Function UW-PlayerInfoWidget_Renew.UW-PlayerInfoWidget_Renew_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void ExecuteUbergraph_UW-PlayerInfoWidget_Renew(int32_t EntryPoint); // Function UW-PlayerInfoWidget_Renew.UW-PlayerInfoWidget_Renew_C.ExecuteUbergraph_UW-PlayerInfoWidget_Renew(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
};

// Function UW-PlayerInfoWidget_Renew.UW-PlayerInfoWidget_Renew_C.IsNoDamageWeapon
inline void UUW-PlayerInfoWidget_Renew_C::IsNoDamageWeapon(char& Weapon) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PlayerInfoWidget_Renew.UW-PlayerInfoWidget_Renew_C.IsNoDamageWeapon");

	struct IsNoDamageWeapon_Params {
		char& Weapon;
	}; IsNoDamageWeapon_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Weapon = Params.Weapon;

}

// Function UW-PlayerInfoWidget_Renew.UW-PlayerInfoWidget_Renew_C.SetFistMode
inline void UUW-PlayerInfoWidget_Renew_C::SetFistMode() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PlayerInfoWidget_Renew.UW-PlayerInfoWidget_Renew_C.SetFistMode");

	struct SetFistMode_Params {
		
	}; SetFistMode_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PlayerInfoWidget_Renew.UW-PlayerInfoWidget_Renew_C.IsMeleeWeapon
inline void UUW-PlayerInfoWidget_Renew_C::IsMeleeWeapon(char& bTrue) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PlayerInfoWidget_Renew.UW-PlayerInfoWidget_Renew_C.IsMeleeWeapon");

	struct IsMeleeWeapon_Params {
		char& bTrue;
	}; IsMeleeWeapon_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	bTrue = Params.bTrue;

}

// Function UW-PlayerInfoWidget_Renew.UW-PlayerInfoWidget_Renew_C.OnAddBuffs
inline void UUW-PlayerInfoWidget_Renew_C::OnAddBuffs(struct FBuffSlot& AddBuffs) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PlayerInfoWidget_Renew.UW-PlayerInfoWidget_Renew_C.OnAddBuffs");

	struct OnAddBuffs_Params {
		struct FBuffSlot& AddBuffs;
	}; OnAddBuffs_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	AddBuffs = Params.AddBuffs;

}

// Function UW-PlayerInfoWidget_Renew.UW-PlayerInfoWidget_Renew_C.HiddenAllBuffs
inline void UUW-PlayerInfoWidget_Renew_C::HiddenAllBuffs() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PlayerInfoWidget_Renew.UW-PlayerInfoWidget_Renew_C.HiddenAllBuffs");

	struct HiddenAllBuffs_Params {
		
	}; HiddenAllBuffs_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PlayerInfoWidget_Renew.UW-PlayerInfoWidget_Renew_C.SetStar
inline void UUW-PlayerInfoWidget_Renew_C::SetStar(int32_t Level, struct FSlateColor Tint, struct UImage Image) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PlayerInfoWidget_Renew.UW-PlayerInfoWidget_Renew_C.SetStar");

	struct SetStar_Params {
		int32_t Level;
		struct FSlateColor Tint;
		struct UImage Image;
	}; SetStar_Params Params;

	Params.Level = Level;
	Params.Tint = Tint;
	Params.Image = Image;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PlayerInfoWidget_Renew.UW-PlayerInfoWidget_Renew_C.SetArmorInfo
inline void UUW-PlayerInfoWidget_Renew_C::SetArmorInfo(char HasHelmet, float HelmetGauge, char HasChest, float ChestGauge, char HasBackpack, float BackpackGauge, int32_t HelmetLevel, int32_t ArmorLevel, int32_t BagLevel) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PlayerInfoWidget_Renew.UW-PlayerInfoWidget_Renew_C.SetArmorInfo");

	struct SetArmorInfo_Params {
		char HasHelmet;
		float HelmetGauge;
		char HasChest;
		float ChestGauge;
		char HasBackpack;
		float BackpackGauge;
		int32_t HelmetLevel;
		int32_t ArmorLevel;
		int32_t BagLevel;
	}; SetArmorInfo_Params Params;

	Params.HasHelmet = HasHelmet;
	Params.HelmetGauge = HelmetGauge;
	Params.HasChest = HasChest;
	Params.ChestGauge = ChestGauge;
	Params.HasBackpack = HasBackpack;
	Params.BackpackGauge = BackpackGauge;
	Params.HelmetLevel = HelmetLevel;
	Params.ArmorLevel = ArmorLevel;
	Params.BagLevel = BagLevel;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PlayerInfoWidget_Renew.UW-PlayerInfoWidget_Renew_C.IsPerkWeapon
inline void UUW-PlayerInfoWidget_Renew_C::IsPerkWeapon(char& Weapon) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PlayerInfoWidget_Renew.UW-PlayerInfoWidget_Renew_C.IsPerkWeapon");

	struct IsPerkWeapon_Params {
		char& Weapon;
	}; IsPerkWeapon_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Weapon = Params.Weapon;

}

// Function UW-PlayerInfoWidget_Renew.UW-PlayerInfoWidget_Renew_C.ChangePawn
inline void UUW-PlayerInfoWidget_Renew_C::ChangePawn() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PlayerInfoWidget_Renew.UW-PlayerInfoWidget_Renew_C.ChangePawn");

	struct ChangePawn_Params {
		
	}; ChangePawn_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PlayerInfoWidget_Renew.UW-PlayerInfoWidget_Renew_C.SetBulletCount
inline void UUW-PlayerInfoWidget_Renew_C::SetBulletCount(struct FString BulletCount, struct FString BulletMaxCount) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PlayerInfoWidget_Renew.UW-PlayerInfoWidget_Renew_C.SetBulletCount");

	struct SetBulletCount_Params {
		struct FString BulletCount;
		struct FString BulletMaxCount;
	}; SetBulletCount_Params Params;

	Params.BulletCount = BulletCount;
	Params.BulletMaxCount = BulletMaxCount;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PlayerInfoWidget_Renew.UW-PlayerInfoWidget_Renew_C.SetWeaponFireMode
inline void UUW-PlayerInfoWidget_Renew_C::SetWeaponFireMode(enum class EWeaponFireMode FireMode) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PlayerInfoWidget_Renew.UW-PlayerInfoWidget_Renew_C.SetWeaponFireMode");

	struct SetWeaponFireMode_Params {
		enum class EWeaponFireMode FireMode;
	}; SetWeaponFireMode_Params Params;

	Params.FireMode = FireMode;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PlayerInfoWidget_Renew.UW-PlayerInfoWidget_Renew_C.UpdateDamage
inline void UUW-PlayerInfoWidget_Renew_C::UpdateDamage() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PlayerInfoWidget_Renew.UW-PlayerInfoWidget_Renew_C.UpdateDamage");

	struct UpdateDamage_Params {
		
	}; UpdateDamage_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PlayerInfoWidget_Renew.UW-PlayerInfoWidget_Renew_C.UpdateTimer
inline void UUW-PlayerInfoWidget_Renew_C::UpdateTimer() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PlayerInfoWidget_Renew.UW-PlayerInfoWidget_Renew_C.UpdateTimer");

	struct UpdateTimer_Params {
		
	}; UpdateTimer_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PlayerInfoWidget_Renew.UW-PlayerInfoWidget_Renew_C.UpdateInfos
inline void UUW-PlayerInfoWidget_Renew_C::UpdateInfos() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PlayerInfoWidget_Renew.UW-PlayerInfoWidget_Renew_C.UpdateInfos");

	struct UpdateInfos_Params {
		
	}; UpdateInfos_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PlayerInfoWidget_Renew.UW-PlayerInfoWidget_Renew_C.SetUpdateTimer
inline void UUW-PlayerInfoWidget_Renew_C::SetUpdateTimer() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PlayerInfoWidget_Renew.UW-PlayerInfoWidget_Renew_C.SetUpdateTimer");

	struct SetUpdateTimer_Params {
		
	}; SetUpdateTimer_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PlayerInfoWidget_Renew.UW-PlayerInfoWidget_Renew_C.SetLungRed
inline void UUW-PlayerInfoWidget_Renew_C::SetLungRed(char Flag) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PlayerInfoWidget_Renew.UW-PlayerInfoWidget_Renew_C.SetLungRed");

	struct SetLungRed_Params {
		char Flag;
	}; SetLungRed_Params Params;

	Params.Flag = Flag;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PlayerInfoWidget_Renew.UW-PlayerInfoWidget_Renew_C.OnSetStance
inline void UUW-PlayerInfoWidget_Renew_C::OnSetStance(char IsFirstPerson, int32_t Stance, char IsHeadbanging) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PlayerInfoWidget_Renew.UW-PlayerInfoWidget_Renew_C.OnSetStance");

	struct OnSetStance_Params {
		char IsFirstPerson;
		int32_t Stance;
		char IsHeadbanging;
	}; OnSetStance_Params Params;

	Params.IsFirstPerson = IsFirstPerson;
	Params.Stance = Stance;
	Params.IsHeadbanging = IsHeadbanging;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PlayerInfoWidget_Renew.UW-PlayerInfoWidget_Renew_C.ResetWeaponInfo
inline void UUW-PlayerInfoWidget_Renew_C::ResetWeaponInfo() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PlayerInfoWidget_Renew.UW-PlayerInfoWidget_Renew_C.ResetWeaponInfo");

	struct ResetWeaponInfo_Params {
		
	}; ResetWeaponInfo_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PlayerInfoWidget_Renew.UW-PlayerInfoWidget_Renew_C.SetWeaponInfo
inline void UUW-PlayerInfoWidget_Renew_C::SetWeaponInfo(struct FWeaponWidgetInfo& WeaponInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PlayerInfoWidget_Renew.UW-PlayerInfoWidget_Renew_C.SetWeaponInfo");

	struct SetWeaponInfo_Params {
		struct FWeaponWidgetInfo& WeaponInfo;
	}; SetWeaponInfo_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	WeaponInfo = Params.WeaponInfo;

}

// Function UW-PlayerInfoWidget_Renew.UW-PlayerInfoWidget_Renew_C.Init
inline void UUW-PlayerInfoWidget_Renew_C::Init() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PlayerInfoWidget_Renew.UW-PlayerInfoWidget_Renew_C.Init");

	struct Init_Params {
		
	}; Init_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PlayerInfoWidget_Renew.UW-PlayerInfoWidget_Renew_C.OnLoaded_97B8B47B466730860C4DE6A59E985E90
inline void UUW-PlayerInfoWidget_Renew_C::OnLoaded_97B8B47B466730860C4DE6A59E985E90(struct Object Loaded) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PlayerInfoWidget_Renew.UW-PlayerInfoWidget_Renew_C.OnLoaded_97B8B47B466730860C4DE6A59E985E90");

	struct OnLoaded_97B8B47B466730860C4DE6A59E985E90_Params {
		struct Object Loaded;
	}; OnLoaded_97B8B47B466730860C4DE6A59E985E90_Params Params;

	Params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PlayerInfoWidget_Renew.UW-PlayerInfoWidget_Renew_C.AddBuff
inline void UUW-PlayerInfoWidget_Renew_C::AddBuff(struct FBuffSlot AddBuffs) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PlayerInfoWidget_Renew.UW-PlayerInfoWidget_Renew_C.AddBuff");

	struct AddBuff_Params {
		struct FBuffSlot AddBuffs;
	}; AddBuff_Params Params;

	Params.AddBuffs = AddBuffs;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PlayerInfoWidget_Renew.UW-PlayerInfoWidget_Renew_C.StopLastHeadbangingAnim
inline void UUW-PlayerInfoWidget_Renew_C::StopLastHeadbangingAnim() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PlayerInfoWidget_Renew.UW-PlayerInfoWidget_Renew_C.StopLastHeadbangingAnim");

	struct StopLastHeadbangingAnim_Params {
		
	}; StopLastHeadbangingAnim_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PlayerInfoWidget_Renew.UW-PlayerInfoWidget_Renew_C.SetStance
inline void UUW-PlayerInfoWidget_Renew_C::SetStance(char bIsFirstPerson, int32_t Stance, char bIsHeadbanging) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PlayerInfoWidget_Renew.UW-PlayerInfoWidget_Renew_C.SetStance");

	struct SetStance_Params {
		char bIsFirstPerson;
		int32_t Stance;
		char bIsHeadbanging;
	}; SetStance_Params Params;

	Params.bIsFirstPerson = bIsFirstPerson;
	Params.Stance = Stance;
	Params.bIsHeadbanging = bIsHeadbanging;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PlayerInfoWidget_Renew.UW-PlayerInfoWidget_Renew_C.SetBackpackPercent
inline void UUW-PlayerInfoWidget_Renew_C::SetBackpackPercent(float Percent) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PlayerInfoWidget_Renew.UW-PlayerInfoWidget_Renew_C.SetBackpackPercent");

	struct SetBackpackPercent_Params {
		float Percent;
	}; SetBackpackPercent_Params Params;

	Params.Percent = Percent;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PlayerInfoWidget_Renew.UW-PlayerInfoWidget_Renew_C.Set PaperSprite AsycLoad
inline void UUW-PlayerInfoWidget_Renew_C::Set PaperSprite AsycLoad(struct TSoftObjectPtr<UPaperSprite> IconTexture, struct UImage TargetImage) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PlayerInfoWidget_Renew.UW-PlayerInfoWidget_Renew_C.Set PaperSprite AsycLoad");

	struct Set PaperSprite AsycLoad_Params {
		struct TSoftObjectPtr<UPaperSprite> IconTexture;
		struct UImage TargetImage;
	}; Set PaperSprite AsycLoad_Params Params;

	Params.IconTexture = IconTexture;
	Params.TargetImage = TargetImage;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PlayerInfoWidget_Renew.UW-PlayerInfoWidget_Renew_C.SetRedLungAnim
inline void UUW-PlayerInfoWidget_Renew_C::SetRedLungAnim(char bIsRed) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PlayerInfoWidget_Renew.UW-PlayerInfoWidget_Renew_C.SetRedLungAnim");

	struct SetRedLungAnim_Params {
		char bIsRed;
	}; SetRedLungAnim_Params Params;

	Params.bIsRed = bIsRed;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PlayerInfoWidget_Renew.UW-PlayerInfoWidget_Renew_C.ResetCurrentWeaponInfo
inline void UUW-PlayerInfoWidget_Renew_C::ResetCurrentWeaponInfo(int32_t SlotIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PlayerInfoWidget_Renew.UW-PlayerInfoWidget_Renew_C.ResetCurrentWeaponInfo");

	struct ResetCurrentWeaponInfo_Params {
		int32_t SlotIndex;
	}; ResetCurrentWeaponInfo_Params Params;

	Params.SlotIndex = SlotIndex;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PlayerInfoWidget_Renew.UW-PlayerInfoWidget_Renew_C.SetCurrentWeaponInfo
inline void UUW-PlayerInfoWidget_Renew_C::SetCurrentWeaponInfo(struct FWeaponWidgetInfo SetWeaponInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PlayerInfoWidget_Renew.UW-PlayerInfoWidget_Renew_C.SetCurrentWeaponInfo");

	struct SetCurrentWeaponInfo_Params {
		struct FWeaponWidgetInfo SetWeaponInfo;
	}; SetCurrentWeaponInfo_Params Params;

	Params.SetWeaponInfo = SetWeaponInfo;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PlayerInfoWidget_Renew.UW-PlayerInfoWidget_Renew_C.SetFireMode
inline void UUW-PlayerInfoWidget_Renew_C::SetFireMode(enum class EWeaponFireMode SetFireMode) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PlayerInfoWidget_Renew.UW-PlayerInfoWidget_Renew_C.SetFireMode");

	struct SetFireMode_Params {
		enum class EWeaponFireMode SetFireMode;
	}; SetFireMode_Params Params;

	Params.SetFireMode = SetFireMode;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PlayerInfoWidget_Renew.UW-PlayerInfoWidget_Renew_C.SetWeaponBulletCount
inline void UUW-PlayerInfoWidget_Renew_C::SetWeaponBulletCount(int32_t CurrentAmmo, int32_t TotalAmmo) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PlayerInfoWidget_Renew.UW-PlayerInfoWidget_Renew_C.SetWeaponBulletCount");

	struct SetWeaponBulletCount_Params {
		int32_t CurrentAmmo;
		int32_t TotalAmmo;
	}; SetWeaponBulletCount_Params Params;

	Params.CurrentAmmo = CurrentAmmo;
	Params.TotalAmmo = TotalAmmo;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PlayerInfoWidget_Renew.UW-PlayerInfoWidget_Renew_C.Construct
inline void UUW-PlayerInfoWidget_Renew_C::Construct() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PlayerInfoWidget_Renew.UW-PlayerInfoWidget_Renew_C.Construct");

	struct Construct_Params {
		
	}; Construct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PlayerInfoWidget_Renew.UW-PlayerInfoWidget_Renew_C.ExecuteUbergraph_UW-PlayerInfoWidget_Renew
inline void UUW-PlayerInfoWidget_Renew_C::ExecuteUbergraph_UW-PlayerInfoWidget_Renew(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PlayerInfoWidget_Renew.UW-PlayerInfoWidget_Renew_C.ExecuteUbergraph_UW-PlayerInfoWidget_Renew");

	struct ExecuteUbergraph_UW-PlayerInfoWidget_Renew_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_UW-PlayerInfoWidget_Renew_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

