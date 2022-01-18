// WidgetBlueprintGeneratedClass UW-ItemRecipeTreePopup.UW-ItemRecipeTreePopup_C
class UUW-ItemRecipeTreePopup_C : public UUserWidget {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248 (8)
	struct UWidgetAnimation Hide; // 0x250 (8)
	struct UWidgetAnimation Show; // 0x258 (8)
	struct UImage Bg; // 0x260 (8)
	struct UButton Button_OK; // 0x268 (8)
	struct UImage Image_168; // 0x270 (8)
	struct UImage Image_669; // 0x278 (8)
	struct UTextBlock Message; // 0x280 (8)
	struct UTextBlock TextBlock_Title; // 0x288 (8)
	struct UUW-ItemRecipeTree_C UW-ItemRecipeTree; // 0x290 (8)
	struct FTimerHandle Timer; // 0x298 (8)

	void Construct(); // Function UW-ItemRecipeTreePopup.UW-ItemRecipeTreePopup_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void BndEvt__Button_159_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function UW-ItemRecipeTreePopup.UW-ItemRecipeTreePopup_C.BndEvt__Button_159_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void SetItemKey(struct FName ItemKey, struct FName HaveItemKey); // Function UW-ItemRecipeTreePopup.UW-ItemRecipeTreePopup_C.SetItemKey(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void Destruct(); // Function UW-ItemRecipeTreePopup.UW-ItemRecipeTreePopup_C.Destruct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void �@t��_1(struct FText Message); // Function UW-ItemRecipeTreePopup.UW-ItemRecipeTreePopup_C.�@t��_1(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void �@t��_2(); // Function UW-ItemRecipeTreePopup.UW-ItemRecipeTreePopup_C.�@t��_2(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void �@t��_3(); // Function UW-ItemRecipeTreePopup.UW-ItemRecipeTreePopup_C.�@t��_3(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void ExecuteUbergraph_UW-ItemRecipeTreePopup(int32_t EntryPoint); // Function UW-ItemRecipeTreePopup.UW-ItemRecipeTreePopup_C.ExecuteUbergraph_UW-ItemRecipeTreePopup(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
};

// Function UW-ItemRecipeTreePopup.UW-ItemRecipeTreePopup_C.Construct
inline void UUW-ItemRecipeTreePopup_C::Construct() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ItemRecipeTreePopup.UW-ItemRecipeTreePopup_C.Construct");

	struct Construct_Params {
		
	}; Construct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ItemRecipeTreePopup.UW-ItemRecipeTreePopup_C.BndEvt__Button_159_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
inline void UUW-ItemRecipeTreePopup_C::BndEvt__Button_159_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ItemRecipeTreePopup.UW-ItemRecipeTreePopup_C.BndEvt__Button_159_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	struct BndEvt__Button_159_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params {
		
	}; BndEvt__Button_159_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ItemRecipeTreePopup.UW-ItemRecipeTreePopup_C.SetItemKey
inline void UUW-ItemRecipeTreePopup_C::SetItemKey(struct FName ItemKey, struct FName HaveItemKey) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ItemRecipeTreePopup.UW-ItemRecipeTreePopup_C.SetItemKey");

	struct SetItemKey_Params {
		struct FName ItemKey;
		struct FName HaveItemKey;
	}; SetItemKey_Params Params;

	Params.ItemKey = ItemKey;
	Params.HaveItemKey = HaveItemKey;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ItemRecipeTreePopup.UW-ItemRecipeTreePopup_C.Destruct
inline void UUW-ItemRecipeTreePopup_C::Destruct() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ItemRecipeTreePopup.UW-ItemRecipeTreePopup_C.Destruct");

	struct Destruct_Params {
		
	}; Destruct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ItemRecipeTreePopup.UW-ItemRecipeTreePopup_C.�@t��_1
inline void UUW-ItemRecipeTreePopup_C::�@t��_1(struct FText Message) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ItemRecipeTreePopup.UW-ItemRecipeTreePopup_C.�@t��_1");

	struct �@t��_1_Params {
		struct FText Message;
	}; �@t��_1_Params Params;

	Params.Message = Message;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ItemRecipeTreePopup.UW-ItemRecipeTreePopup_C.�@t��_2
inline void UUW-ItemRecipeTreePopup_C::�@t��_2() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ItemRecipeTreePopup.UW-ItemRecipeTreePopup_C.�@t��_2");

	struct �@t��_2_Params {
		
	}; �@t��_2_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ItemRecipeTreePopup.UW-ItemRecipeTreePopup_C.�@t��_3
inline void UUW-ItemRecipeTreePopup_C::�@t��_3() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ItemRecipeTreePopup.UW-ItemRecipeTreePopup_C.�@t��_3");

	struct �@t��_3_Params {
		
	}; �@t��_3_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ItemRecipeTreePopup.UW-ItemRecipeTreePopup_C.ExecuteUbergraph_UW-ItemRecipeTreePopup
inline void UUW-ItemRecipeTreePopup_C::ExecuteUbergraph_UW-ItemRecipeTreePopup(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ItemRecipeTreePopup.UW-ItemRecipeTreePopup_C.ExecuteUbergraph_UW-ItemRecipeTreePopup");

	struct ExecuteUbergraph_UW-ItemRecipeTreePopup_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_UW-ItemRecipeTreePopup_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

