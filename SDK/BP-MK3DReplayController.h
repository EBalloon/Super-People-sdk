// BlueprintGeneratedClass BP-MK3DReplayController.BP-MK3DReplayController_C
class ABP-MK3DReplayController_C : public ABravoHotelMK3DReplayController {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0xAB8 (8)
	struct UBP-HUDInteractionComponent_C BP-HUDInteractionComponent; // 0xAC0 (8)
	int32_t OpenedWidgetNum; // 0xAC8 (4)
	char ViewMode; // 0xACC (1)

	struct UHUDInteractionComponent GetHUDInteractionComponent(); // Function BP-MK3DReplayController.BP-MK3DReplayController_C.GetHUDInteractionComponent(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void CheckItemListHide(enum class ECameraType CameraType); // Function BP-MK3DReplayController.BP-MK3DReplayController_C.CheckItemListHide(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void GetReplaySpectatorPawn(struct ABP-MK3DSpectatorPawn_C& ReplaySpectatorPawn); // Function BP-MK3DReplayController.BP-MK3DReplayController_C.GetReplaySpectatorPawn(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void InitWorldMapOption(); // Function BP-MK3DReplayController.BP-MK3DReplayController_C.InitWorldMapOption(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void SetMaxViewportSize(); // Function BP-MK3DReplayController.BP-MK3DReplayController_C.SetMaxViewportSize(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void OnChangeViewMode(); // Function BP-MK3DReplayController.BP-MK3DReplayController_C.OnChangeViewMode(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void OnChangeCameraType(enum class ECameraType CameraType); // Function BP-MK3DReplayController.BP-MK3DReplayController_C.OnChangeCameraType(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void SetVisibilityPerkDeck(); // Function BP-MK3DReplayController.BP-MK3DReplayController_C.SetVisibilityPerkDeck(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void Init(); // Function BP-MK3DReplayController.BP-MK3DReplayController_C.Init(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void ChangeInputMode(char ShowMouse); // Function BP-MK3DReplayController.BP-MK3DReplayController_C.ChangeInputMode(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void CheckInputMode(); // Function BP-MK3DReplayController.BP-MK3DReplayController_C.CheckInputMode(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void InpActEvt_CloseUI_K2Node_InputActionEvent_3(struct FKey Key); // Function BP-MK3DReplayController.BP-MK3DReplayController_C.InpActEvt_CloseUI_K2Node_InputActionEvent_3(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void InpActEvt_MiniMap_K2Node_InputActionEvent_2(struct FKey Key); // Function BP-MK3DReplayController.BP-MK3DReplayController_C.InpActEvt_MiniMap_K2Node_InputActionEvent_2(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void InpActEvt_ToggleInGameHUD_K2Node_InputActionEvent_1(struct FKey Key); // Function BP-MK3DReplayController.BP-MK3DReplayController_C.InpActEvt_ToggleInGameHUD_K2Node_InputActionEvent_1(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void OnInputWorldMap(); // Function BP-MK3DReplayController.BP-MK3DReplayController_C.OnInputWorldMap(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void ReceiveBeginPlay(); // Function BP-MK3DReplayController.BP-MK3DReplayController_C.ReceiveBeginPlay(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void OnInputReplayTimelineWidget(); // Function BP-MK3DReplayController.BP-MK3DReplayController_C.OnInputReplayTimelineWidget(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void OnInputItemListWidget(); // Function BP-MK3DReplayController.BP-MK3DReplayController_C.OnInputItemListWidget(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void OnInputPlayerListWidget(); // Function BP-MK3DReplayController.BP-MK3DReplayController_C.OnInputPlayerListWidget(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void ChangeCameraTypeDelegate_Event_1(enum class ECameraType CameraType, struct FString TargetPlayerName); // Function BP-MK3DReplayController.BP-MK3DReplayController_C.ChangeCameraTypeDelegate_Event_1(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void ChangeViewModeDelegate_Event_1(char ViewMode); // Function BP-MK3DReplayController.BP-MK3DReplayController_C.ChangeViewModeDelegate_Event_1(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void OnViewportSizedBP(); // Function BP-MK3DReplayController.BP-MK3DReplayController_C.OnViewportSizedBP(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void OnInputItemList(); // Function BP-MK3DReplayController.BP-MK3DReplayController_C.OnInputItemList(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void ExecuteUbergraph_BP-MK3DReplayController(int32_t EntryPoint); // Function BP-MK3DReplayController.BP-MK3DReplayController_C.ExecuteUbergraph_BP-MK3DReplayController(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
};

// Function BP-MK3DReplayController.BP-MK3DReplayController_C.GetHUDInteractionComponent
inline struct UHUDInteractionComponent ABP-MK3DReplayController_C::GetHUDInteractionComponent() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-MK3DReplayController.BP-MK3DReplayController_C.GetHUDInteractionComponent");

	struct GetHUDInteractionComponent_Params {
		
		struct UHUDInteractionComponent ReturnValue;

	}; GetHUDInteractionComponent_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function BP-MK3DReplayController.BP-MK3DReplayController_C.CheckItemListHide
inline void ABP-MK3DReplayController_C::CheckItemListHide(enum class ECameraType CameraType) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-MK3DReplayController.BP-MK3DReplayController_C.CheckItemListHide");

	struct CheckItemListHide_Params {
		enum class ECameraType CameraType;
	}; CheckItemListHide_Params Params;

	Params.CameraType = CameraType;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-MK3DReplayController.BP-MK3DReplayController_C.GetReplaySpectatorPawn
inline void ABP-MK3DReplayController_C::GetReplaySpectatorPawn(struct ABP-MK3DSpectatorPawn_C& ReplaySpectatorPawn) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-MK3DReplayController.BP-MK3DReplayController_C.GetReplaySpectatorPawn");

	struct GetReplaySpectatorPawn_Params {
		struct ABP-MK3DSpectatorPawn_C& ReplaySpectatorPawn;
	}; GetReplaySpectatorPawn_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	ReplaySpectatorPawn = Params.ReplaySpectatorPawn;

}

// Function BP-MK3DReplayController.BP-MK3DReplayController_C.InitWorldMapOption
inline void ABP-MK3DReplayController_C::InitWorldMapOption() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-MK3DReplayController.BP-MK3DReplayController_C.InitWorldMapOption");

	struct InitWorldMapOption_Params {
		
	}; InitWorldMapOption_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-MK3DReplayController.BP-MK3DReplayController_C.SetMaxViewportSize
inline void ABP-MK3DReplayController_C::SetMaxViewportSize() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-MK3DReplayController.BP-MK3DReplayController_C.SetMaxViewportSize");

	struct SetMaxViewportSize_Params {
		
	}; SetMaxViewportSize_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-MK3DReplayController.BP-MK3DReplayController_C.OnChangeViewMode
inline void ABP-MK3DReplayController_C::OnChangeViewMode() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-MK3DReplayController.BP-MK3DReplayController_C.OnChangeViewMode");

	struct OnChangeViewMode_Params {
		
	}; OnChangeViewMode_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-MK3DReplayController.BP-MK3DReplayController_C.OnChangeCameraType
inline void ABP-MK3DReplayController_C::OnChangeCameraType(enum class ECameraType CameraType) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-MK3DReplayController.BP-MK3DReplayController_C.OnChangeCameraType");

	struct OnChangeCameraType_Params {
		enum class ECameraType CameraType;
	}; OnChangeCameraType_Params Params;

	Params.CameraType = CameraType;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-MK3DReplayController.BP-MK3DReplayController_C.SetVisibilityPerkDeck
inline void ABP-MK3DReplayController_C::SetVisibilityPerkDeck() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-MK3DReplayController.BP-MK3DReplayController_C.SetVisibilityPerkDeck");

	struct SetVisibilityPerkDeck_Params {
		
	}; SetVisibilityPerkDeck_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-MK3DReplayController.BP-MK3DReplayController_C.Init
inline void ABP-MK3DReplayController_C::Init() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-MK3DReplayController.BP-MK3DReplayController_C.Init");

	struct Init_Params {
		
	}; Init_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-MK3DReplayController.BP-MK3DReplayController_C.ChangeInputMode
inline void ABP-MK3DReplayController_C::ChangeInputMode(char ShowMouse) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-MK3DReplayController.BP-MK3DReplayController_C.ChangeInputMode");

	struct ChangeInputMode_Params {
		char ShowMouse;
	}; ChangeInputMode_Params Params;

	Params.ShowMouse = ShowMouse;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-MK3DReplayController.BP-MK3DReplayController_C.CheckInputMode
inline void ABP-MK3DReplayController_C::CheckInputMode() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-MK3DReplayController.BP-MK3DReplayController_C.CheckInputMode");

	struct CheckInputMode_Params {
		
	}; CheckInputMode_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-MK3DReplayController.BP-MK3DReplayController_C.InpActEvt_CloseUI_K2Node_InputActionEvent_3
inline void ABP-MK3DReplayController_C::InpActEvt_CloseUI_K2Node_InputActionEvent_3(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-MK3DReplayController.BP-MK3DReplayController_C.InpActEvt_CloseUI_K2Node_InputActionEvent_3");

	struct InpActEvt_CloseUI_K2Node_InputActionEvent_3_Params {
		struct FKey Key;
	}; InpActEvt_CloseUI_K2Node_InputActionEvent_3_Params Params;

	Params.Key = Key;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-MK3DReplayController.BP-MK3DReplayController_C.InpActEvt_MiniMap_K2Node_InputActionEvent_2
inline void ABP-MK3DReplayController_C::InpActEvt_MiniMap_K2Node_InputActionEvent_2(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-MK3DReplayController.BP-MK3DReplayController_C.InpActEvt_MiniMap_K2Node_InputActionEvent_2");

	struct InpActEvt_MiniMap_K2Node_InputActionEvent_2_Params {
		struct FKey Key;
	}; InpActEvt_MiniMap_K2Node_InputActionEvent_2_Params Params;

	Params.Key = Key;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-MK3DReplayController.BP-MK3DReplayController_C.InpActEvt_ToggleInGameHUD_K2Node_InputActionEvent_1
inline void ABP-MK3DReplayController_C::InpActEvt_ToggleInGameHUD_K2Node_InputActionEvent_1(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-MK3DReplayController.BP-MK3DReplayController_C.InpActEvt_ToggleInGameHUD_K2Node_InputActionEvent_1");

	struct InpActEvt_ToggleInGameHUD_K2Node_InputActionEvent_1_Params {
		struct FKey Key;
	}; InpActEvt_ToggleInGameHUD_K2Node_InputActionEvent_1_Params Params;

	Params.Key = Key;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-MK3DReplayController.BP-MK3DReplayController_C.OnInputWorldMap
inline void ABP-MK3DReplayController_C::OnInputWorldMap() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-MK3DReplayController.BP-MK3DReplayController_C.OnInputWorldMap");

	struct OnInputWorldMap_Params {
		
	}; OnInputWorldMap_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-MK3DReplayController.BP-MK3DReplayController_C.ReceiveBeginPlay
inline void ABP-MK3DReplayController_C::ReceiveBeginPlay() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-MK3DReplayController.BP-MK3DReplayController_C.ReceiveBeginPlay");

	struct ReceiveBeginPlay_Params {
		
	}; ReceiveBeginPlay_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-MK3DReplayController.BP-MK3DReplayController_C.OnInputReplayTimelineWidget
inline void ABP-MK3DReplayController_C::OnInputReplayTimelineWidget() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-MK3DReplayController.BP-MK3DReplayController_C.OnInputReplayTimelineWidget");

	struct OnInputReplayTimelineWidget_Params {
		
	}; OnInputReplayTimelineWidget_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-MK3DReplayController.BP-MK3DReplayController_C.OnInputItemListWidget
inline void ABP-MK3DReplayController_C::OnInputItemListWidget() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-MK3DReplayController.BP-MK3DReplayController_C.OnInputItemListWidget");

	struct OnInputItemListWidget_Params {
		
	}; OnInputItemListWidget_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-MK3DReplayController.BP-MK3DReplayController_C.OnInputPlayerListWidget
inline void ABP-MK3DReplayController_C::OnInputPlayerListWidget() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-MK3DReplayController.BP-MK3DReplayController_C.OnInputPlayerListWidget");

	struct OnInputPlayerListWidget_Params {
		
	}; OnInputPlayerListWidget_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-MK3DReplayController.BP-MK3DReplayController_C.ChangeCameraTypeDelegate_Event_1
inline void ABP-MK3DReplayController_C::ChangeCameraTypeDelegate_Event_1(enum class ECameraType CameraType, struct FString TargetPlayerName) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-MK3DReplayController.BP-MK3DReplayController_C.ChangeCameraTypeDelegate_Event_1");

	struct ChangeCameraTypeDelegate_Event_1_Params {
		enum class ECameraType CameraType;
		struct FString TargetPlayerName;
	}; ChangeCameraTypeDelegate_Event_1_Params Params;

	Params.CameraType = CameraType;
	Params.TargetPlayerName = TargetPlayerName;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-MK3DReplayController.BP-MK3DReplayController_C.ChangeViewModeDelegate_Event_1
inline void ABP-MK3DReplayController_C::ChangeViewModeDelegate_Event_1(char ViewMode) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-MK3DReplayController.BP-MK3DReplayController_C.ChangeViewModeDelegate_Event_1");

	struct ChangeViewModeDelegate_Event_1_Params {
		char ViewMode;
	}; ChangeViewModeDelegate_Event_1_Params Params;

	Params.ViewMode = ViewMode;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-MK3DReplayController.BP-MK3DReplayController_C.OnViewportSizedBP
inline void ABP-MK3DReplayController_C::OnViewportSizedBP() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-MK3DReplayController.BP-MK3DReplayController_C.OnViewportSizedBP");

	struct OnViewportSizedBP_Params {
		
	}; OnViewportSizedBP_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-MK3DReplayController.BP-MK3DReplayController_C.OnInputItemList
inline void ABP-MK3DReplayController_C::OnInputItemList() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-MK3DReplayController.BP-MK3DReplayController_C.OnInputItemList");

	struct OnInputItemList_Params {
		
	}; OnInputItemList_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-MK3DReplayController.BP-MK3DReplayController_C.ExecuteUbergraph_BP-MK3DReplayController
inline void ABP-MK3DReplayController_C::ExecuteUbergraph_BP-MK3DReplayController(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-MK3DReplayController.BP-MK3DReplayController_C.ExecuteUbergraph_BP-MK3DReplayController");

	struct ExecuteUbergraph_BP-MK3DReplayController_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_BP-MK3DReplayController_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

