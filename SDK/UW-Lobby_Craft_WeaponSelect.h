// WidgetBlueprintGeneratedClass UW-Lobby_Craft_WeaponSelect.UW-Lobby_Craft_WeaponSelect_C
class UUW-Lobby_Craft_WeaponSelect_C : public UUserWidget {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248 (8)
	struct UButton btn_Cancel; // 0x250 (8)
	struct UButton btn_Cancel_3; // 0x258 (8)
	struct UButton btn_OK; // 0x260 (8)
	struct UHorizontalBox HorizontalBox_WeaponList; // 0x268 (8)
	struct UImage Image_68; // 0x270 (8)
	struct UImage Image_128; // 0x278 (8)
	struct UUW-Lobby_Craft_WeaponSelect_Slot_C UW-Lobby_Craft_WeaponSelect_Slot; // 0x280 (8)
	struct UUW-Lobby_Craft_WeaponSelect_Slot_C UW-Lobby_Craft_WeaponSelect_Slot_2; // 0x288 (8)
	struct UUW-Lobby_Craft_WeaponSelect_Slot_C UW-Lobby_Craft_WeaponSelect_Slot_3; // 0x290 (8)
	struct FMulticastInlineDelegate EventDispatcher_RequestItemCraft; // 0x298 (16)
	struct UUW-Lobby_Craft_WeaponSelect_Slot_C SelectedWidget; // 0x2A8 (8)
	struct FMulticastInlineDelegate EventDispatcher_Cancel; // 0x2B0 (16)

	void SetWeaponList(struct TArray<struct FResponse_Weapon_List_Data>& WeaponList, int32_t BaseItemID); // Function UW-Lobby_Craft_WeaponSelect.UW-Lobby_Craft_WeaponSelect_C.SetWeaponList(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void BndEvt__btn_Reinforce_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function UW-Lobby_Craft_WeaponSelect.UW-Lobby_Craft_WeaponSelect_C.BndEvt__btn_Reinforce_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void BndEvt__btn_Repair_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function UW-Lobby_Craft_WeaponSelect.UW-Lobby_Craft_WeaponSelect_C.BndEvt__btn_Repair_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void ChangeSelectedButton(struct UUW-Lobby_Craft_WeaponSelect_Slot_C SlotWidget); // Function UW-Lobby_Craft_WeaponSelect.UW-Lobby_Craft_WeaponSelect_C.ChangeSelectedButton(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void BndEvt__btn_Cancel_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function UW-Lobby_Craft_WeaponSelect.UW-Lobby_Craft_WeaponSelect_C.BndEvt__btn_Cancel_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void BndEvt__btn_Ok_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature(); // Function UW-Lobby_Craft_WeaponSelect.UW-Lobby_Craft_WeaponSelect_C.BndEvt__btn_Ok_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void ExecuteUbergraph_UW-Lobby_Craft_WeaponSelect(int32_t EntryPoint); // Function UW-Lobby_Craft_WeaponSelect.UW-Lobby_Craft_WeaponSelect_C.ExecuteUbergraph_UW-Lobby_Craft_WeaponSelect(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void EventDispatcher_Cancel__DelegateSignature(); // Function UW-Lobby_Craft_WeaponSelect.UW-Lobby_Craft_WeaponSelect_C.EventDispatcher_Cancel__DelegateSignature(Public|Delegate|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void EventDispatcher_RequestItemCraft__DelegateSignature(int32_t BaseIndex, struct FString ItemId); // Function UW-Lobby_Craft_WeaponSelect.UW-Lobby_Craft_WeaponSelect_C.EventDispatcher_RequestItemCraft__DelegateSignature(Public|Delegate|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
};

// Function UW-Lobby_Craft_WeaponSelect.UW-Lobby_Craft_WeaponSelect_C.SetWeaponList
inline void UUW-Lobby_Craft_WeaponSelect_C::SetWeaponList(struct TArray<struct FResponse_Weapon_List_Data>& WeaponList, int32_t BaseItemID) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_Craft_WeaponSelect.UW-Lobby_Craft_WeaponSelect_C.SetWeaponList");

	struct SetWeaponList_Params {
		struct TArray<struct FResponse_Weapon_List_Data>& WeaponList;
		int32_t BaseItemID;
	}; SetWeaponList_Params Params;

	Params.BaseItemID = BaseItemID;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	WeaponList = Params.WeaponList;

}

// Function UW-Lobby_Craft_WeaponSelect.UW-Lobby_Craft_WeaponSelect_C.BndEvt__btn_Reinforce_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
inline void UUW-Lobby_Craft_WeaponSelect_C::BndEvt__btn_Reinforce_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_Craft_WeaponSelect.UW-Lobby_Craft_WeaponSelect_C.BndEvt__btn_Reinforce_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	struct BndEvt__btn_Reinforce_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params {
		
	}; BndEvt__btn_Reinforce_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Lobby_Craft_WeaponSelect.UW-Lobby_Craft_WeaponSelect_C.BndEvt__btn_Repair_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
inline void UUW-Lobby_Craft_WeaponSelect_C::BndEvt__btn_Repair_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_Craft_WeaponSelect.UW-Lobby_Craft_WeaponSelect_C.BndEvt__btn_Repair_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	struct BndEvt__btn_Repair_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params {
		
	}; BndEvt__btn_Repair_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Lobby_Craft_WeaponSelect.UW-Lobby_Craft_WeaponSelect_C.ChangeSelectedButton
inline void UUW-Lobby_Craft_WeaponSelect_C::ChangeSelectedButton(struct UUW-Lobby_Craft_WeaponSelect_Slot_C SlotWidget) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_Craft_WeaponSelect.UW-Lobby_Craft_WeaponSelect_C.ChangeSelectedButton");

	struct ChangeSelectedButton_Params {
		struct UUW-Lobby_Craft_WeaponSelect_Slot_C SlotWidget;
	}; ChangeSelectedButton_Params Params;

	Params.SlotWidget = SlotWidget;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Lobby_Craft_WeaponSelect.UW-Lobby_Craft_WeaponSelect_C.BndEvt__btn_Cancel_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
inline void UUW-Lobby_Craft_WeaponSelect_C::BndEvt__btn_Cancel_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_Craft_WeaponSelect.UW-Lobby_Craft_WeaponSelect_C.BndEvt__btn_Cancel_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	struct BndEvt__btn_Cancel_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params {
		
	}; BndEvt__btn_Cancel_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Lobby_Craft_WeaponSelect.UW-Lobby_Craft_WeaponSelect_C.BndEvt__btn_Ok_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
inline void UUW-Lobby_Craft_WeaponSelect_C::BndEvt__btn_Ok_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_Craft_WeaponSelect.UW-Lobby_Craft_WeaponSelect_C.BndEvt__btn_Ok_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");

	struct BndEvt__btn_Ok_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params {
		
	}; BndEvt__btn_Ok_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Lobby_Craft_WeaponSelect.UW-Lobby_Craft_WeaponSelect_C.ExecuteUbergraph_UW-Lobby_Craft_WeaponSelect
inline void UUW-Lobby_Craft_WeaponSelect_C::ExecuteUbergraph_UW-Lobby_Craft_WeaponSelect(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_Craft_WeaponSelect.UW-Lobby_Craft_WeaponSelect_C.ExecuteUbergraph_UW-Lobby_Craft_WeaponSelect");

	struct ExecuteUbergraph_UW-Lobby_Craft_WeaponSelect_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_UW-Lobby_Craft_WeaponSelect_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Lobby_Craft_WeaponSelect.UW-Lobby_Craft_WeaponSelect_C.EventDispatcher_Cancel__DelegateSignature
inline void UUW-Lobby_Craft_WeaponSelect_C::EventDispatcher_Cancel__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_Craft_WeaponSelect.UW-Lobby_Craft_WeaponSelect_C.EventDispatcher_Cancel__DelegateSignature");

	struct EventDispatcher_Cancel__DelegateSignature_Params {
		
	}; EventDispatcher_Cancel__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Lobby_Craft_WeaponSelect.UW-Lobby_Craft_WeaponSelect_C.EventDispatcher_RequestItemCraft__DelegateSignature
inline void UUW-Lobby_Craft_WeaponSelect_C::EventDispatcher_RequestItemCraft__DelegateSignature(int32_t BaseIndex, struct FString ItemId) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_Craft_WeaponSelect.UW-Lobby_Craft_WeaponSelect_C.EventDispatcher_RequestItemCraft__DelegateSignature");

	struct EventDispatcher_RequestItemCraft__DelegateSignature_Params {
		int32_t BaseIndex;
		struct FString ItemId;
	}; EventDispatcher_RequestItemCraft__DelegateSignature_Params Params;

	Params.BaseIndex = BaseIndex;
	Params.ItemId = ItemId;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

