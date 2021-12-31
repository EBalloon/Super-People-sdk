// WidgetBlueprintGeneratedClass UW-ReplayItemList.UW-ReplayItemList_C
class UUW-ReplayItemList_C : public UUserWidget {

public:

	struct Unknown ArmorSlot; // 0x248 (8)
	struct Unknown BagSlot; // 0x250 (8)
	struct Unknown BottomSlot; // 0x258 (8)
	struct Unknown EyeWearSlot; // 0x260 (8)
	struct Unknown GhillieSlot; // 0x268 (8)
	struct Unknown GlovesSlot; // 0x270 (8)
	struct Unknown HatSlot; // 0x278 (8)
	struct Unknown HelmetSlot; // 0x280 (8)
	struct Unknown MaskSlot; // 0x288 (8)
	struct Unknown OuterSlot; // 0x290 (8)
	struct Unknown ShoesSlot; // 0x298 (8)
	struct Unknown TopSlot; // 0x2A0 (8)
	struct Unknown UW-Inventory_Weapon; // 0x2A8 (8)
	struct Unknown Timer_UpdateItemList; // 0x2B0 (8)

	void SetEquippedSlot(struct Unknown InventoryItemInfo); // Function UW-ReplayItemList.UW-ReplayItemList_C.SetEquippedSlot(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void ResetEquippedList(); // Function UW-ReplayItemList.UW-ReplayItemList_C.ResetEquippedList(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void SetEquippedItems(); // Function UW-ReplayItemList.UW-ReplayItemList_C.SetEquippedItems(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void SetWeaponItems(); // Function UW-ReplayItemList.UW-ReplayItemList_C.SetWeaponItems(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void UpdateItemList(); // Function UW-ReplayItemList.UW-ReplayItemList_C.UpdateItemList(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void HideItemList(); // Function UW-ReplayItemList.UW-ReplayItemList_C.HideItemList(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void ShowItemList(); // Function UW-ReplayItemList.UW-ReplayItemList_C.ShowItemList(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
};

// Function UW-ReplayItemList.UW-ReplayItemList_C.SetEquippedSlot
inline void UUW-ReplayItemList_C::SetEquippedSlot(struct Unknown InventoryItemInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ReplayItemList.UW-ReplayItemList_C.SetEquippedSlot");

	struct SetEquippedSlot_Params {
		struct Unknown InventoryItemInfo;
	}; SetEquippedSlot_Params Params;

	Params.InventoryItemInfo = InventoryItemInfo;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ReplayItemList.UW-ReplayItemList_C.ResetEquippedList
inline void UUW-ReplayItemList_C::ResetEquippedList() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ReplayItemList.UW-ReplayItemList_C.ResetEquippedList");

	struct ResetEquippedList_Params {
		
	}; ResetEquippedList_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ReplayItemList.UW-ReplayItemList_C.SetEquippedItems
inline void UUW-ReplayItemList_C::SetEquippedItems() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ReplayItemList.UW-ReplayItemList_C.SetEquippedItems");

	struct SetEquippedItems_Params {
		
	}; SetEquippedItems_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ReplayItemList.UW-ReplayItemList_C.SetWeaponItems
inline void UUW-ReplayItemList_C::SetWeaponItems() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ReplayItemList.UW-ReplayItemList_C.SetWeaponItems");

	struct SetWeaponItems_Params {
		
	}; SetWeaponItems_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ReplayItemList.UW-ReplayItemList_C.UpdateItemList
inline void UUW-ReplayItemList_C::UpdateItemList() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ReplayItemList.UW-ReplayItemList_C.UpdateItemList");

	struct UpdateItemList_Params {
		
	}; UpdateItemList_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ReplayItemList.UW-ReplayItemList_C.HideItemList
inline void UUW-ReplayItemList_C::HideItemList() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ReplayItemList.UW-ReplayItemList_C.HideItemList");

	struct HideItemList_Params {
		
	}; HideItemList_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ReplayItemList.UW-ReplayItemList_C.ShowItemList
inline void UUW-ReplayItemList_C::ShowItemList() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ReplayItemList.UW-ReplayItemList_C.ShowItemList");

	struct ShowItemList_Params {
		
	}; ShowItemList_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

