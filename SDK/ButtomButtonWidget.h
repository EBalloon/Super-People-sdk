// WidgetBlueprintGeneratedClass ButtomButtonWidget.ButtomButtonWidget_C
class UButtomButtonWidget_C : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown ApplyBtn; // 0x250 (8)
	struct Unknown ApplyDisable; // 0x258 (8)
	struct Unknown ApplyNormalBg; // 0x260 (8)
	struct Unknown ApplyOverBg; // 0x268 (8)
	struct Unknown ApplyPressBg; // 0x270 (8)
	struct Unknown Button_31; // 0x278 (8)
	struct Unknown Lock; // 0x280 (8)
	struct Unknown NormalBg; // 0x288 (8)
	struct Unknown NormalBtn; // 0x290 (8)
	struct Unknown OverBG; // 0x298 (8)
	struct Unknown PressBg; // 0x2A0 (8)
	struct Unknown Title_Text; // 0x2A8 (8)
	struct FText Title; // 0x2B0 (24)
	struct FMulticastInlineDelegate OnClickEventDispatcher; // 0x2C8 (16)
	char IsDisableBnt : 0; // 0x2D8 (1)
	int32_t CurType; // 0x2DC (4)
	char ColorType : 0; // 0x2E0 (1)
	char Applytype : 0; // 0x2E1 (1)
	char NewVar_1 : 0; // 0x2E2 (1)

	void Set DisableBtn(char IsDisable); // Function ButtomButtonWidget.ButtomButtonWidget_C.Set DisableBtn(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void BndEvt__Button_30_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature(); // Function ButtomButtonWidget.ButtomButtonWidget_C.BndEvt__Button_30_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void BndEvt__Button_30_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature(); // Function ButtomButtonWidget.ButtomButtonWidget_C.BndEvt__Button_30_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void BndEvt__Button_30_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function ButtomButtonWidget.ButtomButtonWidget_C.BndEvt__Button_30_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void BndEvt__Button_30_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function ButtomButtonWidget.ButtomButtonWidget_C.BndEvt__Button_30_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void BndEvt__Button_30_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // Function ButtomButtonWidget.ButtomButtonWidget_C.BndEvt__Button_30_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void SetState(int32_t Type, int32_t Selection); // Function ButtomButtonWidget.ButtomButtonWidget_C.SetState(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void SetColortype(char ColorType); // Function ButtomButtonWidget.ButtomButtonWidget_C.SetColortype(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void Construct(); // Function ButtomButtonWidget.ButtomButtonWidget_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void ExecuteUbergraph_ButtomButtonWidget(int32_t EntryPoint); // Function ButtomButtonWidget.ButtomButtonWidget_C.ExecuteUbergraph_ButtomButtonWidget(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void OnClickEventDispatcher__DelegateSignature(struct Unknown Widget); // Function ButtomButtonWidget.ButtomButtonWidget_C.OnClickEventDispatcher__DelegateSignature(Public|Delegate|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
};

// Function ButtomButtonWidget.ButtomButtonWidget_C.Set DisableBtn
inline void UButtomButtonWidget_C::Set DisableBtn(char IsDisable) {
	static auto fn = UObject::FindObject<UFunction>("Function ButtomButtonWidget.ButtomButtonWidget_C.Set DisableBtn");

	struct Set DisableBtn_Params {
		char IsDisable;
	}; Set DisableBtn_Params Params;

	Params.IsDisable = IsDisable;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ButtomButtonWidget.ButtomButtonWidget_C.BndEvt__Button_30_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature
inline void UButtomButtonWidget_C::BndEvt__Button_30_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function ButtomButtonWidget.ButtomButtonWidget_C.BndEvt__Button_30_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature");

	struct BndEvt__Button_30_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature_Params {
		
	}; BndEvt__Button_30_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ButtomButtonWidget.ButtomButtonWidget_C.BndEvt__Button_30_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature
inline void UButtomButtonWidget_C::BndEvt__Button_30_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function ButtomButtonWidget.ButtomButtonWidget_C.BndEvt__Button_30_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature");

	struct BndEvt__Button_30_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature_Params {
		
	}; BndEvt__Button_30_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ButtomButtonWidget.ButtomButtonWidget_C.BndEvt__Button_30_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
inline void UButtomButtonWidget_C::BndEvt__Button_30_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function ButtomButtonWidget.ButtomButtonWidget_C.BndEvt__Button_30_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");

	struct BndEvt__Button_30_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params {
		
	}; BndEvt__Button_30_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ButtomButtonWidget.ButtomButtonWidget_C.BndEvt__Button_30_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
inline void UButtomButtonWidget_C::BndEvt__Button_30_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function ButtomButtonWidget.ButtomButtonWidget_C.BndEvt__Button_30_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	struct BndEvt__Button_30_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params {
		
	}; BndEvt__Button_30_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ButtomButtonWidget.ButtomButtonWidget_C.BndEvt__Button_30_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
inline void UButtomButtonWidget_C::BndEvt__Button_30_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function ButtomButtonWidget.ButtomButtonWidget_C.BndEvt__Button_30_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	struct BndEvt__Button_30_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params {
		
	}; BndEvt__Button_30_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ButtomButtonWidget.ButtomButtonWidget_C.SetState
inline void UButtomButtonWidget_C::SetState(int32_t Type, int32_t Selection) {
	static auto fn = UObject::FindObject<UFunction>("Function ButtomButtonWidget.ButtomButtonWidget_C.SetState");

	struct SetState_Params {
		int32_t Type;
		int32_t Selection;
	}; SetState_Params Params;

	Params.Type = Type;
	Params.Selection = Selection;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ButtomButtonWidget.ButtomButtonWidget_C.SetColortype
inline void UButtomButtonWidget_C::SetColortype(char ColorType) {
	static auto fn = UObject::FindObject<UFunction>("Function ButtomButtonWidget.ButtomButtonWidget_C.SetColortype");

	struct SetColortype_Params {
		char ColorType;
	}; SetColortype_Params Params;

	Params.ColorType = ColorType;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ButtomButtonWidget.ButtomButtonWidget_C.Construct
inline void UButtomButtonWidget_C::Construct() {
	static auto fn = UObject::FindObject<UFunction>("Function ButtomButtonWidget.ButtomButtonWidget_C.Construct");

	struct Construct_Params {
		
	}; Construct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ButtomButtonWidget.ButtomButtonWidget_C.ExecuteUbergraph_ButtomButtonWidget
inline void UButtomButtonWidget_C::ExecuteUbergraph_ButtomButtonWidget(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function ButtomButtonWidget.ButtomButtonWidget_C.ExecuteUbergraph_ButtomButtonWidget");

	struct ExecuteUbergraph_ButtomButtonWidget_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_ButtomButtonWidget_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ButtomButtonWidget.ButtomButtonWidget_C.OnClickEventDispatcher__DelegateSignature
inline void UButtomButtonWidget_C::OnClickEventDispatcher__DelegateSignature(struct Unknown Widget) {
	static auto fn = UObject::FindObject<UFunction>("Function ButtomButtonWidget.ButtomButtonWidget_C.OnClickEventDispatcher__DelegateSignature");

	struct OnClickEventDispatcher__DelegateSignature_Params {
		struct Unknown Widget;
	}; OnClickEventDispatcher__DelegateSignature_Params Params;

	Params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

