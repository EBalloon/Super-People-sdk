// WidgetBlueprintGeneratedClass UW-Inventory_Keeped.UW-Inventory_Keeped_C
class UUW-Inventory_Keeped_C : public UUserWidget {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248 (8)
	struct UWidgetAnimation Character_BG_Motion; // 0x250 (8)
	struct UImage Image_130; // 0x258 (8)
	struct UImage Image_308; // 0x260 (8)
	struct UScrollBox ScrollBox_KeepedList; // 0x268 (8)
	struct UUW-Inventory_KeepedSlot_C UW-Inventory_KeepedSlot; // 0x270 (8)
	struct UUW-Inventory_KeepedSlot_C UW-Inventory_KeepedSlot_74; // 0x278 (8)
	struct ABP-BravoHotel-PlayerController_C PlayerController; // 0x280 (8)

	void DisableCarriedListHover(); // Function UW-Inventory_Keeped.UW-Inventory_Keeped_C.DisableCarriedListHover(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	char DropItem(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation Operation); // Function UW-Inventory_Keeped.UW-Inventory_Keeped_C.DropItem(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void GetInventoryComponent(char& Result, struct UPlayerInventoryComponent& InventoryComponentRef); // Function UW-Inventory_Keeped.UW-Inventory_Keeped_C.GetInventoryComponent(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void Reset(); // Function UW-Inventory_Keeped.UW-Inventory_Keeped_C.Reset(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void HoverEquipSlotList(enum class EWearableItemType WearableItemType); // Function UW-Inventory_Keeped.UW-Inventory_Keeped_C.HoverEquipSlotList(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void HoverResetEquipSlotList(); // Function UW-Inventory_Keeped.UW-Inventory_Keeped_C.HoverResetEquipSlotList(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	char OnDrop(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation Operation); // Function UW-Inventory_Keeped.UW-Inventory_Keeped_C.OnDrop(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void OnDragLeave(struct FPointerEvent PointerEvent, struct UDragDropOperation Operation); // Function UW-Inventory_Keeped.UW-Inventory_Keeped_C.OnDragLeave(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void OnDragEnter(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation Operation); // Function UW-Inventory_Keeped.UW-Inventory_Keeped_C.OnDragEnter(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void Construct(); // Function UW-Inventory_Keeped.UW-Inventory_Keeped_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void ExecuteUbergraph_UW-Inventory_Keeped(int32_t EntryPoint); // Function UW-Inventory_Keeped.UW-Inventory_Keeped_C.ExecuteUbergraph_UW-Inventory_Keeped(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
};

// Function UW-Inventory_Keeped.UW-Inventory_Keeped_C.DisableCarriedListHover
inline void UUW-Inventory_Keeped_C::DisableCarriedListHover() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_Keeped.UW-Inventory_Keeped_C.DisableCarriedListHover");

	struct DisableCarriedListHover_Params {
		
	}; DisableCarriedListHover_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_Keeped.UW-Inventory_Keeped_C.DropItem
inline char UUW-Inventory_Keeped_C::DropItem(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation Operation) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_Keeped.UW-Inventory_Keeped_C.DropItem");

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

// Function UW-Inventory_Keeped.UW-Inventory_Keeped_C.GetInventoryComponent
inline void UUW-Inventory_Keeped_C::GetInventoryComponent(char& Result, struct UPlayerInventoryComponent& InventoryComponentRef) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_Keeped.UW-Inventory_Keeped_C.GetInventoryComponent");

	struct GetInventoryComponent_Params {
		char& Result;
		struct UPlayerInventoryComponent& InventoryComponentRef;
	}; GetInventoryComponent_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Result = Params.Result;
	InventoryComponentRef = Params.InventoryComponentRef;

}

// Function UW-Inventory_Keeped.UW-Inventory_Keeped_C.Reset
inline void UUW-Inventory_Keeped_C::Reset() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_Keeped.UW-Inventory_Keeped_C.Reset");

	struct Reset_Params {
		
	}; Reset_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_Keeped.UW-Inventory_Keeped_C.HoverEquipSlotList
inline void UUW-Inventory_Keeped_C::HoverEquipSlotList(enum class EWearableItemType WearableItemType) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_Keeped.UW-Inventory_Keeped_C.HoverEquipSlotList");

	struct HoverEquipSlotList_Params {
		enum class EWearableItemType WearableItemType;
	}; HoverEquipSlotList_Params Params;

	Params.WearableItemType = WearableItemType;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_Keeped.UW-Inventory_Keeped_C.HoverResetEquipSlotList
inline void UUW-Inventory_Keeped_C::HoverResetEquipSlotList() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_Keeped.UW-Inventory_Keeped_C.HoverResetEquipSlotList");

	struct HoverResetEquipSlotList_Params {
		
	}; HoverResetEquipSlotList_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_Keeped.UW-Inventory_Keeped_C.OnDrop
inline char UUW-Inventory_Keeped_C::OnDrop(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation Operation) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_Keeped.UW-Inventory_Keeped_C.OnDrop");

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

// Function UW-Inventory_Keeped.UW-Inventory_Keeped_C.OnDragLeave
inline void UUW-Inventory_Keeped_C::OnDragLeave(struct FPointerEvent PointerEvent, struct UDragDropOperation Operation) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_Keeped.UW-Inventory_Keeped_C.OnDragLeave");

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

// Function UW-Inventory_Keeped.UW-Inventory_Keeped_C.OnDragEnter
inline void UUW-Inventory_Keeped_C::OnDragEnter(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation Operation) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_Keeped.UW-Inventory_Keeped_C.OnDragEnter");

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

// Function UW-Inventory_Keeped.UW-Inventory_Keeped_C.Construct
inline void UUW-Inventory_Keeped_C::Construct() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_Keeped.UW-Inventory_Keeped_C.Construct");

	struct Construct_Params {
		
	}; Construct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_Keeped.UW-Inventory_Keeped_C.ExecuteUbergraph_UW-Inventory_Keeped
inline void UUW-Inventory_Keeped_C::ExecuteUbergraph_UW-Inventory_Keeped(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_Keeped.UW-Inventory_Keeped_C.ExecuteUbergraph_UW-Inventory_Keeped");

	struct ExecuteUbergraph_UW-Inventory_Keeped_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_UW-Inventory_Keeped_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

