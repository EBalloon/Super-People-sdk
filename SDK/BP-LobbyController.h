// BlueprintGeneratedClass BP-LobbyController.BP-LobbyController_C
class ABP-LobbyController_C : public ABravoHotelLobbyPlayerController {

public:

	struct Unknown UberGraphFrame; // 0x730 (8)
	struct Unknown BP-HUDInteractionComponentBase; // 0x738 (8)
	struct FMulticastInlineDelegate EventDispatcher_PlayLobbySound; // 0x740 (16)
	struct FMulticastInlineDelegate EventDispatcher_StopLobbySound; // 0x750 (16)
	struct Unknown MediaSoundComponent; // 0x760 (8)
	struct Unknown OperationMessageWidget; // 0x768 (8)
	enum class Unknow CurrentSceneType; // 0x770 (1)
	struct Unknown LobbyWidgetRef; // 0x778 (8)

	void CanInput(char& bCheck); // Function BP-LobbyController.BP-LobbyController_C.CanInput(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <Game_BE.exe+0x2B80160>
	void CheckCohLoad(char& bCheck); // Function BP-LobbyController.BP-LobbyController_C.CheckCohLoad(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <Game_BE.exe+0x2B80160>
	void CheckWantPopupEvent(char& bCheck); // Function BP-LobbyController.BP-LobbyController_C.CheckWantPopupEvent(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <Game_BE.exe+0x2B80160>
	struct Unknown GetHUDInteractionComponent(); // Function BP-LobbyController.BP-LobbyController_C.GetHUDInteractionComponent(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // <Game_BE.exe+0x2B80160>
	void UpdateMouseWheel(float Delta); // Function BP-LobbyController.BP-LobbyController_C.UpdateMouseWheel(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void UpdateMouseY(float Delta); // Function BP-LobbyController.BP-LobbyController_C.UpdateMouseY(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void UpdateMouseX(float Delta); // Function BP-LobbyController.BP-LobbyController_C.UpdateMouseX(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void CreateDefaultSkin(); // Function BP-LobbyController.BP-LobbyController_C.CreateDefaultSkin(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void GetLobbyMainWidget(struct Unknown& Widget); // Function BP-LobbyController.BP-LobbyController_C.GetLobbyMainWidget(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <Game_BE.exe+0x2B80160>
	void InpActEvt_CloseUI_K2Node_InputActionEvent_2(struct Unknown Key); // Function BP-LobbyController.BP-LobbyController_C.InpActEvt_CloseUI_K2Node_InputActionEvent_2(BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void InpActEvt_LobbyMoveTab_K2Node_InputActionEvent_1(struct Unknown Key); // Function BP-LobbyController.BP-LobbyController_C.InpActEvt_LobbyMoveTab_K2Node_InputActionEvent_1(BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void InpAxisEvt_Turn_K2Node_InputAxisEvent_1(float AxisValue); // Function BP-LobbyController.BP-LobbyController_C.InpAxisEvt_Turn_K2Node_InputAxisEvent_1(BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void InpAxisEvt_LookUp_K2Node_InputAxisEvent_2(float AxisValue); // Function BP-LobbyController.BP-LobbyController_C.InpAxisEvt_LookUp_K2Node_InputAxisEvent_2(BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void InpAxisEvt_ZoomAxis_K2Node_InputAxisEvent_5(float AxisValue); // Function BP-LobbyController.BP-LobbyController_C.InpAxisEvt_ZoomAxis_K2Node_InputAxisEvent_5(BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void PlayTutorial(); // Function BP-LobbyController.BP-LobbyController_C.PlayTutorial(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void ReceiveBeginPlay(); // Function BP-LobbyController.BP-LobbyController_C.ReceiveBeginPlay(Event|Protected|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void NotifyOperationMessage(struct FText& NotifyText); // Function BP-LobbyController.BP-LobbyController_C.NotifyOperationMessage(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void ChangedSceneDelegate_Event_1(enum class Unknow SceneType); // Function BP-LobbyController.BP-LobbyController_C.ChangedSceneDelegate_Event_1(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void OnInputPopupEvent(); // Function BP-LobbyController.BP-LobbyController_C.OnInputPopupEvent(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void CreateOptionPopup(); // Function BP-LobbyController.BP-LobbyController_C.CreateOptionPopup(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void ExecuteUbergraph_BP-LobbyController(int32_t EntryPoint); // Function BP-LobbyController.BP-LobbyController_C.ExecuteUbergraph_BP-LobbyController(Final|UbergraphFunction|HasDefaults) // <Game_BE.exe+0x2B80160>
	void EventDispatcher_StopLobbySound__DelegateSignature(); // Function BP-LobbyController.BP-LobbyController_C.EventDispatcher_StopLobbySound__DelegateSignature(Public|Delegate|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void EventDispatcher_PlayLobbySound__DelegateSignature(); // Function BP-LobbyController.BP-LobbyController_C.EventDispatcher_PlayLobbySound__DelegateSignature(Public|Delegate|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
};

// Function BP-LobbyController.BP-LobbyController_C.CanInput
inline void ABP-LobbyController_C::CanInput(char& bCheck) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-LobbyController.BP-LobbyController_C.CanInput");

	struct CanInput_Params {
		char& bCheck;
	}; CanInput_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	bCheck = Params.bCheck;

}

// Function BP-LobbyController.BP-LobbyController_C.CheckCohLoad
inline void ABP-LobbyController_C::CheckCohLoad(char& bCheck) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-LobbyController.BP-LobbyController_C.CheckCohLoad");

	struct CheckCohLoad_Params {
		char& bCheck;
	}; CheckCohLoad_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	bCheck = Params.bCheck;

}

// Function BP-LobbyController.BP-LobbyController_C.CheckWantPopupEvent
inline void ABP-LobbyController_C::CheckWantPopupEvent(char& bCheck) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-LobbyController.BP-LobbyController_C.CheckWantPopupEvent");

	struct CheckWantPopupEvent_Params {
		char& bCheck;
	}; CheckWantPopupEvent_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	bCheck = Params.bCheck;

}

// Function BP-LobbyController.BP-LobbyController_C.GetHUDInteractionComponent
inline struct Unknown ABP-LobbyController_C::GetHUDInteractionComponent() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-LobbyController.BP-LobbyController_C.GetHUDInteractionComponent");

	struct GetHUDInteractionComponent_Params {
		
		struct Unknown ReturnValue;

	}; GetHUDInteractionComponent_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function BP-LobbyController.BP-LobbyController_C.UpdateMouseWheel
inline void ABP-LobbyController_C::UpdateMouseWheel(float Delta) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-LobbyController.BP-LobbyController_C.UpdateMouseWheel");

	struct UpdateMouseWheel_Params {
		float Delta;
	}; UpdateMouseWheel_Params Params;

	Params.Delta = Delta;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-LobbyController.BP-LobbyController_C.UpdateMouseY
inline void ABP-LobbyController_C::UpdateMouseY(float Delta) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-LobbyController.BP-LobbyController_C.UpdateMouseY");

	struct UpdateMouseY_Params {
		float Delta;
	}; UpdateMouseY_Params Params;

	Params.Delta = Delta;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-LobbyController.BP-LobbyController_C.UpdateMouseX
inline void ABP-LobbyController_C::UpdateMouseX(float Delta) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-LobbyController.BP-LobbyController_C.UpdateMouseX");

	struct UpdateMouseX_Params {
		float Delta;
	}; UpdateMouseX_Params Params;

	Params.Delta = Delta;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-LobbyController.BP-LobbyController_C.CreateDefaultSkin
inline void ABP-LobbyController_C::CreateDefaultSkin() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-LobbyController.BP-LobbyController_C.CreateDefaultSkin");

	struct CreateDefaultSkin_Params {
		
	}; CreateDefaultSkin_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-LobbyController.BP-LobbyController_C.GetLobbyMainWidget
inline void ABP-LobbyController_C::GetLobbyMainWidget(struct Unknown& Widget) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-LobbyController.BP-LobbyController_C.GetLobbyMainWidget");

	struct GetLobbyMainWidget_Params {
		struct Unknown& Widget;
	}; GetLobbyMainWidget_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Widget = Params.Widget;

}

// Function BP-LobbyController.BP-LobbyController_C.InpActEvt_CloseUI_K2Node_InputActionEvent_2
inline void ABP-LobbyController_C::InpActEvt_CloseUI_K2Node_InputActionEvent_2(struct Unknown Key) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-LobbyController.BP-LobbyController_C.InpActEvt_CloseUI_K2Node_InputActionEvent_2");

	struct InpActEvt_CloseUI_K2Node_InputActionEvent_2_Params {
		struct Unknown Key;
	}; InpActEvt_CloseUI_K2Node_InputActionEvent_2_Params Params;

	Params.Key = Key;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-LobbyController.BP-LobbyController_C.InpActEvt_LobbyMoveTab_K2Node_InputActionEvent_1
inline void ABP-LobbyController_C::InpActEvt_LobbyMoveTab_K2Node_InputActionEvent_1(struct Unknown Key) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-LobbyController.BP-LobbyController_C.InpActEvt_LobbyMoveTab_K2Node_InputActionEvent_1");

	struct InpActEvt_LobbyMoveTab_K2Node_InputActionEvent_1_Params {
		struct Unknown Key;
	}; InpActEvt_LobbyMoveTab_K2Node_InputActionEvent_1_Params Params;

	Params.Key = Key;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-LobbyController.BP-LobbyController_C.InpAxisEvt_Turn_K2Node_InputAxisEvent_1
inline void ABP-LobbyController_C::InpAxisEvt_Turn_K2Node_InputAxisEvent_1(float AxisValue) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-LobbyController.BP-LobbyController_C.InpAxisEvt_Turn_K2Node_InputAxisEvent_1");

	struct InpAxisEvt_Turn_K2Node_InputAxisEvent_1_Params {
		float AxisValue;
	}; InpAxisEvt_Turn_K2Node_InputAxisEvent_1_Params Params;

	Params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-LobbyController.BP-LobbyController_C.InpAxisEvt_LookUp_K2Node_InputAxisEvent_2
inline void ABP-LobbyController_C::InpAxisEvt_LookUp_K2Node_InputAxisEvent_2(float AxisValue) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-LobbyController.BP-LobbyController_C.InpAxisEvt_LookUp_K2Node_InputAxisEvent_2");

	struct InpAxisEvt_LookUp_K2Node_InputAxisEvent_2_Params {
		float AxisValue;
	}; InpAxisEvt_LookUp_K2Node_InputAxisEvent_2_Params Params;

	Params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-LobbyController.BP-LobbyController_C.InpAxisEvt_ZoomAxis_K2Node_InputAxisEvent_5
inline void ABP-LobbyController_C::InpAxisEvt_ZoomAxis_K2Node_InputAxisEvent_5(float AxisValue) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-LobbyController.BP-LobbyController_C.InpAxisEvt_ZoomAxis_K2Node_InputAxisEvent_5");

	struct InpAxisEvt_ZoomAxis_K2Node_InputAxisEvent_5_Params {
		float AxisValue;
	}; InpAxisEvt_ZoomAxis_K2Node_InputAxisEvent_5_Params Params;

	Params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-LobbyController.BP-LobbyController_C.PlayTutorial
inline void ABP-LobbyController_C::PlayTutorial() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-LobbyController.BP-LobbyController_C.PlayTutorial");

	struct PlayTutorial_Params {
		
	}; PlayTutorial_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-LobbyController.BP-LobbyController_C.ReceiveBeginPlay
inline void ABP-LobbyController_C::ReceiveBeginPlay() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-LobbyController.BP-LobbyController_C.ReceiveBeginPlay");

	struct ReceiveBeginPlay_Params {
		
	}; ReceiveBeginPlay_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-LobbyController.BP-LobbyController_C.NotifyOperationMessage
inline void ABP-LobbyController_C::NotifyOperationMessage(struct FText& NotifyText) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-LobbyController.BP-LobbyController_C.NotifyOperationMessage");

	struct NotifyOperationMessage_Params {
		struct FText& NotifyText;
	}; NotifyOperationMessage_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	NotifyText = Params.NotifyText;

}

// Function BP-LobbyController.BP-LobbyController_C.ChangedSceneDelegate_Event_1
inline void ABP-LobbyController_C::ChangedSceneDelegate_Event_1(enum class Unknow SceneType) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-LobbyController.BP-LobbyController_C.ChangedSceneDelegate_Event_1");

	struct ChangedSceneDelegate_Event_1_Params {
		enum class Unknow SceneType;
	}; ChangedSceneDelegate_Event_1_Params Params;

	Params.SceneType = SceneType;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-LobbyController.BP-LobbyController_C.OnInputPopupEvent
inline void ABP-LobbyController_C::OnInputPopupEvent() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-LobbyController.BP-LobbyController_C.OnInputPopupEvent");

	struct OnInputPopupEvent_Params {
		
	}; OnInputPopupEvent_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-LobbyController.BP-LobbyController_C.CreateOptionPopup
inline void ABP-LobbyController_C::CreateOptionPopup() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-LobbyController.BP-LobbyController_C.CreateOptionPopup");

	struct CreateOptionPopup_Params {
		
	}; CreateOptionPopup_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-LobbyController.BP-LobbyController_C.ExecuteUbergraph_BP-LobbyController
inline void ABP-LobbyController_C::ExecuteUbergraph_BP-LobbyController(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-LobbyController.BP-LobbyController_C.ExecuteUbergraph_BP-LobbyController");

	struct ExecuteUbergraph_BP-LobbyController_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_BP-LobbyController_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-LobbyController.BP-LobbyController_C.EventDispatcher_StopLobbySound__DelegateSignature
inline void ABP-LobbyController_C::EventDispatcher_StopLobbySound__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-LobbyController.BP-LobbyController_C.EventDispatcher_StopLobbySound__DelegateSignature");

	struct EventDispatcher_StopLobbySound__DelegateSignature_Params {
		
	}; EventDispatcher_StopLobbySound__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-LobbyController.BP-LobbyController_C.EventDispatcher_PlayLobbySound__DelegateSignature
inline void ABP-LobbyController_C::EventDispatcher_PlayLobbySound__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-LobbyController.BP-LobbyController_C.EventDispatcher_PlayLobbySound__DelegateSignature");

	struct EventDispatcher_PlayLobbySound__DelegateSignature_Params {
		
	}; EventDispatcher_PlayLobbySound__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

