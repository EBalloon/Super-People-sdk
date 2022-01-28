// WidgetBlueprintGeneratedClass UW-PersonalSupplyBoxConsumableItemSlotWidget.UW-PersonalSupplyBoxConsumableItemSlotWidget_C
class UUW-PersonalSupplyBoxConsumableItemSlotWidget_C : public UUserWidget {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248 (8)
	struct UTextBlock Cont; // 0x250 (8)
	struct UImage DropHoverImage; // 0x258 (8)
	struct UImage EmptyImage; // 0x260 (8)
	struct UImage EquipImage; // 0x268 (8)
	struct UImage HoverImage2; // 0x270 (8)
	struct UImage ItemImage; // 0x278 (8)
	struct UWidgetSwitcher WidgetSwitcher_2; // 0x280 (8)
	int32_t Index; // 0x288 (4)
	struct FMulticastInlineDelegate OnDropEventDispatcher; // 0x290 (16)
	struct FSupplyItem Data; // 0x2A0 (256)
	struct UUW-Inventory_DragItem_C DraggedWidget; // 0x3A0 (8)
	char IsEmpty : 0; // 0x3A8 (1)
	struct FMulticastInlineDelegate ShowTooltipEventDispatcher; // 0x3B0 (16)
	struct FMulticastInlineDelegate OnChangeSlotEventDispatcher; // 0x3C0 (16)
	struct FMulticastInlineDelegate OnRightClickEventDispatcher; // 0x3D0 (16)
	struct FKey SaveKey; // 0x3E0 (24)
	int32_t ClickNum; // 0x3F8 (4)

	struct FEventReply OnMouseButtonUp(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UW-PersonalSupplyBoxConsumableItemSlotWidget.UW-PersonalSupplyBoxConsumableItemSlotWidget_C.OnMouseButtonUp(BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UW-PersonalSupplyBoxConsumableItemSlotWidget.UW-PersonalSupplyBoxConsumableItemSlotWidget_C.OnMouseButtonDown(BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void OnDragDetected(struct FGeometry MyGeometry, struct FPointerEvent& PointerEvent, struct UDragDropOperation& Operation); // Function UW-PersonalSupplyBoxConsumableItemSlotWidget.UW-PersonalSupplyBoxConsumableItemSlotWidget_C.OnDragDetected(BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	char OnDrop(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation Operation); // Function UW-PersonalSupplyBoxConsumableItemSlotWidget.UW-PersonalSupplyBoxConsumableItemSlotWidget_C.OnDrop(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void OnLoaded_42EA96274FA324743778DBBB16312B12(struct Object Loaded); // Function UW-PersonalSupplyBoxConsumableItemSlotWidget.UW-PersonalSupplyBoxConsumableItemSlotWidget_C.OnLoaded_42EA96274FA324743778DBBB16312B12(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void SetData(struct FSupplyItem Data, char SetEmpty); // Function UW-PersonalSupplyBoxConsumableItemSlotWidget.UW-PersonalSupplyBoxConsumableItemSlotWidget_C.SetData(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void SetEmpty(); // Function UW-PersonalSupplyBoxConsumableItemSlotWidget.UW-PersonalSupplyBoxConsumableItemSlotWidget_C.SetEmpty(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void OnDragEnter(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation Operation); // Function UW-PersonalSupplyBoxConsumableItemSlotWidget.UW-PersonalSupplyBoxConsumableItemSlotWidget_C.OnDragEnter(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void OnDragLeave(struct FPointerEvent PointerEvent, struct UDragDropOperation Operation); // Function UW-PersonalSupplyBoxConsumableItemSlotWidget.UW-PersonalSupplyBoxConsumableItemSlotWidget_C.OnDragLeave(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UW-PersonalSupplyBoxConsumableItemSlotWidget.UW-PersonalSupplyBoxConsumableItemSlotWidget_C.OnMouseEnter(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function UW-PersonalSupplyBoxConsumableItemSlotWidget.UW-PersonalSupplyBoxConsumableItemSlotWidget_C.OnMouseLeave(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void CheckClick(); // Function UW-PersonalSupplyBoxConsumableItemSlotWidget.UW-PersonalSupplyBoxConsumableItemSlotWidget_C.CheckClick(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void ExecuteUbergraph_UW-PersonalSupplyBoxConsumableItemSlotWidget(int32_t EntryPoint); // Function UW-PersonalSupplyBoxConsumableItemSlotWidget.UW-PersonalSupplyBoxConsumableItemSlotWidget_C.ExecuteUbergraph_UW-PersonalSupplyBoxConsumableItemSlotWidget(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void OnRightClickEventDispatcher__DelegateSignature(struct UUW-PersonalSupplyBoxConsumableItemSlotWidget_C Slot); // Function UW-PersonalSupplyBoxConsumableItemSlotWidget.UW-PersonalSupplyBoxConsumableItemSlotWidget_C.OnRightClickEventDispatcher__DelegateSignature(Public|Delegate|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void OnChangeSlotEventDispatcher__DelegateSignature(struct UUW-PersonalSupplyBoxConsumableItemSlotWidget_C Source, struct UUW-PersonalSupplyBoxConsumableItemSlotWidget_C Target); // Function UW-PersonalSupplyBoxConsumableItemSlotWidget.UW-PersonalSupplyBoxConsumableItemSlotWidget_C.OnChangeSlotEventDispatcher__DelegateSignature(Public|Delegate|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void ShowTooltipEventDispatcher__DelegateSignature(char IsShow, struct UUW-PersonalSupplyBoxConsumableItemSlotWidget_C Slot); // Function UW-PersonalSupplyBoxConsumableItemSlotWidget.UW-PersonalSupplyBoxConsumableItemSlotWidget_C.ShowTooltipEventDispatcher__DelegateSignature(Public|Delegate|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void OnDropEventDispatcher__DelegateSignature(struct FSupplyItem ConsumalbeItemDat, int32_t SlotIndex); // Function UW-PersonalSupplyBoxConsumableItemSlotWidget.UW-PersonalSupplyBoxConsumableItemSlotWidget_C.OnDropEventDispatcher__DelegateSignature(Public|Delegate|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
};

// Function UW-PersonalSupplyBoxConsumableItemSlotWidget.UW-PersonalSupplyBoxConsumableItemSlotWidget_C.OnMouseButtonUp
inline struct FEventReply UUW-PersonalSupplyBoxConsumableItemSlotWidget_C::OnMouseButtonUp(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PersonalSupplyBoxConsumableItemSlotWidget.UW-PersonalSupplyBoxConsumableItemSlotWidget_C.OnMouseButtonUp");

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

// Function UW-PersonalSupplyBoxConsumableItemSlotWidget.UW-PersonalSupplyBoxConsumableItemSlotWidget_C.OnMouseButtonDown
inline struct FEventReply UUW-PersonalSupplyBoxConsumableItemSlotWidget_C::OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PersonalSupplyBoxConsumableItemSlotWidget.UW-PersonalSupplyBoxConsumableItemSlotWidget_C.OnMouseButtonDown");

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

// Function UW-PersonalSupplyBoxConsumableItemSlotWidget.UW-PersonalSupplyBoxConsumableItemSlotWidget_C.OnDragDetected
inline void UUW-PersonalSupplyBoxConsumableItemSlotWidget_C::OnDragDetected(struct FGeometry MyGeometry, struct FPointerEvent& PointerEvent, struct UDragDropOperation& Operation) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PersonalSupplyBoxConsumableItemSlotWidget.UW-PersonalSupplyBoxConsumableItemSlotWidget_C.OnDragDetected");

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

// Function UW-PersonalSupplyBoxConsumableItemSlotWidget.UW-PersonalSupplyBoxConsumableItemSlotWidget_C.OnDrop
inline char UUW-PersonalSupplyBoxConsumableItemSlotWidget_C::OnDrop(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation Operation) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PersonalSupplyBoxConsumableItemSlotWidget.UW-PersonalSupplyBoxConsumableItemSlotWidget_C.OnDrop");

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

// Function UW-PersonalSupplyBoxConsumableItemSlotWidget.UW-PersonalSupplyBoxConsumableItemSlotWidget_C.OnLoaded_42EA96274FA324743778DBBB16312B12
inline void UUW-PersonalSupplyBoxConsumableItemSlotWidget_C::OnLoaded_42EA96274FA324743778DBBB16312B12(struct Object Loaded) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PersonalSupplyBoxConsumableItemSlotWidget.UW-PersonalSupplyBoxConsumableItemSlotWidget_C.OnLoaded_42EA96274FA324743778DBBB16312B12");

	struct OnLoaded_42EA96274FA324743778DBBB16312B12_Params {
		struct Object Loaded;
	}; OnLoaded_42EA96274FA324743778DBBB16312B12_Params Params;

	Params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PersonalSupplyBoxConsumableItemSlotWidget.UW-PersonalSupplyBoxConsumableItemSlotWidget_C.SetData
inline void UUW-PersonalSupplyBoxConsumableItemSlotWidget_C::SetData(struct FSupplyItem Data, char SetEmpty) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PersonalSupplyBoxConsumableItemSlotWidget.UW-PersonalSupplyBoxConsumableItemSlotWidget_C.SetData");

	struct SetData_Params {
		struct FSupplyItem Data;
		char SetEmpty;
	}; SetData_Params Params;

	Params.Data = Data;
	Params.SetEmpty = SetEmpty;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PersonalSupplyBoxConsumableItemSlotWidget.UW-PersonalSupplyBoxConsumableItemSlotWidget_C.SetEmpty
inline void UUW-PersonalSupplyBoxConsumableItemSlotWidget_C::SetEmpty() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PersonalSupplyBoxConsumableItemSlotWidget.UW-PersonalSupplyBoxConsumableItemSlotWidget_C.SetEmpty");

	struct SetEmpty_Params {
		
	}; SetEmpty_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PersonalSupplyBoxConsumableItemSlotWidget.UW-PersonalSupplyBoxConsumableItemSlotWidget_C.OnDragEnter
inline void UUW-PersonalSupplyBoxConsumableItemSlotWidget_C::OnDragEnter(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation Operation) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PersonalSupplyBoxConsumableItemSlotWidget.UW-PersonalSupplyBoxConsumableItemSlotWidget_C.OnDragEnter");

	struct OnDragEnter_Params {
		struct FGeometry MyGeometry;
		struct FPointerEvent PointerEvent;
		struct UDragDropOperation Operation;
	}; OnDragEnter_Params Params;

	Params.MyGeometry = MyGeometry;
	Params.PointerEvent = PointerEvent;
	Params.Operation = Operation;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PersonalSupplyBoxConsumableItemSlotWidget.UW-PersonalSupplyBoxConsumableItemSlotWidget_C.OnDragLeave
inline void UUW-PersonalSupplyBoxConsumableItemSlotWidget_C::OnDragLeave(struct FPointerEvent PointerEvent, struct UDragDropOperation Operation) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PersonalSupplyBoxConsumableItemSlotWidget.UW-PersonalSupplyBoxConsumableItemSlotWidget_C.OnDragLeave");

	struct OnDragLeave_Params {
		struct FPointerEvent PointerEvent;
		struct UDragDropOperation Operation;
	}; OnDragLeave_Params Params;

	Params.PointerEvent = PointerEvent;
	Params.Operation = Operation;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PersonalSupplyBoxConsumableItemSlotWidget.UW-PersonalSupplyBoxConsumableItemSlotWidget_C.OnMouseEnter
inline void UUW-PersonalSupplyBoxConsumableItemSlotWidget_C::OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PersonalSupplyBoxConsumableItemSlotWidget.UW-PersonalSupplyBoxConsumableItemSlotWidget_C.OnMouseEnter");

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

// Function UW-PersonalSupplyBoxConsumableItemSlotWidget.UW-PersonalSupplyBoxConsumableItemSlotWidget_C.OnMouseLeave
inline void UUW-PersonalSupplyBoxConsumableItemSlotWidget_C::OnMouseLeave(struct FPointerEvent& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PersonalSupplyBoxConsumableItemSlotWidget.UW-PersonalSupplyBoxConsumableItemSlotWidget_C.OnMouseLeave");

	struct OnMouseLeave_Params {
		struct FPointerEvent& MouseEvent;
	}; OnMouseLeave_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	MouseEvent = Params.MouseEvent;

}

// Function UW-PersonalSupplyBoxConsumableItemSlotWidget.UW-PersonalSupplyBoxConsumableItemSlotWidget_C.CheckClick
inline void UUW-PersonalSupplyBoxConsumableItemSlotWidget_C::CheckClick() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PersonalSupplyBoxConsumableItemSlotWidget.UW-PersonalSupplyBoxConsumableItemSlotWidget_C.CheckClick");

	struct CheckClick_Params {
		
	}; CheckClick_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PersonalSupplyBoxConsumableItemSlotWidget.UW-PersonalSupplyBoxConsumableItemSlotWidget_C.ExecuteUbergraph_UW-PersonalSupplyBoxConsumableItemSlotWidget
inline void UUW-PersonalSupplyBoxConsumableItemSlotWidget_C::ExecuteUbergraph_UW-PersonalSupplyBoxConsumableItemSlotWidget(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PersonalSupplyBoxConsumableItemSlotWidget.UW-PersonalSupplyBoxConsumableItemSlotWidget_C.ExecuteUbergraph_UW-PersonalSupplyBoxConsumableItemSlotWidget");

	struct ExecuteUbergraph_UW-PersonalSupplyBoxConsumableItemSlotWidget_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_UW-PersonalSupplyBoxConsumableItemSlotWidget_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PersonalSupplyBoxConsumableItemSlotWidget.UW-PersonalSupplyBoxConsumableItemSlotWidget_C.OnRightClickEventDispatcher__DelegateSignature
inline void UUW-PersonalSupplyBoxConsumableItemSlotWidget_C::OnRightClickEventDispatcher__DelegateSignature(struct UUW-PersonalSupplyBoxConsumableItemSlotWidget_C Slot) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PersonalSupplyBoxConsumableItemSlotWidget.UW-PersonalSupplyBoxConsumableItemSlotWidget_C.OnRightClickEventDispatcher__DelegateSignature");

	struct OnRightClickEventDispatcher__DelegateSignature_Params {
		struct UUW-PersonalSupplyBoxConsumableItemSlotWidget_C Slot;
	}; OnRightClickEventDispatcher__DelegateSignature_Params Params;

	Params.Slot = Slot;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PersonalSupplyBoxConsumableItemSlotWidget.UW-PersonalSupplyBoxConsumableItemSlotWidget_C.OnChangeSlotEventDispatcher__DelegateSignature
inline void UUW-PersonalSupplyBoxConsumableItemSlotWidget_C::OnChangeSlotEventDispatcher__DelegateSignature(struct UUW-PersonalSupplyBoxConsumableItemSlotWidget_C Source, struct UUW-PersonalSupplyBoxConsumableItemSlotWidget_C Target) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PersonalSupplyBoxConsumableItemSlotWidget.UW-PersonalSupplyBoxConsumableItemSlotWidget_C.OnChangeSlotEventDispatcher__DelegateSignature");

	struct OnChangeSlotEventDispatcher__DelegateSignature_Params {
		struct UUW-PersonalSupplyBoxConsumableItemSlotWidget_C Source;
		struct UUW-PersonalSupplyBoxConsumableItemSlotWidget_C Target;
	}; OnChangeSlotEventDispatcher__DelegateSignature_Params Params;

	Params.Source = Source;
	Params.Target = Target;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PersonalSupplyBoxConsumableItemSlotWidget.UW-PersonalSupplyBoxConsumableItemSlotWidget_C.ShowTooltipEventDispatcher__DelegateSignature
inline void UUW-PersonalSupplyBoxConsumableItemSlotWidget_C::ShowTooltipEventDispatcher__DelegateSignature(char IsShow, struct UUW-PersonalSupplyBoxConsumableItemSlotWidget_C Slot) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PersonalSupplyBoxConsumableItemSlotWidget.UW-PersonalSupplyBoxConsumableItemSlotWidget_C.ShowTooltipEventDispatcher__DelegateSignature");

	struct ShowTooltipEventDispatcher__DelegateSignature_Params {
		char IsShow;
		struct UUW-PersonalSupplyBoxConsumableItemSlotWidget_C Slot;
	}; ShowTooltipEventDispatcher__DelegateSignature_Params Params;

	Params.IsShow = IsShow;
	Params.Slot = Slot;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PersonalSupplyBoxConsumableItemSlotWidget.UW-PersonalSupplyBoxConsumableItemSlotWidget_C.OnDropEventDispatcher__DelegateSignature
inline void UUW-PersonalSupplyBoxConsumableItemSlotWidget_C::OnDropEventDispatcher__DelegateSignature(struct FSupplyItem ConsumalbeItemDat, int32_t SlotIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PersonalSupplyBoxConsumableItemSlotWidget.UW-PersonalSupplyBoxConsumableItemSlotWidget_C.OnDropEventDispatcher__DelegateSignature");

	struct OnDropEventDispatcher__DelegateSignature_Params {
		struct FSupplyItem ConsumalbeItemDat;
		int32_t SlotIndex;
	}; OnDropEventDispatcher__DelegateSignature_Params Params;

	Params.ConsumalbeItemDat = ConsumalbeItemDat;
	Params.SlotIndex = SlotIndex;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

