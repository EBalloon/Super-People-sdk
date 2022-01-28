// WidgetBlueprintGeneratedClass UW-Inventory_Proximity.UW-Inventory_Proximity_C
class UUW-Inventory_Proximity_C : public UUserWidget {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248 (8)
	struct UWrapBox DropBoxPanel; // 0x250 (8)
	struct UScrollBox ScrollBox_2; // 0x258 (8)
	struct UWrapBox WB-BoxList; // 0x260 (8)
	struct UUW-InventoryWidget_C InventoryWidget; // 0x268 (8)

	void SetProximityBox(struct UActor TargetActor); // Function UW-Inventory_Proximity.UW-Inventory_Proximity_C.SetProximityBox(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void GetUsableProximityBox(struct UUW-Inventory_ProximityBoxSlot_C& OutBoxSlot); // Function UW-Inventory_Proximity.UW-Inventory_Proximity_C.GetUsableProximityBox(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void AllHiddenDropboxWidget(); // Function UW-Inventory_Proximity.UW-Inventory_Proximity_C.AllHiddenDropboxWidget(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	char DropItem(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation Operation); // Function UW-Inventory_Proximity.UW-Inventory_Proximity_C.DropItem(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	char OnDrop(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation Operation); // Function UW-Inventory_Proximity.UW-Inventory_Proximity_C.OnDrop(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void CloseHover(); // Function UW-Inventory_Proximity.UW-Inventory_Proximity_C.CloseHover(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void OnDragLeave(struct FPointerEvent PointerEvent, struct UDragDropOperation Operation); // Function UW-Inventory_Proximity.UW-Inventory_Proximity_C.OnDragLeave(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void OnDragEnter(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation Operation); // Function UW-Inventory_Proximity.UW-Inventory_Proximity_C.OnDragEnter(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void SetScrollSpeed(float Speed); // Function UW-Inventory_Proximity.UW-Inventory_Proximity_C.SetScrollSpeed(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void ExecuteUbergraph_UW-Inventory_Proximity(int32_t EntryPoint); // Function UW-Inventory_Proximity.UW-Inventory_Proximity_C.ExecuteUbergraph_UW-Inventory_Proximity(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
};

// Function UW-Inventory_Proximity.UW-Inventory_Proximity_C.SetProximityBox
inline void UUW-Inventory_Proximity_C::SetProximityBox(struct UActor TargetActor) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_Proximity.UW-Inventory_Proximity_C.SetProximityBox");

	struct SetProximityBox_Params {
		struct UActor TargetActor;
	}; SetProximityBox_Params Params;

	Params.TargetActor = TargetActor;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_Proximity.UW-Inventory_Proximity_C.GetUsableProximityBox
inline void UUW-Inventory_Proximity_C::GetUsableProximityBox(struct UUW-Inventory_ProximityBoxSlot_C& OutBoxSlot) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_Proximity.UW-Inventory_Proximity_C.GetUsableProximityBox");

	struct GetUsableProximityBox_Params {
		struct UUW-Inventory_ProximityBoxSlot_C& OutBoxSlot;
	}; GetUsableProximityBox_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	OutBoxSlot = Params.OutBoxSlot;

}

// Function UW-Inventory_Proximity.UW-Inventory_Proximity_C.AllHiddenDropboxWidget
inline void UUW-Inventory_Proximity_C::AllHiddenDropboxWidget() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_Proximity.UW-Inventory_Proximity_C.AllHiddenDropboxWidget");

	struct AllHiddenDropboxWidget_Params {
		
	}; AllHiddenDropboxWidget_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_Proximity.UW-Inventory_Proximity_C.DropItem
inline char UUW-Inventory_Proximity_C::DropItem(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation Operation) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_Proximity.UW-Inventory_Proximity_C.DropItem");

	struct DropItem_Params {
		struct FGeometry MyGeometry;
		struct FPointerEvent PointerEvent;
		struct UDragDropOperation Operation;
		char ReturnValue;

	}; DropItem_Params Params;

	Params.MyGeometry = MyGeometry;
	Params.PointerEvent = PointerEvent;
	Params.Operation = Operation;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UW-Inventory_Proximity.UW-Inventory_Proximity_C.OnDrop
inline char UUW-Inventory_Proximity_C::OnDrop(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation Operation) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_Proximity.UW-Inventory_Proximity_C.OnDrop");

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

// Function UW-Inventory_Proximity.UW-Inventory_Proximity_C.CloseHover
inline void UUW-Inventory_Proximity_C::CloseHover() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_Proximity.UW-Inventory_Proximity_C.CloseHover");

	struct CloseHover_Params {
		
	}; CloseHover_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_Proximity.UW-Inventory_Proximity_C.OnDragLeave
inline void UUW-Inventory_Proximity_C::OnDragLeave(struct FPointerEvent PointerEvent, struct UDragDropOperation Operation) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_Proximity.UW-Inventory_Proximity_C.OnDragLeave");

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

// Function UW-Inventory_Proximity.UW-Inventory_Proximity_C.OnDragEnter
inline void UUW-Inventory_Proximity_C::OnDragEnter(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation Operation) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_Proximity.UW-Inventory_Proximity_C.OnDragEnter");

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

// Function UW-Inventory_Proximity.UW-Inventory_Proximity_C.SetScrollSpeed
inline void UUW-Inventory_Proximity_C::SetScrollSpeed(float Speed) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_Proximity.UW-Inventory_Proximity_C.SetScrollSpeed");

	struct SetScrollSpeed_Params {
		float Speed;
	}; SetScrollSpeed_Params Params;

	Params.Speed = Speed;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_Proximity.UW-Inventory_Proximity_C.ExecuteUbergraph_UW-Inventory_Proximity
inline void UUW-Inventory_Proximity_C::ExecuteUbergraph_UW-Inventory_Proximity(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_Proximity.UW-Inventory_Proximity_C.ExecuteUbergraph_UW-Inventory_Proximity");

	struct ExecuteUbergraph_UW-Inventory_Proximity_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_UW-Inventory_Proximity_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

