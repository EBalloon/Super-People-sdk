// WidgetBlueprintGeneratedClass UW-Inventory_Equipped.UW-Inventory_Equipped_C
class UUW-Inventory_Equipped_C : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown Character_BG_Motion; // 0x250 (8)
	struct Unknown ArmorSlot; // 0x258 (8)
	struct Unknown BagSlot; // 0x260 (8)
	struct Unknown BottomSlot; // 0x268 (8)
	struct Unknown Character_BG; // 0x270 (8)
	struct Unknown EyeWearSlot; // 0x278 (8)
	struct Unknown GhillieSlot; // 0x280 (8)
	struct Unknown GlovesSlot; // 0x288 (8)
	struct Unknown HatSlot; // 0x290 (8)
	struct Unknown HelmetSlot; // 0x298 (8)
	struct Unknown MaskSlot; // 0x2A0 (8)
	struct Unknown OuterSlot; // 0x2A8 (8)
	struct Unknown ShoesSlot; // 0x2B0 (8)
	struct Unknown TopSlot; // 0x2B8 (8)
	struct Unknown UW-Inventory_CharacterPreView; // 0x2C0 (8)
	struct Unknown PlayerController; // 0x2C8 (8)
	struct TMap<Unknown, Unknown> EquipedSlots; // 0x2D0 (80)

	void ShowStatupAnim(struct Unknown& StatParams, enum class Unknow StatType); // Function UW-Inventory_Equipped.UW-Inventory_Equipped_C.ShowStatupAnim(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void HoverRecipeTree(struct FName ItemKey); // Function UW-Inventory_Equipped.UW-Inventory_Equipped_C.HoverRecipeTree(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void CompleteItems(struct TArray<Unknown>& ItemKeys); // Function UW-Inventory_Equipped.UW-Inventory_Equipped_C.CompleteItems(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void HoverItems(struct TArray<Unknown>& ItemKeys); // Function UW-Inventory_Equipped.UW-Inventory_Equipped_C.HoverItems(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void GetWearItemKey(enum class Unknow ItemSlot, struct FName& ItemKey); // Function UW-Inventory_Equipped.UW-Inventory_Equipped_C.GetWearItemKey(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	enum class Unknow Get_btn_ArmorTree_Visibility_1(); // Function UW-Inventory_Equipped.UW-Inventory_Equipped_C.Get_btn_ArmorTree_Visibility_1(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	enum class Unknow GetVisibility_1(); // Function UW-Inventory_Equipped.UW-Inventory_Equipped_C.GetVisibility_1(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void DisableCarriedListHover(); // Function UW-Inventory_Equipped.UW-Inventory_Equipped_C.DisableCarriedListHover(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	char DropItem(struct Unknown MyGeometry, struct Unknown PointerEvent, struct Unknown Operation); // Function UW-Inventory_Equipped.UW-Inventory_Equipped_C.DropItem(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void GetInventoryComponent(char& Result, struct Unknown& InventoryComponentRef); // Function UW-Inventory_Equipped.UW-Inventory_Equipped_C.GetInventoryComponent(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void Reset(); // Function UW-Inventory_Equipped.UW-Inventory_Equipped_C.Reset(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void HoverEquipSlotList(enum class Unknow WearableItemType); // Function UW-Inventory_Equipped.UW-Inventory_Equipped_C.HoverEquipSlotList(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void HoverResetEquipSlotList(); // Function UW-Inventory_Equipped.UW-Inventory_Equipped_C.HoverResetEquipSlotList(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	char OnDrop(struct Unknown MyGeometry, struct Unknown PointerEvent, struct Unknown Operation); // Function UW-Inventory_Equipped.UW-Inventory_Equipped_C.OnDrop(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void SetEquippedSlot(struct Unknown InventoryWidget, struct Unknown InventoryItemInfo); // Function UW-Inventory_Equipped.UW-Inventory_Equipped_C.SetEquippedSlot(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void Construct(); // Function UW-Inventory_Equipped.UW-Inventory_Equipped_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void OnDragEnter(struct Unknown MyGeometry, struct Unknown PointerEvent, struct Unknown Operation); // Function UW-Inventory_Equipped.UW-Inventory_Equipped_C.OnDragEnter(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void OnDragLeave(struct Unknown PointerEvent, struct Unknown Operation); // Function UW-Inventory_Equipped.UW-Inventory_Equipped_C.OnDragLeave(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void BndEvt__btn_HelmetTree_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function UW-Inventory_Equipped.UW-Inventory_Equipped_C.BndEvt__btn_HelmetTree_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void BndEvt__btn_ArmorTree_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function UW-Inventory_Equipped.UW-Inventory_Equipped_C.BndEvt__btn_ArmorTree_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void BndEvt__btn_BagTree_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // Function UW-Inventory_Equipped.UW-Inventory_Equipped_C.BndEvt__btn_BagTree_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void ExecuteUbergraph_UW-Inventory_Equipped(int32_t EntryPoint); // Function UW-Inventory_Equipped.UW-Inventory_Equipped_C.ExecuteUbergraph_UW-Inventory_Equipped(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
};

// Function UW-Inventory_Equipped.UW-Inventory_Equipped_C.ShowStatupAnim
inline void UUW-Inventory_Equipped_C::ShowStatupAnim(struct Unknown& StatParams, enum class Unknow StatType) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_Equipped.UW-Inventory_Equipped_C.ShowStatupAnim");

	struct ShowStatupAnim_Params {
		struct Unknown& StatParams;
		enum class Unknow StatType;
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
inline void UUW-Inventory_Equipped_C::CompleteItems(struct TArray<Unknown>& ItemKeys) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_Equipped.UW-Inventory_Equipped_C.CompleteItems");

	struct CompleteItems_Params {
		struct TArray<Unknown>& ItemKeys;
	}; CompleteItems_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	ItemKeys = Params.ItemKeys;

}

// Function UW-Inventory_Equipped.UW-Inventory_Equipped_C.HoverItems
inline void UUW-Inventory_Equipped_C::HoverItems(struct TArray<Unknown>& ItemKeys) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_Equipped.UW-Inventory_Equipped_C.HoverItems");

	struct HoverItems_Params {
		struct TArray<Unknown>& ItemKeys;
	}; HoverItems_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	ItemKeys = Params.ItemKeys;

}

// Function UW-Inventory_Equipped.UW-Inventory_Equipped_C.GetWearItemKey
inline void UUW-Inventory_Equipped_C::GetWearItemKey(enum class Unknow ItemSlot, struct FName& ItemKey) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_Equipped.UW-Inventory_Equipped_C.GetWearItemKey");

	struct GetWearItemKey_Params {
		enum class Unknow ItemSlot;
		struct FName& ItemKey;
	}; GetWearItemKey_Params Params;

	Params.ItemSlot = ItemSlot;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	ItemKey = Params.ItemKey;

}

// Function UW-Inventory_Equipped.UW-Inventory_Equipped_C.Get_btn_ArmorTree_Visibility_1
inline enum class Unknow UUW-Inventory_Equipped_C::Get_btn_ArmorTree_Visibility_1() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_Equipped.UW-Inventory_Equipped_C.Get_btn_ArmorTree_Visibility_1");

	struct Get_btn_ArmorTree_Visibility_1_Params {
		
		enum class Unknow ReturnValue;

	}; Get_btn_ArmorTree_Visibility_1_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UW-Inventory_Equipped.UW-Inventory_Equipped_C.GetVisibility_1
inline enum class Unknow UUW-Inventory_Equipped_C::GetVisibility_1() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_Equipped.UW-Inventory_Equipped_C.GetVisibility_1");

	struct GetVisibility_1_Params {
		
		enum class Unknow ReturnValue;

	}; GetVisibility_1_Params Params;


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
inline char UUW-Inventory_Equipped_C::DropItem(struct Unknown MyGeometry, struct Unknown PointerEvent, struct Unknown Operation) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_Equipped.UW-Inventory_Equipped_C.DropItem");

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

// Function UW-Inventory_Equipped.UW-Inventory_Equipped_C.GetInventoryComponent
inline void UUW-Inventory_Equipped_C::GetInventoryComponent(char& Result, struct Unknown& InventoryComponentRef) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_Equipped.UW-Inventory_Equipped_C.GetInventoryComponent");

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
inline void UUW-Inventory_Equipped_C::HoverEquipSlotList(enum class Unknow WearableItemType) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_Equipped.UW-Inventory_Equipped_C.HoverEquipSlotList");

	struct HoverEquipSlotList_Params {
		enum class Unknow WearableItemType;
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
inline char UUW-Inventory_Equipped_C::OnDrop(struct Unknown MyGeometry, struct Unknown PointerEvent, struct Unknown Operation) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_Equipped.UW-Inventory_Equipped_C.OnDrop");

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

// Function UW-Inventory_Equipped.UW-Inventory_Equipped_C.SetEquippedSlot
inline void UUW-Inventory_Equipped_C::SetEquippedSlot(struct Unknown InventoryWidget, struct Unknown InventoryItemInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_Equipped.UW-Inventory_Equipped_C.SetEquippedSlot");

	struct SetEquippedSlot_Params {
		struct Unknown InventoryWidget;
		struct Unknown InventoryItemInfo;
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
inline void UUW-Inventory_Equipped_C::OnDragEnter(struct Unknown MyGeometry, struct Unknown PointerEvent, struct Unknown Operation) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_Equipped.UW-Inventory_Equipped_C.OnDragEnter");

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

// Function UW-Inventory_Equipped.UW-Inventory_Equipped_C.OnDragLeave
inline void UUW-Inventory_Equipped_C::OnDragLeave(struct Unknown PointerEvent, struct Unknown Operation) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_Equipped.UW-Inventory_Equipped_C.OnDragLeave");

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

