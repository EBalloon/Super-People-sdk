// WidgetBlueprintGeneratedClass UW-RequestResuscitation.UW-RequestResuscitation_C
class UUW-RequestResuscitation_C : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown Button_Request; // 0x250 (8)
	struct Unknown Image_955; // 0x258 (8)
	struct Unknown Image_1208; // 0x260 (8)
	struct Unknown SizeBox_77; // 0x268 (8)
	struct Unknown SizeBox_78; // 0x270 (8)
	struct Unknown Text_Price; // 0x278 (8)
	struct Unknown TextBlock_767; // 0x280 (8)
	struct Unknown WidgetSwitcher_Price; // 0x288 (8)
	struct Unknown PlayerControllerRef; // 0x290 (8)
	char bCanRequest : 0; // 0x298 (1)
	char bRequest : 0; // 0x299 (1)
	struct FText RequstingResuscitationText; // 0x2A0 (24)
	float RequestingSizeBoxWidth; // 0x2B8 (4)
	struct Unknown RequestTextColor; // 0x2C0 (40)
	struct Unknown RequestingTextColor; // 0x2E8 (40)
	float RequestingSizeBoxInitWidth; // 0x310 (4)
	struct FText RequstingResuscitationInitText; // 0x318 (24)
	struct Unknown InitButtonStyle; // 0x330 (632)
	struct Unknown RequestingButtonStyle; // 0x5A8 (632)
	struct Unknown CanRequestButtonStyle; // 0x820 (632)

	void Init(); // Function UW-RequestResuscitation.UW-RequestResuscitation_C.Init(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void SetRequestState(char bOnRequest); // Function UW-RequestResuscitation.UW-RequestResuscitation_C.SetRequestState(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void GetPlayerController(struct Unknown& PC); // Function UW-RequestResuscitation.UW-RequestResuscitation_C.GetPlayerController(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	char Get_Button_Request_bIsEnabled_1(); // Function UW-RequestResuscitation.UW-RequestResuscitation_C.Get_Button_Request_bIsEnabled_1(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Construct(); // Function UW-RequestResuscitation.UW-RequestResuscitation_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void BndEvt__Button_307_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function UW-RequestResuscitation.UW-RequestResuscitation_C.BndEvt__Button_307_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void SetPrice(int32_t Price); // Function UW-RequestResuscitation.UW-RequestResuscitation_C.SetPrice(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void ExecuteUbergraph_UW-RequestResuscitation(int32_t EntryPoint); // Function UW-RequestResuscitation.UW-RequestResuscitation_C.ExecuteUbergraph_UW-RequestResuscitation(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
};

// Function UW-RequestResuscitation.UW-RequestResuscitation_C.Init
inline void UUW-RequestResuscitation_C::Init() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-RequestResuscitation.UW-RequestResuscitation_C.Init");

	struct Init_Params {
		
	}; Init_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-RequestResuscitation.UW-RequestResuscitation_C.SetRequestState
inline void UUW-RequestResuscitation_C::SetRequestState(char bOnRequest) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-RequestResuscitation.UW-RequestResuscitation_C.SetRequestState");

	struct SetRequestState_Params {
		char bOnRequest;
	}; SetRequestState_Params Params;

	Params.bOnRequest = bOnRequest;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-RequestResuscitation.UW-RequestResuscitation_C.GetPlayerController
inline void UUW-RequestResuscitation_C::GetPlayerController(struct Unknown& PC) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-RequestResuscitation.UW-RequestResuscitation_C.GetPlayerController");

	struct GetPlayerController_Params {
		struct Unknown& PC;
	}; GetPlayerController_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	PC = Params.PC;

}

// Function UW-RequestResuscitation.UW-RequestResuscitation_C.Get_Button_Request_bIsEnabled_1
inline char UUW-RequestResuscitation_C::Get_Button_Request_bIsEnabled_1() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-RequestResuscitation.UW-RequestResuscitation_C.Get_Button_Request_bIsEnabled_1");

	struct Get_Button_Request_bIsEnabled_1_Params {
		
		char ReturnValue;

	}; Get_Button_Request_bIsEnabled_1_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UW-RequestResuscitation.UW-RequestResuscitation_C.Construct
inline void UUW-RequestResuscitation_C::Construct() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-RequestResuscitation.UW-RequestResuscitation_C.Construct");

	struct Construct_Params {
		
	}; Construct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-RequestResuscitation.UW-RequestResuscitation_C.BndEvt__Button_307_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
inline void UUW-RequestResuscitation_C::BndEvt__Button_307_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-RequestResuscitation.UW-RequestResuscitation_C.BndEvt__Button_307_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	struct BndEvt__Button_307_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params {
		
	}; BndEvt__Button_307_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-RequestResuscitation.UW-RequestResuscitation_C.SetPrice
inline void UUW-RequestResuscitation_C::SetPrice(int32_t Price) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-RequestResuscitation.UW-RequestResuscitation_C.SetPrice");

	struct SetPrice_Params {
		int32_t Price;
	}; SetPrice_Params Params;

	Params.Price = Price;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-RequestResuscitation.UW-RequestResuscitation_C.ExecuteUbergraph_UW-RequestResuscitation
inline void UUW-RequestResuscitation_C::ExecuteUbergraph_UW-RequestResuscitation(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-RequestResuscitation.UW-RequestResuscitation_C.ExecuteUbergraph_UW-RequestResuscitation");

	struct ExecuteUbergraph_UW-RequestResuscitation_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_UW-RequestResuscitation_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

