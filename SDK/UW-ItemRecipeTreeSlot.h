// WidgetBlueprintGeneratedClass UW-ItemRecipeTreeSlot.UW-ItemRecipeTreeSlot_C
class UUW-ItemRecipeTreeSlot_C : public UUW-Inventory_SlotBase_C {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1358 (8)
	struct UWidgetAnimation Complete_ani; // 0x1360 (8)
	struct UWidgetAnimation Searching_ani; // 0x1368 (8)
	struct UImage Blank_SkillBG; // 0x1370 (8)
	struct UBorder Border_507; // 0x1378 (8)
	struct UButton Button_332; // 0x1380 (8)
	struct UImage Get_SkillBG; // 0x1388 (8)
	struct UImage Get_SkillBG_lv5; // 0x1390 (8)
	struct UImage Get_SkillBG_lv6; // 0x1398 (8)
	struct UImage Get_SkillBG_lv7; // 0x13A0 (8)
	struct UHorizontalBox HorizontalBox_Rarity; // 0x13A8 (8)
	struct UImage Image; // 0x13B0 (8)
	struct UImage Image_2; // 0x13B8 (8)
	struct UImage Image_3; // 0x13C0 (8)
	struct UImage Image_4; // 0x13C8 (8)
	struct UImage Image_5; // 0x13D0 (8)
	struct UImage Image_6; // 0x13D8 (8)
	struct UImage Image_7; // 0x13E0 (8)
	struct UImage Image_8; // 0x13E8 (8)
	struct UImage Image_9; // 0x13F0 (8)
	struct UImage Image_10; // 0x13F8 (8)
	struct UImage Image_12; // 0x1400 (8)
	struct UImage Image_16; // 0x1408 (8)
	struct UImage Image_332; // 0x1410 (8)
	struct UImage Image_689; // 0x1418 (8)
	struct UImage Image_690; // 0x1420 (8)
	struct UImage Image_Full; // 0x1428 (8)
	struct UImage Image_Have; // 0x1430 (8)
	struct UImage Img_Active; // 0x1438 (8)
	struct UImage IMG_Complete; // 0x1440 (8)
	struct UImage IMG_ItemIcon; // 0x1448 (8)
	struct USizeBox MouseHover_2; // 0x1450 (8)
	struct USizeBox MouseHover_; // 0x1458 (8)
	struct USizeBox MousePress_2; // 0x1460 (8)
	struct USizeBox MousePress_; // 0x1468 (8)
	struct UImage MyWeapon; // 0x1470 (8)
	struct UOverlay Searching; // 0x1478 (8)
	struct USizeBox Searching_; // 0x1480 (8)
	struct USizeBox SizeBox_1; // 0x1488 (8)
	struct USizeBox SizeBox_8; // 0x1490 (8)
	struct UTextBlock T_PerkName; // 0x1498 (8)
	struct UTextBlock T_PerkName_2; // 0x14A0 (8)
	struct UTextBlock T_PerkName_3; // 0x14A8 (8)
	struct UTextBlock T_PerkName_4; // 0x14B0 (8)
	struct UVerticalBox VerticalBox_1; // 0x14B8 (8)
	struct UUW-Inventory_ItemSlotHover_C HoverWidget; // 0x14C0 (8)
	char Selected : 0; // 0x14C8 (1)
	struct FSelecteSearchMaterialItemInfo SelectItem; // 0x14CC (16)
	struct UMaterialInstanceDynamic NewVar_1; // 0x14E0 (8)
	char EnableSearch : 0; // 0x14E8 (1)
	struct FSelecteSearchMaterialItemInfo TempData; // 0x14EC (16)
	char IsComplete : 0; // 0x14FC (1)

	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UW-ItemRecipeTreeSlot.UW-ItemRecipeTreeSlot_C.OnMouseButtonDown(BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	struct FEventReply OnMouseButtonUp(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UW-ItemRecipeTreeSlot.UW-ItemRecipeTreeSlot_C.OnMouseButtonUp(BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void SetOpacity(char bActive, char bComplete); // Function UW-ItemRecipeTreeSlot.UW-ItemRecipeTreeSlot_C.SetOpacity(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void MouseEnterImpl(); // Function UW-ItemRecipeTreeSlot.UW-ItemRecipeTreeSlot_C.MouseEnterImpl(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void SetRarity(enum class EItemRarity Rarity, char bStar); // Function UW-ItemRecipeTreeSlot.UW-ItemRecipeTreeSlot_C.SetRarity(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void SetMaterialInfo(struct FName ItemKey, int32_t Count, char Complete, char Having, struct UUW-Inventory_ItemSlotHover_C HoverWidget, struct FName TopItem); // Function UW-ItemRecipeTreeSlot.UW-ItemRecipeTreeSlot_C.SetMaterialInfo(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void OnLoaded_B0A3D28F44780582B366508928D8D420(struct Object Loaded); // Function UW-ItemRecipeTreeSlot.UW-ItemRecipeTreeSlot_C.OnLoaded_B0A3D28F44780582B366508928D8D420(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void BndEvt__Button_331_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature(); // Function UW-ItemRecipeTreeSlot.UW-ItemRecipeTreeSlot_C.BndEvt__Button_331_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void BndEvt__Button_331_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function UW-ItemRecipeTreeSlot.UW-ItemRecipeTreeSlot_C.BndEvt__Button_331_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void BndEvt__Button_331_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature(); // Function UW-ItemRecipeTreeSlot.UW-ItemRecipeTreeSlot_C.BndEvt__Button_331_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void Construct(); // Function UW-ItemRecipeTreeSlot.UW-ItemRecipeTreeSlot_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void BndEvt__Button_331_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function UW-ItemRecipeTreeSlot.UW-ItemRecipeTreeSlot_C.BndEvt__Button_331_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UW-ItemRecipeTreeSlot.UW-ItemRecipeTreeSlot_C.OnMouseEnter(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void Set Selecte(char Select); // Function UW-ItemRecipeTreeSlot.UW-ItemRecipeTreeSlot_C.Set Selecte(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void Destruct(); // Function UW-ItemRecipeTreeSlot.UW-ItemRecipeTreeSlot_C.Destruct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void 鉹@t元_2(struct FSelecteSearchMaterialItemInfo MaterialItemKey, char IsSelect); // Function UW-ItemRecipeTreeSlot.UW-ItemRecipeTreeSlot_C.鉹@t元_2(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void 鉹@t元_1(char EnableMaterialSearch); // Function UW-ItemRecipeTreeSlot.UW-ItemRecipeTreeSlot_C.鉹@t元_1(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void AsyncLoadIconTexture(struct TSoftObjectPtr<UPaperSprite> IconTexture); // Function UW-ItemRecipeTreeSlot.UW-ItemRecipeTreeSlot_C.AsyncLoadIconTexture(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void ExecuteUbergraph_UW-ItemRecipeTreeSlot(int32_t EntryPoint); // Function UW-ItemRecipeTreeSlot.UW-ItemRecipeTreeSlot_C.ExecuteUbergraph_UW-ItemRecipeTreeSlot(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
};

// Function UW-ItemRecipeTreeSlot.UW-ItemRecipeTreeSlot_C.OnMouseButtonDown
inline struct FEventReply UUW-ItemRecipeTreeSlot_C::OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ItemRecipeTreeSlot.UW-ItemRecipeTreeSlot_C.OnMouseButtonDown");

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

// Function UW-ItemRecipeTreeSlot.UW-ItemRecipeTreeSlot_C.OnMouseButtonUp
inline struct FEventReply UUW-ItemRecipeTreeSlot_C::OnMouseButtonUp(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ItemRecipeTreeSlot.UW-ItemRecipeTreeSlot_C.OnMouseButtonUp");

	struct OnMouseButtonUp_Params {
		struct FGeometry MyGeometry;
		struct FPointerEvent& MouseEvent;
		struct FEventReply ReturnValue;

	}; OnMouseButtonUp_Params Params;

	Params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	MouseEvent = Params.MouseEvent;


	return params.ReturnValue;
}

// Function UW-ItemRecipeTreeSlot.UW-ItemRecipeTreeSlot_C.SetOpacity
inline void UUW-ItemRecipeTreeSlot_C::SetOpacity(char bActive, char bComplete) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ItemRecipeTreeSlot.UW-ItemRecipeTreeSlot_C.SetOpacity");

	struct SetOpacity_Params {
		char bActive;
		char bComplete;
	}; SetOpacity_Params Params;

	Params.bActive = bActive;
	Params.bComplete = bComplete;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ItemRecipeTreeSlot.UW-ItemRecipeTreeSlot_C.MouseEnterImpl
inline void UUW-ItemRecipeTreeSlot_C::MouseEnterImpl() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ItemRecipeTreeSlot.UW-ItemRecipeTreeSlot_C.MouseEnterImpl");

	struct MouseEnterImpl_Params {
		
	}; MouseEnterImpl_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ItemRecipeTreeSlot.UW-ItemRecipeTreeSlot_C.SetRarity
inline void UUW-ItemRecipeTreeSlot_C::SetRarity(enum class EItemRarity Rarity, char bStar) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ItemRecipeTreeSlot.UW-ItemRecipeTreeSlot_C.SetRarity");

	struct SetRarity_Params {
		enum class EItemRarity Rarity;
		char bStar;
	}; SetRarity_Params Params;

	Params.Rarity = Rarity;
	Params.bStar = bStar;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ItemRecipeTreeSlot.UW-ItemRecipeTreeSlot_C.SetMaterialInfo
inline void UUW-ItemRecipeTreeSlot_C::SetMaterialInfo(struct FName ItemKey, int32_t Count, char Complete, char Having, struct UUW-Inventory_ItemSlotHover_C HoverWidget, struct FName TopItem) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ItemRecipeTreeSlot.UW-ItemRecipeTreeSlot_C.SetMaterialInfo");

	struct SetMaterialInfo_Params {
		struct FName ItemKey;
		int32_t Count;
		char Complete;
		char Having;
		struct UUW-Inventory_ItemSlotHover_C HoverWidget;
		struct FName TopItem;
	}; SetMaterialInfo_Params Params;

	Params.ItemKey = ItemKey;
	Params.Count = Count;
	Params.Complete = Complete;
	Params.Having = Having;
	Params.HoverWidget = HoverWidget;
	Params.TopItem = TopItem;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ItemRecipeTreeSlot.UW-ItemRecipeTreeSlot_C.OnLoaded_B0A3D28F44780582B366508928D8D420
inline void UUW-ItemRecipeTreeSlot_C::OnLoaded_B0A3D28F44780582B366508928D8D420(struct Object Loaded) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ItemRecipeTreeSlot.UW-ItemRecipeTreeSlot_C.OnLoaded_B0A3D28F44780582B366508928D8D420");

	struct OnLoaded_B0A3D28F44780582B366508928D8D420_Params {
		struct Object Loaded;
	}; OnLoaded_B0A3D28F44780582B366508928D8D420_Params Params;

	Params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ItemRecipeTreeSlot.UW-ItemRecipeTreeSlot_C.BndEvt__Button_331_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
inline void UUW-ItemRecipeTreeSlot_C::BndEvt__Button_331_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ItemRecipeTreeSlot.UW-ItemRecipeTreeSlot_C.BndEvt__Button_331_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");

	struct BndEvt__Button_331_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params {
		
	}; BndEvt__Button_331_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ItemRecipeTreeSlot.UW-ItemRecipeTreeSlot_C.BndEvt__Button_331_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
inline void UUW-ItemRecipeTreeSlot_C::BndEvt__Button_331_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ItemRecipeTreeSlot.UW-ItemRecipeTreeSlot_C.BndEvt__Button_331_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	struct BndEvt__Button_331_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params {
		
	}; BndEvt__Button_331_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ItemRecipeTreeSlot.UW-ItemRecipeTreeSlot_C.BndEvt__Button_331_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature
inline void UUW-ItemRecipeTreeSlot_C::BndEvt__Button_331_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ItemRecipeTreeSlot.UW-ItemRecipeTreeSlot_C.BndEvt__Button_331_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature");

	struct BndEvt__Button_331_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature_Params {
		
	}; BndEvt__Button_331_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ItemRecipeTreeSlot.UW-ItemRecipeTreeSlot_C.Construct
inline void UUW-ItemRecipeTreeSlot_C::Construct() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ItemRecipeTreeSlot.UW-ItemRecipeTreeSlot_C.Construct");

	struct Construct_Params {
		
	}; Construct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ItemRecipeTreeSlot.UW-ItemRecipeTreeSlot_C.BndEvt__Button_331_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
inline void UUW-ItemRecipeTreeSlot_C::BndEvt__Button_331_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ItemRecipeTreeSlot.UW-ItemRecipeTreeSlot_C.BndEvt__Button_331_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	struct BndEvt__Button_331_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params {
		
	}; BndEvt__Button_331_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ItemRecipeTreeSlot.UW-ItemRecipeTreeSlot_C.OnMouseEnter
inline void UUW-ItemRecipeTreeSlot_C::OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ItemRecipeTreeSlot.UW-ItemRecipeTreeSlot_C.OnMouseEnter");

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

// Function UW-ItemRecipeTreeSlot.UW-ItemRecipeTreeSlot_C.Set Selecte
inline void UUW-ItemRecipeTreeSlot_C::Set Selecte(char Select) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ItemRecipeTreeSlot.UW-ItemRecipeTreeSlot_C.Set Selecte");

	struct Set Selecte_Params {
		char Select;
	}; Set Selecte_Params Params;

	Params.Select = Select;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ItemRecipeTreeSlot.UW-ItemRecipeTreeSlot_C.Destruct
inline void UUW-ItemRecipeTreeSlot_C::Destruct() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ItemRecipeTreeSlot.UW-ItemRecipeTreeSlot_C.Destruct");

	struct Destruct_Params {
		
	}; Destruct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ItemRecipeTreeSlot.UW-ItemRecipeTreeSlot_C.鉹@t元_2
inline void UUW-ItemRecipeTreeSlot_C::鉹@t元_2(struct FSelecteSearchMaterialItemInfo MaterialItemKey, char IsSelect) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ItemRecipeTreeSlot.UW-ItemRecipeTreeSlot_C.鉹@t元_2");

	struct 鉹@t元_2_Params {
		struct FSelecteSearchMaterialItemInfo MaterialItemKey;
		char IsSelect;
	}; 鉹@t元_2_Params Params;

	Params.MaterialItemKey = MaterialItemKey;
	Params.IsSelect = IsSelect;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ItemRecipeTreeSlot.UW-ItemRecipeTreeSlot_C.鉹@t元_1
inline void UUW-ItemRecipeTreeSlot_C::鉹@t元_1(char EnableMaterialSearch) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ItemRecipeTreeSlot.UW-ItemRecipeTreeSlot_C.鉹@t元_1");

	struct 鉹@t元_1_Params {
		char EnableMaterialSearch;
	}; 鉹@t元_1_Params Params;

	Params.EnableMaterialSearch = EnableMaterialSearch;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ItemRecipeTreeSlot.UW-ItemRecipeTreeSlot_C.AsyncLoadIconTexture
inline void UUW-ItemRecipeTreeSlot_C::AsyncLoadIconTexture(struct TSoftObjectPtr<UPaperSprite> IconTexture) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ItemRecipeTreeSlot.UW-ItemRecipeTreeSlot_C.AsyncLoadIconTexture");

	struct AsyncLoadIconTexture_Params {
		struct TSoftObjectPtr<UPaperSprite> IconTexture;
	}; AsyncLoadIconTexture_Params Params;

	Params.IconTexture = IconTexture;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ItemRecipeTreeSlot.UW-ItemRecipeTreeSlot_C.ExecuteUbergraph_UW-ItemRecipeTreeSlot
inline void UUW-ItemRecipeTreeSlot_C::ExecuteUbergraph_UW-ItemRecipeTreeSlot(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ItemRecipeTreeSlot.UW-ItemRecipeTreeSlot_C.ExecuteUbergraph_UW-ItemRecipeTreeSlot");

	struct ExecuteUbergraph_UW-ItemRecipeTreeSlot_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_UW-ItemRecipeTreeSlot_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

