// WidgetBlueprintGeneratedClass UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C
class UUW-Inventory_ItemSlotHover_C : public UBravoHotelInventoryHoverWidget {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280 (8)
	struct UWidgetAnimation UpArrow; // 0x288 (8)
	struct UWidgetAnimation FadeIn; // 0x290 (8)
	struct UImage Ammo_Compare; // 0x298 (8)
	struct UTextBlock Ammo_Value; // 0x2A0 (8)
	struct UImage AmmoIcon; // 0x2A8 (8)
	struct UTextBlock AmmoInfo; // 0x2B0 (8)
	struct UImage Arrow_01; // 0x2B8 (8)
	struct UImage Arrow_02; // 0x2C0 (8)
	struct UWrapBox BuffList; // 0x2C8 (8)
	struct UWrapBox BuffList_2; // 0x2D0 (8)
	struct UImage EffectiveRange_Compare; // 0x2D8 (8)
	struct UTextBlock EffectiveRange_Value; // 0x2E0 (8)
	struct UImage FiringRate_Compare; // 0x2E8 (8)
	struct UTextBlock FiringRate_Value; // 0x2F0 (8)
	struct UHorizontalBox HorizontalBox_ItemRarity; // 0x2F8 (8)
	struct UHorizontalBox HorizontalBox_MaterialRarity; // 0x300 (8)
	struct UHorizontalBox HorizontalBox_WeaponRarity; // 0x308 (8)
	struct UImage Image; // 0x310 (8)
	struct UImage Image_2; // 0x318 (8)
	struct UImage Image_3; // 0x320 (8)
	struct UImage Image_8; // 0x328 (8)
	struct UImage Image_9; // 0x330 (8)
	struct UImage Image_10; // 0x338 (8)
	struct UImage Image_11; // 0x340 (8)
	struct UImage Image_12; // 0x348 (8)
	struct UImage Image_13; // 0x350 (8)
	struct UImage Image_14; // 0x358 (8)
	struct UImage Image_15; // 0x360 (8)
	struct UImage Image_16; // 0x368 (8)
	struct UImage Image_20; // 0x370 (8)
	struct UImage Image_22; // 0x378 (8)
	struct UImage Image_23; // 0x380 (8)
	struct UImage Image_24; // 0x388 (8)
	struct UImage Image_25; // 0x390 (8)
	struct UImage Image_26; // 0x398 (8)
	struct UImage Image_27; // 0x3A0 (8)
	struct UImage Image_28; // 0x3A8 (8)
	struct UImage Image_29; // 0x3B0 (8)
	struct UImage Image_30; // 0x3B8 (8)
	struct UImage Image_31; // 0x3C0 (8)
	struct UImage Image_32; // 0x3C8 (8)
	struct UImage Image_310; // 0x3D0 (8)
	struct UImage Image_557; // 0x3D8 (8)
	struct UImage Image_WeaponLock; // 0x3E0 (8)
	struct UImage Img_MaterialBG; // 0x3E8 (8)
	struct UImage IMG_MaterialIcon; // 0x3F0 (8)
	struct UImage IMG_Stat; // 0x3F8 (8)
	struct UImage ItemBg; // 0x400 (8)
	struct UImage ItemBg_01; // 0x408 (8)
	struct UImage ItemBg_02; // 0x410 (8)
	struct UImage ItemSlot-BG; // 0x418 (8)
	struct UTextBlock ItemSlot-Capacity; // 0x420 (8)
	struct UTextBlock ItemSlot-Capacity_2; // 0x428 (8)
	struct UTextBlock ItemSlot-Description; // 0x430 (8)
	struct UTextBlock ItemSlot-Description_2; // 0x438 (8)
	struct UImage ItemSlot-ItemImage; // 0x440 (8)
	struct UTextBlock ItemSlot-ItemName; // 0x448 (8)
	struct UTextBlock ItemSlot-ItemType; // 0x450 (8)
	struct UImage ItemSlot-ItemTypeMark; // 0x458 (8)
	struct UCanvasPanel ItemSlotHover; // 0x460 (8)
	struct UImage PerkBG; // 0x468 (8)
	struct UImage PerkImage; // 0x470 (8)
	struct UTextBlock PerkLevelText; // 0x478 (8)
	struct UTextBlock PerkName; // 0x480 (8)
	struct UCanvasPanel PerkSlotHover; // 0x488 (8)
	struct UImage PopupHover-BG_2; // 0x490 (8)
	struct UImage Power_Compare; // 0x498 (8)
	struct UTextBlock Power_Value; // 0x4A0 (8)
	struct USizeBox SizeBox; // 0x4A8 (8)
	struct USizeBox SizeBox_7; // 0x4B0 (8)
	struct USizeBox SizeBox_ComparingText; // 0x4B8 (8)
	struct USizeBox SizeBox_ItemDivide; // 0x4C0 (8)
	struct UImage Stability_Compare; // 0x4C8 (8)
	struct UTextBlock Stability_Value; // 0x4D0 (8)
	struct UCanvasPanel StatSlotHover; // 0x4D8 (8)
	struct UTextBlock T_BindPlayerName; // 0x4E0 (8)
	struct UTextBlock T_Material; // 0x4E8 (8)
	struct UTextBlock T_MaterialDesc; // 0x4F0 (8)
	struct UTextBlock T_PerkDescLv1; // 0x4F8 (8)
	struct UTextBlock T_PerkDescLv2; // 0x500 (8)
	struct UTextBlock T_PerkDescLv3; // 0x508 (8)
	struct UTextBlock T_Stat; // 0x510 (8)
	struct UTextBlock T_StatDesc; // 0x518 (8)
	struct URichTextBlock T_TooltipDesc; // 0x520 (8)
	struct UTextBlock T_UltimateDesc; // 0x528 (8)
	struct UTextBlock T_UnlockUltimateLevel; // 0x530 (8)
	struct UTextBlock Text_CombineTarget; // 0x538 (8)
	struct UTextBlock TextBlock_3; // 0x540 (8)
	struct UTextBlock TextBlock_4; // 0x548 (8)
	struct UTextBlock TextBlock_5; // 0x550 (8)
	struct UTextBlock TextBlock_6; // 0x558 (8)
	struct UCanvasPanel UpArrowAni; // 0x560 (8)
	struct UUW-Inventory_ItemSlotHover_WeaponSlot_C UW-Inventory_ItemSlotHover_WeaponSlot; // 0x568 (8)
	struct UUW-Inventory_ItemSlotHover_WeaponSlot_C UW-Inventory_ItemSlotHover_WeaponSlot_2; // 0x570 (8)
	struct UUW-Inventory_ItemSlotHover_WeaponSlot_C UW-Inventory_ItemSlotHover_WeaponSlot_C; // 0x578 (8)
	struct UUW-Inventory_ItemSlotHover_WeaponSlot_C UW-Inventory_ItemSlotHover_WeaponSlot_C_2; // 0x580 (8)
	struct UUW-Inventory_ItemSlotHover_WeaponSlot_C UW-Inventory_ItemSlotHover_WeaponSlot_C_3; // 0x588 (8)
	struct UUW-Inventory_ItemSlotHover_WeaponSlot_C UW-Inventory_ItemSlotHover_WeaponSlot_C_4; // 0x590 (8)
	struct UVerticalBox VerticalBox_3; // 0x598 (8)
	struct UVerticalBox VerticalBox_BuffList; // 0x5A0 (8)
	struct UVerticalBox VerticalBox_BuffList_2; // 0x5A8 (8)
	struct UVerticalBox VerticalBox_CombineTarget; // 0x5B0 (8)
	struct UVerticalBox VerticalBox_Divide; // 0x5B8 (8)
	struct UVerticalBox VerticalBox_ItemDivide; // 0x5C0 (8)
	struct UVerticalBox VerticalBox_WeaponBindedInfo; // 0x5C8 (8)
	struct UTextBlock WeaponItemCapacity; // 0x5D0 (8)
	struct UTextBlock WeaponItemComparingName; // 0x5D8 (8)
	struct UTextBlock WeaponItemDescription; // 0x5E0 (8)
	struct UImage WeaponItemImage; // 0x5E8 (8)
	struct UImage WeaponItemSlot-BG; // 0x5F0 (8)
	struct UCanvasPanel WeaponItemSlotHover; // 0x5F8 (8)
	struct UTextBlock WeaponItemType; // 0x600 (8)
	struct UImage WeaponLockImage; // 0x608 (8)
	struct UTextBlock WeaponName; // 0x610 (8)
	struct UWidgetSwitcher WidgetSwitcher; // 0x618 (8)
	struct UWidgetSwitcher WidgetSwitcher_1; // 0x620 (8)
	struct UWidgetSwitcher WidgetSwitcher_2; // 0x628 (8)
	struct UWidgetSwitcher WidgetSwitcher_3; // 0x630 (8)
	struct UWidgetSwitcher WidgetSwitcher_4; // 0x638 (8)
	struct UWidgetSwitcher WidgetSwitcher_Main; // 0x640 (8)
	struct UWidgetSwitcher WidgetSwitcher_PerkUltimate; // 0x648 (8)
	struct FInventoryItemInfo ItemInfo; // 0x650 (152)
	struct FBravoHotelWeaponInfo WeaponInfo; // 0x6E8 (2864)
	char bCompare : 0; // 0x1218 (1)
	struct FSlateColor NormalSlateColor; // 0x1220 (40)
	struct FSlateColor UpSlateColor; // 0x1248 (40)
	struct FSlateColor DownSlateColor; // 0x1270 (40)
	struct FLinearColor UpLinearColor; // 0x1298 (16)
	struct FLinearColor DownLinearColor; // 0x12A8 (16)
	struct ABravoHotelWeaponBase WeaponObjectRef; // 0x12B8 (8)
	struct FInventoryItemDetailInfo ItemDetailInfo; // 0x12C0 (1168)
	struct FPerkUIInfo PerkInfo; // 0x1750 (44)
	struct FPerkData PerkData; // 0x1780 (224)
	struct FName Ammo; // 0x1860 (8)
	enum class ItemWidgetDragType DragType; // 0x1868 (1)
	struct UWidget HoveredWidget; // 0x1870 (8)
	struct UUserWidget CurrentShowingWidgetRef; // 0x1878 (8)
	char IsUltimatePerk : 0; // 0x1880 (1)
	struct FText UltimateName; // 0x1888 (24)
	struct FLinearColor UltimateLinearColor; // 0x18A0 (16)
	struct TSoftObjectPtr<Object> UltimateImage; // 0x18B0 (40)
	struct FTimerHandle HoverTimerHandle; // 0x18D8 (8)
	char NeedCheckVisibility : 0; // 0x18E0 (1)
	char IsVisualMode : 0; // 0x18E1 (1)
	char IsRandomPerk : 0; // 0x18E2 (1)
	struct TArray<struct UImage> ItemRarityImages; // 0x18E8 (16)
	struct TArray<struct UImage> WeaponRarityImages; // 0x18F8 (16)

	float GetDisplayAccuracy(); // Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.GetDisplayAccuracy(Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	float GetDisplayDamage(); // Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.GetDisplayDamage(Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	int32_t GetDisplayEffectiveRange(); // Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.GetDisplayEffectiveRange(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	int32_t GetDisplayLevel(); // Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.GetDisplayLevel(Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	int32_t GetDisplayMagSize(); // Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.GetDisplayMagSize(Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	int32_t GetDisplayRateofFire(); // Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.GetDisplayRateofFire(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void GetCurrentClassSpecialWeaponPerkData(char& Find, struct FPerkData& OutPerkData); // Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.GetCurrentClassSpecialWeaponPerkData(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void SetCurrentPerkWeaponInfoSlot(); // Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.SetCurrentPerkWeaponInfoSlot(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void SetTooltipSlot(enum class ItemWidgetDragType DragType, struct FText BuffInfo); // Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.SetTooltipSlot(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void SetVisualMode(); // Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.SetVisualMode(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void SetBuffSlot(enum class ItemWidgetDragType DragType, struct FBravoHotelBuffUIInfo BuffInfo); // Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.SetBuffSlot(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void SetOptionSlot(enum class ItemWidgetDragType DragType, struct FItemOption ItemOptionInfo); // Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.SetOptionSlot(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void SetMaterialSlot(enum class ItemWidgetDragType DragType, struct FItemMaterialData MaterialInfo); // Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.SetMaterialSlot(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void Hide(); // Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.Hide(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void Show(struct UBravoHotelInventoryHoverWidget HoverWidget, char ShowItemDivideInfo, char IsRandomPerk, char& SUCCESS); // Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.Show(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	enum class ESlateVisibility Get Vertical Box Buff List 2 Visibility(); // Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.Get Vertical Box Buff List 2 Visibility(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	enum class ESlateVisibility Get Buff List 1 Visibility(); // Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.Get Buff List 1 Visibility(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	enum class ESlateVisibility Get Size Box Comparing Text Visibility(); // Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.Get Size Box Comparing Text Visibility(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	enum class ESlateVisibility Get Vertical Box Combine Target Visibility(); // Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.Get Vertical Box Combine Target Visibility(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	enum class ESlateVisibility Get Item Slot- Description 1 Visibility(); // Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.Get Item Slot- Description 1 Visibility(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	enum class ESlateVisibility Get Visibility Item Divide(); // Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.Get Visibility Item Divide(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void GetItemWeaponData(struct FItemWeapon& ItemWeaponData); // Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.GetItemWeaponData(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void SetBuffList(); // Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.SetBuffList(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	enum class ESlateVisibility Get Horizontal Box Weapon Binded Info Visibility(); // Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.Get Horizontal Box Weapon Binded Info Visibility(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	struct FLinearColor Get Image Weapon Lock Color And Opacity(); // Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.Get Image Weapon Lock Color And Opacity(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	enum class ESlateVisibility Get Image Weapon Lock Visibility(); // Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.Get Image Weapon Lock Visibility(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void SetStatSlot(enum class EStatusType StatusType, int32_t Value, enum class ItemWidgetDragType DragType); // Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.SetStatSlot(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	struct FLinearColor Get_ItemBg_ColorAndOpacity(); // Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.Get_ItemBg_ColorAndOpacity(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	struct FLinearColor Get Perk BG Color And Opacity(); // Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.Get Perk BG Color And Opacity(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	struct FLinearColor Get_ItemBg_01_ColorAndOpacity(); // Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.Get_ItemBg_01_ColorAndOpacity(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void SetUltimatePerkDesc(); // Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.SetUltimatePerkDesc(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	struct FLinearColor GetSlotColor(); // Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.GetSlotColor(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	struct FSlateColor Get Perk Name Color And Opacity(); // Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.Get Perk Name Color And Opacity(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	enum class ESlateVisibility Get Unlock Ultimate Level Visibility(); // Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.Get Unlock Ultimate Level Visibility(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void SetPerkDesc(int32_t Level); // Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.SetPerkDesc(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void SetPerksDesc(); // Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.SetPerksDesc(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void HideHover(enum class ItemWidgetDragType DragType, char Force); // Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.HideHover(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	struct FSlateBrush Get Perk Image Brush(); // Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.Get Perk Image Brush(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	struct FText Get Perk Name Text(); // Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.Get Perk Name Text(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void SetPerkSlot(struct FPerkUIInfo NewPerkInfo, enum class ItemWidgetDragType DragType, char IsUltimatePerk); // Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.SetPerkSlot(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	struct FText Get_WeaponItemCapacity_Text(); // Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.Get_WeaponItemCapacity_Text(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	struct FText Get_ItemSlot-Capacity_Text(); // Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.Get_ItemSlot-Capacity_Text(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void GetItemType(struct FText& ItemTypeText, struct UTexture2D& ItemTypeTexture); // Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.GetItemType(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	struct FText Get Item Slot- Item Type Text(); // Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.Get Item Slot- Item Type Text(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	struct FText Get Weapon Item Type Text(); // Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.Get Weapon Item Type Text(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void GetWeaponType(enum class EWeaponType& WeaponType, struct FText& WeaponTypeText, struct UTexture2D& WeaponTypeTexture); // Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.GetWeaponType(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void GetEquippedWeaponInfoByWeaponType(enum class EWeaponType WeaponType, char& bResult, struct FBravoHotelWeaponInfo& WeaponInfo); // Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.GetEquippedWeaponInfoByWeaponType(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	struct FText Get Weapon Item Comparing Name Text(); // Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.Get Weapon Item Comparing Name Text(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	struct FText Get Ammo Info Text(); // Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.Get Ammo Info Text(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	struct FSlateBrush Get Ammo Icon Brush(); // Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.Get Ammo Icon Brush(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void GetCompareAmmo(struct FSlateColor& SlateColor, struct FText& valueText); // Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.GetCompareAmmo(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void GetCompareFiringRate(struct FSlateColor& SlateColor, struct FText& valueText); // Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.GetCompareFiringRate(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void GetCompareStabillity(struct FSlateColor& SlateColor, struct FText& valueText); // Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.GetCompareStabillity(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void GetCompareEffectiveRange(struct FSlateColor& SlateColor, struct FText& valueText); // Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.GetCompareEffectiveRange(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void GetComparePower(struct FSlateColor& SlateColor, struct FText& valueText); // Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.GetComparePower(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	struct FText Get Ammo Value Text(); // Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.Get Ammo Value Text(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	struct FText Get Firing Rate Value Text(); // Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.Get Firing Rate Value Text(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	struct FText Get Stability Value Text(); // Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.Get Stability Value Text(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	struct FText Get Effective Range Value Text(); // Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.Get Effective Range Value Text(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	struct FText Get Power Value Text(); // Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.Get Power Value Text(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void IsWeaponTooltip(char& bResult); // Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.IsWeaponTooltip(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void IsItemTooltip(char& bResult); // Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.IsItemTooltip(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void GetHoverCanvas(struct UCanvasPanel& CanvasPanel, char& bResult); // Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.GetHoverCanvas(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void SetWeaponItemSlot(struct FBravoHotelWeaponInfo WeaponItemInfo, struct FInventoryItemInfo InventoryItemInfo, enum class ItemWidgetDragType DragType, struct FName Ammo); // Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.SetWeaponItemSlot(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	struct FText Get Weapon Item Slot- Description Text(); // Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.Get Weapon Item Slot- Description Text(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	struct FSlateBrush Get Weapon Item Slot- Item Image Brush(); // Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.Get Weapon Item Slot- Item Image Brush(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	struct FText Get Weapon Item Slot- Item Name Text(); // Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.Get Weapon Item Slot- Item Name Text(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void SetItemSlotInfo(struct FInventoryItemInfo InventoryItem, enum class ItemWidgetDragType DragType); // Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.SetItemSlotInfo(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void Show Hover(struct UWidget HoveredWidget, struct UUserWidget ShowingWidgetRef, char& SUCCESS); // Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.Show Hover(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	struct FText GetWeight(); // Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.GetWeight(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	struct FText GetDescription(); // Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.GetDescription(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	struct FSlateBrush GetItemImage(); // Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.GetItemImage(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	struct FText GetName(); // Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.GetName(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void OnLoaded_5CB0A85D41BD4B88F0EAB29CA9DBDD0F(struct Object Loaded); // Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.OnLoaded_5CB0A85D41BD4B88F0EAB29CA9DBDD0F(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void OnLoaded_A317A42643FCC3E3348F00AF47100D7C(struct Object Loaded); // Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.OnLoaded_A317A42643FCC3E3348F00AF47100D7C(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void OnLoaded_BF365972409319D445BAF88D964EE916(struct Object Loaded); // Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.OnLoaded_BF365972409319D445BAF88D964EE916(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void OnLoaded_90972E92490A36CFBC0DC4AD6ACA1B48(struct Object Loaded); // Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.OnLoaded_90972E92490A36CFBC0DC4AD6ACA1B48(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void AsyncLoadIconTexture(struct TSoftObjectPtr<UPaperSprite> IconTexture); // Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.AsyncLoadIconTexture(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void DelayDestroy(float Delay); // Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.DelayDestroy(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void AsyncLoadIconObject(struct TSoftObjectPtr<Object> IconObject); // Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.AsyncLoadIconObject(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void AsyncLoadStatIcon(struct TSoftObjectPtr<Object> IconObject); // Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.AsyncLoadStatIcon(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void Construct(); // Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void HideHoverBP(); // Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.HideHoverBP(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void CheckHoverVisibility(); // Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.CheckHoverVisibility(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void AsyncLoadMaterialIcon(struct TSoftObjectPtr<Object> IconObject); // Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.AsyncLoadMaterialIcon(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void ExecuteUbergraph_UW-Inventory_ItemSlotHover(int32_t EntryPoint); // Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.ExecuteUbergraph_UW-Inventory_ItemSlotHover(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
};

// Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.GetDisplayAccuracy
inline float UUW-Inventory_ItemSlotHover_C::GetDisplayAccuracy() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.GetDisplayAccuracy");

	struct GetDisplayAccuracy_Params {
		
		float ReturnValue;

	}; GetDisplayAccuracy_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.GetDisplayDamage
inline float UUW-Inventory_ItemSlotHover_C::GetDisplayDamage() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.GetDisplayDamage");

	struct GetDisplayDamage_Params {
		
		float ReturnValue;

	}; GetDisplayDamage_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.GetDisplayEffectiveRange
inline int32_t UUW-Inventory_ItemSlotHover_C::GetDisplayEffectiveRange() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.GetDisplayEffectiveRange");

	struct GetDisplayEffectiveRange_Params {
		
		int32_t ReturnValue;

	}; GetDisplayEffectiveRange_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.GetDisplayLevel
inline int32_t UUW-Inventory_ItemSlotHover_C::GetDisplayLevel() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.GetDisplayLevel");

	struct GetDisplayLevel_Params {
		
		int32_t ReturnValue;

	}; GetDisplayLevel_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.GetDisplayMagSize
inline int32_t UUW-Inventory_ItemSlotHover_C::GetDisplayMagSize() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.GetDisplayMagSize");

	struct GetDisplayMagSize_Params {
		
		int32_t ReturnValue;

	}; GetDisplayMagSize_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.GetDisplayRateofFire
inline int32_t UUW-Inventory_ItemSlotHover_C::GetDisplayRateofFire() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.GetDisplayRateofFire");

	struct GetDisplayRateofFire_Params {
		
		int32_t ReturnValue;

	}; GetDisplayRateofFire_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.GetCurrentClassSpecialWeaponPerkData
inline void UUW-Inventory_ItemSlotHover_C::GetCurrentClassSpecialWeaponPerkData(char& Find, struct FPerkData& OutPerkData) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.GetCurrentClassSpecialWeaponPerkData");

	struct GetCurrentClassSpecialWeaponPerkData_Params {
		char& Find;
		struct FPerkData& OutPerkData;
	}; GetCurrentClassSpecialWeaponPerkData_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Find = Params.Find;
	OutPerkData = Params.OutPerkData;

}

// Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.SetCurrentPerkWeaponInfoSlot
inline void UUW-Inventory_ItemSlotHover_C::SetCurrentPerkWeaponInfoSlot() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.SetCurrentPerkWeaponInfoSlot");

	struct SetCurrentPerkWeaponInfoSlot_Params {
		
	}; SetCurrentPerkWeaponInfoSlot_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.SetTooltipSlot
inline void UUW-Inventory_ItemSlotHover_C::SetTooltipSlot(enum class ItemWidgetDragType DragType, struct FText BuffInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.SetTooltipSlot");

	struct SetTooltipSlot_Params {
		enum class ItemWidgetDragType DragType;
		struct FText BuffInfo;
	}; SetTooltipSlot_Params Params;

	Params.DragType = DragType;
	Params.BuffInfo = BuffInfo;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.SetVisualMode
inline void UUW-Inventory_ItemSlotHover_C::SetVisualMode() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.SetVisualMode");

	struct SetVisualMode_Params {
		
	}; SetVisualMode_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.SetBuffSlot
inline void UUW-Inventory_ItemSlotHover_C::SetBuffSlot(enum class ItemWidgetDragType DragType, struct FBravoHotelBuffUIInfo BuffInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.SetBuffSlot");

	struct SetBuffSlot_Params {
		enum class ItemWidgetDragType DragType;
		struct FBravoHotelBuffUIInfo BuffInfo;
	}; SetBuffSlot_Params Params;

	Params.DragType = DragType;
	Params.BuffInfo = BuffInfo;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.SetOptionSlot
inline void UUW-Inventory_ItemSlotHover_C::SetOptionSlot(enum class ItemWidgetDragType DragType, struct FItemOption ItemOptionInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.SetOptionSlot");

	struct SetOptionSlot_Params {
		enum class ItemWidgetDragType DragType;
		struct FItemOption ItemOptionInfo;
	}; SetOptionSlot_Params Params;

	Params.DragType = DragType;
	Params.ItemOptionInfo = ItemOptionInfo;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.SetMaterialSlot
inline void UUW-Inventory_ItemSlotHover_C::SetMaterialSlot(enum class ItemWidgetDragType DragType, struct FItemMaterialData MaterialInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.SetMaterialSlot");

	struct SetMaterialSlot_Params {
		enum class ItemWidgetDragType DragType;
		struct FItemMaterialData MaterialInfo;
	}; SetMaterialSlot_Params Params;

	Params.DragType = DragType;
	Params.MaterialInfo = MaterialInfo;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.Hide
inline void UUW-Inventory_ItemSlotHover_C::Hide() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.Hide");

	struct Hide_Params {
		
	}; Hide_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.Show
inline void UUW-Inventory_ItemSlotHover_C::Show(struct UBravoHotelInventoryHoverWidget HoverWidget, char ShowItemDivideInfo, char IsRandomPerk, char& SUCCESS) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.Show");

	struct Show_Params {
		struct UBravoHotelInventoryHoverWidget HoverWidget;
		char ShowItemDivideInfo;
		char IsRandomPerk;
		char& SUCCESS;
	}; Show_Params Params;

	Params.HoverWidget = HoverWidget;
	Params.ShowItemDivideInfo = ShowItemDivideInfo;
	Params.IsRandomPerk = IsRandomPerk;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	SUCCESS = Params.SUCCESS;

}

// Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.Get Vertical Box Buff List 2 Visibility
inline enum class ESlateVisibility UUW-Inventory_ItemSlotHover_C::Get Vertical Box Buff List 2 Visibility() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.Get Vertical Box Buff List 2 Visibility");

	struct Get Vertical Box Buff List 2 Visibility_Params {
		
		enum class ESlateVisibility ReturnValue;

	}; Get Vertical Box Buff List 2 Visibility_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.Get Buff List 1 Visibility
inline enum class ESlateVisibility UUW-Inventory_ItemSlotHover_C::Get Buff List 1 Visibility() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.Get Buff List 1 Visibility");

	struct Get Buff List 1 Visibility_Params {
		
		enum class ESlateVisibility ReturnValue;

	}; Get Buff List 1 Visibility_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.Get Size Box Comparing Text Visibility
inline enum class ESlateVisibility UUW-Inventory_ItemSlotHover_C::Get Size Box Comparing Text Visibility() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.Get Size Box Comparing Text Visibility");

	struct Get Size Box Comparing Text Visibility_Params {
		
		enum class ESlateVisibility ReturnValue;

	}; Get Size Box Comparing Text Visibility_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.Get Vertical Box Combine Target Visibility
inline enum class ESlateVisibility UUW-Inventory_ItemSlotHover_C::Get Vertical Box Combine Target Visibility() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.Get Vertical Box Combine Target Visibility");

	struct Get Vertical Box Combine Target Visibility_Params {
		
		enum class ESlateVisibility ReturnValue;

	}; Get Vertical Box Combine Target Visibility_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.Get Item Slot- Description 1 Visibility
inline enum class ESlateVisibility UUW-Inventory_ItemSlotHover_C::Get Item Slot- Description 1 Visibility() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.Get Item Slot- Description 1 Visibility");

	struct Get Item Slot- Description 1 Visibility_Params {
		
		enum class ESlateVisibility ReturnValue;

	}; Get Item Slot- Description 1 Visibility_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.Get Visibility Item Divide
inline enum class ESlateVisibility UUW-Inventory_ItemSlotHover_C::Get Visibility Item Divide() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.Get Visibility Item Divide");

	struct Get Visibility Item Divide_Params {
		
		enum class ESlateVisibility ReturnValue;

	}; Get Visibility Item Divide_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.GetItemWeaponData
inline void UUW-Inventory_ItemSlotHover_C::GetItemWeaponData(struct FItemWeapon& ItemWeaponData) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.GetItemWeaponData");

	struct GetItemWeaponData_Params {
		struct FItemWeapon& ItemWeaponData;
	}; GetItemWeaponData_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	ItemWeaponData = Params.ItemWeaponData;

}

// Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.SetBuffList
inline void UUW-Inventory_ItemSlotHover_C::SetBuffList() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.SetBuffList");

	struct SetBuffList_Params {
		
	}; SetBuffList_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.Get Horizontal Box Weapon Binded Info Visibility
inline enum class ESlateVisibility UUW-Inventory_ItemSlotHover_C::Get Horizontal Box Weapon Binded Info Visibility() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.Get Horizontal Box Weapon Binded Info Visibility");

	struct Get Horizontal Box Weapon Binded Info Visibility_Params {
		
		enum class ESlateVisibility ReturnValue;

	}; Get Horizontal Box Weapon Binded Info Visibility_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.Get Image Weapon Lock Color And Opacity
inline struct FLinearColor UUW-Inventory_ItemSlotHover_C::Get Image Weapon Lock Color And Opacity() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.Get Image Weapon Lock Color And Opacity");

	struct Get Image Weapon Lock Color And Opacity_Params {
		
		struct FLinearColor ReturnValue;

	}; Get Image Weapon Lock Color And Opacity_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.Get Image Weapon Lock Visibility
inline enum class ESlateVisibility UUW-Inventory_ItemSlotHover_C::Get Image Weapon Lock Visibility() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.Get Image Weapon Lock Visibility");

	struct Get Image Weapon Lock Visibility_Params {
		
		enum class ESlateVisibility ReturnValue;

	}; Get Image Weapon Lock Visibility_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.SetStatSlot
inline void UUW-Inventory_ItemSlotHover_C::SetStatSlot(enum class EStatusType StatusType, int32_t Value, enum class ItemWidgetDragType DragType) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.SetStatSlot");

	struct SetStatSlot_Params {
		enum class EStatusType StatusType;
		int32_t Value;
		enum class ItemWidgetDragType DragType;
	}; SetStatSlot_Params Params;

	Params.StatusType = StatusType;
	Params.Value = Value;
	Params.DragType = DragType;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.Get_ItemBg_ColorAndOpacity
inline struct FLinearColor UUW-Inventory_ItemSlotHover_C::Get_ItemBg_ColorAndOpacity() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.Get_ItemBg_ColorAndOpacity");

	struct Get_ItemBg_ColorAndOpacity_Params {
		
		struct FLinearColor ReturnValue;

	}; Get_ItemBg_ColorAndOpacity_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.Get Perk BG Color And Opacity
inline struct FLinearColor UUW-Inventory_ItemSlotHover_C::Get Perk BG Color And Opacity() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.Get Perk BG Color And Opacity");

	struct Get Perk BG Color And Opacity_Params {
		
		struct FLinearColor ReturnValue;

	}; Get Perk BG Color And Opacity_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.Get_ItemBg_01_ColorAndOpacity
inline struct FLinearColor UUW-Inventory_ItemSlotHover_C::Get_ItemBg_01_ColorAndOpacity() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.Get_ItemBg_01_ColorAndOpacity");

	struct Get_ItemBg_01_ColorAndOpacity_Params {
		
		struct FLinearColor ReturnValue;

	}; Get_ItemBg_01_ColorAndOpacity_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.SetUltimatePerkDesc
inline void UUW-Inventory_ItemSlotHover_C::SetUltimatePerkDesc() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.SetUltimatePerkDesc");

	struct SetUltimatePerkDesc_Params {
		
	}; SetUltimatePerkDesc_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.GetSlotColor
inline struct FLinearColor UUW-Inventory_ItemSlotHover_C::GetSlotColor() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.GetSlotColor");

	struct GetSlotColor_Params {
		
		struct FLinearColor ReturnValue;

	}; GetSlotColor_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.Get Perk Name Color And Opacity
inline struct FSlateColor UUW-Inventory_ItemSlotHover_C::Get Perk Name Color And Opacity() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.Get Perk Name Color And Opacity");

	struct Get Perk Name Color And Opacity_Params {
		
		struct FSlateColor ReturnValue;

	}; Get Perk Name Color And Opacity_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.Get Unlock Ultimate Level Visibility
inline enum class ESlateVisibility UUW-Inventory_ItemSlotHover_C::Get Unlock Ultimate Level Visibility() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.Get Unlock Ultimate Level Visibility");

	struct Get Unlock Ultimate Level Visibility_Params {
		
		enum class ESlateVisibility ReturnValue;

	}; Get Unlock Ultimate Level Visibility_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.SetPerkDesc
inline void UUW-Inventory_ItemSlotHover_C::SetPerkDesc(int32_t Level) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.SetPerkDesc");

	struct SetPerkDesc_Params {
		int32_t Level;
	}; SetPerkDesc_Params Params;

	Params.Level = Level;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.SetPerksDesc
inline void UUW-Inventory_ItemSlotHover_C::SetPerksDesc() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.SetPerksDesc");

	struct SetPerksDesc_Params {
		
	}; SetPerksDesc_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.HideHover
inline void UUW-Inventory_ItemSlotHover_C::HideHover(enum class ItemWidgetDragType DragType, char Force) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.HideHover");

	struct HideHover_Params {
		enum class ItemWidgetDragType DragType;
		char Force;
	}; HideHover_Params Params;

	Params.DragType = DragType;
	Params.Force = Force;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.Get Perk Image Brush
inline struct FSlateBrush UUW-Inventory_ItemSlotHover_C::Get Perk Image Brush() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.Get Perk Image Brush");

	struct Get Perk Image Brush_Params {
		
		struct FSlateBrush ReturnValue;

	}; Get Perk Image Brush_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.Get Perk Name Text
inline struct FText UUW-Inventory_ItemSlotHover_C::Get Perk Name Text() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.Get Perk Name Text");

	struct Get Perk Name Text_Params {
		
		struct FText ReturnValue;

	}; Get Perk Name Text_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.SetPerkSlot
inline void UUW-Inventory_ItemSlotHover_C::SetPerkSlot(struct FPerkUIInfo NewPerkInfo, enum class ItemWidgetDragType DragType, char IsUltimatePerk) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.SetPerkSlot");

	struct SetPerkSlot_Params {
		struct FPerkUIInfo NewPerkInfo;
		enum class ItemWidgetDragType DragType;
		char IsUltimatePerk;
	}; SetPerkSlot_Params Params;

	Params.NewPerkInfo = NewPerkInfo;
	Params.DragType = DragType;
	Params.IsUltimatePerk = IsUltimatePerk;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.Get_WeaponItemCapacity_Text
inline struct FText UUW-Inventory_ItemSlotHover_C::Get_WeaponItemCapacity_Text() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.Get_WeaponItemCapacity_Text");

	struct Get_WeaponItemCapacity_Text_Params {
		
		struct FText ReturnValue;

	}; Get_WeaponItemCapacity_Text_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.Get_ItemSlot-Capacity_Text
inline struct FText UUW-Inventory_ItemSlotHover_C::Get_ItemSlot-Capacity_Text() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.Get_ItemSlot-Capacity_Text");

	struct Get_ItemSlot-Capacity_Text_Params {
		
		struct FText ReturnValue;

	}; Get_ItemSlot-Capacity_Text_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.GetItemType
inline void UUW-Inventory_ItemSlotHover_C::GetItemType(struct FText& ItemTypeText, struct UTexture2D& ItemTypeTexture) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.GetItemType");

	struct GetItemType_Params {
		struct FText& ItemTypeText;
		struct UTexture2D& ItemTypeTexture;
	}; GetItemType_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	ItemTypeText = Params.ItemTypeText;
	ItemTypeTexture = Params.ItemTypeTexture;

}

// Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.Get Item Slot- Item Type Text
inline struct FText UUW-Inventory_ItemSlotHover_C::Get Item Slot- Item Type Text() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.Get Item Slot- Item Type Text");

	struct Get Item Slot- Item Type Text_Params {
		
		struct FText ReturnValue;

	}; Get Item Slot- Item Type Text_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.Get Weapon Item Type Text
inline struct FText UUW-Inventory_ItemSlotHover_C::Get Weapon Item Type Text() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.Get Weapon Item Type Text");

	struct Get Weapon Item Type Text_Params {
		
		struct FText ReturnValue;

	}; Get Weapon Item Type Text_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.GetWeaponType
inline void UUW-Inventory_ItemSlotHover_C::GetWeaponType(enum class EWeaponType& WeaponType, struct FText& WeaponTypeText, struct UTexture2D& WeaponTypeTexture) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.GetWeaponType");

	struct GetWeaponType_Params {
		enum class EWeaponType& WeaponType;
		struct FText& WeaponTypeText;
		struct UTexture2D& WeaponTypeTexture;
	}; GetWeaponType_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	WeaponType = Params.WeaponType;
	WeaponTypeText = Params.WeaponTypeText;
	WeaponTypeTexture = Params.WeaponTypeTexture;

}

// Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.GetEquippedWeaponInfoByWeaponType
inline void UUW-Inventory_ItemSlotHover_C::GetEquippedWeaponInfoByWeaponType(enum class EWeaponType WeaponType, char& bResult, struct FBravoHotelWeaponInfo& WeaponInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.GetEquippedWeaponInfoByWeaponType");

	struct GetEquippedWeaponInfoByWeaponType_Params {
		enum class EWeaponType WeaponType;
		char& bResult;
		struct FBravoHotelWeaponInfo& WeaponInfo;
	}; GetEquippedWeaponInfoByWeaponType_Params Params;

	Params.WeaponType = WeaponType;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	bResult = Params.bResult;
	WeaponInfo = Params.WeaponInfo;

}

// Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.Get Weapon Item Comparing Name Text
inline struct FText UUW-Inventory_ItemSlotHover_C::Get Weapon Item Comparing Name Text() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.Get Weapon Item Comparing Name Text");

	struct Get Weapon Item Comparing Name Text_Params {
		
		struct FText ReturnValue;

	}; Get Weapon Item Comparing Name Text_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.Get Ammo Info Text
inline struct FText UUW-Inventory_ItemSlotHover_C::Get Ammo Info Text() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.Get Ammo Info Text");

	struct Get Ammo Info Text_Params {
		
		struct FText ReturnValue;

	}; Get Ammo Info Text_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.Get Ammo Icon Brush
inline struct FSlateBrush UUW-Inventory_ItemSlotHover_C::Get Ammo Icon Brush() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.Get Ammo Icon Brush");

	struct Get Ammo Icon Brush_Params {
		
		struct FSlateBrush ReturnValue;

	}; Get Ammo Icon Brush_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.GetCompareAmmo
inline void UUW-Inventory_ItemSlotHover_C::GetCompareAmmo(struct FSlateColor& SlateColor, struct FText& valueText) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.GetCompareAmmo");

	struct GetCompareAmmo_Params {
		struct FSlateColor& SlateColor;
		struct FText& valueText;
	}; GetCompareAmmo_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	SlateColor = Params.SlateColor;
	valueText = Params.valueText;

}

// Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.GetCompareFiringRate
inline void UUW-Inventory_ItemSlotHover_C::GetCompareFiringRate(struct FSlateColor& SlateColor, struct FText& valueText) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.GetCompareFiringRate");

	struct GetCompareFiringRate_Params {
		struct FSlateColor& SlateColor;
		struct FText& valueText;
	}; GetCompareFiringRate_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	SlateColor = Params.SlateColor;
	valueText = Params.valueText;

}

// Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.GetCompareStabillity
inline void UUW-Inventory_ItemSlotHover_C::GetCompareStabillity(struct FSlateColor& SlateColor, struct FText& valueText) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.GetCompareStabillity");

	struct GetCompareStabillity_Params {
		struct FSlateColor& SlateColor;
		struct FText& valueText;
	}; GetCompareStabillity_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	SlateColor = Params.SlateColor;
	valueText = Params.valueText;

}

// Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.GetCompareEffectiveRange
inline void UUW-Inventory_ItemSlotHover_C::GetCompareEffectiveRange(struct FSlateColor& SlateColor, struct FText& valueText) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.GetCompareEffectiveRange");

	struct GetCompareEffectiveRange_Params {
		struct FSlateColor& SlateColor;
		struct FText& valueText;
	}; GetCompareEffectiveRange_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	SlateColor = Params.SlateColor;
	valueText = Params.valueText;

}

// Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.GetComparePower
inline void UUW-Inventory_ItemSlotHover_C::GetComparePower(struct FSlateColor& SlateColor, struct FText& valueText) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.GetComparePower");

	struct GetComparePower_Params {
		struct FSlateColor& SlateColor;
		struct FText& valueText;
	}; GetComparePower_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	SlateColor = Params.SlateColor;
	valueText = Params.valueText;

}

// Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.Get Ammo Value Text
inline struct FText UUW-Inventory_ItemSlotHover_C::Get Ammo Value Text() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.Get Ammo Value Text");

	struct Get Ammo Value Text_Params {
		
		struct FText ReturnValue;

	}; Get Ammo Value Text_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.Get Firing Rate Value Text
inline struct FText UUW-Inventory_ItemSlotHover_C::Get Firing Rate Value Text() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.Get Firing Rate Value Text");

	struct Get Firing Rate Value Text_Params {
		
		struct FText ReturnValue;

	}; Get Firing Rate Value Text_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.Get Stability Value Text
inline struct FText UUW-Inventory_ItemSlotHover_C::Get Stability Value Text() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.Get Stability Value Text");

	struct Get Stability Value Text_Params {
		
		struct FText ReturnValue;

	}; Get Stability Value Text_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.Get Effective Range Value Text
inline struct FText UUW-Inventory_ItemSlotHover_C::Get Effective Range Value Text() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.Get Effective Range Value Text");

	struct Get Effective Range Value Text_Params {
		
		struct FText ReturnValue;

	}; Get Effective Range Value Text_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.Get Power Value Text
inline struct FText UUW-Inventory_ItemSlotHover_C::Get Power Value Text() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.Get Power Value Text");

	struct Get Power Value Text_Params {
		
		struct FText ReturnValue;

	}; Get Power Value Text_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.IsWeaponTooltip
inline void UUW-Inventory_ItemSlotHover_C::IsWeaponTooltip(char& bResult) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.IsWeaponTooltip");

	struct IsWeaponTooltip_Params {
		char& bResult;
	}; IsWeaponTooltip_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	bResult = Params.bResult;

}

// Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.IsItemTooltip
inline void UUW-Inventory_ItemSlotHover_C::IsItemTooltip(char& bResult) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.IsItemTooltip");

	struct IsItemTooltip_Params {
		char& bResult;
	}; IsItemTooltip_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	bResult = Params.bResult;

}

// Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.GetHoverCanvas
inline void UUW-Inventory_ItemSlotHover_C::GetHoverCanvas(struct UCanvasPanel& CanvasPanel, char& bResult) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.GetHoverCanvas");

	struct GetHoverCanvas_Params {
		struct UCanvasPanel& CanvasPanel;
		char& bResult;
	}; GetHoverCanvas_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	CanvasPanel = Params.CanvasPanel;
	bResult = Params.bResult;

}

// Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.SetWeaponItemSlot
inline void UUW-Inventory_ItemSlotHover_C::SetWeaponItemSlot(struct FBravoHotelWeaponInfo WeaponItemInfo, struct FInventoryItemInfo InventoryItemInfo, enum class ItemWidgetDragType DragType, struct FName Ammo) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.SetWeaponItemSlot");

	struct SetWeaponItemSlot_Params {
		struct FBravoHotelWeaponInfo WeaponItemInfo;
		struct FInventoryItemInfo InventoryItemInfo;
		enum class ItemWidgetDragType DragType;
		struct FName Ammo;
	}; SetWeaponItemSlot_Params Params;

	Params.WeaponItemInfo = WeaponItemInfo;
	Params.InventoryItemInfo = InventoryItemInfo;
	Params.DragType = DragType;
	Params.Ammo = Ammo;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.Get Weapon Item Slot- Description Text
inline struct FText UUW-Inventory_ItemSlotHover_C::Get Weapon Item Slot- Description Text() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.Get Weapon Item Slot- Description Text");

	struct Get Weapon Item Slot- Description Text_Params {
		
		struct FText ReturnValue;

	}; Get Weapon Item Slot- Description Text_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.Get Weapon Item Slot- Item Image Brush
inline struct FSlateBrush UUW-Inventory_ItemSlotHover_C::Get Weapon Item Slot- Item Image Brush() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.Get Weapon Item Slot- Item Image Brush");

	struct Get Weapon Item Slot- Item Image Brush_Params {
		
		struct FSlateBrush ReturnValue;

	}; Get Weapon Item Slot- Item Image Brush_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.Get Weapon Item Slot- Item Name Text
inline struct FText UUW-Inventory_ItemSlotHover_C::Get Weapon Item Slot- Item Name Text() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.Get Weapon Item Slot- Item Name Text");

	struct Get Weapon Item Slot- Item Name Text_Params {
		
		struct FText ReturnValue;

	}; Get Weapon Item Slot- Item Name Text_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.SetItemSlotInfo
inline void UUW-Inventory_ItemSlotHover_C::SetItemSlotInfo(struct FInventoryItemInfo InventoryItem, enum class ItemWidgetDragType DragType) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.SetItemSlotInfo");

	struct SetItemSlotInfo_Params {
		struct FInventoryItemInfo InventoryItem;
		enum class ItemWidgetDragType DragType;
	}; SetItemSlotInfo_Params Params;

	Params.InventoryItem = InventoryItem;
	Params.DragType = DragType;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.Show Hover
inline void UUW-Inventory_ItemSlotHover_C::Show Hover(struct UWidget HoveredWidget, struct UUserWidget ShowingWidgetRef, char& SUCCESS) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.Show Hover");

	struct Show Hover_Params {
		struct UWidget HoveredWidget;
		struct UUserWidget ShowingWidgetRef;
		char& SUCCESS;
	}; Show Hover_Params Params;

	Params.HoveredWidget = HoveredWidget;
	Params.ShowingWidgetRef = ShowingWidgetRef;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	SUCCESS = Params.SUCCESS;

}

// Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.GetWeight
inline struct FText UUW-Inventory_ItemSlotHover_C::GetWeight() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.GetWeight");

	struct GetWeight_Params {
		
		struct FText ReturnValue;

	}; GetWeight_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.GetDescription
inline struct FText UUW-Inventory_ItemSlotHover_C::GetDescription() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.GetDescription");

	struct GetDescription_Params {
		
		struct FText ReturnValue;

	}; GetDescription_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.GetItemImage
inline struct FSlateBrush UUW-Inventory_ItemSlotHover_C::GetItemImage() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.GetItemImage");

	struct GetItemImage_Params {
		
		struct FSlateBrush ReturnValue;

	}; GetItemImage_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.GetName
inline struct FText UUW-Inventory_ItemSlotHover_C::GetName() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.GetName");

	struct GetName_Params {
		
		struct FText ReturnValue;

	}; GetName_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.OnLoaded_5CB0A85D41BD4B88F0EAB29CA9DBDD0F
inline void UUW-Inventory_ItemSlotHover_C::OnLoaded_5CB0A85D41BD4B88F0EAB29CA9DBDD0F(struct Object Loaded) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.OnLoaded_5CB0A85D41BD4B88F0EAB29CA9DBDD0F");

	struct OnLoaded_5CB0A85D41BD4B88F0EAB29CA9DBDD0F_Params {
		struct Object Loaded;
	}; OnLoaded_5CB0A85D41BD4B88F0EAB29CA9DBDD0F_Params Params;

	Params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.OnLoaded_A317A42643FCC3E3348F00AF47100D7C
inline void UUW-Inventory_ItemSlotHover_C::OnLoaded_A317A42643FCC3E3348F00AF47100D7C(struct Object Loaded) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.OnLoaded_A317A42643FCC3E3348F00AF47100D7C");

	struct OnLoaded_A317A42643FCC3E3348F00AF47100D7C_Params {
		struct Object Loaded;
	}; OnLoaded_A317A42643FCC3E3348F00AF47100D7C_Params Params;

	Params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.OnLoaded_BF365972409319D445BAF88D964EE916
inline void UUW-Inventory_ItemSlotHover_C::OnLoaded_BF365972409319D445BAF88D964EE916(struct Object Loaded) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.OnLoaded_BF365972409319D445BAF88D964EE916");

	struct OnLoaded_BF365972409319D445BAF88D964EE916_Params {
		struct Object Loaded;
	}; OnLoaded_BF365972409319D445BAF88D964EE916_Params Params;

	Params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.OnLoaded_90972E92490A36CFBC0DC4AD6ACA1B48
inline void UUW-Inventory_ItemSlotHover_C::OnLoaded_90972E92490A36CFBC0DC4AD6ACA1B48(struct Object Loaded) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.OnLoaded_90972E92490A36CFBC0DC4AD6ACA1B48");

	struct OnLoaded_90972E92490A36CFBC0DC4AD6ACA1B48_Params {
		struct Object Loaded;
	}; OnLoaded_90972E92490A36CFBC0DC4AD6ACA1B48_Params Params;

	Params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.AsyncLoadIconTexture
inline void UUW-Inventory_ItemSlotHover_C::AsyncLoadIconTexture(struct TSoftObjectPtr<UPaperSprite> IconTexture) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.AsyncLoadIconTexture");

	struct AsyncLoadIconTexture_Params {
		struct TSoftObjectPtr<UPaperSprite> IconTexture;
	}; AsyncLoadIconTexture_Params Params;

	Params.IconTexture = IconTexture;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.DelayDestroy
inline void UUW-Inventory_ItemSlotHover_C::DelayDestroy(float Delay) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.DelayDestroy");

	struct DelayDestroy_Params {
		float Delay;
	}; DelayDestroy_Params Params;

	Params.Delay = Delay;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.AsyncLoadIconObject
inline void UUW-Inventory_ItemSlotHover_C::AsyncLoadIconObject(struct TSoftObjectPtr<Object> IconObject) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.AsyncLoadIconObject");

	struct AsyncLoadIconObject_Params {
		struct TSoftObjectPtr<Object> IconObject;
	}; AsyncLoadIconObject_Params Params;

	Params.IconObject = IconObject;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.AsyncLoadStatIcon
inline void UUW-Inventory_ItemSlotHover_C::AsyncLoadStatIcon(struct TSoftObjectPtr<Object> IconObject) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.AsyncLoadStatIcon");

	struct AsyncLoadStatIcon_Params {
		struct TSoftObjectPtr<Object> IconObject;
	}; AsyncLoadStatIcon_Params Params;

	Params.IconObject = IconObject;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.Construct
inline void UUW-Inventory_ItemSlotHover_C::Construct() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.Construct");

	struct Construct_Params {
		
	}; Construct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.HideHoverBP
inline void UUW-Inventory_ItemSlotHover_C::HideHoverBP() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.HideHoverBP");

	struct HideHoverBP_Params {
		
	}; HideHoverBP_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.CheckHoverVisibility
inline void UUW-Inventory_ItemSlotHover_C::CheckHoverVisibility() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.CheckHoverVisibility");

	struct CheckHoverVisibility_Params {
		
	}; CheckHoverVisibility_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.AsyncLoadMaterialIcon
inline void UUW-Inventory_ItemSlotHover_C::AsyncLoadMaterialIcon(struct TSoftObjectPtr<Object> IconObject) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.AsyncLoadMaterialIcon");

	struct AsyncLoadMaterialIcon_Params {
		struct TSoftObjectPtr<Object> IconObject;
	}; AsyncLoadMaterialIcon_Params Params;

	Params.IconObject = IconObject;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.ExecuteUbergraph_UW-Inventory_ItemSlotHover
inline void UUW-Inventory_ItemSlotHover_C::ExecuteUbergraph_UW-Inventory_ItemSlotHover(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_ItemSlotHover.UW-Inventory_ItemSlotHover_C.ExecuteUbergraph_UW-Inventory_ItemSlotHover");

	struct ExecuteUbergraph_UW-Inventory_ItemSlotHover_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_UW-Inventory_ItemSlotHover_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

