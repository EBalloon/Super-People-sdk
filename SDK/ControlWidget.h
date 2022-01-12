// WidgetBlueprintGeneratedClass ControlWidget.ControlWidget_C
class UControlWidget_C : public UBravoHotelSettingSubWidget {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x298 (8)
	struct USlotItemWidget_C 15XSensitivity; // 0x2A0 (8)
	struct USlotItemWidget_C 2XSensitivity; // 0x2A8 (8)
	struct USlotItemWidget_C 4XSensitivity; // 0x2B0 (8)
	struct USlotItemWidget_C 6XSensitivity; // 0x2B8 (8)
	struct USlotItemWidget_C 8XSensitivity; // 0x2C0 (8)
	struct USlotItemWidget_C ADSSensitivity; // 0x2C8 (8)
	struct USlotItemWidget_C GeneralSensitivity; // 0x2D0 (8)
	struct USlotItemWidget_C ReverseLeftAndRight; // 0x2D8 (8)
	struct USlotItemWidget_C ReverseUpAndDown; // 0x2E0 (8)
	struct UScrollBox ScrollBox_55; // 0x2E8 (8)
	struct USlotItemWidget_C TargetingSensitivity; // 0x2F0 (8)
	struct USlotItemWidget_C ToggleADS; // 0x2F8 (8)
	struct USlotItemWidget_C ToggleAOS; // 0x300 (8)
	struct USlotItemWidget_C ToggleCrouch; // 0x308 (8)
	struct USlotItemWidget_C ToggleExLean; // 0x310 (8)
	struct USlotItemWidget_C ToggleFreeLook; // 0x318 (8)
	struct USlotItemWidget_C ToggleSprint; // 0x320 (8)
	struct USlotItemWidget_C ToggleSteadyAim; // 0x328 (8)
	struct USlotItemWidget_C ToggleWalk; // 0x330 (8)
	struct USlotItemWidget_C TotalSensitivity; // 0x338 (8)
	struct USlotItemWidget_C UsingDetailSensitivity; // 0x340 (8)
	struct USlotItemWidget_C VehicleDriverSensitivity; // 0x348 (8)
	struct UVerticalBox VerticalBox_1; // 0x350 (8)
	struct USlotItemWidget_C VerticlaModifier; // 0x358 (8)
	struct USubTitleSlotWidget_C È°¤; // 0x360 (8)
	struct USubTitleSlotWidget_C ¤TÄ¨Ü; // 0x368 (8)
	struct USubTitleSlotWidget_C ¤…%)Ý; // 0x370 (8)
	struct FTimerHandle ScrollBarTimer; // 0x378 (8)

	void Construct(); // Function ControlWidget.ControlWidget_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void DelegateChangeValue_Event_1(struct UBravoHotelSettingSlotWidget Value); // Function ControlWidget.ControlWidget_C.DelegateChangeValue_Event_1(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void BndEvt__ScrollBox_54_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature(float CurrentOffset); // Function ControlWidget.ControlWidget_C.BndEvt__ScrollBox_54_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature(BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void ä¤@t¤¸_1(); // Function ControlWidget.ControlWidget_C.ä¤@t¤¸_1(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void ExecuteUbergraph_ControlWidget(int32_t EntryPoint); // Function ControlWidget.ControlWidget_C.ExecuteUbergraph_ControlWidget(Final|UbergraphFunction|HasDefaults) // <Game_BE.exe+0x2B80160>
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
inline void UControlWidget_C::DelegateChangeValue_Event_1(struct UBravoHotelSettingSlotWidget Value) {
	static auto fn = UObject::FindObject<UFunction>("Function ControlWidget.ControlWidget_C.DelegateChangeValue_Event_1");

	struct DelegateChangeValue_Event_1_Params {
		struct UBravoHotelSettingSlotWidget Value;
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

