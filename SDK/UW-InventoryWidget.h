// WidgetBlueprintGeneratedClass UW-InventoryWidget.UW-InventoryWidget_C
class UUW-InventoryWidget_C : public UBravoHotelInventoryWidget {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288 (8)
	struct UWidgetAnimation FadeIn; // 0x290 (8)
	struct UBackgroundBlur BackgroundBlur_1; // 0x298 (8)
	struct UCanvasPanel BackPackBound_begin; // 0x2A0 (8)
	struct UCanvasPanel BackPackBound_end; // 0x2A8 (8)
	struct UOverlay BlackMarketOverlay; // 0x2B0 (8)
	struct UButton BTN-BlackMarket; // 0x2B8 (8)
	struct UButton Button_SortByTime; // 0x2C0 (8)
	struct UButton Button_SortByType; // 0x2C8 (8)
	struct UCanvasPanel CanvasPanel_1; // 0x2D0 (8)
	struct UCanvasPanel CanvasPanel_7; // 0x2D8 (8)
	struct UCanvasPanel CanvasPanel_16; // 0x2E0 (8)
	struct UImage Carried_Area; // 0x2E8 (8)
	struct UCanvasPanel CarriedBound_begin; // 0x2F0 (8)
	struct UCanvasPanel CarriedBound_end; // 0x2F8 (8)
	struct UUW-Inventory_Carried_C CarriedList; // 0x300 (8)
	struct UUW-Inventory_Carried_C CarriedList_StrongBox; // 0x308 (8)
	struct UCheckBox CheckBox; // 0x310 (8)
	struct UCheckBox CheckBox_1; // 0x318 (8)
	struct UCheckBox CheckBox_2; // 0x320 (8)
	struct UCanvasPanel CombineRecipe; // 0x328 (8)
	struct UUW-Inventory_Equipped_C EquippedList; // 0x330 (8)
	struct UHorizontalBox HorizontalBox; // 0x338 (8)
	struct UHorizontalBox HorizontalBox_7; // 0x340 (8)
	struct UHorizontalBox HorizontalBox_ShowCharacter; // 0x348 (8)
	struct UHorizontalBox HorizontalBox_WeightMax; // 0x350 (8)
	struct UImage Image; // 0x358 (8)
	struct UImage Image_2; // 0x360 (8)
	struct UImage Image_3; // 0x368 (8)
	struct UImage Image_5; // 0x370 (8)
	struct UImage Image_6; // 0x378 (8)
	struct UImage Image_7; // 0x380 (8)
	struct UImage Image_8; // 0x388 (8)
	struct UImage Image_9; // 0x390 (8)
	struct UImage Image_10; // 0x398 (8)
	struct UImage Image_223; // 0x3A0 (8)
	struct UImage Image_227; // 0x3A8 (8)
	struct UImage Image_271; // 0x3B0 (8)
	struct UImage Image_324; // 0x3B8 (8)
	struct UImage Image_489; // 0x3C0 (8)
	struct UImage Image_556; // 0x3C8 (8)
	struct UImage Image_Guess; // 0x3D0 (8)
	struct UImage Image_ItemInfo; // 0x3D8 (8)
	struct UImage IMG-BG; // 0x3E0 (8)
	struct UImage IMG-BlackMarketBorder; // 0x3E8 (8)
	struct UImage InputMaskImage; // 0x3F0 (8)
	struct UImage Material_Area; // 0x3F8 (8)
	struct UCanvasPanel MaterialBound_begin; // 0x400 (8)
	struct UCanvasPanel MaterialBound_end; // 0x408 (8)
	struct UProgressBar ProgressBar_MaxWeight; // 0x410 (8)
	struct UProgressBar ProgressBar_Weight; // 0x418 (8)
	struct UProgressBar ProgressBar_WeightBag; // 0x420 (8)
	struct UCanvasPanel ProximityBound; // 0x428 (8)
	struct UUW-Inventory_Proximity_C ProximityList; // 0x430 (8)
	struct UImage StrongBox_Area; // 0x438 (8)
	struct UTextBlock T_AdditionalMaxWeight; // 0x440 (8)
	struct UTextBlock T_AdditionalMaxWeightSymbol; // 0x448 (8)
	struct UTextBlock T_AdditionalWeight; // 0x450 (8)
	struct UTextBlock T_AdditionalWeightSymbol; // 0x458 (8)
	struct UTextBlock T_MaxWeight; // 0x460 (8)
	struct UTextBlock T_StrongboxCount; // 0x468 (8)
	struct UTextBlock T_Weight; // 0x470 (8)
	struct UTextBlock T_WeightSlash; // 0x478 (8)
	struct UTextBlock TextBlock_11; // 0x480 (8)
	struct UTextBlock TextBlock_CurrentGold; // 0x488 (8)
	struct UTextBlock TextBlock_SortByTime; // 0x490 (8)
	struct UTextBlock TextBlock_SortByType; // 0x498 (8)
	struct UUW-Inventory_FreeSupplyToolTip_C UW-Inventory_FreeSupplyToolTip; // 0x4A0 (8)
	struct UUW-Inventory_ItemInfoTooltip_C UW-Inventory_ItemInfoTooltip; // 0x4A8 (8)
	struct UUW-Inventory_Keeped_C UW-Inventory_Keeped; // 0x4B0 (8)
	struct UUW-Inventory_Material_C UW-Inventory_Material; // 0x4B8 (8)
	struct UUW-Inventory_Recipe_C UW-Inventory_Recipe; // 0x4C0 (8)
	struct UUW-SearchingMaterial_C UW-SearchingMaterial; // 0x4C8 (8)
	struct UCanvasPanel WeaponBound; // 0x4D0 (8)
	struct UUW-Inventory_Weapon_C WeaponList; // 0x4D8 (8)
	struct UTextBlock WeightPerCent; // 0x4E0 (8)
	struct ABP-BravoHotel-PlayerController_C PlayerController; // 0x4E8 (8)
	char bItemDrag : 0; // 0x4F0 (1)
	struct UUW-ItemDropPopup_C DropPopup; // 0x4F8 (8)
	float MaximumWeight; // 0x500 (4)
	int32_t OldProximityItemCount; // 0x504 (4)
	struct UUW-Inventory_ProximityBoxSlot_C ProximityGround; // 0x508 (8)
	struct ABP-DefaultPawn_C DefaultPawnRef; // 0x510 (8)
	struct TArray<struct UUW-Inventory_ProximitySlot_C> ProximityGroundPool; // 0x518 (16)
	struct ABP-DefaultPawn_C OldDefaultPawnRef; // 0x528 (8)
	struct FTimerHandle CharacterTimerHandle; // 0x530 (8)
	struct TArray<struct FDropBoxInfo> DropBoxWidgetList; // 0x538 (16)
	struct Object DropBoxParentWidget; // 0x548 (8)
	struct UBP-SavedInventorySettings_C SavedInventorySettings; // 0x550 (8)
	struct ABravoHotelWeaponBase EquipedWeapon; // 0x558 (8)
	struct TArray<struct ABravoHotelWeaponBase> OldWeaponList; // 0x560 (16)
	char ChangeAttachments : 0; // 0x570 (1)
	struct UUW-Inventory_ItemSlotHover_C ItemHoverWidget; // 0x578 (8)
	struct UBravoHotelMainWidget MainWidget; // 0x580 (8)
	struct FMulticastInlineDelegate EventDispatcher_OnCloseInventory; // 0x588 (16)
	struct TArray<struct UUW-Inventory_ProximityBoxSlot_C> StealableWidgetList; // 0x598 (16)
	char bItemInfoHovered : 0; // 0x5A8 (1)
	char bFirstTimeNotifyItemInfo : 0; // 0x5A9 (1)
	struct FTimerHandle Timer_ItemInfoTooltip; // 0x5B0 (8)
	char IsShowingItemInfoTooltip : 0; // 0x5B8 (1)
	int32_t FirstTimeCapsuleItem; // 0x5BC (4)
	int32_t FirstTimeCraft; // 0x5C0 (4)
	char bGoldWarning : 0; // 0x5C4 (1)
	struct FSlateColor DefaultWeightColor; // 0x5C8 (40)
	struct FSlateColor MinusWeightColor; // 0x5F0 (40)
	struct FSlateColor PlusWeightColor; // 0x618 (40)

	void CheckFreeSupplyBox(struct ABravoHotelDropBoxActor DropBoxActor); // Function UW-InventoryWidget.UW-InventoryWidget_C.CheckFreeSupplyBox(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void UpdateProximityDropboxWidget(); // Function UW-InventoryWidget.UW-InventoryWidget_C.UpdateProximityDropboxWidget(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void UpdateProximityGroundWidget(); // Function UW-InventoryWidget.UW-InventoryWidget_C.UpdateProximityGroundWidget(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void UpdateProximityWidgets(); // Function UW-InventoryWidget.UW-InventoryWidget_C.UpdateProximityWidgets(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void AllHiddenGroundWidget(); // Function UW-InventoryWidget.UW-InventoryWidget_C.AllHiddenGroundWidget(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void AllHiddenMaterialWidget(); // Function UW-InventoryWidget.UW-InventoryWidget_C.AllHiddenMaterialWidget(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void ResetAllSlotScrollToStart(); // Function UW-InventoryWidget.UW-InventoryWidget_C.ResetAllSlotScrollToStart(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void SetWeightText(struct UTextBlock& WeightTextRef, struct UTextBlock& SymbolTextRef, float Weight); // Function UW-InventoryWidget.UW-InventoryWidget_C.SetWeightText(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void ResetAllHoverEffect(); // Function UW-InventoryWidget.UW-InventoryWidget_C.ResetAllHoverEffect(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void HoverRecipeByItem(struct FName ItemKey); // Function UW-InventoryWidget.UW-InventoryWidget_C.HoverRecipeByItem(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void CheckEndFirstTimeValues(); // Function UW-InventoryWidget.UW-InventoryWidget_C.CheckEndFirstTimeValues(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void CheckFirstTimeCraft(char& Return); // Function UW-InventoryWidget.UW-InventoryWidget_C.CheckFirstTimeCraft(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void CheckFirstTimeCapsuleItem(char& Return); // Function UW-InventoryWidget.UW-InventoryWidget_C.CheckFirstTimeCapsuleItem(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void CheckAnyEquippableAttachmentEmptySlot(struct FInventoryItemInfo& NewAttachmentItemInfo, char& IsEmpty); // Function UW-InventoryWidget.UW-InventoryWidget_C.CheckAnyEquippableAttachmentEmptySlot(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void HideItemArea(); // Function UW-InventoryWidget.UW-InventoryWidget_C.HideItemArea(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void ShowItemArea(struct FInventoryItemInfo& ItemInfo, char CanEquip); // Function UW-InventoryWidget.UW-InventoryWidget_C.ShowItemArea(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void CheckItemInfoHovered(); // Function UW-InventoryWidget.UW-InventoryWidget_C.CheckItemInfoHovered(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void GetCarriedSlotItems(struct TArray<struct UWidget>& Items); // Function UW-InventoryWidget.UW-InventoryWidget_C.GetCarriedSlotItems(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void IsInCarriedBound(char& State); // Function UW-InventoryWidget.UW-InventoryWidget_C.IsInCarriedBound(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void IsInBound(struct FVector2D Begin, struct FVector2D End, char& State); // Function UW-InventoryWidget.UW-InventoryWidget_C.IsInBound(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void IsInMaterialBound(char& State); // Function UW-InventoryWidget.UW-InventoryWidget_C.IsInMaterialBound(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void IsInBackPackBound(char& State); // Function UW-InventoryWidget.UW-InventoryWidget_C.IsInBackPackBound(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void CheckCompleteItems(); // Function UW-InventoryWidget.UW-InventoryWidget_C.CheckCompleteItems(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void HoverResetMaterial(); // Function UW-InventoryWidget.UW-InventoryWidget_C.HoverResetMaterial(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void HoverRecipe(struct FName RecipeKey); // Function UW-InventoryWidget.UW-InventoryWidget_C.HoverRecipe(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void AllHiddenRecipeWidget(); // Function UW-InventoryWidget.UW-InventoryWidget_C.AllHiddenRecipeWidget(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void IsMaterialItem(struct FInventoryItemInfo InventoryItemInfo, char& out_Result); // Function UW-InventoryWidget.UW-InventoryWidget_C.IsMaterialItem(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void ShowItemDorpPopup(struct UUW-Inventory_SlotBase_C BaseSlot, struct UUW-Inventory_MaterialSlot_C MaterialSlot, char& State); // Function UW-InventoryWidget.UW-InventoryWidget_C.ShowItemDorpPopup(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	char CheckMaterialBound(struct FVector2D DropPos, struct UDragDropOperation Operation); // Function UW-InventoryWidget.UW-InventoryWidget_C.CheckMaterialBound(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void UpdateRecipeItem(); // Function UW-InventoryWidget.UW-InventoryWidget_C.UpdateRecipeItem(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void UpdateMaterialItem(); // Function UW-InventoryWidget.UW-InventoryWidget_C.UpdateMaterialItem(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	enum class ESlateVisibility Get_CombineRecipe_Visibility_1(); // Function UW-InventoryWidget.UW-InventoryWidget_C.Get_CombineRecipe_Visibility_1(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void SetVisibleInventoryCharacter(char bVisible); // Function UW-InventoryWidget.UW-InventoryWidget_C.SetVisibleInventoryCharacter(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void SetStealable(); // Function UW-InventoryWidget.UW-InventoryWidget_C.SetStealable(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	enum class ESlateVisibility Get_IMG-BG_Visibility_1(); // Function UW-InventoryWidget.UW-InventoryWidget_C.Get_IMG-BG_Visibility_1(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void HoverResetKeepedSlot(); // Function UW-InventoryWidget.UW-InventoryWidget_C.HoverResetKeepedSlot(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void HoverKeepedSlot(struct FInventoryItemInfo InventoryItemInfo); // Function UW-InventoryWidget.UW-InventoryWidget_C.HoverKeepedSlot(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void SetKeepedItem(); // Function UW-InventoryWidget.UW-InventoryWidget_C.SetKeepedItem(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void GetMainWidget(struct UBravoHotelMainWidget& MainWidget); // Function UW-InventoryWidget.UW-InventoryWidget_C.GetMainWidget(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void CheckPreViewWeapon(char& State); // Function UW-InventoryWidget.UW-InventoryWidget_C.CheckPreViewWeapon(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void DropBoxCompareQuantity(struct TArray<struct FInventoryItemInfo>& InventoryItemInfo, struct FDropBoxInfo DropBoxInfo, char& SlotUpdate); // Function UW-InventoryWidget.UW-InventoryWidget_C.DropBoxCompareQuantity(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void CheckBoxState(char State, struct UCheckBox CheckBox); // Function UW-InventoryWidget.UW-InventoryWidget_C.CheckBoxState(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	struct FText Get_TextBlock_CurrentGold_Text_1(); // Function UW-InventoryWidget.UW-InventoryWidget_C.Get_TextBlock_CurrentGold_Text_1(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void RemoveDropBoxItem(struct ABravoHotelDropBoxActor Actor, struct FDropBoxSlotInfo Slot); // Function UW-InventoryWidget.UW-InventoryWidget_C.RemoveDropBoxItem(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void AddDropBoxItem(struct FDropBoxSlotInfo SlotInfo, struct ABravoHotelDropBoxActor Actor); // Function UW-InventoryWidget.UW-InventoryWidget_C.AddDropBoxItem(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void FindDropBox(struct ABravoHotelDropBoxActor Actor, struct FDropBoxInfo& DropBox, char& State); // Function UW-InventoryWidget.UW-InventoryWidget_C.FindDropBox(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void UpdateDropBoxItem(struct ABravoHotelDropBoxActor Actor); // Function UW-InventoryWidget.UW-InventoryWidget_C.UpdateDropBoxItem(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void SetPerkBoxIcon(); // Function UW-InventoryWidget.UW-InventoryWidget_C.SetPerkBoxIcon(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	char IsShowingDropPopup(); // Function UW-InventoryWidget.UW-InventoryWidget_C.IsShowingDropPopup(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void CheckDefaultPawn(char& NewDefaultPawn); // Function UW-InventoryWidget.UW-InventoryWidget_C.CheckDefaultPawn(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void UpdateCarriedSlotInfo(); // Function UW-InventoryWidget.UW-InventoryWidget_C.UpdateCarriedSlotInfo(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void AllHiddenCarriedWidget(); // Function UW-InventoryWidget.UW-InventoryWidget_C.AllHiddenCarriedWidget(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void UpdateProximityGroundSlotInfo(); // Function UW-InventoryWidget.UW-InventoryWidget_C.UpdateProximityGroundSlotInfo(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void UpdateProximityGroundWidget2(); // Function UW-InventoryWidget.UW-InventoryWidget_C.UpdateProximityGroundWidget2(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void AddProximityGroundPool(); // Function UW-InventoryWidget.UW-InventoryWidget_C.AddProximityGroundPool(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void InitProximityGroundPool(); // Function UW-InventoryWidget.UW-InventoryWidget_C.InitProximityGroundPool(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void SetChracterVisible(char State); // Function UW-InventoryWidget.UW-InventoryWidget_C.SetChracterVisible(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	char OnDragOver(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation Operation); // Function UW-InventoryWidget.UW-InventoryWidget_C.OnDragOver(BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void CheckWeaponBound(struct FVector2D DropPos, struct UDragDropOperation Operation); // Function UW-InventoryWidget.UW-InventoryWidget_C.CheckWeaponBound(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	char CheckCarriedBound(struct FVector2D DropPos, struct UDragDropOperation Operation); // Function UW-InventoryWidget.UW-InventoryWidget_C.CheckCarriedBound(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void CheckProximityBound(struct FVector2D DropPos, struct UDragDropOperation Operation); // Function UW-InventoryWidget.UW-InventoryWidget_C.CheckProximityBound(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	enum class ESlateVisibility ShowBlackMarketButton(); // Function UW-InventoryWidget.UW-InventoryWidget_C.ShowBlackMarketButton(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void UpdateWeaponMesh(struct ABravoHotelWeaponBase NewWeapon, int32_t SlotIndex); // Function UW-InventoryWidget.UW-InventoryWidget_C.UpdateWeaponMesh(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void GetWearbleItemInfo(enum class EWearableItemType WearableType, char& bHas, struct FInventoryItemInfo& ItemInfo, struct FInventoryItemDetailInfo& ItemDetailInfo); // Function UW-InventoryWidget.UW-InventoryWidget_C.GetWearbleItemInfo(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void CalcItemWeight(char IsAddOrRemove, struct FInventoryItemInfo ItemInfo); // Function UW-InventoryWidget.UW-InventoryWidget_C.CalcItemWeight(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void SetWeightPlus(float WeightPlus, float MaxWeightPlus); // Function UW-InventoryWidget.UW-InventoryWidget_C.SetWeightPlus(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void SetWeightProgress(); // Function UW-InventoryWidget.UW-InventoryWidget_C.SetWeightProgress(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void ResetDragWeaponAttachmentItemFromCarriedSlot(); // Function UW-InventoryWidget.UW-InventoryWidget_C.ResetDragWeaponAttachmentItemFromCarriedSlot(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void SetDragWeaponAttachmentItemFromCarriedSlot(struct FInventoryItemInfo InventoryItemInfo); // Function UW-InventoryWidget.UW-InventoryWidget_C.SetDragWeaponAttachmentItemFromCarriedSlot(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void SetDragWeaponAttachmentSlot(struct FInventoryItemInfo InventoryItemInfo); // Function UW-InventoryWidget.UW-InventoryWidget_C.SetDragWeaponAttachmentSlot(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void GetInventoryItemDetailInfo(struct FInventoryItemInfo InventoryItemInfo, struct FInventoryItemDetailInfo& InventoryItemDetailInfo, char& bResult); // Function UW-InventoryWidget.UW-InventoryWidget_C.GetInventoryItemDetailInfo(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void SetDragCarriedSlot(struct FInventoryItemInfo InventoryItemInfo); // Function UW-InventoryWidget.UW-InventoryWidget_C.SetDragCarriedSlot(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void SetDragWeaponSlot(struct FBravoHotelWeaponInfo WeaponInfo); // Function UW-InventoryWidget.UW-InventoryWidget_C.SetDragWeaponSlot(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void ResetDragWeaponItemFromCarriedSlot(); // Function UW-InventoryWidget.UW-InventoryWidget_C.ResetDragWeaponItemFromCarriedSlot(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void SetDragWeaponItemFromCarriedSlot(struct FInventoryItemInfo InventoryItemInfo); // Function UW-InventoryWidget.UW-InventoryWidget_C.SetDragWeaponItemFromCarriedSlot(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void ResetDragWeaponItemFromEquippedSlot(); // Function UW-InventoryWidget.UW-InventoryWidget_C.ResetDragWeaponItemFromEquippedSlot(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void SetDragWeaponItemFromEquippedSlot(struct FInventoryItemInfo InventoryItemInfo); // Function UW-InventoryWidget.UW-InventoryWidget_C.SetDragWeaponItemFromEquippedSlot(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void SetDragProximitySlot(struct FInventoryItemInfo InventoryItemInfo); // Function UW-InventoryWidget.UW-InventoryWidget_C.SetDragProximitySlot(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void HoverResetCarriedSlotList(); // Function UW-InventoryWidget.UW-InventoryWidget_C.HoverResetCarriedSlotList(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void HoverResetEquipSlot(); // Function UW-InventoryWidget.UW-InventoryWidget_C.HoverResetEquipSlot(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void HoverResetAttachItemSlotList(); // Function UW-InventoryWidget.UW-InventoryWidget_C.HoverResetAttachItemSlotList(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void HoverResetWeaponSlotList(); // Function UW-InventoryWidget.UW-InventoryWidget_C.HoverResetWeaponSlotList(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void HoverAttachItemSlot(struct FInventoryItemInfo InventoryItemInfo); // Function UW-InventoryWidget.UW-InventoryWidget_C.HoverAttachItemSlot(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void HoverWeaponSlot(struct FInventoryItemInfo InventoryItemInfo); // Function UW-InventoryWidget.UW-InventoryWidget_C.HoverWeaponSlot(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void SetItemDrag(char bDrag); // Function UW-InventoryWidget.UW-InventoryWidget_C.SetItemDrag(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void IsItemDrag(char& bResult); // Function UW-InventoryWidget.UW-InventoryWidget_C.IsItemDrag(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void ResetDrag(); // Function UW-InventoryWidget.UW-InventoryWidget_C.ResetDrag(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UW-InventoryWidget.UW-InventoryWidget_C.OnMouseButtonDown(BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	enum class ESlateVisibility Get_InputMaskImage_Visibility_1(); // Function UW-InventoryWidget.UW-InventoryWidget_C.Get_InputMaskImage_Visibility_1(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void EnableInventory(); // Function UW-InventoryWidget.UW-InventoryWidget_C.EnableInventory(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void DisableInventory(); // Function UW-InventoryWidget.UW-InventoryWidget_C.DisableInventory(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void EnableCarriedSlotList(); // Function UW-InventoryWidget.UW-InventoryWidget_C.EnableCarriedSlotList(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void DisableCarriedSlotList(); // Function UW-InventoryWidget.UW-InventoryWidget_C.DisableCarriedSlotList(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void HoverCarriedSlotList(struct FInventoryItemInfo InventoryItemInfo); // Function UW-InventoryWidget.UW-InventoryWidget_C.HoverCarriedSlotList(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void GetCharacter(char& Result, struct ABP-DefaultPawn_C& CharacterRef); // Function UW-InventoryWidget.UW-InventoryWidget_C.GetCharacter(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void GetInventoryComponent(char& Result, struct UPlayerInventoryComponent& InventoryComponent); // Function UW-InventoryWidget.UW-InventoryWidget_C.GetInventoryComponent(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void HoverEquipSlot(struct FInventoryItemInfo InventoryItemInfo); // Function UW-InventoryWidget.UW-InventoryWidget_C.HoverEquipSlot(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	float Get_WeightProgess_Percent_1(); // Function UW-InventoryWidget.UW-InventoryWidget_C.Get_WeightProgess_Percent_1(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	struct FText Get_WeightPerCent_Text_1(); // Function UW-InventoryWidget.UW-InventoryWidget_C.Get_WeightPerCent_Text_1(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void ResetHover(struct FInventoryItemInfo InventoryItemInfo, char& bResult); // Function UW-InventoryWidget.UW-InventoryWidget_C.ResetHover(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void IsCarriable(struct FInventoryItemInfo InventoryItemInfo, char& out_Result, char& InStrongbox); // Function UW-InventoryWidget.UW-InventoryWidget_C.IsCarriable(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	char OnDrop(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation Operation); // Function UW-InventoryWidget.UW-InventoryWidget_C.OnDrop(BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void BndEvt__Button_SortByTime_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function UW-InventoryWidget.UW-InventoryWidget_C.BndEvt__Button_SortByTime_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void BndEvt__Button_SortByType_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function UW-InventoryWidget.UW-InventoryWidget_C.BndEvt__Button_SortByType_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UW-InventoryWidget.UW-InventoryWidget_C.Tick(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void BndEvt__CheckBox_0_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature(char bIsChecked); // Function UW-InventoryWidget.UW-InventoryWidget_C.BndEvt__CheckBox_0_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void BndEvt__BTN-BlackMarket_K2Node_ComponentBoundEvent_87_OnButtonClickedEvent__DelegateSignature(); // Function UW-InventoryWidget.UW-InventoryWidget_C.BndEvt__BTN-BlackMarket_K2Node_ComponentBoundEvent_87_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void CharacterVisible_Event(); // Function UW-InventoryWidget.UW-InventoryWidget_C.CharacterVisible_Event(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void Open(); // Function UW-InventoryWidget.UW-InventoryWidget_C.Open(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void Close(); // Function UW-InventoryWidget.UW-InventoryWidget_C.Close(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void CloseDropPopup(); // Function UW-InventoryWidget.UW-InventoryWidget_C.CloseDropPopup(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void AcceptDropPopup(); // Function UW-InventoryWidget.UW-InventoryWidget_C.AcceptDropPopup(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void WeaponAmmoDelegate_Event_1(int32_t SlotIdx, int32_t CurAmmo, int32_t MaxAmmo); // Function UW-InventoryWidget.UW-InventoryWidget_C.WeaponAmmoDelegate_Event_1(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void SetPreview(); // Function UW-InventoryWidget.UW-InventoryWidget_C.SetPreview(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void NotifyNewWeapon(); // Function UW-InventoryWidget.UW-InventoryWidget_C.NotifyNewWeapon(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void ShowInventoryCharacter(char IsShow); // Function UW-InventoryWidget.UW-InventoryWidget_C.ShowInventoryCharacter(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void BndEvt__CheckBox_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature(char bIsChecked); // Function UW-InventoryWidget.UW-InventoryWidget_C.BndEvt__CheckBox_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void DelayCheckCompleteItems(); // Function UW-InventoryWidget.UW-InventoryWidget_C.DelayCheckCompleteItems(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void ShowFirstTimeItemInfoTooltip(); // Function UW-InventoryWidget.UW-InventoryWidget_C.ShowFirstTimeItemInfoTooltip(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void BndEvt__CheckBox_1_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature(char bIsChecked); // Function UW-InventoryWidget.UW-InventoryWidget_C.BndEvt__CheckBox_1_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void ShowStatupAnim(struct FStatupAnimParameters& StatupParameters, enum class EStatupAnimType StatupType); // Function UW-InventoryWidget.UW-InventoryWidget_C.ShowStatupAnim(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void UpdateSearchMaterialItem(); // Function UW-InventoryWidget.UW-InventoryWidget_C.UpdateSearchMaterialItem(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void UpdateSearchExpertWeaponMaterialItem(); // Function UW-InventoryWidget.UW-InventoryWidget_C.UpdateSearchExpertWeaponMaterialItem(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void K2_ResetInventoryScroll(); // Function UW-InventoryWidget.UW-InventoryWidget_C.K2_ResetInventoryScroll(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void Construct(); // Function UW-InventoryWidget.UW-InventoryWidget_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void SetWeaponItems(); // Function UW-InventoryWidget.UW-InventoryWidget_C.SetWeaponItems(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void SetEquippedItems(); // Function UW-InventoryWidget.UW-InventoryWidget_C.SetEquippedItems(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void SetProximityItems(char bResetDrag); // Function UW-InventoryWidget.UW-InventoryWidget_C.SetProximityItems(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void SetCarriedItems(); // Function UW-InventoryWidget.UW-InventoryWidget_C.SetCarriedItems(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void NotEnoughSpaceDelegate_Event_1(); // Function UW-InventoryWidget.UW-InventoryWidget_C.NotEnoughSpaceDelegate_Event_1(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void OnRefreshWeightProgress(); // Function UW-InventoryWidget.UW-InventoryWidget_C.OnRefreshWeightProgress(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void OnChangeMaterial(); // Function UW-InventoryWidget.UW-InventoryWidget_C.OnChangeMaterial(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void OnChangeWeapon(); // Function UW-InventoryWidget.UW-InventoryWidget_C.OnChangeWeapon(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void OnChangeDetectedItems(); // Function UW-InventoryWidget.UW-InventoryWidget_C.OnChangeDetectedItems(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void OnChangeWeaponAttachment(); // Function UW-InventoryWidget.UW-InventoryWidget_C.OnChangeWeaponAttachment(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void OnChangeWearableItem(); // Function UW-InventoryWidget.UW-InventoryWidget_C.OnChangeWearableItem(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void OnChangeBagpackItem(); // Function UW-InventoryWidget.UW-InventoryWidget_C.OnChangeBagpackItem(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void ExecuteUbergraph_UW-InventoryWidget(int32_t EntryPoint); // Function UW-InventoryWidget.UW-InventoryWidget_C.ExecuteUbergraph_UW-InventoryWidget(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void EventDispatcher_OnCloseInventory__DelegateSignature(); // Function UW-InventoryWidget.UW-InventoryWidget_C.EventDispatcher_OnCloseInventory__DelegateSignature(Public|Delegate|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
};

// Function UW-InventoryWidget.UW-InventoryWidget_C.CheckFreeSupplyBox
inline void UUW-InventoryWidget_C::CheckFreeSupplyBox(struct ABravoHotelDropBoxActor DropBoxActor) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InventoryWidget.UW-InventoryWidget_C.CheckFreeSupplyBox");

	struct CheckFreeSupplyBox_Params {
		struct ABravoHotelDropBoxActor DropBoxActor;
	}; CheckFreeSupplyBox_Params Params;

	Params.DropBoxActor = DropBoxActor;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-InventoryWidget.UW-InventoryWidget_C.UpdateProximityDropboxWidget
inline void UUW-InventoryWidget_C::UpdateProximityDropboxWidget() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InventoryWidget.UW-InventoryWidget_C.UpdateProximityDropboxWidget");

	struct UpdateProximityDropboxWidget_Params {
		
	}; UpdateProximityDropboxWidget_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-InventoryWidget.UW-InventoryWidget_C.UpdateProximityGroundWidget
inline void UUW-InventoryWidget_C::UpdateProximityGroundWidget() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InventoryWidget.UW-InventoryWidget_C.UpdateProximityGroundWidget");

	struct UpdateProximityGroundWidget_Params {
		
	}; UpdateProximityGroundWidget_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-InventoryWidget.UW-InventoryWidget_C.UpdateProximityWidgets
inline void UUW-InventoryWidget_C::UpdateProximityWidgets() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InventoryWidget.UW-InventoryWidget_C.UpdateProximityWidgets");

	struct UpdateProximityWidgets_Params {
		
	}; UpdateProximityWidgets_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-InventoryWidget.UW-InventoryWidget_C.AllHiddenGroundWidget
inline void UUW-InventoryWidget_C::AllHiddenGroundWidget() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InventoryWidget.UW-InventoryWidget_C.AllHiddenGroundWidget");

	struct AllHiddenGroundWidget_Params {
		
	}; AllHiddenGroundWidget_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-InventoryWidget.UW-InventoryWidget_C.AllHiddenMaterialWidget
inline void UUW-InventoryWidget_C::AllHiddenMaterialWidget() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InventoryWidget.UW-InventoryWidget_C.AllHiddenMaterialWidget");

	struct AllHiddenMaterialWidget_Params {
		
	}; AllHiddenMaterialWidget_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-InventoryWidget.UW-InventoryWidget_C.ResetAllSlotScrollToStart
inline void UUW-InventoryWidget_C::ResetAllSlotScrollToStart() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InventoryWidget.UW-InventoryWidget_C.ResetAllSlotScrollToStart");

	struct ResetAllSlotScrollToStart_Params {
		
	}; ResetAllSlotScrollToStart_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-InventoryWidget.UW-InventoryWidget_C.SetWeightText
inline void UUW-InventoryWidget_C::SetWeightText(struct UTextBlock& WeightTextRef, struct UTextBlock& SymbolTextRef, float Weight) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InventoryWidget.UW-InventoryWidget_C.SetWeightText");

	struct SetWeightText_Params {
		struct UTextBlock& WeightTextRef;
		struct UTextBlock& SymbolTextRef;
		float Weight;
	}; SetWeightText_Params Params;

	Params.Weight = Weight;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	WeightTextRef = Params.WeightTextRef;
	SymbolTextRef = Params.SymbolTextRef;

}

// Function UW-InventoryWidget.UW-InventoryWidget_C.ResetAllHoverEffect
inline void UUW-InventoryWidget_C::ResetAllHoverEffect() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InventoryWidget.UW-InventoryWidget_C.ResetAllHoverEffect");

	struct ResetAllHoverEffect_Params {
		
	}; ResetAllHoverEffect_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-InventoryWidget.UW-InventoryWidget_C.HoverRecipeByItem
inline void UUW-InventoryWidget_C::HoverRecipeByItem(struct FName ItemKey) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InventoryWidget.UW-InventoryWidget_C.HoverRecipeByItem");

	struct HoverRecipeByItem_Params {
		struct FName ItemKey;
	}; HoverRecipeByItem_Params Params;

	Params.ItemKey = ItemKey;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-InventoryWidget.UW-InventoryWidget_C.CheckEndFirstTimeValues
inline void UUW-InventoryWidget_C::CheckEndFirstTimeValues() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InventoryWidget.UW-InventoryWidget_C.CheckEndFirstTimeValues");

	struct CheckEndFirstTimeValues_Params {
		
	}; CheckEndFirstTimeValues_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-InventoryWidget.UW-InventoryWidget_C.CheckFirstTimeCraft
inline void UUW-InventoryWidget_C::CheckFirstTimeCraft(char& Return) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InventoryWidget.UW-InventoryWidget_C.CheckFirstTimeCraft");

	struct CheckFirstTimeCraft_Params {
		char& Return;
	}; CheckFirstTimeCraft_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Return = Params.Return;

}

// Function UW-InventoryWidget.UW-InventoryWidget_C.CheckFirstTimeCapsuleItem
inline void UUW-InventoryWidget_C::CheckFirstTimeCapsuleItem(char& Return) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InventoryWidget.UW-InventoryWidget_C.CheckFirstTimeCapsuleItem");

	struct CheckFirstTimeCapsuleItem_Params {
		char& Return;
	}; CheckFirstTimeCapsuleItem_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Return = Params.Return;

}

// Function UW-InventoryWidget.UW-InventoryWidget_C.CheckAnyEquippableAttachmentEmptySlot
inline void UUW-InventoryWidget_C::CheckAnyEquippableAttachmentEmptySlot(struct FInventoryItemInfo& NewAttachmentItemInfo, char& IsEmpty) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InventoryWidget.UW-InventoryWidget_C.CheckAnyEquippableAttachmentEmptySlot");

	struct CheckAnyEquippableAttachmentEmptySlot_Params {
		struct FInventoryItemInfo& NewAttachmentItemInfo;
		char& IsEmpty;
	}; CheckAnyEquippableAttachmentEmptySlot_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	NewAttachmentItemInfo = Params.NewAttachmentItemInfo;
	IsEmpty = Params.IsEmpty;

}

// Function UW-InventoryWidget.UW-InventoryWidget_C.HideItemArea
inline void UUW-InventoryWidget_C::HideItemArea() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InventoryWidget.UW-InventoryWidget_C.HideItemArea");

	struct HideItemArea_Params {
		
	}; HideItemArea_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-InventoryWidget.UW-InventoryWidget_C.ShowItemArea
inline void UUW-InventoryWidget_C::ShowItemArea(struct FInventoryItemInfo& ItemInfo, char CanEquip) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InventoryWidget.UW-InventoryWidget_C.ShowItemArea");

	struct ShowItemArea_Params {
		struct FInventoryItemInfo& ItemInfo;
		char CanEquip;
	}; ShowItemArea_Params Params;

	Params.CanEquip = CanEquip;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	ItemInfo = Params.ItemInfo;

}

// Function UW-InventoryWidget.UW-InventoryWidget_C.CheckItemInfoHovered
inline void UUW-InventoryWidget_C::CheckItemInfoHovered() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InventoryWidget.UW-InventoryWidget_C.CheckItemInfoHovered");

	struct CheckItemInfoHovered_Params {
		
	}; CheckItemInfoHovered_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-InventoryWidget.UW-InventoryWidget_C.GetCarriedSlotItems
inline void UUW-InventoryWidget_C::GetCarriedSlotItems(struct TArray<struct UWidget>& Items) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InventoryWidget.UW-InventoryWidget_C.GetCarriedSlotItems");

	struct GetCarriedSlotItems_Params {
		struct TArray<struct UWidget>& Items;
	}; GetCarriedSlotItems_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Items = Params.Items;

}

// Function UW-InventoryWidget.UW-InventoryWidget_C.IsInCarriedBound
inline void UUW-InventoryWidget_C::IsInCarriedBound(char& State) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InventoryWidget.UW-InventoryWidget_C.IsInCarriedBound");

	struct IsInCarriedBound_Params {
		char& State;
	}; IsInCarriedBound_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	State = Params.State;

}

// Function UW-InventoryWidget.UW-InventoryWidget_C.IsInBound
inline void UUW-InventoryWidget_C::IsInBound(struct FVector2D Begin, struct FVector2D End, char& State) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InventoryWidget.UW-InventoryWidget_C.IsInBound");

	struct IsInBound_Params {
		struct FVector2D Begin;
		struct FVector2D End;
		char& State;
	}; IsInBound_Params Params;

	Params.Begin = Begin;
	Params.End = End;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	State = Params.State;

}

// Function UW-InventoryWidget.UW-InventoryWidget_C.IsInMaterialBound
inline void UUW-InventoryWidget_C::IsInMaterialBound(char& State) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InventoryWidget.UW-InventoryWidget_C.IsInMaterialBound");

	struct IsInMaterialBound_Params {
		char& State;
	}; IsInMaterialBound_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	State = Params.State;

}

// Function UW-InventoryWidget.UW-InventoryWidget_C.IsInBackPackBound
inline void UUW-InventoryWidget_C::IsInBackPackBound(char& State) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InventoryWidget.UW-InventoryWidget_C.IsInBackPackBound");

	struct IsInBackPackBound_Params {
		char& State;
	}; IsInBackPackBound_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	State = Params.State;

}

// Function UW-InventoryWidget.UW-InventoryWidget_C.CheckCompleteItems
inline void UUW-InventoryWidget_C::CheckCompleteItems() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InventoryWidget.UW-InventoryWidget_C.CheckCompleteItems");

	struct CheckCompleteItems_Params {
		
	}; CheckCompleteItems_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-InventoryWidget.UW-InventoryWidget_C.HoverResetMaterial
inline void UUW-InventoryWidget_C::HoverResetMaterial() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InventoryWidget.UW-InventoryWidget_C.HoverResetMaterial");

	struct HoverResetMaterial_Params {
		
	}; HoverResetMaterial_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-InventoryWidget.UW-InventoryWidget_C.HoverRecipe
inline void UUW-InventoryWidget_C::HoverRecipe(struct FName RecipeKey) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InventoryWidget.UW-InventoryWidget_C.HoverRecipe");

	struct HoverRecipe_Params {
		struct FName RecipeKey;
	}; HoverRecipe_Params Params;

	Params.RecipeKey = RecipeKey;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-InventoryWidget.UW-InventoryWidget_C.AllHiddenRecipeWidget
inline void UUW-InventoryWidget_C::AllHiddenRecipeWidget() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InventoryWidget.UW-InventoryWidget_C.AllHiddenRecipeWidget");

	struct AllHiddenRecipeWidget_Params {
		
	}; AllHiddenRecipeWidget_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-InventoryWidget.UW-InventoryWidget_C.IsMaterialItem
inline void UUW-InventoryWidget_C::IsMaterialItem(struct FInventoryItemInfo InventoryItemInfo, char& out_Result) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InventoryWidget.UW-InventoryWidget_C.IsMaterialItem");

	struct IsMaterialItem_Params {
		struct FInventoryItemInfo InventoryItemInfo;
		char& out_Result;
	}; IsMaterialItem_Params Params;

	Params.InventoryItemInfo = InventoryItemInfo;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	out_Result = Params.out_Result;

}

// Function UW-InventoryWidget.UW-InventoryWidget_C.ShowItemDorpPopup
inline void UUW-InventoryWidget_C::ShowItemDorpPopup(struct UUW-Inventory_SlotBase_C BaseSlot, struct UUW-Inventory_MaterialSlot_C MaterialSlot, char& State) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InventoryWidget.UW-InventoryWidget_C.ShowItemDorpPopup");

	struct ShowItemDorpPopup_Params {
		struct UUW-Inventory_SlotBase_C BaseSlot;
		struct UUW-Inventory_MaterialSlot_C MaterialSlot;
		char& State;
	}; ShowItemDorpPopup_Params Params;

	Params.BaseSlot = BaseSlot;
	Params.MaterialSlot = MaterialSlot;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	State = Params.State;

}

// Function UW-InventoryWidget.UW-InventoryWidget_C.CheckMaterialBound
inline char UUW-InventoryWidget_C::CheckMaterialBound(struct FVector2D DropPos, struct UDragDropOperation Operation) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InventoryWidget.UW-InventoryWidget_C.CheckMaterialBound");

	struct CheckMaterialBound_Params {
		struct FVector2D DropPos;
		struct UDragDropOperation Operation;
		char ReturnValue;

	}; CheckMaterialBound_Params Params;

	Params.DropPos = DropPos;
	Params.Operation = Operation;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UW-InventoryWidget.UW-InventoryWidget_C.UpdateRecipeItem
inline void UUW-InventoryWidget_C::UpdateRecipeItem() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InventoryWidget.UW-InventoryWidget_C.UpdateRecipeItem");

	struct UpdateRecipeItem_Params {
		
	}; UpdateRecipeItem_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-InventoryWidget.UW-InventoryWidget_C.UpdateMaterialItem
inline void UUW-InventoryWidget_C::UpdateMaterialItem() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InventoryWidget.UW-InventoryWidget_C.UpdateMaterialItem");

	struct UpdateMaterialItem_Params {
		
	}; UpdateMaterialItem_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-InventoryWidget.UW-InventoryWidget_C.Get_CombineRecipe_Visibility_1
inline enum class ESlateVisibility UUW-InventoryWidget_C::Get_CombineRecipe_Visibility_1() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InventoryWidget.UW-InventoryWidget_C.Get_CombineRecipe_Visibility_1");

	struct Get_CombineRecipe_Visibility_1_Params {
		
		enum class ESlateVisibility ReturnValue;

	}; Get_CombineRecipe_Visibility_1_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UW-InventoryWidget.UW-InventoryWidget_C.SetVisibleInventoryCharacter
inline void UUW-InventoryWidget_C::SetVisibleInventoryCharacter(char bVisible) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InventoryWidget.UW-InventoryWidget_C.SetVisibleInventoryCharacter");

	struct SetVisibleInventoryCharacter_Params {
		char bVisible;
	}; SetVisibleInventoryCharacter_Params Params;

	Params.bVisible = bVisible;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-InventoryWidget.UW-InventoryWidget_C.SetStealable
inline void UUW-InventoryWidget_C::SetStealable() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InventoryWidget.UW-InventoryWidget_C.SetStealable");

	struct SetStealable_Params {
		
	}; SetStealable_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-InventoryWidget.UW-InventoryWidget_C.Get_IMG-BG_Visibility_1
inline enum class ESlateVisibility UUW-InventoryWidget_C::Get_IMG-BG_Visibility_1() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InventoryWidget.UW-InventoryWidget_C.Get_IMG-BG_Visibility_1");

	struct Get_IMG-BG_Visibility_1_Params {
		
		enum class ESlateVisibility ReturnValue;

	}; Get_IMG-BG_Visibility_1_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UW-InventoryWidget.UW-InventoryWidget_C.HoverResetKeepedSlot
inline void UUW-InventoryWidget_C::HoverResetKeepedSlot() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InventoryWidget.UW-InventoryWidget_C.HoverResetKeepedSlot");

	struct HoverResetKeepedSlot_Params {
		
	}; HoverResetKeepedSlot_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-InventoryWidget.UW-InventoryWidget_C.HoverKeepedSlot
inline void UUW-InventoryWidget_C::HoverKeepedSlot(struct FInventoryItemInfo InventoryItemInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InventoryWidget.UW-InventoryWidget_C.HoverKeepedSlot");

	struct HoverKeepedSlot_Params {
		struct FInventoryItemInfo InventoryItemInfo;
	}; HoverKeepedSlot_Params Params;

	Params.InventoryItemInfo = InventoryItemInfo;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-InventoryWidget.UW-InventoryWidget_C.SetKeepedItem
inline void UUW-InventoryWidget_C::SetKeepedItem() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InventoryWidget.UW-InventoryWidget_C.SetKeepedItem");

	struct SetKeepedItem_Params {
		
	}; SetKeepedItem_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-InventoryWidget.UW-InventoryWidget_C.GetMainWidget
inline void UUW-InventoryWidget_C::GetMainWidget(struct UBravoHotelMainWidget& MainWidget) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InventoryWidget.UW-InventoryWidget_C.GetMainWidget");

	struct GetMainWidget_Params {
		struct UBravoHotelMainWidget& MainWidget;
	}; GetMainWidget_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	MainWidget = Params.MainWidget;

}

// Function UW-InventoryWidget.UW-InventoryWidget_C.CheckPreViewWeapon
inline void UUW-InventoryWidget_C::CheckPreViewWeapon(char& State) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InventoryWidget.UW-InventoryWidget_C.CheckPreViewWeapon");

	struct CheckPreViewWeapon_Params {
		char& State;
	}; CheckPreViewWeapon_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	State = Params.State;

}

// Function UW-InventoryWidget.UW-InventoryWidget_C.DropBoxCompareQuantity
inline void UUW-InventoryWidget_C::DropBoxCompareQuantity(struct TArray<struct FInventoryItemInfo>& InventoryItemInfo, struct FDropBoxInfo DropBoxInfo, char& SlotUpdate) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InventoryWidget.UW-InventoryWidget_C.DropBoxCompareQuantity");

	struct DropBoxCompareQuantity_Params {
		struct TArray<struct FInventoryItemInfo>& InventoryItemInfo;
		struct FDropBoxInfo DropBoxInfo;
		char& SlotUpdate;
	}; DropBoxCompareQuantity_Params Params;

	Params.DropBoxInfo = DropBoxInfo;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	InventoryItemInfo = Params.InventoryItemInfo;
	SlotUpdate = Params.SlotUpdate;

}

// Function UW-InventoryWidget.UW-InventoryWidget_C.CheckBoxState
inline void UUW-InventoryWidget_C::CheckBoxState(char State, struct UCheckBox CheckBox) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InventoryWidget.UW-InventoryWidget_C.CheckBoxState");

	struct CheckBoxState_Params {
		char State;
		struct UCheckBox CheckBox;
	}; CheckBoxState_Params Params;

	Params.State = State;
	Params.CheckBox = CheckBox;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-InventoryWidget.UW-InventoryWidget_C.Get_TextBlock_CurrentGold_Text_1
inline struct FText UUW-InventoryWidget_C::Get_TextBlock_CurrentGold_Text_1() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InventoryWidget.UW-InventoryWidget_C.Get_TextBlock_CurrentGold_Text_1");

	struct Get_TextBlock_CurrentGold_Text_1_Params {
		
		struct FText ReturnValue;

	}; Get_TextBlock_CurrentGold_Text_1_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UW-InventoryWidget.UW-InventoryWidget_C.RemoveDropBoxItem
inline void UUW-InventoryWidget_C::RemoveDropBoxItem(struct ABravoHotelDropBoxActor Actor, struct FDropBoxSlotInfo Slot) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InventoryWidget.UW-InventoryWidget_C.RemoveDropBoxItem");

	struct RemoveDropBoxItem_Params {
		struct ABravoHotelDropBoxActor Actor;
		struct FDropBoxSlotInfo Slot;
	}; RemoveDropBoxItem_Params Params;

	Params.Actor = Actor;
	Params.Slot = Slot;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-InventoryWidget.UW-InventoryWidget_C.AddDropBoxItem
inline void UUW-InventoryWidget_C::AddDropBoxItem(struct FDropBoxSlotInfo SlotInfo, struct ABravoHotelDropBoxActor Actor) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InventoryWidget.UW-InventoryWidget_C.AddDropBoxItem");

	struct AddDropBoxItem_Params {
		struct FDropBoxSlotInfo SlotInfo;
		struct ABravoHotelDropBoxActor Actor;
	}; AddDropBoxItem_Params Params;

	Params.SlotInfo = SlotInfo;
	Params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-InventoryWidget.UW-InventoryWidget_C.FindDropBox
inline void UUW-InventoryWidget_C::FindDropBox(struct ABravoHotelDropBoxActor Actor, struct FDropBoxInfo& DropBox, char& State) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InventoryWidget.UW-InventoryWidget_C.FindDropBox");

	struct FindDropBox_Params {
		struct ABravoHotelDropBoxActor Actor;
		struct FDropBoxInfo& DropBox;
		char& State;
	}; FindDropBox_Params Params;

	Params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	DropBox = Params.DropBox;
	State = Params.State;

}

// Function UW-InventoryWidget.UW-InventoryWidget_C.UpdateDropBoxItem
inline void UUW-InventoryWidget_C::UpdateDropBoxItem(struct ABravoHotelDropBoxActor Actor) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InventoryWidget.UW-InventoryWidget_C.UpdateDropBoxItem");

	struct UpdateDropBoxItem_Params {
		struct ABravoHotelDropBoxActor Actor;
	}; UpdateDropBoxItem_Params Params;

	Params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-InventoryWidget.UW-InventoryWidget_C.SetPerkBoxIcon
inline void UUW-InventoryWidget_C::SetPerkBoxIcon() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InventoryWidget.UW-InventoryWidget_C.SetPerkBoxIcon");

	struct SetPerkBoxIcon_Params {
		
	}; SetPerkBoxIcon_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-InventoryWidget.UW-InventoryWidget_C.IsShowingDropPopup
inline char UUW-InventoryWidget_C::IsShowingDropPopup() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InventoryWidget.UW-InventoryWidget_C.IsShowingDropPopup");

	struct IsShowingDropPopup_Params {
		
		char ReturnValue;

	}; IsShowingDropPopup_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UW-InventoryWidget.UW-InventoryWidget_C.CheckDefaultPawn
inline void UUW-InventoryWidget_C::CheckDefaultPawn(char& NewDefaultPawn) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InventoryWidget.UW-InventoryWidget_C.CheckDefaultPawn");

	struct CheckDefaultPawn_Params {
		char& NewDefaultPawn;
	}; CheckDefaultPawn_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	NewDefaultPawn = Params.NewDefaultPawn;

}

// Function UW-InventoryWidget.UW-InventoryWidget_C.UpdateCarriedSlotInfo
inline void UUW-InventoryWidget_C::UpdateCarriedSlotInfo() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InventoryWidget.UW-InventoryWidget_C.UpdateCarriedSlotInfo");

	struct UpdateCarriedSlotInfo_Params {
		
	}; UpdateCarriedSlotInfo_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-InventoryWidget.UW-InventoryWidget_C.AllHiddenCarriedWidget
inline void UUW-InventoryWidget_C::AllHiddenCarriedWidget() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InventoryWidget.UW-InventoryWidget_C.AllHiddenCarriedWidget");

	struct AllHiddenCarriedWidget_Params {
		
	}; AllHiddenCarriedWidget_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-InventoryWidget.UW-InventoryWidget_C.UpdateProximityGroundSlotInfo
inline void UUW-InventoryWidget_C::UpdateProximityGroundSlotInfo() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InventoryWidget.UW-InventoryWidget_C.UpdateProximityGroundSlotInfo");

	struct UpdateProximityGroundSlotInfo_Params {
		
	}; UpdateProximityGroundSlotInfo_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-InventoryWidget.UW-InventoryWidget_C.UpdateProximityGroundWidget2
inline void UUW-InventoryWidget_C::UpdateProximityGroundWidget2() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InventoryWidget.UW-InventoryWidget_C.UpdateProximityGroundWidget2");

	struct UpdateProximityGroundWidget2_Params {
		
	}; UpdateProximityGroundWidget2_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-InventoryWidget.UW-InventoryWidget_C.AddProximityGroundPool
inline void UUW-InventoryWidget_C::AddProximityGroundPool() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InventoryWidget.UW-InventoryWidget_C.AddProximityGroundPool");

	struct AddProximityGroundPool_Params {
		
	}; AddProximityGroundPool_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-InventoryWidget.UW-InventoryWidget_C.InitProximityGroundPool
inline void UUW-InventoryWidget_C::InitProximityGroundPool() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InventoryWidget.UW-InventoryWidget_C.InitProximityGroundPool");

	struct InitProximityGroundPool_Params {
		
	}; InitProximityGroundPool_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-InventoryWidget.UW-InventoryWidget_C.SetChracterVisible
inline void UUW-InventoryWidget_C::SetChracterVisible(char State) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InventoryWidget.UW-InventoryWidget_C.SetChracterVisible");

	struct SetChracterVisible_Params {
		char State;
	}; SetChracterVisible_Params Params;

	Params.State = State;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-InventoryWidget.UW-InventoryWidget_C.OnDragOver
inline char UUW-InventoryWidget_C::OnDragOver(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation Operation) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InventoryWidget.UW-InventoryWidget_C.OnDragOver");

	struct OnDragOver_Params {
		struct FGeometry MyGeometry;
		struct FPointerEvent PointerEvent;
		struct UDragDropOperation Operation;
		char ReturnValue;

	}; OnDragOver_Params Params;

	Params.MyGeometry = MyGeometry;
	Params.PointerEvent = PointerEvent;
	Params.Operation = Operation;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UW-InventoryWidget.UW-InventoryWidget_C.CheckWeaponBound
inline void UUW-InventoryWidget_C::CheckWeaponBound(struct FVector2D DropPos, struct UDragDropOperation Operation) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InventoryWidget.UW-InventoryWidget_C.CheckWeaponBound");

	struct CheckWeaponBound_Params {
		struct FVector2D DropPos;
		struct UDragDropOperation Operation;
	}; CheckWeaponBound_Params Params;

	Params.DropPos = DropPos;
	Params.Operation = Operation;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-InventoryWidget.UW-InventoryWidget_C.CheckCarriedBound
inline char UUW-InventoryWidget_C::CheckCarriedBound(struct FVector2D DropPos, struct UDragDropOperation Operation) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InventoryWidget.UW-InventoryWidget_C.CheckCarriedBound");

	struct CheckCarriedBound_Params {
		struct FVector2D DropPos;
		struct UDragDropOperation Operation;
		char ReturnValue;

	}; CheckCarriedBound_Params Params;

	Params.DropPos = DropPos;
	Params.Operation = Operation;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UW-InventoryWidget.UW-InventoryWidget_C.CheckProximityBound
inline void UUW-InventoryWidget_C::CheckProximityBound(struct FVector2D DropPos, struct UDragDropOperation Operation) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InventoryWidget.UW-InventoryWidget_C.CheckProximityBound");

	struct CheckProximityBound_Params {
		struct FVector2D DropPos;
		struct UDragDropOperation Operation;
	}; CheckProximityBound_Params Params;

	Params.DropPos = DropPos;
	Params.Operation = Operation;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-InventoryWidget.UW-InventoryWidget_C.ShowBlackMarketButton
inline enum class ESlateVisibility UUW-InventoryWidget_C::ShowBlackMarketButton() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InventoryWidget.UW-InventoryWidget_C.ShowBlackMarketButton");

	struct ShowBlackMarketButton_Params {
		
		enum class ESlateVisibility ReturnValue;

	}; ShowBlackMarketButton_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UW-InventoryWidget.UW-InventoryWidget_C.UpdateWeaponMesh
inline void UUW-InventoryWidget_C::UpdateWeaponMesh(struct ABravoHotelWeaponBase NewWeapon, int32_t SlotIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InventoryWidget.UW-InventoryWidget_C.UpdateWeaponMesh");

	struct UpdateWeaponMesh_Params {
		struct ABravoHotelWeaponBase NewWeapon;
		int32_t SlotIndex;
	}; UpdateWeaponMesh_Params Params;

	Params.NewWeapon = NewWeapon;
	Params.SlotIndex = SlotIndex;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-InventoryWidget.UW-InventoryWidget_C.GetWearbleItemInfo
inline void UUW-InventoryWidget_C::GetWearbleItemInfo(enum class EWearableItemType WearableType, char& bHas, struct FInventoryItemInfo& ItemInfo, struct FInventoryItemDetailInfo& ItemDetailInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InventoryWidget.UW-InventoryWidget_C.GetWearbleItemInfo");

	struct GetWearbleItemInfo_Params {
		enum class EWearableItemType WearableType;
		char& bHas;
		struct FInventoryItemInfo& ItemInfo;
		struct FInventoryItemDetailInfo& ItemDetailInfo;
	}; GetWearbleItemInfo_Params Params;

	Params.WearableType = WearableType;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	bHas = Params.bHas;
	ItemInfo = Params.ItemInfo;
	ItemDetailInfo = Params.ItemDetailInfo;

}

// Function UW-InventoryWidget.UW-InventoryWidget_C.CalcItemWeight
inline void UUW-InventoryWidget_C::CalcItemWeight(char IsAddOrRemove, struct FInventoryItemInfo ItemInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InventoryWidget.UW-InventoryWidget_C.CalcItemWeight");

	struct CalcItemWeight_Params {
		char IsAddOrRemove;
		struct FInventoryItemInfo ItemInfo;
	}; CalcItemWeight_Params Params;

	Params.IsAddOrRemove = IsAddOrRemove;
	Params.ItemInfo = ItemInfo;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-InventoryWidget.UW-InventoryWidget_C.SetWeightPlus
inline void UUW-InventoryWidget_C::SetWeightPlus(float WeightPlus, float MaxWeightPlus) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InventoryWidget.UW-InventoryWidget_C.SetWeightPlus");

	struct SetWeightPlus_Params {
		float WeightPlus;
		float MaxWeightPlus;
	}; SetWeightPlus_Params Params;

	Params.WeightPlus = WeightPlus;
	Params.MaxWeightPlus = MaxWeightPlus;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-InventoryWidget.UW-InventoryWidget_C.SetWeightProgress
inline void UUW-InventoryWidget_C::SetWeightProgress() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InventoryWidget.UW-InventoryWidget_C.SetWeightProgress");

	struct SetWeightProgress_Params {
		
	}; SetWeightProgress_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-InventoryWidget.UW-InventoryWidget_C.ResetDragWeaponAttachmentItemFromCarriedSlot
inline void UUW-InventoryWidget_C::ResetDragWeaponAttachmentItemFromCarriedSlot() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InventoryWidget.UW-InventoryWidget_C.ResetDragWeaponAttachmentItemFromCarriedSlot");

	struct ResetDragWeaponAttachmentItemFromCarriedSlot_Params {
		
	}; ResetDragWeaponAttachmentItemFromCarriedSlot_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-InventoryWidget.UW-InventoryWidget_C.SetDragWeaponAttachmentItemFromCarriedSlot
inline void UUW-InventoryWidget_C::SetDragWeaponAttachmentItemFromCarriedSlot(struct FInventoryItemInfo InventoryItemInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InventoryWidget.UW-InventoryWidget_C.SetDragWeaponAttachmentItemFromCarriedSlot");

	struct SetDragWeaponAttachmentItemFromCarriedSlot_Params {
		struct FInventoryItemInfo InventoryItemInfo;
	}; SetDragWeaponAttachmentItemFromCarriedSlot_Params Params;

	Params.InventoryItemInfo = InventoryItemInfo;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-InventoryWidget.UW-InventoryWidget_C.SetDragWeaponAttachmentSlot
inline void UUW-InventoryWidget_C::SetDragWeaponAttachmentSlot(struct FInventoryItemInfo InventoryItemInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InventoryWidget.UW-InventoryWidget_C.SetDragWeaponAttachmentSlot");

	struct SetDragWeaponAttachmentSlot_Params {
		struct FInventoryItemInfo InventoryItemInfo;
	}; SetDragWeaponAttachmentSlot_Params Params;

	Params.InventoryItemInfo = InventoryItemInfo;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-InventoryWidget.UW-InventoryWidget_C.GetInventoryItemDetailInfo
inline void UUW-InventoryWidget_C::GetInventoryItemDetailInfo(struct FInventoryItemInfo InventoryItemInfo, struct FInventoryItemDetailInfo& InventoryItemDetailInfo, char& bResult) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InventoryWidget.UW-InventoryWidget_C.GetInventoryItemDetailInfo");

	struct GetInventoryItemDetailInfo_Params {
		struct FInventoryItemInfo InventoryItemInfo;
		struct FInventoryItemDetailInfo& InventoryItemDetailInfo;
		char& bResult;
	}; GetInventoryItemDetailInfo_Params Params;

	Params.InventoryItemInfo = InventoryItemInfo;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	InventoryItemDetailInfo = Params.InventoryItemDetailInfo;
	bResult = Params.bResult;

}

// Function UW-InventoryWidget.UW-InventoryWidget_C.SetDragCarriedSlot
inline void UUW-InventoryWidget_C::SetDragCarriedSlot(struct FInventoryItemInfo InventoryItemInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InventoryWidget.UW-InventoryWidget_C.SetDragCarriedSlot");

	struct SetDragCarriedSlot_Params {
		struct FInventoryItemInfo InventoryItemInfo;
	}; SetDragCarriedSlot_Params Params;

	Params.InventoryItemInfo = InventoryItemInfo;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-InventoryWidget.UW-InventoryWidget_C.SetDragWeaponSlot
inline void UUW-InventoryWidget_C::SetDragWeaponSlot(struct FBravoHotelWeaponInfo WeaponInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InventoryWidget.UW-InventoryWidget_C.SetDragWeaponSlot");

	struct SetDragWeaponSlot_Params {
		struct FBravoHotelWeaponInfo WeaponInfo;
	}; SetDragWeaponSlot_Params Params;

	Params.WeaponInfo = WeaponInfo;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-InventoryWidget.UW-InventoryWidget_C.ResetDragWeaponItemFromCarriedSlot
inline void UUW-InventoryWidget_C::ResetDragWeaponItemFromCarriedSlot() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InventoryWidget.UW-InventoryWidget_C.ResetDragWeaponItemFromCarriedSlot");

	struct ResetDragWeaponItemFromCarriedSlot_Params {
		
	}; ResetDragWeaponItemFromCarriedSlot_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-InventoryWidget.UW-InventoryWidget_C.SetDragWeaponItemFromCarriedSlot
inline void UUW-InventoryWidget_C::SetDragWeaponItemFromCarriedSlot(struct FInventoryItemInfo InventoryItemInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InventoryWidget.UW-InventoryWidget_C.SetDragWeaponItemFromCarriedSlot");

	struct SetDragWeaponItemFromCarriedSlot_Params {
		struct FInventoryItemInfo InventoryItemInfo;
	}; SetDragWeaponItemFromCarriedSlot_Params Params;

	Params.InventoryItemInfo = InventoryItemInfo;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-InventoryWidget.UW-InventoryWidget_C.ResetDragWeaponItemFromEquippedSlot
inline void UUW-InventoryWidget_C::ResetDragWeaponItemFromEquippedSlot() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InventoryWidget.UW-InventoryWidget_C.ResetDragWeaponItemFromEquippedSlot");

	struct ResetDragWeaponItemFromEquippedSlot_Params {
		
	}; ResetDragWeaponItemFromEquippedSlot_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-InventoryWidget.UW-InventoryWidget_C.SetDragWeaponItemFromEquippedSlot
inline void UUW-InventoryWidget_C::SetDragWeaponItemFromEquippedSlot(struct FInventoryItemInfo InventoryItemInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InventoryWidget.UW-InventoryWidget_C.SetDragWeaponItemFromEquippedSlot");

	struct SetDragWeaponItemFromEquippedSlot_Params {
		struct FInventoryItemInfo InventoryItemInfo;
	}; SetDragWeaponItemFromEquippedSlot_Params Params;

	Params.InventoryItemInfo = InventoryItemInfo;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-InventoryWidget.UW-InventoryWidget_C.SetDragProximitySlot
inline void UUW-InventoryWidget_C::SetDragProximitySlot(struct FInventoryItemInfo InventoryItemInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InventoryWidget.UW-InventoryWidget_C.SetDragProximitySlot");

	struct SetDragProximitySlot_Params {
		struct FInventoryItemInfo InventoryItemInfo;
	}; SetDragProximitySlot_Params Params;

	Params.InventoryItemInfo = InventoryItemInfo;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-InventoryWidget.UW-InventoryWidget_C.HoverResetCarriedSlotList
inline void UUW-InventoryWidget_C::HoverResetCarriedSlotList() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InventoryWidget.UW-InventoryWidget_C.HoverResetCarriedSlotList");

	struct HoverResetCarriedSlotList_Params {
		
	}; HoverResetCarriedSlotList_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-InventoryWidget.UW-InventoryWidget_C.HoverResetEquipSlot
inline void UUW-InventoryWidget_C::HoverResetEquipSlot() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InventoryWidget.UW-InventoryWidget_C.HoverResetEquipSlot");

	struct HoverResetEquipSlot_Params {
		
	}; HoverResetEquipSlot_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-InventoryWidget.UW-InventoryWidget_C.HoverResetAttachItemSlotList
inline void UUW-InventoryWidget_C::HoverResetAttachItemSlotList() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InventoryWidget.UW-InventoryWidget_C.HoverResetAttachItemSlotList");

	struct HoverResetAttachItemSlotList_Params {
		
	}; HoverResetAttachItemSlotList_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-InventoryWidget.UW-InventoryWidget_C.HoverResetWeaponSlotList
inline void UUW-InventoryWidget_C::HoverResetWeaponSlotList() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InventoryWidget.UW-InventoryWidget_C.HoverResetWeaponSlotList");

	struct HoverResetWeaponSlotList_Params {
		
	}; HoverResetWeaponSlotList_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-InventoryWidget.UW-InventoryWidget_C.HoverAttachItemSlot
inline void UUW-InventoryWidget_C::HoverAttachItemSlot(struct FInventoryItemInfo InventoryItemInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InventoryWidget.UW-InventoryWidget_C.HoverAttachItemSlot");

	struct HoverAttachItemSlot_Params {
		struct FInventoryItemInfo InventoryItemInfo;
	}; HoverAttachItemSlot_Params Params;

	Params.InventoryItemInfo = InventoryItemInfo;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-InventoryWidget.UW-InventoryWidget_C.HoverWeaponSlot
inline void UUW-InventoryWidget_C::HoverWeaponSlot(struct FInventoryItemInfo InventoryItemInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InventoryWidget.UW-InventoryWidget_C.HoverWeaponSlot");

	struct HoverWeaponSlot_Params {
		struct FInventoryItemInfo InventoryItemInfo;
	}; HoverWeaponSlot_Params Params;

	Params.InventoryItemInfo = InventoryItemInfo;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-InventoryWidget.UW-InventoryWidget_C.SetItemDrag
inline void UUW-InventoryWidget_C::SetItemDrag(char bDrag) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InventoryWidget.UW-InventoryWidget_C.SetItemDrag");

	struct SetItemDrag_Params {
		char bDrag;
	}; SetItemDrag_Params Params;

	Params.bDrag = bDrag;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-InventoryWidget.UW-InventoryWidget_C.IsItemDrag
inline void UUW-InventoryWidget_C::IsItemDrag(char& bResult) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InventoryWidget.UW-InventoryWidget_C.IsItemDrag");

	struct IsItemDrag_Params {
		char& bResult;
	}; IsItemDrag_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	bResult = Params.bResult;

}

// Function UW-InventoryWidget.UW-InventoryWidget_C.ResetDrag
inline void UUW-InventoryWidget_C::ResetDrag() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InventoryWidget.UW-InventoryWidget_C.ResetDrag");

	struct ResetDrag_Params {
		
	}; ResetDrag_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-InventoryWidget.UW-InventoryWidget_C.OnMouseButtonDown
inline struct FEventReply UUW-InventoryWidget_C::OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InventoryWidget.UW-InventoryWidget_C.OnMouseButtonDown");

	struct OnMouseButtonDown_Params {
		struct FGeometry MyGeometry;
		struct FPointerEvent& MouseEvent;
		struct FEventReply ReturnValue;

	}; OnMouseButtonDown_Params Params;

	Params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	MouseEvent = Params.MouseEvent;


	return params.ReturnValue;
}

// Function UW-InventoryWidget.UW-InventoryWidget_C.Get_InputMaskImage_Visibility_1
inline enum class ESlateVisibility UUW-InventoryWidget_C::Get_InputMaskImage_Visibility_1() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InventoryWidget.UW-InventoryWidget_C.Get_InputMaskImage_Visibility_1");

	struct Get_InputMaskImage_Visibility_1_Params {
		
		enum class ESlateVisibility ReturnValue;

	}; Get_InputMaskImage_Visibility_1_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UW-InventoryWidget.UW-InventoryWidget_C.EnableInventory
inline void UUW-InventoryWidget_C::EnableInventory() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InventoryWidget.UW-InventoryWidget_C.EnableInventory");

	struct EnableInventory_Params {
		
	}; EnableInventory_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-InventoryWidget.UW-InventoryWidget_C.DisableInventory
inline void UUW-InventoryWidget_C::DisableInventory() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InventoryWidget.UW-InventoryWidget_C.DisableInventory");

	struct DisableInventory_Params {
		
	}; DisableInventory_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-InventoryWidget.UW-InventoryWidget_C.EnableCarriedSlotList
inline void UUW-InventoryWidget_C::EnableCarriedSlotList() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InventoryWidget.UW-InventoryWidget_C.EnableCarriedSlotList");

	struct EnableCarriedSlotList_Params {
		
	}; EnableCarriedSlotList_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-InventoryWidget.UW-InventoryWidget_C.DisableCarriedSlotList
inline void UUW-InventoryWidget_C::DisableCarriedSlotList() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InventoryWidget.UW-InventoryWidget_C.DisableCarriedSlotList");

	struct DisableCarriedSlotList_Params {
		
	}; DisableCarriedSlotList_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-InventoryWidget.UW-InventoryWidget_C.HoverCarriedSlotList
inline void UUW-InventoryWidget_C::HoverCarriedSlotList(struct FInventoryItemInfo InventoryItemInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InventoryWidget.UW-InventoryWidget_C.HoverCarriedSlotList");

	struct HoverCarriedSlotList_Params {
		struct FInventoryItemInfo InventoryItemInfo;
	}; HoverCarriedSlotList_Params Params;

	Params.InventoryItemInfo = InventoryItemInfo;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-InventoryWidget.UW-InventoryWidget_C.GetCharacter
inline void UUW-InventoryWidget_C::GetCharacter(char& Result, struct ABP-DefaultPawn_C& CharacterRef) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InventoryWidget.UW-InventoryWidget_C.GetCharacter");

	struct GetCharacter_Params {
		char& Result;
		struct ABP-DefaultPawn_C& CharacterRef;
	}; GetCharacter_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Result = Params.Result;
	CharacterRef = Params.CharacterRef;

}

// Function UW-InventoryWidget.UW-InventoryWidget_C.GetInventoryComponent
inline void UUW-InventoryWidget_C::GetInventoryComponent(char& Result, struct UPlayerInventoryComponent& InventoryComponent) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InventoryWidget.UW-InventoryWidget_C.GetInventoryComponent");

	struct GetInventoryComponent_Params {
		char& Result;
		struct UPlayerInventoryComponent& InventoryComponent;
	}; GetInventoryComponent_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Result = Params.Result;
	InventoryComponent = Params.InventoryComponent;

}

// Function UW-InventoryWidget.UW-InventoryWidget_C.HoverEquipSlot
inline void UUW-InventoryWidget_C::HoverEquipSlot(struct FInventoryItemInfo InventoryItemInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InventoryWidget.UW-InventoryWidget_C.HoverEquipSlot");

	struct HoverEquipSlot_Params {
		struct FInventoryItemInfo InventoryItemInfo;
	}; HoverEquipSlot_Params Params;

	Params.InventoryItemInfo = InventoryItemInfo;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-InventoryWidget.UW-InventoryWidget_C.Get_WeightProgess_Percent_1
inline float UUW-InventoryWidget_C::Get_WeightProgess_Percent_1() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InventoryWidget.UW-InventoryWidget_C.Get_WeightProgess_Percent_1");

	struct Get_WeightProgess_Percent_1_Params {
		
		float ReturnValue;

	}; Get_WeightProgess_Percent_1_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UW-InventoryWidget.UW-InventoryWidget_C.Get_WeightPerCent_Text_1
inline struct FText UUW-InventoryWidget_C::Get_WeightPerCent_Text_1() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InventoryWidget.UW-InventoryWidget_C.Get_WeightPerCent_Text_1");

	struct Get_WeightPerCent_Text_1_Params {
		
		struct FText ReturnValue;

	}; Get_WeightPerCent_Text_1_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UW-InventoryWidget.UW-InventoryWidget_C.ResetHover
inline void UUW-InventoryWidget_C::ResetHover(struct FInventoryItemInfo InventoryItemInfo, char& bResult) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InventoryWidget.UW-InventoryWidget_C.ResetHover");

	struct ResetHover_Params {
		struct FInventoryItemInfo InventoryItemInfo;
		char& bResult;
	}; ResetHover_Params Params;

	Params.InventoryItemInfo = InventoryItemInfo;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	bResult = Params.bResult;

}

// Function UW-InventoryWidget.UW-InventoryWidget_C.IsCarriable
inline void UUW-InventoryWidget_C::IsCarriable(struct FInventoryItemInfo InventoryItemInfo, char& out_Result, char& InStrongbox) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InventoryWidget.UW-InventoryWidget_C.IsCarriable");

	struct IsCarriable_Params {
		struct FInventoryItemInfo InventoryItemInfo;
		char& out_Result;
		char& InStrongbox;
	}; IsCarriable_Params Params;

	Params.InventoryItemInfo = InventoryItemInfo;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	out_Result = Params.out_Result;
	InStrongbox = Params.InStrongbox;

}

// Function UW-InventoryWidget.UW-InventoryWidget_C.OnDrop
inline char UUW-InventoryWidget_C::OnDrop(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation Operation) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InventoryWidget.UW-InventoryWidget_C.OnDrop");

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

// Function UW-InventoryWidget.UW-InventoryWidget_C.BndEvt__Button_SortByTime_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
inline void UUW-InventoryWidget_C::BndEvt__Button_SortByTime_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InventoryWidget.UW-InventoryWidget_C.BndEvt__Button_SortByTime_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	struct BndEvt__Button_SortByTime_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params {
		
	}; BndEvt__Button_SortByTime_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-InventoryWidget.UW-InventoryWidget_C.BndEvt__Button_SortByType_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
inline void UUW-InventoryWidget_C::BndEvt__Button_SortByType_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InventoryWidget.UW-InventoryWidget_C.BndEvt__Button_SortByType_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	struct BndEvt__Button_SortByType_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params {
		
	}; BndEvt__Button_SortByType_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-InventoryWidget.UW-InventoryWidget_C.Tick
inline void UUW-InventoryWidget_C::Tick(struct FGeometry MyGeometry, float InDeltaTime) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InventoryWidget.UW-InventoryWidget_C.Tick");

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

// Function UW-InventoryWidget.UW-InventoryWidget_C.BndEvt__CheckBox_0_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature
inline void UUW-InventoryWidget_C::BndEvt__CheckBox_0_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature(char bIsChecked) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InventoryWidget.UW-InventoryWidget_C.BndEvt__CheckBox_0_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature");

	struct BndEvt__CheckBox_0_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature_Params {
		char bIsChecked;
	}; BndEvt__CheckBox_0_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature_Params Params;

	Params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-InventoryWidget.UW-InventoryWidget_C.BndEvt__BTN-BlackMarket_K2Node_ComponentBoundEvent_87_OnButtonClickedEvent__DelegateSignature
inline void UUW-InventoryWidget_C::BndEvt__BTN-BlackMarket_K2Node_ComponentBoundEvent_87_OnButtonClickedEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InventoryWidget.UW-InventoryWidget_C.BndEvt__BTN-BlackMarket_K2Node_ComponentBoundEvent_87_OnButtonClickedEvent__DelegateSignature");

	struct BndEvt__BTN-BlackMarket_K2Node_ComponentBoundEvent_87_OnButtonClickedEvent__DelegateSignature_Params {
		
	}; BndEvt__BTN-BlackMarket_K2Node_ComponentBoundEvent_87_OnButtonClickedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-InventoryWidget.UW-InventoryWidget_C.CharacterVisible_Event
inline void UUW-InventoryWidget_C::CharacterVisible_Event() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InventoryWidget.UW-InventoryWidget_C.CharacterVisible_Event");

	struct CharacterVisible_Event_Params {
		
	}; CharacterVisible_Event_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-InventoryWidget.UW-InventoryWidget_C.Open
inline void UUW-InventoryWidget_C::Open() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InventoryWidget.UW-InventoryWidget_C.Open");

	struct Open_Params {
		
	}; Open_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-InventoryWidget.UW-InventoryWidget_C.Close
inline void UUW-InventoryWidget_C::Close() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InventoryWidget.UW-InventoryWidget_C.Close");

	struct Close_Params {
		
	}; Close_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-InventoryWidget.UW-InventoryWidget_C.CloseDropPopup
inline void UUW-InventoryWidget_C::CloseDropPopup() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InventoryWidget.UW-InventoryWidget_C.CloseDropPopup");

	struct CloseDropPopup_Params {
		
	}; CloseDropPopup_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-InventoryWidget.UW-InventoryWidget_C.AcceptDropPopup
inline void UUW-InventoryWidget_C::AcceptDropPopup() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InventoryWidget.UW-InventoryWidget_C.AcceptDropPopup");

	struct AcceptDropPopup_Params {
		
	}; AcceptDropPopup_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-InventoryWidget.UW-InventoryWidget_C.WeaponAmmoDelegate_Event_1
inline void UUW-InventoryWidget_C::WeaponAmmoDelegate_Event_1(int32_t SlotIdx, int32_t CurAmmo, int32_t MaxAmmo) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InventoryWidget.UW-InventoryWidget_C.WeaponAmmoDelegate_Event_1");

	struct WeaponAmmoDelegate_Event_1_Params {
		int32_t SlotIdx;
		int32_t CurAmmo;
		int32_t MaxAmmo;
	}; WeaponAmmoDelegate_Event_1_Params Params;

	Params.SlotIdx = SlotIdx;
	Params.CurAmmo = CurAmmo;
	Params.MaxAmmo = MaxAmmo;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-InventoryWidget.UW-InventoryWidget_C.SetPreview
inline void UUW-InventoryWidget_C::SetPreview() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InventoryWidget.UW-InventoryWidget_C.SetPreview");

	struct SetPreview_Params {
		
	}; SetPreview_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-InventoryWidget.UW-InventoryWidget_C.NotifyNewWeapon
inline void UUW-InventoryWidget_C::NotifyNewWeapon() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InventoryWidget.UW-InventoryWidget_C.NotifyNewWeapon");

	struct NotifyNewWeapon_Params {
		
	}; NotifyNewWeapon_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-InventoryWidget.UW-InventoryWidget_C.ShowInventoryCharacter
inline void UUW-InventoryWidget_C::ShowInventoryCharacter(char IsShow) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InventoryWidget.UW-InventoryWidget_C.ShowInventoryCharacter");

	struct ShowInventoryCharacter_Params {
		char IsShow;
	}; ShowInventoryCharacter_Params Params;

	Params.IsShow = IsShow;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-InventoryWidget.UW-InventoryWidget_C.BndEvt__CheckBox_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature
inline void UUW-InventoryWidget_C::BndEvt__CheckBox_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature(char bIsChecked) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InventoryWidget.UW-InventoryWidget_C.BndEvt__CheckBox_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature");

	struct BndEvt__CheckBox_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature_Params {
		char bIsChecked;
	}; BndEvt__CheckBox_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature_Params Params;

	Params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-InventoryWidget.UW-InventoryWidget_C.DelayCheckCompleteItems
inline void UUW-InventoryWidget_C::DelayCheckCompleteItems() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InventoryWidget.UW-InventoryWidget_C.DelayCheckCompleteItems");

	struct DelayCheckCompleteItems_Params {
		
	}; DelayCheckCompleteItems_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-InventoryWidget.UW-InventoryWidget_C.ShowFirstTimeItemInfoTooltip
inline void UUW-InventoryWidget_C::ShowFirstTimeItemInfoTooltip() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InventoryWidget.UW-InventoryWidget_C.ShowFirstTimeItemInfoTooltip");

	struct ShowFirstTimeItemInfoTooltip_Params {
		
	}; ShowFirstTimeItemInfoTooltip_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-InventoryWidget.UW-InventoryWidget_C.BndEvt__CheckBox_1_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature
inline void UUW-InventoryWidget_C::BndEvt__CheckBox_1_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature(char bIsChecked) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InventoryWidget.UW-InventoryWidget_C.BndEvt__CheckBox_1_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature");

	struct BndEvt__CheckBox_1_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature_Params {
		char bIsChecked;
	}; BndEvt__CheckBox_1_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature_Params Params;

	Params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-InventoryWidget.UW-InventoryWidget_C.ShowStatupAnim
inline void UUW-InventoryWidget_C::ShowStatupAnim(struct FStatupAnimParameters& StatupParameters, enum class EStatupAnimType StatupType) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InventoryWidget.UW-InventoryWidget_C.ShowStatupAnim");

	struct ShowStatupAnim_Params {
		struct FStatupAnimParameters& StatupParameters;
		enum class EStatupAnimType StatupType;
	}; ShowStatupAnim_Params Params;

	Params.StatupType = StatupType;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	StatupParameters = Params.StatupParameters;

}

// Function UW-InventoryWidget.UW-InventoryWidget_C.UpdateSearchMaterialItem
inline void UUW-InventoryWidget_C::UpdateSearchMaterialItem() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InventoryWidget.UW-InventoryWidget_C.UpdateSearchMaterialItem");

	struct UpdateSearchMaterialItem_Params {
		
	}; UpdateSearchMaterialItem_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-InventoryWidget.UW-InventoryWidget_C.UpdateSearchExpertWeaponMaterialItem
inline void UUW-InventoryWidget_C::UpdateSearchExpertWeaponMaterialItem() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InventoryWidget.UW-InventoryWidget_C.UpdateSearchExpertWeaponMaterialItem");

	struct UpdateSearchExpertWeaponMaterialItem_Params {
		
	}; UpdateSearchExpertWeaponMaterialItem_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-InventoryWidget.UW-InventoryWidget_C.K2_ResetInventoryScroll
inline void UUW-InventoryWidget_C::K2_ResetInventoryScroll() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InventoryWidget.UW-InventoryWidget_C.K2_ResetInventoryScroll");

	struct K2_ResetInventoryScroll_Params {
		
	}; K2_ResetInventoryScroll_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-InventoryWidget.UW-InventoryWidget_C.Construct
inline void UUW-InventoryWidget_C::Construct() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InventoryWidget.UW-InventoryWidget_C.Construct");

	struct Construct_Params {
		
	}; Construct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-InventoryWidget.UW-InventoryWidget_C.SetWeaponItems
inline void UUW-InventoryWidget_C::SetWeaponItems() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InventoryWidget.UW-InventoryWidget_C.SetWeaponItems");

	struct SetWeaponItems_Params {
		
	}; SetWeaponItems_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-InventoryWidget.UW-InventoryWidget_C.SetEquippedItems
inline void UUW-InventoryWidget_C::SetEquippedItems() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InventoryWidget.UW-InventoryWidget_C.SetEquippedItems");

	struct SetEquippedItems_Params {
		
	}; SetEquippedItems_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-InventoryWidget.UW-InventoryWidget_C.SetProximityItems
inline void UUW-InventoryWidget_C::SetProximityItems(char bResetDrag) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InventoryWidget.UW-InventoryWidget_C.SetProximityItems");

	struct SetProximityItems_Params {
		char bResetDrag;
	}; SetProximityItems_Params Params;

	Params.bResetDrag = bResetDrag;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-InventoryWidget.UW-InventoryWidget_C.SetCarriedItems
inline void UUW-InventoryWidget_C::SetCarriedItems() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InventoryWidget.UW-InventoryWidget_C.SetCarriedItems");

	struct SetCarriedItems_Params {
		
	}; SetCarriedItems_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-InventoryWidget.UW-InventoryWidget_C.NotEnoughSpaceDelegate_Event_1
inline void UUW-InventoryWidget_C::NotEnoughSpaceDelegate_Event_1() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InventoryWidget.UW-InventoryWidget_C.NotEnoughSpaceDelegate_Event_1");

	struct NotEnoughSpaceDelegate_Event_1_Params {
		
	}; NotEnoughSpaceDelegate_Event_1_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-InventoryWidget.UW-InventoryWidget_C.OnRefreshWeightProgress
inline void UUW-InventoryWidget_C::OnRefreshWeightProgress() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InventoryWidget.UW-InventoryWidget_C.OnRefreshWeightProgress");

	struct OnRefreshWeightProgress_Params {
		
	}; OnRefreshWeightProgress_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-InventoryWidget.UW-InventoryWidget_C.OnChangeMaterial
inline void UUW-InventoryWidget_C::OnChangeMaterial() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InventoryWidget.UW-InventoryWidget_C.OnChangeMaterial");

	struct OnChangeMaterial_Params {
		
	}; OnChangeMaterial_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-InventoryWidget.UW-InventoryWidget_C.OnChangeWeapon
inline void UUW-InventoryWidget_C::OnChangeWeapon() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InventoryWidget.UW-InventoryWidget_C.OnChangeWeapon");

	struct OnChangeWeapon_Params {
		
	}; OnChangeWeapon_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-InventoryWidget.UW-InventoryWidget_C.OnChangeDetectedItems
inline void UUW-InventoryWidget_C::OnChangeDetectedItems() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InventoryWidget.UW-InventoryWidget_C.OnChangeDetectedItems");

	struct OnChangeDetectedItems_Params {
		
	}; OnChangeDetectedItems_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-InventoryWidget.UW-InventoryWidget_C.OnChangeWeaponAttachment
inline void UUW-InventoryWidget_C::OnChangeWeaponAttachment() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InventoryWidget.UW-InventoryWidget_C.OnChangeWeaponAttachment");

	struct OnChangeWeaponAttachment_Params {
		
	}; OnChangeWeaponAttachment_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-InventoryWidget.UW-InventoryWidget_C.OnChangeWearableItem
inline void UUW-InventoryWidget_C::OnChangeWearableItem() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InventoryWidget.UW-InventoryWidget_C.OnChangeWearableItem");

	struct OnChangeWearableItem_Params {
		
	}; OnChangeWearableItem_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-InventoryWidget.UW-InventoryWidget_C.OnChangeBagpackItem
inline void UUW-InventoryWidget_C::OnChangeBagpackItem() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InventoryWidget.UW-InventoryWidget_C.OnChangeBagpackItem");

	struct OnChangeBagpackItem_Params {
		
	}; OnChangeBagpackItem_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-InventoryWidget.UW-InventoryWidget_C.ExecuteUbergraph_UW-InventoryWidget
inline void UUW-InventoryWidget_C::ExecuteUbergraph_UW-InventoryWidget(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InventoryWidget.UW-InventoryWidget_C.ExecuteUbergraph_UW-InventoryWidget");

	struct ExecuteUbergraph_UW-InventoryWidget_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_UW-InventoryWidget_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-InventoryWidget.UW-InventoryWidget_C.EventDispatcher_OnCloseInventory__DelegateSignature
inline void UUW-InventoryWidget_C::EventDispatcher_OnCloseInventory__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InventoryWidget.UW-InventoryWidget_C.EventDispatcher_OnCloseInventory__DelegateSignature");

	struct EventDispatcher_OnCloseInventory__DelegateSignature_Params {
		
	}; EventDispatcher_OnCloseInventory__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

