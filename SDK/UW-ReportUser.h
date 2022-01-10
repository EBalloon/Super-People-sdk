// WidgetBlueprintGeneratedClass UW-ReportUser.UW-ReportUser_C
class UUW-ReportUser_C : public UBravoHotelReportUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x278 (8)
	struct Unknown btn_Cancel; // 0x280 (8)
	struct Unknown btn_report; // 0x288 (8)
	struct Unknown combobox_button_overlay; // 0x290 (8)
	struct Unknown combobox_string; // 0x298 (8)
	struct Unknown Image; // 0x2A0 (8)
	struct Unknown Image_2; // 0x2A8 (8)
	struct Unknown Image_545; // 0x2B0 (8)
	struct Unknown NormalArrow; // 0x2B8 (8)
	struct Unknown OpeningArrow; // 0x2C0 (8)
	struct Unknown popup-bg; // 0x2C8 (8)
	struct Unknown txt_description; // 0x2D0 (8)
	struct Unknown txt_nickname; // 0x2D8 (8)
	struct Unknown uw-bg; // 0x2E0 (8)
	struct FText DescriptionText; // 0x2E8 (24)
	struct TArray<Unknown> ReportIndexText; // 0x300 (16)
	struct FText DefaultComboString; // 0x310 (24)
	int32_t CurrentSelectIndex; // 0x328 (4)
	int32_t SelectIndexFromProgram; // 0x32C (4)
	char CheckCloseComboArrow : 0; // 0x330 (1)

	void SetOpeningArrow(char InOpening); // Function UW-ReportUser.UW-ReportUser_C.SetOpeningArrow(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void SetReportComboStringFromProgramWidget(int32_t InSelectIndex); // Function UW-ReportUser.UW-ReportUser_C.SetReportComboStringFromProgramWidget(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void SetReportComboString(); // Function UW-ReportUser.UW-ReportUser_C.SetReportComboString(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void SetDefaultComboString(); // Function UW-ReportUser.UW-ReportUser_C.SetDefaultComboString(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void SetReportIndexText(); // Function UW-ReportUser.UW-ReportUser_C.SetReportIndexText(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void SetDescriptionText(); // Function UW-ReportUser.UW-ReportUser_C.SetDescriptionText(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void SetNativeValues(); // Function UW-ReportUser.UW-ReportUser_C.SetNativeValues(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void PreConstruct(char IsDesignTime); // Function UW-ReportUser.UW-ReportUser_C.PreConstruct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void Construct(); // Function UW-ReportUser.UW-ReportUser_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void BndEvt__combobox_string_K2Node_ComponentBoundEvent_0_OnOpeningEvent__DelegateSignature(); // Function UW-ReportUser.UW-ReportUser_C.BndEvt__combobox_string_K2Node_ComponentBoundEvent_0_OnOpeningEvent__DelegateSignature(BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void BndEvt__combobox_string_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature(struct FString SelectedItem, char SelectionType); // Function UW-ReportUser.UW-ReportUser_C.BndEvt__combobox_string_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature(BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void Tick(struct Unknown MyGeometry, float InDeltaTime); // Function UW-ReportUser.UW-ReportUser_C.Tick(BlueprintCosmetic|Event|Public|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void OnReportConfirm(); // Function UW-ReportUser.UW-ReportUser_C.OnReportConfirm(Event|Public|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void ExecuteUbergraph_UW-ReportUser(int32_t EntryPoint); // Function UW-ReportUser.UW-ReportUser_C.ExecuteUbergraph_UW-ReportUser(Final|UbergraphFunction|HasDefaults) // <Game_BE.exe+0x2B812B0>
};

// Function UW-ReportUser.UW-ReportUser_C.SetOpeningArrow
inline void UUW-ReportUser_C::SetOpeningArrow(char InOpening) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ReportUser.UW-ReportUser_C.SetOpeningArrow");

	struct SetOpeningArrow_Params {
		char InOpening;
	}; SetOpeningArrow_Params Params;

	Params.InOpening = InOpening;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ReportUser.UW-ReportUser_C.SetReportComboStringFromProgramWidget
inline void UUW-ReportUser_C::SetReportComboStringFromProgramWidget(int32_t InSelectIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ReportUser.UW-ReportUser_C.SetReportComboStringFromProgramWidget");

	struct SetReportComboStringFromProgramWidget_Params {
		int32_t InSelectIndex;
	}; SetReportComboStringFromProgramWidget_Params Params;

	Params.InSelectIndex = InSelectIndex;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ReportUser.UW-ReportUser_C.SetReportComboString
inline void UUW-ReportUser_C::SetReportComboString() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ReportUser.UW-ReportUser_C.SetReportComboString");

	struct SetReportComboString_Params {
		
	}; SetReportComboString_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ReportUser.UW-ReportUser_C.SetDefaultComboString
inline void UUW-ReportUser_C::SetDefaultComboString() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ReportUser.UW-ReportUser_C.SetDefaultComboString");

	struct SetDefaultComboString_Params {
		
	}; SetDefaultComboString_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ReportUser.UW-ReportUser_C.SetReportIndexText
inline void UUW-ReportUser_C::SetReportIndexText() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ReportUser.UW-ReportUser_C.SetReportIndexText");

	struct SetReportIndexText_Params {
		
	}; SetReportIndexText_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ReportUser.UW-ReportUser_C.SetDescriptionText
inline void UUW-ReportUser_C::SetDescriptionText() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ReportUser.UW-ReportUser_C.SetDescriptionText");

	struct SetDescriptionText_Params {
		
	}; SetDescriptionText_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ReportUser.UW-ReportUser_C.SetNativeValues
inline void UUW-ReportUser_C::SetNativeValues() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ReportUser.UW-ReportUser_C.SetNativeValues");

	struct SetNativeValues_Params {
		
	}; SetNativeValues_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ReportUser.UW-ReportUser_C.PreConstruct
inline void UUW-ReportUser_C::PreConstruct(char IsDesignTime) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ReportUser.UW-ReportUser_C.PreConstruct");

	struct PreConstruct_Params {
		char IsDesignTime;
	}; PreConstruct_Params Params;

	Params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ReportUser.UW-ReportUser_C.Construct
inline void UUW-ReportUser_C::Construct() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ReportUser.UW-ReportUser_C.Construct");

	struct Construct_Params {
		
	}; Construct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ReportUser.UW-ReportUser_C.BndEvt__combobox_string_K2Node_ComponentBoundEvent_0_OnOpeningEvent__DelegateSignature
inline void UUW-ReportUser_C::BndEvt__combobox_string_K2Node_ComponentBoundEvent_0_OnOpeningEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ReportUser.UW-ReportUser_C.BndEvt__combobox_string_K2Node_ComponentBoundEvent_0_OnOpeningEvent__DelegateSignature");

	struct BndEvt__combobox_string_K2Node_ComponentBoundEvent_0_OnOpeningEvent__DelegateSignature_Params {
		
	}; BndEvt__combobox_string_K2Node_ComponentBoundEvent_0_OnOpeningEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ReportUser.UW-ReportUser_C.BndEvt__combobox_string_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature
inline void UUW-ReportUser_C::BndEvt__combobox_string_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature(struct FString SelectedItem, char SelectionType) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ReportUser.UW-ReportUser_C.BndEvt__combobox_string_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature");

	struct BndEvt__combobox_string_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature_Params {
		struct FString SelectedItem;
		char SelectionType;
	}; BndEvt__combobox_string_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature_Params Params;

	Params.SelectedItem = SelectedItem;
	Params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ReportUser.UW-ReportUser_C.Tick
inline void UUW-ReportUser_C::Tick(struct Unknown MyGeometry, float InDeltaTime) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ReportUser.UW-ReportUser_C.Tick");

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

// Function UW-ReportUser.UW-ReportUser_C.OnReportConfirm
inline void UUW-ReportUser_C::OnReportConfirm() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ReportUser.UW-ReportUser_C.OnReportConfirm");

	struct OnReportConfirm_Params {
		
	}; OnReportConfirm_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ReportUser.UW-ReportUser_C.ExecuteUbergraph_UW-ReportUser
inline void UUW-ReportUser_C::ExecuteUbergraph_UW-ReportUser(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ReportUser.UW-ReportUser_C.ExecuteUbergraph_UW-ReportUser");

	struct ExecuteUbergraph_UW-ReportUser_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_UW-ReportUser_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

