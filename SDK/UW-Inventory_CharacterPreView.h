// WidgetBlueprintGeneratedClass UW-Inventory_CharacterPreView.UW-Inventory_CharacterPreView_C
class UUW-Inventory_CharacterPreView_C : public UUserWidget {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248 (8)
	struct UWidgetAnimation FadeIn; // 0x250 (8)
	struct UImage CharacterPreviewImage; // 0x258 (8)
	struct UImage Image_CharacterSilBody; // 0x260 (8)
	struct ABP-BravoHotel-PlayerController_C ControllerRef; // 0x268 (8)

	void GetCharacterPreviewRef(char& Result, struct ABP-CharacterRecording_C& CharacterPreviewRef); // Function UW-Inventory_CharacterPreView.UW-Inventory_CharacterPreView_C.GetCharacterPreviewRef(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void Construct(); // Function UW-Inventory_CharacterPreView.UW-Inventory_CharacterPreView_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void SetPreviewVisible(char bVisible); // Function UW-Inventory_CharacterPreView.UW-Inventory_CharacterPreView_C.SetPreviewVisible(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void SetPlayAnimation(); // Function UW-Inventory_CharacterPreView.UW-Inventory_CharacterPreView_C.SetPlayAnimation(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void Reset(); // Function UW-Inventory_CharacterPreView.UW-Inventory_CharacterPreView_C.Reset(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void CustomEvent_1(); // Function UW-Inventory_CharacterPreView.UW-Inventory_CharacterPreView_C.CustomEvent_1(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void ExecuteUbergraph_UW-Inventory_CharacterPreView(int32_t EntryPoint); // Function UW-Inventory_CharacterPreView.UW-Inventory_CharacterPreView_C.ExecuteUbergraph_UW-Inventory_CharacterPreView(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
};

// Function UW-Inventory_CharacterPreView.UW-Inventory_CharacterPreView_C.GetCharacterPreviewRef
inline void UUW-Inventory_CharacterPreView_C::GetCharacterPreviewRef(char& Result, struct ABP-CharacterRecording_C& CharacterPreviewRef) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_CharacterPreView.UW-Inventory_CharacterPreView_C.GetCharacterPreviewRef");

	struct GetCharacterPreviewRef_Params {
		char& Result;
		struct ABP-CharacterRecording_C& CharacterPreviewRef;
	}; GetCharacterPreviewRef_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Result = Params.Result;
	CharacterPreviewRef = Params.CharacterPreviewRef;

}

// Function UW-Inventory_CharacterPreView.UW-Inventory_CharacterPreView_C.Construct
inline void UUW-Inventory_CharacterPreView_C::Construct() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_CharacterPreView.UW-Inventory_CharacterPreView_C.Construct");

	struct Construct_Params {
		
	}; Construct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_CharacterPreView.UW-Inventory_CharacterPreView_C.SetPreviewVisible
inline void UUW-Inventory_CharacterPreView_C::SetPreviewVisible(char bVisible) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_CharacterPreView.UW-Inventory_CharacterPreView_C.SetPreviewVisible");

	struct SetPreviewVisible_Params {
		char bVisible;
	}; SetPreviewVisible_Params Params;

	Params.bVisible = bVisible;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_CharacterPreView.UW-Inventory_CharacterPreView_C.SetPlayAnimation
inline void UUW-Inventory_CharacterPreView_C::SetPlayAnimation() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_CharacterPreView.UW-Inventory_CharacterPreView_C.SetPlayAnimation");

	struct SetPlayAnimation_Params {
		
	}; SetPlayAnimation_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_CharacterPreView.UW-Inventory_CharacterPreView_C.Reset
inline void UUW-Inventory_CharacterPreView_C::Reset() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_CharacterPreView.UW-Inventory_CharacterPreView_C.Reset");

	struct Reset_Params {
		
	}; Reset_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_CharacterPreView.UW-Inventory_CharacterPreView_C.CustomEvent_1
inline void UUW-Inventory_CharacterPreView_C::CustomEvent_1() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_CharacterPreView.UW-Inventory_CharacterPreView_C.CustomEvent_1");

	struct CustomEvent_1_Params {
		
	}; CustomEvent_1_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_CharacterPreView.UW-Inventory_CharacterPreView_C.ExecuteUbergraph_UW-Inventory_CharacterPreView
inline void UUW-Inventory_CharacterPreView_C::ExecuteUbergraph_UW-Inventory_CharacterPreView(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_CharacterPreView.UW-Inventory_CharacterPreView_C.ExecuteUbergraph_UW-Inventory_CharacterPreView");

	struct ExecuteUbergraph_UW-Inventory_CharacterPreView_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_UW-Inventory_CharacterPreView_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

