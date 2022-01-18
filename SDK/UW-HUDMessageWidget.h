// WidgetBlueprintGeneratedClass UW-HUDMessageWidget.UW-HUDMessageWidget_C
class UUW-HUDMessageWidget_C : public UBravoHotelBroadcastingWidget {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x258 (8)
	struct UWidgetAnimation Anim_9WarningMessage; // 0x260 (8)
	struct UWidgetAnimation Anim_10SupplyMessage; // 0x268 (8)
	struct UWidgetAnimation Anim_8LevelUpMessage; // 0x270 (8)
	struct UWidgetAnimation Anim_4GameStartMessage; // 0x278 (8)
	struct UWidgetAnimation Anim_27Revival; // 0x280 (8)
	struct UWidgetAnimation Anim_TeamKillWarning; // 0x288 (8)
	struct UCanvasPanel 0BlueZoneDesc; // 0x290 (8)
	struct UCanvasPanel 10SupplyMessage; // 0x298 (8)
	struct UCanvasPanel 11BroadcastMessage; // 0x2A0 (8)
	struct UCanvasPanel 12TeamKillWarning; // 0x2A8 (8)
	struct UCanvasPanel 13ActionDescription; // 0x2B0 (8)
	struct UCanvasPanel 14Action; // 0x2B8 (8)
	struct UCanvasPanel 15CastingMessage; // 0x2C0 (8)
	struct UCanvasPanel 16CastingCount; // 0x2C8 (8)
	struct UCanvasPanel 17CastingCancelInfo; // 0x2D0 (8)
	struct UCanvasPanel 18ActionMessage; // 0x2D8 (8)
	struct UCanvasPanel 19CoreInfo; // 0x2E0 (8)
	struct UCanvasPanel 1BlueZoneName; // 0x2E8 (8)
	struct UCanvasPanel 20ZeroingDistance; // 0x2F0 (8)
	struct UCanvasPanel 21PlayerReportInfo; // 0x2F8 (8)
	struct UCanvasPanel 22SpectatorCount; // 0x300 (8)
	struct UCanvasPanel 23PlayerInfo; // 0x308 (8)
	struct UCanvasPanel 24RoundOverInfo; // 0x310 (8)
	struct UCanvasPanel 25RoundOver; // 0x318 (8)
	struct UCanvasPanel 26GuideWidget; // 0x320 (8)
	struct UCanvasPanel 27Revival; // 0x328 (8)
	struct UCanvasPanel 28RequestMessageInfo_2; // 0x330 (8)
	struct UCanvasPanel 29EndResuscitated; // 0x338 (8)
	struct UCanvasPanel 2GameCountDown; // 0x340 (8)
	struct UCanvasPanel 30ItemCancelMessage; // 0x348 (8)
	struct UCanvasPanel 3GameCountDownNum; // 0x350 (8)
	struct UCanvasPanel 4GameStartMessage; // 0x358 (8)
	struct UCanvasPanel 5ChangeClassInfo; // 0x360 (8)
	struct UCanvasPanel 6KillMessage; // 0x368 (8)
	struct UCanvasPanel 7KillCount; // 0x370 (8)
	struct UCanvasPanel 8LevelUpMessage; // 0x378 (8)
	struct UCanvasPanel 9WarningMessage; // 0x380 (8)
	struct UCanvasPanel HUDList; // 0x388 (8)
	struct UImage Image; // 0x390 (8)
	struct UImage Image_1; // 0x398 (8)
	struct UImage Image_2; // 0x3A0 (8)
	struct UImage Image_4; // 0x3A8 (8)
	struct UImage Image_5; // 0x3B0 (8)
	struct UImage Image_8; // 0x3B8 (8)
	struct UImage Image_248; // 0x3C0 (8)
	struct URichTextBlock RichT_ResustingOwnerName; // 0x3C8 (8)
	struct URichTextBlock ShowMessage<Red18>Free<>; // 0x3D0 (8)
	struct UUW-GuideWidget_C UW-GuideWidget; // 0x3D8 (8)
	struct UUW-ListWidget_C UW-ListWidget_CoreInfo; // 0x3E0 (8)
	struct UUW-ListWidget_C UW-ListWidget_MyKillMessage; // 0x3E8 (8)
	struct UUW-ListWidget_C UW-ListWidget_Request; // 0x3F0 (8)
	struct UUW-MyKillCountMessageWidget_C UW-MyKillCountMessageWidget; // 0x3F8 (8)
	struct UUW-Timer_C UW-Timer; // 0x400 (8)
	struct TMap<enum class EHUDMessageType, int32_t> LastPriority; // 0x408 (80)
	struct TArray<struct UPanelWidget> ShowAnimList; // 0x458 (16)
	struct TArray<struct UPanelWidget> HideAnimList; // 0x468 (16)
	float ShowAnimTime; // 0x478 (4)
	float HideAnimTime; // 0x47C (4)
	struct TMap<struct UPanelWidget, float> TimerList; // 0x480 (80)
	int32_t TeamKillWarningAnimLoopNum; // 0x4D0 (4)
	struct FText CheatMessage; // 0x4D8 (24)

	void GetMyKillCountMessageWidget(struct UUW-MyKillCountMessageWidget_C& KillCountWidget); // Function UW-HUDMessageWidget.UW-HUDMessageWidget_C.GetMyKillCountMessageWidget(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void ShowCustomAnim(struct UPanelWidget PanelWidget, struct UWidgetAnimation CustomAnim); // Function UW-HUDMessageWidget.UW-HUDMessageWidget_C.ShowCustomAnim(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void ShowResuscitatingWidget(); // Function UW-HUDMessageWidget.UW-HUDMessageWidget_C.ShowResuscitatingWidget(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void Get Request Message Widget(struct UUW-ListWidget_C& Result); // Function UW-HUDMessageWidget.UW-HUDMessageWidget_C.Get Request Message Widget(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void AddCoreInfoWidget(struct FText Message); // Function UW-HUDMessageWidget.UW-HUDMessageWidget_C.AddCoreInfoWidget(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void GetCoreInfoWidget(struct UUW-ListWidget_C& CoreInfoWidget); // Function UW-HUDMessageWidget.UW-HUDMessageWidget_C.GetCoreInfoWidget(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void ShowGuideWidget(struct FText Message); // Function UW-HUDMessageWidget.UW-HUDMessageWidget_C.ShowGuideWidget(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void PlayTeamKillWarningAnim(); // Function UW-HUDMessageWidget.UW-HUDMessageWidget_C.PlayTeamKillWarningAnim(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void ResetPriority(enum class EHUDMessageType MessageType, struct UPanelWidget PanelWidget); // Function UW-HUDMessageWidget.UW-HUDMessageWidget_C.ResetPriority(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void AddToTimerList(struct UPanelWidget Panel, float Time); // Function UW-HUDMessageWidget.UW-HUDMessageWidget_C.AddToTimerList(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void CalcTimerCount(float DeltaTime); // Function UW-HUDMessageWidget.UW-HUDMessageWidget_C.CalcTimerCount(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void PlayHideAnim(float DeltaTime); // Function UW-HUDMessageWidget.UW-HUDMessageWidget_C.PlayHideAnim(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void PlayShowAnim(float DeltaTime); // Function UW-HUDMessageWidget.UW-HUDMessageWidget_C.PlayShowAnim(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void HideDefaultAnim(struct UPanelWidget PanelWidget); // Function UW-HUDMessageWidget.UW-HUDMessageWidget_C.HideDefaultAnim(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void ShowDefaultAnim(struct UPanelWidget PanelWidget); // Function UW-HUDMessageWidget.UW-HUDMessageWidget_C.ShowDefaultAnim(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void SetMessageText(struct UPanelWidget PanelWidget, struct FText Message); // Function UW-HUDMessageWidget.UW-HUDMessageWidget_C.SetMessageText(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void CheckPriority(enum class EHUDMessageType MessageType, int32_t Priority, char& CanMessage); // Function UW-HUDMessageWidget.UW-HUDMessageWidget_C.CheckPriority(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void GetPanelWidget(enum class EHUDMessageType MessageType, struct UPanelWidget& PanelWidget); // Function UW-HUDMessageWidget.UW-HUDMessageWidget_C.GetPanelWidget(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void HideHUDMessage(enum class EHUDMessageType MessageType); // Function UW-HUDMessageWidget.UW-HUDMessageWidget_C.HideHUDMessage(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void ShowHUDMessage(struct FBravoHotelHUDMessageRow MessageRow); // Function UW-HUDMessageWidget.UW-HUDMessageWidget_C.ShowHUDMessage(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UW-HUDMessageWidget.UW-HUDMessageWidget_C.Tick(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void OnAnimationFinished(struct UWidgetAnimation Animation); // Function UW-HUDMessageWidget.UW-HUDMessageWidget_C.OnAnimationFinished(BlueprintCosmetic|Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void ShowHUDMessageAtNum(enum class EHUDMessageType MessageType); // Function UW-HUDMessageWidget.UW-HUDMessageWidget_C.ShowHUDMessageAtNum(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void Construct(); // Function UW-HUDMessageWidget.UW-HUDMessageWidget_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void OnGameUserSettingsApply_GamePlay_Event_1(struct TArray<enum class ESettingType>& List); // Function UW-HUDMessageWidget.UW-HUDMessageWidget_C.OnGameUserSettingsApply_GamePlay_Event_1(HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void ExecuteUbergraph_UW-HUDMessageWidget(int32_t EntryPoint); // Function UW-HUDMessageWidget.UW-HUDMessageWidget_C.ExecuteUbergraph_UW-HUDMessageWidget(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
};

// Function UW-HUDMessageWidget.UW-HUDMessageWidget_C.GetMyKillCountMessageWidget
inline void UUW-HUDMessageWidget_C::GetMyKillCountMessageWidget(struct UUW-MyKillCountMessageWidget_C& KillCountWidget) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-HUDMessageWidget.UW-HUDMessageWidget_C.GetMyKillCountMessageWidget");

	struct GetMyKillCountMessageWidget_Params {
		struct UUW-MyKillCountMessageWidget_C& KillCountWidget;
	}; GetMyKillCountMessageWidget_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	KillCountWidget = Params.KillCountWidget;

}

// Function UW-HUDMessageWidget.UW-HUDMessageWidget_C.ShowCustomAnim
inline void UUW-HUDMessageWidget_C::ShowCustomAnim(struct UPanelWidget PanelWidget, struct UWidgetAnimation CustomAnim) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-HUDMessageWidget.UW-HUDMessageWidget_C.ShowCustomAnim");

	struct ShowCustomAnim_Params {
		struct UPanelWidget PanelWidget;
		struct UWidgetAnimation CustomAnim;
	}; ShowCustomAnim_Params Params;

	Params.PanelWidget = PanelWidget;
	Params.CustomAnim = CustomAnim;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-HUDMessageWidget.UW-HUDMessageWidget_C.ShowResuscitatingWidget
inline void UUW-HUDMessageWidget_C::ShowResuscitatingWidget() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-HUDMessageWidget.UW-HUDMessageWidget_C.ShowResuscitatingWidget");

	struct ShowResuscitatingWidget_Params {
		
	}; ShowResuscitatingWidget_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-HUDMessageWidget.UW-HUDMessageWidget_C.Get Request Message Widget
inline void UUW-HUDMessageWidget_C::Get Request Message Widget(struct UUW-ListWidget_C& Result) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-HUDMessageWidget.UW-HUDMessageWidget_C.Get Request Message Widget");

	struct Get Request Message Widget_Params {
		struct UUW-ListWidget_C& Result;
	}; Get Request Message Widget_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Result = Params.Result;

}

// Function UW-HUDMessageWidget.UW-HUDMessageWidget_C.AddCoreInfoWidget
inline void UUW-HUDMessageWidget_C::AddCoreInfoWidget(struct FText Message) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-HUDMessageWidget.UW-HUDMessageWidget_C.AddCoreInfoWidget");

	struct AddCoreInfoWidget_Params {
		struct FText Message;
	}; AddCoreInfoWidget_Params Params;

	Params.Message = Message;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-HUDMessageWidget.UW-HUDMessageWidget_C.GetCoreInfoWidget
inline void UUW-HUDMessageWidget_C::GetCoreInfoWidget(struct UUW-ListWidget_C& CoreInfoWidget) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-HUDMessageWidget.UW-HUDMessageWidget_C.GetCoreInfoWidget");

	struct GetCoreInfoWidget_Params {
		struct UUW-ListWidget_C& CoreInfoWidget;
	}; GetCoreInfoWidget_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	CoreInfoWidget = Params.CoreInfoWidget;

}

// Function UW-HUDMessageWidget.UW-HUDMessageWidget_C.ShowGuideWidget
inline void UUW-HUDMessageWidget_C::ShowGuideWidget(struct FText Message) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-HUDMessageWidget.UW-HUDMessageWidget_C.ShowGuideWidget");

	struct ShowGuideWidget_Params {
		struct FText Message;
	}; ShowGuideWidget_Params Params;

	Params.Message = Message;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-HUDMessageWidget.UW-HUDMessageWidget_C.PlayTeamKillWarningAnim
inline void UUW-HUDMessageWidget_C::PlayTeamKillWarningAnim() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-HUDMessageWidget.UW-HUDMessageWidget_C.PlayTeamKillWarningAnim");

	struct PlayTeamKillWarningAnim_Params {
		
	}; PlayTeamKillWarningAnim_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-HUDMessageWidget.UW-HUDMessageWidget_C.ResetPriority
inline void UUW-HUDMessageWidget_C::ResetPriority(enum class EHUDMessageType MessageType, struct UPanelWidget PanelWidget) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-HUDMessageWidget.UW-HUDMessageWidget_C.ResetPriority");

	struct ResetPriority_Params {
		enum class EHUDMessageType MessageType;
		struct UPanelWidget PanelWidget;
	}; ResetPriority_Params Params;

	Params.MessageType = MessageType;
	Params.PanelWidget = PanelWidget;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-HUDMessageWidget.UW-HUDMessageWidget_C.AddToTimerList
inline void UUW-HUDMessageWidget_C::AddToTimerList(struct UPanelWidget Panel, float Time) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-HUDMessageWidget.UW-HUDMessageWidget_C.AddToTimerList");

	struct AddToTimerList_Params {
		struct UPanelWidget Panel;
		float Time;
	}; AddToTimerList_Params Params;

	Params.Panel = Panel;
	Params.Time = Time;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-HUDMessageWidget.UW-HUDMessageWidget_C.CalcTimerCount
inline void UUW-HUDMessageWidget_C::CalcTimerCount(float DeltaTime) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-HUDMessageWidget.UW-HUDMessageWidget_C.CalcTimerCount");

	struct CalcTimerCount_Params {
		float DeltaTime;
	}; CalcTimerCount_Params Params;

	Params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-HUDMessageWidget.UW-HUDMessageWidget_C.PlayHideAnim
inline void UUW-HUDMessageWidget_C::PlayHideAnim(float DeltaTime) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-HUDMessageWidget.UW-HUDMessageWidget_C.PlayHideAnim");

	struct PlayHideAnim_Params {
		float DeltaTime;
	}; PlayHideAnim_Params Params;

	Params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-HUDMessageWidget.UW-HUDMessageWidget_C.PlayShowAnim
inline void UUW-HUDMessageWidget_C::PlayShowAnim(float DeltaTime) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-HUDMessageWidget.UW-HUDMessageWidget_C.PlayShowAnim");

	struct PlayShowAnim_Params {
		float DeltaTime;
	}; PlayShowAnim_Params Params;

	Params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-HUDMessageWidget.UW-HUDMessageWidget_C.HideDefaultAnim
inline void UUW-HUDMessageWidget_C::HideDefaultAnim(struct UPanelWidget PanelWidget) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-HUDMessageWidget.UW-HUDMessageWidget_C.HideDefaultAnim");

	struct HideDefaultAnim_Params {
		struct UPanelWidget PanelWidget;
	}; HideDefaultAnim_Params Params;

	Params.PanelWidget = PanelWidget;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-HUDMessageWidget.UW-HUDMessageWidget_C.ShowDefaultAnim
inline void UUW-HUDMessageWidget_C::ShowDefaultAnim(struct UPanelWidget PanelWidget) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-HUDMessageWidget.UW-HUDMessageWidget_C.ShowDefaultAnim");

	struct ShowDefaultAnim_Params {
		struct UPanelWidget PanelWidget;
	}; ShowDefaultAnim_Params Params;

	Params.PanelWidget = PanelWidget;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-HUDMessageWidget.UW-HUDMessageWidget_C.SetMessageText
inline void UUW-HUDMessageWidget_C::SetMessageText(struct UPanelWidget PanelWidget, struct FText Message) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-HUDMessageWidget.UW-HUDMessageWidget_C.SetMessageText");

	struct SetMessageText_Params {
		struct UPanelWidget PanelWidget;
		struct FText Message;
	}; SetMessageText_Params Params;

	Params.PanelWidget = PanelWidget;
	Params.Message = Message;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-HUDMessageWidget.UW-HUDMessageWidget_C.CheckPriority
inline void UUW-HUDMessageWidget_C::CheckPriority(enum class EHUDMessageType MessageType, int32_t Priority, char& CanMessage) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-HUDMessageWidget.UW-HUDMessageWidget_C.CheckPriority");

	struct CheckPriority_Params {
		enum class EHUDMessageType MessageType;
		int32_t Priority;
		char& CanMessage;
	}; CheckPriority_Params Params;

	Params.MessageType = MessageType;
	Params.Priority = Priority;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	CanMessage = Params.CanMessage;

}

// Function UW-HUDMessageWidget.UW-HUDMessageWidget_C.GetPanelWidget
inline void UUW-HUDMessageWidget_C::GetPanelWidget(enum class EHUDMessageType MessageType, struct UPanelWidget& PanelWidget) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-HUDMessageWidget.UW-HUDMessageWidget_C.GetPanelWidget");

	struct GetPanelWidget_Params {
		enum class EHUDMessageType MessageType;
		struct UPanelWidget& PanelWidget;
	}; GetPanelWidget_Params Params;

	Params.MessageType = MessageType;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	PanelWidget = Params.PanelWidget;

}

// Function UW-HUDMessageWidget.UW-HUDMessageWidget_C.HideHUDMessage
inline void UUW-HUDMessageWidget_C::HideHUDMessage(enum class EHUDMessageType MessageType) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-HUDMessageWidget.UW-HUDMessageWidget_C.HideHUDMessage");

	struct HideHUDMessage_Params {
		enum class EHUDMessageType MessageType;
	}; HideHUDMessage_Params Params;

	Params.MessageType = MessageType;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-HUDMessageWidget.UW-HUDMessageWidget_C.ShowHUDMessage
inline void UUW-HUDMessageWidget_C::ShowHUDMessage(struct FBravoHotelHUDMessageRow MessageRow) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-HUDMessageWidget.UW-HUDMessageWidget_C.ShowHUDMessage");

	struct ShowHUDMessage_Params {
		struct FBravoHotelHUDMessageRow MessageRow;
	}; ShowHUDMessage_Params Params;

	Params.MessageRow = MessageRow;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-HUDMessageWidget.UW-HUDMessageWidget_C.Tick
inline void UUW-HUDMessageWidget_C::Tick(struct FGeometry MyGeometry, float InDeltaTime) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-HUDMessageWidget.UW-HUDMessageWidget_C.Tick");

	struct Tick_Params {
		struct FGeometry MyGeometry;
		float InDeltaTime;
	}; Tick_Params Params;

	Params.MyGeometry = MyGeometry;
	Params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-HUDMessageWidget.UW-HUDMessageWidget_C.OnAnimationFinished
inline void UUW-HUDMessageWidget_C::OnAnimationFinished(struct UWidgetAnimation Animation) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-HUDMessageWidget.UW-HUDMessageWidget_C.OnAnimationFinished");

	struct OnAnimationFinished_Params {
		struct UWidgetAnimation Animation;
	}; OnAnimationFinished_Params Params;

	Params.Animation = Animation;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-HUDMessageWidget.UW-HUDMessageWidget_C.ShowHUDMessageAtNum
inline void UUW-HUDMessageWidget_C::ShowHUDMessageAtNum(enum class EHUDMessageType MessageType) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-HUDMessageWidget.UW-HUDMessageWidget_C.ShowHUDMessageAtNum");

	struct ShowHUDMessageAtNum_Params {
		enum class EHUDMessageType MessageType;
	}; ShowHUDMessageAtNum_Params Params;

	Params.MessageType = MessageType;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-HUDMessageWidget.UW-HUDMessageWidget_C.Construct
inline void UUW-HUDMessageWidget_C::Construct() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-HUDMessageWidget.UW-HUDMessageWidget_C.Construct");

	struct Construct_Params {
		
	}; Construct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-HUDMessageWidget.UW-HUDMessageWidget_C.OnGameUserSettingsApply_GamePlay_Event_1
inline void UUW-HUDMessageWidget_C::OnGameUserSettingsApply_GamePlay_Event_1(struct TArray<enum class ESettingType>& List) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-HUDMessageWidget.UW-HUDMessageWidget_C.OnGameUserSettingsApply_GamePlay_Event_1");

	struct OnGameUserSettingsApply_GamePlay_Event_1_Params {
		struct TArray<enum class ESettingType>& List;
	}; OnGameUserSettingsApply_GamePlay_Event_1_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	List = Params.List;

}

// Function UW-HUDMessageWidget.UW-HUDMessageWidget_C.ExecuteUbergraph_UW-HUDMessageWidget
inline void UUW-HUDMessageWidget_C::ExecuteUbergraph_UW-HUDMessageWidget(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-HUDMessageWidget.UW-HUDMessageWidget_C.ExecuteUbergraph_UW-HUDMessageWidget");

	struct ExecuteUbergraph_UW-HUDMessageWidget_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_UW-HUDMessageWidget_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

