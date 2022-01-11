// WidgetBlueprintGeneratedClass UW-PersonalSupplyBoxSlotItemWidget.UW-PersonalSupplyBoxSlotItemWidget_C
class UUW-PersonalSupplyBoxSlotItemWidget_C : public UBravoHotelPersonalSupplyBoxSlotItemWidget {

public:

	struct Unknown UberGraphFrame; // 0x3E8 (8)
	struct Unknown Over; // 0x3F0 (8)
	struct Unknown Bg; // 0x3F8 (8)
	struct Unknown CanvasPanel_2; // 0x400 (8)
	struct Unknown CanvasPanel_4; // 0x408 (8)
	struct Unknown Cont; // 0x410 (8)
	struct Unknown DropHoverImage; // 0x418 (8)
	struct Unknown Image; // 0x420 (8)
	struct Unknown Image_86; // 0x428 (8)
	struct Unknown Image_187; // 0x430 (8)
	struct Unknown Image_675; // 0x438 (8)
	struct Unknown Image_874; // 0x440 (8)
	struct Unknown ItemImage; // 0x448 (8)
	struct Unknown ItemName; // 0x450 (8)
	struct Unknown Lock; // 0x458 (8)
	struct Unknown Price_Value; // 0x460 (8)
	struct Unknown ProgressBar_65; // 0x468 (8)
	struct Unknown Repair; // 0x470 (8)
	struct Unknown WeaponName; // 0x478 (8)
	struct Unknown WeaponName_2; // 0x480 (8)
	struct Unknown WeaponName_3; // 0x488 (8)
	struct Unknown WidgetSwitcher_1; // 0x490 (8)
	struct Unknown DraggedWidget; // 0x498 (8)
	struct Unknown DragItemBrush; // 0x4A0 (136)
	char EnableDrag : 0; // 0x528 (1)
	struct Unknown ItemIconImg; // 0x530 (40)
	struct FName AmmorKey; // 0x558 (8)
	struct FMulticastInlineDelegate OnHoverStateEventDispatcher; // 0x560 (16)
	struct FMulticastInlineDelegate OnRightClickEventDispatcher; // 0x570 (16)
	struct Unknown SaveKey; // 0x580 (24)
	int32_t ClickNum; // 0x598 (4)
	char RandomPerk : 0; // 0x59C (1)

	struct Unknown OnMouseButtonUp(struct Unknown MyGeometry, struct Unknown& MouseEvent); // Function UW-PersonalSupplyBoxSlotItemWidget.UW-PersonalSupplyBoxSlotItemWidget_C.OnMouseButtonUp(BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	struct Unknown OnMouseButtonDown(struct Unknown MyGeometry, struct Unknown& MouseEvent); // Function UW-PersonalSupplyBoxSlotItemWidget.UW-PersonalSupplyBoxSlotItemWidget_C.OnMouseButtonDown(BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void OnDragDetected(struct Unknown MyGeometry, struct Unknown& PointerEvent, struct Unknown& Operation); // Function UW-PersonalSupplyBoxSlotItemWidget.UW-PersonalSupplyBoxSlotItemWidget_C.OnDragDetected(BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void OnLoaded_2F164CF142966D9481C26D9FAFCD6B3E(struct Unknown Loaded); // Function UW-PersonalSupplyBoxSlotItemWidget.UW-PersonalSupplyBoxSlotItemWidget_C.OnLoaded_2F164CF142966D9481C26D9FAFCD6B3E(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void OnLoaded_470CC2A647398584A781D89997DE829A(struct Unknown Loaded); // Function UW-PersonalSupplyBoxSlotItemWidget.UW-PersonalSupplyBoxSlotItemWidget_C.OnLoaded_470CC2A647398584A781D89997DE829A(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void OnLoaded_B44424C84F36CE653BE71591D8E4AA63(struct Unknown Loaded); // Function UW-PersonalSupplyBoxSlotItemWidget.UW-PersonalSupplyBoxSlotItemWidget_C.OnLoaded_B44424C84F36CE653BE71591D8E4AA63(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void SetConsumableItemInfo(struct Unknown& NewConsumableItemData); // Function UW-PersonalSupplyBoxSlotItemWidget.UW-PersonalSupplyBoxSlotItemWidget_C.SetConsumableItemInfo(Event|Public|HasOutParms|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void AysncLoadIconTexture(struct Unknown IconTexture); // Function UW-PersonalSupplyBoxSlotItemWidget.UW-PersonalSupplyBoxSlotItemWidget_C.AysncLoadIconTexture(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void OnMouseEnter(struct Unknown MyGeometry, struct Unknown& MouseEvent); // Function UW-PersonalSupplyBoxSlotItemWidget.UW-PersonalSupplyBoxSlotItemWidget_C.OnMouseEnter(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void OnMouseLeave(struct Unknown& MouseEvent); // Function UW-PersonalSupplyBoxSlotItemWidget.UW-PersonalSupplyBoxSlotItemWidget_C.OnMouseLeave(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void SetLockState(char IsLock); // Function UW-PersonalSupplyBoxSlotItemWidget.UW-PersonalSupplyBoxSlotItemWidget_C.SetLockState(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void SetEquipState(char IsUnEquip); // Function UW-PersonalSupplyBoxSlotItemWidget.UW-PersonalSupplyBoxSlotItemWidget_C.SetEquipState(Event|Public|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void SetWeaponInfo(struct Unknown& NewWeaponItemData); // Function UW-PersonalSupplyBoxSlotItemWidget.UW-PersonalSupplyBoxSlotItemWidget_C.SetWeaponInfo(Event|Public|HasOutParms|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void Construct(); // Function UW-PersonalSupplyBoxSlotItemWidget.UW-PersonalSupplyBoxSlotItemWidget_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void CheckClick(); // Function UW-PersonalSupplyBoxSlotItemWidget.UW-PersonalSupplyBoxSlotItemWidget_C.CheckClick(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void ExecuteUbergraph_UW-PersonalSupplyBoxSlotItemWidget(int32_t EntryPoint); // Function UW-PersonalSupplyBoxSlotItemWidget.UW-PersonalSupplyBoxSlotItemWidget_C.ExecuteUbergraph_UW-PersonalSupplyBoxSlotItemWidget(Final|UbergraphFunction|HasDefaults) // <Game_BE.exe+0x2B80160>
	void OnRightClickEventDispatcher__DelegateSignature(struct Unknown Slot); // Function UW-PersonalSupplyBoxSlotItemWidget.UW-PersonalSupplyBoxSlotItemWidget_C.OnRightClickEventDispatcher__DelegateSignature(Public|Delegate|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void OnHoverStateEventDispatcher__DelegateSignature(char IsHover); // Function UW-PersonalSupplyBoxSlotItemWidget.UW-PersonalSupplyBoxSlotItemWidget_C.OnHoverStateEventDispatcher__DelegateSignature(Public|Delegate|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
};

// Function UW-PersonalSupplyBoxSlotItemWidget.UW-PersonalSupplyBoxSlotItemWidget_C.OnMouseButtonUp
inline struct Unknown UUW-PersonalSupplyBoxSlotItemWidget_C::OnMouseButtonUp(struct Unknown MyGeometry, struct Unknown& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PersonalSupplyBoxSlotItemWidget.UW-PersonalSupplyBoxSlotItemWidget_C.OnMouseButtonUp");

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

// Function UW-PersonalSupplyBoxSlotItemWidget.UW-PersonalSupplyBoxSlotItemWidget_C.OnMouseButtonDown
inline struct Unknown UUW-PersonalSupplyBoxSlotItemWidget_C::OnMouseButtonDown(struct Unknown MyGeometry, struct Unknown& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PersonalSupplyBoxSlotItemWidget.UW-PersonalSupplyBoxSlotItemWidget_C.OnMouseButtonDown");

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

// Function UW-PersonalSupplyBoxSlotItemWidget.UW-PersonalSupplyBoxSlotItemWidget_C.OnDragDetected
inline void UUW-PersonalSupplyBoxSlotItemWidget_C::OnDragDetected(struct Unknown MyGeometry, struct Unknown& PointerEvent, struct Unknown& Operation) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PersonalSupplyBoxSlotItemWidget.UW-PersonalSupplyBoxSlotItemWidget_C.OnDragDetected");

	struct OnDragDetected_Params {
		struct Unknown MyGeometry;
		struct Unknown& PointerEvent;
		struct Unknown& Operation;
	}; OnDragDetected_Params Params;

	Params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	PointerEvent = Params.PointerEvent;
	Operation = Params.Operation;

}

// Function UW-PersonalSupplyBoxSlotItemWidget.UW-PersonalSupplyBoxSlotItemWidget_C.OnLoaded_2F164CF142966D9481C26D9FAFCD6B3E
inline void UUW-PersonalSupplyBoxSlotItemWidget_C::OnLoaded_2F164CF142966D9481C26D9FAFCD6B3E(struct Unknown Loaded) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PersonalSupplyBoxSlotItemWidget.UW-PersonalSupplyBoxSlotItemWidget_C.OnLoaded_2F164CF142966D9481C26D9FAFCD6B3E");

	struct OnLoaded_2F164CF142966D9481C26D9FAFCD6B3E_Params {
		struct Unknown Loaded;
	}; OnLoaded_2F164CF142966D9481C26D9FAFCD6B3E_Params Params;

	Params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PersonalSupplyBoxSlotItemWidget.UW-PersonalSupplyBoxSlotItemWidget_C.OnLoaded_470CC2A647398584A781D89997DE829A
inline void UUW-PersonalSupplyBoxSlotItemWidget_C::OnLoaded_470CC2A647398584A781D89997DE829A(struct Unknown Loaded) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PersonalSupplyBoxSlotItemWidget.UW-PersonalSupplyBoxSlotItemWidget_C.OnLoaded_470CC2A647398584A781D89997DE829A");

	struct OnLoaded_470CC2A647398584A781D89997DE829A_Params {
		struct Unknown Loaded;
	}; OnLoaded_470CC2A647398584A781D89997DE829A_Params Params;

	Params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PersonalSupplyBoxSlotItemWidget.UW-PersonalSupplyBoxSlotItemWidget_C.OnLoaded_B44424C84F36CE653BE71591D8E4AA63
inline void UUW-PersonalSupplyBoxSlotItemWidget_C::OnLoaded_B44424C84F36CE653BE71591D8E4AA63(struct Unknown Loaded) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PersonalSupplyBoxSlotItemWidget.UW-PersonalSupplyBoxSlotItemWidget_C.OnLoaded_B44424C84F36CE653BE71591D8E4AA63");

	struct OnLoaded_B44424C84F36CE653BE71591D8E4AA63_Params {
		struct Unknown Loaded;
	}; OnLoaded_B44424C84F36CE653BE71591D8E4AA63_Params Params;

	Params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PersonalSupplyBoxSlotItemWidget.UW-PersonalSupplyBoxSlotItemWidget_C.SetConsumableItemInfo
inline void UUW-PersonalSupplyBoxSlotItemWidget_C::SetConsumableItemInfo(struct Unknown& NewConsumableItemData) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PersonalSupplyBoxSlotItemWidget.UW-PersonalSupplyBoxSlotItemWidget_C.SetConsumableItemInfo");

	struct SetConsumableItemInfo_Params {
		struct Unknown& NewConsumableItemData;
	}; SetConsumableItemInfo_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	NewConsumableItemData = Params.NewConsumableItemData;

}

// Function UW-PersonalSupplyBoxSlotItemWidget.UW-PersonalSupplyBoxSlotItemWidget_C.AysncLoadIconTexture
inline void UUW-PersonalSupplyBoxSlotItemWidget_C::AysncLoadIconTexture(struct Unknown IconTexture) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PersonalSupplyBoxSlotItemWidget.UW-PersonalSupplyBoxSlotItemWidget_C.AysncLoadIconTexture");

	struct AysncLoadIconTexture_Params {
		struct Unknown IconTexture;
	}; AysncLoadIconTexture_Params Params;

	Params.IconTexture = IconTexture;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PersonalSupplyBoxSlotItemWidget.UW-PersonalSupplyBoxSlotItemWidget_C.OnMouseEnter
inline void UUW-PersonalSupplyBoxSlotItemWidget_C::OnMouseEnter(struct Unknown MyGeometry, struct Unknown& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PersonalSupplyBoxSlotItemWidget.UW-PersonalSupplyBoxSlotItemWidget_C.OnMouseEnter");

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

// Function UW-PersonalSupplyBoxSlotItemWidget.UW-PersonalSupplyBoxSlotItemWidget_C.OnMouseLeave
inline void UUW-PersonalSupplyBoxSlotItemWidget_C::OnMouseLeave(struct Unknown& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PersonalSupplyBoxSlotItemWidget.UW-PersonalSupplyBoxSlotItemWidget_C.OnMouseLeave");

	struct OnMouseLeave_Params {
		struct Unknown& MouseEvent;
	}; OnMouseLeave_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	MouseEvent = Params.MouseEvent;

}

// Function UW-PersonalSupplyBoxSlotItemWidget.UW-PersonalSupplyBoxSlotItemWidget_C.SetLockState
inline void UUW-PersonalSupplyBoxSlotItemWidget_C::SetLockState(char IsLock) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PersonalSupplyBoxSlotItemWidget.UW-PersonalSupplyBoxSlotItemWidget_C.SetLockState");

	struct SetLockState_Params {
		char IsLock;
	}; SetLockState_Params Params;

	Params.IsLock = IsLock;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PersonalSupplyBoxSlotItemWidget.UW-PersonalSupplyBoxSlotItemWidget_C.SetEquipState
inline void UUW-PersonalSupplyBoxSlotItemWidget_C::SetEquipState(char IsUnEquip) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PersonalSupplyBoxSlotItemWidget.UW-PersonalSupplyBoxSlotItemWidget_C.SetEquipState");

	struct SetEquipState_Params {
		char IsUnEquip;
	}; SetEquipState_Params Params;

	Params.IsUnEquip = IsUnEquip;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PersonalSupplyBoxSlotItemWidget.UW-PersonalSupplyBoxSlotItemWidget_C.SetWeaponInfo
inline void UUW-PersonalSupplyBoxSlotItemWidget_C::SetWeaponInfo(struct Unknown& NewWeaponItemData) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PersonalSupplyBoxSlotItemWidget.UW-PersonalSupplyBoxSlotItemWidget_C.SetWeaponInfo");

	struct SetWeaponInfo_Params {
		struct Unknown& NewWeaponItemData;
	}; SetWeaponInfo_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	NewWeaponItemData = Params.NewWeaponItemData;

}

// Function UW-PersonalSupplyBoxSlotItemWidget.UW-PersonalSupplyBoxSlotItemWidget_C.Construct
inline void UUW-PersonalSupplyBoxSlotItemWidget_C::Construct() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PersonalSupplyBoxSlotItemWidget.UW-PersonalSupplyBoxSlotItemWidget_C.Construct");

	struct Construct_Params {
		
	}; Construct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PersonalSupplyBoxSlotItemWidget.UW-PersonalSupplyBoxSlotItemWidget_C.CheckClick
inline void UUW-PersonalSupplyBoxSlotItemWidget_C::CheckClick() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PersonalSupplyBoxSlotItemWidget.UW-PersonalSupplyBoxSlotItemWidget_C.CheckClick");

	struct CheckClick_Params {
		
	}; CheckClick_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PersonalSupplyBoxSlotItemWidget.UW-PersonalSupplyBoxSlotItemWidget_C.ExecuteUbergraph_UW-PersonalSupplyBoxSlotItemWidget
inline void UUW-PersonalSupplyBoxSlotItemWidget_C::ExecuteUbergraph_UW-PersonalSupplyBoxSlotItemWidget(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PersonalSupplyBoxSlotItemWidget.UW-PersonalSupplyBoxSlotItemWidget_C.ExecuteUbergraph_UW-PersonalSupplyBoxSlotItemWidget");

	struct ExecuteUbergraph_UW-PersonalSupplyBoxSlotItemWidget_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_UW-PersonalSupplyBoxSlotItemWidget_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PersonalSupplyBoxSlotItemWidget.UW-PersonalSupplyBoxSlotItemWidget_C.OnRightClickEventDispatcher__DelegateSignature
inline void UUW-PersonalSupplyBoxSlotItemWidget_C::OnRightClickEventDispatcher__DelegateSignature(struct Unknown Slot) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PersonalSupplyBoxSlotItemWidget.UW-PersonalSupplyBoxSlotItemWidget_C.OnRightClickEventDispatcher__DelegateSignature");

	struct OnRightClickEventDispatcher__DelegateSignature_Params {
		struct Unknown Slot;
	}; OnRightClickEventDispatcher__DelegateSignature_Params Params;

	Params.Slot = Slot;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PersonalSupplyBoxSlotItemWidget.UW-PersonalSupplyBoxSlotItemWidget_C.OnHoverStateEventDispatcher__DelegateSignature
inline void UUW-PersonalSupplyBoxSlotItemWidget_C::OnHoverStateEventDispatcher__DelegateSignature(char IsHover) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PersonalSupplyBoxSlotItemWidget.UW-PersonalSupplyBoxSlotItemWidget_C.OnHoverStateEventDispatcher__DelegateSignature");

	struct OnHoverStateEventDispatcher__DelegateSignature_Params {
		char IsHover;
	}; OnHoverStateEventDispatcher__DelegateSignature_Params Params;

	Params.IsHover = IsHover;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

