// WidgetBlueprintGeneratedClass SlotItemWidget.SlotItemWidget_C
struct USlotItemWidget_C : UBravoHotelSettingSlotWidget {
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
	int32_t Selected; // 0x664 (4)
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
	struct FString L; // 0x9D0 (16)
	char have : 0; // 0x9E0 (1)
	char IsOnEditableText : 0; // 0x9E1 (1)
	char CompletSettingData : 0; // 0x9E2 (1)
	struct Unknown CompleteSettingInfo; // 0x9E8 (136)
	struct Unknown TempSetting; // 0xA70 (136)
	char ReMarkComboBox : 0; // 0xAF8 (1)

	void GetOrgKey(char IsSubKey, struct Unknown& Key); // Function SlotItemWidget.SlotItemWidget_C.GetOrgKey(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void GetCurKey(char IsSubKey, struct Unknown& Key); // Function SlotItemWidget.SlotItemWidget_C.GetCurKey(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	struct Unknown OnKeyUp(struct Unknown MyGeometry, struct Unknown InKeyEvent); // Function SlotItemWidget.SlotItemWidget_C.OnKeyUp(BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void CheckMinMaxValue(float CheckValue, struct FString& RetString); // Function SlotItemWidget.SlotItemWidget_C.CheckMinMaxValue(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void CheckConvertFloatToString(float Value, struct FString& ret); // Function SlotItemWidget.SlotItemWidget_C.CheckConvertFloatToString(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void SetEnable(char State); // Function SlotItemWidget.SlotItemWidget_C.SetEnable(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void SetSliderValue(float InputValue, float& OutValue); // Function SlotItemWidget.SlotItemWidget_C.SetSliderValue(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void GetKeyNameFromKey(struct Unknown Key, struct FString& Name); // Function SlotItemWidget.SlotItemWidget_C.GetKeyNameFromKey(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	struct Unknown OnGenerateWidget_1(struct FString Item); // Function SlotItemWidget.SlotItemWidget_C.OnGenerateWidget_1(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Construct(); // Function SlotItemWidget.SlotItemWidget_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void BndEvt__Button_106_K2Node_ComponentBoundEvent_0_OnButtonHoverEv(); // Function SlotItemWidget.SlotItemWidget_C.BndEvt__Button_106_K2Node_ComponentBoundEvent_0_OnButtonHoverEv(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void BndEvt__Button_106_K2Node_ComponentBoundEvent_1_OnButtonHoverEv(); // Function SlotItemWidget.SlotItemWidget_C.BndEvt__Button_106_K2Node_ComponentBoundEvent_1_OnButtonHoverEv(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void BndEvt__Slider_138_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature(float Value); // Function SlotItemWidget.SlotItemWidget_C.BndEvt__Slider_138_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void SetValue(float Value); // Function SlotItemWidget.SlotItemWidget_C.SetValue(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void BndEvt__ComboBoxString_236_K2Node_ComponentBoundEvent_3_OnOpeningEvent__DelegateSignature(); // Function SlotItemWidget.SlotItemWidget_C.BndEvt__ComboBoxString_236_K2Node_ComponentBoundEvent_3_OnOpeningEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void BndEvt__ComboBoxString_236_K2Node_ComponentBoundEvent_4_OnSelectionChangedEvent__DelegateSignature(struct FString SelectedItem, char SelectionType); // Function SlotItemWidget.SlotItemWidget_C.BndEvt__ComboBoxString_236_K2Node_ComponentBoundEvent_4_OnSelectionChangedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void BndEvt__Slider_138_K2Node_ComponentBoundEvent_5_OnMouseCaptureBeginEvent__DelegateSignature(); // Function SlotItemWidget.SlotItemWidget_C.BndEvt__Slider_138_K2Node_ComponentBoundEvent_5_OnMouseCaptureBeginEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void BndEvt__Slider_138_K2Node_ComponentBoundEvent_7_OnMouseCaptureEndEvent__DelegateSignature(); // Function SlotItemWidget.SlotItemWidget_C.BndEvt__Slider_138_K2Node_ComponentBoundEvent_7_OnMouseCaptureEndEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Broadcast(float ValueIndex); // Function SlotItemWidget.SlotItemWidget_C.Broadcast(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void InitDataByKeyInfo(char IsSub, struct Unknown& Index, char IsInit); // Function SlotItemWidget.SlotItemWidget_C.InitDataByKeyInfo(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void BndEvt__MainKeyInput_K2Node_ComponentBoundEvent_19_OnKeySelected__DelegateSignature(struct Unknown SelectedKey); // Function SlotItemWidget.SlotItemWidget_C.BndEvt__MainKeyInput_K2Node_ComponentBoundEvent_19_OnKeySelected__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void BndEvt__SubKeyInput_K2Node_ComponentBoundEvent_20_OnKeySelected__DelegateSignature(struct Unknown SelectedKey); // Function SlotItemWidget.SlotItemWidget_C.BndEvt__SubKeyInput_K2Node_ComponentBoundEvent_20_OnKeySelected__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void BndEvt__MainKeyInput_K2Node_ComponentBoundEvent_10_OnIsSelectingKeyChanged__DelegateSignature(); // Function SlotItemWidget.SlotItemWidget_C.BndEvt__MainKeyInput_K2Node_ComponentBoundEvent_10_OnIsSelectingKeyChanged__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void BndEvt__SubKeyInput_K2Node_ComponentBoundEvent_12_OnIsSelectingKeyChanged__DelegateSignature(); // Function SlotItemWidget.SlotItemWidget_C.BndEvt__SubKeyInput_K2Node_ComponentBoundEvent_12_OnIsSelectingKeyChanged__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void SetPercentValue(float Value); // Function SlotItemWidget.SlotItemWidget_C.SetPercentValue(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void SetSelectIndexComboBox(int32_t Index, char BroadcastChange); // Function SlotItemWidget.SlotItemWidget_C.SetSelectIndexComboBox(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void SetSelectIndexSelectBox(int32_t Index, char BroadcastChange); // Function SlotItemWidget.SlotItemWidget_C.SetSelectIndexSelectBox(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void InitDataByAxisKeyInfo(char IsSub, struct Unknown& Index, char IsInit); // Function SlotItemWidget.SlotItemWidget_C.InitDataByAxisKeyInfo(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void SubSelectingKeyChanged(char IsSelectingKey); // Function SlotItemWidget.SlotItemWidget_C.SubSelectingKeyChanged(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void MainSelectingKeyChanged(char IsSelectingKey); // Function SlotItemWidget.SlotItemWidget_C.MainSelectingKeyChanged(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void BndEvt__RightA_K2Node_ComponentBoundEvent_11_CilckBtn__DelegateSignature(); // Function SlotItemWidget.SlotItemWidget_C.BndEvt__RightA_K2Node_ComponentBoundEvent_11_CilckBtn__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void BndEvt__LeftA_K2Node_ComponentBoundEvent_13_CilckBtn__DelegateSignature(); // Function SlotItemWidget.SlotItemWidget_C.BndEvt__LeftA_K2Node_ComponentBoundEvent_13_CilckBtn__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void BndEvt__Button_Type_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature(); // Function SlotItemWidget.SlotItemWidget_C.BndEvt__Button_Type_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ResolutionSelected(int32_t Index, int32_t ResolutionX, int32_t ResolutionY); // Function SlotItemWidget.SlotItemWidget_C.ResolutionSelected(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void SetDisplayMode(char WindowMode); // Function SlotItemWidget.SlotItemWidget_C.SetDisplayMode(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ReMakeComboBox(); // Function SlotItemWidget.SlotItemWidget_C.ReMakeComboBox(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void BndEvt__Button_82_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature(); // Function SlotItemWidget.SlotItemWidget_C.BndEvt__Button_82_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void a_1(int32_t LanguageIndex); // Function SlotItemWidget.SlotItemWidget_C.a_1(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Destruct(); // Function SlotItemWidget.SlotItemWidget_C.Destruct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void BndEvt__LeftA_1_K2Node_ComponentBoundEvent_9_CilckBtn__DelegateSignature(); // Function SlotItemWidget.SlotItemWidget_C.BndEvt__LeftA_1_K2Node_ComponentBoundEvent_9_CilckBtn__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void BndEvt__RightA_1_K2Node_ComponentBoundEvent_14_CilckBtn__DelegateSignature(); // Function SlotItemWidget.SlotItemWidget_C.BndEvt__RightA_1_K2Node_ComponentBoundEvent_14_CilckBtn__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void BndEvt__EditableText_79_K2Node_ComponentBoundEvent_15_OnEditableTextChangedEvent__DelegateSignature(struct FText& Text); // Function SlotItemWidget.SlotItemWidget_C.BndEvt__EditableText_79_K2Node_ComponentBoundEvent_15_OnEditableTextChangedEvent__DelegateSignature(HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void BndEvt__EditableText_79_K2Node_ComponentBoundEvent_16_OnEditableTextCommittedEvent__DelegateSignature(struct FText& Text, char CommitMethod); // Function SlotItemWidget.SlotItemWidget_C.BndEvt__EditableText_79_K2Node_ComponentBoundEvent_16_OnEditableTextCommittedEvent__DelegateSignature(HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void BndEvt__Button_440_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature(); // Function SlotItemWidget.SlotItemWidget_C.BndEvt__Button_440_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void a_2(int32_t Index); // Function SlotItemWidget.SlotItemWidget_C.a_2(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void SetKeyLock(char IsLock); // Function SlotItemWidget.SlotItemWidget_C.SetKeyLock(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void a_3(int32_t LanguageIndex); // Function SlotItemWidget.SlotItemWidget_C.a_3(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void SetData(); // Function SlotItemWidget.SlotItemWidget_C.SetData(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ExecuteUbergraph_SlotItemWidget(int32_t EntryPoint); // Function SlotItemWidget.SlotItemWidget_C.ExecuteUbergraph_SlotItemWidget(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
};

