// WidgetBlueprintGeneratedClass UW-Lobby_Craft_WeaponSelect_Slot.UW-Lobby_Craft_WeaponSelect_Slot_C
class UUW-Lobby_Craft_WeaponSelect_Slot_C : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown Button_ItemSlotHover_4; // 0x250 (8)
	struct Unknown UW-Inventory_ItemSlotHover_4; // 0x258 (8)
	struct Unknown ItemWeaponInfo; // 0x260 (136)
	struct Unknown ParentWidget; // 0x2E8 (8)

	void SetButtonEnabled(char InIsEnabled); // Function UW-Lobby_Craft_WeaponSelect_Slot.UW-Lobby_Craft_WeaponSelect_Slot_C.SetButtonEnabled(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void SetWeaponInfo(struct Unknown& ItemWeaponInfo, struct Unknown ParentWidget); // Function UW-Lobby_Craft_WeaponSelect_Slot.UW-Lobby_Craft_WeaponSelect_Slot_C.SetWeaponInfo(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void BndEvt__Button_ItemSlotHover_3_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function UW-Lobby_Craft_WeaponSelect_Slot.UW-Lobby_Craft_WeaponSelect_Slot_C.BndEvt__Button_ItemSlotHover_3_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void ResetButton(); // Function UW-Lobby_Craft_WeaponSelect_Slot.UW-Lobby_Craft_WeaponSelect_Slot_C.ResetButton(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void SelectButton(); // Function UW-Lobby_Craft_WeaponSelect_Slot.UW-Lobby_Craft_WeaponSelect_Slot_C.SelectButton(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void ExecuteUbergraph_UW-Lobby_Craft_WeaponSelect_Slot(int32_t EntryPoint); // Function UW-Lobby_Craft_WeaponSelect_Slot.UW-Lobby_Craft_WeaponSelect_Slot_C.ExecuteUbergraph_UW-Lobby_Craft_WeaponSelect_Slot(Final|UbergraphFunction|HasDefaults) // <Game_BE.exe+0x2B812B0>
};

// Function UW-Lobby_Craft_WeaponSelect_Slot.UW-Lobby_Craft_WeaponSelect_Slot_C.SetButtonEnabled
inline void UUW-Lobby_Craft_WeaponSelect_Slot_C::SetButtonEnabled(char InIsEnabled) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_Craft_WeaponSelect_Slot.UW-Lobby_Craft_WeaponSelect_Slot_C.SetButtonEnabled");

	struct SetButtonEnabled_Params {
		char InIsEnabled;
	}; SetButtonEnabled_Params Params;

	Params.InIsEnabled = InIsEnabled;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Lobby_Craft_WeaponSelect_Slot.UW-Lobby_Craft_WeaponSelect_Slot_C.SetWeaponInfo
inline void UUW-Lobby_Craft_WeaponSelect_Slot_C::SetWeaponInfo(struct Unknown& ItemWeaponInfo, struct Unknown ParentWidget) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_Craft_WeaponSelect_Slot.UW-Lobby_Craft_WeaponSelect_Slot_C.SetWeaponInfo");

	struct SetWeaponInfo_Params {
		struct Unknown& ItemWeaponInfo;
		struct Unknown ParentWidget;
	}; SetWeaponInfo_Params Params;

	Params.ParentWidget = ParentWidget;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	ItemWeaponInfo = Params.ItemWeaponInfo;

}

// Function UW-Lobby_Craft_WeaponSelect_Slot.UW-Lobby_Craft_WeaponSelect_Slot_C.BndEvt__Button_ItemSlotHover_3_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
inline void UUW-Lobby_Craft_WeaponSelect_Slot_C::BndEvt__Button_ItemSlotHover_3_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_Craft_WeaponSelect_Slot.UW-Lobby_Craft_WeaponSelect_Slot_C.BndEvt__Button_ItemSlotHover_3_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	struct BndEvt__Button_ItemSlotHover_3_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params {
		
	}; BndEvt__Button_ItemSlotHover_3_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Lobby_Craft_WeaponSelect_Slot.UW-Lobby_Craft_WeaponSelect_Slot_C.ResetButton
inline void UUW-Lobby_Craft_WeaponSelect_Slot_C::ResetButton() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_Craft_WeaponSelect_Slot.UW-Lobby_Craft_WeaponSelect_Slot_C.ResetButton");

	struct ResetButton_Params {
		
	}; ResetButton_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Lobby_Craft_WeaponSelect_Slot.UW-Lobby_Craft_WeaponSelect_Slot_C.SelectButton
inline void UUW-Lobby_Craft_WeaponSelect_Slot_C::SelectButton() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_Craft_WeaponSelect_Slot.UW-Lobby_Craft_WeaponSelect_Slot_C.SelectButton");

	struct SelectButton_Params {
		
	}; SelectButton_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Lobby_Craft_WeaponSelect_Slot.UW-Lobby_Craft_WeaponSelect_Slot_C.ExecuteUbergraph_UW-Lobby_Craft_WeaponSelect_Slot
inline void UUW-Lobby_Craft_WeaponSelect_Slot_C::ExecuteUbergraph_UW-Lobby_Craft_WeaponSelect_Slot(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_Craft_WeaponSelect_Slot.UW-Lobby_Craft_WeaponSelect_Slot_C.ExecuteUbergraph_UW-Lobby_Craft_WeaponSelect_Slot");

	struct ExecuteUbergraph_UW-Lobby_Craft_WeaponSelect_Slot_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_UW-Lobby_Craft_WeaponSelect_Slot_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

