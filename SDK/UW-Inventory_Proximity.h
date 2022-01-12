// WidgetBlueprintGeneratedClass UW-Inventory_Proximity.UW-Inventory_Proximity_C
class UUW-Inventory_Proximity_C : public UUserWidget {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248 (8)
	struct UWrapBox DropBoxPanel; // 0x250 (8)
	struct UImage Image_1; // 0x258 (8)
	struct UImage Image_2; // 0x260 (8)
	struct UImage Image_3; // 0x268 (8)
	struct UImage Image_4; // 0x270 (8)
	struct UImage Image_5; // 0x278 (8)
	struct UImage Image_9; // 0x280 (8)
	struct UImage Image_10; // 0x288 (8)
	struct UImage Image_11; // 0x290 (8)
	struct UImage Image_12; // 0x298 (8)
	struct UImage Image_13; // 0x2A0 (8)
	struct UImage Image_14; // 0x2A8 (8)
	struct UImage Image_15; // 0x2B0 (8)
	struct UImage Image_16; // 0x2B8 (8)
	struct UImage Image_17; // 0x2C0 (8)
	struct UImage Image_18; // 0x2C8 (8)
	struct UImage Image_19; // 0x2D0 (8)
	struct UImage Image_20; // 0x2D8 (8)
	struct UImage Image_21; // 0x2E0 (8)
	struct UScrollBox ScrollBox_2; // 0x2E8 (8)
	struct USizeBox SizeBox_1; // 0x2F0 (8)
	struct UWrapBox WB-BoxList; // 0x2F8 (8)
	struct UWrapBox WrapBox_1; // 0x300 (8)

	char DropItem(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation Operation); // Function UW-Inventory_Proximity.UW-Inventory_Proximity_C.DropItem(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	char OnDrop(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation Operation); // Function UW-Inventory_Proximity.UW-Inventory_Proximity_C.OnDrop(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void CloseHover(); // Function UW-Inventory_Proximity.UW-Inventory_Proximity_C.CloseHover(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void OnDragLeave(struct FPointerEvent PointerEvent, struct UDragDropOperation Operation); // Function UW-Inventory_Proximity.UW-Inventory_Proximity_C.OnDragLeave(BlueprintCosmetic|Event|Public|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void OnDragEnter(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation Operation); // Function UW-Inventory_Proximity.UW-Inventory_Proximity_C.OnDragEnter(BlueprintCosmetic|Event|Public|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void SetScrollSpeed(float Speed); // Function UW-Inventory_Proximity.UW-Inventory_Proximity_C.SetScrollSpeed(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void ExecuteUbergraph_UW-Inventory_Proximity(int32_t EntryPoint); // Function UW-Inventory_Proximity.UW-Inventory_Proximity_C.ExecuteUbergraph_UW-Inventory_Proximity(Final|UbergraphFunction|HasDefaults) // <Game_BE.exe+0x2B80160>
};

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

