// WidgetBlueprintGeneratedClass UW-ReplayTimelineBasic.UW-ReplayTimelineBasic_C
class UUW-ReplayTimelineBasic_C : public UBravoHotelReplayTimelineWidget {

public:

	struct Unknown UberGraphFrame; // 0x360 (8)
	struct Unknown Bg; // 0x368 (8)
	struct Unknown Border_Timeline; // 0x370 (8)
	struct Unknown Border_TimeToGo; // 0x378 (8)
	struct Unknown BT_FreeCam; // 0x380 (8)
	struct Unknown BT_ReplayPause; // 0x388 (8)
	struct Unknown BT_ReplayResume; // 0x390 (8)
	struct Unknown BT_SpeedDown; // 0x398 (8)
	struct Unknown BT_SpeedUp; // 0x3A0 (8)
	struct Unknown BT_TimelineScaleDown; // 0x3A8 (8)
	struct Unknown BT_TimelineScaleUp; // 0x3B0 (8)
	struct Unknown Canvas_EventMarkers; // 0x3B8 (8)
	struct Unknown Chk_ShowKill; // 0x3C0 (8)
	struct Unknown Chk_ShowKnockout; // 0x3C8 (8)
	struct Unknown Chk_ShowMyKill; // 0x3D0 (8)
	struct Unknown Chk_ShowMyKnockout; // 0x3D8 (8)
	struct Unknown Chk_ShowMyResuscitated; // 0x3E0 (8)
	struct Unknown Chk_ShowResuscitated; // 0x3E8 (8)
	struct Unknown ReplayTimelineSlider; // 0x3F0 (8)
	struct Unknown ScrollBox_Timeline; // 0x3F8 (8)
	struct Unknown SizeBox_Timeline; // 0x400 (8)
	struct Unknown Slider_TimelineScale; // 0x408 (8)
	struct Unknown T_CameraType; // 0x410 (8)
	struct Unknown T_CurrentTime; // 0x418 (8)
	struct Unknown T_PlaySpeed; // 0x420 (8)
	struct Unknown T_TimeToGo; // 0x428 (8)
	struct Unknown T_TotalTime; // 0x430 (8)
	float TimelineSizeBoxOffset; // 0x438 (4)
	struct Unknown* Class_EventMarker_Kill; // 0x440 (8)
	struct Unknown* Class_EventMarker_Knockout; // 0x448 (8)
	float LastViewportSize; // 0x450 (4)
	char IsMouseOnBorder : 0; // 0x454 (1)
	struct Unknown* Class_EventMarker_Resuscitated; // 0x458 (8)
	struct Unknown* Class_EventMarker_WhenReported; // 0x460 (8)
	enum class Unknow CameraType; // 0x468 (1)
	char ViewMode; // 0x469 (1)

	void CheckCameraType(); // Function UW-ReplayTimelineBasic.UW-ReplayTimelineBasic_C.CheckCameraType(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	struct Unknown GetTimelineToolTipPositionBySlider(struct FString& ToolTipTime); // Function UW-ReplayTimelineBasic.UW-ReplayTimelineBasic_C.GetTimelineToolTipPositionBySlider(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void SetTimeToGo(); // Function UW-ReplayTimelineBasic.UW-ReplayTimelineBasic_C.SetTimeToGo(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void CheckTimeToGo(); // Function UW-ReplayTimelineBasic.UW-ReplayTimelineBasic_C.CheckTimeToGo(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void CalcTimelineScale(char IsUpScale); // Function UW-ReplayTimelineBasic.UW-ReplayTimelineBasic_C.CalcTimelineScale(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void SetTimelineToolTipText(struct FString& Text); // Function UW-ReplayTimelineBasic.UW-ReplayTimelineBasic_C.SetTimelineToolTipText(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	struct Unknown On_Border_Timeline_MouseLeave_1(struct Unknown MyGeometry, struct Unknown& MouseEvent); // Function UW-ReplayTimelineBasic.UW-ReplayTimelineBasic_C.On_Border_Timeline_MouseLeave_1(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void SetTickTime(); // Function UW-ReplayTimelineBasic.UW-ReplayTimelineBasic_C.SetTickTime(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	struct FText Get_T_PlaySpeed_Text_1(); // Function UW-ReplayTimelineBasic.UW-ReplayTimelineBasic_C.Get_T_PlaySpeed_Text_1(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <Game_BE.exe+0x2B812B0>
	struct Unknown On_Border_Timeline_MouseMove_1(struct Unknown MyGeometry, struct Unknown& MouseEvent); // Function UW-ReplayTimelineBasic.UW-ReplayTimelineBasic_C.On_Border_Timeline_MouseMove_1(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	struct Unknown On_Border_Timeline_MouseEnter_1(struct Unknown MyGeometry, struct Unknown& MouseEvent); // Function UW-ReplayTimelineBasic.UW-ReplayTimelineBasic_C.On_Border_Timeline_MouseEnter_1(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	struct Unknown CreateEventMarker(enum class Unknow killType); // Function UW-ReplayTimelineBasic.UW-ReplayTimelineBasic_C.CreateEventMarker(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void CheckChangeViewportSize(); // Function UW-ReplayTimelineBasic.UW-ReplayTimelineBasic_C.CheckChangeViewportSize(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void SetEventMarkersPos(enum class Unknow killType, float TotalTime); // Function UW-ReplayTimelineBasic.UW-ReplayTimelineBasic_C.SetEventMarkersPos(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void SetTimelineScaleBoxWidth(); // Function UW-ReplayTimelineBasic.UW-ReplayTimelineBasic_C.SetTimelineScaleBoxWidth(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void Init(); // Function UW-ReplayTimelineBasic.UW-ReplayTimelineBasic_C.Init(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void TogglePauseResumeButton(char PauseResume); // Function UW-ReplayTimelineBasic.UW-ReplayTimelineBasic_C.TogglePauseResumeButton(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void BndEvt__BT_ReplayResume_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function UW-ReplayTimelineBasic.UW-ReplayTimelineBasic_C.BndEvt__BT_ReplayResume_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void BndEvt__BT_ReplayPause_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function UW-ReplayTimelineBasic.UW-ReplayTimelineBasic_C.BndEvt__BT_ReplayPause_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void ChangeCameraTypeDelegate_Event_1(enum class Unknow CameraType, struct FString TargetPlayerName); // Function UW-ReplayTimelineBasic.UW-ReplayTimelineBasic_C.ChangeCameraTypeDelegate_Event_1(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void BndEvt__BT_FreeCam_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // Function UW-ReplayTimelineBasic.UW-ReplayTimelineBasic_C.BndEvt__BT_FreeCam_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void Tick(struct Unknown MyGeometry, float InDeltaTime); // Function UW-ReplayTimelineBasic.UW-ReplayTimelineBasic_C.Tick(BlueprintCosmetic|Event|Public|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void BndEvt__Slider_302_K2Node_ComponentBoundEvent_3_OnFloatValueChangedEvent__DelegateSignature(float Value); // Function UW-ReplayTimelineBasic.UW-ReplayTimelineBasic_C.BndEvt__Slider_302_K2Node_ComponentBoundEvent_3_OnFloatValueChangedEvent__DelegateSignature(BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void OnReplayJumpCompleteEvent_Event_1(char bSuccess); // Function UW-ReplayTimelineBasic.UW-ReplayTimelineBasic_C.OnReplayJumpCompleteEvent_Event_1(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void BPUpdateTimelineScale(); // Function UW-ReplayTimelineBasic.UW-ReplayTimelineBasic_C.BPUpdateTimelineScale(Event|Public|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void BndEvt__BT_TimelineScaleDown_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature(); // Function UW-ReplayTimelineBasic.UW-ReplayTimelineBasic_C.BndEvt__BT_TimelineScaleDown_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void BndEvt__BT_TimelineScaleUp_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature(); // Function UW-ReplayTimelineBasic.UW-ReplayTimelineBasic_C.BndEvt__BT_TimelineScaleUp_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void BndEvt__Chk_ShowKill_K2Node_ComponentBoundEvent_6_OnCheckBoxComponentStateChanged__DelegateSignature(char bIsChecked); // Function UW-ReplayTimelineBasic.UW-ReplayTimelineBasic_C.BndEvt__Chk_ShowKill_K2Node_ComponentBoundEvent_6_OnCheckBoxComponentStateChanged__DelegateSignature(BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void BndEvt__Chk_ShowKnockout_K2Node_ComponentBoundEvent_7_OnCheckBoxComponentStateChanged__DelegateSignature(char bIsChecked); // Function UW-ReplayTimelineBasic.UW-ReplayTimelineBasic_C.BndEvt__Chk_ShowKnockout_K2Node_ComponentBoundEvent_7_OnCheckBoxComponentStateChanged__DelegateSignature(BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void BndEvt__BT_SpeedDown_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature(); // Function UW-ReplayTimelineBasic.UW-ReplayTimelineBasic_C.BndEvt__BT_SpeedDown_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void BndEvt__BT_SpeedUp_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature(); // Function UW-ReplayTimelineBasic.UW-ReplayTimelineBasic_C.BndEvt__BT_SpeedUp_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void BndEvt__ScrollBox_Timeline_K2Node_ComponentBoundEvent_11_OnUserScrolledEvent__DelegateSignature(float CurrentOffset); // Function UW-ReplayTimelineBasic.UW-ReplayTimelineBasic_C.BndEvt__ScrollBox_Timeline_K2Node_ComponentBoundEvent_11_OnUserScrolledEvent__DelegateSignature(BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void BPUpdateKillEventMarkersPos(enum class Unknow killType, float TotalTime); // Function UW-ReplayTimelineBasic.UW-ReplayTimelineBasic_C.BPUpdateKillEventMarkersPos(Event|Public|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void OnReplayPauseEvent_Event_1(char bPaused); // Function UW-ReplayTimelineBasic.UW-ReplayTimelineBasic_C.OnReplayPauseEvent_Event_1(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void Construct(); // Function UW-ReplayTimelineBasic.UW-ReplayTimelineBasic_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void BndEvt__ReplayTimelineSlider_K2Node_ComponentBoundEvent_12_OnMouseCaptureEndEvent__DelegateSignature(); // Function UW-ReplayTimelineBasic.UW-ReplayTimelineBasic_C.BndEvt__ReplayTimelineSlider_K2Node_ComponentBoundEvent_12_OnMouseCaptureEndEvent__DelegateSignature(BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void BndEvt__Chk_ShowMyKill_K2Node_ComponentBoundEvent_15_OnCheckBoxComponentStateChanged__DelegateSignature(char bIsChecked); // Function UW-ReplayTimelineBasic.UW-ReplayTimelineBasic_C.BndEvt__Chk_ShowMyKill_K2Node_ComponentBoundEvent_15_OnCheckBoxComponentStateChanged__DelegateSignature(BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void BndEvt__Chk_ShowMyKnockout_K2Node_ComponentBoundEvent_16_OnCheckBoxComponentStateChanged__DelegateSignature(char bIsChecked); // Function UW-ReplayTimelineBasic.UW-ReplayTimelineBasic_C.BndEvt__Chk_ShowMyKnockout_K2Node_ComponentBoundEvent_16_OnCheckBoxComponentStateChanged__DelegateSignature(BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void BndEvt__Chk_ShowMyResuscitated_K2Node_ComponentBoundEvent_17_OnCheckBoxComponentStateChanged__DelegateSignature(char bIsChecked); // Function UW-ReplayTimelineBasic.UW-ReplayTimelineBasic_C.BndEvt__Chk_ShowMyResuscitated_K2Node_ComponentBoundEvent_17_OnCheckBoxComponentStateChanged__DelegateSignature(BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void BndEvt__Chk_ShowResuscitated_K2Node_ComponentBoundEvent_18_OnCheckBoxComponentStateChanged__DelegateSignature(char bIsChecked); // Function UW-ReplayTimelineBasic.UW-ReplayTimelineBasic_C.BndEvt__Chk_ShowResuscitated_K2Node_ComponentBoundEvent_18_OnCheckBoxComponentStateChanged__DelegateSignature(BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void ChangeViewModeDelegate_Event_1(char ViewMode); // Function UW-ReplayTimelineBasic.UW-ReplayTimelineBasic_C.ChangeViewModeDelegate_Event_1(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void ExecuteUbergraph_UW-ReplayTimelineBasic(int32_t EntryPoint); // Function UW-ReplayTimelineBasic.UW-ReplayTimelineBasic_C.ExecuteUbergraph_UW-ReplayTimelineBasic(Final|UbergraphFunction|HasDefaults) // <Game_BE.exe+0x2B812B0>
};

// Function UW-ReplayTimelineBasic.UW-ReplayTimelineBasic_C.CheckCameraType
inline void UUW-ReplayTimelineBasic_C::CheckCameraType() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ReplayTimelineBasic.UW-ReplayTimelineBasic_C.CheckCameraType");

	struct CheckCameraType_Params {
		
	}; CheckCameraType_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ReplayTimelineBasic.UW-ReplayTimelineBasic_C.GetTimelineToolTipPositionBySlider
inline struct Unknown UUW-ReplayTimelineBasic_C::GetTimelineToolTipPositionBySlider(struct FString& ToolTipTime) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ReplayTimelineBasic.UW-ReplayTimelineBasic_C.GetTimelineToolTipPositionBySlider");

	struct GetTimelineToolTipPositionBySlider_Params {
		struct FString& ToolTipTime;
		struct Unknown ReturnValue;

	}; GetTimelineToolTipPositionBySlider_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	ToolTipTime = Params.ToolTipTime;


	return params.ReturnValue;
}

// Function UW-ReplayTimelineBasic.UW-ReplayTimelineBasic_C.SetTimeToGo
inline void UUW-ReplayTimelineBasic_C::SetTimeToGo() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ReplayTimelineBasic.UW-ReplayTimelineBasic_C.SetTimeToGo");

	struct SetTimeToGo_Params {
		
	}; SetTimeToGo_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ReplayTimelineBasic.UW-ReplayTimelineBasic_C.CheckTimeToGo
inline void UUW-ReplayTimelineBasic_C::CheckTimeToGo() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ReplayTimelineBasic.UW-ReplayTimelineBasic_C.CheckTimeToGo");

	struct CheckTimeToGo_Params {
		
	}; CheckTimeToGo_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ReplayTimelineBasic.UW-ReplayTimelineBasic_C.CalcTimelineScale
inline void UUW-ReplayTimelineBasic_C::CalcTimelineScale(char IsUpScale) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ReplayTimelineBasic.UW-ReplayTimelineBasic_C.CalcTimelineScale");

	struct CalcTimelineScale_Params {
		char IsUpScale;
	}; CalcTimelineScale_Params Params;

	Params.IsUpScale = IsUpScale;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ReplayTimelineBasic.UW-ReplayTimelineBasic_C.SetTimelineToolTipText
inline void UUW-ReplayTimelineBasic_C::SetTimelineToolTipText(struct FString& Text) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ReplayTimelineBasic.UW-ReplayTimelineBasic_C.SetTimelineToolTipText");

	struct SetTimelineToolTipText_Params {
		struct FString& Text;
	}; SetTimelineToolTipText_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Text = Params.Text;

}

// Function UW-ReplayTimelineBasic.UW-ReplayTimelineBasic_C.On_Border_Timeline_MouseLeave_1
inline struct Unknown UUW-ReplayTimelineBasic_C::On_Border_Timeline_MouseLeave_1(struct Unknown MyGeometry, struct Unknown& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ReplayTimelineBasic.UW-ReplayTimelineBasic_C.On_Border_Timeline_MouseLeave_1");

	struct On_Border_Timeline_MouseLeave_1_Params {
		struct Unknown MyGeometry;
		struct Unknown& MouseEvent;
		struct Unknown ReturnValue;

	}; On_Border_Timeline_MouseLeave_1_Params Params;

	Params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	MouseEvent = Params.MouseEvent;


	return params.ReturnValue;
}

// Function UW-ReplayTimelineBasic.UW-ReplayTimelineBasic_C.SetTickTime
inline void UUW-ReplayTimelineBasic_C::SetTickTime() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ReplayTimelineBasic.UW-ReplayTimelineBasic_C.SetTickTime");

	struct SetTickTime_Params {
		
	}; SetTickTime_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ReplayTimelineBasic.UW-ReplayTimelineBasic_C.Get_T_PlaySpeed_Text_1
inline struct FText UUW-ReplayTimelineBasic_C::Get_T_PlaySpeed_Text_1() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ReplayTimelineBasic.UW-ReplayTimelineBasic_C.Get_T_PlaySpeed_Text_1");

	struct Get_T_PlaySpeed_Text_1_Params {
		
		struct FText ReturnValue;

	}; Get_T_PlaySpeed_Text_1_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UW-ReplayTimelineBasic.UW-ReplayTimelineBasic_C.On_Border_Timeline_MouseMove_1
inline struct Unknown UUW-ReplayTimelineBasic_C::On_Border_Timeline_MouseMove_1(struct Unknown MyGeometry, struct Unknown& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ReplayTimelineBasic.UW-ReplayTimelineBasic_C.On_Border_Timeline_MouseMove_1");

	struct On_Border_Timeline_MouseMove_1_Params {
		struct Unknown MyGeometry;
		struct Unknown& MouseEvent;
		struct Unknown ReturnValue;

	}; On_Border_Timeline_MouseMove_1_Params Params;

	Params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	MouseEvent = Params.MouseEvent;


	return params.ReturnValue;
}

// Function UW-ReplayTimelineBasic.UW-ReplayTimelineBasic_C.On_Border_Timeline_MouseEnter_1
inline struct Unknown UUW-ReplayTimelineBasic_C::On_Border_Timeline_MouseEnter_1(struct Unknown MyGeometry, struct Unknown& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ReplayTimelineBasic.UW-ReplayTimelineBasic_C.On_Border_Timeline_MouseEnter_1");

	struct On_Border_Timeline_MouseEnter_1_Params {
		struct Unknown MyGeometry;
		struct Unknown& MouseEvent;
		struct Unknown ReturnValue;

	}; On_Border_Timeline_MouseEnter_1_Params Params;

	Params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	MouseEvent = Params.MouseEvent;


	return params.ReturnValue;
}

// Function UW-ReplayTimelineBasic.UW-ReplayTimelineBasic_C.CreateEventMarker
inline struct Unknown UUW-ReplayTimelineBasic_C::CreateEventMarker(enum class Unknow killType) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ReplayTimelineBasic.UW-ReplayTimelineBasic_C.CreateEventMarker");

	struct CreateEventMarker_Params {
		enum class Unknow killType;
		struct Unknown ReturnValue;

	}; CreateEventMarker_Params Params;

	Params.killType = killType;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UW-ReplayTimelineBasic.UW-ReplayTimelineBasic_C.CheckChangeViewportSize
inline void UUW-ReplayTimelineBasic_C::CheckChangeViewportSize() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ReplayTimelineBasic.UW-ReplayTimelineBasic_C.CheckChangeViewportSize");

	struct CheckChangeViewportSize_Params {
		
	}; CheckChangeViewportSize_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ReplayTimelineBasic.UW-ReplayTimelineBasic_C.SetEventMarkersPos
inline void UUW-ReplayTimelineBasic_C::SetEventMarkersPos(enum class Unknow killType, float TotalTime) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ReplayTimelineBasic.UW-ReplayTimelineBasic_C.SetEventMarkersPos");

	struct SetEventMarkersPos_Params {
		enum class Unknow killType;
		float TotalTime;
	}; SetEventMarkersPos_Params Params;

	Params.killType = killType;
	Params.TotalTime = TotalTime;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ReplayTimelineBasic.UW-ReplayTimelineBasic_C.SetTimelineScaleBoxWidth
inline void UUW-ReplayTimelineBasic_C::SetTimelineScaleBoxWidth() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ReplayTimelineBasic.UW-ReplayTimelineBasic_C.SetTimelineScaleBoxWidth");

	struct SetTimelineScaleBoxWidth_Params {
		
	}; SetTimelineScaleBoxWidth_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ReplayTimelineBasic.UW-ReplayTimelineBasic_C.Init
inline void UUW-ReplayTimelineBasic_C::Init() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ReplayTimelineBasic.UW-ReplayTimelineBasic_C.Init");

	struct Init_Params {
		
	}; Init_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ReplayTimelineBasic.UW-ReplayTimelineBasic_C.TogglePauseResumeButton
inline void UUW-ReplayTimelineBasic_C::TogglePauseResumeButton(char PauseResume) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ReplayTimelineBasic.UW-ReplayTimelineBasic_C.TogglePauseResumeButton");

	struct TogglePauseResumeButton_Params {
		char PauseResume;
	}; TogglePauseResumeButton_Params Params;

	Params.PauseResume = PauseResume;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ReplayTimelineBasic.UW-ReplayTimelineBasic_C.BndEvt__BT_ReplayResume_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
inline void UUW-ReplayTimelineBasic_C::BndEvt__BT_ReplayResume_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ReplayTimelineBasic.UW-ReplayTimelineBasic_C.BndEvt__BT_ReplayResume_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	struct BndEvt__BT_ReplayResume_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params {
		
	}; BndEvt__BT_ReplayResume_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ReplayTimelineBasic.UW-ReplayTimelineBasic_C.BndEvt__BT_ReplayPause_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
inline void UUW-ReplayTimelineBasic_C::BndEvt__BT_ReplayPause_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ReplayTimelineBasic.UW-ReplayTimelineBasic_C.BndEvt__BT_ReplayPause_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	struct BndEvt__BT_ReplayPause_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params {
		
	}; BndEvt__BT_ReplayPause_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ReplayTimelineBasic.UW-ReplayTimelineBasic_C.ChangeCameraTypeDelegate_Event_1
inline void UUW-ReplayTimelineBasic_C::ChangeCameraTypeDelegate_Event_1(enum class Unknow CameraType, struct FString TargetPlayerName) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ReplayTimelineBasic.UW-ReplayTimelineBasic_C.ChangeCameraTypeDelegate_Event_1");

	struct ChangeCameraTypeDelegate_Event_1_Params {
		enum class Unknow CameraType;
		struct FString TargetPlayerName;
	}; ChangeCameraTypeDelegate_Event_1_Params Params;

	Params.CameraType = CameraType;
	Params.TargetPlayerName = TargetPlayerName;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ReplayTimelineBasic.UW-ReplayTimelineBasic_C.BndEvt__BT_FreeCam_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
inline void UUW-ReplayTimelineBasic_C::BndEvt__BT_FreeCam_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ReplayTimelineBasic.UW-ReplayTimelineBasic_C.BndEvt__BT_FreeCam_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	struct BndEvt__BT_FreeCam_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params {
		
	}; BndEvt__BT_FreeCam_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ReplayTimelineBasic.UW-ReplayTimelineBasic_C.Tick
inline void UUW-ReplayTimelineBasic_C::Tick(struct Unknown MyGeometry, float InDeltaTime) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ReplayTimelineBasic.UW-ReplayTimelineBasic_C.Tick");

	struct Tick_Params {
		struct Unknown MyGeometry;
		float InDeltaTime;
	}; Tick_Params Params;

	Params.MyGeometry = MyGeometry;
	Params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ReplayTimelineBasic.UW-ReplayTimelineBasic_C.BndEvt__Slider_302_K2Node_ComponentBoundEvent_3_OnFloatValueChangedEvent__DelegateSignature
inline void UUW-ReplayTimelineBasic_C::BndEvt__Slider_302_K2Node_ComponentBoundEvent_3_OnFloatValueChangedEvent__DelegateSignature(float Value) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ReplayTimelineBasic.UW-ReplayTimelineBasic_C.BndEvt__Slider_302_K2Node_ComponentBoundEvent_3_OnFloatValueChangedEvent__DelegateSignature");

	struct BndEvt__Slider_302_K2Node_ComponentBoundEvent_3_OnFloatValueChangedEvent__DelegateSignature_Params {
		float Value;
	}; BndEvt__Slider_302_K2Node_ComponentBoundEvent_3_OnFloatValueChangedEvent__DelegateSignature_Params Params;

	Params.Value = Value;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ReplayTimelineBasic.UW-ReplayTimelineBasic_C.OnReplayJumpCompleteEvent_Event_1
inline void UUW-ReplayTimelineBasic_C::OnReplayJumpCompleteEvent_Event_1(char bSuccess) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ReplayTimelineBasic.UW-ReplayTimelineBasic_C.OnReplayJumpCompleteEvent_Event_1");

	struct OnReplayJumpCompleteEvent_Event_1_Params {
		char bSuccess;
	}; OnReplayJumpCompleteEvent_Event_1_Params Params;

	Params.bSuccess = bSuccess;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ReplayTimelineBasic.UW-ReplayTimelineBasic_C.BPUpdateTimelineScale
inline void UUW-ReplayTimelineBasic_C::BPUpdateTimelineScale() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ReplayTimelineBasic.UW-ReplayTimelineBasic_C.BPUpdateTimelineScale");

	struct BPUpdateTimelineScale_Params {
		
	}; BPUpdateTimelineScale_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ReplayTimelineBasic.UW-ReplayTimelineBasic_C.BndEvt__BT_TimelineScaleDown_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
inline void UUW-ReplayTimelineBasic_C::BndEvt__BT_TimelineScaleDown_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ReplayTimelineBasic.UW-ReplayTimelineBasic_C.BndEvt__BT_TimelineScaleDown_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");

	struct BndEvt__BT_TimelineScaleDown_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params {
		
	}; BndEvt__BT_TimelineScaleDown_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ReplayTimelineBasic.UW-ReplayTimelineBasic_C.BndEvt__BT_TimelineScaleUp_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
inline void UUW-ReplayTimelineBasic_C::BndEvt__BT_TimelineScaleUp_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ReplayTimelineBasic.UW-ReplayTimelineBasic_C.BndEvt__BT_TimelineScaleUp_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature");

	struct BndEvt__BT_TimelineScaleUp_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params {
		
	}; BndEvt__BT_TimelineScaleUp_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ReplayTimelineBasic.UW-ReplayTimelineBasic_C.BndEvt__Chk_ShowKill_K2Node_ComponentBoundEvent_6_OnCheckBoxComponentStateChanged__DelegateSignature
inline void UUW-ReplayTimelineBasic_C::BndEvt__Chk_ShowKill_K2Node_ComponentBoundEvent_6_OnCheckBoxComponentStateChanged__DelegateSignature(char bIsChecked) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ReplayTimelineBasic.UW-ReplayTimelineBasic_C.BndEvt__Chk_ShowKill_K2Node_ComponentBoundEvent_6_OnCheckBoxComponentStateChanged__DelegateSignature");

	struct BndEvt__Chk_ShowKill_K2Node_ComponentBoundEvent_6_OnCheckBoxComponentStateChanged__DelegateSignature_Params {
		char bIsChecked;
	}; BndEvt__Chk_ShowKill_K2Node_ComponentBoundEvent_6_OnCheckBoxComponentStateChanged__DelegateSignature_Params Params;

	Params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ReplayTimelineBasic.UW-ReplayTimelineBasic_C.BndEvt__Chk_ShowKnockout_K2Node_ComponentBoundEvent_7_OnCheckBoxComponentStateChanged__DelegateSignature
inline void UUW-ReplayTimelineBasic_C::BndEvt__Chk_ShowKnockout_K2Node_ComponentBoundEvent_7_OnCheckBoxComponentStateChanged__DelegateSignature(char bIsChecked) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ReplayTimelineBasic.UW-ReplayTimelineBasic_C.BndEvt__Chk_ShowKnockout_K2Node_ComponentBoundEvent_7_OnCheckBoxComponentStateChanged__DelegateSignature");

	struct BndEvt__Chk_ShowKnockout_K2Node_ComponentBoundEvent_7_OnCheckBoxComponentStateChanged__DelegateSignature_Params {
		char bIsChecked;
	}; BndEvt__Chk_ShowKnockout_K2Node_ComponentBoundEvent_7_OnCheckBoxComponentStateChanged__DelegateSignature_Params Params;

	Params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ReplayTimelineBasic.UW-ReplayTimelineBasic_C.BndEvt__BT_SpeedDown_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature
inline void UUW-ReplayTimelineBasic_C::BndEvt__BT_SpeedDown_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ReplayTimelineBasic.UW-ReplayTimelineBasic_C.BndEvt__BT_SpeedDown_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature");

	struct BndEvt__BT_SpeedDown_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature_Params {
		
	}; BndEvt__BT_SpeedDown_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ReplayTimelineBasic.UW-ReplayTimelineBasic_C.BndEvt__BT_SpeedUp_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature
inline void UUW-ReplayTimelineBasic_C::BndEvt__BT_SpeedUp_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ReplayTimelineBasic.UW-ReplayTimelineBasic_C.BndEvt__BT_SpeedUp_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature");

	struct BndEvt__BT_SpeedUp_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature_Params {
		
	}; BndEvt__BT_SpeedUp_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ReplayTimelineBasic.UW-ReplayTimelineBasic_C.BndEvt__ScrollBox_Timeline_K2Node_ComponentBoundEvent_11_OnUserScrolledEvent__DelegateSignature
inline void UUW-ReplayTimelineBasic_C::BndEvt__ScrollBox_Timeline_K2Node_ComponentBoundEvent_11_OnUserScrolledEvent__DelegateSignature(float CurrentOffset) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ReplayTimelineBasic.UW-ReplayTimelineBasic_C.BndEvt__ScrollBox_Timeline_K2Node_ComponentBoundEvent_11_OnUserScrolledEvent__DelegateSignature");

	struct BndEvt__ScrollBox_Timeline_K2Node_ComponentBoundEvent_11_OnUserScrolledEvent__DelegateSignature_Params {
		float CurrentOffset;
	}; BndEvt__ScrollBox_Timeline_K2Node_ComponentBoundEvent_11_OnUserScrolledEvent__DelegateSignature_Params Params;

	Params.CurrentOffset = CurrentOffset;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ReplayTimelineBasic.UW-ReplayTimelineBasic_C.BPUpdateKillEventMarkersPos
inline void UUW-ReplayTimelineBasic_C::BPUpdateKillEventMarkersPos(enum class Unknow killType, float TotalTime) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ReplayTimelineBasic.UW-ReplayTimelineBasic_C.BPUpdateKillEventMarkersPos");

	struct BPUpdateKillEventMarkersPos_Params {
		enum class Unknow killType;
		float TotalTime;
	}; BPUpdateKillEventMarkersPos_Params Params;

	Params.killType = killType;
	Params.TotalTime = TotalTime;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ReplayTimelineBasic.UW-ReplayTimelineBasic_C.OnReplayPauseEvent_Event_1
inline void UUW-ReplayTimelineBasic_C::OnReplayPauseEvent_Event_1(char bPaused) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ReplayTimelineBasic.UW-ReplayTimelineBasic_C.OnReplayPauseEvent_Event_1");

	struct OnReplayPauseEvent_Event_1_Params {
		char bPaused;
	}; OnReplayPauseEvent_Event_1_Params Params;

	Params.bPaused = bPaused;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ReplayTimelineBasic.UW-ReplayTimelineBasic_C.Construct
inline void UUW-ReplayTimelineBasic_C::Construct() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ReplayTimelineBasic.UW-ReplayTimelineBasic_C.Construct");

	struct Construct_Params {
		
	}; Construct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ReplayTimelineBasic.UW-ReplayTimelineBasic_C.BndEvt__ReplayTimelineSlider_K2Node_ComponentBoundEvent_12_OnMouseCaptureEndEvent__DelegateSignature
inline void UUW-ReplayTimelineBasic_C::BndEvt__ReplayTimelineSlider_K2Node_ComponentBoundEvent_12_OnMouseCaptureEndEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ReplayTimelineBasic.UW-ReplayTimelineBasic_C.BndEvt__ReplayTimelineSlider_K2Node_ComponentBoundEvent_12_OnMouseCaptureEndEvent__DelegateSignature");

	struct BndEvt__ReplayTimelineSlider_K2Node_ComponentBoundEvent_12_OnMouseCaptureEndEvent__DelegateSignature_Params {
		
	}; BndEvt__ReplayTimelineSlider_K2Node_ComponentBoundEvent_12_OnMouseCaptureEndEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ReplayTimelineBasic.UW-ReplayTimelineBasic_C.BndEvt__Chk_ShowMyKill_K2Node_ComponentBoundEvent_15_OnCheckBoxComponentStateChanged__DelegateSignature
inline void UUW-ReplayTimelineBasic_C::BndEvt__Chk_ShowMyKill_K2Node_ComponentBoundEvent_15_OnCheckBoxComponentStateChanged__DelegateSignature(char bIsChecked) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ReplayTimelineBasic.UW-ReplayTimelineBasic_C.BndEvt__Chk_ShowMyKill_K2Node_ComponentBoundEvent_15_OnCheckBoxComponentStateChanged__DelegateSignature");

	struct BndEvt__Chk_ShowMyKill_K2Node_ComponentBoundEvent_15_OnCheckBoxComponentStateChanged__DelegateSignature_Params {
		char bIsChecked;
	}; BndEvt__Chk_ShowMyKill_K2Node_ComponentBoundEvent_15_OnCheckBoxComponentStateChanged__DelegateSignature_Params Params;

	Params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ReplayTimelineBasic.UW-ReplayTimelineBasic_C.BndEvt__Chk_ShowMyKnockout_K2Node_ComponentBoundEvent_16_OnCheckBoxComponentStateChanged__DelegateSignature
inline void UUW-ReplayTimelineBasic_C::BndEvt__Chk_ShowMyKnockout_K2Node_ComponentBoundEvent_16_OnCheckBoxComponentStateChanged__DelegateSignature(char bIsChecked) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ReplayTimelineBasic.UW-ReplayTimelineBasic_C.BndEvt__Chk_ShowMyKnockout_K2Node_ComponentBoundEvent_16_OnCheckBoxComponentStateChanged__DelegateSignature");

	struct BndEvt__Chk_ShowMyKnockout_K2Node_ComponentBoundEvent_16_OnCheckBoxComponentStateChanged__DelegateSignature_Params {
		char bIsChecked;
	}; BndEvt__Chk_ShowMyKnockout_K2Node_ComponentBoundEvent_16_OnCheckBoxComponentStateChanged__DelegateSignature_Params Params;

	Params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ReplayTimelineBasic.UW-ReplayTimelineBasic_C.BndEvt__Chk_ShowMyResuscitated_K2Node_ComponentBoundEvent_17_OnCheckBoxComponentStateChanged__DelegateSignature
inline void UUW-ReplayTimelineBasic_C::BndEvt__Chk_ShowMyResuscitated_K2Node_ComponentBoundEvent_17_OnCheckBoxComponentStateChanged__DelegateSignature(char bIsChecked) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ReplayTimelineBasic.UW-ReplayTimelineBasic_C.BndEvt__Chk_ShowMyResuscitated_K2Node_ComponentBoundEvent_17_OnCheckBoxComponentStateChanged__DelegateSignature");

	struct BndEvt__Chk_ShowMyResuscitated_K2Node_ComponentBoundEvent_17_OnCheckBoxComponentStateChanged__DelegateSignature_Params {
		char bIsChecked;
	}; BndEvt__Chk_ShowMyResuscitated_K2Node_ComponentBoundEvent_17_OnCheckBoxComponentStateChanged__DelegateSignature_Params Params;

	Params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ReplayTimelineBasic.UW-ReplayTimelineBasic_C.BndEvt__Chk_ShowResuscitated_K2Node_ComponentBoundEvent_18_OnCheckBoxComponentStateChanged__DelegateSignature
inline void UUW-ReplayTimelineBasic_C::BndEvt__Chk_ShowResuscitated_K2Node_ComponentBoundEvent_18_OnCheckBoxComponentStateChanged__DelegateSignature(char bIsChecked) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ReplayTimelineBasic.UW-ReplayTimelineBasic_C.BndEvt__Chk_ShowResuscitated_K2Node_ComponentBoundEvent_18_OnCheckBoxComponentStateChanged__DelegateSignature");

	struct BndEvt__Chk_ShowResuscitated_K2Node_ComponentBoundEvent_18_OnCheckBoxComponentStateChanged__DelegateSignature_Params {
		char bIsChecked;
	}; BndEvt__Chk_ShowResuscitated_K2Node_ComponentBoundEvent_18_OnCheckBoxComponentStateChanged__DelegateSignature_Params Params;

	Params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ReplayTimelineBasic.UW-ReplayTimelineBasic_C.ChangeViewModeDelegate_Event_1
inline void UUW-ReplayTimelineBasic_C::ChangeViewModeDelegate_Event_1(char ViewMode) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ReplayTimelineBasic.UW-ReplayTimelineBasic_C.ChangeViewModeDelegate_Event_1");

	struct ChangeViewModeDelegate_Event_1_Params {
		char ViewMode;
	}; ChangeViewModeDelegate_Event_1_Params Params;

	Params.ViewMode = ViewMode;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ReplayTimelineBasic.UW-ReplayTimelineBasic_C.ExecuteUbergraph_UW-ReplayTimelineBasic
inline void UUW-ReplayTimelineBasic_C::ExecuteUbergraph_UW-ReplayTimelineBasic(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ReplayTimelineBasic.UW-ReplayTimelineBasic_C.ExecuteUbergraph_UW-ReplayTimelineBasic");

	struct ExecuteUbergraph_UW-ReplayTimelineBasic_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_UW-ReplayTimelineBasic_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

