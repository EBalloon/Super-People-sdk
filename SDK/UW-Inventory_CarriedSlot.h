// WidgetBlueprintGeneratedClass UW-Inventory_CarriedSlot.UW-Inventory_CarriedSlot_C
class UUW-Inventory_CarriedSlot_C : public UUW-Inventory_SlotBase_C {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1358 (8)
	struct UWidgetAnimation Ani_Tutorial_Glow; // 0x1360 (8)
	struct UWidgetAnimation C_Slot_Up_Arrow; // 0x1368 (8)
	struct UWidgetAnimation C_SlotHover_ItemState_Hide; // 0x1370 (8)
	struct UWidgetAnimation C_SlotHover_ItemState_Show; // 0x1378 (8)
	struct UWidgetAnimation C_SlotHover; // 0x1380 (8)
	struct UImage BGImage; // 0x1388 (8)
	struct UImage BGImage_2; // 0x1390 (8)
	struct UCanvasPanel CanvasPanel_ITemState; // 0x1398 (8)
	struct UTextBlock Count120; // 0x13A0 (8)
	struct UImage Crate_Default; // 0x13A8 (8)
	struct UImage Crate_Hover; // 0x13B0 (8)
	struct UImage Effect_Booster; // 0x13B8 (8)
	struct UImage Effect_Capsule; // 0x13C0 (8)
	struct UHorizontalBox HorizontalBox_Rarity; // 0x13C8 (8)
	struct UImage HoverImage; // 0x13D0 (8)
	struct UImage HoverImage_Round; // 0x13D8 (8)
	struct UImage Image_531; // 0x13E0 (8)
	struct UImage Image_539; // 0x13E8 (8)
	struct UImage Image_540; // 0x13F0 (8)
	struct UImage Image_541; // 0x13F8 (8)
	struct UImage Image_542; // 0x1400 (8)
	struct UImage Image_543; // 0x1408 (8)
	struct UImage Image_544; // 0x1410 (8)
	struct UImage Image_Bindable; // 0x1418 (8)
	struct UImage Image_Supply; // 0x1420 (8)
	struct UImage ItemImage; // 0x1428 (8)
	struct UTextBlock ItemState_Text; // 0x1430 (8)
	struct UImage KeepedItem_List; // 0x1438 (8)
	struct UImage KeepedItem_ListHover; // 0x1440 (8)
	struct UImage LvColor; // 0x1448 (8)
	struct UImage Motion; // 0x1450 (8)
	struct UProgressBar ProgressBar_309; // 0x1458 (8)
	struct USizeBox SizeBox_1; // 0x1460 (8)
	struct UTextBlock TextBlock_3; // 0x1468 (8)
	struct UImage Tutorial_Glow; // 0x1470 (8)
	struct UUW-MouseRightClick_C UW-MouseRightClick_Big; // 0x1478 (8)
	struct UUW-MouseRightClick_C UW-MouseRightClick_Small; // 0x1480 (8)
	struct UImage WeaponColorBg; // 0x1488 (8)
	struct UImage WeaponEquipItem_Default; // 0x1490 (8)
	struct UImage WeaponEquipItem_Hover; // 0x1498 (8)
	struct UImage WeaponItemImage; // 0x14A0 (8)
	int32_t InventoryItemInfoIndex; // 0x14A8 (4)
	struct FLinearColor MedicalBGColor; // 0x14AC (16)
	int32_t CurCount; // 0x14BC (4)
	struct FMulticastInlineDelegate SetSlotInfo; // 0x14C0 (16)
	char CanUseCapsule : 0; // 0x14D0 (1)
	struct UImage SelectedHoverImage; // 0x14D8 (8)
	struct TArray<struct FName> ShowRarityStar; // 0x14E0 (16)
	struct TArray<struct FName> ShowIconBG; // 0x14F0 (16)

	void CheckBoosterItem(char& IsBoost, struct FLinearColor& OutColor, struct UTexture& OutTexture); // Function UW-Inventory_CarriedSlot.UW-Inventory_CarriedSlot_C.CheckBoosterItem(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void SetBoosterItem(); // Function UW-Inventory_CarriedSlot.UW-Inventory_CarriedSlot_C.SetBoosterItem(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void IsDraging(char& bResult); // Function UW-Inventory_CarriedSlot.UW-Inventory_CarriedSlot_C.IsDraging(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <Game_BE.exe+0x2B80160>
	void IsRoundItemType(char& bRoundItem); // Function UW-Inventory_CarriedSlot.UW-Inventory_CarriedSlot_C.IsRoundItemType(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <Game_BE.exe+0x2B80160>
	void SetRightClickSmall(char IsVisible); // Function UW-Inventory_CarriedSlot.UW-Inventory_CarriedSlot_C.SetRightClickSmall(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void SetRightClickBig(); // Function UW-Inventory_CarriedSlot.UW-Inventory_CarriedSlot_C.SetRightClickBig(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void SetCapsuleItem(); // Function UW-Inventory_CarriedSlot.UW-Inventory_CarriedSlot_C.SetCapsuleItem(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	char CanUseCapsuleItem(); // Function UW-Inventory_CarriedSlot.UW-Inventory_CarriedSlot_C.CanUseCapsuleItem(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void CheckCapsuleItem(char& IsCapsule, struct FLinearColor& Color); // Function UW-Inventory_CarriedSlot.UW-Inventory_CarriedSlot_C.CheckCapsuleItem(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void SetRarity(); // Function UW-Inventory_CarriedSlot.UW-Inventory_CarriedSlot_C.SetRarity(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void SetBindInfo(); // Function UW-Inventory_CarriedSlot.UW-Inventory_CarriedSlot_C.SetBindInfo(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	float GetPercent_1(); // Function UW-Inventory_CarriedSlot.UW-Inventory_CarriedSlot_C.GetPercent_1(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <Game_BE.exe+0x2B80160>
	void CalTargetHealth(char Hover); // Function UW-Inventory_CarriedSlot.UW-Inventory_CarriedSlot_C.CalTargetHealth(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void SetChestItem(); // Function UW-Inventory_CarriedSlot.UW-Inventory_CarriedSlot_C.SetChestItem(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void SetEquippableAttachment(); // Function UW-Inventory_CarriedSlot.UW-Inventory_CarriedSlot_C.SetEquippableAttachment(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void MouseEnterImpl(); // Function UW-Inventory_CarriedSlot.UW-Inventory_CarriedSlot_C.MouseEnterImpl(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void WeaponEquipState(); // Function UW-Inventory_CarriedSlot.UW-Inventory_CarriedSlot_C.WeaponEquipState(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void SetItemCount(); // Function UW-Inventory_CarriedSlot.UW-Inventory_CarriedSlot_C.SetItemCount(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void SetItemName(); // Function UW-Inventory_CarriedSlot.UW-Inventory_CarriedSlot_C.SetItemName(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	char OnDrop(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation Operation); // Function UW-Inventory_CarriedSlot.UW-Inventory_CarriedSlot_C.OnDrop(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void DropQuantity(int32_t Quantity); // Function UW-Inventory_CarriedSlot.UW-Inventory_CarriedSlot_C.DropQuantity(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	struct FSlateBrush Set_WeaponItemImage_Brush_1(); // Function UW-Inventory_CarriedSlot.UW-Inventory_CarriedSlot_C.Set_WeaponItemImage_Brush_1(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void GetWeaponInfoByInventoryItemInfo(char& bResult, struct FBravoHotelWeaponInfo& WeaponInfo); // Function UW-Inventory_CarriedSlot.UW-Inventory_CarriedSlot_C.GetWeaponInfoByInventoryItemInfo(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void OnDragDetected(struct FGeometry MyGeometry, struct FPointerEvent& PointerEvent, struct UDragDropOperation& Operation); // Function UW-Inventory_CarriedSlot.UW-Inventory_CarriedSlot_C.OnDragDetected(BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void OnRButtonClick(char& bResult); // Function UW-Inventory_CarriedSlot.UW-Inventory_CarriedSlot_C.OnRButtonClick(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void Set_BGImage_Brush_1(); // Function UW-Inventory_CarriedSlot.UW-Inventory_CarriedSlot_C.Set_BGImage_Brush_1(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void ResetCarriedList(char& bResult); // Function UW-Inventory_CarriedSlot.UW-Inventory_CarriedSlot_C.ResetCarriedList(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	struct FSlateBrush SetItemImage(); // Function UW-Inventory_CarriedSlot.UW-Inventory_CarriedSlot_C.SetItemImage(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void DropAll(); // Function UW-Inventory_CarriedSlot.UW-Inventory_CarriedSlot_C.DropAll(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	struct FText GetCount(); // Function UW-Inventory_CarriedSlot.UW-Inventory_CarriedSlot_C.GetCount(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <Game_BE.exe+0x2B80160>
	struct FText GetItemName(); // Function UW-Inventory_CarriedSlot.UW-Inventory_CarriedSlot_C.GetItemName(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <Game_BE.exe+0x2B80160>
	void OnLoaded_2B134E7141F4FDBD4FA7CCAEDA8B0F59(struct Object Loaded); // Function UW-Inventory_CarriedSlot.UW-Inventory_CarriedSlot_C.OnLoaded_2B134E7141F4FDBD4FA7CCAEDA8B0F59(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void AsyncLoadIconTexture(struct TSoftObjectPtr<UPaperSprite> IconTexture); // Function UW-Inventory_CarriedSlot.UW-Inventory_CarriedSlot_C.AsyncLoadIconTexture(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UW-Inventory_CarriedSlot.UW-Inventory_CarriedSlot_C.Tick(BlueprintCosmetic|Event|Public|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void Slotinfo(); // Function UW-Inventory_CarriedSlot.UW-Inventory_CarriedSlot_C.Slotinfo(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void OnChangeWeapons(); // Function UW-Inventory_CarriedSlot.UW-Inventory_CarriedSlot_C.OnChangeWeapons(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void Construct(); // Function UW-Inventory_CarriedSlot.UW-Inventory_CarriedSlot_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function UW-Inventory_CarriedSlot.UW-Inventory_CarriedSlot_C.OnMouseLeave(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UW-Inventory_CarriedSlot.UW-Inventory_CarriedSlot_C.OnMouseEnter(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void ExecuteUbergraph_UW-Inventory_CarriedSlot(int32_t EntryPoint); // Function UW-Inventory_CarriedSlot.UW-Inventory_CarriedSlot_C.ExecuteUbergraph_UW-Inventory_CarriedSlot(Final|UbergraphFunction|HasDefaults) // <Game_BE.exe+0x2B80160>
	void SetSlotInfo__DelegateSignature(); // Function UW-Inventory_CarriedSlot.UW-Inventory_CarriedSlot_C.SetSlotInfo__DelegateSignature(Public|Delegate|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
};

// Function UW-Inventory_CarriedSlot.UW-Inventory_CarriedSlot_C.CheckBoosterItem
inline void UUW-Inventory_CarriedSlot_C::CheckBoosterItem(char& IsBoost, struct FLinearColor& OutColor, struct UTexture& OutTexture) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_CarriedSlot.UW-Inventory_CarriedSlot_C.CheckBoosterItem");

	struct CheckBoosterItem_Params {
		char& IsBoost;
		struct FLinearColor& OutColor;
		struct UTexture& OutTexture;
	}; CheckBoosterItem_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	IsBoost = Params.IsBoost;
	OutColor = Params.OutColor;
	OutTexture = Params.OutTexture;

}

// Function UW-Inventory_CarriedSlot.UW-Inventory_CarriedSlot_C.SetBoosterItem
inline void UUW-Inventory_CarriedSlot_C::SetBoosterItem() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_CarriedSlot.UW-Inventory_CarriedSlot_C.SetBoosterItem");

	struct SetBoosterItem_Params {
		
	}; SetBoosterItem_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_CarriedSlot.UW-Inventory_CarriedSlot_C.IsDraging
inline void UUW-Inventory_CarriedSlot_C::IsDraging(char& bResult) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_CarriedSlot.UW-Inventory_CarriedSlot_C.IsDraging");

	struct IsDraging_Params {
		char& bResult;
	}; IsDraging_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	bResult = Params.bResult;

}

// Function UW-Inventory_CarriedSlot.UW-Inventory_CarriedSlot_C.IsRoundItemType
inline void UUW-Inventory_CarriedSlot_C::IsRoundItemType(char& bRoundItem) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_CarriedSlot.UW-Inventory_CarriedSlot_C.IsRoundItemType");

	struct IsRoundItemType_Params {
		char& bRoundItem;
	}; IsRoundItemType_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	bRoundItem = Params.bRoundItem;

}

// Function UW-Inventory_CarriedSlot.UW-Inventory_CarriedSlot_C.SetRightClickSmall
inline void UUW-Inventory_CarriedSlot_C::SetRightClickSmall(char IsVisible) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_CarriedSlot.UW-Inventory_CarriedSlot_C.SetRightClickSmall");

	struct SetRightClickSmall_Params {
		char IsVisible;
	}; SetRightClickSmall_Params Params;

	Params.IsVisible = IsVisible;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_CarriedSlot.UW-Inventory_CarriedSlot_C.SetRightClickBig
inline void UUW-Inventory_CarriedSlot_C::SetRightClickBig() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_CarriedSlot.UW-Inventory_CarriedSlot_C.SetRightClickBig");

	struct SetRightClickBig_Params {
		
	}; SetRightClickBig_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_CarriedSlot.UW-Inventory_CarriedSlot_C.SetCapsuleItem
inline void UUW-Inventory_CarriedSlot_C::SetCapsuleItem() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_CarriedSlot.UW-Inventory_CarriedSlot_C.SetCapsuleItem");

	struct SetCapsuleItem_Params {
		
	}; SetCapsuleItem_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_CarriedSlot.UW-Inventory_CarriedSlot_C.CanUseCapsuleItem
inline char UUW-Inventory_CarriedSlot_C::CanUseCapsuleItem() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_CarriedSlot.UW-Inventory_CarriedSlot_C.CanUseCapsuleItem");

	struct CanUseCapsuleItem_Params {
		
		char ReturnValue;

	}; CanUseCapsuleItem_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UW-Inventory_CarriedSlot.UW-Inventory_CarriedSlot_C.CheckCapsuleItem
inline void UUW-Inventory_CarriedSlot_C::CheckCapsuleItem(char& IsCapsule, struct FLinearColor& Color) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_CarriedSlot.UW-Inventory_CarriedSlot_C.CheckCapsuleItem");

	struct CheckCapsuleItem_Params {
		char& IsCapsule;
		struct FLinearColor& Color;
	}; CheckCapsuleItem_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	IsCapsule = Params.IsCapsule;
	Color = Params.Color;

}

// Function UW-Inventory_CarriedSlot.UW-Inventory_CarriedSlot_C.SetRarity
inline void UUW-Inventory_CarriedSlot_C::SetRarity() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_CarriedSlot.UW-Inventory_CarriedSlot_C.SetRarity");

	struct SetRarity_Params {
		
	}; SetRarity_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_CarriedSlot.UW-Inventory_CarriedSlot_C.SetBindInfo
inline void UUW-Inventory_CarriedSlot_C::SetBindInfo() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_CarriedSlot.UW-Inventory_CarriedSlot_C.SetBindInfo");

	struct SetBindInfo_Params {
		
	}; SetBindInfo_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_CarriedSlot.UW-Inventory_CarriedSlot_C.GetPercent_1
inline float UUW-Inventory_CarriedSlot_C::GetPercent_1() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_CarriedSlot.UW-Inventory_CarriedSlot_C.GetPercent_1");

	struct GetPercent_1_Params {
		
		float ReturnValue;

	}; GetPercent_1_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UW-Inventory_CarriedSlot.UW-Inventory_CarriedSlot_C.CalTargetHealth
inline void UUW-Inventory_CarriedSlot_C::CalTargetHealth(char Hover) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_CarriedSlot.UW-Inventory_CarriedSlot_C.CalTargetHealth");

	struct CalTargetHealth_Params {
		char Hover;
	}; CalTargetHealth_Params Params;

	Params.Hover = Hover;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_CarriedSlot.UW-Inventory_CarriedSlot_C.SetChestItem
inline void UUW-Inventory_CarriedSlot_C::SetChestItem() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_CarriedSlot.UW-Inventory_CarriedSlot_C.SetChestItem");

	struct SetChestItem_Params {
		
	}; SetChestItem_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_CarriedSlot.UW-Inventory_CarriedSlot_C.SetEquippableAttachment
inline void UUW-Inventory_CarriedSlot_C::SetEquippableAttachment() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_CarriedSlot.UW-Inventory_CarriedSlot_C.SetEquippableAttachment");

	struct SetEquippableAttachment_Params {
		
	}; SetEquippableAttachment_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_CarriedSlot.UW-Inventory_CarriedSlot_C.MouseEnterImpl
inline void UUW-Inventory_CarriedSlot_C::MouseEnterImpl() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_CarriedSlot.UW-Inventory_CarriedSlot_C.MouseEnterImpl");

	struct MouseEnterImpl_Params {
		
	}; MouseEnterImpl_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_CarriedSlot.UW-Inventory_CarriedSlot_C.WeaponEquipState
inline void UUW-Inventory_CarriedSlot_C::WeaponEquipState() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_CarriedSlot.UW-Inventory_CarriedSlot_C.WeaponEquipState");

	struct WeaponEquipState_Params {
		
	}; WeaponEquipState_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_CarriedSlot.UW-Inventory_CarriedSlot_C.SetItemCount
inline void UUW-Inventory_CarriedSlot_C::SetItemCount() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_CarriedSlot.UW-Inventory_CarriedSlot_C.SetItemCount");

	struct SetItemCount_Params {
		
	}; SetItemCount_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_CarriedSlot.UW-Inventory_CarriedSlot_C.SetItemName
inline void UUW-Inventory_CarriedSlot_C::SetItemName() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_CarriedSlot.UW-Inventory_CarriedSlot_C.SetItemName");

	struct SetItemName_Params {
		
	}; SetItemName_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_CarriedSlot.UW-Inventory_CarriedSlot_C.OnDrop
inline char UUW-Inventory_CarriedSlot_C::OnDrop(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation Operation) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_CarriedSlot.UW-Inventory_CarriedSlot_C.OnDrop");

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

// Function UW-Inventory_CarriedSlot.UW-Inventory_CarriedSlot_C.DropQuantity
inline void UUW-Inventory_CarriedSlot_C::DropQuantity(int32_t Quantity) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_CarriedSlot.UW-Inventory_CarriedSlot_C.DropQuantity");

	struct DropQuantity_Params {
		int32_t Quantity;
	}; DropQuantity_Params Params;

	Params.Quantity = Quantity;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_CarriedSlot.UW-Inventory_CarriedSlot_C.Set_WeaponItemImage_Brush_1
inline struct FSlateBrush UUW-Inventory_CarriedSlot_C::Set_WeaponItemImage_Brush_1() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_CarriedSlot.UW-Inventory_CarriedSlot_C.Set_WeaponItemImage_Brush_1");

	struct Set_WeaponItemImage_Brush_1_Params {
		
		struct FSlateBrush ReturnValue;

	}; Set_WeaponItemImage_Brush_1_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UW-Inventory_CarriedSlot.UW-Inventory_CarriedSlot_C.GetWeaponInfoByInventoryItemInfo
inline void UUW-Inventory_CarriedSlot_C::GetWeaponInfoByInventoryItemInfo(char& bResult, struct FBravoHotelWeaponInfo& WeaponInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_CarriedSlot.UW-Inventory_CarriedSlot_C.GetWeaponInfoByInventoryItemInfo");

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

// Function UW-Inventory_CarriedSlot.UW-Inventory_CarriedSlot_C.OnDragDetected
inline void UUW-Inventory_CarriedSlot_C::OnDragDetected(struct FGeometry MyGeometry, struct FPointerEvent& PointerEvent, struct UDragDropOperation& Operation) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_CarriedSlot.UW-Inventory_CarriedSlot_C.OnDragDetected");

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

// Function UW-Inventory_CarriedSlot.UW-Inventory_CarriedSlot_C.OnRButtonClick
inline void UUW-Inventory_CarriedSlot_C::OnRButtonClick(char& bResult) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_CarriedSlot.UW-Inventory_CarriedSlot_C.OnRButtonClick");

	struct OnRButtonClick_Params {
		char& bResult;
	}; OnRButtonClick_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	bResult = Params.bResult;

}

// Function UW-Inventory_CarriedSlot.UW-Inventory_CarriedSlot_C.Set_BGImage_Brush_1
inline void UUW-Inventory_CarriedSlot_C::Set_BGImage_Brush_1() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_CarriedSlot.UW-Inventory_CarriedSlot_C.Set_BGImage_Brush_1");

	struct Set_BGImage_Brush_1_Params {
		
	}; Set_BGImage_Brush_1_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_CarriedSlot.UW-Inventory_CarriedSlot_C.ResetCarriedList
inline void UUW-Inventory_CarriedSlot_C::ResetCarriedList(char& bResult) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_CarriedSlot.UW-Inventory_CarriedSlot_C.ResetCarriedList");

	struct ResetCarriedList_Params {
		char& bResult;
	}; ResetCarriedList_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	bResult = Params.bResult;

}

// Function UW-Inventory_CarriedSlot.UW-Inventory_CarriedSlot_C.SetItemImage
inline struct FSlateBrush UUW-Inventory_CarriedSlot_C::SetItemImage() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_CarriedSlot.UW-Inventory_CarriedSlot_C.SetItemImage");

	struct SetItemImage_Params {
		
		struct FSlateBrush ReturnValue;

	}; SetItemImage_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UW-Inventory_CarriedSlot.UW-Inventory_CarriedSlot_C.DropAll
inline void UUW-Inventory_CarriedSlot_C::DropAll() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_CarriedSlot.UW-Inventory_CarriedSlot_C.DropAll");

	struct DropAll_Params {
		
	}; DropAll_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_CarriedSlot.UW-Inventory_CarriedSlot_C.GetCount
inline struct FText UUW-Inventory_CarriedSlot_C::GetCount() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_CarriedSlot.UW-Inventory_CarriedSlot_C.GetCount");

	struct GetCount_Params {
		
		struct FText ReturnValue;

	}; GetCount_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UW-Inventory_CarriedSlot.UW-Inventory_CarriedSlot_C.GetItemName
inline struct FText UUW-Inventory_CarriedSlot_C::GetItemName() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_CarriedSlot.UW-Inventory_CarriedSlot_C.GetItemName");

	struct GetItemName_Params {
		
		struct FText ReturnValue;

	}; GetItemName_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UW-Inventory_CarriedSlot.UW-Inventory_CarriedSlot_C.OnLoaded_2B134E7141F4FDBD4FA7CCAEDA8B0F59
inline void UUW-Inventory_CarriedSlot_C::OnLoaded_2B134E7141F4FDBD4FA7CCAEDA8B0F59(struct Object Loaded) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_CarriedSlot.UW-Inventory_CarriedSlot_C.OnLoaded_2B134E7141F4FDBD4FA7CCAEDA8B0F59");

	struct OnLoaded_2B134E7141F4FDBD4FA7CCAEDA8B0F59_Params {
		struct Object Loaded;
	}; OnLoaded_2B134E7141F4FDBD4FA7CCAEDA8B0F59_Params Params;

	Params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_CarriedSlot.UW-Inventory_CarriedSlot_C.AsyncLoadIconTexture
inline void UUW-Inventory_CarriedSlot_C::AsyncLoadIconTexture(struct TSoftObjectPtr<UPaperSprite> IconTexture) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_CarriedSlot.UW-Inventory_CarriedSlot_C.AsyncLoadIconTexture");

	struct AsyncLoadIconTexture_Params {
		struct TSoftObjectPtr<UPaperSprite> IconTexture;
	}; AsyncLoadIconTexture_Params Params;

	Params.IconTexture = IconTexture;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_CarriedSlot.UW-Inventory_CarriedSlot_C.Tick
inline void UUW-Inventory_CarriedSlot_C::Tick(struct FGeometry MyGeometry, float InDeltaTime) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_CarriedSlot.UW-Inventory_CarriedSlot_C.Tick");

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

// Function UW-Inventory_CarriedSlot.UW-Inventory_CarriedSlot_C.Slotinfo
inline void UUW-Inventory_CarriedSlot_C::Slotinfo() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_CarriedSlot.UW-Inventory_CarriedSlot_C.Slotinfo");

	struct Slotinfo_Params {
		
	}; Slotinfo_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_CarriedSlot.UW-Inventory_CarriedSlot_C.OnChangeWeapons
inline void UUW-Inventory_CarriedSlot_C::OnChangeWeapons() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_CarriedSlot.UW-Inventory_CarriedSlot_C.OnChangeWeapons");

	struct OnChangeWeapons_Params {
		
	}; OnChangeWeapons_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_CarriedSlot.UW-Inventory_CarriedSlot_C.Construct
inline void UUW-Inventory_CarriedSlot_C::Construct() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_CarriedSlot.UW-Inventory_CarriedSlot_C.Construct");

	struct Construct_Params {
		
	}; Construct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_CarriedSlot.UW-Inventory_CarriedSlot_C.OnMouseLeave
inline void UUW-Inventory_CarriedSlot_C::OnMouseLeave(struct FPointerEvent& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_CarriedSlot.UW-Inventory_CarriedSlot_C.OnMouseLeave");

	struct OnMouseLeave_Params {
		struct FPointerEvent& MouseEvent;
	}; OnMouseLeave_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	MouseEvent = Params.MouseEvent;

}

// Function UW-Inventory_CarriedSlot.UW-Inventory_CarriedSlot_C.OnMouseEnter
inline void UUW-Inventory_CarriedSlot_C::OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_CarriedSlot.UW-Inventory_CarriedSlot_C.OnMouseEnter");

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

// Function UW-Inventory_CarriedSlot.UW-Inventory_CarriedSlot_C.ExecuteUbergraph_UW-Inventory_CarriedSlot
inline void UUW-Inventory_CarriedSlot_C::ExecuteUbergraph_UW-Inventory_CarriedSlot(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_CarriedSlot.UW-Inventory_CarriedSlot_C.ExecuteUbergraph_UW-Inventory_CarriedSlot");

	struct ExecuteUbergraph_UW-Inventory_CarriedSlot_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_UW-Inventory_CarriedSlot_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_CarriedSlot.UW-Inventory_CarriedSlot_C.SetSlotInfo__DelegateSignature
inline void UUW-Inventory_CarriedSlot_C::SetSlotInfo__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_CarriedSlot.UW-Inventory_CarriedSlot_C.SetSlotInfo__DelegateSignature");

	struct SetSlotInfo__DelegateSignature_Params {
		
	}; SetSlotInfo__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

