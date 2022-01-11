// WidgetBlueprintGeneratedClass SettingMainWidget.SettingMainWidget_C
class USettingMainWidget_C : public UBravoHotelSettingWidget {

public:

	struct Unknown UberGraphFrame; // 0x3D8 (8)
	struct Unknown 1-1; // 0x3E0 (8)
	struct Unknown 2-1; // 0x3E8 (8)
	struct Unknown 2-2; // 0x3F0 (8)
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
	struct Unknown Game Settings; // 0x560 (8)
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

	void CreateWidgetImpl(struct Unknown* WidgetClass, struct Unknown& OutWidget, int32_t& OutSwitcherIndex, int32_t& RealIndex); // Function SettingMainWidget.SettingMainWidget_C.CreateWidgetImpl(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void CheckConfirmPopup(int32_t Index, enum class Unknow Type); // Function SettingMainWidget.SettingMainWidget_C.CheckConfirmPopup(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	struct TArray<Unknown> GetSubList(); // Function SettingMainWidget.SettingMainWidget_C.GetSubList(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void CreateWidget(int32_t Index, int32_t& RealIndex); // Function SettingMainWidget.SettingMainWidget_C.CreateWidget(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void Construct(); // Function SettingMainWidget.SettingMainWidget_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void Select Menu(int32_t Index, enum class Unknow Type); // Function SettingMainWidget.SettingMainWidget_C.Select Menu(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void Binding(); // Function SettingMainWidget.SettingMainWidget_C.Binding(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void BndEvt__Apply_K2Node_ComponentBoundEvent_0_OnClickEventDispatcher__DelegateSignature(struct Unknown Widget); // Function SettingMainWidget.SettingMainWidget_C.BndEvt__Apply_K2Node_ComponentBoundEvent_0_OnClickEventDispatcher__DelegateSignature(BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void 鉹@ t元_1(struct Unknown Value); // Function SettingMainWidget.SettingMainWidget_C.鉹@ t元_1(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void BndEvt__Default_K2Node_ComponentBoundEvent_1_OnClickEventDispatcher__DelegateSignature(struct Unknown Widget); // Function SettingMainWidget.SettingMainWidget_C.BndEvt__Default_K2Node_ComponentBoundEvent_1_OnClickEventDispatcher__DelegateSignature(BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void BndEvt__GoBack_K2Node_ComponentBoundEvent_2_OnClickEventDispatcher__DelegateSignature(struct Unknown Widget); // Function SettingMainWidget.SettingMainWidget_C.BndEvt__GoBack_K2Node_ComponentBoundEvent_2_OnClickEventDispatcher__DelegateSignature(BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void RefreshDeve(); // Function SettingMainWidget.SettingMainWidget_C.RefreshDeve(Event|Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void BndEvt__Slider_298_K2Node_ComponentBoundEvent_3_OnFloatValueChangedEvent__DelegateSignature(float Value); // Function SettingMainWidget.SettingMainWidget_C.BndEvt__Slider_298_K2Node_ComponentBoundEvent_3_OnFloatValueChangedEvent__DelegateSignature(BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void CheckHaveApplyList(enum class Unknow Type); // Function SettingMainWidget.SettingMainWidget_C.CheckHaveApplyList(Event|Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void Close Menu(); // Function SettingMainWidget.SettingMainWidget_C.Close Menu(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void BndEvt__Button_112_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature(); // Function SettingMainWidget.SettingMainWidget_C.BndEvt__Button_112_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void CreateConfirmWidget(int32_t TabIdx, enum class Unknow SelectTabType, int32_t PopupType); // Function SettingMainWidget.SettingMainWidget_C.CreateConfirmWidget(Event|Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void ApplyImpl(char UseConfimPopup); // Function SettingMainWidget.SettingMainWidget_C.ApplyImpl(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void Set Desc(struct Unknown Slot); // Function SettingMainWidget.SettingMainWidget_C.Set Desc(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void 鉹@t元_1(struct Unknown Value, char IsSubKey); // Function SettingMainWidget.SettingMainWidget_C.鉹@t元_1(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void KeyNotiMessage(char IsDuplicate, struct Unknown Key, struct FText KeyName); // Function SettingMainWidget.SettingMainWidget_C.KeyNotiMessage(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void 鉹@t元_2(); // Function SettingMainWidget.SettingMainWidget_C.鉹@t元_2(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void Update Localization(int32_t LanguageIndex); // Function SettingMainWidget.SettingMainWidget_C.Update Localization(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void UpdateVideoMemoryUsageGraph(int32_t UsedVideoMemory, int32_t TotalVideoMemory, int32_t CurrentProcessUsage, int32_t OtherProcessUsage); // Function SettingMainWidget.SettingMainWidget_C.UpdateVideoMemoryUsageGraph(Event|Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void ExecuteUbergraph_SettingMainWidget(int32_t EntryPoint); // Function SettingMainWidget.SettingMainWidget_C.ExecuteUbergraph_SettingMainWidget(Final|UbergraphFunction|HasDefaults) // <Game_BE.exe+0x2B80160>
	void EnableButtonEventDispatcher__DelegateSignature(); // Function SettingMainWidget.SettingMainWidget_C.EnableButtonEventDispatcher__DelegateSignature(Public|Delegate|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
};

// Function SettingMainWidget.SettingMainWidget_C.CreateWidgetImpl
inline void USettingMainWidget_C::CreateWidgetImpl(struct Unknown* WidgetClass, struct Unknown& OutWidget, int32_t& OutSwitcherIndex, int32_t& RealIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function SettingMainWidget.SettingMainWidget_C.CreateWidgetImpl");

	struct CreateWidgetImpl_Params {
		struct Unknown* WidgetClass;
		struct Unknown& OutWidget;
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
inline void USettingMainWidget_C::CheckConfirmPopup(int32_t Index, enum class Unknow Type) {
	static auto fn = UObject::FindObject<UFunction>("Function SettingMainWidget.SettingMainWidget_C.CheckConfirmPopup");

	struct CheckConfirmPopup_Params {
		int32_t Index;
		enum class Unknow Type;
	}; CheckConfirmPopup_Params Params;

	Params.Index = Index;
	Params.Type = Type;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function SettingMainWidget.SettingMainWidget_C.GetSubList
inline struct TArray<Unknown> USettingMainWidget_C::GetSubList() {
	static auto fn = UObject::FindObject<UFunction>("Function SettingMainWidget.SettingMainWidget_C.GetSubList");

	struct GetSubList_Params {
		
		struct TArray<Unknown> ReturnValue;

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
inline void USettingMainWidget_C::Select Menu(int32_t Index, enum class Unknow Type) {
	static auto fn = UObject::FindObject<UFunction>("Function SettingMainWidget.SettingMainWidget_C.Select Menu");

	struct Select Menu_Params {
		int32_t Index;
		enum class Unknow Type;
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
inline void USettingMainWidget_C::BndEvt__Apply_K2Node_ComponentBoundEvent_0_OnClickEventDispatcher__DelegateSignature(struct Unknown Widget) {
	static auto fn = UObject::FindObject<UFunction>("Function SettingMainWidget.SettingMainWidget_C.BndEvt__Apply_K2Node_ComponentBoundEvent_0_OnClickEventDispatcher__DelegateSignature");

	struct BndEvt__Apply_K2Node_ComponentBoundEvent_0_OnClickEventDispatcher__DelegateSignature_Params {
		struct Unknown Widget;
	}; BndEvt__Apply_K2Node_ComponentBoundEvent_0_OnClickEventDispatcher__DelegateSignature_Params Params;

	Params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function SettingMainWidget.SettingMainWidget_C.鉹@ t元_1
inline void USettingMainWidget_C::鉹@ t元_1(struct Unknown Value) {
	static auto fn = UObject::FindObject<UFunction>("Function SettingMainWidget.SettingMainWidget_C.鉹@ t元_1");

	struct 鉹@ t元_1_Params {
		struct Unknown Value;
	}; 鉹@ t元_1_Params Params;

	Params.Value = Value;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function SettingMainWidget.SettingMainWidget_C.BndEvt__Default_K2Node_ComponentBoundEvent_1_OnClickEventDispatcher__DelegateSignature
inline void USettingMainWidget_C::BndEvt__Default_K2Node_ComponentBoundEvent_1_OnClickEventDispatcher__DelegateSignature(struct Unknown Widget) {
	static auto fn = UObject::FindObject<UFunction>("Function SettingMainWidget.SettingMainWidget_C.BndEvt__Default_K2Node_ComponentBoundEvent_1_OnClickEventDispatcher__DelegateSignature");

	struct BndEvt__Default_K2Node_ComponentBoundEvent_1_OnClickEventDispatcher__DelegateSignature_Params {
		struct Unknown Widget;
	}; BndEvt__Default_K2Node_ComponentBoundEvent_1_OnClickEventDispatcher__DelegateSignature_Params Params;

	Params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function SettingMainWidget.SettingMainWidget_C.BndEvt__GoBack_K2Node_ComponentBoundEvent_2_OnClickEventDispatcher__DelegateSignature
inline void USettingMainWidget_C::BndEvt__GoBack_K2Node_ComponentBoundEvent_2_OnClickEventDispatcher__DelegateSignature(struct Unknown Widget) {
	static auto fn = UObject::FindObject<UFunction>("Function SettingMainWidget.SettingMainWidget_C.BndEvt__GoBack_K2Node_ComponentBoundEvent_2_OnClickEventDispatcher__DelegateSignature");

	struct BndEvt__GoBack_K2Node_ComponentBoundEvent_2_OnClickEventDispatcher__DelegateSignature_Params {
		struct Unknown Widget;
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
inline void USettingMainWidget_C::CheckHaveApplyList(enum class Unknow Type) {
	static auto fn = UObject::FindObject<UFunction>("Function SettingMainWidget.SettingMainWidget_C.CheckHaveApplyList");

	struct CheckHaveApplyList_Params {
		enum class Unknow Type;
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
inline void USettingMainWidget_C::CreateConfirmWidget(int32_t TabIdx, enum class Unknow SelectTabType, int32_t PopupType) {
	static auto fn = UObject::FindObject<UFunction>("Function SettingMainWidget.SettingMainWidget_C.CreateConfirmWidget");

	struct CreateConfirmWidget_Params {
		int32_t TabIdx;
		enum class Unknow SelectTabType;
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
inline void USettingMainWidget_C::Set Desc(struct Unknown Slot) {
	static auto fn = UObject::FindObject<UFunction>("Function SettingMainWidget.SettingMainWidget_C.Set Desc");

	struct Set Desc_Params {
		struct Unknown Slot;
	}; Set Desc_Params Params;

	Params.Slot = Slot;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function SettingMainWidget.SettingMainWidget_C.鉹@t元_1
inline void USettingMainWidget_C::鉹@t元_1(struct Unknown Value, char IsSubKey) {
	static auto fn = UObject::FindObject<UFunction>("Function SettingMainWidget.SettingMainWidget_C.鉹@t元_1");

	struct 鉹@t元_1_Params {
		struct Unknown Value;
		char IsSubKey;
	}; 鉹@t元_1_Params Params;

	Params.Value = Value;
	Params.IsSubKey = IsSubKey;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function SettingMainWidget.SettingMainWidget_C.KeyNotiMessage
inline void USettingMainWidget_C::KeyNotiMessage(char IsDuplicate, struct Unknown Key, struct FText KeyName) {
	static auto fn = UObject::FindObject<UFunction>("Function SettingMainWidget.SettingMainWidget_C.KeyNotiMessage");

	struct KeyNotiMessage_Params {
		char IsDuplicate;
		struct Unknown Key;
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

