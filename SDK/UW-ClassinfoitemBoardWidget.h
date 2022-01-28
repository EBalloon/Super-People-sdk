// WidgetBlueprintGeneratedClass UW-ClassinfoitemBoardWidget.UW-ClassinfoitemBoardWidget_C
class UUW-ClassinfoitemBoardWidget_C : public UUserWidget {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248 (8)
	struct UWidgetAnimation Anim_Show_classinfo; // 0x250 (8)
	struct UButton Button_SpreadList; // 0x258 (8)
	struct UImage Image_323; // 0x260 (8)
	struct UUW-ClassinfoitemWidget_C UW-ClassinfoitemWidget; // 0x268 (8)
	struct UUW-ClassinfoitemWidget_C UW-ClassinfoitemWidget_2; // 0x270 (8)
	struct UUW-ClassinfoitemWidget_C UW-ClassinfoitemWidget_3; // 0x278 (8)
	struct UUW-ClassinfoitemWidget_C UW-ClassinfoitemWidget_4; // 0x280 (8)
	struct UUW-ClassinfoitemWidget_C UW-ClassinfoitemWidget_5; // 0x288 (8)
	struct UUW-ClassinfoitemWidget_C UW-ClassinfoitemWidget_6; // 0x290 (8)
	struct UUW-ClassinfoitemWidget_C UW-ClassinfoitemWidget_7; // 0x298 (8)
	struct UUW-ClassinfoitemWidget_C UW-ClassinfoitemWidget_8; // 0x2A0 (8)
	struct UUW-ClassinfoitemWidget_C UW-ClassinfoitemWidget_9; // 0x2A8 (8)
	struct UUW-ClassinfoitemWidget_C UW-ClassinfoitemWidget_10; // 0x2B0 (8)
	struct UUW-ClassinfoitemWidget_C UW-ClassinfoitemWidget_11; // 0x2B8 (8)
	struct UUW-ClassinfoitemWidget_C UW-ClassinfoitemWidget_12; // 0x2C0 (8)
	struct UVerticalBox VerticalBox_ClassBox; // 0x2C8 (8)
	struct UVerticalBox VerticalBox_ClassList; // 0x2D0 (8)
	struct UVerticalBox VerticalBox_Description; // 0x2D8 (8)
	struct UVerticalBox VerticalBox_Main; // 0x2E0 (8)
	int32_t LastTableRow; // 0x2E8 (4)
	struct TMap<struct FName, struct UUW-ClassinfoitemWidget_C> ClassInfoItemMap; // 0x2F0 (80)
	char ListVisibility : 0; // 0x340 (1)

	void UpdateClassCount(); // Function UW-ClassinfoitemBoardWidget.UW-ClassinfoitemBoardWidget_C.UpdateClassCount(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void HiddenAllClassLists(); // Function UW-ClassinfoitemBoardWidget.UW-ClassinfoitemBoardWidget_C.HiddenAllClassLists(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void SetClassList(); // Function UW-ClassinfoitemBoardWidget.UW-ClassinfoitemBoardWidget_C.SetClassList(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void Construct(); // Function UW-ClassinfoitemBoardWidget.UW-ClassinfoitemBoardWidget_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void BndEvt__Button_SpreadList_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function UW-ClassinfoitemBoardWidget.UW-ClassinfoitemBoardWidget_C.BndEvt__Button_SpreadList_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void OpenList(); // Function UW-ClassinfoitemBoardWidget.UW-ClassinfoitemBoardWidget_C.OpenList(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void CloseList(); // Function UW-ClassinfoitemBoardWidget.UW-ClassinfoitemBoardWidget_C.CloseList(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void UpdateList(); // Function UW-ClassinfoitemBoardWidget.UW-ClassinfoitemBoardWidget_C.UpdateList(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void OnBattleRoyalStateChanged_Event_1(enum class EBattleRoyaleState PrevState, enum class EBattleRoyaleState CurrentState); // Function UW-ClassinfoitemBoardWidget.UW-ClassinfoitemBoardWidget_C.OnBattleRoyalStateChanged_Event_1(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void OnUpdateClassCount_Event_1(); // Function UW-ClassinfoitemBoardWidget.UW-ClassinfoitemBoardWidget_C.OnUpdateClassCount_Event_1(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void ExecuteUbergraph_UW-ClassinfoitemBoardWidget(int32_t EntryPoint); // Function UW-ClassinfoitemBoardWidget.UW-ClassinfoitemBoardWidget_C.ExecuteUbergraph_UW-ClassinfoitemBoardWidget(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
};

// Function UW-ClassinfoitemBoardWidget.UW-ClassinfoitemBoardWidget_C.UpdateClassCount
inline void UUW-ClassinfoitemBoardWidget_C::UpdateClassCount() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ClassinfoitemBoardWidget.UW-ClassinfoitemBoardWidget_C.UpdateClassCount");

	struct UpdateClassCount_Params {
		
	}; UpdateClassCount_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ClassinfoitemBoardWidget.UW-ClassinfoitemBoardWidget_C.HiddenAllClassLists
inline void UUW-ClassinfoitemBoardWidget_C::HiddenAllClassLists() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ClassinfoitemBoardWidget.UW-ClassinfoitemBoardWidget_C.HiddenAllClassLists");

	struct HiddenAllClassLists_Params {
		
	}; HiddenAllClassLists_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ClassinfoitemBoardWidget.UW-ClassinfoitemBoardWidget_C.SetClassList
inline void UUW-ClassinfoitemBoardWidget_C::SetClassList() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ClassinfoitemBoardWidget.UW-ClassinfoitemBoardWidget_C.SetClassList");

	struct SetClassList_Params {
		
	}; SetClassList_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ClassinfoitemBoardWidget.UW-ClassinfoitemBoardWidget_C.Construct
inline void UUW-ClassinfoitemBoardWidget_C::Construct() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ClassinfoitemBoardWidget.UW-ClassinfoitemBoardWidget_C.Construct");

	struct Construct_Params {
		
	}; Construct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ClassinfoitemBoardWidget.UW-ClassinfoitemBoardWidget_C.BndEvt__Button_SpreadList_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
inline void UUW-ClassinfoitemBoardWidget_C::BndEvt__Button_SpreadList_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ClassinfoitemBoardWidget.UW-ClassinfoitemBoardWidget_C.BndEvt__Button_SpreadList_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	struct BndEvt__Button_SpreadList_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params {
		
	}; BndEvt__Button_SpreadList_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ClassinfoitemBoardWidget.UW-ClassinfoitemBoardWidget_C.OpenList
inline void UUW-ClassinfoitemBoardWidget_C::OpenList() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ClassinfoitemBoardWidget.UW-ClassinfoitemBoardWidget_C.OpenList");

	struct OpenList_Params {
		
	}; OpenList_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ClassinfoitemBoardWidget.UW-ClassinfoitemBoardWidget_C.CloseList
inline void UUW-ClassinfoitemBoardWidget_C::CloseList() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ClassinfoitemBoardWidget.UW-ClassinfoitemBoardWidget_C.CloseList");

	struct CloseList_Params {
		
	}; CloseList_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ClassinfoitemBoardWidget.UW-ClassinfoitemBoardWidget_C.UpdateList
inline void UUW-ClassinfoitemBoardWidget_C::UpdateList() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ClassinfoitemBoardWidget.UW-ClassinfoitemBoardWidget_C.UpdateList");

	struct UpdateList_Params {
		
	}; UpdateList_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ClassinfoitemBoardWidget.UW-ClassinfoitemBoardWidget_C.OnBattleRoyalStateChanged_Event_1
inline void UUW-ClassinfoitemBoardWidget_C::OnBattleRoyalStateChanged_Event_1(enum class EBattleRoyaleState PrevState, enum class EBattleRoyaleState CurrentState) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ClassinfoitemBoardWidget.UW-ClassinfoitemBoardWidget_C.OnBattleRoyalStateChanged_Event_1");

	struct OnBattleRoyalStateChanged_Event_1_Params {
		enum class EBattleRoyaleState PrevState;
		enum class EBattleRoyaleState CurrentState;
	}; OnBattleRoyalStateChanged_Event_1_Params Params;

	Params.PrevState = PrevState;
	Params.CurrentState = CurrentState;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ClassinfoitemBoardWidget.UW-ClassinfoitemBoardWidget_C.OnUpdateClassCount_Event_1
inline void UUW-ClassinfoitemBoardWidget_C::OnUpdateClassCount_Event_1() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ClassinfoitemBoardWidget.UW-ClassinfoitemBoardWidget_C.OnUpdateClassCount_Event_1");

	struct OnUpdateClassCount_Event_1_Params {
		
	}; OnUpdateClassCount_Event_1_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ClassinfoitemBoardWidget.UW-ClassinfoitemBoardWidget_C.ExecuteUbergraph_UW-ClassinfoitemBoardWidget
inline void UUW-ClassinfoitemBoardWidget_C::ExecuteUbergraph_UW-ClassinfoitemBoardWidget(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ClassinfoitemBoardWidget.UW-ClassinfoitemBoardWidget_C.ExecuteUbergraph_UW-ClassinfoitemBoardWidget");

	struct ExecuteUbergraph_UW-ClassinfoitemBoardWidget_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_UW-ClassinfoitemBoardWidget_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

