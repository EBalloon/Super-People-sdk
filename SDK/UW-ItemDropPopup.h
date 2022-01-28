// WidgetBlueprintGeneratedClass UW-ItemDropPopup.UW-ItemDropPopup_C
class UUW-ItemDropPopup_C : public UUserWidget {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248 (8)
	struct UButton BlockMouse; // 0x250 (8)
	struct UButton Button_Accept; // 0x258 (8)
	struct UButton Button_Cancel; // 0x260 (8)
	struct UButton Button_Close; // 0x268 (8)
	struct UButton Button_Max; // 0x270 (8)
	struct UButton Button_Min; // 0x278 (8)
	struct UImage Image_9; // 0x280 (8)
	struct USlider Slider_137; // 0x288 (8)
	struct UTextBlock TextBlock_Accept; // 0x290 (8)
	struct UTextBlock TextBlock_MaxCount; // 0x298 (8)
	struct UTextBlock TextBlock_MinCount; // 0x2A0 (8)
	struct UTextBlock TextBlock_Title; // 0x2A8 (8)
	struct UEditableTextBox TextBox_DropCount; // 0x2B0 (8)
	int32_t CurrentCount; // 0x2B8 (4)
	int32_t MaxCount; // 0x2BC (4)
	struct FText LastEnteredText; // 0x2C0 (24)
	struct FInventoryItemInfo ItemInfo; // 0x2D8 (152)
	struct FInventoryItemDetailInfo ItemDetailInfo; // 0x370 (1168)
	struct ABravoHotelPickup PickupRef; // 0x800 (8)
	struct ABravoHotelDropBoxActor DropBoxRef; // 0x808 (8)
	struct UUW-InventoryWidget_C InventoryWidget; // 0x810 (8)
	char bClosing : 0; // 0x818 (1)
	struct UUW-Inventory_MaterialSlot_C MaterialSlot; // 0x820 (8)

	void CheckNumeric(struct FString CheckString, char& CheckResult); // Function UW-ItemDropPopup.UW-ItemDropPopup_C.CheckNumeric(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void GetButtonTextColor(char IsHover, char IsPress, struct FSlateColor& TextColor); // Function UW-ItemDropPopup.UW-ItemDropPopup_C.GetButtonTextColor(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UW-ItemDropPopup.UW-ItemDropPopup_C.OnMouseButtonDown(BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void SetDefault(char InvenWeightCheck); // Function UW-ItemDropPopup.UW-ItemDropPopup_C.SetDefault(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void SetTextBoxText(int32_t CurrentCount); // Function UW-ItemDropPopup.UW-ItemDropPopup_C.SetTextBoxText(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void SetSliderValue(int32_t CurrentCount); // Function UW-ItemDropPopup.UW-ItemDropPopup_C.SetSliderValue(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void PreConstruct(char IsDesignTime); // Function UW-ItemDropPopup.UW-ItemDropPopup_C.PreConstruct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void BndEvt__TextBox_DropCount_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature(struct FText& Text, char CommitMethod); // Function UW-ItemDropPopup.UW-ItemDropPopup_C.BndEvt__TextBox_DropCount_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature(HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void BndEvt__TextBox_DropCount_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature(struct FText& Text); // Function UW-ItemDropPopup.UW-ItemDropPopup_C.BndEvt__TextBox_DropCount_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature(HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void BndEvt__Slider_136_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature(float Value); // Function UW-ItemDropPopup.UW-ItemDropPopup_C.BndEvt__Slider_136_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void Close(); // Function UW-ItemDropPopup.UW-ItemDropPopup_C.Close(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void BndEvt__Button_4_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature(); // Function UW-ItemDropPopup.UW-ItemDropPopup_C.BndEvt__Button_4_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void BndEvt__Button_1_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature(); // Function UW-ItemDropPopup.UW-ItemDropPopup_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void BndEvt__Button_Min_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature(); // Function UW-ItemDropPopup.UW-ItemDropPopup_C.BndEvt__Button_Min_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void BndEvt__Button_Max_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature(); // Function UW-ItemDropPopup.UW-ItemDropPopup_C.BndEvt__Button_Max_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void BndEvt__Button_Accept_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature(); // Function UW-ItemDropPopup.UW-ItemDropPopup_C.BndEvt__Button_Accept_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void Accept(); // Function UW-ItemDropPopup.UW-ItemDropPopup_C.Accept(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void ExecuteUbergraph_UW-ItemDropPopup(int32_t EntryPoint); // Function UW-ItemDropPopup.UW-ItemDropPopup_C.ExecuteUbergraph_UW-ItemDropPopup(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
};

// Function UW-ItemDropPopup.UW-ItemDropPopup_C.CheckNumeric
inline void UUW-ItemDropPopup_C::CheckNumeric(struct FString CheckString, char& CheckResult) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ItemDropPopup.UW-ItemDropPopup_C.CheckNumeric");

	struct CheckNumeric_Params {
		struct FString CheckString;
		char& CheckResult;
	}; CheckNumeric_Params Params;

	Params.CheckString = CheckString;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	CheckResult = Params.CheckResult;

}

// Function UW-ItemDropPopup.UW-ItemDropPopup_C.GetButtonTextColor
inline void UUW-ItemDropPopup_C::GetButtonTextColor(char IsHover, char IsPress, struct FSlateColor& TextColor) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ItemDropPopup.UW-ItemDropPopup_C.GetButtonTextColor");

	struct GetButtonTextColor_Params {
		char IsHover;
		char IsPress;
		struct FSlateColor& TextColor;
	}; GetButtonTextColor_Params Params;

	Params.IsHover = IsHover;
	Params.IsPress = IsPress;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	TextColor = Params.TextColor;

}

// Function UW-ItemDropPopup.UW-ItemDropPopup_C.OnMouseButtonDown
inline struct FEventReply UUW-ItemDropPopup_C::OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ItemDropPopup.UW-ItemDropPopup_C.OnMouseButtonDown");

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

// Function UW-ItemDropPopup.UW-ItemDropPopup_C.SetDefault
inline void UUW-ItemDropPopup_C::SetDefault(char InvenWeightCheck) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ItemDropPopup.UW-ItemDropPopup_C.SetDefault");

	struct SetDefault_Params {
		char InvenWeightCheck;
	}; SetDefault_Params Params;

	Params.InvenWeightCheck = InvenWeightCheck;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ItemDropPopup.UW-ItemDropPopup_C.SetTextBoxText
inline void UUW-ItemDropPopup_C::SetTextBoxText(int32_t CurrentCount) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ItemDropPopup.UW-ItemDropPopup_C.SetTextBoxText");

	struct SetTextBoxText_Params {
		int32_t CurrentCount;
	}; SetTextBoxText_Params Params;

	Params.CurrentCount = CurrentCount;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ItemDropPopup.UW-ItemDropPopup_C.SetSliderValue
inline void UUW-ItemDropPopup_C::SetSliderValue(int32_t CurrentCount) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ItemDropPopup.UW-ItemDropPopup_C.SetSliderValue");

	struct SetSliderValue_Params {
		int32_t CurrentCount;
	}; SetSliderValue_Params Params;

	Params.CurrentCount = CurrentCount;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ItemDropPopup.UW-ItemDropPopup_C.PreConstruct
inline void UUW-ItemDropPopup_C::PreConstruct(char IsDesignTime) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ItemDropPopup.UW-ItemDropPopup_C.PreConstruct");

	struct PreConstruct_Params {
		char IsDesignTime;
	}; PreConstruct_Params Params;

	Params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ItemDropPopup.UW-ItemDropPopup_C.BndEvt__TextBox_DropCount_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature
inline void UUW-ItemDropPopup_C::BndEvt__TextBox_DropCount_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature(struct FText& Text, char CommitMethod) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ItemDropPopup.UW-ItemDropPopup_C.BndEvt__TextBox_DropCount_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature");

	struct BndEvt__TextBox_DropCount_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature_Params {
		struct FText& Text;
		char CommitMethod;
	}; BndEvt__TextBox_DropCount_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature_Params Params;

	Params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Text = Params.Text;

}

// Function UW-ItemDropPopup.UW-ItemDropPopup_C.BndEvt__TextBox_DropCount_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature
inline void UUW-ItemDropPopup_C::BndEvt__TextBox_DropCount_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature(struct FText& Text) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ItemDropPopup.UW-ItemDropPopup_C.BndEvt__TextBox_DropCount_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature");

	struct BndEvt__TextBox_DropCount_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature_Params {
		struct FText& Text;
	}; BndEvt__TextBox_DropCount_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Text = Params.Text;

}

// Function UW-ItemDropPopup.UW-ItemDropPopup_C.BndEvt__Slider_136_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature
inline void UUW-ItemDropPopup_C::BndEvt__Slider_136_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature(float Value) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ItemDropPopup.UW-ItemDropPopup_C.BndEvt__Slider_136_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature");

	struct BndEvt__Slider_136_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature_Params {
		float Value;
	}; BndEvt__Slider_136_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature_Params Params;

	Params.Value = Value;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ItemDropPopup.UW-ItemDropPopup_C.Close
inline void UUW-ItemDropPopup_C::Close() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ItemDropPopup.UW-ItemDropPopup_C.Close");

	struct Close_Params {
		
	}; Close_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ItemDropPopup.UW-ItemDropPopup_C.BndEvt__Button_4_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
inline void UUW-ItemDropPopup_C::BndEvt__Button_4_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ItemDropPopup.UW-ItemDropPopup_C.BndEvt__Button_4_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");

	struct BndEvt__Button_4_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params {
		
	}; BndEvt__Button_4_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ItemDropPopup.UW-ItemDropPopup_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
inline void UUW-ItemDropPopup_C::BndEvt__Button_1_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ItemDropPopup.UW-ItemDropPopup_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");

	struct BndEvt__Button_1_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params {
		
	}; BndEvt__Button_1_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ItemDropPopup.UW-ItemDropPopup_C.BndEvt__Button_Min_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
inline void UUW-ItemDropPopup_C::BndEvt__Button_Min_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ItemDropPopup.UW-ItemDropPopup_C.BndEvt__Button_Min_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature");

	struct BndEvt__Button_Min_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params {
		
	}; BndEvt__Button_Min_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ItemDropPopup.UW-ItemDropPopup_C.BndEvt__Button_Max_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
inline void UUW-ItemDropPopup_C::BndEvt__Button_Max_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ItemDropPopup.UW-ItemDropPopup_C.BndEvt__Button_Max_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature");

	struct BndEvt__Button_Max_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params {
		
	}; BndEvt__Button_Max_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ItemDropPopup.UW-ItemDropPopup_C.BndEvt__Button_Accept_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature
inline void UUW-ItemDropPopup_C::BndEvt__Button_Accept_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ItemDropPopup.UW-ItemDropPopup_C.BndEvt__Button_Accept_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature");

	struct BndEvt__Button_Accept_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature_Params {
		
	}; BndEvt__Button_Accept_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ItemDropPopup.UW-ItemDropPopup_C.Accept
inline void UUW-ItemDropPopup_C::Accept() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ItemDropPopup.UW-ItemDropPopup_C.Accept");

	struct Accept_Params {
		
	}; Accept_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ItemDropPopup.UW-ItemDropPopup_C.ExecuteUbergraph_UW-ItemDropPopup
inline void UUW-ItemDropPopup_C::ExecuteUbergraph_UW-ItemDropPopup(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ItemDropPopup.UW-ItemDropPopup_C.ExecuteUbergraph_UW-ItemDropPopup");

	struct ExecuteUbergraph_UW-ItemDropPopup_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_UW-ItemDropPopup_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

