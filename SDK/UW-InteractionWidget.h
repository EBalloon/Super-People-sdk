// WidgetBlueprintGeneratedClass UW-InteractionWidget.UW-InteractionWidget_C
class UUW-InteractionWidget_C : public UBravoHotelInteractionWidget {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248 (8)
	struct UWidgetAnimation UpArrow; // 0x250 (8)
	struct UWidgetAnimation InteractivePopup_motion; // 0x258 (8)
	struct UTextBlock AmmoCnt; // 0x260 (8)
	struct UImage AmmoDown; // 0x268 (8)
	struct UImage AmmoUp; // 0x270 (8)
	struct UTextBlock Attack; // 0x278 (8)
	struct UImage AttackDown; // 0x280 (8)
	struct UImage AttackUp; // 0x288 (8)
	struct UWrapBox BuffListWithText; // 0x290 (8)
	struct UCanvasPanel CanvasPanel_17; // 0x298 (8)
	struct UCanvasPanel CP_Key; // 0x2A0 (8)
	struct UWidgetSwitcher CustomWidgetSwitcher; // 0x2A8 (8)
	struct UImage fill; // 0x2B0 (8)
	struct UTextBlock Firingrate; // 0x2B8 (8)
	struct UImage FiringrateDown; // 0x2C0 (8)
	struct UImage FiringrateUp; // 0x2C8 (8)
	struct UHorizontalBox HB_BuffList; // 0x2D0 (8)
	struct UHorizontalBox HorizontalBox_Rarity; // 0x2D8 (8)
	struct UHorizontalBox HorizontalBox_WeaponRarity; // 0x2E0 (8)
	struct UImage Image; // 0x2E8 (8)
	struct UImage Image_4; // 0x2F0 (8)
	struct UImage Image_10; // 0x2F8 (8)
	struct UImage Image_152; // 0x300 (8)
	struct UImage Image_ItemIcon; // 0x308 (8)
	struct UImage Image_WeaponLock; // 0x310 (8)
	struct UCanvasPanel Interactive; // 0x318 (8)
	struct UImage ItemBg_01; // 0x320 (8)
	struct UKeyImageWidget_C Key_Bomb; // 0x328 (8)
	struct UKeyImageWidget_C KeyImageWidget_C_1; // 0x330 (8)
	struct UImage NeedItem; // 0x338 (8)
	struct UImage PickUpBg; // 0x340 (8)
	struct USizeBox PickupItem; // 0x348 (8)
	struct UTextBlock Range; // 0x350 (8)
	struct UImage RangeDown; // 0x358 (8)
	struct UImage RangeUp; // 0x360 (8)
	struct URichTextBlock RichT_Action; // 0x368 (8)
	struct URichTextBlock RichT_ActionDescription; // 0x370 (8)
	struct USizeBox SizeBox_WeaponOwner; // 0x378 (8)
	struct UTextBlock Stability; // 0x380 (8)
	struct UImage StabilityDown; // 0x388 (8)
	struct UImage StabilityUp; // 0x390 (8)
	struct UWidgetSwitcher Switcher_Item; // 0x398 (8)
	struct UTextBlock T_BombCancel; // 0x3A0 (8)
	struct UTextBlock T_ComparingWeaponName; // 0x3A8 (8)
	struct UTextBlock T_PickupItemName; // 0x3B0 (8)
	struct UTextBlock T_WeaponName; // 0x3B8 (8)
	struct UTextBlock Text_CombineTarget; // 0x3C0 (8)
	struct UTextBlock TextBlock_5; // 0x3C8 (8)
	struct UUW-InteractionWidget_WeaponPerkSlot_C UW-InteractionWidget_WeaponPerkSlot; // 0x3D0 (8)
	struct UUW-InteractionWidget_WeaponPerkSlot_C UW-InteractionWidget_WeaponPerkSlot_2; // 0x3D8 (8)
	struct UUW-InteractionWidget_WeaponPerkSlot_C UW-InteractionWidget_WeaponPerkSlot_3; // 0x3E0 (8)
	struct UUW-Inventory_ItemSlotHover_WeaponSlot_C UW-Inventory_ItemSlotHover_WeaponSlot; // 0x3E8 (8)
	struct UUW-Inventory_ItemSlotHover_WeaponSlot_C UW-Inventory_ItemSlotHover_WeaponSlot_C_2; // 0x3F0 (8)
	struct UUW-Inventory_ItemSlotHover_WeaponSlot_C UW-Inventory_ItemSlotHover_WeaponSlot_C_3; // 0x3F8 (8)
	struct UVerticalBox VerticalBox_CombineTarget; // 0x400 (8)
	struct UVerticalBox VerticalBox_StatUp; // 0x408 (8)
	struct UTextBlock WeaponDesc; // 0x410 (8)
	struct UImage WeaponItemImage; // 0x418 (8)
	struct UImage WeaponItemSlot-BG; // 0x420 (8)
	struct UImage WeaponItemSlot-BG_2; // 0x428 (8)
	struct UCanvasPanel WeaponItemSlotHover; // 0x430 (8)
	struct UWidgetSwitcher WidgetSwitcher_123; // 0x438 (8)
	struct FSlateColor DisableTextColor; // 0x440 (40)
	struct FSlateColor EnableTextColor; // 0x468 (40)
	char IsDisable : 0; // 0x490 (1)
	struct FInventoryItemInfo PickupItemInfo_1; // 0x498 (152)
	struct FLinearColor UpLinearColor; // 0x530 (16)
	struct FLinearColor DownLinearColor; // 0x540 (16)
	struct FSlateColor NormalSlateColor; // 0x550 (40)
	struct FSlateColor UpSlateColor; // 0x578 (40)
	struct FSlateColor DownSlateColor; // 0x5A0 (40)
	char bAction : 0; // 0x5C8 (1)
	char bCompare : 0; // 0x5C9 (1)
	struct FBravoHotelWeaponInfo CompareWeaponInfo; // 0x5D0 (2856)
	char IsNoHide : 0; // 0x10F8 (1)
	char bWeapon : 0; // 0x10F9 (1)
	char bPlayAnimation_WeaponCompare : 0; // 0x10FA (1)
	struct FSlateColor VisibleTextColor; // 0x1100 (40)
	struct FSlateBrush BrushActionKeyWhite; // 0x1128 (136)
	struct FSlateBrush BrushActionKeyRed; // 0x11B0 (136)
	struct FName TempName; // 0x1238 (8)
	struct FText AvailableAmmoQuantity; // 0x1240 (24)

	void SetCompareFloatArrow(struct UImage UpImgae, struct UImage DownImgae, struct UTextBlock Text, struct FItemComparefloatInfo CompareInfo); // Function UW-InteractionWidget.UW-InteractionWidget_C.SetCompareFloatArrow(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void SetWeaponBuff(struct FInventoryItemInfo InventoryItemInfo); // Function UW-InteractionWidget.UW-InteractionWidget_C.SetWeaponBuff(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void SetCustomizedWidget(); // Function UW-InteractionWidget.UW-InteractionWidget_C.SetCustomizedWidget(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void SetRarityPickUp(enum class EItemRarity Rarity); // Function UW-InteractionWidget.UW-InteractionWidget_C.SetRarityPickUp(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void SetCompareArrow(struct UImage UpImgae, struct UImage DownImgae, struct UTextBlock Text, struct FItemCompareInfo CompareInfo); // Function UW-InteractionWidget.UW-InteractionWidget_C.SetCompareArrow(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void Set RarityWeapon(enum class EItemRarity Rarity); // Function UW-InteractionWidget.UW-InteractionWidget_C.Set RarityWeapon(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void Reset(); // Function UW-InteractionWidget.UW-InteractionWidget_C.Reset(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void Hide(); // Function UW-InteractionWidget.UW-InteractionWidget_C.Hide(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void OnLoaded_2385A39542FE4E4DC3D8DA9A1DC61138(struct Object Loaded); // Function UW-InteractionWidget.UW-InteractionWidget_C.OnLoaded_2385A39542FE4E4DC3D8DA9A1DC61138(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void OnLoaded_5F4D13BB46FAD58EF9E7D9B1EC284B61(struct Object Loaded); // Function UW-InteractionWidget.UW-InteractionWidget_C.OnLoaded_5F4D13BB46FAD58EF9E7D9B1EC284B61(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void OnLoaded_AD9F8D574EE55C633D4CEBA11FC6FB36(struct Object Loaded); // Function UW-InteractionWidget.UW-InteractionWidget_C.OnLoaded_AD9F8D574EE55C633D4CEBA11FC6FB36(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void OnLoaded_F76113C9404D07E2AAB61F936BF0F1DA(struct Object Loaded); // Function UW-InteractionWidget.UW-InteractionWidget_C.OnLoaded_F76113C9404D07E2AAB61F936BF0F1DA(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void OnLoaded_2D7AC27D4A9340E37F63BDA517074AED(struct Object Loaded); // Function UW-InteractionWidget.UW-InteractionWidget_C.OnLoaded_2D7AC27D4A9340E37F63BDA517074AED(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void SetPickItem(struct FInteraction& InteractionInfo, struct FPickupItem& NewPickItem); // Function UW-InteractionWidget.UW-InteractionWidget_C.SetPickItem(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void SetWeapon(struct FInteraction& InteractionInfo, struct FWeaponItem& NewWeaponItem, struct FInventoryItemInfo& ItemInfo); // Function UW-InteractionWidget.UW-InteractionWidget_C.SetWeapon(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void SetCompareWeapon(struct FInteraction& InteractionInfo, struct FWeaponCompare& NewWeaponItem, struct FInventoryItemInfo& ItemInfo); // Function UW-InteractionWidget.UW-InteractionWidget_C.SetCompareWeapon(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void AsyncLoadIconTexture(struct TSoftObjectPtr<UPaperSprite> IconTexture); // Function UW-InteractionWidget.UW-InteractionWidget_C.AsyncLoadIconTexture(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void PreConstruct(char IsDesignTime); // Function UW-InteractionWidget.UW-InteractionWidget_C.PreConstruct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void SetAction(struct FInteraction& InteractionInfo); // Function UW-InteractionWidget.UW-InteractionWidget_C.SetAction(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void Set PaperSprite AsycLoad(struct TSoftObjectPtr<UPaperSprite> IconTexture, struct UImage TargetImage); // Function UW-InteractionWidget.UW-InteractionWidget_C.Set PaperSprite AsycLoad(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void SetHide(); // Function UW-InteractionWidget.UW-InteractionWidget_C.SetHide(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void SetCustomMode(int32_t ModeNum); // Function UW-InteractionWidget.UW-InteractionWidget_C.SetCustomMode(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void SetNoHide(char NoHide); // Function UW-InteractionWidget.UW-InteractionWidget_C.SetNoHide(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void SetInteractionInfo(struct FInteraction InteractionInfo); // Function UW-InteractionWidget.UW-InteractionWidget_C.SetInteractionInfo(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void ExecuteUbergraph_UW-InteractionWidget(int32_t EntryPoint); // Function UW-InteractionWidget.UW-InteractionWidget_C.ExecuteUbergraph_UW-InteractionWidget(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
};

// Function UW-InteractionWidget.UW-InteractionWidget_C.SetCompareFloatArrow
inline void UUW-InteractionWidget_C::SetCompareFloatArrow(struct UImage UpImgae, struct UImage DownImgae, struct UTextBlock Text, struct FItemComparefloatInfo CompareInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InteractionWidget.UW-InteractionWidget_C.SetCompareFloatArrow");

	struct SetCompareFloatArrow_Params {
		struct UImage UpImgae;
		struct UImage DownImgae;
		struct UTextBlock Text;
		struct FItemComparefloatInfo CompareInfo;
	}; SetCompareFloatArrow_Params Params;

	Params.UpImgae = UpImgae;
	Params.DownImgae = DownImgae;
	Params.Text = Text;
	Params.CompareInfo = CompareInfo;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-InteractionWidget.UW-InteractionWidget_C.SetWeaponBuff
inline void UUW-InteractionWidget_C::SetWeaponBuff(struct FInventoryItemInfo InventoryItemInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InteractionWidget.UW-InteractionWidget_C.SetWeaponBuff");

	struct SetWeaponBuff_Params {
		struct FInventoryItemInfo InventoryItemInfo;
	}; SetWeaponBuff_Params Params;

	Params.InventoryItemInfo = InventoryItemInfo;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-InteractionWidget.UW-InteractionWidget_C.SetCustomizedWidget
inline void UUW-InteractionWidget_C::SetCustomizedWidget() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InteractionWidget.UW-InteractionWidget_C.SetCustomizedWidget");

	struct SetCustomizedWidget_Params {
		
	}; SetCustomizedWidget_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-InteractionWidget.UW-InteractionWidget_C.SetRarityPickUp
inline void UUW-InteractionWidget_C::SetRarityPickUp(enum class EItemRarity Rarity) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InteractionWidget.UW-InteractionWidget_C.SetRarityPickUp");

	struct SetRarityPickUp_Params {
		enum class EItemRarity Rarity;
	}; SetRarityPickUp_Params Params;

	Params.Rarity = Rarity;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-InteractionWidget.UW-InteractionWidget_C.SetCompareArrow
inline void UUW-InteractionWidget_C::SetCompareArrow(struct UImage UpImgae, struct UImage DownImgae, struct UTextBlock Text, struct FItemCompareInfo CompareInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InteractionWidget.UW-InteractionWidget_C.SetCompareArrow");

	struct SetCompareArrow_Params {
		struct UImage UpImgae;
		struct UImage DownImgae;
		struct UTextBlock Text;
		struct FItemCompareInfo CompareInfo;
	}; SetCompareArrow_Params Params;

	Params.UpImgae = UpImgae;
	Params.DownImgae = DownImgae;
	Params.Text = Text;
	Params.CompareInfo = CompareInfo;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-InteractionWidget.UW-InteractionWidget_C.Set RarityWeapon
inline void UUW-InteractionWidget_C::Set RarityWeapon(enum class EItemRarity Rarity) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InteractionWidget.UW-InteractionWidget_C.Set RarityWeapon");

	struct Set RarityWeapon_Params {
		enum class EItemRarity Rarity;
	}; Set RarityWeapon_Params Params;

	Params.Rarity = Rarity;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-InteractionWidget.UW-InteractionWidget_C.Reset
inline void UUW-InteractionWidget_C::Reset() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InteractionWidget.UW-InteractionWidget_C.Reset");

	struct Reset_Params {
		
	}; Reset_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-InteractionWidget.UW-InteractionWidget_C.Hide
inline void UUW-InteractionWidget_C::Hide() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InteractionWidget.UW-InteractionWidget_C.Hide");

	struct Hide_Params {
		
	}; Hide_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-InteractionWidget.UW-InteractionWidget_C.OnLoaded_2385A39542FE4E4DC3D8DA9A1DC61138
inline void UUW-InteractionWidget_C::OnLoaded_2385A39542FE4E4DC3D8DA9A1DC61138(struct Object Loaded) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InteractionWidget.UW-InteractionWidget_C.OnLoaded_2385A39542FE4E4DC3D8DA9A1DC61138");

	struct OnLoaded_2385A39542FE4E4DC3D8DA9A1DC61138_Params {
		struct Object Loaded;
	}; OnLoaded_2385A39542FE4E4DC3D8DA9A1DC61138_Params Params;

	Params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-InteractionWidget.UW-InteractionWidget_C.OnLoaded_5F4D13BB46FAD58EF9E7D9B1EC284B61
inline void UUW-InteractionWidget_C::OnLoaded_5F4D13BB46FAD58EF9E7D9B1EC284B61(struct Object Loaded) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InteractionWidget.UW-InteractionWidget_C.OnLoaded_5F4D13BB46FAD58EF9E7D9B1EC284B61");

	struct OnLoaded_5F4D13BB46FAD58EF9E7D9B1EC284B61_Params {
		struct Object Loaded;
	}; OnLoaded_5F4D13BB46FAD58EF9E7D9B1EC284B61_Params Params;

	Params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-InteractionWidget.UW-InteractionWidget_C.OnLoaded_AD9F8D574EE55C633D4CEBA11FC6FB36
inline void UUW-InteractionWidget_C::OnLoaded_AD9F8D574EE55C633D4CEBA11FC6FB36(struct Object Loaded) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InteractionWidget.UW-InteractionWidget_C.OnLoaded_AD9F8D574EE55C633D4CEBA11FC6FB36");

	struct OnLoaded_AD9F8D574EE55C633D4CEBA11FC6FB36_Params {
		struct Object Loaded;
	}; OnLoaded_AD9F8D574EE55C633D4CEBA11FC6FB36_Params Params;

	Params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-InteractionWidget.UW-InteractionWidget_C.OnLoaded_F76113C9404D07E2AAB61F936BF0F1DA
inline void UUW-InteractionWidget_C::OnLoaded_F76113C9404D07E2AAB61F936BF0F1DA(struct Object Loaded) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InteractionWidget.UW-InteractionWidget_C.OnLoaded_F76113C9404D07E2AAB61F936BF0F1DA");

	struct OnLoaded_F76113C9404D07E2AAB61F936BF0F1DA_Params {
		struct Object Loaded;
	}; OnLoaded_F76113C9404D07E2AAB61F936BF0F1DA_Params Params;

	Params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-InteractionWidget.UW-InteractionWidget_C.OnLoaded_2D7AC27D4A9340E37F63BDA517074AED
inline void UUW-InteractionWidget_C::OnLoaded_2D7AC27D4A9340E37F63BDA517074AED(struct Object Loaded) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InteractionWidget.UW-InteractionWidget_C.OnLoaded_2D7AC27D4A9340E37F63BDA517074AED");

	struct OnLoaded_2D7AC27D4A9340E37F63BDA517074AED_Params {
		struct Object Loaded;
	}; OnLoaded_2D7AC27D4A9340E37F63BDA517074AED_Params Params;

	Params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-InteractionWidget.UW-InteractionWidget_C.SetPickItem
inline void UUW-InteractionWidget_C::SetPickItem(struct FInteraction& InteractionInfo, struct FPickupItem& NewPickItem) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InteractionWidget.UW-InteractionWidget_C.SetPickItem");

	struct SetPickItem_Params {
		struct FInteraction& InteractionInfo;
		struct FPickupItem& NewPickItem;
	}; SetPickItem_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	InteractionInfo = Params.InteractionInfo;
	NewPickItem = Params.NewPickItem;

}

// Function UW-InteractionWidget.UW-InteractionWidget_C.SetWeapon
inline void UUW-InteractionWidget_C::SetWeapon(struct FInteraction& InteractionInfo, struct FWeaponItem& NewWeaponItem, struct FInventoryItemInfo& ItemInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InteractionWidget.UW-InteractionWidget_C.SetWeapon");

	struct SetWeapon_Params {
		struct FInteraction& InteractionInfo;
		struct FWeaponItem& NewWeaponItem;
		struct FInventoryItemInfo& ItemInfo;
	}; SetWeapon_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	InteractionInfo = Params.InteractionInfo;
	NewWeaponItem = Params.NewWeaponItem;
	ItemInfo = Params.ItemInfo;

}

// Function UW-InteractionWidget.UW-InteractionWidget_C.SetCompareWeapon
inline void UUW-InteractionWidget_C::SetCompareWeapon(struct FInteraction& InteractionInfo, struct FWeaponCompare& NewWeaponItem, struct FInventoryItemInfo& ItemInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InteractionWidget.UW-InteractionWidget_C.SetCompareWeapon");

	struct SetCompareWeapon_Params {
		struct FInteraction& InteractionInfo;
		struct FWeaponCompare& NewWeaponItem;
		struct FInventoryItemInfo& ItemInfo;
	}; SetCompareWeapon_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	InteractionInfo = Params.InteractionInfo;
	NewWeaponItem = Params.NewWeaponItem;
	ItemInfo = Params.ItemInfo;

}

// Function UW-InteractionWidget.UW-InteractionWidget_C.AsyncLoadIconTexture
inline void UUW-InteractionWidget_C::AsyncLoadIconTexture(struct TSoftObjectPtr<UPaperSprite> IconTexture) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InteractionWidget.UW-InteractionWidget_C.AsyncLoadIconTexture");

	struct AsyncLoadIconTexture_Params {
		struct TSoftObjectPtr<UPaperSprite> IconTexture;
	}; AsyncLoadIconTexture_Params Params;

	Params.IconTexture = IconTexture;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-InteractionWidget.UW-InteractionWidget_C.PreConstruct
inline void UUW-InteractionWidget_C::PreConstruct(char IsDesignTime) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InteractionWidget.UW-InteractionWidget_C.PreConstruct");

	struct PreConstruct_Params {
		char IsDesignTime;
	}; PreConstruct_Params Params;

	Params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-InteractionWidget.UW-InteractionWidget_C.SetAction
inline void UUW-InteractionWidget_C::SetAction(struct FInteraction& InteractionInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InteractionWidget.UW-InteractionWidget_C.SetAction");

	struct SetAction_Params {
		struct FInteraction& InteractionInfo;
	}; SetAction_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	InteractionInfo = Params.InteractionInfo;

}

// Function UW-InteractionWidget.UW-InteractionWidget_C.Set PaperSprite AsycLoad
inline void UUW-InteractionWidget_C::Set PaperSprite AsycLoad(struct TSoftObjectPtr<UPaperSprite> IconTexture, struct UImage TargetImage) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InteractionWidget.UW-InteractionWidget_C.Set PaperSprite AsycLoad");

	struct Set PaperSprite AsycLoad_Params {
		struct TSoftObjectPtr<UPaperSprite> IconTexture;
		struct UImage TargetImage;
	}; Set PaperSprite AsycLoad_Params Params;

	Params.IconTexture = IconTexture;
	Params.TargetImage = TargetImage;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-InteractionWidget.UW-InteractionWidget_C.SetHide
inline void UUW-InteractionWidget_C::SetHide() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InteractionWidget.UW-InteractionWidget_C.SetHide");

	struct SetHide_Params {
		
	}; SetHide_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-InteractionWidget.UW-InteractionWidget_C.SetCustomMode
inline void UUW-InteractionWidget_C::SetCustomMode(int32_t ModeNum) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InteractionWidget.UW-InteractionWidget_C.SetCustomMode");

	struct SetCustomMode_Params {
		int32_t ModeNum;
	}; SetCustomMode_Params Params;

	Params.ModeNum = ModeNum;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-InteractionWidget.UW-InteractionWidget_C.SetNoHide
inline void UUW-InteractionWidget_C::SetNoHide(char NoHide) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InteractionWidget.UW-InteractionWidget_C.SetNoHide");

	struct SetNoHide_Params {
		char NoHide;
	}; SetNoHide_Params Params;

	Params.NoHide = NoHide;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-InteractionWidget.UW-InteractionWidget_C.SetInteractionInfo
inline void UUW-InteractionWidget_C::SetInteractionInfo(struct FInteraction InteractionInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InteractionWidget.UW-InteractionWidget_C.SetInteractionInfo");

	struct SetInteractionInfo_Params {
		struct FInteraction InteractionInfo;
	}; SetInteractionInfo_Params Params;

	Params.InteractionInfo = InteractionInfo;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-InteractionWidget.UW-InteractionWidget_C.ExecuteUbergraph_UW-InteractionWidget
inline void UUW-InteractionWidget_C::ExecuteUbergraph_UW-InteractionWidget(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InteractionWidget.UW-InteractionWidget_C.ExecuteUbergraph_UW-InteractionWidget");

	struct ExecuteUbergraph_UW-InteractionWidget_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_UW-InteractionWidget_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

