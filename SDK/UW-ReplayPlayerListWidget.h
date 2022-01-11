// WidgetBlueprintGeneratedClass UW-ReplayPlayerListWidget.UW-ReplayPlayerListWidget_C
class UUW-ReplayPlayerListWidget_C : public UBravoHotelReplayPlayerListWidget {

public:

	struct Unknown UberGraphFrame; // 0x2E0 (8)
	struct Unknown Bt_ListNext; // 0x2E8 (8)
	struct Unknown BT_ListPrev; // 0x2F0 (8)
	struct Unknown ScrollBox_PlayerItem; // 0x2F8 (8)
	struct Unknown T_SortType; // 0x300 (8)
	struct Unknown VB_ListMain; // 0x308 (8)

	struct Unknown CreatePlayerListGroup(struct Unknown PlayerState); // Function UW-ReplayPlayerListWidget.UW-ReplayPlayerListWidget_C.CreatePlayerListGroup(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void SetSortTypeText(); // Function UW-ReplayPlayerListWidget.UW-ReplayPlayerListWidget_C.SetSortTypeText(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	struct Unknown CreatePlayerButton(struct Unknown PlayerState); // Function UW-ReplayPlayerListWidget.UW-ReplayPlayerListWidget_C.CreatePlayerButton(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void BndEvt__BT_ListPrev_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function UW-ReplayPlayerListWidget.UW-ReplayPlayerListWidget_C.BndEvt__BT_ListPrev_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void BndEvt__Bt_ListNext_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function UW-ReplayPlayerListWidget.UW-ReplayPlayerListWidget_C.BndEvt__Bt_ListNext_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void Construct(); // Function UW-ReplayPlayerListWidget.UW-ReplayPlayerListWidget_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void ExecuteUbergraph_UW-ReplayPlayerListWidget(int32_t EntryPoint); // Function UW-ReplayPlayerListWidget.UW-ReplayPlayerListWidget_C.ExecuteUbergraph_UW-ReplayPlayerListWidget(Final|UbergraphFunction) // <Game_BE.exe+0x2B80160>
};

// Function UW-ReplayPlayerListWidget.UW-ReplayPlayerListWidget_C.CreatePlayerListGroup
inline struct Unknown UUW-ReplayPlayerListWidget_C::CreatePlayerListGroup(struct Unknown PlayerState) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ReplayPlayerListWidget.UW-ReplayPlayerListWidget_C.CreatePlayerListGroup");

	struct CreatePlayerListGroup_Params {
		struct Unknown PlayerState;
		struct Unknown ReturnValue;

	}; CreatePlayerListGroup_Params Params;

	Params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UW-ReplayPlayerListWidget.UW-ReplayPlayerListWidget_C.SetSortTypeText
inline void UUW-ReplayPlayerListWidget_C::SetSortTypeText() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ReplayPlayerListWidget.UW-ReplayPlayerListWidget_C.SetSortTypeText");

	struct SetSortTypeText_Params {
		
	}; SetSortTypeText_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ReplayPlayerListWidget.UW-ReplayPlayerListWidget_C.CreatePlayerButton
inline struct Unknown UUW-ReplayPlayerListWidget_C::CreatePlayerButton(struct Unknown PlayerState) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ReplayPlayerListWidget.UW-ReplayPlayerListWidget_C.CreatePlayerButton");

	struct CreatePlayerButton_Params {
		struct Unknown PlayerState;
		struct Unknown ReturnValue;

	}; CreatePlayerButton_Params Params;

	Params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UW-ReplayPlayerListWidget.UW-ReplayPlayerListWidget_C.BndEvt__BT_ListPrev_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
inline void UUW-ReplayPlayerListWidget_C::BndEvt__BT_ListPrev_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ReplayPlayerListWidget.UW-ReplayPlayerListWidget_C.BndEvt__BT_ListPrev_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	struct BndEvt__BT_ListPrev_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params {
		
	}; BndEvt__BT_ListPrev_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ReplayPlayerListWidget.UW-ReplayPlayerListWidget_C.BndEvt__Bt_ListNext_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
inline void UUW-ReplayPlayerListWidget_C::BndEvt__Bt_ListNext_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ReplayPlayerListWidget.UW-ReplayPlayerListWidget_C.BndEvt__Bt_ListNext_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	struct BndEvt__Bt_ListNext_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params {
		
	}; BndEvt__Bt_ListNext_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ReplayPlayerListWidget.UW-ReplayPlayerListWidget_C.Construct
inline void UUW-ReplayPlayerListWidget_C::Construct() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ReplayPlayerListWidget.UW-ReplayPlayerListWidget_C.Construct");

	struct Construct_Params {
		
	}; Construct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ReplayPlayerListWidget.UW-ReplayPlayerListWidget_C.ExecuteUbergraph_UW-ReplayPlayerListWidget
inline void UUW-ReplayPlayerListWidget_C::ExecuteUbergraph_UW-ReplayPlayerListWidget(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ReplayPlayerListWidget.UW-ReplayPlayerListWidget_C.ExecuteUbergraph_UW-ReplayPlayerListWidget");

	struct ExecuteUbergraph_UW-ReplayPlayerListWidget_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_UW-ReplayPlayerListWidget_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

