// WidgetBlueprintGeneratedClass UW-ReportUserProgram.UW-ReportUserProgram_C
class UUW-ReportUserProgram_C : public UBravoHotelReportUserProgramWidget {

public:

	struct Unknown UberGraphFrame; // 0x278 (8)
	struct Unknown btn_Cancel; // 0x280 (8)
	struct Unknown btn_report; // 0x288 (8)
	struct Unknown Button_2; // 0x290 (8)
	struct Unknown Button_3; // 0x298 (8)
	struct Unknown Button_4; // 0x2A0 (8)
	struct Unknown Button_5; // 0x2A8 (8)
	struct Unknown CheckBox_2; // 0x2B0 (8)
	struct Unknown CheckBox_3; // 0x2B8 (8)
	struct Unknown CheckBox_4; // 0x2C0 (8)
	struct Unknown CheckBox_5; // 0x2C8 (8)
	struct Unknown combobox_button_overlay; // 0x2D0 (8)
	struct Unknown combobox_string; // 0x2D8 (8)
	struct Unknown Image; // 0x2E0 (8)
	struct Unknown Image_2; // 0x2E8 (8)
	struct Unknown Image_545; // 0x2F0 (8)
	struct Unknown NormalArrow; // 0x2F8 (8)
	struct Unknown OpeningArrow; // 0x300 (8)
	struct Unknown popup-bg; // 0x308 (8)
	struct Unknown txt_description; // 0x310 (8)
	struct Unknown txt_nickname; // 0x318 (8)
	struct Unknown uw-bg; // 0x320 (8)
	struct FText DescriptionText; // 0x328 (24)
	struct TArray<Unknown> ReportIndexText; // 0x340 (16)
	struct FText DefaultComboString; // 0x350 (24)
	int32_t CurrentSelectIndex; // 0x368 (4)
	char CheckCloseComboArrow : 0; // 0x36C (1)

	void CheckSelectProgramIndex(); // Function UW-ReportUserProgram.UW-ReportUserProgram_C.CheckSelectProgramIndex(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void SetOpeningArrow(char InOpening); // Function UW-ReportUserProgram.UW-ReportUserProgram_C.SetOpeningArrow(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void SetDefaultComboString(); // Function UW-ReportUserProgram.UW-ReportUserProgram_C.SetDefaultComboString(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void Set Report Index Text(); // Function UW-ReportUserProgram.UW-ReportUserProgram_C.Set Report Index Text(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void SetDescriptionText(); // Function UW-ReportUserProgram.UW-ReportUserProgram_C.SetDescriptionText(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void SetNativeValues(); // Function UW-ReportUserProgram.UW-ReportUserProgram_C.SetNativeValues(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void PreConstruct(char IsDesignTime); // Function UW-ReportUserProgram.UW-ReportUserProgram_C.PreConstruct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void Construct(); // Function UW-ReportUserProgram.UW-ReportUserProgram_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void BndEvt__combobox_string_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature(struct FString SelectedItem, char SelectionType); // Function UW-ReportUserProgram.UW-ReportUserProgram_C.BndEvt__combobox_string_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void Tick(struct Unknown MyGeometry, float InDeltaTime); // Function UW-ReportUserProgram.UW-ReportUserProgram_C.Tick(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void BndEvt__combobox_string_K2Node_ComponentBoundEvent_1_OnOpeningEvent__DelegateSignature(); // Function UW-ReportUserProgram.UW-ReportUserProgram_C.BndEvt__combobox_string_K2Node_ComponentBoundEvent_1_OnOpeningEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void BndEvt__Button_1_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature(); // Function UW-ReportUserProgram.UW-ReportUserProgram_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void BndEvt__Button_2_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature(); // Function UW-ReportUserProgram.UW-ReportUserProgram_C.BndEvt__Button_2_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void BndEvt__Button_3_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature(); // Function UW-ReportUserProgram.UW-ReportUserProgram_C.BndEvt__Button_3_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void BndEvt__Button_4_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature(); // Function UW-ReportUserProgram.UW-ReportUserProgram_C.BndEvt__Button_4_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void OnReportConfirm(); // Function UW-ReportUserProgram.UW-ReportUserProgram_C.OnReportConfirm(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void ExecuteUbergraph_UW-ReportUserProgram(int32_t EntryPoint); // Function UW-ReportUserProgram.UW-ReportUserProgram_C.ExecuteUbergraph_UW-ReportUserProgram(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
};

// Function UW-ReportUserProgram.UW-ReportUserProgram_C.CheckSelectProgramIndex
inline void UUW-ReportUserProgram_C::CheckSelectProgramIndex() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ReportUserProgram.UW-ReportUserProgram_C.CheckSelectProgramIndex");

	struct CheckSelectProgramIndex_Params {
		
	}; CheckSelectProgramIndex_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ReportUserProgram.UW-ReportUserProgram_C.SetOpeningArrow
inline void UUW-ReportUserProgram_C::SetOpeningArrow(char InOpening) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ReportUserProgram.UW-ReportUserProgram_C.SetOpeningArrow");

	struct SetOpeningArrow_Params {
		char InOpening;
	}; SetOpeningArrow_Params Params;

	Params.InOpening = InOpening;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ReportUserProgram.UW-ReportUserProgram_C.SetDefaultComboString
inline void UUW-ReportUserProgram_C::SetDefaultComboString() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ReportUserProgram.UW-ReportUserProgram_C.SetDefaultComboString");

	struct SetDefaultComboString_Params {
		
	}; SetDefaultComboString_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ReportUserProgram.UW-ReportUserProgram_C.Set Report Index Text
inline void UUW-ReportUserProgram_C::Set Report Index Text() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ReportUserProgram.UW-ReportUserProgram_C.Set Report Index Text");

	struct Set Report Index Text_Params {
		
	}; Set Report Index Text_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ReportUserProgram.UW-ReportUserProgram_C.SetDescriptionText
inline void UUW-ReportUserProgram_C::SetDescriptionText() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ReportUserProgram.UW-ReportUserProgram_C.SetDescriptionText");

	struct SetDescriptionText_Params {
		
	}; SetDescriptionText_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ReportUserProgram.UW-ReportUserProgram_C.SetNativeValues
inline void UUW-ReportUserProgram_C::SetNativeValues() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ReportUserProgram.UW-ReportUserProgram_C.SetNativeValues");

	struct SetNativeValues_Params {
		
	}; SetNativeValues_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ReportUserProgram.UW-ReportUserProgram_C.PreConstruct
inline void UUW-ReportUserProgram_C::PreConstruct(char IsDesignTime) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ReportUserProgram.UW-ReportUserProgram_C.PreConstruct");

	struct PreConstruct_Params {
		char IsDesignTime;
	}; PreConstruct_Params Params;

	Params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ReportUserProgram.UW-ReportUserProgram_C.Construct
inline void UUW-ReportUserProgram_C::Construct() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ReportUserProgram.UW-ReportUserProgram_C.Construct");

	struct Construct_Params {
		
	}; Construct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ReportUserProgram.UW-ReportUserProgram_C.BndEvt__combobox_string_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature
inline void UUW-ReportUserProgram_C::BndEvt__combobox_string_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature(struct FString SelectedItem, char SelectionType) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ReportUserProgram.UW-ReportUserProgram_C.BndEvt__combobox_string_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature");

	struct BndEvt__combobox_string_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature_Params {
		struct FString SelectedItem;
		char SelectionType;
	}; BndEvt__combobox_string_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature_Params Params;

	Params.SelectedItem = SelectedItem;
	Params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ReportUserProgram.UW-ReportUserProgram_C.Tick
inline void UUW-ReportUserProgram_C::Tick(struct Unknown MyGeometry, float InDeltaTime) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ReportUserProgram.UW-ReportUserProgram_C.Tick");

	struct Tick_Params {
		struct Unknown MyGeometry;
		float InDeltaTime;
	}; Tick_Params Params;

	Params.MyGeometry = MyGeometry;
	Params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ReportUserProgram.UW-ReportUserProgram_C.BndEvt__combobox_string_K2Node_ComponentBoundEvent_1_OnOpeningEvent__DelegateSignature
inline void UUW-ReportUserProgram_C::BndEvt__combobox_string_K2Node_ComponentBoundEvent_1_OnOpeningEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ReportUserProgram.UW-ReportUserProgram_C.BndEvt__combobox_string_K2Node_ComponentBoundEvent_1_OnOpeningEvent__DelegateSignature");

	struct BndEvt__combobox_string_K2Node_ComponentBoundEvent_1_OnOpeningEvent__DelegateSignature_Params {
		
	}; BndEvt__combobox_string_K2Node_ComponentBoundEvent_1_OnOpeningEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ReportUserProgram.UW-ReportUserProgram_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
inline void UUW-ReportUserProgram_C::BndEvt__Button_1_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ReportUserProgram.UW-ReportUserProgram_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature");

	struct BndEvt__Button_1_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params {
		
	}; BndEvt__Button_1_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ReportUserProgram.UW-ReportUserProgram_C.BndEvt__Button_2_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature
inline void UUW-ReportUserProgram_C::BndEvt__Button_2_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ReportUserProgram.UW-ReportUserProgram_C.BndEvt__Button_2_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature");

	struct BndEvt__Button_2_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature_Params {
		
	}; BndEvt__Button_2_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ReportUserProgram.UW-ReportUserProgram_C.BndEvt__Button_3_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature
inline void UUW-ReportUserProgram_C::BndEvt__Button_3_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ReportUserProgram.UW-ReportUserProgram_C.BndEvt__Button_3_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature");

	struct BndEvt__Button_3_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature_Params {
		
	}; BndEvt__Button_3_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ReportUserProgram.UW-ReportUserProgram_C.BndEvt__Button_4_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature
inline void UUW-ReportUserProgram_C::BndEvt__Button_4_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ReportUserProgram.UW-ReportUserProgram_C.BndEvt__Button_4_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature");

	struct BndEvt__Button_4_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature_Params {
		
	}; BndEvt__Button_4_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ReportUserProgram.UW-ReportUserProgram_C.OnReportConfirm
inline void UUW-ReportUserProgram_C::OnReportConfirm() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ReportUserProgram.UW-ReportUserProgram_C.OnReportConfirm");

	struct OnReportConfirm_Params {
		
	}; OnReportConfirm_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ReportUserProgram.UW-ReportUserProgram_C.ExecuteUbergraph_UW-ReportUserProgram
inline void UUW-ReportUserProgram_C::ExecuteUbergraph_UW-ReportUserProgram(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ReportUserProgram.UW-ReportUserProgram_C.ExecuteUbergraph_UW-ReportUserProgram");

	struct ExecuteUbergraph_UW-ReportUserProgram_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_UW-ReportUserProgram_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

