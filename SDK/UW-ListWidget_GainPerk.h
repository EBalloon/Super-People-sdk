// WidgetBlueprintGeneratedClass UW-ListWidget_GainPerk.UW-ListWidget_GainPerk_C
class UUW-ListWidget_GainPerk_C : public UUW-ListWidget_ItemBase_C {

public:

	struct UWidgetAnimation UpAnim; // 0x260 (8)
	struct UWidgetAnimation LevelUp; // 0x268 (8)
	struct UWidgetAnimation FadeIn; // 0x270 (8)
	struct UWidgetAnimation Idle; // 0x278 (8)
	struct UCanvasPanel CanvasPanel_New; // 0x280 (8)
	struct UImage Image_336; // 0x288 (8)
	struct UImage Image_Back; // 0x290 (8)
	struct UOverlay Overlay_Level; // 0x298 (8)
	struct UTextBlock PerkLastLevel; // 0x2A0 (8)
	struct UCanvasPanel PerkSlotHover; // 0x2A8 (8)
	struct URichTextBlock RichTextBlock_Desc; // 0x2B0 (8)
	struct UTextBlock T_LV; // 0x2B8 (8)
	struct UTextBlock T_PerkLevel; // 0x2C0 (8)
	struct UTextBlock T_PerkName; // 0x2C8 (8)
	struct UTextBlock TextBlock_1; // 0x2D0 (8)
	struct UUW-Inventory_PerkSlot_C UW-Inventory_PerkSlot; // 0x2D8 (8)
	struct FPerkUIInfo PerkUIInfo; // 0x2E0 (44)
	int32_t CurrentLevel; // 0x30C (4)
	int32_t LastLevel; // 0x310 (4)
	int32_t PerkLevel; // 0x314 (4)
	char IsPlayingUltimateSound : 0; // 0x318 (1)
	struct FPerkData PerkData; // 0x320 (224)
	struct FPerkInGameData PerInGameData; // 0x400 (456)
	struct FVector2D DefaultPosition; // 0x5C8 (8)

	void PlayUpDownAnim(); // Function UW-ListWidget_GainPerk.UW-ListWidget_GainPerk_C.PlayUpDownAnim(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	char IsUltimateLevel(); // Function UW-ListWidget_GainPerk.UW-ListWidget_GainPerk_C.IsUltimateLevel(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void SetPerkNameDesc(); // Function UW-ListWidget_GainPerk.UW-ListWidget_GainPerk_C.SetPerkNameDesc(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void SetGainPerkInfo(struct FPerkUIInfo& PerkUIInfo, int32_t CurrentLevel, int32_t LastLevel, char IsPlayingUltimateSound); // Function UW-ListWidget_GainPerk.UW-ListWidget_GainPerk_C.SetGainPerkInfo(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	struct FLinearColor Get_PerkName_ColorAndOpacity_1(); // Function UW-ListWidget_GainPerk.UW-ListWidget_GainPerk_C.Get_PerkName_ColorAndOpacity_1(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
};

// Function UW-ListWidget_GainPerk.UW-ListWidget_GainPerk_C.PlayUpDownAnim
inline void UUW-ListWidget_GainPerk_C::PlayUpDownAnim() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ListWidget_GainPerk.UW-ListWidget_GainPerk_C.PlayUpDownAnim");

	struct PlayUpDownAnim_Params {
		
	}; PlayUpDownAnim_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ListWidget_GainPerk.UW-ListWidget_GainPerk_C.IsUltimateLevel
inline char UUW-ListWidget_GainPerk_C::IsUltimateLevel() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ListWidget_GainPerk.UW-ListWidget_GainPerk_C.IsUltimateLevel");

	struct IsUltimateLevel_Params {
		
		char ReturnValue;

	}; IsUltimateLevel_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UW-ListWidget_GainPerk.UW-ListWidget_GainPerk_C.SetPerkNameDesc
inline void UUW-ListWidget_GainPerk_C::SetPerkNameDesc() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ListWidget_GainPerk.UW-ListWidget_GainPerk_C.SetPerkNameDesc");

	struct SetPerkNameDesc_Params {
		
	}; SetPerkNameDesc_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ListWidget_GainPerk.UW-ListWidget_GainPerk_C.SetGainPerkInfo
inline void UUW-ListWidget_GainPerk_C::SetGainPerkInfo(struct FPerkUIInfo& PerkUIInfo, int32_t CurrentLevel, int32_t LastLevel, char IsPlayingUltimateSound) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ListWidget_GainPerk.UW-ListWidget_GainPerk_C.SetGainPerkInfo");

	struct SetGainPerkInfo_Params {
		struct FPerkUIInfo& PerkUIInfo;
		int32_t CurrentLevel;
		int32_t LastLevel;
		char IsPlayingUltimateSound;
	}; SetGainPerkInfo_Params Params;

	Params.CurrentLevel = CurrentLevel;
	Params.LastLevel = LastLevel;
	Params.IsPlayingUltimateSound = IsPlayingUltimateSound;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	PerkUIInfo = Params.PerkUIInfo;

}

// Function UW-ListWidget_GainPerk.UW-ListWidget_GainPerk_C.Get_PerkName_ColorAndOpacity_1
inline struct FLinearColor UUW-ListWidget_GainPerk_C::Get_PerkName_ColorAndOpacity_1() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ListWidget_GainPerk.UW-ListWidget_GainPerk_C.Get_PerkName_ColorAndOpacity_1");

	struct Get_PerkName_ColorAndOpacity_1_Params {
		
		struct FLinearColor ReturnValue;

	}; Get_PerkName_ColorAndOpacity_1_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

