// WidgetBlueprintGeneratedClass UW-Inventory_Material.UW-Inventory_Material_C
class UUW-Inventory_Material_C : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown Character_BG_Motion; // 0x250 (8)
	struct Unknown Image_308; // 0x258 (8)
	struct Unknown ScrollBox_KeepedList; // 0x260 (8)
	struct Unknown TextBlock_Count; // 0x268 (8)
	struct Unknown PlayerController; // 0x270 (8)

	void HoverRecipeItems(struct TArray<Unknown>& ItemKeys); // Function UW-Inventory_Material.UW-Inventory_Material_C.HoverRecipeItems(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void HoverRecipeTree(struct FName ItemKey); // Function UW-Inventory_Material.UW-Inventory_Material_C.HoverRecipeTree(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void CompleteItems(struct TArray<Unknown>& ItemKeys); // Function UW-Inventory_Material.UW-Inventory_Material_C.CompleteItems(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void DisableCarriedListHover(); // Function UW-Inventory_Material.UW-Inventory_Material_C.DisableCarriedListHover(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	char DropItem(struct Unknown MyGeometry, struct Unknown PointerEvent, struct Unknown Operation); // Function UW-Inventory_Material.UW-Inventory_Material_C.DropItem(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void GetInventoryComponent(char& Result, struct Unknown& InventoryComponentRef); // Function UW-Inventory_Material.UW-Inventory_Material_C.GetInventoryComponent(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void Reset(); // Function UW-Inventory_Material.UW-Inventory_Material_C.Reset(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void HoverItems(struct TArray<Unknown>& ItemKeys); // Function UW-Inventory_Material.UW-Inventory_Material_C.HoverItems(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void HoverReset(); // Function UW-Inventory_Material.UW-Inventory_Material_C.HoverReset(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	char OnDrop(struct Unknown MyGeometry, struct Unknown PointerEvent, struct Unknown Operation); // Function UW-Inventory_Material.UW-Inventory_Material_C.OnDrop(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void OnDragEnter(struct Unknown MyGeometry, struct Unknown PointerEvent, struct Unknown Operation); // Function UW-Inventory_Material.UW-Inventory_Material_C.OnDragEnter(BlueprintCosmetic|Event|Public|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void OnDragLeave(struct Unknown PointerEvent, struct Unknown Operation); // Function UW-Inventory_Material.UW-Inventory_Material_C.OnDragLeave(BlueprintCosmetic|Event|Public|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void Construct(); // Function UW-Inventory_Material.UW-Inventory_Material_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void ExecuteUbergraph_UW-Inventory_Material(int32_t EntryPoint); // Function UW-Inventory_Material.UW-Inventory_Material_C.ExecuteUbergraph_UW-Inventory_Material(Final|UbergraphFunction|HasDefaults) // <Game_BE.exe+0x2B812B0>
};

// Function UW-Inventory_Material.UW-Inventory_Material_C.HoverRecipeItems
inline void UUW-Inventory_Material_C::HoverRecipeItems(struct TArray<Unknown>& ItemKeys) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_Material.UW-Inventory_Material_C.HoverRecipeItems");

	struct HoverRecipeItems_Params {
		struct TArray<Unknown>& ItemKeys;
	}; HoverRecipeItems_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	ItemKeys = Params.ItemKeys;

}

// Function UW-Inventory_Material.UW-Inventory_Material_C.HoverRecipeTree
inline void UUW-Inventory_Material_C::HoverRecipeTree(struct FName ItemKey) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_Material.UW-Inventory_Material_C.HoverRecipeTree");

	struct HoverRecipeTree_Params {
		struct FName ItemKey;
	}; HoverRecipeTree_Params Params;

	Params.ItemKey = ItemKey;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_Material.UW-Inventory_Material_C.CompleteItems
inline void UUW-Inventory_Material_C::CompleteItems(struct TArray<Unknown>& ItemKeys) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_Material.UW-Inventory_Material_C.CompleteItems");

	struct CompleteItems_Params {
		struct TArray<Unknown>& ItemKeys;
	}; CompleteItems_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	ItemKeys = Params.ItemKeys;

}

// Function UW-Inventory_Material.UW-Inventory_Material_C.DisableCarriedListHover
inline void UUW-Inventory_Material_C::DisableCarriedListHover() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_Material.UW-Inventory_Material_C.DisableCarriedListHover");

	struct DisableCarriedListHover_Params {
		
	}; DisableCarriedListHover_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_Material.UW-Inventory_Material_C.DropItem
inline char UUW-Inventory_Material_C::DropItem(struct Unknown MyGeometry, struct Unknown PointerEvent, struct Unknown Operation) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_Material.UW-Inventory_Material_C.DropItem");

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

// Function UW-Inventory_Material.UW-Inventory_Material_C.GetInventoryComponent
inline void UUW-Inventory_Material_C::GetInventoryComponent(char& Result, struct Unknown& InventoryComponentRef) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_Material.UW-Inventory_Material_C.GetInventoryComponent");

	struct GetInventoryComponent_Params {
		char& Result;
		struct Unknown& InventoryComponentRef;
	}; GetInventoryComponent_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Result = Params.Result;
	InventoryComponentRef = Params.InventoryComponentRef;

}

// Function UW-Inventory_Material.UW-Inventory_Material_C.Reset
inline void UUW-Inventory_Material_C::Reset() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_Material.UW-Inventory_Material_C.Reset");

	struct Reset_Params {
		
	}; Reset_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_Material.UW-Inventory_Material_C.HoverItems
inline void UUW-Inventory_Material_C::HoverItems(struct TArray<Unknown>& ItemKeys) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_Material.UW-Inventory_Material_C.HoverItems");

	struct HoverItems_Params {
		struct TArray<Unknown>& ItemKeys;
	}; HoverItems_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	ItemKeys = Params.ItemKeys;

}

// Function UW-Inventory_Material.UW-Inventory_Material_C.HoverReset
inline void UUW-Inventory_Material_C::HoverReset() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_Material.UW-Inventory_Material_C.HoverReset");

	struct HoverReset_Params {
		
	}; HoverReset_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_Material.UW-Inventory_Material_C.OnDrop
inline char UUW-Inventory_Material_C::OnDrop(struct Unknown MyGeometry, struct Unknown PointerEvent, struct Unknown Operation) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_Material.UW-Inventory_Material_C.OnDrop");

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

// Function UW-Inventory_Material.UW-Inventory_Material_C.OnDragEnter
inline void UUW-Inventory_Material_C::OnDragEnter(struct Unknown MyGeometry, struct Unknown PointerEvent, struct Unknown Operation) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_Material.UW-Inventory_Material_C.OnDragEnter");

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

// Function UW-Inventory_Material.UW-Inventory_Material_C.OnDragLeave
inline void UUW-Inventory_Material_C::OnDragLeave(struct Unknown PointerEvent, struct Unknown Operation) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_Material.UW-Inventory_Material_C.OnDragLeave");

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

// Function UW-Inventory_Material.UW-Inventory_Material_C.Construct
inline void UUW-Inventory_Material_C::Construct() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_Material.UW-Inventory_Material_C.Construct");

	struct Construct_Params {
		
	}; Construct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_Material.UW-Inventory_Material_C.ExecuteUbergraph_UW-Inventory_Material
inline void UUW-Inventory_Material_C::ExecuteUbergraph_UW-Inventory_Material(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_Material.UW-Inventory_Material_C.ExecuteUbergraph_UW-Inventory_Material");

	struct ExecuteUbergraph_UW-Inventory_Material_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_UW-Inventory_Material_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

