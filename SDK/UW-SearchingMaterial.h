// WidgetBlueprintGeneratedClass UW-SearchingMaterial.UW-SearchingMaterial_C
class UUW-SearchingMaterial_C : public UUserWidget {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248 (8)
	struct UWidgetAnimation Anim_LoopHintSpecialWeapon; // 0x250 (8)
	struct UButton Button_183; // 0x258 (8)
	struct UButton Button_283; // 0x260 (8)
	struct UCanvasPanel CanvasPanel; // 0x268 (8)
	struct UCanvasPanel CanvasPanel_2; // 0x270 (8)
	struct UImage Image_2; // 0x278 (8)
	struct UImage Image_3; // 0x280 (8)
	struct UImage Image_4; // 0x288 (8)
	struct UImage Image_185; // 0x290 (8)
	struct UImage Image_186; // 0x298 (8)
	struct UImage Image_189; // 0x2A0 (8)
	struct UImage Image_297; // 0x2A8 (8)
	struct UImage Img_Find; // 0x2B0 (8)
	struct UOverlay Overlay_2; // 0x2B8 (8)
	struct USizeBox SizeBox_3; // 0x2C0 (8)
	struct UTextBlock T_SerchButton; // 0x2C8 (8)
	struct UTextBlock TextBlock_5; // 0x2D0 (8)
	struct UTextBlock TextBlock_495; // 0x2D8 (8)
	struct UThrobber Throbber; // 0x2E0 (8)
	struct UUW-Inventory_MaterialIconSlot_C UW-Inventory_MaterialIconSlot; // 0x2E8 (8)
	struct UUW-Inventory_MaterialIconSlot_C UW-Inventory_MaterialIconSlot_2; // 0x2F0 (8)
	struct UUW-Inventory_MaterialIconSlot_C UW-Inventory_MaterialIconSlot_3; // 0x2F8 (8)
	struct UUW-Inventory_MaterialIconSlot_C UW-Inventory_MaterialIconSlot_4; // 0x300 (8)
	struct UUW-Inventory_MaterialIconSlot_C UW-Inventory_MaterialIconSlot_5; // 0x308 (8)
	struct UUW-Inventory_MaterialIconSlot_C UW-Inventory_MaterialIconSlot_6; // 0x310 (8)
	struct UUW-Inventory_MaterialIconSlot_C UW-Inventory_MaterialIconSlot_7; // 0x318 (8)
	struct UUW-Inventory_MaterialIconSlot_C UW-Inventory_MaterialIconSlot_8; // 0x320 (8)
	struct UUW-Inventory_MaterialIconSlot_C UW-Inventory_MaterialIconSlot_9; // 0x328 (8)
	struct UUW-Inventory_MaterialIconSlot_C UW-Inventory_MaterialIconSlot_10; // 0x330 (8)
	struct UUW-Inventory_MaterialIconSlot_C UW-Inventory_MaterialIconSlot_11; // 0x338 (8)
	struct UUW-Inventory_MaterialIconSlot_C UW-Inventory_MaterialIconSlot_12; // 0x340 (8)
	struct UVerticalBox VerticalBox_2; // 0x348 (8)
	struct UVerticalBox VerticalBox_4; // 0x350 (8)
	char ShowButton : 0; // 0x358 (1)
	int32_t Index; // 0x35C (4)
	struct TArray<struct FName> TempList; // 0x360 (16)
	int32_t MaxSlotCount; // 0x370 (4)
	char EnableShowExpertWeapon : 0; // 0x374 (1)

	void Get Slot Index(int32_t Index, struct UUW-Inventory_MaterialIconSlot_C& Slot); // Function UW-SearchingMaterial.UW-SearchingMaterial_C.Get Slot Index(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void Construct(); // Function UW-SearchingMaterial.UW-SearchingMaterial_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void Update(); // Function UW-SearchingMaterial.UW-SearchingMaterial_C.Update(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void 鉹@t元_2(struct FSelecteSearchMaterialItemInfo MaterialItemKey, char IsSelect); // Function UW-SearchingMaterial.UW-SearchingMaterial_C.鉹@t元_2(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void Destruct(); // Function UW-SearchingMaterial.UW-SearchingMaterial_C.Destruct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void BndEvt__Button_282_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function UW-SearchingMaterial.UW-SearchingMaterial_C.BndEvt__Button_282_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void Enable MaterialSearch(char EnableMaterialSearch); // Function UW-SearchingMaterial.UW-SearchingMaterial_C.Enable MaterialSearch(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void 鉹@t元_3(); // Function UW-SearchingMaterial.UW-SearchingMaterial_C.鉹@t元_3(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void BndEvt__Button_282_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function UW-SearchingMaterial.UW-SearchingMaterial_C.BndEvt__Button_282_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void BndEvt__Button_282_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function UW-SearchingMaterial.UW-SearchingMaterial_C.BndEvt__Button_282_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void UpdateUI(); // Function UW-SearchingMaterial.UW-SearchingMaterial_C.UpdateUI(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void 鉹@t元_1(char EnableMaterialSearch); // Function UW-SearchingMaterial.UW-SearchingMaterial_C.鉹@t元_1(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void BndEvt__Button_182_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature(); // Function UW-SearchingMaterial.UW-SearchingMaterial_C.BndEvt__Button_182_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void ExecuteUbergraph_UW-SearchingMaterial(int32_t EntryPoint); // Function UW-SearchingMaterial.UW-SearchingMaterial_C.ExecuteUbergraph_UW-SearchingMaterial(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
};

// Function UW-SearchingMaterial.UW-SearchingMaterial_C.Get Slot Index
inline void UUW-SearchingMaterial_C::Get Slot Index(int32_t Index, struct UUW-Inventory_MaterialIconSlot_C& Slot) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-SearchingMaterial.UW-SearchingMaterial_C.Get Slot Index");

	struct Get Slot Index_Params {
		int32_t Index;
		struct UUW-Inventory_MaterialIconSlot_C& Slot;
	}; Get Slot Index_Params Params;

	Params.Index = Index;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Slot = Params.Slot;

}

// Function UW-SearchingMaterial.UW-SearchingMaterial_C.Construct
inline void UUW-SearchingMaterial_C::Construct() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-SearchingMaterial.UW-SearchingMaterial_C.Construct");

	struct Construct_Params {
		
	}; Construct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-SearchingMaterial.UW-SearchingMaterial_C.Update
inline void UUW-SearchingMaterial_C::Update() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-SearchingMaterial.UW-SearchingMaterial_C.Update");

	struct Update_Params {
		
	}; Update_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-SearchingMaterial.UW-SearchingMaterial_C.鉹@t元_2
inline void UUW-SearchingMaterial_C::鉹@t元_2(struct FSelecteSearchMaterialItemInfo MaterialItemKey, char IsSelect) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-SearchingMaterial.UW-SearchingMaterial_C.鉹@t元_2");

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

// Function UW-SearchingMaterial.UW-SearchingMaterial_C.Destruct
inline void UUW-SearchingMaterial_C::Destruct() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-SearchingMaterial.UW-SearchingMaterial_C.Destruct");

	struct Destruct_Params {
		
	}; Destruct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-SearchingMaterial.UW-SearchingMaterial_C.BndEvt__Button_282_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
inline void UUW-SearchingMaterial_C::BndEvt__Button_282_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-SearchingMaterial.UW-SearchingMaterial_C.BndEvt__Button_282_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	struct BndEvt__Button_282_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params {
		
	}; BndEvt__Button_282_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-SearchingMaterial.UW-SearchingMaterial_C.Enable MaterialSearch
inline void UUW-SearchingMaterial_C::Enable MaterialSearch(char EnableMaterialSearch) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-SearchingMaterial.UW-SearchingMaterial_C.Enable MaterialSearch");

	struct Enable MaterialSearch_Params {
		char EnableMaterialSearch;
	}; Enable MaterialSearch_Params Params;

	Params.EnableMaterialSearch = EnableMaterialSearch;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-SearchingMaterial.UW-SearchingMaterial_C.鉹@t元_3
inline void UUW-SearchingMaterial_C::鉹@t元_3() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-SearchingMaterial.UW-SearchingMaterial_C.鉹@t元_3");

	struct 鉹@t元_3_Params {
		
	}; 鉹@t元_3_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-SearchingMaterial.UW-SearchingMaterial_C.BndEvt__Button_282_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
inline void UUW-SearchingMaterial_C::BndEvt__Button_282_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-SearchingMaterial.UW-SearchingMaterial_C.BndEvt__Button_282_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	struct BndEvt__Button_282_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params {
		
	}; BndEvt__Button_282_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-SearchingMaterial.UW-SearchingMaterial_C.BndEvt__Button_282_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
inline void UUW-SearchingMaterial_C::BndEvt__Button_282_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-SearchingMaterial.UW-SearchingMaterial_C.BndEvt__Button_282_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	struct BndEvt__Button_282_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params {
		
	}; BndEvt__Button_282_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-SearchingMaterial.UW-SearchingMaterial_C.UpdateUI
inline void UUW-SearchingMaterial_C::UpdateUI() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-SearchingMaterial.UW-SearchingMaterial_C.UpdateUI");

	struct UpdateUI_Params {
		
	}; UpdateUI_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-SearchingMaterial.UW-SearchingMaterial_C.鉹@t元_1
inline void UUW-SearchingMaterial_C::鉹@t元_1(char EnableMaterialSearch) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-SearchingMaterial.UW-SearchingMaterial_C.鉹@t元_1");

	struct 鉹@t元_1_Params {
		char EnableMaterialSearch;
	}; 鉹@t元_1_Params Params;

	Params.EnableMaterialSearch = EnableMaterialSearch;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-SearchingMaterial.UW-SearchingMaterial_C.BndEvt__Button_182_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
inline void UUW-SearchingMaterial_C::BndEvt__Button_182_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-SearchingMaterial.UW-SearchingMaterial_C.BndEvt__Button_182_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");

	struct BndEvt__Button_182_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params {
		
	}; BndEvt__Button_182_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-SearchingMaterial.UW-SearchingMaterial_C.ExecuteUbergraph_UW-SearchingMaterial
inline void UUW-SearchingMaterial_C::ExecuteUbergraph_UW-SearchingMaterial(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-SearchingMaterial.UW-SearchingMaterial_C.ExecuteUbergraph_UW-SearchingMaterial");

	struct ExecuteUbergraph_UW-SearchingMaterial_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_UW-SearchingMaterial_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

