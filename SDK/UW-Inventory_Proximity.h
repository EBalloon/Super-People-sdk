// WidgetBlueprintGeneratedClass UW-Inventory_Proximity.UW-Inventory_Proximity_C
class UUW-Inventory_Proximity_C : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown DropBoxPanel; // 0x250 (8)
	struct Unknown Image_1; // 0x258 (8)
	struct Unknown Image_2; // 0x260 (8)
	struct Unknown Image_3; // 0x268 (8)
	struct Unknown Image_4; // 0x270 (8)
	struct Unknown Image_5; // 0x278 (8)
	struct Unknown Image_9; // 0x280 (8)
	struct Unknown Image_10; // 0x288 (8)
	struct Unknown Image_11; // 0x290 (8)
	struct Unknown Image_12; // 0x298 (8)
	struct Unknown Image_13; // 0x2A0 (8)
	struct Unknown Image_14; // 0x2A8 (8)
	struct Unknown Image_15; // 0x2B0 (8)
	struct Unknown Image_16; // 0x2B8 (8)
	struct Unknown Image_17; // 0x2C0 (8)
	struct Unknown Image_18; // 0x2C8 (8)
	struct Unknown Image_19; // 0x2D0 (8)
	struct Unknown Image_20; // 0x2D8 (8)
	struct Unknown Image_21; // 0x2E0 (8)
	struct Unknown ScrollBox_2; // 0x2E8 (8)
	struct Unknown SizeBox_1; // 0x2F0 (8)
	struct Unknown WB-BoxList; // 0x2F8 (8)
	struct Unknown WrapBox_1; // 0x300 (8)

	char DropItem(struct Unknown MyGeometry, struct Unknown PointerEvent, struct Unknown Operation); // Function UW-Inventory_Proximity.UW-Inventory_Proximity_C.DropItem(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	char OnDrop(struct Unknown MyGeometry, struct Unknown PointerEvent, struct Unknown Operation); // Function UW-Inventory_Proximity.UW-Inventory_Proximity_C.OnDrop(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void CloseHover(); // Function UW-Inventory_Proximity.UW-Inventory_Proximity_C.CloseHover(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void OnDragLeave(struct Unknown PointerEvent, struct Unknown Operation); // Function UW-Inventory_Proximity.UW-Inventory_Proximity_C.OnDragLeave(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void OnDragEnter(struct Unknown MyGeometry, struct Unknown PointerEvent, struct Unknown Operation); // Function UW-Inventory_Proximity.UW-Inventory_Proximity_C.OnDragEnter(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void ExecuteUbergraph_UW-Inventory_Proximity(int32_t EntryPoint); // Function UW-Inventory_Proximity.UW-Inventory_Proximity_C.ExecuteUbergraph_UW-Inventory_Proximity(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
};

// Function UW-Inventory_Proximity.UW-Inventory_Proximity_C.DropItem
inline char UUW-Inventory_Proximity_C::DropItem(struct Unknown MyGeometry, struct Unknown PointerEvent, struct Unknown Operation) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_Proximity.UW-Inventory_Proximity_C.DropItem");

	struct DropItem_Params {
		struct Unknown MyGeometry;
		struct Unknown PointerEvent;
		struct Unknown Operation;
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
inline char UUW-Inventory_Proximity_C::OnDrop(struct Unknown MyGeometry, struct Unknown PointerEvent, struct Unknown Operation) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_Proximity.UW-Inventory_Proximity_C.OnDrop");

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
inline void UUW-Inventory_Proximity_C::OnDragLeave(struct Unknown PointerEvent, struct Unknown Operation) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_Proximity.UW-Inventory_Proximity_C.OnDragLeave");

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

// Function UW-Inventory_Proximity.UW-Inventory_Proximity_C.OnDragEnter
inline void UUW-Inventory_Proximity_C::OnDragEnter(struct Unknown MyGeometry, struct Unknown PointerEvent, struct Unknown Operation) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_Proximity.UW-Inventory_Proximity_C.OnDragEnter");

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

