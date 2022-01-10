// WidgetBlueprintGeneratedClass UW-Inventory_Carried.UW-Inventory_Carried_C
class UUW-Inventory_Carried_C : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown HoverBG; // 0x250 (8)
	struct Unknown ScrollBox_1; // 0x258 (8)
	struct Unknown WB-CarriedList; // 0x260 (8)

	void DragLeave(struct Unknown PointerEvent, struct Unknown Operation); // Function UW-Inventory_Carried.UW-Inventory_Carried_C.DragLeave(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void DragEnter(struct Unknown MyGeometry, struct Unknown PointerEvent, struct Unknown Operation); // Function UW-Inventory_Carried.UW-Inventory_Carried_C.DragEnter(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	char DropItem(struct Unknown MyGeometry, struct Unknown PointerEvent, struct Unknown Operation); // Function UW-Inventory_Carried.UW-Inventory_Carried_C.DropItem(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void Disable(); // Function UW-Inventory_Carried.UW-Inventory_Carried_C.Disable(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void Enable(); // Function UW-Inventory_Carried.UW-Inventory_Carried_C.Enable(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	char OnDrop(struct Unknown MyGeometry, struct Unknown PointerEvent, struct Unknown Operation); // Function UW-Inventory_Carried.UW-Inventory_Carried_C.OnDrop(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void OnDragEnter(struct Unknown MyGeometry, struct Unknown PointerEvent, struct Unknown Operation); // Function UW-Inventory_Carried.UW-Inventory_Carried_C.OnDragEnter(BlueprintCosmetic|Event|Public|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void OnDragLeave(struct Unknown PointerEvent, struct Unknown Operation); // Function UW-Inventory_Carried.UW-Inventory_Carried_C.OnDragLeave(BlueprintCosmetic|Event|Public|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void SetScrollSpeed(float Speed); // Function UW-Inventory_Carried.UW-Inventory_Carried_C.SetScrollSpeed(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void ExecuteUbergraph_UW-Inventory_Carried(int32_t EntryPoint); // Function UW-Inventory_Carried.UW-Inventory_Carried_C.ExecuteUbergraph_UW-Inventory_Carried(Final|UbergraphFunction|HasDefaults) // <Game_BE.exe+0x2B812B0>
};

// Function UW-Inventory_Carried.UW-Inventory_Carried_C.DragLeave
inline void UUW-Inventory_Carried_C::DragLeave(struct Unknown PointerEvent, struct Unknown Operation) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_Carried.UW-Inventory_Carried_C.DragLeave");

	struct DragLeave_Params {
		struct Unknown PointerEvent;
		struct Unknown Operation;
	}; DragLeave_Params Params;

	Params.PointerEvent = PointerEvent;
	Params.Operation = Operation;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_Carried.UW-Inventory_Carried_C.DragEnter
inline void UUW-Inventory_Carried_C::DragEnter(struct Unknown MyGeometry, struct Unknown PointerEvent, struct Unknown Operation) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_Carried.UW-Inventory_Carried_C.DragEnter");

	struct DragEnter_Params {
		struct Unknown MyGeometry;
		struct Unknown PointerEvent;
		struct Unknown Operation;
	}; DragEnter_Params Params;

	Params.MyGeometry = MyGeometry;
	Params.PointerEvent = PointerEvent;
	Params.Operation = Operation;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_Carried.UW-Inventory_Carried_C.DropItem
inline char UUW-Inventory_Carried_C::DropItem(struct Unknown MyGeometry, struct Unknown PointerEvent, struct Unknown Operation) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_Carried.UW-Inventory_Carried_C.DropItem");

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

// Function UW-Inventory_Carried.UW-Inventory_Carried_C.Disable
inline void UUW-Inventory_Carried_C::Disable() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_Carried.UW-Inventory_Carried_C.Disable");

	struct Disable_Params {
		
	}; Disable_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_Carried.UW-Inventory_Carried_C.Enable
inline void UUW-Inventory_Carried_C::Enable() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_Carried.UW-Inventory_Carried_C.Enable");

	struct Enable_Params {
		
	}; Enable_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_Carried.UW-Inventory_Carried_C.OnDrop
inline char UUW-Inventory_Carried_C::OnDrop(struct Unknown MyGeometry, struct Unknown PointerEvent, struct Unknown Operation) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_Carried.UW-Inventory_Carried_C.OnDrop");

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

// Function UW-Inventory_Carried.UW-Inventory_Carried_C.OnDragEnter
inline void UUW-Inventory_Carried_C::OnDragEnter(struct Unknown MyGeometry, struct Unknown PointerEvent, struct Unknown Operation) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_Carried.UW-Inventory_Carried_C.OnDragEnter");

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

// Function UW-Inventory_Carried.UW-Inventory_Carried_C.OnDragLeave
inline void UUW-Inventory_Carried_C::OnDragLeave(struct Unknown PointerEvent, struct Unknown Operation) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_Carried.UW-Inventory_Carried_C.OnDragLeave");

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

// Function UW-Inventory_Carried.UW-Inventory_Carried_C.SetScrollSpeed
inline void UUW-Inventory_Carried_C::SetScrollSpeed(float Speed) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_Carried.UW-Inventory_Carried_C.SetScrollSpeed");

	struct SetScrollSpeed_Params {
		float Speed;
	}; SetScrollSpeed_Params Params;

	Params.Speed = Speed;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_Carried.UW-Inventory_Carried_C.ExecuteUbergraph_UW-Inventory_Carried
inline void UUW-Inventory_Carried_C::ExecuteUbergraph_UW-Inventory_Carried(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_Carried.UW-Inventory_Carried_C.ExecuteUbergraph_UW-Inventory_Carried");

	struct ExecuteUbergraph_UW-Inventory_Carried_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_UW-Inventory_Carried_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

