// WidgetBlueprintGeneratedClass UW-PlayerInfoWidget_Renew.UW-PlayerInfoWidget_Renew_C
class UUW-PlayerInfoWidget_Renew_C : public UBravoHotelPlayerInfoWidget {

public:

	struct Unknown UberGraphFrame; // 0x2C0 (8)
	struct Unknown Lung_Red; // 0x2C8 (8)
	struct Unknown Weaving_Stand; // 0x2D0 (8)
	struct Unknown Weaving_Sit; // 0x2D8 (8)
	struct Unknown HorizontalBox_Backpack_Star; // 0x2E0 (8)
	struct Unknown HorizontalBox_Chest_Star; // 0x2E8 (8)
	struct Unknown HorizontalBox_Damage; // 0x2F0 (8)
	struct Unknown HorizontalBox_Helmet_Star; // 0x2F8 (8)
	struct Unknown HorizontalBox_Levels; // 0x300 (8)
	struct Unknown Image_BackPack_Star; // 0x308 (8)
	struct Unknown Image_C4; // 0x310 (8)
	struct Unknown Image_Chest_Star; // 0x318 (8)
	struct Unknown Image_DamageBg; // 0x320 (8)
	struct Unknown Image_FireMode; // 0x328 (8)
	struct Unknown Image_Helmet_Star; // 0x330 (8)
	struct Unknown Image_Time; // 0x338 (8)
	struct Unknown Image_Timer; // 0x340 (8)
	struct Unknown Image_Weapon; // 0x348 (8)
	struct Unknown Overlay_Tab; // 0x350 (8)
	struct Unknown ProgressBar_Backpack; // 0x358 (8)
	struct Unknown ProgressBar_Chest; // 0x360 (8)
	struct Unknown ProgressBar_Helmet; // 0x368 (8)
	struct Unknown SizeBox_Backpack; // 0x370 (8)
	struct Unknown SizeBox_Chest; // 0x378 (8)
	struct Unknown SizeBox_Helmet; // 0x380 (8)
	struct Unknown T_C4Time; // 0x388 (8)
	struct Unknown T_Damage; // 0x390 (8)
	struct Unknown T_PerkWeaponAmmo; // 0x398 (8)
	struct Unknown T_SlotIndex; // 0x3A0 (8)
	struct Unknown T_WeaponName; // 0x3A8 (8)
	struct Unknown TextBlock_bulletCount; // 0x3B0 (8)
	struct Unknown TextBlock_bulletMaxCount; // 0x3B8 (8)
	struct Unknown UW-GameBuffSlot; // 0x3C0 (8)
	struct Unknown UW-GameBuffSlot_2; // 0x3C8 (8)
	struct Unknown UW-GameBuffSlot_3; // 0x3D0 (8)
	struct Unknown UW-GameBuffSlot_4; // 0x3D8 (8)
	struct Unknown UW-GameBuffSlot_5; // 0x3E0 (8)
	struct Unknown UW-GameBuffSlot_6; // 0x3E8 (8)
	struct Unknown UW-GameBuffSlot_BoostCover; // 0x3F0 (8)
	struct Unknown UW-PlayerInfo_Progress_Renew; // 0x3F8 (8)
	struct Unknown WidgetSwitcher_Bullet; // 0x400 (8)
	struct Unknown WidgetSwitcher_C4; // 0x408 (8)
	struct Unknown WidgetSwitcher_Stance; // 0x410 (8)
	struct Unknown Anim_LastHeadbanging; // 0x418 (8)
	struct Unknown Timer_UpdateInfos; // 0x420 (8)
	char bIsCoolTimeWeapon : 0; // 0x428 (1)
	struct Unknown CurrentWeapon; // 0x430 (8)
	struct Unknown TargetPawnRef; // 0x438 (8)
	struct Unknown CoolTimeMaterial; // 0x440 (8)
	struct Unknown WeaponInfo; // 0x448 (168)
	int32_t SlotIndex; // 0x4F0 (4)

	void IsNoDamageWeapon(char& Weapon); // Function UW-PlayerInfoWidget_Renew.UW-PlayerInfoWidget_Renew_C.IsNoDamageWeapon(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <Game_BE.exe+0x2B80160>
	void SetFistMode(); // Function UW-PlayerInfoWidget_Renew.UW-PlayerInfoWidget_Renew_C.SetFistMode(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void IsMeleeWeapon(char& bTrue); // Function UW-PlayerInfoWidget_Renew.UW-PlayerInfoWidget_Renew_C.IsMeleeWeapon(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <Game_BE.exe+0x2B80160>
	void OnAddBuffs(struct Unknown& AddBuffs); // Function UW-PlayerInfoWidget_Renew.UW-PlayerInfoWidget_Renew_C.OnAddBuffs(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void HiddenAllBuffs(); // Function UW-PlayerInfoWidget_Renew.UW-PlayerInfoWidget_Renew_C.HiddenAllBuffs(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void SetStar(int32_t Level, struct Unknown Tint, struct Unknown Image); // Function UW-PlayerInfoWidget_Renew.UW-PlayerInfoWidget_Renew_C.SetStar(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void SetArmorInfo(char HasHelmet, float HelmetGauge, char HasChest, float ChestGauge, char HasBackpack, float BackpackGauge, int32_t HelmetLevel, int32_t ArmorLevel, int32_t BagLevel); // Function UW-PlayerInfoWidget_Renew.UW-PlayerInfoWidget_Renew_C.SetArmorInfo(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void IsPerkWeapon(char& Weapon); // Function UW-PlayerInfoWidget_Renew.UW-PlayerInfoWidget_Renew_C.IsPerkWeapon(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <Game_BE.exe+0x2B80160>
	void ChangePawn(); // Function UW-PlayerInfoWidget_Renew.UW-PlayerInfoWidget_Renew_C.ChangePawn(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void SetBulletCount(struct FString BulletCount, struct FString BulletMaxCount); // Function UW-PlayerInfoWidget_Renew.UW-PlayerInfoWidget_Renew_C.SetBulletCount(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void SetWeaponFireMode(enum class Unknow FireMode); // Function UW-PlayerInfoWidget_Renew.UW-PlayerInfoWidget_Renew_C.SetWeaponFireMode(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void UpdateDamage(); // Function UW-PlayerInfoWidget_Renew.UW-PlayerInfoWidget_Renew_C.UpdateDamage(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void UpdateTimer(); // Function UW-PlayerInfoWidget_Renew.UW-PlayerInfoWidget_Renew_C.UpdateTimer(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void UpdateInfos(); // Function UW-PlayerInfoWidget_Renew.UW-PlayerInfoWidget_Renew_C.UpdateInfos(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void SetUpdateTimer(); // Function UW-PlayerInfoWidget_Renew.UW-PlayerInfoWidget_Renew_C.SetUpdateTimer(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void SetLungRed(char Flag); // Function UW-PlayerInfoWidget_Renew.UW-PlayerInfoWidget_Renew_C.SetLungRed(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void OnSetStance(char IsFirstPerson, int32_t Stance, char IsHeadbanging); // Function UW-PlayerInfoWidget_Renew.UW-PlayerInfoWidget_Renew_C.OnSetStance(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void ResetWeaponInfo(); // Function UW-PlayerInfoWidget_Renew.UW-PlayerInfoWidget_Renew_C.ResetWeaponInfo(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void SetWeaponInfo(struct Unknown& WeaponInfo); // Function UW-PlayerInfoWidget_Renew.UW-PlayerInfoWidget_Renew_C.SetWeaponInfo(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void Init(); // Function UW-PlayerInfoWidget_Renew.UW-PlayerInfoWidget_Renew_C.Init(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void OnLoaded_97B8B47B466730860C4DE6A59E985E90(struct Unknown Loaded); // Function UW-PlayerInfoWidget_Renew.UW-PlayerInfoWidget_Renew_C.OnLoaded_97B8B47B466730860C4DE6A59E985E90(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void AddBuff(struct Unknown AddBuffs); // Function UW-PlayerInfoWidget_Renew.UW-PlayerInfoWidget_Renew_C.AddBuff(Event|Public|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void StopLastHeadbangingAnim(); // Function UW-PlayerInfoWidget_Renew.UW-PlayerInfoWidget_Renew_C.StopLastHeadbangingAnim(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void SetStance(char bIsFirstPerson, int32_t Stance, char bIsHeadbanging); // Function UW-PlayerInfoWidget_Renew.UW-PlayerInfoWidget_Renew_C.SetStance(Event|Public|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void SetBackpackPercent(float Percent); // Function UW-PlayerInfoWidget_Renew.UW-PlayerInfoWidget_Renew_C.SetBackpackPercent(Event|Public|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void Set PaperSprite AsycLoad(struct Unknown IconTexture, struct Unknown TargetImage); // Function UW-PlayerInfoWidget_Renew.UW-PlayerInfoWidget_Renew_C.Set PaperSprite AsycLoad(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void SetRedLungAnim(char bIsRed); // Function UW-PlayerInfoWidget_Renew.UW-PlayerInfoWidget_Renew_C.SetRedLungAnim(Event|Public|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void ResetCurrentWeaponInfo(int32_t SlotIndex); // Function UW-PlayerInfoWidget_Renew.UW-PlayerInfoWidget_Renew_C.ResetCurrentWeaponInfo(Event|Public|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void SetCurrentWeaponInfo(struct Unknown SetWeaponInfo); // Function UW-PlayerInfoWidget_Renew.UW-PlayerInfoWidget_Renew_C.SetCurrentWeaponInfo(Event|Public|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void SetFireMode(enum class Unknow SetFireMode); // Function UW-PlayerInfoWidget_Renew.UW-PlayerInfoWidget_Renew_C.SetFireMode(Event|Public|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void SetWeaponBulletCount(int32_t CurrentAmmo, int32_t TotalAmmo); // Function UW-PlayerInfoWidget_Renew.UW-PlayerInfoWidget_Renew_C.SetWeaponBulletCount(Event|Public|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void Construct(); // Function UW-PlayerInfoWidget_Renew.UW-PlayerInfoWidget_Renew_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void ExecuteUbergraph_UW-PlayerInfoWidget_Renew(int32_t EntryPoint); // Function UW-PlayerInfoWidget_Renew.UW-PlayerInfoWidget_Renew_C.ExecuteUbergraph_UW-PlayerInfoWidget_Renew(Final|UbergraphFunction|HasDefaults) // <Game_BE.exe+0x2B80160>
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
inline void UUW-PlayerInfoWidget_Renew_C::OnAddBuffs(struct Unknown& AddBuffs) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PlayerInfoWidget_Renew.UW-PlayerInfoWidget_Renew_C.OnAddBuffs");

	struct OnAddBuffs_Params {
		struct Unknown& AddBuffs;
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
inline void UUW-PlayerInfoWidget_Renew_C::SetStar(int32_t Level, struct Unknown Tint, struct Unknown Image) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PlayerInfoWidget_Renew.UW-PlayerInfoWidget_Renew_C.SetStar");

	struct SetStar_Params {
		int32_t Level;
		struct Unknown Tint;
		struct Unknown Image;
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
inline void UUW-PlayerInfoWidget_Renew_C::SetWeaponFireMode(enum class Unknow FireMode) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PlayerInfoWidget_Renew.UW-PlayerInfoWidget_Renew_C.SetWeaponFireMode");

	struct SetWeaponFireMode_Params {
		enum class Unknow FireMode;
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
inline void UUW-PlayerInfoWidget_Renew_C::SetWeaponInfo(struct Unknown& WeaponInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PlayerInfoWidget_Renew.UW-PlayerInfoWidget_Renew_C.SetWeaponInfo");

	struct SetWeaponInfo_Params {
		struct Unknown& WeaponInfo;
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
inline void UUW-PlayerInfoWidget_Renew_C::OnLoaded_97B8B47B466730860C4DE6A59E985E90(struct Unknown Loaded) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PlayerInfoWidget_Renew.UW-PlayerInfoWidget_Renew_C.OnLoaded_97B8B47B466730860C4DE6A59E985E90");

	struct OnLoaded_97B8B47B466730860C4DE6A59E985E90_Params {
		struct Unknown Loaded;
	}; OnLoaded_97B8B47B466730860C4DE6A59E985E90_Params Params;

	Params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PlayerInfoWidget_Renew.UW-PlayerInfoWidget_Renew_C.AddBuff
inline void UUW-PlayerInfoWidget_Renew_C::AddBuff(struct Unknown AddBuffs) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PlayerInfoWidget_Renew.UW-PlayerInfoWidget_Renew_C.AddBuff");

	struct AddBuff_Params {
		struct Unknown AddBuffs;
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
inline void UUW-PlayerInfoWidget_Renew_C::Set PaperSprite AsycLoad(struct Unknown IconTexture, struct Unknown TargetImage) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PlayerInfoWidget_Renew.UW-PlayerInfoWidget_Renew_C.Set PaperSprite AsycLoad");

	struct Set PaperSprite AsycLoad_Params {
		struct Unknown IconTexture;
		struct Unknown TargetImage;
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
inline void UUW-PlayerInfoWidget_Renew_C::SetCurrentWeaponInfo(struct Unknown SetWeaponInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PlayerInfoWidget_Renew.UW-PlayerInfoWidget_Renew_C.SetCurrentWeaponInfo");

	struct SetCurrentWeaponInfo_Params {
		struct Unknown SetWeaponInfo;
	}; SetCurrentWeaponInfo_Params Params;

	Params.SetWeaponInfo = SetWeaponInfo;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PlayerInfoWidget_Renew.UW-PlayerInfoWidget_Renew_C.SetFireMode
inline void UUW-PlayerInfoWidget_Renew_C::SetFireMode(enum class Unknow SetFireMode) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PlayerInfoWidget_Renew.UW-PlayerInfoWidget_Renew_C.SetFireMode");

	struct SetFireMode_Params {
		enum class Unknow SetFireMode;
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

