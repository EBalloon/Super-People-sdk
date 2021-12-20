// Enum MK3DReplayBasic.EPlayerListSortMethod
enum class EPlayerListSortMethod : uint8 {
	EPlayerListSortMethod = 0,
	EPlayerListSortMethod = 1,
	EPlayerListSortMethod = 2,
	EPlayerListSortMethod = 3,
	EPlayerListSortMethod = 4
};

// Class MK3DReplayBasic.MK3DUserInterfaceManager
struct AMK3DUserInterfaceManager : UActor {
	Unknown WidgetInfoArray; //  0x310 Size(10)
	Unknown ReplayWidgetMap; //  0x320 Size(50)

	Unknown Get(); // Function MK3DReplayBasic.MK3DUserInterfaceManager.Get(Final|Native|Static|Public|BlueprintCallable) // <Game+0x1366da0>
};

// Class MK3DReplayBasic.NativePlayerListItem
struct UNativePlayerListItem : UUserWidget {
	Unknown Button_PlayerName; //  0x248 Size(8)
	Unknown Text_PlayerName; //  0x250 Size(8)

	void OnClickPlayerNameButton(); // Function MK3DReplayBasic.NativePlayerListItem.OnClickPlayerNameButton(Final|Native|Public) // <Game+0x1367240>
};

// Class MK3DReplayBasic.NativePlayerListWidget
struct UNativePlayerListWidget : UUserWidget {
	Unknown SortMethodTextBlock; //  0x248 Size(8)
	Unknown PlayerListPrevButton; //  0x250 Size(8)
	Unknown PlayerListNextButton; //  0x258 Size(8)
	Unknown ScrollBox_PlayerName; //  0x260 Size(8)

	void ShowPlayerList(); // Function MK3DReplayBasic.NativePlayerListWidget.ShowPlayerList(Final|Native|Public|BlueprintCallable) // <Game+0x1368fc0>
};

// Class MK3DReplayBasic.NativeReplayEventMarkerBasic
struct UNativeReplayEventMarkerBasic : UUserWidget {
	Unknown EventBorder; //  0x248 Size(8)
	Unknown VisualBorder; //  0x250 Size(8)
	Unknown EventInform; //  0x258 Size(8)

	Unknown OnMouseMoveEventBorder(Unknown MyGeometry, Unknown& MouseEvent); // Function MK3DReplayBasic.NativeReplayEventMarkerBasic.OnMouseMoveEventBorder(Native|Public|HasOutParms) // <Game+0x1368120>
};

// Class MK3DReplayBasic.NativeReplayKillEventMarker
struct UNativeReplayKillEventMarker : UNativeReplayEventMarkerBasic {
	Unknown KillEvent; //  0x270 Size(30)
	float ClickToJumpDeltaSec; //  0x2a8 Size(4)

	void SetKillEvent(Unknown& InKillEvent); // Function MK3DReplayBasic.NativeReplayKillEventMarker.SetKillEvent(Final|Native|Public|HasOutParms|BlueprintCallable) // <Game+0x1368ce0>
};

// Class MK3DReplayBasic.NativeReplayListItem
struct UNativeReplayListItem : UUserWidget {
	Unknown ReplayListItemBtn; //  0x248 Size(8)
	Unknown TextName; //  0x250 Size(8)
	Unknown TextLive; //  0x258 Size(8)
	Unknown TextTime; //  0x260 Size(8)
	struct FMulticastInlineDelegate OnSelectedReplayListItemEvent; //  0x278 Size(10)

	void SetReplayListItemText(struct FString Name, char IsLive, Unknown Time); // Function MK3DReplayBasic.NativeReplayListItem.SetReplayListItemText(Final|Native|Public|HasDefaults|BlueprintCallable) // <Game+0x1368dc0>
};

// Class MK3DReplayBasic.NativeReplayListLev
struct ANativeReplayListLev : ALevelScriptActor {
	Unknown ReplayListWidget; //  0x318 Size(8)
	Unknown ReplayListWidgetClass; //  0x320 Size(8)

	void ShowMouseCursor(); // Function MK3DReplayBasic.NativeReplayListLev.ShowMouseCursor(Final|Native|Protected) // <Game+0x1368fa0>
};

// Class MK3DReplayBasic.NativeReplayListWidget
struct UNativeReplayListWidget : UUserWidget {
	Unknown PageSizeTB; //  0x248 Size(8)
	Unknown CurrentPageTB; //  0x250 Size(8)
	Unknown ScrollBoxReplayList; //  0x258 Size(8)
	Unknown RefreshBtn; //  0x260 Size(8)
	Unknown PrevBtn; //  0x268 Size(8)
	Unknown NextBtn; //  0x270 Size(8)
	Unknown TotalReplaysTB; //  0x278 Size(8)
	Unknown TotalPageText; //  0x280 Size(8)
	Unknown ReplayItemInform; //  0x288 Size(8)
	Unknown ShouldKeepChkBox; //  0x290 Size(8)
	Unknown PlayBtn; //  0x298 Size(8)
	Unknown DeleteBtn; //  0x2a0 Size(8)
	Unknown DeleteOldReplaysBtn; //  0x2a8 Size(8)
	Unknown ReplaysToKeepTB; //  0x2b0 Size(8)
	int32_t TotalPages; //  0x2b8 Size(4)
	int32_t CurrentPage; //  0x2bc Size(4)
	int32_t PageSize; //  0x2c0 Size(4)
	int32_t TotalReplays; //  0x2c4 Size(4)
	int32_t ReplaysToKeep; //  0x2c8 Size(4)

	void UpdateTotalReplaysTB(); // Function MK3DReplayBasic.NativeReplayListWidget.UpdateTotalReplaysTB(Final|Native|Public|BlueprintCallable) // <Game+0x1369350>
};

// Class MK3DReplayBasic.NativeReplayTimelineBasicWidget
struct UNativeReplayTimelineBasicWidget : UUserWidget {
	Unknown ReplayTimelineScrollBox; //  0x248 Size(8)
	Unknown ReplayTimelineSizeBox; //  0x250 Size(8)
	Unknown ReplayTimelineBorder; //  0x258 Size(8)
	Unknown ReplayTimelineSlider; //  0x260 Size(8)
	Unknown ReplayTimeToGoBorder; //  0x268 Size(8)
	Unknown ReplayTimeToGoText; //  0x270 Size(8)
	Unknown ReplayCurrentTimeTextBlock; //  0x278 Size(8)
	Unknown ReplayTotalTimeTextBlock; //  0x280 Size(8)
	Unknown ReplayPauseButton; //  0x288 Size(8)
	Unknown ReplayResumeButton; //  0x290 Size(8)
	Unknown ReplaySpeedUpButton; //  0x298 Size(8)
	Unknown ReplaySpeedDownButton; //  0x2a0 Size(8)
	Unknown ReplaySpeedTextBlock; //  0x2a8 Size(8)
	Unknown ShowKillChkBox; //  0x2b0 Size(8)
	Unknown ShowKnockoutChkBox; //  0x2b8 Size(8)
	Unknown TimelineScaleUpButton; //  0x2c0 Size(8)
	Unknown TimelineScaleDownButton; //  0x2c8 Size(8)
	Unknown TimelineScaleTextBlock; //  0x2d0 Size(8)
	float TimelineScaleDelta; //  0x2d8 Size(4)
	float TimelineMaxScale; //  0x2dc Size(4)
	Unknown KillEventMarkers; //  0x300 Size(10)
	Unknown KnockoutEventMarkers; //  0x310 Size(10)
	Unknown MK3DKillEvents; //  0x320 Size(10)
	Unknown MK3DKnockoutEvents; //  0x330 Size(10)

	void UpdateTimelineScale(); // Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.UpdateTimelineScale(Final|Native|Public|BlueprintCallable) // <Game+0x1369310>
};

// Class MK3DReplayBasic.ReplayEventBorder
struct UReplayEventBorder : UBorder {
	struct FDelegate OnMouseEnterEvent; //  0x270 Size(10)
};

// Class MK3DReplayBasic.TimelineBorder
struct UTimelineBorder : UBorder {
	struct FDelegate OnMouseEnterEvent; //  0x270 Size(10)
	struct FDelegate OnMouseLeaveEvent; //  0x280 Size(10)
};

