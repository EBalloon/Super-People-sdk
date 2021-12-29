// WidgetBlueprintGeneratedClass SlotItemWidget.SlotItemWidget_C
class USlotItemWidget_C : public UBravoHotelSettingSlotWidget {

public:

	struct Unknown UberGraphFrame; // 0x4E8 (8)
	struct Unknown Over; // 0x4F0 (8)
	struct Unknown Button_107; // 0x4F8 (8)
	struct Unknown Button_441; // 0x500 (8)
	struct Unknown Button_Type; // 0x508 (8)
	struct Unknown ButtonType; // 0x510 (8)
	struct Unknown ComboBoxString_237; // 0x518 (8)
	struct Unknown ComboBoxType; // 0x520 (8)
	struct Unknown Down; // 0x528 (8)
	struct Unknown EditableText_80; // 0x530 (8)
	struct Unknown HorizontalBox_191; // 0x538 (8)
	struct Unknown Image_153; // 0x540 (8)
	struct Unknown Image_204; // 0x548 (8)
	struct Unknown Image_414; // 0x550 (8)
	struct Unknown Key; // 0x558 (8)
	struct Unknown KeyImageMain; // 0x560 (8)
	struct Unknown KeyImageSub; // 0x568 (8)
	struct Unknown KeyLock; // 0x570 (8)
	struct Unknown LeftA; // 0x578 (8)
	struct Unknown LeftA_2; // 0x580 (8)
	struct Unknown LockMain; // 0x588 (8)
	struct Unknown LockSub; // 0x590 (8)
	struct Unknown MainBG; // 0x598 (8)
	struct Unknown MainKeyInput; // 0x5A0 (8)
	struct Unknown Overlay_215; // 0x5A8 (8)
	struct Unknown ProgressBar_150; // 0x5B0 (8)
	struct Unknown RightA; // 0x5B8 (8)
	struct Unknown RightA_2; // 0x5C0 (8)
	struct Unknown SelectBtn1; // 0x5C8 (8)
	struct Unknown SelectBtn2; // 0x5D0 (8)
	struct Unknown SelectBtn3; // 0x5D8 (8)
	struct Unknown SelectBtn4; // 0x5E0 (8)
	struct Unknown SelectBtn5; // 0x5E8 (8)
	struct Unknown SelectBtn6; // 0x5F0 (8)
	struct Unknown SelectType; // 0x5F8 (8)
	struct Unknown SelectValue; // 0x600 (8)
	struct Unknown Slider_139; // 0x608 (8)
	struct Unknown SliderType; // 0x610 (8)
	struct Unknown SubBG; // 0x618 (8)
	struct Unknown SubKeyInput; // 0x620 (8)
	struct Unknown T_Button; // 0x628 (8)
	struct Unknown Title_Text; // 0x630 (8)
	struct Unknown Up; // 0x638 (8)
	struct Unknown Value; // 0x640 (8)
	struct Unknown Value_2; // 0x648 (8)
	struct Unknown WidgetSwitcher_1; // 0x650 (8)
	struct Unknown WidgetSwitcher_281; // 0x658 (8)
	char Lock : 0; // 0x660 (1)
	int32_t Selected SeleteValue; // 0x664 (4)
	int32_t TotalListSize; // 0x668 (4)
	struct TArray<Unknown> Empty; // 0x670 (16)
	struct Unknown ButtonStyle; // 0x680 (632)
	struct Unknown NewVar_1; // 0x8F8 (112)
	char SliderIsInit : 0; // 0x968 (1)
	struct FText EmptyText; // 0x970 (24)
	int32_t TempSaveComboBoxIndex; // 0x988 (4)
	struct Unknown Temp; // 0x990 (32)
	float TempValue; // 0x9B0 (4)
	struct FText PreSliderText; // 0x9B8 (24)
	struct FString LResultString; // 0x9D0 (16)
	char have. : 0; // 0x9E0 (1)
	char IsOnEditableText : 0; // 0x9E1 (1)
	char CompletSettingData : 0; // 0x9E2 (1)
	struct Unknown CompleteSettingInfo; // 0x9E8 (136)
	struct Unknown TempSetting; // 0xA70 (136)
	char ReMarkComboBox : 0; // 0xAF8 (1)

	void GetOrgKey(char IsSubKey, struct Unknown& Key); // Function SlotItemWidget.SlotItemWidget_C.GetOrgKey(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void GetCurKey(char IsSubKey, struct Unknown& Key); // Function SlotItemWidget.SlotItemWidget_C.GetCurKey(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	struct Unknown OnKeyUp(struct Unknown MyGeometry, struct Unknown InKeyEvent); // Function SlotItemWidget.SlotItemWidget_C.OnKeyUp(BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void CheckMinMaxValue(float CheckValue, struct FString& RetString); // Function SlotItemWidget.SlotItemWidget_C.CheckMinMaxValue(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void CheckConvertFloatToString(float Value, struct FString& ret); // Function SlotItemWidget.SlotItemWidget_C.CheckConvertFloatToString(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void SetEnable(char State); // Function SlotItemWidget.SlotItemWidget_C.SetEnable(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void SetSliderValue(float InputValue, float& OutValue); // Function SlotItemWidget.SlotItemWidget_C.SetSliderValue(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void GetKeyNameFromKey(struct Unknown Key, struct FString& Name); // Function SlotItemWidget.SlotItemWidget_C.GetKeyNameFromKey(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	struct Unknown OnGenerateWidget_1(struct FString Item); // Function SlotItemWidget.SlotItemWidget_C.OnGenerateWidget_1(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void Construct(); // Function SlotItemWidget.SlotItemWidget_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void BndEvt__Button_106_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function SlotItemWidget.SlotItemWidget_C.BndEvt__Button_106_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void BndEvt__Button_106_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function SlotItemWidget.SlotItemWidget_C.BndEvt__Button_106_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void BndEvt__Slider_138_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature(float Value); // Function SlotItemWidget.SlotItemWidget_C.BndEvt__Slider_138_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void SetValue(float Value); // Function SlotItemWidget.SlotItemWidget_C.SetValue(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void BndEvt__ComboBoxString_236_K2Node_ComponentBoundEvent_3_OnOpeningEvent__DelegateSignature(); // Function SlotItemWidget.SlotItemWidget_C.BndEvt__ComboBoxString_236_K2Node_ComponentBoundEvent_3_OnOpeningEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void BndEvt__ComboBoxString_236_K2Node_ComponentBoundEvent_4_OnSelectionChangedEvent__DelegateSignature(struct FString SelectedItem, char SelectionType); // Function SlotItemWidget.SlotItemWidget_C.BndEvt__ComboBoxString_236_K2Node_ComponentBoundEvent_4_OnSelectionChangedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void BndEvt__Slider_138_K2Node_ComponentBoundEvent_5_OnMouseCaptureBeginEvent__DelegateSignature(); // Function SlotItemWidget.SlotItemWidget_C.BndEvt__Slider_138_K2Node_ComponentBoundEvent_5_OnMouseCaptureBeginEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void BndEvt__Slider_138_K2Node_ComponentBoundEvent_7_OnMouseCaptureEndEvent__DelegateSignature(); // Function SlotItemWidget.SlotItemWidget_C.BndEvt__Slider_138_K2Node_ComponentBoundEvent_7_OnMouseCaptureEndEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void Broadcast Change Index(float ValueIndex); // Function SlotItemWidget.SlotItemWidget_C.Broadcast Change Index(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void InitDataByKeyInfo(char IsSub, struct Unknown& Index, char IsInit); // Function SlotItemWidget.SlotItemWidget_C.InitDataByKeyInfo(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void BndEvt__MainKeyInput_K2Node_ComponentBoundEvent_19_OnKeySelected__DelegateSignature(struct Unknown SelectedKey); // Function SlotItemWidget.SlotItemWidget_C.BndEvt__MainKeyInput_K2Node_ComponentBoundEvent_19_OnKeySelected__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void BndEvt__SubKeyInput_K2Node_ComponentBoundEvent_20_OnKeySelected__DelegateSignature(struct Unknown SelectedKey); // Function SlotItemWidget.SlotItemWidget_C.BndEvt__SubKeyInput_K2Node_ComponentBoundEvent_20_OnKeySelected__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void BndEvt__MainKeyInput_K2Node_ComponentBoundEvent_10_OnIsSelectingKeyChanged__DelegateSignature(); // Function SlotItemWidget.SlotItemWidget_C.BndEvt__MainKeyInput_K2Node_ComponentBoundEvent_10_OnIsSelectingKeyChanged__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void BndEvt__SubKeyInput_K2Node_ComponentBoundEvent_12_OnIsSelectingKeyChanged__DelegateSignature(); // Function SlotItemWidget.SlotItemWidget_C.BndEvt__SubKeyInput_K2Node_ComponentBoundEvent_12_OnIsSelectingKeyChanged__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void SetPercentValue(float Value); // Function SlotItemWidget.SlotItemWidget_C.SetPercentValue(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void SetSelectIndexComboBox(int32_t Index, char BroadcastChange); // Function SlotItemWidget.SlotItemWidget_C.SetSelectIndexComboBox(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void SetSelectIndexSelectBox(int32_t Index, char BroadcastChange); // Function SlotItemWidget.SlotItemWidget_C.SetSelectIndexSelectBox(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void InitDataByAxisKeyInfo(char IsSub, struct Unknown& Index, char IsInit); // Function SlotItemWidget.SlotItemWidget_C.InitDataByAxisKeyInfo(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void SubSelectingKeyChanged(char IsSelectingKey); // Function SlotItemWidget.SlotItemWidget_C.SubSelectingKeyChanged(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void MainSelectingKeyChanged(char IsSelectingKey); // Function SlotItemWidget.SlotItemWidget_C.MainSelectingKeyChanged(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void BndEvt__RightA_K2Node_ComponentBoundEvent_11_CilckBtn__DelegateSignature(); // Function SlotItemWidget.SlotItemWidget_C.BndEvt__RightA_K2Node_ComponentBoundEvent_11_CilckBtn__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void BndEvt__LeftA_K2Node_ComponentBoundEvent_13_CilckBtn__DelegateSignature(); // Function SlotItemWidget.SlotItemWidget_C.BndEvt__LeftA_K2Node_ComponentBoundEvent_13_CilckBtn__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void BndEvt__Button_Type_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature(); // Function SlotItemWidget.SlotItemWidget_C.BndEvt__Button_Type_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void ResolutionSelected(int32_t Index, int32_t ResolutionX, int32_t ResolutionY); // Function SlotItemWidget.SlotItemWidget_C.ResolutionSelected(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void SetDisplayMode(char WindowMode); // Function SlotItemWidget.SlotItemWidget_C.SetDisplayMode(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void ReMakeComboBox(); // Function SlotItemWidget.SlotItemWidget_C.ReMakeComboBox(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void BndEvt__Button_82_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature(); // Function SlotItemWidget.SlotItemWidget_C.BndEvt__Button_82_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void 鉹@t元_1(int32_t LanguageIndex); // Function SlotItemWidget.SlotItemWidget_C.鉹@t元_1(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void Destruct(); // Function SlotItemWidget.SlotItemWidget_C.Destruct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void BndEvt__LeftA_1_K2Node_ComponentBoundEvent_9_CilckBtn__DelegateSignature(); // Function SlotItemWidget.SlotItemWidget_C.BndEvt__LeftA_1_K2Node_ComponentBoundEvent_9_CilckBtn__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void BndEvt__RightA_1_K2Node_ComponentBoundEvent_14_CilckBtn__DelegateSignature(); // Function SlotItemWidget.SlotItemWidget_C.BndEvt__RightA_1_K2Node_ComponentBoundEvent_14_CilckBtn__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void BndEvt__EditableText_79_K2Node_ComponentBoundEvent_15_OnEditableTextChangedEvent__DelegateSignature(struct FText& Text); // Function SlotItemWidget.SlotItemWidget_C.BndEvt__EditableText_79_K2Node_ComponentBoundEvent_15_OnEditableTextChangedEvent__DelegateSignature(HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void BndEvt__EditableText_79_K2Node_ComponentBoundEvent_16_OnEditableTextCommittedEvent__DelegateSignature(struct FText& Text, char CommitMethod); // Function SlotItemWidget.SlotItemWidget_C.BndEvt__EditableText_79_K2Node_ComponentBoundEvent_16_OnEditableTextCommittedEvent__DelegateSignature(HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void BndEvt__Button_440_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature(); // Function SlotItemWidget.SlotItemWidget_C.BndEvt__Button_440_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void 鉹@t元_2(int32_t Index); // Function SlotItemWidget.SlotItemWidget_C.鉹@t元_2(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void SetKeyLock(char IsLock); // Function SlotItemWidget.SlotItemWidget_C.SetKeyLock(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void 鉹@t元_3(int32_t LanguageIndex); // Function SlotItemWidget.SlotItemWidget_C.鉹@t元_3(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void SetData(); // Function SlotItemWidget.SlotItemWidget_C.SetData(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void ExecuteUbergraph_SlotItemWidget(int32_t EntryPoint); // Function SlotItemWidget.SlotItemWidget_C.ExecuteUbergraph_SlotItemWidget(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
};

// Function SlotItemWidget.SlotItemWidget_C.GetOrgKey
inline void USlotItemWidget_C::GetOrgKey(char IsSubKey, struct Unknown& Key) {
	static auto fn = UObject::FindObject<UFunction>("Function SlotItemWidget.SlotItemWidget_C.GetOrgKey");

	struct GetOrgKey_Params {
		char IsSubKey;
		struct Unknown& Key;
	}; GetOrgKey_Params Params;

	Params.IsSubKey = IsSubKey;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Key = Params.Key;

}

// Function SlotItemWidget.SlotItemWidget_C.GetCurKey
inline void USlotItemWidget_C::GetCurKey(char IsSubKey, struct Unknown& Key) {
	static auto fn = UObject::FindObject<UFunction>("Function SlotItemWidget.SlotItemWidget_C.GetCurKey");

	struct GetCurKey_Params {
		char IsSubKey;
		struct Unknown& Key;
	}; GetCurKey_Params Params;

	Params.IsSubKey = IsSubKey;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Key = Params.Key;

}

// Function SlotItemWidget.SlotItemWidget_C.OnKeyUp
inline struct Unknown USlotItemWidget_C::OnKeyUp(struct Unknown MyGeometry, struct Unknown InKeyEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function SlotItemWidget.SlotItemWidget_C.OnKeyUp");

	struct OnKeyUp_Params {
		struct Unknown MyGeometry;
		struct Unknown InKeyEvent;
		struct Unknown ReturnValue;

	}; OnKeyUp_Params Params;

	Params.MyGeometry = MyGeometry;
	Params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function SlotItemWidget.SlotItemWidget_C.CheckMinMaxValue
inline void USlotItemWidget_C::CheckMinMaxValue(float CheckValue, struct FString& RetString) {
	static auto fn = UObject::FindObject<UFunction>("Function SlotItemWidget.SlotItemWidget_C.CheckMinMaxValue");

	struct CheckMinMaxValue_Params {
		float CheckValue;
		struct FString& RetString;
	}; CheckMinMaxValue_Params Params;

	Params.CheckValue = CheckValue;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	RetString = Params.RetString;

}

// Function SlotItemWidget.SlotItemWidget_C.CheckConvertFloatToString
inline void USlotItemWidget_C::CheckConvertFloatToString(float Value, struct FString& ret) {
	static auto fn = UObject::FindObject<UFunction>("Function SlotItemWidget.SlotItemWidget_C.CheckConvertFloatToString");

	struct CheckConvertFloatToString_Params {
		float Value;
		struct FString& ret;
	}; CheckConvertFloatToString_Params Params;

	Params.Value = Value;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	ret = Params.ret;

}

// Function SlotItemWidget.SlotItemWidget_C.SetEnable
inline void USlotItemWidget_C::SetEnable(char State) {
	static auto fn = UObject::FindObject<UFunction>("Function SlotItemWidget.SlotItemWidget_C.SetEnable");

	struct SetEnable_Params {
		char State;
	}; SetEnable_Params Params;

	Params.State = State;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function SlotItemWidget.SlotItemWidget_C.SetSliderValue
inline void USlotItemWidget_C::SetSliderValue(float InputValue, float& OutValue) {
	static auto fn = UObject::FindObject<UFunction>("Function SlotItemWidget.SlotItemWidget_C.SetSliderValue");

	struct SetSliderValue_Params {
		float InputValue;
		float& OutValue;
	}; SetSliderValue_Params Params;

	Params.InputValue = InputValue;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	OutValue = Params.OutValue;

}

// Function SlotItemWidget.SlotItemWidget_C.GetKeyNameFromKey
inline void USlotItemWidget_C::GetKeyNameFromKey(struct Unknown Key, struct FString& Name) {
	static auto fn = UObject::FindObject<UFunction>("Function SlotItemWidget.SlotItemWidget_C.GetKeyNameFromKey");

	struct GetKeyNameFromKey_Params {
		struct Unknown Key;
		struct FString& Name;
	}; GetKeyNameFromKey_Params Params;

	Params.Key = Key;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Name = Params.Name;

}

// Function SlotItemWidget.SlotItemWidget_C.OnGenerateWidget_1
inline struct Unknown USlotItemWidget_C::OnGenerateWidget_1(struct FString Item) {
	static auto fn = UObject::FindObject<UFunction>("Function SlotItemWidget.SlotItemWidget_C.OnGenerateWidget_1");

	struct OnGenerateWidget_1_Params {
		struct FString Item;
		struct Unknown ReturnValue;

	}; OnGenerateWidget_1_Params Params;

	Params.Item = Item;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function SlotItemWidget.SlotItemWidget_C.Construct
inline void USlotItemWidget_C::Construct() {
	static auto fn = UObject::FindObject<UFunction>("Function SlotItemWidget.SlotItemWidget_C.Construct");

	struct Construct_Params {
		
	}; Construct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function SlotItemWidget.SlotItemWidget_C.BndEvt__Button_106_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
inline void USlotItemWidget_C::BndEvt__Button_106_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function SlotItemWidget.SlotItemWidget_C.BndEvt__Button_106_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");

	struct BndEvt__Button_106_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params {
		
	}; BndEvt__Button_106_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function SlotItemWidget.SlotItemWidget_C.BndEvt__Button_106_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
inline void USlotItemWidget_C::BndEvt__Button_106_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function SlotItemWidget.SlotItemWidget_C.BndEvt__Button_106_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	struct BndEvt__Button_106_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params {
		
	}; BndEvt__Button_106_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function SlotItemWidget.SlotItemWidget_C.BndEvt__Slider_138_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature
inline void USlotItemWidget_C::BndEvt__Slider_138_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature(float Value) {
	static auto fn = UObject::FindObject<UFunction>("Function SlotItemWidget.SlotItemWidget_C.BndEvt__Slider_138_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature");

	struct BndEvt__Slider_138_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature_Params {
		float Value;
	}; BndEvt__Slider_138_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature_Params Params;

	Params.Value = Value;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function SlotItemWidget.SlotItemWidget_C.SetValue
inline void USlotItemWidget_C::SetValue(float Value) {
	static auto fn = UObject::FindObject<UFunction>("Function SlotItemWidget.SlotItemWidget_C.SetValue");

	struct SetValue_Params {
		float Value;
	}; SetValue_Params Params;

	Params.Value = Value;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function SlotItemWidget.SlotItemWidget_C.BndEvt__ComboBoxString_236_K2Node_ComponentBoundEvent_3_OnOpeningEvent__DelegateSignature
inline void USlotItemWidget_C::BndEvt__ComboBoxString_236_K2Node_ComponentBoundEvent_3_OnOpeningEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function SlotItemWidget.SlotItemWidget_C.BndEvt__ComboBoxString_236_K2Node_ComponentBoundEvent_3_OnOpeningEvent__DelegateSignature");

	struct BndEvt__ComboBoxString_236_K2Node_ComponentBoundEvent_3_OnOpeningEvent__DelegateSignature_Params {
		
	}; BndEvt__ComboBoxString_236_K2Node_ComponentBoundEvent_3_OnOpeningEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function SlotItemWidget.SlotItemWidget_C.BndEvt__ComboBoxString_236_K2Node_ComponentBoundEvent_4_OnSelectionChangedEvent__DelegateSignature
inline void USlotItemWidget_C::BndEvt__ComboBoxString_236_K2Node_ComponentBoundEvent_4_OnSelectionChangedEvent__DelegateSignature(struct FString SelectedItem, char SelectionType) {
	static auto fn = UObject::FindObject<UFunction>("Function SlotItemWidget.SlotItemWidget_C.BndEvt__ComboBoxString_236_K2Node_ComponentBoundEvent_4_OnSelectionChangedEvent__DelegateSignature");

	struct BndEvt__ComboBoxString_236_K2Node_ComponentBoundEvent_4_OnSelectionChangedEvent__DelegateSignature_Params {
		struct FString SelectedItem;
		char SelectionType;
	}; BndEvt__ComboBoxString_236_K2Node_ComponentBoundEvent_4_OnSelectionChangedEvent__DelegateSignature_Params Params;

	Params.SelectedItem = SelectedItem;
	Params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function SlotItemWidget.SlotItemWidget_C.BndEvt__Slider_138_K2Node_ComponentBoundEvent_5_OnMouseCaptureBeginEvent__DelegateSignature
inline void USlotItemWidget_C::BndEvt__Slider_138_K2Node_ComponentBoundEvent_5_OnMouseCaptureBeginEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function SlotItemWidget.SlotItemWidget_C.BndEvt__Slider_138_K2Node_ComponentBoundEvent_5_OnMouseCaptureBeginEvent__DelegateSignature");

	struct BndEvt__Slider_138_K2Node_ComponentBoundEvent_5_OnMouseCaptureBeginEvent__DelegateSignature_Params {
		
	}; BndEvt__Slider_138_K2Node_ComponentBoundEvent_5_OnMouseCaptureBeginEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function SlotItemWidget.SlotItemWidget_C.BndEvt__Slider_138_K2Node_ComponentBoundEvent_7_OnMouseCaptureEndEvent__DelegateSignature
inline void USlotItemWidget_C::BndEvt__Slider_138_K2Node_ComponentBoundEvent_7_OnMouseCaptureEndEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function SlotItemWidget.SlotItemWidget_C.BndEvt__Slider_138_K2Node_ComponentBoundEvent_7_OnMouseCaptureEndEvent__DelegateSignature");

	struct BndEvt__Slider_138_K2Node_ComponentBoundEvent_7_OnMouseCaptureEndEvent__DelegateSignature_Params {
		
	}; BndEvt__Slider_138_K2Node_ComponentBoundEvent_7_OnMouseCaptureEndEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function SlotItemWidget.SlotItemWidget_C.Broadcast Change Index
inline void USlotItemWidget_C::Broadcast Change Index(float ValueIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function SlotItemWidget.SlotItemWidget_C.Broadcast Change Index");

	struct Broadcast Change Index_Params {
		float ValueIndex;
	}; Broadcast Change Index_Params Params;

	Params.ValueIndex = ValueIndex;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function SlotItemWidget.SlotItemWidget_C.InitDataByKeyInfo
inline void USlotItemWidget_C::InitDataByKeyInfo(char IsSub, struct Unknown& Index, char IsInit) {
	static auto fn = UObject::FindObject<UFunction>("Function SlotItemWidget.SlotItemWidget_C.InitDataByKeyInfo");

	struct InitDataByKeyInfo_Params {
		char IsSub;
		struct Unknown& Index;
		char IsInit;
	}; InitDataByKeyInfo_Params Params;

	Params.IsSub = IsSub;
	Params.IsInit = IsInit;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Index = Params.Index;

}

// Function SlotItemWidget.SlotItemWidget_C.BndEvt__MainKeyInput_K2Node_ComponentBoundEvent_19_OnKeySelected__DelegateSignature
inline void USlotItemWidget_C::BndEvt__MainKeyInput_K2Node_ComponentBoundEvent_19_OnKeySelected__DelegateSignature(struct Unknown SelectedKey) {
	static auto fn = UObject::FindObject<UFunction>("Function SlotItemWidget.SlotItemWidget_C.BndEvt__MainKeyInput_K2Node_ComponentBoundEvent_19_OnKeySelected__DelegateSignature");

	struct BndEvt__MainKeyInput_K2Node_ComponentBoundEvent_19_OnKeySelected__DelegateSignature_Params {
		struct Unknown SelectedKey;
	}; BndEvt__MainKeyInput_K2Node_ComponentBoundEvent_19_OnKeySelected__DelegateSignature_Params Params;

	Params.SelectedKey = SelectedKey;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function SlotItemWidget.SlotItemWidget_C.BndEvt__SubKeyInput_K2Node_ComponentBoundEvent_20_OnKeySelected__DelegateSignature
inline void USlotItemWidget_C::BndEvt__SubKeyInput_K2Node_ComponentBoundEvent_20_OnKeySelected__DelegateSignature(struct Unknown SelectedKey) {
	static auto fn = UObject::FindObject<UFunction>("Function SlotItemWidget.SlotItemWidget_C.BndEvt__SubKeyInput_K2Node_ComponentBoundEvent_20_OnKeySelected__DelegateSignature");

	struct BndEvt__SubKeyInput_K2Node_ComponentBoundEvent_20_OnKeySelected__DelegateSignature_Params {
		struct Unknown SelectedKey;
	}; BndEvt__SubKeyInput_K2Node_ComponentBoundEvent_20_OnKeySelected__DelegateSignature_Params Params;

	Params.SelectedKey = SelectedKey;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function SlotItemWidget.SlotItemWidget_C.BndEvt__MainKeyInput_K2Node_ComponentBoundEvent_10_OnIsSelectingKeyChanged__DelegateSignature
inline void USlotItemWidget_C::BndEvt__MainKeyInput_K2Node_ComponentBoundEvent_10_OnIsSelectingKeyChanged__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function SlotItemWidget.SlotItemWidget_C.BndEvt__MainKeyInput_K2Node_ComponentBoundEvent_10_OnIsSelectingKeyChanged__DelegateSignature");

	struct BndEvt__MainKeyInput_K2Node_ComponentBoundEvent_10_OnIsSelectingKeyChanged__DelegateSignature_Params {
		
	}; BndEvt__MainKeyInput_K2Node_ComponentBoundEvent_10_OnIsSelectingKeyChanged__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function SlotItemWidget.SlotItemWidget_C.BndEvt__SubKeyInput_K2Node_ComponentBoundEvent_12_OnIsSelectingKeyChanged__DelegateSignature
inline void USlotItemWidget_C::BndEvt__SubKeyInput_K2Node_ComponentBoundEvent_12_OnIsSelectingKeyChanged__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function SlotItemWidget.SlotItemWidget_C.BndEvt__SubKeyInput_K2Node_ComponentBoundEvent_12_OnIsSelectingKeyChanged__DelegateSignature");

	struct BndEvt__SubKeyInput_K2Node_ComponentBoundEvent_12_OnIsSelectingKeyChanged__DelegateSignature_Params {
		
	}; BndEvt__SubKeyInput_K2Node_ComponentBoundEvent_12_OnIsSelectingKeyChanged__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function SlotItemWidget.SlotItemWidget_C.SetPercentValue
inline void USlotItemWidget_C::SetPercentValue(float Value) {
	static auto fn = UObject::FindObject<UFunction>("Function SlotItemWidget.SlotItemWidget_C.SetPercentValue");

	struct SetPercentValue_Params {
		float Value;
	}; SetPercentValue_Params Params;

	Params.Value = Value;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function SlotItemWidget.SlotItemWidget_C.SetSelectIndexComboBox
inline void USlotItemWidget_C::SetSelectIndexComboBox(int32_t Index, char BroadcastChange) {
	static auto fn = UObject::FindObject<UFunction>("Function SlotItemWidget.SlotItemWidget_C.SetSelectIndexComboBox");

	struct SetSelectIndexComboBox_Params {
		int32_t Index;
		char BroadcastChange;
	}; SetSelectIndexComboBox_Params Params;

	Params.Index = Index;
	Params.BroadcastChange = BroadcastChange;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function SlotItemWidget.SlotItemWidget_C.SetSelectIndexSelectBox
inline void USlotItemWidget_C::SetSelectIndexSelectBox(int32_t Index, char BroadcastChange) {
	static auto fn = UObject::FindObject<UFunction>("Function SlotItemWidget.SlotItemWidget_C.SetSelectIndexSelectBox");

	struct SetSelectIndexSelectBox_Params {
		int32_t Index;
		char BroadcastChange;
	}; SetSelectIndexSelectBox_Params Params;

	Params.Index = Index;
	Params.BroadcastChange = BroadcastChange;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function SlotItemWidget.SlotItemWidget_C.InitDataByAxisKeyInfo
inline void USlotItemWidget_C::InitDataByAxisKeyInfo(char IsSub, struct Unknown& Index, char IsInit) {
	static auto fn = UObject::FindObject<UFunction>("Function SlotItemWidget.SlotItemWidget_C.InitDataByAxisKeyInfo");

	struct InitDataByAxisKeyInfo_Params {
		char IsSub;
		struct Unknown& Index;
		char IsInit;
	}; InitDataByAxisKeyInfo_Params Params;

	Params.IsSub = IsSub;
	Params.IsInit = IsInit;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Index = Params.Index;

}

// Function SlotItemWidget.SlotItemWidget_C.SubSelectingKeyChanged
inline void USlotItemWidget_C::SubSelectingKeyChanged(char IsSelectingKey) {
	static auto fn = UObject::FindObject<UFunction>("Function SlotItemWidget.SlotItemWidget_C.SubSelectingKeyChanged");

	struct SubSelectingKeyChanged_Params {
		char IsSelectingKey;
	}; SubSelectingKeyChanged_Params Params;

	Params.IsSelectingKey = IsSelectingKey;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function SlotItemWidget.SlotItemWidget_C.MainSelectingKeyChanged
inline void USlotItemWidget_C::MainSelectingKeyChanged(char IsSelectingKey) {
	static auto fn = UObject::FindObject<UFunction>("Function SlotItemWidget.SlotItemWidget_C.MainSelectingKeyChanged");

	struct MainSelectingKeyChanged_Params {
		char IsSelectingKey;
	}; MainSelectingKeyChanged_Params Params;

	Params.IsSelectingKey = IsSelectingKey;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function SlotItemWidget.SlotItemWidget_C.BndEvt__RightA_K2Node_ComponentBoundEvent_11_CilckBtn__DelegateSignature
inline void USlotItemWidget_C::BndEvt__RightA_K2Node_ComponentBoundEvent_11_CilckBtn__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function SlotItemWidget.SlotItemWidget_C.BndEvt__RightA_K2Node_ComponentBoundEvent_11_CilckBtn__DelegateSignature");

	struct BndEvt__RightA_K2Node_ComponentBoundEvent_11_CilckBtn__DelegateSignature_Params {
		
	}; BndEvt__RightA_K2Node_ComponentBoundEvent_11_CilckBtn__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function SlotItemWidget.SlotItemWidget_C.BndEvt__LeftA_K2Node_ComponentBoundEvent_13_CilckBtn__DelegateSignature
inline void USlotItemWidget_C::BndEvt__LeftA_K2Node_ComponentBoundEvent_13_CilckBtn__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function SlotItemWidget.SlotItemWidget_C.BndEvt__LeftA_K2Node_ComponentBoundEvent_13_CilckBtn__DelegateSignature");

	struct BndEvt__LeftA_K2Node_ComponentBoundEvent_13_CilckBtn__DelegateSignature_Params {
		
	}; BndEvt__LeftA_K2Node_ComponentBoundEvent_13_CilckBtn__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function SlotItemWidget.SlotItemWidget_C.BndEvt__Button_Type_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
inline void USlotItemWidget_C::BndEvt__Button_Type_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function SlotItemWidget.SlotItemWidget_C.BndEvt__Button_Type_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature");

	struct BndEvt__Button_Type_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params {
		
	}; BndEvt__Button_Type_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function SlotItemWidget.SlotItemWidget_C.ResolutionSelected
inline void USlotItemWidget_C::ResolutionSelected(int32_t Index, int32_t ResolutionX, int32_t ResolutionY) {
	static auto fn = UObject::FindObject<UFunction>("Function SlotItemWidget.SlotItemWidget_C.ResolutionSelected");

	struct ResolutionSelected_Params {
		int32_t Index;
		int32_t ResolutionX;
		int32_t ResolutionY;
	}; ResolutionSelected_Params Params;

	Params.Index = Index;
	Params.ResolutionX = ResolutionX;
	Params.ResolutionY = ResolutionY;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function SlotItemWidget.SlotItemWidget_C.SetDisplayMode
inline void USlotItemWidget_C::SetDisplayMode(char WindowMode) {
	static auto fn = UObject::FindObject<UFunction>("Function SlotItemWidget.SlotItemWidget_C.SetDisplayMode");

	struct SetDisplayMode_Params {
		char WindowMode;
	}; SetDisplayMode_Params Params;

	Params.WindowMode = WindowMode;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function SlotItemWidget.SlotItemWidget_C.ReMakeComboBox
inline void USlotItemWidget_C::ReMakeComboBox() {
	static auto fn = UObject::FindObject<UFunction>("Function SlotItemWidget.SlotItemWidget_C.ReMakeComboBox");

	struct ReMakeComboBox_Params {
		
	}; ReMakeComboBox_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function SlotItemWidget.SlotItemWidget_C.BndEvt__Button_82_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature
inline void USlotItemWidget_C::BndEvt__Button_82_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function SlotItemWidget.SlotItemWidget_C.BndEvt__Button_82_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature");

	struct BndEvt__Button_82_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature_Params {
		
	}; BndEvt__Button_82_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function SlotItemWidget.SlotItemWidget_C.鉹@t元_1
inline void USlotItemWidget_C::鉹@t元_1(int32_t LanguageIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function SlotItemWidget.SlotItemWidget_C.鉹@t元_1");

	struct 鉹@t元_1_Params {
		int32_t LanguageIndex;
	}; 鉹@t元_1_Params Params;

	Params.LanguageIndex = LanguageIndex;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function SlotItemWidget.SlotItemWidget_C.Destruct
inline void USlotItemWidget_C::Destruct() {
	static auto fn = UObject::FindObject<UFunction>("Function SlotItemWidget.SlotItemWidget_C.Destruct");

	struct Destruct_Params {
		
	}; Destruct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function SlotItemWidget.SlotItemWidget_C.BndEvt__LeftA_1_K2Node_ComponentBoundEvent_9_CilckBtn__DelegateSignature
inline void USlotItemWidget_C::BndEvt__LeftA_1_K2Node_ComponentBoundEvent_9_CilckBtn__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function SlotItemWidget.SlotItemWidget_C.BndEvt__LeftA_1_K2Node_ComponentBoundEvent_9_CilckBtn__DelegateSignature");

	struct BndEvt__LeftA_1_K2Node_ComponentBoundEvent_9_CilckBtn__DelegateSignature_Params {
		
	}; BndEvt__LeftA_1_K2Node_ComponentBoundEvent_9_CilckBtn__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function SlotItemWidget.SlotItemWidget_C.BndEvt__RightA_1_K2Node_ComponentBoundEvent_14_CilckBtn__DelegateSignature
inline void USlotItemWidget_C::BndEvt__RightA_1_K2Node_ComponentBoundEvent_14_CilckBtn__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function SlotItemWidget.SlotItemWidget_C.BndEvt__RightA_1_K2Node_ComponentBoundEvent_14_CilckBtn__DelegateSignature");

	struct BndEvt__RightA_1_K2Node_ComponentBoundEvent_14_CilckBtn__DelegateSignature_Params {
		
	}; BndEvt__RightA_1_K2Node_ComponentBoundEvent_14_CilckBtn__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function SlotItemWidget.SlotItemWidget_C.BndEvt__EditableText_79_K2Node_ComponentBoundEvent_15_OnEditableTextChangedEvent__DelegateSignature
inline void USlotItemWidget_C::BndEvt__EditableText_79_K2Node_ComponentBoundEvent_15_OnEditableTextChangedEvent__DelegateSignature(struct FText& Text) {
	static auto fn = UObject::FindObject<UFunction>("Function SlotItemWidget.SlotItemWidget_C.BndEvt__EditableText_79_K2Node_ComponentBoundEvent_15_OnEditableTextChangedEvent__DelegateSignature");

	struct BndEvt__EditableText_79_K2Node_ComponentBoundEvent_15_OnEditableTextChangedEvent__DelegateSignature_Params {
		struct FText& Text;
	}; BndEvt__EditableText_79_K2Node_ComponentBoundEvent_15_OnEditableTextChangedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Text = Params.Text;

}

// Function SlotItemWidget.SlotItemWidget_C.BndEvt__EditableText_79_K2Node_ComponentBoundEvent_16_OnEditableTextCommittedEvent__DelegateSignature
inline void USlotItemWidget_C::BndEvt__EditableText_79_K2Node_ComponentBoundEvent_16_OnEditableTextCommittedEvent__DelegateSignature(struct FText& Text, char CommitMethod) {
	static auto fn = UObject::FindObject<UFunction>("Function SlotItemWidget.SlotItemWidget_C.BndEvt__EditableText_79_K2Node_ComponentBoundEvent_16_OnEditableTextCommittedEvent__DelegateSignature");

	struct BndEvt__EditableText_79_K2Node_ComponentBoundEvent_16_OnEditableTextCommittedEvent__DelegateSignature_Params {
		struct FText& Text;
		char CommitMethod;
	}; BndEvt__EditableText_79_K2Node_ComponentBoundEvent_16_OnEditableTextCommittedEvent__DelegateSignature_Params Params;

	Params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Text = Params.Text;

}

// Function SlotItemWidget.SlotItemWidget_C.BndEvt__Button_440_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature
inline void USlotItemWidget_C::BndEvt__Button_440_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function SlotItemWidget.SlotItemWidget_C.BndEvt__Button_440_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature");

	struct BndEvt__Button_440_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature_Params {
		
	}; BndEvt__Button_440_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function SlotItemWidget.SlotItemWidget_C.鉹@t元_2
inline void USlotItemWidget_C::鉹@t元_2(int32_t Index) {
	static auto fn = UObject::FindObject<UFunction>("Function SlotItemWidget.SlotItemWidget_C.鉹@t元_2");

	struct 鉹@t元_2_Params {
		int32_t Index;
	}; 鉹@t元_2_Params Params;

	Params.Index = Index;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function SlotItemWidget.SlotItemWidget_C.SetKeyLock
inline void USlotItemWidget_C::SetKeyLock(char IsLock) {
	static auto fn = UObject::FindObject<UFunction>("Function SlotItemWidget.SlotItemWidget_C.SetKeyLock");

	struct SetKeyLock_Params {
		char IsLock;
	}; SetKeyLock_Params Params;

	Params.IsLock = IsLock;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function SlotItemWidget.SlotItemWidget_C.鉹@t元_3
inline void USlotItemWidget_C::鉹@t元_3(int32_t LanguageIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function SlotItemWidget.SlotItemWidget_C.鉹@t元_3");

	struct 鉹@t元_3_Params {
		int32_t LanguageIndex;
	}; 鉹@t元_3_Params Params;

	Params.LanguageIndex = LanguageIndex;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function SlotItemWidget.SlotItemWidget_C.SetData
inline void USlotItemWidget_C::SetData() {
	static auto fn = UObject::FindObject<UFunction>("Function SlotItemWidget.SlotItemWidget_C.SetData");

	struct SetData_Params {
		
	}; SetData_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function SlotItemWidget.SlotItemWidget_C.ExecuteUbergraph_SlotItemWidget
inline void USlotItemWidget_C::ExecuteUbergraph_SlotItemWidget(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function SlotItemWidget.SlotItemWidget_C.ExecuteUbergraph_SlotItemWidget");

	struct ExecuteUbergraph_SlotItemWidget_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_SlotItemWidget_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

