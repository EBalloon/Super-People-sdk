// WidgetBlueprintGeneratedClass UW-BlackMarket_Slot_Attachment.UW-BlackMarket_Slot_Attachment_C
class UUW-BlackMarket_Slot_Attachment_C : public UUW-BlackMarket_Slot_Base_C {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3D8 (8)
	struct UButton BTN-Menu02; // 0x3E0 (8)
	struct UButton BTN-Menu03; // 0x3E8 (8)
	struct UButton BTN-Menu04; // 0x3F0 (8)
	struct UButton BTN-Menu05; // 0x3F8 (8)
	struct UButton BTN-Menu06; // 0x400 (8)
	struct UButton BTN-Menu07; // 0x408 (8)
	struct UButton BTN-Menu08; // 0x410 (8)
	struct UButton BTN-Menu09; // 0x418 (8)
	struct UCanvasPanel CP-SlotInfo; // 0x420 (8)
	struct UImage IMG-BG; // 0x428 (8)
	struct UImage IMG-BG-Border; // 0x430 (8)
	struct UImage IMG-Item; // 0x438 (8)
	struct UImage IMG-Mask; // 0x440 (8)
	struct UImage IMG-Over; // 0x448 (8)
	struct UImage IMG-Over-Border; // 0x450 (8)
	struct UOverlay Menu02; // 0x458 (8)
	struct UOverlay Menu03; // 0x460 (8)
	struct UOverlay Menu04; // 0x468 (8)
	struct UOverlay Menu05; // 0x470 (8)
	struct UOverlay Menu06; // 0x478 (8)
	struct UOverlay Menu07; // 0x480 (8)
	struct UOverlay Menu08; // 0x488 (8)
	struct UOverlay Menu09; // 0x490 (8)
	struct UOverlay Overlay_Mask; // 0x498 (8)
	struct UTextBlock TXT-ContinuousSpeed; // 0x4A0 (8)
	struct UTextBlock TXT-Horizental; // 0x4A8 (8)
	struct UTextBlock TXT-ItemName; // 0x4B0 (8)
	struct UTextBlock TXT-Menu01; // 0x4B8 (8)
	struct UTextBlock TXT-Menu02; // 0x4C0 (8)
	struct UTextBlock TXT-Menu03; // 0x4C8 (8)
	struct UTextBlock TXT-Menu04; // 0x4D0 (8)
	struct UTextBlock TXT-Menu05; // 0x4D8 (8)
	struct UTextBlock TXT-Menu06; // 0x4E0 (8)
	struct UTextBlock TXT-Menu07; // 0x4E8 (8)
	struct UTextBlock TXT-Menu08; // 0x4F0 (8)
	struct UTextBlock TXT-Menu09; // 0x4F8 (8)
	struct UTextBlock TXT-MovingSpeed; // 0x500 (8)
	struct UTextBlock TXT-Reload; // 0x508 (8)
	struct UTextBlock TXT-Type; // 0x510 (8)
	struct UTextBlock TXT-Vertical; // 0x518 (8)
	struct UTextBlock TXT-Weight; // 0x520 (8)

	struct FEventReply On_IMG-BG_MouseButtonDown_1(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UW-BlackMarket_Slot_Attachment.UW-BlackMarket_Slot_Attachment_C.On_IMG-BG_MouseButtonDown_1(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void SetIconTexture(struct TSoftObjectPtr<UPaperSprite> IconTexture); // Function UW-BlackMarket_Slot_Attachment.UW-BlackMarket_Slot_Attachment_C.SetIconTexture(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void OnLoaded_F81B5B0343A0A1A16D1EBABD173C2F15(struct Object Loaded); // Function UW-BlackMarket_Slot_Attachment.UW-BlackMarket_Slot_Attachment_C.OnLoaded_F81B5B0343A0A1A16D1EBABD173C2F15(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void Construct(); // Function UW-BlackMarket_Slot_Attachment.UW-BlackMarket_Slot_Attachment_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UW-BlackMarket_Slot_Attachment.UW-BlackMarket_Slot_Attachment_C.OnMouseEnter(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function UW-BlackMarket_Slot_Attachment.UW-BlackMarket_Slot_Attachment_C.OnMouseLeave(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void AysncLoading(struct TSoftObjectPtr<UPaperSprite> IconTexture); // Function UW-BlackMarket_Slot_Attachment.UW-BlackMarket_Slot_Attachment_C.AysncLoading(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void SwitchMenu(); // Function UW-BlackMarket_Slot_Attachment.UW-BlackMarket_Slot_Attachment_C.SwitchMenu(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void SwitchSlot(); // Function UW-BlackMarket_Slot_Attachment.UW-BlackMarket_Slot_Attachment_C.SwitchSlot(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void BndEvt__BTN-Menu02_K2Node_ComponentBoundEvent_220_OnButtonClickedEvent__DelegateSignature(); // Function UW-BlackMarket_Slot_Attachment.UW-BlackMarket_Slot_Attachment_C.BndEvt__BTN-Menu02_K2Node_ComponentBoundEvent_220_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void BndEvt__BTN-Menu03_K2Node_ComponentBoundEvent_237_OnButtonClickedEvent__DelegateSignature(); // Function UW-BlackMarket_Slot_Attachment.UW-BlackMarket_Slot_Attachment_C.BndEvt__BTN-Menu03_K2Node_ComponentBoundEvent_237_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void BndEvt__BTN-Menu04_K2Node_ComponentBoundEvent_255_OnButtonClickedEvent__DelegateSignature(); // Function UW-BlackMarket_Slot_Attachment.UW-BlackMarket_Slot_Attachment_C.BndEvt__BTN-Menu04_K2Node_ComponentBoundEvent_255_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void BndEvt__BTN-Menu05_K2Node_ComponentBoundEvent_274_OnButtonClickedEvent__DelegateSignature(); // Function UW-BlackMarket_Slot_Attachment.UW-BlackMarket_Slot_Attachment_C.BndEvt__BTN-Menu05_K2Node_ComponentBoundEvent_274_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void BndEvt__BTN-Menu06_K2Node_ComponentBoundEvent_294_OnButtonClickedEvent__DelegateSignature(); // Function UW-BlackMarket_Slot_Attachment.UW-BlackMarket_Slot_Attachment_C.BndEvt__BTN-Menu06_K2Node_ComponentBoundEvent_294_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void BndEvt__BTN-Menu07_K2Node_ComponentBoundEvent_315_OnButtonClickedEvent__DelegateSignature(); // Function UW-BlackMarket_Slot_Attachment.UW-BlackMarket_Slot_Attachment_C.BndEvt__BTN-Menu07_K2Node_ComponentBoundEvent_315_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void BndEvt__BTN-Menu08_K2Node_ComponentBoundEvent_337_OnButtonClickedEvent__DelegateSignature(); // Function UW-BlackMarket_Slot_Attachment.UW-BlackMarket_Slot_Attachment_C.BndEvt__BTN-Menu08_K2Node_ComponentBoundEvent_337_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void BndEvt__BTN-Menu09_K2Node_ComponentBoundEvent_360_OnButtonClickedEvent__DelegateSignature(); // Function UW-BlackMarket_Slot_Attachment.UW-BlackMarket_Slot_Attachment_C.BndEvt__BTN-Menu09_K2Node_ComponentBoundEvent_360_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void ExecuteUbergraph_UW-BlackMarket_Slot_Attachment(int32_t EntryPoint); // Function UW-BlackMarket_Slot_Attachment.UW-BlackMarket_Slot_Attachment_C.ExecuteUbergraph_UW-BlackMarket_Slot_Attachment(Final|UbergraphFunction|HasDefaults) // <Game_BE.exe+0x2B80160>
};

// Function UW-BlackMarket_Slot_Attachment.UW-BlackMarket_Slot_Attachment_C.On_IMG-BG_MouseButtonDown_1
inline struct FEventReply UUW-BlackMarket_Slot_Attachment_C::On_IMG-BG_MouseButtonDown_1(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-BlackMarket_Slot_Attachment.UW-BlackMarket_Slot_Attachment_C.On_IMG-BG_MouseButtonDown_1");

	struct On_IMG-BG_MouseButtonDown_1_Params {
		struct FGeometry MyGeometry;
		struct FPointerEvent& MouseEvent;
		struct FEventReply ReturnValue;

	}; On_IMG-BG_MouseButtonDown_1_Params Params;

	Params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	MouseEvent = Params.MouseEvent;


	return params.ReturnValue;
}

// Function UW-BlackMarket_Slot_Attachment.UW-BlackMarket_Slot_Attachment_C.SetIconTexture
inline void UUW-BlackMarket_Slot_Attachment_C::SetIconTexture(struct TSoftObjectPtr<UPaperSprite> IconTexture) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-BlackMarket_Slot_Attachment.UW-BlackMarket_Slot_Attachment_C.SetIconTexture");

	struct SetIconTexture_Params {
		struct TSoftObjectPtr<UPaperSprite> IconTexture;
	}; SetIconTexture_Params Params;

	Params.IconTexture = IconTexture;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-BlackMarket_Slot_Attachment.UW-BlackMarket_Slot_Attachment_C.OnLoaded_F81B5B0343A0A1A16D1EBABD173C2F15
inline void UUW-BlackMarket_Slot_Attachment_C::OnLoaded_F81B5B0343A0A1A16D1EBABD173C2F15(struct Object Loaded) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-BlackMarket_Slot_Attachment.UW-BlackMarket_Slot_Attachment_C.OnLoaded_F81B5B0343A0A1A16D1EBABD173C2F15");

	struct OnLoaded_F81B5B0343A0A1A16D1EBABD173C2F15_Params {
		struct Object Loaded;
	}; OnLoaded_F81B5B0343A0A1A16D1EBABD173C2F15_Params Params;

	Params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-BlackMarket_Slot_Attachment.UW-BlackMarket_Slot_Attachment_C.Construct
inline void UUW-BlackMarket_Slot_Attachment_C::Construct() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-BlackMarket_Slot_Attachment.UW-BlackMarket_Slot_Attachment_C.Construct");

	struct Construct_Params {
		
	}; Construct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-BlackMarket_Slot_Attachment.UW-BlackMarket_Slot_Attachment_C.OnMouseEnter
inline void UUW-BlackMarket_Slot_Attachment_C::OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-BlackMarket_Slot_Attachment.UW-BlackMarket_Slot_Attachment_C.OnMouseEnter");

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

// Function UW-BlackMarket_Slot_Attachment.UW-BlackMarket_Slot_Attachment_C.OnMouseLeave
inline void UUW-BlackMarket_Slot_Attachment_C::OnMouseLeave(struct FPointerEvent& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-BlackMarket_Slot_Attachment.UW-BlackMarket_Slot_Attachment_C.OnMouseLeave");

	struct OnMouseLeave_Params {
		struct FPointerEvent& MouseEvent;
	}; OnMouseLeave_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	MouseEvent = Params.MouseEvent;

}

// Function UW-BlackMarket_Slot_Attachment.UW-BlackMarket_Slot_Attachment_C.AysncLoading
inline void UUW-BlackMarket_Slot_Attachment_C::AysncLoading(struct TSoftObjectPtr<UPaperSprite> IconTexture) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-BlackMarket_Slot_Attachment.UW-BlackMarket_Slot_Attachment_C.AysncLoading");

	struct AysncLoading_Params {
		struct TSoftObjectPtr<UPaperSprite> IconTexture;
	}; AysncLoading_Params Params;

	Params.IconTexture = IconTexture;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-BlackMarket_Slot_Attachment.UW-BlackMarket_Slot_Attachment_C.SwitchMenu
inline void UUW-BlackMarket_Slot_Attachment_C::SwitchMenu() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-BlackMarket_Slot_Attachment.UW-BlackMarket_Slot_Attachment_C.SwitchMenu");

	struct SwitchMenu_Params {
		
	}; SwitchMenu_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-BlackMarket_Slot_Attachment.UW-BlackMarket_Slot_Attachment_C.SwitchSlot
inline void UUW-BlackMarket_Slot_Attachment_C::SwitchSlot() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-BlackMarket_Slot_Attachment.UW-BlackMarket_Slot_Attachment_C.SwitchSlot");

	struct SwitchSlot_Params {
		
	}; SwitchSlot_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-BlackMarket_Slot_Attachment.UW-BlackMarket_Slot_Attachment_C.BndEvt__BTN-Menu02_K2Node_ComponentBoundEvent_220_OnButtonClickedEvent__DelegateSignature
inline void UUW-BlackMarket_Slot_Attachment_C::BndEvt__BTN-Menu02_K2Node_ComponentBoundEvent_220_OnButtonClickedEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-BlackMarket_Slot_Attachment.UW-BlackMarket_Slot_Attachment_C.BndEvt__BTN-Menu02_K2Node_ComponentBoundEvent_220_OnButtonClickedEvent__DelegateSignature");

	struct BndEvt__BTN-Menu02_K2Node_ComponentBoundEvent_220_OnButtonClickedEvent__DelegateSignature_Params {
		
	}; BndEvt__BTN-Menu02_K2Node_ComponentBoundEvent_220_OnButtonClickedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-BlackMarket_Slot_Attachment.UW-BlackMarket_Slot_Attachment_C.BndEvt__BTN-Menu03_K2Node_ComponentBoundEvent_237_OnButtonClickedEvent__DelegateSignature
inline void UUW-BlackMarket_Slot_Attachment_C::BndEvt__BTN-Menu03_K2Node_ComponentBoundEvent_237_OnButtonClickedEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-BlackMarket_Slot_Attachment.UW-BlackMarket_Slot_Attachment_C.BndEvt__BTN-Menu03_K2Node_ComponentBoundEvent_237_OnButtonClickedEvent__DelegateSignature");

	struct BndEvt__BTN-Menu03_K2Node_ComponentBoundEvent_237_OnButtonClickedEvent__DelegateSignature_Params {
		
	}; BndEvt__BTN-Menu03_K2Node_ComponentBoundEvent_237_OnButtonClickedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-BlackMarket_Slot_Attachment.UW-BlackMarket_Slot_Attachment_C.BndEvt__BTN-Menu04_K2Node_ComponentBoundEvent_255_OnButtonClickedEvent__DelegateSignature
inline void UUW-BlackMarket_Slot_Attachment_C::BndEvt__BTN-Menu04_K2Node_ComponentBoundEvent_255_OnButtonClickedEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-BlackMarket_Slot_Attachment.UW-BlackMarket_Slot_Attachment_C.BndEvt__BTN-Menu04_K2Node_ComponentBoundEvent_255_OnButtonClickedEvent__DelegateSignature");

	struct BndEvt__BTN-Menu04_K2Node_ComponentBoundEvent_255_OnButtonClickedEvent__DelegateSignature_Params {
		
	}; BndEvt__BTN-Menu04_K2Node_ComponentBoundEvent_255_OnButtonClickedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-BlackMarket_Slot_Attachment.UW-BlackMarket_Slot_Attachment_C.BndEvt__BTN-Menu05_K2Node_ComponentBoundEvent_274_OnButtonClickedEvent__DelegateSignature
inline void UUW-BlackMarket_Slot_Attachment_C::BndEvt__BTN-Menu05_K2Node_ComponentBoundEvent_274_OnButtonClickedEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-BlackMarket_Slot_Attachment.UW-BlackMarket_Slot_Attachment_C.BndEvt__BTN-Menu05_K2Node_ComponentBoundEvent_274_OnButtonClickedEvent__DelegateSignature");

	struct BndEvt__BTN-Menu05_K2Node_ComponentBoundEvent_274_OnButtonClickedEvent__DelegateSignature_Params {
		
	}; BndEvt__BTN-Menu05_K2Node_ComponentBoundEvent_274_OnButtonClickedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-BlackMarket_Slot_Attachment.UW-BlackMarket_Slot_Attachment_C.BndEvt__BTN-Menu06_K2Node_ComponentBoundEvent_294_OnButtonClickedEvent__DelegateSignature
inline void UUW-BlackMarket_Slot_Attachment_C::BndEvt__BTN-Menu06_K2Node_ComponentBoundEvent_294_OnButtonClickedEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-BlackMarket_Slot_Attachment.UW-BlackMarket_Slot_Attachment_C.BndEvt__BTN-Menu06_K2Node_ComponentBoundEvent_294_OnButtonClickedEvent__DelegateSignature");

	struct BndEvt__BTN-Menu06_K2Node_ComponentBoundEvent_294_OnButtonClickedEvent__DelegateSignature_Params {
		
	}; BndEvt__BTN-Menu06_K2Node_ComponentBoundEvent_294_OnButtonClickedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-BlackMarket_Slot_Attachment.UW-BlackMarket_Slot_Attachment_C.BndEvt__BTN-Menu07_K2Node_ComponentBoundEvent_315_OnButtonClickedEvent__DelegateSignature
inline void UUW-BlackMarket_Slot_Attachment_C::BndEvt__BTN-Menu07_K2Node_ComponentBoundEvent_315_OnButtonClickedEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-BlackMarket_Slot_Attachment.UW-BlackMarket_Slot_Attachment_C.BndEvt__BTN-Menu07_K2Node_ComponentBoundEvent_315_OnButtonClickedEvent__DelegateSignature");

	struct BndEvt__BTN-Menu07_K2Node_ComponentBoundEvent_315_OnButtonClickedEvent__DelegateSignature_Params {
		
	}; BndEvt__BTN-Menu07_K2Node_ComponentBoundEvent_315_OnButtonClickedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-BlackMarket_Slot_Attachment.UW-BlackMarket_Slot_Attachment_C.BndEvt__BTN-Menu08_K2Node_ComponentBoundEvent_337_OnButtonClickedEvent__DelegateSignature
inline void UUW-BlackMarket_Slot_Attachment_C::BndEvt__BTN-Menu08_K2Node_ComponentBoundEvent_337_OnButtonClickedEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-BlackMarket_Slot_Attachment.UW-BlackMarket_Slot_Attachment_C.BndEvt__BTN-Menu08_K2Node_ComponentBoundEvent_337_OnButtonClickedEvent__DelegateSignature");

	struct BndEvt__BTN-Menu08_K2Node_ComponentBoundEvent_337_OnButtonClickedEvent__DelegateSignature_Params {
		
	}; BndEvt__BTN-Menu08_K2Node_ComponentBoundEvent_337_OnButtonClickedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-BlackMarket_Slot_Attachment.UW-BlackMarket_Slot_Attachment_C.BndEvt__BTN-Menu09_K2Node_ComponentBoundEvent_360_OnButtonClickedEvent__DelegateSignature
inline void UUW-BlackMarket_Slot_Attachment_C::BndEvt__BTN-Menu09_K2Node_ComponentBoundEvent_360_OnButtonClickedEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-BlackMarket_Slot_Attachment.UW-BlackMarket_Slot_Attachment_C.BndEvt__BTN-Menu09_K2Node_ComponentBoundEvent_360_OnButtonClickedEvent__DelegateSignature");

	struct BndEvt__BTN-Menu09_K2Node_ComponentBoundEvent_360_OnButtonClickedEvent__DelegateSignature_Params {
		
	}; BndEvt__BTN-Menu09_K2Node_ComponentBoundEvent_360_OnButtonClickedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-BlackMarket_Slot_Attachment.UW-BlackMarket_Slot_Attachment_C.ExecuteUbergraph_UW-BlackMarket_Slot_Attachment
inline void UUW-BlackMarket_Slot_Attachment_C::ExecuteUbergraph_UW-BlackMarket_Slot_Attachment(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-BlackMarket_Slot_Attachment.UW-BlackMarket_Slot_Attachment_C.ExecuteUbergraph_UW-BlackMarket_Slot_Attachment");

	struct ExecuteUbergraph_UW-BlackMarket_Slot_Attachment_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_UW-BlackMarket_Slot_Attachment_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

