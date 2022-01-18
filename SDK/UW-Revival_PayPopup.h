// WidgetBlueprintGeneratedClass UW-Revival_PayPopup.UW-Revival_PayPopup_C
class UUW-Revival_PayPopup_C : public UUserWidget {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248 (8)
	struct UImage Bg; // 0x250 (8)
	struct UButton Button_Cancle; // 0x258 (8)
	struct UButton Button_OK; // 0x260 (8)
	struct UImage Image; // 0x268 (8)
	struct UImage Image_168; // 0x270 (8)
	struct UImage Image_423; // 0x278 (8)
	struct UImage Image_853; // 0x280 (8)
	struct UImage Image_1449; // 0x288 (8)
	struct UImage Image_1451; // 0x290 (8)
	struct UImage Image_1452; // 0x298 (8)
	struct UImage Image_1453; // 0x2A0 (8)
	struct UImage Image_1454; // 0x2A8 (8)
	struct UImage Image_1965; // 0x2B0 (8)
	struct UImage Image_1967; // 0x2B8 (8)
	struct UImage Image_1968; // 0x2C0 (8)
	struct UImage Image_1969; // 0x2C8 (8)
	struct UImage Image_1970; // 0x2D0 (8)
	struct UImage Image_1971; // 0x2D8 (8)
	struct UImage Image_1972; // 0x2E0 (8)
	struct UImage Image_1973; // 0x2E8 (8)
	struct UImage Image_1974; // 0x2F0 (8)
	struct UImage Image_1975; // 0x2F8 (8)
	struct UImage Image_1976; // 0x300 (8)
	struct UImage Image_1977; // 0x308 (8)
	struct UImage Image_1978; // 0x310 (8)
	struct UImage Image_2324; // 0x318 (8)
	struct UTextBlock TextBlock_CurrentGold; // 0x320 (8)
	struct UTextBlock TextBlock_Price; // 0x328 (8)
	struct ABravoHotelCharacter TargetCharacter; // 0x330 (8)

	void Construct(); // Function UW-Revival_PayPopup.UW-Revival_PayPopup_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void BndEvt__Button_159_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function UW-Revival_PayPopup.UW-Revival_PayPopup_C.BndEvt__Button_159_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void BndEvt__Button_Cancle_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function UW-Revival_PayPopup.UW-Revival_PayPopup_C.BndEvt__Button_Cancle_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void ExecuteUbergraph_UW-Revival_PayPopup(int32_t EntryPoint); // Function UW-Revival_PayPopup.UW-Revival_PayPopup_C.ExecuteUbergraph_UW-Revival_PayPopup(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
};

// Function UW-Revival_PayPopup.UW-Revival_PayPopup_C.Construct
inline void UUW-Revival_PayPopup_C::Construct() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Revival_PayPopup.UW-Revival_PayPopup_C.Construct");

	struct Construct_Params {
		
	}; Construct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Revival_PayPopup.UW-Revival_PayPopup_C.BndEvt__Button_159_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
inline void UUW-Revival_PayPopup_C::BndEvt__Button_159_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Revival_PayPopup.UW-Revival_PayPopup_C.BndEvt__Button_159_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	struct BndEvt__Button_159_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params {
		
	}; BndEvt__Button_159_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Revival_PayPopup.UW-Revival_PayPopup_C.BndEvt__Button_Cancle_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
inline void UUW-Revival_PayPopup_C::BndEvt__Button_Cancle_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Revival_PayPopup.UW-Revival_PayPopup_C.BndEvt__Button_Cancle_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	struct BndEvt__Button_Cancle_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params {
		
	}; BndEvt__Button_Cancle_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Revival_PayPopup.UW-Revival_PayPopup_C.ExecuteUbergraph_UW-Revival_PayPopup
inline void UUW-Revival_PayPopup_C::ExecuteUbergraph_UW-Revival_PayPopup(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Revival_PayPopup.UW-Revival_PayPopup_C.ExecuteUbergraph_UW-Revival_PayPopup");

	struct ExecuteUbergraph_UW-Revival_PayPopup_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_UW-Revival_PayPopup_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

