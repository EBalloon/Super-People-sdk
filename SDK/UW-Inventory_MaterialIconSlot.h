// WidgetBlueprintGeneratedClass UW-Inventory_MaterialIconSlot.UW-Inventory_MaterialIconSlot_C
class UUW-Inventory_MaterialIconSlot_C : public UUW-Inventory_SlotBase_C {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1360 (8)
	struct UWidgetAnimation Complete_ani; // 0x1368 (8)
	struct UWidgetAnimation Serching_ani; // 0x1370 (8)
	struct UButton Button; // 0x1378 (8)
	struct UImage IconBox; // 0x1380 (8)
	struct UImage Image; // 0x1388 (8)
	struct UImage Image_2; // 0x1390 (8)
	struct UImage Image_3; // 0x1398 (8)
	struct UImage Image_4; // 0x13A0 (8)
	struct UImage Image_5; // 0x13A8 (8)
	struct UImage Image_6; // 0x13B0 (8)
	struct UImage Image_7; // 0x13B8 (8)
	struct UImage Image_8; // 0x13C0 (8)
	struct UImage Image_9; // 0x13C8 (8)
	struct UImage Image_10; // 0x13D0 (8)
	struct UImage Image_149; // 0x13D8 (8)
	struct UImage Image_170; // 0x13E0 (8)
	struct UImage Image_253; // 0x13E8 (8)
	struct UImage Image_305; // 0x13F0 (8)
	struct UImage Image_Full; // 0x13F8 (8)
	struct UImage IMG_ItemIcon; // 0x1400 (8)
	struct UImage MaterialIcon; // 0x1408 (8)
	struct USizeBox MouseHover_2; // 0x1410 (8)
	struct USizeBox MouseHover_; // 0x1418 (8)
	struct USizeBox MousePress_2; // 0x1420 (8)
	struct USizeBox MousePress_; // 0x1428 (8)
	struct USizeBox Searching_; // 0x1430 (8)
	struct UImage Stroke; // 0x1438 (8)
	struct UImage Stroke_2; // 0x1440 (8)
	struct UImage Stroke_3; // 0x1448 (8)
	struct UImage Stroke_4; // 0x1450 (8)
	struct UWidget PreHoveredWidget; // 0x1458 (8)
	enum class ItemWidgetDragType PreDragType; // 0x1460 (1)
	char Selected : 0; // 0x1461 (1)
	int32_t NeedCount; // 0x1464 (4)
	struct FName ItemKey; // 0x1468 (8)
	struct FSelecteSearchMaterialItemInfo SelectItem; // 0x1470 (16)
	char BindSelectSearch : 0; // 0x1480 (1)
	char EnableSearch : 0; // 0x1481 (1)

	enum class ESlateVisibility Get_Image_Full_Visibility_1(); // Function UW-Inventory_MaterialIconSlot.UW-Inventory_MaterialIconSlot_C.Get_Image_Full_Visibility_1(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void MouseEnterImpl(); // Function UW-Inventory_MaterialIconSlot.UW-Inventory_MaterialIconSlot_C.MouseEnterImpl(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void SetMaterialInfo(struct FName ItemKey, int32_t Count, struct FName TopKey); // Function UW-Inventory_MaterialIconSlot.UW-Inventory_MaterialIconSlot_C.SetMaterialInfo(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function UW-Inventory_MaterialIconSlot.UW-Inventory_MaterialIconSlot_C.BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature(); // Function UW-Inventory_MaterialIconSlot.UW-Inventory_MaterialIconSlot_C.BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void BndEvt__Button_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature(); // Function UW-Inventory_MaterialIconSlot.UW-Inventory_MaterialIconSlot_C.BndEvt__Button_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void BndEvt__Button_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature(); // Function UW-Inventory_MaterialIconSlot.UW-Inventory_MaterialIconSlot_C.BndEvt__Button_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void Construct(); // Function UW-Inventory_MaterialIconSlot.UW-Inventory_MaterialIconSlot_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void Destruct(); // Function UW-Inventory_MaterialIconSlot.UW-Inventory_MaterialIconSlot_C.Destruct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void 鉹@t元_2(struct FSelecteSearchMaterialItemInfo MaterialItemKey, char IsSelect); // Function UW-Inventory_MaterialIconSlot.UW-Inventory_MaterialIconSlot_C.鉹@t元_2(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UW-Inventory_MaterialIconSlot.UW-Inventory_MaterialIconSlot_C.OnMouseEnter(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void Set Selecte(char Select); // Function UW-Inventory_MaterialIconSlot.UW-Inventory_MaterialIconSlot_C.Set Selecte(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function UW-Inventory_MaterialIconSlot.UW-Inventory_MaterialIconSlot_C.OnMouseLeave(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void 鉹@t元_1(char EnableMaterialSearch); // Function UW-Inventory_MaterialIconSlot.UW-Inventory_MaterialIconSlot_C.鉹@t元_1(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void ExecuteUbergraph_UW-Inventory_MaterialIconSlot(int32_t EntryPoint); // Function UW-Inventory_MaterialIconSlot.UW-Inventory_MaterialIconSlot_C.ExecuteUbergraph_UW-Inventory_MaterialIconSlot(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
};

// Function UW-Inventory_MaterialIconSlot.UW-Inventory_MaterialIconSlot_C.Get_Image_Full_Visibility_1
inline enum class ESlateVisibility UUW-Inventory_MaterialIconSlot_C::Get_Image_Full_Visibility_1() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_MaterialIconSlot.UW-Inventory_MaterialIconSlot_C.Get_Image_Full_Visibility_1");

	struct Get_Image_Full_Visibility_1_Params {
		
		enum class ESlateVisibility ReturnValue;

	}; Get_Image_Full_Visibility_1_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UW-Inventory_MaterialIconSlot.UW-Inventory_MaterialIconSlot_C.MouseEnterImpl
inline void UUW-Inventory_MaterialIconSlot_C::MouseEnterImpl() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_MaterialIconSlot.UW-Inventory_MaterialIconSlot_C.MouseEnterImpl");

	struct MouseEnterImpl_Params {
		
	}; MouseEnterImpl_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_MaterialIconSlot.UW-Inventory_MaterialIconSlot_C.SetMaterialInfo
inline void UUW-Inventory_MaterialIconSlot_C::SetMaterialInfo(struct FName ItemKey, int32_t Count, struct FName TopKey) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_MaterialIconSlot.UW-Inventory_MaterialIconSlot_C.SetMaterialInfo");

	struct SetMaterialInfo_Params {
		struct FName ItemKey;
		int32_t Count;
		struct FName TopKey;
	}; SetMaterialInfo_Params Params;

	Params.ItemKey = ItemKey;
	Params.Count = Count;
	Params.TopKey = TopKey;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_MaterialIconSlot.UW-Inventory_MaterialIconSlot_C.BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
inline void UUW-Inventory_MaterialIconSlot_C::BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_MaterialIconSlot.UW-Inventory_MaterialIconSlot_C.BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	struct BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params {
		
	}; BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_MaterialIconSlot.UW-Inventory_MaterialIconSlot_C.BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature
inline void UUW-Inventory_MaterialIconSlot_C::BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_MaterialIconSlot.UW-Inventory_MaterialIconSlot_C.BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature");

	struct BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature_Params {
		
	}; BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_MaterialIconSlot.UW-Inventory_MaterialIconSlot_C.BndEvt__Button_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
inline void UUW-Inventory_MaterialIconSlot_C::BndEvt__Button_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_MaterialIconSlot.UW-Inventory_MaterialIconSlot_C.BndEvt__Button_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");

	struct BndEvt__Button_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params {
		
	}; BndEvt__Button_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_MaterialIconSlot.UW-Inventory_MaterialIconSlot_C.BndEvt__Button_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
inline void UUW-Inventory_MaterialIconSlot_C::BndEvt__Button_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_MaterialIconSlot.UW-Inventory_MaterialIconSlot_C.BndEvt__Button_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature");

	struct BndEvt__Button_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params {
		
	}; BndEvt__Button_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_MaterialIconSlot.UW-Inventory_MaterialIconSlot_C.Construct
inline void UUW-Inventory_MaterialIconSlot_C::Construct() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_MaterialIconSlot.UW-Inventory_MaterialIconSlot_C.Construct");

	struct Construct_Params {
		
	}; Construct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_MaterialIconSlot.UW-Inventory_MaterialIconSlot_C.Destruct
inline void UUW-Inventory_MaterialIconSlot_C::Destruct() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_MaterialIconSlot.UW-Inventory_MaterialIconSlot_C.Destruct");

	struct Destruct_Params {
		
	}; Destruct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_MaterialIconSlot.UW-Inventory_MaterialIconSlot_C.鉹@t元_2
inline void UUW-Inventory_MaterialIconSlot_C::鉹@t元_2(struct FSelecteSearchMaterialItemInfo MaterialItemKey, char IsSelect) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_MaterialIconSlot.UW-Inventory_MaterialIconSlot_C.鉹@t元_2");

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

// Function UW-Inventory_MaterialIconSlot.UW-Inventory_MaterialIconSlot_C.OnMouseEnter
inline void UUW-Inventory_MaterialIconSlot_C::OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_MaterialIconSlot.UW-Inventory_MaterialIconSlot_C.OnMouseEnter");

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

// Function UW-Inventory_MaterialIconSlot.UW-Inventory_MaterialIconSlot_C.Set Selecte
inline void UUW-Inventory_MaterialIconSlot_C::Set Selecte(char Select) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_MaterialIconSlot.UW-Inventory_MaterialIconSlot_C.Set Selecte");

	struct Set Selecte_Params {
		char Select;
	}; Set Selecte_Params Params;

	Params.Select = Select;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_MaterialIconSlot.UW-Inventory_MaterialIconSlot_C.OnMouseLeave
inline void UUW-Inventory_MaterialIconSlot_C::OnMouseLeave(struct FPointerEvent& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_MaterialIconSlot.UW-Inventory_MaterialIconSlot_C.OnMouseLeave");

	struct OnMouseLeave_Params {
		struct FPointerEvent& MouseEvent;
	}; OnMouseLeave_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	MouseEvent = Params.MouseEvent;

}

// Function UW-Inventory_MaterialIconSlot.UW-Inventory_MaterialIconSlot_C.鉹@t元_1
inline void UUW-Inventory_MaterialIconSlot_C::鉹@t元_1(char EnableMaterialSearch) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_MaterialIconSlot.UW-Inventory_MaterialIconSlot_C.鉹@t元_1");

	struct 鉹@t元_1_Params {
		char EnableMaterialSearch;
	}; 鉹@t元_1_Params Params;

	Params.EnableMaterialSearch = EnableMaterialSearch;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_MaterialIconSlot.UW-Inventory_MaterialIconSlot_C.ExecuteUbergraph_UW-Inventory_MaterialIconSlot
inline void UUW-Inventory_MaterialIconSlot_C::ExecuteUbergraph_UW-Inventory_MaterialIconSlot(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_MaterialIconSlot.UW-Inventory_MaterialIconSlot_C.ExecuteUbergraph_UW-Inventory_MaterialIconSlot");

	struct ExecuteUbergraph_UW-Inventory_MaterialIconSlot_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_UW-Inventory_MaterialIconSlot_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

