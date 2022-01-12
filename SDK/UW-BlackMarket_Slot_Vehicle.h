// WidgetBlueprintGeneratedClass UW-BlackMarket_Slot_Vehicle.UW-BlackMarket_Slot_Vehicle_C
class UUW-BlackMarket_Slot_Vehicle_C : public UUW-BlackMarket_Slot_Base_C {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3D8 (8)
	struct UButton BTN-Menu02; // 0x3E0 (8)
	struct UCanvasPanel CP-SlotInfo; // 0x3E8 (8)
	struct UImage IMG-BG; // 0x3F0 (8)
	struct UImage IMG-BG-Border; // 0x3F8 (8)
	struct UImage IMG-Item; // 0x400 (8)
	struct UImage IMG-Mask; // 0x408 (8)
	struct UImage IMG-Over; // 0x410 (8)
	struct UImage IMG-Over-Border; // 0x418 (8)
	struct UOverlay Menu02; // 0x420 (8)
	struct UOverlay Overlay_Mask; // 0x428 (8)
	struct UTextBlock TXT-ItemName; // 0x430 (8)
	struct UTextBlock TXT-Menu01; // 0x438 (8)
	struct UTextBlock TXT-Menu02; // 0x440 (8)

	void SetIconTexture(struct TSoftObjectPtr<UPaperSprite> IconTexture); // Function UW-BlackMarket_Slot_Vehicle.UW-BlackMarket_Slot_Vehicle_C.SetIconTexture(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	struct FEventReply On_IMG-Over-Border_MouseButtonDown_1(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UW-BlackMarket_Slot_Vehicle.UW-BlackMarket_Slot_Vehicle_C.On_IMG-Over-Border_MouseButtonDown_1(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void OnLoaded_65481F2E4FBDAFF739C1CA99F79D422C(struct Object Loaded); // Function UW-BlackMarket_Slot_Vehicle.UW-BlackMarket_Slot_Vehicle_C.OnLoaded_65481F2E4FBDAFF739C1CA99F79D422C(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void Construct(); // Function UW-BlackMarket_Slot_Vehicle.UW-BlackMarket_Slot_Vehicle_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void AysncLoading(struct TSoftObjectPtr<UPaperSprite> IconTexture); // Function UW-BlackMarket_Slot_Vehicle.UW-BlackMarket_Slot_Vehicle_C.AysncLoading(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UW-BlackMarket_Slot_Vehicle.UW-BlackMarket_Slot_Vehicle_C.OnMouseEnter(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function UW-BlackMarket_Slot_Vehicle.UW-BlackMarket_Slot_Vehicle_C.OnMouseLeave(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void SwitchMenu(); // Function UW-BlackMarket_Slot_Vehicle.UW-BlackMarket_Slot_Vehicle_C.SwitchMenu(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void SwitchSlot(); // Function UW-BlackMarket_Slot_Vehicle.UW-BlackMarket_Slot_Vehicle_C.SwitchSlot(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void BndEvt__BTN-Menu02_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature(); // Function UW-BlackMarket_Slot_Vehicle.UW-BlackMarket_Slot_Vehicle_C.BndEvt__BTN-Menu02_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void ExecuteUbergraph_UW-BlackMarket_Slot_Vehicle(int32_t EntryPoint); // Function UW-BlackMarket_Slot_Vehicle.UW-BlackMarket_Slot_Vehicle_C.ExecuteUbergraph_UW-BlackMarket_Slot_Vehicle(Final|UbergraphFunction|HasDefaults) // <Game_BE.exe+0x2B80160>
};

// Function UW-BlackMarket_Slot_Vehicle.UW-BlackMarket_Slot_Vehicle_C.SetIconTexture
inline void UUW-BlackMarket_Slot_Vehicle_C::SetIconTexture(struct TSoftObjectPtr<UPaperSprite> IconTexture) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-BlackMarket_Slot_Vehicle.UW-BlackMarket_Slot_Vehicle_C.SetIconTexture");

	struct SetIconTexture_Params {
		struct TSoftObjectPtr<UPaperSprite> IconTexture;
	}; SetIconTexture_Params Params;

	Params.IconTexture = IconTexture;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-BlackMarket_Slot_Vehicle.UW-BlackMarket_Slot_Vehicle_C.On_IMG-Over-Border_MouseButtonDown_1
inline struct FEventReply UUW-BlackMarket_Slot_Vehicle_C::On_IMG-Over-Border_MouseButtonDown_1(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-BlackMarket_Slot_Vehicle.UW-BlackMarket_Slot_Vehicle_C.On_IMG-Over-Border_MouseButtonDown_1");

	struct On_IMG-Over-Border_MouseButtonDown_1_Params {
		struct FGeometry MyGeometry;
		struct FPointerEvent& MouseEvent;
		struct FEventReply ReturnValue;

	}; On_IMG-Over-Border_MouseButtonDown_1_Params Params;

	Params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	MouseEvent = Params.MouseEvent;


	return params.ReturnValue;
}

// Function UW-BlackMarket_Slot_Vehicle.UW-BlackMarket_Slot_Vehicle_C.OnLoaded_65481F2E4FBDAFF739C1CA99F79D422C
inline void UUW-BlackMarket_Slot_Vehicle_C::OnLoaded_65481F2E4FBDAFF739C1CA99F79D422C(struct Object Loaded) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-BlackMarket_Slot_Vehicle.UW-BlackMarket_Slot_Vehicle_C.OnLoaded_65481F2E4FBDAFF739C1CA99F79D422C");

	struct OnLoaded_65481F2E4FBDAFF739C1CA99F79D422C_Params {
		struct Object Loaded;
	}; OnLoaded_65481F2E4FBDAFF739C1CA99F79D422C_Params Params;

	Params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-BlackMarket_Slot_Vehicle.UW-BlackMarket_Slot_Vehicle_C.Construct
inline void UUW-BlackMarket_Slot_Vehicle_C::Construct() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-BlackMarket_Slot_Vehicle.UW-BlackMarket_Slot_Vehicle_C.Construct");

	struct Construct_Params {
		
	}; Construct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-BlackMarket_Slot_Vehicle.UW-BlackMarket_Slot_Vehicle_C.AysncLoading
inline void UUW-BlackMarket_Slot_Vehicle_C::AysncLoading(struct TSoftObjectPtr<UPaperSprite> IconTexture) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-BlackMarket_Slot_Vehicle.UW-BlackMarket_Slot_Vehicle_C.AysncLoading");

	struct AysncLoading_Params {
		struct TSoftObjectPtr<UPaperSprite> IconTexture;
	}; AysncLoading_Params Params;

	Params.IconTexture = IconTexture;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-BlackMarket_Slot_Vehicle.UW-BlackMarket_Slot_Vehicle_C.OnMouseEnter
inline void UUW-BlackMarket_Slot_Vehicle_C::OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-BlackMarket_Slot_Vehicle.UW-BlackMarket_Slot_Vehicle_C.OnMouseEnter");

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

// Function UW-BlackMarket_Slot_Vehicle.UW-BlackMarket_Slot_Vehicle_C.OnMouseLeave
inline void UUW-BlackMarket_Slot_Vehicle_C::OnMouseLeave(struct FPointerEvent& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-BlackMarket_Slot_Vehicle.UW-BlackMarket_Slot_Vehicle_C.OnMouseLeave");

	struct OnMouseLeave_Params {
		struct FPointerEvent& MouseEvent;
	}; OnMouseLeave_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	MouseEvent = Params.MouseEvent;

}

// Function UW-BlackMarket_Slot_Vehicle.UW-BlackMarket_Slot_Vehicle_C.SwitchMenu
inline void UUW-BlackMarket_Slot_Vehicle_C::SwitchMenu() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-BlackMarket_Slot_Vehicle.UW-BlackMarket_Slot_Vehicle_C.SwitchMenu");

	struct SwitchMenu_Params {
		
	}; SwitchMenu_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-BlackMarket_Slot_Vehicle.UW-BlackMarket_Slot_Vehicle_C.SwitchSlot
inline void UUW-BlackMarket_Slot_Vehicle_C::SwitchSlot() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-BlackMarket_Slot_Vehicle.UW-BlackMarket_Slot_Vehicle_C.SwitchSlot");

	struct SwitchSlot_Params {
		
	}; SwitchSlot_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-BlackMarket_Slot_Vehicle.UW-BlackMarket_Slot_Vehicle_C.BndEvt__BTN-Menu02_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature
inline void UUW-BlackMarket_Slot_Vehicle_C::BndEvt__BTN-Menu02_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-BlackMarket_Slot_Vehicle.UW-BlackMarket_Slot_Vehicle_C.BndEvt__BTN-Menu02_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature");

	struct BndEvt__BTN-Menu02_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature_Params {
		
	}; BndEvt__BTN-Menu02_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-BlackMarket_Slot_Vehicle.UW-BlackMarket_Slot_Vehicle_C.ExecuteUbergraph_UW-BlackMarket_Slot_Vehicle
inline void UUW-BlackMarket_Slot_Vehicle_C::ExecuteUbergraph_UW-BlackMarket_Slot_Vehicle(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-BlackMarket_Slot_Vehicle.UW-BlackMarket_Slot_Vehicle_C.ExecuteUbergraph_UW-BlackMarket_Slot_Vehicle");

	struct ExecuteUbergraph_UW-BlackMarket_Slot_Vehicle_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_UW-BlackMarket_Slot_Vehicle_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

