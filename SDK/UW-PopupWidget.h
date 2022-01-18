// WidgetBlueprintGeneratedClass UW-PopupWidget.UW-PopupWidget_C
class UUW-PopupWidget_C : public UBravoHotelPopupWidget {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268 (8)
	struct UImage Bg; // 0x270 (8)
	struct UButton btn_Cancel; // 0x278 (8)
	struct UButton btn_OK; // 0x280 (8)
	struct UTextBlock Desc; // 0x288 (8)
	struct UImage Image_2; // 0x290 (8)
	struct UOverlay Overlay; // 0x298 (8)
	struct UOverlay Overlay_1; // 0x2A0 (8)
	struct UOverlay Overlay_2; // 0x2A8 (8)
	struct URichTextBlock RichTextBlock_244; // 0x2B0 (8)
	struct UTextBlock TextBlock_17; // 0x2B8 (8)
	struct UThrobber Throbber_159; // 0x2C0 (8)
	struct UTextBlock Title; // 0x2C8 (8)
	struct UWidgetSwitcher WidgetSwitcher_1; // 0x2D0 (8)
	struct FName MapNameToExit; // 0x2D8 (8)
	char IsExitGame : 0; // 0x2E0 (1)
	struct ABravoHotelPlayerController ControllerRef; // 0x2E8 (8)
	char IsTutorial : 0; // 0x2F0 (1)
	char IsDeathCam : 0; // 0x2F1 (1)
	struct FMulticastInlineDelegate EventDispatcher_MoveToDeathCam; // 0x2F8 (16)
	char ErrorType : 0; // 0x308 (1)
	char IsPerkDeckSelectMode : 0; // 0x309 (1)
	struct FMulticastInlineDelegate EventDispatcher_TrySelectMode; // 0x310 (16)
	char OkayType : 0; // 0x320 (1)

	void SetOptionChangedFromBenchmark(); // Function UW-PopupWidget.UW-PopupWidget_C.SetOptionChangedFromBenchmark(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void PerkDeckSelectMode(); // Function UW-PopupWidget.UW-PopupWidget_C.PerkDeckSelectMode(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void IsStartedGame(char& bRet); // Function UW-PopupWidget.UW-PopupWidget_C.IsStartedGame(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void IsSoloPlay(char& bRet); // Function UW-PopupWidget.UW-PopupWidget_C.IsSoloPlay(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void GetMessage(int32_t ErrorCode, struct FString ErrorID, struct FString Param, struct FString& Title, struct FString& Desc); // Function UW-PopupWidget.UW-PopupWidget_C.GetMessage(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void EnterDeathCam(char IsWinningCam, char IsTargetCameraKiller); // Function UW-PopupWidget.UW-PopupWidget_C.EnterDeathCam(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void EnterWindow(); // Function UW-PopupWidget.UW-PopupWidget_C.EnterWindow(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void GetMyTeamAlive(char& ALIVE); // Function UW-PopupWidget.UW-PopupWidget_C.GetMyTeamAlive(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void EnterLobby(); // Function UW-PopupWidget.UW-PopupWidget_C.EnterLobby(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	struct FEventReply OnMouseWheel(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UW-PopupWidget.UW-PopupWidget_C.OnMouseWheel(BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UW-PopupWidget.UW-PopupWidget_C.OnMouseButtonDown(BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void Construct(); // Function UW-PopupWidget.UW-PopupWidget_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void BndEvt__btn_OK_K2Node_ComponentBoundEvent_35_OnButtonClickedEvent__DelegateSignature(); // Function UW-PopupWidget.UW-PopupWidget_C.BndEvt__btn_OK_K2Node_ComponentBoundEvent_35_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void BndEvt__btn_Cancel_K2Node_ComponentBoundEvent_53_OnButtonClickedEvent__DelegateSignature(); // Function UW-PopupWidget.UW-PopupWidget_C.BndEvt__btn_Cancel_K2Node_ComponentBoundEvent_53_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void BndEvt__btn_OK_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function UW-PopupWidget.UW-PopupWidget_C.BndEvt__btn_OK_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void BndEvt__btn_Cancel_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature(); // Function UW-PopupWidget.UW-PopupWidget_C.BndEvt__btn_Cancel_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void PlayerLogout(); // Function UW-PopupWidget.UW-PopupWidget_C.PlayerLogout(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void LeaveGame(); // Function UW-PopupWidget.UW-PopupWidget_C.LeaveGame(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void OnChangedFinalRankDelegate_Event(); // Function UW-PopupWidget.UW-PopupWidget_C.OnChangedFinalRankDelegate_Event(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void FinalResult_Internal(); // Function UW-PopupWidget.UW-PopupWidget_C.FinalResult_Internal(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void MoveLobby(); // Function UW-PopupWidget.UW-PopupWidget_C.MoveLobby(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void Show_2(); // Function UW-PopupWidget.UW-PopupWidget_C.Show_2(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void Hide_2(); // Function UW-PopupWidget.UW-PopupWidget_C.Hide_2(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void SetMessageEx(int32_t ErrorIdx, struct FString ErrorID, struct FString Parameter, char bConfirm, char bCancel, char bWaiting, struct FWaitingEvent& evt); // Function UW-PopupWidget.UW-PopupWidget_C.SetMessageEx(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void 鉹@t元_1(); // Function UW-PopupWidget.UW-PopupWidget_C.鉹@t元_1(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void QuitGame(float DelayTime); // Function UW-PopupWidget.UW-PopupWidget_C.QuitGame(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void Destruct(); // Function UW-PopupWidget.UW-PopupWidget_C.Destruct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void ExecuteUbergraph_UW-PopupWidget(int32_t EntryPoint); // Function UW-PopupWidget.UW-PopupWidget_C.ExecuteUbergraph_UW-PopupWidget(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void EventDispatcher_TrySelectMode__DelegateSignature(); // Function UW-PopupWidget.UW-PopupWidget_C.EventDispatcher_TrySelectMode__DelegateSignature(Public|Delegate|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void EventDispatcher_MoveToDeathCam__DelegateSignature(); // Function UW-PopupWidget.UW-PopupWidget_C.EventDispatcher_MoveToDeathCam__DelegateSignature(Public|Delegate|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
};

// Function UW-PopupWidget.UW-PopupWidget_C.SetOptionChangedFromBenchmark
inline void UUW-PopupWidget_C::SetOptionChangedFromBenchmark() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PopupWidget.UW-PopupWidget_C.SetOptionChangedFromBenchmark");

	struct SetOptionChangedFromBenchmark_Params {
		
	}; SetOptionChangedFromBenchmark_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PopupWidget.UW-PopupWidget_C.PerkDeckSelectMode
inline void UUW-PopupWidget_C::PerkDeckSelectMode() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PopupWidget.UW-PopupWidget_C.PerkDeckSelectMode");

	struct PerkDeckSelectMode_Params {
		
	}; PerkDeckSelectMode_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PopupWidget.UW-PopupWidget_C.IsStartedGame
inline void UUW-PopupWidget_C::IsStartedGame(char& bRet) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PopupWidget.UW-PopupWidget_C.IsStartedGame");

	struct IsStartedGame_Params {
		char& bRet;
	}; IsStartedGame_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	bRet = Params.bRet;

}

// Function UW-PopupWidget.UW-PopupWidget_C.IsSoloPlay
inline void UUW-PopupWidget_C::IsSoloPlay(char& bRet) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PopupWidget.UW-PopupWidget_C.IsSoloPlay");

	struct IsSoloPlay_Params {
		char& bRet;
	}; IsSoloPlay_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	bRet = Params.bRet;

}

// Function UW-PopupWidget.UW-PopupWidget_C.GetMessage
inline void UUW-PopupWidget_C::GetMessage(int32_t ErrorCode, struct FString ErrorID, struct FString Param, struct FString& Title, struct FString& Desc) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PopupWidget.UW-PopupWidget_C.GetMessage");

	struct GetMessage_Params {
		int32_t ErrorCode;
		struct FString ErrorID;
		struct FString Param;
		struct FString& Title;
		struct FString& Desc;
	}; GetMessage_Params Params;

	Params.ErrorCode = ErrorCode;
	Params.ErrorID = ErrorID;
	Params.Param = Param;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Title = Params.Title;
	Desc = Params.Desc;

}

// Function UW-PopupWidget.UW-PopupWidget_C.EnterDeathCam
inline void UUW-PopupWidget_C::EnterDeathCam(char IsWinningCam, char IsTargetCameraKiller) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PopupWidget.UW-PopupWidget_C.EnterDeathCam");

	struct EnterDeathCam_Params {
		char IsWinningCam;
		char IsTargetCameraKiller;
	}; EnterDeathCam_Params Params;

	Params.IsWinningCam = IsWinningCam;
	Params.IsTargetCameraKiller = IsTargetCameraKiller;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PopupWidget.UW-PopupWidget_C.EnterWindow
inline void UUW-PopupWidget_C::EnterWindow() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PopupWidget.UW-PopupWidget_C.EnterWindow");

	struct EnterWindow_Params {
		
	}; EnterWindow_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PopupWidget.UW-PopupWidget_C.GetMyTeamAlive
inline void UUW-PopupWidget_C::GetMyTeamAlive(char& ALIVE) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PopupWidget.UW-PopupWidget_C.GetMyTeamAlive");

	struct GetMyTeamAlive_Params {
		char& ALIVE;
	}; GetMyTeamAlive_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	ALIVE = Params.ALIVE;

}

// Function UW-PopupWidget.UW-PopupWidget_C.EnterLobby
inline void UUW-PopupWidget_C::EnterLobby() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PopupWidget.UW-PopupWidget_C.EnterLobby");

	struct EnterLobby_Params {
		
	}; EnterLobby_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PopupWidget.UW-PopupWidget_C.OnMouseWheel
inline struct FEventReply UUW-PopupWidget_C::OnMouseWheel(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PopupWidget.UW-PopupWidget_C.OnMouseWheel");

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

// Function UW-PopupWidget.UW-PopupWidget_C.OnMouseButtonDown
inline struct FEventReply UUW-PopupWidget_C::OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PopupWidget.UW-PopupWidget_C.OnMouseButtonDown");

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

// Function UW-PopupWidget.UW-PopupWidget_C.Construct
inline void UUW-PopupWidget_C::Construct() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PopupWidget.UW-PopupWidget_C.Construct");

	struct Construct_Params {
		
	}; Construct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PopupWidget.UW-PopupWidget_C.BndEvt__btn_OK_K2Node_ComponentBoundEvent_35_OnButtonClickedEvent__DelegateSignature
inline void UUW-PopupWidget_C::BndEvt__btn_OK_K2Node_ComponentBoundEvent_35_OnButtonClickedEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PopupWidget.UW-PopupWidget_C.BndEvt__btn_OK_K2Node_ComponentBoundEvent_35_OnButtonClickedEvent__DelegateSignature");

	struct BndEvt__btn_OK_K2Node_ComponentBoundEvent_35_OnButtonClickedEvent__DelegateSignature_Params {
		
	}; BndEvt__btn_OK_K2Node_ComponentBoundEvent_35_OnButtonClickedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PopupWidget.UW-PopupWidget_C.BndEvt__btn_Cancel_K2Node_ComponentBoundEvent_53_OnButtonClickedEvent__DelegateSignature
inline void UUW-PopupWidget_C::BndEvt__btn_Cancel_K2Node_ComponentBoundEvent_53_OnButtonClickedEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PopupWidget.UW-PopupWidget_C.BndEvt__btn_Cancel_K2Node_ComponentBoundEvent_53_OnButtonClickedEvent__DelegateSignature");

	struct BndEvt__btn_Cancel_K2Node_ComponentBoundEvent_53_OnButtonClickedEvent__DelegateSignature_Params {
		
	}; BndEvt__btn_Cancel_K2Node_ComponentBoundEvent_53_OnButtonClickedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PopupWidget.UW-PopupWidget_C.BndEvt__btn_OK_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
inline void UUW-PopupWidget_C::BndEvt__btn_OK_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PopupWidget.UW-PopupWidget_C.BndEvt__btn_OK_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	struct BndEvt__btn_OK_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params {
		
	}; BndEvt__btn_OK_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PopupWidget.UW-PopupWidget_C.BndEvt__btn_Cancel_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature
inline void UUW-PopupWidget_C::BndEvt__btn_Cancel_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PopupWidget.UW-PopupWidget_C.BndEvt__btn_Cancel_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature");

	struct BndEvt__btn_Cancel_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature_Params {
		
	}; BndEvt__btn_Cancel_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PopupWidget.UW-PopupWidget_C.PlayerLogout
inline void UUW-PopupWidget_C::PlayerLogout() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PopupWidget.UW-PopupWidget_C.PlayerLogout");

	struct PlayerLogout_Params {
		
	}; PlayerLogout_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PopupWidget.UW-PopupWidget_C.LeaveGame
inline void UUW-PopupWidget_C::LeaveGame() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PopupWidget.UW-PopupWidget_C.LeaveGame");

	struct LeaveGame_Params {
		
	}; LeaveGame_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PopupWidget.UW-PopupWidget_C.OnChangedFinalRankDelegate_Event
inline void UUW-PopupWidget_C::OnChangedFinalRankDelegate_Event() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PopupWidget.UW-PopupWidget_C.OnChangedFinalRankDelegate_Event");

	struct OnChangedFinalRankDelegate_Event_Params {
		
	}; OnChangedFinalRankDelegate_Event_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PopupWidget.UW-PopupWidget_C.FinalResult_Internal
inline void UUW-PopupWidget_C::FinalResult_Internal() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PopupWidget.UW-PopupWidget_C.FinalResult_Internal");

	struct FinalResult_Internal_Params {
		
	}; FinalResult_Internal_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PopupWidget.UW-PopupWidget_C.MoveLobby
inline void UUW-PopupWidget_C::MoveLobby() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PopupWidget.UW-PopupWidget_C.MoveLobby");

	struct MoveLobby_Params {
		
	}; MoveLobby_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PopupWidget.UW-PopupWidget_C.Show_2
inline void UUW-PopupWidget_C::Show_2() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PopupWidget.UW-PopupWidget_C.Show_2");

	struct Show_2_Params {
		
	}; Show_2_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PopupWidget.UW-PopupWidget_C.Hide_2
inline void UUW-PopupWidget_C::Hide_2() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PopupWidget.UW-PopupWidget_C.Hide_2");

	struct Hide_2_Params {
		
	}; Hide_2_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PopupWidget.UW-PopupWidget_C.SetMessageEx
inline void UUW-PopupWidget_C::SetMessageEx(int32_t ErrorIdx, struct FString ErrorID, struct FString Parameter, char bConfirm, char bCancel, char bWaiting, struct FWaitingEvent& evt) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PopupWidget.UW-PopupWidget_C.SetMessageEx");

	struct SetMessageEx_Params {
		int32_t ErrorIdx;
		struct FString ErrorID;
		struct FString Parameter;
		char bConfirm;
		char bCancel;
		char bWaiting;
		struct FWaitingEvent& evt;
	}; SetMessageEx_Params Params;

	Params.ErrorIdx = ErrorIdx;
	Params.ErrorID = ErrorID;
	Params.Parameter = Parameter;
	Params.bConfirm = bConfirm;
	Params.bCancel = bCancel;
	Params.bWaiting = bWaiting;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	evt = Params.evt;

}

// Function UW-PopupWidget.UW-PopupWidget_C.鉹@t元_1
inline void UUW-PopupWidget_C::鉹@t元_1() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PopupWidget.UW-PopupWidget_C.鉹@t元_1");

	struct 鉹@t元_1_Params {
		
	}; 鉹@t元_1_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PopupWidget.UW-PopupWidget_C.QuitGame
inline void UUW-PopupWidget_C::QuitGame(float DelayTime) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PopupWidget.UW-PopupWidget_C.QuitGame");

	struct QuitGame_Params {
		float DelayTime;
	}; QuitGame_Params Params;

	Params.DelayTime = DelayTime;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PopupWidget.UW-PopupWidget_C.Destruct
inline void UUW-PopupWidget_C::Destruct() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PopupWidget.UW-PopupWidget_C.Destruct");

	struct Destruct_Params {
		
	}; Destruct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PopupWidget.UW-PopupWidget_C.ExecuteUbergraph_UW-PopupWidget
inline void UUW-PopupWidget_C::ExecuteUbergraph_UW-PopupWidget(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PopupWidget.UW-PopupWidget_C.ExecuteUbergraph_UW-PopupWidget");

	struct ExecuteUbergraph_UW-PopupWidget_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_UW-PopupWidget_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PopupWidget.UW-PopupWidget_C.EventDispatcher_TrySelectMode__DelegateSignature
inline void UUW-PopupWidget_C::EventDispatcher_TrySelectMode__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PopupWidget.UW-PopupWidget_C.EventDispatcher_TrySelectMode__DelegateSignature");

	struct EventDispatcher_TrySelectMode__DelegateSignature_Params {
		
	}; EventDispatcher_TrySelectMode__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PopupWidget.UW-PopupWidget_C.EventDispatcher_MoveToDeathCam__DelegateSignature
inline void UUW-PopupWidget_C::EventDispatcher_MoveToDeathCam__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PopupWidget.UW-PopupWidget_C.EventDispatcher_MoveToDeathCam__DelegateSignature");

	struct EventDispatcher_MoveToDeathCam__DelegateSignature_Params {
		
	}; EventDispatcher_MoveToDeathCam__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

