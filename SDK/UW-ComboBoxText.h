// WidgetBlueprintGeneratedClass UW-ComboBoxText.UW-ComboBoxText_C
class UUW-ComboBoxText_C : public UUserWidget {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248 (8)
	struct UButton Button_43; // 0x250 (8)
	struct UImage Off; // 0x258 (8)
	struct UImage On; // 0x260 (8)
	struct UTextBlock TextBlock_67; // 0x268 (8)
	struct FText Text; // 0x270 (24)

	void BndEvt__Button_42_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function UW-ComboBoxText.UW-ComboBoxText_C.BndEvt__Button_42_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void SetSelect(char IsSelect); // Function UW-ComboBoxText.UW-ComboBoxText_C.SetSelect(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void ExecuteUbergraph_UW-ComboBoxText(int32_t EntryPoint); // Function UW-ComboBoxText.UW-ComboBoxText_C.ExecuteUbergraph_UW-ComboBoxText(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
};

// Function UW-ComboBoxText.UW-ComboBoxText_C.BndEvt__Button_42_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
inline void UUW-ComboBoxText_C::BndEvt__Button_42_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ComboBoxText.UW-ComboBoxText_C.BndEvt__Button_42_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");

	struct BndEvt__Button_42_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params {
		
	}; BndEvt__Button_42_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ComboBoxText.UW-ComboBoxText_C.SetSelect
inline void UUW-ComboBoxText_C::SetSelect(char IsSelect) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ComboBoxText.UW-ComboBoxText_C.SetSelect");

	struct SetSelect_Params {
		char IsSelect;
	}; SetSelect_Params Params;

	Params.IsSelect = IsSelect;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ComboBoxText.UW-ComboBoxText_C.ExecuteUbergraph_UW-ComboBoxText
inline void UUW-ComboBoxText_C::ExecuteUbergraph_UW-ComboBoxText(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ComboBoxText.UW-ComboBoxText_C.ExecuteUbergraph_UW-ComboBoxText");

	struct ExecuteUbergraph_UW-ComboBoxText_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_UW-ComboBoxText_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

