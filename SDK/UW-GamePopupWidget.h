// WidgetBlueprintGeneratedClass UW-GamePopupWidget.UW-GamePopupWidget_C
class UUW-GamePopupWidget_C : public UBravoHotelGamePopupWidget {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x250 (8)
	struct UButton Btn-Exit; // 0x258 (8)
	struct UButton BTN-LobbyRestart; // 0x260 (8)
	struct UButton BTN-Resume; // 0x268 (8)
	struct UButton BTN-ReturnToTitle; // 0x270 (8)
	struct UButton BTN-Settings; // 0x278 (8)
	struct UButton Button_1; // 0x280 (8)
	struct UButton Button_2; // 0x288 (8)
	struct UButton Button_4; // 0x290 (8)
	struct UImage Image_2; // 0x298 (8)
	struct UImage IMG-BG; // 0x2A0 (8)
	struct UOverlay Overlay_Exit; // 0x2A8 (8)
	struct UTextBlock TextBlock; // 0x2B0 (8)
	struct UTextBlock TextBlock_2; // 0x2B8 (8)
	struct UUW-VoiceTalk_C UW-VoiceTalk; // 0x2C0 (8)
	struct UVerticalBox VerticalBox_InGame; // 0x2C8 (8)
	struct UVerticalBox VerticalBox_Lobby; // 0x2D0 (8)
	struct FName MapNameToExit; // 0x2D8 (8)
	char IsLobby : 0; // 0x2E0 (1)

	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UW-GamePopupWidget.UW-GamePopupWidget_C.OnMouseButtonDown(BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	struct FEventReply OnMouseWheel(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UW-GamePopupWidget.UW-GamePopupWidget_C.OnMouseWheel(BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void Construct(); // Function UW-GamePopupWidget.UW-GamePopupWidget_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void BndEvt__BTN-Resume_K2Node_ComponentBoundEvent_60_OnButtonClickedEvent__DelegateSignature(); // Function UW-GamePopupWidget.UW-GamePopupWidget_C.BndEvt__BTN-Resume_K2Node_ComponentBoundEvent_60_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void BndEvt__BTN-Settings_K2Node_ComponentBoundEvent_119_OnButtonClickedEvent__DelegateSignature(); // Function UW-GamePopupWidget.UW-GamePopupWidget_C.BndEvt__BTN-Settings_K2Node_ComponentBoundEvent_119_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void BndEvt__BTN-ReturnToTitle_K2Node_ComponentBoundEvent_137_OnButtonClickedEvent__DelegateSignature(); // Function UW-GamePopupWidget.UW-GamePopupWidget_C.BndEvt__BTN-ReturnToTitle_K2Node_ComponentBoundEvent_137_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void BndEvt__BTN-Exit_K2Node_ComponentBoundEvent_156_OnButtonClickedEvent__DelegateSignature(); // Function UW-GamePopupWidget.UW-GamePopupWidget_C.BndEvt__BTN-Exit_K2Node_ComponentBoundEvent_156_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void BndEvt__BTN-Resume_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function UW-GamePopupWidget.UW-GamePopupWidget_C.BndEvt__BTN-Resume_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void BndEvt__BTN-Settings_K2Node_ComponentBoundEvent_26_OnButtonHoverEvent__DelegateSignature(); // Function UW-GamePopupWidget.UW-GamePopupWidget_C.BndEvt__BTN-Settings_K2Node_ComponentBoundEvent_26_OnButtonHoverEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void BndEvt__BTN-ReturnToTitle_K2Node_ComponentBoundEvent_58_OnButtonHoverEvent__DelegateSignature(); // Function UW-GamePopupWidget.UW-GamePopupWidget_C.BndEvt__BTN-ReturnToTitle_K2Node_ComponentBoundEvent_58_OnButtonHoverEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void BndEvt__BTN-Exit_K2Node_ComponentBoundEvent_95_OnButtonHoverEvent__DelegateSignature(); // Function UW-GamePopupWidget.UW-GamePopupWidget_C.BndEvt__BTN-Exit_K2Node_ComponentBoundEvent_95_OnButtonHoverEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void Show(); // Function UW-GamePopupWidget.UW-GamePopupWidget_C.Show(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void Hide(); // Function UW-GamePopupWidget.UW-GamePopupWidget_C.Hide(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function UW-GamePopupWidget.UW-GamePopupWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void BndEvt__Button_1_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature(); // Function UW-GamePopupWidget.UW-GamePopupWidget_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void BndEvt__Button_1_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature(); // Function UW-GamePopupWidget.UW-GamePopupWidget_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void BndEvt__Button_3_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature(); // Function UW-GamePopupWidget.UW-GamePopupWidget_C.BndEvt__Button_3_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void BndEvt__Button_3_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature(); // Function UW-GamePopupWidget.UW-GamePopupWidget_C.BndEvt__Button_3_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function UW-GamePopupWidget.UW-GamePopupWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void Destruct(); // Function UW-GamePopupWidget.UW-GamePopupWidget_C.Destruct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void BndEvt__BTN-LobbyRestart_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature(); // Function UW-GamePopupWidget.UW-GamePopupWidget_C.BndEvt__BTN-LobbyRestart_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void BndEvt__BTN-LobbyRestart_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature(); // Function UW-GamePopupWidget.UW-GamePopupWidget_C.BndEvt__BTN-LobbyRestart_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void ExecuteUbergraph_UW-GamePopupWidget(int32_t EntryPoint); // Function UW-GamePopupWidget.UW-GamePopupWidget_C.ExecuteUbergraph_UW-GamePopupWidget(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
};

// Function UW-GamePopupWidget.UW-GamePopupWidget_C.OnMouseButtonDown
inline struct FEventReply UUW-GamePopupWidget_C::OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-GamePopupWidget.UW-GamePopupWidget_C.OnMouseButtonDown");

	struct OnMouseButtonDown_Params {
		struct FGeometry MyGeometry;
		struct FPointerEvent& MouseEvent;
		struct FEventReply ReturnValue;

	}; OnMouseButtonDown_Params Params;

	Params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	MouseEvent = Params.MouseEvent;


	return params.ReturnValue;
}

// Function UW-GamePopupWidget.UW-GamePopupWidget_C.OnMouseWheel
inline struct FEventReply UUW-GamePopupWidget_C::OnMouseWheel(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-GamePopupWidget.UW-GamePopupWidget_C.OnMouseWheel");

	struct OnMouseWheel_Params {
		struct FGeometry MyGeometry;
		struct FPointerEvent& MouseEvent;
		struct FEventReply ReturnValue;

	}; OnMouseWheel_Params Params;

	Params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	MouseEvent = Params.MouseEvent;


	return params.ReturnValue;
}

// Function UW-GamePopupWidget.UW-GamePopupWidget_C.Construct
inline void UUW-GamePopupWidget_C::Construct() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-GamePopupWidget.UW-GamePopupWidget_C.Construct");

	struct Construct_Params {
		
	}; Construct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-GamePopupWidget.UW-GamePopupWidget_C.BndEvt__BTN-Resume_K2Node_ComponentBoundEvent_60_OnButtonClickedEvent__DelegateSignature
inline void UUW-GamePopupWidget_C::BndEvt__BTN-Resume_K2Node_ComponentBoundEvent_60_OnButtonClickedEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-GamePopupWidget.UW-GamePopupWidget_C.BndEvt__BTN-Resume_K2Node_ComponentBoundEvent_60_OnButtonClickedEvent__DelegateSignature");

	struct BndEvt__BTN-Resume_K2Node_ComponentBoundEvent_60_OnButtonClickedEvent__DelegateSignature_Params {
		
	}; BndEvt__BTN-Resume_K2Node_ComponentBoundEvent_60_OnButtonClickedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-GamePopupWidget.UW-GamePopupWidget_C.BndEvt__BTN-Settings_K2Node_ComponentBoundEvent_119_OnButtonClickedEvent__DelegateSignature
inline void UUW-GamePopupWidget_C::BndEvt__BTN-Settings_K2Node_ComponentBoundEvent_119_OnButtonClickedEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-GamePopupWidget.UW-GamePopupWidget_C.BndEvt__BTN-Settings_K2Node_ComponentBoundEvent_119_OnButtonClickedEvent__DelegateSignature");

	struct BndEvt__BTN-Settings_K2Node_ComponentBoundEvent_119_OnButtonClickedEvent__DelegateSignature_Params {
		
	}; BndEvt__BTN-Settings_K2Node_ComponentBoundEvent_119_OnButtonClickedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-GamePopupWidget.UW-GamePopupWidget_C.BndEvt__BTN-ReturnToTitle_K2Node_ComponentBoundEvent_137_OnButtonClickedEvent__DelegateSignature
inline void UUW-GamePopupWidget_C::BndEvt__BTN-ReturnToTitle_K2Node_ComponentBoundEvent_137_OnButtonClickedEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-GamePopupWidget.UW-GamePopupWidget_C.BndEvt__BTN-ReturnToTitle_K2Node_ComponentBoundEvent_137_OnButtonClickedEvent__DelegateSignature");

	struct BndEvt__BTN-ReturnToTitle_K2Node_ComponentBoundEvent_137_OnButtonClickedEvent__DelegateSignature_Params {
		
	}; BndEvt__BTN-ReturnToTitle_K2Node_ComponentBoundEvent_137_OnButtonClickedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-GamePopupWidget.UW-GamePopupWidget_C.BndEvt__BTN-Exit_K2Node_ComponentBoundEvent_156_OnButtonClickedEvent__DelegateSignature
inline void UUW-GamePopupWidget_C::BndEvt__BTN-Exit_K2Node_ComponentBoundEvent_156_OnButtonClickedEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-GamePopupWidget.UW-GamePopupWidget_C.BndEvt__BTN-Exit_K2Node_ComponentBoundEvent_156_OnButtonClickedEvent__DelegateSignature");

	struct BndEvt__BTN-Exit_K2Node_ComponentBoundEvent_156_OnButtonClickedEvent__DelegateSignature_Params {
		
	}; BndEvt__BTN-Exit_K2Node_ComponentBoundEvent_156_OnButtonClickedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-GamePopupWidget.UW-GamePopupWidget_C.BndEvt__BTN-Resume_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
inline void UUW-GamePopupWidget_C::BndEvt__BTN-Resume_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-GamePopupWidget.UW-GamePopupWidget_C.BndEvt__BTN-Resume_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	struct BndEvt__BTN-Resume_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params {
		
	}; BndEvt__BTN-Resume_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-GamePopupWidget.UW-GamePopupWidget_C.BndEvt__BTN-Settings_K2Node_ComponentBoundEvent_26_OnButtonHoverEvent__DelegateSignature
inline void UUW-GamePopupWidget_C::BndEvt__BTN-Settings_K2Node_ComponentBoundEvent_26_OnButtonHoverEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-GamePopupWidget.UW-GamePopupWidget_C.BndEvt__BTN-Settings_K2Node_ComponentBoundEvent_26_OnButtonHoverEvent__DelegateSignature");

	struct BndEvt__BTN-Settings_K2Node_ComponentBoundEvent_26_OnButtonHoverEvent__DelegateSignature_Params {
		
	}; BndEvt__BTN-Settings_K2Node_ComponentBoundEvent_26_OnButtonHoverEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-GamePopupWidget.UW-GamePopupWidget_C.BndEvt__BTN-ReturnToTitle_K2Node_ComponentBoundEvent_58_OnButtonHoverEvent__DelegateSignature
inline void UUW-GamePopupWidget_C::BndEvt__BTN-ReturnToTitle_K2Node_ComponentBoundEvent_58_OnButtonHoverEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-GamePopupWidget.UW-GamePopupWidget_C.BndEvt__BTN-ReturnToTitle_K2Node_ComponentBoundEvent_58_OnButtonHoverEvent__DelegateSignature");

	struct BndEvt__BTN-ReturnToTitle_K2Node_ComponentBoundEvent_58_OnButtonHoverEvent__DelegateSignature_Params {
		
	}; BndEvt__BTN-ReturnToTitle_K2Node_ComponentBoundEvent_58_OnButtonHoverEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-GamePopupWidget.UW-GamePopupWidget_C.BndEvt__BTN-Exit_K2Node_ComponentBoundEvent_95_OnButtonHoverEvent__DelegateSignature
inline void UUW-GamePopupWidget_C::BndEvt__BTN-Exit_K2Node_ComponentBoundEvent_95_OnButtonHoverEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-GamePopupWidget.UW-GamePopupWidget_C.BndEvt__BTN-Exit_K2Node_ComponentBoundEvent_95_OnButtonHoverEvent__DelegateSignature");

	struct BndEvt__BTN-Exit_K2Node_ComponentBoundEvent_95_OnButtonHoverEvent__DelegateSignature_Params {
		
	}; BndEvt__BTN-Exit_K2Node_ComponentBoundEvent_95_OnButtonHoverEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-GamePopupWidget.UW-GamePopupWidget_C.Show
inline void UUW-GamePopupWidget_C::Show() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-GamePopupWidget.UW-GamePopupWidget_C.Show");

	struct Show_Params {
		
	}; Show_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-GamePopupWidget.UW-GamePopupWidget_C.Hide
inline void UUW-GamePopupWidget_C::Hide() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-GamePopupWidget.UW-GamePopupWidget_C.Hide");

	struct Hide_Params {
		
	}; Hide_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-GamePopupWidget.UW-GamePopupWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
inline void UUW-GamePopupWidget_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-GamePopupWidget.UW-GamePopupWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	struct BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params {
		
	}; BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-GamePopupWidget.UW-GamePopupWidget_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
inline void UUW-GamePopupWidget_C::BndEvt__Button_1_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-GamePopupWidget.UW-GamePopupWidget_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");

	struct BndEvt__Button_1_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params {
		
	}; BndEvt__Button_1_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-GamePopupWidget.UW-GamePopupWidget_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
inline void UUW-GamePopupWidget_C::BndEvt__Button_1_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-GamePopupWidget.UW-GamePopupWidget_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature");

	struct BndEvt__Button_1_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params {
		
	}; BndEvt__Button_1_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-GamePopupWidget.UW-GamePopupWidget_C.BndEvt__Button_3_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
inline void UUW-GamePopupWidget_C::BndEvt__Button_3_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-GamePopupWidget.UW-GamePopupWidget_C.BndEvt__Button_3_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature");

	struct BndEvt__Button_3_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params {
		
	}; BndEvt__Button_3_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-GamePopupWidget.UW-GamePopupWidget_C.BndEvt__Button_3_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature
inline void UUW-GamePopupWidget_C::BndEvt__Button_3_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-GamePopupWidget.UW-GamePopupWidget_C.BndEvt__Button_3_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature");

	struct BndEvt__Button_3_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature_Params {
		
	}; BndEvt__Button_3_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-GamePopupWidget.UW-GamePopupWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
inline void UUW-GamePopupWidget_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-GamePopupWidget.UW-GamePopupWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	struct BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params {
		
	}; BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-GamePopupWidget.UW-GamePopupWidget_C.Destruct
inline void UUW-GamePopupWidget_C::Destruct() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-GamePopupWidget.UW-GamePopupWidget_C.Destruct");

	struct Destruct_Params {
		
	}; Destruct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-GamePopupWidget.UW-GamePopupWidget_C.BndEvt__BTN-LobbyRestart_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature
inline void UUW-GamePopupWidget_C::BndEvt__BTN-LobbyRestart_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-GamePopupWidget.UW-GamePopupWidget_C.BndEvt__BTN-LobbyRestart_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature");

	struct BndEvt__BTN-LobbyRestart_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature_Params {
		
	}; BndEvt__BTN-LobbyRestart_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-GamePopupWidget.UW-GamePopupWidget_C.BndEvt__BTN-LobbyRestart_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature
inline void UUW-GamePopupWidget_C::BndEvt__BTN-LobbyRestart_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-GamePopupWidget.UW-GamePopupWidget_C.BndEvt__BTN-LobbyRestart_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature");

	struct BndEvt__BTN-LobbyRestart_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature_Params {
		
	}; BndEvt__BTN-LobbyRestart_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-GamePopupWidget.UW-GamePopupWidget_C.ExecuteUbergraph_UW-GamePopupWidget
inline void UUW-GamePopupWidget_C::ExecuteUbergraph_UW-GamePopupWidget(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-GamePopupWidget.UW-GamePopupWidget_C.ExecuteUbergraph_UW-GamePopupWidget");

	struct ExecuteUbergraph_UW-GamePopupWidget_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_UW-GamePopupWidget_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

