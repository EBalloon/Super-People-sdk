// WidgetBlueprintGeneratedClass UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C
class UUW-PersonalSupplyBoxWidget_C : public UBravoHotelPersonalSupplyBoxWidget {

public:

	struct Unknown UberGraphFrame; // 0x3F8 (8)
	struct Unknown Ani_PadOn; // 0x400 (8)
	struct Unknown BG_Pad; // 0x408 (8)
	struct Unknown btn_PerkDeckEnabled; // 0x410 (8)
	struct Unknown Canvas_ChangeEnable; // 0x418 (8)
	struct Unknown CanvasPanel; // 0x420 (8)
	struct Unknown CanvasPanel_3; // 0x428 (8)
	struct Unknown ComboBoxString_237; // 0x430 (8)
	struct Unknown CurHaveGoldValue; // 0x438 (8)
	struct Unknown CurPriceText; // 0x440 (8)
	struct Unknown Down; // 0x448 (8)
	struct Unknown EquipBg; // 0x450 (8)
	struct Unknown Free; // 0x458 (8)
	struct Unknown GoldImage; // 0x460 (8)
	struct Unknown GoldImage_2; // 0x468 (8)
	struct Unknown GoldLack; // 0x470 (8)
	struct Unknown HaveWeaponText; // 0x478 (8)
	struct Unknown HorizontalBox_1; // 0x480 (8)
	struct Unknown Image; // 0x488 (8)
	struct Unknown Image_2; // 0x490 (8)
	struct Unknown Image_3; // 0x498 (8)
	struct Unknown Image_4; // 0x4A0 (8)
	struct Unknown Image_5; // 0x4A8 (8)
	struct Unknown Image_91; // 0x4B0 (8)
	struct Unknown Image_119; // 0x4B8 (8)
	struct Unknown Image_172; // 0x4C0 (8)
	struct Unknown Image_192; // 0x4C8 (8)
	struct Unknown Image_251; // 0x4D0 (8)
	struct Unknown Image_362; // 0x4D8 (8)
	struct Unknown Image_400; // 0x4E0 (8)
	struct Unknown Image_545; // 0x4E8 (8)
	struct Unknown Image_552; // 0x4F0 (8)
	struct Unknown Image_614; // 0x4F8 (8)
	struct Unknown Image_722; // 0x500 (8)
	struct Unknown Image_1025; // 0x508 (8)
	struct Unknown Image_1262; // 0x510 (8)
	struct Unknown ItemIcon; // 0x518 (8)
	struct Unknown Items_1Text; // 0x520 (8)
	struct Unknown ItemScroll; // 0x528 (8)
	struct Unknown ItemsText; // 0x530 (8)
	struct Unknown OkText; // 0x538 (8)
	struct Unknown Overlay_4; // 0x540 (8)
	struct Unknown Overlay_215; // 0x548 (8)
	struct Unknown PriceBg; // 0x550 (8)
	struct Unknown PriceBg_2; // 0x558 (8)
	struct Unknown PriceText; // 0x560 (8)
	struct Unknown PriceValue; // 0x568 (8)
	struct Unknown RichTextBlock; // 0x570 (8)
	struct Unknown RichTextBlock_74; // 0x578 (8)
	struct Unknown SizeBox_4; // 0x580 (8)
	struct Unknown SlotBg; // 0x588 (8)
	struct Unknown SortText; // 0x590 (8)
	struct Unknown SpecialWeaponText; // 0x598 (8)
	struct Unknown TextBlock_3; // 0x5A0 (8)
	struct Unknown Up; // 0x5A8 (8)
	struct Unknown UW-PersonalSupplyBoxConsumableItemSlotWidget_2; // 0x5B0 (8)
	struct Unknown UW-PersonalSupplyBoxConsumableItemSlotWidget_3; // 0x5B8 (8)
	struct Unknown UW-PersonalSupplyBoxConsumableItemSlotWidget_4; // 0x5C0 (8)
	struct Unknown UW-PersonalSupplyBoxConsumableItemSlotWidget_5; // 0x5C8 (8)
	struct Unknown UW-PersonalSupplyBoxConsumableItemSlotWidget_6; // 0x5D0 (8)
	struct Unknown UW-PersonalSupplyBoxWeaponInfoWidget_186; // 0x5D8 (8)
	struct Unknown UW-SupplyToolTip; // 0x5E0 (8)
	struct Unknown UW-Timer; // 0x5E8 (8)
	struct Unknown VerticalBox_1; // 0x5F0 (8)
	struct Unknown WeaponScroll; // 0x5F8 (8)
	struct Unknown WidgetSwitcher_1; // 0x600 (8)
	struct TArray<Unknown> SortType; // 0x608 (16)
	struct TArray<Unknown> RarityList; // 0x618 (16)
	struct TMap<Unknown, Unknown> ComboxList; // 0x628 (80)
	struct FString SelectComboBox; // 0x678 (16)
	char IsShowAni : 0; // 0x688 (1)
	char IsFree : 0; // 0x689 (1)
	struct Unknown SaveSupplyItem; // 0x690 (256)
	int32_t CurOwnGold; // 0x790 (4)
	int32_t TotalPrice; // 0x794 (4)

	struct Unknown OnMouseButtonDown(struct Unknown MyGeometry, struct Unknown& MouseEvent); // Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.OnMouseButtonDown(BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void GetEmptySlot(char& bRet, struct Unknown& Slot); // Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.GetEmptySlot(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	char OnDrop(struct Unknown MyGeometry, struct Unknown PointerEvent, struct Unknown Operation); // Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.OnDrop(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void GetConsumableItemSlot(int32_t Index, struct Unknown& Widget); // Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.GetConsumableItemSlot(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	struct Unknown OnGenerateWidget_2(struct FString Item); // Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.OnGenerateWidget_2(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	struct Unknown OnGenerateWidget_1(struct FString Item); // Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.OnGenerateWidget_1(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	struct Unknown CraeteWeaponItemSlots(); // Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.CraeteWeaponItemSlots(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	struct Unknown CraeteConsumableItemSlots(); // Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.CraeteConsumableItemSlots(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Construct(); // Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void BndEvt__btn_PerkDeckEnabled_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.BndEvt__btn_PerkDeckEnabled_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void BndEvt__ComboBoxString_236_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature(struct FString SelectedItem, char SelectionType); // Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.BndEvt__ComboBoxString_236_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void BndEvt__ComboBoxString_236_K2Node_ComponentBoundEvent_3_OnOpeningEvent__DelegateSignature(); // Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.BndEvt__ComboBoxString_236_K2Node_ComponentBoundEvent_3_OnOpeningEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void 鉹@t元_1(struct Unknown ConsumalbeItemDat, int32_t SlotIndex); // Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.鉹@t元_1(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void SetConsumableItemData(int32_t SlotIndex, struct Unknown& ConsumableItem, char SetEmpty); // Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.SetConsumableItemData(Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void SetWeaponData(struct Unknown& WeaponItem, char IsDefaultWeapon); // Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.SetWeaponData(Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void 鉹@t元_2(struct Unknown WeaponData); // Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.鉹@t元_2(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Destruct(); // Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.Destruct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void SetTotalPrice(int32_t Price); // Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.SetTotalPrice(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void SetFree(char IsFree, int32_t FreeCount); // Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.SetFree(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void SetOwnGold(int32_t OwnGold); // Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.SetOwnGold(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void 鉹@t元_3(char IsShow, struct Unknown Slot); // Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.鉹@t元_3(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void BndEvt__btn_PerkDeckEnabled_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.BndEvt__btn_PerkDeckEnabled_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void BndEvt__btn_PerkDeckEnabled_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature(); // Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.BndEvt__btn_PerkDeckEnabled_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void 鉹@t元_4(char IsShow, struct Unknown Widget); // Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.鉹@t元_4(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void 鉹@t元_5(enum class Unknow PrevState, enum class Unknow CurrentState); // Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.鉹@t元_5(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Close(); // Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.Close(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void 鉹@t元_6(); // Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.鉹@t元_6(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void 鉹@t元_7(); // Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.鉹@t元_7(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void ShowConsumableSlotHoverEffect(char IsHover); // Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.ShowConsumableSlotHoverEffect(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void EquipSlot(struct Unknown Slot); // Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.EquipSlot(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void 鉹@t元_8(struct Unknown Source, struct Unknown Target); // Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.鉹@t元_8(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void 鉹@t元_9(struct Unknown Slot); // Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.鉹@t元_9(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void EquipWeaponSlot(struct Unknown Slot); // Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.EquipWeaponSlot(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void 鉹@t元_10(struct Unknown Weapon); // Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.鉹@t元_10(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void SetEnoughtGold(char IsEnought); // Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.SetEnoughtGold(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void ExecuteUbergraph_UW-PersonalSupplyBoxWidget(int32_t EntryPoint); // Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.ExecuteUbergraph_UW-PersonalSupplyBoxWidget(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
};

// Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.OnMouseButtonDown
inline struct Unknown UUW-PersonalSupplyBoxWidget_C::OnMouseButtonDown(struct Unknown MyGeometry, struct Unknown& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.OnMouseButtonDown");

	struct OnMouseButtonDown_Params {
		struct Unknown MyGeometry;
		struct Unknown& MouseEvent;
		struct Unknown ReturnValue;

	}; OnMouseButtonDown_Params Params;

	Params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	MouseEvent = Params.MouseEvent;


	return params.ReturnValue;
}

// Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.GetEmptySlot
inline void UUW-PersonalSupplyBoxWidget_C::GetEmptySlot(char& bRet, struct Unknown& Slot) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.GetEmptySlot");

	struct GetEmptySlot_Params {
		char& bRet;
		struct Unknown& Slot;
	}; GetEmptySlot_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	bRet = Params.bRet;
	Slot = Params.Slot;

}

// Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.OnDrop
inline char UUW-PersonalSupplyBoxWidget_C::OnDrop(struct Unknown MyGeometry, struct Unknown PointerEvent, struct Unknown Operation) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.OnDrop");

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

// Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.GetConsumableItemSlot
inline void UUW-PersonalSupplyBoxWidget_C::GetConsumableItemSlot(int32_t Index, struct Unknown& Widget) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.GetConsumableItemSlot");

	struct GetConsumableItemSlot_Params {
		int32_t Index;
		struct Unknown& Widget;
	}; GetConsumableItemSlot_Params Params;

	Params.Index = Index;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Widget = Params.Widget;

}

// Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.OnGenerateWidget_2
inline struct Unknown UUW-PersonalSupplyBoxWidget_C::OnGenerateWidget_2(struct FString Item) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.OnGenerateWidget_2");

	struct OnGenerateWidget_2_Params {
		struct FString Item;
		struct Unknown ReturnValue;

	}; OnGenerateWidget_2_Params Params;

	Params.Item = Item;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.OnGenerateWidget_1
inline struct Unknown UUW-PersonalSupplyBoxWidget_C::OnGenerateWidget_1(struct FString Item) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.OnGenerateWidget_1");

	struct OnGenerateWidget_1_Params {
		struct FString Item;
		struct Unknown ReturnValue;

	}; OnGenerateWidget_1_Params Params;

	Params.Item = Item;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.CraeteWeaponItemSlots
inline struct Unknown UUW-PersonalSupplyBoxWidget_C::CraeteWeaponItemSlots() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.CraeteWeaponItemSlots");

	struct CraeteWeaponItemSlots_Params {
		
		struct Unknown ReturnValue;

	}; CraeteWeaponItemSlots_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.CraeteConsumableItemSlots
inline struct Unknown UUW-PersonalSupplyBoxWidget_C::CraeteConsumableItemSlots() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.CraeteConsumableItemSlots");

	struct CraeteConsumableItemSlots_Params {
		
		struct Unknown ReturnValue;

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
inline void UUW-PersonalSupplyBoxWidget_C::鉹@t元_1(struct Unknown ConsumalbeItemDat, int32_t SlotIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.鉹@t元_1");

	struct 鉹@t元_1_Params {
		struct Unknown ConsumalbeItemDat;
		int32_t SlotIndex;
	}; 鉹@t元_1_Params Params;

	Params.ConsumalbeItemDat = ConsumalbeItemDat;
	Params.SlotIndex = SlotIndex;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.SetConsumableItemData
inline void UUW-PersonalSupplyBoxWidget_C::SetConsumableItemData(int32_t SlotIndex, struct Unknown& ConsumableItem, char SetEmpty) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.SetConsumableItemData");

	struct SetConsumableItemData_Params {
		int32_t SlotIndex;
		struct Unknown& ConsumableItem;
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
inline void UUW-PersonalSupplyBoxWidget_C::SetWeaponData(struct Unknown& WeaponItem, char IsDefaultWeapon) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.SetWeaponData");

	struct SetWeaponData_Params {
		struct Unknown& WeaponItem;
		char IsDefaultWeapon;
	}; SetWeaponData_Params Params;

	Params.IsDefaultWeapon = IsDefaultWeapon;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	WeaponItem = Params.WeaponItem;

}

// Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.鉹@t元_2
inline void UUW-PersonalSupplyBoxWidget_C::鉹@t元_2(struct Unknown WeaponData) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.鉹@t元_2");

	struct 鉹@t元_2_Params {
		struct Unknown WeaponData;
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
inline void UUW-PersonalSupplyBoxWidget_C::鉹@t元_3(char IsShow, struct Unknown Slot) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.鉹@t元_3");

	struct 鉹@t元_3_Params {
		char IsShow;
		struct Unknown Slot;
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
inline void UUW-PersonalSupplyBoxWidget_C::鉹@t元_4(char IsShow, struct Unknown Widget) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.鉹@t元_4");

	struct 鉹@t元_4_Params {
		char IsShow;
		struct Unknown Widget;
	}; 鉹@t元_4_Params Params;

	Params.IsShow = IsShow;
	Params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.鉹@t元_5
inline void UUW-PersonalSupplyBoxWidget_C::鉹@t元_5(enum class Unknow PrevState, enum class Unknow CurrentState) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.鉹@t元_5");

	struct 鉹@t元_5_Params {
		enum class Unknow PrevState;
		enum class Unknow CurrentState;
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
inline void UUW-PersonalSupplyBoxWidget_C::EquipSlot(struct Unknown Slot) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.EquipSlot");

	struct EquipSlot_Params {
		struct Unknown Slot;
	}; EquipSlot_Params Params;

	Params.Slot = Slot;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.鉹@t元_8
inline void UUW-PersonalSupplyBoxWidget_C::鉹@t元_8(struct Unknown Source, struct Unknown Target) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.鉹@t元_8");

	struct 鉹@t元_8_Params {
		struct Unknown Source;
		struct Unknown Target;
	}; 鉹@t元_8_Params Params;

	Params.Source = Source;
	Params.Target = Target;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.鉹@t元_9
inline void UUW-PersonalSupplyBoxWidget_C::鉹@t元_9(struct Unknown Slot) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.鉹@t元_9");

	struct 鉹@t元_9_Params {
		struct Unknown Slot;
	}; 鉹@t元_9_Params Params;

	Params.Slot = Slot;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.EquipWeaponSlot
inline void UUW-PersonalSupplyBoxWidget_C::EquipWeaponSlot(struct Unknown Slot) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.EquipWeaponSlot");

	struct EquipWeaponSlot_Params {
		struct Unknown Slot;
	}; EquipWeaponSlot_Params Params;

	Params.Slot = Slot;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.鉹@t元_10
inline void UUW-PersonalSupplyBoxWidget_C::鉹@t元_10(struct Unknown Weapon) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.鉹@t元_10");

	struct 鉹@t元_10_Params {
		struct Unknown Weapon;
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

