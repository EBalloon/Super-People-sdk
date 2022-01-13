// WidgetBlueprintGeneratedClass DevWidget.DevWidget_C
class UDevWidget_C : public UBravoHotelSettingSubWidget {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x298 (8)
	struct UButton ButtonClearStats; // 0x2A0 (8)
	struct UButton ButtonDebugVehicle; // 0x2A8 (8)
	struct UButton ButtonEngine; // 0x2B0 (8)
	struct UButton ButtonFPS; // 0x2B8 (8)
	struct UButton ButtonGameplayTick; // 0x2C0 (8)
	struct UButton ButtonMemory; // 0x2C8 (8)
	struct UButton ButtonNetwork; // 0x2D0 (8)
	struct UButton ButtonParticles; // 0x2D8 (8)
	struct UButton ButtonSceneRendering; // 0x2E0 (8)
	struct UButton ButtonStatSlow; // 0x2E8 (8)
	struct UButton ButtonUnitGraph; // 0x2F0 (8)
	struct UComboBoxString ComboBoxViewModes; // 0x2F8 (8)
	struct UComboBoxString ComboBoxViewModes1; // 0x300 (8)
	struct UButton DeleteSettingsSaveFile; // 0x308 (8)
	struct USlider GameSpeed; // 0x310 (8)
	struct UEditableText GameSpeedEdit; // 0x318 (8)
	struct UHorizontalBox HorizontalBox_8; // 0x320 (8)
	struct UHorizontalBox HorizontalBox_9; // 0x328 (8)
	struct UHorizontalBox HorizontalBox_10; // 0x330 (8)
	struct UHorizontalBox HorizontalBox_11; // 0x338 (8)
	struct UHorizontalBox HorizontalBox_12; // 0x340 (8)
	struct UHorizontalBox HorizontalBox_13; // 0x348 (8)
	struct UCheckBox PauseGame; // 0x350 (8)
	struct UCheckBox TemporalAACatmullRomCheck; // 0x358 (8)
	struct UEditableText TemporalAACurrentFrameWeightEdit; // 0x360 (8)
	struct UEditableText TemporalAAFilterSizeEdit; // 0x368 (8)
	struct UCheckBox TemporalAAPauseCorrectChek; // 0x370 (8)
	struct UEditableText TemporalAASamplesEdit; // 0x378 (8)
	struct UEditableText TonemapperSharpenEdit; // 0x380 (8)
	struct UHorizontalBox ToolTip_DeleteSettings; // 0x388 (8)
	struct UHorizontalBox ToolTip_GameSpeed; // 0x390 (8)
	struct UHorizontalBox ToolTip_PauseGame; // 0x398 (8)
	struct UVerticalBox ToolTip_StatCommands; // 0x3A0 (8)
	struct UVerticalBox ToolTip_ViewModes; // 0x3A8 (8)
	struct UVerticalBox ToolTip_ViewModes_2; // 0x3B0 (8)
	struct UBP_GameSettings_C Game Settings; // 0x3B8 (8)
	float Time Dilation Value Binding; // 0x3C0 (4)
	struct FText Time Dilation Text Binding; // 0x3C8 (24)
	struct FMulticastInlineDelegate Settings File Deleted; // 0x3E0 (16)
	struct FMulticastInlineDelegate Pause Game When Menu Open; // 0x3F0 (16)
	struct FText TemporalAAFilterSizeTextBinding; // 0x400 (24)
	struct FText TemporalAACurrentFrameWeightTextBinding; // 0x418 (24)
	struct FText TemporalAASamplesTextBinding; // 0x430 (24)
	struct FText TonemapperSharpenTextBinding; // 0x448 (24)
	float TemporalAAFilterSizeValue; // 0x460 (4)
	float TemporalAACurrentFrameWeightValue; // 0x464 (4)
	int32_t TemporalAASamplesValue; // 0x468 (4)
	float TonemapperSharpenValue; // 0x46C (4)
	struct FName TempKey; // 0x470 (8)
	struct TMap<struct FName, struct FString> Temp; // 0x478 (80)
	enum class ESettingType Type; // 0x4C8 (1)
	float TempValue2; // 0x4CC (4)
	char IsOnDebugVehicle : 0; // 0x4D0 (1)

	struct UWidget Generate Combobox Widget Item(struct FString Item); // Function DevWidget.DevWidget_C.Generate Combobox Widget Item(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void Refresh Slider Time Dilation(float Value); // Function DevWidget.DevWidget_C.Refresh Slider Time Dilation(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void Refresh Pause Game(char InIsChecked); // Function DevWidget.DevWidget_C.Refresh Pause Game(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void Construct(); // Function DevWidget.DevWidget_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void BndEvt__My Slider_K2Node_ComponentBoundEvent_1112_OnFloatValueChangedEvent__DelegateSignature(float Value); // Function DevWidget.DevWidget_C.BndEvt__My Slider_K2Node_ComponentBoundEvent_1112_OnFloatValueChangedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void BndEvt__My CheckBox_K2Node_ComponentBoundEvent_1130_OnCheckBoxComponentStateChanged__DelegateSignature(char bIsChecked); // Function DevWidget.DevWidget_C.BndEvt__My CheckBox_K2Node_ComponentBoundEvent_1130_OnCheckBoxComponentStateChanged__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void BndEvt__My Button_K2Node_ComponentBoundEvent_2111_OnButtonClickedEvent__DelegateSignature(); // Function DevWidget.DevWidget_C.BndEvt__My Button_K2Node_ComponentBoundEvent_2111_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void BndEvt__My Edit Value_K2Node_ComponentBoundEvent_165_OnEditableTextCommittedEvent__DelegateSignature(struct FText& Text, char CommitMethod); // Function DevWidget.DevWidget_C.BndEvt__My Edit Value_K2Node_ComponentBoundEvent_165_OnEditableTextCommittedEvent__DelegateSignature(HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_248_OnButtonClickedEvent__DelegateSignature(); // Function DevWidget.DevWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_248_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void BndEvt__ButtonMemory_K2Node_ComponentBoundEvent_395_OnButtonClickedEvent__DelegateSignature(); // Function DevWidget.DevWidget_C.BndEvt__ButtonMemory_K2Node_ComponentBoundEvent_395_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void BndEvt__ButtonNetwork_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function DevWidget.DevWidget_C.BndEvt__ButtonNetwork_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void BndEvt__ButtonParticles_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function DevWidget.DevWidget_C.BndEvt__ButtonParticles_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void BndEvt__ButtonStatTick_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // Function DevWidget.DevWidget_C.BndEvt__ButtonStatTick_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void BndEvt__ButtonSceneRendering_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature(); // Function DevWidget.DevWidget_C.BndEvt__ButtonSceneRendering_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void BndEvt__ButtonInitViews_K2Node_ComponentBoundEvent_591_OnButtonClickedEvent__DelegateSignature(); // Function DevWidget.DevWidget_C.BndEvt__ButtonInitViews_K2Node_ComponentBoundEvent_591_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void BndEvt__ButtonEngine_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature(); // Function DevWidget.DevWidget_C.BndEvt__ButtonEngine_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void BndEvt__MyComboBox_K2Node_ComponentBoundEvent_128_OnSelectionChangedEvent__DelegateSignature(struct FString SelectedItem, char SelectionType); // Function DevWidget.DevWidget_C.BndEvt__MyComboBox_K2Node_ComponentBoundEvent_128_OnSelectionChangedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void BndEvt__ButtonStatSlow_K2Node_ComponentBoundEvent_712_OnButtonClickedEvent__DelegateSignature(); // Function DevWidget.DevWidget_C.BndEvt__ButtonStatSlow_K2Node_ComponentBoundEvent_712_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void BndEvt__ButtonClearStats_K2Node_ComponentBoundEvent_739_OnButtonClickedEvent__DelegateSignature(); // Function DevWidget.DevWidget_C.BndEvt__ButtonClearStats_K2Node_ComponentBoundEvent_739_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void BndEvt__TemporalAAFilterSizeEdit_K2Node_ComponentBoundEvent_881_OnEditableTextCommittedEvent__DelegateSignature(struct FText& Text, char CommitMethod); // Function DevWidget.DevWidget_C.BndEvt__TemporalAAFilterSizeEdit_K2Node_ComponentBoundEvent_881_OnEditableTextCommittedEvent__DelegateSignature(HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void BndEvt__TemporalAACurrentFrameWeightEdit_K2Node_ComponentBoundEvent_1061_OnEditableTextCommittedEvent__DelegateSignature(struct FText& Text, char CommitMethod); // Function DevWidget.DevWidget_C.BndEvt__TemporalAACurrentFrameWeightEdit_K2Node_ComponentBoundEvent_1061_OnEditableTextCommittedEvent__DelegateSignature(HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void BndEvt__TemporalAASamplesEdit_K2Node_ComponentBoundEvent_1099_OnEditableTextCommittedEvent__DelegateSignature(struct FText& Text, char CommitMethod); // Function DevWidget.DevWidget_C.BndEvt__TemporalAASamplesEdit_K2Node_ComponentBoundEvent_1099_OnEditableTextCommittedEvent__DelegateSignature(HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void BndEvt__TonemapperSharpenEdit_K2Node_ComponentBoundEvent_1141_OnEditableTextCommittedEvent__DelegateSignature(struct FText& Text, char CommitMethod); // Function DevWidget.DevWidget_C.BndEvt__TonemapperSharpenEdit_K2Node_ComponentBoundEvent_1141_OnEditableTextCommittedEvent__DelegateSignature(HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void BndEvt__TemporalAACatmullRomCheck_K2Node_ComponentBoundEvent_1217_OnCheckBoxComponentStateChanged__DelegateSignature(char bIsChecked); // Function DevWidget.DevWidget_C.BndEvt__TemporalAACatmullRomCheck_K2Node_ComponentBoundEvent_1217_OnCheckBoxComponentStateChanged__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void BndEvt__TemporalAAPauseCorrectChek_K2Node_ComponentBoundEvent_1237_OnCheckBoxComponentStateChanged__DelegateSignature(char bIsChecked); // Function DevWidget.DevWidget_C.BndEvt__TemporalAAPauseCorrectChek_K2Node_ComponentBoundEvent_1237_OnCheckBoxComponentStateChanged__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature(); // Function DevWidget.DevWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void BndEvt__ComboBoxViewModes1_K2Node_ComponentBoundEvent_6_OnSelectionChangedEvent__DelegateSignature(struct FString SelectedItem, char SelectionType); // Function DevWidget.DevWidget_C.BndEvt__ComboBoxViewModes1_K2Node_ComponentBoundEvent_6_OnSelectionChangedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void InitDefault(); // Function DevWidget.DevWidget_C.InitDefault(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void ExecuteUbergraph_DevWidget(int32_t EntryPoint); // Function DevWidget.DevWidget_C.ExecuteUbergraph_DevWidget(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void Pause Game When Menu Open__DelegateSignature(char Pause Game On Menu Open); // Function DevWidget.DevWidget_C.Pause Game When Menu Open__DelegateSignature(Public|Delegate|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void Settings File Deleted__DelegateSignature(); // Function DevWidget.DevWidget_C.Settings File Deleted__DelegateSignature(Public|Delegate|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
};

// Function DevWidget.DevWidget_C.Generate Combobox Widget Item
inline struct UWidget UDevWidget_C::Generate Combobox Widget Item(struct FString Item) {
	static auto fn = UObject::FindObject<UFunction>("Function DevWidget.DevWidget_C.Generate Combobox Widget Item");

	struct Generate Combobox Widget Item_Params {
		struct FString Item;
		struct UWidget ReturnValue;

	}; Generate Combobox Widget Item_Params Params;

	Params.Item = Item;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function DevWidget.DevWidget_C.Refresh Slider Time Dilation
inline void UDevWidget_C::Refresh Slider Time Dilation(float Value) {
	static auto fn = UObject::FindObject<UFunction>("Function DevWidget.DevWidget_C.Refresh Slider Time Dilation");

	struct Refresh Slider Time Dilation_Params {
		float Value;
	}; Refresh Slider Time Dilation_Params Params;

	Params.Value = Value;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function DevWidget.DevWidget_C.Refresh Pause Game
inline void UDevWidget_C::Refresh Pause Game(char InIsChecked) {
	static auto fn = UObject::FindObject<UFunction>("Function DevWidget.DevWidget_C.Refresh Pause Game");

	struct Refresh Pause Game_Params {
		char InIsChecked;
	}; Refresh Pause Game_Params Params;

	Params.InIsChecked = InIsChecked;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function DevWidget.DevWidget_C.Construct
inline void UDevWidget_C::Construct() {
	static auto fn = UObject::FindObject<UFunction>("Function DevWidget.DevWidget_C.Construct");

	struct Construct_Params {
		
	}; Construct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function DevWidget.DevWidget_C.BndEvt__My Slider_K2Node_ComponentBoundEvent_1112_OnFloatValueChangedEvent__DelegateSignature
inline void UDevWidget_C::BndEvt__My Slider_K2Node_ComponentBoundEvent_1112_OnFloatValueChangedEvent__DelegateSignature(float Value) {
	static auto fn = UObject::FindObject<UFunction>("Function DevWidget.DevWidget_C.BndEvt__My Slider_K2Node_ComponentBoundEvent_1112_OnFloatValueChangedEvent__DelegateSignature");

	struct BndEvt__My Slider_K2Node_ComponentBoundEvent_1112_OnFloatValueChangedEvent__DelegateSignature_Params {
		float Value;
	}; BndEvt__My Slider_K2Node_ComponentBoundEvent_1112_OnFloatValueChangedEvent__DelegateSignature_Params Params;

	Params.Value = Value;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function DevWidget.DevWidget_C.BndEvt__My CheckBox_K2Node_ComponentBoundEvent_1130_OnCheckBoxComponentStateChanged__DelegateSignature
inline void UDevWidget_C::BndEvt__My CheckBox_K2Node_ComponentBoundEvent_1130_OnCheckBoxComponentStateChanged__DelegateSignature(char bIsChecked) {
	static auto fn = UObject::FindObject<UFunction>("Function DevWidget.DevWidget_C.BndEvt__My CheckBox_K2Node_ComponentBoundEvent_1130_OnCheckBoxComponentStateChanged__DelegateSignature");

	struct BndEvt__My CheckBox_K2Node_ComponentBoundEvent_1130_OnCheckBoxComponentStateChanged__DelegateSignature_Params {
		char bIsChecked;
	}; BndEvt__My CheckBox_K2Node_ComponentBoundEvent_1130_OnCheckBoxComponentStateChanged__DelegateSignature_Params Params;

	Params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function DevWidget.DevWidget_C.BndEvt__My Button_K2Node_ComponentBoundEvent_2111_OnButtonClickedEvent__DelegateSignature
inline void UDevWidget_C::BndEvt__My Button_K2Node_ComponentBoundEvent_2111_OnButtonClickedEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function DevWidget.DevWidget_C.BndEvt__My Button_K2Node_ComponentBoundEvent_2111_OnButtonClickedEvent__DelegateSignature");

	struct BndEvt__My Button_K2Node_ComponentBoundEvent_2111_OnButtonClickedEvent__DelegateSignature_Params {
		
	}; BndEvt__My Button_K2Node_ComponentBoundEvent_2111_OnButtonClickedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function DevWidget.DevWidget_C.BndEvt__My Edit Value_K2Node_ComponentBoundEvent_165_OnEditableTextCommittedEvent__DelegateSignature
inline void UDevWidget_C::BndEvt__My Edit Value_K2Node_ComponentBoundEvent_165_OnEditableTextCommittedEvent__DelegateSignature(struct FText& Text, char CommitMethod) {
	static auto fn = UObject::FindObject<UFunction>("Function DevWidget.DevWidget_C.BndEvt__My Edit Value_K2Node_ComponentBoundEvent_165_OnEditableTextCommittedEvent__DelegateSignature");

	struct BndEvt__My Edit Value_K2Node_ComponentBoundEvent_165_OnEditableTextCommittedEvent__DelegateSignature_Params {
		struct FText& Text;
		char CommitMethod;
	}; BndEvt__My Edit Value_K2Node_ComponentBoundEvent_165_OnEditableTextCommittedEvent__DelegateSignature_Params Params;

	Params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Text = Params.Text;

}

// Function DevWidget.DevWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_248_OnButtonClickedEvent__DelegateSignature
inline void UDevWidget_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_248_OnButtonClickedEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function DevWidget.DevWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_248_OnButtonClickedEvent__DelegateSignature");

	struct BndEvt__Button_0_K2Node_ComponentBoundEvent_248_OnButtonClickedEvent__DelegateSignature_Params {
		
	}; BndEvt__Button_0_K2Node_ComponentBoundEvent_248_OnButtonClickedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function DevWidget.DevWidget_C.BndEvt__ButtonMemory_K2Node_ComponentBoundEvent_395_OnButtonClickedEvent__DelegateSignature
inline void UDevWidget_C::BndEvt__ButtonMemory_K2Node_ComponentBoundEvent_395_OnButtonClickedEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function DevWidget.DevWidget_C.BndEvt__ButtonMemory_K2Node_ComponentBoundEvent_395_OnButtonClickedEvent__DelegateSignature");

	struct BndEvt__ButtonMemory_K2Node_ComponentBoundEvent_395_OnButtonClickedEvent__DelegateSignature_Params {
		
	}; BndEvt__ButtonMemory_K2Node_ComponentBoundEvent_395_OnButtonClickedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function DevWidget.DevWidget_C.BndEvt__ButtonNetwork_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
inline void UDevWidget_C::BndEvt__ButtonNetwork_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function DevWidget.DevWidget_C.BndEvt__ButtonNetwork_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	struct BndEvt__ButtonNetwork_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params {
		
	}; BndEvt__ButtonNetwork_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function DevWidget.DevWidget_C.BndEvt__ButtonParticles_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
inline void UDevWidget_C::BndEvt__ButtonParticles_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function DevWidget.DevWidget_C.BndEvt__ButtonParticles_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	struct BndEvt__ButtonParticles_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params {
		
	}; BndEvt__ButtonParticles_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function DevWidget.DevWidget_C.BndEvt__ButtonStatTick_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
inline void UDevWidget_C::BndEvt__ButtonStatTick_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function DevWidget.DevWidget_C.BndEvt__ButtonStatTick_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	struct BndEvt__ButtonStatTick_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params {
		
	}; BndEvt__ButtonStatTick_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function DevWidget.DevWidget_C.BndEvt__ButtonSceneRendering_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
inline void UDevWidget_C::BndEvt__ButtonSceneRendering_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function DevWidget.DevWidget_C.BndEvt__ButtonSceneRendering_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");

	struct BndEvt__ButtonSceneRendering_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params {
		
	}; BndEvt__ButtonSceneRendering_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function DevWidget.DevWidget_C.BndEvt__ButtonInitViews_K2Node_ComponentBoundEvent_591_OnButtonClickedEvent__DelegateSignature
inline void UDevWidget_C::BndEvt__ButtonInitViews_K2Node_ComponentBoundEvent_591_OnButtonClickedEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function DevWidget.DevWidget_C.BndEvt__ButtonInitViews_K2Node_ComponentBoundEvent_591_OnButtonClickedEvent__DelegateSignature");

	struct BndEvt__ButtonInitViews_K2Node_ComponentBoundEvent_591_OnButtonClickedEvent__DelegateSignature_Params {
		
	}; BndEvt__ButtonInitViews_K2Node_ComponentBoundEvent_591_OnButtonClickedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function DevWidget.DevWidget_C.BndEvt__ButtonEngine_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
inline void UDevWidget_C::BndEvt__ButtonEngine_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function DevWidget.DevWidget_C.BndEvt__ButtonEngine_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");

	struct BndEvt__ButtonEngine_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params {
		
	}; BndEvt__ButtonEngine_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function DevWidget.DevWidget_C.BndEvt__MyComboBox_K2Node_ComponentBoundEvent_128_OnSelectionChangedEvent__DelegateSignature
inline void UDevWidget_C::BndEvt__MyComboBox_K2Node_ComponentBoundEvent_128_OnSelectionChangedEvent__DelegateSignature(struct FString SelectedItem, char SelectionType) {
	static auto fn = UObject::FindObject<UFunction>("Function DevWidget.DevWidget_C.BndEvt__MyComboBox_K2Node_ComponentBoundEvent_128_OnSelectionChangedEvent__DelegateSignature");

	struct BndEvt__MyComboBox_K2Node_ComponentBoundEvent_128_OnSelectionChangedEvent__DelegateSignature_Params {
		struct FString SelectedItem;
		char SelectionType;
	}; BndEvt__MyComboBox_K2Node_ComponentBoundEvent_128_OnSelectionChangedEvent__DelegateSignature_Params Params;

	Params.SelectedItem = SelectedItem;
	Params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function DevWidget.DevWidget_C.BndEvt__ButtonStatSlow_K2Node_ComponentBoundEvent_712_OnButtonClickedEvent__DelegateSignature
inline void UDevWidget_C::BndEvt__ButtonStatSlow_K2Node_ComponentBoundEvent_712_OnButtonClickedEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function DevWidget.DevWidget_C.BndEvt__ButtonStatSlow_K2Node_ComponentBoundEvent_712_OnButtonClickedEvent__DelegateSignature");

	struct BndEvt__ButtonStatSlow_K2Node_ComponentBoundEvent_712_OnButtonClickedEvent__DelegateSignature_Params {
		
	}; BndEvt__ButtonStatSlow_K2Node_ComponentBoundEvent_712_OnButtonClickedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function DevWidget.DevWidget_C.BndEvt__ButtonClearStats_K2Node_ComponentBoundEvent_739_OnButtonClickedEvent__DelegateSignature
inline void UDevWidget_C::BndEvt__ButtonClearStats_K2Node_ComponentBoundEvent_739_OnButtonClickedEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function DevWidget.DevWidget_C.BndEvt__ButtonClearStats_K2Node_ComponentBoundEvent_739_OnButtonClickedEvent__DelegateSignature");

	struct BndEvt__ButtonClearStats_K2Node_ComponentBoundEvent_739_OnButtonClickedEvent__DelegateSignature_Params {
		
	}; BndEvt__ButtonClearStats_K2Node_ComponentBoundEvent_739_OnButtonClickedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function DevWidget.DevWidget_C.BndEvt__TemporalAAFilterSizeEdit_K2Node_ComponentBoundEvent_881_OnEditableTextCommittedEvent__DelegateSignature
inline void UDevWidget_C::BndEvt__TemporalAAFilterSizeEdit_K2Node_ComponentBoundEvent_881_OnEditableTextCommittedEvent__DelegateSignature(struct FText& Text, char CommitMethod) {
	static auto fn = UObject::FindObject<UFunction>("Function DevWidget.DevWidget_C.BndEvt__TemporalAAFilterSizeEdit_K2Node_ComponentBoundEvent_881_OnEditableTextCommittedEvent__DelegateSignature");

	struct BndEvt__TemporalAAFilterSizeEdit_K2Node_ComponentBoundEvent_881_OnEditableTextCommittedEvent__DelegateSignature_Params {
		struct FText& Text;
		char CommitMethod;
	}; BndEvt__TemporalAAFilterSizeEdit_K2Node_ComponentBoundEvent_881_OnEditableTextCommittedEvent__DelegateSignature_Params Params;

	Params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Text = Params.Text;

}

// Function DevWidget.DevWidget_C.BndEvt__TemporalAACurrentFrameWeightEdit_K2Node_ComponentBoundEvent_1061_OnEditableTextCommittedEvent__DelegateSignature
inline void UDevWidget_C::BndEvt__TemporalAACurrentFrameWeightEdit_K2Node_ComponentBoundEvent_1061_OnEditableTextCommittedEvent__DelegateSignature(struct FText& Text, char CommitMethod) {
	static auto fn = UObject::FindObject<UFunction>("Function DevWidget.DevWidget_C.BndEvt__TemporalAACurrentFrameWeightEdit_K2Node_ComponentBoundEvent_1061_OnEditableTextCommittedEvent__DelegateSignature");

	struct BndEvt__TemporalAACurrentFrameWeightEdit_K2Node_ComponentBoundEvent_1061_OnEditableTextCommittedEvent__DelegateSignature_Params {
		struct FText& Text;
		char CommitMethod;
	}; BndEvt__TemporalAACurrentFrameWeightEdit_K2Node_ComponentBoundEvent_1061_OnEditableTextCommittedEvent__DelegateSignature_Params Params;

	Params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Text = Params.Text;

}

// Function DevWidget.DevWidget_C.BndEvt__TemporalAASamplesEdit_K2Node_ComponentBoundEvent_1099_OnEditableTextCommittedEvent__DelegateSignature
inline void UDevWidget_C::BndEvt__TemporalAASamplesEdit_K2Node_ComponentBoundEvent_1099_OnEditableTextCommittedEvent__DelegateSignature(struct FText& Text, char CommitMethod) {
	static auto fn = UObject::FindObject<UFunction>("Function DevWidget.DevWidget_C.BndEvt__TemporalAASamplesEdit_K2Node_ComponentBoundEvent_1099_OnEditableTextCommittedEvent__DelegateSignature");

	struct BndEvt__TemporalAASamplesEdit_K2Node_ComponentBoundEvent_1099_OnEditableTextCommittedEvent__DelegateSignature_Params {
		struct FText& Text;
		char CommitMethod;
	}; BndEvt__TemporalAASamplesEdit_K2Node_ComponentBoundEvent_1099_OnEditableTextCommittedEvent__DelegateSignature_Params Params;

	Params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Text = Params.Text;

}

// Function DevWidget.DevWidget_C.BndEvt__TonemapperSharpenEdit_K2Node_ComponentBoundEvent_1141_OnEditableTextCommittedEvent__DelegateSignature
inline void UDevWidget_C::BndEvt__TonemapperSharpenEdit_K2Node_ComponentBoundEvent_1141_OnEditableTextCommittedEvent__DelegateSignature(struct FText& Text, char CommitMethod) {
	static auto fn = UObject::FindObject<UFunction>("Function DevWidget.DevWidget_C.BndEvt__TonemapperSharpenEdit_K2Node_ComponentBoundEvent_1141_OnEditableTextCommittedEvent__DelegateSignature");

	struct BndEvt__TonemapperSharpenEdit_K2Node_ComponentBoundEvent_1141_OnEditableTextCommittedEvent__DelegateSignature_Params {
		struct FText& Text;
		char CommitMethod;
	}; BndEvt__TonemapperSharpenEdit_K2Node_ComponentBoundEvent_1141_OnEditableTextCommittedEvent__DelegateSignature_Params Params;

	Params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Text = Params.Text;

}

// Function DevWidget.DevWidget_C.BndEvt__TemporalAACatmullRomCheck_K2Node_ComponentBoundEvent_1217_OnCheckBoxComponentStateChanged__DelegateSignature
inline void UDevWidget_C::BndEvt__TemporalAACatmullRomCheck_K2Node_ComponentBoundEvent_1217_OnCheckBoxComponentStateChanged__DelegateSignature(char bIsChecked) {
	static auto fn = UObject::FindObject<UFunction>("Function DevWidget.DevWidget_C.BndEvt__TemporalAACatmullRomCheck_K2Node_ComponentBoundEvent_1217_OnCheckBoxComponentStateChanged__DelegateSignature");

	struct BndEvt__TemporalAACatmullRomCheck_K2Node_ComponentBoundEvent_1217_OnCheckBoxComponentStateChanged__DelegateSignature_Params {
		char bIsChecked;
	}; BndEvt__TemporalAACatmullRomCheck_K2Node_ComponentBoundEvent_1217_OnCheckBoxComponentStateChanged__DelegateSignature_Params Params;

	Params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function DevWidget.DevWidget_C.BndEvt__TemporalAAPauseCorrectChek_K2Node_ComponentBoundEvent_1237_OnCheckBoxComponentStateChanged__DelegateSignature
inline void UDevWidget_C::BndEvt__TemporalAAPauseCorrectChek_K2Node_ComponentBoundEvent_1237_OnCheckBoxComponentStateChanged__DelegateSignature(char bIsChecked) {
	static auto fn = UObject::FindObject<UFunction>("Function DevWidget.DevWidget_C.BndEvt__TemporalAAPauseCorrectChek_K2Node_ComponentBoundEvent_1237_OnCheckBoxComponentStateChanged__DelegateSignature");

	struct BndEvt__TemporalAAPauseCorrectChek_K2Node_ComponentBoundEvent_1237_OnCheckBoxComponentStateChanged__DelegateSignature_Params {
		char bIsChecked;
	}; BndEvt__TemporalAAPauseCorrectChek_K2Node_ComponentBoundEvent_1237_OnCheckBoxComponentStateChanged__DelegateSignature_Params Params;

	Params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function DevWidget.DevWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
inline void UDevWidget_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function DevWidget.DevWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature");

	struct BndEvt__Button_0_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params {
		
	}; BndEvt__Button_0_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function DevWidget.DevWidget_C.BndEvt__ComboBoxViewModes1_K2Node_ComponentBoundEvent_6_OnSelectionChangedEvent__DelegateSignature
inline void UDevWidget_C::BndEvt__ComboBoxViewModes1_K2Node_ComponentBoundEvent_6_OnSelectionChangedEvent__DelegateSignature(struct FString SelectedItem, char SelectionType) {
	static auto fn = UObject::FindObject<UFunction>("Function DevWidget.DevWidget_C.BndEvt__ComboBoxViewModes1_K2Node_ComponentBoundEvent_6_OnSelectionChangedEvent__DelegateSignature");

	struct BndEvt__ComboBoxViewModes1_K2Node_ComponentBoundEvent_6_OnSelectionChangedEvent__DelegateSignature_Params {
		struct FString SelectedItem;
		char SelectionType;
	}; BndEvt__ComboBoxViewModes1_K2Node_ComponentBoundEvent_6_OnSelectionChangedEvent__DelegateSignature_Params Params;

	Params.SelectedItem = SelectedItem;
	Params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function DevWidget.DevWidget_C.InitDefault
inline void UDevWidget_C::InitDefault() {
	static auto fn = UObject::FindObject<UFunction>("Function DevWidget.DevWidget_C.InitDefault");

	struct InitDefault_Params {
		
	}; InitDefault_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function DevWidget.DevWidget_C.ExecuteUbergraph_DevWidget
inline void UDevWidget_C::ExecuteUbergraph_DevWidget(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function DevWidget.DevWidget_C.ExecuteUbergraph_DevWidget");

	struct ExecuteUbergraph_DevWidget_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_DevWidget_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function DevWidget.DevWidget_C.Pause Game When Menu Open__DelegateSignature
inline void UDevWidget_C::Pause Game When Menu Open__DelegateSignature(char Pause Game On Menu Open) {
	static auto fn = UObject::FindObject<UFunction>("Function DevWidget.DevWidget_C.Pause Game When Menu Open__DelegateSignature");

	struct Pause Game When Menu Open__DelegateSignature_Params {
		char Pause Game On Menu Open;
	}; Pause Game When Menu Open__DelegateSignature_Params Params;

	Params.Pause Game On Menu Open = Pause Game On Menu Open;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function DevWidget.DevWidget_C.Settings File Deleted__DelegateSignature
inline void UDevWidget_C::Settings File Deleted__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function DevWidget.DevWidget_C.Settings File Deleted__DelegateSignature");

	struct Settings File Deleted__DelegateSignature_Params {
		
	}; Settings File Deleted__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

