// WidgetBlueprintGeneratedClass DevWidget.DevWidget_C
class UDevWidget_C : public UBravoHotelSettingSubWidget {

public:

	struct Unknown UberGraphFrame; // 0x298 (8)
	struct Unknown ButtonClearStats; // 0x2A0 (8)
	struct Unknown ButtonDebugVehicle; // 0x2A8 (8)
	struct Unknown ButtonEngine; // 0x2B0 (8)
	struct Unknown ButtonFPS; // 0x2B8 (8)
	struct Unknown ButtonGameplayTick; // 0x2C0 (8)
	struct Unknown ButtonMemory; // 0x2C8 (8)
	struct Unknown ButtonNetwork; // 0x2D0 (8)
	struct Unknown ButtonParticles; // 0x2D8 (8)
	struct Unknown ButtonSceneRendering; // 0x2E0 (8)
	struct Unknown ButtonStatSlow; // 0x2E8 (8)
	struct Unknown ButtonUnitGraph; // 0x2F0 (8)
	struct Unknown ComboBoxViewModes; // 0x2F8 (8)
	struct Unknown ComboBoxViewModes1; // 0x300 (8)
	struct Unknown DeleteSettingsSaveFile; // 0x308 (8)
	struct Unknown GameSpeed; // 0x310 (8)
	struct Unknown GameSpeedEdit; // 0x318 (8)
	struct Unknown HorizontalBox_8; // 0x320 (8)
	struct Unknown HorizontalBox_9; // 0x328 (8)
	struct Unknown HorizontalBox_10; // 0x330 (8)
	struct Unknown HorizontalBox_11; // 0x338 (8)
	struct Unknown HorizontalBox_12; // 0x340 (8)
	struct Unknown HorizontalBox_13; // 0x348 (8)
	struct Unknown PauseGame; // 0x350 (8)
	struct Unknown TemporalAACatmullRomCheck; // 0x358 (8)
	struct Unknown TemporalAACurrentFrameWeightEdit; // 0x360 (8)
	struct Unknown TemporalAAFilterSizeEdit; // 0x368 (8)
	struct Unknown TemporalAAPauseCorrectChek; // 0x370 (8)
	struct Unknown TemporalAASamplesEdit; // 0x378 (8)
	struct Unknown TonemapperSharpenEdit; // 0x380 (8)
	struct Unknown ToolTip_DeleteSettings; // 0x388 (8)
	struct Unknown ToolTip_GameSpeed; // 0x390 (8)
	struct Unknown ToolTip_PauseGame; // 0x398 (8)
	struct Unknown ToolTip_StatCommands; // 0x3A0 (8)
	struct Unknown ToolTip_ViewModes; // 0x3A8 (8)
	struct Unknown ToolTip_ViewModes_2; // 0x3B0 (8)
	struct Unknown Game; // 0x3B8 (8)
	float Time; // 0x3C0 (4)
	struct FText Time; // 0x3C8 (24)
	struct FMulticastInlineDelegate Settings; // 0x3E0 (16)
	struct FMulticastInlineDelegate Pause; // 0x3F0 (16)
	struct FText TemporalAAFilterSizeTextBinding; // 0x400 (24)
	struct FText TemporalAACurrentFrameWeightTextBinding; // 0x418 (24)
	struct FText TemporalAASamplesTextBinding; // 0x430 (24)
	struct FText TonemapperSharpenTextBinding; // 0x448 (24)
	float TemporalAAFilterSizeValue; // 0x460 (4)
	float TemporalAACurrentFrameWeightValue; // 0x464 (4)
	int32_t TemporalAASamplesValue; // 0x468 (4)
	float TonemapperSharpenValue; // 0x46C (4)
	struct FName TempKey; // 0x470 (8)
	struct TMap<Unknown, Unknown> Temp; // 0x478 (80)
	enum class Unknow Type; // 0x4C8 (1)
	float TempValue2; // 0x4CC (4)
	char IsOnDebugVehicle : 0; // 0x4D0 (1)

	struct Unknown Generate(struct FString Item); // Function DevWidget.DevWidget_C.Generate(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Refresh(float Value); // Function DevWidget.DevWidget_C.Refresh(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Refresh(char InIsChecked); // Function DevWidget.DevWidget_C.Refresh(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Construct(); // Function DevWidget.DevWidget_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__My(float Value); // Function DevWidget.DevWidget_C.BndEvt__My(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__My(char bIsChecked); // Function DevWidget.DevWidget_C.BndEvt__My(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__My(); // Function DevWidget.DevWidget_C.BndEvt__My(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__My(struct FText& Text, char CommitMethod); // Function DevWidget.DevWidget_C.BndEvt__My(HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_248_OnButtonClickedEvent__DelegateSignature(); // Function DevWidget.DevWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_248_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__ButtonMemory_K2Node_Com(); // Function DevWidget.DevWidget_C.BndEvt__ButtonMemory_K2Node_Com(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__ButtonNetwork_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function DevWidget.DevWidget_C.BndEvt__ButtonNetwork_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__ButtonParticles_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function DevWidget.DevWidget_C.BndEvt__ButtonParticles_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__ButtonStatTick_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // Function DevWidget.DevWidget_C.BndEvt__ButtonStatTick_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__ButtonSceneRendering_K2Node_Com(); // Function DevWidget.DevWidget_C.BndEvt__ButtonSceneRendering_K2Node_Com(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__ButtonInitViews_K2Node_ComponentBoundEvent_591_OnButtonClickedEvent__DelegateSignature(); // Function DevWidget.DevWidget_C.BndEvt__ButtonInitViews_K2Node_ComponentBoundEvent_591_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__ButtonEngine_K2Node_Com(); // Function DevWidget.DevWidget_C.BndEvt__ButtonEngine_K2Node_Com(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__MyComboBox_K2Node_ComponentBoundEvent_128_OnSelectionChangedEvent__DelegateSignature(struct FString SelectedItem, char SelectionType); // Function DevWidget.DevWidget_C.BndEvt__MyComboBox_K2Node_ComponentBoundEvent_128_OnSelectionChangedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__ButtonStatSlow_K2Node_ComponentBoundEvent_712_OnButtonClickedEvent__DelegateSignature(); // Function DevWidget.DevWidget_C.BndEvt__ButtonStatSlow_K2Node_ComponentBoundEvent_712_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__ButtonClearStats_K2Node_ComponentBoundEvent_739_OnButtonClickedEvent__DelegateSignature(); // Function DevWidget.DevWidget_C.BndEvt__ButtonClearStats_K2Node_ComponentBoundEvent_739_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__TemporalAAFilterSizeEdit_K2Node_ComponentBoundEvent_881_OnEditableTextCommittedEvent__DelegateSignature(struct FText& Text, char CommitMethod); // Function DevWidget.DevWidget_C.BndEvt__TemporalAAFilterSizeEdit_K2Node_ComponentBoundEvent_881_OnEditableTextCommittedEvent__DelegateSignature(HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__TemporalAACurrentFrameWeightEdit_K2Node_Comp(struct FText& Text, char CommitMethod); // Function DevWidget.DevWidget_C.BndEvt__TemporalAACurrentFrameWeightEdit_K2Node_ComptonWidget(HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void (struct FText& Text, char CommitMethod); // Function DevWidget.DevWidget_C.BndEvt__TemporalAASamplesEdit_K2Nu(HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__TonemapperSharpenEdit_K2Nu(struct FText& Text, char CommitMethod); // Function DevWidget.DevWidget_C.BndEvt__TonemapperSharpenEdit_K2(HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__TemporalAACatmullRomCheck_K2Node_ComponentBoundEvent_1217_OnCheckBoxComponentStateChanged__DelegateSignature(char bIsChecked); // Function DevWidget.DevWidget_C.BndEvt__TemporalAACatmullRomCheck_K2Node_ComponentBoundEvent_1217_OnCheckBoxComponentStateChanged__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__TemporalAAPauseCorrectChek_K2Node_ComponentBoundEvent_1237_OnCheckBoxComponentStateChanged__DelegateSignature(char bIsChecked); // Function DevWidget.DevWidget_C.BndEvt__TemporalAAPauseCorrectChek_K2Node_ComponentBoundEvent_1237_OnCheckBoxComponentStateChanged__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature(); // Function DevWidget.DevWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__ComboBoxViewModes1_K2Node_ComponentBoundEvent_6_OnSelectionChangedEvent__DelegateSignature(struct FString SelectedItem, char SelectionType); // Function DevWidget.DevWidget_C.BndEvt__ComboBoxViewModes1_K2Node_ComponentBoundEvent_6_OnSelectionChangedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void InitDefault(); // Function DevWidget.DevWidget_C.InitDefault(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_DevWidget(int32_t EntryPoint); // Function DevWidget.DevWidget_C.ExecuteUbergraph_DevWidget(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Pause(char Pause); // Function DevWidget.DevWidget_C.Pause(Public|Delegate|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Settings(); // Function DevWidget.DevWidget_C.Settings(Public|Delegate|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

