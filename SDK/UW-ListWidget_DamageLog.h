// WidgetBlueprintGeneratedClass UW-ListWidget_DamageLog.UW-ListWidget_DamageLog_C
class UUW-ListWidget_DamageLog_C : public UUW-ListWidget_ItemBase_C {

public:

	struct URichTextBlock NewRichText; // 0x260 (8)
	struct UTextBlock T_Damage; // 0x268 (8)
	struct UTextBlock T_DamageCauser; // 0x270 (8)
	struct UTextBlock T_DamageResult; // 0x278 (8)
	struct UTextBlock T_HeadShot; // 0x280 (8)
	struct UTextBlock T_HitCount; // 0x288 (8)
	struct UTextBlock T_HitType; // 0x290 (8)
	struct UTextBlock T_TargetClass; // 0x298 (8)
	struct UTextBlock T_TargetLevel; // 0x2A0 (8)
	struct UTextBlock T_TargetName; // 0x2A8 (8)
	struct UTextBlock T_TargetWeapon; // 0x2B0 (8)
	struct UTextBlock T_WeaponLevel; // 0x2B8 (8)
	struct FHitDamageLogInfo DamageLogInfo; // 0x2C0 (2904)
	float LogTime; // 0xE18 (4)
	float LogStackValidTime; // 0xE1C (4)

	void DamageResultText(struct FText& Result); // Function UW-ListWidget_DamageLog.UW-ListWidget_DamageLog_C.DamageResultText(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void DamageText(struct FText& Result); // Function UW-ListWidget_DamageLog.UW-ListWidget_DamageLog_C.DamageText(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void WeaponText(struct FText& Result); // Function UW-ListWidget_DamageLog.UW-ListWidget_DamageLog_C.WeaponText(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void TargetText(struct FText& Result); // Function UW-ListWidget_DamageLog.UW-ListWidget_DamageLog_C.TargetText(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void StackDamageLog(struct FHitDamageLogInfo& DamageLogInfo); // Function UW-ListWidget_DamageLog.UW-ListWidget_DamageLog_C.StackDamageLog(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void CheckCanStackDamage Log(struct FHitDamageLogInfo& DamageLogInfo, char& CanStack); // Function UW-ListWidget_DamageLog.UW-ListWidget_DamageLog_C.CheckCanStackDamage Log(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void SetHitDamageLogInfo(struct FHitDamageLogInfo& DamageLogInfo); // Function UW-ListWidget_DamageLog.UW-ListWidget_DamageLog_C.SetHitDamageLogInfo(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
};

// Function UW-ListWidget_DamageLog.UW-ListWidget_DamageLog_C.DamageResultText
inline void UUW-ListWidget_DamageLog_C::DamageResultText(struct FText& Result) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ListWidget_DamageLog.UW-ListWidget_DamageLog_C.DamageResultText");

	struct DamageResultText_Params {
		struct FText& Result;
	}; DamageResultText_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Result = Params.Result;

}

// Function UW-ListWidget_DamageLog.UW-ListWidget_DamageLog_C.DamageText
inline void UUW-ListWidget_DamageLog_C::DamageText(struct FText& Result) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ListWidget_DamageLog.UW-ListWidget_DamageLog_C.DamageText");

	struct DamageText_Params {
		struct FText& Result;
	}; DamageText_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Result = Params.Result;

}

// Function UW-ListWidget_DamageLog.UW-ListWidget_DamageLog_C.WeaponText
inline void UUW-ListWidget_DamageLog_C::WeaponText(struct FText& Result) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ListWidget_DamageLog.UW-ListWidget_DamageLog_C.WeaponText");

	struct WeaponText_Params {
		struct FText& Result;
	}; WeaponText_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Result = Params.Result;

}

// Function UW-ListWidget_DamageLog.UW-ListWidget_DamageLog_C.TargetText
inline void UUW-ListWidget_DamageLog_C::TargetText(struct FText& Result) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ListWidget_DamageLog.UW-ListWidget_DamageLog_C.TargetText");

	struct TargetText_Params {
		struct FText& Result;
	}; TargetText_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Result = Params.Result;

}

// Function UW-ListWidget_DamageLog.UW-ListWidget_DamageLog_C.StackDamageLog
inline void UUW-ListWidget_DamageLog_C::StackDamageLog(struct FHitDamageLogInfo& DamageLogInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ListWidget_DamageLog.UW-ListWidget_DamageLog_C.StackDamageLog");

	struct StackDamageLog_Params {
		struct FHitDamageLogInfo& DamageLogInfo;
	}; StackDamageLog_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	DamageLogInfo = Params.DamageLogInfo;

}

// Function UW-ListWidget_DamageLog.UW-ListWidget_DamageLog_C.CheckCanStackDamage Log
inline void UUW-ListWidget_DamageLog_C::CheckCanStackDamage Log(struct FHitDamageLogInfo& DamageLogInfo, char& CanStack) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ListWidget_DamageLog.UW-ListWidget_DamageLog_C.CheckCanStackDamage Log");

	struct CheckCanStackDamage Log_Params {
		struct FHitDamageLogInfo& DamageLogInfo;
		char& CanStack;
	}; CheckCanStackDamage Log_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	DamageLogInfo = Params.DamageLogInfo;
	CanStack = Params.CanStack;

}

// Function UW-ListWidget_DamageLog.UW-ListWidget_DamageLog_C.SetHitDamageLogInfo
inline void UUW-ListWidget_DamageLog_C::SetHitDamageLogInfo(struct FHitDamageLogInfo& DamageLogInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ListWidget_DamageLog.UW-ListWidget_DamageLog_C.SetHitDamageLogInfo");

	struct SetHitDamageLogInfo_Params {
		struct FHitDamageLogInfo& DamageLogInfo;
	}; SetHitDamageLogInfo_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	DamageLogInfo = Params.DamageLogInfo;

}

