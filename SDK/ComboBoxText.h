// WidgetBlueprintGeneratedClass ComboBoxText.ComboBoxText_C
class UComboBoxText_C : public UUserWidget {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248 (8)
	struct UButton Button_43; // 0x250 (8)
	struct UImage Image_269; // 0x258 (8)
	struct UTextBlock TextBlock_67; // 0x260 (8)
	struct FText Text; // 0x268 (24)

	struct UWidget NewFunction_1(); // Function ComboBoxText.ComboBoxText_C.NewFunction_1(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void BndEvt__Button_42_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function ComboBoxText.ComboBoxText_C.BndEvt__Button_42_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void SetColor(struct FLinearColor Color); // Function ComboBoxText.ComboBoxText_C.SetColor(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void ExecuteUbergraph_ComboBoxText(int32_t EntryPoint); // Function ComboBoxText.ComboBoxText_C.ExecuteUbergraph_ComboBoxText(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
};

// Function ComboBoxText.ComboBoxText_C.NewFunction_1
inline struct UWidget UComboBoxText_C::NewFunction_1() {
	static auto fn = UObject::FindObject<UFunction>("Function ComboBoxText.ComboBoxText_C.NewFunction_1");

	struct NewFunction_1_Params {
		
		struct UWidget ReturnValue;

	}; NewFunction_1_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function ComboBoxText.ComboBoxText_C.BndEvt__Button_42_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
inline void UComboBoxText_C::BndEvt__Button_42_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function ComboBoxText.ComboBoxText_C.BndEvt__Button_42_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");

	struct BndEvt__Button_42_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params {
		
	}; BndEvt__Button_42_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ComboBoxText.ComboBoxText_C.SetColor
inline void UComboBoxText_C::SetColor(struct FLinearColor Color) {
	static auto fn = UObject::FindObject<UFunction>("Function ComboBoxText.ComboBoxText_C.SetColor");

	struct SetColor_Params {
		struct FLinearColor Color;
	}; SetColor_Params Params;

	Params.Color = Color;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ComboBoxText.ComboBoxText_C.ExecuteUbergraph_ComboBoxText
inline void UComboBoxText_C::ExecuteUbergraph_ComboBoxText(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function ComboBoxText.ComboBoxText_C.ExecuteUbergraph_ComboBoxText");

	struct ExecuteUbergraph_ComboBoxText_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_ComboBoxText_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

