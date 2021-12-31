// WidgetBlueprintGeneratedClass UW-InteractionWidget.UW-InteractionWidget_C
class UUW-InteractionWidget_C : public UBravoHotelInteractionWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown UpArrow; // 0x250 (8)
	struct Unknown InteractivePopup_motion; // 0x258 (8)
	struct Unknown AmmoCnt; // 0x260 (8)
	struct Unknown AmmoDown; // 0x268 (8)
	struct Unknown AmmoUp; // 0x270 (8)
	struct Unknown Attack; // 0x278 (8)
	struct Unknown AttackDown; // 0x280 (8)
	struct Unknown AttackUp; // 0x288 (8)
	struct Unknown BuffListWithText; // 0x290 (8)
	struct Unknown CanvasPanel_17; // 0x298 (8)
	struct Unknown CP_Key; // 0x2A0 (8)
	struct Unknown CustomWidgetSwitcher; // 0x2A8 (8)
	struct Unknown fill; // 0x2B0 (8)
	struct Unknown Firingrate; // 0x2B8 (8)
	struct Unknown FiringrateDown; // 0x2C0 (8)
	struct Unknown FiringrateUp; // 0x2C8 (8)
	struct Unknown HB_BuffList; // 0x2D0 (8)
	struct Unknown HorizontalBox_Rarity; // 0x2D8 (8)
	struct Unknown HorizontalBox_WeaponRarity; // 0x2E0 (8)
	struct Unknown Image; // 0x2E8 (8)
	struct Unknown Image_4; // 0x2F0 (8)
	struct Unknown Image_10; // 0x2F8 (8)
	struct Unknown Image_152; // 0x300 (8)
	struct Unknown Image_ItemIcon; // 0x308 (8)
	struct Unknown Image_WeaponLock; // 0x310 (8)
	struct Unknown Interactive; // 0x318 (8)
	struct Unknown ItemBg_01; // 0x320 (8)
	struct Unknown Key_Bomb; // 0x328 (8)
	struct Unknown KeyImageWidget_C_1; // 0x330 (8)
	struct Unknown NeedItem; // 0x338 (8)
	struct Unknown PickUpBg; // 0x340 (8)
	struct Unknown PickupItem; // 0x348 (8)
	struct Unknown Range; // 0x350 (8)
	struct Unknown RangeDown; // 0x358 (8)
	struct Unknown RangeUp; // 0x360 (8)
	struct Unknown RichT_Action; // 0x368 (8)
	struct Unknown RichT_ActionDescription; // 0x370 (8)
	struct Unknown SizeBox_WeaponOwner; // 0x378 (8)
	struct Unknown Stability; // 0x380 (8)
	struct Unknown StabilityDown; // 0x388 (8)
	struct Unknown StabilityUp; // 0x390 (8)
	struct Unknown Switcher_Item; // 0x398 (8)
	struct Unknown T_BombCancel; // 0x3A0 (8)
	struct Unknown T_ComparingWeaponName; // 0x3A8 (8)
	struct Unknown T_PickupItemName; // 0x3B0 (8)
	struct Unknown T_WeaponName; // 0x3B8 (8)
	struct Unknown Text_CombineTarget; // 0x3C0 (8)
	struct Unknown TextBlock_5; // 0x3C8 (8)
	struct Unknown UW-InteractionWidget_WeaponPerkSlot; // 0x3D0 (8)
	struct Unknown UW-InteractionWidget_WeaponPerkSlot_2; // 0x3D8 (8)
	struct Unknown UW-InteractionWidget_WeaponPerkSlot_3; // 0x3E0 (8)
	struct Unknown UW-Inventory_ItemSlotHover_WeaponSlot; // 0x3E8 (8)
	struct Unknown UW-Inventory_ItemSlotHover_WeaponSlot_C_2; // 0x3F0 (8)
	struct Unknown UW-Inventory_ItemSlotHover_WeaponSlot_C_3; // 0x3F8 (8)
	struct Unknown VerticalBox_CombineTarget; // 0x400 (8)
	struct Unknown VerticalBox_StatUp; // 0x408 (8)
	struct Unknown WeaponDesc; // 0x410 (8)
	struct Unknown WeaponItemImage; // 0x418 (8)
	struct Unknown WeaponItemSlot-BG; // 0x420 (8)
	struct Unknown WeaponItemSlot-BG_2; // 0x428 (8)
	struct Unknown WeaponItemSlotHover; // 0x430 (8)
	struct Unknown WidgetSwitcher_123; // 0x438 (8)
	struct Unknown DisableTextColor; // 0x440 (40)
	struct Unknown EnableTextColor; // 0x468 (40)
	char IsDisable : 0; // 0x490 (1)
	struct Unknown PickupItemInfo_1; // 0x498 (152)
	struct Unknown UpLinearColor; // 0x530 (16)
	struct Unknown DownLinearColor; // 0x540 (16)
	struct Unknown NormalSlateColor; // 0x550 (40)
	struct Unknown UpSlateColor; // 0x578 (40)
	struct Unknown DownSlateColor; // 0x5A0 (40)
	char bAction : 0; // 0x5C8 (1)
	char bCompare : 0; // 0x5C9 (1)
	struct Unknown CompareWeaponInfo; // 0x5D0 (2864)
	char IsNoHide : 0; // 0x1100 (1)
	char bWeapon : 0; // 0x1101 (1)
	char bPlayAnimation_WeaponCompare : 0; // 0x1102 (1)
	struct Unknown VisibleTextColor; // 0x1108 (40)
	struct Unknown BrushActionKeyWhite; // 0x1130 (136)
	struct Unknown BrushActionKeyRed; // 0x11B8 (136)
	struct FName TempName; // 0x1240 (8)
	struct FText AvailableAmmoQuantity; // 0x1248 (24)

	void SetCompareFloatArrow(struct Unknown UpImgae, struct Unknown DownImgae, struct Unknown Text, struct Unknown CompareInfo); // Function UW-InteractionWidget.UW-InteractionWidget_C.SetCompareFloatArrow(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void SetWeaponBuff(struct Unknown InventoryItemInfo); // Function UW-InteractionWidget.UW-InteractionWidget_C.SetWeaponBuff(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void SetCustomizedWidget(); // Function UW-InteractionWidget.UW-InteractionWidget_C.SetCustomizedWidget(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void SetRarityPickUp(enum class Unknow Rarity); // Function UW-InteractionWidget.UW-InteractionWidget_C.SetRarityPickUp(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void SetCompareArrow(struct Unknown UpImgae, struct Unknown DownImgae, struct Unknown Text, struct Unknown CompareInfo); // Function UW-InteractionWidget.UW-InteractionWidget_C.SetCompareArrow(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Set RarityWeapon(enum class Unknow Rarity); // Function UW-InteractionWidget.UW-InteractionWidget_C.Set RarityWeapon(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Reset(); // Function UW-InteractionWidget.UW-InteractionWidget_C.Reset(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Hide(); // Function UW-InteractionWidget.UW-InteractionWidget_C.Hide(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void OnLoaded_2385A39542FE4E4DC3D8DA9A1DC61138(struct Unknown Loaded); // Function UW-InteractionWidget.UW-InteractionWidget_C.OnLoaded_2385A39542FE4E4DC3D8DA9A1DC61138(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void OnLoaded_5F4D13BB46FAD58EF9E7D9B1EC284B61(struct Unknown Loaded); // Function UW-InteractionWidget.UW-InteractionWidget_C.OnLoaded_5F4D13BB46FAD58EF9E7D9B1EC284B61(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void OnLoaded_AD9F8D574EE55C633D4CEBA11FC6FB36(struct Unknown Loaded); // Function UW-InteractionWidget.UW-InteractionWidget_C.OnLoaded_AD9F8D574EE55C633D4CEBA11FC6FB36(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void OnLoaded_F76113C9404D07E2AAB61F936BF0F1DA(struct Unknown Loaded); // Function UW-InteractionWidget.UW-InteractionWidget_C.OnLoaded_F76113C9404D07E2AAB61F936BF0F1DA(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void OnLoaded_2D7AC27D4A9340E37F63BDA517074AED(struct Unknown Loaded); // Function UW-InteractionWidget.UW-InteractionWidget_C.OnLoaded_2D7AC27D4A9340E37F63BDA517074AED(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void SetPickItem(struct Unknown& InteractionInfo, struct Unknown& NewPickItem); // Function UW-InteractionWidget.UW-InteractionWidget_C.SetPickItem(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void SetWeapon(struct Unknown& InteractionInfo, struct Unknown& NewWeaponItem, struct Unknown& ItemInfo); // Function UW-InteractionWidget.UW-InteractionWidget_C.SetWeapon(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void SetCompareWeapon(struct Unknown& InteractionInfo, struct Unknown& NewWeaponItem, struct Unknown& ItemInfo); // Function UW-InteractionWidget.UW-InteractionWidget_C.SetCompareWeapon(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void AsyncLoadIconTexture(struct Unknown IconTexture); // Function UW-InteractionWidget.UW-InteractionWidget_C.AsyncLoadIconTexture(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void PreConstruct(char IsDesignTime); // Function UW-InteractionWidget.UW-InteractionWidget_C.PreConstruct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void SetAction(struct Unknown& InteractionInfo); // Function UW-InteractionWidget.UW-InteractionWidget_C.SetAction(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Set PaperSprite AsycLoad(struct Unknown IconTexture, struct Unknown TargetImage); // Function UW-InteractionWidget.UW-InteractionWidget_C.Set PaperSprite AsycLoad(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void SetHide(); // Function UW-InteractionWidget.UW-InteractionWidget_C.SetHide(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void SetCustomMode(int32_t ModeNum); // Function UW-InteractionWidget.UW-InteractionWidget_C.SetCustomMode(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void SetNoHide(char NoHide); // Function UW-InteractionWidget.UW-InteractionWidget_C.SetNoHide(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void SetInteractionInfo(struct Unknown InteractionInfo); // Function UW-InteractionWidget.UW-InteractionWidget_C.SetInteractionInfo(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void ExecuteUbergraph_UW-InteractionWidget(int32_t EntryPoint); // Function UW-InteractionWidget.UW-InteractionWidget_C.ExecuteUbergraph_UW-InteractionWidget(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
};

// Function UW-InteractionWidget.UW-InteractionWidget_C.SetCompareFloatArrow
inline void UUW-InteractionWidget_C::SetCompareFloatArrow(struct Unknown UpImgae, struct Unknown DownImgae, struct Unknown Text, struct Unknown CompareInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InteractionWidget.UW-InteractionWidget_C.SetCompareFloatArrow");

	struct SetCompareFloatArrow_Params {
		struct Unknown UpImgae;
		struct Unknown DownImgae;
		struct Unknown Text;
		struct Unknown CompareInfo;
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
inline void UUW-InteractionWidget_C::SetWeaponBuff(struct Unknown InventoryItemInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InteractionWidget.UW-InteractionWidget_C.SetWeaponBuff");

	struct SetWeaponBuff_Params {
		struct Unknown InventoryItemInfo;
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
inline void UUW-InteractionWidget_C::SetRarityPickUp(enum class Unknow Rarity) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InteractionWidget.UW-InteractionWidget_C.SetRarityPickUp");

	struct SetRarityPickUp_Params {
		enum class Unknow Rarity;
	}; SetRarityPickUp_Params Params;

	Params.Rarity = Rarity;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-InteractionWidget.UW-InteractionWidget_C.SetCompareArrow
inline void UUW-InteractionWidget_C::SetCompareArrow(struct Unknown UpImgae, struct Unknown DownImgae, struct Unknown Text, struct Unknown CompareInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InteractionWidget.UW-InteractionWidget_C.SetCompareArrow");

	struct SetCompareArrow_Params {
		struct Unknown UpImgae;
		struct Unknown DownImgae;
		struct Unknown Text;
		struct Unknown CompareInfo;
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
inline void UUW-InteractionWidget_C::Set RarityWeapon(enum class Unknow Rarity) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InteractionWidget.UW-InteractionWidget_C.Set RarityWeapon");

	struct Set RarityWeapon_Params {
		enum class Unknow Rarity;
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
inline void UUW-InteractionWidget_C::OnLoaded_2385A39542FE4E4DC3D8DA9A1DC61138(struct Unknown Loaded) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InteractionWidget.UW-InteractionWidget_C.OnLoaded_2385A39542FE4E4DC3D8DA9A1DC61138");

	struct OnLoaded_2385A39542FE4E4DC3D8DA9A1DC61138_Params {
		struct Unknown Loaded;
	}; OnLoaded_2385A39542FE4E4DC3D8DA9A1DC61138_Params Params;

	Params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-InteractionWidget.UW-InteractionWidget_C.OnLoaded_5F4D13BB46FAD58EF9E7D9B1EC284B61
inline void UUW-InteractionWidget_C::OnLoaded_5F4D13BB46FAD58EF9E7D9B1EC284B61(struct Unknown Loaded) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InteractionWidget.UW-InteractionWidget_C.OnLoaded_5F4D13BB46FAD58EF9E7D9B1EC284B61");

	struct OnLoaded_5F4D13BB46FAD58EF9E7D9B1EC284B61_Params {
		struct Unknown Loaded;
	}; OnLoaded_5F4D13BB46FAD58EF9E7D9B1EC284B61_Params Params;

	Params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-InteractionWidget.UW-InteractionWidget_C.OnLoaded_AD9F8D574EE55C633D4CEBA11FC6FB36
inline void UUW-InteractionWidget_C::OnLoaded_AD9F8D574EE55C633D4CEBA11FC6FB36(struct Unknown Loaded) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InteractionWidget.UW-InteractionWidget_C.OnLoaded_AD9F8D574EE55C633D4CEBA11FC6FB36");

	struct OnLoaded_AD9F8D574EE55C633D4CEBA11FC6FB36_Params {
		struct Unknown Loaded;
	}; OnLoaded_AD9F8D574EE55C633D4CEBA11FC6FB36_Params Params;

	Params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-InteractionWidget.UW-InteractionWidget_C.OnLoaded_F76113C9404D07E2AAB61F936BF0F1DA
inline void UUW-InteractionWidget_C::OnLoaded_F76113C9404D07E2AAB61F936BF0F1DA(struct Unknown Loaded) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InteractionWidget.UW-InteractionWidget_C.OnLoaded_F76113C9404D07E2AAB61F936BF0F1DA");

	struct OnLoaded_F76113C9404D07E2AAB61F936BF0F1DA_Params {
		struct Unknown Loaded;
	}; OnLoaded_F76113C9404D07E2AAB61F936BF0F1DA_Params Params;

	Params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-InteractionWidget.UW-InteractionWidget_C.OnLoaded_2D7AC27D4A9340E37F63BDA517074AED
inline void UUW-InteractionWidget_C::OnLoaded_2D7AC27D4A9340E37F63BDA517074AED(struct Unknown Loaded) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InteractionWidget.UW-InteractionWidget_C.OnLoaded_2D7AC27D4A9340E37F63BDA517074AED");

	struct OnLoaded_2D7AC27D4A9340E37F63BDA517074AED_Params {
		struct Unknown Loaded;
	}; OnLoaded_2D7AC27D4A9340E37F63BDA517074AED_Params Params;

	Params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-InteractionWidget.UW-InteractionWidget_C.SetPickItem
inline void UUW-InteractionWidget_C::SetPickItem(struct Unknown& InteractionInfo, struct Unknown& NewPickItem) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InteractionWidget.UW-InteractionWidget_C.SetPickItem");

	struct SetPickItem_Params {
		struct Unknown& InteractionInfo;
		struct Unknown& NewPickItem;
	}; SetPickItem_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	InteractionInfo = Params.InteractionInfo;
	NewPickItem = Params.NewPickItem;

}

// Function UW-InteractionWidget.UW-InteractionWidget_C.SetWeapon
inline void UUW-InteractionWidget_C::SetWeapon(struct Unknown& InteractionInfo, struct Unknown& NewWeaponItem, struct Unknown& ItemInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InteractionWidget.UW-InteractionWidget_C.SetWeapon");

	struct SetWeapon_Params {
		struct Unknown& InteractionInfo;
		struct Unknown& NewWeaponItem;
		struct Unknown& ItemInfo;
	}; SetWeapon_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	InteractionInfo = Params.InteractionInfo;
	NewWeaponItem = Params.NewWeaponItem;
	ItemInfo = Params.ItemInfo;

}

// Function UW-InteractionWidget.UW-InteractionWidget_C.SetCompareWeapon
inline void UUW-InteractionWidget_C::SetCompareWeapon(struct Unknown& InteractionInfo, struct Unknown& NewWeaponItem, struct Unknown& ItemInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InteractionWidget.UW-InteractionWidget_C.SetCompareWeapon");

	struct SetCompareWeapon_Params {
		struct Unknown& InteractionInfo;
		struct Unknown& NewWeaponItem;
		struct Unknown& ItemInfo;
	}; SetCompareWeapon_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	InteractionInfo = Params.InteractionInfo;
	NewWeaponItem = Params.NewWeaponItem;
	ItemInfo = Params.ItemInfo;

}

// Function UW-InteractionWidget.UW-InteractionWidget_C.AsyncLoadIconTexture
inline void UUW-InteractionWidget_C::AsyncLoadIconTexture(struct Unknown IconTexture) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InteractionWidget.UW-InteractionWidget_C.AsyncLoadIconTexture");

	struct AsyncLoadIconTexture_Params {
		struct Unknown IconTexture;
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
inline void UUW-InteractionWidget_C::SetAction(struct Unknown& InteractionInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InteractionWidget.UW-InteractionWidget_C.SetAction");

	struct SetAction_Params {
		struct Unknown& InteractionInfo;
	}; SetAction_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	InteractionInfo = Params.InteractionInfo;

}

// Function UW-InteractionWidget.UW-InteractionWidget_C.Set PaperSprite AsycLoad
inline void UUW-InteractionWidget_C::Set PaperSprite AsycLoad(struct Unknown IconTexture, struct Unknown TargetImage) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InteractionWidget.UW-InteractionWidget_C.Set PaperSprite AsycLoad");

	struct Set PaperSprite AsycLoad_Params {
		struct Unknown IconTexture;
		struct Unknown TargetImage;
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
inline void UUW-InteractionWidget_C::SetInteractionInfo(struct Unknown InteractionInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InteractionWidget.UW-InteractionWidget_C.SetInteractionInfo");

	struct SetInteractionInfo_Params {
		struct Unknown InteractionInfo;
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

