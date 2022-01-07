// WidgetBlueprintGeneratedClass WB_ClassicComboBoxButton.WB_ClassicComboBoxButton_C
class UWB_ClassicComboBoxButton_C : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown VisualNoninteractButton; // 0x250 (8)
	struct Unknown Original Style; // 0x258 (632)

	struct Unknown OnMouseButtonUp(struct Unknown MyGeometry, struct Unknown& MouseEvent); // Function WB_ClassicComboBoxButton.WB_ClassicComboBoxButton_C.OnMouseButtonUp(BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	struct Unknown OnMouseButtonDown(struct Unknown MyGeometry, struct Unknown& MouseEvent); // Function WB_ClassicComboBoxButton.WB_ClassicComboBoxButton_C.OnMouseButtonDown(BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void Construct(); // Function WB_ClassicComboBoxButton.WB_ClassicComboBoxButton_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void OnMouseEnter(struct Unknown MyGeometry, struct Unknown& MouseEvent); // Function WB_ClassicComboBoxButton.WB_ClassicComboBoxButton_C.OnMouseEnter(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void OnMouseLeave(struct Unknown& MouseEvent); // Function WB_ClassicComboBoxButton.WB_ClassicComboBoxButton_C.OnMouseLeave(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void ExecuteUbergraph_WB_ClassicComboBoxButton(int32_t EntryPoint); // Function WB_ClassicComboBoxButton.WB_ClassicComboBoxButton_C.ExecuteUbergraph_WB_ClassicComboBoxButton(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
};

// Function WB_ClassicComboBoxButton.WB_ClassicComboBoxButton_C.OnMouseButtonUp
inline struct Unknown UWB_ClassicComboBoxButton_C::OnMouseButtonUp(struct Unknown MyGeometry, struct Unknown& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function WB_ClassicComboBoxButton.WB_ClassicComboBoxButton_C.OnMouseButtonUp");

	struct OnMouseButtonUp_Params {
		struct Unknown MyGeometry;
		struct Unknown& MouseEvent;
		struct Unknown ReturnValue;

	}; OnMouseButtonUp_Params Params;

	Params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	MouseEvent = Params.MouseEvent;


	return params.ReturnValue;
}

// Function WB_ClassicComboBoxButton.WB_ClassicComboBoxButton_C.OnMouseButtonDown
inline struct Unknown UWB_ClassicComboBoxButton_C::OnMouseButtonDown(struct Unknown MyGeometry, struct Unknown& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function WB_ClassicComboBoxButton.WB_ClassicComboBoxButton_C.OnMouseButtonDown");

	struct OnMouseButtonDown_Params {
		struct Unknown MyGeometry;
		struct Unknown& MouseEvent;
		struct Unknown ReturnValue;

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
inline void UWB_ClassicComboBoxButton_C::OnMouseEnter(struct Unknown MyGeometry, struct Unknown& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function WB_ClassicComboBoxButton.WB_ClassicComboBoxButton_C.OnMouseEnter");

	struct OnMouseEnter_Params {
		struct Unknown MyGeometry;
		struct Unknown& MouseEvent;
	}; OnMouseEnter_Params Params;

	Params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	MouseEvent = Params.MouseEvent;

}

// Function WB_ClassicComboBoxButton.WB_ClassicComboBoxButton_C.OnMouseLeave
inline void UWB_ClassicComboBoxButton_C::OnMouseLeave(struct Unknown& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function WB_ClassicComboBoxButton.WB_ClassicComboBoxButton_C.OnMouseLeave");

	struct OnMouseLeave_Params {
		struct Unknown& MouseEvent;
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

