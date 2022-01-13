// WidgetBlueprintGeneratedClass SettingMainWidget.SettingMainWidget_C
class USettingMainWidget_C : public UBravoHotelSettingWidget {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3D8 (8)
	struct UImage 1-1; // 0x3E0 (8)
	struct UImage 2-1; // 0x3E8 (8)
	struct UImage 2-2; // 0x3F0 (8)
	struct UButtomButtonWidget_C ApplyButton; // 0x3F8 (8)
	struct USettingSubButtonWidget_C Audio; // 0x400 (8)
	struct UCanvasPanel CanvasPanel_61; // 0x408 (8)
	struct UCanvasPanel CanvasPanel_279; // 0x410 (8)
	struct UTextBlock ChangeLock; // 0x418 (8)
	struct USettingSubButtonWidget_C Control; // 0x420 (8)
	struct UVerticalBox CrossHair; // 0x428 (8)
	struct UCrossHairDetailInfo_C CrossHairDetailInfo; // 0x430 (8)
	struct UCrossHairDetailInfo_C CrossHairDetailInfo_2; // 0x438 (8)
	struct UCrossHairDetailInfo_C CrossHairDetailInfo_3; // 0x440 (8)
	struct UCrossHairDetailInfo_C CrossHairDetailInfo_4; // 0x448 (8)
	struct UTextBlock CurDesc; // 0x450 (8)
	struct UTextBlock CurDesc2; // 0x458 (8)
	struct UTextBlock CurTitle; // 0x460 (8)
	struct UButtomButtonWidget_C DefaultButton; // 0x468 (8)
	struct USettingSubButtonWidget_C Dev; // 0x470 (8)
	struct USettingSubButtonWidget_C GamePlay; // 0x478 (8)
	struct UButtomButtonWidget_C GoBackButton; // 0x480 (8)
	struct USettingSubButtonWidget_C Graphic; // 0x488 (8)
	struct UImage Image; // 0x490 (8)
	struct UImage Image_2; // 0x498 (8)
	struct UImage Image_3; // 0x4A0 (8)
	struct UImage Image_4; // 0x4A8 (8)
	struct UImage Image_109; // 0x4B0 (8)
	struct UImage Image_128; // 0x4B8 (8)
	struct UImage Image_129; // 0x4C0 (8)
	struct UImage Image_154; // 0x4C8 (8)
	struct UImage Image_323; // 0x4D0 (8)
	struct UImage Image_417; // 0x4D8 (8)
	struct UImage Image_951; // 0x4E0 (8)
	struct UImage Image_953; // 0x4E8 (8)
	struct USettingSubButtonWidget_C Key; // 0x4F0 (8)
	struct UKeyImageWidget_C KeyImageMain; // 0x4F8 (8)
	struct UProgressBar ProgressBar_317; // 0x500 (8)
	struct USlider Slider_299; // 0x508 (8)
	struct UTextBlock TextBlock; // 0x510 (8)
	struct UTextBlock TextBlock_1; // 0x518 (8)
	struct UTextBlock TextBlock_2; // 0x520 (8)
	struct UTextBlock TextBlock_3; // 0x528 (8)
	struct UTextBlock TextBlock_5; // 0x530 (8)
	struct UTextBlock TextBlock_7; // 0x538 (8)
	struct UVerticalBox VerticalBox_149; // 0x540 (8)
	struct UWidgetSwitcher WidgetSwitcher_113; // 0x548 (8)
	struct FMulticastInlineDelegate EnableButtonEventDispatcher; // 0x550 (16)
	struct UBP_GameSettings_C Game Settings; // 0x560 (8)
	struct TMap<enum class ESettingType, struct UBravoHotelSettingSlotWidget> SlotList_1; // 0x568 (80)
	struct UGraphicWidget_C GraphicWidget; // 0x5B8 (8)
	struct UAudioWidget_C AudioWidget; // 0x5C0 (8)
	struct UControlWidget_C ControlWidget; // 0x5C8 (8)
	struct UKeyWidget_C KeyWidget; // 0x5D0 (8)
	struct UGamePlayWidget_C GamePlayWidget; // 0x5D8 (8)
	struct USettingDevWidget_C SettingDevWidget; // 0x5E0 (8)
	int32_t GraphicSwitcherIndex; // 0x5E8 (4)
	int32_t AudioSwitcherIndex; // 0x5EC (4)
	int32_t ControlSwitcherIndex; // 0x5F0 (4)
	int32_t KeySwitcherIndex; // 0x5F4 (4)
	int32_t SettingDevSwitcherIndex; // 0x5F8 (4)
	int32_t GamePlaySwitcherIndex; // 0x5FC (4)
	struct FTimerHandle KeyNotiTimer; // 0x600 (8)
	float KeyNotiMessageShowTime; // 0x608 (4)
	struct TSoftObjectPtr<UTexture2D> TempImg; // 0x610 (40)
	struct UBravoHotelSettingSlotWidget SavedDescData; // 0x638 (8)

	void CreateWidgetImpl(struct UClass* WidgetClass, struct UBravoHotelSettingSubWidget& OutWidget, int32_t& OutSwitcherIndex, int32_t& RealIndex); // Function SettingMainWidget.SettingMainWidget_C.CreateWidgetImpl(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void CheckConfirmPopup(int32_t Index, enum class ESettingBigType Type); // Function SettingMainWidget.SettingMainWidget_C.CheckConfirmPopup(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	struct TArray<struct UBravoHotelSettingSubWidget> GetSubList(); // Function SettingMainWidget.SettingMainWidget_C.GetSubList(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void CreateWidget(int32_t Index, int32_t& RealIndex); // Function SettingMainWidget.SettingMainWidget_C.CreateWidget(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void Construct(); // Function SettingMainWidget.SettingMainWidget_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void Select Menu(int32_t Index, enum class ESettingBigType Type); // Function SettingMainWidget.SettingMainWidget_C.Select Menu(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void Binding(); // Function SettingMainWidget.SettingMainWidget_C.Binding(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void BndEvt__Apply_K2Node_ComponentBoundEvent_0_OnClickEventDispatcher__DelegateSignature(struct UButtomButtonWidget_C Widget); // Function SettingMainWidget.SettingMainWidget_C.BndEvt__Apply_K2Node_ComponentBoundEvent_0_OnClickEventDispatcher__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void 鉹@ t元_1(struct UBravoHotelSettingSlotWidget Value); // Function SettingMainWidget.SettingMainWidget_C.鉹@ t元_1(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void BndEvt__Default_K2Node_ComponentBoundEvent_1_OnClickEventDispatcher__DelegateSignature(struct UButtomButtonWidget_C Widget); // Function SettingMainWidget.SettingMainWidget_C.BndEvt__Default_K2Node_ComponentBoundEvent_1_OnClickEventDispatcher__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void BndEvt__GoBack_K2Node_ComponentBoundEvent_2_OnClickEventDispatcher__DelegateSignature(struct UButtomButtonWidget_C Widget); // Function SettingMainWidget.SettingMainWidget_C.BndEvt__GoBack_K2Node_ComponentBoundEvent_2_OnClickEventDispatcher__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void RefreshDeve(); // Function SettingMainWidget.SettingMainWidget_C.RefreshDeve(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void BndEvt__Slider_298_K2Node_ComponentBoundEvent_3_OnFloatValueChangedEvent__DelegateSignature(float Value); // Function SettingMainWidget.SettingMainWidget_C.BndEvt__Slider_298_K2Node_ComponentBoundEvent_3_OnFloatValueChangedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void CheckHaveApplyList(enum class ESettingBigType Type); // Function SettingMainWidget.SettingMainWidget_C.CheckHaveApplyList(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void Close Menu(); // Function SettingMainWidget.SettingMainWidget_C.Close Menu(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void BndEvt__Button_112_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature(); // Function SettingMainWidget.SettingMainWidget_C.BndEvt__Button_112_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void CreateConfirmWidget(int32_t TabIdx, enum class ESettingBigType SelectTabType, int32_t PopupType); // Function SettingMainWidget.SettingMainWidget_C.CreateConfirmWidget(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void ApplyImpl(char UseConfimPopup); // Function SettingMainWidget.SettingMainWidget_C.ApplyImpl(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void Set Desc(struct UBravoHotelSettingSlotWidget Slot); // Function SettingMainWidget.SettingMainWidget_C.Set Desc(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void 鉹@t元_1(struct UBravoHotelSettingSlotWidget Value, char IsSubKey); // Function SettingMainWidget.SettingMainWidget_C.鉹@t元_1(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void KeyNotiMessage(char IsDuplicate, struct FInputChord Key, struct FText KeyName); // Function SettingMainWidget.SettingMainWidget_C.KeyNotiMessage(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void 鉹@t元_2(); // Function SettingMainWidget.SettingMainWidget_C.鉹@t元_2(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void Update Localization(int32_t LanguageIndex); // Function SettingMainWidget.SettingMainWidget_C.Update Localization(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void UpdateVideoMemoryUsageGraph(int32_t UsedVideoMemory, int32_t TotalVideoMemory, int32_t CurrentProcessUsage, int32_t OtherProcessUsage); // Function SettingMainWidget.SettingMainWidget_C.UpdateVideoMemoryUsageGraph(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void ExecuteUbergraph_SettingMainWidget(int32_t EntryPoint); // Function SettingMainWidget.SettingMainWidget_C.ExecuteUbergraph_SettingMainWidget(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void EnableButtonEventDispatcher__DelegateSignature(); // Function SettingMainWidget.SettingMainWidget_C.EnableButtonEventDispatcher__DelegateSignature(Public|Delegate|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
};

// Function SettingMainWidget.SettingMainWidget_C.CreateWidgetImpl
inline void USettingMainWidget_C::CreateWidgetImpl(struct UClass* WidgetClass, struct UBravoHotelSettingSubWidget& OutWidget, int32_t& OutSwitcherIndex, int32_t& RealIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function SettingMainWidget.SettingMainWidget_C.CreateWidgetImpl");

	struct CreateWidgetImpl_Params {
		struct UClass* WidgetClass;
		struct UBravoHotelSettingSubWidget& OutWidget;
		int32_t& OutSwitcherIndex;
		int32_t& RealIndex;
	}; CreateWidgetImpl_Params Params;

	Params.WidgetClass = WidgetClass;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	OutWidget = Params.OutWidget;
	OutSwitcherIndex = Params.OutSwitcherIndex;
	RealIndex = Params.RealIndex;

}

// Function SettingMainWidget.SettingMainWidget_C.CheckConfirmPopup
inline void USettingMainWidget_C::CheckConfirmPopup(int32_t Index, enum class ESettingBigType Type) {
	static auto fn = UObject::FindObject<UFunction>("Function SettingMainWidget.SettingMainWidget_C.CheckConfirmPopup");

	struct CheckConfirmPopup_Params {
		int32_t Index;
		enum class ESettingBigType Type;
	}; CheckConfirmPopup_Params Params;

	Params.Index = Index;
	Params.Type = Type;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function SettingMainWidget.SettingMainWidget_C.GetSubList
inline struct TArray<struct UBravoHotelSettingSubWidget> USettingMainWidget_C::GetSubList() {
	static auto fn = UObject::FindObject<UFunction>("Function SettingMainWidget.SettingMainWidget_C.GetSubList");

	struct GetSubList_Params {
		
		struct TArray<struct UBravoHotelSettingSubWidget> ReturnValue;

	}; GetSubList_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function SettingMainWidget.SettingMainWidget_C.CreateWidget
inline void USettingMainWidget_C::CreateWidget(int32_t Index, int32_t& RealIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function SettingMainWidget.SettingMainWidget_C.CreateWidget");

	struct CreateWidget_Params {
		int32_t Index;
		int32_t& RealIndex;
	}; CreateWidget_Params Params;

	Params.Index = Index;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	RealIndex = Params.RealIndex;

}

// Function SettingMainWidget.SettingMainWidget_C.Construct
inline void USettingMainWidget_C::Construct() {
	static auto fn = UObject::FindObject<UFunction>("Function SettingMainWidget.SettingMainWidget_C.Construct");

	struct Construct_Params {
		
	}; Construct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function SettingMainWidget.SettingMainWidget_C.Select Menu
inline void USettingMainWidget_C::Select Menu(int32_t Index, enum class ESettingBigType Type) {
	static auto fn = UObject::FindObject<UFunction>("Function SettingMainWidget.SettingMainWidget_C.Select Menu");

	struct Select Menu_Params {
		int32_t Index;
		enum class ESettingBigType Type;
	}; Select Menu_Params Params;

	Params.Index = Index;
	Params.Type = Type;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function SettingMainWidget.SettingMainWidget_C.Binding
inline void USettingMainWidget_C::Binding() {
	static auto fn = UObject::FindObject<UFunction>("Function SettingMainWidget.SettingMainWidget_C.Binding");

	struct Binding_Params {
		
	}; Binding_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function SettingMainWidget.SettingMainWidget_C.BndEvt__Apply_K2Node_ComponentBoundEvent_0_OnClickEventDispatcher__DelegateSignature
inline void USettingMainWidget_C::BndEvt__Apply_K2Node_ComponentBoundEvent_0_OnClickEventDispatcher__DelegateSignature(struct UButtomButtonWidget_C Widget) {
	static auto fn = UObject::FindObject<UFunction>("Function SettingMainWidget.SettingMainWidget_C.BndEvt__Apply_K2Node_ComponentBoundEvent_0_OnClickEventDispatcher__DelegateSignature");

	struct BndEvt__Apply_K2Node_ComponentBoundEvent_0_OnClickEventDispatcher__DelegateSignature_Params {
		struct UButtomButtonWidget_C Widget;
	}; BndEvt__Apply_K2Node_ComponentBoundEvent_0_OnClickEventDispatcher__DelegateSignature_Params Params;

	Params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function SettingMainWidget.SettingMainWidget_C.鉹@ t元_1
inline void USettingMainWidget_C::鉹@ t元_1(struct UBravoHotelSettingSlotWidget Value) {
	static auto fn = UObject::FindObject<UFunction>("Function SettingMainWidget.SettingMainWidget_C.鉹@ t元_1");

	struct 鉹@ t元_1_Params {
		struct UBravoHotelSettingSlotWidget Value;
	}; 鉹@ t元_1_Params Params;

	Params.Value = Value;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function SettingMainWidget.SettingMainWidget_C.BndEvt__Default_K2Node_ComponentBoundEvent_1_OnClickEventDispatcher__DelegateSignature
inline void USettingMainWidget_C::BndEvt__Default_K2Node_ComponentBoundEvent_1_OnClickEventDispatcher__DelegateSignature(struct UButtomButtonWidget_C Widget) {
	static auto fn = UObject::FindObject<UFunction>("Function SettingMainWidget.SettingMainWidget_C.BndEvt__Default_K2Node_ComponentBoundEvent_1_OnClickEventDispatcher__DelegateSignature");

	struct BndEvt__Default_K2Node_ComponentBoundEvent_1_OnClickEventDispatcher__DelegateSignature_Params {
		struct UButtomButtonWidget_C Widget;
	}; BndEvt__Default_K2Node_ComponentBoundEvent_1_OnClickEventDispatcher__DelegateSignature_Params Params;

	Params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function SettingMainWidget.SettingMainWidget_C.BndEvt__GoBack_K2Node_ComponentBoundEvent_2_OnClickEventDispatcher__DelegateSignature
inline void USettingMainWidget_C::BndEvt__GoBack_K2Node_ComponentBoundEvent_2_OnClickEventDispatcher__DelegateSignature(struct UButtomButtonWidget_C Widget) {
	static auto fn = UObject::FindObject<UFunction>("Function SettingMainWidget.SettingMainWidget_C.BndEvt__GoBack_K2Node_ComponentBoundEvent_2_OnClickEventDispatcher__DelegateSignature");

	struct BndEvt__GoBack_K2Node_ComponentBoundEvent_2_OnClickEventDispatcher__DelegateSignature_Params {
		struct UButtomButtonWidget_C Widget;
	}; BndEvt__GoBack_K2Node_ComponentBoundEvent_2_OnClickEventDispatcher__DelegateSignature_Params Params;

	Params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function SettingMainWidget.SettingMainWidget_C.RefreshDeve
inline void USettingMainWidget_C::RefreshDeve() {
	static auto fn = UObject::FindObject<UFunction>("Function SettingMainWidget.SettingMainWidget_C.RefreshDeve");

	struct RefreshDeve_Params {
		
	}; RefreshDeve_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function SettingMainWidget.SettingMainWidget_C.BndEvt__Slider_298_K2Node_ComponentBoundEvent_3_OnFloatValueChangedEvent__DelegateSignature
inline void USettingMainWidget_C::BndEvt__Slider_298_K2Node_ComponentBoundEvent_3_OnFloatValueChangedEvent__DelegateSignature(float Value) {
	static auto fn = UObject::FindObject<UFunction>("Function SettingMainWidget.SettingMainWidget_C.BndEvt__Slider_298_K2Node_ComponentBoundEvent_3_OnFloatValueChangedEvent__DelegateSignature");

	struct BndEvt__Slider_298_K2Node_ComponentBoundEvent_3_OnFloatValueChangedEvent__DelegateSignature_Params {
		float Value;
	}; BndEvt__Slider_298_K2Node_ComponentBoundEvent_3_OnFloatValueChangedEvent__DelegateSignature_Params Params;

	Params.Value = Value;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function SettingMainWidget.SettingMainWidget_C.CheckHaveApplyList
inline void USettingMainWidget_C::CheckHaveApplyList(enum class ESettingBigType Type) {
	static auto fn = UObject::FindObject<UFunction>("Function SettingMainWidget.SettingMainWidget_C.CheckHaveApplyList");

	struct CheckHaveApplyList_Params {
		enum class ESettingBigType Type;
	}; CheckHaveApplyList_Params Params;

	Params.Type = Type;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function SettingMainWidget.SettingMainWidget_C.Close Menu
inline void USettingMainWidget_C::Close Menu() {
	static auto fn = UObject::FindObject<UFunction>("Function SettingMainWidget.SettingMainWidget_C.Close Menu");

	struct Close Menu_Params {
		
	}; Close Menu_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function SettingMainWidget.SettingMainWidget_C.BndEvt__Button_112_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
inline void USettingMainWidget_C::BndEvt__Button_112_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function SettingMainWidget.SettingMainWidget_C.BndEvt__Button_112_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");

	struct BndEvt__Button_112_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params {
		
	}; BndEvt__Button_112_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function SettingMainWidget.SettingMainWidget_C.CreateConfirmWidget
inline void USettingMainWidget_C::CreateConfirmWidget(int32_t TabIdx, enum class ESettingBigType SelectTabType, int32_t PopupType) {
	static auto fn = UObject::FindObject<UFunction>("Function SettingMainWidget.SettingMainWidget_C.CreateConfirmWidget");

	struct CreateConfirmWidget_Params {
		int32_t TabIdx;
		enum class ESettingBigType SelectTabType;
		int32_t PopupType;
	}; CreateConfirmWidget_Params Params;

	Params.TabIdx = TabIdx;
	Params.SelectTabType = SelectTabType;
	Params.PopupType = PopupType;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function SettingMainWidget.SettingMainWidget_C.ApplyImpl
inline void USettingMainWidget_C::ApplyImpl(char UseConfimPopup) {
	static auto fn = UObject::FindObject<UFunction>("Function SettingMainWidget.SettingMainWidget_C.ApplyImpl");

	struct ApplyImpl_Params {
		char UseConfimPopup;
	}; ApplyImpl_Params Params;

	Params.UseConfimPopup = UseConfimPopup;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function SettingMainWidget.SettingMainWidget_C.Set Desc
inline void USettingMainWidget_C::Set Desc(struct UBravoHotelSettingSlotWidget Slot) {
	static auto fn = UObject::FindObject<UFunction>("Function SettingMainWidget.SettingMainWidget_C.Set Desc");

	struct Set Desc_Params {
		struct UBravoHotelSettingSlotWidget Slot;
	}; Set Desc_Params Params;

	Params.Slot = Slot;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function SettingMainWidget.SettingMainWidget_C.鉹@t元_1
inline void USettingMainWidget_C::鉹@t元_1(struct UBravoHotelSettingSlotWidget Value, char IsSubKey) {
	static auto fn = UObject::FindObject<UFunction>("Function SettingMainWidget.SettingMainWidget_C.鉹@t元_1");

	struct 鉹@t元_1_Params {
		struct UBravoHotelSettingSlotWidget Value;
		char IsSubKey;
	}; 鉹@t元_1_Params Params;

	Params.Value = Value;
	Params.IsSubKey = IsSubKey;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function SettingMainWidget.SettingMainWidget_C.KeyNotiMessage
inline void USettingMainWidget_C::KeyNotiMessage(char IsDuplicate, struct FInputChord Key, struct FText KeyName) {
	static auto fn = UObject::FindObject<UFunction>("Function SettingMainWidget.SettingMainWidget_C.KeyNotiMessage");

	struct KeyNotiMessage_Params {
		char IsDuplicate;
		struct FInputChord Key;
		struct FText KeyName;
	}; KeyNotiMessage_Params Params;

	Params.IsDuplicate = IsDuplicate;
	Params.Key = Key;
	Params.KeyName = KeyName;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function SettingMainWidget.SettingMainWidget_C.鉹@t元_2
inline void USettingMainWidget_C::鉹@t元_2() {
	static auto fn = UObject::FindObject<UFunction>("Function SettingMainWidget.SettingMainWidget_C.鉹@t元_2");

	struct 鉹@t元_2_Params {
		
	}; 鉹@t元_2_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function SettingMainWidget.SettingMainWidget_C.Update Localization
inline void USettingMainWidget_C::Update Localization(int32_t LanguageIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function SettingMainWidget.SettingMainWidget_C.Update Localization");

	struct Update Localization_Params {
		int32_t LanguageIndex;
	}; Update Localization_Params Params;

	Params.LanguageIndex = LanguageIndex;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function SettingMainWidget.SettingMainWidget_C.UpdateVideoMemoryUsageGraph
inline void USettingMainWidget_C::UpdateVideoMemoryUsageGraph(int32_t UsedVideoMemory, int32_t TotalVideoMemory, int32_t CurrentProcessUsage, int32_t OtherProcessUsage) {
	static auto fn = UObject::FindObject<UFunction>("Function SettingMainWidget.SettingMainWidget_C.UpdateVideoMemoryUsageGraph");

	struct UpdateVideoMemoryUsageGraph_Params {
		int32_t UsedVideoMemory;
		int32_t TotalVideoMemory;
		int32_t CurrentProcessUsage;
		int32_t OtherProcessUsage;
	}; UpdateVideoMemoryUsageGraph_Params Params;

	Params.UsedVideoMemory = UsedVideoMemory;
	Params.TotalVideoMemory = TotalVideoMemory;
	Params.CurrentProcessUsage = CurrentProcessUsage;
	Params.OtherProcessUsage = OtherProcessUsage;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function SettingMainWidget.SettingMainWidget_C.ExecuteUbergraph_SettingMainWidget
inline void USettingMainWidget_C::ExecuteUbergraph_SettingMainWidget(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function SettingMainWidget.SettingMainWidget_C.ExecuteUbergraph_SettingMainWidget");

	struct ExecuteUbergraph_SettingMainWidget_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_SettingMainWidget_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function SettingMainWidget.SettingMainWidget_C.EnableButtonEventDispatcher__DelegateSignature
inline void USettingMainWidget_C::EnableButtonEventDispatcher__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function SettingMainWidget.SettingMainWidget_C.EnableButtonEventDispatcher__DelegateSignature");

	struct EnableButtonEventDispatcher__DelegateSignature_Params {
		
	}; EnableButtonEventDispatcher__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

