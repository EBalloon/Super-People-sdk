// WidgetBlueprintGeneratedClass UW-BlackMarket_SubTabCell.UW-BlackMarket_SubTabCell_C
class UUW-BlackMarket_SubTabCell_C : public UUserWidget {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248 (8)
	struct UButton Button_Tab; // 0x250 (8)
	struct UImage Image_Check; // 0x258 (8)
	struct UTextBlock TextBlock_TabName; // 0x260 (8)
	struct UUW-BlackMarket_SubTab_C BlackMarket_SubTab; // 0x268 (8)
	enum class EBlackmarketTabType TabType; // 0x270 (1)
	struct FText TabName; // 0x278 (24)
	struct FName TabIndex; // 0x290 (8)
	char Selected : 0; // 0x298 (1)

	struct FSlateColor Get_TextBlock_TabName_ColorAndOpacity_1(); // Function UW-BlackMarket_SubTabCell.UW-BlackMarket_SubTabCell_C.Get_TextBlock_TabName_ColorAndOpacity_1(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <Game_BE.exe+0x2B80160>
	enum class ESlateVisibility Get_Image_Check_Visibility_1(); // Function UW-BlackMarket_SubTabCell.UW-BlackMarket_SubTabCell_C.Get_Image_Check_Visibility_1(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <Game_BE.exe+0x2B80160>
	void BndEvt__Button_Tab_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function UW-BlackMarket_SubTabCell.UW-BlackMarket_SubTabCell_C.BndEvt__Button_Tab_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void ExecuteUbergraph_UW-BlackMarket_SubTabCell(int32_t EntryPoint); // Function UW-BlackMarket_SubTabCell.UW-BlackMarket_SubTabCell_C.ExecuteUbergraph_UW-BlackMarket_SubTabCell(Final|UbergraphFunction) // <Game_BE.exe+0x2B80160>
};

// Function UW-BlackMarket_SubTabCell.UW-BlackMarket_SubTabCell_C.Get_TextBlock_TabName_ColorAndOpacity_1
inline struct FSlateColor UUW-BlackMarket_SubTabCell_C::Get_TextBlock_TabName_ColorAndOpacity_1() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-BlackMarket_SubTabCell.UW-BlackMarket_SubTabCell_C.Get_TextBlock_TabName_ColorAndOpacity_1");

	struct Get_TextBlock_TabName_ColorAndOpacity_1_Params {
		
		struct FSlateColor ReturnValue;

	}; Get_TextBlock_TabName_ColorAndOpacity_1_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UW-BlackMarket_SubTabCell.UW-BlackMarket_SubTabCell_C.Get_Image_Check_Visibility_1
inline enum class ESlateVisibility UUW-BlackMarket_SubTabCell_C::Get_Image_Check_Visibility_1() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-BlackMarket_SubTabCell.UW-BlackMarket_SubTabCell_C.Get_Image_Check_Visibility_1");

	struct Get_Image_Check_Visibility_1_Params {
		
		enum class ESlateVisibility ReturnValue;

	}; Get_Image_Check_Visibility_1_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UW-BlackMarket_SubTabCell.UW-BlackMarket_SubTabCell_C.BndEvt__Button_Tab_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
inline void UUW-BlackMarket_SubTabCell_C::BndEvt__Button_Tab_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-BlackMarket_SubTabCell.UW-BlackMarket_SubTabCell_C.BndEvt__Button_Tab_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	struct BndEvt__Button_Tab_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params {
		
	}; BndEvt__Button_Tab_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-BlackMarket_SubTabCell.UW-BlackMarket_SubTabCell_C.ExecuteUbergraph_UW-BlackMarket_SubTabCell
inline void UUW-BlackMarket_SubTabCell_C::ExecuteUbergraph_UW-BlackMarket_SubTabCell(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-BlackMarket_SubTabCell.UW-BlackMarket_SubTabCell_C.ExecuteUbergraph_UW-BlackMarket_SubTabCell");

	struct ExecuteUbergraph_UW-BlackMarket_SubTabCell_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_UW-BlackMarket_SubTabCell_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

