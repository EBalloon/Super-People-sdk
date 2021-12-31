// WidgetBlueprintGeneratedClass UW-PersonalSupplyBoxConsumableItemSlotWidget.UW-PersonalSupplyBoxConsumableItemSlotWidget_C
class UUW-PersonalSupplyBoxConsumableItemSlotWidget_C : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown Cont; // 0x250 (8)
	struct Unknown DropHoverImage; // 0x258 (8)
	struct Unknown EmptyImage; // 0x260 (8)
	struct Unknown EquipImage; // 0x268 (8)
	struct Unknown HoverImage2; // 0x270 (8)
	struct Unknown ItemImage; // 0x278 (8)
	struct Unknown WidgetSwitcher_2; // 0x280 (8)
	int32_t Index; // 0x288 (4)
	struct FMulticastInlineDelegate OnDropEventDispatcher; // 0x290 (16)
	struct Unknown Data; // 0x2A0 (256)
	struct Unknown DraggedWidget; // 0x3A0 (8)
	char IsEmpty : 0; // 0x3A8 (1)
	struct FMulticastInlineDelegate ShowToolTipEventDispatcher; // 0x3B0 (16)
	struct FMulticastInlineDelegate OnChangeSlotEventDispatcher; // 0x3C0 (16)
	struct FMulticastInlineDelegate OnRightClickEventDispatcher; // 0x3D0 (16)
	struct Unknown SaveKey; // 0x3E0 (24)
	int32_t ClickNum; // 0x3F8 (4)

	struct Unknown OnMouseButtonUp(struct Unknown MyGeometry, struct Unknown& MouseEvent); // Function UW-PersonalSupplyBoxConsumableItemSlotWidget.UW-PersonalSupplyBoxConsumableItemSlotWidget_C.OnMouseButtonUp(BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	struct Unknown OnMouseButtonDown(struct Unknown MyGeometry, struct Unknown& MouseEvent); // Function UW-PersonalSupplyBoxConsumableItemSlotWidget.UW-PersonalSupplyBoxConsumableItemSlotWidget_C.OnMouseButtonDown(BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void OnDragDetected(struct Unknown MyGeometry, struct Unknown& PointerEvent, struct Unknown& Operation); // Function UW-PersonalSupplyBoxConsumableItemSlotWidget.UW-PersonalSupplyBoxConsumableItemSlotWidget_C.OnDragDetected(BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	char OnDrop(struct Unknown MyGeometry, struct Unknown PointerEvent, struct Unknown Operation); // Function UW-PersonalSupplyBoxConsumableItemSlotWidget.UW-PersonalSupplyBoxConsumableItemSlotWidget_C.OnDrop(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void OnLoaded_42EA96274FA324743778DBBB16312B12(struct Unknown Loaded); // Function UW-PersonalSupplyBoxConsumableItemSlotWidget.UW-PersonalSupplyBoxConsumableItemSlotWidget_C.OnLoaded_42EA96274FA324743778DBBB16312B12(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void SetData(struct Unknown Data, char SetEmpty); // Function UW-PersonalSupplyBoxConsumableItemSlotWidget.UW-PersonalSupplyBoxConsumableItemSlotWidget_C.SetData(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void SetEmpty(); // Function UW-PersonalSupplyBoxConsumableItemSlotWidget.UW-PersonalSupplyBoxConsumableItemSlotWidget_C.SetEmpty(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void OnDragEnter(struct Unknown MyGeometry, struct Unknown PointerEvent, struct Unknown Operation); // Function UW-PersonalSupplyBoxConsumableItemSlotWidget.UW-PersonalSupplyBoxConsumableItemSlotWidget_C.OnDragEnter(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void OnDragLeave(struct Unknown PointerEvent, struct Unknown Operation); // Function UW-PersonalSupplyBoxConsumableItemSlotWidget.UW-PersonalSupplyBoxConsumableItemSlotWidget_C.OnDragLeave(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void OnMouseEnter(struct Unknown MyGeometry, struct Unknown& MouseEvent); // Function UW-PersonalSupplyBoxConsumableItemSlotWidget.UW-PersonalSupplyBoxConsumableItemSlotWidget_C.OnMouseEnter(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void OnMouseLeave(struct Unknown& MouseEvent); // Function UW-PersonalSupplyBoxConsumableItemSlotWidget.UW-PersonalSupplyBoxConsumableItemSlotWidget_C.OnMouseLeave(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void CheckClick(); // Function UW-PersonalSupplyBoxConsumableItemSlotWidget.UW-PersonalSupplyBoxConsumableItemSlotWidget_C.CheckClick(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void ExecuteUbergraph_UW-PersonalSupplyBoxConsumableItemSlotWidget(int32_t EntryPoint); // Function UW-PersonalSupplyBoxConsumableItemSlotWidget.UW-PersonalSupplyBoxConsumableItemSlotWidget_C.ExecuteUbergraph_UW-PersonalSupplyBoxConsumableItemSlotWidget(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void OnRightClickEventDispatcher__DelegateSignature(struct Unknown Slot); // Function UW-PersonalSupplyBoxConsumableItemSlotWidget.UW-PersonalSupplyBoxConsumableItemSlotWidget_C.OnRightClickEventDispatcher__DelegateSignature(Public|Delegate|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void OnChangeSlotEventDispatcher__DelegateSignature(struct Unknown Source, struct Unknown Target); // Function UW-PersonalSupplyBoxConsumableItemSlotWidget.UW-PersonalSupplyBoxConsumableItemSlotWidget_C.OnChangeSlotEventDispatcher__DelegateSignature(Public|Delegate|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void ShowToolTipEventDispatcher__DelegateSignature(char IsShow, struct Unknown Slot); // Function UW-PersonalSupplyBoxConsumableItemSlotWidget.UW-PersonalSupplyBoxConsumableItemSlotWidget_C.ShowToolTipEventDispatcher__DelegateSignature(Public|Delegate|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void OnDropEventDispatcher__DelegateSignature(struct Unknown ConsumalbeItemDat, int32_t SlotIndex); // Function UW-PersonalSupplyBoxConsumableItemSlotWidget.UW-PersonalSupplyBoxConsumableItemSlotWidget_C.OnDropEventDispatcher__DelegateSignature(Public|Delegate|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
};

// Function UW-PersonalSupplyBoxConsumableItemSlotWidget.UW-PersonalSupplyBoxConsumableItemSlotWidget_C.OnMouseButtonUp
inline struct Unknown UUW-PersonalSupplyBoxConsumableItemSlotWidget_C::OnMouseButtonUp(struct Unknown MyGeometry, struct Unknown& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PersonalSupplyBoxConsumableItemSlotWidget.UW-PersonalSupplyBoxConsumableItemSlotWidget_C.OnMouseButtonUp");

	struct OnMouseButtonUp_Params {
		struct Unknown MyGeometry;
		struct Unknown& MouseEvent;
		struct Unknown ReturnValue;

	}; OnMouseButtonUp_Params Params;

	Params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	MouseEvent = Params.MouseEvent;


	return params.ReturnValue;
}

// Function UW-PersonalSupplyBoxConsumableItemSlotWidget.UW-PersonalSupplyBoxConsumableItemSlotWidget_C.OnMouseButtonDown
inline struct Unknown UUW-PersonalSupplyBoxConsumableItemSlotWidget_C::OnMouseButtonDown(struct Unknown MyGeometry, struct Unknown& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PersonalSupplyBoxConsumableItemSlotWidget.UW-PersonalSupplyBoxConsumableItemSlotWidget_C.OnMouseButtonDown");

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

// Function UW-PersonalSupplyBoxConsumableItemSlotWidget.UW-PersonalSupplyBoxConsumableItemSlotWidget_C.OnDragDetected
inline void UUW-PersonalSupplyBoxConsumableItemSlotWidget_C::OnDragDetected(struct Unknown MyGeometry, struct Unknown& PointerEvent, struct Unknown& Operation) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PersonalSupplyBoxConsumableItemSlotWidget.UW-PersonalSupplyBoxConsumableItemSlotWidget_C.OnDragDetected");

	struct OnDragDetected_Params {
		struct Unknown MyGeometry;
		struct Unknown& PointerEvent;
		struct Unknown& Operation;
	}; OnDragDetected_Params Params;

	Params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	PointerEvent = Params.PointerEvent;
	Operation = Params.Operation;

}

// Function UW-PersonalSupplyBoxConsumableItemSlotWidget.UW-PersonalSupplyBoxConsumableItemSlotWidget_C.OnDrop
inline char UUW-PersonalSupplyBoxConsumableItemSlotWidget_C::OnDrop(struct Unknown MyGeometry, struct Unknown PointerEvent, struct Unknown Operation) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PersonalSupplyBoxConsumableItemSlotWidget.UW-PersonalSupplyBoxConsumableItemSlotWidget_C.OnDrop");

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

// Function UW-PersonalSupplyBoxConsumableItemSlotWidget.UW-PersonalSupplyBoxConsumableItemSlotWidget_C.OnLoaded_42EA96274FA324743778DBBB16312B12
inline void UUW-PersonalSupplyBoxConsumableItemSlotWidget_C::OnLoaded_42EA96274FA324743778DBBB16312B12(struct Unknown Loaded) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PersonalSupplyBoxConsumableItemSlotWidget.UW-PersonalSupplyBoxConsumableItemSlotWidget_C.OnLoaded_42EA96274FA324743778DBBB16312B12");

	struct OnLoaded_42EA96274FA324743778DBBB16312B12_Params {
		struct Unknown Loaded;
	}; OnLoaded_42EA96274FA324743778DBBB16312B12_Params Params;

	Params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PersonalSupplyBoxConsumableItemSlotWidget.UW-PersonalSupplyBoxConsumableItemSlotWidget_C.SetData
inline void UUW-PersonalSupplyBoxConsumableItemSlotWidget_C::SetData(struct Unknown Data, char SetEmpty) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PersonalSupplyBoxConsumableItemSlotWidget.UW-PersonalSupplyBoxConsumableItemSlotWidget_C.SetData");

	struct SetData_Params {
		struct Unknown Data;
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
inline void UUW-PersonalSupplyBoxConsumableItemSlotWidget_C::OnDragEnter(struct Unknown MyGeometry, struct Unknown PointerEvent, struct Unknown Operation) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PersonalSupplyBoxConsumableItemSlotWidget.UW-PersonalSupplyBoxConsumableItemSlotWidget_C.OnDragEnter");

	struct OnDragEnter_Params {
		struct Unknown MyGeometry;
		struct Unknown PointerEvent;
		struct Unknown Operation;
	}; OnDragEnter_Params Params;

	Params.MyGeometry = MyGeometry;
	Params.PointerEvent = PointerEvent;
	Params.Operation = Operation;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PersonalSupplyBoxConsumableItemSlotWidget.UW-PersonalSupplyBoxConsumableItemSlotWidget_C.OnDragLeave
inline void UUW-PersonalSupplyBoxConsumableItemSlotWidget_C::OnDragLeave(struct Unknown PointerEvent, struct Unknown Operation) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PersonalSupplyBoxConsumableItemSlotWidget.UW-PersonalSupplyBoxConsumableItemSlotWidget_C.OnDragLeave");

	struct OnDragLeave_Params {
		struct Unknown PointerEvent;
		struct Unknown Operation;
	}; OnDragLeave_Params Params;

	Params.PointerEvent = PointerEvent;
	Params.Operation = Operation;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PersonalSupplyBoxConsumableItemSlotWidget.UW-PersonalSupplyBoxConsumableItemSlotWidget_C.OnMouseEnter
inline void UUW-PersonalSupplyBoxConsumableItemSlotWidget_C::OnMouseEnter(struct Unknown MyGeometry, struct Unknown& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PersonalSupplyBoxConsumableItemSlotWidget.UW-PersonalSupplyBoxConsumableItemSlotWidget_C.OnMouseEnter");

	struct OnMouseEnter_Params {
		struct Unknown MyGeometry;
		struct Unknown& MouseEvent;
	}; OnMouseEnter_Params Params;

	Params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	MouseEvent = Params.MouseEvent;

}

// Function UW-PersonalSupplyBoxConsumableItemSlotWidget.UW-PersonalSupplyBoxConsumableItemSlotWidget_C.OnMouseLeave
inline void UUW-PersonalSupplyBoxConsumableItemSlotWidget_C::OnMouseLeave(struct Unknown& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PersonalSupplyBoxConsumableItemSlotWidget.UW-PersonalSupplyBoxConsumableItemSlotWidget_C.OnMouseLeave");

	struct OnMouseLeave_Params {
		struct Unknown& MouseEvent;
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
inline void UUW-PersonalSupplyBoxConsumableItemSlotWidget_C::OnRightClickEventDispatcher__DelegateSignature(struct Unknown Slot) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PersonalSupplyBoxConsumableItemSlotWidget.UW-PersonalSupplyBoxConsumableItemSlotWidget_C.OnRightClickEventDispatcher__DelegateSignature");

	struct OnRightClickEventDispatcher__DelegateSignature_Params {
		struct Unknown Slot;
	}; OnRightClickEventDispatcher__DelegateSignature_Params Params;

	Params.Slot = Slot;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PersonalSupplyBoxConsumableItemSlotWidget.UW-PersonalSupplyBoxConsumableItemSlotWidget_C.OnChangeSlotEventDispatcher__DelegateSignature
inline void UUW-PersonalSupplyBoxConsumableItemSlotWidget_C::OnChangeSlotEventDispatcher__DelegateSignature(struct Unknown Source, struct Unknown Target) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PersonalSupplyBoxConsumableItemSlotWidget.UW-PersonalSupplyBoxConsumableItemSlotWidget_C.OnChangeSlotEventDispatcher__DelegateSignature");

	struct OnChangeSlotEventDispatcher__DelegateSignature_Params {
		struct Unknown Source;
		struct Unknown Target;
	}; OnChangeSlotEventDispatcher__DelegateSignature_Params Params;

	Params.Source = Source;
	Params.Target = Target;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PersonalSupplyBoxConsumableItemSlotWidget.UW-PersonalSupplyBoxConsumableItemSlotWidget_C.ShowToolTipEventDispatcher__DelegateSignature
inline void UUW-PersonalSupplyBoxConsumableItemSlotWidget_C::ShowToolTipEventDispatcher__DelegateSignature(char IsShow, struct Unknown Slot) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PersonalSupplyBoxConsumableItemSlotWidget.UW-PersonalSupplyBoxConsumableItemSlotWidget_C.ShowToolTipEventDispatcher__DelegateSignature");

	struct ShowToolTipEventDispatcher__DelegateSignature_Params {
		char IsShow;
		struct Unknown Slot;
	}; ShowToolTipEventDispatcher__DelegateSignature_Params Params;

	Params.IsShow = IsShow;
	Params.Slot = Slot;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PersonalSupplyBoxConsumableItemSlotWidget.UW-PersonalSupplyBoxConsumableItemSlotWidget_C.OnDropEventDispatcher__DelegateSignature
inline void UUW-PersonalSupplyBoxConsumableItemSlotWidget_C::OnDropEventDispatcher__DelegateSignature(struct Unknown ConsumalbeItemDat, int32_t SlotIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PersonalSupplyBoxConsumableItemSlotWidget.UW-PersonalSupplyBoxConsumableItemSlotWidget_C.OnDropEventDispatcher__DelegateSignature");

	struct OnDropEventDispatcher__DelegateSignature_Params {
		struct Unknown ConsumalbeItemDat;
		int32_t SlotIndex;
	}; OnDropEventDispatcher__DelegateSignature_Params Params;

	Params.ConsumalbeItemDat = ConsumalbeItemDat;
	Params.SlotIndex = SlotIndex;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

