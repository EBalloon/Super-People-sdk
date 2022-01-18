// WidgetBlueprintGeneratedClass UW-StartGammaSetting.UW-StartGammaSetting_C
class UUW-StartGammaSetting_C : public UUserWidget {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248 (8)
	struct UButton Button_OK; // 0x250 (8)
	struct UImage Image_337; // 0x258 (8)
	struct UImage Image_581; // 0x260 (8)
	struct UImage Image_583; // 0x268 (8)
	struct UImage Image_584; // 0x270 (8)
	struct USlider Slider_Gamma; // 0x278 (8)
	struct UTextBlock TextBlock_Gamma; // 0x280 (8)
	struct UBP_GameSettings_C Game Settings; // 0x288 (8)
	float Gamma Strength Slider Value; // 0x290 (4)
	struct FText Gamma Strength Edit Value; // 0x298 (24)
	struct FMulticastInlineDelegate ClosedWidgetDelegate; // 0x2B0 (16)

	void Refresh Video Settings(); // Function UW-StartGammaSetting.UW-StartGammaSetting_C.Refresh Video Settings(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void Refresh Gamma Intensity(float Strength); // Function UW-StartGammaSetting.UW-StartGammaSetting_C.Refresh Gamma Intensity(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void Construct(); // Function UW-StartGammaSetting.UW-StartGammaSetting_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void BndEvt__Slider_138_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEvent__DelegateSignature(float Value); // Function UW-StartGammaSetting.UW-StartGammaSetting_C.BndEvt__Slider_138_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void BndEvt__Button_479_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // Function UW-StartGammaSetting.UW-StartGammaSetting_C.BndEvt__Button_479_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void ExecuteUbergraph_UW-StartGammaSetting(int32_t EntryPoint); // Function UW-StartGammaSetting.UW-StartGammaSetting_C.ExecuteUbergraph_UW-StartGammaSetting(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void ClosedWidgetDelegate__DelegateSignature(); // Function UW-StartGammaSetting.UW-StartGammaSetting_C.ClosedWidgetDelegate__DelegateSignature(Public|Delegate|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
};

// Function UW-StartGammaSetting.UW-StartGammaSetting_C.Refresh Video Settings
inline void UUW-StartGammaSetting_C::Refresh Video Settings() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-StartGammaSetting.UW-StartGammaSetting_C.Refresh Video Settings");

	struct Refresh Video Settings_Params {
		
	}; Refresh Video Settings_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-StartGammaSetting.UW-StartGammaSetting_C.Refresh Gamma Intensity
inline void UUW-StartGammaSetting_C::Refresh Gamma Intensity(float Strength) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-StartGammaSetting.UW-StartGammaSetting_C.Refresh Gamma Intensity");

	struct Refresh Gamma Intensity_Params {
		float Strength;
	}; Refresh Gamma Intensity_Params Params;

	Params.Strength = Strength;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-StartGammaSetting.UW-StartGammaSetting_C.Construct
inline void UUW-StartGammaSetting_C::Construct() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-StartGammaSetting.UW-StartGammaSetting_C.Construct");

	struct Construct_Params {
		
	}; Construct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-StartGammaSetting.UW-StartGammaSetting_C.BndEvt__Slider_138_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEvent__DelegateSignature
inline void UUW-StartGammaSetting_C::BndEvt__Slider_138_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEvent__DelegateSignature(float Value) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-StartGammaSetting.UW-StartGammaSetting_C.BndEvt__Slider_138_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEvent__DelegateSignature");

	struct BndEvt__Slider_138_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEvent__DelegateSignature_Params {
		float Value;
	}; BndEvt__Slider_138_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEvent__DelegateSignature_Params Params;

	Params.Value = Value;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-StartGammaSetting.UW-StartGammaSetting_C.BndEvt__Button_479_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
inline void UUW-StartGammaSetting_C::BndEvt__Button_479_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-StartGammaSetting.UW-StartGammaSetting_C.BndEvt__Button_479_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	struct BndEvt__Button_479_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params {
		
	}; BndEvt__Button_479_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-StartGammaSetting.UW-StartGammaSetting_C.ExecuteUbergraph_UW-StartGammaSetting
inline void UUW-StartGammaSetting_C::ExecuteUbergraph_UW-StartGammaSetting(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-StartGammaSetting.UW-StartGammaSetting_C.ExecuteUbergraph_UW-StartGammaSetting");

	struct ExecuteUbergraph_UW-StartGammaSetting_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_UW-StartGammaSetting_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-StartGammaSetting.UW-StartGammaSetting_C.ClosedWidgetDelegate__DelegateSignature
inline void UUW-StartGammaSetting_C::ClosedWidgetDelegate__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-StartGammaSetting.UW-StartGammaSetting_C.ClosedWidgetDelegate__DelegateSignature");

	struct ClosedWidgetDelegate__DelegateSignature_Params {
		
	}; ClosedWidgetDelegate__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

