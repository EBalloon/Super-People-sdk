// WidgetBlueprintGeneratedClass UW-Inventory_Weapon.UW-Inventory_Weapon_C
class UUW-Inventory_Weapon_C : public UUserWidget {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248 (8)
	struct UImage Image; // 0x250 (8)
	struct UImage Image_1; // 0x258 (8)
	struct UImage Image_2; // 0x260 (8)
	struct UImage Image_3; // 0x268 (8)
	struct UImage Image_4; // 0x270 (8)
	struct UImage Image_5; // 0x278 (8)
	struct UImage Image_6; // 0x280 (8)
	struct UImage Image_7; // 0x288 (8)
	struct UImage Image_773; // 0x290 (8)
	struct UUW-Inventory_WeaponSlot_C WeaponSlot01; // 0x298 (8)
	struct UUW-Inventory_WeaponSlot_C WeaponSlot02; // 0x2A0 (8)
	struct UUW-Inventory_WeaponSlot_C WeaponSlot03; // 0x2A8 (8)
	struct UUW-Inventory_WeaponSlot_C WeaponSlot04; // 0x2B0 (8)
	struct UUW-Inventory_WeaponSlot_C WeaponSlot05; // 0x2B8 (8)
	struct TMap<int32_t, struct UUW-Inventory_WeaponSlot_C> WeaponSlots; // 0x2C0 (80)

	void ShowStatupAnim(struct FStatupAnimParameters& StatParams, enum class EStatupAnimType StatType); // Function UW-Inventory_Weapon.UW-Inventory_Weapon_C.ShowStatupAnim(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void HoverRecipeTree(struct FName ItemKey); // Function UW-Inventory_Weapon.UW-Inventory_Weapon_C.HoverRecipeTree(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void CompleteItems(struct TArray<struct FName>& ItemKeys); // Function UW-Inventory_Weapon.UW-Inventory_Weapon_C.CompleteItems(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void HoverItems(struct TArray<struct FName>& ItemKeys); // Function UW-Inventory_Weapon.UW-Inventory_Weapon_C.HoverItems(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void NotifyNewWeapon(struct TArray<int32_t>& SlotArray); // Function UW-Inventory_Weapon.UW-Inventory_Weapon_C.NotifyNewWeapon(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void CheckCanEquipRangedWeapon(enum class EWeaponType WeaponType); // Function UW-Inventory_Weapon.UW-Inventory_Weapon_C.CheckCanEquipRangedWeapon(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void SetDragFromCarriedSlot(struct FInventoryItemInfo InventoryItemInfo); // Function UW-Inventory_Weapon.UW-Inventory_Weapon_C.SetDragFromCarriedSlot(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void SetDragFromEquippedSlot(struct FInventoryItemInfo InventoryItemInfo); // Function UW-Inventory_Weapon.UW-Inventory_Weapon_C.SetDragFromEquippedSlot(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void SetDragFromWeaponSlot(struct FBravoHotelWeaponInfo WeaponInfo); // Function UW-Inventory_Weapon.UW-Inventory_Weapon_C.SetDragFromWeaponSlot(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void SetDragFromProximitySlot(struct FInventoryItemInfo InventoryItemInfo); // Function UW-Inventory_Weapon.UW-Inventory_Weapon_C.SetDragFromProximitySlot(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void DragFindCanEquipAttachItemSlot(struct FInventoryItemInfo InventoryItemInfo); // Function UW-Inventory_Weapon.UW-Inventory_Weapon_C.DragFindCanEquipAttachItemSlot(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void HoverResetEquipAttachItemSlot(); // Function UW-Inventory_Weapon.UW-Inventory_Weapon_C.HoverResetEquipAttachItemSlot(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void DragEquipWeaponSlot(char ItemDragSlotType, struct FInventoryItemInfo InventoryItemInfo, struct FBravoHotelWeaponInfo WeaponInfo, char& bResult); // Function UW-Inventory_Weapon.UW-Inventory_Weapon_C.DragEquipWeaponSlot(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void HoverResetEquipWeaponSlot(); // Function UW-Inventory_Weapon.UW-Inventory_Weapon_C.HoverResetEquipWeaponSlot(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void HoverSelectAttachItemSlot(struct FInventoryItemInfo InventoryItemInfo, char& bResult); // Function UW-Inventory_Weapon.UW-Inventory_Weapon_C.HoverSelectAttachItemSlot(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void HoverSelectEquipAttachItemSlot(struct FInventoryItemInfo InventoryItemInfo, char& bResult); // Function UW-Inventory_Weapon.UW-Inventory_Weapon_C.HoverSelectEquipAttachItemSlot(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void HoverSelectEquipWeaponSlot(enum class EWeaponType WeaponType); // Function UW-Inventory_Weapon.UW-Inventory_Weapon_C.HoverSelectEquipWeaponSlot(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void GetInventoryItemDetailInfo(struct FInventoryItemInfo InventoryItemInfo, char& bResult, struct FInventoryItemDetailInfo& InventoryItemDetailInfo); // Function UW-Inventory_Weapon.UW-Inventory_Weapon_C.GetInventoryItemDetailInfo(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void HoverWeaponSlotList(struct FInventoryItemInfo InventoryItemInfo, char& bResult); // Function UW-Inventory_Weapon.UW-Inventory_Weapon_C.HoverWeaponSlotList(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void GetInventoryComponent(char& Result, struct UPlayerInventoryComponent& InventoryComponentRef); // Function UW-Inventory_Weapon.UW-Inventory_Weapon_C.GetInventoryComponent(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void Reset(); // Function UW-Inventory_Weapon.UW-Inventory_Weapon_C.Reset(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void SetWeaponSlot(struct UUW-InventoryWidget_C InventoryWidget, int32_t SlotIndex, struct ABravoHotelWeaponBase WeaponBaseObject, struct FInventoryItemInfo InventoryItemInfo); // Function UW-Inventory_Weapon.UW-Inventory_Weapon_C.SetWeaponSlot(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void Construct(); // Function UW-Inventory_Weapon.UW-Inventory_Weapon_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void Event_WeaponInfo(int32_t Idx, int32_t Ammo, int32_t MaxAmmo); // Function UW-Inventory_Weapon.UW-Inventory_Weapon_C.Event_WeaponInfo(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void ExecuteUbergraph_UW-Inventory_Weapon(int32_t EntryPoint); // Function UW-Inventory_Weapon.UW-Inventory_Weapon_C.ExecuteUbergraph_UW-Inventory_Weapon(Final|UbergraphFunction) // <Game_BE.exe+0x2B80160>
};

// Function UW-Inventory_Weapon.UW-Inventory_Weapon_C.ShowStatupAnim
inline void UUW-Inventory_Weapon_C::ShowStatupAnim(struct FStatupAnimParameters& StatParams, enum class EStatupAnimType StatType) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_Weapon.UW-Inventory_Weapon_C.ShowStatupAnim");

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

// Function UW-Inventory_Weapon.UW-Inventory_Weapon_C.HoverRecipeTree
inline void UUW-Inventory_Weapon_C::HoverRecipeTree(struct FName ItemKey) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_Weapon.UW-Inventory_Weapon_C.HoverRecipeTree");

	struct HoverRecipeTree_Params {
		struct FName ItemKey;
	}; HoverRecipeTree_Params Params;

	Params.ItemKey = ItemKey;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_Weapon.UW-Inventory_Weapon_C.CompleteItems
inline void UUW-Inventory_Weapon_C::CompleteItems(struct TArray<struct FName>& ItemKeys) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_Weapon.UW-Inventory_Weapon_C.CompleteItems");

	struct CompleteItems_Params {
		struct TArray<struct FName>& ItemKeys;
	}; CompleteItems_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	ItemKeys = Params.ItemKeys;

}

// Function UW-Inventory_Weapon.UW-Inventory_Weapon_C.HoverItems
inline void UUW-Inventory_Weapon_C::HoverItems(struct TArray<struct FName>& ItemKeys) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_Weapon.UW-Inventory_Weapon_C.HoverItems");

	struct HoverItems_Params {
		struct TArray<struct FName>& ItemKeys;
	}; HoverItems_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	ItemKeys = Params.ItemKeys;

}

// Function UW-Inventory_Weapon.UW-Inventory_Weapon_C.NotifyNewWeapon
inline void UUW-Inventory_Weapon_C::NotifyNewWeapon(struct TArray<int32_t>& SlotArray) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_Weapon.UW-Inventory_Weapon_C.NotifyNewWeapon");

	struct NotifyNewWeapon_Params {
		struct TArray<int32_t>& SlotArray;
	}; NotifyNewWeapon_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	SlotArray = Params.SlotArray;

}

// Function UW-Inventory_Weapon.UW-Inventory_Weapon_C.CheckCanEquipRangedWeapon
inline void UUW-Inventory_Weapon_C::CheckCanEquipRangedWeapon(enum class EWeaponType WeaponType) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_Weapon.UW-Inventory_Weapon_C.CheckCanEquipRangedWeapon");

	struct CheckCanEquipRangedWeapon_Params {
		enum class EWeaponType WeaponType;
	}; CheckCanEquipRangedWeapon_Params Params;

	Params.WeaponType = WeaponType;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_Weapon.UW-Inventory_Weapon_C.SetDragFromCarriedSlot
inline void UUW-Inventory_Weapon_C::SetDragFromCarriedSlot(struct FInventoryItemInfo InventoryItemInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_Weapon.UW-Inventory_Weapon_C.SetDragFromCarriedSlot");

	struct SetDragFromCarriedSlot_Params {
		struct FInventoryItemInfo InventoryItemInfo;
	}; SetDragFromCarriedSlot_Params Params;

	Params.InventoryItemInfo = InventoryItemInfo;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_Weapon.UW-Inventory_Weapon_C.SetDragFromEquippedSlot
inline void UUW-Inventory_Weapon_C::SetDragFromEquippedSlot(struct FInventoryItemInfo InventoryItemInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_Weapon.UW-Inventory_Weapon_C.SetDragFromEquippedSlot");

	struct SetDragFromEquippedSlot_Params {
		struct FInventoryItemInfo InventoryItemInfo;
	}; SetDragFromEquippedSlot_Params Params;

	Params.InventoryItemInfo = InventoryItemInfo;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_Weapon.UW-Inventory_Weapon_C.SetDragFromWeaponSlot
inline void UUW-Inventory_Weapon_C::SetDragFromWeaponSlot(struct FBravoHotelWeaponInfo WeaponInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_Weapon.UW-Inventory_Weapon_C.SetDragFromWeaponSlot");

	struct SetDragFromWeaponSlot_Params {
		struct FBravoHotelWeaponInfo WeaponInfo;
	}; SetDragFromWeaponSlot_Params Params;

	Params.WeaponInfo = WeaponInfo;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_Weapon.UW-Inventory_Weapon_C.SetDragFromProximitySlot
inline void UUW-Inventory_Weapon_C::SetDragFromProximitySlot(struct FInventoryItemInfo InventoryItemInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_Weapon.UW-Inventory_Weapon_C.SetDragFromProximitySlot");

	struct SetDragFromProximitySlot_Params {
		struct FInventoryItemInfo InventoryItemInfo;
	}; SetDragFromProximitySlot_Params Params;

	Params.InventoryItemInfo = InventoryItemInfo;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_Weapon.UW-Inventory_Weapon_C.DragFindCanEquipAttachItemSlot
inline void UUW-Inventory_Weapon_C::DragFindCanEquipAttachItemSlot(struct FInventoryItemInfo InventoryItemInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_Weapon.UW-Inventory_Weapon_C.DragFindCanEquipAttachItemSlot");

	struct DragFindCanEquipAttachItemSlot_Params {
		struct FInventoryItemInfo InventoryItemInfo;
	}; DragFindCanEquipAttachItemSlot_Params Params;

	Params.InventoryItemInfo = InventoryItemInfo;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_Weapon.UW-Inventory_Weapon_C.HoverResetEquipAttachItemSlot
inline void UUW-Inventory_Weapon_C::HoverResetEquipAttachItemSlot() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_Weapon.UW-Inventory_Weapon_C.HoverResetEquipAttachItemSlot");

	struct HoverResetEquipAttachItemSlot_Params {
		
	}; HoverResetEquipAttachItemSlot_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_Weapon.UW-Inventory_Weapon_C.DragEquipWeaponSlot
inline void UUW-Inventory_Weapon_C::DragEquipWeaponSlot(char ItemDragSlotType, struct FInventoryItemInfo InventoryItemInfo, struct FBravoHotelWeaponInfo WeaponInfo, char& bResult) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_Weapon.UW-Inventory_Weapon_C.DragEquipWeaponSlot");

	struct DragEquipWeaponSlot_Params {
		char ItemDragSlotType;
		struct FInventoryItemInfo InventoryItemInfo;
		struct FBravoHotelWeaponInfo WeaponInfo;
		char& bResult;
	}; DragEquipWeaponSlot_Params Params;

	Params.ItemDragSlotType = ItemDragSlotType;
	Params.InventoryItemInfo = InventoryItemInfo;
	Params.WeaponInfo = WeaponInfo;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	bResult = Params.bResult;

}

// Function UW-Inventory_Weapon.UW-Inventory_Weapon_C.HoverResetEquipWeaponSlot
inline void UUW-Inventory_Weapon_C::HoverResetEquipWeaponSlot() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_Weapon.UW-Inventory_Weapon_C.HoverResetEquipWeaponSlot");

	struct HoverResetEquipWeaponSlot_Params {
		
	}; HoverResetEquipWeaponSlot_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_Weapon.UW-Inventory_Weapon_C.HoverSelectAttachItemSlot
inline void UUW-Inventory_Weapon_C::HoverSelectAttachItemSlot(struct FInventoryItemInfo InventoryItemInfo, char& bResult) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_Weapon.UW-Inventory_Weapon_C.HoverSelectAttachItemSlot");

	struct HoverSelectAttachItemSlot_Params {
		struct FInventoryItemInfo InventoryItemInfo;
		char& bResult;
	}; HoverSelectAttachItemSlot_Params Params;

	Params.InventoryItemInfo = InventoryItemInfo;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	bResult = Params.bResult;

}

// Function UW-Inventory_Weapon.UW-Inventory_Weapon_C.HoverSelectEquipAttachItemSlot
inline void UUW-Inventory_Weapon_C::HoverSelectEquipAttachItemSlot(struct FInventoryItemInfo InventoryItemInfo, char& bResult) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_Weapon.UW-Inventory_Weapon_C.HoverSelectEquipAttachItemSlot");

	struct HoverSelectEquipAttachItemSlot_Params {
		struct FInventoryItemInfo InventoryItemInfo;
		char& bResult;
	}; HoverSelectEquipAttachItemSlot_Params Params;

	Params.InventoryItemInfo = InventoryItemInfo;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	bResult = Params.bResult;

}

// Function UW-Inventory_Weapon.UW-Inventory_Weapon_C.HoverSelectEquipWeaponSlot
inline void UUW-Inventory_Weapon_C::HoverSelectEquipWeaponSlot(enum class EWeaponType WeaponType) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_Weapon.UW-Inventory_Weapon_C.HoverSelectEquipWeaponSlot");

	struct HoverSelectEquipWeaponSlot_Params {
		enum class EWeaponType WeaponType;
	}; HoverSelectEquipWeaponSlot_Params Params;

	Params.WeaponType = WeaponType;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_Weapon.UW-Inventory_Weapon_C.GetInventoryItemDetailInfo
inline void UUW-Inventory_Weapon_C::GetInventoryItemDetailInfo(struct FInventoryItemInfo InventoryItemInfo, char& bResult, struct FInventoryItemDetailInfo& InventoryItemDetailInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_Weapon.UW-Inventory_Weapon_C.GetInventoryItemDetailInfo");

	struct GetInventoryItemDetailInfo_Params {
		struct FInventoryItemInfo InventoryItemInfo;
		char& bResult;
		struct FInventoryItemDetailInfo& InventoryItemDetailInfo;
	}; GetInventoryItemDetailInfo_Params Params;

	Params.InventoryItemInfo = InventoryItemInfo;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	bResult = Params.bResult;
	InventoryItemDetailInfo = Params.InventoryItemDetailInfo;

}

// Function UW-Inventory_Weapon.UW-Inventory_Weapon_C.HoverWeaponSlotList
inline void UUW-Inventory_Weapon_C::HoverWeaponSlotList(struct FInventoryItemInfo InventoryItemInfo, char& bResult) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_Weapon.UW-Inventory_Weapon_C.HoverWeaponSlotList");

	struct HoverWeaponSlotList_Params {
		struct FInventoryItemInfo InventoryItemInfo;
		char& bResult;
	}; HoverWeaponSlotList_Params Params;

	Params.InventoryItemInfo = InventoryItemInfo;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	bResult = Params.bResult;

}

// Function UW-Inventory_Weapon.UW-Inventory_Weapon_C.GetInventoryComponent
inline void UUW-Inventory_Weapon_C::GetInventoryComponent(char& Result, struct UPlayerInventoryComponent& InventoryComponentRef) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_Weapon.UW-Inventory_Weapon_C.GetInventoryComponent");

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

// Function UW-Inventory_Weapon.UW-Inventory_Weapon_C.Reset
inline void UUW-Inventory_Weapon_C::Reset() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_Weapon.UW-Inventory_Weapon_C.Reset");

	struct Reset_Params {
		
	}; Reset_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_Weapon.UW-Inventory_Weapon_C.SetWeaponSlot
inline void UUW-Inventory_Weapon_C::SetWeaponSlot(struct UUW-InventoryWidget_C InventoryWidget, int32_t SlotIndex, struct ABravoHotelWeaponBase WeaponBaseObject, struct FInventoryItemInfo InventoryItemInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_Weapon.UW-Inventory_Weapon_C.SetWeaponSlot");

	struct SetWeaponSlot_Params {
		struct UUW-InventoryWidget_C InventoryWidget;
		int32_t SlotIndex;
		struct ABravoHotelWeaponBase WeaponBaseObject;
		struct FInventoryItemInfo InventoryItemInfo;
	}; SetWeaponSlot_Params Params;

	Params.InventoryWidget = InventoryWidget;
	Params.SlotIndex = SlotIndex;
	Params.WeaponBaseObject = WeaponBaseObject;
	Params.InventoryItemInfo = InventoryItemInfo;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_Weapon.UW-Inventory_Weapon_C.Construct
inline void UUW-Inventory_Weapon_C::Construct() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_Weapon.UW-Inventory_Weapon_C.Construct");

	struct Construct_Params {
		
	}; Construct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_Weapon.UW-Inventory_Weapon_C.Event_WeaponInfo
inline void UUW-Inventory_Weapon_C::Event_WeaponInfo(int32_t Idx, int32_t Ammo, int32_t MaxAmmo) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_Weapon.UW-Inventory_Weapon_C.Event_WeaponInfo");

	struct Event_WeaponInfo_Params {
		int32_t Idx;
		int32_t Ammo;
		int32_t MaxAmmo;
	}; Event_WeaponInfo_Params Params;

	Params.Idx = Idx;
	Params.Ammo = Ammo;
	Params.MaxAmmo = MaxAmmo;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_Weapon.UW-Inventory_Weapon_C.ExecuteUbergraph_UW-Inventory_Weapon
inline void UUW-Inventory_Weapon_C::ExecuteUbergraph_UW-Inventory_Weapon(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_Weapon.UW-Inventory_Weapon_C.ExecuteUbergraph_UW-Inventory_Weapon");

	struct ExecuteUbergraph_UW-Inventory_Weapon_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_UW-Inventory_Weapon_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

