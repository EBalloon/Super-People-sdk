// WidgetBlueprintGeneratedClass ControlWidget.ControlWidget_C
class UControlWidget_C : public UBravoHotelSettingSubWidget {

public:

	struct Unknown UberGraphFrame; // 0x298 (8)
	struct Unknown 15XSensitivity; // 0x2A0 (8)
	struct Unknown 2XSensitivity; // 0x2A8 (8)
	struct Unknown 4XSensitivity; // 0x2B0 (8)
	struct Unknown 6XSensitivity; // 0x2B8 (8)
	struct Unknown 8XSensitivity; // 0x2C0 (8)
	struct Unknown ADSSensitivity; // 0x2C8 (8)
	struct Unknown GeneralSensitivity; // 0x2D0 (8)
	struct Unknown ReverseLeftAndRight; // 0x2D8 (8)
	struct Unknown ReverseUpAndDown; // 0x2E0 (8)
	struct Unknown ScrollBox_55; // 0x2E8 (8)
	struct Unknown TargetingSensitivity; // 0x2F0 (8)
	struct Unknown ToggleADS; // 0x2F8 (8)
	struct Unknown ToggleAOS; // 0x300 (8)
	struct Unknown ToggleCrouch; // 0x308 (8)
	struct Unknown ToggleExLean; // 0x310 (8)
	struct Unknown ToggleFreeLook; // 0x318 (8)
	struct Unknown ToggleSprint; // 0x320 (8)
	struct Unknown ToggleSteadyAim; // 0x328 (8)
	struct Unknown ToggleWalk; // 0x330 (8)
	struct Unknown TotalSensitivity; // 0x338 (8)
	struct Unknown UsingDetailSensitivity; // 0x340 (8)
	struct Unknown VehicleDriverSensitivity; // 0x348 (8)
	struct Unknown VerticalBox_1; // 0x350 (8)
	struct Unknown VerticlaModifier; // 0x358 (8)
	struct Unknown È°¤; // 0x360 (8)
	struct Unknown ¤TÄ¨Ü; // 0x368 (8)
	struct Unknown ¤…%)Ý; // 0x370 (8)
	struct Unknown ScrollBarTimer; // 0x378 (8)

	void Construct(); // Function ControlWidget.ControlWidget_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void DelegateChangeValue_Event_1(struct Unknown Value); // Function ControlWidget.ControlWidget_C.DelegateChangeValue_Event_1(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void BndEvt__ScrollBox_54_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature(float CurrentOffset); // Function ControlWidget.ControlWidget_C.BndEvt__ScrollBox_54_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void ä¤@t¤¸_1(); // Function ControlWidget.ControlWidget_C.ä¤@t¤¸_1(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void ExecuteUbergraph_ControlWidget(int32_t EntryPoint); // Function ControlWidget.ControlWidget_C.ExecuteUbergraph_ControlWidget(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
};

// Function ControlWidget.ControlWidget_C.Construct
inline void UControlWidget_C::Construct() {
	static auto fn = UObject::FindObject<UFunction>("Function ControlWidget.ControlWidget_C.Construct");

	struct Construct_Params {
		
	}; Construct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ControlWidget.ControlWidget_C.DelegateChangeValue_Event_1
inline void UControlWidget_C::DelegateChangeValue_Event_1(struct Unknown Value) {
	static auto fn = UObject::FindObject<UFunction>("Function ControlWidget.ControlWidget_C.DelegateChangeValue_Event_1");

	struct DelegateChangeValue_Event_1_Params {
		struct Unknown Value;
	}; DelegateChangeValue_Event_1_Params Params;

	Params.Value = Value;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ControlWidget.ControlWidget_C.BndEvt__ScrollBox_54_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature
inline void UControlWidget_C::BndEvt__ScrollBox_54_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature(float CurrentOffset) {
	static auto fn = UObject::FindObject<UFunction>("Function ControlWidget.ControlWidget_C.BndEvt__ScrollBox_54_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature");

	struct BndEvt__ScrollBox_54_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature_Params {
		float CurrentOffset;
	}; BndEvt__ScrollBox_54_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature_Params Params;

	Params.CurrentOffset = CurrentOffset;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ControlWidget.ControlWidget_C.ä¤@t¤¸_1
inline void UControlWidget_C::ä¤@t¤¸_1() {
	static auto fn = UObject::FindObject<UFunction>("Function ControlWidget.ControlWidget_C.ä¤@t¤¸_1");

	struct ä¤@t¤¸_1_Params {
		
	}; ä¤@t¤¸_1_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ControlWidget.ControlWidget_C.ExecuteUbergraph_ControlWidget
inline void UControlWidget_C::ExecuteUbergraph_ControlWidget(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function ControlWidget.ControlWidget_C.ExecuteUbergraph_ControlWidget");

	struct ExecuteUbergraph_ControlWidget_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_ControlWidget_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

