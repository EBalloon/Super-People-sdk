// WidgetBlueprintGeneratedClass UW-Matchend_DamageList.UW-Matchend_DamageList_C
class UUW-Matchend_DamageList_C : public UUserWidget {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248 (8)
	struct UWidgetAnimation Anim; // 0x250 (8)
	struct UButton Button_CheckHover; // 0x258 (8)
	struct UButton Button_CheckHover_2; // 0x260 (8)
	struct UCanvasPanel CanvasPanel_BuffBottom; // 0x268 (8)
	struct UCanvasPanel CanvasPanel_BuffTop; // 0x270 (8)
	struct UCanvasPanel CanvasPanel_Killer; // 0x278 (8)
	struct UCanvasPanel CanvasPanel_Main; // 0x280 (8)
	struct UCanvasPanel CanvasPanel_Me; // 0x288 (8)
	struct UCanvasPanel CanvasPanel_None; // 0x290 (8)
	struct UImage Image_9; // 0x298 (8)
	struct UImage Image_124; // 0x2A0 (8)
	struct UImage Image_681; // 0x2A8 (8)
	struct UImage Image_992; // 0x2B0 (8)
	struct UImage Image_Last; // 0x2B8 (8)
	struct UImage Image_OutLine_Killer; // 0x2C0 (8)
	struct UImage Image_OutLine_Me; // 0x2C8 (8)
	struct USizeBox SizeBox_Last; // 0x2D0 (8)
	struct UUW-MatchEnd_DamageList_Item_C UW-MatchEnd_DamageList_Item_Killer; // 0x2D8 (8)
	struct UUW-MatchEnd_DamageList_Item_C UW-MatchEnd_DamageList_Item_Me; // 0x2E0 (8)
	struct UUW-MatchEnd_DamageList_Item_C UW-MatchEnd_DamageList_Item_None; // 0x2E8 (8)
	struct UWidgetSwitcher WidgetSwitcher_DamageCauser; // 0x2F0 (8)
	struct FDiedDamageInfo DiedDamageInfo; // 0x2F8 (3040)
	char bIsLast : 0; // 0xED8 (1)
	struct FMulticastInlineDelegate EventDispatcher_HoverDamageList; // 0xEE0 (16)
	int32_t WidgetIndex; // 0xEF0 (4)

	void SetOutLineVisibility(char IsVisible); // Function UW-Matchend_DamageList.UW-Matchend_DamageList_C.SetOutLineVisibility(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void ResetDamageListAnim(); // Function UW-Matchend_DamageList.UW-Matchend_DamageList_C.ResetDamageListAnim(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void ShowBuffListPopup(struct UUW-Matchend_BuffList_Popup_C BuffListPopup); // Function UW-Matchend_DamageList.UW-Matchend_DamageList_C.ShowBuffListPopup(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void PlayDamageInfoAnim(); // Function UW-Matchend_DamageList.UW-Matchend_DamageList_C.PlayDamageInfoAnim(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void SetDiedDamageInfo(struct FDiedDamageInfo& DiedDamageInfo, char IsLast, int32_t WidgetIndex); // Function UW-Matchend_DamageList.UW-Matchend_DamageList_C.SetDiedDamageInfo(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void BndEvt__Button_CheckHover_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function UW-Matchend_DamageList.UW-Matchend_DamageList_C.BndEvt__Button_CheckHover_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void BndEvt__Button_CheckHover_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature(); // Function UW-Matchend_DamageList.UW-Matchend_DamageList_C.BndEvt__Button_CheckHover_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void BndEvt__Button_CheckHover_1_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature(); // Function UW-Matchend_DamageList.UW-Matchend_DamageList_C.BndEvt__Button_CheckHover_1_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void BndEvt__Button_CheckHover_1_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature(); // Function UW-Matchend_DamageList.UW-Matchend_DamageList_C.BndEvt__Button_CheckHover_1_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void ExecuteUbergraph_UW-Matchend_DamageList(int32_t EntryPoint); // Function UW-Matchend_DamageList.UW-Matchend_DamageList_C.ExecuteUbergraph_UW-Matchend_DamageList(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void EventDispatcher_HoverDamageList__DelegateSignature(int32_t WidgetIndex, char IsHoverd); // Function UW-Matchend_DamageList.UW-Matchend_DamageList_C.EventDispatcher_HoverDamageList__DelegateSignature(Public|Delegate|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
};

// Function UW-Matchend_DamageList.UW-Matchend_DamageList_C.SetOutLineVisibility
inline void UUW-Matchend_DamageList_C::SetOutLineVisibility(char IsVisible) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Matchend_DamageList.UW-Matchend_DamageList_C.SetOutLineVisibility");

	struct SetOutLineVisibility_Params {
		char IsVisible;
	}; SetOutLineVisibility_Params Params;

	Params.IsVisible = IsVisible;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Matchend_DamageList.UW-Matchend_DamageList_C.ResetDamageListAnim
inline void UUW-Matchend_DamageList_C::ResetDamageListAnim() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Matchend_DamageList.UW-Matchend_DamageList_C.ResetDamageListAnim");

	struct ResetDamageListAnim_Params {
		
	}; ResetDamageListAnim_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Matchend_DamageList.UW-Matchend_DamageList_C.ShowBuffListPopup
inline void UUW-Matchend_DamageList_C::ShowBuffListPopup(struct UUW-Matchend_BuffList_Popup_C BuffListPopup) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Matchend_DamageList.UW-Matchend_DamageList_C.ShowBuffListPopup");

	struct ShowBuffListPopup_Params {
		struct UUW-Matchend_BuffList_Popup_C BuffListPopup;
	}; ShowBuffListPopup_Params Params;

	Params.BuffListPopup = BuffListPopup;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Matchend_DamageList.UW-Matchend_DamageList_C.PlayDamageInfoAnim
inline void UUW-Matchend_DamageList_C::PlayDamageInfoAnim() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Matchend_DamageList.UW-Matchend_DamageList_C.PlayDamageInfoAnim");

	struct PlayDamageInfoAnim_Params {
		
	}; PlayDamageInfoAnim_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Matchend_DamageList.UW-Matchend_DamageList_C.SetDiedDamageInfo
inline void UUW-Matchend_DamageList_C::SetDiedDamageInfo(struct FDiedDamageInfo& DiedDamageInfo, char IsLast, int32_t WidgetIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Matchend_DamageList.UW-Matchend_DamageList_C.SetDiedDamageInfo");

	struct SetDiedDamageInfo_Params {
		struct FDiedDamageInfo& DiedDamageInfo;
		char IsLast;
		int32_t WidgetIndex;
	}; SetDiedDamageInfo_Params Params;

	Params.IsLast = IsLast;
	Params.WidgetIndex = WidgetIndex;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	DiedDamageInfo = Params.DiedDamageInfo;

}

// Function UW-Matchend_DamageList.UW-Matchend_DamageList_C.BndEvt__Button_CheckHover_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
inline void UUW-Matchend_DamageList_C::BndEvt__Button_CheckHover_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Matchend_DamageList.UW-Matchend_DamageList_C.BndEvt__Button_CheckHover_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	struct BndEvt__Button_CheckHover_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params {
		
	}; BndEvt__Button_CheckHover_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Matchend_DamageList.UW-Matchend_DamageList_C.BndEvt__Button_CheckHover_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
inline void UUW-Matchend_DamageList_C::BndEvt__Button_CheckHover_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Matchend_DamageList.UW-Matchend_DamageList_C.BndEvt__Button_CheckHover_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");

	struct BndEvt__Button_CheckHover_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params {
		
	}; BndEvt__Button_CheckHover_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Matchend_DamageList.UW-Matchend_DamageList_C.BndEvt__Button_CheckHover_1_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
inline void UUW-Matchend_DamageList_C::BndEvt__Button_CheckHover_1_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Matchend_DamageList.UW-Matchend_DamageList_C.BndEvt__Button_CheckHover_1_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature");

	struct BndEvt__Button_CheckHover_1_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params {
		
	}; BndEvt__Button_CheckHover_1_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Matchend_DamageList.UW-Matchend_DamageList_C.BndEvt__Button_CheckHover_1_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
inline void UUW-Matchend_DamageList_C::BndEvt__Button_CheckHover_1_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Matchend_DamageList.UW-Matchend_DamageList_C.BndEvt__Button_CheckHover_1_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature");

	struct BndEvt__Button_CheckHover_1_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature_Params {
		
	}; BndEvt__Button_CheckHover_1_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Matchend_DamageList.UW-Matchend_DamageList_C.ExecuteUbergraph_UW-Matchend_DamageList
inline void UUW-Matchend_DamageList_C::ExecuteUbergraph_UW-Matchend_DamageList(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Matchend_DamageList.UW-Matchend_DamageList_C.ExecuteUbergraph_UW-Matchend_DamageList");

	struct ExecuteUbergraph_UW-Matchend_DamageList_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_UW-Matchend_DamageList_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Matchend_DamageList.UW-Matchend_DamageList_C.EventDispatcher_HoverDamageList__DelegateSignature
inline void UUW-Matchend_DamageList_C::EventDispatcher_HoverDamageList__DelegateSignature(int32_t WidgetIndex, char IsHoverd) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Matchend_DamageList.UW-Matchend_DamageList_C.EventDispatcher_HoverDamageList__DelegateSignature");

	struct EventDispatcher_HoverDamageList__DelegateSignature_Params {
		int32_t WidgetIndex;
		char IsHoverd;
	}; EventDispatcher_HoverDamageList__DelegateSignature_Params Params;

	Params.WidgetIndex = WidgetIndex;
	Params.IsHoverd = IsHoverd;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

