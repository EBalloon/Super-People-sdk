// WidgetBlueprintGeneratedClass UW-PersonalSupplyBoxSlotItemWidget.UW-PersonalSupplyBoxSlotItemWidget_C
class UUW-PersonalSupplyBoxSlotItemWidget_C : public UBravoHotelPersonalSupplyBoxSlotItemWidget {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3E8 (8)
	struct UWidgetAnimation Over; // 0x3F0 (8)
	struct UImage Bg; // 0x3F8 (8)
	struct UCanvasPanel CanvasPanel_2; // 0x400 (8)
	struct UCanvasPanel CanvasPanel_4; // 0x408 (8)
	struct UTextBlock Cont; // 0x410 (8)
	struct UImage DropHoverImage; // 0x418 (8)
	struct UImage Image; // 0x420 (8)
	struct UImage Image_86; // 0x428 (8)
	struct UImage Image_187; // 0x430 (8)
	struct UImage Image_675; // 0x438 (8)
	struct UImage Image_874; // 0x440 (8)
	struct UImage ItemImage; // 0x448 (8)
	struct UTextBlock ItemName; // 0x450 (8)
	struct UImage Lock; // 0x458 (8)
	struct UTextBlock Price_Value; // 0x460 (8)
	struct UProgressBar ProgressBar_65; // 0x468 (8)
	struct UImage Repair; // 0x470 (8)
	struct UTextBlock WeaponName; // 0x478 (8)
	struct UTextBlock WeaponName_2; // 0x480 (8)
	struct UTextBlock WeaponName_3; // 0x488 (8)
	struct UWidgetSwitcher WidgetSwitcher_1; // 0x490 (8)
	struct UUW-Inventory_DragItem_C DraggedWidget; // 0x498 (8)
	struct FSlateBrush DragItemBrush; // 0x4A0 (136)
	char EnableDrag : 0; // 0x528 (1)
	struct TSoftObjectPtr<Object> ItemIconImg; // 0x530 (40)
	struct FName AmmorKey; // 0x558 (8)
	struct FMulticastInlineDelegate OnHoverStateEventDispatcher; // 0x560 (16)
	struct FMulticastInlineDelegate OnRightClickEventDispatcher; // 0x570 (16)
	struct FKey SaveKey; // 0x580 (24)
	int32_t ClickNum; // 0x598 (4)
	char RandomPerk : 0; // 0x59C (1)

	struct FEventReply OnMouseButtonUp(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UW-PersonalSupplyBoxSlotItemWidget.UW-PersonalSupplyBoxSlotItemWidget_C.OnMouseButtonUp(BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UW-PersonalSupplyBoxSlotItemWidget.UW-PersonalSupplyBoxSlotItemWidget_C.OnMouseButtonDown(BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void OnDragDetected(struct FGeometry MyGeometry, struct FPointerEvent& PointerEvent, struct UDragDropOperation& Operation); // Function UW-PersonalSupplyBoxSlotItemWidget.UW-PersonalSupplyBoxSlotItemWidget_C.OnDragDetected(BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void OnLoaded_2F164CF142966D9481C26D9FAFCD6B3E(struct Object Loaded); // Function UW-PersonalSupplyBoxSlotItemWidget.UW-PersonalSupplyBoxSlotItemWidget_C.OnLoaded_2F164CF142966D9481C26D9FAFCD6B3E(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void OnLoaded_470CC2A647398584A781D89997DE829A(struct Object Loaded); // Function UW-PersonalSupplyBoxSlotItemWidget.UW-PersonalSupplyBoxSlotItemWidget_C.OnLoaded_470CC2A647398584A781D89997DE829A(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void OnLoaded_B44424C84F36CE653BE71591D8E4AA63(struct Object Loaded); // Function UW-PersonalSupplyBoxSlotItemWidget.UW-PersonalSupplyBoxSlotItemWidget_C.OnLoaded_B44424C84F36CE653BE71591D8E4AA63(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void SetConsumableItemInfo(struct FSupplyItem& NewConsumableItemData); // Function UW-PersonalSupplyBoxSlotItemWidget.UW-PersonalSupplyBoxSlotItemWidget_C.SetConsumableItemInfo(Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void AysncLoadIconTexture(struct TSoftObjectPtr<Object> IconTexture); // Function UW-PersonalSupplyBoxSlotItemWidget.UW-PersonalSupplyBoxSlotItemWidget_C.AysncLoadIconTexture(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UW-PersonalSupplyBoxSlotItemWidget.UW-PersonalSupplyBoxSlotItemWidget_C.OnMouseEnter(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function UW-PersonalSupplyBoxSlotItemWidget.UW-PersonalSupplyBoxSlotItemWidget_C.OnMouseLeave(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void SetLockState(char IsLock); // Function UW-PersonalSupplyBoxSlotItemWidget.UW-PersonalSupplyBoxSlotItemWidget_C.SetLockState(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void SetEquipState(char IsUnEquip); // Function UW-PersonalSupplyBoxSlotItemWidget.UW-PersonalSupplyBoxSlotItemWidget_C.SetEquipState(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void SetWeaponInfo(struct FInventoryItemInfo& NewWeaponItemData); // Function UW-PersonalSupplyBoxSlotItemWidget.UW-PersonalSupplyBoxSlotItemWidget_C.SetWeaponInfo(Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void Construct(); // Function UW-PersonalSupplyBoxSlotItemWidget.UW-PersonalSupplyBoxSlotItemWidget_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void CheckClick(); // Function UW-PersonalSupplyBoxSlotItemWidget.UW-PersonalSupplyBoxSlotItemWidget_C.CheckClick(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void ExecuteUbergraph_UW-PersonalSupplyBoxSlotItemWidget(int32_t EntryPoint); // Function UW-PersonalSupplyBoxSlotItemWidget.UW-PersonalSupplyBoxSlotItemWidget_C.ExecuteUbergraph_UW-PersonalSupplyBoxSlotItemWidget(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void OnRightClickEventDispatcher__DelegateSignature(struct UUW-PersonalSupplyBoxSlotItemWidget_C Slot); // Function UW-PersonalSupplyBoxSlotItemWidget.UW-PersonalSupplyBoxSlotItemWidget_C.OnRightClickEventDispatcher__DelegateSignature(Public|Delegate|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void OnHoverStateEventDispatcher__DelegateSignature(char IsHover); // Function UW-PersonalSupplyBoxSlotItemWidget.UW-PersonalSupplyBoxSlotItemWidget_C.OnHoverStateEventDispatcher__DelegateSignature(Public|Delegate|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
};

// Function UW-PersonalSupplyBoxSlotItemWidget.UW-PersonalSupplyBoxSlotItemWidget_C.OnMouseButtonUp
inline struct FEventReply UUW-PersonalSupplyBoxSlotItemWidget_C::OnMouseButtonUp(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PersonalSupplyBoxSlotItemWidget.UW-PersonalSupplyBoxSlotItemWidget_C.OnMouseButtonUp");

	struct OnMouseButtonUp_Params {
		struct FGeometry MyGeometry;
		struct FPointerEvent& MouseEvent;
		struct FEventReply ReturnValue;

	}; OnMouseButtonUp_Params Params;

	Params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	MouseEvent = Params.MouseEvent;


	return params.ReturnValue;
}

// Function UW-PersonalSupplyBoxSlotItemWidget.UW-PersonalSupplyBoxSlotItemWidget_C.OnMouseButtonDown
inline struct FEventReply UUW-PersonalSupplyBoxSlotItemWidget_C::OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PersonalSupplyBoxSlotItemWidget.UW-PersonalSupplyBoxSlotItemWidget_C.OnMouseButtonDown");

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

// Function UW-PersonalSupplyBoxSlotItemWidget.UW-PersonalSupplyBoxSlotItemWidget_C.OnDragDetected
inline void UUW-PersonalSupplyBoxSlotItemWidget_C::OnDragDetected(struct FGeometry MyGeometry, struct FPointerEvent& PointerEvent, struct UDragDropOperation& Operation) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PersonalSupplyBoxSlotItemWidget.UW-PersonalSupplyBoxSlotItemWidget_C.OnDragDetected");

	struct OnDragDetected_Params {
		struct FGeometry MyGeometry;
		struct FPointerEvent& PointerEvent;
		struct UDragDropOperation& Operation;
	}; OnDragDetected_Params Params;

	Params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	PointerEvent = Params.PointerEvent;
	Operation = Params.Operation;

}

// Function UW-PersonalSupplyBoxSlotItemWidget.UW-PersonalSupplyBoxSlotItemWidget_C.OnLoaded_2F164CF142966D9481C26D9FAFCD6B3E
inline void UUW-PersonalSupplyBoxSlotItemWidget_C::OnLoaded_2F164CF142966D9481C26D9FAFCD6B3E(struct Object Loaded) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PersonalSupplyBoxSlotItemWidget.UW-PersonalSupplyBoxSlotItemWidget_C.OnLoaded_2F164CF142966D9481C26D9FAFCD6B3E");

	struct OnLoaded_2F164CF142966D9481C26D9FAFCD6B3E_Params {
		struct Object Loaded;
	}; OnLoaded_2F164CF142966D9481C26D9FAFCD6B3E_Params Params;

	Params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PersonalSupplyBoxSlotItemWidget.UW-PersonalSupplyBoxSlotItemWidget_C.OnLoaded_470CC2A647398584A781D89997DE829A
inline void UUW-PersonalSupplyBoxSlotItemWidget_C::OnLoaded_470CC2A647398584A781D89997DE829A(struct Object Loaded) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PersonalSupplyBoxSlotItemWidget.UW-PersonalSupplyBoxSlotItemWidget_C.OnLoaded_470CC2A647398584A781D89997DE829A");

	struct OnLoaded_470CC2A647398584A781D89997DE829A_Params {
		struct Object Loaded;
	}; OnLoaded_470CC2A647398584A781D89997DE829A_Params Params;

	Params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PersonalSupplyBoxSlotItemWidget.UW-PersonalSupplyBoxSlotItemWidget_C.OnLoaded_B44424C84F36CE653BE71591D8E4AA63
inline void UUW-PersonalSupplyBoxSlotItemWidget_C::OnLoaded_B44424C84F36CE653BE71591D8E4AA63(struct Object Loaded) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PersonalSupplyBoxSlotItemWidget.UW-PersonalSupplyBoxSlotItemWidget_C.OnLoaded_B44424C84F36CE653BE71591D8E4AA63");

	struct OnLoaded_B44424C84F36CE653BE71591D8E4AA63_Params {
		struct Object Loaded;
	}; OnLoaded_B44424C84F36CE653BE71591D8E4AA63_Params Params;

	Params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PersonalSupplyBoxSlotItemWidget.UW-PersonalSupplyBoxSlotItemWidget_C.SetConsumableItemInfo
inline void UUW-PersonalSupplyBoxSlotItemWidget_C::SetConsumableItemInfo(struct FSupplyItem& NewConsumableItemData) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PersonalSupplyBoxSlotItemWidget.UW-PersonalSupplyBoxSlotItemWidget_C.SetConsumableItemInfo");

	struct SetConsumableItemInfo_Params {
		struct FSupplyItem& NewConsumableItemData;
	}; SetConsumableItemInfo_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	NewConsumableItemData = Params.NewConsumableItemData;

}

// Function UW-PersonalSupplyBoxSlotItemWidget.UW-PersonalSupplyBoxSlotItemWidget_C.AysncLoadIconTexture
inline void UUW-PersonalSupplyBoxSlotItemWidget_C::AysncLoadIconTexture(struct TSoftObjectPtr<Object> IconTexture) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PersonalSupplyBoxSlotItemWidget.UW-PersonalSupplyBoxSlotItemWidget_C.AysncLoadIconTexture");

	struct AysncLoadIconTexture_Params {
		struct TSoftObjectPtr<Object> IconTexture;
	}; AysncLoadIconTexture_Params Params;

	Params.IconTexture = IconTexture;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PersonalSupplyBoxSlotItemWidget.UW-PersonalSupplyBoxSlotItemWidget_C.OnMouseEnter
inline void UUW-PersonalSupplyBoxSlotItemWidget_C::OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PersonalSupplyBoxSlotItemWidget.UW-PersonalSupplyBoxSlotItemWidget_C.OnMouseEnter");

	struct OnMouseEnter_Params {
		struct FGeometry MyGeometry;
		struct FPointerEvent& MouseEvent;
	}; OnMouseEnter_Params Params;

	Params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	MouseEvent = Params.MouseEvent;

}

// Function UW-PersonalSupplyBoxSlotItemWidget.UW-PersonalSupplyBoxSlotItemWidget_C.OnMouseLeave
inline void UUW-PersonalSupplyBoxSlotItemWidget_C::OnMouseLeave(struct FPointerEvent& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PersonalSupplyBoxSlotItemWidget.UW-PersonalSupplyBoxSlotItemWidget_C.OnMouseLeave");

	struct OnMouseLeave_Params {
		struct FPointerEvent& MouseEvent;
	}; OnMouseLeave_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	MouseEvent = Params.MouseEvent;

}

// Function UW-PersonalSupplyBoxSlotItemWidget.UW-PersonalSupplyBoxSlotItemWidget_C.SetLockState
inline void UUW-PersonalSupplyBoxSlotItemWidget_C::SetLockState(char IsLock) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PersonalSupplyBoxSlotItemWidget.UW-PersonalSupplyBoxSlotItemWidget_C.SetLockState");

	struct SetLockState_Params {
		char IsLock;
	}; SetLockState_Params Params;

	Params.IsLock = IsLock;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PersonalSupplyBoxSlotItemWidget.UW-PersonalSupplyBoxSlotItemWidget_C.SetEquipState
inline void UUW-PersonalSupplyBoxSlotItemWidget_C::SetEquipState(char IsUnEquip) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PersonalSupplyBoxSlotItemWidget.UW-PersonalSupplyBoxSlotItemWidget_C.SetEquipState");

	struct SetEquipState_Params {
		char IsUnEquip;
	}; SetEquipState_Params Params;

	Params.IsUnEquip = IsUnEquip;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PersonalSupplyBoxSlotItemWidget.UW-PersonalSupplyBoxSlotItemWidget_C.SetWeaponInfo
inline void UUW-PersonalSupplyBoxSlotItemWidget_C::SetWeaponInfo(struct FInventoryItemInfo& NewWeaponItemData) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PersonalSupplyBoxSlotItemWidget.UW-PersonalSupplyBoxSlotItemWidget_C.SetWeaponInfo");

	struct SetWeaponInfo_Params {
		struct FInventoryItemInfo& NewWeaponItemData;
	}; SetWeaponInfo_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	NewWeaponItemData = Params.NewWeaponItemData;

}

// Function UW-PersonalSupplyBoxSlotItemWidget.UW-PersonalSupplyBoxSlotItemWidget_C.Construct
inline void UUW-PersonalSupplyBoxSlotItemWidget_C::Construct() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PersonalSupplyBoxSlotItemWidget.UW-PersonalSupplyBoxSlotItemWidget_C.Construct");

	struct Construct_Params {
		
	}; Construct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PersonalSupplyBoxSlotItemWidget.UW-PersonalSupplyBoxSlotItemWidget_C.CheckClick
inline void UUW-PersonalSupplyBoxSlotItemWidget_C::CheckClick() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PersonalSupplyBoxSlotItemWidget.UW-PersonalSupplyBoxSlotItemWidget_C.CheckClick");

	struct CheckClick_Params {
		
	}; CheckClick_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PersonalSupplyBoxSlotItemWidget.UW-PersonalSupplyBoxSlotItemWidget_C.ExecuteUbergraph_UW-PersonalSupplyBoxSlotItemWidget
inline void UUW-PersonalSupplyBoxSlotItemWidget_C::ExecuteUbergraph_UW-PersonalSupplyBoxSlotItemWidget(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PersonalSupplyBoxSlotItemWidget.UW-PersonalSupplyBoxSlotItemWidget_C.ExecuteUbergraph_UW-PersonalSupplyBoxSlotItemWidget");

	struct ExecuteUbergraph_UW-PersonalSupplyBoxSlotItemWidget_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_UW-PersonalSupplyBoxSlotItemWidget_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PersonalSupplyBoxSlotItemWidget.UW-PersonalSupplyBoxSlotItemWidget_C.OnRightClickEventDispatcher__DelegateSignature
inline void UUW-PersonalSupplyBoxSlotItemWidget_C::OnRightClickEventDispatcher__DelegateSignature(struct UUW-PersonalSupplyBoxSlotItemWidget_C Slot) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PersonalSupplyBoxSlotItemWidget.UW-PersonalSupplyBoxSlotItemWidget_C.OnRightClickEventDispatcher__DelegateSignature");

	struct OnRightClickEventDispatcher__DelegateSignature_Params {
		struct UUW-PersonalSupplyBoxSlotItemWidget_C Slot;
	}; OnRightClickEventDispatcher__DelegateSignature_Params Params;

	Params.Slot = Slot;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PersonalSupplyBoxSlotItemWidget.UW-PersonalSupplyBoxSlotItemWidget_C.OnHoverStateEventDispatcher__DelegateSignature
inline void UUW-PersonalSupplyBoxSlotItemWidget_C::OnHoverStateEventDispatcher__DelegateSignature(char IsHover) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PersonalSupplyBoxSlotItemWidget.UW-PersonalSupplyBoxSlotItemWidget_C.OnHoverStateEventDispatcher__DelegateSignature");

	struct OnHoverStateEventDispatcher__DelegateSignature_Params {
		char IsHover;
	}; OnHoverStateEventDispatcher__DelegateSignature_Params Params;

	Params.IsHover = IsHover;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

