// WidgetBlueprintGeneratedClass UW-BlackMarket_SubTabCell.UW-BlackMarket_SubTabCell_C
class UUW-BlackMarket_SubTabCell_C : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown Button_Tab; // 0x250 (8)
	struct Unknown Image_Check; // 0x258 (8)
	struct Unknown TextBlock_TabName; // 0x260 (8)
	struct Unknown BlackMarket_SubTab; // 0x268 (8)
	enum class Unknow TabType; // 0x270 (1)
	struct FText TabName; // 0x278 (24)
	struct FName TabIndex; // 0x290 (8)
	char Selected : 0; // 0x298 (1)

	struct Unknown Get_TextBlock_TabName_ColorAndOpacity_1(); // Function UW-BlackMarket_SubTabCell.UW-BlackMarket_SubTabCell_C.Get_TextBlock_TabName_ColorAndOpacity_1(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	enum class Unknow Get_Image_Check_Visibility_1(); // Function UW-BlackMarket_SubTabCell.UW-BlackMarket_SubTabCell_C.Get_Image_Check_Visibility_1(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void BndEvt__Button_Tab_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function UW-BlackMarket_SubTabCell.UW-BlackMarket_SubTabCell_C.BndEvt__Button_Tab_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void ExecuteUbergraph_UW-BlackMarket_SubTabCell(int32_t EntryPoint); // Function UW-BlackMarket_SubTabCell.UW-BlackMarket_SubTabCell_C.ExecuteUbergraph_UW-BlackMarket_SubTabCell(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
};

// Function UW-BlackMarket_SubTabCell.UW-BlackMarket_SubTabCell_C.Get_TextBlock_TabName_ColorAndOpacity_1
inline struct Unknown UUW-BlackMarket_SubTabCell_C::Get_TextBlock_TabName_ColorAndOpacity_1() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-BlackMarket_SubTabCell.UW-BlackMarket_SubTabCell_C.Get_TextBlock_TabName_ColorAndOpacity_1");

	struct Get_TextBlock_TabName_ColorAndOpacity_1_Params {
		
		struct Unknown ReturnValue;

	}; Get_TextBlock_TabName_ColorAndOpacity_1_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UW-BlackMarket_SubTabCell.UW-BlackMarket_SubTabCell_C.Get_Image_Check_Visibility_1
inline enum class Unknow UUW-BlackMarket_SubTabCell_C::Get_Image_Check_Visibility_1() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-BlackMarket_SubTabCell.UW-BlackMarket_SubTabCell_C.Get_Image_Check_Visibility_1");

	struct Get_Image_Check_Visibility_1_Params {
		
		enum class Unknow ReturnValue;

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

