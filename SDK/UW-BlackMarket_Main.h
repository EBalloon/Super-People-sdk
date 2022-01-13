// WidgetBlueprintGeneratedClass UW-BlackMarket_Main.UW-BlackMarket_Main_C
class UUW-BlackMarket_Main_C : public UBravoHotelDevelopmentBlackMarket {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2E8 (8)
	struct UButton AllItem; // 0x2F0 (8)
	struct UButton Button_1004; // 0x2F8 (8)
	struct UCheckBox CheckBox_1; // 0x300 (8)
	struct UCanvasPanel CP-Column; // 0x308 (8)
	struct UImage IMG-Ammo; // 0x310 (8)
	struct UImage IMG-Attachment; // 0x318 (8)
	struct UImage IMG-Consumable; // 0x320 (8)
	struct UImage IMG-Custom; // 0x328 (8)
	struct UImage IMG-Gear; // 0x330 (8)
	struct UImage IMG-Perk; // 0x338 (8)
	struct UImage IMG-Preset; // 0x340 (8)
	struct UImage IMG-TopBG; // 0x348 (8)
	struct UImage IMG-Vehicle; // 0x350 (8)
	struct UImage IMG-Weapon; // 0x358 (8)
	struct UImage IMG-Wearable; // 0x360 (8)
	struct UTextBlock Text_culture; // 0x368 (8)
	struct UUW-BlackMarket_Character_C UW-BlackMarket_Character; // 0x370 (8)
	struct UUW-BlackMarket_SubTab_C UW-BlackMarket_SubTab; // 0x378 (8)
	struct UWrapBox WB-ItemList; // 0x380 (8)
	struct UWrapBox WrapBox_6; // 0x388 (8)
	enum class EBlackmarketTabType CurrentTab; // 0x390 (1)
	struct FLinearColor SelectTabColor; // 0x394 (16)
	struct FLinearColor UnSelectTabColor; // 0x3A4 (16)
	char ShowWorkInProcess : 0; // 0x3B4 (1)
	struct TArray<struct FInventoryItemDetailInfo> ItemList; // 0x3B8 (16)
	enum class EWeaponType SelectedWeaponSubTab; // 0x3C8 (1)
	enum class EWeaponAttachmentType SelectedAttachmentSubTab; // 0x3C9 (1)
	enum class EWearableItemType SelectedWearableSubTab; // 0x3CA (1)
	enum class EWearableItemType SelectedGearSubTab; // 0x3CB (1)
	enum class EWearableItemType SelectedCustomSubTab; // 0x3CC (1)
	struct TArray<int32_t> SortTypeList; // 0x3D0 (16)
	struct TArray<char> WeaponAscendList; // 0x3E0 (16)
	int32_t CurrentWeaponSortType; // 0x3F0 (4)
	struct TArray<char> AmmoAscendList; // 0x3F8 (16)
	int32_t CurrentAmmoSortType; // 0x408 (4)
	struct TArray<char> AttachmentAscendList; // 0x410 (16)
	int32_t CurrentAttachmentSortType; // 0x420 (4)
	int32_t CurrentWearableSortType; // 0x424 (4)
	int32_t CurrentConsumableSortType; // 0x428 (4)
	int32_t CurrentCustomSortType; // 0x42C (4)
	int32_t CurrentVehicleSortType; // 0x430 (4)
	struct TArray<char> WearableAscendList; // 0x438 (16)
	struct TArray<char> ConsumableAscendList; // 0x448 (16)
	struct TArray<char> CustomAscendList; // 0x458 (16)
	struct TArray<char> VehicleAscendList; // 0x468 (16)
	struct UBP-BlackmarketSaveGame_C SaveData; // 0x478 (8)
	struct TArray<char> GearAscendList; // 0x480 (16)
	int32_t CurrentGearSortType; // 0x490 (4)
	struct FString BlackmarketSaveSlotName; // 0x498 (16)
	int32_t TestIndex; // 0x4A8 (4)
	struct TArray<char> PerkAscendList; // 0x4B0 (16)
	int32_t CurrentPerkSortType; // 0x4C0 (4)
	enum class EPerkSlotFlag SelectedPerkSubTab; // 0x4C4 (1)
	int32_t CurrentPresetSortType; // 0x4C8 (4)
	struct TArray<char> PresetAscendList; // 0x4D0 (16)
	struct FName SelectedPerkClass; // 0x4E0 (8)
	enum class EItemType SelectedConsumableSubTab; // 0x4E8 (1)

	void IsCorrectPresetSlot(enum class EDevelopmentStatus status, char& bResult); // Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.IsCorrectPresetSlot(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void InitPresetList(); // Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.InitPresetList(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void SetPresetSlot_Impl(int32_t SortType, char bHideOption); // Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.SetPresetSlot_Impl(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	struct FEventReply On_IMG-Preset_MouseButtonDown_1(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.On_IMG-Preset_MouseButtonDown_1(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void IsCorrectPerk(enum class EPerkSlotFlag Type, struct TArray<struct FName>& Index, enum class EDevelopmentStatus status, char& bResult); // Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.IsCorrectPerk(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void SetPerkSlot_Impl(int32_t SortType, char bHideOption); // Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.SetPerkSlot_Impl(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void InitPerkList(); // Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.InitPerkList(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	struct FEventReply On_IMG-Perk_MouseButtonDown_1(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.On_IMG-Perk_MouseButtonDown_1(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	struct FEventReply On_IMG-Gear_MouseButtonDown_1(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.On_IMG-Gear_MouseButtonDown_1(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void SetGearSlot_Impl(int32_t SortType, char bHideOption); // Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.SetGearSlot_Impl(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void IsCorrectGear(enum class EWearableItemType Type, enum class EDevelopmentStatus status, char& bResult); // Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.IsCorrectGear(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void InitGearList(); // Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.InitGearList(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void IsCorrectVehicleSlot(enum class EDevelopmentStatus status, char& bResult); // Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.IsCorrectVehicleSlot(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	struct FEventReply On_IMG-Vehicle_MouseButtonDown_1(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.On_IMG-Vehicle_MouseButtonDown_1(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void InitVehicleList(); // Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.InitVehicleList(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void SetCustomizeSlot_Impl(int32_t SortType, char bHideOption); // Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.SetCustomizeSlot_Impl(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void InitCustomizeData(); // Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.InitCustomizeData(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void SetConsumableSlot_Impl(int32_t SortType, char bHideOption); // Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.SetConsumableSlot_Impl(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void InitConsumableList(); // Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.InitConsumableList(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void IsCorrectConsumableSlot(enum class EItemType Type, enum class EDevelopmentStatus status, char& bResult); // Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.IsCorrectConsumableSlot(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void SetWearableSlot_Impl(int32_t SortType, char bHideOption); // Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.SetWearableSlot_Impl(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void InitWearableList(); // Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.InitWearableList(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void InitAttachmentList(); // Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.InitAttachmentList(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void SetAttachmentSlot_Impl(int32_t SortType, char bHideOption); // Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.SetAttachmentSlot_Impl(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void IsCorrectAmmo(enum class EBlackmarketTabType TabType, enum class EDevelopmentStatus status, char& bResult); // Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.IsCorrectAmmo(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void SetAmmoSlot_Impl(int32_t SortType, char bHideOption); // Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.SetAmmoSlot_Impl(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void InitAmmoList(); // Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.InitAmmoList(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void SetWeaponSlot_Impl(int32_t SortType, char bHideOption); // Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.SetWeaponSlot_Impl(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void InitWeaponList(); // Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.InitWeaponList(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void IsCorrectCustomize(enum class EWearableItemType Type, enum class EDevelopmentStatus status, char& bResult); // Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.IsCorrectCustomize(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	struct FEventReply On_IMG-Custom_MouseButtonDown_1(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.On_IMG-Custom_MouseButtonDown_1(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void IsCorrectWearable(enum class EWearableItemType Type, enum class EDevelopmentStatus status, char& bResult); // Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.IsCorrectWearable(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void IsCorrectAttachment(enum class EWeaponAttachmentType Type, enum class EDevelopmentStatus status, char& bResult); // Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.IsCorrectAttachment(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void SetVehicleSlot_Impl(int32_t SortType, char bHideOption); // Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.SetVehicleSlot_Impl(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void SetCustomizeSlot2(struct FName ItemRowName, struct FInventoryItemDetailInfo InventoryItemDetailInfo); // Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.SetCustomizeSlot2(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void IsCorrectWeapon(enum class EWeaponType WeaponType, enum class EDevelopmentStatus status, char& bResult); // Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.IsCorrectWeapon(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	struct FEventReply On_IMG-Medical_MouseButtonDown_1(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.On_IMG-Medical_MouseButtonDown_1(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	struct FEventReply On_IMG-Wearable_MouseButtonDown_1(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.On_IMG-Wearable_MouseButtonDown_1(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	struct FEventReply On_IMG-Attachment_MouseButtonDown_1(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.On_IMG-Attachment_MouseButtonDown_1(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	struct FEventReply On_IMG-Ammo_MouseButtonDown_1(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.On_IMG-Ammo_MouseButtonDown_1(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	struct FEventReply On_IMG-Weapon_MouseButtonDown_1(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.On_IMG-Weapon_MouseButtonDown_1(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void SetTab(enum class EBlackmarketTabType TabType); // Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.SetTab(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void SetData(); // Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.SetData(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void InitData(); // Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.InitData(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void Construct(); // Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void BndEvt__CheckBox_0_K2Node_ComponentBoundEvent_26_OnCheckBoxComponentStateChanged__DelegateSignature(char bIsChecked); // Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.BndEvt__CheckBox_0_K2Node_ComponentBoundEvent_26_OnCheckBoxComponentStateChanged__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void SaveGameData(); // Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.SaveGameData(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void BndEvt__Button_1003_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.BndEvt__Button_1003_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void SetText_culture(); // Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.SetText_culture(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void BndEvt__AllItem_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.BndEvt__AllItem_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void BlackMarketItemExecute(struct FBravoHotelBlackMarketDataType ItemData); // Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.BlackMarketItemExecute(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void BlackMarketCustomItemExecute(struct FBravoHotelBlackMarketDataType ItemData); // Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.BlackMarketCustomItemExecute(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void SetAmmoSlot(int32_t SlotType, char bHideOption); // Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.SetAmmoSlot(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void SetConsumableSlot(int32_t SlotType, char bHideOption); // Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.SetConsumableSlot(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void SetAttachmentSlot(int32_t SlotType, char bHideOption); // Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.SetAttachmentSlot(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void SetCustomizeSlot(int32_t SlotType, char bHideOption); // Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.SetCustomizeSlot(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void SetGearSlot(int32_t SlotType, char bHideOption); // Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.SetGearSlot(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void SetPerkSlot(int32_t SlotType, char bHideOption); // Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.SetPerkSlot(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void SetPresetSlot(int32_t SlotType, char bHideOption); // Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.SetPresetSlot(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void SetVehicleSlot(int32_t SlotType, char bHideOption); // Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.SetVehicleSlot(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void SetWeaponSlot(int32_t SlotType, char bHideOption); // Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.SetWeaponSlot(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void SetWearableSlot(int32_t SlotType, char bHideOption); // Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.SetWearableSlot(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void ExecuteUbergraph_UW-BlackMarket_Main(int32_t EntryPoint); // Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.ExecuteUbergraph_UW-BlackMarket_Main(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
};

// Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.IsCorrectPresetSlot
inline void UUW-BlackMarket_Main_C::IsCorrectPresetSlot(enum class EDevelopmentStatus status, char& bResult) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.IsCorrectPresetSlot");

	struct IsCorrectPresetSlot_Params {
		enum class EDevelopmentStatus status;
		char& bResult;
	}; IsCorrectPresetSlot_Params Params;

	Params.status = status;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	bResult = Params.bResult;

}

// Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.InitPresetList
inline void UUW-BlackMarket_Main_C::InitPresetList() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.InitPresetList");

	struct InitPresetList_Params {
		
	}; InitPresetList_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.SetPresetSlot_Impl
inline void UUW-BlackMarket_Main_C::SetPresetSlot_Impl(int32_t SortType, char bHideOption) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.SetPresetSlot_Impl");

	struct SetPresetSlot_Impl_Params {
		int32_t SortType;
		char bHideOption;
	}; SetPresetSlot_Impl_Params Params;

	Params.SortType = SortType;
	Params.bHideOption = bHideOption;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.On_IMG-Preset_MouseButtonDown_1
inline struct FEventReply UUW-BlackMarket_Main_C::On_IMG-Preset_MouseButtonDown_1(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.On_IMG-Preset_MouseButtonDown_1");

	struct On_IMG-Preset_MouseButtonDown_1_Params {
		struct FGeometry MyGeometry;
		struct FPointerEvent& MouseEvent;
		struct FEventReply ReturnValue;

	}; On_IMG-Preset_MouseButtonDown_1_Params Params;

	Params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	MouseEvent = Params.MouseEvent;


	return params.ReturnValue;
}

// Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.IsCorrectPerk
inline void UUW-BlackMarket_Main_C::IsCorrectPerk(enum class EPerkSlotFlag Type, struct TArray<struct FName>& Index, enum class EDevelopmentStatus status, char& bResult) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.IsCorrectPerk");

	struct IsCorrectPerk_Params {
		enum class EPerkSlotFlag Type;
		struct TArray<struct FName>& Index;
		enum class EDevelopmentStatus status;
		char& bResult;
	}; IsCorrectPerk_Params Params;

	Params.Type = Type;
	Params.status = status;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Index = Params.Index;
	bResult = Params.bResult;

}

// Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.SetPerkSlot_Impl
inline void UUW-BlackMarket_Main_C::SetPerkSlot_Impl(int32_t SortType, char bHideOption) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.SetPerkSlot_Impl");

	struct SetPerkSlot_Impl_Params {
		int32_t SortType;
		char bHideOption;
	}; SetPerkSlot_Impl_Params Params;

	Params.SortType = SortType;
	Params.bHideOption = bHideOption;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.InitPerkList
inline void UUW-BlackMarket_Main_C::InitPerkList() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.InitPerkList");

	struct InitPerkList_Params {
		
	}; InitPerkList_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.On_IMG-Perk_MouseButtonDown_1
inline struct FEventReply UUW-BlackMarket_Main_C::On_IMG-Perk_MouseButtonDown_1(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.On_IMG-Perk_MouseButtonDown_1");

	struct On_IMG-Perk_MouseButtonDown_1_Params {
		struct FGeometry MyGeometry;
		struct FPointerEvent& MouseEvent;
		struct FEventReply ReturnValue;

	}; On_IMG-Perk_MouseButtonDown_1_Params Params;

	Params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	MouseEvent = Params.MouseEvent;


	return params.ReturnValue;
}

// Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.On_IMG-Gear_MouseButtonDown_1
inline struct FEventReply UUW-BlackMarket_Main_C::On_IMG-Gear_MouseButtonDown_1(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.On_IMG-Gear_MouseButtonDown_1");

	struct On_IMG-Gear_MouseButtonDown_1_Params {
		struct FGeometry MyGeometry;
		struct FPointerEvent& MouseEvent;
		struct FEventReply ReturnValue;

	}; On_IMG-Gear_MouseButtonDown_1_Params Params;

	Params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	MouseEvent = Params.MouseEvent;


	return params.ReturnValue;
}

// Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.SetGearSlot_Impl
inline void UUW-BlackMarket_Main_C::SetGearSlot_Impl(int32_t SortType, char bHideOption) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.SetGearSlot_Impl");

	struct SetGearSlot_Impl_Params {
		int32_t SortType;
		char bHideOption;
	}; SetGearSlot_Impl_Params Params;

	Params.SortType = SortType;
	Params.bHideOption = bHideOption;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.IsCorrectGear
inline void UUW-BlackMarket_Main_C::IsCorrectGear(enum class EWearableItemType Type, enum class EDevelopmentStatus status, char& bResult) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.IsCorrectGear");

	struct IsCorrectGear_Params {
		enum class EWearableItemType Type;
		enum class EDevelopmentStatus status;
		char& bResult;
	}; IsCorrectGear_Params Params;

	Params.Type = Type;
	Params.status = status;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	bResult = Params.bResult;

}

// Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.InitGearList
inline void UUW-BlackMarket_Main_C::InitGearList() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.InitGearList");

	struct InitGearList_Params {
		
	}; InitGearList_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.IsCorrectVehicleSlot
inline void UUW-BlackMarket_Main_C::IsCorrectVehicleSlot(enum class EDevelopmentStatus status, char& bResult) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.IsCorrectVehicleSlot");

	struct IsCorrectVehicleSlot_Params {
		enum class EDevelopmentStatus status;
		char& bResult;
	}; IsCorrectVehicleSlot_Params Params;

	Params.status = status;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	bResult = Params.bResult;

}

// Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.On_IMG-Vehicle_MouseButtonDown_1
inline struct FEventReply UUW-BlackMarket_Main_C::On_IMG-Vehicle_MouseButtonDown_1(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.On_IMG-Vehicle_MouseButtonDown_1");

	struct On_IMG-Vehicle_MouseButtonDown_1_Params {
		struct FGeometry MyGeometry;
		struct FPointerEvent& MouseEvent;
		struct FEventReply ReturnValue;

	}; On_IMG-Vehicle_MouseButtonDown_1_Params Params;

	Params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	MouseEvent = Params.MouseEvent;


	return params.ReturnValue;
}

// Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.InitVehicleList
inline void UUW-BlackMarket_Main_C::InitVehicleList() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.InitVehicleList");

	struct InitVehicleList_Params {
		
	}; InitVehicleList_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.SetCustomizeSlot_Impl
inline void UUW-BlackMarket_Main_C::SetCustomizeSlot_Impl(int32_t SortType, char bHideOption) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.SetCustomizeSlot_Impl");

	struct SetCustomizeSlot_Impl_Params {
		int32_t SortType;
		char bHideOption;
	}; SetCustomizeSlot_Impl_Params Params;

	Params.SortType = SortType;
	Params.bHideOption = bHideOption;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.InitCustomizeData
inline void UUW-BlackMarket_Main_C::InitCustomizeData() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.InitCustomizeData");

	struct InitCustomizeData_Params {
		
	}; InitCustomizeData_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.SetConsumableSlot_Impl
inline void UUW-BlackMarket_Main_C::SetConsumableSlot_Impl(int32_t SortType, char bHideOption) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.SetConsumableSlot_Impl");

	struct SetConsumableSlot_Impl_Params {
		int32_t SortType;
		char bHideOption;
	}; SetConsumableSlot_Impl_Params Params;

	Params.SortType = SortType;
	Params.bHideOption = bHideOption;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.InitConsumableList
inline void UUW-BlackMarket_Main_C::InitConsumableList() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.InitConsumableList");

	struct InitConsumableList_Params {
		
	}; InitConsumableList_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.IsCorrectConsumableSlot
inline void UUW-BlackMarket_Main_C::IsCorrectConsumableSlot(enum class EItemType Type, enum class EDevelopmentStatus status, char& bResult) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.IsCorrectConsumableSlot");

	struct IsCorrectConsumableSlot_Params {
		enum class EItemType Type;
		enum class EDevelopmentStatus status;
		char& bResult;
	}; IsCorrectConsumableSlot_Params Params;

	Params.Type = Type;
	Params.status = status;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	bResult = Params.bResult;

}

// Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.SetWearableSlot_Impl
inline void UUW-BlackMarket_Main_C::SetWearableSlot_Impl(int32_t SortType, char bHideOption) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.SetWearableSlot_Impl");

	struct SetWearableSlot_Impl_Params {
		int32_t SortType;
		char bHideOption;
	}; SetWearableSlot_Impl_Params Params;

	Params.SortType = SortType;
	Params.bHideOption = bHideOption;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.InitWearableList
inline void UUW-BlackMarket_Main_C::InitWearableList() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.InitWearableList");

	struct InitWearableList_Params {
		
	}; InitWearableList_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.InitAttachmentList
inline void UUW-BlackMarket_Main_C::InitAttachmentList() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.InitAttachmentList");

	struct InitAttachmentList_Params {
		
	}; InitAttachmentList_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.SetAttachmentSlot_Impl
inline void UUW-BlackMarket_Main_C::SetAttachmentSlot_Impl(int32_t SortType, char bHideOption) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.SetAttachmentSlot_Impl");

	struct SetAttachmentSlot_Impl_Params {
		int32_t SortType;
		char bHideOption;
	}; SetAttachmentSlot_Impl_Params Params;

	Params.SortType = SortType;
	Params.bHideOption = bHideOption;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.IsCorrectAmmo
inline void UUW-BlackMarket_Main_C::IsCorrectAmmo(enum class EBlackmarketTabType TabType, enum class EDevelopmentStatus status, char& bResult) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.IsCorrectAmmo");

	struct IsCorrectAmmo_Params {
		enum class EBlackmarketTabType TabType;
		enum class EDevelopmentStatus status;
		char& bResult;
	}; IsCorrectAmmo_Params Params;

	Params.TabType = TabType;
	Params.status = status;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	bResult = Params.bResult;

}

// Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.SetAmmoSlot_Impl
inline void UUW-BlackMarket_Main_C::SetAmmoSlot_Impl(int32_t SortType, char bHideOption) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.SetAmmoSlot_Impl");

	struct SetAmmoSlot_Impl_Params {
		int32_t SortType;
		char bHideOption;
	}; SetAmmoSlot_Impl_Params Params;

	Params.SortType = SortType;
	Params.bHideOption = bHideOption;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.InitAmmoList
inline void UUW-BlackMarket_Main_C::InitAmmoList() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.InitAmmoList");

	struct InitAmmoList_Params {
		
	}; InitAmmoList_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.SetWeaponSlot_Impl
inline void UUW-BlackMarket_Main_C::SetWeaponSlot_Impl(int32_t SortType, char bHideOption) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.SetWeaponSlot_Impl");

	struct SetWeaponSlot_Impl_Params {
		int32_t SortType;
		char bHideOption;
	}; SetWeaponSlot_Impl_Params Params;

	Params.SortType = SortType;
	Params.bHideOption = bHideOption;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.InitWeaponList
inline void UUW-BlackMarket_Main_C::InitWeaponList() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.InitWeaponList");

	struct InitWeaponList_Params {
		
	}; InitWeaponList_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.IsCorrectCustomize
inline void UUW-BlackMarket_Main_C::IsCorrectCustomize(enum class EWearableItemType Type, enum class EDevelopmentStatus status, char& bResult) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.IsCorrectCustomize");

	struct IsCorrectCustomize_Params {
		enum class EWearableItemType Type;
		enum class EDevelopmentStatus status;
		char& bResult;
	}; IsCorrectCustomize_Params Params;

	Params.Type = Type;
	Params.status = status;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	bResult = Params.bResult;

}

// Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.On_IMG-Custom_MouseButtonDown_1
inline struct FEventReply UUW-BlackMarket_Main_C::On_IMG-Custom_MouseButtonDown_1(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.On_IMG-Custom_MouseButtonDown_1");

	struct On_IMG-Custom_MouseButtonDown_1_Params {
		struct FGeometry MyGeometry;
		struct FPointerEvent& MouseEvent;
		struct FEventReply ReturnValue;

	}; On_IMG-Custom_MouseButtonDown_1_Params Params;

	Params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	MouseEvent = Params.MouseEvent;


	return params.ReturnValue;
}

// Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.IsCorrectWearable
inline void UUW-BlackMarket_Main_C::IsCorrectWearable(enum class EWearableItemType Type, enum class EDevelopmentStatus status, char& bResult) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.IsCorrectWearable");

	struct IsCorrectWearable_Params {
		enum class EWearableItemType Type;
		enum class EDevelopmentStatus status;
		char& bResult;
	}; IsCorrectWearable_Params Params;

	Params.Type = Type;
	Params.status = status;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	bResult = Params.bResult;

}

// Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.IsCorrectAttachment
inline void UUW-BlackMarket_Main_C::IsCorrectAttachment(enum class EWeaponAttachmentType Type, enum class EDevelopmentStatus status, char& bResult) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.IsCorrectAttachment");

	struct IsCorrectAttachment_Params {
		enum class EWeaponAttachmentType Type;
		enum class EDevelopmentStatus status;
		char& bResult;
	}; IsCorrectAttachment_Params Params;

	Params.Type = Type;
	Params.status = status;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	bResult = Params.bResult;

}

// Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.SetVehicleSlot_Impl
inline void UUW-BlackMarket_Main_C::SetVehicleSlot_Impl(int32_t SortType, char bHideOption) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.SetVehicleSlot_Impl");

	struct SetVehicleSlot_Impl_Params {
		int32_t SortType;
		char bHideOption;
	}; SetVehicleSlot_Impl_Params Params;

	Params.SortType = SortType;
	Params.bHideOption = bHideOption;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.SetCustomizeSlot2
inline void UUW-BlackMarket_Main_C::SetCustomizeSlot2(struct FName ItemRowName, struct FInventoryItemDetailInfo InventoryItemDetailInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.SetCustomizeSlot2");

	struct SetCustomizeSlot2_Params {
		struct FName ItemRowName;
		struct FInventoryItemDetailInfo InventoryItemDetailInfo;
	}; SetCustomizeSlot2_Params Params;

	Params.ItemRowName = ItemRowName;
	Params.InventoryItemDetailInfo = InventoryItemDetailInfo;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.IsCorrectWeapon
inline void UUW-BlackMarket_Main_C::IsCorrectWeapon(enum class EWeaponType WeaponType, enum class EDevelopmentStatus status, char& bResult) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.IsCorrectWeapon");

	struct IsCorrectWeapon_Params {
		enum class EWeaponType WeaponType;
		enum class EDevelopmentStatus status;
		char& bResult;
	}; IsCorrectWeapon_Params Params;

	Params.WeaponType = WeaponType;
	Params.status = status;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	bResult = Params.bResult;

}

// Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.On_IMG-Medical_MouseButtonDown_1
inline struct FEventReply UUW-BlackMarket_Main_C::On_IMG-Medical_MouseButtonDown_1(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.On_IMG-Medical_MouseButtonDown_1");

	struct On_IMG-Medical_MouseButtonDown_1_Params {
		struct FGeometry MyGeometry;
		struct FPointerEvent& MouseEvent;
		struct FEventReply ReturnValue;

	}; On_IMG-Medical_MouseButtonDown_1_Params Params;

	Params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	MouseEvent = Params.MouseEvent;


	return params.ReturnValue;
}

// Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.On_IMG-Wearable_MouseButtonDown_1
inline struct FEventReply UUW-BlackMarket_Main_C::On_IMG-Wearable_MouseButtonDown_1(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.On_IMG-Wearable_MouseButtonDown_1");

	struct On_IMG-Wearable_MouseButtonDown_1_Params {
		struct FGeometry MyGeometry;
		struct FPointerEvent& MouseEvent;
		struct FEventReply ReturnValue;

	}; On_IMG-Wearable_MouseButtonDown_1_Params Params;

	Params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	MouseEvent = Params.MouseEvent;


	return params.ReturnValue;
}

// Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.On_IMG-Attachment_MouseButtonDown_1
inline struct FEventReply UUW-BlackMarket_Main_C::On_IMG-Attachment_MouseButtonDown_1(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.On_IMG-Attachment_MouseButtonDown_1");

	struct On_IMG-Attachment_MouseButtonDown_1_Params {
		struct FGeometry MyGeometry;
		struct FPointerEvent& MouseEvent;
		struct FEventReply ReturnValue;

	}; On_IMG-Attachment_MouseButtonDown_1_Params Params;

	Params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	MouseEvent = Params.MouseEvent;


	return params.ReturnValue;
}

// Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.On_IMG-Ammo_MouseButtonDown_1
inline struct FEventReply UUW-BlackMarket_Main_C::On_IMG-Ammo_MouseButtonDown_1(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.On_IMG-Ammo_MouseButtonDown_1");

	struct On_IMG-Ammo_MouseButtonDown_1_Params {
		struct FGeometry MyGeometry;
		struct FPointerEvent& MouseEvent;
		struct FEventReply ReturnValue;

	}; On_IMG-Ammo_MouseButtonDown_1_Params Params;

	Params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	MouseEvent = Params.MouseEvent;


	return params.ReturnValue;
}

// Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.On_IMG-Weapon_MouseButtonDown_1
inline struct FEventReply UUW-BlackMarket_Main_C::On_IMG-Weapon_MouseButtonDown_1(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.On_IMG-Weapon_MouseButtonDown_1");

	struct On_IMG-Weapon_MouseButtonDown_1_Params {
		struct FGeometry MyGeometry;
		struct FPointerEvent& MouseEvent;
		struct FEventReply ReturnValue;

	}; On_IMG-Weapon_MouseButtonDown_1_Params Params;

	Params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	MouseEvent = Params.MouseEvent;


	return params.ReturnValue;
}

// Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.SetTab
inline void UUW-BlackMarket_Main_C::SetTab(enum class EBlackmarketTabType TabType) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.SetTab");

	struct SetTab_Params {
		enum class EBlackmarketTabType TabType;
	}; SetTab_Params Params;

	Params.TabType = TabType;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.SetData
inline void UUW-BlackMarket_Main_C::SetData() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.SetData");

	struct SetData_Params {
		
	}; SetData_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.InitData
inline void UUW-BlackMarket_Main_C::InitData() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.InitData");

	struct InitData_Params {
		
	}; InitData_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.Construct
inline void UUW-BlackMarket_Main_C::Construct() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.Construct");

	struct Construct_Params {
		
	}; Construct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.BndEvt__CheckBox_0_K2Node_ComponentBoundEvent_26_OnCheckBoxComponentStateChanged__DelegateSignature
inline void UUW-BlackMarket_Main_C::BndEvt__CheckBox_0_K2Node_ComponentBoundEvent_26_OnCheckBoxComponentStateChanged__DelegateSignature(char bIsChecked) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.BndEvt__CheckBox_0_K2Node_ComponentBoundEvent_26_OnCheckBoxComponentStateChanged__DelegateSignature");

	struct BndEvt__CheckBox_0_K2Node_ComponentBoundEvent_26_OnCheckBoxComponentStateChanged__DelegateSignature_Params {
		char bIsChecked;
	}; BndEvt__CheckBox_0_K2Node_ComponentBoundEvent_26_OnCheckBoxComponentStateChanged__DelegateSignature_Params Params;

	Params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.SaveGameData
inline void UUW-BlackMarket_Main_C::SaveGameData() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.SaveGameData");

	struct SaveGameData_Params {
		
	}; SaveGameData_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.BndEvt__Button_1003_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
inline void UUW-BlackMarket_Main_C::BndEvt__Button_1003_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.BndEvt__Button_1003_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	struct BndEvt__Button_1003_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params {
		
	}; BndEvt__Button_1003_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.SetText_culture
inline void UUW-BlackMarket_Main_C::SetText_culture() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.SetText_culture");

	struct SetText_culture_Params {
		
	}; SetText_culture_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.BndEvt__AllItem_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
inline void UUW-BlackMarket_Main_C::BndEvt__AllItem_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.BndEvt__AllItem_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	struct BndEvt__AllItem_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params {
		
	}; BndEvt__AllItem_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.BlackMarketItemExecute
inline void UUW-BlackMarket_Main_C::BlackMarketItemExecute(struct FBravoHotelBlackMarketDataType ItemData) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.BlackMarketItemExecute");

	struct BlackMarketItemExecute_Params {
		struct FBravoHotelBlackMarketDataType ItemData;
	}; BlackMarketItemExecute_Params Params;

	Params.ItemData = ItemData;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.BlackMarketCustomItemExecute
inline void UUW-BlackMarket_Main_C::BlackMarketCustomItemExecute(struct FBravoHotelBlackMarketDataType ItemData) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.BlackMarketCustomItemExecute");

	struct BlackMarketCustomItemExecute_Params {
		struct FBravoHotelBlackMarketDataType ItemData;
	}; BlackMarketCustomItemExecute_Params Params;

	Params.ItemData = ItemData;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.SetAmmoSlot
inline void UUW-BlackMarket_Main_C::SetAmmoSlot(int32_t SlotType, char bHideOption) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.SetAmmoSlot");

	struct SetAmmoSlot_Params {
		int32_t SlotType;
		char bHideOption;
	}; SetAmmoSlot_Params Params;

	Params.SlotType = SlotType;
	Params.bHideOption = bHideOption;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.SetConsumableSlot
inline void UUW-BlackMarket_Main_C::SetConsumableSlot(int32_t SlotType, char bHideOption) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.SetConsumableSlot");

	struct SetConsumableSlot_Params {
		int32_t SlotType;
		char bHideOption;
	}; SetConsumableSlot_Params Params;

	Params.SlotType = SlotType;
	Params.bHideOption = bHideOption;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.SetAttachmentSlot
inline void UUW-BlackMarket_Main_C::SetAttachmentSlot(int32_t SlotType, char bHideOption) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.SetAttachmentSlot");

	struct SetAttachmentSlot_Params {
		int32_t SlotType;
		char bHideOption;
	}; SetAttachmentSlot_Params Params;

	Params.SlotType = SlotType;
	Params.bHideOption = bHideOption;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.SetCustomizeSlot
inline void UUW-BlackMarket_Main_C::SetCustomizeSlot(int32_t SlotType, char bHideOption) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.SetCustomizeSlot");

	struct SetCustomizeSlot_Params {
		int32_t SlotType;
		char bHideOption;
	}; SetCustomizeSlot_Params Params;

	Params.SlotType = SlotType;
	Params.bHideOption = bHideOption;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.SetGearSlot
inline void UUW-BlackMarket_Main_C::SetGearSlot(int32_t SlotType, char bHideOption) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.SetGearSlot");

	struct SetGearSlot_Params {
		int32_t SlotType;
		char bHideOption;
	}; SetGearSlot_Params Params;

	Params.SlotType = SlotType;
	Params.bHideOption = bHideOption;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.SetPerkSlot
inline void UUW-BlackMarket_Main_C::SetPerkSlot(int32_t SlotType, char bHideOption) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.SetPerkSlot");

	struct SetPerkSlot_Params {
		int32_t SlotType;
		char bHideOption;
	}; SetPerkSlot_Params Params;

	Params.SlotType = SlotType;
	Params.bHideOption = bHideOption;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.SetPresetSlot
inline void UUW-BlackMarket_Main_C::SetPresetSlot(int32_t SlotType, char bHideOption) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.SetPresetSlot");

	struct SetPresetSlot_Params {
		int32_t SlotType;
		char bHideOption;
	}; SetPresetSlot_Params Params;

	Params.SlotType = SlotType;
	Params.bHideOption = bHideOption;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.SetVehicleSlot
inline void UUW-BlackMarket_Main_C::SetVehicleSlot(int32_t SlotType, char bHideOption) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.SetVehicleSlot");

	struct SetVehicleSlot_Params {
		int32_t SlotType;
		char bHideOption;
	}; SetVehicleSlot_Params Params;

	Params.SlotType = SlotType;
	Params.bHideOption = bHideOption;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.SetWeaponSlot
inline void UUW-BlackMarket_Main_C::SetWeaponSlot(int32_t SlotType, char bHideOption) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.SetWeaponSlot");

	struct SetWeaponSlot_Params {
		int32_t SlotType;
		char bHideOption;
	}; SetWeaponSlot_Params Params;

	Params.SlotType = SlotType;
	Params.bHideOption = bHideOption;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.SetWearableSlot
inline void UUW-BlackMarket_Main_C::SetWearableSlot(int32_t SlotType, char bHideOption) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.SetWearableSlot");

	struct SetWearableSlot_Params {
		int32_t SlotType;
		char bHideOption;
	}; SetWearableSlot_Params Params;

	Params.SlotType = SlotType;
	Params.bHideOption = bHideOption;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.ExecuteUbergraph_UW-BlackMarket_Main
inline void UUW-BlackMarket_Main_C::ExecuteUbergraph_UW-BlackMarket_Main(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.ExecuteUbergraph_UW-BlackMarket_Main");

	struct ExecuteUbergraph_UW-BlackMarket_Main_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_UW-BlackMarket_Main_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

