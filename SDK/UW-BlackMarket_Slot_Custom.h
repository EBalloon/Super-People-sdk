// WidgetBlueprintGeneratedClass UW-BlackMarket_Slot_Custom.UW-BlackMarket_Slot_Custom_C
class UUW-BlackMarket_Slot_Custom_C : public UUW-BlackMarket_Slot_Base_C {

public:

	struct Unknown UberGraphFrame; // 0x3D8 (8)
	struct Unknown BTN-Menu02; // 0x3E0 (8)
	struct Unknown CP-SlotInfo; // 0x3E8 (8)
	struct Unknown IMG-BG; // 0x3F0 (8)
	struct Unknown IMG-BG-Border; // 0x3F8 (8)
	struct Unknown IMG-Item; // 0x400 (8)
	struct Unknown IMG-Mask; // 0x408 (8)
	struct Unknown IMG-Over; // 0x410 (8)
	struct Unknown IMG-Over-Border; // 0x418 (8)
	struct Unknown Menu02; // 0x420 (8)
	struct Unknown Overlay_Mask; // 0x428 (8)
	struct Unknown TXT-ItemName; // 0x430 (8)
	struct Unknown TXT-Menu01; // 0x438 (8)
	struct Unknown TXT-Menu02; // 0x440 (8)

	void SetSlotInfo(struct Unknown BlackmarketDataInfo); // Function UW-BlackMarket_Slot_Custom.UW-BlackMarket_Slot_Custom_C.SetSlotInfo(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	struct Unknown OnClick(struct Unknown MyGeometry, struct Unknown& MouseEvent); // Function UW-BlackMarket_Slot_Custom.UW-BlackMarket_Slot_Custom_C.OnClick(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void SetIconTexture(struct Unknown IconTexture); // Function UW-BlackMarket_Slot_Custom.UW-BlackMarket_Slot_Custom_C.SetIconTexture(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void OnLoaded_7C34C7D64FB053FED5EAACB72A3EAAD0(struct Unknown Loaded); // Function UW-BlackMarket_Slot_Custom.UW-BlackMarket_Slot_Custom_C.OnLoaded_7C34C7D64FB053FED5EAACB72A3EAAD0(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void Construct(); // Function UW-BlackMarket_Slot_Custom.UW-BlackMarket_Slot_Custom_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void OnMouseEnter(struct Unknown MyGeometry, struct Unknown& MouseEvent); // Function UW-BlackMarket_Slot_Custom.UW-BlackMarket_Slot_Custom_C.OnMouseEnter(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void OnMouseLeave(struct Unknown& MouseEvent); // Function UW-BlackMarket_Slot_Custom.UW-BlackMarket_Slot_Custom_C.OnMouseLeave(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void AysncLoading(struct Unknown IconTexture); // Function UW-BlackMarket_Slot_Custom.UW-BlackMarket_Slot_Custom_C.AysncLoading(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void SwitchMenu(); // Function UW-BlackMarket_Slot_Custom.UW-BlackMarket_Slot_Custom_C.SwitchMenu(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void SwitchSlot(); // Function UW-BlackMarket_Slot_Custom.UW-BlackMarket_Slot_Custom_C.SwitchSlot(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void BndEvt__BTN-Menu02_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature(); // Function UW-BlackMarket_Slot_Custom.UW-BlackMarket_Slot_Custom_C.BndEvt__BTN-Menu02_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void ExecuteUbergraph_UW-BlackMarket_Slot_Custom(int32_t EntryPoint); // Function UW-BlackMarket_Slot_Custom.UW-BlackMarket_Slot_Custom_C.ExecuteUbergraph_UW-BlackMarket_Slot_Custom(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
};

// Function UW-BlackMarket_Slot_Custom.UW-BlackMarket_Slot_Custom_C.SetSlotInfo
inline void UUW-BlackMarket_Slot_Custom_C::SetSlotInfo(struct Unknown BlackmarketDataInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-BlackMarket_Slot_Custom.UW-BlackMarket_Slot_Custom_C.SetSlotInfo");

	struct SetSlotInfo_Params {
		struct Unknown BlackmarketDataInfo;
	}; SetSlotInfo_Params Params;

	Params.BlackmarketDataInfo = BlackmarketDataInfo;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-BlackMarket_Slot_Custom.UW-BlackMarket_Slot_Custom_C.OnClick
inline struct Unknown UUW-BlackMarket_Slot_Custom_C::OnClick(struct Unknown MyGeometry, struct Unknown& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-BlackMarket_Slot_Custom.UW-BlackMarket_Slot_Custom_C.OnClick");

	struct OnClick_Params {
		struct Unknown MyGeometry;
		struct Unknown& MouseEvent;
		struct Unknown ReturnValue;

	}; OnClick_Params Params;

	Params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	MouseEvent = Params.MouseEvent;


	return params.ReturnValue;
}

// Function UW-BlackMarket_Slot_Custom.UW-BlackMarket_Slot_Custom_C.SetIconTexture
inline void UUW-BlackMarket_Slot_Custom_C::SetIconTexture(struct Unknown IconTexture) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-BlackMarket_Slot_Custom.UW-BlackMarket_Slot_Custom_C.SetIconTexture");

	struct SetIconTexture_Params {
		struct Unknown IconTexture;
	}; SetIconTexture_Params Params;

	Params.IconTexture = IconTexture;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-BlackMarket_Slot_Custom.UW-BlackMarket_Slot_Custom_C.OnLoaded_7C34C7D64FB053FED5EAACB72A3EAAD0
inline void UUW-BlackMarket_Slot_Custom_C::OnLoaded_7C34C7D64FB053FED5EAACB72A3EAAD0(struct Unknown Loaded) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-BlackMarket_Slot_Custom.UW-BlackMarket_Slot_Custom_C.OnLoaded_7C34C7D64FB053FED5EAACB72A3EAAD0");

	struct OnLoaded_7C34C7D64FB053FED5EAACB72A3EAAD0_Params {
		struct Unknown Loaded;
	}; OnLoaded_7C34C7D64FB053FED5EAACB72A3EAAD0_Params Params;

	Params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-BlackMarket_Slot_Custom.UW-BlackMarket_Slot_Custom_C.Construct
inline void UUW-BlackMarket_Slot_Custom_C::Construct() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-BlackMarket_Slot_Custom.UW-BlackMarket_Slot_Custom_C.Construct");

	struct Construct_Params {
		
	}; Construct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-BlackMarket_Slot_Custom.UW-BlackMarket_Slot_Custom_C.OnMouseEnter
inline void UUW-BlackMarket_Slot_Custom_C::OnMouseEnter(struct Unknown MyGeometry, struct Unknown& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-BlackMarket_Slot_Custom.UW-BlackMarket_Slot_Custom_C.OnMouseEnter");

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

// Function UW-BlackMarket_Slot_Custom.UW-BlackMarket_Slot_Custom_C.OnMouseLeave
inline void UUW-BlackMarket_Slot_Custom_C::OnMouseLeave(struct Unknown& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-BlackMarket_Slot_Custom.UW-BlackMarket_Slot_Custom_C.OnMouseLeave");

	struct OnMouseLeave_Params {
		struct Unknown& MouseEvent;
	}; OnMouseLeave_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	MouseEvent = Params.MouseEvent;

}

// Function UW-BlackMarket_Slot_Custom.UW-BlackMarket_Slot_Custom_C.AysncLoading
inline void UUW-BlackMarket_Slot_Custom_C::AysncLoading(struct Unknown IconTexture) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-BlackMarket_Slot_Custom.UW-BlackMarket_Slot_Custom_C.AysncLoading");

	struct AysncLoading_Params {
		struct Unknown IconTexture;
	}; AysncLoading_Params Params;

	Params.IconTexture = IconTexture;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-BlackMarket_Slot_Custom.UW-BlackMarket_Slot_Custom_C.SwitchMenu
inline void UUW-BlackMarket_Slot_Custom_C::SwitchMenu() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-BlackMarket_Slot_Custom.UW-BlackMarket_Slot_Custom_C.SwitchMenu");

	struct SwitchMenu_Params {
		
	}; SwitchMenu_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-BlackMarket_Slot_Custom.UW-BlackMarket_Slot_Custom_C.SwitchSlot
inline void UUW-BlackMarket_Slot_Custom_C::SwitchSlot() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-BlackMarket_Slot_Custom.UW-BlackMarket_Slot_Custom_C.SwitchSlot");

	struct SwitchSlot_Params {
		
	}; SwitchSlot_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-BlackMarket_Slot_Custom.UW-BlackMarket_Slot_Custom_C.BndEvt__BTN-Menu02_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature
inline void UUW-BlackMarket_Slot_Custom_C::BndEvt__BTN-Menu02_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-BlackMarket_Slot_Custom.UW-BlackMarket_Slot_Custom_C.BndEvt__BTN-Menu02_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature");

	struct BndEvt__BTN-Menu02_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature_Params {
		
	}; BndEvt__BTN-Menu02_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-BlackMarket_Slot_Custom.UW-BlackMarket_Slot_Custom_C.ExecuteUbergraph_UW-BlackMarket_Slot_Custom
inline void UUW-BlackMarket_Slot_Custom_C::ExecuteUbergraph_UW-BlackMarket_Slot_Custom(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-BlackMarket_Slot_Custom.UW-BlackMarket_Slot_Custom_C.ExecuteUbergraph_UW-BlackMarket_Slot_Custom");

	struct ExecuteUbergraph_UW-BlackMarket_Slot_Custom_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_UW-BlackMarket_Slot_Custom_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

