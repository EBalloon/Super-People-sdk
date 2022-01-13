// WidgetBlueprintGeneratedClass UW-Inventory_Recipe.UW-Inventory_Recipe_C
class UUW-Inventory_Recipe_C : public UUserWidget {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248 (8)
	struct UWidgetAnimation Character_BG_Motion; // 0x250 (8)
	struct UImage Image_308; // 0x258 (8)
	struct UScrollBox ScrollBox_KeepedList; // 0x260 (8)
	struct USizeBox SizeBox_KeepedList; // 0x268 (8)
	struct ABP-BravoHotel-PlayerController_C PlayerController; // 0x270 (8)
	float SlotMaxHeight; // 0x278 (4)

	void UpdateSlotMaxSize(int32_t SlotNum); // Function UW-Inventory_Recipe.UW-Inventory_Recipe_C.UpdateSlotMaxSize(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void DisableCarriedListHover(); // Function UW-Inventory_Recipe.UW-Inventory_Recipe_C.DisableCarriedListHover(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	char DropItem(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation Operation); // Function UW-Inventory_Recipe.UW-Inventory_Recipe_C.DropItem(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void GetInventoryComponent(char& Result, struct UPlayerInventoryComponent& InventoryComponentRef); // Function UW-Inventory_Recipe.UW-Inventory_Recipe_C.GetInventoryComponent(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void Reset(); // Function UW-Inventory_Recipe.UW-Inventory_Recipe_C.Reset(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void HoverEquipSlotList(enum class EWearableItemType WearableItemType); // Function UW-Inventory_Recipe.UW-Inventory_Recipe_C.HoverEquipSlotList(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void HoverResetEquipSlotList(); // Function UW-Inventory_Recipe.UW-Inventory_Recipe_C.HoverResetEquipSlotList(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	char OnDrop(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation Operation); // Function UW-Inventory_Recipe.UW-Inventory_Recipe_C.OnDrop(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void OnDragEnter(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation Operation); // Function UW-Inventory_Recipe.UW-Inventory_Recipe_C.OnDragEnter(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void OnDragLeave(struct FPointerEvent PointerEvent, struct UDragDropOperation Operation); // Function UW-Inventory_Recipe.UW-Inventory_Recipe_C.OnDragLeave(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void Construct(); // Function UW-Inventory_Recipe.UW-Inventory_Recipe_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void ExecuteUbergraph_UW-Inventory_Recipe(int32_t EntryPoint); // Function UW-Inventory_Recipe.UW-Inventory_Recipe_C.ExecuteUbergraph_UW-Inventory_Recipe(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
};

// Function UW-Inventory_Recipe.UW-Inventory_Recipe_C.UpdateSlotMaxSize
inline void UUW-Inventory_Recipe_C::UpdateSlotMaxSize(int32_t SlotNum) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_Recipe.UW-Inventory_Recipe_C.UpdateSlotMaxSize");

	struct UpdateSlotMaxSize_Params {
		int32_t SlotNum;
	}; UpdateSlotMaxSize_Params Params;

	Params.SlotNum = SlotNum;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_Recipe.UW-Inventory_Recipe_C.DisableCarriedListHover
inline void UUW-Inventory_Recipe_C::DisableCarriedListHover() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_Recipe.UW-Inventory_Recipe_C.DisableCarriedListHover");

	struct DisableCarriedListHover_Params {
		
	}; DisableCarriedListHover_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_Recipe.UW-Inventory_Recipe_C.DropItem
inline char UUW-Inventory_Recipe_C::DropItem(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation Operation) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_Recipe.UW-Inventory_Recipe_C.DropItem");

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

// Function UW-Inventory_Recipe.UW-Inventory_Recipe_C.GetInventoryComponent
inline void UUW-Inventory_Recipe_C::GetInventoryComponent(char& Result, struct UPlayerInventoryComponent& InventoryComponentRef) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_Recipe.UW-Inventory_Recipe_C.GetInventoryComponent");

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

// Function UW-Inventory_Recipe.UW-Inventory_Recipe_C.Reset
inline void UUW-Inventory_Recipe_C::Reset() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_Recipe.UW-Inventory_Recipe_C.Reset");

	struct Reset_Params {
		
	}; Reset_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_Recipe.UW-Inventory_Recipe_C.HoverEquipSlotList
inline void UUW-Inventory_Recipe_C::HoverEquipSlotList(enum class EWearableItemType WearableItemType) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_Recipe.UW-Inventory_Recipe_C.HoverEquipSlotList");

	struct HoverEquipSlotList_Params {
		enum class EWearableItemType WearableItemType;
	}; HoverEquipSlotList_Params Params;

	Params.WearableItemType = WearableItemType;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_Recipe.UW-Inventory_Recipe_C.HoverResetEquipSlotList
inline void UUW-Inventory_Recipe_C::HoverResetEquipSlotList() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_Recipe.UW-Inventory_Recipe_C.HoverResetEquipSlotList");

	struct HoverResetEquipSlotList_Params {
		
	}; HoverResetEquipSlotList_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_Recipe.UW-Inventory_Recipe_C.OnDrop
inline char UUW-Inventory_Recipe_C::OnDrop(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation Operation) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_Recipe.UW-Inventory_Recipe_C.OnDrop");

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

// Function UW-Inventory_Recipe.UW-Inventory_Recipe_C.OnDragEnter
inline void UUW-Inventory_Recipe_C::OnDragEnter(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation Operation) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_Recipe.UW-Inventory_Recipe_C.OnDragEnter");

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

// Function UW-Inventory_Recipe.UW-Inventory_Recipe_C.OnDragLeave
inline void UUW-Inventory_Recipe_C::OnDragLeave(struct FPointerEvent PointerEvent, struct UDragDropOperation Operation) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_Recipe.UW-Inventory_Recipe_C.OnDragLeave");

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

// Function UW-Inventory_Recipe.UW-Inventory_Recipe_C.Construct
inline void UUW-Inventory_Recipe_C::Construct() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_Recipe.UW-Inventory_Recipe_C.Construct");

	struct Construct_Params {
		
	}; Construct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_Recipe.UW-Inventory_Recipe_C.ExecuteUbergraph_UW-Inventory_Recipe
inline void UUW-Inventory_Recipe_C::ExecuteUbergraph_UW-Inventory_Recipe(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_Recipe.UW-Inventory_Recipe_C.ExecuteUbergraph_UW-Inventory_Recipe");

	struct ExecuteUbergraph_UW-Inventory_Recipe_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_UW-Inventory_Recipe_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

