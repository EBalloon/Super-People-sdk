// WidgetBlueprintGeneratedClass UW-Inventory_MaterialSlot.UW-Inventory_MaterialSlot_C
class UUW-Inventory_MaterialSlot_C : public UUW-Inventory_SlotBase_C {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1358 (8)
	struct UWidgetAnimation Anim_LoopHintMaterial; // 0x1360 (8)
	struct UWidgetAnimation Anim_Upgrade; // 0x1368 (8)
	struct UWidgetAnimation P_Upgrade_Arrow; // 0x1370 (8)
	struct UWidgetAnimation C_SlotHover_ItemState_Hide; // 0x1378 (8)
	struct UWidgetAnimation C_SlotHover_ItemState_Show; // 0x1380 (8)
	struct UWidgetAnimation Hover_Gold; // 0x1388 (8)
	struct UWidgetAnimation P_SlotHover; // 0x1390 (8)
	struct UImage BGImage; // 0x1398 (8)
	struct UCanvasPanel CanvasPanel_ITemState; // 0x13A0 (8)
	struct UCanvasPanel CanvasPanel_Unnecessary; // 0x13A8 (8)
	struct UTextBlock Count; // 0x13B0 (8)
	struct UTextBlock Count_Icon; // 0x13B8 (8)
	struct UImage fill; // 0x13C0 (8)
	struct UImage Hint; // 0x13C8 (8)
	struct UImage HoverImage; // 0x13D0 (8)
	struct UImage HoverImage_Gold; // 0x13D8 (8)
	struct UImage Image_1; // 0x13E0 (8)
	struct UImage Image_2; // 0x13E8 (8)
	struct UImage Image_95; // 0x13F0 (8)
	struct UImage ItemImage; // 0x13F8 (8)
	struct UTextBlock ItemNameName; // 0x1400 (8)
	struct UTextBlock ItemState_Text; // 0x1408 (8)
	struct UImage LvColor; // 0x1410 (8)
	struct UImage NeedMaterial; // 0x1418 (8)
	struct UImage OverBG_3; // 0x1420 (8)
	struct UProgressBar ProgressBar_136; // 0x1428 (8)
	struct USizeBox SizeBox_1; // 0x1430 (8)
	struct UImage WeaponItemImage; // 0x1438 (8)
	char bGold : 0; // 0x1440 (1)
	struct UImage SelectedHoverImage; // 0x1448 (8)
	struct FLinearColor MedicalBGColor; // 0x1450 (16)
	struct FMulticastInlineDelegate SetSlotInfo; // 0x1460 (16)
	int32_t SlotIndex; // 0x1470 (4)

	void Get Weapon Infoby Inventory Item Info(char& bResult, struct FBravoHotelWeaponInfo& WeaponInfo); // Function UW-Inventory_MaterialSlot.UW-Inventory_MaterialSlot_C.Get Weapon Infoby Inventory Item Info(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void CanChange(char& Result); // Function UW-Inventory_MaterialSlot.UW-Inventory_MaterialSlot_C.CanChange(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <Game_BE.exe+0x2B80160>
	void DropQuantity(int32_t Quantity); // Function UW-Inventory_MaterialSlot.UW-Inventory_MaterialSlot_C.DropQuantity(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void SetInfo(struct FInventoryItemInfo ItemInfo, int32_t SlotIndex); // Function UW-Inventory_MaterialSlot.UW-Inventory_MaterialSlot_C.SetInfo(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void SetItemRarityColor(enum class EItemRarity CurrentSlot, struct UImage ImageWidget); // Function UW-Inventory_MaterialSlot.UW-Inventory_MaterialSlot_C.SetItemRarityColor(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void MouseEnterImpl(); // Function UW-Inventory_MaterialSlot.UW-Inventory_MaterialSlot_C.MouseEnterImpl(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void SetWeaponImage_Internal(struct UPaperSprite IconTexture); // Function UW-Inventory_MaterialSlot.UW-Inventory_MaterialSlot_C.SetWeaponImage_Internal(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	struct FSlateBrush Set Item Image Internal(struct UPaperSprite IconTexture); // Function UW-Inventory_MaterialSlot.UW-Inventory_MaterialSlot_C.Set Item Image Internal(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void IsDraging(char& bResult); // Function UW-Inventory_MaterialSlot.UW-Inventory_MaterialSlot_C.IsDraging(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <Game_BE.exe+0x2B80160>
	char OnDrop(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation Operation); // Function UW-Inventory_MaterialSlot.UW-Inventory_MaterialSlot_C.OnDrop(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void OnDragDetected(struct FGeometry MyGeometry, struct FPointerEvent& PointerEvent, struct UDragDropOperation& Operation); // Function UW-Inventory_MaterialSlot.UW-Inventory_MaterialSlot_C.OnDragDetected(BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void OnRButtonClick(char& bResult); // Function UW-Inventory_MaterialSlot.UW-Inventory_MaterialSlot_C.OnRButtonClick(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	struct FSlateBrush Set_BGImage_Brush_1(); // Function UW-Inventory_MaterialSlot.UW-Inventory_MaterialSlot_C.Set_BGImage_Brush_1(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	struct FSlateBrush SetItemImage(); // Function UW-Inventory_MaterialSlot.UW-Inventory_MaterialSlot_C.SetItemImage(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void OnLoaded_844D1FE84342B1FFB080F8A6CC651A2C(struct Object Loaded); // Function UW-Inventory_MaterialSlot.UW-Inventory_MaterialSlot_C.OnLoaded_844D1FE84342B1FFB080F8A6CC651A2C(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void Construct(); // Function UW-Inventory_MaterialSlot.UW-Inventory_MaterialSlot_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UW-Inventory_MaterialSlot.UW-Inventory_MaterialSlot_C.OnMouseEnter(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function UW-Inventory_MaterialSlot.UW-Inventory_MaterialSlot_C.OnMouseLeave(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void AsyncLoadIconTexture(struct TSoftObjectPtr<UPaperSprite> IconTexture); // Function UW-Inventory_MaterialSlot.UW-Inventory_MaterialSlot_C.AsyncLoadIconTexture(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UW-Inventory_MaterialSlot.UW-Inventory_MaterialSlot_C.Tick(BlueprintCosmetic|Event|Public|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void OnUpdateCastingDelegateEvent(struct FCastingInfo& CastingInfo, float CastingPercent); // Function UW-Inventory_MaterialSlot.UW-Inventory_MaterialSlot_C.OnUpdateCastingDelegateEvent(HasOutParms|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void Enable(); // Function UW-Inventory_MaterialSlot.UW-Inventory_MaterialSlot_C.Enable(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void Disable(); // Function UW-Inventory_MaterialSlot.UW-Inventory_MaterialSlot_C.Disable(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void CompleteCombine(); // Function UW-Inventory_MaterialSlot.UW-Inventory_MaterialSlot_C.CompleteCombine(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void HoverRecipeTree(); // Function UW-Inventory_MaterialSlot.UW-Inventory_MaterialSlot_C.HoverRecipeTree(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void OnDragEnter(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation Operation); // Function UW-Inventory_MaterialSlot.UW-Inventory_MaterialSlot_C.OnDragEnter(BlueprintCosmetic|Event|Public|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void OnDragLeave(struct FPointerEvent PointerEvent, struct UDragDropOperation Operation); // Function UW-Inventory_MaterialSlot.UW-Inventory_MaterialSlot_C.OnDragLeave(BlueprintCosmetic|Event|Public|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void ExecuteUbergraph_UW-Inventory_MaterialSlot(int32_t EntryPoint); // Function UW-Inventory_MaterialSlot.UW-Inventory_MaterialSlot_C.ExecuteUbergraph_UW-Inventory_MaterialSlot(Final|UbergraphFunction|HasDefaults) // <Game_BE.exe+0x2B80160>
	void SetSlotInfo__DelegateSignature(struct UActor TargetActor, struct FInventoryItemInfo ItemInfo); // Function UW-Inventory_MaterialSlot.UW-Inventory_MaterialSlot_C.SetSlotInfo__DelegateSignature(Public|Delegate|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
};

// Function UW-Inventory_MaterialSlot.UW-Inventory_MaterialSlot_C.Get Weapon Infoby Inventory Item Info
inline void UUW-Inventory_MaterialSlot_C::Get Weapon Infoby Inventory Item Info(char& bResult, struct FBravoHotelWeaponInfo& WeaponInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_MaterialSlot.UW-Inventory_MaterialSlot_C.Get Weapon Infoby Inventory Item Info");

	struct Get Weapon Infoby Inventory Item Info_Params {
		char& bResult;
		struct FBravoHotelWeaponInfo& WeaponInfo;
	}; Get Weapon Infoby Inventory Item Info_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	bResult = Params.bResult;
	WeaponInfo = Params.WeaponInfo;

}

// Function UW-Inventory_MaterialSlot.UW-Inventory_MaterialSlot_C.CanChange
inline void UUW-Inventory_MaterialSlot_C::CanChange(char& Result) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_MaterialSlot.UW-Inventory_MaterialSlot_C.CanChange");

	struct CanChange_Params {
		char& Result;
	}; CanChange_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Result = Params.Result;

}

// Function UW-Inventory_MaterialSlot.UW-Inventory_MaterialSlot_C.DropQuantity
inline void UUW-Inventory_MaterialSlot_C::DropQuantity(int32_t Quantity) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_MaterialSlot.UW-Inventory_MaterialSlot_C.DropQuantity");

	struct DropQuantity_Params {
		int32_t Quantity;
	}; DropQuantity_Params Params;

	Params.Quantity = Quantity;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_MaterialSlot.UW-Inventory_MaterialSlot_C.SetInfo
inline void UUW-Inventory_MaterialSlot_C::SetInfo(struct FInventoryItemInfo ItemInfo, int32_t SlotIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_MaterialSlot.UW-Inventory_MaterialSlot_C.SetInfo");

	struct SetInfo_Params {
		struct FInventoryItemInfo ItemInfo;
		int32_t SlotIndex;
	}; SetInfo_Params Params;

	Params.ItemInfo = ItemInfo;
	Params.SlotIndex = SlotIndex;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_MaterialSlot.UW-Inventory_MaterialSlot_C.SetItemRarityColor
inline void UUW-Inventory_MaterialSlot_C::SetItemRarityColor(enum class EItemRarity CurrentSlot, struct UImage ImageWidget) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_MaterialSlot.UW-Inventory_MaterialSlot_C.SetItemRarityColor");

	struct SetItemRarityColor_Params {
		enum class EItemRarity CurrentSlot;
		struct UImage ImageWidget;
	}; SetItemRarityColor_Params Params;

	Params.CurrentSlot = CurrentSlot;
	Params.ImageWidget = ImageWidget;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_MaterialSlot.UW-Inventory_MaterialSlot_C.MouseEnterImpl
inline void UUW-Inventory_MaterialSlot_C::MouseEnterImpl() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_MaterialSlot.UW-Inventory_MaterialSlot_C.MouseEnterImpl");

	struct MouseEnterImpl_Params {
		
	}; MouseEnterImpl_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_MaterialSlot.UW-Inventory_MaterialSlot_C.SetWeaponImage_Internal
inline void UUW-Inventory_MaterialSlot_C::SetWeaponImage_Internal(struct UPaperSprite IconTexture) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_MaterialSlot.UW-Inventory_MaterialSlot_C.SetWeaponImage_Internal");

	struct SetWeaponImage_Internal_Params {
		struct UPaperSprite IconTexture;
	}; SetWeaponImage_Internal_Params Params;

	Params.IconTexture = IconTexture;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_MaterialSlot.UW-Inventory_MaterialSlot_C.Set Item Image Internal
inline struct FSlateBrush UUW-Inventory_MaterialSlot_C::Set Item Image Internal(struct UPaperSprite IconTexture) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_MaterialSlot.UW-Inventory_MaterialSlot_C.Set Item Image Internal");

	struct Set Item Image Internal_Params {
		struct UPaperSprite IconTexture;
		struct FSlateBrush ReturnValue;

	}; Set Item Image Internal_Params Params;

	Params.IconTexture = IconTexture;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UW-Inventory_MaterialSlot.UW-Inventory_MaterialSlot_C.IsDraging
inline void UUW-Inventory_MaterialSlot_C::IsDraging(char& bResult) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_MaterialSlot.UW-Inventory_MaterialSlot_C.IsDraging");

	struct IsDraging_Params {
		char& bResult;
	}; IsDraging_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	bResult = Params.bResult;

}

// Function UW-Inventory_MaterialSlot.UW-Inventory_MaterialSlot_C.OnDrop
inline char UUW-Inventory_MaterialSlot_C::OnDrop(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation Operation) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_MaterialSlot.UW-Inventory_MaterialSlot_C.OnDrop");

	struct OnDrop_Params {
		struct FGeometry MyGeometry;
		struct FPointerEvent PointerEvent;
		struct UDragDropOperation Operation;
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

// Function UW-Inventory_MaterialSlot.UW-Inventory_MaterialSlot_C.OnDragDetected
inline void UUW-Inventory_MaterialSlot_C::OnDragDetected(struct FGeometry MyGeometry, struct FPointerEvent& PointerEvent, struct UDragDropOperation& Operation) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_MaterialSlot.UW-Inventory_MaterialSlot_C.OnDragDetected");

	struct OnDragDetected_Params {
		struct FGeometry MyGeometry;
		struct FPointerEvent& PointerEvent;
		struct UDragDropOperation& Operation;
	}; OnDragDetected_Params Params;

	Params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	PointerEvent = Params.PointerEvent;
	Operation = Params.Operation;

}

// Function UW-Inventory_MaterialSlot.UW-Inventory_MaterialSlot_C.OnRButtonClick
inline void UUW-Inventory_MaterialSlot_C::OnRButtonClick(char& bResult) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_MaterialSlot.UW-Inventory_MaterialSlot_C.OnRButtonClick");

	struct OnRButtonClick_Params {
		char& bResult;
	}; OnRButtonClick_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	bResult = Params.bResult;

}

// Function UW-Inventory_MaterialSlot.UW-Inventory_MaterialSlot_C.Set_BGImage_Brush_1
inline struct FSlateBrush UUW-Inventory_MaterialSlot_C::Set_BGImage_Brush_1() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_MaterialSlot.UW-Inventory_MaterialSlot_C.Set_BGImage_Brush_1");

	struct Set_BGImage_Brush_1_Params {
		
		struct FSlateBrush ReturnValue;

	}; Set_BGImage_Brush_1_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UW-Inventory_MaterialSlot.UW-Inventory_MaterialSlot_C.SetItemImage
inline struct FSlateBrush UUW-Inventory_MaterialSlot_C::SetItemImage() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_MaterialSlot.UW-Inventory_MaterialSlot_C.SetItemImage");

	struct SetItemImage_Params {
		
		struct FSlateBrush ReturnValue;

	}; SetItemImage_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UW-Inventory_MaterialSlot.UW-Inventory_MaterialSlot_C.OnLoaded_844D1FE84342B1FFB080F8A6CC651A2C
inline void UUW-Inventory_MaterialSlot_C::OnLoaded_844D1FE84342B1FFB080F8A6CC651A2C(struct Object Loaded) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_MaterialSlot.UW-Inventory_MaterialSlot_C.OnLoaded_844D1FE84342B1FFB080F8A6CC651A2C");

	struct OnLoaded_844D1FE84342B1FFB080F8A6CC651A2C_Params {
		struct Object Loaded;
	}; OnLoaded_844D1FE84342B1FFB080F8A6CC651A2C_Params Params;

	Params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_MaterialSlot.UW-Inventory_MaterialSlot_C.Construct
inline void UUW-Inventory_MaterialSlot_C::Construct() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_MaterialSlot.UW-Inventory_MaterialSlot_C.Construct");

	struct Construct_Params {
		
	}; Construct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_MaterialSlot.UW-Inventory_MaterialSlot_C.OnMouseEnter
inline void UUW-Inventory_MaterialSlot_C::OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_MaterialSlot.UW-Inventory_MaterialSlot_C.OnMouseEnter");

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

// Function UW-Inventory_MaterialSlot.UW-Inventory_MaterialSlot_C.OnMouseLeave
inline void UUW-Inventory_MaterialSlot_C::OnMouseLeave(struct FPointerEvent& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_MaterialSlot.UW-Inventory_MaterialSlot_C.OnMouseLeave");

	struct OnMouseLeave_Params {
		struct FPointerEvent& MouseEvent;
	}; OnMouseLeave_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	MouseEvent = Params.MouseEvent;

}

// Function UW-Inventory_MaterialSlot.UW-Inventory_MaterialSlot_C.AsyncLoadIconTexture
inline void UUW-Inventory_MaterialSlot_C::AsyncLoadIconTexture(struct TSoftObjectPtr<UPaperSprite> IconTexture) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_MaterialSlot.UW-Inventory_MaterialSlot_C.AsyncLoadIconTexture");

	struct AsyncLoadIconTexture_Params {
		struct TSoftObjectPtr<UPaperSprite> IconTexture;
	}; AsyncLoadIconTexture_Params Params;

	Params.IconTexture = IconTexture;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_MaterialSlot.UW-Inventory_MaterialSlot_C.Tick
inline void UUW-Inventory_MaterialSlot_C::Tick(struct FGeometry MyGeometry, float InDeltaTime) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_MaterialSlot.UW-Inventory_MaterialSlot_C.Tick");

	struct Tick_Params {
		struct FGeometry MyGeometry;
		float InDeltaTime;
	}; Tick_Params Params;

	Params.MyGeometry = MyGeometry;
	Params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_MaterialSlot.UW-Inventory_MaterialSlot_C.OnUpdateCastingDelegateEvent
inline void UUW-Inventory_MaterialSlot_C::OnUpdateCastingDelegateEvent(struct FCastingInfo& CastingInfo, float CastingPercent) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_MaterialSlot.UW-Inventory_MaterialSlot_C.OnUpdateCastingDelegateEvent");

	struct OnUpdateCastingDelegateEvent_Params {
		struct FCastingInfo& CastingInfo;
		float CastingPercent;
	}; OnUpdateCastingDelegateEvent_Params Params;

	Params.CastingPercent = CastingPercent;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	CastingInfo = Params.CastingInfo;

}

// Function UW-Inventory_MaterialSlot.UW-Inventory_MaterialSlot_C.Enable
inline void UUW-Inventory_MaterialSlot_C::Enable() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_MaterialSlot.UW-Inventory_MaterialSlot_C.Enable");

	struct Enable_Params {
		
	}; Enable_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_MaterialSlot.UW-Inventory_MaterialSlot_C.Disable
inline void UUW-Inventory_MaterialSlot_C::Disable() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_MaterialSlot.UW-Inventory_MaterialSlot_C.Disable");

	struct Disable_Params {
		
	}; Disable_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_MaterialSlot.UW-Inventory_MaterialSlot_C.CompleteCombine
inline void UUW-Inventory_MaterialSlot_C::CompleteCombine() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_MaterialSlot.UW-Inventory_MaterialSlot_C.CompleteCombine");

	struct CompleteCombine_Params {
		
	}; CompleteCombine_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_MaterialSlot.UW-Inventory_MaterialSlot_C.HoverRecipeTree
inline void UUW-Inventory_MaterialSlot_C::HoverRecipeTree() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_MaterialSlot.UW-Inventory_MaterialSlot_C.HoverRecipeTree");

	struct HoverRecipeTree_Params {
		
	}; HoverRecipeTree_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_MaterialSlot.UW-Inventory_MaterialSlot_C.OnDragEnter
inline void UUW-Inventory_MaterialSlot_C::OnDragEnter(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation Operation) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_MaterialSlot.UW-Inventory_MaterialSlot_C.OnDragEnter");

	struct OnDragEnter_Params {
		struct FGeometry MyGeometry;
		struct FPointerEvent PointerEvent;
		struct UDragDropOperation Operation;
	}; OnDragEnter_Params Params;

	Params.MyGeometry = MyGeometry;
	Params.PointerEvent = PointerEvent;
	Params.Operation = Operation;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_MaterialSlot.UW-Inventory_MaterialSlot_C.OnDragLeave
inline void UUW-Inventory_MaterialSlot_C::OnDragLeave(struct FPointerEvent PointerEvent, struct UDragDropOperation Operation) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_MaterialSlot.UW-Inventory_MaterialSlot_C.OnDragLeave");

	struct OnDragLeave_Params {
		struct FPointerEvent PointerEvent;
		struct UDragDropOperation Operation;
	}; OnDragLeave_Params Params;

	Params.PointerEvent = PointerEvent;
	Params.Operation = Operation;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_MaterialSlot.UW-Inventory_MaterialSlot_C.ExecuteUbergraph_UW-Inventory_MaterialSlot
inline void UUW-Inventory_MaterialSlot_C::ExecuteUbergraph_UW-Inventory_MaterialSlot(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_MaterialSlot.UW-Inventory_MaterialSlot_C.ExecuteUbergraph_UW-Inventory_MaterialSlot");

	struct ExecuteUbergraph_UW-Inventory_MaterialSlot_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_UW-Inventory_MaterialSlot_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_MaterialSlot.UW-Inventory_MaterialSlot_C.SetSlotInfo__DelegateSignature
inline void UUW-Inventory_MaterialSlot_C::SetSlotInfo__DelegateSignature(struct UActor TargetActor, struct FInventoryItemInfo ItemInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_MaterialSlot.UW-Inventory_MaterialSlot_C.SetSlotInfo__DelegateSignature");

	struct SetSlotInfo__DelegateSignature_Params {
		struct UActor TargetActor;
		struct FInventoryItemInfo ItemInfo;
	}; SetSlotInfo__DelegateSignature_Params Params;

	Params.TargetActor = TargetActor;
	Params.ItemInfo = ItemInfo;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

