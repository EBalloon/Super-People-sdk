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
	struct TArray<Unknown> WidgetInfoArray; //  0x310 Size(10)
	struct TMap<{}, {}>Unknown ReplayWidgetMap; //  0x320 Size(50)

	struct Unknown Get(); // Function MK3DReplayBasic.MK3DUserInterfaceManager.Get(Final|Native|Static|Public|BlueprintCallable) // <Game+0x13673c0>
};

// Class MK3DReplayBasic.NativePlayerListItem
struct UNativePlayerListItem : UUserWidget {
	struct Unknown Button_PlayerName; //  0x248 Size(8)
	struct Unknown Text_PlayerName; //  0x250 Size(8)

	void OnClickPlayerNameButton(); // Function MK3DReplayBasic.NativePlayerListItem.OnClickPlayerNameButton(Final|Native|Public) // <Game+0x1367860>
};

// Class MK3DReplayBasic.NativePlayerListWidget
struct UNativePlayerListWidget : UUserWidget {
	struct Unknown SortMethodTextBlock; //  0x248 Size(8)
	struct Unknown PlayerListPrevButton; //  0x250 Size(8)
	struct Unknown PlayerListNextButton; //  0x258 Size(8)
	struct Unknown ScrollBox_PlayerName; //  0x260 Size(8)

	void ShowPlayerList(); // Function MK3DReplayBasic.NativePlayerListWidget.ShowPlayerList(Final|Native|Public|BlueprintCallable) // <Game+0x13695e0>
};

// Class MK3DReplayBasic.NativeReplayEventMarkerBasic
struct UNativeReplayEventMarkerBasic : UUserWidget {
	struct Unknown EventBorder; //  0x248 Size(8)
	struct Unknown VisualBorder; //  0x250 Size(8)
	struct Unknown EventInform; //  0x258 Size(8)

	struct Unknown OnMouseMoveEventBorder(struct Unknown MyGeometry, struct Unknown& MouseEvent); // Function MK3DReplayBasic.NativeReplayEventMarkerBasic.OnMouseMoveEventBorder(Native|Public|HasOutParms) // <Game+0x1368740>
};

// Class MK3DReplayBasic.NativeReplayKillEventMarker
struct UNativeReplayKillEventMarker : UNativeReplayEventMarkerBasic {
	struct Unknown KillEvent; //  0x270 Size(30)
	float ClickToJumpDeltaSec; //  0x2a8 Size(4)

	void SetKillEvent(struct Unknown& InKillEvent); // Function MK3DReplayBasic.NativeReplayKillEventMarker.SetKillEvent(Final|Native|Public|HasOutParms|BlueprintCallable) // <Game+0x1369300>
};

// Class MK3DReplayBasic.NativeReplayListItem
struct UNativeReplayListItem : UUserWidget {
	struct Unknown ReplayListItemBtn; //  0x248 Size(8)
	struct Unknown TextName; //  0x250 Size(8)
	struct Unknown TextLive; //  0x258 Size(8)
	struct Unknown TextTime; //  0x260 Size(8)
	struct FMulticastInlineDelegate OnSelectedReplayListItemEvent; //  0x278 Size(10)

	void SetReplayListItemText(struct FString Name, char IsLive, struct Unknown Time); // Function MK3DReplayBasic.NativeReplayListItem.SetReplayListItemText(Final|Native|Public|HasDefaults|BlueprintCallable) // <Game+0x13693e0>
};

// Class MK3DReplayBasic.NativeReplayListLev
struct ANativeReplayListLevas : ALevelScriptActor {
	struct Unknown ReplayListWidget; //  0x318 Size(8)
	struct Unknown* ReplayListWidgetClass; //  0x320 Size(8)

	void ShowMouseCursor(); // Function MK3DReplayBasic.NativeReplayListLevte.ShowMouseCursor(Final|Native|Protected) // <Game+0x13695c0>
};

// Class MK3DReplayBasic.NativeReplayListWidget
struct UNativeReplayListWidget : UUserWidget {
	struct Unknown PageSizeTB; //  0x248 Size(8)
	struct Unknown CurrentPageTB; //  0x250 Size(8)
	struct Unknown ScrollBoxReplayList; //  0x258 Size(8)
	struct Unknown RefreshBtn; //  0x260 Size(8)
	struct Unknown PrevBtn; //  0x268 Size(8)
	struct Unknown NextBtn; //  0x270 Size(8)
	struct Unknown TotalReplaysTB; //  0x278 Size(8)
	struct Unknown TotalPageText; //  0x280 Size(8)
	struct Unknown ReplayItemInform; //  0x288 Size(8)
	struct Unknown ShouldKeepChkBox; //  0x290 Size(8)
	struct Unknown PlayBtn; //  0x298 Size(8)
	struct Unknown DeleteBtn; //  0x2a0 Size(8)
	struct Unknown DeleteOldReplaysBtn; //  0x2a8 Size(8)
	struct Unknown ReplaysToKeepTB; //  0x2b0 Size(8)
	int32_t TotalPages; //  0x2b8 Size(4)
	int32_t CurrentPage; //  0x2bc Size(4)
	int32_t PageSize; //  0x2c0 Size(4)
	int32_t TotalReplays; //  0x2c4 Size(4)
	int32_t ReplaysToKeep; //  0x2c8 Size(4)

	void UpdateTotalReplaysTB(); // Function MK3DReplayBasic.NativeReplayListWidget.UpdateTotalReplaysTB(Final|Native|Public|BlueprintCallable) // <Game+0x1369970>
};

// Class MK3DReplayBasic.NativeReplayTimelineBasicWidget
struct UNativeReplayTimelineBasicWidget : UUserWidget {
	struct Unknown ReplayTimelineScrollBox; //  0x248 Size(8)
	struct Unknown ReplayTimelineSizeBox; //  0x250 Size(8)
	struct Unknown ReplayTimelineBorder; //  0x258 Size(8)
	struct Unknown ReplayTimelineSlider; //  0x260 Size(8)
	struct Unknown ReplayTimeToGoBorder; //  0x268 Size(8)
	struct Unknown ReplayTimeToGoText; //  0x270 Size(8)
	struct Unknown ReplayCurrentTimeTextBlock; //  0x278 Size(8)
	struct Unknown ReplayTotalTimeTextBlock; //  0x280 Size(8)
	struct Unknown ReplayPauseButton; //  0x288 Size(8)
	struct Unknown ReplayResumeButton; //  0x290 Size(8)
	struct Unknown ReplaySpeedUpButton; //  0x298 Size(8)
	struct Unknown ReplaySpeedDownButton; //  0x2a0 Size(8)
	struct Unknown ReplaySpeedTextBlock; //  0x2a8 Size(8)
	struct Unknown ShowKillChkBox; //  0x2b0 Size(8)
	struct Unknown ShowKnockoutChkBox; //  0x2b8 Size(8)
	struct Unknown TimelineScaleUpButton; //  0x2c0 Size(8)
	struct Unknown TimelineScaleDownButton; //  0x2c8 Size(8)
	struct Unknown TimelineScaleTextBlock; //  0x2d0 Size(8)
	float TimelineScaleDelta; //  0x2d8 Size(4)
	float TimelineMaxScale; //  0x2dc Size(4)
	struct TArray<Unknown> KillEventMarkers; //  0x300 Size(10)
	struct TArray<Unknown> KnockoutEventMarkers; //  0x310 Size(10)
	struct TArray<Unknown> MK3DKillEvents; //  0x320 Size(10)
	struct TArray<Unknown> MK3DKnockoutEvents; //  0x330 Size(10)

	void UpdateTimelineScale(); // Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.UpdateTimelineScale(Final|Native|Public|BlueprintCallable) // <Game+0x1369930>
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

