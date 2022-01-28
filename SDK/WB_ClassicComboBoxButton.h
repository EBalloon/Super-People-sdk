// WidgetBlueprintGeneratedClass WB_ClassicComboBoxButton.WB_ClassicComboBoxButton_C
class UWB_ClassicComboBoxButton_C : public UUserWidget {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248 (8)
	struct UButton VisualNoninteractButton; // 0x250 (8)
	struct FButtonStyle Original Style; // 0x258 (632)

	struct FEventReply OnMouseButtonUp(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function WB_ClassicComboBoxButton.WB_ClassicComboBoxButton_C.OnMouseButtonUp(BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function WB_ClassicComboBoxButton.WB_ClassicComboBoxButton_C.OnMouseButtonDown(BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void Construct(); // Function WB_ClassicComboBoxButton.WB_ClassicComboBoxButton_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function WB_ClassicComboBoxButton.WB_ClassicComboBoxButton_C.OnMouseEnter(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function WB_ClassicComboBoxButton.WB_ClassicComboBoxButton_C.OnMouseLeave(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void ExecuteUbergraph_WB_ClassicComboBoxButton(int32_t EntryPoint); // Function WB_ClassicComboBoxButton.WB_ClassicComboBoxButton_C.ExecuteUbergraph_WB_ClassicComboBoxButton(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
};

// Function WB_ClassicComboBoxButton.WB_ClassicComboBoxButton_C.OnMouseButtonUp
inline struct FEventReply UWB_ClassicComboBoxButton_C::OnMouseButtonUp(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function WB_ClassicComboBoxButton.WB_ClassicComboBoxButton_C.OnMouseButtonUp");

	struct OnMouseButtonUp_Params {
		struct FGeometry MyGeometry;
		struct FPointerEvent& MouseEvent;
		struct FEventReply ReturnValue;

	}; OnMouseButtonUp_Params Params;

	Params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	MouseEvent = Params.MouseEvent;


	return params.ReturnValue;
}

// Function WB_ClassicComboBoxButton.WB_ClassicComboBoxButton_C.OnMouseButtonDown
inline struct FEventReply UWB_ClassicComboBoxButton_C::OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function WB_ClassicComboBoxButton.WB_ClassicComboBoxButton_C.OnMouseButtonDown");

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

// Function WB_ClassicComboBoxButton.WB_ClassicComboBoxButton_C.Construct
inline void UWB_ClassicComboBoxButton_C::Construct() {
	static auto fn = UObject::FindObject<UFunction>("Function WB_ClassicComboBoxButton.WB_ClassicComboBoxButton_C.Construct");

	struct Construct_Params {
		
	}; Construct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function WB_ClassicComboBoxButton.WB_ClassicComboBoxButton_C.OnMouseEnter
inline void UWB_ClassicComboBoxButton_C::OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function WB_ClassicComboBoxButton.WB_ClassicComboBoxButton_C.OnMouseEnter");

	struct OnMouseEnter_Params {
		struct FGeometry MyGeometry;
		struct FPointerEvent& MouseEvent;
	}; OnMouseEnter_Params Params;

	Params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	MouseEvent = Params.MouseEvent;

}

// Function WB_ClassicComboBoxButton.WB_ClassicComboBoxButton_C.OnMouseLeave
inline void UWB_ClassicComboBoxButton_C::OnMouseLeave(struct FPointerEvent& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function WB_ClassicComboBoxButton.WB_ClassicComboBoxButton_C.OnMouseLeave");

	struct OnMouseLeave_Params {
		struct FPointerEvent& MouseEvent;
	}; OnMouseLeave_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	MouseEvent = Params.MouseEvent;

}

// Function WB_ClassicComboBoxButton.WB_ClassicComboBoxButton_C.ExecuteUbergraph_WB_ClassicComboBoxButton
inline void UWB_ClassicComboBoxButton_C::ExecuteUbergraph_WB_ClassicComboBoxButton(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function WB_ClassicComboBoxButton.WB_ClassicComboBoxButton_C.ExecuteUbergraph_WB_ClassicComboBoxButton");

	struct ExecuteUbergraph_WB_ClassicComboBoxButton_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_WB_ClassicComboBoxButton_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

