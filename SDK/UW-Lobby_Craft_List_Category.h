// WidgetBlueprintGeneratedClass UW-Lobby_Craft_List_Category.UW-Lobby_Craft_List_Category_C
class UUW-Lobby_Craft_List_Category_C : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown Button_Category; // 0x250 (8)
	struct Unknown CanvasPanel_SlotList; // 0x258 (8)
	struct Unknown Image_New; // 0x260 (8)
	struct Unknown T_CategoryName; // 0x268 (8)
	struct Unknown UW-Lobby_RecipeList_Category_Item_4; // 0x270 (8)
	struct Unknown UW-Lobby_RecipeList_Category_Item_5; // 0x278 (8)
	struct Unknown UW-Lobby_RecipeList_Category_Item_6; // 0x280 (8)
	struct Unknown VerticalBox_ItemList; // 0x288 (8)
	struct Unknown WidgetSwitcher_Own; // 0x290 (8)
	struct FString WeaponType; // 0x298 (16)
	char IsPressed : 0; // 0x2A8 (1)
	char IsOwn : 0; // 0x2A9 (1)
	char IsOwnAny : 0; // 0x2AA (1)
	struct Unknown ParentWidgetRef; // 0x2B0 (8)
	float SlotSize; // 0x2B8 (4)
	float CurrentListSize; // 0x2BC (4)
	struct Unknown DefaultImage; // 0x2C0 (8)
	struct Unknown HoverImage; // 0x2C8 (8)
	struct Unknown PressedDefaultImage; // 0x2D0 (8)
	struct Unknown PressedHoverImage; // 0x2D8 (8)

	void SetNew(); // Function UW-Lobby_Craft_List_Category.UW-Lobby_Craft_List_Category_C.SetNew(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void SetButtonImage(); // Function UW-Lobby_Craft_List_Category.UW-Lobby_Craft_List_Category_C.SetButtonImage(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void CheckSlotAnim(); // Function UW-Lobby_Craft_List_Category.UW-Lobby_Craft_List_Category_C.CheckSlotAnim(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void CheckOwn(char& OutIsOwn, char& IsOwnAny); // Function UW-Lobby_Craft_List_Category.UW-Lobby_Craft_List_Category_C.CheckOwn(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void AddCraftingWeapon(struct Unknown& CraftingID); // Function UW-Lobby_Craft_List_Category.UW-Lobby_Craft_List_Category_C.AddCraftingWeapon(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void InitCategoryInfo(struct Unknown& CraftingInfo, struct Unknown ParentWidgetRef); // Function UW-Lobby_Craft_List_Category.UW-Lobby_Craft_List_Category_C.InitCategoryInfo(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void Tick(struct Unknown MyGeometry, float InDeltaTime); // Function UW-Lobby_Craft_List_Category.UW-Lobby_Craft_List_Category_C.Tick(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void BndEvt__Button_Category_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function UW-Lobby_Craft_List_Category.UW-Lobby_Craft_List_Category_C.BndEvt__Button_Category_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void CloseList(); // Function UW-Lobby_Craft_List_Category.UW-Lobby_Craft_List_Category_C.CloseList(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void OpenList(); // Function UW-Lobby_Craft_List_Category.UW-Lobby_Craft_List_Category_C.OpenList(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void BndEvt__Button_Category_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function UW-Lobby_Craft_List_Category.UW-Lobby_Craft_List_Category_C.BndEvt__Button_Category_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void ExecuteUbergraph_UW-Lobby_Craft_List_Category(int32_t EntryPoint); // Function UW-Lobby_Craft_List_Category.UW-Lobby_Craft_List_Category_C.ExecuteUbergraph_UW-Lobby_Craft_List_Category(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
};

// Function UW-Lobby_Craft_List_Category.UW-Lobby_Craft_List_Category_C.SetNew
inline void UUW-Lobby_Craft_List_Category_C::SetNew() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_Craft_List_Category.UW-Lobby_Craft_List_Category_C.SetNew");

	struct SetNew_Params {
		
	}; SetNew_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Lobby_Craft_List_Category.UW-Lobby_Craft_List_Category_C.SetButtonImage
inline void UUW-Lobby_Craft_List_Category_C::SetButtonImage() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_Craft_List_Category.UW-Lobby_Craft_List_Category_C.SetButtonImage");

	struct SetButtonImage_Params {
		
	}; SetButtonImage_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Lobby_Craft_List_Category.UW-Lobby_Craft_List_Category_C.CheckSlotAnim
inline void UUW-Lobby_Craft_List_Category_C::CheckSlotAnim() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_Craft_List_Category.UW-Lobby_Craft_List_Category_C.CheckSlotAnim");

	struct CheckSlotAnim_Params {
		
	}; CheckSlotAnim_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Lobby_Craft_List_Category.UW-Lobby_Craft_List_Category_C.CheckOwn
inline void UUW-Lobby_Craft_List_Category_C::CheckOwn(char& OutIsOwn, char& IsOwnAny) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_Craft_List_Category.UW-Lobby_Craft_List_Category_C.CheckOwn");

	struct CheckOwn_Params {
		char& OutIsOwn;
		char& IsOwnAny;
	}; CheckOwn_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	OutIsOwn = Params.OutIsOwn;
	IsOwnAny = Params.IsOwnAny;

}

// Function UW-Lobby_Craft_List_Category.UW-Lobby_Craft_List_Category_C.AddCraftingWeapon
inline void UUW-Lobby_Craft_List_Category_C::AddCraftingWeapon(struct Unknown& CraftingID) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_Craft_List_Category.UW-Lobby_Craft_List_Category_C.AddCraftingWeapon");

	struct AddCraftingWeapon_Params {
		struct Unknown& CraftingID;
	}; AddCraftingWeapon_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	CraftingID = Params.CraftingID;

}

// Function UW-Lobby_Craft_List_Category.UW-Lobby_Craft_List_Category_C.InitCategoryInfo
inline void UUW-Lobby_Craft_List_Category_C::InitCategoryInfo(struct Unknown& CraftingInfo, struct Unknown ParentWidgetRef) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_Craft_List_Category.UW-Lobby_Craft_List_Category_C.InitCategoryInfo");

	struct InitCategoryInfo_Params {
		struct Unknown& CraftingInfo;
		struct Unknown ParentWidgetRef;
	}; InitCategoryInfo_Params Params;

	Params.ParentWidgetRef = ParentWidgetRef;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	CraftingInfo = Params.CraftingInfo;

}

// Function UW-Lobby_Craft_List_Category.UW-Lobby_Craft_List_Category_C.Tick
inline void UUW-Lobby_Craft_List_Category_C::Tick(struct Unknown MyGeometry, float InDeltaTime) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_Craft_List_Category.UW-Lobby_Craft_List_Category_C.Tick");

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

// Function UW-Lobby_Craft_List_Category.UW-Lobby_Craft_List_Category_C.BndEvt__Button_Category_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
inline void UUW-Lobby_Craft_List_Category_C::BndEvt__Button_Category_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_Craft_List_Category.UW-Lobby_Craft_List_Category_C.BndEvt__Button_Category_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	struct BndEvt__Button_Category_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params {
		
	}; BndEvt__Button_Category_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Lobby_Craft_List_Category.UW-Lobby_Craft_List_Category_C.CloseList
inline void UUW-Lobby_Craft_List_Category_C::CloseList() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_Craft_List_Category.UW-Lobby_Craft_List_Category_C.CloseList");

	struct CloseList_Params {
		
	}; CloseList_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Lobby_Craft_List_Category.UW-Lobby_Craft_List_Category_C.OpenList
inline void UUW-Lobby_Craft_List_Category_C::OpenList() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_Craft_List_Category.UW-Lobby_Craft_List_Category_C.OpenList");

	struct OpenList_Params {
		
	}; OpenList_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Lobby_Craft_List_Category.UW-Lobby_Craft_List_Category_C.BndEvt__Button_Category_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
inline void UUW-Lobby_Craft_List_Category_C::BndEvt__Button_Category_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_Craft_List_Category.UW-Lobby_Craft_List_Category_C.BndEvt__Button_Category_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");

	struct BndEvt__Button_Category_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params {
		
	}; BndEvt__Button_Category_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Lobby_Craft_List_Category.UW-Lobby_Craft_List_Category_C.ExecuteUbergraph_UW-Lobby_Craft_List_Category
inline void UUW-Lobby_Craft_List_Category_C::ExecuteUbergraph_UW-Lobby_Craft_List_Category(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_Craft_List_Category.UW-Lobby_Craft_List_Category_C.ExecuteUbergraph_UW-Lobby_Craft_List_Category");

	struct ExecuteUbergraph_UW-Lobby_Craft_List_Category_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_UW-Lobby_Craft_List_Category_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

