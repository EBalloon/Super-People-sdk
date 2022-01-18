// WidgetBlueprintGeneratedClass UW-BlackMarket_Slot_Weapon.UW-BlackMarket_Slot_Weapon_C
class UUW-BlackMarket_Slot_Weapon_C : public UUW-BlackMarket_Slot_Base_C {

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
	struct UButton BTN-Menu10; // 0x420 (8)
	struct UButton BTN-Menu11; // 0x428 (8)
	struct UCanvasPanel CP-SlotInfo; // 0x430 (8)
	struct UImage IMG-BG; // 0x438 (8)
	struct UImage IMG-BG-Border; // 0x440 (8)
	struct UImage IMG-Item; // 0x448 (8)
	struct UImage IMG-Mask; // 0x450 (8)
	struct UImage IMG-Over; // 0x458 (8)
	struct UImage IMG-Over-Border; // 0x460 (8)
	struct UOverlay Menu02; // 0x468 (8)
	struct UOverlay Menu03; // 0x470 (8)
	struct UOverlay Menu04; // 0x478 (8)
	struct UOverlay Menu05; // 0x480 (8)
	struct UOverlay Menu06; // 0x488 (8)
	struct UOverlay Menu07; // 0x490 (8)
	struct UOverlay Menu08; // 0x498 (8)
	struct UOverlay Menu09; // 0x4A0 (8)
	struct UOverlay Menu10; // 0x4A8 (8)
	struct UOverlay Menu11; // 0x4B0 (8)
	struct UOverlay Overlay_Mask; // 0x4B8 (8)
	struct UTextBlock TXT-Ammo; // 0x4C0 (8)
	struct UTextBlock TXT-Damage; // 0x4C8 (8)
	struct UTextBlock TXT-FireMode; // 0x4D0 (8)
	struct UTextBlock TXT-FireRate; // 0x4D8 (8)
	struct UTextBlock TXT-ItemName; // 0x4E0 (8)
	struct UTextBlock TXT-MagSize; // 0x4E8 (8)
	struct UTextBlock TXT-Menu01; // 0x4F0 (8)
	struct UTextBlock TXT-Menu02; // 0x4F8 (8)
	struct UTextBlock TXT-Menu03; // 0x500 (8)
	struct UTextBlock TXT-Menu04; // 0x508 (8)
	struct UTextBlock TXT-Menu05; // 0x510 (8)
	struct UTextBlock TXT-Menu06; // 0x518 (8)
	struct UTextBlock TXT-Menu07; // 0x520 (8)
	struct UTextBlock TXT-Menu08; // 0x528 (8)
	struct UTextBlock TXT-Menu09; // 0x530 (8)
	struct UTextBlock TXT-Menu10; // 0x538 (8)
	struct UTextBlock TXT-Menu11; // 0x540 (8)
	struct UTextBlock TXT-MoveSpeed; // 0x548 (8)
	struct UTextBlock TXT-ProjectileVelocity; // 0x550 (8)
	struct UTextBlock TXT-ReloadTime; // 0x558 (8)
	struct UTextBlock TXT-Weight; // 0x560 (8)

	void SetIconTexture(struct TSoftObjectPtr<UPaperSprite> IconTexture); // Function UW-BlackMarket_Slot_Weapon.UW-BlackMarket_Slot_Weapon_C.SetIconTexture(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	struct FEventReply On_IMG-BG_MouseButtonDown_2(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UW-BlackMarket_Slot_Weapon.UW-BlackMarket_Slot_Weapon_C.On_IMG-BG_MouseButtonDown_2(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void OnLoaded_9693EBAC46E1F6BA769CC6A2AB0B68E0(struct Object Loaded); // Function UW-BlackMarket_Slot_Weapon.UW-BlackMarket_Slot_Weapon_C.OnLoaded_9693EBAC46E1F6BA769CC6A2AB0B68E0(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void Construct(); // Function UW-BlackMarket_Slot_Weapon.UW-BlackMarket_Slot_Weapon_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UW-BlackMarket_Slot_Weapon.UW-BlackMarket_Slot_Weapon_C.OnMouseEnter(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function UW-BlackMarket_Slot_Weapon.UW-BlackMarket_Slot_Weapon_C.OnMouseLeave(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void AysncLoading(struct TSoftObjectPtr<UPaperSprite> IconTexture); // Function UW-BlackMarket_Slot_Weapon.UW-BlackMarket_Slot_Weapon_C.AysncLoading(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void SwitchMenu(); // Function UW-BlackMarket_Slot_Weapon.UW-BlackMarket_Slot_Weapon_C.SwitchMenu(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void SwitchSlot(); // Function UW-BlackMarket_Slot_Weapon.UW-BlackMarket_Slot_Weapon_C.SwitchSlot(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void BndEvt__BTN-Menu02_K2Node_ComponentBoundEvent_95_OnButtonClickedEvent__DelegateSignature(); // Function UW-BlackMarket_Slot_Weapon.UW-BlackMarket_Slot_Weapon_C.BndEvt__BTN-Menu02_K2Node_ComponentBoundEvent_95_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void BndEvt__BTN-Menu03_K2Node_ComponentBoundEvent_118_OnButtonClickedEvent__DelegateSignature(); // Function UW-BlackMarket_Slot_Weapon.UW-BlackMarket_Slot_Weapon_C.BndEvt__BTN-Menu03_K2Node_ComponentBoundEvent_118_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void BndEvt__BTN-Menu04_K2Node_ComponentBoundEvent_572_OnButtonClickedEvent__DelegateSignature(); // Function UW-BlackMarket_Slot_Weapon.UW-BlackMarket_Slot_Weapon_C.BndEvt__BTN-Menu04_K2Node_ComponentBoundEvent_572_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void BndEvt__BTN-Menu05_K2Node_ComponentBoundEvent_589_OnButtonClickedEvent__DelegateSignature(); // Function UW-BlackMarket_Slot_Weapon.UW-BlackMarket_Slot_Weapon_C.BndEvt__BTN-Menu05_K2Node_ComponentBoundEvent_589_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void BndEvt__BTN-Menu06_K2Node_ComponentBoundEvent_609_OnButtonClickedEvent__DelegateSignature(); // Function UW-BlackMarket_Slot_Weapon.UW-BlackMarket_Slot_Weapon_C.BndEvt__BTN-Menu06_K2Node_ComponentBoundEvent_609_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void BndEvt__BTN-Menu07_K2Node_ComponentBoundEvent_630_OnButtonClickedEvent__DelegateSignature(); // Function UW-BlackMarket_Slot_Weapon.UW-BlackMarket_Slot_Weapon_C.BndEvt__BTN-Menu07_K2Node_ComponentBoundEvent_630_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void BndEvt__BTN-Menu08_K2Node_ComponentBoundEvent_652_OnButtonClickedEvent__DelegateSignature(); // Function UW-BlackMarket_Slot_Weapon.UW-BlackMarket_Slot_Weapon_C.BndEvt__BTN-Menu08_K2Node_ComponentBoundEvent_652_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void BndEvt__BTN-Menu09_K2Node_ComponentBoundEvent_675_OnButtonClickedEvent__DelegateSignature(); // Function UW-BlackMarket_Slot_Weapon.UW-BlackMarket_Slot_Weapon_C.BndEvt__BTN-Menu09_K2Node_ComponentBoundEvent_675_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void BndEvt__BTN-Menu10_K2Node_ComponentBoundEvent_699_OnButtonClickedEvent__DelegateSignature(); // Function UW-BlackMarket_Slot_Weapon.UW-BlackMarket_Slot_Weapon_C.BndEvt__BTN-Menu10_K2Node_ComponentBoundEvent_699_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void BndEvt__BTN-Menu11_K2Node_ComponentBoundEvent_724_OnButtonClickedEvent__DelegateSignature(); // Function UW-BlackMarket_Slot_Weapon.UW-BlackMarket_Slot_Weapon_C.BndEvt__BTN-Menu11_K2Node_ComponentBoundEvent_724_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void ExecuteUbergraph_UW-BlackMarket_Slot_Weapon(int32_t EntryPoint); // Function UW-BlackMarket_Slot_Weapon.UW-BlackMarket_Slot_Weapon_C.ExecuteUbergraph_UW-BlackMarket_Slot_Weapon(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
};

// Function UW-BlackMarket_Slot_Weapon.UW-BlackMarket_Slot_Weapon_C.SetIconTexture
inline void UUW-BlackMarket_Slot_Weapon_C::SetIconTexture(struct TSoftObjectPtr<UPaperSprite> IconTexture) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-BlackMarket_Slot_Weapon.UW-BlackMarket_Slot_Weapon_C.SetIconTexture");

	struct SetIconTexture_Params {
		struct TSoftObjectPtr<UPaperSprite> IconTexture;
	}; SetIconTexture_Params Params;

	Params.IconTexture = IconTexture;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-BlackMarket_Slot_Weapon.UW-BlackMarket_Slot_Weapon_C.On_IMG-BG_MouseButtonDown_2
inline struct FEventReply UUW-BlackMarket_Slot_Weapon_C::On_IMG-BG_MouseButtonDown_2(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-BlackMarket_Slot_Weapon.UW-BlackMarket_Slot_Weapon_C.On_IMG-BG_MouseButtonDown_2");

	struct On_IMG-BG_MouseButtonDown_2_Params {
		struct FGeometry MyGeometry;
		struct FPointerEvent& MouseEvent;
		struct FEventReply ReturnValue;

	}; On_IMG-BG_MouseButtonDown_2_Params Params;

	Params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	MouseEvent = Params.MouseEvent;


	return params.ReturnValue;
}

// Function UW-BlackMarket_Slot_Weapon.UW-BlackMarket_Slot_Weapon_C.OnLoaded_9693EBAC46E1F6BA769CC6A2AB0B68E0
inline void UUW-BlackMarket_Slot_Weapon_C::OnLoaded_9693EBAC46E1F6BA769CC6A2AB0B68E0(struct Object Loaded) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-BlackMarket_Slot_Weapon.UW-BlackMarket_Slot_Weapon_C.OnLoaded_9693EBAC46E1F6BA769CC6A2AB0B68E0");

	struct OnLoaded_9693EBAC46E1F6BA769CC6A2AB0B68E0_Params {
		struct Object Loaded;
	}; OnLoaded_9693EBAC46E1F6BA769CC6A2AB0B68E0_Params Params;

	Params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-BlackMarket_Slot_Weapon.UW-BlackMarket_Slot_Weapon_C.Construct
inline void UUW-BlackMarket_Slot_Weapon_C::Construct() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-BlackMarket_Slot_Weapon.UW-BlackMarket_Slot_Weapon_C.Construct");

	struct Construct_Params {
		
	}; Construct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-BlackMarket_Slot_Weapon.UW-BlackMarket_Slot_Weapon_C.OnMouseEnter
inline void UUW-BlackMarket_Slot_Weapon_C::OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-BlackMarket_Slot_Weapon.UW-BlackMarket_Slot_Weapon_C.OnMouseEnter");

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

// Function UW-BlackMarket_Slot_Weapon.UW-BlackMarket_Slot_Weapon_C.OnMouseLeave
inline void UUW-BlackMarket_Slot_Weapon_C::OnMouseLeave(struct FPointerEvent& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-BlackMarket_Slot_Weapon.UW-BlackMarket_Slot_Weapon_C.OnMouseLeave");

	struct OnMouseLeave_Params {
		struct FPointerEvent& MouseEvent;
	}; OnMouseLeave_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	MouseEvent = Params.MouseEvent;

}

// Function UW-BlackMarket_Slot_Weapon.UW-BlackMarket_Slot_Weapon_C.AysncLoading
inline void UUW-BlackMarket_Slot_Weapon_C::AysncLoading(struct TSoftObjectPtr<UPaperSprite> IconTexture) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-BlackMarket_Slot_Weapon.UW-BlackMarket_Slot_Weapon_C.AysncLoading");

	struct AysncLoading_Params {
		struct TSoftObjectPtr<UPaperSprite> IconTexture;
	}; AysncLoading_Params Params;

	Params.IconTexture = IconTexture;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-BlackMarket_Slot_Weapon.UW-BlackMarket_Slot_Weapon_C.SwitchMenu
inline void UUW-BlackMarket_Slot_Weapon_C::SwitchMenu() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-BlackMarket_Slot_Weapon.UW-BlackMarket_Slot_Weapon_C.SwitchMenu");

	struct SwitchMenu_Params {
		
	}; SwitchMenu_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-BlackMarket_Slot_Weapon.UW-BlackMarket_Slot_Weapon_C.SwitchSlot
inline void UUW-BlackMarket_Slot_Weapon_C::SwitchSlot() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-BlackMarket_Slot_Weapon.UW-BlackMarket_Slot_Weapon_C.SwitchSlot");

	struct SwitchSlot_Params {
		
	}; SwitchSlot_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-BlackMarket_Slot_Weapon.UW-BlackMarket_Slot_Weapon_C.BndEvt__BTN-Menu02_K2Node_ComponentBoundEvent_95_OnButtonClickedEvent__DelegateSignature
inline void UUW-BlackMarket_Slot_Weapon_C::BndEvt__BTN-Menu02_K2Node_ComponentBoundEvent_95_OnButtonClickedEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-BlackMarket_Slot_Weapon.UW-BlackMarket_Slot_Weapon_C.BndEvt__BTN-Menu02_K2Node_ComponentBoundEvent_95_OnButtonClickedEvent__DelegateSignature");

	struct BndEvt__BTN-Menu02_K2Node_ComponentBoundEvent_95_OnButtonClickedEvent__DelegateSignature_Params {
		
	}; BndEvt__BTN-Menu02_K2Node_ComponentBoundEvent_95_OnButtonClickedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-BlackMarket_Slot_Weapon.UW-BlackMarket_Slot_Weapon_C.BndEvt__BTN-Menu03_K2Node_ComponentBoundEvent_118_OnButtonClickedEvent__DelegateSignature
inline void UUW-BlackMarket_Slot_Weapon_C::BndEvt__BTN-Menu03_K2Node_ComponentBoundEvent_118_OnButtonClickedEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-BlackMarket_Slot_Weapon.UW-BlackMarket_Slot_Weapon_C.BndEvt__BTN-Menu03_K2Node_ComponentBoundEvent_118_OnButtonClickedEvent__DelegateSignature");

	struct BndEvt__BTN-Menu03_K2Node_ComponentBoundEvent_118_OnButtonClickedEvent__DelegateSignature_Params {
		
	}; BndEvt__BTN-Menu03_K2Node_ComponentBoundEvent_118_OnButtonClickedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-BlackMarket_Slot_Weapon.UW-BlackMarket_Slot_Weapon_C.BndEvt__BTN-Menu04_K2Node_ComponentBoundEvent_572_OnButtonClickedEvent__DelegateSignature
inline void UUW-BlackMarket_Slot_Weapon_C::BndEvt__BTN-Menu04_K2Node_ComponentBoundEvent_572_OnButtonClickedEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-BlackMarket_Slot_Weapon.UW-BlackMarket_Slot_Weapon_C.BndEvt__BTN-Menu04_K2Node_ComponentBoundEvent_572_OnButtonClickedEvent__DelegateSignature");

	struct BndEvt__BTN-Menu04_K2Node_ComponentBoundEvent_572_OnButtonClickedEvent__DelegateSignature_Params {
		
	}; BndEvt__BTN-Menu04_K2Node_ComponentBoundEvent_572_OnButtonClickedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-BlackMarket_Slot_Weapon.UW-BlackMarket_Slot_Weapon_C.BndEvt__BTN-Menu05_K2Node_ComponentBoundEvent_589_OnButtonClickedEvent__DelegateSignature
inline void UUW-BlackMarket_Slot_Weapon_C::BndEvt__BTN-Menu05_K2Node_ComponentBoundEvent_589_OnButtonClickedEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-BlackMarket_Slot_Weapon.UW-BlackMarket_Slot_Weapon_C.BndEvt__BTN-Menu05_K2Node_ComponentBoundEvent_589_OnButtonClickedEvent__DelegateSignature");

	struct BndEvt__BTN-Menu05_K2Node_ComponentBoundEvent_589_OnButtonClickedEvent__DelegateSignature_Params {
		
	}; BndEvt__BTN-Menu05_K2Node_ComponentBoundEvent_589_OnButtonClickedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-BlackMarket_Slot_Weapon.UW-BlackMarket_Slot_Weapon_C.BndEvt__BTN-Menu06_K2Node_ComponentBoundEvent_609_OnButtonClickedEvent__DelegateSignature
inline void UUW-BlackMarket_Slot_Weapon_C::BndEvt__BTN-Menu06_K2Node_ComponentBoundEvent_609_OnButtonClickedEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-BlackMarket_Slot_Weapon.UW-BlackMarket_Slot_Weapon_C.BndEvt__BTN-Menu06_K2Node_ComponentBoundEvent_609_OnButtonClickedEvent__DelegateSignature");

	struct BndEvt__BTN-Menu06_K2Node_ComponentBoundEvent_609_OnButtonClickedEvent__DelegateSignature_Params {
		
	}; BndEvt__BTN-Menu06_K2Node_ComponentBoundEvent_609_OnButtonClickedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-BlackMarket_Slot_Weapon.UW-BlackMarket_Slot_Weapon_C.BndEvt__BTN-Menu07_K2Node_ComponentBoundEvent_630_OnButtonClickedEvent__DelegateSignature
inline void UUW-BlackMarket_Slot_Weapon_C::BndEvt__BTN-Menu07_K2Node_ComponentBoundEvent_630_OnButtonClickedEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-BlackMarket_Slot_Weapon.UW-BlackMarket_Slot_Weapon_C.BndEvt__BTN-Menu07_K2Node_ComponentBoundEvent_630_OnButtonClickedEvent__DelegateSignature");

	struct BndEvt__BTN-Menu07_K2Node_ComponentBoundEvent_630_OnButtonClickedEvent__DelegateSignature_Params {
		
	}; BndEvt__BTN-Menu07_K2Node_ComponentBoundEvent_630_OnButtonClickedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-BlackMarket_Slot_Weapon.UW-BlackMarket_Slot_Weapon_C.BndEvt__BTN-Menu08_K2Node_ComponentBoundEvent_652_OnButtonClickedEvent__DelegateSignature
inline void UUW-BlackMarket_Slot_Weapon_C::BndEvt__BTN-Menu08_K2Node_ComponentBoundEvent_652_OnButtonClickedEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-BlackMarket_Slot_Weapon.UW-BlackMarket_Slot_Weapon_C.BndEvt__BTN-Menu08_K2Node_ComponentBoundEvent_652_OnButtonClickedEvent__DelegateSignature");

	struct BndEvt__BTN-Menu08_K2Node_ComponentBoundEvent_652_OnButtonClickedEvent__DelegateSignature_Params {
		
	}; BndEvt__BTN-Menu08_K2Node_ComponentBoundEvent_652_OnButtonClickedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-BlackMarket_Slot_Weapon.UW-BlackMarket_Slot_Weapon_C.BndEvt__BTN-Menu09_K2Node_ComponentBoundEvent_675_OnButtonClickedEvent__DelegateSignature
inline void UUW-BlackMarket_Slot_Weapon_C::BndEvt__BTN-Menu09_K2Node_ComponentBoundEvent_675_OnButtonClickedEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-BlackMarket_Slot_Weapon.UW-BlackMarket_Slot_Weapon_C.BndEvt__BTN-Menu09_K2Node_ComponentBoundEvent_675_OnButtonClickedEvent__DelegateSignature");

	struct BndEvt__BTN-Menu09_K2Node_ComponentBoundEvent_675_OnButtonClickedEvent__DelegateSignature_Params {
		
	}; BndEvt__BTN-Menu09_K2Node_ComponentBoundEvent_675_OnButtonClickedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-BlackMarket_Slot_Weapon.UW-BlackMarket_Slot_Weapon_C.BndEvt__BTN-Menu10_K2Node_ComponentBoundEvent_699_OnButtonClickedEvent__DelegateSignature
inline void UUW-BlackMarket_Slot_Weapon_C::BndEvt__BTN-Menu10_K2Node_ComponentBoundEvent_699_OnButtonClickedEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-BlackMarket_Slot_Weapon.UW-BlackMarket_Slot_Weapon_C.BndEvt__BTN-Menu10_K2Node_ComponentBoundEvent_699_OnButtonClickedEvent__DelegateSignature");

	struct BndEvt__BTN-Menu10_K2Node_ComponentBoundEvent_699_OnButtonClickedEvent__DelegateSignature_Params {
		
	}; BndEvt__BTN-Menu10_K2Node_ComponentBoundEvent_699_OnButtonClickedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-BlackMarket_Slot_Weapon.UW-BlackMarket_Slot_Weapon_C.BndEvt__BTN-Menu11_K2Node_ComponentBoundEvent_724_OnButtonClickedEvent__DelegateSignature
inline void UUW-BlackMarket_Slot_Weapon_C::BndEvt__BTN-Menu11_K2Node_ComponentBoundEvent_724_OnButtonClickedEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-BlackMarket_Slot_Weapon.UW-BlackMarket_Slot_Weapon_C.BndEvt__BTN-Menu11_K2Node_ComponentBoundEvent_724_OnButtonClickedEvent__DelegateSignature");

	struct BndEvt__BTN-Menu11_K2Node_ComponentBoundEvent_724_OnButtonClickedEvent__DelegateSignature_Params {
		
	}; BndEvt__BTN-Menu11_K2Node_ComponentBoundEvent_724_OnButtonClickedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-BlackMarket_Slot_Weapon.UW-BlackMarket_Slot_Weapon_C.ExecuteUbergraph_UW-BlackMarket_Slot_Weapon
inline void UUW-BlackMarket_Slot_Weapon_C::ExecuteUbergraph_UW-BlackMarket_Slot_Weapon(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-BlackMarket_Slot_Weapon.UW-BlackMarket_Slot_Weapon_C.ExecuteUbergraph_UW-BlackMarket_Slot_Weapon");

	struct ExecuteUbergraph_UW-BlackMarket_Slot_Weapon_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_UW-BlackMarket_Slot_Weapon_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

