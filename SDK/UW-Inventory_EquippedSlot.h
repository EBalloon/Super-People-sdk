// WidgetBlueprintGeneratedClass UW-Inventory_EquippedSlot.UW-Inventory_EquippedSlot_C
class UUW-Inventory_EquippedSlot_C : public UUW-Inventory_SlotBase_C {

public:

	struct Unknown UberGraphFrame; // 0x1350 (8)
	struct Unknown Anim_Material_Get; // 0x1358 (8)
	struct Unknown Anim_Material_Hover; // 0x1360 (8)
	struct Unknown Anim_Upgrade; // 0x1368 (8)
	struct Unknown Anim_Progress; // 0x1370 (8)
	struct Unknown Abillity; // 0x1378 (8)
	struct Unknown AbillityBG; // 0x1380 (8)
	struct Unknown AbillityValue; // 0x1388 (8)
	struct Unknown Bg; // 0x1390 (8)
	struct Unknown Bg_3; // 0x1398 (8)
	struct Unknown BorderBG; // 0x13A0 (8)
	struct Unknown BorderBG_3; // 0x13A8 (8)
	struct Unknown btn_HelmetTree; // 0x13B0 (8)
	struct Unknown ChoiceBG; // 0x13B8 (8)
	struct Unknown ChoiceBG_3; // 0x13C0 (8)
	struct Unknown DefenseBG; // 0x13C8 (8)
	struct Unknown DefenseBG_3; // 0x13D0 (8)
	struct Unknown DurabilityBar; // 0x13D8 (8)
	struct Unknown DurabilityBar_3; // 0x13E0 (8)
	struct Unknown EmptyBG; // 0x13E8 (8)
	struct Unknown EmptyBG_3; // 0x13F0 (8)
	struct Unknown Image; // 0x13F8 (8)
	struct Unknown Image_197; // 0x1400 (8)
	struct Unknown Image_234; // 0x1408 (8)
	struct Unknown Image_279; // 0x1410 (8)
	struct Unknown Image_491; // 0x1418 (8)
	struct Unknown Image_682; // 0x1420 (8)
	struct Unknown ItemImage; // 0x1428 (8)
	struct Unknown ItemImage_3; // 0x1430 (8)
	struct Unknown OverBG; // 0x1438 (8)
	struct Unknown OverBG_3; // 0x1440 (8)
	struct Unknown Overlay_1; // 0x1448 (8)
	struct Unknown UW-Inventory_MaterialIconSlot; // 0x1450 (8)
	struct Unknown UW-StatupWidget; // 0x1458 (8)
	struct Unknown WidgetSwitcher_3; // 0x1460 (8)
	enum class Unknow WearableItemType; // 0x1468 (1)
	char IsDefense : 0; // 0x1469 (1)
	struct Unknown HoverWidget; // 0x1470 (8)
	struct Unknown HoverOwnerWidget; // 0x1478 (8)
	int32_t SwitcherIndex; // 0x1480 (4)

	void IsDraging(char& bResult); // Function UW-Inventory_EquippedSlot.UW-Inventory_EquippedSlot_C.IsDraging(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void ShowStatupAnim(struct Unknown& StatParams); // Function UW-Inventory_EquippedSlot.UW-Inventory_EquippedSlot_C.ShowStatupAnim(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void SetMaterialIcon(); // Function UW-Inventory_EquippedSlot.UW-Inventory_EquippedSlot_C.SetMaterialIcon(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void SetHoverWidgetRef(); // Function UW-Inventory_EquippedSlot.UW-Inventory_EquippedSlot_C.SetHoverWidgetRef(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	char OnDrop(struct Unknown MyGeometry, struct Unknown PointerEvent, struct Unknown Operation); // Function UW-Inventory_EquippedSlot.UW-Inventory_EquippedSlot_C.OnDrop(BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void SetBG(enum class Unknow WearableItemType); // Function UW-Inventory_EquippedSlot.UW-Inventory_EquippedSlot_C.SetBG(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void OnRButtonClick(char& bResult); // Function UW-Inventory_EquippedSlot.UW-Inventory_EquippedSlot_C.OnRButtonClick(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	enum class Unknow Get_Abillity_Visibility_1(); // Function UW-Inventory_EquippedSlot.UW-Inventory_EquippedSlot_C.Get_Abillity_Visibility_1(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void RequestGetItem(struct Unknown Pickup, char& bResult); // Function UW-Inventory_EquippedSlot.UW-Inventory_EquippedSlot_C.RequestGetItem(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void Reset(); // Function UW-Inventory_EquippedSlot.UW-Inventory_EquippedSlot_C.Reset(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void InitData(enum class Unknow EquipType, enum class Unknow WearableItemType); // Function UW-Inventory_EquippedSlot.UW-Inventory_EquippedSlot_C.InitData(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void SetInfo(struct Unknown InventoryWidget, struct Unknown InventoryItemInfoData); // Function UW-Inventory_EquippedSlot.UW-Inventory_EquippedSlot_C.SetInfo(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void Drop(); // Function UW-Inventory_EquippedSlot.UW-Inventory_EquippedSlot_C.Drop(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void OnLoaded_52197A594D73AE4B77D41DAA3A988F34(struct Unknown Loaded); // Function UW-Inventory_EquippedSlot.UW-Inventory_EquippedSlot_C.OnLoaded_52197A594D73AE4B77D41DAA3A988F34(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void OnMouseEnter(struct Unknown MyGeometry, struct Unknown& MouseEvent); // Function UW-Inventory_EquippedSlot.UW-Inventory_EquippedSlot_C.OnMouseEnter(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void OnMouseLeave(struct Unknown& MouseEvent); // Function UW-Inventory_EquippedSlot.UW-Inventory_EquippedSlot_C.OnMouseLeave(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void Enable(); // Function UW-Inventory_EquippedSlot.UW-Inventory_EquippedSlot_C.Enable(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void Disable(); // Function UW-Inventory_EquippedSlot.UW-Inventory_EquippedSlot_C.Disable(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void Construct(); // Function UW-Inventory_EquippedSlot.UW-Inventory_EquippedSlot_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void AysncLoadIconTexture(struct Unknown IconTexture); // Function UW-Inventory_EquippedSlot.UW-Inventory_EquippedSlot_C.AysncLoadIconTexture(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void PreConstruct(char IsDesignTime); // Function UW-Inventory_EquippedSlot.UW-Inventory_EquippedSlot_C.PreConstruct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void CompleteCombine(); // Function UW-Inventory_EquippedSlot.UW-Inventory_EquippedSlot_C.CompleteCombine(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void BndEvt__btn_HelmetTree_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function UW-Inventory_EquippedSlot.UW-Inventory_EquippedSlot_C.BndEvt__btn_HelmetTree_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void CompleteCombineOnRecipeTree(); // Function UW-Inventory_EquippedSlot.UW-Inventory_EquippedSlot_C.CompleteCombineOnRecipeTree(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void HoverRecipeTree(); // Function UW-Inventory_EquippedSlot.UW-Inventory_EquippedSlot_C.HoverRecipeTree(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void OnUpdateCastingDelegateEvent(struct Unknown& CastingInfo, float CastingPercent); // Function UW-Inventory_EquippedSlot.UW-Inventory_EquippedSlot_C.OnUpdateCastingDelegateEvent(HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void ExecuteUbergraph_UW-Inventory_EquippedSlot(int32_t EntryPoint); // Function UW-Inventory_EquippedSlot.UW-Inventory_EquippedSlot_C.ExecuteUbergraph_UW-Inventory_EquippedSlot(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
};

// Function UW-Inventory_EquippedSlot.UW-Inventory_EquippedSlot_C.IsDraging
inline void UUW-Inventory_EquippedSlot_C::IsDraging(char& bResult) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_EquippedSlot.UW-Inventory_EquippedSlot_C.IsDraging");

	struct IsDraging_Params {
		char& bResult;
	}; IsDraging_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	bResult = Params.bResult;

}

// Function UW-Inventory_EquippedSlot.UW-Inventory_EquippedSlot_C.ShowStatupAnim
inline void UUW-Inventory_EquippedSlot_C::ShowStatupAnim(struct Unknown& StatParams) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_EquippedSlot.UW-Inventory_EquippedSlot_C.ShowStatupAnim");

	struct ShowStatupAnim_Params {
		struct Unknown& StatParams;
	}; ShowStatupAnim_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	StatParams = Params.StatParams;

}

// Function UW-Inventory_EquippedSlot.UW-Inventory_EquippedSlot_C.SetMaterialIcon
inline void UUW-Inventory_EquippedSlot_C::SetMaterialIcon() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_EquippedSlot.UW-Inventory_EquippedSlot_C.SetMaterialIcon");

	struct SetMaterialIcon_Params {
		
	}; SetMaterialIcon_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_EquippedSlot.UW-Inventory_EquippedSlot_C.SetHoverWidgetRef
inline void UUW-Inventory_EquippedSlot_C::SetHoverWidgetRef() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_EquippedSlot.UW-Inventory_EquippedSlot_C.SetHoverWidgetRef");

	struct SetHoverWidgetRef_Params {
		
	}; SetHoverWidgetRef_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_EquippedSlot.UW-Inventory_EquippedSlot_C.OnDrop
inline char UUW-Inventory_EquippedSlot_C::OnDrop(struct Unknown MyGeometry, struct Unknown PointerEvent, struct Unknown Operation) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_EquippedSlot.UW-Inventory_EquippedSlot_C.OnDrop");

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

// Function UW-Inventory_EquippedSlot.UW-Inventory_EquippedSlot_C.SetBG
inline void UUW-Inventory_EquippedSlot_C::SetBG(enum class Unknow WearableItemType) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_EquippedSlot.UW-Inventory_EquippedSlot_C.SetBG");

	struct SetBG_Params {
		enum class Unknow WearableItemType;
	}; SetBG_Params Params;

	Params.WearableItemType = WearableItemType;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_EquippedSlot.UW-Inventory_EquippedSlot_C.OnRButtonClick
inline void UUW-Inventory_EquippedSlot_C::OnRButtonClick(char& bResult) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_EquippedSlot.UW-Inventory_EquippedSlot_C.OnRButtonClick");

	struct OnRButtonClick_Params {
		char& bResult;
	}; OnRButtonClick_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	bResult = Params.bResult;

}

// Function UW-Inventory_EquippedSlot.UW-Inventory_EquippedSlot_C.Get_Abillity_Visibility_1
inline enum class Unknow UUW-Inventory_EquippedSlot_C::Get_Abillity_Visibility_1() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_EquippedSlot.UW-Inventory_EquippedSlot_C.Get_Abillity_Visibility_1");

	struct Get_Abillity_Visibility_1_Params {
		
		enum class Unknow ReturnValue;

	}; Get_Abillity_Visibility_1_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UW-Inventory_EquippedSlot.UW-Inventory_EquippedSlot_C.RequestGetItem
inline void UUW-Inventory_EquippedSlot_C::RequestGetItem(struct Unknown Pickup, char& bResult) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_EquippedSlot.UW-Inventory_EquippedSlot_C.RequestGetItem");

	struct RequestGetItem_Params {
		struct Unknown Pickup;
		char& bResult;
	}; RequestGetItem_Params Params;

	Params.Pickup = Pickup;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	bResult = Params.bResult;

}

// Function UW-Inventory_EquippedSlot.UW-Inventory_EquippedSlot_C.Reset
inline void UUW-Inventory_EquippedSlot_C::Reset() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_EquippedSlot.UW-Inventory_EquippedSlot_C.Reset");

	struct Reset_Params {
		
	}; Reset_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_EquippedSlot.UW-Inventory_EquippedSlot_C.InitData
inline void UUW-Inventory_EquippedSlot_C::InitData(enum class Unknow EquipType, enum class Unknow WearableItemType) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_EquippedSlot.UW-Inventory_EquippedSlot_C.InitData");

	struct InitData_Params {
		enum class Unknow EquipType;
		enum class Unknow WearableItemType;
	}; InitData_Params Params;

	Params.EquipType = EquipType;
	Params.WearableItemType = WearableItemType;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_EquippedSlot.UW-Inventory_EquippedSlot_C.SetInfo
inline void UUW-Inventory_EquippedSlot_C::SetInfo(struct Unknown InventoryWidget, struct Unknown InventoryItemInfoData) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_EquippedSlot.UW-Inventory_EquippedSlot_C.SetInfo");

	struct SetInfo_Params {
		struct Unknown InventoryWidget;
		struct Unknown InventoryItemInfoData;
	}; SetInfo_Params Params;

	Params.InventoryWidget = InventoryWidget;
	Params.InventoryItemInfoData = InventoryItemInfoData;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_EquippedSlot.UW-Inventory_EquippedSlot_C.Drop
inline void UUW-Inventory_EquippedSlot_C::Drop() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_EquippedSlot.UW-Inventory_EquippedSlot_C.Drop");

	struct Drop_Params {
		
	}; Drop_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_EquippedSlot.UW-Inventory_EquippedSlot_C.OnLoaded_52197A594D73AE4B77D41DAA3A988F34
inline void UUW-Inventory_EquippedSlot_C::OnLoaded_52197A594D73AE4B77D41DAA3A988F34(struct Unknown Loaded) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_EquippedSlot.UW-Inventory_EquippedSlot_C.OnLoaded_52197A594D73AE4B77D41DAA3A988F34");

	struct OnLoaded_52197A594D73AE4B77D41DAA3A988F34_Params {
		struct Unknown Loaded;
	}; OnLoaded_52197A594D73AE4B77D41DAA3A988F34_Params Params;

	Params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_EquippedSlot.UW-Inventory_EquippedSlot_C.OnMouseEnter
inline void UUW-Inventory_EquippedSlot_C::OnMouseEnter(struct Unknown MyGeometry, struct Unknown& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_EquippedSlot.UW-Inventory_EquippedSlot_C.OnMouseEnter");

	struct OnMouseEnter_Params {
		struct Unknown MyGeometry;
		struct Unknown& MouseEvent;
	}; OnMouseEnter_Params Params;

	Params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	MouseEvent = Params.MouseEvent;

}

// Function UW-Inventory_EquippedSlot.UW-Inventory_EquippedSlot_C.OnMouseLeave
inline void UUW-Inventory_EquippedSlot_C::OnMouseLeave(struct Unknown& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_EquippedSlot.UW-Inventory_EquippedSlot_C.OnMouseLeave");

	struct OnMouseLeave_Params {
		struct Unknown& MouseEvent;
	}; OnMouseLeave_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	MouseEvent = Params.MouseEvent;

}

// Function UW-Inventory_EquippedSlot.UW-Inventory_EquippedSlot_C.Enable
inline void UUW-Inventory_EquippedSlot_C::Enable() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_EquippedSlot.UW-Inventory_EquippedSlot_C.Enable");

	struct Enable_Params {
		
	}; Enable_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_EquippedSlot.UW-Inventory_EquippedSlot_C.Disable
inline void UUW-Inventory_EquippedSlot_C::Disable() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_EquippedSlot.UW-Inventory_EquippedSlot_C.Disable");

	struct Disable_Params {
		
	}; Disable_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_EquippedSlot.UW-Inventory_EquippedSlot_C.Construct
inline void UUW-Inventory_EquippedSlot_C::Construct() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_EquippedSlot.UW-Inventory_EquippedSlot_C.Construct");

	struct Construct_Params {
		
	}; Construct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_EquippedSlot.UW-Inventory_EquippedSlot_C.AysncLoadIconTexture
inline void UUW-Inventory_EquippedSlot_C::AysncLoadIconTexture(struct Unknown IconTexture) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_EquippedSlot.UW-Inventory_EquippedSlot_C.AysncLoadIconTexture");

	struct AysncLoadIconTexture_Params {
		struct Unknown IconTexture;
	}; AysncLoadIconTexture_Params Params;

	Params.IconTexture = IconTexture;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_EquippedSlot.UW-Inventory_EquippedSlot_C.PreConstruct
inline void UUW-Inventory_EquippedSlot_C::PreConstruct(char IsDesignTime) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_EquippedSlot.UW-Inventory_EquippedSlot_C.PreConstruct");

	struct PreConstruct_Params {
		char IsDesignTime;
	}; PreConstruct_Params Params;

	Params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_EquippedSlot.UW-Inventory_EquippedSlot_C.CompleteCombine
inline void UUW-Inventory_EquippedSlot_C::CompleteCombine() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_EquippedSlot.UW-Inventory_EquippedSlot_C.CompleteCombine");

	struct CompleteCombine_Params {
		
	}; CompleteCombine_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_EquippedSlot.UW-Inventory_EquippedSlot_C.BndEvt__btn_HelmetTree_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
inline void UUW-Inventory_EquippedSlot_C::BndEvt__btn_HelmetTree_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_EquippedSlot.UW-Inventory_EquippedSlot_C.BndEvt__btn_HelmetTree_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	struct BndEvt__btn_HelmetTree_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params {
		
	}; BndEvt__btn_HelmetTree_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_EquippedSlot.UW-Inventory_EquippedSlot_C.CompleteCombineOnRecipeTree
inline void UUW-Inventory_EquippedSlot_C::CompleteCombineOnRecipeTree() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_EquippedSlot.UW-Inventory_EquippedSlot_C.CompleteCombineOnRecipeTree");

	struct CompleteCombineOnRecipeTree_Params {
		
	}; CompleteCombineOnRecipeTree_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_EquippedSlot.UW-Inventory_EquippedSlot_C.HoverRecipeTree
inline void UUW-Inventory_EquippedSlot_C::HoverRecipeTree() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_EquippedSlot.UW-Inventory_EquippedSlot_C.HoverRecipeTree");

	struct HoverRecipeTree_Params {
		
	}; HoverRecipeTree_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_EquippedSlot.UW-Inventory_EquippedSlot_C.OnUpdateCastingDelegateEvent
inline void UUW-Inventory_EquippedSlot_C::OnUpdateCastingDelegateEvent(struct Unknown& CastingInfo, float CastingPercent) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_EquippedSlot.UW-Inventory_EquippedSlot_C.OnUpdateCastingDelegateEvent");

	struct OnUpdateCastingDelegateEvent_Params {
		struct Unknown& CastingInfo;
		float CastingPercent;
	}; OnUpdateCastingDelegateEvent_Params Params;

	Params.CastingPercent = CastingPercent;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	CastingInfo = Params.CastingInfo;

}

// Function UW-Inventory_EquippedSlot.UW-Inventory_EquippedSlot_C.ExecuteUbergraph_UW-Inventory_EquippedSlot
inline void UUW-Inventory_EquippedSlot_C::ExecuteUbergraph_UW-Inventory_EquippedSlot(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_EquippedSlot.UW-Inventory_EquippedSlot_C.ExecuteUbergraph_UW-Inventory_EquippedSlot");

	struct ExecuteUbergraph_UW-Inventory_EquippedSlot_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_UW-Inventory_EquippedSlot_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

