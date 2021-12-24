// WidgetBlueprintGeneratedClass SettingMainWidget.SettingMainWidget_C
class USettingMainWidget_C : public UBravoHotelSettingWidget {

public:

	struct Unknown UberGraphFrame; // 0x3D8 (8)
	struct Unknown ; // 0x3E0 (8)
	struct Unknown ; // 0x3E8 (8)
	struct Unknown ; // 0x3F0 (8)
	struct Unknown ApplyButton; // 0x3F8 (8)
	struct Unknown Audio; // 0x400 (8)
	struct Unknown CanvasPanel_61; // 0x408 (8)
	struct Unknown CanvasPanel_279; // 0x410 (8)
	struct Unknown ChangeLock; // 0x418 (8)
	struct Unknown Control; // 0x420 (8)
	struct Unknown CrossHair; // 0x428 (8)
	struct Unknown CrossHairDetailInfo; // 0x430 (8)
	struct Unknown CrossHairDetailInfo_2; // 0x438 (8)
	struct Unknown CrossHairDetailInfo_3; // 0x440 (8)
	struct Unknown CrossHairDetailInfo_4; // 0x448 (8)
	struct Unknown CurDesc; // 0x450 (8)
	struct Unknown CurDesc2; // 0x458 (8)
	struct Unknown CurTitle; // 0x460 (8)
	struct Unknown DefaultButton; // 0x468 (8)
	struct Unknown Dev; // 0x470 (8)
	struct Unknown GamePlay; // 0x478 (8)
	struct Unknown GoBackButton; // 0x480 (8)
	struct Unknown Graphic; // 0x488 (8)
	struct Unknown Image; // 0x490 (8)
	struct Unknown Image_2; // 0x498 (8)
	struct Unknown Image_3; // 0x4A0 (8)
	struct Unknown Image_4; // 0x4A8 (8)
	struct Unknown Image_109; // 0x4B0 (8)
	struct Unknown Image_128; // 0x4B8 (8)
	struct Unknown Image_129; // 0x4C0 (8)
	struct Unknown Image_154; // 0x4C8 (8)
	struct Unknown Image_323; // 0x4D0 (8)
	struct Unknown Image_417; // 0x4D8 (8)
	struct Unknown Image_951; // 0x4E0 (8)
	struct Unknown Image_953; // 0x4E8 (8)
	struct Unknown Key; // 0x4F0 (8)
	struct Unknown KeyImageMain; // 0x4F8 (8)
	struct Unknown ProgressBar_317; // 0x500 (8)
	struct Unknown Slider_299; // 0x508 (8)
	struct Unknown TextBlock; // 0x510 (8)
	struct Unknown TextBlock_1; // 0x518 (8)
	struct Unknown TextBlock_2; // 0x520 (8)
	struct Unknown TextBlock_3; // 0x528 (8)
	struct Unknown TextBlock_5; // 0x530 (8)
	struct Unknown TextBlock_7; // 0x538 (8)
	struct Unknown VerticalBox_149; // 0x540 (8)
	struct Unknown WidgetSwitcher_113; // 0x548 (8)
	struct FMulticastInlineDelegate EnableButtonEventDispatcher; // 0x550 (16)
	struct Unknown Game; // 0x560 (8)
	struct TMap<Unknown, Unknown> SlotList_1; // 0x568 (80)
	struct Unknown GraphicWidget; // 0x5B8 (8)
	struct Unknown AudioWidget; // 0x5C0 (8)
	struct Unknown ControlWidget; // 0x5C8 (8)
	struct Unknown KeyWidget; // 0x5D0 (8)
	struct Unknown GamePlayWidget; // 0x5D8 (8)
	struct Unknown SettingDevWidget; // 0x5E0 (8)
	int32_t GraphicSwitcherIndex; // 0x5E8 (4)
	int32_t AudioSwitcherIndex; // 0x5EC (4)
	int32_t ControlSwitcherIndex; // 0x5F0 (4)
	int32_t KeySwitcherIndex; // 0x5F4 (4)
	int32_t SettingDevSwitcherIndex; // 0x5F8 (4)
	int32_t GamePlaySwitcherIndex; // 0x5FC (4)
	struct Unknown KeyNotiTimer; // 0x600 (8)
	float KeyNotiMessageShowTime; // 0x608 (4)
	struct Unknown TempImg; // 0x610 (40)
	struct Unknown SavedDescData; // 0x638 (8)

	void CreateWidgetImpl(struct Unknown* WidgetClass, struct Unknown& OutWidget, int32_t& OutSwitcherIndex, int32_t& RealIndex); // Function SettingMainWidget.SettingMainWidget_C.CreateWidgetImpl(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CheckConfirmPopup(int32_t Index, enum class Unknow Type); // Function SettingMainWidget.SettingMainWidget_C.CheckConfirmPopup(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	struct TArray<Unknown> GetSubList(); // Function SettingMainWidget.SettingMainWidget_C.GetSubList(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CreateWidget(int32_t Index, int32_t& RealIndex); // Function SettingMainWidget.SettingMainWidget_C.CreateWidget(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Construct(); // Function SettingMainWidget.SettingMainWidget_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Select(int32_t Index, enum class Unknow Type); // Function SettingMainWidget.SettingMainWidget_C.Select(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Binding(); // Function SettingMainWidget.SettingMainWidget_C.Binding(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__Apply_K2Node_ComponentBoundEvent_0_OnClickEventDispatcher__DelegateSignature(struct Unknown Widget); // Function SettingMainWidget.SettingMainWidget_C.BndEvt__Apply_K2Node_ComponentBoundEvent_0_OnClickEventDispatcher__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void (struct Unknown Value); // Function SettingMainWidget.SettingMainWidget_C.(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__Default_K2Node_ComponentBoundEvent_1_OnClickEventDispatcher__DelegateSignature(struct Unknown Widget); // Function SettingMainWidget.SettingMainWidget_C.BndEvt__Default_K2Node_ComponentBoundEvent_1_OnClickEventDispatcher__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__GoBack_K2Node_ComponentBoundEvent_2_OnClickEventDispatcher__DelegateSignature(struct Unknown Widget); // Function SettingMainWidget.SettingMainWidget_C.BndEvt__GoBack_K2Node_ComponentBoundEvent_2_OnClickEventDispatcher__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void RefreshDeve(); // Function SettingMainWidget.SettingMainWidget_C.RefreshDeve(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__Slider_298_K2Node_ComponentBoundEvent_3_OnFloatValueChangedEvent__DelegateSignature(float Value); // Function SettingMainWidget.SettingMainWidget_C.BndEvt__Slider_298_K2Node_ComponentBoundEvent_3_OnFloatValueChangedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CheckHaveApplyList(enum class Unknow Type); // Function SettingMainWidget.SettingMainWidget_C.CheckHaveApplyList(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Close(); // Function SettingMainWidget.SettingMainWidget_C.Close(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__Button_112_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature(); // Function SettingMainWidget.SettingMainWidget_C.BndEvt__Button_112_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CreateConfirmWidget(int32_t TabIdx, enum class Unknow SelectTabType, int32_t PopupType); // Function SettingMainWidget.SettingMainWidget_C.CreateConfirmWidget(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ApplyImpl(char UseConfimPopup); // Function SettingMainWidget.SettingMainWidget_C.ApplyImpl(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Set(struct Unknown Slot); // Function SettingMainWidget.SettingMainWidget_C.Set(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void (struct Unknown Value, char IsSubKey); // Function SettingMainWidget.SettingMainWidget_C.(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void KeyNotiMessage(char IsDuplicate, struct Unknown Key, struct FText KeyName); // Function SettingMainWidget.SettingMainWidget_C.KeyNotiMessage(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void (); // Function SettingMainWidget.SettingMainWidget_C.(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Update(int32_t LanguageIndex); // Function SettingMainWidget.SettingMainWidget_C.Update(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void UpdateVideoMemoryUsageGraph(int32_t UsedVideoMemory, int32_t TotalVideoMemory, int32_t CurrentProcessUsage, int32_t OtherProcessUsage); // Function SettingMainWidget.SettingMainWidget_C.UpdateVideoMemoryUsageGraph(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_SettingMph(int32_t EntryPoint); // Function SettingMainWidget.SettingMainWidget_C.ExecuteUbergraph_Setting(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void EnableButtonEventDispatcher__DelegateSignature(); // Function SettingMainWidget.SettingMainWidget_C.EnableButtonEventDispatcher__DelegateSignature(Public|Delegate|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

