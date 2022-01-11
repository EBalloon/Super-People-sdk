// WidgetBlueprintGeneratedClass UW-PersonalSupplyBoxWeaponInfoWidget.UW-PersonalSupplyBoxWeaponInfoWidget_C
class UUW-PersonalSupplyBoxWeaponInfoWidget_C : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown AmmoImage; // 0x250 (8)
	struct Unknown AmmoText; // 0x258 (8)
	struct Unknown Button_2; // 0x260 (8)
	struct Unknown CanvasPanel_98; // 0x268 (8)
	struct Unknown HorizontalBox_Perk; // 0x270 (8)
	struct Unknown HorizontalBox_Rarity; // 0x278 (8)
	struct Unknown Image; // 0x280 (8)
	struct Unknown Image_369; // 0x288 (8)
	struct Unknown Image_704; // 0x290 (8)
	struct Unknown Image_874; // 0x298 (8)
	struct Unknown Image_924; // 0x2A0 (8)
	struct Unknown Image_1262; // 0x2A8 (8)
	struct Unknown Image_1400; // 0x2B0 (8)
	struct Unknown Reinforce; // 0x2B8 (8)
	struct Unknown TextBlock_291; // 0x2C0 (8)
	struct Unknown UW-Inventory_WeaponPerkSlot; // 0x2C8 (8)
	struct Unknown UW-Inventory_WeaponPerkSlot_C_2; // 0x2D0 (8)
	struct Unknown UW-Inventory_WeaponPerkSlot_C_3; // 0x2D8 (8)
	struct Unknown WeaponBg; // 0x2E0 (8)
	struct Unknown WeaponImage01; // 0x2E8 (8)
	struct Unknown WeaponName; // 0x2F0 (8)
	struct Unknown WidgetSwitcher_1; // 0x2F8 (8)
	struct Unknown DraggedWidget; // 0x300 (8)
	struct Unknown WeaponData; // 0x308 (152)
	struct FMulticastInlineDelegate OnDropEventDispatcher; // 0x3A0 (16)
	struct FName AmmorKey; // 0x3B0 (8)
	struct FMulticastInlineDelegate ShowToolTipEventDispatcher; // 0x3B8 (16)
	char IsDefaultWeapon : 0; // 0x3C8 (1)
	int32_t ClickNum; // 0x3CC (4)
	struct FMulticastInlineDelegate OnDefaultWeaponEventDispatcher; // 0x3D0 (16)
	struct Unknown SaveKey; // 0x3E0 (24)

	struct Unknown OnMouseButtonUp(struct Unknown MyGeometry, struct Unknown& MouseEvent); // Function UW-PersonalSupplyBoxWeaponInfoWidget.UW-PersonalSupplyBoxWeaponInfoWidget_C.OnMouseButtonUp(BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	struct Unknown OnMouseButtonDown(struct Unknown MyGeometry, struct Unknown& MouseEvent); // Function UW-PersonalSupplyBoxWeaponInfoWidget.UW-PersonalSupplyBoxWeaponInfoWidget_C.OnMouseButtonDown(BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void OnDragDetected(struct Unknown MyGeometry, struct Unknown& PointerEvent, struct Unknown& Operation); // Function UW-PersonalSupplyBoxWeaponInfoWidget.UW-PersonalSupplyBoxWeaponInfoWidget_C.OnDragDetected(BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	char OnDrop(struct Unknown MyGeometry, struct Unknown PointerEvent, struct Unknown Operation); // Function UW-PersonalSupplyBoxWeaponInfoWidget.UW-PersonalSupplyBoxWeaponInfoWidget_C.OnDrop(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void OnLoaded_FEF6479249E52A5D25FBEFB685BA2571(struct Unknown Loaded); // Function UW-PersonalSupplyBoxWeaponInfoWidget.UW-PersonalSupplyBoxWeaponInfoWidget_C.OnLoaded_FEF6479249E52A5D25FBEFB685BA2571(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void OnLoaded_6AFA1CC544727820BD519DB93268114A(struct Unknown Loaded); // Function UW-PersonalSupplyBoxWeaponInfoWidget.UW-PersonalSupplyBoxWeaponInfoWidget_C.OnLoaded_6AFA1CC544727820BD519DB93268114A(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void SetData(struct Unknown& WeaponItem, char IsDefaultWeapon); // Function UW-PersonalSupplyBoxWeaponInfoWidget.UW-PersonalSupplyBoxWeaponInfoWidget_C.SetData(HasOutParms|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void BndEvt__Button_1_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function UW-PersonalSupplyBoxWeaponInfoWidget.UW-PersonalSupplyBoxWeaponInfoWidget_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void BndEvt__Button_1_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature(); // Function UW-PersonalSupplyBoxWeaponInfoWidget.UW-PersonalSupplyBoxWeaponInfoWidget_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature(BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void OnMouseLeave(struct Unknown& MouseEvent); // Function UW-PersonalSupplyBoxWeaponInfoWidget.UW-PersonalSupplyBoxWeaponInfoWidget_C.OnMouseLeave(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void OnMouseEnter(struct Unknown MyGeometry, struct Unknown& MouseEvent); // Function UW-PersonalSupplyBoxWeaponInfoWidget.UW-PersonalSupplyBoxWeaponInfoWidget_C.OnMouseEnter(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void SetDurability(int32_t Durability); // Function UW-PersonalSupplyBoxWeaponInfoWidget.UW-PersonalSupplyBoxWeaponInfoWidget_C.SetDurability(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void SetDefaultWeapon(char IsDefaultWeapon); // Function UW-PersonalSupplyBoxWeaponInfoWidget.UW-PersonalSupplyBoxWeaponInfoWidget_C.SetDefaultWeapon(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void CheckClick(); // Function UW-PersonalSupplyBoxWeaponInfoWidget.UW-PersonalSupplyBoxWeaponInfoWidget_C.CheckClick(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void ExecuteUbergraph_UW-PersonalSupplyBoxWeaponInfoWidget(int32_t EntryPoint); // Function UW-PersonalSupplyBoxWeaponInfoWidget.UW-PersonalSupplyBoxWeaponInfoWidget_C.ExecuteUbergraph_UW-PersonalSupplyBoxWeaponInfoWidget(Final|UbergraphFunction|HasDefaults) // <Game_BE.exe+0x2B80160>
	void OnDefaultWeaponEventDispatcher__DelegateSignature(struct Unknown Weapon); // Function UW-PersonalSupplyBoxWeaponInfoWidget.UW-PersonalSupplyBoxWeaponInfoWidget_C.OnDefaultWeaponEventDispatcher__DelegateSignature(Public|Delegate|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void ShowToolTipEventDispatcher__DelegateSignature(char IsShow, struct Unknown Widget); // Function UW-PersonalSupplyBoxWeaponInfoWidget.UW-PersonalSupplyBoxWeaponInfoWidget_C.ShowToolTipEventDispatcher__DelegateSignature(Public|Delegate|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void OnDropEventDispatcher__DelegateSignature(struct Unknown WeaponData); // Function UW-PersonalSupplyBoxWeaponInfoWidget.UW-PersonalSupplyBoxWeaponInfoWidget_C.OnDropEventDispatcher__DelegateSignature(Public|Delegate|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
};

// Function UW-PersonalSupplyBoxWeaponInfoWidget.UW-PersonalSupplyBoxWeaponInfoWidget_C.OnMouseButtonUp
inline struct Unknown UUW-PersonalSupplyBoxWeaponInfoWidget_C::OnMouseButtonUp(struct Unknown MyGeometry, struct Unknown& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PersonalSupplyBoxWeaponInfoWidget.UW-PersonalSupplyBoxWeaponInfoWidget_C.OnMouseButtonUp");

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

// Function UW-PersonalSupplyBoxWeaponInfoWidget.UW-PersonalSupplyBoxWeaponInfoWidget_C.OnMouseButtonDown
inline struct Unknown UUW-PersonalSupplyBoxWeaponInfoWidget_C::OnMouseButtonDown(struct Unknown MyGeometry, struct Unknown& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PersonalSupplyBoxWeaponInfoWidget.UW-PersonalSupplyBoxWeaponInfoWidget_C.OnMouseButtonDown");

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

// Function UW-PersonalSupplyBoxWeaponInfoWidget.UW-PersonalSupplyBoxWeaponInfoWidget_C.OnDragDetected
inline void UUW-PersonalSupplyBoxWeaponInfoWidget_C::OnDragDetected(struct Unknown MyGeometry, struct Unknown& PointerEvent, struct Unknown& Operation) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PersonalSupplyBoxWeaponInfoWidget.UW-PersonalSupplyBoxWeaponInfoWidget_C.OnDragDetected");

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

// Function UW-PersonalSupplyBoxWeaponInfoWidget.UW-PersonalSupplyBoxWeaponInfoWidget_C.OnDrop
inline char UUW-PersonalSupplyBoxWeaponInfoWidget_C::OnDrop(struct Unknown MyGeometry, struct Unknown PointerEvent, struct Unknown Operation) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PersonalSupplyBoxWeaponInfoWidget.UW-PersonalSupplyBoxWeaponInfoWidget_C.OnDrop");

	struct OnDrop_Params {
		struct Unknown MyGeometry;
		struct Unknown PointerEvent;
		struct Unknown Operation;
		char ReturnValue;

	}; OnDrop_Params Params;

	Params.MyGeometry = MyGeometry;
	Params.PointerEvent = PointerEvent;
	Params.Operation = Operation;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UW-PersonalSupplyBoxWeaponInfoWidget.UW-PersonalSupplyBoxWeaponInfoWidget_C.OnLoaded_FEF6479249E52A5D25FBEFB685BA2571
inline void UUW-PersonalSupplyBoxWeaponInfoWidget_C::OnLoaded_FEF6479249E52A5D25FBEFB685BA2571(struct Unknown Loaded) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PersonalSupplyBoxWeaponInfoWidget.UW-PersonalSupplyBoxWeaponInfoWidget_C.OnLoaded_FEF6479249E52A5D25FBEFB685BA2571");

	struct OnLoaded_FEF6479249E52A5D25FBEFB685BA2571_Params {
		struct Unknown Loaded;
	}; OnLoaded_FEF6479249E52A5D25FBEFB685BA2571_Params Params;

	Params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PersonalSupplyBoxWeaponInfoWidget.UW-PersonalSupplyBoxWeaponInfoWidget_C.OnLoaded_6AFA1CC544727820BD519DB93268114A
inline void UUW-PersonalSupplyBoxWeaponInfoWidget_C::OnLoaded_6AFA1CC544727820BD519DB93268114A(struct Unknown Loaded) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PersonalSupplyBoxWeaponInfoWidget.UW-PersonalSupplyBoxWeaponInfoWidget_C.OnLoaded_6AFA1CC544727820BD519DB93268114A");

	struct OnLoaded_6AFA1CC544727820BD519DB93268114A_Params {
		struct Unknown Loaded;
	}; OnLoaded_6AFA1CC544727820BD519DB93268114A_Params Params;

	Params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PersonalSupplyBoxWeaponInfoWidget.UW-PersonalSupplyBoxWeaponInfoWidget_C.SetData
inline void UUW-PersonalSupplyBoxWeaponInfoWidget_C::SetData(struct Unknown& WeaponItem, char IsDefaultWeapon) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PersonalSupplyBoxWeaponInfoWidget.UW-PersonalSupplyBoxWeaponInfoWidget_C.SetData");

	struct SetData_Params {
		struct Unknown& WeaponItem;
		char IsDefaultWeapon;
	}; SetData_Params Params;

	Params.IsDefaultWeapon = IsDefaultWeapon;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	WeaponItem = Params.WeaponItem;

}

// Function UW-PersonalSupplyBoxWeaponInfoWidget.UW-PersonalSupplyBoxWeaponInfoWidget_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
inline void UUW-PersonalSupplyBoxWeaponInfoWidget_C::BndEvt__Button_1_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PersonalSupplyBoxWeaponInfoWidget.UW-PersonalSupplyBoxWeaponInfoWidget_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	struct BndEvt__Button_1_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params {
		
	}; BndEvt__Button_1_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PersonalSupplyBoxWeaponInfoWidget.UW-PersonalSupplyBoxWeaponInfoWidget_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
inline void UUW-PersonalSupplyBoxWeaponInfoWidget_C::BndEvt__Button_1_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PersonalSupplyBoxWeaponInfoWidget.UW-PersonalSupplyBoxWeaponInfoWidget_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");

	struct BndEvt__Button_1_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params {
		
	}; BndEvt__Button_1_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PersonalSupplyBoxWeaponInfoWidget.UW-PersonalSupplyBoxWeaponInfoWidget_C.OnMouseLeave
inline void UUW-PersonalSupplyBoxWeaponInfoWidget_C::OnMouseLeave(struct Unknown& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PersonalSupplyBoxWeaponInfoWidget.UW-PersonalSupplyBoxWeaponInfoWidget_C.OnMouseLeave");

	struct OnMouseLeave_Params {
		struct Unknown& MouseEvent;
	}; OnMouseLeave_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	MouseEvent = Params.MouseEvent;

}

// Function UW-PersonalSupplyBoxWeaponInfoWidget.UW-PersonalSupplyBoxWeaponInfoWidget_C.OnMouseEnter
inline void UUW-PersonalSupplyBoxWeaponInfoWidget_C::OnMouseEnter(struct Unknown MyGeometry, struct Unknown& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PersonalSupplyBoxWeaponInfoWidget.UW-PersonalSupplyBoxWeaponInfoWidget_C.OnMouseEnter");

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

// Function UW-PersonalSupplyBoxWeaponInfoWidget.UW-PersonalSupplyBoxWeaponInfoWidget_C.SetDurability
inline void UUW-PersonalSupplyBoxWeaponInfoWidget_C::SetDurability(int32_t Durability) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PersonalSupplyBoxWeaponInfoWidget.UW-PersonalSupplyBoxWeaponInfoWidget_C.SetDurability");

	struct SetDurability_Params {
		int32_t Durability;
	}; SetDurability_Params Params;

	Params.Durability = Durability;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PersonalSupplyBoxWeaponInfoWidget.UW-PersonalSupplyBoxWeaponInfoWidget_C.SetDefaultWeapon
inline void UUW-PersonalSupplyBoxWeaponInfoWidget_C::SetDefaultWeapon(char IsDefaultWeapon) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PersonalSupplyBoxWeaponInfoWidget.UW-PersonalSupplyBoxWeaponInfoWidget_C.SetDefaultWeapon");

	struct SetDefaultWeapon_Params {
		char IsDefaultWeapon;
	}; SetDefaultWeapon_Params Params;

	Params.IsDefaultWeapon = IsDefaultWeapon;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PersonalSupplyBoxWeaponInfoWidget.UW-PersonalSupplyBoxWeaponInfoWidget_C.CheckClick
inline void UUW-PersonalSupplyBoxWeaponInfoWidget_C::CheckClick() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PersonalSupplyBoxWeaponInfoWidget.UW-PersonalSupplyBoxWeaponInfoWidget_C.CheckClick");

	struct CheckClick_Params {
		
	}; CheckClick_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PersonalSupplyBoxWeaponInfoWidget.UW-PersonalSupplyBoxWeaponInfoWidget_C.ExecuteUbergraph_UW-PersonalSupplyBoxWeaponInfoWidget
inline void UUW-PersonalSupplyBoxWeaponInfoWidget_C::ExecuteUbergraph_UW-PersonalSupplyBoxWeaponInfoWidget(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PersonalSupplyBoxWeaponInfoWidget.UW-PersonalSupplyBoxWeaponInfoWidget_C.ExecuteUbergraph_UW-PersonalSupplyBoxWeaponInfoWidget");

	struct ExecuteUbergraph_UW-PersonalSupplyBoxWeaponInfoWidget_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_UW-PersonalSupplyBoxWeaponInfoWidget_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PersonalSupplyBoxWeaponInfoWidget.UW-PersonalSupplyBoxWeaponInfoWidget_C.OnDefaultWeaponEventDispatcher__DelegateSignature
inline void UUW-PersonalSupplyBoxWeaponInfoWidget_C::OnDefaultWeaponEventDispatcher__DelegateSignature(struct Unknown Weapon) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PersonalSupplyBoxWeaponInfoWidget.UW-PersonalSupplyBoxWeaponInfoWidget_C.OnDefaultWeaponEventDispatcher__DelegateSignature");

	struct OnDefaultWeaponEventDispatcher__DelegateSignature_Params {
		struct Unknown Weapon;
	}; OnDefaultWeaponEventDispatcher__DelegateSignature_Params Params;

	Params.Weapon = Weapon;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PersonalSupplyBoxWeaponInfoWidget.UW-PersonalSupplyBoxWeaponInfoWidget_C.ShowToolTipEventDispatcher__DelegateSignature
inline void UUW-PersonalSupplyBoxWeaponInfoWidget_C::ShowToolTipEventDispatcher__DelegateSignature(char IsShow, struct Unknown Widget) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PersonalSupplyBoxWeaponInfoWidget.UW-PersonalSupplyBoxWeaponInfoWidget_C.ShowToolTipEventDispatcher__DelegateSignature");

	struct ShowToolTipEventDispatcher__DelegateSignature_Params {
		char IsShow;
		struct Unknown Widget;
	}; ShowToolTipEventDispatcher__DelegateSignature_Params Params;

	Params.IsShow = IsShow;
	Params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PersonalSupplyBoxWeaponInfoWidget.UW-PersonalSupplyBoxWeaponInfoWidget_C.OnDropEventDispatcher__DelegateSignature
inline void UUW-PersonalSupplyBoxWeaponInfoWidget_C::OnDropEventDispatcher__DelegateSignature(struct Unknown WeaponData) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PersonalSupplyBoxWeaponInfoWidget.UW-PersonalSupplyBoxWeaponInfoWidget_C.OnDropEventDispatcher__DelegateSignature");

	struct OnDropEventDispatcher__DelegateSignature_Params {
		struct Unknown WeaponData;
	}; OnDropEventDispatcher__DelegateSignature_Params Params;

	Params.WeaponData = WeaponData;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

