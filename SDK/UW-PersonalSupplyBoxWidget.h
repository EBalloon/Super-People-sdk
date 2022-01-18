// WidgetBlueprintGeneratedClass UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C
class UUW-PersonalSupplyBoxWidget_C : public UBravoHotelPersonalSupplyBoxWidget {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3F8 (8)
	struct UWidgetAnimation Ani_PadOn; // 0x400 (8)
	struct UImage BG_Pad; // 0x408 (8)
	struct UButton btn_PerkDeckEnabled; // 0x410 (8)
	struct UCanvasPanel Canvas_ChangeEnable; // 0x418 (8)
	struct UCanvasPanel CanvasPanel; // 0x420 (8)
	struct UCanvasPanel CanvasPanel_3; // 0x428 (8)
	struct UComboBoxString ComboBoxString_237; // 0x430 (8)
	struct UTextBlock CurHaveGoldValue; // 0x438 (8)
	struct UTextBlock CurPriceText; // 0x440 (8)
	struct UImage Down; // 0x448 (8)
	struct UImage EquipBg; // 0x450 (8)
	struct UOverlay Free; // 0x458 (8)
	struct UImage GoldImage; // 0x460 (8)
	struct UImage GoldImage_2; // 0x468 (8)
	struct UOverlay GoldLack; // 0x470 (8)
	struct UTextBlock HaveWeaponText; // 0x478 (8)
	struct UHorizontalBox HorizontalBox_1; // 0x480 (8)
	struct UImage Image; // 0x488 (8)
	struct UImage Image_2; // 0x490 (8)
	struct UImage Image_3; // 0x498 (8)
	struct UImage Image_4; // 0x4A0 (8)
	struct UImage Image_5; // 0x4A8 (8)
	struct UImage Image_91; // 0x4B0 (8)
	struct UImage Image_119; // 0x4B8 (8)
	struct UImage Image_172; // 0x4C0 (8)
	struct UImage Image_192; // 0x4C8 (8)
	struct UImage Image_251; // 0x4D0 (8)
	struct UImage Image_362; // 0x4D8 (8)
	struct UImage Image_400; // 0x4E0 (8)
	struct UImage Image_545; // 0x4E8 (8)
	struct UImage Image_552; // 0x4F0 (8)
	struct UImage Image_614; // 0x4F8 (8)
	struct UImage Image_722; // 0x500 (8)
	struct UImage Image_1025; // 0x508 (8)
	struct UImage Image_1262; // 0x510 (8)
	struct UImage ItemIcon; // 0x518 (8)
	struct UTextBlock Items_1Text; // 0x520 (8)
	struct UScrollBox ItemScroll; // 0x528 (8)
	struct UTextBlock ItemsText; // 0x530 (8)
	struct UTextBlock OkText; // 0x538 (8)
	struct UOverlay Overlay_4; // 0x540 (8)
	struct UOverlay Overlay_215; // 0x548 (8)
	struct UImage PriceBg; // 0x550 (8)
	struct UImage PriceBg_2; // 0x558 (8)
	struct UTextBlock PriceText; // 0x560 (8)
	struct UTextBlock PriceValue; // 0x568 (8)
	struct URichTextBlock RichTextBlock; // 0x570 (8)
	struct URichTextBlock RichTextBlock_74; // 0x578 (8)
	struct USizeBox SizeBox_4; // 0x580 (8)
	struct UImage SlotBg; // 0x588 (8)
	struct UTextBlock SortText; // 0x590 (8)
	struct UTextBlock SpecialWeaponText; // 0x598 (8)
	struct UTextBlock TextBlock_3; // 0x5A0 (8)
	struct UImage Up; // 0x5A8 (8)
	struct UUW-PersonalSupplyBoxConsumableItemSlotWidget_C UW-PersonalSupplyBoxConsumableItemSlotWidget_2; // 0x5B0 (8)
	struct UUW-PersonalSupplyBoxConsumableItemSlotWidget_C UW-PersonalSupplyBoxConsumableItemSlotWidget_3; // 0x5B8 (8)
	struct UUW-PersonalSupplyBoxConsumableItemSlotWidget_C UW-PersonalSupplyBoxConsumableItemSlotWidget_4; // 0x5C0 (8)
	struct UUW-PersonalSupplyBoxConsumableItemSlotWidget_C UW-PersonalSupplyBoxConsumableItemSlotWidget_5; // 0x5C8 (8)
	struct UUW-PersonalSupplyBoxConsumableItemSlotWidget_C UW-PersonalSupplyBoxConsumableItemSlotWidget_6; // 0x5D0 (8)
	struct UUW-PersonalSupplyBoxWeaponInfoWidget_C UW-PersonalSupplyBoxWeaponInfoWidget_186; // 0x5D8 (8)
	struct UUW-SupplyToolTip_C UW-SupplyToolTip; // 0x5E0 (8)
	struct UUW-Timer_C UW-Timer; // 0x5E8 (8)
	struct UVerticalBox VerticalBox_1; // 0x5F0 (8)
	struct UScrollBox WeaponScroll; // 0x5F8 (8)
	struct UWidgetSwitcher WidgetSwitcher_1; // 0x600 (8)
	struct TArray<struct FText> SortType; // 0x608 (16)
	struct TArray<struct UImage> RarityList; // 0x618 (16)
	struct TMap<struct FString, struct UUW-ComboBoxText_C> ComboxList; // 0x628 (80)
	struct FString SelectComboBox; // 0x678 (16)
	char IsShowAni : 0; // 0x688 (1)
	char IsFree : 0; // 0x689 (1)
	struct FSupplyItem SaveSupplyItem; // 0x690 (256)
	int32_t CurOwnGold; // 0x790 (4)
	int32_t TotalPrice; // 0x794 (4)

	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.OnMouseButtonDown(BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void GetEmptySlot(char& bRet, struct UUW-PersonalSupplyBoxConsumableItemSlotWidget_C& Slot); // Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.GetEmptySlot(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	char OnDrop(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation Operation); // Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.OnDrop(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void GetConsumableItemSlot(int32_t Index, struct UUW-PersonalSupplyBoxConsumableItemSlotWidget_C& Widget); // Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.GetConsumableItemSlot(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	struct UWidget OnGenerateWidget_2(struct FString Item); // Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.OnGenerateWidget_2(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	struct UWidget OnGenerateWidget_1(struct FString Item); // Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.OnGenerateWidget_1(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	struct UBravoHotelPersonalSupplyBoxSlotItemWidget CraeteWeaponItemSlots(); // Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.CraeteWeaponItemSlots(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	struct UBravoHotelPersonalSupplyBoxSlotItemWidget CraeteConsumableItemSlots(); // Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.CraeteConsumableItemSlots(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void Construct(); // Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void BndEvt__btn_PerkDeckEnabled_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.BndEvt__btn_PerkDeckEnabled_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void BndEvt__ComboBoxString_236_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature(struct FString SelectedItem, char SelectionType); // Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.BndEvt__ComboBoxString_236_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void BndEvt__ComboBoxString_236_K2Node_ComponentBoundEvent_3_OnOpeningEvent__DelegateSignature(); // Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.BndEvt__ComboBoxString_236_K2Node_ComponentBoundEvent_3_OnOpeningEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void 鉹@t元_1(struct FSupplyItem ConsumalbeItemDat, int32_t SlotIndex); // Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.鉹@t元_1(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void SetConsumableItemData(int32_t SlotIndex, struct FSupplyItem& ConsumableItem, char SetEmpty); // Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.SetConsumableItemData(Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void SetWeaponData(struct FInventoryItemInfo& WeaponItem, char IsDefaultWeapon); // Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.SetWeaponData(Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void 鉹@t元_2(struct FInventoryItemInfo WeaponData); // Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.鉹@t元_2(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void Destruct(); // Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.Destruct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void SetTotalPrice(int32_t Price); // Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.SetTotalPrice(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void SetFree(char IsFree, int32_t FreeCount); // Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.SetFree(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void SetOwnGold(int32_t OwnGold); // Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.SetOwnGold(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void 鉹@t元_3(char IsShow, struct UUW-PersonalSupplyBoxConsumableItemSlotWidget_C Slot); // Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.鉹@t元_3(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void BndEvt__btn_PerkDeckEnabled_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.BndEvt__btn_PerkDeckEnabled_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void BndEvt__btn_PerkDeckEnabled_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature(); // Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.BndEvt__btn_PerkDeckEnabled_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void 鉹@t元_4(char IsShow, struct UButton Widget); // Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.鉹@t元_4(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void 鉹@t元_5(enum class EBattleRoyaleState PrevState, enum class EBattleRoyaleState CurrentState); // Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.鉹@t元_5(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void Close(); // Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.Close(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void 鉹@t元_6(); // Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.鉹@t元_6(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void 鉹@t元_7(); // Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.鉹@t元_7(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void ShowConsumableSlotHoverEffect(char IsHover); // Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.ShowConsumableSlotHoverEffect(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void EquipSlot(struct UUW-PersonalSupplyBoxSlotItemWidget_C Slot); // Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.EquipSlot(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void 鉹@t元_8(struct UUW-PersonalSupplyBoxConsumableItemSlotWidget_C Source, struct UUW-PersonalSupplyBoxConsumableItemSlotWidget_C Target); // Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.鉹@t元_8(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void 鉹@t元_9(struct UUW-PersonalSupplyBoxConsumableItemSlotWidget_C Slot); // Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.鉹@t元_9(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void EquipWeaponSlot(struct UUW-PersonalSupplyBoxSlotItemWidget_C Slot); // Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.EquipWeaponSlot(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void 鉹@t元_10(struct FInventoryItemInfo Weapon); // Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.鉹@t元_10(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void SetEnoughtGold(char IsEnought); // Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.SetEnoughtGold(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void ExecuteUbergraph_UW-PersonalSupplyBoxWidget(int32_t EntryPoint); // Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.ExecuteUbergraph_UW-PersonalSupplyBoxWidget(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
};

// Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.OnMouseButtonDown
inline struct FEventReply UUW-PersonalSupplyBoxWidget_C::OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.OnMouseButtonDown");

	struct OnMouseButtonDown_Params {
		struct FGeometry MyGeometry;
		struct FPointerEvent& MouseEvent;
		struct FEventReply ReturnValue;

	}; OnMouseButtonDown_Params Params;

	Params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	MouseEvent = Params.MouseEvent;


	return params.ReturnValue;
}

// Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.GetEmptySlot
inline void UUW-PersonalSupplyBoxWidget_C::GetEmptySlot(char& bRet, struct UUW-PersonalSupplyBoxConsumableItemSlotWidget_C& Slot) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.GetEmptySlot");

	struct GetEmptySlot_Params {
		char& bRet;
		struct UUW-PersonalSupplyBoxConsumableItemSlotWidget_C& Slot;
	}; GetEmptySlot_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	bRet = Params.bRet;
	Slot = Params.Slot;

}

// Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.OnDrop
inline char UUW-PersonalSupplyBoxWidget_C::OnDrop(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation Operation) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.OnDrop");

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

// Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.GetConsumableItemSlot
inline void UUW-PersonalSupplyBoxWidget_C::GetConsumableItemSlot(int32_t Index, struct UUW-PersonalSupplyBoxConsumableItemSlotWidget_C& Widget) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.GetConsumableItemSlot");

	struct GetConsumableItemSlot_Params {
		int32_t Index;
		struct UUW-PersonalSupplyBoxConsumableItemSlotWidget_C& Widget;
	}; GetConsumableItemSlot_Params Params;

	Params.Index = Index;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Widget = Params.Widget;

}

// Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.OnGenerateWidget_2
inline struct UWidget UUW-PersonalSupplyBoxWidget_C::OnGenerateWidget_2(struct FString Item) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.OnGenerateWidget_2");

	struct OnGenerateWidget_2_Params {
		struct FString Item;
		struct UWidget ReturnValue;

	}; OnGenerateWidget_2_Params Params;

	Params.Item = Item;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.OnGenerateWidget_1
inline struct UWidget UUW-PersonalSupplyBoxWidget_C::OnGenerateWidget_1(struct FString Item) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.OnGenerateWidget_1");

	struct OnGenerateWidget_1_Params {
		struct FString Item;
		struct UWidget ReturnValue;

	}; OnGenerateWidget_1_Params Params;

	Params.Item = Item;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.CraeteWeaponItemSlots
inline struct UBravoHotelPersonalSupplyBoxSlotItemWidget UUW-PersonalSupplyBoxWidget_C::CraeteWeaponItemSlots() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.CraeteWeaponItemSlots");

	struct CraeteWeaponItemSlots_Params {
		
		struct UBravoHotelPersonalSupplyBoxSlotItemWidget ReturnValue;

	}; CraeteWeaponItemSlots_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.CraeteConsumableItemSlots
inline struct UBravoHotelPersonalSupplyBoxSlotItemWidget UUW-PersonalSupplyBoxWidget_C::CraeteConsumableItemSlots() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.CraeteConsumableItemSlots");

	struct CraeteConsumableItemSlots_Params {
		
		struct UBravoHotelPersonalSupplyBoxSlotItemWidget ReturnValue;

	}; CraeteConsumableItemSlots_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.Construct
inline void UUW-PersonalSupplyBoxWidget_C::Construct() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.Construct");

	struct Construct_Params {
		
	}; Construct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.BndEvt__btn_PerkDeckEnabled_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
inline void UUW-PersonalSupplyBoxWidget_C::BndEvt__btn_PerkDeckEnabled_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.BndEvt__btn_PerkDeckEnabled_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	struct BndEvt__btn_PerkDeckEnabled_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params {
		
	}; BndEvt__btn_PerkDeckEnabled_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.BndEvt__ComboBoxString_236_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature
inline void UUW-PersonalSupplyBoxWidget_C::BndEvt__ComboBoxString_236_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature(struct FString SelectedItem, char SelectionType) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.BndEvt__ComboBoxString_236_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature");

	struct BndEvt__ComboBoxString_236_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature_Params {
		struct FString SelectedItem;
		char SelectionType;
	}; BndEvt__ComboBoxString_236_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature_Params Params;

	Params.SelectedItem = SelectedItem;
	Params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.BndEvt__ComboBoxString_236_K2Node_ComponentBoundEvent_3_OnOpeningEvent__DelegateSignature
inline void UUW-PersonalSupplyBoxWidget_C::BndEvt__ComboBoxString_236_K2Node_ComponentBoundEvent_3_OnOpeningEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.BndEvt__ComboBoxString_236_K2Node_ComponentBoundEvent_3_OnOpeningEvent__DelegateSignature");

	struct BndEvt__ComboBoxString_236_K2Node_ComponentBoundEvent_3_OnOpeningEvent__DelegateSignature_Params {
		
	}; BndEvt__ComboBoxString_236_K2Node_ComponentBoundEvent_3_OnOpeningEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.鉹@t元_1
inline void UUW-PersonalSupplyBoxWidget_C::鉹@t元_1(struct FSupplyItem ConsumalbeItemDat, int32_t SlotIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.鉹@t元_1");

	struct 鉹@t元_1_Params {
		struct FSupplyItem ConsumalbeItemDat;
		int32_t SlotIndex;
	}; 鉹@t元_1_Params Params;

	Params.ConsumalbeItemDat = ConsumalbeItemDat;
	Params.SlotIndex = SlotIndex;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.SetConsumableItemData
inline void UUW-PersonalSupplyBoxWidget_C::SetConsumableItemData(int32_t SlotIndex, struct FSupplyItem& ConsumableItem, char SetEmpty) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.SetConsumableItemData");

	struct SetConsumableItemData_Params {
		int32_t SlotIndex;
		struct FSupplyItem& ConsumableItem;
		char SetEmpty;
	}; SetConsumableItemData_Params Params;

	Params.SlotIndex = SlotIndex;
	Params.SetEmpty = SetEmpty;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	ConsumableItem = Params.ConsumableItem;

}

// Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.SetWeaponData
inline void UUW-PersonalSupplyBoxWidget_C::SetWeaponData(struct FInventoryItemInfo& WeaponItem, char IsDefaultWeapon) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.SetWeaponData");

	struct SetWeaponData_Params {
		struct FInventoryItemInfo& WeaponItem;
		char IsDefaultWeapon;
	}; SetWeaponData_Params Params;

	Params.IsDefaultWeapon = IsDefaultWeapon;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	WeaponItem = Params.WeaponItem;

}

// Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.鉹@t元_2
inline void UUW-PersonalSupplyBoxWidget_C::鉹@t元_2(struct FInventoryItemInfo WeaponData) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.鉹@t元_2");

	struct 鉹@t元_2_Params {
		struct FInventoryItemInfo WeaponData;
	}; 鉹@t元_2_Params Params;

	Params.WeaponData = WeaponData;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.Destruct
inline void UUW-PersonalSupplyBoxWidget_C::Destruct() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.Destruct");

	struct Destruct_Params {
		
	}; Destruct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.SetTotalPrice
inline void UUW-PersonalSupplyBoxWidget_C::SetTotalPrice(int32_t Price) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.SetTotalPrice");

	struct SetTotalPrice_Params {
		int32_t Price;
	}; SetTotalPrice_Params Params;

	Params.Price = Price;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.SetFree
inline void UUW-PersonalSupplyBoxWidget_C::SetFree(char IsFree, int32_t FreeCount) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.SetFree");

	struct SetFree_Params {
		char IsFree;
		int32_t FreeCount;
	}; SetFree_Params Params;

	Params.IsFree = IsFree;
	Params.FreeCount = FreeCount;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.SetOwnGold
inline void UUW-PersonalSupplyBoxWidget_C::SetOwnGold(int32_t OwnGold) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.SetOwnGold");

	struct SetOwnGold_Params {
		int32_t OwnGold;
	}; SetOwnGold_Params Params;

	Params.OwnGold = OwnGold;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.鉹@t元_3
inline void UUW-PersonalSupplyBoxWidget_C::鉹@t元_3(char IsShow, struct UUW-PersonalSupplyBoxConsumableItemSlotWidget_C Slot) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.鉹@t元_3");

	struct 鉹@t元_3_Params {
		char IsShow;
		struct UUW-PersonalSupplyBoxConsumableItemSlotWidget_C Slot;
	}; 鉹@t元_3_Params Params;

	Params.IsShow = IsShow;
	Params.Slot = Slot;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.BndEvt__btn_PerkDeckEnabled_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
inline void UUW-PersonalSupplyBoxWidget_C::BndEvt__btn_PerkDeckEnabled_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.BndEvt__btn_PerkDeckEnabled_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	struct BndEvt__btn_PerkDeckEnabled_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params {
		
	}; BndEvt__btn_PerkDeckEnabled_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.BndEvt__btn_PerkDeckEnabled_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
inline void UUW-PersonalSupplyBoxWidget_C::BndEvt__btn_PerkDeckEnabled_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.BndEvt__btn_PerkDeckEnabled_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature");

	struct BndEvt__btn_PerkDeckEnabled_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params {
		
	}; BndEvt__btn_PerkDeckEnabled_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.鉹@t元_4
inline void UUW-PersonalSupplyBoxWidget_C::鉹@t元_4(char IsShow, struct UButton Widget) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.鉹@t元_4");

	struct 鉹@t元_4_Params {
		char IsShow;
		struct UButton Widget;
	}; 鉹@t元_4_Params Params;

	Params.IsShow = IsShow;
	Params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.鉹@t元_5
inline void UUW-PersonalSupplyBoxWidget_C::鉹@t元_5(enum class EBattleRoyaleState PrevState, enum class EBattleRoyaleState CurrentState) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.鉹@t元_5");

	struct 鉹@t元_5_Params {
		enum class EBattleRoyaleState PrevState;
		enum class EBattleRoyaleState CurrentState;
	}; 鉹@t元_5_Params Params;

	Params.PrevState = PrevState;
	Params.CurrentState = CurrentState;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.Close
inline void UUW-PersonalSupplyBoxWidget_C::Close() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.Close");

	struct Close_Params {
		
	}; Close_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.鉹@t元_6
inline void UUW-PersonalSupplyBoxWidget_C::鉹@t元_6() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.鉹@t元_6");

	struct 鉹@t元_6_Params {
		
	}; 鉹@t元_6_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.鉹@t元_7
inline void UUW-PersonalSupplyBoxWidget_C::鉹@t元_7() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.鉹@t元_7");

	struct 鉹@t元_7_Params {
		
	}; 鉹@t元_7_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.ShowConsumableSlotHoverEffect
inline void UUW-PersonalSupplyBoxWidget_C::ShowConsumableSlotHoverEffect(char IsHover) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.ShowConsumableSlotHoverEffect");

	struct ShowConsumableSlotHoverEffect_Params {
		char IsHover;
	}; ShowConsumableSlotHoverEffect_Params Params;

	Params.IsHover = IsHover;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.EquipSlot
inline void UUW-PersonalSupplyBoxWidget_C::EquipSlot(struct UUW-PersonalSupplyBoxSlotItemWidget_C Slot) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.EquipSlot");

	struct EquipSlot_Params {
		struct UUW-PersonalSupplyBoxSlotItemWidget_C Slot;
	}; EquipSlot_Params Params;

	Params.Slot = Slot;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.鉹@t元_8
inline void UUW-PersonalSupplyBoxWidget_C::鉹@t元_8(struct UUW-PersonalSupplyBoxConsumableItemSlotWidget_C Source, struct UUW-PersonalSupplyBoxConsumableItemSlotWidget_C Target) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.鉹@t元_8");

	struct 鉹@t元_8_Params {
		struct UUW-PersonalSupplyBoxConsumableItemSlotWidget_C Source;
		struct UUW-PersonalSupplyBoxConsumableItemSlotWidget_C Target;
	}; 鉹@t元_8_Params Params;

	Params.Source = Source;
	Params.Target = Target;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.鉹@t元_9
inline void UUW-PersonalSupplyBoxWidget_C::鉹@t元_9(struct UUW-PersonalSupplyBoxConsumableItemSlotWidget_C Slot) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.鉹@t元_9");

	struct 鉹@t元_9_Params {
		struct UUW-PersonalSupplyBoxConsumableItemSlotWidget_C Slot;
	}; 鉹@t元_9_Params Params;

	Params.Slot = Slot;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.EquipWeaponSlot
inline void UUW-PersonalSupplyBoxWidget_C::EquipWeaponSlot(struct UUW-PersonalSupplyBoxSlotItemWidget_C Slot) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.EquipWeaponSlot");

	struct EquipWeaponSlot_Params {
		struct UUW-PersonalSupplyBoxSlotItemWidget_C Slot;
	}; EquipWeaponSlot_Params Params;

	Params.Slot = Slot;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.鉹@t元_10
inline void UUW-PersonalSupplyBoxWidget_C::鉹@t元_10(struct FInventoryItemInfo Weapon) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.鉹@t元_10");

	struct 鉹@t元_10_Params {
		struct FInventoryItemInfo Weapon;
	}; 鉹@t元_10_Params Params;

	Params.Weapon = Weapon;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.SetEnoughtGold
inline void UUW-PersonalSupplyBoxWidget_C::SetEnoughtGold(char IsEnought) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.SetEnoughtGold");

	struct SetEnoughtGold_Params {
		char IsEnought;
	}; SetEnoughtGold_Params Params;

	Params.IsEnought = IsEnought;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.ExecuteUbergraph_UW-PersonalSupplyBoxWidget
inline void UUW-PersonalSupplyBoxWidget_C::ExecuteUbergraph_UW-PersonalSupplyBoxWidget(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.ExecuteUbergraph_UW-PersonalSupplyBoxWidget");

	struct ExecuteUbergraph_UW-PersonalSupplyBoxWidget_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_UW-PersonalSupplyBoxWidget_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

