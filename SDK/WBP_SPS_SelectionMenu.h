// WidgetBlueprintGeneratedClass WBP_SPS_SelectionMenu.WBP_SPS_SelectionMenu_C
class UWBP_SPS_SelectionMenu_C : public UUserWidget {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248 (8)
	struct UCanvasPanel Canvas; // 0x250 (8)
	struct UImage CenterCursor; // 0x258 (8)
	struct UTextBlock DisplayText; // 0x260 (8)
	struct UImage Image; // 0x268 (8)
	struct UImage Image_2; // 0x270 (8)
	struct UImage Image_3; // 0x278 (8)
	struct UImage Image_4; // 0x280 (8)
	struct UImage Image_5; // 0x288 (8)
	struct UImage Image_6; // 0x290 (8)
	struct UImage Image_7; // 0x298 (8)
	struct UImage Image_274; // 0x2A0 (8)
	struct UTextBlock Message0; // 0x2A8 (8)
	struct UTextBlock Message2; // 0x2B0 (8)
	struct UTextBlock Message3; // 0x2B8 (8)
	struct UTextBlock Message3_1; // 0x2C0 (8)
	struct UTextBlock Message3_2; // 0x2C8 (8)
	struct UTextBlock Message3_3; // 0x2D0 (8)
	struct UTextBlock Message3_4; // 0x2D8 (8)
	struct UTextBlock Message3_5; // 0x2E0 (8)
	struct UTextBlock Message3_6; // 0x2E8 (8)
	struct UTextBlock Message3_7; // 0x2F0 (8)
	struct UTextBlock Message3_8; // 0x2F8 (8)
	struct UTextBlock Message4; // 0x300 (8)
	struct UTextBlock Message5; // 0x308 (8)
	struct UTextBlock Message6; // 0x310 (8)
	struct UTextBlock Message7; // 0x318 (8)
	struct UTextBlock Messgae1; // 0x320 (8)
	struct UImage Over1; // 0x328 (8)
	struct UImage Over2; // 0x330 (8)
	struct UImage Over3; // 0x338 (8)
	struct UImage Over4; // 0x340 (8)
	struct UImage Over5; // 0x348 (8)
	struct UImage Over6; // 0x350 (8)
	struct UImage Over7; // 0x358 (8)
	struct UImage Over8; // 0x360 (8)
	struct UWBP_SPS_SelectionIcon_C Slot0; // 0x368 (8)
	struct UWBP_SPS_SelectionIcon_C Slot1; // 0x370 (8)
	struct UWBP_SPS_SelectionIcon_C Slot2; // 0x378 (8)
	struct UWBP_SPS_SelectionIcon_C Slot3; // 0x380 (8)
	struct UWBP_SPS_SelectionIcon_C Slot4; // 0x388 (8)
	struct UWBP_SPS_SelectionIcon_C Slot5; // 0x390 (8)
	struct UWBP_SPS_SelectionIcon_C Slot6; // 0x398 (8)
	struct UWBP_SPS_SelectionIcon_C Slot7; // 0x3A0 (8)
	struct UTextBlock Type; // 0x3A8 (8)
	struct UUW-PlayerMarkerWidget_C UW-PlayerMarkerWidget; // 0x3B0 (8)
	struct UWidgetSwitcher WidgetSwitcher_133; // 0x3B8 (8)
	struct TArray<struct UWBP_SPS_SelectionIcon_C> SelectionWidgets; // 0x3C0 (16)
	struct FVector2D MenuCenter; // 0x3D0 (8)
	struct FVector ReferenceVector; // 0x3D8 (12)
	struct FMulticastInlineDelegate Selected; // 0x3E8 (16)
	struct USmartPingSystem_C SmartPingComponent; // 0x3F8 (8)
	struct UMaterialInstanceDynamic RadialMenuMaterial; // 0x400 (8)
	int32_t SelectedIndex; // 0x408 (4)
	int32_t StartIndex; // 0x40C (4)
	float AngleSize; // 0x410 (4)
	float DistanceFromCenter; // 0x414 (4)
	int32_t Divisions; // 0x418 (4)
	float SelectionToleranceFromCenter; // 0x41C (4)
	struct FMulticastInlineDelegate Hovered; // 0x420 (16)
	struct FMulticastInlineDelegate ClearPing; // 0x430 (16)
	char IsPingType : 0; // 0x440 (1)
	char Enable RequestMessage : 0; // 0x441 (1)

	void GetRequestTextFromIndex(int32_t Index, struct UTextBlock& Text); // Function WBP_SPS_SelectionMenu.WBP_SPS_SelectionMenu_C.GetRequestTextFromIndex(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void Get Icon from Index(int32_t Index, struct UWBP_SPS_SelectionIcon_C& Icon); // Function WBP_SPS_SelectionMenu.WBP_SPS_SelectionMenu_C.Get Icon from Index(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void MakeSmartpingInfo(); // Function WBP_SPS_SelectionMenu.WBP_SPS_SelectionMenu_C.MakeSmartpingInfo(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function WBP_SPS_SelectionMenu.WBP_SPS_SelectionMenu_C.OnMouseButtonDown(BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	struct FEventReply OnMouseButtonUp(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function WBP_SPS_SelectionMenu.WBP_SPS_SelectionMenu_C.OnMouseButtonUp(BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void SetVisibleOverImage(int32_t SelectIndex, enum class ESlateVisibility VisibleType); // Function WBP_SPS_SelectionMenu.WBP_SPS_SelectionMenu_C.SetVisibleOverImage(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void SetActiveSelection(int32_t Index); // Function WBP_SPS_SelectionMenu.WBP_SPS_SelectionMenu_C.SetActiveSelection(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void ClearActiveSelection(); // Function WBP_SPS_SelectionMenu.WBP_SPS_SelectionMenu_C.ClearActiveSelection(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void CancelSelection(); // Function WBP_SPS_SelectionMenu.WBP_SPS_SelectionMenu_C.CancelSelection(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void ConfirmSelection(); // Function WBP_SPS_SelectionMenu.WBP_SPS_SelectionMenu_C.ConfirmSelection(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	int32_t CalculateSelectionIndexFromVector(struct FVector InputVector); // Function WBP_SPS_SelectionMenu.WBP_SPS_SelectionMenu_C.CalculateSelectionIndexFromVector(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	struct FEventReply OnMouseMove(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function WBP_SPS_SelectionMenu.WBP_SPS_SelectionMenu_C.OnMouseMove(BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void Construct(); // Function WBP_SPS_SelectionMenu.WBP_SPS_SelectionMenu_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void Destruct(); // Function WBP_SPS_SelectionMenu.WBP_SPS_SelectionMenu_C.Destruct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void ConstructMenuElements(); // Function WBP_SPS_SelectionMenu.WBP_SPS_SelectionMenu_C.ConstructMenuElements(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void SetSelectedIndex(int32_t SelectedIndex); // Function WBP_SPS_SelectionMenu.WBP_SPS_SelectionMenu_C.SetSelectedIndex(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void ??@t??_1(int32_t Index, struct FBravoHotelSmartPingIconSettings Settings); // Function WBP_SPS_SelectionMenu.WBP_SPS_SelectionMenu_C.??@t??_1(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void TogglePingType(char NewIsPingType); // Function WBP_SPS_SelectionMenu.WBP_SPS_SelectionMenu_C.TogglePingType(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void ExecuteUbergraph_WBP_SPS_SelectionMenu(int32_t EntryPoint); // Function WBP_SPS_SelectionMenu.WBP_SPS_SelectionMenu_C.ExecuteUbergraph_WBP_SPS_SelectionMenu(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void ClearPing__DelegateSignature(); // Function WBP_SPS_SelectionMenu.WBP_SPS_SelectionMenu_C.ClearPing__DelegateSignature(Public|Delegate|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void Hovered__DelegateSignature(struct FBravoHotelSmartPingIconSettings Settings, char IsPingType); // Function WBP_SPS_SelectionMenu.WBP_SPS_SelectionMenu_C.Hovered__DelegateSignature(Public|Delegate|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void Selected__DelegateSignature(struct FBravoHotelSmartPingIconSettings Selected, struct FName ID, char IsPingType, int32_t RequestMessageIndex); // Function WBP_SPS_SelectionMenu.WBP_SPS_SelectionMenu_C.Selected__DelegateSignature(Public|Delegate|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
};

// Function WBP_SPS_SelectionMenu.WBP_SPS_SelectionMenu_C.GetRequestTextFromIndex
inline void UWBP_SPS_SelectionMenu_C::GetRequestTextFromIndex(int32_t Index, struct UTextBlock& Text) {
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SPS_SelectionMenu.WBP_SPS_SelectionMenu_C.GetRequestTextFromIndex");

	struct GetRequestTextFromIndex_Params {
		int32_t Index;
		struct UTextBlock& Text;
	}; GetRequestTextFromIndex_Params Params;

	Params.Index = Index;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Text = Params.Text;

}

// Function WBP_SPS_SelectionMenu.WBP_SPS_SelectionMenu_C.Get Icon from Index
inline void UWBP_SPS_SelectionMenu_C::Get Icon from Index(int32_t Index, struct UWBP_SPS_SelectionIcon_C& Icon) {
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SPS_SelectionMenu.WBP_SPS_SelectionMenu_C.Get Icon from Index");

	struct Get Icon from Index_Params {
		int32_t Index;
		struct UWBP_SPS_SelectionIcon_C& Icon;
	}; Get Icon from Index_Params Params;

	Params.Index = Index;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Icon = Params.Icon;

}

// Function WBP_SPS_SelectionMenu.WBP_SPS_SelectionMenu_C.MakeSmartpingInfo
inline void UWBP_SPS_SelectionMenu_C::MakeSmartpingInfo() {
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SPS_SelectionMenu.WBP_SPS_SelectionMenu_C.MakeSmartpingInfo");

	struct MakeSmartpingInfo_Params {
		
	}; MakeSmartpingInfo_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function WBP_SPS_SelectionMenu.WBP_SPS_SelectionMenu_C.OnMouseButtonDown
inline struct FEventReply UWBP_SPS_SelectionMenu_C::OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SPS_SelectionMenu.WBP_SPS_SelectionMenu_C.OnMouseButtonDown");

	struct OnMouseButtonDown_Params {
		struct FGeometry MyGeometry;
		struct FPointerEvent& MouseEvent;
		struct FEventReply ReturnValue;

	}; OnMouseButtonDown_Params Params;

	Params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	MouseEvent = Params.MouseEvent;


	return params.ReturnValue;
}

// Function WBP_SPS_SelectionMenu.WBP_SPS_SelectionMenu_C.OnMouseButtonUp
inline struct FEventReply UWBP_SPS_SelectionMenu_C::OnMouseButtonUp(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SPS_SelectionMenu.WBP_SPS_SelectionMenu_C.OnMouseButtonUp");

	struct OnMouseButtonUp_Params {
		struct FGeometry MyGeometry;
		struct FPointerEvent& MouseEvent;
		struct FEventReply ReturnValue;

	}; OnMouseButtonUp_Params Params;

	Params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	MouseEvent = Params.MouseEvent;


	return params.ReturnValue;
}

// Function WBP_SPS_SelectionMenu.WBP_SPS_SelectionMenu_C.SetVisibleOverImage
inline void UWBP_SPS_SelectionMenu_C::SetVisibleOverImage(int32_t SelectIndex, enum class ESlateVisibility VisibleType) {
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SPS_SelectionMenu.WBP_SPS_SelectionMenu_C.SetVisibleOverImage");

	struct SetVisibleOverImage_Params {
		int32_t SelectIndex;
		enum class ESlateVisibility VisibleType;
	}; SetVisibleOverImage_Params Params;

	Params.SelectIndex = SelectIndex;
	Params.VisibleType = VisibleType;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function WBP_SPS_SelectionMenu.WBP_SPS_SelectionMenu_C.SetActiveSelection
inline void UWBP_SPS_SelectionMenu_C::SetActiveSelection(int32_t Index) {
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SPS_SelectionMenu.WBP_SPS_SelectionMenu_C.SetActiveSelection");

	struct SetActiveSelection_Params {
		int32_t Index;
	}; SetActiveSelection_Params Params;

	Params.Index = Index;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function WBP_SPS_SelectionMenu.WBP_SPS_SelectionMenu_C.ClearActiveSelection
inline void UWBP_SPS_SelectionMenu_C::ClearActiveSelection() {
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SPS_SelectionMenu.WBP_SPS_SelectionMenu_C.ClearActiveSelection");

	struct ClearActiveSelection_Params {
		
	}; ClearActiveSelection_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function WBP_SPS_SelectionMenu.WBP_SPS_SelectionMenu_C.CancelSelection
inline void UWBP_SPS_SelectionMenu_C::CancelSelection() {
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SPS_SelectionMenu.WBP_SPS_SelectionMenu_C.CancelSelection");

	struct CancelSelection_Params {
		
	}; CancelSelection_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function WBP_SPS_SelectionMenu.WBP_SPS_SelectionMenu_C.ConfirmSelection
inline void UWBP_SPS_SelectionMenu_C::ConfirmSelection() {
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SPS_SelectionMenu.WBP_SPS_SelectionMenu_C.ConfirmSelection");

	struct ConfirmSelection_Params {
		
	}; ConfirmSelection_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function WBP_SPS_SelectionMenu.WBP_SPS_SelectionMenu_C.CalculateSelectionIndexFromVector
inline int32_t UWBP_SPS_SelectionMenu_C::CalculateSelectionIndexFromVector(struct FVector InputVector) {
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SPS_SelectionMenu.WBP_SPS_SelectionMenu_C.CalculateSelectionIndexFromVector");

	struct CalculateSelectionIndexFromVector_Params {
		struct FVector InputVector;
		int32_t ReturnValue;

	}; CalculateSelectionIndexFromVector_Params Params;

	Params.InputVector = InputVector;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function WBP_SPS_SelectionMenu.WBP_SPS_SelectionMenu_C.OnMouseMove
inline struct FEventReply UWBP_SPS_SelectionMenu_C::OnMouseMove(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SPS_SelectionMenu.WBP_SPS_SelectionMenu_C.OnMouseMove");

	struct OnMouseMove_Params {
		struct FGeometry MyGeometry;
		struct FPointerEvent& MouseEvent;
		struct FEventReply ReturnValue;

	}; OnMouseMove_Params Params;

	Params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	MouseEvent = Params.MouseEvent;


	return params.ReturnValue;
}

// Function WBP_SPS_SelectionMenu.WBP_SPS_SelectionMenu_C.Construct
inline void UWBP_SPS_SelectionMenu_C::Construct() {
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SPS_SelectionMenu.WBP_SPS_SelectionMenu_C.Construct");

	struct Construct_Params {
		
	}; Construct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function WBP_SPS_SelectionMenu.WBP_SPS_SelectionMenu_C.Destruct
inline void UWBP_SPS_SelectionMenu_C::Destruct() {
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SPS_SelectionMenu.WBP_SPS_SelectionMenu_C.Destruct");

	struct Destruct_Params {
		
	}; Destruct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function WBP_SPS_SelectionMenu.WBP_SPS_SelectionMenu_C.ConstructMenuElements
inline void UWBP_SPS_SelectionMenu_C::ConstructMenuElements() {
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SPS_SelectionMenu.WBP_SPS_SelectionMenu_C.ConstructMenuElements");

	struct ConstructMenuElements_Params {
		
	}; ConstructMenuElements_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function WBP_SPS_SelectionMenu.WBP_SPS_SelectionMenu_C.SetSelectedIndex
inline void UWBP_SPS_SelectionMenu_C::SetSelectedIndex(int32_t SelectedIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SPS_SelectionMenu.WBP_SPS_SelectionMenu_C.SetSelectedIndex");

	struct SetSelectedIndex_Params {
		int32_t SelectedIndex;
	}; SetSelectedIndex_Params Params;

	Params.SelectedIndex = SelectedIndex;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function WBP_SPS_SelectionMenu.WBP_SPS_SelectionMenu_C.??@t??_1
inline void UWBP_SPS_SelectionMenu_C::??@t??_1(int32_t Index, struct FBravoHotelSmartPingIconSettings Settings) {
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SPS_SelectionMenu.WBP_SPS_SelectionMenu_C.??@t??_1");

	struct ??@t??_1_Params {
		int32_t Index;
		struct FBravoHotelSmartPingIconSettings Settings;
	}; ??@t??_1_Params Params;

	Params.Index = Index;
	Params.Settings = Settings;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function WBP_SPS_SelectionMenu.WBP_SPS_SelectionMenu_C.TogglePingType
inline void UWBP_SPS_SelectionMenu_C::TogglePingType(char NewIsPingType) {
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SPS_SelectionMenu.WBP_SPS_SelectionMenu_C.TogglePingType");

	struct TogglePingType_Params {
		char NewIsPingType;
	}; TogglePingType_Params Params;

	Params.NewIsPingType = NewIsPingType;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function WBP_SPS_SelectionMenu.WBP_SPS_SelectionMenu_C.ExecuteUbergraph_WBP_SPS_SelectionMenu
inline void UWBP_SPS_SelectionMenu_C::ExecuteUbergraph_WBP_SPS_SelectionMenu(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SPS_SelectionMenu.WBP_SPS_SelectionMenu_C.ExecuteUbergraph_WBP_SPS_SelectionMenu");

	struct ExecuteUbergraph_WBP_SPS_SelectionMenu_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_WBP_SPS_SelectionMenu_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function WBP_SPS_SelectionMenu.WBP_SPS_SelectionMenu_C.ClearPing__DelegateSignature
inline void UWBP_SPS_SelectionMenu_C::ClearPing__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SPS_SelectionMenu.WBP_SPS_SelectionMenu_C.ClearPing__DelegateSignature");

	struct ClearPing__DelegateSignature_Params {
		
	}; ClearPing__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function WBP_SPS_SelectionMenu.WBP_SPS_SelectionMenu_C.Hovered__DelegateSignature
inline void UWBP_SPS_SelectionMenu_C::Hovered__DelegateSignature(struct FBravoHotelSmartPingIconSettings Settings, char IsPingType) {
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SPS_SelectionMenu.WBP_SPS_SelectionMenu_C.Hovered__DelegateSignature");

	struct Hovered__DelegateSignature_Params {
		struct FBravoHotelSmartPingIconSettings Settings;
		char IsPingType;
	}; Hovered__DelegateSignature_Params Params;

	Params.Settings = Settings;
	Params.IsPingType = IsPingType;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function WBP_SPS_SelectionMenu.WBP_SPS_SelectionMenu_C.Selected__DelegateSignature
inline void UWBP_SPS_SelectionMenu_C::Selected__DelegateSignature(struct FBravoHotelSmartPingIconSettings Selected, struct FName ID, char IsPingType, int32_t RequestMessageIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SPS_SelectionMenu.WBP_SPS_SelectionMenu_C.Selected__DelegateSignature");

	struct Selected__DelegateSignature_Params {
		struct FBravoHotelSmartPingIconSettings Selected;
		struct FName ID;
		char IsPingType;
		int32_t RequestMessageIndex;
	}; Selected__DelegateSignature_Params Params;

	Params.Selected = Selected;
	Params.ID = ID;
	Params.IsPingType = IsPingType;
	Params.RequestMessageIndex = RequestMessageIndex;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

