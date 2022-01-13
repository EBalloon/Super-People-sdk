// WidgetBlueprintGeneratedClass UW-ArmoryWidget.UW-ArmoryWidget_C
class UUW-ArmoryWidget_C : public UUserWidget {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248 (8)
	struct UWidgetAnimation Ellipsis_M; // 0x250 (8)
	struct UCanvasPanel CanvasPanel_123; // 0x258 (8)
	struct UCanvasPanel Enhancing; // 0x260 (8)
	struct UImage Image_305; // 0x268 (8)
	struct UImage Image_841; // 0x270 (8)
	struct UCanvasPanel InputEventBox; // 0x278 (8)
	struct UButton Skip; // 0x280 (8)
	struct UTextBlock TextBlock_335; // 0x288 (8)
	struct UTextBlock TextBlock_336; // 0x290 (8)
	struct UTextBlock TextBlock_337; // 0x298 (8)
	struct UTextBlock TextBlock_362; // 0x2A0 (8)
	struct UTextBlock TextEnhanceing; // 0x2A8 (8)
	struct UUW-ArmoryInput_C UW-ArmoryInput; // 0x2B0 (8)
	struct UUW-ArmoryResultListWidget_C UW-ArmoryResultListWidget; // 0x2B8 (8)
	struct FTimerHandle EnhanceResultTimerHandle; // 0x2C0 (8)

	void Craft(); // Function UW-ArmoryWidget.UW-ArmoryWidget_C.Craft(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void Result(); // Function UW-ArmoryWidget.UW-ArmoryWidget_C.Result(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void SetInputEventBox(char Visible); // Function UW-ArmoryWidget.UW-ArmoryWidget_C.SetInputEventBox(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void StopProceedingSound(); // Function UW-ArmoryWidget.UW-ArmoryWidget_C.StopProceedingSound(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void PlayProceedingSound(); // Function UW-ArmoryWidget.UW-ArmoryWidget_C.PlayProceedingSound(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void GetLobbyWidget(struct UBP-LobbyWidget_Web_C& Widget); // Function UW-ArmoryWidget.UW-ArmoryWidget_C.GetLobbyWidget(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void Proceeding(); // Function UW-ArmoryWidget.UW-ArmoryWidget_C.Proceeding(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void ShowArmoryUI(struct FString ArmoryResultName); // Function UW-ArmoryWidget.UW-ArmoryWidget_C.ShowArmoryUI(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void Construct(); // Function UW-ArmoryWidget.UW-ArmoryWidget_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void BndEvt__Skip_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature(); // Function UW-ArmoryWidget.UW-ArmoryWidget_C.BndEvt__Skip_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void BndEvt__Skip_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function UW-ArmoryWidget.UW-ArmoryWidget_C.BndEvt__Skip_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void EnhanceResult(); // Function UW-ArmoryWidget.UW-ArmoryWidget_C.EnhanceResult(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void CustomEvent_1(); // Function UW-ArmoryWidget.UW-ArmoryWidget_C.CustomEvent_1(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void SetTimerCraftResult(); // Function UW-ArmoryWidget.UW-ArmoryWidget_C.SetTimerCraftResult(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void OnCraftResult(); // Function UW-ArmoryWidget.UW-ArmoryWidget_C.OnCraftResult(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void ExecuteUbergraph_UW-ArmoryWidget(int32_t EntryPoint); // Function UW-ArmoryWidget.UW-ArmoryWidget_C.ExecuteUbergraph_UW-ArmoryWidget(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
};

// Function UW-ArmoryWidget.UW-ArmoryWidget_C.Craft
inline void UUW-ArmoryWidget_C::Craft() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ArmoryWidget.UW-ArmoryWidget_C.Craft");

	struct Craft_Params {
		
	}; Craft_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ArmoryWidget.UW-ArmoryWidget_C.Result
inline void UUW-ArmoryWidget_C::Result() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ArmoryWidget.UW-ArmoryWidget_C.Result");

	struct Result_Params {
		
	}; Result_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ArmoryWidget.UW-ArmoryWidget_C.SetInputEventBox
inline void UUW-ArmoryWidget_C::SetInputEventBox(char Visible) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ArmoryWidget.UW-ArmoryWidget_C.SetInputEventBox");

	struct SetInputEventBox_Params {
		char Visible;
	}; SetInputEventBox_Params Params;

	Params.Visible = Visible;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ArmoryWidget.UW-ArmoryWidget_C.StopProceedingSound
inline void UUW-ArmoryWidget_C::StopProceedingSound() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ArmoryWidget.UW-ArmoryWidget_C.StopProceedingSound");

	struct StopProceedingSound_Params {
		
	}; StopProceedingSound_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ArmoryWidget.UW-ArmoryWidget_C.PlayProceedingSound
inline void UUW-ArmoryWidget_C::PlayProceedingSound() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ArmoryWidget.UW-ArmoryWidget_C.PlayProceedingSound");

	struct PlayProceedingSound_Params {
		
	}; PlayProceedingSound_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ArmoryWidget.UW-ArmoryWidget_C.GetLobbyWidget
inline void UUW-ArmoryWidget_C::GetLobbyWidget(struct UBP-LobbyWidget_Web_C& Widget) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ArmoryWidget.UW-ArmoryWidget_C.GetLobbyWidget");

	struct GetLobbyWidget_Params {
		struct UBP-LobbyWidget_Web_C& Widget;
	}; GetLobbyWidget_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Widget = Params.Widget;

}

// Function UW-ArmoryWidget.UW-ArmoryWidget_C.Proceeding
inline void UUW-ArmoryWidget_C::Proceeding() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ArmoryWidget.UW-ArmoryWidget_C.Proceeding");

	struct Proceeding_Params {
		
	}; Proceeding_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ArmoryWidget.UW-ArmoryWidget_C.ShowArmoryUI
inline void UUW-ArmoryWidget_C::ShowArmoryUI(struct FString ArmoryResultName) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ArmoryWidget.UW-ArmoryWidget_C.ShowArmoryUI");

	struct ShowArmoryUI_Params {
		struct FString ArmoryResultName;
	}; ShowArmoryUI_Params Params;

	Params.ArmoryResultName = ArmoryResultName;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ArmoryWidget.UW-ArmoryWidget_C.Construct
inline void UUW-ArmoryWidget_C::Construct() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ArmoryWidget.UW-ArmoryWidget_C.Construct");

	struct Construct_Params {
		
	}; Construct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ArmoryWidget.UW-ArmoryWidget_C.BndEvt__Skip_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
inline void UUW-ArmoryWidget_C::BndEvt__Skip_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ArmoryWidget.UW-ArmoryWidget_C.BndEvt__Skip_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");

	struct BndEvt__Skip_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params {
		
	}; BndEvt__Skip_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ArmoryWidget.UW-ArmoryWidget_C.BndEvt__Skip_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
inline void UUW-ArmoryWidget_C::BndEvt__Skip_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ArmoryWidget.UW-ArmoryWidget_C.BndEvt__Skip_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");

	struct BndEvt__Skip_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params {
		
	}; BndEvt__Skip_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ArmoryWidget.UW-ArmoryWidget_C.EnhanceResult
inline void UUW-ArmoryWidget_C::EnhanceResult() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ArmoryWidget.UW-ArmoryWidget_C.EnhanceResult");

	struct EnhanceResult_Params {
		
	}; EnhanceResult_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ArmoryWidget.UW-ArmoryWidget_C.CustomEvent_1
inline void UUW-ArmoryWidget_C::CustomEvent_1() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ArmoryWidget.UW-ArmoryWidget_C.CustomEvent_1");

	struct CustomEvent_1_Params {
		
	}; CustomEvent_1_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ArmoryWidget.UW-ArmoryWidget_C.SetTimerCraftResult
inline void UUW-ArmoryWidget_C::SetTimerCraftResult() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ArmoryWidget.UW-ArmoryWidget_C.SetTimerCraftResult");

	struct SetTimerCraftResult_Params {
		
	}; SetTimerCraftResult_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ArmoryWidget.UW-ArmoryWidget_C.OnCraftResult
inline void UUW-ArmoryWidget_C::OnCraftResult() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ArmoryWidget.UW-ArmoryWidget_C.OnCraftResult");

	struct OnCraftResult_Params {
		
	}; OnCraftResult_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ArmoryWidget.UW-ArmoryWidget_C.ExecuteUbergraph_UW-ArmoryWidget
inline void UUW-ArmoryWidget_C::ExecuteUbergraph_UW-ArmoryWidget(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ArmoryWidget.UW-ArmoryWidget_C.ExecuteUbergraph_UW-ArmoryWidget");

	struct ExecuteUbergraph_UW-ArmoryWidget_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_UW-ArmoryWidget_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

