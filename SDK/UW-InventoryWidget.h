// WidgetBlueprintGeneratedClass UW-InventoryWidget.UW-InventoryWidget_C
class UUW-InventoryWidget_C : public UBravoHotelInventoryWidget {

public:

	struct Unknown UberGraphFrame; // 0x278 (8)
	struct Unknown FadeIn; // 0x280 (8)
	struct Unknown BackgroundBlur_1; // 0x288 (8)
	struct Unknown BackPackBound_begin; // 0x290 (8)
	struct Unknown BackPackBound_end; // 0x298 (8)
	struct Unknown BlackMarketOverlay; // 0x2A0 (8)
	struct Unknown BTN-BlackMarket; // 0x2A8 (8)
	struct Unknown Button_SortByTime; // 0x2B0 (8)
	struct Unknown Button_SortByType; // 0x2B8 (8)
	struct Unknown CanvasPanel_1; // 0x2C0 (8)
	struct Unknown CanvasPanel_7; // 0x2C8 (8)
	struct Unknown CanvasPanel_16; // 0x2D0 (8)
	struct Unknown Carried_Area; // 0x2D8 (8)
	struct Unknown CarriedBound_begin; // 0x2E0 (8)
	struct Unknown CarriedBound_end; // 0x2E8 (8)
	struct Unknown CarriedList; // 0x2F0 (8)
	struct Unknown CarriedList_StrongBox; // 0x2F8 (8)
	struct Unknown CheckBox; // 0x300 (8)
	struct Unknown CheckBox_1; // 0x308 (8)
	struct Unknown CheckBox_2; // 0x310 (8)
	struct Unknown CombineRecipe; // 0x318 (8)
	struct Unknown EquippedList; // 0x320 (8)
	struct Unknown HorizontalBox; // 0x328 (8)
	struct Unknown HorizontalBox_7; // 0x330 (8)
	struct Unknown HorizontalBox_WeightMax; // 0x338 (8)
	struct Unknown Image; // 0x340 (8)
	struct Unknown Image_2; // 0x348 (8)
	struct Unknown Image_3; // 0x350 (8)
	struct Unknown Image_5; // 0x358 (8)
	struct Unknown Image_6; // 0x360 (8)
	struct Unknown Image_7; // 0x368 (8)
	struct Unknown Image_8; // 0x370 (8)
	struct Unknown Image_9; // 0x378 (8)
	struct Unknown Image_10; // 0x380 (8)
	struct Unknown Image_223; // 0x388 (8)
	struct Unknown Image_227; // 0x390 (8)
	struct Unknown Image_271; // 0x398 (8)
	struct Unknown Image_324; // 0x3A0 (8)
	struct Unknown Image_489; // 0x3A8 (8)
	struct Unknown Image_556; // 0x3B0 (8)
	struct Unknown Image_Guess; // 0x3B8 (8)
	struct Unknown Image_ItemInfo; // 0x3C0 (8)
	struct Unknown IMG-BG; // 0x3C8 (8)
	struct Unknown IMG-BlackMarketBorder; // 0x3D0 (8)
	struct Unknown InputMaskImage; // 0x3D8 (8)
	struct Unknown Material_Area; // 0x3E0 (8)
	struct Unknown MaterialBound_begin; // 0x3E8 (8)
	struct Unknown MaterialBound_end; // 0x3F0 (8)
	struct Unknown ProgressBar_MaxWeight; // 0x3F8 (8)
	struct Unknown ProgressBar_Weight; // 0x400 (8)
	struct Unknown ProgressBar_WeightBag; // 0x408 (8)
	struct Unknown ProximityBound; // 0x410 (8)
	struct Unknown ProximityList; // 0x418 (8)
	struct Unknown StrongBox_Area; // 0x420 (8)
	struct Unknown T_AdditionalMaxWeight; // 0x428 (8)
	struct Unknown T_AdditionalMaxWeightSymbol; // 0x430 (8)
	struct Unknown T_AdditionalWeight; // 0x438 (8)
	struct Unknown T_AdditionalWeightSymbol; // 0x440 (8)
	struct Unknown T_MaxWeight; // 0x448 (8)
	struct Unknown T_StrongboxCount; // 0x450 (8)
	struct Unknown T_Weight; // 0x458 (8)
	struct Unknown T_WeightSlash; // 0x460 (8)
	struct Unknown TextBlock_11; // 0x468 (8)
	struct Unknown TextBlock_CurrentGold; // 0x470 (8)
	struct Unknown TextBlock_SortByTime; // 0x478 (8)
	struct Unknown TextBlock_SortByType; // 0x480 (8)
	struct Unknown UW-Inventory_FreeSupplyToolTip; // 0x488 (8)
	struct Unknown UW-Inventory_ItemInfoTooltip; // 0x490 (8)
	struct Unknown UW-Inventory_Keeped; // 0x498 (8)
	struct Unknown UW-Inventory_Material; // 0x4A0 (8)
	struct Unknown UW-Inventory_Recipe; // 0x4A8 (8)
	struct Unknown UW-SearchingMaterial; // 0x4B0 (8)
	struct Unknown WeaponBound; // 0x4B8 (8)
	struct Unknown WeaponList; // 0x4C0 (8)
	struct Unknown WeightPerCent; // 0x4C8 (8)
	struct Unknown PlayerController; // 0x4D0 (8)
	char bItemDrag : 0; // 0x4D8 (1)
	struct Unknown DropPopup; // 0x4E0 (8)
	float MaximumWeight; // 0x4E8 (4)
	int32_t OldProximityItemCount; // 0x4EC (4)
	struct Unknown ProximityGround; // 0x4F0 (8)
	struct Unknown DefaultPawnRef; // 0x4F8 (8)
	struct TArray<Unknown> ProximityGroundPool; // 0x500 (16)
	struct Unknown OldDefaultPawnRef; // 0x510 (8)
	struct Unknown CharacterTimerHandle; // 0x518 (8)
	struct TArray<Unknown> DropBoxWidgetList; // 0x520 (16)
	struct Unknown DropBoxParentWidget; // 0x530 (8)
	struct Unknown SavedInventorySettings; // 0x538 (8)
	struct Unknown EquipedWeapon; // 0x540 (8)
	struct TArray<Unknown> OldWeaponList; // 0x548 (16)
	char ChangeAttachments : 0; // 0x558 (1)
	struct Unknown ItemHoverWidget; // 0x560 (8)
	struct Unknown MainWidget; // 0x568 (8)
	struct FMulticastInlineDelegate EventDispatcher_OnCloseInventory; // 0x570 (16)
	struct TArray<Unknown> StealableWidgetList; // 0x580 (16)
	char bItemInfoHovered : 0; // 0x590 (1)
	char bFirstTimeNotifyItemInfo : 0; // 0x591 (1)
	struct Unknown Timer_ItemInfoTooltip; // 0x598 (8)
	char IsShowingItemInfoTooltip : 0; // 0x5A0 (1)
	int32_t FirstTimeCapsuleItem; // 0x5A4 (4)
	int32_t FirstTimeCraft; // 0x5A8 (4)
	char bGoldWarning : 0; // 0x5AC (1)
	struct Unknown DefaultWeightColor; // 0x5B0 (40)
	struct Unknown MinusWeightColor; // 0x5D8 (40)
	struct Unknown PlusWeightColor; // 0x600 (40)

	void AllHiddenMaterialWidget(); // Function UW-InventoryWidget.UW-InventoryWidget_C.AllHiddenMaterialWidget(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void ResetAllSlotScrollToStart(); // Function UW-InventoryWidget.UW-InventoryWidget_C.ResetAllSlotScrollToStart(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void SetWeightText(struct Unknown& WeightTextRef, struct Unknown& SymbolTextRef, float Weight); // Function UW-InventoryWidget.UW-InventoryWidget_C.SetWeightText(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void ResetAllHoverEffect(); // Function UW-InventoryWidget.UW-InventoryWidget_C.ResetAllHoverEffect(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void HoverRecipeByItem(struct FName ItemKey); // Function UW-InventoryWidget.UW-InventoryWidget_C.HoverRecipeByItem(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void CheckEndFirstTimeValues(); // Function UW-InventoryWidget.UW-InventoryWidget_C.CheckEndFirstTimeValues(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void CheckFirstTimeCraft(char& Return); // Function UW-InventoryWidget.UW-InventoryWidget_C.CheckFirstTimeCraft(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <Game_BE.exe+0x2B80160>
	void CheckFirstTimeCapsuleItem(char& Return); // Function UW-InventoryWidget.UW-InventoryWidget_C.CheckFirstTimeCapsuleItem(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <Game_BE.exe+0x2B80160>
	void CheckAnyEquippableAttachmentEmptySlot(struct Unknown& NewAttachmentItemInfo, char& IsEmpty); // Function UW-InventoryWidget.UW-InventoryWidget_C.CheckAnyEquippableAttachmentEmptySlot(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void HideItemArea(); // Function UW-InventoryWidget.UW-InventoryWidget_C.HideItemArea(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void ShowItemArea(struct Unknown& ItemInfo, char CanEquip); // Function UW-InventoryWidget.UW-InventoryWidget_C.ShowItemArea(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void CheckItemInfoHovered(); // Function UW-InventoryWidget.UW-InventoryWidget_C.CheckItemInfoHovered(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void GetCarriedSlotItems(struct TArray<Unknown>& Items); // Function UW-InventoryWidget.UW-InventoryWidget_C.GetCarriedSlotItems(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <Game_BE.exe+0x2B80160>
	void IsInCarriedBound(char& State); // Function UW-InventoryWidget.UW-InventoryWidget_C.IsInCarriedBound(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void IsInBound(struct Unknown Begin, struct Unknown End, char& State); // Function UW-InventoryWidget.UW-InventoryWidget_C.IsInBound(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void IsInMaterialBound(char& State); // Function UW-InventoryWidget.UW-InventoryWidget_C.IsInMaterialBound(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void IsInBackPackBound(char& State); // Function UW-InventoryWidget.UW-InventoryWidget_C.IsInBackPackBound(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void CheckCompleteItems(); // Function UW-InventoryWidget.UW-InventoryWidget_C.CheckCompleteItems(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void HoverResetMaterial(); // Function UW-InventoryWidget.UW-InventoryWidget_C.HoverResetMaterial(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void HoverRecipe(struct FName RecipeKey); // Function UW-InventoryWidget.UW-InventoryWidget_C.HoverRecipe(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void AllHiddenRecipeWidget(); // Function UW-InventoryWidget.UW-InventoryWidget_C.AllHiddenRecipeWidget(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void IsMaterialItem(struct Unknown InventoryItemInfo, char& out_Result); // Function UW-InventoryWidget.UW-InventoryWidget_C.IsMaterialItem(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void ShowItemDorpPopup(struct Unknown BaseSlot, struct Unknown MaterialSlot, char& State); // Function UW-InventoryWidget.UW-InventoryWidget_C.ShowItemDorpPopup(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	char CheckMaterialBound(struct Unknown DropPos, struct Unknown Operation); // Function UW-InventoryWidget.UW-InventoryWidget_C.CheckMaterialBound(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void SetRecipeItem(); // Function UW-InventoryWidget.UW-InventoryWidget_C.SetRecipeItem(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void SetMaterialItem(); // Function UW-InventoryWidget.UW-InventoryWidget_C.SetMaterialItem(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	enum class Unknow Get_CombineRecipe_Visibility_1(); // Function UW-InventoryWidget.UW-InventoryWidget_C.Get_CombineRecipe_Visibility_1(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <Game_BE.exe+0x2B80160>
	void SetVisibleInventoryCharacter(char bVisible); // Function UW-InventoryWidget.UW-InventoryWidget_C.SetVisibleInventoryCharacter(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void SetStealable(); // Function UW-InventoryWidget.UW-InventoryWidget_C.SetStealable(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	enum class Unknow Get_IMG-BG_Visibility_1(); // Function UW-InventoryWidget.UW-InventoryWidget_C.Get_IMG-BG_Visibility_1(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <Game_BE.exe+0x2B80160>
	void HoverResetKeepedSlot(); // Function UW-InventoryWidget.UW-InventoryWidget_C.HoverResetKeepedSlot(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void HoverKeepedSlot(struct Unknown InventoryItemInfo); // Function UW-InventoryWidget.UW-InventoryWidget_C.HoverKeepedSlot(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void SetKeepedItem(); // Function UW-InventoryWidget.UW-InventoryWidget_C.SetKeepedItem(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void GetMainWidget(struct Unknown& MainWidget); // Function UW-InventoryWidget.UW-InventoryWidget_C.GetMainWidget(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <Game_BE.exe+0x2B80160>
	void CheckPreViewWeapon(char& State); // Function UW-InventoryWidget.UW-InventoryWidget_C.CheckPreViewWeapon(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void DropBoxCompareQuantity(struct TArray<Unknown>& InventoryItemInfo, struct Unknown DropBoxInfo, char& SlotUpdate); // Function UW-InventoryWidget.UW-InventoryWidget_C.DropBoxCompareQuantity(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void CheckBoxState(char State, struct Unknown CheckBox); // Function UW-InventoryWidget.UW-InventoryWidget_C.CheckBoxState(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	struct FText Get_TextBlock_CurrentGold_Text_1(); // Function UW-InventoryWidget.UW-InventoryWidget_C.Get_TextBlock_CurrentGold_Text_1(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <Game_BE.exe+0x2B80160>
	void RemoveDropBoxItem(struct Unknown Actor, struct Unknown Slot); // Function UW-InventoryWidget.UW-InventoryWidget_C.RemoveDropBoxItem(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void AddDropBoxItem(struct Unknown Slotinfo, struct Unknown Actor); // Function UW-InventoryWidget.UW-InventoryWidget_C.AddDropBoxItem(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void FindDropBox(struct Unknown Actor, struct Unknown& DropBox, char& State); // Function UW-InventoryWidget.UW-InventoryWidget_C.FindDropBox(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void UpdateDropBoxItem(struct Unknown Actor); // Function UW-InventoryWidget.UW-InventoryWidget_C.UpdateDropBoxItem(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void SetPerkBoxIcon(); // Function UW-InventoryWidget.UW-InventoryWidget_C.SetPerkBoxIcon(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	char IsShowingDropPopup(); // Function UW-InventoryWidget.UW-InventoryWidget_C.IsShowingDropPopup(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void CheckDefaultPawn(char& NewDefaultPawn); // Function UW-InventoryWidget.UW-InventoryWidget_C.CheckDefaultPawn(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void UpdateCarriedSlotInfo(); // Function UW-InventoryWidget.UW-InventoryWidget_C.UpdateCarriedSlotInfo(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void AllHiddenCarriedWidget(); // Function UW-InventoryWidget.UW-InventoryWidget_C.AllHiddenCarriedWidget(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void UpdateProximityGroundSlotInfo(); // Function UW-InventoryWidget.UW-InventoryWidget_C.UpdateProximityGroundSlotInfo(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void UpdateProximityGroundWidget(); // Function UW-InventoryWidget.UW-InventoryWidget_C.UpdateProximityGroundWidget(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void AddProximityGroundPool(); // Function UW-InventoryWidget.UW-InventoryWidget_C.AddProximityGroundPool(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void InitProximityGroundPool(); // Function UW-InventoryWidget.UW-InventoryWidget_C.InitProximityGroundPool(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void SetChracterVisible(char State); // Function UW-InventoryWidget.UW-InventoryWidget_C.SetChracterVisible(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	char OnDragOver(struct Unknown MyGeometry, struct Unknown PointerEvent, struct Unknown Operation); // Function UW-InventoryWidget.UW-InventoryWidget_C.OnDragOver(BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void CheckWeaponBound(struct Unknown DropPos, struct Unknown Operation); // Function UW-InventoryWidget.UW-InventoryWidget_C.CheckWeaponBound(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	char CheckCarriedBound(struct Unknown DropPos, struct Unknown Operation); // Function UW-InventoryWidget.UW-InventoryWidget_C.CheckCarriedBound(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void CheckProximityBound(struct Unknown DropPos, struct Unknown Operation); // Function UW-InventoryWidget.UW-InventoryWidget_C.CheckProximityBound(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	enum class Unknow ShowBlackMarketButton(); // Function UW-InventoryWidget.UW-InventoryWidget_C.ShowBlackMarketButton(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <Game_BE.exe+0x2B80160>
	void UpdateWeaponMesh(struct Unknown NewWeapon, int32_t SlotIndex); // Function UW-InventoryWidget.UW-InventoryWidget_C.UpdateWeaponMesh(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void GetWearbleItemInfo(enum class Unknow WearableType, char& bHas, struct Unknown& ItemInfo, struct Unknown& ItemDetailInfo); // Function UW-InventoryWidget.UW-InventoryWidget_C.GetWearbleItemInfo(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void CalcItemWeight(char IsAddOrRemove, struct Unknown ItemInfo); // Function UW-InventoryWidget.UW-InventoryWidget_C.CalcItemWeight(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void SetWeightPlus(float WeightPlus, float MaxWeightPlus); // Function UW-InventoryWidget.UW-InventoryWidget_C.SetWeightPlus(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void SetWeightProgress(); // Function UW-InventoryWidget.UW-InventoryWidget_C.SetWeightProgress(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void ResetDragWeaponAttachmentItemFromCarriedSlot(); // Function UW-InventoryWidget.UW-InventoryWidget_C.ResetDragWeaponAttachmentItemFromCarriedSlot(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void SetDragWeaponAttachmentItemFromCarriedSlot(struct Unknown InventoryItemInfo); // Function UW-InventoryWidget.UW-InventoryWidget_C.SetDragWeaponAttachmentItemFromCarriedSlot(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void SetDragWeaponAttachmentSlot(struct Unknown InventoryItemInfo); // Function UW-InventoryWidget.UW-InventoryWidget_C.SetDragWeaponAttachmentSlot(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void GetInventoryItemDetailInfo(struct Unknown InventoryItemInfo, struct Unknown& InventoryItemDetailInfo, char& bResult); // Function UW-InventoryWidget.UW-InventoryWidget_C.GetInventoryItemDetailInfo(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void SetDragCarriedSlot(struct Unknown InventoryItemInfo); // Function UW-InventoryWidget.UW-InventoryWidget_C.SetDragCarriedSlot(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void SetDragWeaponSlot(struct Unknown WeaponInfo); // Function UW-InventoryWidget.UW-InventoryWidget_C.SetDragWeaponSlot(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void ResetDragWeaponItemFromCarriedSlot(); // Function UW-InventoryWidget.UW-InventoryWidget_C.ResetDragWeaponItemFromCarriedSlot(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void SetDragWeaponItemFromCarriedSlot(struct Unknown InventoryItemInfo); // Function UW-InventoryWidget.UW-InventoryWidget_C.SetDragWeaponItemFromCarriedSlot(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void ResetDragWeaponItemFromEquippedSlot(); // Function UW-InventoryWidget.UW-InventoryWidget_C.ResetDragWeaponItemFromEquippedSlot(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void SetDragWeaponItemFromEquippedSlot(struct Unknown InventoryItemInfo); // Function UW-InventoryWidget.UW-InventoryWidget_C.SetDragWeaponItemFromEquippedSlot(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void SetDragProximitySlot(struct Unknown InventoryItemInfo); // Function UW-InventoryWidget.UW-InventoryWidget_C.SetDragProximitySlot(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void HoverResetCarriedSlotList(); // Function UW-InventoryWidget.UW-InventoryWidget_C.HoverResetCarriedSlotList(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void HoverResetEquipSlot(); // Function UW-InventoryWidget.UW-InventoryWidget_C.HoverResetEquipSlot(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void HoverResetAttachItemSlotList(); // Function UW-InventoryWidget.UW-InventoryWidget_C.HoverResetAttachItemSlotList(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void HoverResetWeaponSlotList(); // Function UW-InventoryWidget.UW-InventoryWidget_C.HoverResetWeaponSlotList(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void HoverAttachItemSlot(struct Unknown InventoryItemInfo); // Function UW-InventoryWidget.UW-InventoryWidget_C.HoverAttachItemSlot(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void HoverWeaponSlot(struct Unknown InventoryItemInfo); // Function UW-InventoryWidget.UW-InventoryWidget_C.HoverWeaponSlot(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void SetItemDrag(char bDrag); // Function UW-InventoryWidget.UW-InventoryWidget_C.SetItemDrag(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void IsItemDrag(char& bResult); // Function UW-InventoryWidget.UW-InventoryWidget_C.IsItemDrag(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void ResetDrag(); // Function UW-InventoryWidget.UW-InventoryWidget_C.ResetDrag(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	struct Unknown OnMouseButtonDown(struct Unknown MyGeometry, struct Unknown& MouseEvent); // Function UW-InventoryWidget.UW-InventoryWidget_C.OnMouseButtonDown(BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	enum class Unknow Get_InputMaskImage_Visibility_1(); // Function UW-InventoryWidget.UW-InventoryWidget_C.Get_InputMaskImage_Visibility_1(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <Game_BE.exe+0x2B80160>
	void EnableInventory(); // Function UW-InventoryWidget.UW-InventoryWidget_C.EnableInventory(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void DisableInventory(); // Function UW-InventoryWidget.UW-InventoryWidget_C.DisableInventory(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void EnableCarriedSlotList(); // Function UW-InventoryWidget.UW-InventoryWidget_C.EnableCarriedSlotList(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void DisableCarriedSlotList(); // Function UW-InventoryWidget.UW-InventoryWidget_C.DisableCarriedSlotList(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void HoverCarriedSlotList(struct Unknown InventoryItemInfo); // Function UW-InventoryWidget.UW-InventoryWidget_C.HoverCarriedSlotList(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void GetCharacter(char& Result, struct Unknown& CharacterRef); // Function UW-InventoryWidget.UW-InventoryWidget_C.GetCharacter(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void GetInventoryComponent(char& Result, struct Unknown& InventoryComponent); // Function UW-InventoryWidget.UW-InventoryWidget_C.GetInventoryComponent(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void HoverEquipSlot(struct Unknown InventoryItemInfo); // Function UW-InventoryWidget.UW-InventoryWidget_C.HoverEquipSlot(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	float Get_WeightProgess_Percent_1(); // Function UW-InventoryWidget.UW-InventoryWidget_C.Get_WeightProgess_Percent_1(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <Game_BE.exe+0x2B80160>
	struct FText Get_WeightPerCent_Text_1(); // Function UW-InventoryWidget.UW-InventoryWidget_C.Get_WeightPerCent_Text_1(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <Game_BE.exe+0x2B80160>
	void ResetHover(struct Unknown InventoryItemInfo, char& bResult); // Function UW-InventoryWidget.UW-InventoryWidget_C.ResetHover(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void IsCarriable(struct Unknown InventoryItemInfo, char& out_Result, char& InStrongbox); // Function UW-InventoryWidget.UW-InventoryWidget_C.IsCarriable(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	char OnDrop(struct Unknown MyGeometry, struct Unknown PointerEvent, struct Unknown Operation); // Function UW-InventoryWidget.UW-InventoryWidget_C.OnDrop(BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void SetCarriedItems(); // Function UW-InventoryWidget.UW-InventoryWidget_C.SetCarriedItems(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void SetProximityItems(char bResetDrag); // Function UW-InventoryWidget.UW-InventoryWidget_C.SetProximityItems(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void SetEquippedItems(); // Function UW-InventoryWidget.UW-InventoryWidget_C.SetEquippedItems(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void SetWeaponItems(); // Function UW-InventoryWidget.UW-InventoryWidget_C.SetWeaponItems(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void Construct(); // Function UW-InventoryWidget.UW-InventoryWidget_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void SetPreview(); // Function UW-InventoryWidget.UW-InventoryWidget_C.SetPreview(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void BndEvt__Button_SortByTime_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function UW-InventoryWidget.UW-InventoryWidget_C.BndEvt__Button_SortByTime_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void BndEvt__Button_SortByType_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function UW-InventoryWidget.UW-InventoryWidget_C.BndEvt__Button_SortByType_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void Tick(struct Unknown MyGeometry, float InDeltaTime); // Function UW-InventoryWidget.UW-InventoryWidget_C.Tick(BlueprintCosmetic|Event|Public|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void BndEvt__CheckBox_0_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature(char bIsChecked); // Function UW-InventoryWidget.UW-InventoryWidget_C.BndEvt__CheckBox_0_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature(BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void BndEvt__BTN-BlackMarket_K2Node_ComponentBoundEvent_87_OnButtonClickedEvent__DelegateSignature(); // Function UW-InventoryWidget.UW-InventoryWidget_C.BndEvt__BTN-BlackMarket_K2Node_ComponentBoundEvent_87_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void CharacterVisible_Event(); // Function UW-InventoryWidget.UW-InventoryWidget_C.CharacterVisible_Event(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void Open(); // Function UW-InventoryWidget.UW-InventoryWidget_C.Open(Event|Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void Close(); // Function UW-InventoryWidget.UW-InventoryWidget_C.Close(Event|Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void CloseDropPopup(); // Function UW-InventoryWidget.UW-InventoryWidget_C.CloseDropPopup(Event|Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void AcceptDropPopup(); // Function UW-InventoryWidget.UW-InventoryWidget_C.AcceptDropPopup(Event|Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void WeaponAmmoDelegate_Event_1(int32_t SlotIdx, int32_t CurAmmo, int32_t MaxAmmo); // Function UW-InventoryWidget.UW-InventoryWidget_C.WeaponAmmoDelegate_Event_1(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void NotifyNewWeapon(); // Function UW-InventoryWidget.UW-InventoryWidget_C.NotifyNewWeapon(Event|Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void ShowInventoryCharacter(char IsShow); // Function UW-InventoryWidget.UW-InventoryWidget_C.ShowInventoryCharacter(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void BndEvt__CheckBox_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature(char bIsChecked); // Function UW-InventoryWidget.UW-InventoryWidget_C.BndEvt__CheckBox_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature(BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void DelayCheckCompleteItems(); // Function UW-InventoryWidget.UW-InventoryWidget_C.DelayCheckCompleteItems(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void ShowFirstTimeItemInfoTooltip(); // Function UW-InventoryWidget.UW-InventoryWidget_C.ShowFirstTimeItemInfoTooltip(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void BndEvt__CheckBox_1_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature(char bIsChecked); // Function UW-InventoryWidget.UW-InventoryWidget_C.BndEvt__CheckBox_1_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature(BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void ShowStatupAnim(struct Unknown& StatupParameters, enum class Unknow StatupType); // Function UW-InventoryWidget.UW-InventoryWidget_C.ShowStatupAnim(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void UpdateSearchMaterialItem(); // Function UW-InventoryWidget.UW-InventoryWidget_C.UpdateSearchMaterialItem(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void UpdateSearchExpertWeaponMaterialItem(); // Function UW-InventoryWidget.UW-InventoryWidget_C.UpdateSearchExpertWeaponMaterialItem(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void NotEnoughSpaceDelegate_Event_1(); // Function UW-InventoryWidget.UW-InventoryWidget_C.NotEnoughSpaceDelegate_Event_1(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void OnRefreshWeightProgress(); // Function UW-InventoryWidget.UW-InventoryWidget_C.OnRefreshWeightProgress(Event|Public|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void OnChangeMaterial(); // Function UW-InventoryWidget.UW-InventoryWidget_C.OnChangeMaterial(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void OnChangeWeapon(); // Function UW-InventoryWidget.UW-InventoryWidget_C.OnChangeWeapon(Event|Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void OnChangeDetectedItems(); // Function UW-InventoryWidget.UW-InventoryWidget_C.OnChangeDetectedItems(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void OnChangeWeaponAttachment(); // Function UW-InventoryWidget.UW-InventoryWidget_C.OnChangeWeaponAttachment(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void OnChangeWearableItem(); // Function UW-InventoryWidget.UW-InventoryWidget_C.OnChangeWearableItem(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void OnChangeBagpackItem(); // Function UW-InventoryWidget.UW-InventoryWidget_C.OnChangeBagpackItem(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void ExecuteUbergraph_UW-InventoryWidget(int32_t EntryPoint); // Function UW-InventoryWidget.UW-InventoryWidget_C.ExecuteUbergraph_UW-InventoryWidget(Final|UbergraphFunction|HasDefaults) // <Game_BE.exe+0x2B80160>
	void EventDispatcher_OnCloseInventory__DelegateSignature(); // Function UW-InventoryWidget.UW-InventoryWidget_C.EventDispatcher_OnCloseInventory__DelegateSignature(Public|Delegate|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
};

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
inline void UUW-InventoryWidget_C::SetWeightText(struct Unknown& WeightTextRef, struct Unknown& SymbolTextRef, float Weight) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InventoryWidget.UW-InventoryWidget_C.SetWeightText");

	struct SetWeightText_Params {
		struct Unknown& WeightTextRef;
		struct Unknown& SymbolTextRef;
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
inline void UUW-InventoryWidget_C::CheckAnyEquippableAttachmentEmptySlot(struct Unknown& NewAttachmentItemInfo, char& IsEmpty) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InventoryWidget.UW-InventoryWidget_C.CheckAnyEquippableAttachmentEmptySlot");

	struct CheckAnyEquippableAttachmentEmptySlot_Params {
		struct Unknown& NewAttachmentItemInfo;
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
inline void UUW-InventoryWidget_C::ShowItemArea(struct Unknown& ItemInfo, char CanEquip) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InventoryWidget.UW-InventoryWidget_C.ShowItemArea");

	struct ShowItemArea_Params {
		struct Unknown& ItemInfo;
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
inline void UUW-InventoryWidget_C::GetCarriedSlotItems(struct TArray<Unknown>& Items) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InventoryWidget.UW-InventoryWidget_C.GetCarriedSlotItems");

	struct GetCarriedSlotItems_Params {
		struct TArray<Unknown>& Items;
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
inline void UUW-InventoryWidget_C::IsInBound(struct Unknown Begin, struct Unknown End, char& State) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InventoryWidget.UW-InventoryWidget_C.IsInBound");

	struct IsInBound_Params {
		struct Unknown Begin;
		struct Unknown End;
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
inline void UUW-InventoryWidget_C::IsMaterialItem(struct Unknown InventoryItemInfo, char& out_Result) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InventoryWidget.UW-InventoryWidget_C.IsMaterialItem");

	struct IsMaterialItem_Params {
		struct Unknown InventoryItemInfo;
		char& out_Result;
	}; IsMaterialItem_Params Params;

	Params.InventoryItemInfo = InventoryItemInfo;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	out_Result = Params.out_Result;

}

// Function UW-InventoryWidget.UW-InventoryWidget_C.ShowItemDorpPopup
inline void UUW-InventoryWidget_C::ShowItemDorpPopup(struct Unknown BaseSlot, struct Unknown MaterialSlot, char& State) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InventoryWidget.UW-InventoryWidget_C.ShowItemDorpPopup");

	struct ShowItemDorpPopup_Params {
		struct Unknown BaseSlot;
		struct Unknown MaterialSlot;
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
inline char UUW-InventoryWidget_C::CheckMaterialBound(struct Unknown DropPos, struct Unknown Operation) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InventoryWidget.UW-InventoryWidget_C.CheckMaterialBound");

	struct CheckMaterialBound_Params {
		struct Unknown DropPos;
		struct Unknown Operation;
		char ReturnValue;

	}; CheckMaterialBound_Params Params;

	Params.DropPos = DropPos;
	Params.Operation = Operation;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UW-InventoryWidget.UW-InventoryWidget_C.SetRecipeItem
inline void UUW-InventoryWidget_C::SetRecipeItem() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InventoryWidget.UW-InventoryWidget_C.SetRecipeItem");

	struct SetRecipeItem_Params {
		
	}; SetRecipeItem_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-InventoryWidget.UW-InventoryWidget_C.SetMaterialItem
inline void UUW-InventoryWidget_C::SetMaterialItem() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InventoryWidget.UW-InventoryWidget_C.SetMaterialItem");

	struct SetMaterialItem_Params {
		
	}; SetMaterialItem_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-InventoryWidget.UW-InventoryWidget_C.Get_CombineRecipe_Visibility_1
inline enum class Unknow UUW-InventoryWidget_C::Get_CombineRecipe_Visibility_1() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InventoryWidget.UW-InventoryWidget_C.Get_CombineRecipe_Visibility_1");

	struct Get_CombineRecipe_Visibility_1_Params {
		
		enum class Unknow ReturnValue;

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
inline enum class Unknow UUW-InventoryWidget_C::Get_IMG-BG_Visibility_1() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InventoryWidget.UW-InventoryWidget_C.Get_IMG-BG_Visibility_1");

	struct Get_IMG-BG_Visibility_1_Params {
		
		enum class Unknow ReturnValue;

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
inline void UUW-InventoryWidget_C::HoverKeepedSlot(struct Unknown InventoryItemInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InventoryWidget.UW-InventoryWidget_C.HoverKeepedSlot");

	struct HoverKeepedSlot_Params {
		struct Unknown InventoryItemInfo;
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
inline void UUW-InventoryWidget_C::GetMainWidget(struct Unknown& MainWidget) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InventoryWidget.UW-InventoryWidget_C.GetMainWidget");

	struct GetMainWidget_Params {
		struct Unknown& MainWidget;
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
inline void UUW-InventoryWidget_C::DropBoxCompareQuantity(struct TArray<Unknown>& InventoryItemInfo, struct Unknown DropBoxInfo, char& SlotUpdate) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InventoryWidget.UW-InventoryWidget_C.DropBoxCompareQuantity");

	struct DropBoxCompareQuantity_Params {
		struct TArray<Unknown>& InventoryItemInfo;
		struct Unknown DropBoxInfo;
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
inline void UUW-InventoryWidget_C::CheckBoxState(char State, struct Unknown CheckBox) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InventoryWidget.UW-InventoryWidget_C.CheckBoxState");

	struct CheckBoxState_Params {
		char State;
		struct Unknown CheckBox;
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
inline void UUW-InventoryWidget_C::RemoveDropBoxItem(struct Unknown Actor, struct Unknown Slot) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InventoryWidget.UW-InventoryWidget_C.RemoveDropBoxItem");

	struct RemoveDropBoxItem_Params {
		struct Unknown Actor;
		struct Unknown Slot;
	}; RemoveDropBoxItem_Params Params;

	Params.Actor = Actor;
	Params.Slot = Slot;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-InventoryWidget.UW-InventoryWidget_C.AddDropBoxItem
inline void UUW-InventoryWidget_C::AddDropBoxItem(struct Unknown Slotinfo, struct Unknown Actor) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InventoryWidget.UW-InventoryWidget_C.AddDropBoxItem");

	struct AddDropBoxItem_Params {
		struct Unknown Slotinfo;
		struct Unknown Actor;
	}; AddDropBoxItem_Params Params;

	Params.Slotinfo = Slotinfo;
	Params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-InventoryWidget.UW-InventoryWidget_C.FindDropBox
inline void UUW-InventoryWidget_C::FindDropBox(struct Unknown Actor, struct Unknown& DropBox, char& State) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InventoryWidget.UW-InventoryWidget_C.FindDropBox");

	struct FindDropBox_Params {
		struct Unknown Actor;
		struct Unknown& DropBox;
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
inline void UUW-InventoryWidget_C::UpdateDropBoxItem(struct Unknown Actor) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InventoryWidget.UW-InventoryWidget_C.UpdateDropBoxItem");

	struct UpdateDropBoxItem_Params {
		struct Unknown Actor;
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

// Function UW-InventoryWidget.UW-InventoryWidget_C.UpdateProximityGroundWidget
inline void UUW-InventoryWidget_C::UpdateProximityGroundWidget() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InventoryWidget.UW-InventoryWidget_C.UpdateProximityGroundWidget");

	struct UpdateProximityGroundWidget_Params {
		
	}; UpdateProximityGroundWidget_Params Params;


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
inline char UUW-InventoryWidget_C::OnDragOver(struct Unknown MyGeometry, struct Unknown PointerEvent, struct Unknown Operation) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InventoryWidget.UW-InventoryWidget_C.OnDragOver");

	struct OnDragOver_Params {
		struct Unknown MyGeometry;
		struct Unknown PointerEvent;
		struct Unknown Operation;
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
inline void UUW-InventoryWidget_C::CheckWeaponBound(struct Unknown DropPos, struct Unknown Operation) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InventoryWidget.UW-InventoryWidget_C.CheckWeaponBound");

	struct CheckWeaponBound_Params {
		struct Unknown DropPos;
		struct Unknown Operation;
	}; CheckWeaponBound_Params Params;

	Params.DropPos = DropPos;
	Params.Operation = Operation;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-InventoryWidget.UW-InventoryWidget_C.CheckCarriedBound
inline char UUW-InventoryWidget_C::CheckCarriedBound(struct Unknown DropPos, struct Unknown Operation) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InventoryWidget.UW-InventoryWidget_C.CheckCarriedBound");

	struct CheckCarriedBound_Params {
		struct Unknown DropPos;
		struct Unknown Operation;
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
inline void UUW-InventoryWidget_C::CheckProximityBound(struct Unknown DropPos, struct Unknown Operation) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InventoryWidget.UW-InventoryWidget_C.CheckProximityBound");

	struct CheckProximityBound_Params {
		struct Unknown DropPos;
		struct Unknown Operation;
	}; CheckProximityBound_Params Params;

	Params.DropPos = DropPos;
	Params.Operation = Operation;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-InventoryWidget.UW-InventoryWidget_C.ShowBlackMarketButton
inline enum class Unknow UUW-InventoryWidget_C::ShowBlackMarketButton() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InventoryWidget.UW-InventoryWidget_C.ShowBlackMarketButton");

	struct ShowBlackMarketButton_Params {
		
		enum class Unknow ReturnValue;

	}; ShowBlackMarketButton_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UW-InventoryWidget.UW-InventoryWidget_C.UpdateWeaponMesh
inline void UUW-InventoryWidget_C::UpdateWeaponMesh(struct Unknown NewWeapon, int32_t SlotIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InventoryWidget.UW-InventoryWidget_C.UpdateWeaponMesh");

	struct UpdateWeaponMesh_Params {
		struct Unknown NewWeapon;
		int32_t SlotIndex;
	}; UpdateWeaponMesh_Params Params;

	Params.NewWeapon = NewWeapon;
	Params.SlotIndex = SlotIndex;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-InventoryWidget.UW-InventoryWidget_C.GetWearbleItemInfo
inline void UUW-InventoryWidget_C::GetWearbleItemInfo(enum class Unknow WearableType, char& bHas, struct Unknown& ItemInfo, struct Unknown& ItemDetailInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InventoryWidget.UW-InventoryWidget_C.GetWearbleItemInfo");

	struct GetWearbleItemInfo_Params {
		enum class Unknow WearableType;
		char& bHas;
		struct Unknown& ItemInfo;
		struct Unknown& ItemDetailInfo;
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
inline void UUW-InventoryWidget_C::CalcItemWeight(char IsAddOrRemove, struct Unknown ItemInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InventoryWidget.UW-InventoryWidget_C.CalcItemWeight");

	struct CalcItemWeight_Params {
		char IsAddOrRemove;
		struct Unknown ItemInfo;
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
inline void UUW-InventoryWidget_C::SetDragWeaponAttachmentItemFromCarriedSlot(struct Unknown InventoryItemInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InventoryWidget.UW-InventoryWidget_C.SetDragWeaponAttachmentItemFromCarriedSlot");

	struct SetDragWeaponAttachmentItemFromCarriedSlot_Params {
		struct Unknown InventoryItemInfo;
	}; SetDragWeaponAttachmentItemFromCarriedSlot_Params Params;

	Params.InventoryItemInfo = InventoryItemInfo;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-InventoryWidget.UW-InventoryWidget_C.SetDragWeaponAttachmentSlot
inline void UUW-InventoryWidget_C::SetDragWeaponAttachmentSlot(struct Unknown InventoryItemInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InventoryWidget.UW-InventoryWidget_C.SetDragWeaponAttachmentSlot");

	struct SetDragWeaponAttachmentSlot_Params {
		struct Unknown InventoryItemInfo;
	}; SetDragWeaponAttachmentSlot_Params Params;

	Params.InventoryItemInfo = InventoryItemInfo;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-InventoryWidget.UW-InventoryWidget_C.GetInventoryItemDetailInfo
inline void UUW-InventoryWidget_C::GetInventoryItemDetailInfo(struct Unknown InventoryItemInfo, struct Unknown& InventoryItemDetailInfo, char& bResult) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InventoryWidget.UW-InventoryWidget_C.GetInventoryItemDetailInfo");

	struct GetInventoryItemDetailInfo_Params {
		struct Unknown InventoryItemInfo;
		struct Unknown& InventoryItemDetailInfo;
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
inline void UUW-InventoryWidget_C::SetDragCarriedSlot(struct Unknown InventoryItemInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InventoryWidget.UW-InventoryWidget_C.SetDragCarriedSlot");

	struct SetDragCarriedSlot_Params {
		struct Unknown InventoryItemInfo;
	}; SetDragCarriedSlot_Params Params;

	Params.InventoryItemInfo = InventoryItemInfo;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-InventoryWidget.UW-InventoryWidget_C.SetDragWeaponSlot
inline void UUW-InventoryWidget_C::SetDragWeaponSlot(struct Unknown WeaponInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InventoryWidget.UW-InventoryWidget_C.SetDragWeaponSlot");

	struct SetDragWeaponSlot_Params {
		struct Unknown WeaponInfo;
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
inline void UUW-InventoryWidget_C::SetDragWeaponItemFromCarriedSlot(struct Unknown InventoryItemInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InventoryWidget.UW-InventoryWidget_C.SetDragWeaponItemFromCarriedSlot");

	struct SetDragWeaponItemFromCarriedSlot_Params {
		struct Unknown InventoryItemInfo;
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
inline void UUW-InventoryWidget_C::SetDragWeaponItemFromEquippedSlot(struct Unknown InventoryItemInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InventoryWidget.UW-InventoryWidget_C.SetDragWeaponItemFromEquippedSlot");

	struct SetDragWeaponItemFromEquippedSlot_Params {
		struct Unknown InventoryItemInfo;
	}; SetDragWeaponItemFromEquippedSlot_Params Params;

	Params.InventoryItemInfo = InventoryItemInfo;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-InventoryWidget.UW-InventoryWidget_C.SetDragProximitySlot
inline void UUW-InventoryWidget_C::SetDragProximitySlot(struct Unknown InventoryItemInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InventoryWidget.UW-InventoryWidget_C.SetDragProximitySlot");

	struct SetDragProximitySlot_Params {
		struct Unknown InventoryItemInfo;
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
inline void UUW-InventoryWidget_C::HoverAttachItemSlot(struct Unknown InventoryItemInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InventoryWidget.UW-InventoryWidget_C.HoverAttachItemSlot");

	struct HoverAttachItemSlot_Params {
		struct Unknown InventoryItemInfo;
	}; HoverAttachItemSlot_Params Params;

	Params.InventoryItemInfo = InventoryItemInfo;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-InventoryWidget.UW-InventoryWidget_C.HoverWeaponSlot
inline void UUW-InventoryWidget_C::HoverWeaponSlot(struct Unknown InventoryItemInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InventoryWidget.UW-InventoryWidget_C.HoverWeaponSlot");

	struct HoverWeaponSlot_Params {
		struct Unknown InventoryItemInfo;
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
inline struct Unknown UUW-InventoryWidget_C::OnMouseButtonDown(struct Unknown MyGeometry, struct Unknown& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InventoryWidget.UW-InventoryWidget_C.OnMouseButtonDown");

	struct OnMouseButtonDown_Params {
		struct Unknown MyGeometry;
		struct Unknown& MouseEvent;
		struct Unknown ReturnValue;

	}; OnMouseButtonDown_Params Params;

	Params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	MouseEvent = Params.MouseEvent;


	return params.ReturnValue;
}

// Function UW-InventoryWidget.UW-InventoryWidget_C.Get_InputMaskImage_Visibility_1
inline enum class Unknow UUW-InventoryWidget_C::Get_InputMaskImage_Visibility_1() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InventoryWidget.UW-InventoryWidget_C.Get_InputMaskImage_Visibility_1");

	struct Get_InputMaskImage_Visibility_1_Params {
		
		enum class Unknow ReturnValue;

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
inline void UUW-InventoryWidget_C::HoverCarriedSlotList(struct Unknown InventoryItemInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InventoryWidget.UW-InventoryWidget_C.HoverCarriedSlotList");

	struct HoverCarriedSlotList_Params {
		struct Unknown InventoryItemInfo;
	}; HoverCarriedSlotList_Params Params;

	Params.InventoryItemInfo = InventoryItemInfo;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-InventoryWidget.UW-InventoryWidget_C.GetCharacter
inline void UUW-InventoryWidget_C::GetCharacter(char& Result, struct Unknown& CharacterRef) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InventoryWidget.UW-InventoryWidget_C.GetCharacter");

	struct GetCharacter_Params {
		char& Result;
		struct Unknown& CharacterRef;
	}; GetCharacter_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Result = Params.Result;
	CharacterRef = Params.CharacterRef;

}

// Function UW-InventoryWidget.UW-InventoryWidget_C.GetInventoryComponent
inline void UUW-InventoryWidget_C::GetInventoryComponent(char& Result, struct Unknown& InventoryComponent) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InventoryWidget.UW-InventoryWidget_C.GetInventoryComponent");

	struct GetInventoryComponent_Params {
		char& Result;
		struct Unknown& InventoryComponent;
	}; GetInventoryComponent_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Result = Params.Result;
	InventoryComponent = Params.InventoryComponent;

}

// Function UW-InventoryWidget.UW-InventoryWidget_C.HoverEquipSlot
inline void UUW-InventoryWidget_C::HoverEquipSlot(struct Unknown InventoryItemInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InventoryWidget.UW-InventoryWidget_C.HoverEquipSlot");

	struct HoverEquipSlot_Params {
		struct Unknown InventoryItemInfo;
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
inline void UUW-InventoryWidget_C::ResetHover(struct Unknown InventoryItemInfo, char& bResult) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InventoryWidget.UW-InventoryWidget_C.ResetHover");

	struct ResetHover_Params {
		struct Unknown InventoryItemInfo;
		char& bResult;
	}; ResetHover_Params Params;

	Params.InventoryItemInfo = InventoryItemInfo;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	bResult = Params.bResult;

}

// Function UW-InventoryWidget.UW-InventoryWidget_C.IsCarriable
inline void UUW-InventoryWidget_C::IsCarriable(struct Unknown InventoryItemInfo, char& out_Result, char& InStrongbox) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InventoryWidget.UW-InventoryWidget_C.IsCarriable");

	struct IsCarriable_Params {
		struct Unknown InventoryItemInfo;
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
inline char UUW-InventoryWidget_C::OnDrop(struct Unknown MyGeometry, struct Unknown PointerEvent, struct Unknown Operation) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InventoryWidget.UW-InventoryWidget_C.OnDrop");

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

// Function UW-InventoryWidget.UW-InventoryWidget_C.SetCarriedItems
inline void UUW-InventoryWidget_C::SetCarriedItems() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InventoryWidget.UW-InventoryWidget_C.SetCarriedItems");

	struct SetCarriedItems_Params {
		
	}; SetCarriedItems_Params Params;


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

// Function UW-InventoryWidget.UW-InventoryWidget_C.SetEquippedItems
inline void UUW-InventoryWidget_C::SetEquippedItems() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InventoryWidget.UW-InventoryWidget_C.SetEquippedItems");

	struct SetEquippedItems_Params {
		
	}; SetEquippedItems_Params Params;


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

// Function UW-InventoryWidget.UW-InventoryWidget_C.Construct
inline void UUW-InventoryWidget_C::Construct() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InventoryWidget.UW-InventoryWidget_C.Construct");

	struct Construct_Params {
		
	}; Construct_Params Params;


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
inline void UUW-InventoryWidget_C::Tick(struct Unknown MyGeometry, float InDeltaTime) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InventoryWidget.UW-InventoryWidget_C.Tick");

	struct Tick_Params {
		struct Unknown MyGeometry;
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
inline void UUW-InventoryWidget_C::ShowStatupAnim(struct Unknown& StatupParameters, enum class Unknow StatupType) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InventoryWidget.UW-InventoryWidget_C.ShowStatupAnim");

	struct ShowStatupAnim_Params {
		struct Unknown& StatupParameters;
		enum class Unknow StatupType;
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

