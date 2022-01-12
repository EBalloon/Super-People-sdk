// WidgetBlueprintGeneratedClass selectTypeBtn.selectTypeBtn_C
class UselectTypeBtn_C : public UUserWidget {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248 (8)
	struct UButton Button_43; // 0x250 (8)
	struct UImage Image_43; // 0x258 (8)
	struct FMulticastInlineDelegate SelectEventDispatcher; // 0x260 (16)
	int32_t Index; // 0x270 (4)

	void BndEvt__Button_42_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // Function selectTypeBtn.selectTypeBtn_C.BndEvt__Button_42_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void SelectIndex(int32_t Index); // Function selectTypeBtn.selectTypeBtn_C.SelectIndex(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void ExecuteUbergraph_selectTypeBtn(int32_t EntryPoint); // Function selectTypeBtn.selectTypeBtn_C.ExecuteUbergraph_selectTypeBtn(Final|UbergraphFunction) // <Game_BE.exe+0x2B80160>
	void SelectEventDispatcher__DelegateSignature(int32_t Index); // Function selectTypeBtn.selectTypeBtn_C.SelectEventDispatcher__DelegateSignature(Public|Delegate|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
};

// Function selectTypeBtn.selectTypeBtn_C.BndEvt__Button_42_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
inline void UselectTypeBtn_C::BndEvt__Button_42_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function selectTypeBtn.selectTypeBtn_C.BndEvt__Button_42_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	struct BndEvt__Button_42_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params {
		
	}; BndEvt__Button_42_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function selectTypeBtn.selectTypeBtn_C.SelectIndex
inline void UselectTypeBtn_C::SelectIndex(int32_t Index) {
	static auto fn = UObject::FindObject<UFunction>("Function selectTypeBtn.selectTypeBtn_C.SelectIndex");

	struct SelectIndex_Params {
		int32_t Index;
	}; SelectIndex_Params Params;

	Params.Index = Index;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function selectTypeBtn.selectTypeBtn_C.ExecuteUbergraph_selectTypeBtn
inline void UselectTypeBtn_C::ExecuteUbergraph_selectTypeBtn(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function selectTypeBtn.selectTypeBtn_C.ExecuteUbergraph_selectTypeBtn");

	struct ExecuteUbergraph_selectTypeBtn_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_selectTypeBtn_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function selectTypeBtn.selectTypeBtn_C.SelectEventDispatcher__DelegateSignature
inline void UselectTypeBtn_C::SelectEventDispatcher__DelegateSignature(int32_t Index) {
	static auto fn = UObject::FindObject<UFunction>("Function selectTypeBtn.selectTypeBtn_C.SelectEventDispatcher__DelegateSignature");

	struct SelectEventDispatcher__DelegateSignature_Params {
		int32_t Index;
	}; SelectEventDispatcher__DelegateSignature_Params Params;

	Params.Index = Index;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

