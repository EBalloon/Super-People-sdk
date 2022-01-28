// WidgetBlueprintGeneratedClass UW-Matchend_BuffList_Popup.UW-Matchend_BuffList_Popup_C
class UUW-Matchend_BuffList_Popup_C : public UUserWidget {

public:

	struct UWidgetAnimation Anim_Show; // 0x248 (8)
	struct UCanvasPanel CanvasPanel_Main; // 0x250 (8)
	struct UTextBlock T_DamageDecrease; // 0x258 (8)
	struct UTextBlock T_DamageDecrease2; // 0x260 (8)
	struct UTextBlock T_DamageIncrease; // 0x268 (8)
	struct UTextBlock T_DamageIncrease2; // 0x270 (8)
	struct UUW-Matchend_BuffList_C UW-Matchend_BuffList; // 0x278 (8)
	struct UUW-Matchend_BuffList_C UW-Matchend_BuffList_2; // 0x280 (8)
	struct UUW-Matchend_BuffList_C UW-Matchend_BuffList_3; // 0x288 (8)
	struct UUW-Matchend_BuffList_C UW-Matchend_BuffList_4; // 0x290 (8)
	struct UUW-Matchend_BuffList_C UW-Matchend_BuffList_6; // 0x298 (8)
	struct UUW-Matchend_BuffList_C UW-Matchend_BuffList_7; // 0x2A0 (8)
	struct UVerticalBox VerticalBox_Left; // 0x2A8 (8)
	struct UVerticalBox VerticalBox_Right; // 0x2B0 (8)
	struct UWidgetSwitcher WidgetSwitcher_Attacker; // 0x2B8 (8)

	void MakeBuffList(struct UVerticalBox TargetBox, struct TArray<struct FDamageBuffInfo>& DamageBuffInfo); // Function UW-Matchend_BuffList_Popup.UW-Matchend_BuffList_Popup_C.MakeBuffList(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void SetBuffPopupInfo(struct FDiedDamageInfo& DefenderBuffs); // Function UW-Matchend_BuffList_Popup.UW-Matchend_BuffList_Popup_C.SetBuffPopupInfo(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void ShowPopup(char IsTop, struct FDiedDamageInfo& DiedDamageInfo); // Function UW-Matchend_BuffList_Popup.UW-Matchend_BuffList_Popup_C.ShowPopup(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
};

// Function UW-Matchend_BuffList_Popup.UW-Matchend_BuffList_Popup_C.MakeBuffList
inline void UUW-Matchend_BuffList_Popup_C::MakeBuffList(struct UVerticalBox TargetBox, struct TArray<struct FDamageBuffInfo>& DamageBuffInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Matchend_BuffList_Popup.UW-Matchend_BuffList_Popup_C.MakeBuffList");

	struct MakeBuffList_Params {
		struct UVerticalBox TargetBox;
		struct TArray<struct FDamageBuffInfo>& DamageBuffInfo;
	}; MakeBuffList_Params Params;

	Params.TargetBox = TargetBox;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	DamageBuffInfo = Params.DamageBuffInfo;

}

// Function UW-Matchend_BuffList_Popup.UW-Matchend_BuffList_Popup_C.SetBuffPopupInfo
inline void UUW-Matchend_BuffList_Popup_C::SetBuffPopupInfo(struct FDiedDamageInfo& DefenderBuffs) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Matchend_BuffList_Popup.UW-Matchend_BuffList_Popup_C.SetBuffPopupInfo");

	struct SetBuffPopupInfo_Params {
		struct FDiedDamageInfo& DefenderBuffs;
	}; SetBuffPopupInfo_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	DefenderBuffs = Params.DefenderBuffs;

}

// Function UW-Matchend_BuffList_Popup.UW-Matchend_BuffList_Popup_C.ShowPopup
inline void UUW-Matchend_BuffList_Popup_C::ShowPopup(char IsTop, struct FDiedDamageInfo& DiedDamageInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Matchend_BuffList_Popup.UW-Matchend_BuffList_Popup_C.ShowPopup");

	struct ShowPopup_Params {
		char IsTop;
		struct FDiedDamageInfo& DiedDamageInfo;
	}; ShowPopup_Params Params;

	Params.IsTop = IsTop;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	DiedDamageInfo = Params.DiedDamageInfo;

}

