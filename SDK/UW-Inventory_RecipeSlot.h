// WidgetBlueprintGeneratedClass UW-Inventory_RecipeSlot.UW-Inventory_RecipeSlot_C
class UUW-Inventory_RecipeSlot_C : public UUW-Inventory_SlotBase_C {

public:

	struct Unknown UberGraphFrame; // 0x1360 (8)
	struct Unknown Ani_Tutorial_Glow; // 0x1368 (8)
	struct Unknown P_Upgrade_Arrow; // 0x1370 (8)
	struct Unknown C_SlotHover_ItemState_Hide; // 0x1378 (8)
	struct Unknown C_SlotHover_ItemState_Show; // 0x1380 (8)
	struct Unknown Hover_Gold; // 0x1388 (8)
	struct Unknown P_SlotHover; // 0x1390 (8)
	struct Unknown BGImage; // 0x1398 (8)
	struct Unknown CanvasPanel_ITemState; // 0x13A0 (8)
	struct Unknown Count; // 0x13A8 (8)
	struct Unknown Effect_Craft; // 0x13B0 (8)
	struct Unknown HorizontalBox_Rarity; // 0x13B8 (8)
	struct Unknown HoverImage; // 0x13C0 (8)
	struct Unknown HoverImage_Gold; // 0x13C8 (8)
	struct Unknown IconRepair; // 0x13D0 (8)
	struct Unknown Image_1; // 0x13D8 (8)
	struct Unknown Image_2; // 0x13E0 (8)
	struct Unknown Image_222; // 0x13E8 (8)
	struct Unknown ItemImage; // 0x13F0 (8)
	struct Unknown ItemNameName; // 0x13F8 (8)
	struct Unknown ItemState_Text; // 0x1400 (8)
	struct Unknown NeedMaterial; // 0x1408 (8)
	struct Unknown Overlay_Key; // 0x1410 (8)
	struct Unknown ProgressBar_475; // 0x1418 (8)
	struct Unknown SizeBox_1; // 0x1420 (8)
	struct Unknown TextBlock_ShortCut; // 0x1428 (8)
	struct Unknown Tutorial_Glow; // 0x1430 (8)
	struct Unknown UW-MouseRightClick_Big; // 0x1438 (8)
	struct Unknown UW-MouseRightClick_Small; // 0x1440 (8)
	struct Unknown WeaponItemImage; // 0x1448 (8)
	char bGold : 0; // 0x1450 (1)
	struct Unknown SelectedHoverImage; // 0x1458 (8)
	struct Unknown MedicalBGColor; // 0x1460 (16)
	struct FMulticastInlineDelegate SetSlotInfo; // 0x1470 (16)
	int32_t SlotIndex; // 0x1480 (4)
	struct FName RecipeKey; // 0x1484 (8)
	struct Unknown RecipeData; // 0x1490 (56)
	char bLeftClicked : 0; // 0x14C8 (1)
	char CanCraft : 0; // 0x14C9 (1)

	void Get Weapon Infoby Inventory Item Info(char& bResult, struct Unknown& WeaponInfo); // Function UW-Inventory_RecipeSlot.UW-Inventory_RecipeSlot_C.Get Weapon Infoby Inventory Item Info(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void GetKeyNameFromKey(struct Unknown& Key, struct FString& Name, char& bRet); // Function UW-Inventory_RecipeSlot.UW-Inventory_RecipeSlot_C.GetKeyNameFromKey(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void SetKeyText(); // Function UW-Inventory_RecipeSlot.UW-Inventory_RecipeSlot_C.SetKeyText(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void SetRightClickBig(); // Function UW-Inventory_RecipeSlot.UW-Inventory_RecipeSlot_C.SetRightClickBig(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void SetRightClickSmall(char IsVisible); // Function UW-Inventory_RecipeSlot.UW-Inventory_RecipeSlot_C.SetRightClickSmall(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	struct Unknown OnMouseButtonDown(struct Unknown MyGeometry, struct Unknown& MouseEvent); // Function UW-Inventory_RecipeSlot.UW-Inventory_RecipeSlot_C.OnMouseButtonDown(BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	struct Unknown OnMouseButtonUp(struct Unknown MyGeometry, struct Unknown& MouseEvent); // Function UW-Inventory_RecipeSlot.UW-Inventory_RecipeSlot_C.OnMouseButtonUp(BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void SetInfo(struct FName RecipeKey, int32_t SlotIndex); // Function UW-Inventory_RecipeSlot.UW-Inventory_RecipeSlot_C.SetInfo(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void SetItemRarityColor(enum class Unknow CurrentSlot, struct Unknown ImageWidget); // Function UW-Inventory_RecipeSlot.UW-Inventory_RecipeSlot_C.SetItemRarityColor(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void MouseEnterImpl(); // Function UW-Inventory_RecipeSlot.UW-Inventory_RecipeSlot_C.MouseEnterImpl(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void SetWeaponImage_Internal(struct Unknown IconTexture); // Function UW-Inventory_RecipeSlot.UW-Inventory_RecipeSlot_C.SetWeaponImage_Internal(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	struct Unknown Set Item Image Internal(struct Unknown IconTexture); // Function UW-Inventory_RecipeSlot.UW-Inventory_RecipeSlot_C.Set Item Image Internal(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void IsDraging(char& bResult); // Function UW-Inventory_RecipeSlot.UW-Inventory_RecipeSlot_C.IsDraging(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	char OnDrop(struct Unknown MyGeometry, struct Unknown PointerEvent, struct Unknown Operation); // Function UW-Inventory_RecipeSlot.UW-Inventory_RecipeSlot_C.OnDrop(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void OnDragDetected(struct Unknown MyGeometry, struct Unknown& PointerEvent, struct Unknown& Operation); // Function UW-Inventory_RecipeSlot.UW-Inventory_RecipeSlot_C.OnDragDetected(BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void OnRButtonClick(char& bResult); // Function UW-Inventory_RecipeSlot.UW-Inventory_RecipeSlot_C.OnRButtonClick(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	struct Unknown Set_BGImage_Brush_1(); // Function UW-Inventory_RecipeSlot.UW-Inventory_RecipeSlot_C.Set_BGImage_Brush_1(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	struct Unknown SetItemImage(); // Function UW-Inventory_RecipeSlot.UW-Inventory_RecipeSlot_C.SetItemImage(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void OnLoaded_DABF06DE406801A7910E4CB19855F653(struct Unknown Loaded); // Function UW-Inventory_RecipeSlot.UW-Inventory_RecipeSlot_C.OnLoaded_DABF06DE406801A7910E4CB19855F653(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void OnMouseEnter(struct Unknown MyGeometry, struct Unknown& MouseEvent); // Function UW-Inventory_RecipeSlot.UW-Inventory_RecipeSlot_C.OnMouseEnter(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Construct(); // Function UW-Inventory_RecipeSlot.UW-Inventory_RecipeSlot_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void OnMouseLeave(struct Unknown& MouseEvent); // Function UW-Inventory_RecipeSlot.UW-Inventory_RecipeSlot_C.OnMouseLeave(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void AsyncLoadIconTexture(struct Unknown IconTexture); // Function UW-Inventory_RecipeSlot.UW-Inventory_RecipeSlot_C.AsyncLoadIconTexture(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Tick(struct Unknown MyGeometry, float InDeltaTime); // Function UW-Inventory_RecipeSlot.UW-Inventory_RecipeSlot_C.Tick(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void OnUpdateCastingDelegateEvent(struct Unknown& CastingInfo, float CastingPercent); // Function UW-Inventory_RecipeSlot.UW-Inventory_RecipeSlot_C.OnUpdateCastingDelegateEvent(HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void ExecuteUbergraph_UW-Inventory_RecipeSlot(int32_t EntryPoint); // Function UW-Inventory_RecipeSlot.UW-Inventory_RecipeSlot_C.ExecuteUbergraph_UW-Inventory_RecipeSlot(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void SetSlotInfo__DelegateSignature(struct Unknown TargetActor, struct Unknown ItemInfo); // Function UW-Inventory_RecipeSlot.UW-Inventory_RecipeSlot_C.SetSlotInfo__DelegateSignature(Public|Delegate|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
};

// Function UW-Inventory_RecipeSlot.UW-Inventory_RecipeSlot_C.Get Weapon Infoby Inventory Item Info
inline void UUW-Inventory_RecipeSlot_C::Get Weapon Infoby Inventory Item Info(char& bResult, struct Unknown& WeaponInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_RecipeSlot.UW-Inventory_RecipeSlot_C.Get Weapon Infoby Inventory Item Info");

	struct Get Weapon Infoby Inventory Item Info_Params {
		char& bResult;
		struct Unknown& WeaponInfo;
	}; Get Weapon Infoby Inventory Item Info_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	bResult = Params.bResult;
	WeaponInfo = Params.WeaponInfo;

}

// Function UW-Inventory_RecipeSlot.UW-Inventory_RecipeSlot_C.GetKeyNameFromKey
inline void UUW-Inventory_RecipeSlot_C::GetKeyNameFromKey(struct Unknown& Key, struct FString& Name, char& bRet) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_RecipeSlot.UW-Inventory_RecipeSlot_C.GetKeyNameFromKey");

	struct GetKeyNameFromKey_Params {
		struct Unknown& Key;
		struct FString& Name;
		char& bRet;
	}; GetKeyNameFromKey_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Key = Params.Key;
	Name = Params.Name;
	bRet = Params.bRet;

}

// Function UW-Inventory_RecipeSlot.UW-Inventory_RecipeSlot_C.SetKeyText
inline void UUW-Inventory_RecipeSlot_C::SetKeyText() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_RecipeSlot.UW-Inventory_RecipeSlot_C.SetKeyText");

	struct SetKeyText_Params {
		
	}; SetKeyText_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_RecipeSlot.UW-Inventory_RecipeSlot_C.SetRightClickBig
inline void UUW-Inventory_RecipeSlot_C::SetRightClickBig() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_RecipeSlot.UW-Inventory_RecipeSlot_C.SetRightClickBig");

	struct SetRightClickBig_Params {
		
	}; SetRightClickBig_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_RecipeSlot.UW-Inventory_RecipeSlot_C.SetRightClickSmall
inline void UUW-Inventory_RecipeSlot_C::SetRightClickSmall(char IsVisible) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_RecipeSlot.UW-Inventory_RecipeSlot_C.SetRightClickSmall");

	struct SetRightClickSmall_Params {
		char IsVisible;
	}; SetRightClickSmall_Params Params;

	Params.IsVisible = IsVisible;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_RecipeSlot.UW-Inventory_RecipeSlot_C.OnMouseButtonDown
inline struct Unknown UUW-Inventory_RecipeSlot_C::OnMouseButtonDown(struct Unknown MyGeometry, struct Unknown& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_RecipeSlot.UW-Inventory_RecipeSlot_C.OnMouseButtonDown");

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

// Function UW-Inventory_RecipeSlot.UW-Inventory_RecipeSlot_C.OnMouseButtonUp
inline struct Unknown UUW-Inventory_RecipeSlot_C::OnMouseButtonUp(struct Unknown MyGeometry, struct Unknown& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_RecipeSlot.UW-Inventory_RecipeSlot_C.OnMouseButtonUp");

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

// Function UW-Inventory_RecipeSlot.UW-Inventory_RecipeSlot_C.SetInfo
inline void UUW-Inventory_RecipeSlot_C::SetInfo(struct FName RecipeKey, int32_t SlotIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_RecipeSlot.UW-Inventory_RecipeSlot_C.SetInfo");

	struct SetInfo_Params {
		struct FName RecipeKey;
		int32_t SlotIndex;
	}; SetInfo_Params Params;

	Params.RecipeKey = RecipeKey;
	Params.SlotIndex = SlotIndex;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_RecipeSlot.UW-Inventory_RecipeSlot_C.SetItemRarityColor
inline void UUW-Inventory_RecipeSlot_C::SetItemRarityColor(enum class Unknow CurrentSlot, struct Unknown ImageWidget) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_RecipeSlot.UW-Inventory_RecipeSlot_C.SetItemRarityColor");

	struct SetItemRarityColor_Params {
		enum class Unknow CurrentSlot;
		struct Unknown ImageWidget;
	}; SetItemRarityColor_Params Params;

	Params.CurrentSlot = CurrentSlot;
	Params.ImageWidget = ImageWidget;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_RecipeSlot.UW-Inventory_RecipeSlot_C.MouseEnterImpl
inline void UUW-Inventory_RecipeSlot_C::MouseEnterImpl() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_RecipeSlot.UW-Inventory_RecipeSlot_C.MouseEnterImpl");

	struct MouseEnterImpl_Params {
		
	}; MouseEnterImpl_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_RecipeSlot.UW-Inventory_RecipeSlot_C.SetWeaponImage_Internal
inline void UUW-Inventory_RecipeSlot_C::SetWeaponImage_Internal(struct Unknown IconTexture) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_RecipeSlot.UW-Inventory_RecipeSlot_C.SetWeaponImage_Internal");

	struct SetWeaponImage_Internal_Params {
		struct Unknown IconTexture;
	}; SetWeaponImage_Internal_Params Params;

	Params.IconTexture = IconTexture;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_RecipeSlot.UW-Inventory_RecipeSlot_C.Set Item Image Internal
inline struct Unknown UUW-Inventory_RecipeSlot_C::Set Item Image Internal(struct Unknown IconTexture) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_RecipeSlot.UW-Inventory_RecipeSlot_C.Set Item Image Internal");

	struct Set Item Image Internal_Params {
		struct Unknown IconTexture;
		struct Unknown ReturnValue;

	}; Set Item Image Internal_Params Params;

	Params.IconTexture = IconTexture;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UW-Inventory_RecipeSlot.UW-Inventory_RecipeSlot_C.IsDraging
inline void UUW-Inventory_RecipeSlot_C::IsDraging(char& bResult) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_RecipeSlot.UW-Inventory_RecipeSlot_C.IsDraging");

	struct IsDraging_Params {
		char& bResult;
	}; IsDraging_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	bResult = Params.bResult;

}

// Function UW-Inventory_RecipeSlot.UW-Inventory_RecipeSlot_C.OnDrop
inline char UUW-Inventory_RecipeSlot_C::OnDrop(struct Unknown MyGeometry, struct Unknown PointerEvent, struct Unknown Operation) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_RecipeSlot.UW-Inventory_RecipeSlot_C.OnDrop");

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

// Function UW-Inventory_RecipeSlot.UW-Inventory_RecipeSlot_C.OnDragDetected
inline void UUW-Inventory_RecipeSlot_C::OnDragDetected(struct Unknown MyGeometry, struct Unknown& PointerEvent, struct Unknown& Operation) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_RecipeSlot.UW-Inventory_RecipeSlot_C.OnDragDetected");

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

// Function UW-Inventory_RecipeSlot.UW-Inventory_RecipeSlot_C.OnRButtonClick
inline void UUW-Inventory_RecipeSlot_C::OnRButtonClick(char& bResult) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_RecipeSlot.UW-Inventory_RecipeSlot_C.OnRButtonClick");

	struct OnRButtonClick_Params {
		char& bResult;
	}; OnRButtonClick_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	bResult = Params.bResult;

}

// Function UW-Inventory_RecipeSlot.UW-Inventory_RecipeSlot_C.Set_BGImage_Brush_1
inline struct Unknown UUW-Inventory_RecipeSlot_C::Set_BGImage_Brush_1() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_RecipeSlot.UW-Inventory_RecipeSlot_C.Set_BGImage_Brush_1");

	struct Set_BGImage_Brush_1_Params {
		
		struct Unknown ReturnValue;

	}; Set_BGImage_Brush_1_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UW-Inventory_RecipeSlot.UW-Inventory_RecipeSlot_C.SetItemImage
inline struct Unknown UUW-Inventory_RecipeSlot_C::SetItemImage() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_RecipeSlot.UW-Inventory_RecipeSlot_C.SetItemImage");

	struct SetItemImage_Params {
		
		struct Unknown ReturnValue;

	}; SetItemImage_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UW-Inventory_RecipeSlot.UW-Inventory_RecipeSlot_C.OnLoaded_DABF06DE406801A7910E4CB19855F653
inline void UUW-Inventory_RecipeSlot_C::OnLoaded_DABF06DE406801A7910E4CB19855F653(struct Unknown Loaded) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_RecipeSlot.UW-Inventory_RecipeSlot_C.OnLoaded_DABF06DE406801A7910E4CB19855F653");

	struct OnLoaded_DABF06DE406801A7910E4CB19855F653_Params {
		struct Unknown Loaded;
	}; OnLoaded_DABF06DE406801A7910E4CB19855F653_Params Params;

	Params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_RecipeSlot.UW-Inventory_RecipeSlot_C.OnMouseEnter
inline void UUW-Inventory_RecipeSlot_C::OnMouseEnter(struct Unknown MyGeometry, struct Unknown& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_RecipeSlot.UW-Inventory_RecipeSlot_C.OnMouseEnter");

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

// Function UW-Inventory_RecipeSlot.UW-Inventory_RecipeSlot_C.Construct
inline void UUW-Inventory_RecipeSlot_C::Construct() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_RecipeSlot.UW-Inventory_RecipeSlot_C.Construct");

	struct Construct_Params {
		
	}; Construct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_RecipeSlot.UW-Inventory_RecipeSlot_C.OnMouseLeave
inline void UUW-Inventory_RecipeSlot_C::OnMouseLeave(struct Unknown& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_RecipeSlot.UW-Inventory_RecipeSlot_C.OnMouseLeave");

	struct OnMouseLeave_Params {
		struct Unknown& MouseEvent;
	}; OnMouseLeave_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	MouseEvent = Params.MouseEvent;

}

// Function UW-Inventory_RecipeSlot.UW-Inventory_RecipeSlot_C.AsyncLoadIconTexture
inline void UUW-Inventory_RecipeSlot_C::AsyncLoadIconTexture(struct Unknown IconTexture) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_RecipeSlot.UW-Inventory_RecipeSlot_C.AsyncLoadIconTexture");

	struct AsyncLoadIconTexture_Params {
		struct Unknown IconTexture;
	}; AsyncLoadIconTexture_Params Params;

	Params.IconTexture = IconTexture;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_RecipeSlot.UW-Inventory_RecipeSlot_C.Tick
inline void UUW-Inventory_RecipeSlot_C::Tick(struct Unknown MyGeometry, float InDeltaTime) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_RecipeSlot.UW-Inventory_RecipeSlot_C.Tick");

	struct Tick_Params {
		struct Unknown MyGeometry;
		float InDeltaTime;
	}; Tick_Params Params;

	Params.MyGeometry = MyGeometry;
	Params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_RecipeSlot.UW-Inventory_RecipeSlot_C.OnUpdateCastingDelegateEvent
inline void UUW-Inventory_RecipeSlot_C::OnUpdateCastingDelegateEvent(struct Unknown& CastingInfo, float CastingPercent) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_RecipeSlot.UW-Inventory_RecipeSlot_C.OnUpdateCastingDelegateEvent");

	struct OnUpdateCastingDelegateEvent_Params {
		struct Unknown& CastingInfo;
		float CastingPercent;
	}; OnUpdateCastingDelegateEvent_Params Params;

	Params.CastingPercent = CastingPercent;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	CastingInfo = Params.CastingInfo;

}

// Function UW-Inventory_RecipeSlot.UW-Inventory_RecipeSlot_C.ExecuteUbergraph_UW-Inventory_RecipeSlot
inline void UUW-Inventory_RecipeSlot_C::ExecuteUbergraph_UW-Inventory_RecipeSlot(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_RecipeSlot.UW-Inventory_RecipeSlot_C.ExecuteUbergraph_UW-Inventory_RecipeSlot");

	struct ExecuteUbergraph_UW-Inventory_RecipeSlot_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_UW-Inventory_RecipeSlot_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_RecipeSlot.UW-Inventory_RecipeSlot_C.SetSlotInfo__DelegateSignature
inline void UUW-Inventory_RecipeSlot_C::SetSlotInfo__DelegateSignature(struct Unknown TargetActor, struct Unknown ItemInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_RecipeSlot.UW-Inventory_RecipeSlot_C.SetSlotInfo__DelegateSignature");

	struct SetSlotInfo__DelegateSignature_Params {
		struct Unknown TargetActor;
		struct Unknown ItemInfo;
	}; SetSlotInfo__DelegateSignature_Params Params;

	Params.TargetActor = TargetActor;
	Params.ItemInfo = ItemInfo;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

