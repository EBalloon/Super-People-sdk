// WidgetBlueprintGeneratedClass UW-Lobby_Armory_Recipe.UW-Lobby_Armory_Recipe_C
class UUW-Lobby_Armory_Recipe_C : public UUserWidget {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248 (8)
	struct UButton Button_Crapting_Btn; // 0x250 (8)
	struct UButton Button_Crapting_Btn_dis; // 0x258 (8)
	struct UImage Image_112; // 0x260 (8)
	struct UImage Img_Gold; // 0x268 (8)
	struct UImage Img_Gold_Inert; // 0x270 (8)
	struct UImage Img_Gold_Inert_2; // 0x278 (8)
	struct URichTextBlock RichTextBlock_578; // 0x280 (8)
	struct UTextBlock T_GoldCost; // 0x288 (8)
	struct UTextBlock T_GoldCost_2; // 0x290 (8)
	struct UUW-Lobby_Craft_GuideWidget_C UW-Lobby_Craft_GuideWidget; // 0x298 (8)
	struct UUW-Lobby_Craft_List_C UW-Lobby_Craft_List; // 0x2A0 (8)
	struct UUW-Lobby_Craft_Recipe_C UW-Lobby_Weapon_Recipe; // 0x2A8 (8)
	struct UUW-Lobby_WeaponInfo_C UW-Lobby_WeaponInfo; // 0x2B0 (8)
	struct UUW-Lobby_WeaponInfo_RandomOption_C UW-Lobby_WeaponInfo_RandomOption; // 0x2B8 (8)
	struct UWidgetSwitcher WidgetSwitcher_179; // 0x2C0 (8)
	struct UWidgetSwitcher WidgetSwitcher_Gold; // 0x2C8 (8)
	struct FItemCrafting CraftingInfo; // 0x2D0 (296)
	struct UUW-Lobby_Craft_List_Category_Slot_C SelectedButton; // 0x3F8 (8)

	void GetCraftingWeaponRarity(int32_t& OutRarity); // Function UW-Lobby_Armory_Recipe.UW-Lobby_Armory_Recipe_C.GetCraftingWeaponRarity(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void OnChangedArmoryTab(); // Function UW-Lobby_Armory_Recipe.UW-Lobby_Armory_Recipe_C.OnChangedArmoryTab(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void SetButtonEnabled(); // Function UW-Lobby_Armory_Recipe.UW-Lobby_Armory_Recipe_C.SetButtonEnabled(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void CheckOwn(); // Function UW-Lobby_Armory_Recipe.UW-Lobby_Armory_Recipe_C.CheckOwn(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void SetCraftingInfo(struct UUW-Lobby_Craft_List_Category_Slot_C ButtonRef); // Function UW-Lobby_Armory_Recipe.UW-Lobby_Armory_Recipe_C.SetCraftingInfo(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void Construct(); // Function UW-Lobby_Armory_Recipe.UW-Lobby_Armory_Recipe_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void BndEvt__Button_Crapting_Btn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function UW-Lobby_Armory_Recipe.UW-Lobby_Armory_Recipe_C.BndEvt__Button_Crapting_Btn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void RequestCraftWeapon(int32_t WeaponIndex, struct FString ItemId); // Function UW-Lobby_Armory_Recipe.UW-Lobby_Armory_Recipe_C.RequestCraftWeapon(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void BndEvt__Button_Crapting_Btn_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function UW-Lobby_Armory_Recipe.UW-Lobby_Armory_Recipe_C.BndEvt__Button_Crapting_Btn_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void SelectCancel(); // Function UW-Lobby_Armory_Recipe.UW-Lobby_Armory_Recipe_C.SelectCancel(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void ExecuteUbergraph_UW-Lobby_Armory_Recipe(int32_t EntryPoint); // Function UW-Lobby_Armory_Recipe.UW-Lobby_Armory_Recipe_C.ExecuteUbergraph_UW-Lobby_Armory_Recipe(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
};

// Function UW-Lobby_Armory_Recipe.UW-Lobby_Armory_Recipe_C.GetCraftingWeaponRarity
inline void UUW-Lobby_Armory_Recipe_C::GetCraftingWeaponRarity(int32_t& OutRarity) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_Armory_Recipe.UW-Lobby_Armory_Recipe_C.GetCraftingWeaponRarity");

	struct GetCraftingWeaponRarity_Params {
		int32_t& OutRarity;
	}; GetCraftingWeaponRarity_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	OutRarity = Params.OutRarity;

}

// Function UW-Lobby_Armory_Recipe.UW-Lobby_Armory_Recipe_C.OnChangedArmoryTab
inline void UUW-Lobby_Armory_Recipe_C::OnChangedArmoryTab() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_Armory_Recipe.UW-Lobby_Armory_Recipe_C.OnChangedArmoryTab");

	struct OnChangedArmoryTab_Params {
		
	}; OnChangedArmoryTab_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Lobby_Armory_Recipe.UW-Lobby_Armory_Recipe_C.SetButtonEnabled
inline void UUW-Lobby_Armory_Recipe_C::SetButtonEnabled() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_Armory_Recipe.UW-Lobby_Armory_Recipe_C.SetButtonEnabled");

	struct SetButtonEnabled_Params {
		
	}; SetButtonEnabled_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Lobby_Armory_Recipe.UW-Lobby_Armory_Recipe_C.CheckOwn
inline void UUW-Lobby_Armory_Recipe_C::CheckOwn() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_Armory_Recipe.UW-Lobby_Armory_Recipe_C.CheckOwn");

	struct CheckOwn_Params {
		
	}; CheckOwn_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Lobby_Armory_Recipe.UW-Lobby_Armory_Recipe_C.SetCraftingInfo
inline void UUW-Lobby_Armory_Recipe_C::SetCraftingInfo(struct UUW-Lobby_Craft_List_Category_Slot_C ButtonRef) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_Armory_Recipe.UW-Lobby_Armory_Recipe_C.SetCraftingInfo");

	struct SetCraftingInfo_Params {
		struct UUW-Lobby_Craft_List_Category_Slot_C ButtonRef;
	}; SetCraftingInfo_Params Params;

	Params.ButtonRef = ButtonRef;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Lobby_Armory_Recipe.UW-Lobby_Armory_Recipe_C.Construct
inline void UUW-Lobby_Armory_Recipe_C::Construct() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_Armory_Recipe.UW-Lobby_Armory_Recipe_C.Construct");

	struct Construct_Params {
		
	}; Construct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Lobby_Armory_Recipe.UW-Lobby_Armory_Recipe_C.BndEvt__Button_Crapting_Btn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
inline void UUW-Lobby_Armory_Recipe_C::BndEvt__Button_Crapting_Btn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_Armory_Recipe.UW-Lobby_Armory_Recipe_C.BndEvt__Button_Crapting_Btn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	struct BndEvt__Button_Crapting_Btn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params {
		
	}; BndEvt__Button_Crapting_Btn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Lobby_Armory_Recipe.UW-Lobby_Armory_Recipe_C.RequestCraftWeapon
inline void UUW-Lobby_Armory_Recipe_C::RequestCraftWeapon(int32_t WeaponIndex, struct FString ItemId) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_Armory_Recipe.UW-Lobby_Armory_Recipe_C.RequestCraftWeapon");

	struct RequestCraftWeapon_Params {
		int32_t WeaponIndex;
		struct FString ItemId;
	}; RequestCraftWeapon_Params Params;

	Params.WeaponIndex = WeaponIndex;
	Params.ItemId = ItemId;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Lobby_Armory_Recipe.UW-Lobby_Armory_Recipe_C.BndEvt__Button_Crapting_Btn_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
inline void UUW-Lobby_Armory_Recipe_C::BndEvt__Button_Crapting_Btn_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_Armory_Recipe.UW-Lobby_Armory_Recipe_C.BndEvt__Button_Crapting_Btn_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	struct BndEvt__Button_Crapting_Btn_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params {
		
	}; BndEvt__Button_Crapting_Btn_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Lobby_Armory_Recipe.UW-Lobby_Armory_Recipe_C.SelectCancel
inline void UUW-Lobby_Armory_Recipe_C::SelectCancel() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_Armory_Recipe.UW-Lobby_Armory_Recipe_C.SelectCancel");

	struct SelectCancel_Params {
		
	}; SelectCancel_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Lobby_Armory_Recipe.UW-Lobby_Armory_Recipe_C.ExecuteUbergraph_UW-Lobby_Armory_Recipe
inline void UUW-Lobby_Armory_Recipe_C::ExecuteUbergraph_UW-Lobby_Armory_Recipe(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_Armory_Recipe.UW-Lobby_Armory_Recipe_C.ExecuteUbergraph_UW-Lobby_Armory_Recipe");

	struct ExecuteUbergraph_UW-Lobby_Armory_Recipe_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_UW-Lobby_Armory_Recipe_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

