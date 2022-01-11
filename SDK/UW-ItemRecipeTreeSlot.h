// WidgetBlueprintGeneratedClass UW-ItemRecipeTreeSlot.UW-ItemRecipeTreeSlot_C
class UUW-ItemRecipeTreeSlot_C : public UUW-Inventory_SlotBase_C {

public:

	struct Unknown UberGraphFrame; // 0x1358 (8)
	struct Unknown Complete_ani; // 0x1360 (8)
	struct Unknown Searching_ani; // 0x1368 (8)
	struct Unknown Blank_SkillBG; // 0x1370 (8)
	struct Unknown Border_507; // 0x1378 (8)
	struct Unknown Button_332; // 0x1380 (8)
	struct Unknown Get_SkillBG; // 0x1388 (8)
	struct Unknown Get_SkillBG_lv5; // 0x1390 (8)
	struct Unknown Get_SkillBG_lv6; // 0x1398 (8)
	struct Unknown Get_SkillBG_lv7; // 0x13A0 (8)
	struct Unknown HorizontalBox_Rarity; // 0x13A8 (8)
	struct Unknown Image; // 0x13B0 (8)
	struct Unknown Image_2; // 0x13B8 (8)
	struct Unknown Image_3; // 0x13C0 (8)
	struct Unknown Image_4; // 0x13C8 (8)
	struct Unknown Image_5; // 0x13D0 (8)
	struct Unknown Image_6; // 0x13D8 (8)
	struct Unknown Image_7; // 0x13E0 (8)
	struct Unknown Image_8; // 0x13E8 (8)
	struct Unknown Image_9; // 0x13F0 (8)
	struct Unknown Image_10; // 0x13F8 (8)
	struct Unknown Image_12; // 0x1400 (8)
	struct Unknown Image_16; // 0x1408 (8)
	struct Unknown Image_332; // 0x1410 (8)
	struct Unknown Image_689; // 0x1418 (8)
	struct Unknown Image_690; // 0x1420 (8)
	struct Unknown Image_Full; // 0x1428 (8)
	struct Unknown Image_Have; // 0x1430 (8)
	struct Unknown Img_Active; // 0x1438 (8)
	struct Unknown IMG_Complete; // 0x1440 (8)
	struct Unknown IMG_ItemIcon; // 0x1448 (8)
	struct Unknown MouseHover_2; // 0x1450 (8)
	struct Unknown MouseHover_; // 0x1458 (8)
	struct Unknown MousePress_2; // 0x1460 (8)
	struct Unknown MousePress_; // 0x1468 (8)
	struct Unknown MyWeapon; // 0x1470 (8)
	struct Unknown Searching; // 0x1478 (8)
	struct Unknown Searching_; // 0x1480 (8)
	struct Unknown SizeBox_1; // 0x1488 (8)
	struct Unknown SizeBox_8; // 0x1490 (8)
	struct Unknown T_PerkName; // 0x1498 (8)
	struct Unknown T_PerkName_2; // 0x14A0 (8)
	struct Unknown T_PerkName_3; // 0x14A8 (8)
	struct Unknown T_PerkName_4; // 0x14B0 (8)
	struct Unknown VerticalBox_1; // 0x14B8 (8)
	struct Unknown HoverWidget; // 0x14C0 (8)
	char Selected : 0; // 0x14C8 (1)
	struct Unknown SelectItem; // 0x14CC (16)
	struct Unknown NewVar_1; // 0x14E0 (8)
	char EnableSearch : 0; // 0x14E8 (1)
	struct Unknown TempData; // 0x14EC (16)
	char IsComplete : 0; // 0x14FC (1)

	struct Unknown OnMouseButtonDown(struct Unknown MyGeometry, struct Unknown& MouseEvent); // Function UW-ItemRecipeTreeSlot.UW-ItemRecipeTreeSlot_C.OnMouseButtonDown(BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	struct Unknown OnMouseButtonUp(struct Unknown MyGeometry, struct Unknown& MouseEvent); // Function UW-ItemRecipeTreeSlot.UW-ItemRecipeTreeSlot_C.OnMouseButtonUp(BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void SetOpacity(char bActive, char bComplete); // Function UW-ItemRecipeTreeSlot.UW-ItemRecipeTreeSlot_C.SetOpacity(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void MouseEnterImpl(); // Function UW-ItemRecipeTreeSlot.UW-ItemRecipeTreeSlot_C.MouseEnterImpl(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void SetRarity(enum class Unknow Rarity, char bStar); // Function UW-ItemRecipeTreeSlot.UW-ItemRecipeTreeSlot_C.SetRarity(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void SetMaterialInfo(struct FName ItemKey, int32_t Count, char Complete, char Having, struct Unknown HoverWidget, struct FName TopItem); // Function UW-ItemRecipeTreeSlot.UW-ItemRecipeTreeSlot_C.SetMaterialInfo(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void OnLoaded_B0A3D28F44780582B366508928D8D420(struct Unknown Loaded); // Function UW-ItemRecipeTreeSlot.UW-ItemRecipeTreeSlot_C.OnLoaded_B0A3D28F44780582B366508928D8D420(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void BndEvt__Button_331_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature(); // Function UW-ItemRecipeTreeSlot.UW-ItemRecipeTreeSlot_C.BndEvt__Button_331_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature(BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void BndEvt__Button_331_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function UW-ItemRecipeTreeSlot.UW-ItemRecipeTreeSlot_C.BndEvt__Button_331_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void BndEvt__Button_331_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature(); // Function UW-ItemRecipeTreeSlot.UW-ItemRecipeTreeSlot_C.BndEvt__Button_331_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature(BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void Construct(); // Function UW-ItemRecipeTreeSlot.UW-ItemRecipeTreeSlot_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void BndEvt__Button_331_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function UW-ItemRecipeTreeSlot.UW-ItemRecipeTreeSlot_C.BndEvt__Button_331_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void OnMouseEnter(struct Unknown MyGeometry, struct Unknown& MouseEvent); // Function UW-ItemRecipeTreeSlot.UW-ItemRecipeTreeSlot_C.OnMouseEnter(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void Set Selecte(char Select); // Function UW-ItemRecipeTreeSlot.UW-ItemRecipeTreeSlot_C.Set Selecte(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void Destruct(); // Function UW-ItemRecipeTreeSlot.UW-ItemRecipeTreeSlot_C.Destruct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void 鉹@t元_2(struct Unknown MaterialItemKey, char IsSelect); // Function UW-ItemRecipeTreeSlot.UW-ItemRecipeTreeSlot_C.鉹@t元_2(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void 鉹@t元_1(char EnableMaterialSearch); // Function UW-ItemRecipeTreeSlot.UW-ItemRecipeTreeSlot_C.鉹@t元_1(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void AsyncLoadIconTexture(struct Unknown IconTexture); // Function UW-ItemRecipeTreeSlot.UW-ItemRecipeTreeSlot_C.AsyncLoadIconTexture(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void ExecuteUbergraph_UW-ItemRecipeTreeSlot(int32_t EntryPoint); // Function UW-ItemRecipeTreeSlot.UW-ItemRecipeTreeSlot_C.ExecuteUbergraph_UW-ItemRecipeTreeSlot(Final|UbergraphFunction|HasDefaults) // <Game_BE.exe+0x2B80160>
};

// Function UW-ItemRecipeTreeSlot.UW-ItemRecipeTreeSlot_C.OnMouseButtonDown
inline struct Unknown UUW-ItemRecipeTreeSlot_C::OnMouseButtonDown(struct Unknown MyGeometry, struct Unknown& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ItemRecipeTreeSlot.UW-ItemRecipeTreeSlot_C.OnMouseButtonDown");

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

// Function UW-ItemRecipeTreeSlot.UW-ItemRecipeTreeSlot_C.OnMouseButtonUp
inline struct Unknown UUW-ItemRecipeTreeSlot_C::OnMouseButtonUp(struct Unknown MyGeometry, struct Unknown& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ItemRecipeTreeSlot.UW-ItemRecipeTreeSlot_C.OnMouseButtonUp");

	struct OnMouseButtonUp_Params {
		struct Unknown MyGeometry;
		struct Unknown& MouseEvent;
		struct Unknown ReturnValue;

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
inline void UUW-ItemRecipeTreeSlot_C::SetRarity(enum class Unknow Rarity, char bStar) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ItemRecipeTreeSlot.UW-ItemRecipeTreeSlot_C.SetRarity");

	struct SetRarity_Params {
		enum class Unknow Rarity;
		char bStar;
	}; SetRarity_Params Params;

	Params.Rarity = Rarity;
	Params.bStar = bStar;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ItemRecipeTreeSlot.UW-ItemRecipeTreeSlot_C.SetMaterialInfo
inline void UUW-ItemRecipeTreeSlot_C::SetMaterialInfo(struct FName ItemKey, int32_t Count, char Complete, char Having, struct Unknown HoverWidget, struct FName TopItem) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ItemRecipeTreeSlot.UW-ItemRecipeTreeSlot_C.SetMaterialInfo");

	struct SetMaterialInfo_Params {
		struct FName ItemKey;
		int32_t Count;
		char Complete;
		char Having;
		struct Unknown HoverWidget;
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
inline void UUW-ItemRecipeTreeSlot_C::OnLoaded_B0A3D28F44780582B366508928D8D420(struct Unknown Loaded) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ItemRecipeTreeSlot.UW-ItemRecipeTreeSlot_C.OnLoaded_B0A3D28F44780582B366508928D8D420");

	struct OnLoaded_B0A3D28F44780582B366508928D8D420_Params {
		struct Unknown Loaded;
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
inline void UUW-ItemRecipeTreeSlot_C::OnMouseEnter(struct Unknown MyGeometry, struct Unknown& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ItemRecipeTreeSlot.UW-ItemRecipeTreeSlot_C.OnMouseEnter");

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
inline void UUW-ItemRecipeTreeSlot_C::鉹@t元_2(struct Unknown MaterialItemKey, char IsSelect) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ItemRecipeTreeSlot.UW-ItemRecipeTreeSlot_C.鉹@t元_2");

	struct 鉹@t元_2_Params {
		struct Unknown MaterialItemKey;
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
inline void UUW-ItemRecipeTreeSlot_C::AsyncLoadIconTexture(struct Unknown IconTexture) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ItemRecipeTreeSlot.UW-ItemRecipeTreeSlot_C.AsyncLoadIconTexture");

	struct AsyncLoadIconTexture_Params {
		struct Unknown IconTexture;
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

