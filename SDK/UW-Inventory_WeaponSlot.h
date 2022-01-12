// WidgetBlueprintGeneratedClass UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C
class UUW-Inventory_WeaponSlot_C : public UUW-Inventory_SlotBase_C {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1358 (8)
	struct UWidgetAnimation Anim_LoopHintMainWeapon; // 0x1360 (8)
	struct UWidgetAnimation Anim_Material_Get; // 0x1368 (8)
	struct UWidgetAnimation Anim_Material_Hover; // 0x1370 (8)
	struct UWidgetAnimation Anim_Upgrade; // 0x1378 (8)
	struct UWidgetAnimation Anim_Progress; // 0x1380 (8)
	struct UWidgetAnimation WeaponPerk_fadeIn; // 0x1388 (8)
	struct UWidgetAnimation Anim_LoopNotifySubWeapon; // 0x1390 (8)
	struct UWidgetAnimation Anim_StartNotifySubWeapon; // 0x1398 (8)
	struct UWidgetAnimation Anim_LoopNotifyMainWeapon; // 0x13A0 (8)
	struct UWidgetAnimation Anim_StartNotifyMainWeapon; // 0x13A8 (8)
	struct UTextBlock Ammo01; // 0x13B0 (8)
	struct UTextBlock Ammo02; // 0x13B8 (8)
	struct UTextBlock AmmoInfo01; // 0x13C0 (8)
	struct UTextBlock AmmoInfo02; // 0x13C8 (8)
	struct UUW-Inventory_WeaponAttachmentSlot_C Barrel01; // 0x13D0 (8)
	struct UImage BG01; // 0x13D8 (8)
	struct UImage BG02; // 0x13E0 (8)
	struct UImage BorderImage02; // 0x13E8 (8)
	struct UButton btn_RecipeTree; // 0x13F0 (8)
	struct UUW-Inventory_WeaponAttachmentSlot_C ButtStockSlot01; // 0x13F8 (8)
	struct UUW-Inventory_WeaponAttachmentSlot_C ButtStockSlot02; // 0x1400 (8)
	struct UCanvasPanel Canvas_AnimMain; // 0x1408 (8)
	struct UCanvasPanel Canvas_AnimMain_Progress; // 0x1410 (8)
	struct UCanvasPanel Canvas_AnimMain_Upgrade; // 0x1418 (8)
	struct UCanvasPanel Canvas_AnimSub; // 0x1420 (8)
	struct UImage Choice_BG01; // 0x1428 (8)
	struct UImage Choice_BG02; // 0x1430 (8)
	struct UUW-Inventory_WeaponAttachmentSlot_C GripSlot01; // 0x1438 (8)
	struct UHorizontalBox HorizontalBox_Perk; // 0x1440 (8)
	struct UHorizontalBox HorizontalBox_Rarity1; // 0x1448 (8)
	struct UHorizontalBox HorizontalBox_Rarity2; // 0x1450 (8)
	struct UImage Image_2; // 0x1458 (8)
	struct UImage Image_3; // 0x1460 (8)
	struct UImage Image_5; // 0x1468 (8)
	struct UImage Image_7; // 0x1470 (8)
	struct UImage Image_48; // 0x1478 (8)
	struct UImage Image_85; // 0x1480 (8)
	struct UImage Image_86; // 0x1488 (8)
	struct UImage Image_175; // 0x1490 (8)
	struct UImage Image_202; // 0x1498 (8)
	struct UImage Image_212; // 0x14A0 (8)
	struct UImage Image_214; // 0x14A8 (8)
	struct UImage Image_217; // 0x14B0 (8)
	struct UImage Image_219; // 0x14B8 (8)
	struct UImage Image_234; // 0x14C0 (8)
	struct UImage Image_356; // 0x14C8 (8)
	struct UImage Image_369; // 0x14D0 (8)
	struct UImage Image_371; // 0x14D8 (8)
	struct UImage Image_372; // 0x14E0 (8)
	struct UImage Image_682; // 0x14E8 (8)
	struct UImage Image_805; // 0x14F0 (8)
	struct UImage Image_807; // 0x14F8 (8)
	struct UImage Image_808; // 0x1500 (8)
	struct UImage Image_809; // 0x1508 (8)
	struct UImage Image_1071; // 0x1510 (8)
	struct UImage Image_Bindable; // 0x1518 (8)
	struct UImage Image_Supply; // 0x1520 (8)
	struct UImage ImageAmmo01; // 0x1528 (8)
	struct UImage ImageAmmo02; // 0x1530 (8)
	struct USizeBox Info01; // 0x1538 (8)
	struct USizeBox Info02; // 0x1540 (8)
	struct UImage Line01; // 0x1548 (8)
	struct UImage Line02; // 0x1550 (8)
	struct UUW-Inventory_WeaponAttachmentSlot_C MagazineSlot01; // 0x1558 (8)
	struct UUW-Inventory_WeaponAttachmentSlot_C MagazineSlot02; // 0x1560 (8)
	struct USizeBox MainWeaponSlot; // 0x1568 (8)
	struct UUW-Inventory_WeaponAttachmentSlot_C MuzzleDeviceSlot01; // 0x1570 (8)
	struct UUW-Inventory_WeaponAttachmentSlot_C MuzzleDeviceSlot02; // 0x1578 (8)
	struct UOverlay Overlay_2; // 0x1580 (8)
	struct UUW-Inventory_WeaponAttachmentSlot_C Perk01; // 0x1588 (8)
	struct UUW-Inventory_WeaponAttachmentSlot_C Perk01_Sub; // 0x1590 (8)
	struct UUW-Inventory_WeaponAttachmentSlot_C Perk02; // 0x1598 (8)
	struct UUW-Inventory_WeaponAttachmentSlot_C Perk02_Sub; // 0x15A0 (8)
	struct UUW-Inventory_WeaponAttachmentSlot_C Perk03; // 0x15A8 (8)
	struct UUW-Inventory_WeaponAttachmentSlot_C Perk03_Sub; // 0x15B0 (8)
	struct UUW-Inventory_WeaponAttachmentSlot_C Perk04; // 0x15B8 (8)
	struct UUW-Inventory_WeaponAttachmentSlot_C Perk04_Sub; // 0x15C0 (8)
	struct UUW-Inventory_WeaponAttachmentSlot_C SightSlot01; // 0x15C8 (8)
	struct UUW-Inventory_WeaponAttachmentSlot_C SightSlot02; // 0x15D0 (8)
	struct USizeBox SubWeaponSlot; // 0x15D8 (8)
	struct UTextBlock TextBlock_1; // 0x15E0 (8)
	struct UTextBlock TextBlock_Range01; // 0x15E8 (8)
	struct UImage TopNameBG01; // 0x15F0 (8)
	struct UImage TopNameBG02; // 0x15F8 (8)
	struct UUW-Inventory_MaterialIconSlot_C UW-Inventory_MaterialIconSlot; // 0x1600 (8)
	struct UUW-Inventory_WeaponPerkSlot_C UW-Inventory_WeaponPerkSlot; // 0x1608 (8)
	struct UUW-Inventory_WeaponPerkSlot_C UW-Inventory_WeaponPerkSlot_C_2; // 0x1610 (8)
	struct UUW-Inventory_WeaponPerkSlot_C UW-Inventory_WeaponPerkSlot_C_3; // 0x1618 (8)
	struct UUW-StatupWidget_C UW-StatupWidget; // 0x1620 (8)
	struct UImage WeaponImage01; // 0x1628 (8)
	struct UImage WeaponImage02; // 0x1630 (8)
	struct UTextBlock WeaponIndex01; // 0x1638 (8)
	struct UTextBlock WeaponIndex02; // 0x1640 (8)
	struct UTextBlock WeaponName01; // 0x1648 (8)
	struct UTextBlock WeaponName02; // 0x1650 (8)
	struct UOverlay WeaponTitle01; // 0x1658 (8)
	struct UOverlay WeaponTitle02; // 0x1660 (8)
	struct UWidgetSwitcher WidgetSwitcher_1; // 0x1668 (8)
	struct UWidgetSwitcher WidgetSwitcher_Rarity; // 0x1670 (8)
	struct UWidgetSwitcher WidgetSwitcher_SpecialWeapon; // 0x1678 (8)
	enum class EWeaponType WeaponType; // 0x1680 (1)
	int32_t SlotIndex; // 0x1684 (4)
	struct ABravoHotelWeaponBase WeaponBase; // 0x1688 (8)
	char bCanEquip : 0; // 0x1690 (1)
	struct TMap<enum class EWeaponAttachmentType, struct UUW-Inventory_WeaponAttachmentSlot_C> WeaponAttachmentSlots01; // 0x1698 (80)
	struct TMap<enum class EWeaponAttachmentType, struct UUW-Inventory_WeaponAttachmentSlot_C> WeaponAttachmentSlots02; // 0x16E8 (80)
	float WeaponIconHeight; // 0x1738 (4)
	char bHover : 0; // 0x173C (1)
	struct UUW-Inventory_ItemSlotHover_C HoverWidget; // 0x1740 (8)
	int32_t NotifyAnimLoopNum; // 0x1748 (4)

	void IsEquipped(char& Return); // Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.IsEquipped(Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // <Game_BE.exe+0x2B80160>
	void CheckNeedEmptyPerkWeaponTooltip(char& NewParam); // Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.CheckNeedEmptyPerkWeaponTooltip(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // <Game_BE.exe+0x2B80160>
	void ShowStatupAnim(struct FStatupAnimParameters& StatParams); // Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.ShowStatupAnim(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void SetMaterialIcon(); // Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.SetMaterialIcon(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	enum class ESlateVisibility Get_btn_RecipeTree_Visibility_1(); // Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.Get_btn_RecipeTree_Visibility_1(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <Game_BE.exe+0x2B80160>
	void CheckSpecialWeapon(); // Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.CheckSpecialWeapon(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void SetRarityInfo(struct FInventoryItemInfo ItemInfo); // Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.SetRarityInfo(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void SetHoverWidgetRef(); // Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.SetHoverWidgetRef(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void DisibleEquiped(); // Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.DisibleEquiped(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void InitWeaponSlot(); // Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.InitWeaponSlot(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void DragStart_Imp(struct UDragDropOperation& DragDropOp); // Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.DragStart_Imp(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void HoverSelectReset(); // Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.HoverSelectReset(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void IsDropableOnCarried(char& out_Result); // Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.IsDropableOnCarried(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <Game_BE.exe+0x2B80160>
	void UnEquip(); // Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.UnEquip(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void HoverEquipAttachment(enum class EWeaponAttachmentType WeaponAttachmentType); // Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.HoverEquipAttachment(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void DragSelectSlot(enum class EWeaponType WeaponType, char& bReault); // Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.DragSelectSlot(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void IsDraging(char& bResult); // Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.IsDraging(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <Game_BE.exe+0x2B80160>
	void ResetHoverAllSlot(char& bResult); // Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.ResetHoverAllSlot(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void ResetHoverWeaponSlotList(char& bResult); // Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.ResetHoverWeaponSlotList(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	char OnDrop(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation Operation); // Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.OnDrop(BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void OnDragDetected(struct FGeometry MyGeometry, struct FPointerEvent& PointerEvent, struct UDragDropOperation& Operation); // Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.OnDragDetected(BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void DragFindAttachItemSlot(struct FInventoryItemInfo InventoryItemInfo, char& bResult); // Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.DragFindAttachItemSlot(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void DragFindEquipAttachment(enum class EWeaponAttachmentType WeaponAttachmentType); // Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.DragFindEquipAttachment(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void HoverResetAttachItemSlot(); // Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.HoverResetAttachItemSlot(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void HoverSelectEquipAttachment(enum class EWeaponAttachmentType WeaponAttachmentType); // Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.HoverSelectEquipAttachment(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void HoverSelectAttachItemSlot(struct FInventoryItemInfo InventoryItemInfo, char& bResult); // Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.HoverSelectAttachItemSlot(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void IsMainWeapon(char& bResult); // Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.IsMainWeapon(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void OnRButtonClick(char& bResult); // Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.OnRButtonClick(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void SetHoverInfo(); // Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.SetHoverInfo(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	struct FText Get_AmmoInfo02_Text_1(); // Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.Get_AmmoInfo02_Text_1(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <Game_BE.exe+0x2B80160>
	struct FText Get_AmmoInfo01_Text_1(); // Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.Get_AmmoInfo01_Text_1(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <Game_BE.exe+0x2B80160>
	struct FText Get_Ammo02_Text_1(); // Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.Get_Ammo02_Text_1(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <Game_BE.exe+0x2B80160>
	struct FText Get_Ammo01_Text_1(); // Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.Get_Ammo01_Text_1(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <Game_BE.exe+0x2B80160>
	void SetSubWeaponAttachment(); // Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.SetSubWeaponAttachment(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void InitSubWeaponAttachment(); // Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.InitSubWeaponAttachment(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void SetMainWeaponAttachment(); // Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.SetMainWeaponAttachment(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void InitMainWeaponAttachment(); // Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.InitMainWeaponAttachment(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void GetAvailableWeaponAttachment(enum class EWeaponAttachmentType AttachmentType, char& bResult); // Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.GetAvailableWeaponAttachment(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void Reset(int32_t SlotIndex); // Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.Reset(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void Drop(); // Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.Drop(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void SetInfo(struct UUW-InventoryWidget_C InventoryWidget, struct ABravoHotelWeaponBase WeaponBaseObject, struct FInventoryItemInfo InventoryItemInfo); // Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.SetInfo(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void OnLoaded_12B755EE4F233763D6BD21B48D6176F0(struct Object Loaded); // Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.OnLoaded_12B755EE4F233763D6BD21B48D6176F0(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void OnLoaded_D1195FCF4E38C6E811F1FCBC38F521B6(struct Object Loaded); // Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.OnLoaded_D1195FCF4E38C6E811F1FCBC38F521B6(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.OnMouseEnter(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.OnMouseLeave(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void Init(int32_t SlotIndex); // Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.Init(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void CanEquip(); // Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.CanEquip(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void Construct(); // Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void Hover(); // Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.Hover(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void OnDragEnter(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation Operation); // Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.OnDragEnter(BlueprintCosmetic|Event|Public|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void OnDragLeave(struct FPointerEvent PointerEvent, struct UDragDropOperation Operation); // Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.OnDragLeave(BlueprintCosmetic|Event|Public|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void SelectEquip(); // Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.SelectEquip(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void ResetHover(); // Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.ResetHover(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void ResetCanEquip(); // Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.ResetCanEquip(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void ResetSelectEquip(); // Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.ResetSelectEquip(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void AsyncLoadWeaponIcon(struct TSoftObjectPtr<Object> IconTexture); // Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.AsyncLoadWeaponIcon(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void AsyncLoadAmmoIcon(struct TSoftObjectPtr<UPaperSprite> IconTexture); // Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.AsyncLoadAmmoIcon(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void Event_WeaponInfo(int32_t Idx, int32_t Ammo, int32_t MaxAmmo); // Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.Event_WeaponInfo(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void NotifyMainWeapon(); // Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.NotifyMainWeapon(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void NotifySubWeapon(); // Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.NotifySubWeapon(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void OnAnimationFinished(struct UWidgetAnimation Animation); // Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.OnAnimationFinished(BlueprintCosmetic|Event|Protected|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void CheckInventoryRef(); // Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.CheckInventoryRef(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void StopNotify(); // Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.StopNotify(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void BndEvt__btn_RecipeTree_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.BndEvt__btn_RecipeTree_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void CompleteCombine(); // Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.CompleteCombine(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void CompleteCombineOnRecipeTree(); // Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.CompleteCombineOnRecipeTree(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void HoverRecipeTree(); // Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.HoverRecipeTree(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void OnUpdateCastingDelegateEvent(struct FCastingInfo& CastingInfo, float CastingPercent); // Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.OnUpdateCastingDelegateEvent(HasOutParms|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void ExecuteUbergraph_UW-Inventory_WeaponSlot(int32_t EntryPoint); // Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.ExecuteUbergraph_UW-Inventory_WeaponSlot(Final|UbergraphFunction|HasDefaults) // <Game_BE.exe+0x2B80160>
};

// Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.IsEquipped
inline void UUW-Inventory_WeaponSlot_C::IsEquipped(char& Return) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.IsEquipped");

	struct IsEquipped_Params {
		char& Return;
	}; IsEquipped_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Return = Params.Return;

}

// Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.CheckNeedEmptyPerkWeaponTooltip
inline void UUW-Inventory_WeaponSlot_C::CheckNeedEmptyPerkWeaponTooltip(char& NewParam) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.CheckNeedEmptyPerkWeaponTooltip");

	struct CheckNeedEmptyPerkWeaponTooltip_Params {
		char& NewParam;
	}; CheckNeedEmptyPerkWeaponTooltip_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	NewParam = Params.NewParam;

}

// Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.ShowStatupAnim
inline void UUW-Inventory_WeaponSlot_C::ShowStatupAnim(struct FStatupAnimParameters& StatParams) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.ShowStatupAnim");

	struct ShowStatupAnim_Params {
		struct FStatupAnimParameters& StatParams;
	}; ShowStatupAnim_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	StatParams = Params.StatParams;

}

// Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.SetMaterialIcon
inline void UUW-Inventory_WeaponSlot_C::SetMaterialIcon() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.SetMaterialIcon");

	struct SetMaterialIcon_Params {
		
	}; SetMaterialIcon_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.Get_btn_RecipeTree_Visibility_1
inline enum class ESlateVisibility UUW-Inventory_WeaponSlot_C::Get_btn_RecipeTree_Visibility_1() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.Get_btn_RecipeTree_Visibility_1");

	struct Get_btn_RecipeTree_Visibility_1_Params {
		
		enum class ESlateVisibility ReturnValue;

	}; Get_btn_RecipeTree_Visibility_1_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.CheckSpecialWeapon
inline void UUW-Inventory_WeaponSlot_C::CheckSpecialWeapon() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.CheckSpecialWeapon");

	struct CheckSpecialWeapon_Params {
		
	}; CheckSpecialWeapon_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.SetRarityInfo
inline void UUW-Inventory_WeaponSlot_C::SetRarityInfo(struct FInventoryItemInfo ItemInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.SetRarityInfo");

	struct SetRarityInfo_Params {
		struct FInventoryItemInfo ItemInfo;
	}; SetRarityInfo_Params Params;

	Params.ItemInfo = ItemInfo;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.SetHoverWidgetRef
inline void UUW-Inventory_WeaponSlot_C::SetHoverWidgetRef() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.SetHoverWidgetRef");

	struct SetHoverWidgetRef_Params {
		
	}; SetHoverWidgetRef_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.DisibleEquiped
inline void UUW-Inventory_WeaponSlot_C::DisibleEquiped() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.DisibleEquiped");

	struct DisibleEquiped_Params {
		
	}; DisibleEquiped_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.InitWeaponSlot
inline void UUW-Inventory_WeaponSlot_C::InitWeaponSlot() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.InitWeaponSlot");

	struct InitWeaponSlot_Params {
		
	}; InitWeaponSlot_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.DragStart_Imp
inline void UUW-Inventory_WeaponSlot_C::DragStart_Imp(struct UDragDropOperation& DragDropOp) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.DragStart_Imp");

	struct DragStart_Imp_Params {
		struct UDragDropOperation& DragDropOp;
	}; DragStart_Imp_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	DragDropOp = Params.DragDropOp;

}

// Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.HoverSelectReset
inline void UUW-Inventory_WeaponSlot_C::HoverSelectReset() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.HoverSelectReset");

	struct HoverSelectReset_Params {
		
	}; HoverSelectReset_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.IsDropableOnCarried
inline void UUW-Inventory_WeaponSlot_C::IsDropableOnCarried(char& out_Result) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.IsDropableOnCarried");

	struct IsDropableOnCarried_Params {
		char& out_Result;
	}; IsDropableOnCarried_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	out_Result = Params.out_Result;

}

// Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.UnEquip
inline void UUW-Inventory_WeaponSlot_C::UnEquip() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.UnEquip");

	struct UnEquip_Params {
		
	}; UnEquip_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.HoverEquipAttachment
inline void UUW-Inventory_WeaponSlot_C::HoverEquipAttachment(enum class EWeaponAttachmentType WeaponAttachmentType) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.HoverEquipAttachment");

	struct HoverEquipAttachment_Params {
		enum class EWeaponAttachmentType WeaponAttachmentType;
	}; HoverEquipAttachment_Params Params;

	Params.WeaponAttachmentType = WeaponAttachmentType;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.DragSelectSlot
inline void UUW-Inventory_WeaponSlot_C::DragSelectSlot(enum class EWeaponType WeaponType, char& bReault) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.DragSelectSlot");

	struct DragSelectSlot_Params {
		enum class EWeaponType WeaponType;
		char& bReault;
	}; DragSelectSlot_Params Params;

	Params.WeaponType = WeaponType;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	bReault = Params.bReault;

}

// Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.IsDraging
inline void UUW-Inventory_WeaponSlot_C::IsDraging(char& bResult) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.IsDraging");

	struct IsDraging_Params {
		char& bResult;
	}; IsDraging_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	bResult = Params.bResult;

}

// Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.ResetHoverAllSlot
inline void UUW-Inventory_WeaponSlot_C::ResetHoverAllSlot(char& bResult) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.ResetHoverAllSlot");

	struct ResetHoverAllSlot_Params {
		char& bResult;
	}; ResetHoverAllSlot_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	bResult = Params.bResult;

}

// Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.ResetHoverWeaponSlotList
inline void UUW-Inventory_WeaponSlot_C::ResetHoverWeaponSlotList(char& bResult) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.ResetHoverWeaponSlotList");

	struct ResetHoverWeaponSlotList_Params {
		char& bResult;
	}; ResetHoverWeaponSlotList_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	bResult = Params.bResult;

}

// Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.OnDrop
inline char UUW-Inventory_WeaponSlot_C::OnDrop(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation Operation) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.OnDrop");

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

// Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.OnDragDetected
inline void UUW-Inventory_WeaponSlot_C::OnDragDetected(struct FGeometry MyGeometry, struct FPointerEvent& PointerEvent, struct UDragDropOperation& Operation) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.OnDragDetected");

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

// Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.DragFindAttachItemSlot
inline void UUW-Inventory_WeaponSlot_C::DragFindAttachItemSlot(struct FInventoryItemInfo InventoryItemInfo, char& bResult) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.DragFindAttachItemSlot");

	struct DragFindAttachItemSlot_Params {
		struct FInventoryItemInfo InventoryItemInfo;
		char& bResult;
	}; DragFindAttachItemSlot_Params Params;

	Params.InventoryItemInfo = InventoryItemInfo;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	bResult = Params.bResult;

}

// Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.DragFindEquipAttachment
inline void UUW-Inventory_WeaponSlot_C::DragFindEquipAttachment(enum class EWeaponAttachmentType WeaponAttachmentType) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.DragFindEquipAttachment");

	struct DragFindEquipAttachment_Params {
		enum class EWeaponAttachmentType WeaponAttachmentType;
	}; DragFindEquipAttachment_Params Params;

	Params.WeaponAttachmentType = WeaponAttachmentType;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.HoverResetAttachItemSlot
inline void UUW-Inventory_WeaponSlot_C::HoverResetAttachItemSlot() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.HoverResetAttachItemSlot");

	struct HoverResetAttachItemSlot_Params {
		
	}; HoverResetAttachItemSlot_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.HoverSelectEquipAttachment
inline void UUW-Inventory_WeaponSlot_C::HoverSelectEquipAttachment(enum class EWeaponAttachmentType WeaponAttachmentType) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.HoverSelectEquipAttachment");

	struct HoverSelectEquipAttachment_Params {
		enum class EWeaponAttachmentType WeaponAttachmentType;
	}; HoverSelectEquipAttachment_Params Params;

	Params.WeaponAttachmentType = WeaponAttachmentType;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.HoverSelectAttachItemSlot
inline void UUW-Inventory_WeaponSlot_C::HoverSelectAttachItemSlot(struct FInventoryItemInfo InventoryItemInfo, char& bResult) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.HoverSelectAttachItemSlot");

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

// Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.IsMainWeapon
inline void UUW-Inventory_WeaponSlot_C::IsMainWeapon(char& bResult) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.IsMainWeapon");

	struct IsMainWeapon_Params {
		char& bResult;
	}; IsMainWeapon_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	bResult = Params.bResult;

}

// Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.OnRButtonClick
inline void UUW-Inventory_WeaponSlot_C::OnRButtonClick(char& bResult) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.OnRButtonClick");

	struct OnRButtonClick_Params {
		char& bResult;
	}; OnRButtonClick_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	bResult = Params.bResult;

}

// Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.SetHoverInfo
inline void UUW-Inventory_WeaponSlot_C::SetHoverInfo() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.SetHoverInfo");

	struct SetHoverInfo_Params {
		
	}; SetHoverInfo_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.Get_AmmoInfo02_Text_1
inline struct FText UUW-Inventory_WeaponSlot_C::Get_AmmoInfo02_Text_1() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.Get_AmmoInfo02_Text_1");

	struct Get_AmmoInfo02_Text_1_Params {
		
		struct FText ReturnValue;

	}; Get_AmmoInfo02_Text_1_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.Get_AmmoInfo01_Text_1
inline struct FText UUW-Inventory_WeaponSlot_C::Get_AmmoInfo01_Text_1() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.Get_AmmoInfo01_Text_1");

	struct Get_AmmoInfo01_Text_1_Params {
		
		struct FText ReturnValue;

	}; Get_AmmoInfo01_Text_1_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.Get_Ammo02_Text_1
inline struct FText UUW-Inventory_WeaponSlot_C::Get_Ammo02_Text_1() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.Get_Ammo02_Text_1");

	struct Get_Ammo02_Text_1_Params {
		
		struct FText ReturnValue;

	}; Get_Ammo02_Text_1_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.Get_Ammo01_Text_1
inline struct FText UUW-Inventory_WeaponSlot_C::Get_Ammo01_Text_1() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.Get_Ammo01_Text_1");

	struct Get_Ammo01_Text_1_Params {
		
		struct FText ReturnValue;

	}; Get_Ammo01_Text_1_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.SetSubWeaponAttachment
inline void UUW-Inventory_WeaponSlot_C::SetSubWeaponAttachment() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.SetSubWeaponAttachment");

	struct SetSubWeaponAttachment_Params {
		
	}; SetSubWeaponAttachment_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.InitSubWeaponAttachment
inline void UUW-Inventory_WeaponSlot_C::InitSubWeaponAttachment() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.InitSubWeaponAttachment");

	struct InitSubWeaponAttachment_Params {
		
	}; InitSubWeaponAttachment_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.SetMainWeaponAttachment
inline void UUW-Inventory_WeaponSlot_C::SetMainWeaponAttachment() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.SetMainWeaponAttachment");

	struct SetMainWeaponAttachment_Params {
		
	}; SetMainWeaponAttachment_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.InitMainWeaponAttachment
inline void UUW-Inventory_WeaponSlot_C::InitMainWeaponAttachment() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.InitMainWeaponAttachment");

	struct InitMainWeaponAttachment_Params {
		
	}; InitMainWeaponAttachment_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.GetAvailableWeaponAttachment
inline void UUW-Inventory_WeaponSlot_C::GetAvailableWeaponAttachment(enum class EWeaponAttachmentType AttachmentType, char& bResult) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.GetAvailableWeaponAttachment");

	struct GetAvailableWeaponAttachment_Params {
		enum class EWeaponAttachmentType AttachmentType;
		char& bResult;
	}; GetAvailableWeaponAttachment_Params Params;

	Params.AttachmentType = AttachmentType;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	bResult = Params.bResult;

}

// Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.Reset
inline void UUW-Inventory_WeaponSlot_C::Reset(int32_t SlotIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.Reset");

	struct Reset_Params {
		int32_t SlotIndex;
	}; Reset_Params Params;

	Params.SlotIndex = SlotIndex;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.Drop
inline void UUW-Inventory_WeaponSlot_C::Drop() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.Drop");

	struct Drop_Params {
		
	}; Drop_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.SetInfo
inline void UUW-Inventory_WeaponSlot_C::SetInfo(struct UUW-InventoryWidget_C InventoryWidget, struct ABravoHotelWeaponBase WeaponBaseObject, struct FInventoryItemInfo InventoryItemInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.SetInfo");

	struct SetInfo_Params {
		struct UUW-InventoryWidget_C InventoryWidget;
		struct ABravoHotelWeaponBase WeaponBaseObject;
		struct FInventoryItemInfo InventoryItemInfo;
	}; SetInfo_Params Params;

	Params.InventoryWidget = InventoryWidget;
	Params.WeaponBaseObject = WeaponBaseObject;
	Params.InventoryItemInfo = InventoryItemInfo;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.OnLoaded_12B755EE4F233763D6BD21B48D6176F0
inline void UUW-Inventory_WeaponSlot_C::OnLoaded_12B755EE4F233763D6BD21B48D6176F0(struct Object Loaded) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.OnLoaded_12B755EE4F233763D6BD21B48D6176F0");

	struct OnLoaded_12B755EE4F233763D6BD21B48D6176F0_Params {
		struct Object Loaded;
	}; OnLoaded_12B755EE4F233763D6BD21B48D6176F0_Params Params;

	Params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.OnLoaded_D1195FCF4E38C6E811F1FCBC38F521B6
inline void UUW-Inventory_WeaponSlot_C::OnLoaded_D1195FCF4E38C6E811F1FCBC38F521B6(struct Object Loaded) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.OnLoaded_D1195FCF4E38C6E811F1FCBC38F521B6");

	struct OnLoaded_D1195FCF4E38C6E811F1FCBC38F521B6_Params {
		struct Object Loaded;
	}; OnLoaded_D1195FCF4E38C6E811F1FCBC38F521B6_Params Params;

	Params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.OnMouseEnter
inline void UUW-Inventory_WeaponSlot_C::OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.OnMouseEnter");

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

// Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.OnMouseLeave
inline void UUW-Inventory_WeaponSlot_C::OnMouseLeave(struct FPointerEvent& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.OnMouseLeave");

	struct OnMouseLeave_Params {
		struct FPointerEvent& MouseEvent;
	}; OnMouseLeave_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	MouseEvent = Params.MouseEvent;

}

// Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.Init
inline void UUW-Inventory_WeaponSlot_C::Init(int32_t SlotIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.Init");

	struct Init_Params {
		int32_t SlotIndex;
	}; Init_Params Params;

	Params.SlotIndex = SlotIndex;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.CanEquip
inline void UUW-Inventory_WeaponSlot_C::CanEquip() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.CanEquip");

	struct CanEquip_Params {
		
	}; CanEquip_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.Construct
inline void UUW-Inventory_WeaponSlot_C::Construct() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.Construct");

	struct Construct_Params {
		
	}; Construct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.Hover
inline void UUW-Inventory_WeaponSlot_C::Hover() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.Hover");

	struct Hover_Params {
		
	}; Hover_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.OnDragEnter
inline void UUW-Inventory_WeaponSlot_C::OnDragEnter(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation Operation) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.OnDragEnter");

	struct OnDragEnter_Params {
		struct FGeometry MyGeometry;
		struct FPointerEvent PointerEvent;
		struct UDragDropOperation Operation;
	}; OnDragEnter_Params Params;

	Params.MyGeometry = MyGeometry;
	Params.PointerEvent = PointerEvent;
	Params.Operation = Operation;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.OnDragLeave
inline void UUW-Inventory_WeaponSlot_C::OnDragLeave(struct FPointerEvent PointerEvent, struct UDragDropOperation Operation) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.OnDragLeave");

	struct OnDragLeave_Params {
		struct FPointerEvent PointerEvent;
		struct UDragDropOperation Operation;
	}; OnDragLeave_Params Params;

	Params.PointerEvent = PointerEvent;
	Params.Operation = Operation;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.SelectEquip
inline void UUW-Inventory_WeaponSlot_C::SelectEquip() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.SelectEquip");

	struct SelectEquip_Params {
		
	}; SelectEquip_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.ResetHover
inline void UUW-Inventory_WeaponSlot_C::ResetHover() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.ResetHover");

	struct ResetHover_Params {
		
	}; ResetHover_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.ResetCanEquip
inline void UUW-Inventory_WeaponSlot_C::ResetCanEquip() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.ResetCanEquip");

	struct ResetCanEquip_Params {
		
	}; ResetCanEquip_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.ResetSelectEquip
inline void UUW-Inventory_WeaponSlot_C::ResetSelectEquip() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.ResetSelectEquip");

	struct ResetSelectEquip_Params {
		
	}; ResetSelectEquip_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.AsyncLoadWeaponIcon
inline void UUW-Inventory_WeaponSlot_C::AsyncLoadWeaponIcon(struct TSoftObjectPtr<Object> IconTexture) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.AsyncLoadWeaponIcon");

	struct AsyncLoadWeaponIcon_Params {
		struct TSoftObjectPtr<Object> IconTexture;
	}; AsyncLoadWeaponIcon_Params Params;

	Params.IconTexture = IconTexture;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.AsyncLoadAmmoIcon
inline void UUW-Inventory_WeaponSlot_C::AsyncLoadAmmoIcon(struct TSoftObjectPtr<UPaperSprite> IconTexture) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.AsyncLoadAmmoIcon");

	struct AsyncLoadAmmoIcon_Params {
		struct TSoftObjectPtr<UPaperSprite> IconTexture;
	}; AsyncLoadAmmoIcon_Params Params;

	Params.IconTexture = IconTexture;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.Event_WeaponInfo
inline void UUW-Inventory_WeaponSlot_C::Event_WeaponInfo(int32_t Idx, int32_t Ammo, int32_t MaxAmmo) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.Event_WeaponInfo");

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

// Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.NotifyMainWeapon
inline void UUW-Inventory_WeaponSlot_C::NotifyMainWeapon() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.NotifyMainWeapon");

	struct NotifyMainWeapon_Params {
		
	}; NotifyMainWeapon_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.NotifySubWeapon
inline void UUW-Inventory_WeaponSlot_C::NotifySubWeapon() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.NotifySubWeapon");

	struct NotifySubWeapon_Params {
		
	}; NotifySubWeapon_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.OnAnimationFinished
inline void UUW-Inventory_WeaponSlot_C::OnAnimationFinished(struct UWidgetAnimation Animation) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.OnAnimationFinished");

	struct OnAnimationFinished_Params {
		struct UWidgetAnimation Animation;
	}; OnAnimationFinished_Params Params;

	Params.Animation = Animation;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.CheckInventoryRef
inline void UUW-Inventory_WeaponSlot_C::CheckInventoryRef() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.CheckInventoryRef");

	struct CheckInventoryRef_Params {
		
	}; CheckInventoryRef_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.StopNotify
inline void UUW-Inventory_WeaponSlot_C::StopNotify() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.StopNotify");

	struct StopNotify_Params {
		
	}; StopNotify_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.BndEvt__btn_RecipeTree_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
inline void UUW-Inventory_WeaponSlot_C::BndEvt__btn_RecipeTree_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.BndEvt__btn_RecipeTree_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	struct BndEvt__btn_RecipeTree_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params {
		
	}; BndEvt__btn_RecipeTree_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.CompleteCombine
inline void UUW-Inventory_WeaponSlot_C::CompleteCombine() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.CompleteCombine");

	struct CompleteCombine_Params {
		
	}; CompleteCombine_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.CompleteCombineOnRecipeTree
inline void UUW-Inventory_WeaponSlot_C::CompleteCombineOnRecipeTree() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.CompleteCombineOnRecipeTree");

	struct CompleteCombineOnRecipeTree_Params {
		
	}; CompleteCombineOnRecipeTree_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.HoverRecipeTree
inline void UUW-Inventory_WeaponSlot_C::HoverRecipeTree() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.HoverRecipeTree");

	struct HoverRecipeTree_Params {
		
	}; HoverRecipeTree_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.OnUpdateCastingDelegateEvent
inline void UUW-Inventory_WeaponSlot_C::OnUpdateCastingDelegateEvent(struct FCastingInfo& CastingInfo, float CastingPercent) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.OnUpdateCastingDelegateEvent");

	struct OnUpdateCastingDelegateEvent_Params {
		struct FCastingInfo& CastingInfo;
		float CastingPercent;
	}; OnUpdateCastingDelegateEvent_Params Params;

	Params.CastingPercent = CastingPercent;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	CastingInfo = Params.CastingInfo;

}

// Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.ExecuteUbergraph_UW-Inventory_WeaponSlot
inline void UUW-Inventory_WeaponSlot_C::ExecuteUbergraph_UW-Inventory_WeaponSlot(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_WeaponSlot.UW-Inventory_WeaponSlot_C.ExecuteUbergraph_UW-Inventory_WeaponSlot");

	struct ExecuteUbergraph_UW-Inventory_WeaponSlot_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_UW-Inventory_WeaponSlot_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

