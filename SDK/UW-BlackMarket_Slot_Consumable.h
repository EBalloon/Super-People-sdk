// WidgetBlueprintGeneratedClass UW-BlackMarket_Slot_Consumable.UW-BlackMarket_Slot_Consumable_C
class UUW-BlackMarket_Slot_Consumable_C : public UUW-BlackMarket_Slot_Base_C {

public:

	struct Unknown UberGraphFrame; // 0x3D8 (8)
	struct Unknown BTN-Menu02; // 0x3E0 (8)
	struct Unknown BTN-Menu03; // 0x3E8 (8)
	struct Unknown BTN-Menu04; // 0x3F0 (8)
	struct Unknown BTN-Menu05; // 0x3F8 (8)
	struct Unknown BTN-Menu06; // 0x400 (8)
	struct Unknown CP-SlotInfo; // 0x408 (8)
	struct Unknown IMG-BG; // 0x410 (8)
	struct Unknown IMG-BG-Border; // 0x418 (8)
	struct Unknown IMG-Item; // 0x420 (8)
	struct Unknown IMG-Mask; // 0x428 (8)
	struct Unknown IMG-Over; // 0x430 (8)
	struct Unknown IMG-Over-Border; // 0x438 (8)
	struct Unknown Menu02; // 0x440 (8)
	struct Unknown Menu03; // 0x448 (8)
	struct Unknown Menu04; // 0x450 (8)
	struct Unknown Menu05; // 0x458 (8)
	struct Unknown Menu06; // 0x460 (8)
	struct Unknown Overlay_Mask; // 0x468 (8)
	struct Unknown TXT-Adrenaline; // 0x470 (8)
	struct Unknown TXT-Fuel; // 0x478 (8)
	struct Unknown TXT-Health; // 0x480 (8)
	struct Unknown TXT-ItemName; // 0x488 (8)
	struct Unknown TXT-Menu01; // 0x490 (8)
	struct Unknown TXT-Menu02; // 0x498 (8)
	struct Unknown TXT-Menu03; // 0x4A0 (8)
	struct Unknown TXT-Menu04; // 0x4A8 (8)
	struct Unknown TXT-Menu05; // 0x4B0 (8)
	struct Unknown TXT-Menu06; // 0x4B8 (8)
	struct Unknown TXT-Weight; // 0x4C0 (8)

	struct Unknown On_IMG-BG_MouseButtonDown_1(struct Unknown MyGeometry, struct Unknown& MouseEvent); // Function UW-BlackMarket_Slot_Consumable.UW-BlackMarket_Slot_Consumable_C.On_IMG-BG_MouseButtonDown_1(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void SetIconTexture(struct Unknown ItemTexture); // Function UW-BlackMarket_Slot_Consumable.UW-BlackMarket_Slot_Consumable_C.SetIconTexture(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void OnLoaded_5699AF624A3322545E5B4781A35497A4(struct Unknown Loaded); // Function UW-BlackMarket_Slot_Consumable.UW-BlackMarket_Slot_Consumable_C.OnLoaded_5699AF624A3322545E5B4781A35497A4(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void Construct(); // Function UW-BlackMarket_Slot_Consumable.UW-BlackMarket_Slot_Consumable_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void OnMouseEnter(struct Unknown MyGeometry, struct Unknown& MouseEvent); // Function UW-BlackMarket_Slot_Consumable.UW-BlackMarket_Slot_Consumable_C.OnMouseEnter(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void OnMouseLeave(struct Unknown& MouseEvent); // Function UW-BlackMarket_Slot_Consumable.UW-BlackMarket_Slot_Consumable_C.OnMouseLeave(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void AysncLoading(struct Unknown IconTexture); // Function UW-BlackMarket_Slot_Consumable.UW-BlackMarket_Slot_Consumable_C.AysncLoading(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void SwitchMenu(); // Function UW-BlackMarket_Slot_Consumable.UW-BlackMarket_Slot_Consumable_C.SwitchMenu(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void SwitchSlot(); // Function UW-BlackMarket_Slot_Consumable.UW-BlackMarket_Slot_Consumable_C.SwitchSlot(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void BndEvt__BTN-Menu02_K2Node_ComponentBoundEvent_180_OnButtonClickedEvent__DelegateSignature(); // Function UW-BlackMarket_Slot_Consumable.UW-BlackMarket_Slot_Consumable_C.BndEvt__BTN-Menu02_K2Node_ComponentBoundEvent_180_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void BndEvt__BTN-Menu03_K2Node_ComponentBoundEvent_197_OnButtonClickedEvent__DelegateSignature(); // Function UW-BlackMarket_Slot_Consumable.UW-BlackMarket_Slot_Consumable_C.BndEvt__BTN-Menu03_K2Node_ComponentBoundEvent_197_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void BndEvt__BTN-Menu04_K2Node_ComponentBoundEvent_215_OnButtonClickedEvent__DelegateSignature(); // Function UW-BlackMarket_Slot_Consumable.UW-BlackMarket_Slot_Consumable_C.BndEvt__BTN-Menu04_K2Node_ComponentBoundEvent_215_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void BndEvt__BTN-Menu05_K2Node_ComponentBoundEvent_234_OnButtonClickedEvent__DelegateSignature(); // Function UW-BlackMarket_Slot_Consumable.UW-BlackMarket_Slot_Consumable_C.BndEvt__BTN-Menu05_K2Node_ComponentBoundEvent_234_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void BndEvt__BTN-Menu06_K2Node_ComponentBoundEvent_254_OnButtonClickedEvent__DelegateSignature(); // Function UW-BlackMarket_Slot_Consumable.UW-BlackMarket_Slot_Consumable_C.BndEvt__BTN-Menu06_K2Node_ComponentBoundEvent_254_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void ExecuteUbergraph_UW-BlackMarket_Slot_Consumable(int32_t EntryPoint); // Function UW-BlackMarket_Slot_Consumable.UW-BlackMarket_Slot_Consumable_C.ExecuteUbergraph_UW-BlackMarket_Slot_Consumable(Final|UbergraphFunction|HasDefaults) // <Game_BE.exe+0x2B812B0>
};

// Function UW-BlackMarket_Slot_Consumable.UW-BlackMarket_Slot_Consumable_C.On_IMG-BG_MouseButtonDown_1
inline struct Unknown UUW-BlackMarket_Slot_Consumable_C::On_IMG-BG_MouseButtonDown_1(struct Unknown MyGeometry, struct Unknown& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-BlackMarket_Slot_Consumable.UW-BlackMarket_Slot_Consumable_C.On_IMG-BG_MouseButtonDown_1");

	struct On_IMG-BG_MouseButtonDown_1_Params {
		struct Unknown MyGeometry;
		struct Unknown& MouseEvent;
		struct Unknown ReturnValue;

	}; On_IMG-BG_MouseButtonDown_1_Params Params;

	Params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	MouseEvent = Params.MouseEvent;


	return params.ReturnValue;
}

// Function UW-BlackMarket_Slot_Consumable.UW-BlackMarket_Slot_Consumable_C.SetIconTexture
inline void UUW-BlackMarket_Slot_Consumable_C::SetIconTexture(struct Unknown ItemTexture) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-BlackMarket_Slot_Consumable.UW-BlackMarket_Slot_Consumable_C.SetIconTexture");

	struct SetIconTexture_Params {
		struct Unknown ItemTexture;
	}; SetIconTexture_Params Params;

	Params.ItemTexture = ItemTexture;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-BlackMarket_Slot_Consumable.UW-BlackMarket_Slot_Consumable_C.OnLoaded_5699AF624A3322545E5B4781A35497A4
inline void UUW-BlackMarket_Slot_Consumable_C::OnLoaded_5699AF624A3322545E5B4781A35497A4(struct Unknown Loaded) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-BlackMarket_Slot_Consumable.UW-BlackMarket_Slot_Consumable_C.OnLoaded_5699AF624A3322545E5B4781A35497A4");

	struct OnLoaded_5699AF624A3322545E5B4781A35497A4_Params {
		struct Unknown Loaded;
	}; OnLoaded_5699AF624A3322545E5B4781A35497A4_Params Params;

	Params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-BlackMarket_Slot_Consumable.UW-BlackMarket_Slot_Consumable_C.Construct
inline void UUW-BlackMarket_Slot_Consumable_C::Construct() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-BlackMarket_Slot_Consumable.UW-BlackMarket_Slot_Consumable_C.Construct");

	struct Construct_Params {
		
	}; Construct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-BlackMarket_Slot_Consumable.UW-BlackMarket_Slot_Consumable_C.OnMouseEnter
inline void UUW-BlackMarket_Slot_Consumable_C::OnMouseEnter(struct Unknown MyGeometry, struct Unknown& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-BlackMarket_Slot_Consumable.UW-BlackMarket_Slot_Consumable_C.OnMouseEnter");

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

// Function UW-BlackMarket_Slot_Consumable.UW-BlackMarket_Slot_Consumable_C.OnMouseLeave
inline void UUW-BlackMarket_Slot_Consumable_C::OnMouseLeave(struct Unknown& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-BlackMarket_Slot_Consumable.UW-BlackMarket_Slot_Consumable_C.OnMouseLeave");

	struct OnMouseLeave_Params {
		struct Unknown& MouseEvent;
	}; OnMouseLeave_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	MouseEvent = Params.MouseEvent;

}

// Function UW-BlackMarket_Slot_Consumable.UW-BlackMarket_Slot_Consumable_C.AysncLoading
inline void UUW-BlackMarket_Slot_Consumable_C::AysncLoading(struct Unknown IconTexture) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-BlackMarket_Slot_Consumable.UW-BlackMarket_Slot_Consumable_C.AysncLoading");

	struct AysncLoading_Params {
		struct Unknown IconTexture;
	}; AysncLoading_Params Params;

	Params.IconTexture = IconTexture;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-BlackMarket_Slot_Consumable.UW-BlackMarket_Slot_Consumable_C.SwitchMenu
inline void UUW-BlackMarket_Slot_Consumable_C::SwitchMenu() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-BlackMarket_Slot_Consumable.UW-BlackMarket_Slot_Consumable_C.SwitchMenu");

	struct SwitchMenu_Params {
		
	}; SwitchMenu_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-BlackMarket_Slot_Consumable.UW-BlackMarket_Slot_Consumable_C.SwitchSlot
inline void UUW-BlackMarket_Slot_Consumable_C::SwitchSlot() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-BlackMarket_Slot_Consumable.UW-BlackMarket_Slot_Consumable_C.SwitchSlot");

	struct SwitchSlot_Params {
		
	}; SwitchSlot_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-BlackMarket_Slot_Consumable.UW-BlackMarket_Slot_Consumable_C.BndEvt__BTN-Menu02_K2Node_ComponentBoundEvent_180_OnButtonClickedEvent__DelegateSignature
inline void UUW-BlackMarket_Slot_Consumable_C::BndEvt__BTN-Menu02_K2Node_ComponentBoundEvent_180_OnButtonClickedEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-BlackMarket_Slot_Consumable.UW-BlackMarket_Slot_Consumable_C.BndEvt__BTN-Menu02_K2Node_ComponentBoundEvent_180_OnButtonClickedEvent__DelegateSignature");

	struct BndEvt__BTN-Menu02_K2Node_ComponentBoundEvent_180_OnButtonClickedEvent__DelegateSignature_Params {
		
	}; BndEvt__BTN-Menu02_K2Node_ComponentBoundEvent_180_OnButtonClickedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-BlackMarket_Slot_Consumable.UW-BlackMarket_Slot_Consumable_C.BndEvt__BTN-Menu03_K2Node_ComponentBoundEvent_197_OnButtonClickedEvent__DelegateSignature
inline void UUW-BlackMarket_Slot_Consumable_C::BndEvt__BTN-Menu03_K2Node_ComponentBoundEvent_197_OnButtonClickedEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-BlackMarket_Slot_Consumable.UW-BlackMarket_Slot_Consumable_C.BndEvt__BTN-Menu03_K2Node_ComponentBoundEvent_197_OnButtonClickedEvent__DelegateSignature");

	struct BndEvt__BTN-Menu03_K2Node_ComponentBoundEvent_197_OnButtonClickedEvent__DelegateSignature_Params {
		
	}; BndEvt__BTN-Menu03_K2Node_ComponentBoundEvent_197_OnButtonClickedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-BlackMarket_Slot_Consumable.UW-BlackMarket_Slot_Consumable_C.BndEvt__BTN-Menu04_K2Node_ComponentBoundEvent_215_OnButtonClickedEvent__DelegateSignature
inline void UUW-BlackMarket_Slot_Consumable_C::BndEvt__BTN-Menu04_K2Node_ComponentBoundEvent_215_OnButtonClickedEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-BlackMarket_Slot_Consumable.UW-BlackMarket_Slot_Consumable_C.BndEvt__BTN-Menu04_K2Node_ComponentBoundEvent_215_OnButtonClickedEvent__DelegateSignature");

	struct BndEvt__BTN-Menu04_K2Node_ComponentBoundEvent_215_OnButtonClickedEvent__DelegateSignature_Params {
		
	}; BndEvt__BTN-Menu04_K2Node_ComponentBoundEvent_215_OnButtonClickedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-BlackMarket_Slot_Consumable.UW-BlackMarket_Slot_Consumable_C.BndEvt__BTN-Menu05_K2Node_ComponentBoundEvent_234_OnButtonClickedEvent__DelegateSignature
inline void UUW-BlackMarket_Slot_Consumable_C::BndEvt__BTN-Menu05_K2Node_ComponentBoundEvent_234_OnButtonClickedEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-BlackMarket_Slot_Consumable.UW-BlackMarket_Slot_Consumable_C.BndEvt__BTN-Menu05_K2Node_ComponentBoundEvent_234_OnButtonClickedEvent__DelegateSignature");

	struct BndEvt__BTN-Menu05_K2Node_ComponentBoundEvent_234_OnButtonClickedEvent__DelegateSignature_Params {
		
	}; BndEvt__BTN-Menu05_K2Node_ComponentBoundEvent_234_OnButtonClickedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-BlackMarket_Slot_Consumable.UW-BlackMarket_Slot_Consumable_C.BndEvt__BTN-Menu06_K2Node_ComponentBoundEvent_254_OnButtonClickedEvent__DelegateSignature
inline void UUW-BlackMarket_Slot_Consumable_C::BndEvt__BTN-Menu06_K2Node_ComponentBoundEvent_254_OnButtonClickedEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-BlackMarket_Slot_Consumable.UW-BlackMarket_Slot_Consumable_C.BndEvt__BTN-Menu06_K2Node_ComponentBoundEvent_254_OnButtonClickedEvent__DelegateSignature");

	struct BndEvt__BTN-Menu06_K2Node_ComponentBoundEvent_254_OnButtonClickedEvent__DelegateSignature_Params {
		
	}; BndEvt__BTN-Menu06_K2Node_ComponentBoundEvent_254_OnButtonClickedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-BlackMarket_Slot_Consumable.UW-BlackMarket_Slot_Consumable_C.ExecuteUbergraph_UW-BlackMarket_Slot_Consumable
inline void UUW-BlackMarket_Slot_Consumable_C::ExecuteUbergraph_UW-BlackMarket_Slot_Consumable(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-BlackMarket_Slot_Consumable.UW-BlackMarket_Slot_Consumable_C.ExecuteUbergraph_UW-BlackMarket_Slot_Consumable");

	struct ExecuteUbergraph_UW-BlackMarket_Slot_Consumable_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_UW-BlackMarket_Slot_Consumable_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

