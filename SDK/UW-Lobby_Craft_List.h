// WidgetBlueprintGeneratedClass UW-Lobby_Craft_List.UW-Lobby_Craft_List_C
class UUW-Lobby_Craft_List_C : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown ComboBoxString_Sort_2; // 0x250 (8)
	struct Unknown Down_2; // 0x258 (8)
	struct Unknown Image; // 0x260 (8)
	struct Unknown Img_BG; // 0x268 (8)
	struct Unknown Overlay_2; // 0x270 (8)
	struct Unknown SortText_2; // 0x278 (8)
	struct Unknown Up_2; // 0x280 (8)
	struct Unknown UW-Lobby_RecipeList_Category; // 0x288 (8)
	struct Unknown UW-Lobby_RecipeList_Category_2; // 0x290 (8)
	struct Unknown UW-Lobby_RecipeList_Category_3; // 0x298 (8)
	struct Unknown VerticalBox_Category; // 0x2A0 (8)
	struct TMap<Unknown, Unknown> CategoryList; // 0x2A8 (80)
	struct TArray<Unknown> SortTypeList; // 0x2F8 (16)
	struct Unknown LastOpenedCategory; // 0x308 (8)
	char IsOwn : 0; // 0x310 (1)
	char IsOwnAny : 0; // 0x311 (1)
	int32_t CraftingID; // 0x314 (4)
	struct FText TextAll; // 0x318 (24)
	int32_t LanguageIndex; // 0x330 (4)

	void CheckLanguageIndex(); // Function UW-Lobby_Craft_List.UW-Lobby_Craft_List_C.CheckLanguageIndex(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void OnChangedArmoryTab(); // Function UW-Lobby_Craft_List.UW-Lobby_Craft_List_C.OnChangedArmoryTab(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void OnSelectedCrafting(int32_t CraftingID); // Function UW-Lobby_Craft_List.UW-Lobby_Craft_List_C.OnSelectedCrafting(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void SetOwn(char NewOwn, char NewOwnAny); // Function UW-Lobby_Craft_List.UW-Lobby_Craft_List_C.SetOwn(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void DefaultSelectButton(); // Function UW-Lobby_Craft_List.UW-Lobby_Craft_List_C.DefaultSelectButton(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void SelectCraftingInfo(int32_t CraftingID); // Function UW-Lobby_Craft_List.UW-Lobby_Craft_List_C.SelectCraftingInfo(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void CheckLastCategory(struct Unknown NewOpendWidget); // Function UW-Lobby_Craft_List.UW-Lobby_Craft_List_C.CheckLastCategory(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void ResetLastCategory(); // Function UW-Lobby_Craft_List.UW-Lobby_Craft_List_C.ResetLastCategory(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void CheckOwn(); // Function UW-Lobby_Craft_List.UW-Lobby_Craft_List_C.CheckOwn(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void OnChangedWeaponType(struct FString WeaponType); // Function UW-Lobby_Craft_List.UW-Lobby_Craft_List_C.OnChangedWeaponType(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void ClearCategory(); // Function UW-Lobby_Craft_List.UW-Lobby_Craft_List_C.ClearCategory(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void InitCraftingCategory(); // Function UW-Lobby_Craft_List.UW-Lobby_Craft_List_C.InitCraftingCategory(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void BndEvt__ComboBoxString_Sort_1_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature(struct FString SelectedItem, char SelectionType); // Function UW-Lobby_Craft_List.UW-Lobby_Craft_List_C.BndEvt__ComboBoxString_Sort_1_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void BndEvt__ComboBoxString_Sort_1_K2Node_ComponentBoundEvent_2_OnOpeningEvent__DelegateSignature(); // Function UW-Lobby_Craft_List.UW-Lobby_Craft_List_C.BndEvt__ComboBoxString_Sort_1_K2Node_ComponentBoundEvent_2_OnOpeningEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void Tick(struct Unknown MyGeometry, float InDeltaTime); // Function UW-Lobby_Craft_List.UW-Lobby_Craft_List_C.Tick(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void Construct(); // Function UW-Lobby_Craft_List.UW-Lobby_Craft_List_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void ExecuteUbergraph_UW-Lobby_Craft_List(int32_t EntryPoint); // Function UW-Lobby_Craft_List.UW-Lobby_Craft_List_C.ExecuteUbergraph_UW-Lobby_Craft_List(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
};

// Function UW-Lobby_Craft_List.UW-Lobby_Craft_List_C.CheckLanguageIndex
inline void UUW-Lobby_Craft_List_C::CheckLanguageIndex() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_Craft_List.UW-Lobby_Craft_List_C.CheckLanguageIndex");

	struct CheckLanguageIndex_Params {
		
	}; CheckLanguageIndex_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Lobby_Craft_List.UW-Lobby_Craft_List_C.OnChangedArmoryTab
inline void UUW-Lobby_Craft_List_C::OnChangedArmoryTab() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_Craft_List.UW-Lobby_Craft_List_C.OnChangedArmoryTab");

	struct OnChangedArmoryTab_Params {
		
	}; OnChangedArmoryTab_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Lobby_Craft_List.UW-Lobby_Craft_List_C.OnSelectedCrafting
inline void UUW-Lobby_Craft_List_C::OnSelectedCrafting(int32_t CraftingID) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_Craft_List.UW-Lobby_Craft_List_C.OnSelectedCrafting");

	struct OnSelectedCrafting_Params {
		int32_t CraftingID;
	}; OnSelectedCrafting_Params Params;

	Params.CraftingID = CraftingID;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Lobby_Craft_List.UW-Lobby_Craft_List_C.SetOwn
inline void UUW-Lobby_Craft_List_C::SetOwn(char NewOwn, char NewOwnAny) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_Craft_List.UW-Lobby_Craft_List_C.SetOwn");

	struct SetOwn_Params {
		char NewOwn;
		char NewOwnAny;
	}; SetOwn_Params Params;

	Params.NewOwn = NewOwn;
	Params.NewOwnAny = NewOwnAny;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Lobby_Craft_List.UW-Lobby_Craft_List_C.DefaultSelectButton
inline void UUW-Lobby_Craft_List_C::DefaultSelectButton() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_Craft_List.UW-Lobby_Craft_List_C.DefaultSelectButton");

	struct DefaultSelectButton_Params {
		
	}; DefaultSelectButton_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Lobby_Craft_List.UW-Lobby_Craft_List_C.SelectCraftingInfo
inline void UUW-Lobby_Craft_List_C::SelectCraftingInfo(int32_t CraftingID) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_Craft_List.UW-Lobby_Craft_List_C.SelectCraftingInfo");

	struct SelectCraftingInfo_Params {
		int32_t CraftingID;
	}; SelectCraftingInfo_Params Params;

	Params.CraftingID = CraftingID;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Lobby_Craft_List.UW-Lobby_Craft_List_C.CheckLastCategory
inline void UUW-Lobby_Craft_List_C::CheckLastCategory(struct Unknown NewOpendWidget) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_Craft_List.UW-Lobby_Craft_List_C.CheckLastCategory");

	struct CheckLastCategory_Params {
		struct Unknown NewOpendWidget;
	}; CheckLastCategory_Params Params;

	Params.NewOpendWidget = NewOpendWidget;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Lobby_Craft_List.UW-Lobby_Craft_List_C.ResetLastCategory
inline void UUW-Lobby_Craft_List_C::ResetLastCategory() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_Craft_List.UW-Lobby_Craft_List_C.ResetLastCategory");

	struct ResetLastCategory_Params {
		
	}; ResetLastCategory_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Lobby_Craft_List.UW-Lobby_Craft_List_C.CheckOwn
inline void UUW-Lobby_Craft_List_C::CheckOwn() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_Craft_List.UW-Lobby_Craft_List_C.CheckOwn");

	struct CheckOwn_Params {
		
	}; CheckOwn_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Lobby_Craft_List.UW-Lobby_Craft_List_C.OnChangedWeaponType
inline void UUW-Lobby_Craft_List_C::OnChangedWeaponType(struct FString WeaponType) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_Craft_List.UW-Lobby_Craft_List_C.OnChangedWeaponType");

	struct OnChangedWeaponType_Params {
		struct FString WeaponType;
	}; OnChangedWeaponType_Params Params;

	Params.WeaponType = WeaponType;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Lobby_Craft_List.UW-Lobby_Craft_List_C.ClearCategory
inline void UUW-Lobby_Craft_List_C::ClearCategory() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_Craft_List.UW-Lobby_Craft_List_C.ClearCategory");

	struct ClearCategory_Params {
		
	}; ClearCategory_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Lobby_Craft_List.UW-Lobby_Craft_List_C.InitCraftingCategory
inline void UUW-Lobby_Craft_List_C::InitCraftingCategory() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_Craft_List.UW-Lobby_Craft_List_C.InitCraftingCategory");

	struct InitCraftingCategory_Params {
		
	}; InitCraftingCategory_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Lobby_Craft_List.UW-Lobby_Craft_List_C.BndEvt__ComboBoxString_Sort_1_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature
inline void UUW-Lobby_Craft_List_C::BndEvt__ComboBoxString_Sort_1_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature(struct FString SelectedItem, char SelectionType) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_Craft_List.UW-Lobby_Craft_List_C.BndEvt__ComboBoxString_Sort_1_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature");

	struct BndEvt__ComboBoxString_Sort_1_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature_Params {
		struct FString SelectedItem;
		char SelectionType;
	}; BndEvt__ComboBoxString_Sort_1_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature_Params Params;

	Params.SelectedItem = SelectedItem;
	Params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Lobby_Craft_List.UW-Lobby_Craft_List_C.BndEvt__ComboBoxString_Sort_1_K2Node_ComponentBoundEvent_2_OnOpeningEvent__DelegateSignature
inline void UUW-Lobby_Craft_List_C::BndEvt__ComboBoxString_Sort_1_K2Node_ComponentBoundEvent_2_OnOpeningEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_Craft_List.UW-Lobby_Craft_List_C.BndEvt__ComboBoxString_Sort_1_K2Node_ComponentBoundEvent_2_OnOpeningEvent__DelegateSignature");

	struct BndEvt__ComboBoxString_Sort_1_K2Node_ComponentBoundEvent_2_OnOpeningEvent__DelegateSignature_Params {
		
	}; BndEvt__ComboBoxString_Sort_1_K2Node_ComponentBoundEvent_2_OnOpeningEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Lobby_Craft_List.UW-Lobby_Craft_List_C.Tick
inline void UUW-Lobby_Craft_List_C::Tick(struct Unknown MyGeometry, float InDeltaTime) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_Craft_List.UW-Lobby_Craft_List_C.Tick");

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

// Function UW-Lobby_Craft_List.UW-Lobby_Craft_List_C.Construct
inline void UUW-Lobby_Craft_List_C::Construct() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_Craft_List.UW-Lobby_Craft_List_C.Construct");

	struct Construct_Params {
		
	}; Construct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Lobby_Craft_List.UW-Lobby_Craft_List_C.ExecuteUbergraph_UW-Lobby_Craft_List
inline void UUW-Lobby_Craft_List_C::ExecuteUbergraph_UW-Lobby_Craft_List(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_Craft_List.UW-Lobby_Craft_List_C.ExecuteUbergraph_UW-Lobby_Craft_List");

	struct ExecuteUbergraph_UW-Lobby_Craft_List_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_UW-Lobby_Craft_List_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

