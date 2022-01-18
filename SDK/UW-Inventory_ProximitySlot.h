// WidgetBlueprintGeneratedClass UW-Inventory_ProximitySlot.UW-Inventory_ProximitySlot_C
class UUW-Inventory_ProximitySlot_C : public UUW-Inventory_SlotBase_C {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1360 (8)
	struct UWidgetAnimation P_Upgrade_Arrow; // 0x1368 (8)
	struct UWidgetAnimation C_SlotHover_ItemState_Hide; // 0x1370 (8)
	struct UWidgetAnimation C_SlotHover_ItemState_Show; // 0x1378 (8)
	struct UWidgetAnimation Hover_Gold; // 0x1380 (8)
	struct UWidgetAnimation P_SlotHover; // 0x1388 (8)
	struct UImage BGImage; // 0x1390 (8)
	struct UImage BGImage_2; // 0x1398 (8)
	struct UCanvasPanel CanvasPanel_ITemState; // 0x13A0 (8)
	struct UCanvasPanel CanvasPanel_Unnecessary; // 0x13A8 (8)
	struct UTextBlock Count; // 0x13B0 (8)
	struct UImage Crate_Default; // 0x13B8 (8)
	struct UImage Crate_Hover; // 0x13C0 (8)
	struct UProgressBar DurabilityBar; // 0x13C8 (8)
	struct UImage fill; // 0x13D0 (8)
	struct UHorizontalBox HorizontalBox_Rarity; // 0x13D8 (8)
	struct UImage HoverImage; // 0x13E0 (8)
	struct UImage HoverImage_Gold; // 0x13E8 (8)
	struct UImage HoverImage_Round; // 0x13F0 (8)
	struct UImage Image_1; // 0x13F8 (8)
	struct UImage Image_2; // 0x1400 (8)
	struct UImage Image_531; // 0x1408 (8)
	struct UImage Image_539; // 0x1410 (8)
	struct UImage Image_540; // 0x1418 (8)
	struct UImage Image_541; // 0x1420 (8)
	struct UImage Image_542; // 0x1428 (8)
	struct UImage Image_543; // 0x1430 (8)
	struct UImage Image_544; // 0x1438 (8)
	struct UImage Image_Bindable; // 0x1440 (8)
	struct UImage Image_Supply; // 0x1448 (8)
	struct UImage ItemImage; // 0x1450 (8)
	struct UTextBlock ItemNameName; // 0x1458 (8)
	struct UTextBlock ItemState_Text; // 0x1460 (8)
	struct UImage KeepedItem_List; // 0x1468 (8)
	struct UImage KeepedItem_ListHover; // 0x1470 (8)
	struct UImage LvColor; // 0x1478 (8)
	struct UImage NeedMaterial; // 0x1480 (8)
	struct USizeBox SizeBox_1; // 0x1488 (8)
	struct UTextBlock TextBlock_Range; // 0x1490 (8)
	struct UCanvasPanel UpgradeItem; // 0x1498 (8)
	struct UImage UpgradeItem_Arrow01; // 0x14A0 (8)
	struct UImage UpgradeItem_Arrow02; // 0x14A8 (8)
	struct UImage UpgradeItem_default; // 0x14B0 (8)
	struct UImage UpgradeItem_Hover; // 0x14B8 (8)
	struct UTextBlock weapon__; // 0x14C0 (8)
	struct UImage WeaponColorBg; // 0x14C8 (8)
	struct UImage WeaponEquipItem_Default; // 0x14D0 (8)
	struct UImage WeaponEquipItem_Hover; // 0x14D8 (8)
	struct UImage WeaponItemImage; // 0x14E0 (8)
	struct UTextBlock WeaponType; // 0x14E8 (8)
	struct ABravoHotelPickup PickupRef; // 0x14F0 (8)
	struct FInventoryItemInfo DroppedItemInfo; // 0x14F8 (152)
	struct ABravoHotelDropBoxActor DropBoxRef; // 0x1590 (8)
	char bGold : 0; // 0x1598 (1)
	struct UImage SelectedHoverImage; // 0x15A0 (8)
	struct FBravoHotelWeaponInfo WeaponData; // 0x15A8 (2864)
	struct FLinearColor MedicalBGColor; // 0x20D8 (16)
	int32_t CurCount; // 0x20E8 (4)
	struct FMulticastInlineDelegate SetSlotInfo; // 0x20F0 (16)
	struct UActor TargetActor; // 0x2100 (8)
	struct ABravoHotelCharacter StealableCharacter; // 0x2108 (8)
	struct TArray<struct FName> ShowRarityStar; // 0x2110 (16)
	struct TArray<struct FName> ShowIconBG; // 0x2120 (16)

	void CheckHoverMaterial(); // Function UW-Inventory_ProximitySlot.UW-Inventory_ProximitySlot_C.CheckHoverMaterial(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void IsRoundItemType(char& bRoundItem); // Function UW-Inventory_ProximitySlot.UW-Inventory_ProximitySlot_C.IsRoundItemType(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void SetNeededInfo(); // Function UW-Inventory_ProximitySlot.UW-Inventory_ProximitySlot_C.SetNeededInfo(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void InitTargetActor(); // Function UW-Inventory_ProximitySlot.UW-Inventory_ProximitySlot_C.InitTargetActor(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void SetItemInfoByInventoryComponent(); // Function UW-Inventory_ProximitySlot.UW-Inventory_ProximitySlot_C.SetItemInfoByInventoryComponent(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void SetBindInfo(); // Function UW-Inventory_ProximitySlot.UW-Inventory_ProximitySlot_C.SetBindInfo(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void SetRarity(); // Function UW-Inventory_ProximitySlot.UW-Inventory_ProximitySlot_C.SetRarity(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void SetItemRarityColor(enum class EItemRarity CurrentSlot, struct UImage ImageWidget); // Function UW-Inventory_ProximitySlot.UW-Inventory_ProximitySlot_C.SetItemRarityColor(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void SetRatingArrowVisibility(); // Function UW-Inventory_ProximitySlot.UW-Inventory_ProximitySlot_C.SetRatingArrowVisibility(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void SetChestItem(); // Function UW-Inventory_ProximitySlot.UW-Inventory_ProximitySlot_C.SetChestItem(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void SetEquippableAttachment(); // Function UW-Inventory_ProximitySlot.UW-Inventory_ProximitySlot_C.SetEquippableAttachment(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void SetUpgradeItem(); // Function UW-Inventory_ProximitySlot.UW-Inventory_ProximitySlot_C.SetUpgradeItem(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void MouseEnterImpl(); // Function UW-Inventory_ProximitySlot.UW-Inventory_ProximitySlot_C.MouseEnterImpl(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void WeaponEquipState(); // Function UW-Inventory_ProximitySlot.UW-Inventory_ProximitySlot_C.WeaponEquipState(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void SetItemName(); // Function UW-Inventory_ProximitySlot.UW-Inventory_ProximitySlot_C.SetItemName(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void SetItemCount(); // Function UW-Inventory_ProximitySlot.UW-Inventory_ProximitySlot_C.SetItemCount(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void SetWeaponImage_Internal(struct UPaperSprite IconTexture); // Function UW-Inventory_ProximitySlot.UW-Inventory_ProximitySlot_C.SetWeaponImage_Internal(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	struct FSlateBrush SetItemImage_Internal(struct UPaperSprite IconTexture); // Function UW-Inventory_ProximitySlot.UW-Inventory_ProximitySlot_C.SetItemImage_Internal(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void IsDraging(char& bResult); // Function UW-Inventory_ProximitySlot.UW-Inventory_ProximitySlot_C.IsDraging(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	char OnDrop(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation Operation); // Function UW-Inventory_ProximitySlot.UW-Inventory_ProximitySlot_C.OnDrop(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void OnDragDetected(struct FGeometry MyGeometry, struct FPointerEvent& PointerEvent, struct UDragDropOperation& Operation); // Function UW-Inventory_ProximitySlot.UW-Inventory_ProximitySlot_C.OnDragDetected(BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void GetWeaponInfoByInventoryItemInfo(char& bResult, struct FBravoHotelWeaponInfo& WeaponInfo); // Function UW-Inventory_ProximitySlot.UW-Inventory_ProximitySlot_C.GetWeaponInfoByInventoryItemInfo(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void OnRButtonClick(char& bResult); // Function UW-Inventory_ProximitySlot.UW-Inventory_ProximitySlot_C.OnRButtonClick(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void GetCharacterRef(char& Result, struct ABravoHotelCharacter& CharacterRef); // Function UW-Inventory_ProximitySlot.UW-Inventory_ProximitySlot_C.GetCharacterRef(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void SetWeaponItem(); // Function UW-Inventory_ProximitySlot.UW-Inventory_ProximitySlot_C.SetWeaponItem(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void Set_BGImage_Brush_1(); // Function UW-Inventory_ProximitySlot.UW-Inventory_ProximitySlot_C.Set_BGImage_Brush_1(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void RequestPickupItem(char RButtonClick, char& bResult); // Function UW-Inventory_ProximitySlot.UW-Inventory_ProximitySlot_C.RequestPickupItem(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	struct FSlateBrush SetItemImage(); // Function UW-Inventory_ProximitySlot.UW-Inventory_ProximitySlot_C.SetItemImage(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	struct FText GetItemName(); // Function UW-Inventory_ProximitySlot.UW-Inventory_ProximitySlot_C.GetItemName(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void OnLoaded_84877B5B4C424648BFE1AEBDF8BB89BB(struct Object Loaded); // Function UW-Inventory_ProximitySlot.UW-Inventory_ProximitySlot_C.OnLoaded_84877B5B4C424648BFE1AEBDF8BB89BB(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void Construct(); // Function UW-Inventory_ProximitySlot.UW-Inventory_ProximitySlot_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UW-Inventory_ProximitySlot.UW-Inventory_ProximitySlot_C.OnMouseEnter(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function UW-Inventory_ProximitySlot.UW-Inventory_ProximitySlot_C.OnMouseLeave(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void AsyncLoadIconTexture(struct TSoftObjectPtr<UPaperSprite> IconTexture); // Function UW-Inventory_ProximitySlot.UW-Inventory_ProximitySlot_C.AsyncLoadIconTexture(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UW-Inventory_ProximitySlot.UW-Inventory_ProximitySlot_C.Tick(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void SlotInfo(struct UActor TargetActor, struct FInventoryItemInfo ItemInfo); // Function UW-Inventory_ProximitySlot.UW-Inventory_ProximitySlot_C.SlotInfo(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void OnChangeWearableItem(); // Function UW-Inventory_ProximitySlot.UW-Inventory_ProximitySlot_C.OnChangeWearableItem(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void OnChangeWeapons(); // Function UW-Inventory_ProximitySlot.UW-Inventory_ProximitySlot_C.OnChangeWeapons(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void OnChangeItemInfoDelegate_Event_1(); // Function UW-Inventory_ProximitySlot.UW-Inventory_ProximitySlot_C.OnChangeItemInfoDelegate_Event_1(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void OnMouseCaptureLost(); // Function UW-Inventory_ProximitySlot.UW-Inventory_ProximitySlot_C.OnMouseCaptureLost(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void ExecuteUbergraph_UW-Inventory_ProximitySlot(int32_t EntryPoint); // Function UW-Inventory_ProximitySlot.UW-Inventory_ProximitySlot_C.ExecuteUbergraph_UW-Inventory_ProximitySlot(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void SetSlotInfo__DelegateSignature(struct UActor TargetActor, struct FInventoryItemInfo ItemInfo); // Function UW-Inventory_ProximitySlot.UW-Inventory_ProximitySlot_C.SetSlotInfo__DelegateSignature(Public|Delegate|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
};

// Function UW-Inventory_ProximitySlot.UW-Inventory_ProximitySlot_C.CheckHoverMaterial
inline void UUW-Inventory_ProximitySlot_C::CheckHoverMaterial() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_ProximitySlot.UW-Inventory_ProximitySlot_C.CheckHoverMaterial");

	struct CheckHoverMaterial_Params {
		
	}; CheckHoverMaterial_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_ProximitySlot.UW-Inventory_ProximitySlot_C.IsRoundItemType
inline void UUW-Inventory_ProximitySlot_C::IsRoundItemType(char& bRoundItem) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_ProximitySlot.UW-Inventory_ProximitySlot_C.IsRoundItemType");

	struct IsRoundItemType_Params {
		char& bRoundItem;
	}; IsRoundItemType_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	bRoundItem = Params.bRoundItem;

}

// Function UW-Inventory_ProximitySlot.UW-Inventory_ProximitySlot_C.SetNeededInfo
inline void UUW-Inventory_ProximitySlot_C::SetNeededInfo() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_ProximitySlot.UW-Inventory_ProximitySlot_C.SetNeededInfo");

	struct SetNeededInfo_Params {
		
	}; SetNeededInfo_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_ProximitySlot.UW-Inventory_ProximitySlot_C.InitTargetActor
inline void UUW-Inventory_ProximitySlot_C::InitTargetActor() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_ProximitySlot.UW-Inventory_ProximitySlot_C.InitTargetActor");

	struct InitTargetActor_Params {
		
	}; InitTargetActor_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_ProximitySlot.UW-Inventory_ProximitySlot_C.SetItemInfoByInventoryComponent
inline void UUW-Inventory_ProximitySlot_C::SetItemInfoByInventoryComponent() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_ProximitySlot.UW-Inventory_ProximitySlot_C.SetItemInfoByInventoryComponent");

	struct SetItemInfoByInventoryComponent_Params {
		
	}; SetItemInfoByInventoryComponent_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_ProximitySlot.UW-Inventory_ProximitySlot_C.SetBindInfo
inline void UUW-Inventory_ProximitySlot_C::SetBindInfo() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_ProximitySlot.UW-Inventory_ProximitySlot_C.SetBindInfo");

	struct SetBindInfo_Params {
		
	}; SetBindInfo_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_ProximitySlot.UW-Inventory_ProximitySlot_C.SetRarity
inline void UUW-Inventory_ProximitySlot_C::SetRarity() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_ProximitySlot.UW-Inventory_ProximitySlot_C.SetRarity");

	struct SetRarity_Params {
		
	}; SetRarity_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_ProximitySlot.UW-Inventory_ProximitySlot_C.SetItemRarityColor
inline void UUW-Inventory_ProximitySlot_C::SetItemRarityColor(enum class EItemRarity CurrentSlot, struct UImage ImageWidget) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_ProximitySlot.UW-Inventory_ProximitySlot_C.SetItemRarityColor");

	struct SetItemRarityColor_Params {
		enum class EItemRarity CurrentSlot;
		struct UImage ImageWidget;
	}; SetItemRarityColor_Params Params;

	Params.CurrentSlot = CurrentSlot;
	Params.ImageWidget = ImageWidget;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_ProximitySlot.UW-Inventory_ProximitySlot_C.SetRatingArrowVisibility
inline void UUW-Inventory_ProximitySlot_C::SetRatingArrowVisibility() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_ProximitySlot.UW-Inventory_ProximitySlot_C.SetRatingArrowVisibility");

	struct SetRatingArrowVisibility_Params {
		
	}; SetRatingArrowVisibility_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_ProximitySlot.UW-Inventory_ProximitySlot_C.SetChestItem
inline void UUW-Inventory_ProximitySlot_C::SetChestItem() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_ProximitySlot.UW-Inventory_ProximitySlot_C.SetChestItem");

	struct SetChestItem_Params {
		
	}; SetChestItem_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_ProximitySlot.UW-Inventory_ProximitySlot_C.SetEquippableAttachment
inline void UUW-Inventory_ProximitySlot_C::SetEquippableAttachment() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_ProximitySlot.UW-Inventory_ProximitySlot_C.SetEquippableAttachment");

	struct SetEquippableAttachment_Params {
		
	}; SetEquippableAttachment_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_ProximitySlot.UW-Inventory_ProximitySlot_C.SetUpgradeItem
inline void UUW-Inventory_ProximitySlot_C::SetUpgradeItem() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_ProximitySlot.UW-Inventory_ProximitySlot_C.SetUpgradeItem");

	struct SetUpgradeItem_Params {
		
	}; SetUpgradeItem_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_ProximitySlot.UW-Inventory_ProximitySlot_C.MouseEnterImpl
inline void UUW-Inventory_ProximitySlot_C::MouseEnterImpl() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_ProximitySlot.UW-Inventory_ProximitySlot_C.MouseEnterImpl");

	struct MouseEnterImpl_Params {
		
	}; MouseEnterImpl_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_ProximitySlot.UW-Inventory_ProximitySlot_C.WeaponEquipState
inline void UUW-Inventory_ProximitySlot_C::WeaponEquipState() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_ProximitySlot.UW-Inventory_ProximitySlot_C.WeaponEquipState");

	struct WeaponEquipState_Params {
		
	}; WeaponEquipState_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_ProximitySlot.UW-Inventory_ProximitySlot_C.SetItemName
inline void UUW-Inventory_ProximitySlot_C::SetItemName() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_ProximitySlot.UW-Inventory_ProximitySlot_C.SetItemName");

	struct SetItemName_Params {
		
	}; SetItemName_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_ProximitySlot.UW-Inventory_ProximitySlot_C.SetItemCount
inline void UUW-Inventory_ProximitySlot_C::SetItemCount() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_ProximitySlot.UW-Inventory_ProximitySlot_C.SetItemCount");

	struct SetItemCount_Params {
		
	}; SetItemCount_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_ProximitySlot.UW-Inventory_ProximitySlot_C.SetWeaponImage_Internal
inline void UUW-Inventory_ProximitySlot_C::SetWeaponImage_Internal(struct UPaperSprite IconTexture) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_ProximitySlot.UW-Inventory_ProximitySlot_C.SetWeaponImage_Internal");

	struct SetWeaponImage_Internal_Params {
		struct UPaperSprite IconTexture;
	}; SetWeaponImage_Internal_Params Params;

	Params.IconTexture = IconTexture;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_ProximitySlot.UW-Inventory_ProximitySlot_C.SetItemImage_Internal
inline struct FSlateBrush UUW-Inventory_ProximitySlot_C::SetItemImage_Internal(struct UPaperSprite IconTexture) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_ProximitySlot.UW-Inventory_ProximitySlot_C.SetItemImage_Internal");

	struct SetItemImage_Internal_Params {
		struct UPaperSprite IconTexture;
		struct FSlateBrush ReturnValue;

	}; SetItemImage_Internal_Params Params;

	Params.IconTexture = IconTexture;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UW-Inventory_ProximitySlot.UW-Inventory_ProximitySlot_C.IsDraging
inline void UUW-Inventory_ProximitySlot_C::IsDraging(char& bResult) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_ProximitySlot.UW-Inventory_ProximitySlot_C.IsDraging");

	struct IsDraging_Params {
		char& bResult;
	}; IsDraging_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	bResult = Params.bResult;

}

// Function UW-Inventory_ProximitySlot.UW-Inventory_ProximitySlot_C.OnDrop
inline char UUW-Inventory_ProximitySlot_C::OnDrop(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation Operation) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_ProximitySlot.UW-Inventory_ProximitySlot_C.OnDrop");

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

// Function UW-Inventory_ProximitySlot.UW-Inventory_ProximitySlot_C.OnDragDetected
inline void UUW-Inventory_ProximitySlot_C::OnDragDetected(struct FGeometry MyGeometry, struct FPointerEvent& PointerEvent, struct UDragDropOperation& Operation) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_ProximitySlot.UW-Inventory_ProximitySlot_C.OnDragDetected");

	struct OnDragDetected_Params {
		struct FGeometry MyGeometry;
		struct FPointerEvent& PointerEvent;
		struct UDragDropOperation& Operation;
	}; OnDragDetected_Params Params;

	Params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	PointerEvent = Params.PointerEvent;
	Operation = Params.Operation;

}

// Function UW-Inventory_ProximitySlot.UW-Inventory_ProximitySlot_C.GetWeaponInfoByInventoryItemInfo
inline void UUW-Inventory_ProximitySlot_C::GetWeaponInfoByInventoryItemInfo(char& bResult, struct FBravoHotelWeaponInfo& WeaponInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_ProximitySlot.UW-Inventory_ProximitySlot_C.GetWeaponInfoByInventoryItemInfo");

	struct GetWeaponInfoByInventoryItemInfo_Params {
		char& bResult;
		struct FBravoHotelWeaponInfo& WeaponInfo;
	}; GetWeaponInfoByInventoryItemInfo_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	bResult = Params.bResult;
	WeaponInfo = Params.WeaponInfo;

}

// Function UW-Inventory_ProximitySlot.UW-Inventory_ProximitySlot_C.OnRButtonClick
inline void UUW-Inventory_ProximitySlot_C::OnRButtonClick(char& bResult) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_ProximitySlot.UW-Inventory_ProximitySlot_C.OnRButtonClick");

	struct OnRButtonClick_Params {
		char& bResult;
	}; OnRButtonClick_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	bResult = Params.bResult;

}

// Function UW-Inventory_ProximitySlot.UW-Inventory_ProximitySlot_C.GetCharacterRef
inline void UUW-Inventory_ProximitySlot_C::GetCharacterRef(char& Result, struct ABravoHotelCharacter& CharacterRef) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_ProximitySlot.UW-Inventory_ProximitySlot_C.GetCharacterRef");

	struct GetCharacterRef_Params {
		char& Result;
		struct ABravoHotelCharacter& CharacterRef;
	}; GetCharacterRef_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Result = Params.Result;
	CharacterRef = Params.CharacterRef;

}

// Function UW-Inventory_ProximitySlot.UW-Inventory_ProximitySlot_C.SetWeaponItem
inline void UUW-Inventory_ProximitySlot_C::SetWeaponItem() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_ProximitySlot.UW-Inventory_ProximitySlot_C.SetWeaponItem");

	struct SetWeaponItem_Params {
		
	}; SetWeaponItem_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_ProximitySlot.UW-Inventory_ProximitySlot_C.Set_BGImage_Brush_1
inline void UUW-Inventory_ProximitySlot_C::Set_BGImage_Brush_1() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_ProximitySlot.UW-Inventory_ProximitySlot_C.Set_BGImage_Brush_1");

	struct Set_BGImage_Brush_1_Params {
		
	}; Set_BGImage_Brush_1_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_ProximitySlot.UW-Inventory_ProximitySlot_C.RequestPickupItem
inline void UUW-Inventory_ProximitySlot_C::RequestPickupItem(char RButtonClick, char& bResult) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_ProximitySlot.UW-Inventory_ProximitySlot_C.RequestPickupItem");

	struct RequestPickupItem_Params {
		char RButtonClick;
		char& bResult;
	}; RequestPickupItem_Params Params;

	Params.RButtonClick = RButtonClick;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	bResult = Params.bResult;

}

// Function UW-Inventory_ProximitySlot.UW-Inventory_ProximitySlot_C.SetItemImage
inline struct FSlateBrush UUW-Inventory_ProximitySlot_C::SetItemImage() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_ProximitySlot.UW-Inventory_ProximitySlot_C.SetItemImage");

	struct SetItemImage_Params {
		
		struct FSlateBrush ReturnValue;

	}; SetItemImage_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UW-Inventory_ProximitySlot.UW-Inventory_ProximitySlot_C.GetItemName
inline struct FText UUW-Inventory_ProximitySlot_C::GetItemName() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_ProximitySlot.UW-Inventory_ProximitySlot_C.GetItemName");

	struct GetItemName_Params {
		
		struct FText ReturnValue;

	}; GetItemName_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UW-Inventory_ProximitySlot.UW-Inventory_ProximitySlot_C.OnLoaded_84877B5B4C424648BFE1AEBDF8BB89BB
inline void UUW-Inventory_ProximitySlot_C::OnLoaded_84877B5B4C424648BFE1AEBDF8BB89BB(struct Object Loaded) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_ProximitySlot.UW-Inventory_ProximitySlot_C.OnLoaded_84877B5B4C424648BFE1AEBDF8BB89BB");

	struct OnLoaded_84877B5B4C424648BFE1AEBDF8BB89BB_Params {
		struct Object Loaded;
	}; OnLoaded_84877B5B4C424648BFE1AEBDF8BB89BB_Params Params;

	Params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_ProximitySlot.UW-Inventory_ProximitySlot_C.Construct
inline void UUW-Inventory_ProximitySlot_C::Construct() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_ProximitySlot.UW-Inventory_ProximitySlot_C.Construct");

	struct Construct_Params {
		
	}; Construct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_ProximitySlot.UW-Inventory_ProximitySlot_C.OnMouseEnter
inline void UUW-Inventory_ProximitySlot_C::OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_ProximitySlot.UW-Inventory_ProximitySlot_C.OnMouseEnter");

	struct OnMouseEnter_Params {
		struct FGeometry MyGeometry;
		struct FPointerEvent& MouseEvent;
	}; OnMouseEnter_Params Params;

	Params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	MouseEvent = Params.MouseEvent;

}

// Function UW-Inventory_ProximitySlot.UW-Inventory_ProximitySlot_C.OnMouseLeave
inline void UUW-Inventory_ProximitySlot_C::OnMouseLeave(struct FPointerEvent& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_ProximitySlot.UW-Inventory_ProximitySlot_C.OnMouseLeave");

	struct OnMouseLeave_Params {
		struct FPointerEvent& MouseEvent;
	}; OnMouseLeave_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	MouseEvent = Params.MouseEvent;

}

// Function UW-Inventory_ProximitySlot.UW-Inventory_ProximitySlot_C.AsyncLoadIconTexture
inline void UUW-Inventory_ProximitySlot_C::AsyncLoadIconTexture(struct TSoftObjectPtr<UPaperSprite> IconTexture) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_ProximitySlot.UW-Inventory_ProximitySlot_C.AsyncLoadIconTexture");

	struct AsyncLoadIconTexture_Params {
		struct TSoftObjectPtr<UPaperSprite> IconTexture;
	}; AsyncLoadIconTexture_Params Params;

	Params.IconTexture = IconTexture;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_ProximitySlot.UW-Inventory_ProximitySlot_C.Tick
inline void UUW-Inventory_ProximitySlot_C::Tick(struct FGeometry MyGeometry, float InDeltaTime) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_ProximitySlot.UW-Inventory_ProximitySlot_C.Tick");

	struct Tick_Params {
		struct FGeometry MyGeometry;
		float InDeltaTime;
	}; Tick_Params Params;

	Params.MyGeometry = MyGeometry;
	Params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_ProximitySlot.UW-Inventory_ProximitySlot_C.SlotInfo
inline void UUW-Inventory_ProximitySlot_C::SlotInfo(struct UActor TargetActor, struct FInventoryItemInfo ItemInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_ProximitySlot.UW-Inventory_ProximitySlot_C.SlotInfo");

	struct SlotInfo_Params {
		struct UActor TargetActor;
		struct FInventoryItemInfo ItemInfo;
	}; SlotInfo_Params Params;

	Params.TargetActor = TargetActor;
	Params.ItemInfo = ItemInfo;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_ProximitySlot.UW-Inventory_ProximitySlot_C.OnChangeWearableItem
inline void UUW-Inventory_ProximitySlot_C::OnChangeWearableItem() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_ProximitySlot.UW-Inventory_ProximitySlot_C.OnChangeWearableItem");

	struct OnChangeWearableItem_Params {
		
	}; OnChangeWearableItem_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_ProximitySlot.UW-Inventory_ProximitySlot_C.OnChangeWeapons
inline void UUW-Inventory_ProximitySlot_C::OnChangeWeapons() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_ProximitySlot.UW-Inventory_ProximitySlot_C.OnChangeWeapons");

	struct OnChangeWeapons_Params {
		
	}; OnChangeWeapons_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_ProximitySlot.UW-Inventory_ProximitySlot_C.OnChangeItemInfoDelegate_Event_1
inline void UUW-Inventory_ProximitySlot_C::OnChangeItemInfoDelegate_Event_1() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_ProximitySlot.UW-Inventory_ProximitySlot_C.OnChangeItemInfoDelegate_Event_1");

	struct OnChangeItemInfoDelegate_Event_1_Params {
		
	}; OnChangeItemInfoDelegate_Event_1_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_ProximitySlot.UW-Inventory_ProximitySlot_C.OnMouseCaptureLost
inline void UUW-Inventory_ProximitySlot_C::OnMouseCaptureLost() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_ProximitySlot.UW-Inventory_ProximitySlot_C.OnMouseCaptureLost");

	struct OnMouseCaptureLost_Params {
		
	}; OnMouseCaptureLost_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_ProximitySlot.UW-Inventory_ProximitySlot_C.ExecuteUbergraph_UW-Inventory_ProximitySlot
inline void UUW-Inventory_ProximitySlot_C::ExecuteUbergraph_UW-Inventory_ProximitySlot(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_ProximitySlot.UW-Inventory_ProximitySlot_C.ExecuteUbergraph_UW-Inventory_ProximitySlot");

	struct ExecuteUbergraph_UW-Inventory_ProximitySlot_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_UW-Inventory_ProximitySlot_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_ProximitySlot.UW-Inventory_ProximitySlot_C.SetSlotInfo__DelegateSignature
inline void UUW-Inventory_ProximitySlot_C::SetSlotInfo__DelegateSignature(struct UActor TargetActor, struct FInventoryItemInfo ItemInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_ProximitySlot.UW-Inventory_ProximitySlot_C.SetSlotInfo__DelegateSignature");

	struct SetSlotInfo__DelegateSignature_Params {
		struct UActor TargetActor;
		struct FInventoryItemInfo ItemInfo;
	}; SetSlotInfo__DelegateSignature_Params Params;

	Params.TargetActor = TargetActor;
	Params.ItemInfo = ItemInfo;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

