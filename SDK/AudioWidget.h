// WidgetBlueprintGeneratedClass AudioWidget.AudioWidget_C
class UAudioWidget_C : public UBravoHotelSettingSubWidget {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x298 (8)
	struct USlotItemWidget_C Effect; // 0x2A0 (8)
	struct USlotItemWidget_C Master; // 0x2A8 (8)
	struct USlotItemWidget_C MasterOnOff; // 0x2B0 (8)
	struct USlotItemWidget_C Music; // 0x2B8 (8)
	struct UScrollBox ScrollBox_55; // 0x2C0 (8)
	struct USlotItemWidget_C UI; // 0x2C8 (8)
	struct USlotItemWidget_C VoiceChanel; // 0x2D0 (8)
	struct USlotItemWidget_C VoiceInput; // 0x2D8 (8)
	struct USlotItemWidget_C VoiceInputMode; // 0x2E0 (8)
	struct USlotItemWidget_C VoiceOutput; // 0x2E8 (8)
	struct USubTitleSlotWidget_C �h; // 0x2F0 (8)
	struct USubTitleSlotWidget_C L1D; // 0x2F8 (8)
	struct FTimerHandle ScrollBarTimer; // 0x300 (8)

	void Construct(); // Function AudioWidget.AudioWidget_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void 鉹@t元_1(struct UBravoHotelSettingSlotWidget Value); // Function AudioWidget.AudioWidget_C.鉹@t元_1(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void BndEvt__ScrollBox_54_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature(float CurrentOffset); // Function AudioWidget.AudioWidget_C.BndEvt__ScrollBox_54_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void CustomEvent(); // Function AudioWidget.AudioWidget_C.CustomEvent(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void ExecuteUbergraph_AudioWidget(int32_t EntryPoint); // Function AudioWidget.AudioWidget_C.ExecuteUbergraph_AudioWidget(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
};

// Function AudioWidget.AudioWidget_C.Construct
inline void UAudioWidget_C::Construct() {
	static auto fn = UObject::FindObject<UFunction>("Function AudioWidget.AudioWidget_C.Construct");

	struct Construct_Params {
		
	}; Construct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AudioWidget.AudioWidget_C.鉹@t元_1
inline void UAudioWidget_C::鉹@t元_1(struct UBravoHotelSettingSlotWidget Value) {
	static auto fn = UObject::FindObject<UFunction>("Function AudioWidget.AudioWidget_C.鉹@t元_1");

	struct 鉹@t元_1_Params {
		struct UBravoHotelSettingSlotWidget Value;
	}; 鉹@t元_1_Params Params;

	Params.Value = Value;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AudioWidget.AudioWidget_C.BndEvt__ScrollBox_54_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature
inline void UAudioWidget_C::BndEvt__ScrollBox_54_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature(float CurrentOffset) {
	static auto fn = UObject::FindObject<UFunction>("Function AudioWidget.AudioWidget_C.BndEvt__ScrollBox_54_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature");

	struct BndEvt__ScrollBox_54_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature_Params {
		float CurrentOffset;
	}; BndEvt__ScrollBox_54_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature_Params Params;

	Params.CurrentOffset = CurrentOffset;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AudioWidget.AudioWidget_C.CustomEvent
inline void UAudioWidget_C::CustomEvent() {
	static auto fn = UObject::FindObject<UFunction>("Function AudioWidget.AudioWidget_C.CustomEvent");

	struct CustomEvent_Params {
		
	}; CustomEvent_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AudioWidget.AudioWidget_C.ExecuteUbergraph_AudioWidget
inline void UAudioWidget_C::ExecuteUbergraph_AudioWidget(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function AudioWidget.AudioWidget_C.ExecuteUbergraph_AudioWidget");

	struct ExecuteUbergraph_AudioWidget_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_AudioWidget_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

