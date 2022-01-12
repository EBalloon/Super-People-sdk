// WidgetBlueprintGeneratedClass ConfirmPopupWidget.ConfirmPopupWidget_C
class UConfirmPopupWidget_C : public UBravoHotelConfirmPopupWidget {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x250 (8)
	struct UImage Bg; // 0x258 (8)
	struct UButton btn_Cancel; // 0x260 (8)
	struct UButton btn_OK; // 0x268 (8)
	struct UImage Image_2; // 0x270 (8)
	struct UOverlay Overlay_2; // 0x278 (8)
	struct UTextBlock TextBlock_1; // 0x280 (8)
	struct UTextBlock TextBlock_17; // 0x288 (8)
	struct UTextBlock TextBlock_18; // 0x290 (8)
	struct UTextBlock TextBlock_19; // 0x298 (8)
	char PopupType; // 0x2A0 (1)
	struct USettingMainWidget_C SettingWidget; // 0x2A8 (8)
	int32_t CurrentSelectIndex; // 0x2B0 (4)
	enum class ESettingBigType CurrentSelectType; // 0x2B4 (1)
	struct TArray<struct FBackupSlotData> BackupSlots; // 0x2B8 (16)
	struct FTimerHandle Timer; // 0x2C8 (8)
	int32_t TimerCount; // 0x2D0 (4)

	void SetTimerCount(); // Function ConfirmPopupWidget.ConfirmPopupWidget_C.SetTimerCount(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void Init(struct USettingMainWidget_C SettingWidget, int32_t Index, enum class ESettingBigType SelectType, char PopupType); // Function ConfirmPopupWidget.ConfirmPopupWidget_C.Init(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	struct FEventReply OnMouseWheel(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function ConfirmPopupWidget.ConfirmPopupWidget_C.OnMouseWheel(BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function ConfirmPopupWidget.ConfirmPopupWidget_C.OnMouseButtonDown(BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void Construct(); // Function ConfirmPopupWidget.ConfirmPopupWidget_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void BndEvt__btn_OK_K2Node_ComponentBoundEvent_35_OnButtonClickedEvent__DelegateSignature(); // Function ConfirmPopupWidget.ConfirmPopupWidget_C.BndEvt__btn_OK_K2Node_ComponentBoundEvent_35_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void BndEvt__btn_Cancel_K2Node_ComponentBoundEvent_53_OnButtonClickedEvent__DelegateSignature(); // Function ConfirmPopupWidget.ConfirmPopupWidget_C.BndEvt__btn_Cancel_K2Node_ComponentBoundEvent_53_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void BndEvt__btn_OK_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function ConfirmPopupWidget.ConfirmPopupWidget_C.BndEvt__btn_OK_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void BndEvt__btn_Cancel_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature(); // Function ConfirmPopupWidget.ConfirmPopupWidget_C.BndEvt__btn_Cancel_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature(BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void CancelImpl(); // Function ConfirmPopupWidget.ConfirmPopupWidget_C.CancelImpl(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void Destruct(); // Function ConfirmPopupWidget.ConfirmPopupWidget_C.Destruct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void ExecuteUbergraph_ConfirmPopupWidget(int32_t EntryPoint); // Function ConfirmPopupWidget.ConfirmPopupWidget_C.ExecuteUbergraph_ConfirmPopupWidget(Final|UbergraphFunction|HasDefaults) // <Game_BE.exe+0x2B80160>
};

// Function ConfirmPopupWidget.ConfirmPopupWidget_C.SetTimerCount
inline void UConfirmPopupWidget_C::SetTimerCount() {
	static auto fn = UObject::FindObject<UFunction>("Function ConfirmPopupWidget.ConfirmPopupWidget_C.SetTimerCount");

	struct SetTimerCount_Params {
		
	}; SetTimerCount_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ConfirmPopupWidget.ConfirmPopupWidget_C.Init
inline void UConfirmPopupWidget_C::Init(struct USettingMainWidget_C SettingWidget, int32_t Index, enum class ESettingBigType SelectType, char PopupType) {
	static auto fn = UObject::FindObject<UFunction>("Function ConfirmPopupWidget.ConfirmPopupWidget_C.Init");

	struct Init_Params {
		struct USettingMainWidget_C SettingWidget;
		int32_t Index;
		enum class ESettingBigType SelectType;
		char PopupType;
	}; Init_Params Params;

	Params.SettingWidget = SettingWidget;
	Params.Index = Index;
	Params.SelectType = SelectType;
	Params.PopupType = PopupType;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ConfirmPopupWidget.ConfirmPopupWidget_C.OnMouseWheel
inline struct FEventReply UConfirmPopupWidget_C::OnMouseWheel(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function ConfirmPopupWidget.ConfirmPopupWidget_C.OnMouseWheel");

	struct OnMouseWheel_Params {
		struct FGeometry MyGeometry;
		struct FPointerEvent& MouseEvent;
		struct FEventReply ReturnValue;

	}; OnMouseWheel_Params Params;

	Params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	MouseEvent = Params.MouseEvent;


	return params.ReturnValue;
}

// Function ConfirmPopupWidget.ConfirmPopupWidget_C.OnMouseButtonDown
inline struct FEventReply UConfirmPopupWidget_C::OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function ConfirmPopupWidget.ConfirmPopupWidget_C.OnMouseButtonDown");

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

// Function ConfirmPopupWidget.ConfirmPopupWidget_C.Construct
inline void UConfirmPopupWidget_C::Construct() {
	static auto fn = UObject::FindObject<UFunction>("Function ConfirmPopupWidget.ConfirmPopupWidget_C.Construct");

	struct Construct_Params {
		
	}; Construct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ConfirmPopupWidget.ConfirmPopupWidget_C.BndEvt__btn_OK_K2Node_ComponentBoundEvent_35_OnButtonClickedEvent__DelegateSignature
inline void UConfirmPopupWidget_C::BndEvt__btn_OK_K2Node_ComponentBoundEvent_35_OnButtonClickedEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function ConfirmPopupWidget.ConfirmPopupWidget_C.BndEvt__btn_OK_K2Node_ComponentBoundEvent_35_OnButtonClickedEvent__DelegateSignature");

	struct BndEvt__btn_OK_K2Node_ComponentBoundEvent_35_OnButtonClickedEvent__DelegateSignature_Params {
		
	}; BndEvt__btn_OK_K2Node_ComponentBoundEvent_35_OnButtonClickedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ConfirmPopupWidget.ConfirmPopupWidget_C.BndEvt__btn_Cancel_K2Node_ComponentBoundEvent_53_OnButtonClickedEvent__DelegateSignature
inline void UConfirmPopupWidget_C::BndEvt__btn_Cancel_K2Node_ComponentBoundEvent_53_OnButtonClickedEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function ConfirmPopupWidget.ConfirmPopupWidget_C.BndEvt__btn_Cancel_K2Node_ComponentBoundEvent_53_OnButtonClickedEvent__DelegateSignature");

	struct BndEvt__btn_Cancel_K2Node_ComponentBoundEvent_53_OnButtonClickedEvent__DelegateSignature_Params {
		
	}; BndEvt__btn_Cancel_K2Node_ComponentBoundEvent_53_OnButtonClickedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ConfirmPopupWidget.ConfirmPopupWidget_C.BndEvt__btn_OK_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
inline void UConfirmPopupWidget_C::BndEvt__btn_OK_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function ConfirmPopupWidget.ConfirmPopupWidget_C.BndEvt__btn_OK_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	struct BndEvt__btn_OK_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params {
		
	}; BndEvt__btn_OK_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ConfirmPopupWidget.ConfirmPopupWidget_C.BndEvt__btn_Cancel_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature
inline void UConfirmPopupWidget_C::BndEvt__btn_Cancel_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function ConfirmPopupWidget.ConfirmPopupWidget_C.BndEvt__btn_Cancel_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature");

	struct BndEvt__btn_Cancel_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature_Params {
		
	}; BndEvt__btn_Cancel_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ConfirmPopupWidget.ConfirmPopupWidget_C.CancelImpl
inline void UConfirmPopupWidget_C::CancelImpl() {
	static auto fn = UObject::FindObject<UFunction>("Function ConfirmPopupWidget.ConfirmPopupWidget_C.CancelImpl");

	struct CancelImpl_Params {
		
	}; CancelImpl_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ConfirmPopupWidget.ConfirmPopupWidget_C.Destruct
inline void UConfirmPopupWidget_C::Destruct() {
	static auto fn = UObject::FindObject<UFunction>("Function ConfirmPopupWidget.ConfirmPopupWidget_C.Destruct");

	struct Destruct_Params {
		
	}; Destruct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ConfirmPopupWidget.ConfirmPopupWidget_C.ExecuteUbergraph_ConfirmPopupWidget
inline void UConfirmPopupWidget_C::ExecuteUbergraph_ConfirmPopupWidget(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function ConfirmPopupWidget.ConfirmPopupWidget_C.ExecuteUbergraph_ConfirmPopupWidget");

	struct ExecuteUbergraph_ConfirmPopupWidget_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_ConfirmPopupWidget_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

