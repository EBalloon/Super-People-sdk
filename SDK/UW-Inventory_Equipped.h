// WidgetBlueprintGeneratedClass UW-Inventory_Equipped.UW-Inventory_Equipped_C
class UUW-Inventory_Equipped_C : public UUserWidget {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248 (8)
	struct UWidgetAnimation Character_BG_Motion; // 0x250 (8)
	struct UUW-Inventory_EquippedSlot_C ArmorSlot; // 0x258 (8)
	struct UUW-Inventory_EquippedSlot_C BagSlot; // 0x260 (8)
	struct UUW-Inventory_EquippedSlot_C BottomSlot; // 0x268 (8)
	struct UImage Character_BG; // 0x270 (8)
	struct UUW-Inventory_EquippedSlot_C EyeWearSlot; // 0x278 (8)
	struct UUW-Inventory_EquippedSlot_C GhillieSlot; // 0x280 (8)
	struct UUW-Inventory_EquippedSlot_C GlovesSlot; // 0x288 (8)
	struct UUW-Inventory_EquippedSlot_C HatSlot; // 0x290 (8)
	struct UUW-Inventory_EquippedSlot_C HelmetSlot; // 0x298 (8)
	struct UUW-Inventory_EquippedSlot_C MaskSlot; // 0x2A0 (8)
	struct UUW-Inventory_EquippedSlot_C OuterSlot; // 0x2A8 (8)
	struct UUW-Inventory_EquippedSlot_C ShoesSlot; // 0x2B0 (8)
	struct UUW-Inventory_EquippedSlot_C TopSlot; // 0x2B8 (8)
	struct UUW-Inventory_CharacterPreView_C UW-Inventory_CharacterPreView; // 0x2C0 (8)
	struct ABP-BravoHotel-PlayerController_C PlayerController; // 0x2C8 (8)
	struct TMap<enum class EWearableItemType, struct UUW-Inventory_EquippedSlot_C> EquipedSlots; // 0x2D0 (80)

	void ShowStatupAnim(struct FStatupAnimParameters& StatParams, enum class EStatupAnimType StatType); // Function UW-Inventory_Equipped.UW-Inventory_Equipped_C.ShowStatupAnim(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void HoverRecipeTree(struct FName ItemKey); // Function UW-Inventory_Equipped.UW-Inventory_Equipped_C.HoverRecipeTree(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void CompleteItems(struct TArray<struct FName>& ItemKeys); // Function UW-Inventory_Equipped.UW-Inventory_Equipped_C.CompleteItems(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void HoverItems(struct TArray<struct FName>& ItemKeys); // Function UW-Inventory_Equipped.UW-Inventory_Equipped_C.HoverItems(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void GetWearItemKey(enum class EWearableItemType ItemSlot, struct FName& ItemKey); // Function UW-Inventory_Equipped.UW-Inventory_Equipped_C.GetWearItemKey(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	enum class ESlateVisibility Get_btn_ArmorTree_Visibility_1(); // Function UW-Inventory_Equipped.UW-Inventory_Equipped_C.Get_btn_ArmorTree_Visibility_1(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void DisableCarriedListHover(); // Function UW-Inventory_Equipped.UW-Inventory_Equipped_C.DisableCarriedListHover(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	char DropItem(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation Operation); // Function UW-Inventory_Equipped.UW-Inventory_Equipped_C.DropItem(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void GetInventoryComponent(char& Result, struct UPlayerInventoryComponent& InventoryComponentRef); // Function UW-Inventory_Equipped.UW-Inventory_Equipped_C.GetInventoryComponent(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void Reset(); // Function UW-Inventory_Equipped.UW-Inventory_Equipped_C.Reset(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void HoverEquipSlotList(enum class EWearableItemType WearableItemType); // Function UW-Inventory_Equipped.UW-Inventory_Equipped_C.HoverEquipSlotList(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void HoverResetEquipSlotList(); // Function UW-Inventory_Equipped.UW-Inventory_Equipped_C.HoverResetEquipSlotList(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	char OnDrop(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation Operation); // Function UW-Inventory_Equipped.UW-Inventory_Equipped_C.OnDrop(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void SetEquippedSlot(struct UUW-InventoryWidget_C InventoryWidget, struct FInventoryItemInfo InventoryItemInfo); // Function UW-Inventory_Equipped.UW-Inventory_Equipped_C.SetEquippedSlot(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void Construct(); // Function UW-Inventory_Equipped.UW-Inventory_Equipped_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void OnDragEnter(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation Operation); // Function UW-Inventory_Equipped.UW-Inventory_Equipped_C.OnDragEnter(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void OnDragLeave(struct FPointerEvent PointerEvent, struct UDragDropOperation Operation); // Function UW-Inventory_Equipped.UW-Inventory_Equipped_C.OnDragLeave(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void BndEvt__btn_HelmetTree_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function UW-Inventory_Equipped.UW-Inventory_Equipped_C.BndEvt__btn_HelmetTree_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void BndEvt__btn_ArmorTree_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function UW-Inventory_Equipped.UW-Inventory_Equipped_C.BndEvt__btn_ArmorTree_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void BndEvt__btn_BagTree_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // Function UW-Inventory_Equipped.UW-Inventory_Equipped_C.BndEvt__btn_BagTree_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void ExecuteUbergraph_UW-Inventory_Equipped(int32_t EntryPoint); // Function UW-Inventory_Equipped.UW-Inventory_Equipped_C.ExecuteUbergraph_UW-Inventory_Equipped(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
};

// Function UW-Inventory_Equipped.UW-Inventory_Equipped_C.ShowStatupAnim
inline void UUW-Inventory_Equipped_C::ShowStatupAnim(struct FStatupAnimParameters& StatParams, enum class EStatupAnimType StatType) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_Equipped.UW-Inventory_Equipped_C.ShowStatupAnim");

	struct ShowStatupAnim_Params {
		struct FStatupAnimParameters& StatParams;
		enum class EStatupAnimType StatType;
	}; ShowStatupAnim_Params Params;

	Params.StatType = StatType;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	StatParams = Params.StatParams;

}

// Function UW-Inventory_Equipped.UW-Inventory_Equipped_C.HoverRecipeTree
inline void UUW-Inventory_Equipped_C::HoverRecipeTree(struct FName ItemKey) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_Equipped.UW-Inventory_Equipped_C.HoverRecipeTree");

	struct HoverRecipeTree_Params {
		struct FName ItemKey;
	}; HoverRecipeTree_Params Params;

	Params.ItemKey = ItemKey;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_Equipped.UW-Inventory_Equipped_C.CompleteItems
inline void UUW-Inventory_Equipped_C::CompleteItems(struct TArray<struct FName>& ItemKeys) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_Equipped.UW-Inventory_Equipped_C.CompleteItems");

	struct CompleteItems_Params {
		struct TArray<struct FName>& ItemKeys;
	}; CompleteItems_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	ItemKeys = Params.ItemKeys;

}

// Function UW-Inventory_Equipped.UW-Inventory_Equipped_C.HoverItems
inline void UUW-Inventory_Equipped_C::HoverItems(struct TArray<struct FName>& ItemKeys) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_Equipped.UW-Inventory_Equipped_C.HoverItems");

	struct HoverItems_Params {
		struct TArray<struct FName>& ItemKeys;
	}; HoverItems_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	ItemKeys = Params.ItemKeys;

}

// Function UW-Inventory_Equipped.UW-Inventory_Equipped_C.GetWearItemKey
inline void UUW-Inventory_Equipped_C::GetWearItemKey(enum class EWearableItemType ItemSlot, struct FName& ItemKey) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_Equipped.UW-Inventory_Equipped_C.GetWearItemKey");

	struct GetWearItemKey_Params {
		enum class EWearableItemType ItemSlot;
		struct FName& ItemKey;
	}; GetWearItemKey_Params Params;

	Params.ItemSlot = ItemSlot;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	ItemKey = Params.ItemKey;

}

// Function UW-Inventory_Equipped.UW-Inventory_Equipped_C.Get_btn_ArmorTree_Visibility_1
inline enum class ESlateVisibility UUW-Inventory_Equipped_C::Get_btn_ArmorTree_Visibility_1() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_Equipped.UW-Inventory_Equipped_C.Get_btn_ArmorTree_Visibility_1");

	struct Get_btn_ArmorTree_Visibility_1_Params {
		
		enum class ESlateVisibility ReturnValue;

	}; Get_btn_ArmorTree_Visibility_1_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UW-Inventory_Equipped.UW-Inventory_Equipped_C.DisableCarriedListHover
inline void UUW-Inventory_Equipped_C::DisableCarriedListHover() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_Equipped.UW-Inventory_Equipped_C.DisableCarriedListHover");

	struct DisableCarriedListHover_Params {
		
	}; DisableCarriedListHover_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_Equipped.UW-Inventory_Equipped_C.DropItem
inline char UUW-Inventory_Equipped_C::DropItem(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation Operation) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_Equipped.UW-Inventory_Equipped_C.DropItem");

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

// Function UW-Inventory_Equipped.UW-Inventory_Equipped_C.GetInventoryComponent
inline void UUW-Inventory_Equipped_C::GetInventoryComponent(char& Result, struct UPlayerInventoryComponent& InventoryComponentRef) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_Equipped.UW-Inventory_Equipped_C.GetInventoryComponent");

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

// Function UW-Inventory_Equipped.UW-Inventory_Equipped_C.Reset
inline void UUW-Inventory_Equipped_C::Reset() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_Equipped.UW-Inventory_Equipped_C.Reset");

	struct Reset_Params {
		
	}; Reset_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_Equipped.UW-Inventory_Equipped_C.HoverEquipSlotList
inline void UUW-Inventory_Equipped_C::HoverEquipSlotList(enum class EWearableItemType WearableItemType) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_Equipped.UW-Inventory_Equipped_C.HoverEquipSlotList");

	struct HoverEquipSlotList_Params {
		enum class EWearableItemType WearableItemType;
	}; HoverEquipSlotList_Params Params;

	Params.WearableItemType = WearableItemType;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_Equipped.UW-Inventory_Equipped_C.HoverResetEquipSlotList
inline void UUW-Inventory_Equipped_C::HoverResetEquipSlotList() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_Equipped.UW-Inventory_Equipped_C.HoverResetEquipSlotList");

	struct HoverResetEquipSlotList_Params {
		
	}; HoverResetEquipSlotList_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_Equipped.UW-Inventory_Equipped_C.OnDrop
inline char UUW-Inventory_Equipped_C::OnDrop(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation Operation) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_Equipped.UW-Inventory_Equipped_C.OnDrop");

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

// Function UW-Inventory_Equipped.UW-Inventory_Equipped_C.SetEquippedSlot
inline void UUW-Inventory_Equipped_C::SetEquippedSlot(struct UUW-InventoryWidget_C InventoryWidget, struct FInventoryItemInfo InventoryItemInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_Equipped.UW-Inventory_Equipped_C.SetEquippedSlot");

	struct SetEquippedSlot_Params {
		struct UUW-InventoryWidget_C InventoryWidget;
		struct FInventoryItemInfo InventoryItemInfo;
	}; SetEquippedSlot_Params Params;

	Params.InventoryWidget = InventoryWidget;
	Params.InventoryItemInfo = InventoryItemInfo;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_Equipped.UW-Inventory_Equipped_C.Construct
inline void UUW-Inventory_Equipped_C::Construct() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_Equipped.UW-Inventory_Equipped_C.Construct");

	struct Construct_Params {
		
	}; Construct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_Equipped.UW-Inventory_Equipped_C.OnDragEnter
inline void UUW-Inventory_Equipped_C::OnDragEnter(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation Operation) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_Equipped.UW-Inventory_Equipped_C.OnDragEnter");

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

// Function UW-Inventory_Equipped.UW-Inventory_Equipped_C.OnDragLeave
inline void UUW-Inventory_Equipped_C::OnDragLeave(struct FPointerEvent PointerEvent, struct UDragDropOperation Operation) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_Equipped.UW-Inventory_Equipped_C.OnDragLeave");

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

// Function UW-Inventory_Equipped.UW-Inventory_Equipped_C.BndEvt__btn_HelmetTree_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
inline void UUW-Inventory_Equipped_C::BndEvt__btn_HelmetTree_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_Equipped.UW-Inventory_Equipped_C.BndEvt__btn_HelmetTree_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	struct BndEvt__btn_HelmetTree_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params {
		
	}; BndEvt__btn_HelmetTree_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_Equipped.UW-Inventory_Equipped_C.BndEvt__btn_ArmorTree_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
inline void UUW-Inventory_Equipped_C::BndEvt__btn_ArmorTree_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_Equipped.UW-Inventory_Equipped_C.BndEvt__btn_ArmorTree_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	struct BndEvt__btn_ArmorTree_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params {
		
	}; BndEvt__btn_ArmorTree_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_Equipped.UW-Inventory_Equipped_C.BndEvt__btn_BagTree_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
inline void UUW-Inventory_Equipped_C::BndEvt__btn_BagTree_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_Equipped.UW-Inventory_Equipped_C.BndEvt__btn_BagTree_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	struct BndEvt__btn_BagTree_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params {
		
	}; BndEvt__btn_BagTree_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_Equipped.UW-Inventory_Equipped_C.ExecuteUbergraph_UW-Inventory_Equipped
inline void UUW-Inventory_Equipped_C::ExecuteUbergraph_UW-Inventory_Equipped(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_Equipped.UW-Inventory_Equipped_C.ExecuteUbergraph_UW-Inventory_Equipped");

	struct ExecuteUbergraph_UW-Inventory_Equipped_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_UW-Inventory_Equipped_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

