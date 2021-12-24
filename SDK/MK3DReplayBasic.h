// Enum MK3DReplayBasic.EPlayerListSortMethod
enum class EPlayerListSortMethod : uint8_t {
	EPlayerListSortMethod = 0,
	EPlayerListSortMethod = 1,
	EPlayerListSortMethod = 2,
	EPlayerListSortMethod = 3,
	EPlayerListSortMethod = 4,
};

// Class MK3DReplayBasic.MK3DUserInterfaceManager
class AMK3DUserInterfaceManager : public UActor {

public:

	struct TArray<Unknown> WidgetInfoArray; // 0x310 (16)
	struct TMap<Unknown, Unknown> ReplayWidgetMap; // 0x320 (80)

	struct Unknown Get(); // Function MK3DReplayBasic.MK3DUserInterfaceManager.Get(Final|Native|Static|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1368800>
};

// Class MK3DReplayBasic.NativePlayerListItem
class UNativePlayerListItem : public UUserWidget {

public:

	struct Unknown Button_PlayerName; // 0x248 (8)
	struct Unknown Text_PlayerName; // 0x250 (8)

	void OnClickPlayerNameButton(); // Function MK3DReplayBasic.NativePlayerListItem.OnClickPlayerNameButton(Final|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1368CA0>
};

// Class MK3DReplayBasic.NativePlayerListWidget
class UNativePlayerListWidget : public UUserWidget {

public:

	struct Unknown SortMethodTextBlock; // 0x248 (8)
	struct Unknown PlayerListPrevButton; // 0x250 (8)
	struct Unknown PlayerListNextButton; // 0x258 (8)
	struct Unknown ScrollBox_PlayerName; // 0x260 (8)

	void ShowPlayerList(); // Function MK3DReplayBasic.NativePlayerListWidget.ShowPlayerList(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x136AA20>
	void SetPlayerListWidgetButtons(); // Function MK3DReplayBasic.NativePlayerListWidget.SetPlayerListWidgetButtons(Final|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x136A800>
	void OnClickPlayerListPrevButton(); // Function MK3DReplayBasic.NativePlayerListWidget.OnClickPlayerListPrevButton(Final|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1368C80>
	void OnClickPlayerListNextButton(); // Function MK3DReplayBasic.NativePlayerListWidget.OnClickPlayerListNextButton(Final|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1368C60>
	void HidePlayerList(); // Function MK3DReplayBasic.NativePlayerListWidget.HidePlayerList(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1368920>
};

// Class MK3DReplayBasic.NativeReplayEventMarkerBasic
class UNativeReplayEventMarkerBasic : public UUserWidget {

public:

	struct Unknown EventBorder; // 0x248 (8)
	struct Unknown VisualBorder; // 0x250 (8)
	struct Unknown EventInform; // 0x258 (8)

	struct Unknown OnMouseMoveEventBorder(struct Unknown MyGeometry, struct Unknown& MouseEvent); // Function MK3DReplayBasic.NativeReplayEventMarkerBasic.OnMouseMoveEventBorder(Native|Public|HasOutParms) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1369B80>
	struct Unknown OnMouseLeaveEventBorder(struct Unknown MyGeometry, struct Unknown& MouseEvent); // Function MK3DReplayBasic.NativeReplayEventMarkerBasic.OnMouseLeaveEventBorder(Native|Public|HasOutParms) // <BravoHotelClient-Win64-Shipping.protected.exe+0x13697E0>
	struct Unknown OnMouseEnterEventBorder(struct Unknown MyGeometry, struct Unknown& MouseEvent); // Function MK3DReplayBasic.NativeReplayEventMarkerBasic.OnMouseEnterEventBorder(Native|Public|HasOutParms) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1369440>
	struct Unknown OnMouseButtonUpEventBorder(struct Unknown MyGeometry, struct Unknown& MouseEvent); // Function MK3DReplayBasic.NativeReplayEventMarkerBasic.OnMouseButtonUpEventBorder(Native|Public|HasOutParms) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1369270>
	struct Unknown OnMouseButtonDownEv(struct Unknown MyGeometry, struct Unknown& MouseEvent); // Function MK3DReplayBasic.NativeReplayEventMarkerBasic.OnMouseButtonDownEvasic(Native|Public|HasOutParms) // <BravoHotelClient-Win64-Shipping.protected.exe+0x13690A0>
	struct Unknown GetBorderSize(); // Function MK3DReplayBasic.NativeReplayEventMarkerBasic.GetBorderSize(Native|Public|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1368830>
};

// Class MK3DReplayBasic.NativeReplayKillEventMarker
class UNativeReplayKillEventMarker : public UNativeReplayEventMarkerBasic {

public:

	struct Unknown KillEvent; // 0x270 (48)
	float ClickToJumpDeltaSec; // 0x2A8 (4)

	void SetKillEvent(struct Unknown& InKillEvent); // Function MK3DReplayBasic.NativeReplayKillEventMarker.SetKillEvent(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x136A740>
	void OnReplayJumpComplete(char bSuccess); // Function MK3DReplayBasic.NativeReplayKillEventMarker.OnReplayJumpComplete(Final|Native|Protected) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1369F40>
	int32_t GetEventTime(); // Function MK3DReplayBasic.NativeReplayKillEventMarker.GetEventTime(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1368870>
};

// Class MK3DReplayBasic.NativeReplayListItem
class UNativeReplayListItem : public UUserWidget {

public:

	struct Unknown ReplayListItemBtn; // 0x248 (8)
	struct Unknown TextName; // 0x250 (8)
	struct Unknown TextLive; // 0x258 (8)
	struct Unknown TextTime; // 0x260 (8)
	struct FMulticastInlineDelegate OnSelectedReplayListItemEvent; // 0x278 (16)

	void SetReplayListItemText(struct FString Name, char IsLive, struct Unknown Time); // Function MK3DReplayBasic.NativeReplayListItem.SetReplayListItemText(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x136A820>
	void PlayReplay(); // Function MK3DReplayBasic.NativeReplayListItem.PlayReplay(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x136A520>
	void OnSelectedReplayListItemEvent__DelegateSignature(struct FString ReplayName); // DelegateFunction MK3DReplayBasic.NativeReplayListItem.OnSelectedReplayListItemEvent__DelegateSignature(MulticastDelegate|Public|Delegate) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnClickedReplayListItemBtn(); // Function MK3DReplayBasic.NativeReplayListItem.OnClickedReplayListItemBtn(Final|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1368DC0>
};

// Class MK3DReplayBasic.NativeReplayListLev
class ANativeReplayListLevas : public ALevelScriptActor {

public:

	struct Unknown ReplayListWidget; // 0x318 (8)
	struct Unknown* ReplayListWidgetClass; // 0x320 (8)

	void ShowMouseCursor(); // Function MK3DReplayBasic.NativeReplayListLev.ShowMouseCursor(Final|Native|Protected) // <BravoHotelClient-Win64-Shipping.protected.exe+0x136AA00>
	void AddListWidgetToViewPort(); // Function MK3DReplayBasic.NativeReplayListLev.AddListWidgetToViewPort(Final|Native|Protected) // <BravoHotelClient-Win64-Shipping.protected.exe+0x13683B0>
};

// Class MK3DReplayBasic.NativeReplayListWidget
class UNativeReplayListWidget : public UUserWidget {

public:

	struct Unknown PageSizeTB; // 0x248 (8)
	struct Unknown CurrentPageTB; // 0x250 (8)
	struct Unknown ScrollBoxReplayList; // 0x258 (8)
	struct Unknown RefreshBtn; // 0x260 (8)
	struct Unknown PrevBtn; // 0x268 (8)
	struct Unknown NextBtn; // 0x270 (8)
	struct Unknown TotalReplaysTB; // 0x278 (8)
	struct Unknown TotalPageText; // 0x280 (8)
	struct Unknown ReplayItemInform; // 0x288 (8)
	struct Unknown ShouldKeepChkBox; // 0x290 (8)
	struct Unknown PlayBtn; // 0x298 (8)
	struct Unknown DeleteBtn; // 0x2A0 (8)
	struct Unknown DeleteOldReplaysBtn; // 0x2A8 (8)
	struct Unknown ReplaysToKeepTB; // 0x2B0 (8)
	int32_t TotalPages; // 0x2B8 (4)
	int32_t CurrentPage; // 0x2BC (4)
	int32_t PageSize; // 0x2C0 (4)
	int32_t TotalReplays; // 0x2C4 (4)
	int32_t ReplaysToKeep; // 0x2C8 (4)

	void UpdateTotalReplaysTB(); // Function MK3DReplayBasic.NativeReplayListWidget.UpdateTotalReplaysTB(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x136ADB0>
	void UpdateTotalPage(); // Function MK3DReplayBasic.NativeReplayListWidget.UpdateTotalPage(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x136AD90>
	char UpdateShouldKeep(struct FString ReplayName, char bShouldKeep); // Function MK3DReplayBasic.NativeReplayListWidget.UpdateShouldKeep(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x136AC30>
	void UpdateReplaysToKeepTB(); // Function MK3DReplayBasic.NativeReplayListWidget.UpdateReplaysToKeepTB(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x136AC10>
	void UpdateReplayStatics(); // Function MK3DReplayBasic.NativeReplayListWidget.UpdateReplayStatics(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x136ABF0>
	void UpdateReplayListItems(); // Function MK3DReplayBasic.NativeReplayListWidget.UpdateReplayListItems(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x136ABD0>
	void UpdatePageSizeTB(); // Function MK3DReplayBasic.NativeReplayListWidget.UpdatePageSizeTB(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x136ABB0>
	void UpdateCurrentPageTB(); // Function MK3DReplayBasic.NativeReplayListWidget.UpdateCurrentPageTB(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x136AB70>
	void ShowReplayItemDetail(struct FString inSelectedReplayName); // Function MK3DReplayBasic.NativeReplayListWidget.ShowReplayItemDetail(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x136AA40>
	void PlayReplay(struct FString ReplayToPlay, char bShowSimpleConfirmBox); // Function MK3DReplayBasic.NativeReplayListWidget.PlayReplay(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x136A540>
	void OnTextCommitedReplaysToKeepTB(struct FText& Text, char CommitMethod); // Function MK3DReplayBasic.NativeReplayListWidget.OnTextCommitedReplaysToKeepTB(Final|Native|Public|HasOutParms) // <BravoHotelClient-Win64-Shipping.protected.exe+0x136A300>
	void OnTextCommitedPageSize(struct FText& Text, char CommitMethod); // Function MK3DReplayBasic.NativeReplayListWidget.OnTextCommitedPageSize(Final|Native|Public|HasOutParms) // <BravoHotelClient-Win64-Shipping.protected.exe+0x136A1E0>
	void OnTextCommitedCurrentPage(struct FText& Text, char CommitMethod); // Function MK3DReplayBasic.NativeReplayListWidget.OnTextCommitedCurrentPage(Final|Native|Public|HasOutParms) // <BravoHotelClient-Win64-Shipping.protected.exe+0x136A0C0>
	void OnSelectedReplayListItem(struct FString ReplayName); // Function MK3DReplayBasic.NativeReplayListWidget.OnSelectedReplayListItem(Final|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1369FD0>
	void OnKeepAndDeleteOldReplaysComplete(int32_t nRemainedReplays, char bSuccess); // Function MK3DReplayBasic.NativeReplayListWidget.OnKeepAndDeleteOldReplaysComplete(Final|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1368FE0>
	void OnEnumerateReplayListComplete(int32_t RetPageIndex, int32_t RetPageSize); // Function MK3DReplayBasic.NativeReplayListWidget.OnEnumerateReplayListComplete(Final|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1368F20>
	void OnDeleteReplayComplete(struct FString ReplayName, char bSuccess); // Function MK3DReplayBasic.NativeReplayListWidget.OnDeleteReplayComplete(Final|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1368DE0>
	void OnClickedRefreshBtn(); // Function MK3DReplayBasic.NativeReplayListWidget.OnClickedRefreshBtn(Final|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x13688E0>
	void OnClickedPrevBtn(); // Function MK3DReplayBasic.NativeReplayListWidget.OnClickedPrevBtn(Final|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x13688C0>
	void OnClickedPlayBtn(); // Function MK3DReplayBasic.NativeReplayListWidget.OnClickedPlayBtn(Final|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1368DA0>
	void OnClickedNextBtn(); // Function MK3DReplayBasic.NativeReplayListWidget.OnClickedNextBtn(Final|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x13688A0>
	void OnClickedDeleteOldReplaysBtn(); // Function MK3DReplayBasic.NativeReplayListWidget.OnClickedDeleteOldReplaysBtn(Final|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1368D80>
	void OnClickedDeleteBtn(); // Function MK3DReplayBasic.NativeReplayListWidget.OnClickedDeleteBtn(Final|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1368D60>
	void OnCheckStateChangedSouldKeep(char bIsChecked); // Function MK3DReplayBasic.NativeReplayListWidget.OnCheckStateChangedSouldKeep(Final|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1368BB0>
	void InitUI(); // Function MK3DReplayBasic.NativeReplayListWidget.InitUI(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1368940>
	void GetReplayList(); // Function MK3DReplayBasic.NativeReplayListWidget.GetReplayList(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x13688E0>
	void GetPrevReplayList(); // Function MK3DReplayBasic.NativeReplayListWidget.GetPrevReplayList(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x13688C0>
	void GetNextReplayList(); // Function MK3DReplayBasic.NativeReplayListWidget.GetNextReplayList(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x13688A0>
	void DeleteReplay(struct FString ReplayToDelete, char bShowSimpleConfirmBox); // Function MK3DReplayBasic.NativeReplayListWidget.DeleteReplay(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1368640>
	void ChangeReplaysToKeep(struct FText& Text); // Function MK3DReplayBasic.NativeReplayListWidget.ChangeReplaysToKeep(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1368570>
	void ChangePageSize(struct FText& Text); // Function MK3DReplayBasic.NativeReplayListWidget.ChangePageSize(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x13684A0>
	void ChangeCurrentPage(struct FText& Text); // Function MK3DReplayBasic.NativeReplayListWidget.ChangeCurrentPage(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x13683D0>
};

// Class MK3DReplayBasic.NativeReplayTimelineBasicWidget
class UNativeReplayTimelineBasicWidget : public UUserWidget {

public:

	struct Unknown ReplayTimelineScrollBox; // 0x248 (8)
	struct Unknown ReplayTimelineSizeBox; // 0x250 (8)
	struct Unknown ReplayTimelineBorder; // 0x258 (8)
	struct Unknown ReplayTimelineSlider; // 0x260 (8)
	struct Unknown ReplayTimeToGoBorder; // 0x268 (8)
	struct Unknown ReplayTimeToGoText; // 0x270 (8)
	struct Unknown ReplayCurrentTimeTextBlock; // 0x278 (8)
	struct Unknown ReplayTotalTimeTextBlock; // 0x280 (8)
	struct Unknown ReplayPauseButton; // 0x288 (8)
	struct Unknown ReplayResumeButton; // 0x290 (8)
	struct Unknown ReplaySpeedUpButton; // 0x298 (8)
	struct Unknown ReplaySpeedDownButton; // 0x2A0 (8)
	struct Unknown ReplaySpeedTextBlock; // 0x2A8 (8)
	struct Unknown ShowKillChkBox; // 0x2B0 (8)
	struct Unknown ShowKnockoutChkBox; // 0x2B8 (8)
	struct Unknown TimelineScaleUpButton; // 0x2C0 (8)
	struct Unknown TimelineScaleDownButton; // 0x2C8 (8)
	struct Unknown TimelineScaleTextBlock; // 0x2D0 (8)
	float TimelineScaleDelta; // 0x2D8 (4)
	float TimelineMaxScale; // 0x2DC (4)
	struct TArray<Unknown> KillEventMarkers; // 0x300 (16)
	struct TArray<Unknown> KnockoutEventMarkers; // 0x310 (16)
	struct TArray<Unknown> MK3DKillEvents; // 0x320 (16)
	struct TArray<Unknown> MK3DKnockoutEvents; // 0x330 (16)

	void UpdateTimelineScale(); // Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.UpdateTimelineScale(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x136AD70>
	void UpdateNativeReplaySpeedTextBlock(); // Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.UpdateNativeReplaySpeedTextBlock(Final|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x136AB90>
	void Timer_EnumerateMK3DKnockoutEvents(); // Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.Timer_EnumerateMK3DKnockoutEvents(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x136AB50>
	void Timer_EnumerateMK3DKillEvents(); // Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.Timer_EnumerateMK3DKillEvents(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x136AB30>
	void SetTimelineScale(float InScale); // Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.SetTimelineScale(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x136A980>
	void RemoveAllKnockoutEveBasicWidg(); // Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.RemoveAllKnockoutEv(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x136A720>
	void RemoveAllKillEventMarkers(); // Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.RemoveAllKillEventMarkers(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x136A700>
	void RefreshKillEventMarkers(enum class Unknow killType); // Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.RefreshKillEventMarkers(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x136A680>
	void OnValueChangedTimeSlider(float InValue); // Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.OnValueChangedTimeSlider(Final|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x136A4A0>
	void OnTimelineScrollBoxUserScrolled(float fCurrentOffset); // Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.OnTimelineScrollBoxUserScrolled(Final|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x136A420>
	void OnRefreshMarkersIfWidgetReady(); // Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.OnRefreshMarkersIfWidgetReady(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1369F20>
	struct Unknown OnMouseMoveTimelineBorder(struct Unknown MyGeometry, struct Unknown& MouseEvent); // Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.OnMouseMoveTimelineBorder(Final|Native|Public|HasOutParms) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1369D50>
	struct Unknown OnMouseLeaveTimelineBorder(struct Unknown MyGeometry, struct Unknown& MouseEvent); // Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.OnMouseLeaveTimelineBorder(Final|Native|Public|HasOutParms) // <BravoHotelClient-Win64-Shipping.protected.exe+0x13699B0>
	struct Unknown OnMouseEnterTimelineBorder(struct Unknown MyGeometry, struct Unknown& MouseEvent); // Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.OnMouseEnterTimelineBorder(Final|Native|Public|HasOutParms) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1369610>
	void OnClickTimelineScaleUpButton(); // Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.OnClickTimelineScaleUpButton(Final|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1368D40>
	void OnClickTimelineScaleDownButton(); // Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.OnClickTimelineScaleDownButton(Final|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1368D20>
	void OnClickSpeedUpButton(); // Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.OnClickSpeedUpButton(Final|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1368D00>
	void OnClickSpeedDownButton(); // Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.OnClickSpeedDownButton(Final|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1368CE0>
	void OnClickResumeButton(); // Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.OnClickResumeButton(Final|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1368CC0>
	void OnClickPauseButton(); // Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.OnClickPauseButton(Final|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1368C40>
	void OnCheckStateChangedShowKnockout(char bIsChecked); // Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.OnCheckStateChangedShowKnockout(Final|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1368B20>
	void OnCheckStateChangedShowKill(char bIsChecked); // Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.OnCheckStateChangedShowKill(Final|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1368A90>
	void OnChangeCameraType(enum class Unknow CameraType, struct FString TargetPlayerName); // Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.OnChangeCameraType(Final|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1368960>
	float GetTimelineScale(); // Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.GetTimelineScale(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1368900>
	void EnumerateMK3DKillEv(enum class Unknow killType); // Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.EnumerateMK3DKillEv(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1368780>
	struct Unknown CreateEventMarker(enum class Unknow killType); // Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.CreateEventMarker(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BPUpdateTimelineScale(); // Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.BPUpdateTimelineScale(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BPUpdateKillEventMarkersPos(enum class Unknow killType, float TotalTime); // Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.BPUpdateKillEventMarkersPos(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// Class MK3DReplayBasic.ReplayEventBorder
class UReplayEventBorder : public UBorder {

public:

	struct FDelegate OnMouseEnterEvent; // 0x270 (16)
};

// Class MK3DReplayBasic.TimelineBorder
class UTimelineBorder : public UBorder {

public:

	struct FDelegate OnMouseEnterEvent; // 0x270 (16)
	struct FDelegate OnMouseLeaveEvent; // 0x280 (16)
};

// ScriptStruct MK3DReplayBasic.UserWidgetInfoForReplay_T
struct FUserWidgetInfoForReplay_T {
	struct FString KeyName; // 0x0 (16)
	struct FString FilePath; // 0x10 (16)
};

