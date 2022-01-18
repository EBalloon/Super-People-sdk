// Enum MK3DReplayBasic.EPlayerListSortMethod
enum class EPlayerListSortMethod : uint8_t {
	E_ByName = 0,
	E_ByDistance = 1,
	E_ByKillCount = 2,
	E_Last = 3,
	E_MAX = 4,
};

// Class MK3DReplayBasic.MK3DUserInterfaceManager
class AMK3DUserInterfaceManager : public UActor {

public:

	struct TArray<struct FUserWidgetInfoForReplay_T> WidgetInfoArray; // 0x300 (16)
	struct TMap<struct FString, struct UUserWidget> ReplayWidgetMap; // 0x310 (80)

	struct AMK3DUserInterfaceManager Get(); // Function MK3DReplayBasic.MK3DUserInterfaceManager.Get(Final|Native|Static|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x137EC60>
};

// Class MK3DReplayBasic.NativePlayerListItem
class UNativePlayerListItem : public UUserWidget {

public:

	struct UButton Button_PlayerName; // 0x248 (8)
	struct UTextBlock Text_PlayerName; // 0x250 (8)

	void OnClickPlayerNameButton(); // Function MK3DReplayBasic.NativePlayerListItem.OnClickPlayerNameButton(Final|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x137F100>
};

// Class MK3DReplayBasic.NativePlayerListWidget
class UNativePlayerListWidget : public UUserWidget {

public:

	struct UTextBlock SortMethodTextBlock; // 0x248 (8)
	struct UButton PlayerListPrevButton; // 0x250 (8)
	struct UButton PlayerListNextButton; // 0x258 (8)
	struct UScrollBox ScrollBox_PlayerName; // 0x260 (8)

	void ShowPlayerList(); // Function MK3DReplayBasic.NativePlayerListWidget.ShowPlayerList(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1380E80>
	void SetPlayerListWidgetButtons(); // Function MK3DReplayBasic.NativePlayerListWidget.SetPlayerListWidgetButtons(Final|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1380C60>
	void OnClickPlayerListPrevButton(); // Function MK3DReplayBasic.NativePlayerListWidget.OnClickPlayerListPrevButton(Final|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x137F0E0>
	void OnClickPlayerListNextButton(); // Function MK3DReplayBasic.NativePlayerListWidget.OnClickPlayerListNextButton(Final|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x137F0C0>
	void HidePlayerList(); // Function MK3DReplayBasic.NativePlayerListWidget.HidePlayerList(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x137ED80>
};

// Class MK3DReplayBasic.NativeReplayEventMarkerBasic
class UNativeReplayEventMarkerBasic : public UUserWidget {

public:

	struct UReplayEventBorder EventBorder; // 0x248 (8)
	struct UBorder VisualBorder; // 0x250 (8)
	struct UTextBlock EventInform; // 0x258 (8)

	struct FEventReply OnMouseMoveEventBorder(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function MK3DReplayBasic.NativeReplayEventMarkerBasic.OnMouseMoveEventBorder(Native|Public|HasOutParms) // <BravoHotelClient-Win64-Shipping.protected.exe+0x137FFE0>
	struct FEventReply OnMouseLeaveEventBorder(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function MK3DReplayBasic.NativeReplayEventMarkerBasic.OnMouseLeaveEventBorder(Native|Public|HasOutParms) // <BravoHotelClient-Win64-Shipping.protected.exe+0x137FC40>
	struct FEventReply OnMouseEnterEventBorder(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function MK3DReplayBasic.NativeReplayEventMarkerBasic.OnMouseEnterEventBorder(Native|Public|HasOutParms) // <BravoHotelClient-Win64-Shipping.protected.exe+0x137F8A0>
	struct FEventReply OnMouseButtonUpEventBorder(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function MK3DReplayBasic.NativeReplayEventMarkerBasic.OnMouseButtonUpEventBorder(Native|Public|HasOutParms) // <BravoHotelClient-Win64-Shipping.protected.exe+0x137F6D0>
	struct FEventReply OnMouseButtonDownEventBorder(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function MK3DReplayBasic.NativeReplayEventMarkerBasic.OnMouseButtonDownEventBorder(Native|Public|HasOutParms) // <BravoHotelClient-Win64-Shipping.protected.exe+0x137F500>
	struct FVector2D GetBorderSize(); // Function MK3DReplayBasic.NativeReplayEventMarkerBasic.GetBorderSize(Native|Public|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x137EC90>
};

// Class MK3DReplayBasic.NativeReplayKillEventMarker
class UNativeReplayKillEventMarker : public UNativeReplayEventMarkerBasic {

public:

	struct FMK3DHighlightKillEvent KillEvent; // 0x270 (48)
	float ClickToJumpDeltaSec; // 0x2A8 (4)

	void SetKillEvent(struct FMK3DHighlightKillEvent& InKillEvent); // Function MK3DReplayBasic.NativeReplayKillEventMarker.SetKillEvent(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1380BA0>
	void OnReplayJumpComplete(char bSuccess); // Function MK3DReplayBasic.NativeReplayKillEventMarker.OnReplayJumpComplete(Final|Native|Protected) // <BravoHotelClient-Win64-Shipping.protected.exe+0x13803A0>
	int32_t GetEventTime(); // Function MK3DReplayBasic.NativeReplayKillEventMarker.GetEventTime(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x137ECD0>
};

// Class MK3DReplayBasic.NativeReplayListItem
class UNativeReplayListItem : public UUserWidget {

public:

	struct UButton ReplayListItemBtn; // 0x248 (8)
	struct UTextBlock TextName; // 0x250 (8)
	struct UTextBlock TextLive; // 0x258 (8)
	struct UTextBlock TextTime; // 0x260 (8)
	struct FMulticastInlineDelegate OnSelectedReplayListItemEvent; // 0x278 (16)

	void SetReplayListItemText(struct FString Name, char IsLive, struct FDateTime Time); // Function MK3DReplayBasic.NativeReplayListItem.SetReplayListItemText(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1380C80>
	void PlayReplay(); // Function MK3DReplayBasic.NativeReplayListItem.PlayReplay(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1380980>
	void OnSelectedReplayListItemEvent__DelegateSignature(struct FString ReplayName); // DelegateFunction MK3DReplayBasic.NativeReplayListItem.OnSelectedReplayListItemEvent__DelegateSignature(MulticastDelegate|Public|Delegate) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void OnClickedReplayListItemBtn(); // Function MK3DReplayBasic.NativeReplayListItem.OnClickedReplayListItemBtn(Final|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x137F220>
};

// Class MK3DReplayBasic.NativeReplayListLevel
class ANativeReplayListLevel : public ALevelScriptActor {

public:

	struct UUserWidget ReplayListWidget; // 0x308 (8)
	struct UClass* ReplayListWidgetClass; // 0x310 (8)

	void ShowMouseCursor(); // Function MK3DReplayBasic.NativeReplayListLevel.ShowMouseCursor(Final|Native|Protected) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1380E60>
	void AddListWidgetToViewPort(); // Function MK3DReplayBasic.NativeReplayListLevel.AddListWidgetToViewPort(Final|Native|Protected) // <BravoHotelClient-Win64-Shipping.protected.exe+0x137E810>
};

// Class MK3DReplayBasic.NativeReplayListWidget
class UNativeReplayListWidget : public UUserWidget {

public:

	struct UEditableTextBox PageSizeTB; // 0x248 (8)
	struct UEditableTextBox CurrentPageTB; // 0x250 (8)
	struct UScrollBox ScrollBoxReplayList; // 0x258 (8)
	struct UButton RefreshBtn; // 0x260 (8)
	struct UButton PrevBtn; // 0x268 (8)
	struct UButton NextBtn; // 0x270 (8)
	struct UTextBlock TotalReplaysTB; // 0x278 (8)
	struct UTextBlock TotalPageText; // 0x280 (8)
	struct UTextBlock ReplayItemInform; // 0x288 (8)
	struct UCheckBox ShouldKeepChkBox; // 0x290 (8)
	struct UButton PlayBtn; // 0x298 (8)
	struct UButton DeleteBtn; // 0x2A0 (8)
	struct UButton DeleteOldReplaysBtn; // 0x2A8 (8)
	struct UEditableTextBox ReplaysToKeepTB; // 0x2B0 (8)
	int32_t TotalPages; // 0x2B8 (4)
	int32_t CurrentPage; // 0x2BC (4)
	int32_t PageSize; // 0x2C0 (4)
	int32_t TotalReplays; // 0x2C4 (4)
	int32_t ReplaysToKeep; // 0x2C8 (4)

	void UpdateTotalReplaysTB(); // Function MK3DReplayBasic.NativeReplayListWidget.UpdateTotalReplaysTB(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1381210>
	void UpdateTotalPage(); // Function MK3DReplayBasic.NativeReplayListWidget.UpdateTotalPage(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x13811F0>
	char UpdateShouldKeep(struct FString ReplayName, char bShouldKeep); // Function MK3DReplayBasic.NativeReplayListWidget.UpdateShouldKeep(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1381090>
	void UpdateReplaysToKeepTB(); // Function MK3DReplayBasic.NativeReplayListWidget.UpdateReplaysToKeepTB(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1381070>
	void UpdateReplayStatics(); // Function MK3DReplayBasic.NativeReplayListWidget.UpdateReplayStatics(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1381050>
	void UpdateReplayListItems(); // Function MK3DReplayBasic.NativeReplayListWidget.UpdateReplayListItems(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1381030>
	void UpdatePageSizeTB(); // Function MK3DReplayBasic.NativeReplayListWidget.UpdatePageSizeTB(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1381010>
	void UpdateCurrentPageTB(); // Function MK3DReplayBasic.NativeReplayListWidget.UpdateCurrentPageTB(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1380FD0>
	void ShowReplayItemDetail(struct FString inSelectedReplayName); // Function MK3DReplayBasic.NativeReplayListWidget.ShowReplayItemDetail(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1380EA0>
	void PlayReplay(struct FString ReplayToPlay, char bShowSimpleConfirmBox); // Function MK3DReplayBasic.NativeReplayListWidget.PlayReplay(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x13809A0>
	void OnTextCommitedReplaysToKeepTB(struct FText& Text, char CommitMethod); // Function MK3DReplayBasic.NativeReplayListWidget.OnTextCommitedReplaysToKeepTB(Final|Native|Public|HasOutParms) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1380760>
	void OnTextCommitedPageSize(struct FText& Text, char CommitMethod); // Function MK3DReplayBasic.NativeReplayListWidget.OnTextCommitedPageSize(Final|Native|Public|HasOutParms) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1380640>
	void OnTextCommitedCurrentPage(struct FText& Text, char CommitMethod); // Function MK3DReplayBasic.NativeReplayListWidget.OnTextCommitedCurrentPage(Final|Native|Public|HasOutParms) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1380520>
	void OnSelectedReplayListItem(struct FString ReplayName); // Function MK3DReplayBasic.NativeReplayListWidget.OnSelectedReplayListItem(Final|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1380430>
	void OnKeepAndDeleteOldReplaysComplete(int32_t nRemainedReplays, char bSuccess); // Function MK3DReplayBasic.NativeReplayListWidget.OnKeepAndDeleteOldReplaysComplete(Final|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x137F440>
	void OnEnumerateReplayListComplete(int32_t RetPageIndex, int32_t RetPageSize); // Function MK3DReplayBasic.NativeReplayListWidget.OnEnumerateReplayListComplete(Final|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x137F380>
	void OnDeleteReplayComplete(struct FString ReplayName, char bSuccess); // Function MK3DReplayBasic.NativeReplayListWidget.OnDeleteReplayComplete(Final|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x137F240>
	void OnClickedRefreshBtn(); // Function MK3DReplayBasic.NativeReplayListWidget.OnClickedRefreshBtn(Final|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x137ED40>
	void OnClickedPrevBtn(); // Function MK3DReplayBasic.NativeReplayListWidget.OnClickedPrevBtn(Final|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x137ED20>
	void OnClickedPlayBtn(); // Function MK3DReplayBasic.NativeReplayListWidget.OnClickedPlayBtn(Final|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x137F200>
	void OnClickedNextBtn(); // Function MK3DReplayBasic.NativeReplayListWidget.OnClickedNextBtn(Final|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x137ED00>
	void OnClickedDeleteOldReplaysBtn(); // Function MK3DReplayBasic.NativeReplayListWidget.OnClickedDeleteOldReplaysBtn(Final|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x137F1E0>
	void OnClickedDeleteBtn(); // Function MK3DReplayBasic.NativeReplayListWidget.OnClickedDeleteBtn(Final|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x137F1C0>
	void OnCheckStateChangedSouldKeep(char bIsChecked); // Function MK3DReplayBasic.NativeReplayListWidget.OnCheckStateChangedSouldKeep(Final|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x137F010>
	void InitUI(); // Function MK3DReplayBasic.NativeReplayListWidget.InitUI(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x137EDA0>
	void GetReplayList(); // Function MK3DReplayBasic.NativeReplayListWidget.GetReplayList(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x137ED40>
	void GetPrevReplayList(); // Function MK3DReplayBasic.NativeReplayListWidget.GetPrevReplayList(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x137ED20>
	void GetNextReplayList(); // Function MK3DReplayBasic.NativeReplayListWidget.GetNextReplayList(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x137ED00>
	void DeleteReplay(struct FString ReplayToDelete, char bShowSimpleConfirmBox); // Function MK3DReplayBasic.NativeReplayListWidget.DeleteReplay(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x137EAA0>
	void ChangeReplaysToKeep(struct FText& Text); // Function MK3DReplayBasic.NativeReplayListWidget.ChangeReplaysToKeep(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x137E9D0>
	void ChangePageSize(struct FText& Text); // Function MK3DReplayBasic.NativeReplayListWidget.ChangePageSize(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x137E900>
	void ChangeCurrentPage(struct FText& Text); // Function MK3DReplayBasic.NativeReplayListWidget.ChangeCurrentPage(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x137E830>
};

// Class MK3DReplayBasic.NativeReplayTimelineBasicWidget
class UNativeReplayTimelineBasicWidget : public UUserWidget {

public:

	struct UScrollBox ReplayTimelineScrollBox; // 0x248 (8)
	struct USizeBox ReplayTimelineSizeBox; // 0x250 (8)
	struct UTimelineBorder ReplayTimelineBorder; // 0x258 (8)
	struct USlider ReplayTimelineSlider; // 0x260 (8)
	struct UBorder ReplayTimeToGoBorder; // 0x268 (8)
	struct UTextBlock ReplayTimeToGoText; // 0x270 (8)
	struct UTextBlock ReplayCurrentTimeTextBlock; // 0x278 (8)
	struct UTextBlock ReplayTotalTimeTextBlock; // 0x280 (8)
	struct UButton ReplayPauseButton; // 0x288 (8)
	struct UButton ReplayResumeButton; // 0x290 (8)
	struct UButton ReplaySpeedUpButton; // 0x298 (8)
	struct UButton ReplaySpeedDownButton; // 0x2A0 (8)
	struct UTextBlock ReplaySpeedTextBlock; // 0x2A8 (8)
	struct UCheckBox ShowKillChkBox; // 0x2B0 (8)
	struct UCheckBox ShowKnockoutChkBox; // 0x2B8 (8)
	struct UButton TimelineScaleUpButton; // 0x2C0 (8)
	struct UButton TimelineScaleDownButton; // 0x2C8 (8)
	struct UTextBlock TimelineScaleTextBlock; // 0x2D0 (8)
	float TimelineScaleDelta; // 0x2D8 (4)
	float TimelineMaxScale; // 0x2DC (4)
	struct TArray<struct UNativeReplayEventMarkerBasic> KillEventMarkers; // 0x300 (16)
	struct TArray<struct UNativeReplayEventMarkerBasic> KnockoutEventMarkers; // 0x310 (16)
	struct TArray<struct FMK3DHighlightKillEvent> MK3DKillEvents; // 0x320 (16)
	struct TArray<struct FMK3DHighlightKillEvent> MK3DKnockoutEvents; // 0x330 (16)

	void UpdateTimelineScale(); // Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.UpdateTimelineScale(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x13811D0>
	void UpdateNativeReplaySpeedTextBlock(); // Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.UpdateNativeReplaySpeedTextBlock(Final|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1380FF0>
	void Timer_EnumerateMK3DKnockoutEvents(); // Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.Timer_EnumerateMK3DKnockoutEvents(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1380FB0>
	void Timer_EnumerateMK3DKillEvents(); // Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.Timer_EnumerateMK3DKillEvents(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1380F90>
	void SetTimelineScale(float InScale); // Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.SetTimelineScale(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1380DE0>
	void RemoveAllKnockoutEventMarkers(); // Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.RemoveAllKnockoutEventMarkers(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1380B80>
	void RemoveAllKillEventMarkers(); // Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.RemoveAllKillEventMarkers(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1380B60>
	void RefreshKillEventMarkers(enum class EKillType killType); // Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.RefreshKillEventMarkers(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1380AE0>
	void OnValueChangedTimeSlider(float InValue); // Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.OnValueChangedTimeSlider(Final|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1380900>
	void OnTimelineScrollBoxUserScrolled(float fCurrentOffset); // Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.OnTimelineScrollBoxUserScrolled(Final|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1380880>
	void OnRefreshMarkersIfWidgetReady(); // Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.OnRefreshMarkersIfWidgetReady(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1380380>
	struct FEventReply OnMouseMoveTimelineBorder(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.OnMouseMoveTimelineBorder(Final|Native|Public|HasOutParms) // <BravoHotelClient-Win64-Shipping.protected.exe+0x13801B0>
	struct FEventReply OnMouseLeaveTimelineBorder(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.OnMouseLeaveTimelineBorder(Final|Native|Public|HasOutParms) // <BravoHotelClient-Win64-Shipping.protected.exe+0x137FE10>
	struct FEventReply OnMouseEnterTimelineBorder(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.OnMouseEnterTimelineBorder(Final|Native|Public|HasOutParms) // <BravoHotelClient-Win64-Shipping.protected.exe+0x137FA70>
	void OnClickTimelineScaleUpButton(); // Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.OnClickTimelineScaleUpButton(Final|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x137F1A0>
	void OnClickTimelineScaleDownButton(); // Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.OnClickTimelineScaleDownButton(Final|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x137F180>
	void OnClickSpeedUpButton(); // Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.OnClickSpeedUpButton(Final|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x137F160>
	void OnClickSpeedDownButton(); // Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.OnClickSpeedDownButton(Final|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x137F140>
	void OnClickResumeButton(); // Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.OnClickResumeButton(Final|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x137F120>
	void OnClickPauseButton(); // Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.OnClickPauseButton(Final|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x137F0A0>
	void OnCheckStateChangedShowKnockout(char bIsChecked); // Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.OnCheckStateChangedShowKnockout(Final|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x137EF80>
	void OnCheckStateChangedShowKill(char bIsChecked); // Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.OnCheckStateChangedShowKill(Final|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x137EEF0>
	void OnChangeCameraType(enum class ECameraType CameraType, struct FString TargetPlayerName); // Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.OnChangeCameraType(Final|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x137EDC0>
	float GetTimelineScale(); // Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.GetTimelineScale(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x137ED60>
	void EnumerateMK3DKillEvents(enum class EKillType killType); // Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.EnumerateMK3DKillEvents(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x137EBE0>
	struct UNativeReplayKillEventMarker CreateEventMarker(enum class EKillType killType); // Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.CreateEventMarker(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void BPUpdateTimelineScale(); // Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.BPUpdateTimelineScale(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void BPUpdateKillEventMarkersPos(enum class EKillType killType, float TotalTime); // Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.BPUpdateKillEventMarkersPos(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
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

// Function MK3DReplayBasic.MK3DUserInterfaceManager.Get
inline struct AMK3DUserInterfaceManager AMK3DUserInterfaceManager::Get() {
	static auto fn = UObject::FindObject<UFunction>("Function MK3DReplayBasic.MK3DUserInterfaceManager.Get");

	struct Get_Params {
		
		struct AMK3DUserInterfaceManager ReturnValue;

	}; Get_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MK3DReplayBasic.NativePlayerListItem.OnClickPlayerNameButton
inline void UNativePlayerListItem::OnClickPlayerNameButton() {
	static auto fn = UObject::FindObject<UFunction>("Function MK3DReplayBasic.NativePlayerListItem.OnClickPlayerNameButton");

	struct OnClickPlayerNameButton_Params {
		
	}; OnClickPlayerNameButton_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MK3DReplayBasic.NativePlayerListWidget.ShowPlayerList
inline void UNativePlayerListWidget::ShowPlayerList() {
	static auto fn = UObject::FindObject<UFunction>("Function MK3DReplayBasic.NativePlayerListWidget.ShowPlayerList");

	struct ShowPlayerList_Params {
		
	}; ShowPlayerList_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MK3DReplayBasic.NativePlayerListWidget.SetPlayerListWidgetButtons
inline void UNativePlayerListWidget::SetPlayerListWidgetButtons() {
	static auto fn = UObject::FindObject<UFunction>("Function MK3DReplayBasic.NativePlayerListWidget.SetPlayerListWidgetButtons");

	struct SetPlayerListWidgetButtons_Params {
		
	}; SetPlayerListWidgetButtons_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MK3DReplayBasic.NativePlayerListWidget.OnClickPlayerListPrevButton
inline void UNativePlayerListWidget::OnClickPlayerListPrevButton() {
	static auto fn = UObject::FindObject<UFunction>("Function MK3DReplayBasic.NativePlayerListWidget.OnClickPlayerListPrevButton");

	struct OnClickPlayerListPrevButton_Params {
		
	}; OnClickPlayerListPrevButton_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MK3DReplayBasic.NativePlayerListWidget.OnClickPlayerListNextButton
inline void UNativePlayerListWidget::OnClickPlayerListNextButton() {
	static auto fn = UObject::FindObject<UFunction>("Function MK3DReplayBasic.NativePlayerListWidget.OnClickPlayerListNextButton");

	struct OnClickPlayerListNextButton_Params {
		
	}; OnClickPlayerListNextButton_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MK3DReplayBasic.NativePlayerListWidget.HidePlayerList
inline void UNativePlayerListWidget::HidePlayerList() {
	static auto fn = UObject::FindObject<UFunction>("Function MK3DReplayBasic.NativePlayerListWidget.HidePlayerList");

	struct HidePlayerList_Params {
		
	}; HidePlayerList_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MK3DReplayBasic.NativeReplayEventMarkerBasic.OnMouseMoveEventBorder
inline struct FEventReply UNativeReplayEventMarkerBasic::OnMouseMoveEventBorder(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function MK3DReplayBasic.NativeReplayEventMarkerBasic.OnMouseMoveEventBorder");

	struct OnMouseMoveEventBorder_Params {
		struct FGeometry MyGeometry;
		struct FPointerEvent& MouseEvent;
		struct FEventReply ReturnValue;

	}; OnMouseMoveEventBorder_Params Params;

	Params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	MouseEvent = Params.MouseEvent;


	return params.ReturnValue;
}

// Function MK3DReplayBasic.NativeReplayEventMarkerBasic.OnMouseLeaveEventBorder
inline struct FEventReply UNativeReplayEventMarkerBasic::OnMouseLeaveEventBorder(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function MK3DReplayBasic.NativeReplayEventMarkerBasic.OnMouseLeaveEventBorder");

	struct OnMouseLeaveEventBorder_Params {
		struct FGeometry MyGeometry;
		struct FPointerEvent& MouseEvent;
		struct FEventReply ReturnValue;

	}; OnMouseLeaveEventBorder_Params Params;

	Params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	MouseEvent = Params.MouseEvent;


	return params.ReturnValue;
}

// Function MK3DReplayBasic.NativeReplayEventMarkerBasic.OnMouseEnterEventBorder
inline struct FEventReply UNativeReplayEventMarkerBasic::OnMouseEnterEventBorder(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function MK3DReplayBasic.NativeReplayEventMarkerBasic.OnMouseEnterEventBorder");

	struct OnMouseEnterEventBorder_Params {
		struct FGeometry MyGeometry;
		struct FPointerEvent& MouseEvent;
		struct FEventReply ReturnValue;

	}; OnMouseEnterEventBorder_Params Params;

	Params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	MouseEvent = Params.MouseEvent;


	return params.ReturnValue;
}

// Function MK3DReplayBasic.NativeReplayEventMarkerBasic.OnMouseButtonUpEventBorder
inline struct FEventReply UNativeReplayEventMarkerBasic::OnMouseButtonUpEventBorder(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function MK3DReplayBasic.NativeReplayEventMarkerBasic.OnMouseButtonUpEventBorder");

	struct OnMouseButtonUpEventBorder_Params {
		struct FGeometry MyGeometry;
		struct FPointerEvent& MouseEvent;
		struct FEventReply ReturnValue;

	}; OnMouseButtonUpEventBorder_Params Params;

	Params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	MouseEvent = Params.MouseEvent;


	return params.ReturnValue;
}

// Function MK3DReplayBasic.NativeReplayEventMarkerBasic.OnMouseButtonDownEventBorder
inline struct FEventReply UNativeReplayEventMarkerBasic::OnMouseButtonDownEventBorder(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function MK3DReplayBasic.NativeReplayEventMarkerBasic.OnMouseButtonDownEventBorder");

	struct OnMouseButtonDownEventBorder_Params {
		struct FGeometry MyGeometry;
		struct FPointerEvent& MouseEvent;
		struct FEventReply ReturnValue;

	}; OnMouseButtonDownEventBorder_Params Params;

	Params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	MouseEvent = Params.MouseEvent;


	return params.ReturnValue;
}

// Function MK3DReplayBasic.NativeReplayEventMarkerBasic.GetBorderSize
inline struct FVector2D UNativeReplayEventMarkerBasic::GetBorderSize() {
	static auto fn = UObject::FindObject<UFunction>("Function MK3DReplayBasic.NativeReplayEventMarkerBasic.GetBorderSize");

	struct GetBorderSize_Params {
		
		struct FVector2D ReturnValue;

	}; GetBorderSize_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MK3DReplayBasic.NativeReplayKillEventMarker.SetKillEvent
inline void UNativeReplayKillEventMarker::SetKillEvent(struct FMK3DHighlightKillEvent& InKillEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function MK3DReplayBasic.NativeReplayKillEventMarker.SetKillEvent");

	struct SetKillEvent_Params {
		struct FMK3DHighlightKillEvent& InKillEvent;
	}; SetKillEvent_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	InKillEvent = Params.InKillEvent;

}

// Function MK3DReplayBasic.NativeReplayKillEventMarker.OnReplayJumpComplete
inline void UNativeReplayKillEventMarker::OnReplayJumpComplete(char bSuccess) {
	static auto fn = UObject::FindObject<UFunction>("Function MK3DReplayBasic.NativeReplayKillEventMarker.OnReplayJumpComplete");

	struct OnReplayJumpComplete_Params {
		char bSuccess;
	}; OnReplayJumpComplete_Params Params;

	Params.bSuccess = bSuccess;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MK3DReplayBasic.NativeReplayKillEventMarker.GetEventTime
inline int32_t UNativeReplayKillEventMarker::GetEventTime() {
	static auto fn = UObject::FindObject<UFunction>("Function MK3DReplayBasic.NativeReplayKillEventMarker.GetEventTime");

	struct GetEventTime_Params {
		
		int32_t ReturnValue;

	}; GetEventTime_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MK3DReplayBasic.NativeReplayListItem.SetReplayListItemText
inline void UNativeReplayListItem::SetReplayListItemText(struct FString Name, char IsLive, struct FDateTime Time) {
	static auto fn = UObject::FindObject<UFunction>("Function MK3DReplayBasic.NativeReplayListItem.SetReplayListItemText");

	struct SetReplayListItemText_Params {
		struct FString Name;
		char IsLive;
		struct FDateTime Time;
	}; SetReplayListItemText_Params Params;

	Params.Name = Name;
	Params.IsLive = IsLive;
	Params.Time = Time;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MK3DReplayBasic.NativeReplayListItem.PlayReplay
inline void UNativeReplayListItem::PlayReplay() {
	static auto fn = UObject::FindObject<UFunction>("Function MK3DReplayBasic.NativeReplayListItem.PlayReplay");

	struct PlayReplay_Params {
		
	}; PlayReplay_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// DelegateFunction MK3DReplayBasic.NativeReplayListItem.OnSelectedReplayListItemEvent__DelegateSignature
inline void UNativeReplayListItem::OnSelectedReplayListItemEvent__DelegateSignature(struct FString ReplayName) {
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction MK3DReplayBasic.NativeReplayListItem.OnSelectedReplayListItemEvent__DelegateSignature");

	struct OnSelectedReplayListItemEvent__DelegateSignature_Params {
		struct FString ReplayName;
	}; OnSelectedReplayListItemEvent__DelegateSignature_Params Params;

	Params.ReplayName = ReplayName;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MK3DReplayBasic.NativeReplayListItem.OnClickedReplayListItemBtn
inline void UNativeReplayListItem::OnClickedReplayListItemBtn() {
	static auto fn = UObject::FindObject<UFunction>("Function MK3DReplayBasic.NativeReplayListItem.OnClickedReplayListItemBtn");

	struct OnClickedReplayListItemBtn_Params {
		
	}; OnClickedReplayListItemBtn_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MK3DReplayBasic.NativeReplayListLevel.ShowMouseCursor
inline void ANativeReplayListLevel::ShowMouseCursor() {
	static auto fn = UObject::FindObject<UFunction>("Function MK3DReplayBasic.NativeReplayListLevel.ShowMouseCursor");

	struct ShowMouseCursor_Params {
		
	}; ShowMouseCursor_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MK3DReplayBasic.NativeReplayListLevel.AddListWidgetToViewPort
inline void ANativeReplayListLevel::AddListWidgetToViewPort() {
	static auto fn = UObject::FindObject<UFunction>("Function MK3DReplayBasic.NativeReplayListLevel.AddListWidgetToViewPort");

	struct AddListWidgetToViewPort_Params {
		
	}; AddListWidgetToViewPort_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MK3DReplayBasic.NativeReplayListWidget.UpdateTotalReplaysTB
inline void UNativeReplayListWidget::UpdateTotalReplaysTB() {
	static auto fn = UObject::FindObject<UFunction>("Function MK3DReplayBasic.NativeReplayListWidget.UpdateTotalReplaysTB");

	struct UpdateTotalReplaysTB_Params {
		
	}; UpdateTotalReplaysTB_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MK3DReplayBasic.NativeReplayListWidget.UpdateTotalPage
inline void UNativeReplayListWidget::UpdateTotalPage() {
	static auto fn = UObject::FindObject<UFunction>("Function MK3DReplayBasic.NativeReplayListWidget.UpdateTotalPage");

	struct UpdateTotalPage_Params {
		
	}; UpdateTotalPage_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MK3DReplayBasic.NativeReplayListWidget.UpdateShouldKeep
inline char UNativeReplayListWidget::UpdateShouldKeep(struct FString ReplayName, char bShouldKeep) {
	static auto fn = UObject::FindObject<UFunction>("Function MK3DReplayBasic.NativeReplayListWidget.UpdateShouldKeep");

	struct UpdateShouldKeep_Params {
		struct FString ReplayName;
		char bShouldKeep;
		char ReturnValue;

	}; UpdateShouldKeep_Params Params;

	Params.ReplayName = ReplayName;
	Params.bShouldKeep = bShouldKeep;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MK3DReplayBasic.NativeReplayListWidget.UpdateReplaysToKeepTB
inline void UNativeReplayListWidget::UpdateReplaysToKeepTB() {
	static auto fn = UObject::FindObject<UFunction>("Function MK3DReplayBasic.NativeReplayListWidget.UpdateReplaysToKeepTB");

	struct UpdateReplaysToKeepTB_Params {
		
	}; UpdateReplaysToKeepTB_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MK3DReplayBasic.NativeReplayListWidget.UpdateReplayStatics
inline void UNativeReplayListWidget::UpdateReplayStatics() {
	static auto fn = UObject::FindObject<UFunction>("Function MK3DReplayBasic.NativeReplayListWidget.UpdateReplayStatics");

	struct UpdateReplayStatics_Params {
		
	}; UpdateReplayStatics_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MK3DReplayBasic.NativeReplayListWidget.UpdateReplayListItems
inline void UNativeReplayListWidget::UpdateReplayListItems() {
	static auto fn = UObject::FindObject<UFunction>("Function MK3DReplayBasic.NativeReplayListWidget.UpdateReplayListItems");

	struct UpdateReplayListItems_Params {
		
	}; UpdateReplayListItems_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MK3DReplayBasic.NativeReplayListWidget.UpdatePageSizeTB
inline void UNativeReplayListWidget::UpdatePageSizeTB() {
	static auto fn = UObject::FindObject<UFunction>("Function MK3DReplayBasic.NativeReplayListWidget.UpdatePageSizeTB");

	struct UpdatePageSizeTB_Params {
		
	}; UpdatePageSizeTB_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MK3DReplayBasic.NativeReplayListWidget.UpdateCurrentPageTB
inline void UNativeReplayListWidget::UpdateCurrentPageTB() {
	static auto fn = UObject::FindObject<UFunction>("Function MK3DReplayBasic.NativeReplayListWidget.UpdateCurrentPageTB");

	struct UpdateCurrentPageTB_Params {
		
	}; UpdateCurrentPageTB_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MK3DReplayBasic.NativeReplayListWidget.ShowReplayItemDetail
inline void UNativeReplayListWidget::ShowReplayItemDetail(struct FString inSelectedReplayName) {
	static auto fn = UObject::FindObject<UFunction>("Function MK3DReplayBasic.NativeReplayListWidget.ShowReplayItemDetail");

	struct ShowReplayItemDetail_Params {
		struct FString inSelectedReplayName;
	}; ShowReplayItemDetail_Params Params;

	Params.inSelectedReplayName = inSelectedReplayName;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MK3DReplayBasic.NativeReplayListWidget.PlayReplay
inline void UNativeReplayListWidget::PlayReplay(struct FString ReplayToPlay, char bShowSimpleConfirmBox) {
	static auto fn = UObject::FindObject<UFunction>("Function MK3DReplayBasic.NativeReplayListWidget.PlayReplay");

	struct PlayReplay_Params {
		struct FString ReplayToPlay;
		char bShowSimpleConfirmBox;
	}; PlayReplay_Params Params;

	Params.ReplayToPlay = ReplayToPlay;
	Params.bShowSimpleConfirmBox = bShowSimpleConfirmBox;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MK3DReplayBasic.NativeReplayListWidget.OnTextCommitedReplaysToKeepTB
inline void UNativeReplayListWidget::OnTextCommitedReplaysToKeepTB(struct FText& Text, char CommitMethod) {
	static auto fn = UObject::FindObject<UFunction>("Function MK3DReplayBasic.NativeReplayListWidget.OnTextCommitedReplaysToKeepTB");

	struct OnTextCommitedReplaysToKeepTB_Params {
		struct FText& Text;
		char CommitMethod;
	}; OnTextCommitedReplaysToKeepTB_Params Params;

	Params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Text = Params.Text;

}

// Function MK3DReplayBasic.NativeReplayListWidget.OnTextCommitedPageSize
inline void UNativeReplayListWidget::OnTextCommitedPageSize(struct FText& Text, char CommitMethod) {
	static auto fn = UObject::FindObject<UFunction>("Function MK3DReplayBasic.NativeReplayListWidget.OnTextCommitedPageSize");

	struct OnTextCommitedPageSize_Params {
		struct FText& Text;
		char CommitMethod;
	}; OnTextCommitedPageSize_Params Params;

	Params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Text = Params.Text;

}

// Function MK3DReplayBasic.NativeReplayListWidget.OnTextCommitedCurrentPage
inline void UNativeReplayListWidget::OnTextCommitedCurrentPage(struct FText& Text, char CommitMethod) {
	static auto fn = UObject::FindObject<UFunction>("Function MK3DReplayBasic.NativeReplayListWidget.OnTextCommitedCurrentPage");

	struct OnTextCommitedCurrentPage_Params {
		struct FText& Text;
		char CommitMethod;
	}; OnTextCommitedCurrentPage_Params Params;

	Params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Text = Params.Text;

}

// Function MK3DReplayBasic.NativeReplayListWidget.OnSelectedReplayListItem
inline void UNativeReplayListWidget::OnSelectedReplayListItem(struct FString ReplayName) {
	static auto fn = UObject::FindObject<UFunction>("Function MK3DReplayBasic.NativeReplayListWidget.OnSelectedReplayListItem");

	struct OnSelectedReplayListItem_Params {
		struct FString ReplayName;
	}; OnSelectedReplayListItem_Params Params;

	Params.ReplayName = ReplayName;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MK3DReplayBasic.NativeReplayListWidget.OnKeepAndDeleteOldReplaysComplete
inline void UNativeReplayListWidget::OnKeepAndDeleteOldReplaysComplete(int32_t nRemainedReplays, char bSuccess) {
	static auto fn = UObject::FindObject<UFunction>("Function MK3DReplayBasic.NativeReplayListWidget.OnKeepAndDeleteOldReplaysComplete");

	struct OnKeepAndDeleteOldReplaysComplete_Params {
		int32_t nRemainedReplays;
		char bSuccess;
	}; OnKeepAndDeleteOldReplaysComplete_Params Params;

	Params.nRemainedReplays = nRemainedReplays;
	Params.bSuccess = bSuccess;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MK3DReplayBasic.NativeReplayListWidget.OnEnumerateReplayListComplete
inline void UNativeReplayListWidget::OnEnumerateReplayListComplete(int32_t RetPageIndex, int32_t RetPageSize) {
	static auto fn = UObject::FindObject<UFunction>("Function MK3DReplayBasic.NativeReplayListWidget.OnEnumerateReplayListComplete");

	struct OnEnumerateReplayListComplete_Params {
		int32_t RetPageIndex;
		int32_t RetPageSize;
	}; OnEnumerateReplayListComplete_Params Params;

	Params.RetPageIndex = RetPageIndex;
	Params.RetPageSize = RetPageSize;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MK3DReplayBasic.NativeReplayListWidget.OnDeleteReplayComplete
inline void UNativeReplayListWidget::OnDeleteReplayComplete(struct FString ReplayName, char bSuccess) {
	static auto fn = UObject::FindObject<UFunction>("Function MK3DReplayBasic.NativeReplayListWidget.OnDeleteReplayComplete");

	struct OnDeleteReplayComplete_Params {
		struct FString ReplayName;
		char bSuccess;
	}; OnDeleteReplayComplete_Params Params;

	Params.ReplayName = ReplayName;
	Params.bSuccess = bSuccess;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MK3DReplayBasic.NativeReplayListWidget.OnClickedRefreshBtn
inline void UNativeReplayListWidget::OnClickedRefreshBtn() {
	static auto fn = UObject::FindObject<UFunction>("Function MK3DReplayBasic.NativeReplayListWidget.OnClickedRefreshBtn");

	struct OnClickedRefreshBtn_Params {
		
	}; OnClickedRefreshBtn_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MK3DReplayBasic.NativeReplayListWidget.OnClickedPrevBtn
inline void UNativeReplayListWidget::OnClickedPrevBtn() {
	static auto fn = UObject::FindObject<UFunction>("Function MK3DReplayBasic.NativeReplayListWidget.OnClickedPrevBtn");

	struct OnClickedPrevBtn_Params {
		
	}; OnClickedPrevBtn_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MK3DReplayBasic.NativeReplayListWidget.OnClickedPlayBtn
inline void UNativeReplayListWidget::OnClickedPlayBtn() {
	static auto fn = UObject::FindObject<UFunction>("Function MK3DReplayBasic.NativeReplayListWidget.OnClickedPlayBtn");

	struct OnClickedPlayBtn_Params {
		
	}; OnClickedPlayBtn_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MK3DReplayBasic.NativeReplayListWidget.OnClickedNextBtn
inline void UNativeReplayListWidget::OnClickedNextBtn() {
	static auto fn = UObject::FindObject<UFunction>("Function MK3DReplayBasic.NativeReplayListWidget.OnClickedNextBtn");

	struct OnClickedNextBtn_Params {
		
	}; OnClickedNextBtn_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MK3DReplayBasic.NativeReplayListWidget.OnClickedDeleteOldReplaysBtn
inline void UNativeReplayListWidget::OnClickedDeleteOldReplaysBtn() {
	static auto fn = UObject::FindObject<UFunction>("Function MK3DReplayBasic.NativeReplayListWidget.OnClickedDeleteOldReplaysBtn");

	struct OnClickedDeleteOldReplaysBtn_Params {
		
	}; OnClickedDeleteOldReplaysBtn_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MK3DReplayBasic.NativeReplayListWidget.OnClickedDeleteBtn
inline void UNativeReplayListWidget::OnClickedDeleteBtn() {
	static auto fn = UObject::FindObject<UFunction>("Function MK3DReplayBasic.NativeReplayListWidget.OnClickedDeleteBtn");

	struct OnClickedDeleteBtn_Params {
		
	}; OnClickedDeleteBtn_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MK3DReplayBasic.NativeReplayListWidget.OnCheckStateChangedSouldKeep
inline void UNativeReplayListWidget::OnCheckStateChangedSouldKeep(char bIsChecked) {
	static auto fn = UObject::FindObject<UFunction>("Function MK3DReplayBasic.NativeReplayListWidget.OnCheckStateChangedSouldKeep");

	struct OnCheckStateChangedSouldKeep_Params {
		char bIsChecked;
	}; OnCheckStateChangedSouldKeep_Params Params;

	Params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MK3DReplayBasic.NativeReplayListWidget.InitUI
inline void UNativeReplayListWidget::InitUI() {
	static auto fn = UObject::FindObject<UFunction>("Function MK3DReplayBasic.NativeReplayListWidget.InitUI");

	struct InitUI_Params {
		
	}; InitUI_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MK3DReplayBasic.NativeReplayListWidget.GetReplayList
inline void UNativeReplayListWidget::GetReplayList() {
	static auto fn = UObject::FindObject<UFunction>("Function MK3DReplayBasic.NativeReplayListWidget.GetReplayList");

	struct GetReplayList_Params {
		
	}; GetReplayList_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MK3DReplayBasic.NativeReplayListWidget.GetPrevReplayList
inline void UNativeReplayListWidget::GetPrevReplayList() {
	static auto fn = UObject::FindObject<UFunction>("Function MK3DReplayBasic.NativeReplayListWidget.GetPrevReplayList");

	struct GetPrevReplayList_Params {
		
	}; GetPrevReplayList_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MK3DReplayBasic.NativeReplayListWidget.GetNextReplayList
inline void UNativeReplayListWidget::GetNextReplayList() {
	static auto fn = UObject::FindObject<UFunction>("Function MK3DReplayBasic.NativeReplayListWidget.GetNextReplayList");

	struct GetNextReplayList_Params {
		
	}; GetNextReplayList_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MK3DReplayBasic.NativeReplayListWidget.DeleteReplay
inline void UNativeReplayListWidget::DeleteReplay(struct FString ReplayToDelete, char bShowSimpleConfirmBox) {
	static auto fn = UObject::FindObject<UFunction>("Function MK3DReplayBasic.NativeReplayListWidget.DeleteReplay");

	struct DeleteReplay_Params {
		struct FString ReplayToDelete;
		char bShowSimpleConfirmBox;
	}; DeleteReplay_Params Params;

	Params.ReplayToDelete = ReplayToDelete;
	Params.bShowSimpleConfirmBox = bShowSimpleConfirmBox;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MK3DReplayBasic.NativeReplayListWidget.ChangeReplaysToKeep
inline void UNativeReplayListWidget::ChangeReplaysToKeep(struct FText& Text) {
	static auto fn = UObject::FindObject<UFunction>("Function MK3DReplayBasic.NativeReplayListWidget.ChangeReplaysToKeep");

	struct ChangeReplaysToKeep_Params {
		struct FText& Text;
	}; ChangeReplaysToKeep_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Text = Params.Text;

}

// Function MK3DReplayBasic.NativeReplayListWidget.ChangePageSize
inline void UNativeReplayListWidget::ChangePageSize(struct FText& Text) {
	static auto fn = UObject::FindObject<UFunction>("Function MK3DReplayBasic.NativeReplayListWidget.ChangePageSize");

	struct ChangePageSize_Params {
		struct FText& Text;
	}; ChangePageSize_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Text = Params.Text;

}

// Function MK3DReplayBasic.NativeReplayListWidget.ChangeCurrentPage
inline void UNativeReplayListWidget::ChangeCurrentPage(struct FText& Text) {
	static auto fn = UObject::FindObject<UFunction>("Function MK3DReplayBasic.NativeReplayListWidget.ChangeCurrentPage");

	struct ChangeCurrentPage_Params {
		struct FText& Text;
	}; ChangeCurrentPage_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Text = Params.Text;

}

// Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.UpdateTimelineScale
inline void UNativeReplayTimelineBasicWidget::UpdateTimelineScale() {
	static auto fn = UObject::FindObject<UFunction>("Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.UpdateTimelineScale");

	struct UpdateTimelineScale_Params {
		
	}; UpdateTimelineScale_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.UpdateNativeReplaySpeedTextBlock
inline void UNativeReplayTimelineBasicWidget::UpdateNativeReplaySpeedTextBlock() {
	static auto fn = UObject::FindObject<UFunction>("Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.UpdateNativeReplaySpeedTextBlock");

	struct UpdateNativeReplaySpeedTextBlock_Params {
		
	}; UpdateNativeReplaySpeedTextBlock_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.Timer_EnumerateMK3DKnockoutEvents
inline void UNativeReplayTimelineBasicWidget::Timer_EnumerateMK3DKnockoutEvents() {
	static auto fn = UObject::FindObject<UFunction>("Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.Timer_EnumerateMK3DKnockoutEvents");

	struct Timer_EnumerateMK3DKnockoutEvents_Params {
		
	}; Timer_EnumerateMK3DKnockoutEvents_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.Timer_EnumerateMK3DKillEvents
inline void UNativeReplayTimelineBasicWidget::Timer_EnumerateMK3DKillEvents() {
	static auto fn = UObject::FindObject<UFunction>("Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.Timer_EnumerateMK3DKillEvents");

	struct Timer_EnumerateMK3DKillEvents_Params {
		
	}; Timer_EnumerateMK3DKillEvents_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.SetTimelineScale
inline void UNativeReplayTimelineBasicWidget::SetTimelineScale(float InScale) {
	static auto fn = UObject::FindObject<UFunction>("Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.SetTimelineScale");

	struct SetTimelineScale_Params {
		float InScale;
	}; SetTimelineScale_Params Params;

	Params.InScale = InScale;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.RemoveAllKnockoutEventMarkers
inline void UNativeReplayTimelineBasicWidget::RemoveAllKnockoutEventMarkers() {
	static auto fn = UObject::FindObject<UFunction>("Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.RemoveAllKnockoutEventMarkers");

	struct RemoveAllKnockoutEventMarkers_Params {
		
	}; RemoveAllKnockoutEventMarkers_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.RemoveAllKillEventMarkers
inline void UNativeReplayTimelineBasicWidget::RemoveAllKillEventMarkers() {
	static auto fn = UObject::FindObject<UFunction>("Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.RemoveAllKillEventMarkers");

	struct RemoveAllKillEventMarkers_Params {
		
	}; RemoveAllKillEventMarkers_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.RefreshKillEventMarkers
inline void UNativeReplayTimelineBasicWidget::RefreshKillEventMarkers(enum class EKillType killType) {
	static auto fn = UObject::FindObject<UFunction>("Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.RefreshKillEventMarkers");

	struct RefreshKillEventMarkers_Params {
		enum class EKillType killType;
	}; RefreshKillEventMarkers_Params Params;

	Params.killType = killType;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.OnValueChangedTimeSlider
inline void UNativeReplayTimelineBasicWidget::OnValueChangedTimeSlider(float InValue) {
	static auto fn = UObject::FindObject<UFunction>("Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.OnValueChangedTimeSlider");

	struct OnValueChangedTimeSlider_Params {
		float InValue;
	}; OnValueChangedTimeSlider_Params Params;

	Params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.OnTimelineScrollBoxUserScrolled
inline void UNativeReplayTimelineBasicWidget::OnTimelineScrollBoxUserScrolled(float fCurrentOffset) {
	static auto fn = UObject::FindObject<UFunction>("Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.OnTimelineScrollBoxUserScrolled");

	struct OnTimelineScrollBoxUserScrolled_Params {
		float fCurrentOffset;
	}; OnTimelineScrollBoxUserScrolled_Params Params;

	Params.fCurrentOffset = fCurrentOffset;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.OnRefreshMarkersIfWidgetReady
inline void UNativeReplayTimelineBasicWidget::OnRefreshMarkersIfWidgetReady() {
	static auto fn = UObject::FindObject<UFunction>("Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.OnRefreshMarkersIfWidgetReady");

	struct OnRefreshMarkersIfWidgetReady_Params {
		
	}; OnRefreshMarkersIfWidgetReady_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.OnMouseMoveTimelineBorder
inline struct FEventReply UNativeReplayTimelineBasicWidget::OnMouseMoveTimelineBorder(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.OnMouseMoveTimelineBorder");

	struct OnMouseMoveTimelineBorder_Params {
		struct FGeometry MyGeometry;
		struct FPointerEvent& MouseEvent;
		struct FEventReply ReturnValue;

	}; OnMouseMoveTimelineBorder_Params Params;

	Params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	MouseEvent = Params.MouseEvent;


	return params.ReturnValue;
}

// Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.OnMouseLeaveTimelineBorder
inline struct FEventReply UNativeReplayTimelineBasicWidget::OnMouseLeaveTimelineBorder(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.OnMouseLeaveTimelineBorder");

	struct OnMouseLeaveTimelineBorder_Params {
		struct FGeometry MyGeometry;
		struct FPointerEvent& MouseEvent;
		struct FEventReply ReturnValue;

	}; OnMouseLeaveTimelineBorder_Params Params;

	Params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	MouseEvent = Params.MouseEvent;


	return params.ReturnValue;
}

// Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.OnMouseEnterTimelineBorder
inline struct FEventReply UNativeReplayTimelineBasicWidget::OnMouseEnterTimelineBorder(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.OnMouseEnterTimelineBorder");

	struct OnMouseEnterTimelineBorder_Params {
		struct FGeometry MyGeometry;
		struct FPointerEvent& MouseEvent;
		struct FEventReply ReturnValue;

	}; OnMouseEnterTimelineBorder_Params Params;

	Params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	MouseEvent = Params.MouseEvent;


	return params.ReturnValue;
}

// Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.OnClickTimelineScaleUpButton
inline void UNativeReplayTimelineBasicWidget::OnClickTimelineScaleUpButton() {
	static auto fn = UObject::FindObject<UFunction>("Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.OnClickTimelineScaleUpButton");

	struct OnClickTimelineScaleUpButton_Params {
		
	}; OnClickTimelineScaleUpButton_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.OnClickTimelineScaleDownButton
inline void UNativeReplayTimelineBasicWidget::OnClickTimelineScaleDownButton() {
	static auto fn = UObject::FindObject<UFunction>("Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.OnClickTimelineScaleDownButton");

	struct OnClickTimelineScaleDownButton_Params {
		
	}; OnClickTimelineScaleDownButton_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.OnClickSpeedUpButton
inline void UNativeReplayTimelineBasicWidget::OnClickSpeedUpButton() {
	static auto fn = UObject::FindObject<UFunction>("Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.OnClickSpeedUpButton");

	struct OnClickSpeedUpButton_Params {
		
	}; OnClickSpeedUpButton_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.OnClickSpeedDownButton
inline void UNativeReplayTimelineBasicWidget::OnClickSpeedDownButton() {
	static auto fn = UObject::FindObject<UFunction>("Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.OnClickSpeedDownButton");

	struct OnClickSpeedDownButton_Params {
		
	}; OnClickSpeedDownButton_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.OnClickResumeButton
inline void UNativeReplayTimelineBasicWidget::OnClickResumeButton() {
	static auto fn = UObject::FindObject<UFunction>("Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.OnClickResumeButton");

	struct OnClickResumeButton_Params {
		
	}; OnClickResumeButton_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.OnClickPauseButton
inline void UNativeReplayTimelineBasicWidget::OnClickPauseButton() {
	static auto fn = UObject::FindObject<UFunction>("Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.OnClickPauseButton");

	struct OnClickPauseButton_Params {
		
	}; OnClickPauseButton_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.OnCheckStateChangedShowKnockout
inline void UNativeReplayTimelineBasicWidget::OnCheckStateChangedShowKnockout(char bIsChecked) {
	static auto fn = UObject::FindObject<UFunction>("Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.OnCheckStateChangedShowKnockout");

	struct OnCheckStateChangedShowKnockout_Params {
		char bIsChecked;
	}; OnCheckStateChangedShowKnockout_Params Params;

	Params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.OnCheckStateChangedShowKill
inline void UNativeReplayTimelineBasicWidget::OnCheckStateChangedShowKill(char bIsChecked) {
	static auto fn = UObject::FindObject<UFunction>("Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.OnCheckStateChangedShowKill");

	struct OnCheckStateChangedShowKill_Params {
		char bIsChecked;
	}; OnCheckStateChangedShowKill_Params Params;

	Params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.OnChangeCameraType
inline void UNativeReplayTimelineBasicWidget::OnChangeCameraType(enum class ECameraType CameraType, struct FString TargetPlayerName) {
	static auto fn = UObject::FindObject<UFunction>("Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.OnChangeCameraType");

	struct OnChangeCameraType_Params {
		enum class ECameraType CameraType;
		struct FString TargetPlayerName;
	}; OnChangeCameraType_Params Params;

	Params.CameraType = CameraType;
	Params.TargetPlayerName = TargetPlayerName;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.GetTimelineScale
inline float UNativeReplayTimelineBasicWidget::GetTimelineScale() {
	static auto fn = UObject::FindObject<UFunction>("Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.GetTimelineScale");

	struct GetTimelineScale_Params {
		
		float ReturnValue;

	}; GetTimelineScale_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.EnumerateMK3DKillEvents
inline void UNativeReplayTimelineBasicWidget::EnumerateMK3DKillEvents(enum class EKillType killType) {
	static auto fn = UObject::FindObject<UFunction>("Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.EnumerateMK3DKillEvents");

	struct EnumerateMK3DKillEvents_Params {
		enum class EKillType killType;
	}; EnumerateMK3DKillEvents_Params Params;

	Params.killType = killType;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.CreateEventMarker
inline struct UNativeReplayKillEventMarker UNativeReplayTimelineBasicWidget::CreateEventMarker(enum class EKillType killType) {
	static auto fn = UObject::FindObject<UFunction>("Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.CreateEventMarker");

	struct CreateEventMarker_Params {
		enum class EKillType killType;
		struct UNativeReplayKillEventMarker ReturnValue;

	}; CreateEventMarker_Params Params;

	Params.killType = killType;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.BPUpdateTimelineScale
inline void UNativeReplayTimelineBasicWidget::BPUpdateTimelineScale() {
	static auto fn = UObject::FindObject<UFunction>("Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.BPUpdateTimelineScale");

	struct BPUpdateTimelineScale_Params {
		
	}; BPUpdateTimelineScale_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.BPUpdateKillEventMarkersPos
inline void UNativeReplayTimelineBasicWidget::BPUpdateKillEventMarkersPos(enum class EKillType killType, float TotalTime) {
	static auto fn = UObject::FindObject<UFunction>("Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.BPUpdateKillEventMarkersPos");

	struct BPUpdateKillEventMarkersPos_Params {
		enum class EKillType killType;
		float TotalTime;
	}; BPUpdateKillEventMarkersPos_Params Params;

	Params.killType = killType;
	Params.TotalTime = TotalTime;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

