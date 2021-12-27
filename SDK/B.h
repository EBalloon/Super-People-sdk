// UserDefinedEnum B.B
enum class B : uint8_t {
	B = 0,
	B = 1,
	B = 2,
	B = 3,
};

// BlueprintGeneratedClass B.B
class AB : public ABravoHotelPlayerController {

public:

	struct Unknown UberGraphFrame; // 0x13D8 (8)
	struct Unknown B; // 0x13E0 (8)
	struct Unknown SmartPingSystemComponent; // 0x13E8 (8)
	struct Unknown MapSize; // 0x13F0 (12)
	char IsInWidget : 0; // 0x13FC (1)
	struct TArray<Unknown> InputActionsToBlock; // 0x1400 (16)
	struct Unknown BlueZone; // 0x1410 (8)
	struct TArray<Unknown> PhoneticAlphabetTable_NATO; // 0x1418 (16)
	char bHasJustClosed : 0; // 0x1428 (1)
	char bLineTrace : 0; // 0x1429 (1)
	struct Unknown U; // 0x1430 (8)
	struct Unknown LocalScreenPosition; // 0x1438 (8)
	struct Unknown MaxViewportSize; // 0x1440 (8)
	char ReverseSide : 0; // 0x1448 (1)
	struct Unknown SavedInventory; // 0x1450 (8)
	struct TArray<Unknown> DefaultItemList; // 0x1458 (16)
	struct FString SavedInventorySlotName; // 0x1468 (16)
	char bLoadInventoryData : 0; // 0x1478 (1)
	char bOpenSystemMenu : 0; // 0x1479 (1)
	float MinBrightness; // 0x147C (4)
	float MaxBrightness; // 0x1480 (4)
	float Contrast; // 0x1484 (4)
	char bUsePostProcessVolumeOption : 0; // 0x1488 (1)
	float FilmToeIntensity; // 0x148C (4)
	float ColorGradingGlobalGamma; // 0x1490 (4)
	char bInputModeUI : 0; // 0x1494 (1)
	struct Unknown Timer; // 0x1498 (8)
	struct Unknown DoubleclickTimer; // 0x14A0 (8)
	float CheckTime; // 0x14A8 (4)
	float DoubleClickTime; // 0x14AC (4)
	char CheckDoubleClick : 0; // 0x14B0 (1)
	struct Unknown TempLocation; // 0x14B4 (12)
	struct TArray<Unknown> NameWidgets; // 0x14C0 (16)
	int32_t CurrentNameWidgetCount; // 0x14D0 (4)
	char bNameTooltipMode : 0; // 0x14D4 (1)
	int32_t SmartPingTypeIndex; // 0x14D8 (4)
	char EableSmartPing : 0; // 0x14DC (1)
	char PingLock : 0; // 0x14DD (1)
	struct Unknown OperationMessageWidget; // 0x14E0 (8)
	struct Unknown SelectionMenu; // 0x14E8 (8)
	char IsVisibleSelectionMenu : 0; // 0x14F0 (1)
	struct TMap<Unknown, Unknown> BoostItemList; // 0x14F8 (80)
	char IgnoreMenu : 0; // 0x1548 (1)

	char HasPerkDeckWidget(); // Function B.B.HasPerkDeckWidget(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	struct Unknown GetHUDInteractionComponent(); // Function B.B.GetHUDInteractionComponent(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	char IsShowingSystemPopup(); // Function B.B.IsShowingSystemPopup(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetSmartpingInfo(struct Unknown ServerLocation, char IsAgree); // Function B.B.SetSmartpingInfo(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void MakeSmartpingInfo(struct Unknown ServerLocation, char IsAgree); // Function B.B.MakeSmartpingInfo(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CalcZLocation(struct Unknown WorldLocation, float& ZLocation); // Function B.B.CalcZLocation(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnMakeSmartpingInfo(int32_t PingTypeIndex, struct Unknown ServerLocation, char IsAgree); // Function B.B.OnMakeSmartpingInfo(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ShowPerkDeckPopup(); // Function B.B.ShowPerkDeckPopup(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void IsSpectating(char& IsSpectating); // Function B.B.IsSpectating(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void HideInteractive(); // Function B.B.HideInteractive(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	struct Unknown GetSmartPingSystem(); // Function B.B.GetSmartPingSystem(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CheckInputState(); // Function B.B.CheckInputState(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void IsMatchEnd(char& State); // Function B.B.IsMatchEnd(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void IsOpenSystemPopup(char& bResult); // Function B.B.IsOpenSystemPopup(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void GetSpectatorTargetRank(char& Result, int32_t& Rank); // Function B.B.GetSpectatorTargetRank(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	char IsGlobalPostProcessVolume(struct Unknown Other); // Function B.B.IsGlobalPostProcessVolume(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SaveInventoryData(char bSaveAppearlance); // Function B.B.SaveInventoryData(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CheckSavedInventoryData(); // Function B.B.CheckSavedInventoryData(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetDefaultItem(); // Function B.B.SetDefaultItem(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void RunInventoryDataCommand(struct Unknown SavedInventoryData); // Function B.B.RunInventoryDataCommand(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void AddInBackpackItem(); // Function B.B.AddInBackpackItem(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Add(); // Function B.B.Add(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Add(); // Function B.B.Add(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void GetPlayerSpectatorHUD(struct Unknown& RefSpectatorHUD); // Function B.B.GetPlayerSpectatorHUD(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CalcReverseSideScreenPosition(struct Unknown WorldLocation, float& OutScreenPositionAngle); // Function B.B.CalcReverseSideScreenPosition(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CorrectionScreenPositionByTeamPositionWidget(struct Unknown& ScreenPosition, char& RetOutScreenPosition); // Function B.B.CorrectionScreenPositionByTeamPositionWidget(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void GetCurrentViewportMaxSizeByTeamPositionWidget(struct Unknown& ViewportMaxSize); // Function B.B.GetCurrentViewportMaxSizeByTeamPositionWidget(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetActionBlocked(char bWantsToBlock, struct TArray<Unknown>& ActionNames, struct Unknown Widget); // Function B.B.SetActionBlocked(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void DoNothing(); // Function B.B.DoNothing(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void GetPlayerMainWidget(char bWantsToCreateIfNull, struct Unknown& Widget); // Function B.B.GetPlayerMainWidget(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void GetInventoryWidget(char bWantsToCreateIfNull, struct Unknown& Widget); // Function B.B.GetInventoryWidget(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void GetPlayerHUD(char& IsAlive, struct Unknown& PlayerHUD); // Function B.B.GetPlayerHUD(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void GetPawnPosition(struct Unknown& out_Position, struct Unknown& out_MapSize); // Function B.B.GetPawnPosition(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void InpActEvt_Ctrl_5(struct Unknown Key); // Function B.B.InpActEvt_Ctrl_5(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void InpActEvt_Ctrl_B_K2Node_InputKeyEvent_4(struct Unknown Key); // Function B.B.InpActEvt_Ctrl_B_K2Node_InputKeyEvent_4(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void InpActEvt_LeftControl_K2Node_InputKeyEvent_3(struct Unknown Key); // Function B.B.InpActEvt_LeftControl_K2Node_InputKeyEvent_3(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void InpActEvt_LeftControl_K2Node_InputKeyEvent_2(struct Unknown Key); // Function B.B.InpActEvt_LeftControl_K2Node_InputKeyEvent_2(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void InpActEvt_AcceptUI_K2Node_InputActionEvent_6(struct Unknown Key); // Function B.B.InpActEvt_AcceptUI_K2Node_InputActionEvent_6(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void InpActEvt_MiniMap_K2Node_InputActionEvent_5(struct Unknown Key); // Function B.B.InpActEvt_MiniMap_K2Node_InputActionEvent_5(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void InpActEvt_CloseUI_K2Node_InputActionEvent_4(struct Unknown Key); // Function B.B.InpActEvt_CloseUI_K2Node_InputActionEvent_4(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void InpActEvt_OptionMenu_K2Node_InputActionEvent_3(struct Unknown Key); // Function B.B.InpActEvt_OptionMenu_K2Node_InputActionEvent_3(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void InpActEvt_ToggleInGameHUD_K2Node_InputActionEvent_2(struct Unknown Key); // Function B.B.InpActEvt_ToggleInGameHUD_K2Node_InputActionEvent_2(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void InpActEvt_ToggleGuideWidget_K2Node_InputActionEvent_1(struct Unknown Key); // Function B.B.InpActEvt_ToggleGuideWidget_K2Node_InputActionEvent_1(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void InpActEvt_J_K2Node_InputKeyEvent_1(struct Unknown Key); // Function B.B.InpActEvt_J_K2Node_InputKeyEvent_1(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OpenMarket(); // Function B.B.OpenMarket(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CustomEvent_1(); // Function B.B.CustomEvent_1(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void (); // Function B.B.(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CloseBlackMarket(); // Function B.B.CloseBlackMarket(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OpenBlackMarket(); // Function B.B.OpenBlackMarket(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Cheat(struct FString CheatCommand); // Function B.B.Cheat(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SmartPingConfirmHoldUI_BP(); // Function B.B.SmartPingConfirmHoldUI_BP(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SmartPingCancelHoldUI_BP(); // Function B.B.SmartPingCancelHoldUI_BP(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SmartPingReleased_BP(char bIgnoreMenu); // Function B.B.SmartPingReleased_BP(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SmartPingPressed_BP(char bIgnoreMenu); // Function B.B.SmartPingPressed_BP(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SmartPingFastAgree(); // Function B.B.SmartPingFastAgree(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SmartPingHotKey_BP(int32_t Index); // Function B.B.SmartPingHotKey_BP(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ClientSetSmartpingInfo(struct Unknown ServerLocation, char IsAgree); // Function B.B.ClientSetSmartpingInfo(Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ServerMakeSmartpingInfo(struct Unknown ServerLocation, char IsAgree); // Function B.B.ServerMakeSmartpingInfo(Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnInputInventory(); // Function B.B.OnInputInventory(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void EnterSceneOfWin(char bWin); // Function B.B.EnterSceneOfWin(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void LoadInventoryData(); // Function B.B.LoadInventoryData(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void InputModeUI(struct Unknown Widget); // Function B.B.InputModeUI(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void InputModeGame(struct Unknown Widget); // Function B.B.InputModeGame(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ServerEnterSceneOfWin(); // Function B.B.ServerEnterSceneOfWin(Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ClientEnterSceneOfWin(); // Function B.B.ClientEnterSceneOfWin(Net|NetClient|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OpenPerkDeckPopup(); // Function B.B.OpenPerkDeckPopup(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void K2_SaveInventoryData(); // Function B.B.K2_SaveInventoryData(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void NotifyOperationMessage(struct FText& NotifyText); // Function B.B.NotifyOperationMessage(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void InsertMarker(); // Function B.B.InsertMarker(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void (struct FName ItemKey); // Function B.B.(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetUseItemSelectMenu(char bIsShow); // Function B.B.SetUseItemSelectMenu(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetBoostItemSelectMenu(char bIsShow); // Function B.B.SetBoostItemSelectMenu(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CustomEvent(struct FName ItemKey); // Function B.B.CustomEvent(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CheckNameTooltip(); // Function B.B.CheckNameTooltip(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void RemoveallCharacterToolTip(); // Function B.B.RemoveallCharacterToolTip(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CreateCharacterToolTip(); // Function B.B.CreateCharacterToolTip(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_B(int32_t EntryPoint); // Function B.B.ExecuteUbergraph_B(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// BlueprintGeneratedClass B.B
class AB : public ABravoHotelProjectileMolotovFireCell {

public:

	struct Unknown UberGraphFrame; // 0x398 (8)
	float TextureScale; // 0x3A0 (4)
	float BurnArea; // 0x3A4 (4)

	void ReceiveBeginPlay(); // Function B.B.ReceiveBeginPlay(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_B(int32_t EntryPoint); // Function B.B.ExecuteUbergraph_B(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// BlueprintGeneratedClass B.B
class AB : public ABravoHotelProjectileMolotovFireCell {

public:

	struct Unknown UberGraphFrame; // 0x398 (8)
	float TextureScale; // 0x3A0 (4)
	float BurnArea; // 0x3A4 (4)

	void ReceiveBeginPlay(); // Function B.B.ReceiveBeginPlay(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_B(int32_t EntryPoint); // Function B.B.ExecuteUbergraph_B(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// BlueprintGeneratedClass B.B
class AB : public UActor {

public:

	struct Unknown UberGraphFrame; // 0x310 (8)
	struct Unknown WorldViewCamera; // 0x318 (8)
	struct Unknown FarCamera; // 0x320 (8)
	struct Unknown NearCamera; // 0x328 (8)
	struct Unknown DefaultSceneRoot; // 0x330 (8)
	struct Unknown CharacterRef; // 0x338 (8)
	struct Unknown TargetNearCameraTransform; // 0x340 (48)
	float DeltaTime; // 0x370 (4)
	struct Unknown TargetFarCameraTransform; // 0x380 (48)
	struct Unknown PlayerControllerRef; // 0x3B0 (8)
	char bIsBackgroundScene : 0; // 0x3B8 (1)
	struct TArray<Unknown> WinTeamCharacters; // 0x3C0 (16)
	struct TArray<Unknown> DuoLocation_Near; // 0x3D0 (16)
	struct Unknown CharacterOriginLocation; // 0x3E0 (12)
	struct TArray<Unknown> DuoRotation_Near; // 0x3F0 (16)
	struct TArray<Unknown> DuoLocation_Far; // 0x400 (16)
	struct TArray<Unknown> DuoRotation_Far; // 0x410 (16)
	struct TArray<Unknown> TrioLocation_Near; // 0x420 (16)
	struct TArray<Unknown> TrioRotation_Near; // 0x430 (16)
	struct TArray<Unknown> TrioLocation_Far; // 0x440 (16)
	struct TArray<Unknown> TrioRotation_Far; // 0x450 (16)
	struct TArray<Unknown> SquadLocation_Near; // 0x460 (16)
	struct TArray<Unknown> SquadRotation_Near; // 0x470 (16)
	struct TArray<Unknown> SquadLocation_Far; // 0x480 (16)
	struct TArray<Unknown> SquadRotation_Far; // 0x490 (16)
	struct Unknown CharacterOriginRotation; // 0x4A0 (12)

	void GetFloorLocation(struct Unknown InLocation, struct Unknown& OutLocation); // Function B.B.GetFloorLocation(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void UpdateCharacterRotation(); // Function B.B.UpdateCharacterRotation(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void UpdateCharacterLocation(); // Function B.B.UpdateCharacterLocation(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void PlayWinAnimation(struct Unknown TargetCharacter); // Function B.B.PlayWinAnimation(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Get(struct Unknown TargetCharacter, struct Unknown& WinMontage); // Function B.B.Get(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CheckWorldViewCameraLocationRange(); // Function B.B.CheckWorldViewCameraLocationRange(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void GetActiveCamera(struct Unknown& ActiveCamera); // Function B.B.GetActiveCamera(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void PreventCameraWallCollision(); // Function B.B.PreventCameraWallCollision(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void InitReferences(char& bSuccess); // Function B.B.InitReferences(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ReceiveBeginPlay(); // Function B.B.ReceiveBeginPlay(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ReceiveTick(float DeltaSeconds); // Function B.B.ReceiveTick(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Start(); // Function B.B.Start(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnFinishMatchEndAnimation(); // Function B.B.OnFinishMatchEndAnimation(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_B(int32_t EntryPoint); // Function B.B.ExecuteUbergraph_B(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// BlueprintGeneratedClass B.B
class AB : public AB {

public:

	struct Unknown Sphere; // 0x420 (8)
};

// BlueprintGeneratedClass B.B
class UB : public UBravoHotelGameInstance {

public:

	struct Unknown UberGraphFrame; // 0x5A0 (8)
	struct Unknown Game; // 0x5A8 (8)
	struct Unknown LastPCPosition; // 0x5B0 (12)

	void Update(char Audio, float Volume, char& ); // Function B.B.Update(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Run(struct FString Console, char& ); // Function B.B.Run(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Get(struct Unknown& SettingsWrapper); // Function B.B.Get(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void StartRecordingReplay(); // Function B.B.StartRecordingReplay(Net|NetClient|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void StopRecordingReplay(); // Function B.B.StopRecordingReplay(Net|NetClient|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ReceiveInit(); // Function B.B.ReceiveInit(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_B(int32_t EntryPoint); // Function B.B.ExecuteUbergraph_B(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// BlueprintGeneratedClass B.B
class AB : public UActor {

public:

	struct Unknown UberGraphFrame; // 0x310 (8)
	struct Unknown WorldViewCamera; // 0x318 (8)
	struct Unknown FarCamera; // 0x320 (8)
	struct Unknown NearCamera; // 0x328 (8)
	struct Unknown DefaultSceneRoot; // 0x330 (8)
	struct Unknown CharacterRef; // 0x338 (8)
	struct Unknown TargetNearCameraTransform; // 0x340 (48)
	float DeltaTime; // 0x370 (4)
	struct Unknown TargetFarCameraTransform; // 0x380 (48)
	struct Unknown PlayerControllerRef; // 0x3B0 (8)
	char bIsBackgroundScene : 0; // 0x3B8 (1)
	struct TArray<Unknown> WinTeamCharacters; // 0x3C0 (16)
	struct TArray<Unknown> DuoLocation_Near; // 0x3D0 (16)
	struct Unknown CharacterOriginLocation; // 0x3E0 (12)
	struct TArray<Unknown> DuoRotation_Near; // 0x3F0 (16)
	struct TArray<Unknown> DuoLocation_Far; // 0x400 (16)
	struct TArray<Unknown> DuoRotation_Far; // 0x410 (16)
	struct TArray<Unknown> TrioLocation_Near; // 0x420 (16)
	struct TArray<Unknown> TrioRotation_Near; // 0x430 (16)
	struct TArray<Unknown> TrioLocation_Far; // 0x440 (16)
	struct TArray<Unknown> TrioRotation_Far; // 0x450 (16)
	struct TArray<Unknown> SquadLocation_Near; // 0x460 (16)
	struct TArray<Unknown> SquadRotation_Near; // 0x470 (16)
	struct TArray<Unknown> SquadLocation_Far; // 0x480 (16)
	struct TArray<Unknown> SquadRotation_Far; // 0x490 (16)
	struct Unknown CharacterOriginRotation; // 0x4A0 (12)

	void ResetCharacter(); // Function B.B.ResetCharacter(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void GetFloorLocation(struct Unknown InLocation, struct Unknown& OutLocation); // Function B.B.GetFloorLocation(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void UpdateCharacterRotation(); // Function B.B.UpdateCharacterRotation(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void UpdateCharacterLocation(); // Function B.B.UpdateCharacterLocation(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void PlayWinAnimation(struct Unknown TargetCharacter); // Function B.B.PlayWinAnimation(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Get(struct Unknown TargetCharacter, struct Unknown& WinMontage); // Function B.B.Get(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CheckWorldViewCameraLocationRange(); // Function B.B.CheckWorldViewCameraLocationRange(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void GetActiveCamera(struct Unknown& ActiveCamera); // Function B.B.GetActiveCamera(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void PreventCameraWallCollision(); // Function B.B.PreventCameraWallCollision(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void InitReferences(char& bSuccess); // Function B.B.InitReferences(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ReceiveBeginPlay(); // Function B.B.ReceiveBeginPlay(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ReceiveTick(float DeltaSeconds); // Function B.B.ReceiveTick(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Start(); // Function B.B.Start(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_B(int32_t EntryPoint); // Function B.B.ExecuteUbergraph_B(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// BlueprintGeneratedClass B.B
class AB : public ABravoHotelMaterialEffectActor {

public:

	struct Unknown Tire_RL; // 0x460 (8)
	struct Unknown Tire_FL; // 0x468 (8)
	struct Unknown Tire_RR; // 0x470 (8)
	struct Unknown Tire_FR; // 0x478 (8)
	struct Unknown SkeletalMesh; // 0x480 (8)
	struct Unknown DefaultSceneRoot; // 0x488 (8)

	void UserConstructionScript(); // Function B.B.UserConstructionScript(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// BlueprintGeneratedClass B.B
class AB : public ABravoHotelSpectatorPawn {

public:

	struct Unknown UberGraphFrame; // 0x3D0 (8)
	struct Unknown Camera; // 0x3D8 (8)
	struct Unknown SpringArm; // 0x3E0 (8)
	char bKillCam : 0; // 0x3E8 (1)

	void TargetSetting(); // Function B.B.TargetSetting(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void GetTargetByUID(int32_t UID, struct Unknown& TargetPawn); // Function B.B.GetTargetByUID(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void KillCamTarget(); // Function B.B.KillCamTarget(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnSetTarget(); // Function B.B.OnSetTarget(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_B(int32_t EntryPoint); // Function B.B.ExecuteUbergraph_B(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// BlueprintGeneratedClass B.B
class UB : public UB {

public:

	struct Unknown UberGraphFrame; // 0x140 (8)
	char bHasJustClosed_1 : 0; // 0x148 (1)
	float defaultContrast_1; // 0x14C (4)
	float defaultMaxBrightness_1; // 0x150 (4)
	float defaultMinBrightness_1; // 0x154 (4)
	float MinBrightness_1; // 0x158 (4)
	float MaxBrightness_1; // 0x15C (4)
	float Contrast_1; // 0x160 (4)
	char bUsePostProcessVolumeOption_1 : 0; // 0x164 (1)
	float ColorGradingGlobalGamma_1; // 0x168 (4)
	float FilmToeIntensity_1; // 0x16C (4)
	char IsInWidget_1 : 0; // 0x170 (1)
	char bInputModeUI_1 : 0; // 0x171 (1)
	struct TArray<Unknown> InputActionsToBlock_1; // 0x178 (16)

	void CheckAnyAction(char& AnyAction); // Function B.B.CheckAnyAction(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CheckAnyCloseUI(char& AnyClosed); // Function B.B.CheckAnyCloseUI(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	struct Unknown GetSightInfoWidget(); // Function B.B.GetSightInfoWidget(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void GetReplayWidget(char WantsToCreateIfNull, struct Unknown& Widget); // Function B.B.GetReplayWidget(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void GetSpectatorWidget(char WantsToCreateIfNull, struct Unknown& Widget); // Function B.B.GetSpectatorWidget(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void GetInventoryWidget(char WantsToCreateIfNull, struct Unknown& Widget); // Function B.B.GetInventoryWidget(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void GetPlayerSpectatorHUD(struct Unknown& RefSpectatorHUD); // Function B.B.GetPlayerSpectatorHUD(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void IsReplay(char& IsReplay); // Function B.B.IsReplay(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void IsOpenSystemPopup(char& bResult); // Function B.B.IsOpenSystemPopup(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void GetPlayerMainWidget(char WantsToCreateIfNull, struct Unknown& Widget); // Function B.B.GetPlayerMainWidget(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void IsMatchEnd(char& State); // Function B.B.IsMatchEnd(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void InputMiniMap(); // Function B.B.InputMiniMap(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void InputWorldMap(); // Function B.B.InputWorldMap(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void InputToggleIngameHUD(); // Function B.B.InputToggleIngameHUD(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_B(int32_t EntryPoint); // Function B.B.ExecuteUbergraph_B(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// BlueprintGeneratedClass B.B
class AB : public AB {

public:

	struct Unknown UberGraphFrame; // 0x22F0 (8)

	void ReceiveBeginPlay(); // Function B.B.ReceiveBeginPlay(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_B(int32_t EntryPoint); // Function B.B.ExecuteUbergraph_B(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// BlueprintGeneratedClass B.B
class AB : public AB {

public:

	struct Unknown BravoHotelVehicleTire_RR; // 0xD00 (8)
	struct Unknown BravoHotelVehicleTire_RL; // 0xD08 (8)
	struct Unknown BravoHotelVehicleTire_FR; // 0xD10 (8)
	struct Unknown BravoHotelVehicleTire_FL; // 0xD18 (8)
	struct Unknown VehicleSeatCollision1; // 0xD20 (8)
	struct Unknown VehicleSeatCollision; // 0xD28 (8)
	struct Unknown BravoHotelVehicleSeat01; // 0xD30 (8)
};

// BlueprintGeneratedClass B.B
class AB : public ABravoHotelProjectileGrenadeBomb {

public:

	struct Unknown UberGraphFrame; // 0x678 (8)
	struct Unknown Ak; // 0x680 (8)

	void BndEvt__SphereCollision_K2Node_ComponentBoundEvent_0_ComponentHitSignature__Dele(struct Unknown HitComponent, struct Unknown OtherActor, struct Unknown OtherComp, struct Unknown NormalImpulse, struct Unknown& Hit); // Function B.B.BndEvt__SphereCollision_K2Node_ComponentBoundEvent_0_ComponentHitSignature__Dele(HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_B(int32_t EntryPoint); // Function B.B.ExecuteUbergraph_B(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// BlueprintGeneratedClass B.B
class AB : public ABravoHotelLobbyPlayerController {

public:

	struct Unknown UberGraphFrame; // 0x720 (8)
	struct Unknown B; // 0x728 (8)
	struct FMulticastInlineDelegate EventDispatcher_PlayLobbySound; // 0x730 (16)
	struct FMulticastInlineDelegate EventDispatcher_StopLobbySound; // 0x740 (16)
	struct Unknown MediaSoundComponent; // 0x750 (8)
	struct Unknown OperationMessageWidget; // 0x758 (8)
	enum class Unknow CurrentSceneType; // 0x760 (1)
	struct Unknown LobbyWidgetRef; // 0x768 (8)

	void CanInput(char& bCheck); // Function B.B.CanInput(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CheckCohLoad(char& bCheck); // Function B.B.CheckCohLoad(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CheckWantPopupEvent(char& bCheck); // Function B.B.CheckWantPopupEvent(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	struct Unknown GetHUDInteractionComponent(); // Function B.B.GetHUDInteractionComponent(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void UpdateMouseWheel(float Delta); // Function B.B.UpdateMouseWheel(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void UpdateMouseY(float Delta); // Function B.B.UpdateMouseY(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void UpdateMouseX(float Delta); // Function B.B.UpdateMouseX(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CreateDefaultSkin(); // Function B.B.CreateDefaultSkin(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void GetLobbyMainWidget(struct Unknown& Widget); // Function B.B.GetLobbyMainWidget(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void InpActEvt_CloseUI_K2Node_InputActionEvent_2(struct Unknown Key); // Function B.B.InpActEvt_CloseUI_K2Node_InputActionEvent_2(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void InpActEvt_LobbyMoveTab_K2Node_InputActionEvent_1(struct Unknown Key); // Function B.B.InpActEvt_LobbyMoveTab_K2Node_InputActionEvent_1(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void InpAxisEvt_Turn_K2Node_InputAxisEvent_1(float AxisValue); // Function B.B.InpAxisEvt_Turn_K2Node_InputAxisEvent_1(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void InpAxisEvt_LookUp_K2Node_InputAxisEvent_2(float AxisValue); // Function B.B.InpAxisEvt_LookUp_K2Node_InputAxisEvent_2(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void InpAxisEvt_ZoomAxis_K2Node_InputAxisEvent_5(float AxisValue); // Function B.B.InpAxisEvt_ZoomAxis_K2Node_InputAxisEvent_5(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void PlayTutorial(); // Function B.B.PlayTutorial(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ReceiveBeginPlay(); // Function B.B.ReceiveBeginPlay(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void NotifyOperationMessage(struct FText& NotifyText); // Function B.B.NotifyOperationMessage(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ChangedSceneDelegate_Event_1(enum class Unknow SceneType); // Function B.B.ChangedSceneDelegate_Event_1(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnInputPopupEvent(); // Function B.B.OnInputPopupEvent(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CreateOptionPopup(); // Function B.B.CreateOptionPopup(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_B(int32_t EntryPoint); // Function B.B.ExecuteUbergraph_B(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void EventDispatcher_StopLobbySound__DelegateSignature(); // Function B.B.EventDispatcher_StopLobbySound__DelegateSignature(Public|Delegate|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void EventDispatcher_PlayLobbySound__DelegateSignature(); // Function B.B.EventDispatcher_PlayLobbySound__DelegateSignature(Public|Delegate|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// BlueprintGeneratedClass B.B
class AB : public AB {

public:

	struct Unknown UberGraphFrame; // 0x3AC8 (8)
	struct Unknown Listener; // 0x3AD0 (8)
	float _P_Cam_Z_NewTrack_0_898B65D1462B08609DA61C81A7B52313; // 0x3AD8 (4)
	char _P_Cam_Z__Direction_898B65D1462B08609DA61C81A7B52313; // 0x3ADC (1)
	struct Unknown 3P_Cam_Z; // 0x3AE0 (8)
	struct Unknown CriticalUITimeHandler; // 0x3AE8 (8)
	struct Unknown DyingUITimeHandler; // 0x3AF0 (8)
	struct Unknown ClothHandler; // 0x3AF8 (8)
	struct Unknown ClothBallObject; // 0x3B00 (8)
	struct Unknown BallHandleLocation; // 0x3B08 (12)
	float GamepadInputModifier; // 0x3B14 (4)
	float BaseTurnRate; // 0x3B18 (4)
	float BaseLookUpRate; // 0x3B1C (4)
	struct TArray<Unknown> PerkLevelUpWidgets; // 0x3B20 (16)
	float PerkLevelUpWidthDepth; // 0x3B30 (4)
	struct Unknown AmplifierEffect; // 0x3B38 (8)
	float Cam_Shake_Radius; // 0x3B40 (4)
	struct Unknown MainWidget; // 0x3B48 (8)
	struct Unknown HeartBeatSensorEffect; // 0x3B50 (8)

	char IsEnableSpawnSupplyBox(struct Unknown TargetActor, struct FString& OutResult); // Function B.B.IsEnableSpawnSupplyBox(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	char IsInstancedFoliageActor(struct Unknown TargetActor); // Function B.B.IsInstancedFoliageActor(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void GetMainWidget(struct Unknown& MainWidget); // Function B.B.GetMainWidget(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void 3P_Cam_Z__FinishedFunc(); // Function B.B.3P_Cam_Z__FinishedFunc(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void 3P_Cam_Z__UpdateFunc(); // Function B.B.3P_Cam_Z__UpdateFunc(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_19(struct Unknown Key); // Function B.B.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_19(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void InpActEvt_RightMouseButton_K2Node_InputKeyEvent_18(struct Unknown Key); // Function B.B.InpActEvt_RightMouseButton_K2Node_InputKeyEvent_18(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void InpActEvt_One_K2Node_InputKeyEvent_17(struct Unknown Key); // Function B.B.InpActEvt_One_K2Node_InputKeyEvent_17(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void InpActEvt_Two_K2Node_InputKeyEvent_16(struct Unknown Key); // Function B.B.InpActEvt_Two_K2Node_InputKeyEvent_16(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void InpActEvt_Three_K2Node_InputKeyEvent_15(struct Unknown Key); // Function B.B.InpActEvt_Three_K2Node_InputKeyEvent_15(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void InpActEvt_Four_K2Node_InputKeyEvent_14(struct Unknown Key); // Function B.B.InpActEvt_Four_K2Node_InputKeyEvent_14(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void InpActEvt_Five_K2Node_InputKeyEvent_13(struct Unknown Key); // Function B.B.InpActEvt_Five_K2Node_InputKeyEvent_13(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void InpActEvt_Six_K2Node_InputKeyEvent_12(struct Unknown Key); // Function B.B.InpActEvt_Six_K2Node_InputKeyEvent_12(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void InpActEvt_Seven_K2Node_InputKeyEvent_11(struct Unknown Key); // Function B.B.InpActEvt_Seven_K2Node_InputKeyEvent_11(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void InpActEvt_Eight_K2Node_InputKeyEvent_10(struct Unknown Key); // Function B.B.InpActEvt_Eight_K2Node_InputKeyEvent_10(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void InpActEvt_Ctrl_One_K2Node_InputKeyEvent_9(struct Unknown Key); // Function B.B.InpActEvt_Ctrl_One_K2Node_InputKeyEvent_9(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void InpActEvt_Ctrl_Two_K2Node_InputKeyEvent_8(struct Unknown Key); // Function B.B.InpActEvt_Ctrl_Two_K2Node_InputKeyEvent_8(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void InpActEvt_Ctrl_Three_K2Node_InputKeyEvent_7(struct Unknown Key); // Function B.B.InpActEvt_Ctrl_Three_K2Node_InputKeyEvent_7(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void InpActEvt_Ctrl_Four_K2Node_InputKeyEvent_6(struct Unknown Key); // Function B.B.InpActEvt_Ctrl_Four_K2Node_InputKeyEvent_6(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void InpActEvt_Ctrl_Five_K2Node_InputKeyEvent_5(struct Unknown Key); // Function B.B.InpActEvt_Ctrl_Five_K2Node_InputKeyEvent_5(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void InpActEvt_Ctrl_Six_K2Node_InputKeyEvent_4(struct Unknown Key); // Function B.B.InpActEvt_Ctrl_Six_K2Node_InputKeyEvent_4(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void InpActEvt_Ctrl_Seven_K2Node_InputKeyEvent_3(struct Unknown Key); // Function B.B.InpActEvt_Ctrl_Seven_K2Node_InputKeyEvent_3(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void InpActEvt_Ctrl_Eight_K2Node_InputKeyEvent_2(struct Unknown Key); // Function B.B.InpActEvt_Ctrl_Eight_K2Node_InputKeyEvent_2(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void InpActEvt_NumPadZero_K2Node_InputKeyEvent_1(struct Unknown Key); // Function B.B.InpActEvt_NumPadZero_K2Node_InputKeyEvent_1(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ReceiveBeginPlay(); // Function B.B.ReceiveBeginPlay(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ReceiveTick(float DeltaSeconds); // Function B.B.ReceiveTick(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetCharacterIntheWater(); // Function B.B.SetCharacterIntheWater(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnDeath(); // Function B.B.OnDeath(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnSaveInventoryData(); // Function B.B.OnSaveInventoryData(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void AddPerkEvent(struct Unknown& PerkInfo, struct Unknown& InCurrentDisplayAbility, int32_t LastLevel, int32_t ClassLevel, enum class Unknow LevelUpType); // Function B.B.AddPerkEvent(Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void RemovePerkLevelUI(); // Function B.B.RemovePerkLevelUI(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CreatePerkLevelUI(int32_t Count); // Function B.B.CreatePerkLevelUI(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void PerkSpinEvent(char bShow, int32_t Count, enum class Unknow Slot); // Function B.B.PerkSpinEvent(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ShowAmplifierEffect(char IsAmplifierEffect, float AmplifierLength); // Function B.B.ShowAmplifierEffect(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnLanded(struct Unknown& Hit); // Function B.B.OnLanded(Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ReadyGivePerkEvent(); // Function B.B.ReadyGivePerkEvent(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void KillGivePerkEvent(int32_t KillCount); // Function B.B.KillGivePerkEvent(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ShowHeartBeatSensorEffect(char IsHeartBeatSensorEffect, float HeartBeatSensorLength); // Function B.B.ShowHeartBeatSensorEffect(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_B(int32_t EntryPoint); // Function B.B.ExecuteUbergraph_B(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// BlueprintGeneratedClass B.B
class UB : public USavedInventorySettings {

public:

	char ShowPerkSlot : 0; // 0x30 (1)
};

// BlueprintGeneratedClass B.B
class UB : public USaveGame {

public:

	struct TArray<Unknown> WearableItemList; // 0x28 (16)
	struct TArray<Unknown> CustomItemList; // 0x38 (16)
	struct TArray<Unknown> WeaponItemList; // 0x48 (16)
	struct TArray<Unknown> InBackpackItemList; // 0x58 (16)
	struct Unknown AppearanceInfo; // 0x68 (20)
};

// BlueprintGeneratedClass B.B
class AB : public ABravoHotelProjectileGrenadeBomb {

public:

	struct Unknown UberGraphFrame; // 0x678 (8)
	struct Unknown Ak; // 0x680 (8)

	void BndEvt__SphereCollision_K2Node_ComponentBoundEvent_0_ComponentHitSignature__Dele(struct Unknown HitComponent, struct Unknown OtherActor, struct Unknown OtherComp, struct Unknown NormalImpulse, struct Unknown& Hit); // Function B.B.BndEvt__SphereCollision_K2Node_ComponentBoundEvent_0_ComponentHitSignature__Dele(HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_B(int32_t EntryPoint); // Function B.B.ExecuteUbergraph_B(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// BlueprintGeneratedClass B.B
class AB : public ABravoHotelSkillTargetingNuclear {

public:

	struct Unknown UberGraphFrame; // 0x358 (8)

	void UpdateTargetSize(); // Function B.B.UpdateTargetSize(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_B(int32_t EntryPoint); // Function B.B.ExecuteUbergraph_B(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// BlueprintGeneratedClass B.B
class AB : public ABravoHotelMaterialEffectActor {

public:

	struct Unknown Tire_RL; // 0x460 (8)
	struct Unknown Tire_FL; // 0x468 (8)
	struct Unknown Tire_RR; // 0x470 (8)
	struct Unknown Tire_FR; // 0x478 (8)
	struct Unknown SkeletalMesh; // 0x480 (8)
	struct Unknown DefaultSceneRoot; // 0x488 (8)

	void UserConstructionScript(); // Function B.B.UserConstructionScript(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// BlueprintGeneratedClass B.B
class AB : public ABravoHotelMaterialEffectActor {

public:

	struct Unknown Tire_RL; // 0x460 (8)
	struct Unknown Tire_FL; // 0x468 (8)
	struct Unknown Tire_RR; // 0x470 (8)
	struct Unknown Tire_FR; // 0x478 (8)
	struct Unknown SkeletalMesh; // 0x480 (8)
	struct Unknown DefaultSceneRoot; // 0x488 (8)

	void UserConstructionScript(); // Function B.B.UserConstructionScript(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// BlueprintGeneratedClass B.B
class AB : public UActor {

public:

	struct Unknown Box; // 0x310 (8)
};

// BlueprintGeneratedClass B.B
class AB : public AB {

public:

	struct Unknown BravoHotelVehicleTire_RR; // 0xD18 (8)
	struct Unknown BravoHotelVehicleTire_RL; // 0xD20 (8)
	struct Unknown BravoHotelVehicleTire_FR; // 0xD28 (8)
	struct Unknown BravoHotelVehicleTire_FL; // 0xD30 (8)
	struct Unknown B; // 0xD38 (8)
	struct Unknown B; // 0xD40 (8)
	struct Unknown BravoHotelVehicleSeat04; // 0xD48 (8)
	struct Unknown BravoHotelVehicleSeat03; // 0xD50 (8)
	struct Unknown BravoHotelVehicleSeat02; // 0xD58 (8)
};

// WidgetBlueprintGeneratedClass B.B
class UB : public UBravoHotelLoadingWidget {

public:

	struct Unknown UberGraphFrame; // 0x2A0 (8)
	struct Unknown HorizontalBox_1; // 0x2A8 (8)
	struct Unknown Image_bg; // 0x2B0 (8)
	struct Unknown RichTextBlock; // 0x2B8 (8)
	struct Unknown RichTextBlock_Title; // 0x2C0 (8)
	struct Unknown Throbber_1; // 0x2C8 (8)
	struct Unknown VerticalBox_2; // 0x2D0 (8)
	struct TArray<Unknown> Textures; // 0x2D8 (16)
	struct Unknown Game; // 0x2E8 (8)
	struct FString TempString; // 0x2F0 (16)
	char Key : 0; // 0x300 (1)
	int32_t RandomTemp; // 0x304 (4)
	int32_t ImageIndex; // 0x308 (4)
	int32_t TitleIndex; // 0x30C (4)

	void SetInfo(enum class Unknow Type, struct Unknown& OutData); // Function B.B.SetInfo(Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnLoaded_26F99F1744F423909EA588B7F2CD8F0A(struct Unknown Loaded); // Function B.B.OnLoaded_26F99F1744F423909EA588B7F2CD8F0A(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Load(struct Unknown Texture); // Function B.B.Load(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void AsyncLoad(struct Unknown Texture); // Function B.B.AsyncLoad(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ReceiveEndAfterLoading(); // Function B.B.ReceiveEndAfterLoading(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Update(struct Unknown& Data); // Function B.B.Update(Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetDesc(struct FString Desc); // Function B.B.SetDesc(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetTitle(struct FText Title); // Function B.B.SetTitle(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetImage(struct Unknown Imgae); // Function B.B.SetImage(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Destruct(); // Function B.B.Destruct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ShowDesc(float DelayTime); // Function B.B.ShowDesc(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_B(int32_t EntryPoint); // Function B.B.ExecuteUbergraph_B(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// BlueprintGeneratedClass B.B
class UB : public UDragDropOperation {

public:

	struct Unknown WidgetReference; // 0x88 (8)
	enum class Unknow InventorySlotWidgetKind; // 0x90 (1)
};

// BlueprintGeneratedClass B.B
class UB : public USaveGame {

public:

	char bHideWorkInProgress : 0; // 0x28 (1)
	enum class Unknow MainTab; // 0x29 (1)
	enum class Unknow WeaponSubTab; // 0x2A (1)
	enum class Unknow AttachmentSubTab; // 0x2B (1)
	enum class Unknow WearableSubTab; // 0x2C (1)
	enum class Unknow CustomSubTab; // 0x2D (1)
	enum class Unknow GearSubTab; // 0x2E (1)
};

// WidgetBlueprintGeneratedClass B.B
class UB : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown B_Value; // 0x250 (8)
	struct Unknown Check; // 0x258 (8)
	struct Unknown G_Value; // 0x260 (8)
	struct Unknown Image_166; // 0x268 (8)
	struct Unknown Land; // 0x270 (8)
	struct Unknown Land_2; // 0x278 (8)
	struct Unknown Land_3; // 0x280 (8)
	struct Unknown Land_4; // 0x288 (8)
	struct Unknown Land_5; // 0x290 (8)
	struct Unknown Land_6; // 0x298 (8)
	struct Unknown R_5; // 0x2A0 (8)
	struct Unknown R_7; // 0x2A8 (8)
	struct Unknown R_9; // 0x2B0 (8)
	struct Unknown R_Value; // 0x2B8 (8)
	struct Unknown TextBlock_4; // 0x2C0 (8)
	struct Unknown TextBlock_5; // 0x2C8 (8)
	struct Unknown TextBlock_6; // 0x2D0 (8)
	struct Unknown TextBlock_8; // 0x2D8 (8)
	struct Unknown TextBlock_9; // 0x2E0 (8)
	struct Unknown TextBlock_10; // 0x2E8 (8)
	struct Unknown Timer; // 0x2F0 (8)

	void OnLoaded_395796F147F051B7CCBB17B8AB7F3577(struct Unknown Loaded); // Function B.B.OnLoaded_395796F147F051B7CCBB17B8AB7F3577(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnLoaded_9E09E1234991DF79517848BF7BB1AC45(struct Unknown Loaded); // Function B.B.OnLoaded_9E09E1234991DF79517848BF7BB1AC45(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnLoaded_4A9EA3EE453D348BBD4E76837B616AD3(struct Unknown Loaded); // Function B.B.OnLoaded_4A9EA3EE453D348BBD4E76837B616AD3(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Set(struct Unknown WeightMap); // Function B.B.Set(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Set(char Enable); // Function B.B.Set(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void (); // Function B.B.(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_B(int32_t EntryPoint); // Function B.B.ExecuteUbergraph_B(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// BlueprintGeneratedClass B.B
class AB : public ABravoHotelVehicle {

public:

	struct Unknown UberGraphFrame; // 0xCD0 (8)
	struct Unknown TeamInfoUpdater; // 0xCD8 (8)
	float Timeline_0_NewTrack_0_FB4F6B44434A25E409AE66987076220A; // 0xCE0 (4)
	char Timeline_0__Direction_FB4F6B44434A25E409AE66987076220A; // 0xCE4 (1)
	struct Unknown Timeline_1; // 0xCE8 (8)
	struct Unknown EngineSound; // 0xCF0 (8)

	void Set(); // Function B.B.Set(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	float GetCameraTargetArmLength(); // Function B.B.GetCameraTargetArmLength(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetupCamera(); // Function B.B.SetupCamera(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Timeline_0__FinishedFunc(); // Function B.B.Timeline_0__FinishedFunc(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Timeline_0__UpdateFunc(); // Function B.B.Timeline_0__UpdateFunc(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_9(struct Unknown Key); // Function B.B.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_9(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void InpActEvt_RightMouseButton_K2Node_InputKeyEvent_8(struct Unknown Key); // Function B.B.InpActEvt_RightMouseButton_K2Node_InputKeyEvent_8(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent_7(struct Unknown Key); // Function B.B.InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent_7(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent_6(struct Unknown Key); // Function B.B.InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent_6(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void InpActEvt_One_K2Node_InputKeyEvent_5(struct Unknown Key); // Function B.B.InpActEvt_One_K2Node_InputKeyEvent_5(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void InpActEvt_Two_K2Node_InputKeyEvent_4(struct Unknown Key); // Function B.B.InpActEvt_Two_K2Node_InputKeyEvent_4(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void InpActEvt_Three_K2Node_InputKeyEvent_3(struct Unknown Key); // Function B.B.InpActEvt_Three_K2Node_InputKeyEvent_3(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void InpActEvt_Four_K2Node_InputKeyEvent_2(struct Unknown Key); // Function B.B.InpActEvt_Four_K2Node_InputKeyEvent_2(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void InpActEvt_Five_K2Node_InputKeyEvent_1(struct Unknown Key); // Function B.B.InpActEvt_Five_K2Node_InputKeyEvent_1(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ReceiveBeginPlay(); // Function B.B.ReceiveBeginPlay(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Set(); // Function B.B.Set(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void K2_OnNitroJumpEnd(); // Function B.B.K2_OnNitroJumpEnd(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void K2_OnBoosterChanged(char bIsBoosted); // Function B.B.K2_OnBoosterChanged(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_B(int32_t EntryPoint); // Function B.B.ExecuteUbergraph_B(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// BlueprintGeneratedClass B.B
class AB : public AB {

public:

	struct Unknown UberGraphFrame; // 0x420 (8)
	struct Unknown Sphere; // 0x428 (8)

	void SetTexture5mm(); // Function B.B.SetTexture5mm(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_B(int32_t EntryPoint); // Function B.B.ExecuteUbergraph_B(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// BlueprintGeneratedClass B.B
class AB : public ABravoHotelAircraftBomber {

public:

	struct Unknown UberGraphFrame; // 0x320 (8)
	struct Unknown ParticleSystem; // 0x328 (8)
	struct Unknown S; // 0x330 (8)
	struct Unknown DefaultSceneRoot; // 0x338 (8)

	void ReceiveBeginPlay(); // Function B.B.ReceiveBeginPlay(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ReceiveTick(float DeltaSeconds); // Function B.B.ReceiveTick(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ReceiveDestroyed(); // Function B.B.ReceiveDestroyed(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__MovementComponent_K2Node_ComponentBoundEvent_0_OnInterpToResetDelegate__Delegate(struct Unknown& ImpactResult, float Time); // Function B.B.BndEvt__MovementComponent_K2Node_ComponentBoundEvent_0_OnInterpToResetDelegate__Delegatem(HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_B(int32_t EntryPoint); // Function B.B.ExecuteUbergraph_B(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// UserDefinedStruct B.B
struct FB {
	struct FString ItemCommandString_23_11C9379C4A2BE25F4BFADD8CBA3978CC; // 0x0 (16)
	char bEquip_9_A19EFA7A4F6CDA9056F641902DB36B2B : 0; // 0x10 (1)
	int32_t SlotIndex_14_2F87447C4959EFB11C4D328275A0351E; // 0x14 (4)
	int32_t CustomType_26_75F60B7440E043592BCFC68101490C3D; // 0x18 (4)
};

// BlueprintGeneratedClass B.B
class UB : public ULadderComponent {

public:

	struct Unknown UberGraphFrame; // 0x210 (8)
	char NeedToChangeHand : 0; // 0x218 (1)
	float CrntAxisValue; // 0x21C (4)
	float GoalLocationZ; // 0x220 (4)
	char NeedMoveOnLadder : 0; // 0x224 (1)
	float MotionMinAlpha; // 0x228 (4)
	char CanStopMotion : 0; // 0x22C (1)
	float DirectSnapLocZ; // 0x230 (4)
	float DeltaSecond; // 0x234 (4)
	float LastSecond; // 0x238 (4)
	int32_t AdditionalStepCount; // 0x23C (4)

	void CalcLadderInteractionType(); // Function B.B.CalcLadderInteractionType(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CanCancelMotion(char& CanCancel); // Function B.B.CanCancelMotion(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void GetEndLocation(struct Unknown& LadderRelativeLocation); // Function B.B.GetEndLocation(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetMovingInfo(); // Function B.B.SetMovingInfo(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void MoveInMotion(); // Function B.B.MoveInMotion(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ActiveCameraInterp(); // Function B.B.ActiveCameraInterp(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CalcSnappingTime(); // Function B.B.CalcSnappingTime(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void InitializeLadder(); // Function B.B.InitializeLadder(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetMovementOnLadder(float AxisValue); // Function B.B.SetMovementOnLadder(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void AddMovementOnLadder(float AxisValue); // Function B.B.AddMovementOnLadder(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CheckCanExitLadder(char IsTop, char& Result); // Function B.B.CheckCanExitLadder(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ChangeMovementMode(char OnLadder); // Function B.B.ChangeMovementMode(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CalcTargetLocation(enum class Unknow InLadderInteractionType, struct Unknown& OutTargetLocation); // Function B.B.CalcTargetLocation(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetCharacterClimbSettings(char ClimbOn); // Function B.B.SetCharacterClimbSettings(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SnapToLadder(); // Function B.B.SnapToLadder(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetSnappingInfo(float& DirectSnapLocZ); // Function B.B.SetSnappingInfo(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetLadderPos(); // Function B.B.SetLadderPos(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CheckLadderEnd(float Input, char& Result, char& IsTop, float& InputScale); // Function B.B.CheckLadderEnd(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnNotifyEnd_ABB5B46F49E086A9FC6EC9AE877A3650(struct FName NotifyName); // Function B.B.OnNotifyEnd_ABB5B46F49E086A9FC6EC9AE877A3650(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnNotifyBegin_ABB5B46F49E086A9FC6EC9AE877A3650(struct FName NotifyName); // Function B.B.OnNotifyBegin_ABB5B46F49E086A9FC6EC9AE877A3650(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnInterrupted_ABB5B46F49E086A9FC6EC9AE877A3650(struct FName NotifyName); // Function B.B.OnInterrupted_ABB5B46F49E086A9FC6EC9AE877A3650(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnBlendOut_ABB5B46F49E086A9FC6EC9AE877A3650(struct FName NotifyName); // Function B.B.OnBlendOut_ABB5B46F49E086A9FC6EC9AE877A3650(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnCompleted_ABB5B46F49E086A9FC6EC9AE877A3650(struct FName NotifyName); // Function B.B.OnCompleted_ABB5B46F49E086A9FC6EC9AE877A3650(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ServerSetMovementOnLadder(struct Unknown LadderLocation, float AxisValue); // Function B.B.ServerSetMovementOnLadder(Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void StopMontage(struct Unknown StopMontage); // Function B.B.StopMontage(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CompleteExitingLadder(); // Function B.B.CompleteExitingLadder(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CompleteEnteringLadder(); // Function B.B.CompleteEnteringLadder(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void MultiStopMontage(struct Unknown StopMontage); // Function B.B.MultiStopMontage(Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ServerStopMontage(struct Unknown StopMontage); // Function B.B.ServerStopMontage(Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void LadderStateEvent(); // Function B.B.LadderStateEvent(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ServerDownLadder(enum class Unknow LadderInteractionType); // Function B.B.ServerDownLadder(Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void PlayLadderAnim(); // Function B.B.PlayLadderAnim(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void StartMoveInMotion(); // Function B.B.StartMoveInMotion(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ReceiveTick(float DeltaSeconds); // Function B.B.ReceiveTick(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ReceiveBeginPlay(); // Function B.B.ReceiveBeginPlay(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CancelMotion(float AxisValue); // Function B.B.CancelMotion(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExceptionSetUsingLadder(struct Unknown UsingLadder); // Function B.B.ExceptionSetUsingLadder(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ServerUseLadder(enum class Unknow LadderInteractionType, float SnappingTime, float DirectSnapLocZ, struct Unknown UsingLadder); // Function B.B.ServerUseLadder(Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void MultiUseLadder(enum class Unknow LadderInteractionType, float SnappingTime, float DirectSnapLocZ, struct Unknown UsingLadder); // Function B.B.MultiUseLadder(Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void MultiDownLadder(enum class Unknow LadderInteractionType); // Function B.B.MultiDownLadder(Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void StartStopMontage(struct Unknown StopMontage); // Function B.B.StartStopMontage(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ServerSetLadderState(enum class Unknow LadderState); // Function B.B.ServerSetLadderState(Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void K2_StartUseladder(); // Function B.B.K2_StartUseladder(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void K2_StopUseLadder(); // Function B.B.K2_StopUseLadder(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void K2_MoveRightOnLadder(float AxisValue); // Function B.B.K2_MoveRightOnLadder(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void K2_MoveForwardOnLadder(float AxisValue); // Function B.B.K2_MoveForwardOnLadder(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_B(int32_t EntryPoint); // Function B.B.ExecuteUbergraph_B(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// UserDefinedStruct B.B
struct FB {
	struct TArray<Unknown> Res_5_7655B472457462A8D53C148A56E4FAB8; // 0x0 (16)
};

// UserDefinedStruct B.B
struct FB {
	struct TArray<Unknown> Res_6_7655B472457462A8D53C148A56E4FAB8; // 0x0 (16)
};

// BlueprintGeneratedClass B.B
class AB : public UActor {

public:

	struct Unknown UberGraphFrame; // 0x310 (8)
	struct Unknown WorldViewCamera; // 0x318 (8)
	struct Unknown DefaultSceneRoot; // 0x320 (8)
	float DeltaTime; // 0x328 (4)
	char bIsBackgroundScene : 0; // 0x32C (1)

	void CheckWorldViewCameraLocationRange(); // Function B.B.CheckWorldViewCameraLocationRange(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void PreventCameraWallCollision(); // Function B.B.PreventCameraWallCollision(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ReceiveTick(float DeltaSeconds); // Function B.B.ReceiveTick(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ReceiveBeginPlay(); // Function B.B.ReceiveBeginPlay(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_B(int32_t EntryPoint); // Function B.B.ExecuteUbergraph_B(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// BlueprintGeneratedClass B.B
class AB : public ABravoHotelAreaSkillZoneWetFog {

public:

	struct Unknown UberGraphFrame; // 0x388 (8)

	void ActivateEffect(struct Unknown Character); // Function B.B.ActivateEffect(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void DeactivateEffect(struct Unknown Character); // Function B.B.DeactivateEffect(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BPSetAreaSkillInfo(); // Function B.B.BPSetAreaSkillInfo(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void StartDestroy(); // Function B.B.StartDestroy(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_B(int32_t EntryPoint); // Function B.B.ExecuteUbergraph_B(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// BlueprintGeneratedClass B.B
class AB : public ABravoHotelAreaSkillZonePowerInterruption {

public:

	struct Unknown UberGraphFrame; // 0x368 (8)
	float SkillDelayTime; // 0x370 (4)
	struct Unknown BlackOutDynamicMaterial; // 0x378 (8)

	void UserConstructionScript(); // Function B.B.UserConstructionScript(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ActivateEffect(struct Unknown Character); // Function B.B.ActivateEffect(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void DeactivateEffect(struct Unknown Character); // Function B.B.DeactivateEffect(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BPSetAreaSkillInfo(); // Function B.B.BPSetAreaSkillInfo(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void StartDestroy(); // Function B.B.StartDestroy(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ReceiveBeginPlay(); // Function B.B.ReceiveBeginPlay(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_B(int32_t EntryPoint); // Function B.B.ExecuteUbergraph_B(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// BlueprintGeneratedClass B.B
class UB : public UBravoHotelGameSettingManager {

public:

	struct Unknown UberGraphFrame; // 0x38 (8)
	struct Unknown Game; // 0x40 (8)

	void Get(struct Unknown& SettingsWrapper); // Function B.B.Get(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Run(struct FString Console, char& ); // Function B.B.Run(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Update(char Audio, float Volume, char& ); // Function B.B.Update(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ReceiveInit(); // Function B.B.ReceiveInit(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_B(int32_t EntryPoint); // Function B.B.ExecuteUbergraph_B(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// BlueprintGeneratedClass B.B
class AB : public AB {

public:

	struct Unknown Sphere; // 0x420 (8)
};

// BlueprintGeneratedClass B.B
class AB : public ABravoHotelMaterialEffectActor {

public:

	struct Unknown Tire_RL; // 0x460 (8)
	struct Unknown Tire_FL; // 0x468 (8)
	struct Unknown Tire_RR; // 0x470 (8)
	struct Unknown Tire_FR; // 0x478 (8)
	struct Unknown SkeletalMesh; // 0x480 (8)
	struct Unknown DefaultSceneRoot; // 0x488 (8)

	void UserConstructionScript(); // Function B.B.UserConstructionScript(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// BlueprintGeneratedClass B.B
class AB : public AB {

public:

	struct Unknown BravoHotelVehicleTire_RR; // 0xD18 (8)
	struct Unknown BravoHotelVehicleTire_RL; // 0xD20 (8)
	struct Unknown BravoHotelVehicleTire_FR; // 0xD28 (8)
	struct Unknown BravoHotelVehicleTire_FL; // 0xD30 (8)
	struct Unknown B; // 0xD38 (8)
	struct Unknown B; // 0xD40 (8)
	struct Unknown BravoHotelVehicleSeat04; // 0xD48 (8)
	struct Unknown BravoHotelVehicleSeat03; // 0xD50 (8)
	struct Unknown BravoHotelVehicleSeat02; // 0xD58 (8)
};

// BlueprintGeneratedClass B.B
class AB : public ABravoHotelMK3DSpectatorPawn {

public:

	struct Unknown UberGraphFrame; // 0x3C0 (8)
	struct Unknown FreeCam; // 0x3C8 (8)
	struct Unknown SpringArm; // 0x3D0 (8)
	struct Unknown ReplayMainWidget; // 0x3D8 (8)
	char ViewMode; // 0x3E0 (1)

	void GetReplayWidget(struct Unknown& ReplayMainWidget); // Function B.B.GetReplayWidget(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ReceiveBeginPlay(); // Function B.B.ReceiveBeginPlay(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnChangedCurrentSpeedLevel(); // Function B.B.OnChangedCurrentSpeedLevel(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_B(int32_t EntryPoint); // Function B.B.ExecuteUbergraph_B(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// BlueprintGeneratedClass B.B
class AB : public ABravoHotelProjectileMolotovFireCell {

public:

	struct Unknown UberGraphFrame; // 0x398 (8)
	float TextureScale; // 0x3A0 (4)
	float BurnArea; // 0x3A4 (4)

	void ReceiveBeginPlay(); // Function B.B.ReceiveBeginPlay(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_B(int32_t EntryPoint); // Function B.B.ExecuteUbergraph_B(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// BlueprintGeneratedClass B.B
class AB : public ABHPersonalSupplyBox {

public:

	struct Unknown UberGraphFrame; // 0x378 (8)
	struct Unknown StaticMeshUnassigned; // 0x380 (8)
	struct Unknown StaticMeshAssigned; // 0x388 (8)
	float LandingTimer; // 0x390 (4)
	char bLanding : 0; // 0x394 (1)
	struct TArray<Unknown> ItemResult; // 0x398 (16)
	float ParachuteTimer; // 0x3A8 (4)
	float VisibleValue; // 0x3AC (4)
	char VisibleAnimationState : 0; // 0x3B0 (1)

	void ReceiveTick(float DeltaSeconds); // Function B.B.ReceiveTick(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void UpdateEffect(float InterpValue); // Function B.B.UpdateEffect(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ChangeBoxMesh(char IsMyBox); // Function B.B.ChangeBoxMesh(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Visible(char IsShow); // Function B.B.Visible(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnChangeState(enum class Unknow StateType); // Function B.B.OnChangeState(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ReceiveBeginPlay(); // Function B.B.ReceiveBeginPlay(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_B(int32_t EntryPoint); // Function B.B.ExecuteUbergraph_B(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass B.B
class UB : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown BackgroundBlurFadeIn; // 0x250 (8)
	struct Unknown Idle; // 0x258 (8)
	struct Unknown BackgroundBlur_1; // 0x260 (8)
	struct Unknown Btn; // 0x268 (8)
	struct Unknown Btn; // 0x270 (8)
	struct Unknown Btn; // 0x278 (8)
	struct Unknown Btn; // 0x280 (8)
	struct Unknown Canvas_Main; // 0x288 (8)
	struct Unknown KillcamBtns; // 0x290 (8)
	struct Unknown MemberChangeBox; // 0x298 (8)
	struct Unknown TextDepth_Replay; // 0x2A0 (8)
	struct Unknown U; // 0x2A8 (8)
	char bIsKillCam : 0; // 0x2B0 (1)

	struct Unknown GetInteractiveWidget(); // Function B.B.GetInteractiveWidget(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetTargetPlayerInfo(struct Unknown PlayerState); // Function B.B.SetTargetPlayerInfo(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	enum class Unknow GetVisibility_1(); // Function B.B.GetVisibility_1(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	struct FText GetText_1(); // Function B.B.GetText_1(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetReplayBtn(char bVisiable); // Function B.B.SetReplayBtn(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetTargetBtn(char bVisiable); // Function B.B.SetTargetBtn(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void AddCoreInfoRouteping(struct Unknown PlayerState); // Function B.B.AddCoreInfoRouteping(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void AddCoreInfoSmartping(struct Unknown PlayerState); // Function B.B.AddCoreInfoSmartping(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void AddKillMsgByMolotov(struct FText& Killer, struct FText& WeaponName, struct FText& Victim, char bHeasShot, char bLocalKiller, char bByTeam, char bTeamDead, int32_t AliveCount, char bKnockOut, int32_t KillerTierID, int32_t DiedTierID); // Function B.B.AddKillMsgByMolotovg(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void AddKillMsgByVehicle(struct FText& Killer, struct FText& Victim, char bLocalKiller, char bByTeam, char bTeamDead, int32_t AliveCount, char bKnockOut, int32_t KillerTierID, int32_t DiedTierID); // Function B.B.AddKillMsgByVehicle(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void AddKillMsgByWeapon(struct FText& Killer, struct FText& WeaponName, struct FText& Victim, char bHeasShot, char bLocalKiller, char bByTeam, char bTeamDead, int32_t AliveCount, char bKnockOut, int32_t KillerTierID, int32_t DiedTierID); // Function B.B.AddKillMsgByWeapon(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void AddKillMsgCrash(struct FText& Victim, char bTeamDead, int32_t AliveCount, char bKnockOut, int32_t DiedTierID); // Function B.B.AddKillMsgCrash(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void AddKillMsgFallToDeath(struct FText& Victim, char bTeamDead, int32_t AliveCount, char bKnockOut, int32_t DiedTierID); // Function B.B.AddKillMsgFallToDeath(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void AddKillMsgKnockOut(struct FText& Killer, struct FText& Victim, char bLocalKiller, char bByTeam, char bTeamDead, int32_t AliveCount, char bKnockOut, int32_t KillerTierID, int32_t DiedTierID); // Function B.B.AddKillMsgKnockOut(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void AddKillMsgMagneticField(struct FText& Victim, char bTeamDead, int32_t AliveCount, char bKnockOut, int32_t DiedTierID); // Function B.B.AddKillMsgMagneticField(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void AddKillMsgNoOxygen(struct FText& Victim, char bTeamDead, int32_t AliveCount, char bKnockOut, int32_t DiedTierID); // Function B.B.AddKillMsgNoOxygen(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void AddKillMsgRedZone(struct FText& Victim, char bTeamDead, int32_t AliveCount, char bKnockOut, int32_t DiedTierID); // Function B.B.AddKillMsgRedZone(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void AddKillMsgSuicide(struct FText& Victim, char bTeamDead, int32_t AliveCount, char bKnockOut, int32_t DiedTierID); // Function B.B.AddKillMsgSuicide(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void AddPerkMessage(struct FName PerkName, int32_t Level); // Function B.B.AddPerkMessage(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void AddPingMessage(struct FString MessageTag, char UsingBackGround); // Function B.B.AddPingMessage(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void AddRequestMessage(struct Unknown PlayerState, struct FString Message); // Function B.B.AddRequestMessage(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Close(); // Function B.B.Close(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void FinishPerkSpin(enum class Unknow LevelUpType); // Function B.B.FinishPerkSpin(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void HideAmplifier(); // Function B.B.HideAmplifier(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void HideBlueZoneNotiMessage(); // Function B.B.HideBlueZoneNotiMessage(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void HideMinimapWidget(); // Function B.B.HideMinimapWidget(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void HideTeamPositionWidget(); // Function B.B.HideTeamPositionWidget(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void HideVehicleWidget(); // Function B.B.HideVehicleWidget(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void LevelUpEvent(struct Unknown PerkInfo, int32_t CurrentLevel, enum class Unknow LevelUpType, struct Unknown DisplayAbility, int32_t LastLevel); // Function B.B.LevelUpEvent(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnChangedToggleType(enum class Unknow PreType, enum class Unknow CurrentType); // Function B.B.OnChangedToggleType(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Open(); // Function B.B.Open(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OpenMainMenu(); // Function B.B.OpenMainMenu(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void PlaySupplyBoxMessage(struct FString Message); // Function B.B.PlaySupplyBoxMessage(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ResetMiniMapPlayers(); // Function B.B.ResetMiniMapPlayers(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ResetWorldMap(); // Function B.B.ResetWorldMap(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetNickName(struct FText& NickName); // Function B.B.SetNickName(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetToggleMinimap(char bToggle); // Function B.B.SetToggleMinimap(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ShowAmplifier(struct FString InText); // Function B.B.ShowAmplifier(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ShowBlueZoneNotiMessage(struct FString Title, struct FString Desc); // Function B.B.ShowBlueZoneNotiMessage(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ShowCommonMessage(struct Unknown& MessageInfo); // Function B.B.ShowCommonMessage(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ShowDeathAndAliveMessage(struct FText& Victim, int32_t AliveCount); // Function B.B.ShowDeathAndAliveMessage(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ShowDeathUserWidget(struct Unknown& Info); // Function B.B.ShowDeathUserWidget(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ShowEnergyItemUse(int32_t Type); // Function B.B.ShowEnergyItemUse(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ShowGameProgressMessage(int32_t Type, int32_t Time); // Function B.B.ShowGameProgressMessage(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ShowGameWaitMessage(int32_t Time); // Function B.B.ShowGameWaitMessage(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ShowHittedDamage(struct Unknown InstigatorCharacter); // Function B.B.ShowHittedDamage(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ShowInventoryNotEnoughSpaceMessage(); // Function B.B.ShowInventoryNotEnoughSpaceMessage(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ShowLineOfFire(struct Unknown& Pos); // Function B.B.ShowLineOfFire(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ShowMinimapWidget(); // Function B.B.ShowMinimapWidget(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ShowMyKillInfo(struct FText& WeaponName, struct FText& Victim, int32_t KillCount, int32_t AliveCount, char bHeadShot, char bTeamKill); // Function B.B.ShowMyKillInfo(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ShowMyKnockOutInfo(struct FText& WeaponName, struct FText& Victim, char bHeadShot, char bTeamKill); // Function B.B.ShowMyKnockOutInfo(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ShowNuclearMessage(int32_t Count); // Function B.B.ShowNuclearMessage(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ShowRedZoneBombMessage(); // Function B.B.ShowRedZoneBombMessage(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ShowRedZoneStartMessage(); // Function B.B.ShowRedZoneStartMessage(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ShowReverseSideTeamPositionWidget(int32_t TeamIconIndex, float Angle, struct Unknown ScreenMaxSize); // Function B.B.ShowReverseSideTeamPositionWidget(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ShowTeamPositionWidget(int32_t TeamIndex, struct Unknown ScreenPosition, char bNetCullDistance); // Function B.B.ShowTeamPositionWidget(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ShowVehicleWidget(struct Unknown VehicleSeat); // Function B.B.ShowVehicleWidget(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void TeamInfoVisibility(char bState); // Function B.B.TeamInfoVisibility(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ToggleMiniMap(); // Function B.B.ToggleMiniMap(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void UpdateLineOfFire(struct Unknown& Pos, char LastUpdate, float delataTime); // Function B.B.UpdateLineOfFire(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__Btn(); // Function B.B.BndEvt__Btn(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__Btn(); // Function B.B.BndEvt__Btn(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__Btn(); // Function B.B.BndEvt__Btn(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__Btn(); // Function B.B.BndEvt__Btn(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OpenPopup(); // Function B.B.OpenPopup(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void StartBackGroundBlur(); // Function B.B.StartBackGroundBlur(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ResetBackGroundBlur(); // Function B.B.ResetBackGroundBlur(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__Button_Return_K2Node_ComponentBoundEvent_3_(); // Function B.B.BndEvt__Button_Return_K2Node_ComponentBoundEvent_3_(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void AddCoreInfoRequestResuscitation(struct Unknown PlayerState); // Function B.B.AddCoreInfoRequestResuscitation(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ClosePopup(); // Function B.B.ClosePopup(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void HideAnim(); // Function B.B.HideAnim(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ShowAnim(); // Function B.B.ShowAnim(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_B(int32_t EntryPoint); // Function B.B.ExecuteUbergraph_B(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// BlueprintGeneratedClass B.B
class AB : public ABravoHotelMK3DReplayController {

public:

	struct Unknown UberGraphFrame; // 0xAB0 (8)
	struct Unknown B; // 0xAB8 (8)
	int32_t OpenedWidgetNum; // 0xAC0 (4)
	char ViewMode; // 0xAC4 (1)

	struct Unknown GetHUDInteractionComponent(); // Function B.B.GetHUDInteractionComponent(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CheckItemListHide(enum class Unknow CameraType); // Function B.B.CheckItemListHide(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void GetReplaySpectatorPawn(struct Unknown& ReplaySpectatorPawn); // Function B.B.GetReplaySpectatorPawn(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void InitWorldMapOption(); // Function B.B.InitWorldMapOption(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetMaxViewportSize(); // Function B.B.SetMaxViewportSize(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnChangeViewMode(); // Function B.B.OnChangeViewMode(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnChangeCameraType(enum class Unknow CameraType); // Function B.B.OnChangeCameraType(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetVisibilityPerkDeck(); // Function B.B.SetVisibilityPerkDeck(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Init(); // Function B.B.Init(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ChangeInputMode(char ShowMouse); // Function B.B.ChangeInputMode(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CheckInputMode(); // Function B.B.CheckInputMode(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void InpActEvt_CloseUI_K2Node_InputActionEvent_3(struct Unknown Key); // Function B.B.InpActEvt_CloseUI_K2Node_InputActionEvent_3(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void InpActEvt_MiniMap_K2Node_InputActionEvent_2(struct Unknown Key); // Function B.B.InpActEvt_MiniMap_K2Node_InputActionEvent_2(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void InpActEvt_ToggleInGameHUD_K2Node_InputActionEvent_1(struct Unknown Key); // Function B.B.InpActEvt_ToggleInGameHUD_K2Node_InputActionEvent_1(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnInputWorldMap(); // Function B.B.OnInputWorldMap(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ReceiveBeginPlay(); // Function B.B.ReceiveBeginPlay(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnInputReplayTimelineWidget(); // Function B.B.OnInputReplayTimelineWidget(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnInputItemListWidget(); // Function B.B.OnInputItemListWidget(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnInputPlayerListWidget(); // Function B.B.OnInputPlayerListWidget(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ChangeCameraTypeDelegate_Event_1(enum class Unknow CameraType, struct FString TargetPlayerName); // Function B.B.ChangeCameraTypeDelegate_Event_1(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ChangeViewModeDelegate_Event_1(char ViewMode); // Function B.B.ChangeViewModeDelegate_Event_1(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnViewportSizedBP(); // Function B.B.OnViewportSizedBP(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnInputItemList(); // Function B.B.OnInputItemList(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_B(int32_t EntryPoint); // Function B.B.ExecuteUbergraph_B(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// BlueprintGeneratedClass B.B
class AB : public ABravoHotelSpectatorController {

public:

	struct Unknown UberGraphFrame; // 0x13F0 (8)
	struct Unknown Observer; // 0x13F8 (8)
	char PlayingKillCam : 0; // 0x1400 (1)
	struct Unknown AfterGameHUD; // 0x1408 (8)
	struct Unknown GameInstanceRef; // 0x1410 (8)
	char bKillCamFinish : 0; // 0x1418 (1)

	void SetObserver(); // Function B.B.SetObserver(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ReceiveBeginPlay(); // Function B.B.ReceiveBeginPlay(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void NextObservingTarget(); // Function B.B.NextObservingTarget(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void PreObservingTarget(); // Function B.B.PreObservingTarget(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetKillCamStartTime(); // Function B.B.SetKillCamStartTime(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnKillcamFinish(); // Function B.B.OnKillcamFinish(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetTargetPlayerInfo(struct Unknown PlayerState); // Function B.B.SetTargetPlayerInfo(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_B(int32_t EntryPoint); // Function B.B.ExecuteUbergraph_B(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// BlueprintGeneratedClass B.B
class AB : public ABravoHotelPlayerHUD {

public:

	struct Unknown UberGraphFrame; // 0x860 (8)
	struct Unknown DefaultSceneRoot; // 0x868 (8)
	struct TMap<Unknown, Unknown> TableInfo; // 0x870 (80)
	struct TArray<Unknown> NewVar_1; // 0x8C0 (16)
	struct TArray<Unknown> GuideWidgetStack; // 0x8D0 (16)
	enum class Unknow NewVar_2; // 0x8E0 (1)

	void IsSpectate(char& Return); // Function B.B.IsSpectate(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnShowMyKillInfoMessage(struct Unknown BroadCastInfo); // Function B.B.OnShowMyKillInfoMessage(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnShowMyKnockOutInfo(struct FText WeaponName, struct FText Victim, char IsHeadShot, char TeamKill, char SelfKill); // Function B.B.OnShowMyKnockOutInfo(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnShowMyKillInfo(struct FText WeaponName, struct FText Victim, int32_t KillCount, char IsHeadShot, char TeamKill, char SelfKill, char FinallyKill); // Function B.B.OnShowMyKillInfo(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SelectTopOrBottomWidget(enum class Unknow MessageType, struct Unknown& UserWidget); // Function B.B.SelectTopOrBottomWidget(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SelectTable(enum class Unknow TableType, struct Unknown& DataTable); // Function B.B.SelectTable(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void HideHUDMessage(enum class Unknow MessageType); // Function B.B.HideHUDMessage(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ShowHudMessageAll(); // Function B.B.ShowHudMessageAll(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ShowHudMessageAt(int32_t MessageTypeNum); // Function B.B.ShowHudMessageAt(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnAddKillMessageAll(); // Function B.B.OnAddKillMessageAll(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ShowHUDMessageAtNum(char ShowNext, int32_t TypeNum); // Function B.B.ShowHUDMessageAtNum(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ShowKillMessage(struct TArray<Unknown>& DamageTypeArray); // Function B.B.ShowKillMessage(HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ShowGuideWidget(enum class Unknow GuideType); // Function B.B.ShowGuideWidget(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void HideGuideWidget(enum class Unknow GuideType); // Function B.B.HideGuideWidget(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ShowHUDMessage(struct Unknown MessageRow); // Function B.B.ShowHUDMessage(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void K2_SetMainAndSpectatorWidgetVisiblility(char bIsVisible, char bMainWidget, char bSpectatorWidget); // Function B.B.K2_SetMainAndSpectatorWidgetVisiblility(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_B(int32_t EntryPoint); // Function B.B.ExecuteUbergraph_B(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// BlueprintGeneratedClass B.B
class AB : public ABravoHotelProjectileMolotovFireCell {

public:

	struct Unknown UberGraphFrame; // 0x398 (8)
	float TextureScale; // 0x3A0 (4)
	float BurnArea; // 0x3A4 (4)

	void ReceiveBeginPlay(); // Function B.B.ReceiveBeginPlay(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_B(int32_t EntryPoint); // Function B.B.ExecuteUbergraph_B(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// BlueprintGeneratedClass B.B
class AB : public ABravoHotelOutGameParachuteActor {

public:

	struct Unknown UberGraphFrame; // 0x310 (8)
	struct Unknown ParachuteBag_SkeletalMesh; // 0x318 (8)
	struct Unknown Parachute_SkeletalMesh; // 0x320 (8)
	struct Unknown DefaultSceneRoot; // 0x328 (8)

	void ReceiveBeginPlay(); // Function B.B.ReceiveBeginPlay(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetSkinMaterial(struct Unknown Material); // Function B.B.SetSkinMaterial(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_B(int32_t EntryPoint); // Function B.B.ExecuteUbergraph_B(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// BlueprintGeneratedClass B.B
class AB : public UActor {

public:

	struct Unknown UberGraphFrame; // 0x310 (8)
	struct Unknown FirstCamera; // 0x318 (8)
	struct Unknown FirstSpringArm; // 0x320 (8)
	struct Unknown ThirdCamera; // 0x328 (8)
	struct Unknown SecondCamera; // 0x330 (8)
	struct Unknown DefaultSceneRoot; // 0x338 (8)
	float DeltaSeconds; // 0x340 (4)
	struct Unknown TargetDeltaLocation; // 0x344 (12)
	struct Unknown Character; // 0x350 (8)
	float LowerBoundCameraHeightDelta; // 0x358 (4)
	char bHeightUpdateFinished : 0; // 0x35C (1)
	float ThridCameraRotationYawDelta; // 0x360 (4)
	float ThirdCameraMinHeight; // 0x364 (4)
	float FirstSpringArmDeltaZ; // 0x368 (4)

	void CheckThirdCameraLocationRange(); // Function B.B.CheckThirdCameraLocationRange(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void UpdateActorRotationToPelvis(); // Function B.B.UpdateActorRotationToPelvis(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void GetActiveCamera(struct Unknown& ActiveCamera); // Function B.B.GetActiveCamera(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void UpdateLowerBoundCameraHeight(); // Function B.B.UpdateLowerBoundCameraHeight(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void PreventCameraWallCollision(); // Function B.B.PreventCameraWallCollision(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void InitReferences(char& bSuccess); // Function B.B.InitReferences(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void UpdateCameraHeightToHead(); // Function B.B.UpdateCameraHeightToHead(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void UserConstructionScript(); // Function B.B.UserConstructionScript(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ReceiveBeginPlay(); // Function B.B.ReceiveBeginPlay(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ReceiveTick(float DeltaSeconds); // Function B.B.ReceiveTick(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void K2_OnEndViewTarget(struct Unknown PC); // Function B.B.K2_OnEndViewTarget(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_B(int32_t EntryPoint); // Function B.B.ExecuteUbergraph_B(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass B.B
class UB : public UBravoHotelCreateCharacterWidget {

public:

	struct Unknown UberGraphFrame; // 0x308 (8)
	struct Unknown CoherentUIGTWidget_90; // 0x310 (8)
	struct Unknown U; // 0x318 (8)
	enum class Unknow CurrentSceneType; // 0x320 (1)

	void Construct(); // Function B.B.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Tick(struct Unknown MyGeometry, float InDeltaTime); // Function B.B.Tick(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CustomEvent_1(enum class Unknow SceneType); // Function B.B.CustomEvent_1(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_B(int32_t EntryPoint); // Function B.B.ExecuteUbergraph_B(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// BlueprintGeneratedClass B.B
class UB : public UHUDInteractionComponent {

public:

	struct Unknown UberGraphFrame; // 0xF0 (8)
	struct Unknown PlayerController; // 0xF8 (8)
	char bAlreadySetOptionWidget : 0; // 0x100 (1)
	float defaultContrast; // 0x104 (4)
	float defaultMaxBrightness; // 0x108 (4)
	float defaultMinBrightness; // 0x10C (4)
	float MinBrightness; // 0x110 (4)
	float MaxBrightness; // 0x114 (4)
	float Contrast; // 0x118 (4)
	char bUsePostProcessVolumeOption : 0; // 0x11C (1)
	float ColorGradingGlobalGamma; // 0x120 (4)
	float FilmToeIntensity; // 0x124 (4)
	char IsInWidget : 0; // 0x128 (1)
	char bInputModeUI : 0; // 0x129 (1)
	struct TArray<Unknown> InputActionsToBlock; // 0x130 (16)

	void CheckAnyAction(char& AnyAction); // Function B.B.CheckAnyAction(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CheckAnyCloseUI(char& AnyClosed); // Function B.B.CheckAnyCloseUI(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void InputCloseUI(); // Function B.B.InputCloseUI(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Callback(); // Function B.B.Callback(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetMousePositionToCenter(); // Function B.B.SetMousePositionToCenter(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CheckInputState(); // Function B.B.CheckInputState(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetActionBlocked(char WantsToBlock, struct TArray<Unknown>& ActionNames, struct Unknown Widget); // Function B.B.SetActionBlocked(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	char IsGlobalPostProcessVolume(struct Unknown Other); // Function B.B.IsGlobalPostProcessVolume(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetPostProcessVolumeDefaultOption(); // Function B.B.SetPostProcessVolumeDefaultOption(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void InitOptionWidget(); // Function B.B.InitOptionWidget(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void IsSpectating(char& IsSpectating); // Function B.B.IsSpectating(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void GetPlayerHUD(char& IsAlive, struct Unknown& PlayerHUD); // Function B.B.GetPlayerHUD(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void InputOptionMenu(); // Function B.B.InputOptionMenu(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ReceiveTick(float DeltaSeconds); // Function B.B.ReceiveTick(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void InputModeGame(struct Unknown Widget); // Function B.B.InputModeGame(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void InputModeUI(struct Unknown Widget); // Function B.B.InputModeUI(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void InputToggleIngameHUD(); // Function B.B.InputToggleIngameHUD(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ReceiveBeginPlay(); // Function B.B.ReceiveBeginPlay(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_B(int32_t EntryPoint); // Function B.B.ExecuteUbergraph_B(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// BlueprintGeneratedClass B.B
class UB : public UBravoHotelGrassCollisionComponent {

public:

	struct Unknown UberGraphFrame; // 0xB8 (8)
	float TextureScale; // 0xC0 (4)
	float CollisionArea; // 0xC4 (4)
	float LieDistance; // 0xC8 (4)
	float DrawDistance; // 0xCC (4)
	struct Unknown Brush; // 0xD0 (8)
	float Brush; // 0xD8 (4)
	struct Unknown Eraser; // 0xE0 (8)
	float Erase; // 0xE8 (4)
	char IsTickStart : 0; // 0xEC (1)
	struct Unknown TargetCharacter; // 0xF0 (8)

	void DrawGrassCollision(struct Unknown TargetCharacter); // Function B.B.DrawGrassCollision(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ClearRenderTarget(); // Function B.B.ClearRenderTarget(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_B(int32_t EntryPoint); // Function B.B.ExecuteUbergraph_B(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass B.B
class UB : public UBravoHotelLobbyWidget_Web {

public:

	struct Unknown UberGraphFrame; // 0x4C8 (8)
	struct Unknown FadeOutNotice; // 0x4D0 (8)
	struct Unknown Bg; // 0x4D8 (8)
	struct Unknown Bg_2; // 0x4E0 (8)
	struct Unknown CanvasPanel_GameNotice; // 0x4E8 (8)
	struct Unknown CanvasPanel_PrefetchingProgress; // 0x4F0 (8)
	struct Unknown Image; // 0x4F8 (8)
	struct Unknown Image_145; // 0x500 (8)
	struct Unknown ProgressText; // 0x508 (8)
	struct Unknown U; // 0x510 (8)
	struct TArray<Unknown> WeaponList_1; // 0x518 (16)
	struct TArray<Unknown> CharacterInfoWidgetList; // 0x528 (16)
	int32_t PartySize; // 0x538 (4)
	struct Unknown EquipmentTransition; // 0x540 (8)
	char BindParticle : 0; // 0x548 (1)
	struct TArray<Unknown> EffectPool; // 0x550 (16)
	struct FMulticastInlineDelegate EventDispatcher_MovhingProgres; // 0x560 (16)
	struct FString CurrentTab; // 0x570 (16)

	void CheckOptionChanged(); // Function B.B.CheckOptionChanged(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void InitArmoryMeshActor(); // Function B.B.InitArmoryMeshActor(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void AddEffect(struct Unknown Location, float Delay); // Function B.B.AddEffect(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SendPlayTimeMsg(); // Function B.B.SendPlayTimeMsg(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void UpdateCharacterInfo(); // Function B.B.UpdateCharacterInfo(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CreateCharacterInfo(); // Function B.B.CreateCharacterInfo(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Add(struct FString Name, struct Unknown Offset); // Function B.B.Add(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void InitWeapon(); // Function B.B.InitWeapon(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void HideExitPopup(); // Function B.B.HideExitPopup(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Construct(); // Function B.B.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Tick(struct Unknown MyGeometry, float InDeltaTime); // Function B.B.Tick(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ShowMouseCursor(); // Function B.B.ShowMouseCursor(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnMatchingSucceeded(); // Function B.B.OnMatchingSucceeded(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnMatchingFailed(int32_t ErrorCode, struct FString ExtraDescription); // Function B.B.OnMatchingFailed(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetVisibleSelectGameMode(char bState); // Function B.B.SetVisibleSelectGameMode(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CustomEvent_1(); // Function B.B.CustomEvent_1(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SendPlayTimeMessage(); // Function B.B.SendPlayTimeMessage(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void (char Visible, struct Unknown& Location); // Function B.B.(HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void EquipmentSounedDelegate_Event_1(); // Function B.B.EquipmentSounedDelegate_Event_1(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SlotHoverSounedDelegate_Event_1(); // Function B.B.SlotHoverSounedDelegate_Event_1(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void K2_OnChangedArmoryTab(struct FString TabName); // Function B.B.K2_OnChangedArmoryTab(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void K2_OnReceiveCraftWeapon(struct Unknown& CraftWeapon); // Function B.B.K2_OnReceiveCraftWeapon(Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void K2_OnChangedWeaponList(struct TArray<Unknown>& ReceiveWeaponList); // Function B.B.K2_OnChangedWeaponList(Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void K2_OnChangedMaterialList(struct TArray<Unknown>& ReceiveMaterialList); // Function B.B.K2_OnChangedMaterialList(Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void K2_OnChangedGold(int32_t ReceiveGold); // Function B.B.K2_OnChangedGold(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void K2_MoveToCraftWeapon(int32_t CraftingID); // Function B.B.K2_MoveToCraftWeapon(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void K2_Init(); // Function B.B.K2_Init(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnChangedMainTab(struct FString TabName); // Function B.B.OnChangedMainTab(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnChangeProgress(struct FString PrefetchingProgressString); // Function B.B.OnChangeProgress(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnPrefetchingProgressVisible(enum class Unknow InVisibility); // Function B.B.OnPrefetchingProgressVisible(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void K2_OnCleanCampaignJoined(char bJoined); // Function B.B.K2_OnCleanCampaignJoined(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_B(int32_t EntryPoint); // Function B.B.ExecuteUbergraph_B(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void EventDispatcher_Mov(int32_t CraftingID); // Function B.B.EventDispatcher_Mov(Public|Delegate|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// BlueprintGeneratedClass B.B
class AB : public ABravoHotelInventoryCharacter {

public:

	struct Unknown SpotLight1; // 0x3D8 (8)
};

// BlueprintGeneratedClass B.B
class AB : public ABravoHotel3DViewActor {

public:

	struct Unknown UberGraphFrame; // 0x310 (8)
	struct Unknown PointLight3; // 0x318 (8)
	struct Unknown PointLight2; // 0x320 (8)
	struct Unknown SpotLight; // 0x328 (8)
	struct Unknown PointLight1; // 0x330 (8)
	struct Unknown BravoHotelSceneCaptureComponent2D; // 0x338 (8)
	struct Unknown PointLight; // 0x340 (8)
	struct Unknown SpotLight2; // 0x348 (8)
	struct Unknown Cube; // 0x350 (8)
	struct Unknown CustomizableSkeletal; // 0x358 (8)
	struct Unknown SkeletalMesh; // 0x360 (8)
	struct Unknown Camera; // 0x368 (8)
	struct Unknown Scene; // 0x370 (8)
	struct Unknown CharacterRef; // 0x378 (8)
	struct TArray<Unknown> PreviewWeapons; // 0x380 (16)
	char EnableTick : 0; // 0x390 (1)
	struct Unknown TargetAccel; // 0x394 (12)
	struct Unknown CurrentAccel; // 0x3A0 (12)

	void Resize(int32_t SizeX, int32_t SizeY); // Function B.B.Resize(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void AddRotation(float Delta); // Function B.B.AddRotation(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ReceiveBeginPlay(); // Function B.B.ReceiveBeginPlay(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ReceiveTick(float DeltaSeconds); // Function B.B.ReceiveTick(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnUpdatedMutable(struct Unknown Instance); // Function B.B.OnUpdatedMutable(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_B(int32_t EntryPoint); // Function B.B.ExecuteUbergraph_B(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// BlueprintGeneratedClass B.B
class AB : public ABravoHotelProjectileGrenadeMolotovCocktail {

public:

	struct Unknown UberGraphFrame; // 0x7F0 (8)
	float TextureScale; // 0x7F8 (4)
	float CollisionSize; // 0x7FC (4)

	void ActiveThrowingProjectileMainEffect(); // Function B.B.ActiveThrowingProjectileMainEffect(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_B(int32_t EntryPoint); // Function B.B.ExecuteUbergraph_B(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// BlueprintGeneratedClass B.B
class AB : public ABravoHotelBootyBoxActor {

public:

	struct Unknown StaticMesh; // 0x3B8 (8)
};

// BlueprintGeneratedClass B.B
class AB : public ABravoHotelMagazineForDrop {

public:

	struct Unknown UberGraphFrame; // 0x360 (8)
	float PhysicsSimulateTime; // 0x368 (4)
	float LifeTime; // 0x36C (4)
	float AddImpulse; // 0x370 (4)
	char Stance; // 0x374 (1)
	float AddImpulse_Crouched; // 0x378 (4)
	float AddImpulse_Proned; // 0x37C (4)

	void ReceiveBeginPlay(); // Function B.B.ReceiveBeginPlay(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_B(int32_t EntryPoint); // Function B.B.ExecuteUbergraph_B(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// BlueprintGeneratedClass B.B
class AB : public ABravoHotelProjectileGrenadeMolotovCocktail {

public:

	struct Unknown UberGraphFrame; // 0x7F0 (8)
	float TextureScale; // 0x7F8 (4)
	float CollisionSize; // 0x7FC (4)

	void ActiveThrowingProjectileMainEffect(); // Function B.B.ActiveThrowingProjectileMainEffect(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_B(int32_t EntryPoint); // Function B.B.ExecuteUbergraph_B(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// BlueprintGeneratedClass B.B
class AB : public ABravoHotelMaterialEffectActor {

public:

	struct Unknown Tire_RL; // 0x460 (8)
	struct Unknown Tire_FL; // 0x468 (8)
	struct Unknown Tire_RR; // 0x470 (8)
	struct Unknown Tire_FR; // 0x478 (8)
	struct Unknown SkeletalMesh; // 0x480 (8)
	struct Unknown DefaultSceneRoot; // 0x488 (8)

	void UserConstructionScript(); // Function B.B.UserConstructionScript(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// BlueprintGeneratedClass B.B
class AB : public ATransportAircraftPawn {

public:

	struct Unknown UberGraphFrame; // 0x6D0 (8)

	void ReceiveTick(float DeltaSeconds); // Function B.B.ReceiveTick(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_B(int32_t EntryPoint); // Function B.B.ExecuteUbergraph_B(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// BlueprintGeneratedClass B.B
class AB : public ABravoHotelTransportDropBoxActor {

public:

	struct Unknown UberGraphFrame; // 0x4A0 (8)
	float OverWater_CV_OverWater_77012AB948B572A268E63583418444D0; // 0x4A8 (4)
	char OverWater__Direction_77012AB948B572A268E63583418444D0; // 0x4AC (1)
	struct Unknown OverWater; // 0x4B0 (8)
	float HittingWater_CV_OverWater_7E5F9D2E4D0DDDC70F2F67AD035A6212; // 0x4B8 (4)
	char HittingWater__Direction_7E5F9D2E4D0DDDC70F2F67AD035A6212; // 0x4BC (1)
	struct Unknown HittingWater; // 0x4C0 (8)
	float LandingTimer; // 0x4C8 (4)
	struct TArray<Unknown> ItemResult; // 0x4D0 (16)
	float ParachuteTimer; // 0x4E0 (4)
	float LandingDelay; // 0x4E4 (4)
	float ForceLandingDelaySeconds; // 0x4E8 (4)
	char bLandedOnGround : 0; // 0x4EC (1)

	void UserConstructionScript(); // Function B.B.UserConstructionScript(Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OverWater__FinishedFunc(); // Function B.B.OverWater__FinishedFunc(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OverWater__UpdateFunc(); // Function B.B.OverWater__UpdateFunc(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void HittingWater__FinishedFunc(); // Function B.B.HittingWater__FinishedFunc(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void HittingWater__UpdateFunc(); // Function B.B.HittingWater__UpdateFunc(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void NormalHitSound(); // Function B.B.NormalHitSound(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void WaterHitSound(); // Function B.B.WaterHitSound(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnActivated(); // Function B.B.OnActivated(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetLastPosition(struct Unknown Location, struct Unknown Rotation); // Function B.B.SetLastPosition(Net|NetMulticast|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Cutoff(); // Function B.B.Cutoff(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OpenDropBoxEvent(); // Function B.B.OpenDropBoxEvent(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnOverWater(); // Function B.B.OnOverWater(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnHittingWater(); // Function B.B.OnHittingWater(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void GenerateItems(struct FName ItemKey); // Function B.B.GenerateItems(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetItemInBlueprint(struct FName& ItemKey); // Function B.B.SetItemInBlueprint(Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void LandedOnWaterEvent(); // Function B.B.LandedOnWaterEvent(Event|Protected|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ReceiveTick(float DeltaSeconds); // Function B.B.ReceiveTick(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_B(int32_t EntryPoint); // Function B.B.ExecuteUbergraph_B(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// BlueprintGeneratedClass B.B
class AB : public ABravoHotelCharacterPrefab {

public:

	struct Unknown UberGraphFrame; // 0x3A60 (8)
	struct Unknown B; // 0x3A68 (8)
	struct Unknown OutBlueZone; // 0x3A70 (8)
	struct Unknown B; // 0x3A78 (8)
	struct Unknown DevCamera_ChildActor; // 0x3A80 (8)
	struct Unknown TeamInfoUpdater; // 0x3A88 (8)
	float VelocityZ_LandingDamage; // 0x3A90 (4)
	struct Unknown CharacterPreviewRef; // 0x3A98 (8)
	struct Unknown Chat; // 0x3AA0 (8)
	char ShowChatToggle : 0; // 0x3AA8 (1)
	float CurrentViewportSizeX; // 0x3AAC (4)
	float CurrentViewportSizeY; // 0x3AB0 (4)
	char OutScreenPosition : 0; // 0x3AB4 (1)
	int32_t SightNumForTset; // 0x3AB8 (4)
	char bDefaultAmplifier : 0; // 0x3ABC (1)
	float CurrentTeamInfoHeight; // 0x3AC0 (4)

	void ForceInitRecordingCharacter(); // Function B.B.ForceInitRecordingCharacter(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CheckAimingCancelation(); // Function B.B.CheckAimingCancelation(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CorrectionScreenPosition(struct Unknown& ScreenPosition, char& RetOutScreenPosition); // Function B.B.CorrectionScreenPosition(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void LoadTableData(); // Function B.B.LoadTableData(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void UserConstructionScript(); // Function B.B.UserConstructionScript(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void InpActEvt_Six_K2Node_InputKeyEvent_7(struct Unknown Key); // Function B.B.InpActEvt_Six_K2Node_InputKeyEvent_7(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void InpActEvt_RightBracket_K2Node_InputKeyEvent_6(struct Unknown Key); // Function B.B.InpActEvt_RightBracket_K2Node_InputKeyEvent_6(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void InpActEvt_LeftBracket_K2Node_InputKeyEvent_5(struct Unknown Key); // Function B.B.InpActEvt_LeftBracket_K2Node_InputKeyEvent_5(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void InpActEvt_Divide_K2Node_InputKeyEvent_4(struct Unknown Key); // Function B.B.InpActEvt_Divide_K2Node_InputKeyEvent_4(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void InpActEvt_Hyphen_K2Node_InputKeyEvent_3(struct Unknown Key); // Function B.B.InpActEvt_Hyphen_K2Node_InputKeyEvent_3(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void InpActEvt_Ctrl_2(struct Unknown Key); // Function B.B.InpActEvt_Ctrl_2(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void InpActEvt_Semicolon_K2Node_InputKeyEvent_1(struct Unknown Key); // Function B.B.InpActEvt_Semicolon_K2Node_InputKeyEvent_1(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void K2_EnterSceneOfWin(); // Function B.B.K2_EnterSceneOfWin(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ReadyTeleport(); // Function B.B.ReadyTeleport(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ServerPlayTeleportEffect(); // Function B.B.ServerPlayTeleportEffect(Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void MultiPlayTeleportEffect(); // Function B.B.MultiPlayTeleportEffect(Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void PlayTeleportEffect(); // Function B.B.PlayTeleportEffect(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void DoTeleportEffect(); // Function B.B.DoTeleportEffect(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ServerCrazyJump(); // Function B.B.ServerCrazyJump(Net|NetServer|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ServerResetCrazyJump(); // Function B.B.ServerResetCrazyJump(Net|NetServer|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void K2_OnGoParachute(); // Function B.B.K2_OnGoParachute(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ServerLaunch(struct Unknown LaunchVelocity); // Function B.B.ServerLaunch(Net|NetServer|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void K2_Cheat_ToggleCharacterDebugCamera(); // Function B.B.K2_Cheat_ToggleCharacterDebugCamera(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void K2_FPSK_OnStartADS(); // Function B.B.K2_FPSK_OnStartADS(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void K2_FPSK_OnEndADS(); // Function B.B.K2_FPSK_OnEndADS(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SwitchMovementModeEvent(char MovementMode, enum class Unknow CustomMovementMode); // Function B.B.SwitchMovementModeEvent(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ServerSwitchMovementModeEvent(char MovementMode, enum class Unknow CustomMovementMode); // Function B.B.ServerSwitchMovementModeEvent(Net|NetServer|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void MulticastSwitchMovementMode(char MovementMode, enum class Unknow CustomMovementMode); // Function B.B.MulticastSwitchMovementMode(Net|NetMulticast|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void DoPlayDynamicMontage(struct Unknown AnimSequence, struct FName SlotName, float PlayRate); // Function B.B.DoPlayDynamicMontage(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ServerPlayDynamicMontage(struct Unknown AnimSequence, struct FName SlotName, float PlayRate); // Function B.B.ServerPlayDynamicMontage(Net|NetServer|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void MulticastPlayDynamicMontage(struct Unknown AnimSequence, struct FName SlotName, float PlayRate); // Function B.B.MulticastPlayDynamicMontage(Net|NetMulticast|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ReceiveBeginPlay(); // Function B.B.ReceiveBeginPlay(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnLanded(struct Unknown& Hit); // Function B.B.OnLanded(Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ReceiveDestroyed(); // Function B.B.ReceiveDestroyed(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void InitRecordingCharacter(); // Function B.B.InitRecordingCharacter(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetVisibleOutBlueZoneBlizzard(char Visible); // Function B.B.SetVisibleOutBlueZoneBlizzard(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void K2_UpdateMutable_PreviewPawn(char bChangeGender); // Function B.B.K2_UpdateMutable_PreviewPawn(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnDeath(); // Function B.B.OnDeath(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void AddCharacterRotation(float Val); // Function B.B.AddCharacterRotation(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetRecordingCharacterTickRate(float TickRate); // Function B.B.SetRecordingCharacterTickRate(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Spawn(); // Function B.B.Spawn(Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_B(int32_t EntryPoint); // Function B.B.ExecuteUbergraph_B(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// BlueprintGeneratedClass B.B
class AB : public AB {

public:

	struct Unknown ScopeWidget_Background; // 0x420 (8)
	struct Unknown Cube; // 0x428 (8)
};

// BlueprintGeneratedClass B.B
class AB : public ABravoHotelBrokenEquipment {

public:

	struct Unknown UberGraphFrame; // 0x330 (8)
	float Power_Min; // 0x338 (4)
	float Power_Max; // 0x33C (4)
	float FlyAngle; // 0x340 (4)

	void ReceiveBeginPlay(); // Function B.B.ReceiveBeginPlay(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_B(int32_t EntryPoint); // Function B.B.ExecuteUbergraph_B(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// BlueprintGeneratedClass B.B
class AB : public UActor {

public:

	struct Unknown UberGraphFrame; // 0x310 (8)
	struct Unknown Widget; // 0x318 (8)
	struct Unknown DefaultSceneRoot; // 0x320 (8)
	struct Unknown TargetCharacter; // 0x328 (8)
	struct Unknown LoudnessCurve; // 0x330 (8)
	float HeartBeatSensorLength; // 0x338 (4)
	enum class Unknow TagetGroundState; // 0x33C (1)
	char IsFiring : 0; // 0x33D (1)
	struct Unknown CurrentWeapon; // 0x340 (8)
	struct Unknown SingleTimerEvent; // 0x348 (8)
	char IsSingleFiring : 0; // 0x350 (1)

	void ReceiveTick(float DeltaSeconds); // Function B.B.ReceiveTick(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetTarget(struct Unknown TargetCharacter, float HeartBeatSensorLength); // Function B.B.SetTarget(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void (float DeltaSeconds, struct Unknown OldLocation, struct Unknown OldVelocity); // Function B.B.(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_B(int32_t EntryPoint); // Function B.B.ExecuteUbergraph_B(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// BlueprintGeneratedClass B.B
class AB : public UActor {

public:

	struct Unknown UberGraphFrame; // 0x310 (8)
	struct Unknown Widget; // 0x318 (8)
	struct Unknown DefaultSceneRoot; // 0x320 (8)
	struct Unknown TargetCharacter; // 0x328 (8)
	struct Unknown LoudnessCurve; // 0x330 (8)
	float AmplifierLength; // 0x338 (4)
	enum class Unknow TagetGroundState; // 0x33C (1)
	char IsFiring : 0; // 0x33D (1)
	struct Unknown CurrentWeapon; // 0x340 (8)
	struct Unknown SingleTimerEvent; // 0x348 (8)
	char IsSingleFiring : 0; // 0x350 (1)

	void (float DeltaSeconds, struct Unknown OldLocation, struct Unknown OldVelocity); // Function B.B.(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void (enum class Unknow State); // Function B.B.(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ReceiveTick(float DeltaSeconds); // Function B.B.ReceiveTick(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetTarget(struct Unknown TargetCharacter, float AmplifierLength); // Function B.B.SetTarget(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CharacterMovementEv(float DeltaSeconds, struct Unknown OldLocation, struct Unknown OldVelocity); // Function B.B.CharacterMovementEv(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnStartSimulateFire(); // Function B.B.OnStartSimulateFire(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SingleStopEvent(); // Function B.B.SingleStopEvent(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_B(int32_t EntryPoint); // Function B.B.ExecuteUbergraph_B(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// BlueprintGeneratedClass B.B
class AB : public ABravoHotelGrenadeWeapon {

public:

	struct Unknown UberGraphFrame; // 0x1F20 (8)
	struct Unknown StaticMesh_Ring; // 0x1F28 (8)
	struct Unknown StaticMesh_Lever; // 0x1F30 (8)
	float Timeline_0_Lerp_77CED3694A7ECD58C02266AF5F5B5991; // 0x1F38 (4)
	char Timeline_0__Direction_77CED3694A7ECD58C02266AF5F5B5991; // 0x1F3C (1)
	struct Unknown Timeline_1; // 0x1F40 (8)
	float Lerp_Lerp_EDD5977E4E850EC460B1E599F1FF45F8; // 0x1F48 (4)
	char Lerp__Direction_EDD5977E4E850EC460B1E599F1FF45F8; // 0x1F4C (1)
	struct Unknown Lerp; // 0x1F50 (8)
	struct Unknown InterpOffset; // 0x1F58 (12)
	struct Unknown DesiredLocation; // 0x1F64 (12)
	struct Unknown InitalLocalVelocity; // 0x1F70 (12)
	struct Unknown DesiredLocation_Ing; // 0x1F7C (12)
	struct Unknown InitalLocalVelocity_Ing; // 0x1F88 (12)
	enum class Unknow ThrowingWeaponState; // 0x1F94 (1)
	char ThrowingAction_Bool : 0; // 0x1F95 (1)
	struct Unknown DesiredLocation_3; // 0x1F98 (12)
	struct Unknown DesiredLocation_2_Ing; // 0x1FA4 (12)
	struct Unknown InitalLocalVelocity_3; // 0x1FB0 (12)
	struct Unknown InitalLocalVelocity_2_ing; // 0x1FBC (12)
	float PathLifeTime; // 0x1FC8 (4)
	float TimeInterval; // 0x1FCC (4)
	struct Unknown IndicatorComponent_2; // 0x1FD0 (8)
	struct Unknown IndicatorComponent_3; // 0x1FD8 (8)
	struct Unknown TrajectoryComponent_2; // 0x1FE0 (8)
	struct Unknown TrajectoryComponent_3; // 0x1FE8 (8)

	struct Unknown GetDebugInfo(); // Function B.B.GetDebugInfo(HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CheckNeedDrawing(char& Need); // Function B.B.CheckNeedDrawing(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void IsReplayTarget(char& IsReplayTarget); // Function B.B.IsReplayTarget(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void GetProjectileLocationAndVelocity(int32_t Index, struct Unknown& Location, struct Unknown& Velocity); // Function B.B.GetProjectileLocationAndVelocity(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ThrowingAction(enum class Unknow ThrowingWeaponState, char Condition); // Function B.B.ThrowingAction(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	struct Unknown Add(); // Function B.B.Add(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CalcGrenadeWeaponLocationOffset(struct Unknown Offest); // Function B.B.CalcGrenadeWeaponLocationOffset(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Lerp__FinishedFunc(); // Function B.B.Lerp__FinishedFunc(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Lerp__UpdateFunc(); // Function B.B.Lerp__UpdateFunc(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Timeline_0__FinishedFunc(); // Function B.B.Timeline_0__FinishedFunc(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Timeline_0__UpdateFunc(); // Function B.B.Timeline_0__UpdateFunc(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void DrawProjectileTrajectory(); // Function B.B.DrawProjectileTrajectory(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ReceiveDestroyed(); // Function B.B.ReceiveDestroyed(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnChangeThrowingWeaponStateDelegate_Event(enum class Unknow ThrowingWeaponState); // Function B.B.OnChangeThrowingWeaponStateDelegate_Event(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnChangeThrowingTypeDelegate_Event(enum class Unknow ThrowingType); // Function B.B.OnChangeThrowingTypeDelegate_Event(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void DrawProjectileTrajectory_Chang(); // Function B.B.DrawProjectileTrajectory_Chang(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnCharacterGroundStateChangeDelegate(enum class Unknow State); // Function B.B.OnCharacterGroundStateChangeDelegate(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void InitProjectileTrajectory(); // Function B.B.InitProjectileTrajectory(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnFire(); // Function B.B.OnFire(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ForceUpdateProjectileTrajectory(); // Function B.B.ForceUpdateProjectileTrajectory(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnChangedReplayViewMode_2(char IsPlayer); // Function B.B.OnChangedReplayViewMode_2(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void K2_OnOwnerBecomeViewTarget(); // Function B.B.K2_OnOwnerBecomeViewTarget(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void K2_OnOwnerEndViewTarget(); // Function B.B.K2_OnOwnerEndViewTarget(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ReceiveEndPlay(char EndPlayReason); // Function B.B.ReceiveEndPlay(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_B(int32_t EntryPoint); // Function B.B.ExecuteUbergraph_B(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass B.B
class UB : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown U; // 0x250 (8)
	struct FMulticastInlineDelegate OnTriedToLogin; // 0x258 (16)
	struct FMulticastInlineDelegate OnTriedToTestLogin; // 0x268 (16)
	char bEnableDevServer : 0; // 0x278 (1)
	struct FMulticastInlineDelegate OnMoveLobby; // 0x280 (16)
	struct FMulticastInlineDelegate OnPlayBGM; // 0x290 (16)
	struct FMulticastInlineDelegate OnSaveUserData; // 0x2A0 (16)
	char bPlayBGM : 0; // 0x2B0 (1)
	char bRememberMe : 0; // 0x2B1 (1)
	struct FMulticastInlineDelegate OnSkipTitle; // 0x2B8 (16)

	void HideExitPopup(); // Function B.B.HideExitPopup(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Login(); // Function B.B.Login(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ValidateUserName(struct FText InputUserName, char& Ret, struct FName& UserName); // Function B.B.ValidateUserName(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Construct(); // Function B.B.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnLogin(); // Function B.B.OnLogin(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ShowMouseCursor(); // Function B.B.ShowMouseCursor(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnLoginSucceeded(); // Function B.B.OnLoginSucceeded(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnLoginFailed(int32_t ErrorIndex, struct FString ErrorID, struct FString Parameters); // Function B.B.OnLoginFailed(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_B(int32_t EntryPoint); // Function B.B.ExecuteUbergraph_B(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnSkipTitle__DelegateSignature(); // Function B.B.OnSkipTitle__DelegateSignature(Public|Delegate|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnSaveUserData__DelegateSignature(); // Function B.B.OnSaveUserData__DelegateSignature(Public|Delegate|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnPlayBGM__DelegateSignature(); // Function B.B.OnPlayBGM__DelegateSignature(Public|Delegate|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnMoveLobby__DelegateSignature(); // Function B.B.OnMoveLobby__DelegateSignature(Public|Delegate|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnTriedToTestLogin__DelegateSignature(struct FName UserName, struct FString TestIP); // Function B.B.OnTriedToTestLogin__DelegateSignature(Public|Delegate|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnTriedToLogin__DelegateSignature(struct FName UserName, struct FString Password); // Function B.B.OnTriedToLogin__DelegateSignature(Public|Delegate|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// BlueprintGeneratedClass B.B
class AB : public ABravoHotelTitleHUD {

public:

	struct Unknown DefaultSceneRoot; // 0x4B0 (8)
	struct Unknown MediaSoundComponent; // 0x4B8 (8)
	struct FMulticastInlineDelegate EventDispatcher_PlayLobbySound; // 0x4C0 (16)
	struct FMulticastInlineDelegate EventDispatcher_StopLobbySound; // 0x4D0 (16)

	void EventDispatcher_StopLobbySound__DelegateSignature(); // Function B.B.EventDispatcher_StopLobbySound__DelegateSignature(Public|Delegate|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void EventDispatcher_PlayLobbySound__DelegateSignature(); // Function B.B.EventDispatcher_PlayLobbySound__DelegateSignature(Public|Delegate|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// BlueprintGeneratedClass B.B
class AB : public ABattleRoyaleGameMode_Login {

public:

	struct Unknown DefaultSceneRoot; // 0x648 (8)
};

// BlueprintGeneratedClass B.B
class AB : public ABravoHotelLobbyCharacter {

public:

	struct Unknown UberGraphFrame; // 0x3A70 (8)
	struct Unknown Box; // 0x3A78 (8)
	int32_t PawnIndex; // 0x3A80 (4)
	struct Unknown* BravoHotelPlayerStateClass; // 0x3A88 (8)
	char bReady : 0; // 0x3A90 (1)
	char bMatchSuccess : 0; // 0x3A91 (1)
	char bIsFaceCustomizing : 0; // 0x3A92 (1)

	void ReceiveBeginPlay(); // Function B.B.ReceiveBeginPlay(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnEquipWeapon(); // Function B.B.OnEquipWeapon(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void InitCustomizableObjectInstance(); // Function B.B.InitCustomizableObjectInstance(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_B(int32_t EntryPoint); // Function B.B.ExecuteUbergraph_B(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// BlueprintGeneratedClass B.B
class AB : public ABravoHotelProjectileMolotovFireCell {

public:

	struct Unknown UberGraphFrame; // 0x398 (8)
	float TextureScale; // 0x3A0 (4)
	float BurnArea; // 0x3A4 (4)

	void ReceiveBeginPlay(); // Function B.B.ReceiveBeginPlay(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_B(int32_t EntryPoint); // Function B.B.ExecuteUbergraph_B(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// BlueprintGeneratedClass B.B
class AB : public AB {

public:

	struct Unknown BravoHotelShellCasingArrow_Clip; // 0x22F0 (8)
};

// BlueprintGeneratedClass B.B
class AB : public AB {

public:

	struct Unknown B; // 0xD18 (8)
	struct Unknown B; // 0xD20 (8)
	struct Unknown B; // 0xD28 (8)
	struct Unknown BravoHotelVehicleSeat05; // 0xD30 (8)
	struct Unknown BravoHotelVehicleSeat04; // 0xD38 (8)
	struct Unknown BravoHotelVehicleSeat03; // 0xD40 (8)
	struct Unknown BravoHotelVehicleSeat02; // 0xD48 (8)
};

// BlueprintGeneratedClass B.B
class AB : public AB {

public:

	struct Unknown Sphere; // 0x420 (8)
};

// BlueprintGeneratedClass B.B
class UB : public UBravoHotelDestructibleComponent {

public:

	struct Unknown UberGraphFrame; // 0x630 (8)
	float DestructibleMeshLifeTime; // 0x638 (4)
	char IsLegacyMethodEnable : 0; // 0x63C (1)
	float StaticMeshLifeSpanTime; // 0x640 (4)
	char GameStarted : 0; // 0x644 (1)
	float DefaultHpCache; // 0x648 (4)
	char IsDestructedBeforeGameStart : 0; // 0x64C (1)
	char Is : 0; // 0x64D (1)
	struct FMulticastInlineDelegate DestructEventDispatcher; // 0x650 (16)
	float LinearDamping; // 0x660 (4)
	float MassInKg; // 0x664 (4)
	float AngularDamping; // 0x668 (4)
	char ClassType; // 0x66C (1)

	void OnRep_IsDestructedBeforeGameStart(); // Function B.B.OnRep_IsDestructedBeforeGameStart(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Destruct(float Damage, struct Unknown HitLocation, struct Unknown ImpactDirection, struct Unknown& DM); // Function B.B.Destruct(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ReceiveBeginPlay(); // Function B.B.ReceiveBeginPlay(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void K2_OnDestructComponent(float DamageAmount, struct Unknown& HitInfo, struct Unknown EventInstigator, struct Unknown DamageCauser, struct Unknown& ShotInfo); // Function B.B.K2_OnDestructComponent(Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetLifeSpan(float LifeSpan); // Function B.B.SetLifeSpan(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetCollisionEnableWithDelay(float DelayTime); // Function B.B.SetCollisionEnableWithDelay(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_B(int32_t EntryPoint); // Function B.B.ExecuteUbergraph_B(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void DestructEventDispatcher__Deleg(); // Function B.B.DestructEventDispatcher__Deleg(Public|Delegate|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// BlueprintGeneratedClass B.B
class AB : public AB {

public:

	struct Unknown BravoHotelVehicleTire_RR; // 0xD18 (8)
	struct Unknown BravoHotelVehicleTire_RL; // 0xD20 (8)
	struct Unknown BravoHotelVehicleTire_FR; // 0xD28 (8)
	struct Unknown BravoHotelVehicleTire_FL; // 0xD30 (8)
	struct Unknown B; // 0xD38 (8)
	struct Unknown B; // 0xD40 (8)
	struct Unknown BravoHotelVehicleSeat04; // 0xD48 (8)
	struct Unknown BravoHotelVehicleSeat03; // 0xD50 (8)
	struct Unknown BravoHotelVehicleSeat02; // 0xD58 (8)
};

// BlueprintGeneratedClass B.B
class AB : public ABravoHotelSkillTargetingBombing {

public:

	struct Unknown UberGraphFrame; // 0x368 (8)

	void ReceiveBeginPlay(); // Function B.B.ReceiveBeginPlay(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_B(int32_t EntryPoint); // Function B.B.ExecuteUbergraph_B(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// BlueprintGeneratedClass B.B
class AB : public ABravoHotelAreaSkillZoneHacking {

public:

	struct Unknown UberGraphFrame; // 0x368 (8)

	void UserConstructionScript(); // Function B.B.UserConstructionScript(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ActivateEffect(struct Unknown Character); // Function B.B.ActivateEffect(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void DeactivateEffect(struct Unknown Character); // Function B.B.DeactivateEffect(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BPSetAreaSkillInfo(); // Function B.B.BPSetAreaSkillInfo(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void StartDestroy(); // Function B.B.StartDestroy(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_B(int32_t EntryPoint); // Function B.B.ExecuteUbergraph_B(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// BlueprintGeneratedClass B.B
class AB : public ABravoHotelProjectileBullet {

public:

	struct Unknown UberGraphFrame; // 0x520 (8)
	struct Unknown ParticleSystem; // 0x528 (8)

	void ReceiveBeginPlay(); // Function B.B.ReceiveBeginPlay(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_B(int32_t EntryPoint); // Function B.B.ExecuteUbergraph_B(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// BlueprintGeneratedClass B.B
class AB : public AB {

public:

	struct Unknown UberGraphFrame; // 0x1FF0 (8)
	struct Unknown ParticleSystem; // 0x1FF8 (8)

	void K2_OnEquip(); // Function B.B.K2_OnEquip(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void K2_OnUnEquip(); // Function B.B.K2_OnUnEquip(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_B(int32_t EntryPoint); // Function B.B.ExecuteUbergraph_B(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// BlueprintGeneratedClass B.B
class AB : public AB {

public:

	struct Unknown UberGraphFrame; // 0x22F0 (8)

	void ReceiveBeginPlay(); // Function B.B.ReceiveBeginPlay(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_B(int32_t EntryPoint); // Function B.B.ExecuteUbergraph_B(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// BlueprintGeneratedClass B.B
class AB : public AB {

public:

	struct Unknown UberGraphFrame; // 0xCF8 (8)

	void ReceiveUnpossessed(struct Unknown OldController); // Function B.B.ReceiveUnpossessed(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void PlayCameraShake_ModeChange(); // Function B.B.PlayCameraShake_ModeChange(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnPlaySplashParticle(char IsToWater); // Function B.B.OnPlaySplashParticle(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnChangedAmphibiousMode(char bTrue); // Function B.B.OnChangedAmphibiousMode(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_B(int32_t EntryPoint); // Function B.B.ExecuteUbergraph_B(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// BlueprintGeneratedClass B.B
class AB : public ABravoHotelMaterialEffectActor {

public:

	struct Unknown Tire_RL; // 0x460 (8)
	struct Unknown Tire_FL; // 0x468 (8)
	struct Unknown Tire_RR; // 0x470 (8)
	struct Unknown Tire_FR; // 0x478 (8)
	struct Unknown SkeletalMesh; // 0x480 (8)
	struct Unknown DefaultSceneRoot; // 0x488 (8)

	void UserConstructionScript(); // Function B.B.UserConstructionScript(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// BlueprintGeneratedClass B.B
class AB : public ABravoHotelHeartBeatSensor {

public:

	struct Unknown UberGraphFrame; // 0x1BF0 (8)
	struct Unknown InternalPP; // 0x1BF8 (8)
	struct Unknown EffectMaterial; // 0x1C00 (8)
	char IsActive : 0; // 0x1C08 (1)
	struct Unknown mRadialBlur; // 0x1C10 (8)
	struct Unknown iRadialBlur; // 0x1C18 (8)
	struct Unknown Radial; // 0x1C20 (56)
	float Radial; // 0x1C58 (4)
	int32_t Radial; // 0x1C5C (4)
	struct Unknown Radial; // 0x1C60 (8)
	struct Unknown Radial; // 0x1C68 (8)
	struct Unknown Native; // 0x1C70 (1472)
	struct Unknown mSelectiveColor; // 0x2230 (8)
	struct Unknown iSelectiveColor; // 0x2238 (8)
	struct Unknown Selective; // 0x2240 (56)
	struct Unknown Selective; // 0x2278 (16)
	float Selective; // 0x2288 (4)
	float Selective; // 0x228C (4)
	float Selective; // 0x2290 (4)
	float CurrentBlur; // 0x2294 (4)
	float CurrentSelective; // 0x2298 (4)
	float FadeInSpeed; // 0x229C (4)
	float FadeOutSpeed; // 0x22A0 (4)
	struct Unknown mMonochrome; // 0x22A8 (8)
	struct Unknown iMonochrome; // 0x22B0 (8)
	struct Unknown Monochrome; // 0x22B8 (56)
	struct Unknown Monochrome; // 0x22F0 (16)
	struct Unknown MBlackColor; // 0x2300 (8)
	struct Unknown IBlackColor; // 0x2308 (8)
	struct Unknown BlackColor; // 0x2310 (56)
	float ActiveDelayTime; // 0x2348 (4)
	struct Unknown MainWidget; // 0x2350 (8)
	struct Unknown Top; // 0x2358 (8)

	void GetTopWidget(struct Unknown& Top); // Function B.B.GetTopWidget(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void GetMainWidget(struct Unknown& MainWidget); // Function B.B.GetMainWidget(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void IsOwnerLocallyControlled(char& bIsLocallyControlled); // Function B.B.IsOwnerLocallyControlled(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BlackColorFunc(char IsEnabled); // Function B.B.BlackColorFunc(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Monochrome(char IsEnabled); // Function B.B.Monochrome(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Selective(char IsEnabled); // Function B.B.Selective(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetEffectPriority(int32_t Priority, struct Unknown Material); // Function B.B.SetEffectPriority(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetAdvancedEffectFeatures(struct Unknown Features, struct Unknown Material, struct Unknown Dynamic); // Function B.B.SetAdvancedEffectFeatures(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Radial(char IsEnabled); // Function B.B.Radial(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CreateEffectMaterialInstance(struct Unknown Material, struct Unknown& Instance); // Function B.B.CreateEffectMaterialInstance(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ScreenEffectEvent(char RadialBlur, char BlackColor); // Function B.B.ScreenEffectEvent(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ReceiveTick(float DeltaSeconds); // Function B.B.ReceiveTick(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ReceiveBeginPlay(); // Function B.B.ReceiveBeginPlay(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnPostEventAtLocationEvent(struct FString EventKey, struct Unknown& Location); // Function B.B.OnPostEventAtLocationEvent(Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void AddActiveEvent(); // Function B.B.AddActiveEvent(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void K2_OnEquip(); // Function B.B.K2_OnEquip(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ReceiveDestroyed(); // Function B.B.ReceiveDestroyed(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void K2_OnUnEquip(); // Function B.B.K2_OnUnEquip(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnClickedHeartBeatSensor(); // Function B.B.OnClickedHeartBeatSensor(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnActiveHeartBeatSensor(); // Function B.B.OnActiveHeartBeatSensor(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnDeactiveHeartBeatSensor(); // Function B.B.OnDeactiveHeartBeatSensor(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_B(int32_t EntryPoint); // Function B.B.ExecuteUbergraph_B(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// BlueprintGeneratedClass B.B
class AB : public AB {

public:

	struct Unknown UberGraphFrame; // 0x22F0 (8)

	void ReceiveBeginPlay(); // Function B.B.ReceiveBeginPlay(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_B(int32_t EntryPoint); // Function B.B.ExecuteUbergraph_B(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// BlueprintGeneratedClass B.B
class AB : public AB {

public:

	struct Unknown UberGraphFrame; // 0x22F0 (8)

	void ReceiveBeginPlay(); // Function B.B.ReceiveBeginPlay(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_B(int32_t EntryPoint); // Function B.B.ExecuteUbergraph_B(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// BlueprintGeneratedClass B.B
class AB : public ABravoHotelMaterialEffectActor {

public:

	struct Unknown Tire_RL; // 0x460 (8)
	struct Unknown Tire_FL; // 0x468 (8)
	struct Unknown Tire_RR; // 0x470 (8)
	struct Unknown Tire_FR; // 0x478 (8)
	struct Unknown SkeletalMesh; // 0x480 (8)
	struct Unknown DefaultSceneRoot; // 0x488 (8)

	void UserConstructionScript(); // Function B.B.UserConstructionScript(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// BlueprintGeneratedClass B.B
class AB : public AB {

public:

	struct Unknown UberGraphFrame; // 0x1FF0 (8)
	struct Unknown ParticleSystem; // 0x1FF8 (8)

	void K2_OnEquip(); // Function B.B.K2_OnEquip(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void K2_OnUnEquip(); // Function B.B.K2_OnUnEquip(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_B(int32_t EntryPoint); // Function B.B.ExecuteUbergraph_B(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// BlueprintGeneratedClass B.B
class AB : public ABravoHotelProjectileGrenadeMolotovCocktail {

public:

	struct Unknown UberGraphFrame; // 0x7F0 (8)
	float TextureScale; // 0x7F8 (4)
	float CollisionSize; // 0x7FC (4)

	void ActiveThrowingProjectileMainEffect(); // Function B.B.ActiveThrowingProjectileMainEffect(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_B(int32_t EntryPoint); // Function B.B.ExecuteUbergraph_B(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// BlueprintGeneratedClass B.B
class AB : public UActor {

public:

	struct Unknown UberGraphFrame; // 0x310 (8)
	struct Unknown StaticMesh; // 0x318 (8)
	struct Unknown DefaultSceneRoot; // 0x320 (8)
	float DestructibleMeshLifeTime; // 0x328 (4)

	void ReceiveBeginPlay(); // Function B.B.ReceiveBeginPlay(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_B(int32_t EntryPoint); // Function B.B.ExecuteUbergraph_B(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// BlueprintGeneratedClass B.B
class AB : public ADestructibleActor {

public:

	struct Unknown UberGraphFrame; // 0x328 (8)
	float OpacityTime_Opacity_Percent_6C96418549465FDC90E47A873A3B4734; // 0x330 (4)
	float OpacityTime_Opacity_6C96418549465FDC90E47A873A3B4734; // 0x334 (4)
	char OpacityTime__Direction_6C96418549465FDC90E47A873A3B4734; // 0x338 (1)
	struct Unknown OpacityTime; // 0x340 (8)
	float Opacity; // 0x348 (4)
	float DM_Opacity; // 0x34C (4)
	char Opacity_Bool : 0; // 0x350 (1)

	void OpacityTime__FinishedFunc(); // Function B.B.OpacityTime__FinishedFunc(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OpacityTime__UpdateFunc(); // Function B.B.OpacityTime__UpdateFunc(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ReceiveBeginPlay(); // Function B.B.ReceiveBeginPlay(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_B(int32_t EntryPoint); // Function B.B.ExecuteUbergraph_B(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// BlueprintGeneratedClass B.B
class AB : public AB {

public:

	struct Unknown UberGraphFrame; // 0xCF8 (8)
	struct Unknown SplashParticleComp; // 0xD00 (8)
	struct Unknown PlaneParticleComp; // 0xD08 (8)
	struct Unknown TimerHandle_RemoveAllWaterParticle; // 0xD10 (8)

	void ReceiveTick(float DeltaSeconds); // Function B.B.ReceiveTick(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnPlaySplashParticle(char IsToWater); // Function B.B.OnPlaySplashParticle(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void RemoveAllWaterParticle(); // Function B.B.RemoveAllWaterParticle(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void AdjustWaterParticle(); // Function B.B.AdjustWaterParticle(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_B(int32_t EntryPoint); // Function B.B.ExecuteUbergraph_B(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// BlueprintGeneratedClass B.B
class AB : public AB {

public:

	struct Unknown UberGraphFrame; // 0xD18 (8)
	struct Unknown BravoHotelVehicleTire_RR; // 0xD20 (8)
	struct Unknown BravoHotelVehicleTire_RL; // 0xD28 (8)
	struct Unknown BravoHotelVehicleTire_FR; // 0xD30 (8)
	struct Unknown BravoHotelVehicleTire_FL; // 0xD38 (8)
	struct Unknown B; // 0xD40 (8)
	struct Unknown B; // 0xD48 (8)
	struct Unknown B; // 0xD50 (8)
	struct Unknown B; // 0xD58 (8)
	struct Unknown BravoHotelVehicleSeat04; // 0xD60 (8)
	struct Unknown BravoHotelVehicleSeat03; // 0xD68 (8)
	struct Unknown BravoHotelVehicleSeat02; // 0xD70 (8)

	void ReceiveTick(float DeltaSeconds); // Function B.B.ReceiveTick(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ReceiveBeginPlay(); // Function B.B.ReceiveBeginPlay(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_B(int32_t EntryPoint); // Function B.B.ExecuteUbergraph_B(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// BlueprintGeneratedClass B.B
class AB : public AB {

public:

	struct Unknown UberGraphFrame; // 0xCF8 (8)
	struct Unknown Handle_IsAnyHit; // 0xD00 (8)
	char IsAnyHit : 0; // 0xD08 (1)
	struct Unknown LastHitActor; // 0xD10 (8)

	void CheckLastHitActor(); // Function B.B.CheckLastHitActor(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void IsLandscape(char& IsLandscape); // Function B.B.IsLandscape(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ReceiveHit(struct Unknown MyComp, struct Unknown Other, struct Unknown OtherComp, char bSelfMoved, struct Unknown HitLocation, struct Unknown HitNormal, struct Unknown NormalImpulse, struct Unknown& Hit); // Function B.B.ReceiveHit(Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CheckAnyHit(); // Function B.B.CheckAnyHit(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ResetGate(); // Function B.B.ResetGate(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_B(int32_t EntryPoint); // Function B.B.ExecuteUbergraph_B(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// BlueprintGeneratedClass B.B
class AB : public AB {

public:

	struct Unknown UberGraphFrame; // 0xD18 (8)
	struct Unknown BravoHotelVehicleTire_RR; // 0xD20 (8)
	struct Unknown BravoHotelVehicleTire_RL; // 0xD28 (8)
	struct Unknown BravoHotelVehicleTire_FR; // 0xD30 (8)
	struct Unknown BravoHotelVehicleTire_FL; // 0xD38 (8)
	struct Unknown VehicleSeatCollision1; // 0xD40 (8)
	struct Unknown VehicleSeatCollision; // 0xD48 (8)
	struct Unknown BravoHotelVehicleSeat02; // 0xD50 (8)
	struct Unknown ; // 0xD58 (8)

	void ReceiveTick(float DeltaSeconds); // Function B.B.ReceiveTick(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ReceiveBeginPlay(); // Function B.B.ReceiveBeginPlay(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_B(int32_t EntryPoint); // Function B.B.ExecuteUbergraph_B(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// BlueprintGeneratedClass B.B
class AB : public AB {

public:

	struct Unknown BravoHotelVehicleTire_RR; // 0xD18 (8)
	struct Unknown BravoHotelVehicleTire_RL; // 0xD20 (8)
	struct Unknown BravoHotelVehicleTire_FR; // 0xD28 (8)
	struct Unknown BravoHotelVehicleTire_FL; // 0xD30 (8)
	struct Unknown B; // 0xD38 (8)
	struct Unknown B; // 0xD40 (8)
	struct Unknown B; // 0xD48 (8)
	struct Unknown B; // 0xD50 (8)
	struct Unknown BravoHotelVehicleSeat04; // 0xD58 (8)
	struct Unknown BravoHotelVehicleSeat03; // 0xD60 (8)
	struct Unknown BravoHotelVehicleSeat02; // 0xD68 (8)
	char bSnowy : 0; // 0xD70 (1)
};

// BlueprintGeneratedClass B.B
class AB : public AB {

public:

	struct Unknown UberGraphFrame; // 0xD18 (8)
	struct Unknown AdditionalStuntRotation; // 0xD20 (12)
	char Pressed_Pitch : 0; // 0xD2C (1)
	char Pressed_Roll : 0; // 0xD2D (1)
	char AutoRotate_Roll : 0; // 0xD2E (1)
	char CanStunt_Roll : 0; // 0xD2F (1)
	float StuntValue_Pitch; // 0xD30 (4)
	float StuntValue_Roll; // 0xD34 (4)
	float StuntInterpSpeed_Pitch; // 0xD38 (4)
	float StuntInterpSpeed_Roll; // 0xD3C (4)
	float StuntInterpSpeedRate; // 0xD40 (4)
	float StuntDirection_Pitch; // 0xD44 (4)
	float StuntDirection_Roll; // 0xD48 (4)
	float TargetStunt_Pitch; // 0xD4C (4)
	float TargetStunt_Roll; // 0xD50 (4)
	float ParkingForceValue; // 0xD54 (4)
	float RaisingForceValue; // 0xD58 (4)
	struct Unknown Handle_SetParkingForce; // 0xD60 (8)

	void Stunt(); // Function B.B.Stunt(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ServerAddStuntRotation(struct Unknown AdditionalRot); // Function B.B.ServerAddStuntRotation(Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void StartPitch(); // Function B.B.StartPitch(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void StopPitch(); // Function B.B.StopPitch(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CalcStuntValuePitch(); // Function B.B.CalcStuntValuePitch(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CalcStuntValueRoll(); // Function B.B.CalcStuntValueRoll(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void StartRoll(); // Function B.B.StartRoll(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void StopRoll(); // Function B.B.StopRoll(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ResetStunt(); // Function B.B.ResetStunt(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void StuntSpeedInterp(); // Function B.B.StuntSpeedInterp(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_B(int32_t EntryPoint); // Function B.B.ExecuteUbergraph_B(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// BlueprintGeneratedClass B.B
class AB : public ABravoHotelMaterialEffectActor {

public:

	struct Unknown Tire_RL; // 0x460 (8)
	struct Unknown Tire_FL; // 0x468 (8)
	struct Unknown Tire_RR; // 0x470 (8)
	struct Unknown Tire_FR; // 0x478 (8)
	struct Unknown SkeletalMesh; // 0x480 (8)
	struct Unknown DefaultSceneRoot; // 0x488 (8)

	void UserConstructionScript(); // Function B.B.UserConstructionScript(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// BlueprintGeneratedClass B.B
class AB : public ABravoHotelMaterialEffectActor {

public:

	struct Unknown Tire_RL; // 0x460 (8)
	struct Unknown Tire_FL; // 0x468 (8)
	struct Unknown Tire_RR; // 0x470 (8)
	struct Unknown Tire_FR; // 0x478 (8)
	struct Unknown SkeletalMesh; // 0x480 (8)
	struct Unknown DefaultSceneRoot; // 0x488 (8)

	void UserConstructionScript(); // Function B.B.UserConstructionScript(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// BlueprintGeneratedClass B.B
class AB : public ABravoHotelMaterialEffectActor {

public:

	struct Unknown Tire_RL; // 0x460 (8)
	struct Unknown Tire_FL; // 0x468 (8)
	struct Unknown Tire_RR; // 0x470 (8)
	struct Unknown Tire_FR; // 0x478 (8)
	struct Unknown SkeletalMesh; // 0x480 (8)
	struct Unknown DefaultSceneRoot; // 0x488 (8)

	void UserConstructionScript(); // Function B.B.UserConstructionScript(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// BlueprintGeneratedClass B.B
class AB : public ABravoHotelMaterialEffectActor {

public:

	struct Unknown Tire_RL; // 0x460 (8)
	struct Unknown Tire_FL; // 0x468 (8)
	struct Unknown Tire_RR; // 0x470 (8)
	struct Unknown Tire_FR; // 0x478 (8)
	struct Unknown SkeletalMesh; // 0x480 (8)
	struct Unknown DefaultSceneRoot; // 0x488 (8)

	void UserConstructionScript(); // Function B.B.UserConstructionScript(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// BlueprintGeneratedClass B.B
class AB : public ABravoHotelMaterialEffectActor {

public:

	struct Unknown Tire_RL; // 0x460 (8)
	struct Unknown Tire_FL; // 0x468 (8)
	struct Unknown Tire_RR; // 0x470 (8)
	struct Unknown Tire_FR; // 0x478 (8)
	struct Unknown SkeletalMesh; // 0x480 (8)
	struct Unknown DefaultSceneRoot; // 0x488 (8)

	void UserConstructionScript(); // Function B.B.UserConstructionScript(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// BlueprintGeneratedClass B.B
class AB : public ABravoHotelAmplifier {

public:

	struct Unknown UberGraphFrame; // 0x1BF0 (8)
	struct Unknown InternalPP; // 0x1BF8 (8)
	struct Unknown EffectMaterial; // 0x1C00 (8)
	char IsActive : 0; // 0x1C08 (1)
	struct Unknown mRadialBlur; // 0x1C10 (8)
	struct Unknown iRadialBlur; // 0x1C18 (8)
	struct Unknown Radial; // 0x1C20 (56)
	float Radial; // 0x1C58 (4)
	int32_t Radial; // 0x1C5C (4)
	struct Unknown Radial; // 0x1C60 (8)
	struct Unknown Radial; // 0x1C68 (8)
	struct Unknown Native; // 0x1C70 (1472)
	struct Unknown mSelectiveColor; // 0x2230 (8)
	struct Unknown iSelectiveColor; // 0x2238 (8)
	struct Unknown Selective; // 0x2240 (56)
	struct Unknown Selective; // 0x2278 (16)
	float Selective; // 0x2288 (4)
	float Selective; // 0x228C (4)
	float Selective; // 0x2290 (4)
	float CurrentBlur; // 0x2294 (4)
	float CurrentSelective; // 0x2298 (4)
	float FadeInSpeed; // 0x229C (4)
	float FadeOutSpeed; // 0x22A0 (4)
	struct Unknown mMonochrome; // 0x22A8 (8)
	struct Unknown iMonochrome; // 0x22B0 (8)
	struct Unknown Monochrome; // 0x22B8 (56)
	struct Unknown Monochrome; // 0x22F0 (16)
	struct Unknown MBlackColor; // 0x2300 (8)
	struct Unknown IBlackColor; // 0x2308 (8)
	struct Unknown BlackColor; // 0x2310 (56)
	float ActiveDelayTime; // 0x2348 (4)
	struct Unknown MainWidget; // 0x2350 (8)
	struct Unknown Top; // 0x2358 (8)

	void GetTopWidget(struct Unknown& Top); // Function B.B.GetTopWidget(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void GetMainWidget(struct Unknown& MainWidget); // Function B.B.GetMainWidget(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void IsOwnerLocallyControlled(char& bIsLocallyControlled); // Function B.B.IsOwnerLocallyControlled(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BlackColorFunc(char IsEnabled); // Function B.B.BlackColorFunc(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Monochrome(char IsEnabled); // Function B.B.Monochrome(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Selective(char IsEnabled); // Function B.B.Selective(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetEffectPriority(int32_t Priority, struct Unknown Material); // Function B.B.SetEffectPriority(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetAdvancedEffectFeatures(struct Unknown Features, struct Unknown Material, struct Unknown Dynamic); // Function B.B.SetAdvancedEffectFeatures(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Radial(char IsEnabled); // Function B.B.Radial(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CreateEffectMaterialInstance(struct Unknown Material, struct Unknown& Instance); // Function B.B.CreateEffectMaterialInstance(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ScreenEffectEvent(char RadialBlur, char BlackColor); // Function B.B.ScreenEffectEvent(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnDeactiveAmplifier(); // Function B.B.OnDeactiveAmplifier(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnActiveAmplifier(); // Function B.B.OnActiveAmplifier(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ReceiveTick(float DeltaSeconds); // Function B.B.ReceiveTick(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnPostEventAtLocationEvent(struct FString EventKey, struct Unknown& Location); // Function B.B.OnPostEventAtLocationEvent(Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ReceiveBeginPlay(); // Function B.B.ReceiveBeginPlay(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void AddActiveEvent(); // Function B.B.AddActiveEvent(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnClickedAmplifier(); // Function B.B.OnClickedAmplifier(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void K2_OnEquip(); // Function B.B.K2_OnEquip(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ReceiveDestroyed(); // Function B.B.ReceiveDestroyed(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void K2_OnUnEquip(); // Function B.B.K2_OnUnEquip(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_B(int32_t EntryPoint); // Function B.B.ExecuteUbergraph_B(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// BlueprintGeneratedClass B.B
class AB : public AB {

public:

	struct Unknown BravoHotelVehicleTire_RR; // 0xD18 (8)
	struct Unknown BravoHotelVehicleTire_RL; // 0xD20 (8)
	struct Unknown BravoHotelVehicleTire_FR; // 0xD28 (8)
	struct Unknown BravoHotelVehicleTire_FL; // 0xD30 (8)
	struct Unknown B; // 0xD38 (8)
	struct Unknown B; // 0xD40 (8)
	struct Unknown BravoHotelVehicleSeat04; // 0xD48 (8)
	struct Unknown BravoHotelVehicleSeat03; // 0xD50 (8)
	struct Unknown BravoHotelVehicleSeat02; // 0xD58 (8)
};

// BlueprintGeneratedClass B.B
class AB : public AB {

public:

	struct Unknown BravoHotelVehicleTire_RR; // 0xD18 (8)
	struct Unknown BravoHotelVehicleTire_RL; // 0xD20 (8)
	struct Unknown BravoHotelVehicleTire_FR; // 0xD28 (8)
	struct Unknown BravoHotelVehicleTire_FL; // 0xD30 (8)
	struct Unknown B; // 0xD38 (8)
	struct Unknown B; // 0xD40 (8)
	struct Unknown BravoHotelVehicleSeat04; // 0xD48 (8)
	struct Unknown BravoHotelVehicleSeat03; // 0xD50 (8)
	struct Unknown BravoHotelVehicleSeat02; // 0xD58 (8)
};

// BlueprintGeneratedClass B.B
class AB : public AB {

public:

	struct Unknown BravoHotelVehicleTire_RR; // 0xD18 (8)
	struct Unknown BravoHotelVehicleTire_RL; // 0xD20 (8)
	struct Unknown BravoHotelVehicleTire_FR; // 0xD28 (8)
	struct Unknown BravoHotelVehicleTire_FL; // 0xD30 (8)
	struct Unknown B; // 0xD38 (8)
	struct Unknown B; // 0xD40 (8)
	struct Unknown BravoHotelVehicleSeat04; // 0xD48 (8)
	struct Unknown BravoHotelVehicleSeat03; // 0xD50 (8)
	struct Unknown BravoHotelVehicleSeat02; // 0xD58 (8)
};

// BlueprintGeneratedClass B.B
class AB : public ABravoHotelMaterialEffectActor {

public:

	struct Unknown Tire_RL; // 0x460 (8)
	struct Unknown Tire_FL; // 0x468 (8)
	struct Unknown Tire_RR; // 0x470 (8)
	struct Unknown Tire_FR; // 0x478 (8)
	struct Unknown SkeletalMesh; // 0x480 (8)
	struct Unknown DefaultSceneRoot; // 0x488 (8)

	void UserConstructionScript(); // Function B.B.UserConstructionScript(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// BlueprintGeneratedClass B.B
class AB : public ABravoHotelMaterialEffectActor {

public:

	struct Unknown Tire_RL; // 0x460 (8)
	struct Unknown Tire_FL; // 0x468 (8)
	struct Unknown Tire_RR; // 0x470 (8)
	struct Unknown Tire_FR; // 0x478 (8)
	struct Unknown SkeletalMesh; // 0x480 (8)
	struct Unknown DefaultSceneRoot; // 0x488 (8)

	void UserConstructionScript(); // Function B.B.UserConstructionScript(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// BlueprintGeneratedClass B.B
class AB : public ABravoHotelMaterialEffectActor {

public:

	struct Unknown Tire_RL; // 0x460 (8)
	struct Unknown Tire_FL; // 0x468 (8)
	struct Unknown Tire_RR; // 0x470 (8)
	struct Unknown Tire_FR; // 0x478 (8)
	struct Unknown SkeletalMesh; // 0x480 (8)
	struct Unknown DefaultSceneRoot; // 0x488 (8)

	void UserConstructionScript(); // Function B.B.UserConstructionScript(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// BlueprintGeneratedClass B.B
class AB : public ABravoHotelMaterialEffectActor {

public:

	struct Unknown Tire_RL; // 0x460 (8)
	struct Unknown Tire_FL; // 0x468 (8)
	struct Unknown Tire_RR; // 0x470 (8)
	struct Unknown Tire_FR; // 0x478 (8)
	struct Unknown SkeletalMesh; // 0x480 (8)
	struct Unknown DefaultSceneRoot; // 0x488 (8)

	void UserConstructionScript(); // Function B.B.UserConstructionScript(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// Function B.B.HasPerkDeckWidget
inline char AB::HasPerkDeckWidget() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.HasPerkDeckWidget");

	struct HasPerkDeckWidget_Params {
		
		char ReturnValue;

	}; HasPerkDeckWidget_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function B.B.GetHUDInteractionComponent
inline struct Unknown AB::GetHUDInteractionComponent() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.GetHUDInteractionComponent");

	struct GetHUDInteractionComponent_Params {
		
		struct Unknown ReturnValue;

	}; GetHUDInteractionComponent_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function B.B.IsShowingSystemPopup
inline char AB::IsShowingSystemPopup() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.IsShowingSystemPopup");

	struct IsShowingSystemPopup_Params {
		
		char ReturnValue;

	}; IsShowingSystemPopup_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function B.B.SetSmartpingInfo
inline void AB::SetSmartpingInfo(struct Unknown ServerLocation, char IsAgree) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.SetSmartpingInfo");

	struct SetSmartpingInfo_Params {
		struct Unknown ServerLocation;
		char IsAgree;
	}; SetSmartpingInfo_Params Params;

	Params.ServerLocation = ServerLocation;
	Params.IsAgree = IsAgree;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.MakeSmartpingInfo
inline void AB::MakeSmartpingInfo(struct Unknown ServerLocation, char IsAgree) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.MakeSmartpingInfo");

	struct MakeSmartpingInfo_Params {
		struct Unknown ServerLocation;
		char IsAgree;
	}; MakeSmartpingInfo_Params Params;

	Params.ServerLocation = ServerLocation;
	Params.IsAgree = IsAgree;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.CalcZLocation
inline void AB::CalcZLocation(struct Unknown WorldLocation, float& ZLocation) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.CalcZLocation");

	struct CalcZLocation_Params {
		struct Unknown WorldLocation;
		float& ZLocation;
	}; CalcZLocation_Params Params;

	Params.WorldLocation = WorldLocation;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	ZLocation = Params.ZLocation;

}

// Function B.B.OnMakeSmartpingInfo
inline void AB::OnMakeSmartpingInfo(int32_t PingTypeIndex, struct Unknown ServerLocation, char IsAgree) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.OnMakeSmartpingInfo");

	struct OnMakeSmartpingInfo_Params {
		int32_t PingTypeIndex;
		struct Unknown ServerLocation;
		char IsAgree;
	}; OnMakeSmartpingInfo_Params Params;

	Params.PingTypeIndex = PingTypeIndex;
	Params.ServerLocation = ServerLocation;
	Params.IsAgree = IsAgree;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.ShowPerkDeckPopup
inline void AB::ShowPerkDeckPopup() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ShowPerkDeckPopup");

	struct ShowPerkDeckPopup_Params {
		
	}; ShowPerkDeckPopup_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.IsSpectating
inline void AB::IsSpectating(char& IsSpectating) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.IsSpectating");

	struct IsSpectating_Params {
		char& IsSpectating;
	}; IsSpectating_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	IsSpectating = Params.IsSpectating;

}

// Function B.B.HideInteractive
inline void AB::HideInteractive() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.HideInteractive");

	struct HideInteractive_Params {
		
	}; HideInteractive_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.GetSmartPingSystem
inline struct Unknown AB::GetSmartPingSystem() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.GetSmartPingSystem");

	struct GetSmartPingSystem_Params {
		
		struct Unknown ReturnValue;

	}; GetSmartPingSystem_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function B.B.CheckInputState
inline void AB::CheckInputState() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.CheckInputState");

	struct CheckInputState_Params {
		
	}; CheckInputState_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.IsMatchEnd
inline void AB::IsMatchEnd(char& State) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.IsMatchEnd");

	struct IsMatchEnd_Params {
		char& State;
	}; IsMatchEnd_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	State = Params.State;

}

// Function B.B.IsOpenSystemPopup
inline void AB::IsOpenSystemPopup(char& bResult) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.IsOpenSystemPopup");

	struct IsOpenSystemPopup_Params {
		char& bResult;
	}; IsOpenSystemPopup_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	bResult = Params.bResult;

}

// Function B.B.GetSpectatorTargetRank
inline void AB::GetSpectatorTargetRank(char& Result, int32_t& Rank) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.GetSpectatorTargetRank");

	struct GetSpectatorTargetRank_Params {
		char& Result;
		int32_t& Rank;
	}; GetSpectatorTargetRank_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Result = Params.Result;
	Rank = Params.Rank;

}

// Function B.B.IsGlobalPostProcessVolume
inline char AB::IsGlobalPostProcessVolume(struct Unknown Other) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.IsGlobalPostProcessVolume");

	struct IsGlobalPostProcessVolume_Params {
		struct Unknown Other;
		char ReturnValue;

	}; IsGlobalPostProcessVolume_Params Params;

	Params.Other = Other;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function B.B.SaveInventoryData
inline void AB::SaveInventoryData(char bSaveAppearlance) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.SaveInventoryData");

	struct SaveInventoryData_Params {
		char bSaveAppearlance;
	}; SaveInventoryData_Params Params;

	Params.bSaveAppearlance = bSaveAppearlance;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.CheckSavedInventoryData
inline void AB::CheckSavedInventoryData() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.CheckSavedInventoryData");

	struct CheckSavedInventoryData_Params {
		
	}; CheckSavedInventoryData_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.SetDefaultItem
inline void AB::SetDefaultItem() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.SetDefaultItem");

	struct SetDefaultItem_Params {
		
	}; SetDefaultItem_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.RunInventoryDataCommand
inline void AB::RunInventoryDataCommand(struct Unknown SavedInventoryData) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.RunInventoryDataCommand");

	struct RunInventoryDataCommand_Params {
		struct Unknown SavedInventoryData;
	}; RunInventoryDataCommand_Params Params;

	Params.SavedInventoryData = SavedInventoryData;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.AddInBackpackItem
inline void AB::AddInBackpackItem() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.AddInBackpackItem");

	struct AddInBackpackItem_Params {
		
	}; AddInBackpackItem_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.Add
inline void AB::Add() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.Add");

	struct Add_Params {
		
	}; Add_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.Add
inline void AB::Add() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.Add");

	struct Add_Params {
		
	}; Add_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.GetPlayerSpectatorHUD
inline void AB::GetPlayerSpectatorHUD(struct Unknown& RefSpectatorHUD) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.GetPlayerSpectatorHUD");

	struct GetPlayerSpectatorHUD_Params {
		struct Unknown& RefSpectatorHUD;
	}; GetPlayerSpectatorHUD_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	RefSpectatorHUD = Params.RefSpectatorHUD;

}

// Function B.B.CalcReverseSideScreenPosition
inline void AB::CalcReverseSideScreenPosition(struct Unknown WorldLocation, float& OutScreenPositionAngle) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.CalcReverseSideScreenPosition");

	struct CalcReverseSideScreenPosition_Params {
		struct Unknown WorldLocation;
		float& OutScreenPositionAngle;
	}; CalcReverseSideScreenPosition_Params Params;

	Params.WorldLocation = WorldLocation;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	OutScreenPositionAngle = Params.OutScreenPositionAngle;

}

// Function B.B.CorrectionScreenPositionByTeamPositionWidget
inline void AB::CorrectionScreenPositionByTeamPositionWidget(struct Unknown& ScreenPosition, char& RetOutScreenPosition) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.CorrectionScreenPositionByTeamPositionWidget");

	struct CorrectionScreenPositionByTeamPositionWidget_Params {
		struct Unknown& ScreenPosition;
		char& RetOutScreenPosition;
	}; CorrectionScreenPositionByTeamPositionWidget_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	ScreenPosition = Params.ScreenPosition;
	RetOutScreenPosition = Params.RetOutScreenPosition;

}

// Function B.B.GetCurrentViewportMaxSizeByTeamPositionWidget
inline void AB::GetCurrentViewportMaxSizeByTeamPositionWidget(struct Unknown& ViewportMaxSize) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.GetCurrentViewportMaxSizeByTeamPositionWidget");

	struct GetCurrentViewportMaxSizeByTeamPositionWidget_Params {
		struct Unknown& ViewportMaxSize;
	}; GetCurrentViewportMaxSizeByTeamPositionWidget_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	ViewportMaxSize = Params.ViewportMaxSize;

}

// Function B.B.SetActionBlocked
inline void AB::SetActionBlocked(char bWantsToBlock, struct TArray<Unknown>& ActionNames, struct Unknown Widget) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.SetActionBlocked");

	struct SetActionBlocked_Params {
		char bWantsToBlock;
		struct TArray<Unknown>& ActionNames;
		struct Unknown Widget;
	}; SetActionBlocked_Params Params;

	Params.bWantsToBlock = bWantsToBlock;
	Params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	ActionNames = Params.ActionNames;

}

// Function B.B.DoNothing
inline void AB::DoNothing() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.DoNothing");

	struct DoNothing_Params {
		
	}; DoNothing_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.GetPlayerMainWidget
inline void AB::GetPlayerMainWidget(char bWantsToCreateIfNull, struct Unknown& Widget) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.GetPlayerMainWidget");

	struct GetPlayerMainWidget_Params {
		char bWantsToCreateIfNull;
		struct Unknown& Widget;
	}; GetPlayerMainWidget_Params Params;

	Params.bWantsToCreateIfNull = bWantsToCreateIfNull;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Widget = Params.Widget;

}

// Function B.B.GetInventoryWidget
inline void AB::GetInventoryWidget(char bWantsToCreateIfNull, struct Unknown& Widget) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.GetInventoryWidget");

	struct GetInventoryWidget_Params {
		char bWantsToCreateIfNull;
		struct Unknown& Widget;
	}; GetInventoryWidget_Params Params;

	Params.bWantsToCreateIfNull = bWantsToCreateIfNull;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Widget = Params.Widget;

}

// Function B.B.GetPlayerHUD
inline void AB::GetPlayerHUD(char& IsAlive, struct Unknown& PlayerHUD) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.GetPlayerHUD");

	struct GetPlayerHUD_Params {
		char& IsAlive;
		struct Unknown& PlayerHUD;
	}; GetPlayerHUD_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	IsAlive = Params.IsAlive;
	PlayerHUD = Params.PlayerHUD;

}

// Function B.B.GetPawnPosition
inline void AB::GetPawnPosition(struct Unknown& out_Position, struct Unknown& out_MapSize) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.GetPawnPosition");

	struct GetPawnPosition_Params {
		struct Unknown& out_Position;
		struct Unknown& out_MapSize;
	}; GetPawnPosition_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	out_Position = Params.out_Position;
	out_MapSize = Params.out_MapSize;

}

// Function B.B.InpActEvt_Ctrl_5
inline void AB::InpActEvt_Ctrl_5(struct Unknown Key) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.InpActEvt_Ctrl_5");

	struct InpActEvt_Ctrl_5_Params {
		struct Unknown Key;
	}; InpActEvt_Ctrl_5_Params Params;

	Params.Key = Key;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.InpActEvt_Ctrl_B_K2Node_InputKeyEvent_4
inline void AB::InpActEvt_Ctrl_B_K2Node_InputKeyEvent_4(struct Unknown Key) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.InpActEvt_Ctrl_B_K2Node_InputKeyEvent_4");

	struct InpActEvt_Ctrl_B_K2Node_InputKeyEvent_4_Params {
		struct Unknown Key;
	}; InpActEvt_Ctrl_B_K2Node_InputKeyEvent_4_Params Params;

	Params.Key = Key;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.InpActEvt_LeftControl_K2Node_InputKeyEvent_3
inline void AB::InpActEvt_LeftControl_K2Node_InputKeyEvent_3(struct Unknown Key) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.InpActEvt_LeftControl_K2Node_InputKeyEvent_3");

	struct InpActEvt_LeftControl_K2Node_InputKeyEvent_3_Params {
		struct Unknown Key;
	}; InpActEvt_LeftControl_K2Node_InputKeyEvent_3_Params Params;

	Params.Key = Key;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.InpActEvt_LeftControl_K2Node_InputKeyEvent_2
inline void AB::InpActEvt_LeftControl_K2Node_InputKeyEvent_2(struct Unknown Key) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.InpActEvt_LeftControl_K2Node_InputKeyEvent_2");

	struct InpActEvt_LeftControl_K2Node_InputKeyEvent_2_Params {
		struct Unknown Key;
	}; InpActEvt_LeftControl_K2Node_InputKeyEvent_2_Params Params;

	Params.Key = Key;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.InpActEvt_AcceptUI_K2Node_InputActionEvent_6
inline void AB::InpActEvt_AcceptUI_K2Node_InputActionEvent_6(struct Unknown Key) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.InpActEvt_AcceptUI_K2Node_InputActionEvent_6");

	struct InpActEvt_AcceptUI_K2Node_InputActionEvent_6_Params {
		struct Unknown Key;
	}; InpActEvt_AcceptUI_K2Node_InputActionEvent_6_Params Params;

	Params.Key = Key;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.InpActEvt_MiniMap_K2Node_InputActionEvent_5
inline void AB::InpActEvt_MiniMap_K2Node_InputActionEvent_5(struct Unknown Key) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.InpActEvt_MiniMap_K2Node_InputActionEvent_5");

	struct InpActEvt_MiniMap_K2Node_InputActionEvent_5_Params {
		struct Unknown Key;
	}; InpActEvt_MiniMap_K2Node_InputActionEvent_5_Params Params;

	Params.Key = Key;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.InpActEvt_CloseUI_K2Node_InputActionEvent_4
inline void AB::InpActEvt_CloseUI_K2Node_InputActionEvent_4(struct Unknown Key) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.InpActEvt_CloseUI_K2Node_InputActionEvent_4");

	struct InpActEvt_CloseUI_K2Node_InputActionEvent_4_Params {
		struct Unknown Key;
	}; InpActEvt_CloseUI_K2Node_InputActionEvent_4_Params Params;

	Params.Key = Key;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.InpActEvt_OptionMenu_K2Node_InputActionEvent_3
inline void AB::InpActEvt_OptionMenu_K2Node_InputActionEvent_3(struct Unknown Key) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.InpActEvt_OptionMenu_K2Node_InputActionEvent_3");

	struct InpActEvt_OptionMenu_K2Node_InputActionEvent_3_Params {
		struct Unknown Key;
	}; InpActEvt_OptionMenu_K2Node_InputActionEvent_3_Params Params;

	Params.Key = Key;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.InpActEvt_ToggleInGameHUD_K2Node_InputActionEvent_2
inline void AB::InpActEvt_ToggleInGameHUD_K2Node_InputActionEvent_2(struct Unknown Key) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.InpActEvt_ToggleInGameHUD_K2Node_InputActionEvent_2");

	struct InpActEvt_ToggleInGameHUD_K2Node_InputActionEvent_2_Params {
		struct Unknown Key;
	}; InpActEvt_ToggleInGameHUD_K2Node_InputActionEvent_2_Params Params;

	Params.Key = Key;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.InpActEvt_ToggleGuideWidget_K2Node_InputActionEvent_1
inline void AB::InpActEvt_ToggleGuideWidget_K2Node_InputActionEvent_1(struct Unknown Key) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.InpActEvt_ToggleGuideWidget_K2Node_InputActionEvent_1");

	struct InpActEvt_ToggleGuideWidget_K2Node_InputActionEvent_1_Params {
		struct Unknown Key;
	}; InpActEvt_ToggleGuideWidget_K2Node_InputActionEvent_1_Params Params;

	Params.Key = Key;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.InpActEvt_J_K2Node_InputKeyEvent_1
inline void AB::InpActEvt_J_K2Node_InputKeyEvent_1(struct Unknown Key) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.InpActEvt_J_K2Node_InputKeyEvent_1");

	struct InpActEvt_J_K2Node_InputKeyEvent_1_Params {
		struct Unknown Key;
	}; InpActEvt_J_K2Node_InputKeyEvent_1_Params Params;

	Params.Key = Key;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.OpenMarket
inline void AB::OpenMarket() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.OpenMarket");

	struct OpenMarket_Params {
		
	}; OpenMarket_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.CustomEvent_1
inline void AB::CustomEvent_1() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.CustomEvent_1");

	struct CustomEvent_1_Params {
		
	}; CustomEvent_1_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.
inline void AB::() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.");

	struct _Params {
		
	}; _Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.CloseBlackMarket
inline void AB::CloseBlackMarket() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.CloseBlackMarket");

	struct CloseBlackMarket_Params {
		
	}; CloseBlackMarket_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.OpenBlackMarket
inline void AB::OpenBlackMarket() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.OpenBlackMarket");

	struct OpenBlackMarket_Params {
		
	}; OpenBlackMarket_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.Cheat
inline void AB::Cheat(struct FString CheatCommand) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.Cheat");

	struct Cheat_Params {
		struct FString CheatCommand;
	}; Cheat_Params Params;

	Params.CheatCommand = CheatCommand;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.SmartPingConfirmHoldUI_BP
inline void AB::SmartPingConfirmHoldUI_BP() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.SmartPingConfirmHoldUI_BP");

	struct SmartPingConfirmHoldUI_BP_Params {
		
	}; SmartPingConfirmHoldUI_BP_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.SmartPingCancelHoldUI_BP
inline void AB::SmartPingCancelHoldUI_BP() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.SmartPingCancelHoldUI_BP");

	struct SmartPingCancelHoldUI_BP_Params {
		
	}; SmartPingCancelHoldUI_BP_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.SmartPingReleased_BP
inline void AB::SmartPingReleased_BP(char bIgnoreMenu) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.SmartPingReleased_BP");

	struct SmartPingReleased_BP_Params {
		char bIgnoreMenu;
	}; SmartPingReleased_BP_Params Params;

	Params.bIgnoreMenu = bIgnoreMenu;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.SmartPingPressed_BP
inline void AB::SmartPingPressed_BP(char bIgnoreMenu) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.SmartPingPressed_BP");

	struct SmartPingPressed_BP_Params {
		char bIgnoreMenu;
	}; SmartPingPressed_BP_Params Params;

	Params.bIgnoreMenu = bIgnoreMenu;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.SmartPingFastAgree
inline void AB::SmartPingFastAgree() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.SmartPingFastAgree");

	struct SmartPingFastAgree_Params {
		
	}; SmartPingFastAgree_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.SmartPingHotKey_BP
inline void AB::SmartPingHotKey_BP(int32_t Index) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.SmartPingHotKey_BP");

	struct SmartPingHotKey_BP_Params {
		int32_t Index;
	}; SmartPingHotKey_BP_Params Params;

	Params.Index = Index;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.ClientSetSmartpingInfo
inline void AB::ClientSetSmartpingInfo(struct Unknown ServerLocation, char IsAgree) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ClientSetSmartpingInfo");

	struct ClientSetSmartpingInfo_Params {
		struct Unknown ServerLocation;
		char IsAgree;
	}; ClientSetSmartpingInfo_Params Params;

	Params.ServerLocation = ServerLocation;
	Params.IsAgree = IsAgree;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.ServerMakeSmartpingInfo
inline void AB::ServerMakeSmartpingInfo(struct Unknown ServerLocation, char IsAgree) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ServerMakeSmartpingInfo");

	struct ServerMakeSmartpingInfo_Params {
		struct Unknown ServerLocation;
		char IsAgree;
	}; ServerMakeSmartpingInfo_Params Params;

	Params.ServerLocation = ServerLocation;
	Params.IsAgree = IsAgree;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.OnInputInventory
inline void AB::OnInputInventory() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.OnInputInventory");

	struct OnInputInventory_Params {
		
	}; OnInputInventory_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.EnterSceneOfWin
inline void AB::EnterSceneOfWin(char bWin) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.EnterSceneOfWin");

	struct EnterSceneOfWin_Params {
		char bWin;
	}; EnterSceneOfWin_Params Params;

	Params.bWin = bWin;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.LoadInventoryData
inline void AB::LoadInventoryData() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.LoadInventoryData");

	struct LoadInventoryData_Params {
		
	}; LoadInventoryData_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.InputModeUI
inline void AB::InputModeUI(struct Unknown Widget) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.InputModeUI");

	struct InputModeUI_Params {
		struct Unknown Widget;
	}; InputModeUI_Params Params;

	Params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.InputModeGame
inline void AB::InputModeGame(struct Unknown Widget) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.InputModeGame");

	struct InputModeGame_Params {
		struct Unknown Widget;
	}; InputModeGame_Params Params;

	Params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.ServerEnterSceneOfWin
inline void AB::ServerEnterSceneOfWin() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ServerEnterSceneOfWin");

	struct ServerEnterSceneOfWin_Params {
		
	}; ServerEnterSceneOfWin_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.ClientEnterSceneOfWin
inline void AB::ClientEnterSceneOfWin() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ClientEnterSceneOfWin");

	struct ClientEnterSceneOfWin_Params {
		
	}; ClientEnterSceneOfWin_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.OpenPerkDeckPopup
inline void AB::OpenPerkDeckPopup() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.OpenPerkDeckPopup");

	struct OpenPerkDeckPopup_Params {
		
	}; OpenPerkDeckPopup_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.K2_SaveInventoryData
inline void AB::K2_SaveInventoryData() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.K2_SaveInventoryData");

	struct K2_SaveInventoryData_Params {
		
	}; K2_SaveInventoryData_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.NotifyOperationMessage
inline void AB::NotifyOperationMessage(struct FText& NotifyText) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.NotifyOperationMessage");

	struct NotifyOperationMessage_Params {
		struct FText& NotifyText;
	}; NotifyOperationMessage_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	NotifyText = Params.NotifyText;

}

// Function B.B.InsertMarker
inline void AB::InsertMarker() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.InsertMarker");

	struct InsertMarker_Params {
		
	}; InsertMarker_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.
inline void AB::(struct FName ItemKey) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.");

	struct _Params {
		struct FName ItemKey;
	}; _Params Params;

	Params.ItemKey = ItemKey;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.SetUseItemSelectMenu
inline void AB::SetUseItemSelectMenu(char bIsShow) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.SetUseItemSelectMenu");

	struct SetUseItemSelectMenu_Params {
		char bIsShow;
	}; SetUseItemSelectMenu_Params Params;

	Params.bIsShow = bIsShow;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.SetBoostItemSelectMenu
inline void AB::SetBoostItemSelectMenu(char bIsShow) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.SetBoostItemSelectMenu");

	struct SetBoostItemSelectMenu_Params {
		char bIsShow;
	}; SetBoostItemSelectMenu_Params Params;

	Params.bIsShow = bIsShow;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.CustomEvent
inline void AB::CustomEvent(struct FName ItemKey) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.CustomEvent");

	struct CustomEvent_Params {
		struct FName ItemKey;
	}; CustomEvent_Params Params;

	Params.ItemKey = ItemKey;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.CheckNameTooltip
inline void AB::CheckNameTooltip() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.CheckNameTooltip");

	struct CheckNameTooltip_Params {
		
	}; CheckNameTooltip_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.RemoveallCharacterToolTip
inline void AB::RemoveallCharacterToolTip() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.RemoveallCharacterToolTip");

	struct RemoveallCharacterToolTip_Params {
		
	}; RemoveallCharacterToolTip_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.CreateCharacterToolTip
inline void AB::CreateCharacterToolTip() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.CreateCharacterToolTip");

	struct CreateCharacterToolTip_Params {
		
	}; CreateCharacterToolTip_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.ExecuteUbergraph_B
inline void AB::ExecuteUbergraph_B(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ExecuteUbergraph_B");

	struct ExecuteUbergraph_B_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_B_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.ReceiveBeginPlay
inline void AB::ReceiveBeginPlay() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ReceiveBeginPlay");

	struct ReceiveBeginPlay_Params {
		
	}; ReceiveBeginPlay_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.ExecuteUbergraph_B
inline void AB::ExecuteUbergraph_B(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ExecuteUbergraph_B");

	struct ExecuteUbergraph_B_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_B_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.ReceiveBeginPlay
inline void AB::ReceiveBeginPlay() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ReceiveBeginPlay");

	struct ReceiveBeginPlay_Params {
		
	}; ReceiveBeginPlay_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.ExecuteUbergraph_B
inline void AB::ExecuteUbergraph_B(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ExecuteUbergraph_B");

	struct ExecuteUbergraph_B_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_B_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.GetFloorLocation
inline void AB::GetFloorLocation(struct Unknown InLocation, struct Unknown& OutLocation) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.GetFloorLocation");

	struct GetFloorLocation_Params {
		struct Unknown InLocation;
		struct Unknown& OutLocation;
	}; GetFloorLocation_Params Params;

	Params.InLocation = InLocation;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	OutLocation = Params.OutLocation;

}

// Function B.B.UpdateCharacterRotation
inline void AB::UpdateCharacterRotation() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.UpdateCharacterRotation");

	struct UpdateCharacterRotation_Params {
		
	}; UpdateCharacterRotation_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.UpdateCharacterLocation
inline void AB::UpdateCharacterLocation() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.UpdateCharacterLocation");

	struct UpdateCharacterLocation_Params {
		
	}; UpdateCharacterLocation_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.PlayWinAnimation
inline void AB::PlayWinAnimation(struct Unknown TargetCharacter) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.PlayWinAnimation");

	struct PlayWinAnimation_Params {
		struct Unknown TargetCharacter;
	}; PlayWinAnimation_Params Params;

	Params.TargetCharacter = TargetCharacter;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.Get
inline void AB::Get(struct Unknown TargetCharacter, struct Unknown& WinMontage) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.Get");

	struct Get_Params {
		struct Unknown TargetCharacter;
		struct Unknown& WinMontage;
	}; Get_Params Params;

	Params.TargetCharacter = TargetCharacter;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	WinMontage = Params.WinMontage;

}

// Function B.B.CheckWorldViewCameraLocationRange
inline void AB::CheckWorldViewCameraLocationRange() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.CheckWorldViewCameraLocationRange");

	struct CheckWorldViewCameraLocationRange_Params {
		
	}; CheckWorldViewCameraLocationRange_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.GetActiveCamera
inline void AB::GetActiveCamera(struct Unknown& ActiveCamera) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.GetActiveCamera");

	struct GetActiveCamera_Params {
		struct Unknown& ActiveCamera;
	}; GetActiveCamera_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	ActiveCamera = Params.ActiveCamera;

}

// Function B.B.PreventCameraWallCollision
inline void AB::PreventCameraWallCollision() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.PreventCameraWallCollision");

	struct PreventCameraWallCollision_Params {
		
	}; PreventCameraWallCollision_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.InitReferences
inline void AB::InitReferences(char& bSuccess) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.InitReferences");

	struct InitReferences_Params {
		char& bSuccess;
	}; InitReferences_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	bSuccess = Params.bSuccess;

}

// Function B.B.ReceiveBeginPlay
inline void AB::ReceiveBeginPlay() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ReceiveBeginPlay");

	struct ReceiveBeginPlay_Params {
		
	}; ReceiveBeginPlay_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.ReceiveTick
inline void AB::ReceiveTick(float DeltaSeconds) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ReceiveTick");

	struct ReceiveTick_Params {
		float DeltaSeconds;
	}; ReceiveTick_Params Params;

	Params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.Start
inline void AB::Start() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.Start");

	struct Start_Params {
		
	}; Start_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.OnFinishMatchEndAnimation
inline void AB::OnFinishMatchEndAnimation() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.OnFinishMatchEndAnimation");

	struct OnFinishMatchEndAnimation_Params {
		
	}; OnFinishMatchEndAnimation_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.ExecuteUbergraph_B
inline void AB::ExecuteUbergraph_B(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ExecuteUbergraph_B");

	struct ExecuteUbergraph_B_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_B_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.Update
inline void UB::Update(char Audio, float Volume, char& ) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.Update");

	struct Update_Params {
		char Audio;
		float Volume;
		char& ;
	}; Update_Params Params;

	Params.Audio = Audio;
	Params.Volume = Volume;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	 = Params.;

}

// Function B.B.Run
inline void UB::Run(struct FString Console, char& ) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.Run");

	struct Run_Params {
		struct FString Console;
		char& ;
	}; Run_Params Params;

	Params.Console = Console;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	 = Params.;

}

// Function B.B.Get
inline void UB::Get(struct Unknown& SettingsWrapper) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.Get");

	struct Get_Params {
		struct Unknown& SettingsWrapper;
	}; Get_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	SettingsWrapper = Params.SettingsWrapper;

}

// Function B.B.StartRecordingReplay
inline void UB::StartRecordingReplay() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.StartRecordingReplay");

	struct StartRecordingReplay_Params {
		
	}; StartRecordingReplay_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.StopRecordingReplay
inline void UB::StopRecordingReplay() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.StopRecordingReplay");

	struct StopRecordingReplay_Params {
		
	}; StopRecordingReplay_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.ReceiveInit
inline void UB::ReceiveInit() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ReceiveInit");

	struct ReceiveInit_Params {
		
	}; ReceiveInit_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.ExecuteUbergraph_B
inline void UB::ExecuteUbergraph_B(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ExecuteUbergraph_B");

	struct ExecuteUbergraph_B_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_B_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.ResetCharacter
inline void AB::ResetCharacter() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ResetCharacter");

	struct ResetCharacter_Params {
		
	}; ResetCharacter_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.GetFloorLocation
inline void AB::GetFloorLocation(struct Unknown InLocation, struct Unknown& OutLocation) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.GetFloorLocation");

	struct GetFloorLocation_Params {
		struct Unknown InLocation;
		struct Unknown& OutLocation;
	}; GetFloorLocation_Params Params;

	Params.InLocation = InLocation;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	OutLocation = Params.OutLocation;

}

// Function B.B.UpdateCharacterRotation
inline void AB::UpdateCharacterRotation() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.UpdateCharacterRotation");

	struct UpdateCharacterRotation_Params {
		
	}; UpdateCharacterRotation_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.UpdateCharacterLocation
inline void AB::UpdateCharacterLocation() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.UpdateCharacterLocation");

	struct UpdateCharacterLocation_Params {
		
	}; UpdateCharacterLocation_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.PlayWinAnimation
inline void AB::PlayWinAnimation(struct Unknown TargetCharacter) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.PlayWinAnimation");

	struct PlayWinAnimation_Params {
		struct Unknown TargetCharacter;
	}; PlayWinAnimation_Params Params;

	Params.TargetCharacter = TargetCharacter;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.Get
inline void AB::Get(struct Unknown TargetCharacter, struct Unknown& WinMontage) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.Get");

	struct Get_Params {
		struct Unknown TargetCharacter;
		struct Unknown& WinMontage;
	}; Get_Params Params;

	Params.TargetCharacter = TargetCharacter;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	WinMontage = Params.WinMontage;

}

// Function B.B.CheckWorldViewCameraLocationRange
inline void AB::CheckWorldViewCameraLocationRange() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.CheckWorldViewCameraLocationRange");

	struct CheckWorldViewCameraLocationRange_Params {
		
	}; CheckWorldViewCameraLocationRange_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.GetActiveCamera
inline void AB::GetActiveCamera(struct Unknown& ActiveCamera) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.GetActiveCamera");

	struct GetActiveCamera_Params {
		struct Unknown& ActiveCamera;
	}; GetActiveCamera_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	ActiveCamera = Params.ActiveCamera;

}

// Function B.B.PreventCameraWallCollision
inline void AB::PreventCameraWallCollision() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.PreventCameraWallCollision");

	struct PreventCameraWallCollision_Params {
		
	}; PreventCameraWallCollision_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.InitReferences
inline void AB::InitReferences(char& bSuccess) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.InitReferences");

	struct InitReferences_Params {
		char& bSuccess;
	}; InitReferences_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	bSuccess = Params.bSuccess;

}

// Function B.B.ReceiveBeginPlay
inline void AB::ReceiveBeginPlay() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ReceiveBeginPlay");

	struct ReceiveBeginPlay_Params {
		
	}; ReceiveBeginPlay_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.ReceiveTick
inline void AB::ReceiveTick(float DeltaSeconds) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ReceiveTick");

	struct ReceiveTick_Params {
		float DeltaSeconds;
	}; ReceiveTick_Params Params;

	Params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.Start
inline void AB::Start() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.Start");

	struct Start_Params {
		
	}; Start_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.ExecuteUbergraph_B
inline void AB::ExecuteUbergraph_B(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ExecuteUbergraph_B");

	struct ExecuteUbergraph_B_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_B_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.UserConstructionScript
inline void AB::UserConstructionScript() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.UserConstructionScript");

	struct UserConstructionScript_Params {
		
	}; UserConstructionScript_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.TargetSetting
inline void AB::TargetSetting() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.TargetSetting");

	struct TargetSetting_Params {
		
	}; TargetSetting_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.GetTargetByUID
inline void AB::GetTargetByUID(int32_t UID, struct Unknown& TargetPawn) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.GetTargetByUID");

	struct GetTargetByUID_Params {
		int32_t UID;
		struct Unknown& TargetPawn;
	}; GetTargetByUID_Params Params;

	Params.UID = UID;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	TargetPawn = Params.TargetPawn;

}

// Function B.B.KillCamTarget
inline void AB::KillCamTarget() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.KillCamTarget");

	struct KillCamTarget_Params {
		
	}; KillCamTarget_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.OnSetTarget
inline void AB::OnSetTarget() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.OnSetTarget");

	struct OnSetTarget_Params {
		
	}; OnSetTarget_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.ExecuteUbergraph_B
inline void AB::ExecuteUbergraph_B(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ExecuteUbergraph_B");

	struct ExecuteUbergraph_B_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_B_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.CheckAnyAction
inline void UB::CheckAnyAction(char& AnyAction) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.CheckAnyAction");

	struct CheckAnyAction_Params {
		char& AnyAction;
	}; CheckAnyAction_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	AnyAction = Params.AnyAction;

}

// Function B.B.CheckAnyCloseUI
inline void UB::CheckAnyCloseUI(char& AnyClosed) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.CheckAnyCloseUI");

	struct CheckAnyCloseUI_Params {
		char& AnyClosed;
	}; CheckAnyCloseUI_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	AnyClosed = Params.AnyClosed;

}

// Function B.B.GetSightInfoWidget
inline struct Unknown UB::GetSightInfoWidget() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.GetSightInfoWidget");

	struct GetSightInfoWidget_Params {
		
		struct Unknown ReturnValue;

	}; GetSightInfoWidget_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function B.B.GetReplayWidget
inline void UB::GetReplayWidget(char WantsToCreateIfNull, struct Unknown& Widget) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.GetReplayWidget");

	struct GetReplayWidget_Params {
		char WantsToCreateIfNull;
		struct Unknown& Widget;
	}; GetReplayWidget_Params Params;

	Params.WantsToCreateIfNull = WantsToCreateIfNull;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Widget = Params.Widget;

}

// Function B.B.GetSpectatorWidget
inline void UB::GetSpectatorWidget(char WantsToCreateIfNull, struct Unknown& Widget) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.GetSpectatorWidget");

	struct GetSpectatorWidget_Params {
		char WantsToCreateIfNull;
		struct Unknown& Widget;
	}; GetSpectatorWidget_Params Params;

	Params.WantsToCreateIfNull = WantsToCreateIfNull;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Widget = Params.Widget;

}

// Function B.B.GetInventoryWidget
inline void UB::GetInventoryWidget(char WantsToCreateIfNull, struct Unknown& Widget) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.GetInventoryWidget");

	struct GetInventoryWidget_Params {
		char WantsToCreateIfNull;
		struct Unknown& Widget;
	}; GetInventoryWidget_Params Params;

	Params.WantsToCreateIfNull = WantsToCreateIfNull;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Widget = Params.Widget;

}

// Function B.B.GetPlayerSpectatorHUD
inline void UB::GetPlayerSpectatorHUD(struct Unknown& RefSpectatorHUD) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.GetPlayerSpectatorHUD");

	struct GetPlayerSpectatorHUD_Params {
		struct Unknown& RefSpectatorHUD;
	}; GetPlayerSpectatorHUD_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	RefSpectatorHUD = Params.RefSpectatorHUD;

}

// Function B.B.IsReplay
inline void UB::IsReplay(char& IsReplay) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.IsReplay");

	struct IsReplay_Params {
		char& IsReplay;
	}; IsReplay_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	IsReplay = Params.IsReplay;

}

// Function B.B.IsOpenSystemPopup
inline void UB::IsOpenSystemPopup(char& bResult) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.IsOpenSystemPopup");

	struct IsOpenSystemPopup_Params {
		char& bResult;
	}; IsOpenSystemPopup_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	bResult = Params.bResult;

}

// Function B.B.GetPlayerMainWidget
inline void UB::GetPlayerMainWidget(char WantsToCreateIfNull, struct Unknown& Widget) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.GetPlayerMainWidget");

	struct GetPlayerMainWidget_Params {
		char WantsToCreateIfNull;
		struct Unknown& Widget;
	}; GetPlayerMainWidget_Params Params;

	Params.WantsToCreateIfNull = WantsToCreateIfNull;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Widget = Params.Widget;

}

// Function B.B.IsMatchEnd
inline void UB::IsMatchEnd(char& State) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.IsMatchEnd");

	struct IsMatchEnd_Params {
		char& State;
	}; IsMatchEnd_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	State = Params.State;

}

// Function B.B.InputMiniMap
inline void UB::InputMiniMap() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.InputMiniMap");

	struct InputMiniMap_Params {
		
	}; InputMiniMap_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.InputWorldMap
inline void UB::InputWorldMap() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.InputWorldMap");

	struct InputWorldMap_Params {
		
	}; InputWorldMap_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.InputToggleIngameHUD
inline void UB::InputToggleIngameHUD() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.InputToggleIngameHUD");

	struct InputToggleIngameHUD_Params {
		
	}; InputToggleIngameHUD_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.ExecuteUbergraph_B
inline void UB::ExecuteUbergraph_B(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ExecuteUbergraph_B");

	struct ExecuteUbergraph_B_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_B_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.ReceiveBeginPlay
inline void AB::ReceiveBeginPlay() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ReceiveBeginPlay");

	struct ReceiveBeginPlay_Params {
		
	}; ReceiveBeginPlay_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.ExecuteUbergraph_B
inline void AB::ExecuteUbergraph_B(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ExecuteUbergraph_B");

	struct ExecuteUbergraph_B_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_B_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.BndEvt__SphereCollision_K2Node_ComponentBoundEvent_0_ComponentHitSignature__Dele
inline void AB::BndEvt__SphereCollision_K2Node_ComponentBoundEvent_0_ComponentHitSignature__Dele(struct Unknown HitComponent, struct Unknown OtherActor, struct Unknown OtherComp, struct Unknown NormalImpulse, struct Unknown& Hit) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.BndEvt__SphereCollision_K2Node_ComponentBoundEvent_0_ComponentHitSignature__Dele");

	struct BndEvt__SphereCollision_K2Node_ComponentBoundEvent_0_ComponentHitSignature__Dele_Params {
		struct Unknown HitComponent;
		struct Unknown OtherActor;
		struct Unknown OtherComp;
		struct Unknown NormalImpulse;
		struct Unknown& Hit;
	}; BndEvt__SphereCollision_K2Node_ComponentBoundEvent_0_ComponentHitSignature__Dele_Params Params;

	Params.HitComponent = HitComponent;
	Params.OtherActor = OtherActor;
	Params.OtherComp = OtherComp;
	Params.NormalImpulse = NormalImpulse;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Hit = Params.Hit;

}

// Function B.B.ExecuteUbergraph_B
inline void AB::ExecuteUbergraph_B(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ExecuteUbergraph_B");

	struct ExecuteUbergraph_B_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_B_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.CanInput
inline void AB::CanInput(char& bCheck) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.CanInput");

	struct CanInput_Params {
		char& bCheck;
	}; CanInput_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	bCheck = Params.bCheck;

}

// Function B.B.CheckCohLoad
inline void AB::CheckCohLoad(char& bCheck) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.CheckCohLoad");

	struct CheckCohLoad_Params {
		char& bCheck;
	}; CheckCohLoad_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	bCheck = Params.bCheck;

}

// Function B.B.CheckWantPopupEvent
inline void AB::CheckWantPopupEvent(char& bCheck) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.CheckWantPopupEvent");

	struct CheckWantPopupEvent_Params {
		char& bCheck;
	}; CheckWantPopupEvent_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	bCheck = Params.bCheck;

}

// Function B.B.GetHUDInteractionComponent
inline struct Unknown AB::GetHUDInteractionComponent() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.GetHUDInteractionComponent");

	struct GetHUDInteractionComponent_Params {
		
		struct Unknown ReturnValue;

	}; GetHUDInteractionComponent_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function B.B.UpdateMouseWheel
inline void AB::UpdateMouseWheel(float Delta) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.UpdateMouseWheel");

	struct UpdateMouseWheel_Params {
		float Delta;
	}; UpdateMouseWheel_Params Params;

	Params.Delta = Delta;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.UpdateMouseY
inline void AB::UpdateMouseY(float Delta) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.UpdateMouseY");

	struct UpdateMouseY_Params {
		float Delta;
	}; UpdateMouseY_Params Params;

	Params.Delta = Delta;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.UpdateMouseX
inline void AB::UpdateMouseX(float Delta) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.UpdateMouseX");

	struct UpdateMouseX_Params {
		float Delta;
	}; UpdateMouseX_Params Params;

	Params.Delta = Delta;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.CreateDefaultSkin
inline void AB::CreateDefaultSkin() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.CreateDefaultSkin");

	struct CreateDefaultSkin_Params {
		
	}; CreateDefaultSkin_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.GetLobbyMainWidget
inline void AB::GetLobbyMainWidget(struct Unknown& Widget) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.GetLobbyMainWidget");

	struct GetLobbyMainWidget_Params {
		struct Unknown& Widget;
	}; GetLobbyMainWidget_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Widget = Params.Widget;

}

// Function B.B.InpActEvt_CloseUI_K2Node_InputActionEvent_2
inline void AB::InpActEvt_CloseUI_K2Node_InputActionEvent_2(struct Unknown Key) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.InpActEvt_CloseUI_K2Node_InputActionEvent_2");

	struct InpActEvt_CloseUI_K2Node_InputActionEvent_2_Params {
		struct Unknown Key;
	}; InpActEvt_CloseUI_K2Node_InputActionEvent_2_Params Params;

	Params.Key = Key;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.InpActEvt_LobbyMoveTab_K2Node_InputActionEvent_1
inline void AB::InpActEvt_LobbyMoveTab_K2Node_InputActionEvent_1(struct Unknown Key) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.InpActEvt_LobbyMoveTab_K2Node_InputActionEvent_1");

	struct InpActEvt_LobbyMoveTab_K2Node_InputActionEvent_1_Params {
		struct Unknown Key;
	}; InpActEvt_LobbyMoveTab_K2Node_InputActionEvent_1_Params Params;

	Params.Key = Key;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.InpAxisEvt_Turn_K2Node_InputAxisEvent_1
inline void AB::InpAxisEvt_Turn_K2Node_InputAxisEvent_1(float AxisValue) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.InpAxisEvt_Turn_K2Node_InputAxisEvent_1");

	struct InpAxisEvt_Turn_K2Node_InputAxisEvent_1_Params {
		float AxisValue;
	}; InpAxisEvt_Turn_K2Node_InputAxisEvent_1_Params Params;

	Params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.InpAxisEvt_LookUp_K2Node_InputAxisEvent_2
inline void AB::InpAxisEvt_LookUp_K2Node_InputAxisEvent_2(float AxisValue) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.InpAxisEvt_LookUp_K2Node_InputAxisEvent_2");

	struct InpAxisEvt_LookUp_K2Node_InputAxisEvent_2_Params {
		float AxisValue;
	}; InpAxisEvt_LookUp_K2Node_InputAxisEvent_2_Params Params;

	Params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.InpAxisEvt_ZoomAxis_K2Node_InputAxisEvent_5
inline void AB::InpAxisEvt_ZoomAxis_K2Node_InputAxisEvent_5(float AxisValue) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.InpAxisEvt_ZoomAxis_K2Node_InputAxisEvent_5");

	struct InpAxisEvt_ZoomAxis_K2Node_InputAxisEvent_5_Params {
		float AxisValue;
	}; InpAxisEvt_ZoomAxis_K2Node_InputAxisEvent_5_Params Params;

	Params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.PlayTutorial
inline void AB::PlayTutorial() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.PlayTutorial");

	struct PlayTutorial_Params {
		
	}; PlayTutorial_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.ReceiveBeginPlay
inline void AB::ReceiveBeginPlay() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ReceiveBeginPlay");

	struct ReceiveBeginPlay_Params {
		
	}; ReceiveBeginPlay_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.NotifyOperationMessage
inline void AB::NotifyOperationMessage(struct FText& NotifyText) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.NotifyOperationMessage");

	struct NotifyOperationMessage_Params {
		struct FText& NotifyText;
	}; NotifyOperationMessage_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	NotifyText = Params.NotifyText;

}

// Function B.B.ChangedSceneDelegate_Event_1
inline void AB::ChangedSceneDelegate_Event_1(enum class Unknow SceneType) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ChangedSceneDelegate_Event_1");

	struct ChangedSceneDelegate_Event_1_Params {
		enum class Unknow SceneType;
	}; ChangedSceneDelegate_Event_1_Params Params;

	Params.SceneType = SceneType;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.OnInputPopupEvent
inline void AB::OnInputPopupEvent() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.OnInputPopupEvent");

	struct OnInputPopupEvent_Params {
		
	}; OnInputPopupEvent_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.CreateOptionPopup
inline void AB::CreateOptionPopup() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.CreateOptionPopup");

	struct CreateOptionPopup_Params {
		
	}; CreateOptionPopup_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.ExecuteUbergraph_B
inline void AB::ExecuteUbergraph_B(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ExecuteUbergraph_B");

	struct ExecuteUbergraph_B_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_B_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.EventDispatcher_StopLobbySound__DelegateSignature
inline void AB::EventDispatcher_StopLobbySound__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.EventDispatcher_StopLobbySound__DelegateSignature");

	struct EventDispatcher_StopLobbySound__DelegateSignature_Params {
		
	}; EventDispatcher_StopLobbySound__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.EventDispatcher_PlayLobbySound__DelegateSignature
inline void AB::EventDispatcher_PlayLobbySound__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.EventDispatcher_PlayLobbySound__DelegateSignature");

	struct EventDispatcher_PlayLobbySound__DelegateSignature_Params {
		
	}; EventDispatcher_PlayLobbySound__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.IsEnableSpawnSupplyBox
inline char AB::IsEnableSpawnSupplyBox(struct Unknown TargetActor, struct FString& OutResult) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.IsEnableSpawnSupplyBox");

	struct IsEnableSpawnSupplyBox_Params {
		struct Unknown TargetActor;
		struct FString& OutResult;
		char ReturnValue;

	}; IsEnableSpawnSupplyBox_Params Params;

	Params.TargetActor = TargetActor;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	OutResult = Params.OutResult;


	return params.ReturnValue;
}

// Function B.B.IsInstancedFoliageActor
inline char AB::IsInstancedFoliageActor(struct Unknown TargetActor) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.IsInstancedFoliageActor");

	struct IsInstancedFoliageActor_Params {
		struct Unknown TargetActor;
		char ReturnValue;

	}; IsInstancedFoliageActor_Params Params;

	Params.TargetActor = TargetActor;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function B.B.GetMainWidget
inline void AB::GetMainWidget(struct Unknown& MainWidget) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.GetMainWidget");

	struct GetMainWidget_Params {
		struct Unknown& MainWidget;
	}; GetMainWidget_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	MainWidget = Params.MainWidget;

}

// Function B.B.3P_Cam_Z__FinishedFunc
inline void AB::3P_Cam_Z__FinishedFunc() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.3P_Cam_Z__FinishedFunc");

	struct 3P_Cam_Z__FinishedFunc_Params {
		
	}; 3P_Cam_Z__FinishedFunc_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.3P_Cam_Z__UpdateFunc
inline void AB::3P_Cam_Z__UpdateFunc() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.3P_Cam_Z__UpdateFunc");

	struct 3P_Cam_Z__UpdateFunc_Params {
		
	}; 3P_Cam_Z__UpdateFunc_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_19
inline void AB::InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_19(struct Unknown Key) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_19");

	struct InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_19_Params {
		struct Unknown Key;
	}; InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_19_Params Params;

	Params.Key = Key;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.InpActEvt_RightMouseButton_K2Node_InputKeyEvent_18
inline void AB::InpActEvt_RightMouseButton_K2Node_InputKeyEvent_18(struct Unknown Key) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.InpActEvt_RightMouseButton_K2Node_InputKeyEvent_18");

	struct InpActEvt_RightMouseButton_K2Node_InputKeyEvent_18_Params {
		struct Unknown Key;
	}; InpActEvt_RightMouseButton_K2Node_InputKeyEvent_18_Params Params;

	Params.Key = Key;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.InpActEvt_One_K2Node_InputKeyEvent_17
inline void AB::InpActEvt_One_K2Node_InputKeyEvent_17(struct Unknown Key) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.InpActEvt_One_K2Node_InputKeyEvent_17");

	struct InpActEvt_One_K2Node_InputKeyEvent_17_Params {
		struct Unknown Key;
	}; InpActEvt_One_K2Node_InputKeyEvent_17_Params Params;

	Params.Key = Key;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.InpActEvt_Two_K2Node_InputKeyEvent_16
inline void AB::InpActEvt_Two_K2Node_InputKeyEvent_16(struct Unknown Key) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.InpActEvt_Two_K2Node_InputKeyEvent_16");

	struct InpActEvt_Two_K2Node_InputKeyEvent_16_Params {
		struct Unknown Key;
	}; InpActEvt_Two_K2Node_InputKeyEvent_16_Params Params;

	Params.Key = Key;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.InpActEvt_Three_K2Node_InputKeyEvent_15
inline void AB::InpActEvt_Three_K2Node_InputKeyEvent_15(struct Unknown Key) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.InpActEvt_Three_K2Node_InputKeyEvent_15");

	struct InpActEvt_Three_K2Node_InputKeyEvent_15_Params {
		struct Unknown Key;
	}; InpActEvt_Three_K2Node_InputKeyEvent_15_Params Params;

	Params.Key = Key;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.InpActEvt_Four_K2Node_InputKeyEvent_14
inline void AB::InpActEvt_Four_K2Node_InputKeyEvent_14(struct Unknown Key) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.InpActEvt_Four_K2Node_InputKeyEvent_14");

	struct InpActEvt_Four_K2Node_InputKeyEvent_14_Params {
		struct Unknown Key;
	}; InpActEvt_Four_K2Node_InputKeyEvent_14_Params Params;

	Params.Key = Key;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.InpActEvt_Five_K2Node_InputKeyEvent_13
inline void AB::InpActEvt_Five_K2Node_InputKeyEvent_13(struct Unknown Key) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.InpActEvt_Five_K2Node_InputKeyEvent_13");

	struct InpActEvt_Five_K2Node_InputKeyEvent_13_Params {
		struct Unknown Key;
	}; InpActEvt_Five_K2Node_InputKeyEvent_13_Params Params;

	Params.Key = Key;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.InpActEvt_Six_K2Node_InputKeyEvent_12
inline void AB::InpActEvt_Six_K2Node_InputKeyEvent_12(struct Unknown Key) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.InpActEvt_Six_K2Node_InputKeyEvent_12");

	struct InpActEvt_Six_K2Node_InputKeyEvent_12_Params {
		struct Unknown Key;
	}; InpActEvt_Six_K2Node_InputKeyEvent_12_Params Params;

	Params.Key = Key;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.InpActEvt_Seven_K2Node_InputKeyEvent_11
inline void AB::InpActEvt_Seven_K2Node_InputKeyEvent_11(struct Unknown Key) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.InpActEvt_Seven_K2Node_InputKeyEvent_11");

	struct InpActEvt_Seven_K2Node_InputKeyEvent_11_Params {
		struct Unknown Key;
	}; InpActEvt_Seven_K2Node_InputKeyEvent_11_Params Params;

	Params.Key = Key;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.InpActEvt_Eight_K2Node_InputKeyEvent_10
inline void AB::InpActEvt_Eight_K2Node_InputKeyEvent_10(struct Unknown Key) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.InpActEvt_Eight_K2Node_InputKeyEvent_10");

	struct InpActEvt_Eight_K2Node_InputKeyEvent_10_Params {
		struct Unknown Key;
	}; InpActEvt_Eight_K2Node_InputKeyEvent_10_Params Params;

	Params.Key = Key;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.InpActEvt_Ctrl_One_K2Node_InputKeyEvent_9
inline void AB::InpActEvt_Ctrl_One_K2Node_InputKeyEvent_9(struct Unknown Key) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.InpActEvt_Ctrl_One_K2Node_InputKeyEvent_9");

	struct InpActEvt_Ctrl_One_K2Node_InputKeyEvent_9_Params {
		struct Unknown Key;
	}; InpActEvt_Ctrl_One_K2Node_InputKeyEvent_9_Params Params;

	Params.Key = Key;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.InpActEvt_Ctrl_Two_K2Node_InputKeyEvent_8
inline void AB::InpActEvt_Ctrl_Two_K2Node_InputKeyEvent_8(struct Unknown Key) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.InpActEvt_Ctrl_Two_K2Node_InputKeyEvent_8");

	struct InpActEvt_Ctrl_Two_K2Node_InputKeyEvent_8_Params {
		struct Unknown Key;
	}; InpActEvt_Ctrl_Two_K2Node_InputKeyEvent_8_Params Params;

	Params.Key = Key;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.InpActEvt_Ctrl_Three_K2Node_InputKeyEvent_7
inline void AB::InpActEvt_Ctrl_Three_K2Node_InputKeyEvent_7(struct Unknown Key) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.InpActEvt_Ctrl_Three_K2Node_InputKeyEvent_7");

	struct InpActEvt_Ctrl_Three_K2Node_InputKeyEvent_7_Params {
		struct Unknown Key;
	}; InpActEvt_Ctrl_Three_K2Node_InputKeyEvent_7_Params Params;

	Params.Key = Key;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.InpActEvt_Ctrl_Four_K2Node_InputKeyEvent_6
inline void AB::InpActEvt_Ctrl_Four_K2Node_InputKeyEvent_6(struct Unknown Key) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.InpActEvt_Ctrl_Four_K2Node_InputKeyEvent_6");

	struct InpActEvt_Ctrl_Four_K2Node_InputKeyEvent_6_Params {
		struct Unknown Key;
	}; InpActEvt_Ctrl_Four_K2Node_InputKeyEvent_6_Params Params;

	Params.Key = Key;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.InpActEvt_Ctrl_Five_K2Node_InputKeyEvent_5
inline void AB::InpActEvt_Ctrl_Five_K2Node_InputKeyEvent_5(struct Unknown Key) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.InpActEvt_Ctrl_Five_K2Node_InputKeyEvent_5");

	struct InpActEvt_Ctrl_Five_K2Node_InputKeyEvent_5_Params {
		struct Unknown Key;
	}; InpActEvt_Ctrl_Five_K2Node_InputKeyEvent_5_Params Params;

	Params.Key = Key;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.InpActEvt_Ctrl_Six_K2Node_InputKeyEvent_4
inline void AB::InpActEvt_Ctrl_Six_K2Node_InputKeyEvent_4(struct Unknown Key) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.InpActEvt_Ctrl_Six_K2Node_InputKeyEvent_4");

	struct InpActEvt_Ctrl_Six_K2Node_InputKeyEvent_4_Params {
		struct Unknown Key;
	}; InpActEvt_Ctrl_Six_K2Node_InputKeyEvent_4_Params Params;

	Params.Key = Key;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.InpActEvt_Ctrl_Seven_K2Node_InputKeyEvent_3
inline void AB::InpActEvt_Ctrl_Seven_K2Node_InputKeyEvent_3(struct Unknown Key) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.InpActEvt_Ctrl_Seven_K2Node_InputKeyEvent_3");

	struct InpActEvt_Ctrl_Seven_K2Node_InputKeyEvent_3_Params {
		struct Unknown Key;
	}; InpActEvt_Ctrl_Seven_K2Node_InputKeyEvent_3_Params Params;

	Params.Key = Key;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.InpActEvt_Ctrl_Eight_K2Node_InputKeyEvent_2
inline void AB::InpActEvt_Ctrl_Eight_K2Node_InputKeyEvent_2(struct Unknown Key) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.InpActEvt_Ctrl_Eight_K2Node_InputKeyEvent_2");

	struct InpActEvt_Ctrl_Eight_K2Node_InputKeyEvent_2_Params {
		struct Unknown Key;
	}; InpActEvt_Ctrl_Eight_K2Node_InputKeyEvent_2_Params Params;

	Params.Key = Key;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.InpActEvt_NumPadZero_K2Node_InputKeyEvent_1
inline void AB::InpActEvt_NumPadZero_K2Node_InputKeyEvent_1(struct Unknown Key) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.InpActEvt_NumPadZero_K2Node_InputKeyEvent_1");

	struct InpActEvt_NumPadZero_K2Node_InputKeyEvent_1_Params {
		struct Unknown Key;
	}; InpActEvt_NumPadZero_K2Node_InputKeyEvent_1_Params Params;

	Params.Key = Key;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.ReceiveBeginPlay
inline void AB::ReceiveBeginPlay() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ReceiveBeginPlay");

	struct ReceiveBeginPlay_Params {
		
	}; ReceiveBeginPlay_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.ReceiveTick
inline void AB::ReceiveTick(float DeltaSeconds) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ReceiveTick");

	struct ReceiveTick_Params {
		float DeltaSeconds;
	}; ReceiveTick_Params Params;

	Params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.SetCharacterIntheWater
inline void AB::SetCharacterIntheWater() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.SetCharacterIntheWater");

	struct SetCharacterIntheWater_Params {
		
	}; SetCharacterIntheWater_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.OnDeath
inline void AB::OnDeath() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.OnDeath");

	struct OnDeath_Params {
		
	}; OnDeath_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.OnSaveInventoryData
inline void AB::OnSaveInventoryData() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.OnSaveInventoryData");

	struct OnSaveInventoryData_Params {
		
	}; OnSaveInventoryData_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.AddPerkEvent
inline void AB::AddPerkEvent(struct Unknown& PerkInfo, struct Unknown& InCurrentDisplayAbility, int32_t LastLevel, int32_t ClassLevel, enum class Unknow LevelUpType) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.AddPerkEvent");

	struct AddPerkEvent_Params {
		struct Unknown& PerkInfo;
		struct Unknown& InCurrentDisplayAbility;
		int32_t LastLevel;
		int32_t ClassLevel;
		enum class Unknow LevelUpType;
	}; AddPerkEvent_Params Params;

	Params.LastLevel = LastLevel;
	Params.ClassLevel = ClassLevel;
	Params.LevelUpType = LevelUpType;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	PerkInfo = Params.PerkInfo;
	InCurrentDisplayAbility = Params.InCurrentDisplayAbility;

}

// Function B.B.RemovePerkLevelUI
inline void AB::RemovePerkLevelUI() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.RemovePerkLevelUI");

	struct RemovePerkLevelUI_Params {
		
	}; RemovePerkLevelUI_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.CreatePerkLevelUI
inline void AB::CreatePerkLevelUI(int32_t Count) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.CreatePerkLevelUI");

	struct CreatePerkLevelUI_Params {
		int32_t Count;
	}; CreatePerkLevelUI_Params Params;

	Params.Count = Count;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.PerkSpinEvent
inline void AB::PerkSpinEvent(char bShow, int32_t Count, enum class Unknow Slot) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.PerkSpinEvent");

	struct PerkSpinEvent_Params {
		char bShow;
		int32_t Count;
		enum class Unknow Slot;
	}; PerkSpinEvent_Params Params;

	Params.bShow = bShow;
	Params.Count = Count;
	Params.Slot = Slot;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.ShowAmplifierEffect
inline void AB::ShowAmplifierEffect(char IsAmplifierEffect, float AmplifierLength) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ShowAmplifierEffect");

	struct ShowAmplifierEffect_Params {
		char IsAmplifierEffect;
		float AmplifierLength;
	}; ShowAmplifierEffect_Params Params;

	Params.IsAmplifierEffect = IsAmplifierEffect;
	Params.AmplifierLength = AmplifierLength;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.OnLanded
inline void AB::OnLanded(struct Unknown& Hit) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.OnLanded");

	struct OnLanded_Params {
		struct Unknown& Hit;
	}; OnLanded_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Hit = Params.Hit;

}

// Function B.B.ReadyGivePerkEvent
inline void AB::ReadyGivePerkEvent() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ReadyGivePerkEvent");

	struct ReadyGivePerkEvent_Params {
		
	}; ReadyGivePerkEvent_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.KillGivePerkEvent
inline void AB::KillGivePerkEvent(int32_t KillCount) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.KillGivePerkEvent");

	struct KillGivePerkEvent_Params {
		int32_t KillCount;
	}; KillGivePerkEvent_Params Params;

	Params.KillCount = KillCount;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.ShowHeartBeatSensorEffect
inline void AB::ShowHeartBeatSensorEffect(char IsHeartBeatSensorEffect, float HeartBeatSensorLength) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ShowHeartBeatSensorEffect");

	struct ShowHeartBeatSensorEffect_Params {
		char IsHeartBeatSensorEffect;
		float HeartBeatSensorLength;
	}; ShowHeartBeatSensorEffect_Params Params;

	Params.IsHeartBeatSensorEffect = IsHeartBeatSensorEffect;
	Params.HeartBeatSensorLength = HeartBeatSensorLength;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.ExecuteUbergraph_B
inline void AB::ExecuteUbergraph_B(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ExecuteUbergraph_B");

	struct ExecuteUbergraph_B_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_B_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.BndEvt__SphereCollision_K2Node_ComponentBoundEvent_0_ComponentHitSignature__Dele
inline void AB::BndEvt__SphereCollision_K2Node_ComponentBoundEvent_0_ComponentHitSignature__Dele(struct Unknown HitComponent, struct Unknown OtherActor, struct Unknown OtherComp, struct Unknown NormalImpulse, struct Unknown& Hit) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.BndEvt__SphereCollision_K2Node_ComponentBoundEvent_0_ComponentHitSignature__Dele");

	struct BndEvt__SphereCollision_K2Node_ComponentBoundEvent_0_ComponentHitSignature__Dele_Params {
		struct Unknown HitComponent;
		struct Unknown OtherActor;
		struct Unknown OtherComp;
		struct Unknown NormalImpulse;
		struct Unknown& Hit;
	}; BndEvt__SphereCollision_K2Node_ComponentBoundEvent_0_ComponentHitSignature__Dele_Params Params;

	Params.HitComponent = HitComponent;
	Params.OtherActor = OtherActor;
	Params.OtherComp = OtherComp;
	Params.NormalImpulse = NormalImpulse;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Hit = Params.Hit;

}

// Function B.B.ExecuteUbergraph_B
inline void AB::ExecuteUbergraph_B(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ExecuteUbergraph_B");

	struct ExecuteUbergraph_B_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_B_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.UpdateTargetSize
inline void AB::UpdateTargetSize() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.UpdateTargetSize");

	struct UpdateTargetSize_Params {
		
	}; UpdateTargetSize_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.ExecuteUbergraph_B
inline void AB::ExecuteUbergraph_B(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ExecuteUbergraph_B");

	struct ExecuteUbergraph_B_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_B_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.UserConstructionScript
inline void AB::UserConstructionScript() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.UserConstructionScript");

	struct UserConstructionScript_Params {
		
	}; UserConstructionScript_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.UserConstructionScript
inline void AB::UserConstructionScript() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.UserConstructionScript");

	struct UserConstructionScript_Params {
		
	}; UserConstructionScript_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.SetInfo
inline void UB::SetInfo(enum class Unknow Type, struct Unknown& OutData) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.SetInfo");

	struct SetInfo_Params {
		enum class Unknow Type;
		struct Unknown& OutData;
	}; SetInfo_Params Params;

	Params.Type = Type;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	OutData = Params.OutData;

}

// Function B.B.OnLoaded_26F99F1744F423909EA588B7F2CD8F0A
inline void UB::OnLoaded_26F99F1744F423909EA588B7F2CD8F0A(struct Unknown Loaded) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.OnLoaded_26F99F1744F423909EA588B7F2CD8F0A");

	struct OnLoaded_26F99F1744F423909EA588B7F2CD8F0A_Params {
		struct Unknown Loaded;
	}; OnLoaded_26F99F1744F423909EA588B7F2CD8F0A_Params Params;

	Params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.Load
inline void UB::Load(struct Unknown Texture) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.Load");

	struct Load_Params {
		struct Unknown Texture;
	}; Load_Params Params;

	Params.Texture = Texture;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.AsyncLoad
inline void UB::AsyncLoad(struct Unknown Texture) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.AsyncLoad");

	struct AsyncLoad_Params {
		struct Unknown Texture;
	}; AsyncLoad_Params Params;

	Params.Texture = Texture;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.ReceiveEndAfterLoading
inline void UB::ReceiveEndAfterLoading() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ReceiveEndAfterLoading");

	struct ReceiveEndAfterLoading_Params {
		
	}; ReceiveEndAfterLoading_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.Update
inline void UB::Update(struct Unknown& Data) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.Update");

	struct Update_Params {
		struct Unknown& Data;
	}; Update_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Data = Params.Data;

}

// Function B.B.SetDesc
inline void UB::SetDesc(struct FString Desc) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.SetDesc");

	struct SetDesc_Params {
		struct FString Desc;
	}; SetDesc_Params Params;

	Params.Desc = Desc;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.SetTitle
inline void UB::SetTitle(struct FText Title) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.SetTitle");

	struct SetTitle_Params {
		struct FText Title;
	}; SetTitle_Params Params;

	Params.Title = Title;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.SetImage
inline void UB::SetImage(struct Unknown Imgae) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.SetImage");

	struct SetImage_Params {
		struct Unknown Imgae;
	}; SetImage_Params Params;

	Params.Imgae = Imgae;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.Destruct
inline void UB::Destruct() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.Destruct");

	struct Destruct_Params {
		
	}; Destruct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.ShowDesc
inline void UB::ShowDesc(float DelayTime) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ShowDesc");

	struct ShowDesc_Params {
		float DelayTime;
	}; ShowDesc_Params Params;

	Params.DelayTime = DelayTime;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.ExecuteUbergraph_B
inline void UB::ExecuteUbergraph_B(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ExecuteUbergraph_B");

	struct ExecuteUbergraph_B_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_B_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.OnLoaded_395796F147F051B7CCBB17B8AB7F3577
inline void UB::OnLoaded_395796F147F051B7CCBB17B8AB7F3577(struct Unknown Loaded) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.OnLoaded_395796F147F051B7CCBB17B8AB7F3577");

	struct OnLoaded_395796F147F051B7CCBB17B8AB7F3577_Params {
		struct Unknown Loaded;
	}; OnLoaded_395796F147F051B7CCBB17B8AB7F3577_Params Params;

	Params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.OnLoaded_9E09E1234991DF79517848BF7BB1AC45
inline void UB::OnLoaded_9E09E1234991DF79517848BF7BB1AC45(struct Unknown Loaded) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.OnLoaded_9E09E1234991DF79517848BF7BB1AC45");

	struct OnLoaded_9E09E1234991DF79517848BF7BB1AC45_Params {
		struct Unknown Loaded;
	}; OnLoaded_9E09E1234991DF79517848BF7BB1AC45_Params Params;

	Params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.OnLoaded_4A9EA3EE453D348BBD4E76837B616AD3
inline void UB::OnLoaded_4A9EA3EE453D348BBD4E76837B616AD3(struct Unknown Loaded) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.OnLoaded_4A9EA3EE453D348BBD4E76837B616AD3");

	struct OnLoaded_4A9EA3EE453D348BBD4E76837B616AD3_Params {
		struct Unknown Loaded;
	}; OnLoaded_4A9EA3EE453D348BBD4E76837B616AD3_Params Params;

	Params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.Set
inline void UB::Set(struct Unknown WeightMap) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.Set");

	struct Set_Params {
		struct Unknown WeightMap;
	}; Set_Params Params;

	Params.WeightMap = WeightMap;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.Set
inline void UB::Set(char Enable) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.Set");

	struct Set_Params {
		char Enable;
	}; Set_Params Params;

	Params.Enable = Enable;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.
inline void UB::() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.");

	struct _Params {
		
	}; _Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.ExecuteUbergraph_B
inline void UB::ExecuteUbergraph_B(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ExecuteUbergraph_B");

	struct ExecuteUbergraph_B_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_B_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.Set
inline void AB::Set() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.Set");

	struct Set_Params {
		
	}; Set_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.GetCameraTargetArmLength
inline float AB::GetCameraTargetArmLength() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.GetCameraTargetArmLength");

	struct GetCameraTargetArmLength_Params {
		
		float ReturnValue;

	}; GetCameraTargetArmLength_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function B.B.SetupCamera
inline void AB::SetupCamera() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.SetupCamera");

	struct SetupCamera_Params {
		
	}; SetupCamera_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.Timeline_0__FinishedFunc
inline void AB::Timeline_0__FinishedFunc() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.Timeline_0__FinishedFunc");

	struct Timeline_0__FinishedFunc_Params {
		
	}; Timeline_0__FinishedFunc_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.Timeline_0__UpdateFunc
inline void AB::Timeline_0__UpdateFunc() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.Timeline_0__UpdateFunc");

	struct Timeline_0__UpdateFunc_Params {
		
	}; Timeline_0__UpdateFunc_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_9
inline void AB::InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_9(struct Unknown Key) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_9");

	struct InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_9_Params {
		struct Unknown Key;
	}; InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_9_Params Params;

	Params.Key = Key;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.InpActEvt_RightMouseButton_K2Node_InputKeyEvent_8
inline void AB::InpActEvt_RightMouseButton_K2Node_InputKeyEvent_8(struct Unknown Key) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.InpActEvt_RightMouseButton_K2Node_InputKeyEvent_8");

	struct InpActEvt_RightMouseButton_K2Node_InputKeyEvent_8_Params {
		struct Unknown Key;
	}; InpActEvt_RightMouseButton_K2Node_InputKeyEvent_8_Params Params;

	Params.Key = Key;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent_7
inline void AB::InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent_7(struct Unknown Key) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent_7");

	struct InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent_7_Params {
		struct Unknown Key;
	}; InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent_7_Params Params;

	Params.Key = Key;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent_6
inline void AB::InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent_6(struct Unknown Key) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent_6");

	struct InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent_6_Params {
		struct Unknown Key;
	}; InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent_6_Params Params;

	Params.Key = Key;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.InpActEvt_One_K2Node_InputKeyEvent_5
inline void AB::InpActEvt_One_K2Node_InputKeyEvent_5(struct Unknown Key) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.InpActEvt_One_K2Node_InputKeyEvent_5");

	struct InpActEvt_One_K2Node_InputKeyEvent_5_Params {
		struct Unknown Key;
	}; InpActEvt_One_K2Node_InputKeyEvent_5_Params Params;

	Params.Key = Key;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.InpActEvt_Two_K2Node_InputKeyEvent_4
inline void AB::InpActEvt_Two_K2Node_InputKeyEvent_4(struct Unknown Key) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.InpActEvt_Two_K2Node_InputKeyEvent_4");

	struct InpActEvt_Two_K2Node_InputKeyEvent_4_Params {
		struct Unknown Key;
	}; InpActEvt_Two_K2Node_InputKeyEvent_4_Params Params;

	Params.Key = Key;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.InpActEvt_Three_K2Node_InputKeyEvent_3
inline void AB::InpActEvt_Three_K2Node_InputKeyEvent_3(struct Unknown Key) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.InpActEvt_Three_K2Node_InputKeyEvent_3");

	struct InpActEvt_Three_K2Node_InputKeyEvent_3_Params {
		struct Unknown Key;
	}; InpActEvt_Three_K2Node_InputKeyEvent_3_Params Params;

	Params.Key = Key;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.InpActEvt_Four_K2Node_InputKeyEvent_2
inline void AB::InpActEvt_Four_K2Node_InputKeyEvent_2(struct Unknown Key) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.InpActEvt_Four_K2Node_InputKeyEvent_2");

	struct InpActEvt_Four_K2Node_InputKeyEvent_2_Params {
		struct Unknown Key;
	}; InpActEvt_Four_K2Node_InputKeyEvent_2_Params Params;

	Params.Key = Key;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.InpActEvt_Five_K2Node_InputKeyEvent_1
inline void AB::InpActEvt_Five_K2Node_InputKeyEvent_1(struct Unknown Key) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.InpActEvt_Five_K2Node_InputKeyEvent_1");

	struct InpActEvt_Five_K2Node_InputKeyEvent_1_Params {
		struct Unknown Key;
	}; InpActEvt_Five_K2Node_InputKeyEvent_1_Params Params;

	Params.Key = Key;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.ReceiveBeginPlay
inline void AB::ReceiveBeginPlay() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ReceiveBeginPlay");

	struct ReceiveBeginPlay_Params {
		
	}; ReceiveBeginPlay_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.Set
inline void AB::Set() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.Set");

	struct Set_Params {
		
	}; Set_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.K2_OnNitroJumpEnd
inline void AB::K2_OnNitroJumpEnd() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.K2_OnNitroJumpEnd");

	struct K2_OnNitroJumpEnd_Params {
		
	}; K2_OnNitroJumpEnd_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.K2_OnBoosterChanged
inline void AB::K2_OnBoosterChanged(char bIsBoosted) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.K2_OnBoosterChanged");

	struct K2_OnBoosterChanged_Params {
		char bIsBoosted;
	}; K2_OnBoosterChanged_Params Params;

	Params.bIsBoosted = bIsBoosted;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.ExecuteUbergraph_B
inline void AB::ExecuteUbergraph_B(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ExecuteUbergraph_B");

	struct ExecuteUbergraph_B_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_B_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.SetTexture5mm
inline void AB::SetTexture5mm() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.SetTexture5mm");

	struct SetTexture5mm_Params {
		
	}; SetTexture5mm_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.ExecuteUbergraph_B
inline void AB::ExecuteUbergraph_B(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ExecuteUbergraph_B");

	struct ExecuteUbergraph_B_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_B_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.ReceiveBeginPlay
inline void AB::ReceiveBeginPlay() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ReceiveBeginPlay");

	struct ReceiveBeginPlay_Params {
		
	}; ReceiveBeginPlay_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.ReceiveTick
inline void AB::ReceiveTick(float DeltaSeconds) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ReceiveTick");

	struct ReceiveTick_Params {
		float DeltaSeconds;
	}; ReceiveTick_Params Params;

	Params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.ReceiveDestroyed
inline void AB::ReceiveDestroyed() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ReceiveDestroyed");

	struct ReceiveDestroyed_Params {
		
	}; ReceiveDestroyed_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.BndEvt__MovementComponent_K2Node_ComponentBoundEvent_0_OnInterpToResetDelegate__Delegatem
inline void AB::BndEvt__MovementComponent_K2Node_ComponentBoundEvent_0_OnInterpToResetDelegate__Delegate(struct Unknown& ImpactResult, float Time) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.BndEvt__MovementComponent_K2Node_ComponentBoundEvent_0_OnInterpToResetDelegate__Delegatem");

	struct BndEvt__MovementComponent_K2Node_ComponentBoundEvent_0_OnInterpToResetDelegate__Delegate_Params {
		struct Unknown& ImpactResult;
		float Time;
	}; BndEvt__MovementComponent_K2Node_ComponentBoundEvent_0_OnInterpToResetDelegate__Delegate_Params Params;

	Params.Time = Time;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	ImpactResult = Params.ImpactResult;

}

// Function B.B.ExecuteUbergraph_B
inline void AB::ExecuteUbergraph_B(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ExecuteUbergraph_B");

	struct ExecuteUbergraph_B_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_B_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.CalcLadderInteractionType
inline void UB::CalcLadderInteractionType() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.CalcLadderInteractionType");

	struct CalcLadderInteractionType_Params {
		
	}; CalcLadderInteractionType_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.CanCancelMotion
inline void UB::CanCancelMotion(char& CanCancel) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.CanCancelMotion");

	struct CanCancelMotion_Params {
		char& CanCancel;
	}; CanCancelMotion_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	CanCancel = Params.CanCancel;

}

// Function B.B.GetEndLocation
inline void UB::GetEndLocation(struct Unknown& LadderRelativeLocation) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.GetEndLocation");

	struct GetEndLocation_Params {
		struct Unknown& LadderRelativeLocation;
	}; GetEndLocation_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	LadderRelativeLocation = Params.LadderRelativeLocation;

}

// Function B.B.SetMovingInfo
inline void UB::SetMovingInfo() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.SetMovingInfo");

	struct SetMovingInfo_Params {
		
	}; SetMovingInfo_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.MoveInMotion
inline void UB::MoveInMotion() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.MoveInMotion");

	struct MoveInMotion_Params {
		
	}; MoveInMotion_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.ActiveCameraInterp
inline void UB::ActiveCameraInterp() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ActiveCameraInterp");

	struct ActiveCameraInterp_Params {
		
	}; ActiveCameraInterp_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.CalcSnappingTime
inline void UB::CalcSnappingTime() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.CalcSnappingTime");

	struct CalcSnappingTime_Params {
		
	}; CalcSnappingTime_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.InitializeLadder
inline void UB::InitializeLadder() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.InitializeLadder");

	struct InitializeLadder_Params {
		
	}; InitializeLadder_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.SetMovementOnLadder
inline void UB::SetMovementOnLadder(float AxisValue) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.SetMovementOnLadder");

	struct SetMovementOnLadder_Params {
		float AxisValue;
	}; SetMovementOnLadder_Params Params;

	Params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.AddMovementOnLadder
inline void UB::AddMovementOnLadder(float AxisValue) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.AddMovementOnLadder");

	struct AddMovementOnLadder_Params {
		float AxisValue;
	}; AddMovementOnLadder_Params Params;

	Params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.CheckCanExitLadder
inline void UB::CheckCanExitLadder(char IsTop, char& Result) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.CheckCanExitLadder");

	struct CheckCanExitLadder_Params {
		char IsTop;
		char& Result;
	}; CheckCanExitLadder_Params Params;

	Params.IsTop = IsTop;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Result = Params.Result;

}

// Function B.B.ChangeMovementMode
inline void UB::ChangeMovementMode(char OnLadder) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ChangeMovementMode");

	struct ChangeMovementMode_Params {
		char OnLadder;
	}; ChangeMovementMode_Params Params;

	Params.OnLadder = OnLadder;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.CalcTargetLocation
inline void UB::CalcTargetLocation(enum class Unknow InLadderInteractionType, struct Unknown& OutTargetLocation) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.CalcTargetLocation");

	struct CalcTargetLocation_Params {
		enum class Unknow InLadderInteractionType;
		struct Unknown& OutTargetLocation;
	}; CalcTargetLocation_Params Params;

	Params.InLadderInteractionType = InLadderInteractionType;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	OutTargetLocation = Params.OutTargetLocation;

}

// Function B.B.SetCharacterClimbSettings
inline void UB::SetCharacterClimbSettings(char ClimbOn) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.SetCharacterClimbSettings");

	struct SetCharacterClimbSettings_Params {
		char ClimbOn;
	}; SetCharacterClimbSettings_Params Params;

	Params.ClimbOn = ClimbOn;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.SnapToLadder
inline void UB::SnapToLadder() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.SnapToLadder");

	struct SnapToLadder_Params {
		
	}; SnapToLadder_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.SetSnappingInfo
inline void UB::SetSnappingInfo(float& DirectSnapLocZ) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.SetSnappingInfo");

	struct SetSnappingInfo_Params {
		float& DirectSnapLocZ;
	}; SetSnappingInfo_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	DirectSnapLocZ = Params.DirectSnapLocZ;

}

// Function B.B.SetLadderPos
inline void UB::SetLadderPos() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.SetLadderPos");

	struct SetLadderPos_Params {
		
	}; SetLadderPos_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.CheckLadderEnd
inline void UB::CheckLadderEnd(float Input, char& Result, char& IsTop, float& InputScale) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.CheckLadderEnd");

	struct CheckLadderEnd_Params {
		float Input;
		char& Result;
		char& IsTop;
		float& InputScale;
	}; CheckLadderEnd_Params Params;

	Params.Input = Input;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Result = Params.Result;
	IsTop = Params.IsTop;
	InputScale = Params.InputScale;

}

// Function B.B.OnNotifyEnd_ABB5B46F49E086A9FC6EC9AE877A3650
inline void UB::OnNotifyEnd_ABB5B46F49E086A9FC6EC9AE877A3650(struct FName NotifyName) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.OnNotifyEnd_ABB5B46F49E086A9FC6EC9AE877A3650");

	struct OnNotifyEnd_ABB5B46F49E086A9FC6EC9AE877A3650_Params {
		struct FName NotifyName;
	}; OnNotifyEnd_ABB5B46F49E086A9FC6EC9AE877A3650_Params Params;

	Params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.OnNotifyBegin_ABB5B46F49E086A9FC6EC9AE877A3650
inline void UB::OnNotifyBegin_ABB5B46F49E086A9FC6EC9AE877A3650(struct FName NotifyName) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.OnNotifyBegin_ABB5B46F49E086A9FC6EC9AE877A3650");

	struct OnNotifyBegin_ABB5B46F49E086A9FC6EC9AE877A3650_Params {
		struct FName NotifyName;
	}; OnNotifyBegin_ABB5B46F49E086A9FC6EC9AE877A3650_Params Params;

	Params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.OnInterrupted_ABB5B46F49E086A9FC6EC9AE877A3650
inline void UB::OnInterrupted_ABB5B46F49E086A9FC6EC9AE877A3650(struct FName NotifyName) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.OnInterrupted_ABB5B46F49E086A9FC6EC9AE877A3650");

	struct OnInterrupted_ABB5B46F49E086A9FC6EC9AE877A3650_Params {
		struct FName NotifyName;
	}; OnInterrupted_ABB5B46F49E086A9FC6EC9AE877A3650_Params Params;

	Params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.OnBlendOut_ABB5B46F49E086A9FC6EC9AE877A3650
inline void UB::OnBlendOut_ABB5B46F49E086A9FC6EC9AE877A3650(struct FName NotifyName) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.OnBlendOut_ABB5B46F49E086A9FC6EC9AE877A3650");

	struct OnBlendOut_ABB5B46F49E086A9FC6EC9AE877A3650_Params {
		struct FName NotifyName;
	}; OnBlendOut_ABB5B46F49E086A9FC6EC9AE877A3650_Params Params;

	Params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.OnCompleted_ABB5B46F49E086A9FC6EC9AE877A3650
inline void UB::OnCompleted_ABB5B46F49E086A9FC6EC9AE877A3650(struct FName NotifyName) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.OnCompleted_ABB5B46F49E086A9FC6EC9AE877A3650");

	struct OnCompleted_ABB5B46F49E086A9FC6EC9AE877A3650_Params {
		struct FName NotifyName;
	}; OnCompleted_ABB5B46F49E086A9FC6EC9AE877A3650_Params Params;

	Params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.ServerSetMovementOnLadder
inline void UB::ServerSetMovementOnLadder(struct Unknown LadderLocation, float AxisValue) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ServerSetMovementOnLadder");

	struct ServerSetMovementOnLadder_Params {
		struct Unknown LadderLocation;
		float AxisValue;
	}; ServerSetMovementOnLadder_Params Params;

	Params.LadderLocation = LadderLocation;
	Params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.StopMontage
inline void UB::StopMontage(struct Unknown StopMontage) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.StopMontage");

	struct StopMontage_Params {
		struct Unknown StopMontage;
	}; StopMontage_Params Params;

	Params.StopMontage = StopMontage;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.CompleteExitingLadder
inline void UB::CompleteExitingLadder() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.CompleteExitingLadder");

	struct CompleteExitingLadder_Params {
		
	}; CompleteExitingLadder_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.CompleteEnteringLadder
inline void UB::CompleteEnteringLadder() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.CompleteEnteringLadder");

	struct CompleteEnteringLadder_Params {
		
	}; CompleteEnteringLadder_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.MultiStopMontage
inline void UB::MultiStopMontage(struct Unknown StopMontage) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.MultiStopMontage");

	struct MultiStopMontage_Params {
		struct Unknown StopMontage;
	}; MultiStopMontage_Params Params;

	Params.StopMontage = StopMontage;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.ServerStopMontage
inline void UB::ServerStopMontage(struct Unknown StopMontage) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ServerStopMontage");

	struct ServerStopMontage_Params {
		struct Unknown StopMontage;
	}; ServerStopMontage_Params Params;

	Params.StopMontage = StopMontage;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.LadderStateEvent
inline void UB::LadderStateEvent() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.LadderStateEvent");

	struct LadderStateEvent_Params {
		
	}; LadderStateEvent_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.ServerDownLadder
inline void UB::ServerDownLadder(enum class Unknow LadderInteractionType) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ServerDownLadder");

	struct ServerDownLadder_Params {
		enum class Unknow LadderInteractionType;
	}; ServerDownLadder_Params Params;

	Params.LadderInteractionType = LadderInteractionType;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.PlayLadderAnim
inline void UB::PlayLadderAnim() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.PlayLadderAnim");

	struct PlayLadderAnim_Params {
		
	}; PlayLadderAnim_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.StartMoveInMotion
inline void UB::StartMoveInMotion() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.StartMoveInMotion");

	struct StartMoveInMotion_Params {
		
	}; StartMoveInMotion_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.ReceiveTick
inline void UB::ReceiveTick(float DeltaSeconds) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ReceiveTick");

	struct ReceiveTick_Params {
		float DeltaSeconds;
	}; ReceiveTick_Params Params;

	Params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.ReceiveBeginPlay
inline void UB::ReceiveBeginPlay() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ReceiveBeginPlay");

	struct ReceiveBeginPlay_Params {
		
	}; ReceiveBeginPlay_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.CancelMotion
inline void UB::CancelMotion(float AxisValue) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.CancelMotion");

	struct CancelMotion_Params {
		float AxisValue;
	}; CancelMotion_Params Params;

	Params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.ExceptionSetUsingLadder
inline void UB::ExceptionSetUsingLadder(struct Unknown UsingLadder) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ExceptionSetUsingLadder");

	struct ExceptionSetUsingLadder_Params {
		struct Unknown UsingLadder;
	}; ExceptionSetUsingLadder_Params Params;

	Params.UsingLadder = UsingLadder;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.ServerUseLadder
inline void UB::ServerUseLadder(enum class Unknow LadderInteractionType, float SnappingTime, float DirectSnapLocZ, struct Unknown UsingLadder) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ServerUseLadder");

	struct ServerUseLadder_Params {
		enum class Unknow LadderInteractionType;
		float SnappingTime;
		float DirectSnapLocZ;
		struct Unknown UsingLadder;
	}; ServerUseLadder_Params Params;

	Params.LadderInteractionType = LadderInteractionType;
	Params.SnappingTime = SnappingTime;
	Params.DirectSnapLocZ = DirectSnapLocZ;
	Params.UsingLadder = UsingLadder;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.MultiUseLadder
inline void UB::MultiUseLadder(enum class Unknow LadderInteractionType, float SnappingTime, float DirectSnapLocZ, struct Unknown UsingLadder) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.MultiUseLadder");

	struct MultiUseLadder_Params {
		enum class Unknow LadderInteractionType;
		float SnappingTime;
		float DirectSnapLocZ;
		struct Unknown UsingLadder;
	}; MultiUseLadder_Params Params;

	Params.LadderInteractionType = LadderInteractionType;
	Params.SnappingTime = SnappingTime;
	Params.DirectSnapLocZ = DirectSnapLocZ;
	Params.UsingLadder = UsingLadder;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.MultiDownLadder
inline void UB::MultiDownLadder(enum class Unknow LadderInteractionType) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.MultiDownLadder");

	struct MultiDownLadder_Params {
		enum class Unknow LadderInteractionType;
	}; MultiDownLadder_Params Params;

	Params.LadderInteractionType = LadderInteractionType;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.StartStopMontage
inline void UB::StartStopMontage(struct Unknown StopMontage) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.StartStopMontage");

	struct StartStopMontage_Params {
		struct Unknown StopMontage;
	}; StartStopMontage_Params Params;

	Params.StopMontage = StopMontage;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.ServerSetLadderState
inline void UB::ServerSetLadderState(enum class Unknow LadderState) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ServerSetLadderState");

	struct ServerSetLadderState_Params {
		enum class Unknow LadderState;
	}; ServerSetLadderState_Params Params;

	Params.LadderState = LadderState;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.K2_StartUseladder
inline void UB::K2_StartUseladder() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.K2_StartUseladder");

	struct K2_StartUseladder_Params {
		
	}; K2_StartUseladder_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.K2_StopUseLadder
inline void UB::K2_StopUseLadder() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.K2_StopUseLadder");

	struct K2_StopUseLadder_Params {
		
	}; K2_StopUseLadder_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.K2_MoveRightOnLadder
inline void UB::K2_MoveRightOnLadder(float AxisValue) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.K2_MoveRightOnLadder");

	struct K2_MoveRightOnLadder_Params {
		float AxisValue;
	}; K2_MoveRightOnLadder_Params Params;

	Params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.K2_MoveForwardOnLadder
inline void UB::K2_MoveForwardOnLadder(float AxisValue) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.K2_MoveForwardOnLadder");

	struct K2_MoveForwardOnLadder_Params {
		float AxisValue;
	}; K2_MoveForwardOnLadder_Params Params;

	Params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.ExecuteUbergraph_B
inline void UB::ExecuteUbergraph_B(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ExecuteUbergraph_B");

	struct ExecuteUbergraph_B_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_B_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.CheckWorldViewCameraLocationRange
inline void AB::CheckWorldViewCameraLocationRange() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.CheckWorldViewCameraLocationRange");

	struct CheckWorldViewCameraLocationRange_Params {
		
	}; CheckWorldViewCameraLocationRange_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.PreventCameraWallCollision
inline void AB::PreventCameraWallCollision() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.PreventCameraWallCollision");

	struct PreventCameraWallCollision_Params {
		
	}; PreventCameraWallCollision_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.ReceiveTick
inline void AB::ReceiveTick(float DeltaSeconds) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ReceiveTick");

	struct ReceiveTick_Params {
		float DeltaSeconds;
	}; ReceiveTick_Params Params;

	Params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.ReceiveBeginPlay
inline void AB::ReceiveBeginPlay() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ReceiveBeginPlay");

	struct ReceiveBeginPlay_Params {
		
	}; ReceiveBeginPlay_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.ExecuteUbergraph_B
inline void AB::ExecuteUbergraph_B(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ExecuteUbergraph_B");

	struct ExecuteUbergraph_B_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_B_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.ActivateEffect
inline void AB::ActivateEffect(struct Unknown Character) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ActivateEffect");

	struct ActivateEffect_Params {
		struct Unknown Character;
	}; ActivateEffect_Params Params;

	Params.Character = Character;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.DeactivateEffect
inline void AB::DeactivateEffect(struct Unknown Character) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.DeactivateEffect");

	struct DeactivateEffect_Params {
		struct Unknown Character;
	}; DeactivateEffect_Params Params;

	Params.Character = Character;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.BPSetAreaSkillInfo
inline void AB::BPSetAreaSkillInfo() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.BPSetAreaSkillInfo");

	struct BPSetAreaSkillInfo_Params {
		
	}; BPSetAreaSkillInfo_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.StartDestroy
inline void AB::StartDestroy() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.StartDestroy");

	struct StartDestroy_Params {
		
	}; StartDestroy_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.ExecuteUbergraph_B
inline void AB::ExecuteUbergraph_B(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ExecuteUbergraph_B");

	struct ExecuteUbergraph_B_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_B_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.UserConstructionScript
inline void AB::UserConstructionScript() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.UserConstructionScript");

	struct UserConstructionScript_Params {
		
	}; UserConstructionScript_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.ActivateEffect
inline void AB::ActivateEffect(struct Unknown Character) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ActivateEffect");

	struct ActivateEffect_Params {
		struct Unknown Character;
	}; ActivateEffect_Params Params;

	Params.Character = Character;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.DeactivateEffect
inline void AB::DeactivateEffect(struct Unknown Character) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.DeactivateEffect");

	struct DeactivateEffect_Params {
		struct Unknown Character;
	}; DeactivateEffect_Params Params;

	Params.Character = Character;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.BPSetAreaSkillInfo
inline void AB::BPSetAreaSkillInfo() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.BPSetAreaSkillInfo");

	struct BPSetAreaSkillInfo_Params {
		
	}; BPSetAreaSkillInfo_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.StartDestroy
inline void AB::StartDestroy() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.StartDestroy");

	struct StartDestroy_Params {
		
	}; StartDestroy_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.ReceiveBeginPlay
inline void AB::ReceiveBeginPlay() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ReceiveBeginPlay");

	struct ReceiveBeginPlay_Params {
		
	}; ReceiveBeginPlay_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.ExecuteUbergraph_B
inline void AB::ExecuteUbergraph_B(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ExecuteUbergraph_B");

	struct ExecuteUbergraph_B_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_B_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.Get
inline void UB::Get(struct Unknown& SettingsWrapper) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.Get");

	struct Get_Params {
		struct Unknown& SettingsWrapper;
	}; Get_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	SettingsWrapper = Params.SettingsWrapper;

}

// Function B.B.Run
inline void UB::Run(struct FString Console, char& ) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.Run");

	struct Run_Params {
		struct FString Console;
		char& ;
	}; Run_Params Params;

	Params.Console = Console;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	 = Params.;

}

// Function B.B.Update
inline void UB::Update(char Audio, float Volume, char& ) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.Update");

	struct Update_Params {
		char Audio;
		float Volume;
		char& ;
	}; Update_Params Params;

	Params.Audio = Audio;
	Params.Volume = Volume;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	 = Params.;

}

// Function B.B.ReceiveInit
inline void UB::ReceiveInit() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ReceiveInit");

	struct ReceiveInit_Params {
		
	}; ReceiveInit_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.ExecuteUbergraph_B
inline void UB::ExecuteUbergraph_B(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ExecuteUbergraph_B");

	struct ExecuteUbergraph_B_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_B_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.UserConstructionScript
inline void AB::UserConstructionScript() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.UserConstructionScript");

	struct UserConstructionScript_Params {
		
	}; UserConstructionScript_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.GetReplayWidget
inline void AB::GetReplayWidget(struct Unknown& ReplayMainWidget) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.GetReplayWidget");

	struct GetReplayWidget_Params {
		struct Unknown& ReplayMainWidget;
	}; GetReplayWidget_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	ReplayMainWidget = Params.ReplayMainWidget;

}

// Function B.B.ReceiveBeginPlay
inline void AB::ReceiveBeginPlay() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ReceiveBeginPlay");

	struct ReceiveBeginPlay_Params {
		
	}; ReceiveBeginPlay_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.OnChangedCurrentSpeedLevel
inline void AB::OnChangedCurrentSpeedLevel() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.OnChangedCurrentSpeedLevel");

	struct OnChangedCurrentSpeedLevel_Params {
		
	}; OnChangedCurrentSpeedLevel_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.ExecuteUbergraph_B
inline void AB::ExecuteUbergraph_B(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ExecuteUbergraph_B");

	struct ExecuteUbergraph_B_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_B_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.ReceiveBeginPlay
inline void AB::ReceiveBeginPlay() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ReceiveBeginPlay");

	struct ReceiveBeginPlay_Params {
		
	}; ReceiveBeginPlay_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.ExecuteUbergraph_B
inline void AB::ExecuteUbergraph_B(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ExecuteUbergraph_B");

	struct ExecuteUbergraph_B_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_B_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.ReceiveTick
inline void AB::ReceiveTick(float DeltaSeconds) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ReceiveTick");

	struct ReceiveTick_Params {
		float DeltaSeconds;
	}; ReceiveTick_Params Params;

	Params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.UpdateEffect
inline void AB::UpdateEffect(float InterpValue) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.UpdateEffect");

	struct UpdateEffect_Params {
		float InterpValue;
	}; UpdateEffect_Params Params;

	Params.InterpValue = InterpValue;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.ChangeBoxMesh
inline void AB::ChangeBoxMesh(char IsMyBox) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ChangeBoxMesh");

	struct ChangeBoxMesh_Params {
		char IsMyBox;
	}; ChangeBoxMesh_Params Params;

	Params.IsMyBox = IsMyBox;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.Visible
inline void AB::Visible(char IsShow) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.Visible");

	struct Visible_Params {
		char IsShow;
	}; Visible_Params Params;

	Params.IsShow = IsShow;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.OnChangeState
inline void AB::OnChangeState(enum class Unknow StateType) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.OnChangeState");

	struct OnChangeState_Params {
		enum class Unknow StateType;
	}; OnChangeState_Params Params;

	Params.StateType = StateType;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.ReceiveBeginPlay
inline void AB::ReceiveBeginPlay() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ReceiveBeginPlay");

	struct ReceiveBeginPlay_Params {
		
	}; ReceiveBeginPlay_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.ExecuteUbergraph_B
inline void AB::ExecuteUbergraph_B(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ExecuteUbergraph_B");

	struct ExecuteUbergraph_B_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_B_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.GetInteractiveWidget
inline struct Unknown UB::GetInteractiveWidget() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.GetInteractiveWidget");

	struct GetInteractiveWidget_Params {
		
		struct Unknown ReturnValue;

	}; GetInteractiveWidget_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function B.B.SetTargetPlayerInfo
inline void UB::SetTargetPlayerInfo(struct Unknown PlayerState) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.SetTargetPlayerInfo");

	struct SetTargetPlayerInfo_Params {
		struct Unknown PlayerState;
	}; SetTargetPlayerInfo_Params Params;

	Params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.GetVisibility_1
inline enum class Unknow UB::GetVisibility_1() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.GetVisibility_1");

	struct GetVisibility_1_Params {
		
		enum class Unknow ReturnValue;

	}; GetVisibility_1_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function B.B.GetText_1
inline struct FText UB::GetText_1() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.GetText_1");

	struct GetText_1_Params {
		
		struct FText ReturnValue;

	}; GetText_1_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function B.B.SetReplayBtn
inline void UB::SetReplayBtn(char bVisiable) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.SetReplayBtn");

	struct SetReplayBtn_Params {
		char bVisiable;
	}; SetReplayBtn_Params Params;

	Params.bVisiable = bVisiable;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.SetTargetBtn
inline void UB::SetTargetBtn(char bVisiable) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.SetTargetBtn");

	struct SetTargetBtn_Params {
		char bVisiable;
	}; SetTargetBtn_Params Params;

	Params.bVisiable = bVisiable;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.AddCoreInfoRouteping
inline void UB::AddCoreInfoRouteping(struct Unknown PlayerState) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.AddCoreInfoRouteping");

	struct AddCoreInfoRouteping_Params {
		struct Unknown PlayerState;
	}; AddCoreInfoRouteping_Params Params;

	Params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.AddCoreInfoSmartping
inline void UB::AddCoreInfoSmartping(struct Unknown PlayerState) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.AddCoreInfoSmartping");

	struct AddCoreInfoSmartping_Params {
		struct Unknown PlayerState;
	}; AddCoreInfoSmartping_Params Params;

	Params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.AddKillMsgByMolotovg
inline void UB::AddKillMsgByMolotovFlame(struct FText& Killer, struct FText& WeaponName, struct FText& Victim, char bHeasShot, char bLocalKiller, char bByTeam, char bTeamDead, int32_t AliveCount, char bKnockOut, int32_t KillerTierID, int32_t DiedTierID) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.AddKillMsgByMolotovg");

	struct AddKillMsgByMolotovFlame_Params {
		struct FText& Killer;
		struct FText& WeaponName;
		struct FText& Victim;
		char bHeasShot;
		char bLocalKiller;
		char bByTeam;
		char bTeamDead;
		int32_t AliveCount;
		char bKnockOut;
		int32_t KillerTierID;
		int32_t DiedTierID;
	}; AddKillMsgByMolotovFlame_Params Params;

	Params.bHeasShot = bHeasShot;
	Params.bLocalKiller = bLocalKiller;
	Params.bByTeam = bByTeam;
	Params.bTeamDead = bTeamDead;
	Params.AliveCount = AliveCount;
	Params.bKnockOut = bKnockOut;
	Params.KillerTierID = KillerTierID;
	Params.DiedTierID = DiedTierID;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Killer = Params.Killer;
	WeaponName = Params.WeaponName;
	Victim = Params.Victim;

}

// Function B.B.AddKillMsgByVehicle
inline void UB::AddKillMsgByVehicle(struct FText& Killer, struct FText& Victim, char bLocalKiller, char bByTeam, char bTeamDead, int32_t AliveCount, char bKnockOut, int32_t KillerTierID, int32_t DiedTierID) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.AddKillMsgByVehicle");

	struct AddKillMsgByVehicle_Params {
		struct FText& Killer;
		struct FText& Victim;
		char bLocalKiller;
		char bByTeam;
		char bTeamDead;
		int32_t AliveCount;
		char bKnockOut;
		int32_t KillerTierID;
		int32_t DiedTierID;
	}; AddKillMsgByVehicle_Params Params;

	Params.bLocalKiller = bLocalKiller;
	Params.bByTeam = bByTeam;
	Params.bTeamDead = bTeamDead;
	Params.AliveCount = AliveCount;
	Params.bKnockOut = bKnockOut;
	Params.KillerTierID = KillerTierID;
	Params.DiedTierID = DiedTierID;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Killer = Params.Killer;
	Victim = Params.Victim;

}

// Function B.B.AddKillMsgByWeapon
inline void UB::AddKillMsgByWeapon(struct FText& Killer, struct FText& WeaponName, struct FText& Victim, char bHeasShot, char bLocalKiller, char bByTeam, char bTeamDead, int32_t AliveCount, char bKnockOut, int32_t KillerTierID, int32_t DiedTierID) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.AddKillMsgByWeapon");

	struct AddKillMsgByWeapon_Params {
		struct FText& Killer;
		struct FText& WeaponName;
		struct FText& Victim;
		char bHeasShot;
		char bLocalKiller;
		char bByTeam;
		char bTeamDead;
		int32_t AliveCount;
		char bKnockOut;
		int32_t KillerTierID;
		int32_t DiedTierID;
	}; AddKillMsgByWeapon_Params Params;

	Params.bHeasShot = bHeasShot;
	Params.bLocalKiller = bLocalKiller;
	Params.bByTeam = bByTeam;
	Params.bTeamDead = bTeamDead;
	Params.AliveCount = AliveCount;
	Params.bKnockOut = bKnockOut;
	Params.KillerTierID = KillerTierID;
	Params.DiedTierID = DiedTierID;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Killer = Params.Killer;
	WeaponName = Params.WeaponName;
	Victim = Params.Victim;

}

// Function B.B.AddKillMsgCrash
inline void UB::AddKillMsgCrash(struct FText& Victim, char bTeamDead, int32_t AliveCount, char bKnockOut, int32_t DiedTierID) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.AddKillMsgCrash");

	struct AddKillMsgCrash_Params {
		struct FText& Victim;
		char bTeamDead;
		int32_t AliveCount;
		char bKnockOut;
		int32_t DiedTierID;
	}; AddKillMsgCrash_Params Params;

	Params.bTeamDead = bTeamDead;
	Params.AliveCount = AliveCount;
	Params.bKnockOut = bKnockOut;
	Params.DiedTierID = DiedTierID;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Victim = Params.Victim;

}

// Function B.B.AddKillMsgFallToDeath
inline void UB::AddKillMsgFallToDeath(struct FText& Victim, char bTeamDead, int32_t AliveCount, char bKnockOut, int32_t DiedTierID) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.AddKillMsgFallToDeath");

	struct AddKillMsgFallToDeath_Params {
		struct FText& Victim;
		char bTeamDead;
		int32_t AliveCount;
		char bKnockOut;
		int32_t DiedTierID;
	}; AddKillMsgFallToDeath_Params Params;

	Params.bTeamDead = bTeamDead;
	Params.AliveCount = AliveCount;
	Params.bKnockOut = bKnockOut;
	Params.DiedTierID = DiedTierID;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Victim = Params.Victim;

}

// Function B.B.AddKillMsgKnockOut
inline void UB::AddKillMsgKnockOut(struct FText& Killer, struct FText& Victim, char bLocalKiller, char bByTeam, char bTeamDead, int32_t AliveCount, char bKnockOut, int32_t KillerTierID, int32_t DiedTierID) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.AddKillMsgKnockOut");

	struct AddKillMsgKnockOut_Params {
		struct FText& Killer;
		struct FText& Victim;
		char bLocalKiller;
		char bByTeam;
		char bTeamDead;
		int32_t AliveCount;
		char bKnockOut;
		int32_t KillerTierID;
		int32_t DiedTierID;
	}; AddKillMsgKnockOut_Params Params;

	Params.bLocalKiller = bLocalKiller;
	Params.bByTeam = bByTeam;
	Params.bTeamDead = bTeamDead;
	Params.AliveCount = AliveCount;
	Params.bKnockOut = bKnockOut;
	Params.KillerTierID = KillerTierID;
	Params.DiedTierID = DiedTierID;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Killer = Params.Killer;
	Victim = Params.Victim;

}

// Function B.B.AddKillMsgMagneticField
inline void UB::AddKillMsgMagneticField(struct FText& Victim, char bTeamDead, int32_t AliveCount, char bKnockOut, int32_t DiedTierID) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.AddKillMsgMagneticField");

	struct AddKillMsgMagneticField_Params {
		struct FText& Victim;
		char bTeamDead;
		int32_t AliveCount;
		char bKnockOut;
		int32_t DiedTierID;
	}; AddKillMsgMagneticField_Params Params;

	Params.bTeamDead = bTeamDead;
	Params.AliveCount = AliveCount;
	Params.bKnockOut = bKnockOut;
	Params.DiedTierID = DiedTierID;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Victim = Params.Victim;

}

// Function B.B.AddKillMsgNoOxygen
inline void UB::AddKillMsgNoOxygen(struct FText& Victim, char bTeamDead, int32_t AliveCount, char bKnockOut, int32_t DiedTierID) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.AddKillMsgNoOxygen");

	struct AddKillMsgNoOxygen_Params {
		struct FText& Victim;
		char bTeamDead;
		int32_t AliveCount;
		char bKnockOut;
		int32_t DiedTierID;
	}; AddKillMsgNoOxygen_Params Params;

	Params.bTeamDead = bTeamDead;
	Params.AliveCount = AliveCount;
	Params.bKnockOut = bKnockOut;
	Params.DiedTierID = DiedTierID;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Victim = Params.Victim;

}

// Function B.B.AddKillMsgRedZone
inline void UB::AddKillMsgRedZone(struct FText& Victim, char bTeamDead, int32_t AliveCount, char bKnockOut, int32_t DiedTierID) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.AddKillMsgRedZone");

	struct AddKillMsgRedZone_Params {
		struct FText& Victim;
		char bTeamDead;
		int32_t AliveCount;
		char bKnockOut;
		int32_t DiedTierID;
	}; AddKillMsgRedZone_Params Params;

	Params.bTeamDead = bTeamDead;
	Params.AliveCount = AliveCount;
	Params.bKnockOut = bKnockOut;
	Params.DiedTierID = DiedTierID;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Victim = Params.Victim;

}

// Function B.B.AddKillMsgSuicide
inline void UB::AddKillMsgSuicide(struct FText& Victim, char bTeamDead, int32_t AliveCount, char bKnockOut, int32_t DiedTierID) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.AddKillMsgSuicide");

	struct AddKillMsgSuicide_Params {
		struct FText& Victim;
		char bTeamDead;
		int32_t AliveCount;
		char bKnockOut;
		int32_t DiedTierID;
	}; AddKillMsgSuicide_Params Params;

	Params.bTeamDead = bTeamDead;
	Params.AliveCount = AliveCount;
	Params.bKnockOut = bKnockOut;
	Params.DiedTierID = DiedTierID;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Victim = Params.Victim;

}

// Function B.B.AddPerkMessage
inline void UB::AddPerkMessage(struct FName PerkName, int32_t Level) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.AddPerkMessage");

	struct AddPerkMessage_Params {
		struct FName PerkName;
		int32_t Level;
	}; AddPerkMessage_Params Params;

	Params.PerkName = PerkName;
	Params.Level = Level;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.AddPingMessage
inline void UB::AddPingMessage(struct FString MessageTag, char UsingBackGround) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.AddPingMessage");

	struct AddPingMessage_Params {
		struct FString MessageTag;
		char UsingBackGround;
	}; AddPingMessage_Params Params;

	Params.MessageTag = MessageTag;
	Params.UsingBackGround = UsingBackGround;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.AddRequestMessage
inline void UB::AddRequestMessage(struct Unknown PlayerState, struct FString Message) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.AddRequestMessage");

	struct AddRequestMessage_Params {
		struct Unknown PlayerState;
		struct FString Message;
	}; AddRequestMessage_Params Params;

	Params.PlayerState = PlayerState;
	Params.Message = Message;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.Close
inline void UB::Close() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.Close");

	struct Close_Params {
		
	}; Close_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.FinishPerkSpin
inline void UB::FinishPerkSpin(enum class Unknow LevelUpType) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.FinishPerkSpin");

	struct FinishPerkSpin_Params {
		enum class Unknow LevelUpType;
	}; FinishPerkSpin_Params Params;

	Params.LevelUpType = LevelUpType;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.HideAmplifier
inline void UB::HideAmplifier() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.HideAmplifier");

	struct HideAmplifier_Params {
		
	}; HideAmplifier_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.HideBlueZoneNotiMessage
inline void UB::HideBlueZoneNotiMessage() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.HideBlueZoneNotiMessage");

	struct HideBlueZoneNotiMessage_Params {
		
	}; HideBlueZoneNotiMessage_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.HideMinimapWidget
inline void UB::HideMinimapWidget() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.HideMinimapWidget");

	struct HideMinimapWidget_Params {
		
	}; HideMinimapWidget_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.HideTeamPositionWidget
inline void UB::HideTeamPositionWidget() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.HideTeamPositionWidget");

	struct HideTeamPositionWidget_Params {
		
	}; HideTeamPositionWidget_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.HideVehicleWidget
inline void UB::HideVehicleWidget() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.HideVehicleWidget");

	struct HideVehicleWidget_Params {
		
	}; HideVehicleWidget_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.LevelUpEvent
inline void UB::LevelUpEvent(struct Unknown PerkInfo, int32_t CurrentLevel, enum class Unknow LevelUpType, struct Unknown DisplayAbility, int32_t LastLevel) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.LevelUpEvent");

	struct LevelUpEvent_Params {
		struct Unknown PerkInfo;
		int32_t CurrentLevel;
		enum class Unknow LevelUpType;
		struct Unknown DisplayAbility;
		int32_t LastLevel;
	}; LevelUpEvent_Params Params;

	Params.PerkInfo = PerkInfo;
	Params.CurrentLevel = CurrentLevel;
	Params.LevelUpType = LevelUpType;
	Params.DisplayAbility = DisplayAbility;
	Params.LastLevel = LastLevel;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.OnChangedToggleType
inline void UB::OnChangedToggleType(enum class Unknow PreType, enum class Unknow CurrentType) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.OnChangedToggleType");

	struct OnChangedToggleType_Params {
		enum class Unknow PreType;
		enum class Unknow CurrentType;
	}; OnChangedToggleType_Params Params;

	Params.PreType = PreType;
	Params.CurrentType = CurrentType;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.Open
inline void UB::Open() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.Open");

	struct Open_Params {
		
	}; Open_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.OpenMainMenu
inline void UB::OpenMainMenu() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.OpenMainMenu");

	struct OpenMainMenu_Params {
		
	}; OpenMainMenu_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.PlaySupplyBoxMessage
inline void UB::PlaySupplyBoxMessage(struct FString Message) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.PlaySupplyBoxMessage");

	struct PlaySupplyBoxMessage_Params {
		struct FString Message;
	}; PlaySupplyBoxMessage_Params Params;

	Params.Message = Message;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.ResetMiniMapPlayers
inline void UB::ResetMiniMapPlayers() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ResetMiniMapPlayers");

	struct ResetMiniMapPlayers_Params {
		
	}; ResetMiniMapPlayers_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.ResetWorldMap
inline void UB::ResetWorldMap() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ResetWorldMap");

	struct ResetWorldMap_Params {
		
	}; ResetWorldMap_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.SetNickName
inline void UB::SetNickName(struct FText& NickName) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.SetNickName");

	struct SetNickName_Params {
		struct FText& NickName;
	}; SetNickName_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	NickName = Params.NickName;

}

// Function B.B.SetToggleMinimap
inline void UB::SetToggleMinimap(char bToggle) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.SetToggleMinimap");

	struct SetToggleMinimap_Params {
		char bToggle;
	}; SetToggleMinimap_Params Params;

	Params.bToggle = bToggle;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.ShowAmplifier
inline void UB::ShowAmplifier(struct FString InText) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ShowAmplifier");

	struct ShowAmplifier_Params {
		struct FString InText;
	}; ShowAmplifier_Params Params;

	Params.InText = InText;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.ShowBlueZoneNotiMessage
inline void UB::ShowBlueZoneNotiMessage(struct FString Title, struct FString Desc) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ShowBlueZoneNotiMessage");

	struct ShowBlueZoneNotiMessage_Params {
		struct FString Title;
		struct FString Desc;
	}; ShowBlueZoneNotiMessage_Params Params;

	Params.Title = Title;
	Params.Desc = Desc;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.ShowCommonMessage
inline void UB::ShowCommonMessage(struct Unknown& MessageInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ShowCommonMessage");

	struct ShowCommonMessage_Params {
		struct Unknown& MessageInfo;
	}; ShowCommonMessage_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	MessageInfo = Params.MessageInfo;

}

// Function B.B.ShowDeathAndAliveMessage
inline void UB::ShowDeathAndAliveMessage(struct FText& Victim, int32_t AliveCount) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ShowDeathAndAliveMessage");

	struct ShowDeathAndAliveMessage_Params {
		struct FText& Victim;
		int32_t AliveCount;
	}; ShowDeathAndAliveMessage_Params Params;

	Params.AliveCount = AliveCount;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Victim = Params.Victim;

}

// Function B.B.ShowDeathUserWidget
inline void UB::ShowDeathUserWidget(struct Unknown& Info) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ShowDeathUserWidget");

	struct ShowDeathUserWidget_Params {
		struct Unknown& Info;
	}; ShowDeathUserWidget_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Info = Params.Info;

}

// Function B.B.ShowEnergyItemUse
inline void UB::ShowEnergyItemUse(int32_t Type) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ShowEnergyItemUse");

	struct ShowEnergyItemUse_Params {
		int32_t Type;
	}; ShowEnergyItemUse_Params Params;

	Params.Type = Type;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.ShowGameProgressMessage
inline void UB::ShowGameProgressMessage(int32_t Type, int32_t Time) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ShowGameProgressMessage");

	struct ShowGameProgressMessage_Params {
		int32_t Type;
		int32_t Time;
	}; ShowGameProgressMessage_Params Params;

	Params.Type = Type;
	Params.Time = Time;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.ShowGameWaitMessage
inline void UB::ShowGameWaitMessage(int32_t Time) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ShowGameWaitMessage");

	struct ShowGameWaitMessage_Params {
		int32_t Time;
	}; ShowGameWaitMessage_Params Params;

	Params.Time = Time;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.ShowHittedDamage
inline void UB::ShowHittedDamage(struct Unknown InstigatorCharacter) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ShowHittedDamage");

	struct ShowHittedDamage_Params {
		struct Unknown InstigatorCharacter;
	}; ShowHittedDamage_Params Params;

	Params.InstigatorCharacter = InstigatorCharacter;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.ShowInventoryNotEnoughSpaceMessage
inline void UB::ShowInventoryNotEnoughSpaceMessage() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ShowInventoryNotEnoughSpaceMessage");

	struct ShowInventoryNotEnoughSpaceMessage_Params {
		
	}; ShowInventoryNotEnoughSpaceMessage_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.ShowLineOfFire
inline void UB::ShowLineOfFire(struct Unknown& Pos) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ShowLineOfFire");

	struct ShowLineOfFire_Params {
		struct Unknown& Pos;
	}; ShowLineOfFire_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Pos = Params.Pos;

}

// Function B.B.ShowMinimapWidget
inline void UB::ShowMinimapWidget() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ShowMinimapWidget");

	struct ShowMinimapWidget_Params {
		
	}; ShowMinimapWidget_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.ShowMyKillInfo
inline void UB::ShowMyKillInfo(struct FText& WeaponName, struct FText& Victim, int32_t KillCount, int32_t AliveCount, char bHeadShot, char bTeamKill) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ShowMyKillInfo");

	struct ShowMyKillInfo_Params {
		struct FText& WeaponName;
		struct FText& Victim;
		int32_t KillCount;
		int32_t AliveCount;
		char bHeadShot;
		char bTeamKill;
	}; ShowMyKillInfo_Params Params;

	Params.KillCount = KillCount;
	Params.AliveCount = AliveCount;
	Params.bHeadShot = bHeadShot;
	Params.bTeamKill = bTeamKill;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	WeaponName = Params.WeaponName;
	Victim = Params.Victim;

}

// Function B.B.ShowMyKnockOutInfo
inline void UB::ShowMyKnockOutInfo(struct FText& WeaponName, struct FText& Victim, char bHeadShot, char bTeamKill) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ShowMyKnockOutInfo");

	struct ShowMyKnockOutInfo_Params {
		struct FText& WeaponName;
		struct FText& Victim;
		char bHeadShot;
		char bTeamKill;
	}; ShowMyKnockOutInfo_Params Params;

	Params.bHeadShot = bHeadShot;
	Params.bTeamKill = bTeamKill;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	WeaponName = Params.WeaponName;
	Victim = Params.Victim;

}

// Function B.B.ShowNuclearMessage
inline void UB::ShowNuclearMessage(int32_t Count) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ShowNuclearMessage");

	struct ShowNuclearMessage_Params {
		int32_t Count;
	}; ShowNuclearMessage_Params Params;

	Params.Count = Count;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.ShowRedZoneBombMessage
inline void UB::ShowRedZoneBombMessage() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ShowRedZoneBombMessage");

	struct ShowRedZoneBombMessage_Params {
		
	}; ShowRedZoneBombMessage_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.ShowRedZoneStartMessage
inline void UB::ShowRedZoneStartMessage() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ShowRedZoneStartMessage");

	struct ShowRedZoneStartMessage_Params {
		
	}; ShowRedZoneStartMessage_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.ShowReverseSideTeamPositionWidget
inline void UB::ShowReverseSideTeamPositionWidget(int32_t TeamIconIndex, float Angle, struct Unknown ScreenMaxSize) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ShowReverseSideTeamPositionWidget");

	struct ShowReverseSideTeamPositionWidget_Params {
		int32_t TeamIconIndex;
		float Angle;
		struct Unknown ScreenMaxSize;
	}; ShowReverseSideTeamPositionWidget_Params Params;

	Params.TeamIconIndex = TeamIconIndex;
	Params.Angle = Angle;
	Params.ScreenMaxSize = ScreenMaxSize;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.ShowTeamPositionWidget
inline void UB::ShowTeamPositionWidget(int32_t TeamIndex, struct Unknown ScreenPosition, char bNetCullDistance) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ShowTeamPositionWidget");

	struct ShowTeamPositionWidget_Params {
		int32_t TeamIndex;
		struct Unknown ScreenPosition;
		char bNetCullDistance;
	}; ShowTeamPositionWidget_Params Params;

	Params.TeamIndex = TeamIndex;
	Params.ScreenPosition = ScreenPosition;
	Params.bNetCullDistance = bNetCullDistance;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.ShowVehicleWidget
inline void UB::ShowVehicleWidget(struct Unknown VehicleSeat) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ShowVehicleWidget");

	struct ShowVehicleWidget_Params {
		struct Unknown VehicleSeat;
	}; ShowVehicleWidget_Params Params;

	Params.VehicleSeat = VehicleSeat;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.TeamInfoVisibility
inline void UB::TeamInfoVisibility(char bState) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.TeamInfoVisibility");

	struct TeamInfoVisibility_Params {
		char bState;
	}; TeamInfoVisibility_Params Params;

	Params.bState = bState;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.ToggleMiniMap
inline void UB::ToggleMiniMap() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ToggleMiniMap");

	struct ToggleMiniMap_Params {
		
	}; ToggleMiniMap_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.UpdateLineOfFire
inline void UB::UpdateLineOfFire(struct Unknown& Pos, char LastUpdate, float delataTime) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.UpdateLineOfFire");

	struct UpdateLineOfFire_Params {
		struct Unknown& Pos;
		char LastUpdate;
		float delataTime;
	}; UpdateLineOfFire_Params Params;

	Params.LastUpdate = LastUpdate;
	Params.delataTime = delataTime;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Pos = Params.Pos;

}

// Function B.B.BndEvt__Btn
inline void UB::BndEvt__Btn() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.BndEvt__Btn");

	struct BndEvt__Btn_Params {
		
	}; BndEvt__Btn_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.BndEvt__Btn
inline void UB::BndEvt__Btn() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.BndEvt__Btn");

	struct BndEvt__Btn_Params {
		
	}; BndEvt__Btn_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.BndEvt__Btn
inline void UB::BndEvt__Btn() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.BndEvt__Btn");

	struct BndEvt__Btn_Params {
		
	}; BndEvt__Btn_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.BndEvt__Btn
inline void UB::BndEvt__Btn() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.BndEvt__Btn");

	struct BndEvt__Btn_Params {
		
	}; BndEvt__Btn_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.OpenPopup
inline void UB::OpenPopup() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.OpenPopup");

	struct OpenPopup_Params {
		
	}; OpenPopup_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.StartBackGroundBlur
inline void UB::StartBackGroundBlur() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.StartBackGroundBlur");

	struct StartBackGroundBlur_Params {
		
	}; StartBackGroundBlur_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.ResetBackGroundBlur
inline void UB::ResetBackGroundBlur() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ResetBackGroundBlur");

	struct ResetBackGroundBlur_Params {
		
	}; ResetBackGroundBlur_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.BndEvt__Button_Return_K2Node_ComponentBoundEvent_3_
inline void UB::BndEvt__Button_Return_K2Node_ComponentBoundEvent_3_() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.BndEvt__Button_Return_K2Node_ComponentBoundEvent_3_");

	struct BndEvt__Button_Return_K2Node_ComponentBoundEvent_3__Params {
		
	}; BndEvt__Button_Return_K2Node_ComponentBoundEvent_3__Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.AddCoreInfoRequestResuscitation
inline void UB::AddCoreInfoRequestResuscitation(struct Unknown PlayerState) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.AddCoreInfoRequestResuscitation");

	struct AddCoreInfoRequestResuscitation_Params {
		struct Unknown PlayerState;
	}; AddCoreInfoRequestResuscitation_Params Params;

	Params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.ClosePopup
inline void UB::ClosePopup() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ClosePopup");

	struct ClosePopup_Params {
		
	}; ClosePopup_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.HideAnim
inline void UB::HideAnim() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.HideAnim");

	struct HideAnim_Params {
		
	}; HideAnim_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.ShowAnim
inline void UB::ShowAnim() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ShowAnim");

	struct ShowAnim_Params {
		
	}; ShowAnim_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.ExecuteUbergraph_B
inline void UB::ExecuteUbergraph_B(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ExecuteUbergraph_B");

	struct ExecuteUbergraph_B_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_B_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.GetHUDInteractionComponent
inline struct Unknown AB::GetHUDInteractionComponent() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.GetHUDInteractionComponent");

	struct GetHUDInteractionComponent_Params {
		
		struct Unknown ReturnValue;

	}; GetHUDInteractionComponent_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function B.B.CheckItemListHide
inline void AB::CheckItemListHide(enum class Unknow CameraType) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.CheckItemListHide");

	struct CheckItemListHide_Params {
		enum class Unknow CameraType;
	}; CheckItemListHide_Params Params;

	Params.CameraType = CameraType;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.GetReplaySpectatorPawn
inline void AB::GetReplaySpectatorPawn(struct Unknown& ReplaySpectatorPawn) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.GetReplaySpectatorPawn");

	struct GetReplaySpectatorPawn_Params {
		struct Unknown& ReplaySpectatorPawn;
	}; GetReplaySpectatorPawn_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	ReplaySpectatorPawn = Params.ReplaySpectatorPawn;

}

// Function B.B.InitWorldMapOption
inline void AB::InitWorldMapOption() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.InitWorldMapOption");

	struct InitWorldMapOption_Params {
		
	}; InitWorldMapOption_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.SetMaxViewportSize
inline void AB::SetMaxViewportSize() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.SetMaxViewportSize");

	struct SetMaxViewportSize_Params {
		
	}; SetMaxViewportSize_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.OnChangeViewMode
inline void AB::OnChangeViewMode() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.OnChangeViewMode");

	struct OnChangeViewMode_Params {
		
	}; OnChangeViewMode_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.OnChangeCameraType
inline void AB::OnChangeCameraType(enum class Unknow CameraType) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.OnChangeCameraType");

	struct OnChangeCameraType_Params {
		enum class Unknow CameraType;
	}; OnChangeCameraType_Params Params;

	Params.CameraType = CameraType;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.SetVisibilityPerkDeck
inline void AB::SetVisibilityPerkDeck() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.SetVisibilityPerkDeck");

	struct SetVisibilityPerkDeck_Params {
		
	}; SetVisibilityPerkDeck_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.Init
inline void AB::Init() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.Init");

	struct Init_Params {
		
	}; Init_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.ChangeInputMode
inline void AB::ChangeInputMode(char ShowMouse) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ChangeInputMode");

	struct ChangeInputMode_Params {
		char ShowMouse;
	}; ChangeInputMode_Params Params;

	Params.ShowMouse = ShowMouse;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.CheckInputMode
inline void AB::CheckInputMode() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.CheckInputMode");

	struct CheckInputMode_Params {
		
	}; CheckInputMode_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.InpActEvt_CloseUI_K2Node_InputActionEvent_3
inline void AB::InpActEvt_CloseUI_K2Node_InputActionEvent_3(struct Unknown Key) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.InpActEvt_CloseUI_K2Node_InputActionEvent_3");

	struct InpActEvt_CloseUI_K2Node_InputActionEvent_3_Params {
		struct Unknown Key;
	}; InpActEvt_CloseUI_K2Node_InputActionEvent_3_Params Params;

	Params.Key = Key;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.InpActEvt_MiniMap_K2Node_InputActionEvent_2
inline void AB::InpActEvt_MiniMap_K2Node_InputActionEvent_2(struct Unknown Key) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.InpActEvt_MiniMap_K2Node_InputActionEvent_2");

	struct InpActEvt_MiniMap_K2Node_InputActionEvent_2_Params {
		struct Unknown Key;
	}; InpActEvt_MiniMap_K2Node_InputActionEvent_2_Params Params;

	Params.Key = Key;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.InpActEvt_ToggleInGameHUD_K2Node_InputActionEvent_1
inline void AB::InpActEvt_ToggleInGameHUD_K2Node_InputActionEvent_1(struct Unknown Key) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.InpActEvt_ToggleInGameHUD_K2Node_InputActionEvent_1");

	struct InpActEvt_ToggleInGameHUD_K2Node_InputActionEvent_1_Params {
		struct Unknown Key;
	}; InpActEvt_ToggleInGameHUD_K2Node_InputActionEvent_1_Params Params;

	Params.Key = Key;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.OnInputWorldMap
inline void AB::OnInputWorldMap() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.OnInputWorldMap");

	struct OnInputWorldMap_Params {
		
	}; OnInputWorldMap_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.ReceiveBeginPlay
inline void AB::ReceiveBeginPlay() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ReceiveBeginPlay");

	struct ReceiveBeginPlay_Params {
		
	}; ReceiveBeginPlay_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.OnInputReplayTimelineWidget
inline void AB::OnInputReplayTimelineWidget() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.OnInputReplayTimelineWidget");

	struct OnInputReplayTimelineWidget_Params {
		
	}; OnInputReplayTimelineWidget_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.OnInputItemListWidget
inline void AB::OnInputItemListWidget() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.OnInputItemListWidget");

	struct OnInputItemListWidget_Params {
		
	}; OnInputItemListWidget_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.OnInputPlayerListWidget
inline void AB::OnInputPlayerListWidget() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.OnInputPlayerListWidget");

	struct OnInputPlayerListWidget_Params {
		
	}; OnInputPlayerListWidget_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.ChangeCameraTypeDelegate_Event_1
inline void AB::ChangeCameraTypeDelegate_Event_1(enum class Unknow CameraType, struct FString TargetPlayerName) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ChangeCameraTypeDelegate_Event_1");

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

// Function B.B.ChangeViewModeDelegate_Event_1
inline void AB::ChangeViewModeDelegate_Event_1(char ViewMode) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ChangeViewModeDelegate_Event_1");

	struct ChangeViewModeDelegate_Event_1_Params {
		char ViewMode;
	}; ChangeViewModeDelegate_Event_1_Params Params;

	Params.ViewMode = ViewMode;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.OnViewportSizedBP
inline void AB::OnViewportSizedBP() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.OnViewportSizedBP");

	struct OnViewportSizedBP_Params {
		
	}; OnViewportSizedBP_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.OnInputItemList
inline void AB::OnInputItemList() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.OnInputItemList");

	struct OnInputItemList_Params {
		
	}; OnInputItemList_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.ExecuteUbergraph_B
inline void AB::ExecuteUbergraph_B(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ExecuteUbergraph_B");

	struct ExecuteUbergraph_B_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_B_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.SetObserver
inline void AB::SetObserver() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.SetObserver");

	struct SetObserver_Params {
		
	}; SetObserver_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.ReceiveBeginPlay
inline void AB::ReceiveBeginPlay() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ReceiveBeginPlay");

	struct ReceiveBeginPlay_Params {
		
	}; ReceiveBeginPlay_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.NextObservingTarget
inline void AB::NextObservingTarget() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.NextObservingTarget");

	struct NextObservingTarget_Params {
		
	}; NextObservingTarget_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.PreObservingTarget
inline void AB::PreObservingTarget() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.PreObservingTarget");

	struct PreObservingTarget_Params {
		
	}; PreObservingTarget_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.SetKillCamStartTime
inline void AB::SetKillCamStartTime() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.SetKillCamStartTime");

	struct SetKillCamStartTime_Params {
		
	}; SetKillCamStartTime_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.OnKillcamFinish
inline void AB::OnKillcamFinish() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.OnKillcamFinish");

	struct OnKillcamFinish_Params {
		
	}; OnKillcamFinish_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.SetTargetPlayerInfo
inline void AB::SetTargetPlayerInfo(struct Unknown PlayerState) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.SetTargetPlayerInfo");

	struct SetTargetPlayerInfo_Params {
		struct Unknown PlayerState;
	}; SetTargetPlayerInfo_Params Params;

	Params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.ExecuteUbergraph_B
inline void AB::ExecuteUbergraph_B(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ExecuteUbergraph_B");

	struct ExecuteUbergraph_B_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_B_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.IsSpectate
inline void AB::IsSpectate(char& Return) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.IsSpectate");

	struct IsSpectate_Params {
		char& Return;
	}; IsSpectate_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Return = Params.Return;

}

// Function B.B.OnShowMyKillInfoMessage
inline void AB::OnShowMyKillInfoMessage(struct Unknown BroadCastInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.OnShowMyKillInfoMessage");

	struct OnShowMyKillInfoMessage_Params {
		struct Unknown BroadCastInfo;
	}; OnShowMyKillInfoMessage_Params Params;

	Params.BroadCastInfo = BroadCastInfo;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.OnShowMyKnockOutInfo
inline void AB::OnShowMyKnockOutInfo(struct FText WeaponName, struct FText Victim, char IsHeadShot, char TeamKill, char SelfKill) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.OnShowMyKnockOutInfo");

	struct OnShowMyKnockOutInfo_Params {
		struct FText WeaponName;
		struct FText Victim;
		char IsHeadShot;
		char TeamKill;
		char SelfKill;
	}; OnShowMyKnockOutInfo_Params Params;

	Params.WeaponName = WeaponName;
	Params.Victim = Victim;
	Params.IsHeadShot = IsHeadShot;
	Params.TeamKill = TeamKill;
	Params.SelfKill = SelfKill;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.OnShowMyKillInfo
inline void AB::OnShowMyKillInfo(struct FText WeaponName, struct FText Victim, int32_t KillCount, char IsHeadShot, char TeamKill, char SelfKill, char FinallyKill) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.OnShowMyKillInfo");

	struct OnShowMyKillInfo_Params {
		struct FText WeaponName;
		struct FText Victim;
		int32_t KillCount;
		char IsHeadShot;
		char TeamKill;
		char SelfKill;
		char FinallyKill;
	}; OnShowMyKillInfo_Params Params;

	Params.WeaponName = WeaponName;
	Params.Victim = Victim;
	Params.KillCount = KillCount;
	Params.IsHeadShot = IsHeadShot;
	Params.TeamKill = TeamKill;
	Params.SelfKill = SelfKill;
	Params.FinallyKill = FinallyKill;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.SelectTopOrBottomWidget
inline void AB::SelectTopOrBottomWidget(enum class Unknow MessageType, struct Unknown& UserWidget) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.SelectTopOrBottomWidget");

	struct SelectTopOrBottomWidget_Params {
		enum class Unknow MessageType;
		struct Unknown& UserWidget;
	}; SelectTopOrBottomWidget_Params Params;

	Params.MessageType = MessageType;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	UserWidget = Params.UserWidget;

}

// Function B.B.SelectTable
inline void AB::SelectTable(enum class Unknow TableType, struct Unknown& DataTable) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.SelectTable");

	struct SelectTable_Params {
		enum class Unknow TableType;
		struct Unknown& DataTable;
	}; SelectTable_Params Params;

	Params.TableType = TableType;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	DataTable = Params.DataTable;

}

// Function B.B.HideHUDMessage
inline void AB::HideHUDMessage(enum class Unknow MessageType) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.HideHUDMessage");

	struct HideHUDMessage_Params {
		enum class Unknow MessageType;
	}; HideHUDMessage_Params Params;

	Params.MessageType = MessageType;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.ShowHudMessageAll
inline void AB::ShowHudMessageAll() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ShowHudMessageAll");

	struct ShowHudMessageAll_Params {
		
	}; ShowHudMessageAll_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.ShowHudMessageAt
inline void AB::ShowHudMessageAt(int32_t MessageTypeNum) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ShowHudMessageAt");

	struct ShowHudMessageAt_Params {
		int32_t MessageTypeNum;
	}; ShowHudMessageAt_Params Params;

	Params.MessageTypeNum = MessageTypeNum;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.OnAddKillMessageAll
inline void AB::OnAddKillMessageAll() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.OnAddKillMessageAll");

	struct OnAddKillMessageAll_Params {
		
	}; OnAddKillMessageAll_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.ShowHUDMessageAtNum
inline void AB::ShowHUDMessageAtNum(char ShowNext, int32_t TypeNum) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ShowHUDMessageAtNum");

	struct ShowHUDMessageAtNum_Params {
		char ShowNext;
		int32_t TypeNum;
	}; ShowHUDMessageAtNum_Params Params;

	Params.ShowNext = ShowNext;
	Params.TypeNum = TypeNum;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.ShowKillMessage
inline void AB::ShowKillMessage(struct TArray<Unknown>& DamageTypeArray) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ShowKillMessage");

	struct ShowKillMessage_Params {
		struct TArray<Unknown>& DamageTypeArray;
	}; ShowKillMessage_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	DamageTypeArray = Params.DamageTypeArray;

}

// Function B.B.ShowGuideWidget
inline void AB::ShowGuideWidget(enum class Unknow GuideType) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ShowGuideWidget");

	struct ShowGuideWidget_Params {
		enum class Unknow GuideType;
	}; ShowGuideWidget_Params Params;

	Params.GuideType = GuideType;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.HideGuideWidget
inline void AB::HideGuideWidget(enum class Unknow GuideType) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.HideGuideWidget");

	struct HideGuideWidget_Params {
		enum class Unknow GuideType;
	}; HideGuideWidget_Params Params;

	Params.GuideType = GuideType;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.ShowHUDMessage
inline void AB::ShowHUDMessage(struct Unknown MessageRow) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ShowHUDMessage");

	struct ShowHUDMessage_Params {
		struct Unknown MessageRow;
	}; ShowHUDMessage_Params Params;

	Params.MessageRow = MessageRow;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.K2_SetMainAndSpectatorWidgetVisiblility
inline void AB::K2_SetMainAndSpectatorWidgetVisiblility(char bIsVisible, char bMainWidget, char bSpectatorWidget) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.K2_SetMainAndSpectatorWidgetVisiblility");

	struct K2_SetMainAndSpectatorWidgetVisiblility_Params {
		char bIsVisible;
		char bMainWidget;
		char bSpectatorWidget;
	}; K2_SetMainAndSpectatorWidgetVisiblility_Params Params;

	Params.bIsVisible = bIsVisible;
	Params.bMainWidget = bMainWidget;
	Params.bSpectatorWidget = bSpectatorWidget;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.ExecuteUbergraph_B
inline void AB::ExecuteUbergraph_B(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ExecuteUbergraph_B");

	struct ExecuteUbergraph_B_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_B_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.ReceiveBeginPlay
inline void AB::ReceiveBeginPlay() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ReceiveBeginPlay");

	struct ReceiveBeginPlay_Params {
		
	}; ReceiveBeginPlay_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.ExecuteUbergraph_B
inline void AB::ExecuteUbergraph_B(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ExecuteUbergraph_B");

	struct ExecuteUbergraph_B_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_B_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.ReceiveBeginPlay
inline void AB::ReceiveBeginPlay() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ReceiveBeginPlay");

	struct ReceiveBeginPlay_Params {
		
	}; ReceiveBeginPlay_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.SetSkinMaterial
inline void AB::SetSkinMaterial(struct Unknown Material) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.SetSkinMaterial");

	struct SetSkinMaterial_Params {
		struct Unknown Material;
	}; SetSkinMaterial_Params Params;

	Params.Material = Material;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.ExecuteUbergraph_B
inline void AB::ExecuteUbergraph_B(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ExecuteUbergraph_B");

	struct ExecuteUbergraph_B_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_B_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.CheckThirdCameraLocationRange
inline void AB::CheckThirdCameraLocationRange() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.CheckThirdCameraLocationRange");

	struct CheckThirdCameraLocationRange_Params {
		
	}; CheckThirdCameraLocationRange_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.UpdateActorRotationToPelvis
inline void AB::UpdateActorRotationToPelvis() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.UpdateActorRotationToPelvis");

	struct UpdateActorRotationToPelvis_Params {
		
	}; UpdateActorRotationToPelvis_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.GetActiveCamera
inline void AB::GetActiveCamera(struct Unknown& ActiveCamera) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.GetActiveCamera");

	struct GetActiveCamera_Params {
		struct Unknown& ActiveCamera;
	}; GetActiveCamera_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	ActiveCamera = Params.ActiveCamera;

}

// Function B.B.UpdateLowerBoundCameraHeight
inline void AB::UpdateLowerBoundCameraHeight() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.UpdateLowerBoundCameraHeight");

	struct UpdateLowerBoundCameraHeight_Params {
		
	}; UpdateLowerBoundCameraHeight_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.PreventCameraWallCollision
inline void AB::PreventCameraWallCollision() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.PreventCameraWallCollision");

	struct PreventCameraWallCollision_Params {
		
	}; PreventCameraWallCollision_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.InitReferences
inline void AB::InitReferences(char& bSuccess) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.InitReferences");

	struct InitReferences_Params {
		char& bSuccess;
	}; InitReferences_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	bSuccess = Params.bSuccess;

}

// Function B.B.UpdateCameraHeightToHead
inline void AB::UpdateCameraHeightToHead() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.UpdateCameraHeightToHead");

	struct UpdateCameraHeightToHead_Params {
		
	}; UpdateCameraHeightToHead_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.UserConstructionScript
inline void AB::UserConstructionScript() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.UserConstructionScript");

	struct UserConstructionScript_Params {
		
	}; UserConstructionScript_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.ReceiveBeginPlay
inline void AB::ReceiveBeginPlay() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ReceiveBeginPlay");

	struct ReceiveBeginPlay_Params {
		
	}; ReceiveBeginPlay_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.ReceiveTick
inline void AB::ReceiveTick(float DeltaSeconds) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ReceiveTick");

	struct ReceiveTick_Params {
		float DeltaSeconds;
	}; ReceiveTick_Params Params;

	Params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.K2_OnEndViewTarget
inline void AB::K2_OnEndViewTarget(struct Unknown PC) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.K2_OnEndViewTarget");

	struct K2_OnEndViewTarget_Params {
		struct Unknown PC;
	}; K2_OnEndViewTarget_Params Params;

	Params.PC = PC;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.ExecuteUbergraph_B
inline void AB::ExecuteUbergraph_B(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ExecuteUbergraph_B");

	struct ExecuteUbergraph_B_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_B_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.Construct
inline void UB::Construct() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.Construct");

	struct Construct_Params {
		
	}; Construct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.Tick
inline void UB::Tick(struct Unknown MyGeometry, float InDeltaTime) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.Tick");

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

// Function B.B.CustomEvent_1
inline void UB::CustomEvent_1(enum class Unknow SceneType) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.CustomEvent_1");

	struct CustomEvent_1_Params {
		enum class Unknow SceneType;
	}; CustomEvent_1_Params Params;

	Params.SceneType = SceneType;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.ExecuteUbergraph_B
inline void UB::ExecuteUbergraph_B(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ExecuteUbergraph_B");

	struct ExecuteUbergraph_B_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_B_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.CheckAnyAction
inline void UB::CheckAnyAction(char& AnyAction) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.CheckAnyAction");

	struct CheckAnyAction_Params {
		char& AnyAction;
	}; CheckAnyAction_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	AnyAction = Params.AnyAction;

}

// Function B.B.CheckAnyCloseUI
inline void UB::CheckAnyCloseUI(char& AnyClosed) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.CheckAnyCloseUI");

	struct CheckAnyCloseUI_Params {
		char& AnyClosed;
	}; CheckAnyCloseUI_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	AnyClosed = Params.AnyClosed;

}

// Function B.B.InputCloseUI
inline void UB::InputCloseUI() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.InputCloseUI");

	struct InputCloseUI_Params {
		
	}; InputCloseUI_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.Callback
inline void UB::Callback() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.Callback");

	struct Callback_Params {
		
	}; Callback_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.SetMousePositionToCenter
inline void UB::SetMousePositionToCenter() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.SetMousePositionToCenter");

	struct SetMousePositionToCenter_Params {
		
	}; SetMousePositionToCenter_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.CheckInputState
inline void UB::CheckInputState() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.CheckInputState");

	struct CheckInputState_Params {
		
	}; CheckInputState_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.SetActionBlocked
inline void UB::SetActionBlocked(char WantsToBlock, struct TArray<Unknown>& ActionNames, struct Unknown Widget) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.SetActionBlocked");

	struct SetActionBlocked_Params {
		char WantsToBlock;
		struct TArray<Unknown>& ActionNames;
		struct Unknown Widget;
	}; SetActionBlocked_Params Params;

	Params.WantsToBlock = WantsToBlock;
	Params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	ActionNames = Params.ActionNames;

}

// Function B.B.IsGlobalPostProcessVolume
inline char UB::IsGlobalPostProcessVolume(struct Unknown Other) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.IsGlobalPostProcessVolume");

	struct IsGlobalPostProcessVolume_Params {
		struct Unknown Other;
		char ReturnValue;

	}; IsGlobalPostProcessVolume_Params Params;

	Params.Other = Other;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function B.B.SetPostProcessVolumeDefaultOption
inline void UB::SetPostProcessVolumeDefaultOption() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.SetPostProcessVolumeDefaultOption");

	struct SetPostProcessVolumeDefaultOption_Params {
		
	}; SetPostProcessVolumeDefaultOption_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.InitOptionWidget
inline void UB::InitOptionWidget() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.InitOptionWidget");

	struct InitOptionWidget_Params {
		
	}; InitOptionWidget_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.IsSpectating
inline void UB::IsSpectating(char& IsSpectating) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.IsSpectating");

	struct IsSpectating_Params {
		char& IsSpectating;
	}; IsSpectating_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	IsSpectating = Params.IsSpectating;

}

// Function B.B.GetPlayerHUD
inline void UB::GetPlayerHUD(char& IsAlive, struct Unknown& PlayerHUD) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.GetPlayerHUD");

	struct GetPlayerHUD_Params {
		char& IsAlive;
		struct Unknown& PlayerHUD;
	}; GetPlayerHUD_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	IsAlive = Params.IsAlive;
	PlayerHUD = Params.PlayerHUD;

}

// Function B.B.InputOptionMenu
inline void UB::InputOptionMenu() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.InputOptionMenu");

	struct InputOptionMenu_Params {
		
	}; InputOptionMenu_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.ReceiveTick
inline void UB::ReceiveTick(float DeltaSeconds) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ReceiveTick");

	struct ReceiveTick_Params {
		float DeltaSeconds;
	}; ReceiveTick_Params Params;

	Params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.InputModeGame
inline void UB::InputModeGame(struct Unknown Widget) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.InputModeGame");

	struct InputModeGame_Params {
		struct Unknown Widget;
	}; InputModeGame_Params Params;

	Params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.InputModeUI
inline void UB::InputModeUI(struct Unknown Widget) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.InputModeUI");

	struct InputModeUI_Params {
		struct Unknown Widget;
	}; InputModeUI_Params Params;

	Params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.InputToggleIngameHUD
inline void UB::InputToggleIngameHUD() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.InputToggleIngameHUD");

	struct InputToggleIngameHUD_Params {
		
	}; InputToggleIngameHUD_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.ReceiveBeginPlay
inline void UB::ReceiveBeginPlay() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ReceiveBeginPlay");

	struct ReceiveBeginPlay_Params {
		
	}; ReceiveBeginPlay_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.ExecuteUbergraph_B
inline void UB::ExecuteUbergraph_B(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ExecuteUbergraph_B");

	struct ExecuteUbergraph_B_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_B_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.DrawGrassCollision
inline void UB::DrawGrassCollision(struct Unknown TargetCharacter) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.DrawGrassCollision");

	struct DrawGrassCollision_Params {
		struct Unknown TargetCharacter;
	}; DrawGrassCollision_Params Params;

	Params.TargetCharacter = TargetCharacter;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.ClearRenderTarget
inline void UB::ClearRenderTarget() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ClearRenderTarget");

	struct ClearRenderTarget_Params {
		
	}; ClearRenderTarget_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.ExecuteUbergraph_B
inline void UB::ExecuteUbergraph_B(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ExecuteUbergraph_B");

	struct ExecuteUbergraph_B_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_B_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.CheckOptionChanged
inline void UB::CheckOptionChanged() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.CheckOptionChanged");

	struct CheckOptionChanged_Params {
		
	}; CheckOptionChanged_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.InitArmoryMeshActor
inline void UB::InitArmoryMeshActor() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.InitArmoryMeshActor");

	struct InitArmoryMeshActor_Params {
		
	}; InitArmoryMeshActor_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.AddEffect
inline void UB::AddEffect(struct Unknown Location, float Delay) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.AddEffect");

	struct AddEffect_Params {
		struct Unknown Location;
		float Delay;
	}; AddEffect_Params Params;

	Params.Location = Location;
	Params.Delay = Delay;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.SendPlayTimeMsg
inline void UB::SendPlayTimeMsg() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.SendPlayTimeMsg");

	struct SendPlayTimeMsg_Params {
		
	}; SendPlayTimeMsg_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.UpdateCharacterInfo
inline void UB::UpdateCharacterInfo() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.UpdateCharacterInfo");

	struct UpdateCharacterInfo_Params {
		
	}; UpdateCharacterInfo_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.CreateCharacterInfo
inline void UB::CreateCharacterInfo() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.CreateCharacterInfo");

	struct CreateCharacterInfo_Params {
		
	}; CreateCharacterInfo_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.Add
inline void UB::Add(struct FString Name, struct Unknown Offset) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.Add");

	struct Add_Params {
		struct FString Name;
		struct Unknown Offset;
	}; Add_Params Params;

	Params.Name = Name;
	Params.Offset = Offset;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.InitWeapon
inline void UB::InitWeapon() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.InitWeapon");

	struct InitWeapon_Params {
		
	}; InitWeapon_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.HideExitPopup
inline void UB::HideExitPopup() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.HideExitPopup");

	struct HideExitPopup_Params {
		
	}; HideExitPopup_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.Construct
inline void UB::Construct() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.Construct");

	struct Construct_Params {
		
	}; Construct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.Tick
inline void UB::Tick(struct Unknown MyGeometry, float InDeltaTime) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.Tick");

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

// Function B.B.ShowMouseCursor
inline void UB::ShowMouseCursor() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ShowMouseCursor");

	struct ShowMouseCursor_Params {
		
	}; ShowMouseCursor_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.OnMatchingSucceeded
inline void UB::OnMatchingSucceeded() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.OnMatchingSucceeded");

	struct OnMatchingSucceeded_Params {
		
	}; OnMatchingSucceeded_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.OnMatchingFailed
inline void UB::OnMatchingFailed(int32_t ErrorCode, struct FString ExtraDescription) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.OnMatchingFailed");

	struct OnMatchingFailed_Params {
		int32_t ErrorCode;
		struct FString ExtraDescription;
	}; OnMatchingFailed_Params Params;

	Params.ErrorCode = ErrorCode;
	Params.ExtraDescription = ExtraDescription;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.SetVisibleSelectGameMode
inline void UB::SetVisibleSelectGameMode(char bState) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.SetVisibleSelectGameMode");

	struct SetVisibleSelectGameMode_Params {
		char bState;
	}; SetVisibleSelectGameMode_Params Params;

	Params.bState = bState;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.CustomEvent_1
inline void UB::CustomEvent_1() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.CustomEvent_1");

	struct CustomEvent_1_Params {
		
	}; CustomEvent_1_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.SendPlayTimeMessage
inline void UB::SendPlayTimeMessage() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.SendPlayTimeMessage");

	struct SendPlayTimeMessage_Params {
		
	}; SendPlayTimeMessage_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.
inline void UB::(char Visible, struct Unknown& Location) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.");

	struct _Params {
		char Visible;
		struct Unknown& Location;
	}; _Params Params;

	Params.Visible = Visible;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Location = Params.Location;

}

// Function B.B.EquipmentSounedDelegate_Event_1
inline void UB::EquipmentSounedDelegate_Event_1() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.EquipmentSounedDelegate_Event_1");

	struct EquipmentSounedDelegate_Event_1_Params {
		
	}; EquipmentSounedDelegate_Event_1_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.SlotHoverSounedDelegate_Event_1
inline void UB::SlotHoverSounedDelegate_Event_1() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.SlotHoverSounedDelegate_Event_1");

	struct SlotHoverSounedDelegate_Event_1_Params {
		
	}; SlotHoverSounedDelegate_Event_1_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.K2_OnChangedArmoryTab
inline void UB::K2_OnChangedArmoryTab(struct FString TabName) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.K2_OnChangedArmoryTab");

	struct K2_OnChangedArmoryTab_Params {
		struct FString TabName;
	}; K2_OnChangedArmoryTab_Params Params;

	Params.TabName = TabName;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.K2_OnReceiveCraftWeapon
inline void UB::K2_OnReceiveCraftWeapon(struct Unknown& CraftWeapon) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.K2_OnReceiveCraftWeapon");

	struct K2_OnReceiveCraftWeapon_Params {
		struct Unknown& CraftWeapon;
	}; K2_OnReceiveCraftWeapon_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	CraftWeapon = Params.CraftWeapon;

}

// Function B.B.K2_OnChangedWeaponList
inline void UB::K2_OnChangedWeaponList(struct TArray<Unknown>& ReceiveWeaponList) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.K2_OnChangedWeaponList");

	struct K2_OnChangedWeaponList_Params {
		struct TArray<Unknown>& ReceiveWeaponList;
	}; K2_OnChangedWeaponList_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	ReceiveWeaponList = Params.ReceiveWeaponList;

}

// Function B.B.K2_OnChangedMaterialList
inline void UB::K2_OnChangedMaterialList(struct TArray<Unknown>& ReceiveMaterialList) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.K2_OnChangedMaterialList");

	struct K2_OnChangedMaterialList_Params {
		struct TArray<Unknown>& ReceiveMaterialList;
	}; K2_OnChangedMaterialList_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	ReceiveMaterialList = Params.ReceiveMaterialList;

}

// Function B.B.K2_OnChangedGold
inline void UB::K2_OnChangedGold(int32_t ReceiveGold) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.K2_OnChangedGold");

	struct K2_OnChangedGold_Params {
		int32_t ReceiveGold;
	}; K2_OnChangedGold_Params Params;

	Params.ReceiveGold = ReceiveGold;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.K2_MoveToCraftWeapon
inline void UB::K2_MoveToCraftWeapon(int32_t CraftingID) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.K2_MoveToCraftWeapon");

	struct K2_MoveToCraftWeapon_Params {
		int32_t CraftingID;
	}; K2_MoveToCraftWeapon_Params Params;

	Params.CraftingID = CraftingID;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.K2_Init
inline void UB::K2_Init() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.K2_Init");

	struct K2_Init_Params {
		
	}; K2_Init_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.OnChangedMainTab
inline void UB::OnChangedMainTab(struct FString TabName) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.OnChangedMainTab");

	struct OnChangedMainTab_Params {
		struct FString TabName;
	}; OnChangedMainTab_Params Params;

	Params.TabName = TabName;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.OnChangeProgress
inline void UB::OnChangeProgress(struct FString PrefetchingProgressString) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.OnChangeProgress");

	struct OnChangeProgress_Params {
		struct FString PrefetchingProgressString;
	}; OnChangeProgress_Params Params;

	Params.PrefetchingProgressString = PrefetchingProgressString;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.OnPrefetchingProgressVisible
inline void UB::OnPrefetchingProgressVisible(enum class Unknow InVisibility) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.OnPrefetchingProgressVisible");

	struct OnPrefetchingProgressVisible_Params {
		enum class Unknow InVisibility;
	}; OnPrefetchingProgressVisible_Params Params;

	Params.InVisibility = InVisibility;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.K2_OnCleanCampaignJoined
inline void UB::K2_OnCleanCampaignJoined(char bJoined) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.K2_OnCleanCampaignJoined");

	struct K2_OnCleanCampaignJoined_Params {
		char bJoined;
	}; K2_OnCleanCampaignJoined_Params Params;

	Params.bJoined = bJoined;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.ExecuteUbergraph_B
inline void UB::ExecuteUbergraph_B(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ExecuteUbergraph_B");

	struct ExecuteUbergraph_B_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_B_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.EventDispatcher_Mov
inline void UB::EventDispatcher_Mov(int32_t CraftingID) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.EventDispatcher_Mov");

	struct EventDispatcher_Mov_Params {
		int32_t CraftingID;
	}; EventDispatcher_Mov_Params Params;

	Params.CraftingID = CraftingID;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.Resize
inline void AB::Resize(int32_t SizeX, int32_t SizeY) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.Resize");

	struct Resize_Params {
		int32_t SizeX;
		int32_t SizeY;
	}; Resize_Params Params;

	Params.SizeX = SizeX;
	Params.SizeY = SizeY;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.AddRotation
inline void AB::AddRotation(float Delta) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.AddRotation");

	struct AddRotation_Params {
		float Delta;
	}; AddRotation_Params Params;

	Params.Delta = Delta;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.ReceiveBeginPlay
inline void AB::ReceiveBeginPlay() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ReceiveBeginPlay");

	struct ReceiveBeginPlay_Params {
		
	}; ReceiveBeginPlay_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.ReceiveTick
inline void AB::ReceiveTick(float DeltaSeconds) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ReceiveTick");

	struct ReceiveTick_Params {
		float DeltaSeconds;
	}; ReceiveTick_Params Params;

	Params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.OnUpdatedMutable
inline void AB::OnUpdatedMutable(struct Unknown Instance) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.OnUpdatedMutable");

	struct OnUpdatedMutable_Params {
		struct Unknown Instance;
	}; OnUpdatedMutable_Params Params;

	Params.Instance = Instance;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.ExecuteUbergraph_B
inline void AB::ExecuteUbergraph_B(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ExecuteUbergraph_B");

	struct ExecuteUbergraph_B_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_B_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.ActiveThrowingProjectileMainEffect
inline void AB::ActiveThrowingProjectileMainEffect() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ActiveThrowingProjectileMainEffect");

	struct ActiveThrowingProjectileMainEffect_Params {
		
	}; ActiveThrowingProjectileMainEffect_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.ExecuteUbergraph_B
inline void AB::ExecuteUbergraph_B(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ExecuteUbergraph_B");

	struct ExecuteUbergraph_B_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_B_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.ReceiveBeginPlay
inline void AB::ReceiveBeginPlay() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ReceiveBeginPlay");

	struct ReceiveBeginPlay_Params {
		
	}; ReceiveBeginPlay_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.ExecuteUbergraph_B
inline void AB::ExecuteUbergraph_B(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ExecuteUbergraph_B");

	struct ExecuteUbergraph_B_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_B_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.ActiveThrowingProjectileMainEffect
inline void AB::ActiveThrowingProjectileMainEffect() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ActiveThrowingProjectileMainEffect");

	struct ActiveThrowingProjectileMainEffect_Params {
		
	}; ActiveThrowingProjectileMainEffect_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.ExecuteUbergraph_B
inline void AB::ExecuteUbergraph_B(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ExecuteUbergraph_B");

	struct ExecuteUbergraph_B_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_B_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.UserConstructionScript
inline void AB::UserConstructionScript() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.UserConstructionScript");

	struct UserConstructionScript_Params {
		
	}; UserConstructionScript_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.ReceiveTick
inline void AB::ReceiveTick(float DeltaSeconds) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ReceiveTick");

	struct ReceiveTick_Params {
		float DeltaSeconds;
	}; ReceiveTick_Params Params;

	Params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.ExecuteUbergraph_B
inline void AB::ExecuteUbergraph_B(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ExecuteUbergraph_B");

	struct ExecuteUbergraph_B_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_B_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.UserConstructionScript
inline void AB::UserConstructionScript() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.UserConstructionScript");

	struct UserConstructionScript_Params {
		
	}; UserConstructionScript_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.OverWater__FinishedFunc
inline void AB::OverWater__FinishedFunc() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.OverWater__FinishedFunc");

	struct OverWater__FinishedFunc_Params {
		
	}; OverWater__FinishedFunc_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.OverWater__UpdateFunc
inline void AB::OverWater__UpdateFunc() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.OverWater__UpdateFunc");

	struct OverWater__UpdateFunc_Params {
		
	}; OverWater__UpdateFunc_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.HittingWater__FinishedFunc
inline void AB::HittingWater__FinishedFunc() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.HittingWater__FinishedFunc");

	struct HittingWater__FinishedFunc_Params {
		
	}; HittingWater__FinishedFunc_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.HittingWater__UpdateFunc
inline void AB::HittingWater__UpdateFunc() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.HittingWater__UpdateFunc");

	struct HittingWater__UpdateFunc_Params {
		
	}; HittingWater__UpdateFunc_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.NormalHitSound
inline void AB::NormalHitSound() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.NormalHitSound");

	struct NormalHitSound_Params {
		
	}; NormalHitSound_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.WaterHitSound
inline void AB::WaterHitSound() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.WaterHitSound");

	struct WaterHitSound_Params {
		
	}; WaterHitSound_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.OnActivated
inline void AB::OnActivated() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.OnActivated");

	struct OnActivated_Params {
		
	}; OnActivated_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.SetLastPosition
inline void AB::SetLastPosition(struct Unknown Location, struct Unknown Rotation) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.SetLastPosition");

	struct SetLastPosition_Params {
		struct Unknown Location;
		struct Unknown Rotation;
	}; SetLastPosition_Params Params;

	Params.Location = Location;
	Params.Rotation = Rotation;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.Cutoff
inline void AB::Cutoff() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.Cutoff");

	struct Cutoff_Params {
		
	}; Cutoff_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.OpenDropBoxEvent
inline void AB::OpenDropBoxEvent() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.OpenDropBoxEvent");

	struct OpenDropBoxEvent_Params {
		
	}; OpenDropBoxEvent_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.OnOverWater
inline void AB::OnOverWater() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.OnOverWater");

	struct OnOverWater_Params {
		
	}; OnOverWater_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.OnHittingWater
inline void AB::OnHittingWater() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.OnHittingWater");

	struct OnHittingWater_Params {
		
	}; OnHittingWater_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.GenerateItems
inline void AB::GenerateItems(struct FName ItemKey) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.GenerateItems");

	struct GenerateItems_Params {
		struct FName ItemKey;
	}; GenerateItems_Params Params;

	Params.ItemKey = ItemKey;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.SetItemInBlueprint
inline void AB::SetItemInBlueprint(struct FName& ItemKey) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.SetItemInBlueprint");

	struct SetItemInBlueprint_Params {
		struct FName& ItemKey;
	}; SetItemInBlueprint_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	ItemKey = Params.ItemKey;

}

// Function B.B.LandedOnWaterEvent
inline void AB::LandedOnWaterEvent() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.LandedOnWaterEvent");

	struct LandedOnWaterEvent_Params {
		
	}; LandedOnWaterEvent_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.ReceiveTick
inline void AB::ReceiveTick(float DeltaSeconds) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ReceiveTick");

	struct ReceiveTick_Params {
		float DeltaSeconds;
	}; ReceiveTick_Params Params;

	Params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.ExecuteUbergraph_B
inline void AB::ExecuteUbergraph_B(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ExecuteUbergraph_B");

	struct ExecuteUbergraph_B_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_B_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.ForceInitRecordingCharacter
inline void AB::ForceInitRecordingCharacter() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ForceInitRecordingCharacter");

	struct ForceInitRecordingCharacter_Params {
		
	}; ForceInitRecordingCharacter_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.CheckAimingCancelation
inline void AB::CheckAimingCancelation() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.CheckAimingCancelation");

	struct CheckAimingCancelation_Params {
		
	}; CheckAimingCancelation_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.CorrectionScreenPosition
inline void AB::CorrectionScreenPosition(struct Unknown& ScreenPosition, char& RetOutScreenPosition) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.CorrectionScreenPosition");

	struct CorrectionScreenPosition_Params {
		struct Unknown& ScreenPosition;
		char& RetOutScreenPosition;
	}; CorrectionScreenPosition_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	ScreenPosition = Params.ScreenPosition;
	RetOutScreenPosition = Params.RetOutScreenPosition;

}

// Function B.B.LoadTableData
inline void AB::LoadTableData() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.LoadTableData");

	struct LoadTableData_Params {
		
	}; LoadTableData_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.UserConstructionScript
inline void AB::UserConstructionScript() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.UserConstructionScript");

	struct UserConstructionScript_Params {
		
	}; UserConstructionScript_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.InpActEvt_Six_K2Node_InputKeyEvent_7
inline void AB::InpActEvt_Six_K2Node_InputKeyEvent_7(struct Unknown Key) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.InpActEvt_Six_K2Node_InputKeyEvent_7");

	struct InpActEvt_Six_K2Node_InputKeyEvent_7_Params {
		struct Unknown Key;
	}; InpActEvt_Six_K2Node_InputKeyEvent_7_Params Params;

	Params.Key = Key;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.InpActEvt_RightBracket_K2Node_InputKeyEvent_6
inline void AB::InpActEvt_RightBracket_K2Node_InputKeyEvent_6(struct Unknown Key) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.InpActEvt_RightBracket_K2Node_InputKeyEvent_6");

	struct InpActEvt_RightBracket_K2Node_InputKeyEvent_6_Params {
		struct Unknown Key;
	}; InpActEvt_RightBracket_K2Node_InputKeyEvent_6_Params Params;

	Params.Key = Key;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.InpActEvt_LeftBracket_K2Node_InputKeyEvent_5
inline void AB::InpActEvt_LeftBracket_K2Node_InputKeyEvent_5(struct Unknown Key) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.InpActEvt_LeftBracket_K2Node_InputKeyEvent_5");

	struct InpActEvt_LeftBracket_K2Node_InputKeyEvent_5_Params {
		struct Unknown Key;
	}; InpActEvt_LeftBracket_K2Node_InputKeyEvent_5_Params Params;

	Params.Key = Key;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.InpActEvt_Divide_K2Node_InputKeyEvent_4
inline void AB::InpActEvt_Divide_K2Node_InputKeyEvent_4(struct Unknown Key) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.InpActEvt_Divide_K2Node_InputKeyEvent_4");

	struct InpActEvt_Divide_K2Node_InputKeyEvent_4_Params {
		struct Unknown Key;
	}; InpActEvt_Divide_K2Node_InputKeyEvent_4_Params Params;

	Params.Key = Key;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.InpActEvt_Hyphen_K2Node_InputKeyEvent_3
inline void AB::InpActEvt_Hyphen_K2Node_InputKeyEvent_3(struct Unknown Key) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.InpActEvt_Hyphen_K2Node_InputKeyEvent_3");

	struct InpActEvt_Hyphen_K2Node_InputKeyEvent_3_Params {
		struct Unknown Key;
	}; InpActEvt_Hyphen_K2Node_InputKeyEvent_3_Params Params;

	Params.Key = Key;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.InpActEvt_Ctrl_2
inline void AB::InpActEvt_Ctrl_2(struct Unknown Key) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.InpActEvt_Ctrl_2");

	struct InpActEvt_Ctrl_2_Params {
		struct Unknown Key;
	}; InpActEvt_Ctrl_2_Params Params;

	Params.Key = Key;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.InpActEvt_Semicolon_K2Node_InputKeyEvent_1
inline void AB::InpActEvt_Semicolon_K2Node_InputKeyEvent_1(struct Unknown Key) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.InpActEvt_Semicolon_K2Node_InputKeyEvent_1");

	struct InpActEvt_Semicolon_K2Node_InputKeyEvent_1_Params {
		struct Unknown Key;
	}; InpActEvt_Semicolon_K2Node_InputKeyEvent_1_Params Params;

	Params.Key = Key;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.K2_EnterSceneOfWin
inline void AB::K2_EnterSceneOfWin() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.K2_EnterSceneOfWin");

	struct K2_EnterSceneOfWin_Params {
		
	}; K2_EnterSceneOfWin_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.ReadyTeleport
inline void AB::ReadyTeleport() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ReadyTeleport");

	struct ReadyTeleport_Params {
		
	}; ReadyTeleport_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.ServerPlayTeleportEffect
inline void AB::ServerPlayTeleportEffect() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ServerPlayTeleportEffect");

	struct ServerPlayTeleportEffect_Params {
		
	}; ServerPlayTeleportEffect_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.MultiPlayTeleportEffect
inline void AB::MultiPlayTeleportEffect() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.MultiPlayTeleportEffect");

	struct MultiPlayTeleportEffect_Params {
		
	}; MultiPlayTeleportEffect_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.PlayTeleportEffect
inline void AB::PlayTeleportEffect() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.PlayTeleportEffect");

	struct PlayTeleportEffect_Params {
		
	}; PlayTeleportEffect_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.DoTeleportEffect
inline void AB::DoTeleportEffect() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.DoTeleportEffect");

	struct DoTeleportEffect_Params {
		
	}; DoTeleportEffect_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.ServerCrazyJump
inline void AB::ServerCrazyJump() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ServerCrazyJump");

	struct ServerCrazyJump_Params {
		
	}; ServerCrazyJump_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.ServerResetCrazyJump
inline void AB::ServerResetCrazyJump() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ServerResetCrazyJump");

	struct ServerResetCrazyJump_Params {
		
	}; ServerResetCrazyJump_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.K2_OnGoParachute
inline void AB::K2_OnGoParachute() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.K2_OnGoParachute");

	struct K2_OnGoParachute_Params {
		
	}; K2_OnGoParachute_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.ServerLaunch
inline void AB::ServerLaunch(struct Unknown LaunchVelocity) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ServerLaunch");

	struct ServerLaunch_Params {
		struct Unknown LaunchVelocity;
	}; ServerLaunch_Params Params;

	Params.LaunchVelocity = LaunchVelocity;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.K2_Cheat_ToggleCharacterDebugCamera
inline void AB::K2_Cheat_ToggleCharacterDebugCamera() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.K2_Cheat_ToggleCharacterDebugCamera");

	struct K2_Cheat_ToggleCharacterDebugCamera_Params {
		
	}; K2_Cheat_ToggleCharacterDebugCamera_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.K2_FPSK_OnStartADS
inline void AB::K2_FPSK_OnStartADS() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.K2_FPSK_OnStartADS");

	struct K2_FPSK_OnStartADS_Params {
		
	}; K2_FPSK_OnStartADS_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.K2_FPSK_OnEndADS
inline void AB::K2_FPSK_OnEndADS() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.K2_FPSK_OnEndADS");

	struct K2_FPSK_OnEndADS_Params {
		
	}; K2_FPSK_OnEndADS_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.SwitchMovementModeEvent
inline void AB::SwitchMovementModeEvent(char MovementMode, enum class Unknow CustomMovementMode) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.SwitchMovementModeEvent");

	struct SwitchMovementModeEvent_Params {
		char MovementMode;
		enum class Unknow CustomMovementMode;
	}; SwitchMovementModeEvent_Params Params;

	Params.MovementMode = MovementMode;
	Params.CustomMovementMode = CustomMovementMode;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.ServerSwitchMovementModeEvent
inline void AB::ServerSwitchMovementModeEvent(char MovementMode, enum class Unknow CustomMovementMode) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ServerSwitchMovementModeEvent");

	struct ServerSwitchMovementModeEvent_Params {
		char MovementMode;
		enum class Unknow CustomMovementMode;
	}; ServerSwitchMovementModeEvent_Params Params;

	Params.MovementMode = MovementMode;
	Params.CustomMovementMode = CustomMovementMode;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.MulticastSwitchMovementMode
inline void AB::MulticastSwitchMovementMode(char MovementMode, enum class Unknow CustomMovementMode) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.MulticastSwitchMovementMode");

	struct MulticastSwitchMovementMode_Params {
		char MovementMode;
		enum class Unknow CustomMovementMode;
	}; MulticastSwitchMovementMode_Params Params;

	Params.MovementMode = MovementMode;
	Params.CustomMovementMode = CustomMovementMode;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.DoPlayDynamicMontage
inline void AB::DoPlayDynamicMontage(struct Unknown AnimSequence, struct FName SlotName, float PlayRate) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.DoPlayDynamicMontage");

	struct DoPlayDynamicMontage_Params {
		struct Unknown AnimSequence;
		struct FName SlotName;
		float PlayRate;
	}; DoPlayDynamicMontage_Params Params;

	Params.AnimSequence = AnimSequence;
	Params.SlotName = SlotName;
	Params.PlayRate = PlayRate;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.ServerPlayDynamicMontage
inline void AB::ServerPlayDynamicMontage(struct Unknown AnimSequence, struct FName SlotName, float PlayRate) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ServerPlayDynamicMontage");

	struct ServerPlayDynamicMontage_Params {
		struct Unknown AnimSequence;
		struct FName SlotName;
		float PlayRate;
	}; ServerPlayDynamicMontage_Params Params;

	Params.AnimSequence = AnimSequence;
	Params.SlotName = SlotName;
	Params.PlayRate = PlayRate;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.MulticastPlayDynamicMontage
inline void AB::MulticastPlayDynamicMontage(struct Unknown AnimSequence, struct FName SlotName, float PlayRate) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.MulticastPlayDynamicMontage");

	struct MulticastPlayDynamicMontage_Params {
		struct Unknown AnimSequence;
		struct FName SlotName;
		float PlayRate;
	}; MulticastPlayDynamicMontage_Params Params;

	Params.AnimSequence = AnimSequence;
	Params.SlotName = SlotName;
	Params.PlayRate = PlayRate;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.ReceiveBeginPlay
inline void AB::ReceiveBeginPlay() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ReceiveBeginPlay");

	struct ReceiveBeginPlay_Params {
		
	}; ReceiveBeginPlay_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.OnLanded
inline void AB::OnLanded(struct Unknown& Hit) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.OnLanded");

	struct OnLanded_Params {
		struct Unknown& Hit;
	}; OnLanded_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Hit = Params.Hit;

}

// Function B.B.ReceiveDestroyed
inline void AB::ReceiveDestroyed() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ReceiveDestroyed");

	struct ReceiveDestroyed_Params {
		
	}; ReceiveDestroyed_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.InitRecordingCharacter
inline void AB::InitRecordingCharacter() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.InitRecordingCharacter");

	struct InitRecordingCharacter_Params {
		
	}; InitRecordingCharacter_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.SetVisibleOutBlueZoneBlizzard
inline void AB::SetVisibleOutBlueZoneBlizzard(char Visible) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.SetVisibleOutBlueZoneBlizzard");

	struct SetVisibleOutBlueZoneBlizzard_Params {
		char Visible;
	}; SetVisibleOutBlueZoneBlizzard_Params Params;

	Params.Visible = Visible;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.K2_UpdateMutable_PreviewPawn
inline void AB::K2_UpdateMutable_PreviewPawn(char bChangeGender) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.K2_UpdateMutable_PreviewPawn");

	struct K2_UpdateMutable_PreviewPawn_Params {
		char bChangeGender;
	}; K2_UpdateMutable_PreviewPawn_Params Params;

	Params.bChangeGender = bChangeGender;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.OnDeath
inline void AB::OnDeath() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.OnDeath");

	struct OnDeath_Params {
		
	}; OnDeath_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.AddCharacterRotation
inline void AB::AddCharacterRotation(float Val) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.AddCharacterRotation");

	struct AddCharacterRotation_Params {
		float Val;
	}; AddCharacterRotation_Params Params;

	Params.Val = Val;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.SetRecordingCharacterTickRate
inline void AB::SetRecordingCharacterTickRate(float TickRate) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.SetRecordingCharacterTickRate");

	struct SetRecordingCharacterTickRate_Params {
		float TickRate;
	}; SetRecordingCharacterTickRate_Params Params;

	Params.TickRate = TickRate;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.Spawn
inline void AB::Spawn() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.Spawn");

	struct Spawn_Params {
		
	}; Spawn_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.ExecuteUbergraph_B
inline void AB::ExecuteUbergraph_B(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ExecuteUbergraph_B");

	struct ExecuteUbergraph_B_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_B_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.ReceiveBeginPlay
inline void AB::ReceiveBeginPlay() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ReceiveBeginPlay");

	struct ReceiveBeginPlay_Params {
		
	}; ReceiveBeginPlay_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.ExecuteUbergraph_B
inline void AB::ExecuteUbergraph_B(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ExecuteUbergraph_B");

	struct ExecuteUbergraph_B_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_B_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.ReceiveTick
inline void AB::ReceiveTick(float DeltaSeconds) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ReceiveTick");

	struct ReceiveTick_Params {
		float DeltaSeconds;
	}; ReceiveTick_Params Params;

	Params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.SetTarget
inline void AB::SetTarget(struct Unknown TargetCharacter, float HeartBeatSensorLength) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.SetTarget");

	struct SetTarget_Params {
		struct Unknown TargetCharacter;
		float HeartBeatSensorLength;
	}; SetTarget_Params Params;

	Params.TargetCharacter = TargetCharacter;
	Params.HeartBeatSensorLength = HeartBeatSensorLength;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.
inline void AB::(float DeltaSeconds, struct Unknown OldLocation, struct Unknown OldVelocity) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.");

	struct _Params {
		float DeltaSeconds;
		struct Unknown OldLocation;
		struct Unknown OldVelocity;
	}; _Params Params;

	Params.DeltaSeconds = DeltaSeconds;
	Params.OldLocation = OldLocation;
	Params.OldVelocity = OldVelocity;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.ExecuteUbergraph_B
inline void AB::ExecuteUbergraph_B(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ExecuteUbergraph_B");

	struct ExecuteUbergraph_B_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_B_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.
inline void AB::(float DeltaSeconds, struct Unknown OldLocation, struct Unknown OldVelocity) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.");

	struct _Params {
		float DeltaSeconds;
		struct Unknown OldLocation;
		struct Unknown OldVelocity;
	}; _Params Params;

	Params.DeltaSeconds = DeltaSeconds;
	Params.OldLocation = OldLocation;
	Params.OldVelocity = OldVelocity;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.
inline void AB::(enum class Unknow State) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.");

	struct _Params {
		enum class Unknow State;
	}; _Params Params;

	Params.State = State;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.ReceiveTick
inline void AB::ReceiveTick(float DeltaSeconds) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ReceiveTick");

	struct ReceiveTick_Params {
		float DeltaSeconds;
	}; ReceiveTick_Params Params;

	Params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.SetTarget
inline void AB::SetTarget(struct Unknown TargetCharacter, float AmplifierLength) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.SetTarget");

	struct SetTarget_Params {
		struct Unknown TargetCharacter;
		float AmplifierLength;
	}; SetTarget_Params Params;

	Params.TargetCharacter = TargetCharacter;
	Params.AmplifierLength = AmplifierLength;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.CharacterMovementEv
inline void AB::CharacterMovementEv(float DeltaSeconds, struct Unknown OldLocation, struct Unknown OldVelocity) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.CharacterMovementEv");

	struct CharacterMovementEv_Params {
		float DeltaSeconds;
		struct Unknown OldLocation;
		struct Unknown OldVelocity;
	}; CharacterMovementEv_Params Params;

	Params.DeltaSeconds = DeltaSeconds;
	Params.OldLocation = OldLocation;
	Params.OldVelocity = OldVelocity;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.OnStartSimulateFire
inline void AB::OnStartSimulateFire() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.OnStartSimulateFire");

	struct OnStartSimulateFire_Params {
		
	}; OnStartSimulateFire_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.SingleStopEvent
inline void AB::SingleStopEvent() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.SingleStopEvent");

	struct SingleStopEvent_Params {
		
	}; SingleStopEvent_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.ExecuteUbergraph_B
inline void AB::ExecuteUbergraph_B(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ExecuteUbergraph_B");

	struct ExecuteUbergraph_B_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_B_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.GetDebugInfo
inline struct Unknown AB::GetDebugInfo() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.GetDebugInfo");

	struct GetDebugInfo_Params {
		
		struct Unknown ReturnValue;

	}; GetDebugInfo_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function B.B.CheckNeedDrawing
inline void AB::CheckNeedDrawing(char& Need) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.CheckNeedDrawing");

	struct CheckNeedDrawing_Params {
		char& Need;
	}; CheckNeedDrawing_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Need = Params.Need;

}

// Function B.B.IsReplayTarget
inline void AB::IsReplayTarget(char& IsReplayTarget) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.IsReplayTarget");

	struct IsReplayTarget_Params {
		char& IsReplayTarget;
	}; IsReplayTarget_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	IsReplayTarget = Params.IsReplayTarget;

}

// Function B.B.GetProjectileLocationAndVelocity
inline void AB::GetProjectileLocationAndVelocity(int32_t Index, struct Unknown& Location, struct Unknown& Velocity) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.GetProjectileLocationAndVelocity");

	struct GetProjectileLocationAndVelocity_Params {
		int32_t Index;
		struct Unknown& Location;
		struct Unknown& Velocity;
	}; GetProjectileLocationAndVelocity_Params Params;

	Params.Index = Index;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Location = Params.Location;
	Velocity = Params.Velocity;

}

// Function B.B.ThrowingAction
inline void AB::ThrowingAction(enum class Unknow ThrowingWeaponState, char Condition) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ThrowingAction");

	struct ThrowingAction_Params {
		enum class Unknow ThrowingWeaponState;
		char Condition;
	}; ThrowingAction_Params Params;

	Params.ThrowingWeaponState = ThrowingWeaponState;
	Params.Condition = Condition;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.Add
inline struct Unknown AB::Add() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.Add");

	struct Add_Params {
		
		struct Unknown ReturnValue;

	}; Add_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function B.B.CalcGrenadeWeaponLocationOffset
inline void AB::CalcGrenadeWeaponLocationOffset(struct Unknown Offest) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.CalcGrenadeWeaponLocationOffset");

	struct CalcGrenadeWeaponLocationOffset_Params {
		struct Unknown Offest;
	}; CalcGrenadeWeaponLocationOffset_Params Params;

	Params.Offest = Offest;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.Lerp__FinishedFunc
inline void AB::Lerp__FinishedFunc() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.Lerp__FinishedFunc");

	struct Lerp__FinishedFunc_Params {
		
	}; Lerp__FinishedFunc_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.Lerp__UpdateFunc
inline void AB::Lerp__UpdateFunc() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.Lerp__UpdateFunc");

	struct Lerp__UpdateFunc_Params {
		
	}; Lerp__UpdateFunc_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.Timeline_0__FinishedFunc
inline void AB::Timeline_0__FinishedFunc() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.Timeline_0__FinishedFunc");

	struct Timeline_0__FinishedFunc_Params {
		
	}; Timeline_0__FinishedFunc_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.Timeline_0__UpdateFunc
inline void AB::Timeline_0__UpdateFunc() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.Timeline_0__UpdateFunc");

	struct Timeline_0__UpdateFunc_Params {
		
	}; Timeline_0__UpdateFunc_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.DrawProjectileTrajectory
inline void AB::DrawProjectileTrajectory() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.DrawProjectileTrajectory");

	struct DrawProjectileTrajectory_Params {
		
	}; DrawProjectileTrajectory_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.ReceiveDestroyed
inline void AB::ReceiveDestroyed() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ReceiveDestroyed");

	struct ReceiveDestroyed_Params {
		
	}; ReceiveDestroyed_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.OnChangeThrowingWeaponStateDelegate_Event
inline void AB::OnChangeThrowingWeaponStateDelegate_Event(enum class Unknow ThrowingWeaponState) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.OnChangeThrowingWeaponStateDelegate_Event");

	struct OnChangeThrowingWeaponStateDelegate_Event_Params {
		enum class Unknow ThrowingWeaponState;
	}; OnChangeThrowingWeaponStateDelegate_Event_Params Params;

	Params.ThrowingWeaponState = ThrowingWeaponState;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.OnChangeThrowingTypeDelegate_Event
inline void AB::OnChangeThrowingTypeDelegate_Event(enum class Unknow ThrowingType) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.OnChangeThrowingTypeDelegate_Event");

	struct OnChangeThrowingTypeDelegate_Event_Params {
		enum class Unknow ThrowingType;
	}; OnChangeThrowingTypeDelegate_Event_Params Params;

	Params.ThrowingType = ThrowingType;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.DrawProjectileTrajectory_Chang
inline void AB::DrawProjectileTrajectory_Chang() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.DrawProjectileTrajectory_Chang");

	struct DrawProjectileTrajectory_Chang_Params {
		
	}; DrawProjectileTrajectory_Chang_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.OnCharacterGroundStateChangeDelegate
inline void AB::OnCharacterGroundStateChangeDelegate(enum class Unknow State) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.OnCharacterGroundStateChangeDelegate");

	struct OnCharacterGroundStateChangeDelegate_Params {
		enum class Unknow State;
	}; OnCharacterGroundStateChangeDelegate_Params Params;

	Params.State = State;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.InitProjectileTrajectory
inline void AB::InitProjectileTrajectory() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.InitProjectileTrajectory");

	struct InitProjectileTrajectory_Params {
		
	}; InitProjectileTrajectory_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.OnFire
inline void AB::OnFire() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.OnFire");

	struct OnFire_Params {
		
	}; OnFire_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.ForceUpdateProjectileTrajectory
inline void AB::ForceUpdateProjectileTrajectory() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ForceUpdateProjectileTrajectory");

	struct ForceUpdateProjectileTrajectory_Params {
		
	}; ForceUpdateProjectileTrajectory_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.OnChangedReplayViewMode_2
inline void AB::OnChangedReplayViewMode_2(char IsPlayer) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.OnChangedReplayViewMode_2");

	struct OnChangedReplayViewMode_2_Params {
		char IsPlayer;
	}; OnChangedReplayViewMode_2_Params Params;

	Params.IsPlayer = IsPlayer;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.K2_OnOwnerBecomeViewTarget
inline void AB::K2_OnOwnerBecomeViewTarget() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.K2_OnOwnerBecomeViewTarget");

	struct K2_OnOwnerBecomeViewTarget_Params {
		
	}; K2_OnOwnerBecomeViewTarget_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.K2_OnOwnerEndViewTarget
inline void AB::K2_OnOwnerEndViewTarget() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.K2_OnOwnerEndViewTarget");

	struct K2_OnOwnerEndViewTarget_Params {
		
	}; K2_OnOwnerEndViewTarget_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.ReceiveEndPlay
inline void AB::ReceiveEndPlay(char EndPlayReason) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ReceiveEndPlay");

	struct ReceiveEndPlay_Params {
		char EndPlayReason;
	}; ReceiveEndPlay_Params Params;

	Params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.ExecuteUbergraph_B
inline void AB::ExecuteUbergraph_B(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ExecuteUbergraph_B");

	struct ExecuteUbergraph_B_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_B_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.HideExitPopup
inline void UB::HideExitPopup() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.HideExitPopup");

	struct HideExitPopup_Params {
		
	}; HideExitPopup_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.Login
inline void UB::Login() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.Login");

	struct Login_Params {
		
	}; Login_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.ValidateUserName
inline void UB::ValidateUserName(struct FText InputUserName, char& Ret, struct FName& UserName) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ValidateUserName");

	struct ValidateUserName_Params {
		struct FText InputUserName;
		char& Ret;
		struct FName& UserName;
	}; ValidateUserName_Params Params;

	Params.InputUserName = InputUserName;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Ret = Params.Ret;
	UserName = Params.UserName;

}

// Function B.B.Construct
inline void UB::Construct() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.Construct");

	struct Construct_Params {
		
	}; Construct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.OnLogin
inline void UB::OnLogin() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.OnLogin");

	struct OnLogin_Params {
		
	}; OnLogin_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.ShowMouseCursor
inline void UB::ShowMouseCursor() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ShowMouseCursor");

	struct ShowMouseCursor_Params {
		
	}; ShowMouseCursor_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.OnLoginSucceeded
inline void UB::OnLoginSucceeded() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.OnLoginSucceeded");

	struct OnLoginSucceeded_Params {
		
	}; OnLoginSucceeded_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.OnLoginFailed
inline void UB::OnLoginFailed(int32_t ErrorIndex, struct FString ErrorID, struct FString Parameters) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.OnLoginFailed");

	struct OnLoginFailed_Params {
		int32_t ErrorIndex;
		struct FString ErrorID;
		struct FString Parameters;
	}; OnLoginFailed_Params Params;

	Params.ErrorIndex = ErrorIndex;
	Params.ErrorID = ErrorID;
	Params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.ExecuteUbergraph_B
inline void UB::ExecuteUbergraph_B(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ExecuteUbergraph_B");

	struct ExecuteUbergraph_B_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_B_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.OnSkipTitle__DelegateSignature
inline void UB::OnSkipTitle__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.OnSkipTitle__DelegateSignature");

	struct OnSkipTitle__DelegateSignature_Params {
		
	}; OnSkipTitle__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.OnSaveUserData__DelegateSignature
inline void UB::OnSaveUserData__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.OnSaveUserData__DelegateSignature");

	struct OnSaveUserData__DelegateSignature_Params {
		
	}; OnSaveUserData__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.OnPlayBGM__DelegateSignature
inline void UB::OnPlayBGM__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.OnPlayBGM__DelegateSignature");

	struct OnPlayBGM__DelegateSignature_Params {
		
	}; OnPlayBGM__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.OnMoveLobby__DelegateSignature
inline void UB::OnMoveLobby__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.OnMoveLobby__DelegateSignature");

	struct OnMoveLobby__DelegateSignature_Params {
		
	}; OnMoveLobby__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.OnTriedToTestLogin__DelegateSignature
inline void UB::OnTriedToTestLogin__DelegateSignature(struct FName UserName, struct FString TestIP) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.OnTriedToTestLogin__DelegateSignature");

	struct OnTriedToTestLogin__DelegateSignature_Params {
		struct FName UserName;
		struct FString TestIP;
	}; OnTriedToTestLogin__DelegateSignature_Params Params;

	Params.UserName = UserName;
	Params.TestIP = TestIP;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.OnTriedToLogin__DelegateSignature
inline void UB::OnTriedToLogin__DelegateSignature(struct FName UserName, struct FString Password) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.OnTriedToLogin__DelegateSignature");

	struct OnTriedToLogin__DelegateSignature_Params {
		struct FName UserName;
		struct FString Password;
	}; OnTriedToLogin__DelegateSignature_Params Params;

	Params.UserName = UserName;
	Params.Password = Password;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.EventDispatcher_StopLobbySound__DelegateSignature
inline void AB::EventDispatcher_StopLobbySound__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.EventDispatcher_StopLobbySound__DelegateSignature");

	struct EventDispatcher_StopLobbySound__DelegateSignature_Params {
		
	}; EventDispatcher_StopLobbySound__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.EventDispatcher_PlayLobbySound__DelegateSignature
inline void AB::EventDispatcher_PlayLobbySound__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.EventDispatcher_PlayLobbySound__DelegateSignature");

	struct EventDispatcher_PlayLobbySound__DelegateSignature_Params {
		
	}; EventDispatcher_PlayLobbySound__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.ReceiveBeginPlay
inline void AB::ReceiveBeginPlay() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ReceiveBeginPlay");

	struct ReceiveBeginPlay_Params {
		
	}; ReceiveBeginPlay_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.OnEquipWeapon
inline void AB::OnEquipWeapon() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.OnEquipWeapon");

	struct OnEquipWeapon_Params {
		
	}; OnEquipWeapon_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.InitCustomizableObjectInstance
inline void AB::InitCustomizableObjectInstance() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.InitCustomizableObjectInstance");

	struct InitCustomizableObjectInstance_Params {
		
	}; InitCustomizableObjectInstance_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.ExecuteUbergraph_B
inline void AB::ExecuteUbergraph_B(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ExecuteUbergraph_B");

	struct ExecuteUbergraph_B_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_B_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.ReceiveBeginPlay
inline void AB::ReceiveBeginPlay() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ReceiveBeginPlay");

	struct ReceiveBeginPlay_Params {
		
	}; ReceiveBeginPlay_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.ExecuteUbergraph_B
inline void AB::ExecuteUbergraph_B(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ExecuteUbergraph_B");

	struct ExecuteUbergraph_B_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_B_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.OnRep_IsDestructedBeforeGameStart
inline void UB::OnRep_IsDestructedBeforeGameStart() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.OnRep_IsDestructedBeforeGameStart");

	struct OnRep_IsDestructedBeforeGameStart_Params {
		
	}; OnRep_IsDestructedBeforeGameStart_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.Destruct
inline void UB::Destruct(float Damage, struct Unknown HitLocation, struct Unknown ImpactDirection, struct Unknown& DM) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.Destruct");

	struct Destruct_Params {
		float Damage;
		struct Unknown HitLocation;
		struct Unknown ImpactDirection;
		struct Unknown& DM;
	}; Destruct_Params Params;

	Params.Damage = Damage;
	Params.HitLocation = HitLocation;
	Params.ImpactDirection = ImpactDirection;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	DM = Params.DM;

}

// Function B.B.ReceiveBeginPlay
inline void UB::ReceiveBeginPlay() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ReceiveBeginPlay");

	struct ReceiveBeginPlay_Params {
		
	}; ReceiveBeginPlay_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.K2_OnDestructComponent
inline void UB::K2_OnDestructComponent(float DamageAmount, struct Unknown& HitInfo, struct Unknown EventInstigator, struct Unknown DamageCauser, struct Unknown& ShotInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.K2_OnDestructComponent");

	struct K2_OnDestructComponent_Params {
		float DamageAmount;
		struct Unknown& HitInfo;
		struct Unknown EventInstigator;
		struct Unknown DamageCauser;
		struct Unknown& ShotInfo;
	}; K2_OnDestructComponent_Params Params;

	Params.DamageAmount = DamageAmount;
	Params.EventInstigator = EventInstigator;
	Params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	HitInfo = Params.HitInfo;
	ShotInfo = Params.ShotInfo;

}

// Function B.B.SetLifeSpan
inline void UB::SetLifeSpan(float LifeSpan) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.SetLifeSpan");

	struct SetLifeSpan_Params {
		float LifeSpan;
	}; SetLifeSpan_Params Params;

	Params.LifeSpan = LifeSpan;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.SetCollisionEnableWithDelay
inline void UB::SetCollisionEnableWithDelay(float DelayTime) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.SetCollisionEnableWithDelay");

	struct SetCollisionEnableWithDelay_Params {
		float DelayTime;
	}; SetCollisionEnableWithDelay_Params Params;

	Params.DelayTime = DelayTime;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.ExecuteUbergraph_B
inline void UB::ExecuteUbergraph_B(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ExecuteUbergraph_B");

	struct ExecuteUbergraph_B_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_B_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.DestructEventDispatcher__Deleg
inline void UB::DestructEventDispatcher__Deleg() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.DestructEventDispatcher__Deleg");

	struct DestructEventDispatcher__Deleg_Params {
		
	}; DestructEventDispatcher__Deleg_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.ReceiveBeginPlay
inline void AB::ReceiveBeginPlay() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ReceiveBeginPlay");

	struct ReceiveBeginPlay_Params {
		
	}; ReceiveBeginPlay_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.ExecuteUbergraph_B
inline void AB::ExecuteUbergraph_B(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ExecuteUbergraph_B");

	struct ExecuteUbergraph_B_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_B_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.UserConstructionScript
inline void AB::UserConstructionScript() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.UserConstructionScript");

	struct UserConstructionScript_Params {
		
	}; UserConstructionScript_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.ActivateEffect
inline void AB::ActivateEffect(struct Unknown Character) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ActivateEffect");

	struct ActivateEffect_Params {
		struct Unknown Character;
	}; ActivateEffect_Params Params;

	Params.Character = Character;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.DeactivateEffect
inline void AB::DeactivateEffect(struct Unknown Character) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.DeactivateEffect");

	struct DeactivateEffect_Params {
		struct Unknown Character;
	}; DeactivateEffect_Params Params;

	Params.Character = Character;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.BPSetAreaSkillInfo
inline void AB::BPSetAreaSkillInfo() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.BPSetAreaSkillInfo");

	struct BPSetAreaSkillInfo_Params {
		
	}; BPSetAreaSkillInfo_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.StartDestroy
inline void AB::StartDestroy() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.StartDestroy");

	struct StartDestroy_Params {
		
	}; StartDestroy_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.ExecuteUbergraph_B
inline void AB::ExecuteUbergraph_B(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ExecuteUbergraph_B");

	struct ExecuteUbergraph_B_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_B_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.ReceiveBeginPlay
inline void AB::ReceiveBeginPlay() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ReceiveBeginPlay");

	struct ReceiveBeginPlay_Params {
		
	}; ReceiveBeginPlay_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.ExecuteUbergraph_B
inline void AB::ExecuteUbergraph_B(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ExecuteUbergraph_B");

	struct ExecuteUbergraph_B_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_B_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.K2_OnEquip
inline void AB::K2_OnEquip() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.K2_OnEquip");

	struct K2_OnEquip_Params {
		
	}; K2_OnEquip_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.K2_OnUnEquip
inline void AB::K2_OnUnEquip() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.K2_OnUnEquip");

	struct K2_OnUnEquip_Params {
		
	}; K2_OnUnEquip_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.ExecuteUbergraph_B
inline void AB::ExecuteUbergraph_B(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ExecuteUbergraph_B");

	struct ExecuteUbergraph_B_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_B_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.ReceiveBeginPlay
inline void AB::ReceiveBeginPlay() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ReceiveBeginPlay");

	struct ReceiveBeginPlay_Params {
		
	}; ReceiveBeginPlay_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.ExecuteUbergraph_B
inline void AB::ExecuteUbergraph_B(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ExecuteUbergraph_B");

	struct ExecuteUbergraph_B_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_B_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.ReceiveUnpossessed
inline void AB::ReceiveUnpossessed(struct Unknown OldController) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ReceiveUnpossessed");

	struct ReceiveUnpossessed_Params {
		struct Unknown OldController;
	}; ReceiveUnpossessed_Params Params;

	Params.OldController = OldController;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.PlayCameraShake_ModeChange
inline void AB::PlayCameraShake_ModeChange() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.PlayCameraShake_ModeChange");

	struct PlayCameraShake_ModeChange_Params {
		
	}; PlayCameraShake_ModeChange_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.OnPlaySplashParticle
inline void AB::OnPlaySplashParticle(char IsToWater) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.OnPlaySplashParticle");

	struct OnPlaySplashParticle_Params {
		char IsToWater;
	}; OnPlaySplashParticle_Params Params;

	Params.IsToWater = IsToWater;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.OnChangedAmphibiousMode
inline void AB::OnChangedAmphibiousMode(char bTrue) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.OnChangedAmphibiousMode");

	struct OnChangedAmphibiousMode_Params {
		char bTrue;
	}; OnChangedAmphibiousMode_Params Params;

	Params.bTrue = bTrue;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.ExecuteUbergraph_B
inline void AB::ExecuteUbergraph_B(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ExecuteUbergraph_B");

	struct ExecuteUbergraph_B_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_B_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.UserConstructionScript
inline void AB::UserConstructionScript() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.UserConstructionScript");

	struct UserConstructionScript_Params {
		
	}; UserConstructionScript_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.GetTopWidget
inline void AB::GetTopWidget(struct Unknown& Top) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.GetTopWidget");

	struct GetTopWidget_Params {
		struct Unknown& Top;
	}; GetTopWidget_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Top = Params.Top;

}

// Function B.B.GetMainWidget
inline void AB::GetMainWidget(struct Unknown& MainWidget) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.GetMainWidget");

	struct GetMainWidget_Params {
		struct Unknown& MainWidget;
	}; GetMainWidget_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	MainWidget = Params.MainWidget;

}

// Function B.B.IsOwnerLocallyControlled
inline void AB::IsOwnerLocallyControlled(char& bIsLocallyControlled) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.IsOwnerLocallyControlled");

	struct IsOwnerLocallyControlled_Params {
		char& bIsLocallyControlled;
	}; IsOwnerLocallyControlled_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	bIsLocallyControlled = Params.bIsLocallyControlled;

}

// Function B.B.BlackColorFunc
inline void AB::BlackColorFunc(char IsEnabled) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.BlackColorFunc");

	struct BlackColorFunc_Params {
		char IsEnabled;
	}; BlackColorFunc_Params Params;

	Params.IsEnabled = IsEnabled;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.Monochrome
inline void AB::Monochrome(char IsEnabled) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.Monochrome");

	struct Monochrome_Params {
		char IsEnabled;
	}; Monochrome_Params Params;

	Params.IsEnabled = IsEnabled;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.Selective
inline void AB::Selective(char IsEnabled) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.Selective");

	struct Selective_Params {
		char IsEnabled;
	}; Selective_Params Params;

	Params.IsEnabled = IsEnabled;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.SetEffectPriority
inline void AB::SetEffectPriority(int32_t Priority, struct Unknown Material) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.SetEffectPriority");

	struct SetEffectPriority_Params {
		int32_t Priority;
		struct Unknown Material;
	}; SetEffectPriority_Params Params;

	Params.Priority = Priority;
	Params.Material = Material;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.SetAdvancedEffectFeatures
inline void AB::SetAdvancedEffectFeatures(struct Unknown Features, struct Unknown Material, struct Unknown Dynamic) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.SetAdvancedEffectFeatures");

	struct SetAdvancedEffectFeatures_Params {
		struct Unknown Features;
		struct Unknown Material;
		struct Unknown Dynamic;
	}; SetAdvancedEffectFeatures_Params Params;

	Params.Features = Features;
	Params.Material = Material;
	Params.Dynamic = Dynamic;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.Radial
inline void AB::Radial(char IsEnabled) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.Radial");

	struct Radial_Params {
		char IsEnabled;
	}; Radial_Params Params;

	Params.IsEnabled = IsEnabled;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.CreateEffectMaterialInstance
inline void AB::CreateEffectMaterialInstance(struct Unknown Material, struct Unknown& Instance) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.CreateEffectMaterialInstance");

	struct CreateEffectMaterialInstance_Params {
		struct Unknown Material;
		struct Unknown& Instance;
	}; CreateEffectMaterialInstance_Params Params;

	Params.Material = Material;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Instance = Params.Instance;

}

// Function B.B.ScreenEffectEvent
inline void AB::ScreenEffectEvent(char RadialBlur, char BlackColor) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ScreenEffectEvent");

	struct ScreenEffectEvent_Params {
		char RadialBlur;
		char BlackColor;
	}; ScreenEffectEvent_Params Params;

	Params.RadialBlur = RadialBlur;
	Params.BlackColor = BlackColor;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.ReceiveTick
inline void AB::ReceiveTick(float DeltaSeconds) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ReceiveTick");

	struct ReceiveTick_Params {
		float DeltaSeconds;
	}; ReceiveTick_Params Params;

	Params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.ReceiveBeginPlay
inline void AB::ReceiveBeginPlay() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ReceiveBeginPlay");

	struct ReceiveBeginPlay_Params {
		
	}; ReceiveBeginPlay_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.OnPostEventAtLocationEvent
inline void AB::OnPostEventAtLocationEvent(struct FString EventKey, struct Unknown& Location) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.OnPostEventAtLocationEvent");

	struct OnPostEventAtLocationEvent_Params {
		struct FString EventKey;
		struct Unknown& Location;
	}; OnPostEventAtLocationEvent_Params Params;

	Params.EventKey = EventKey;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Location = Params.Location;

}

// Function B.B.AddActiveEvent
inline void AB::AddActiveEvent() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.AddActiveEvent");

	struct AddActiveEvent_Params {
		
	}; AddActiveEvent_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.K2_OnEquip
inline void AB::K2_OnEquip() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.K2_OnEquip");

	struct K2_OnEquip_Params {
		
	}; K2_OnEquip_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.ReceiveDestroyed
inline void AB::ReceiveDestroyed() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ReceiveDestroyed");

	struct ReceiveDestroyed_Params {
		
	}; ReceiveDestroyed_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.K2_OnUnEquip
inline void AB::K2_OnUnEquip() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.K2_OnUnEquip");

	struct K2_OnUnEquip_Params {
		
	}; K2_OnUnEquip_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.OnClickedHeartBeatSensor
inline void AB::OnClickedHeartBeatSensor() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.OnClickedHeartBeatSensor");

	struct OnClickedHeartBeatSensor_Params {
		
	}; OnClickedHeartBeatSensor_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.OnActiveHeartBeatSensor
inline void AB::OnActiveHeartBeatSensor() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.OnActiveHeartBeatSensor");

	struct OnActiveHeartBeatSensor_Params {
		
	}; OnActiveHeartBeatSensor_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.OnDeactiveHeartBeatSensor
inline void AB::OnDeactiveHeartBeatSensor() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.OnDeactiveHeartBeatSensor");

	struct OnDeactiveHeartBeatSensor_Params {
		
	}; OnDeactiveHeartBeatSensor_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.ExecuteUbergraph_B
inline void AB::ExecuteUbergraph_B(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ExecuteUbergraph_B");

	struct ExecuteUbergraph_B_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_B_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.ReceiveBeginPlay
inline void AB::ReceiveBeginPlay() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ReceiveBeginPlay");

	struct ReceiveBeginPlay_Params {
		
	}; ReceiveBeginPlay_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.ExecuteUbergraph_B
inline void AB::ExecuteUbergraph_B(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ExecuteUbergraph_B");

	struct ExecuteUbergraph_B_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_B_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.ReceiveBeginPlay
inline void AB::ReceiveBeginPlay() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ReceiveBeginPlay");

	struct ReceiveBeginPlay_Params {
		
	}; ReceiveBeginPlay_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.ExecuteUbergraph_B
inline void AB::ExecuteUbergraph_B(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ExecuteUbergraph_B");

	struct ExecuteUbergraph_B_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_B_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.UserConstructionScript
inline void AB::UserConstructionScript() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.UserConstructionScript");

	struct UserConstructionScript_Params {
		
	}; UserConstructionScript_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.K2_OnEquip
inline void AB::K2_OnEquip() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.K2_OnEquip");

	struct K2_OnEquip_Params {
		
	}; K2_OnEquip_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.K2_OnUnEquip
inline void AB::K2_OnUnEquip() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.K2_OnUnEquip");

	struct K2_OnUnEquip_Params {
		
	}; K2_OnUnEquip_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.ExecuteUbergraph_B
inline void AB::ExecuteUbergraph_B(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ExecuteUbergraph_B");

	struct ExecuteUbergraph_B_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_B_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.ActiveThrowingProjectileMainEffect
inline void AB::ActiveThrowingProjectileMainEffect() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ActiveThrowingProjectileMainEffect");

	struct ActiveThrowingProjectileMainEffect_Params {
		
	}; ActiveThrowingProjectileMainEffect_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.ExecuteUbergraph_B
inline void AB::ExecuteUbergraph_B(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ExecuteUbergraph_B");

	struct ExecuteUbergraph_B_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_B_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.ReceiveBeginPlay
inline void AB::ReceiveBeginPlay() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ReceiveBeginPlay");

	struct ReceiveBeginPlay_Params {
		
	}; ReceiveBeginPlay_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.ExecuteUbergraph_B
inline void AB::ExecuteUbergraph_B(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ExecuteUbergraph_B");

	struct ExecuteUbergraph_B_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_B_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.OpacityTime__FinishedFunc
inline void AB::OpacityTime__FinishedFunc() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.OpacityTime__FinishedFunc");

	struct OpacityTime__FinishedFunc_Params {
		
	}; OpacityTime__FinishedFunc_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.OpacityTime__UpdateFunc
inline void AB::OpacityTime__UpdateFunc() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.OpacityTime__UpdateFunc");

	struct OpacityTime__UpdateFunc_Params {
		
	}; OpacityTime__UpdateFunc_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.ReceiveBeginPlay
inline void AB::ReceiveBeginPlay() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ReceiveBeginPlay");

	struct ReceiveBeginPlay_Params {
		
	}; ReceiveBeginPlay_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.ExecuteUbergraph_B
inline void AB::ExecuteUbergraph_B(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ExecuteUbergraph_B");

	struct ExecuteUbergraph_B_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_B_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.ReceiveTick
inline void AB::ReceiveTick(float DeltaSeconds) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ReceiveTick");

	struct ReceiveTick_Params {
		float DeltaSeconds;
	}; ReceiveTick_Params Params;

	Params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.OnPlaySplashParticle
inline void AB::OnPlaySplashParticle(char IsToWater) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.OnPlaySplashParticle");

	struct OnPlaySplashParticle_Params {
		char IsToWater;
	}; OnPlaySplashParticle_Params Params;

	Params.IsToWater = IsToWater;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.RemoveAllWaterParticle
inline void AB::RemoveAllWaterParticle() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.RemoveAllWaterParticle");

	struct RemoveAllWaterParticle_Params {
		
	}; RemoveAllWaterParticle_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.AdjustWaterParticle
inline void AB::AdjustWaterParticle() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.AdjustWaterParticle");

	struct AdjustWaterParticle_Params {
		
	}; AdjustWaterParticle_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.ExecuteUbergraph_B
inline void AB::ExecuteUbergraph_B(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ExecuteUbergraph_B");

	struct ExecuteUbergraph_B_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_B_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.ReceiveTick
inline void AB::ReceiveTick(float DeltaSeconds) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ReceiveTick");

	struct ReceiveTick_Params {
		float DeltaSeconds;
	}; ReceiveTick_Params Params;

	Params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.ReceiveBeginPlay
inline void AB::ReceiveBeginPlay() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ReceiveBeginPlay");

	struct ReceiveBeginPlay_Params {
		
	}; ReceiveBeginPlay_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.ExecuteUbergraph_B
inline void AB::ExecuteUbergraph_B(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ExecuteUbergraph_B");

	struct ExecuteUbergraph_B_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_B_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.CheckLastHitActor
inline void AB::CheckLastHitActor() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.CheckLastHitActor");

	struct CheckLastHitActor_Params {
		
	}; CheckLastHitActor_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.IsLandscape
inline void AB::IsLandscape(char& IsLandscape) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.IsLandscape");

	struct IsLandscape_Params {
		char& IsLandscape;
	}; IsLandscape_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	IsLandscape = Params.IsLandscape;

}

// Function B.B.ReceiveHit
inline void AB::ReceiveHit(struct Unknown MyComp, struct Unknown Other, struct Unknown OtherComp, char bSelfMoved, struct Unknown HitLocation, struct Unknown HitNormal, struct Unknown NormalImpulse, struct Unknown& Hit) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ReceiveHit");

	struct ReceiveHit_Params {
		struct Unknown MyComp;
		struct Unknown Other;
		struct Unknown OtherComp;
		char bSelfMoved;
		struct Unknown HitLocation;
		struct Unknown HitNormal;
		struct Unknown NormalImpulse;
		struct Unknown& Hit;
	}; ReceiveHit_Params Params;

	Params.MyComp = MyComp;
	Params.Other = Other;
	Params.OtherComp = OtherComp;
	Params.bSelfMoved = bSelfMoved;
	Params.HitLocation = HitLocation;
	Params.HitNormal = HitNormal;
	Params.NormalImpulse = NormalImpulse;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Hit = Params.Hit;

}

// Function B.B.CheckAnyHit
inline void AB::CheckAnyHit() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.CheckAnyHit");

	struct CheckAnyHit_Params {
		
	}; CheckAnyHit_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.ResetGate
inline void AB::ResetGate() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ResetGate");

	struct ResetGate_Params {
		
	}; ResetGate_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.ExecuteUbergraph_B
inline void AB::ExecuteUbergraph_B(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ExecuteUbergraph_B");

	struct ExecuteUbergraph_B_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_B_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.ReceiveTick
inline void AB::ReceiveTick(float DeltaSeconds) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ReceiveTick");

	struct ReceiveTick_Params {
		float DeltaSeconds;
	}; ReceiveTick_Params Params;

	Params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.ReceiveBeginPlay
inline void AB::ReceiveBeginPlay() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ReceiveBeginPlay");

	struct ReceiveBeginPlay_Params {
		
	}; ReceiveBeginPlay_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.ExecuteUbergraph_B
inline void AB::ExecuteUbergraph_B(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ExecuteUbergraph_B");

	struct ExecuteUbergraph_B_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_B_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.Stunt
inline void AB::Stunt() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.Stunt");

	struct Stunt_Params {
		
	}; Stunt_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.ServerAddStuntRotation
inline void AB::ServerAddStuntRotation(struct Unknown AdditionalRot) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ServerAddStuntRotation");

	struct ServerAddStuntRotation_Params {
		struct Unknown AdditionalRot;
	}; ServerAddStuntRotation_Params Params;

	Params.AdditionalRot = AdditionalRot;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.StartPitch
inline void AB::StartPitch() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.StartPitch");

	struct StartPitch_Params {
		
	}; StartPitch_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.StopPitch
inline void AB::StopPitch() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.StopPitch");

	struct StopPitch_Params {
		
	}; StopPitch_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.CalcStuntValuePitch
inline void AB::CalcStuntValuePitch() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.CalcStuntValuePitch");

	struct CalcStuntValuePitch_Params {
		
	}; CalcStuntValuePitch_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.CalcStuntValueRoll
inline void AB::CalcStuntValueRoll() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.CalcStuntValueRoll");

	struct CalcStuntValueRoll_Params {
		
	}; CalcStuntValueRoll_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.StartRoll
inline void AB::StartRoll() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.StartRoll");

	struct StartRoll_Params {
		
	}; StartRoll_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.StopRoll
inline void AB::StopRoll() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.StopRoll");

	struct StopRoll_Params {
		
	}; StopRoll_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.ResetStunt
inline void AB::ResetStunt() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ResetStunt");

	struct ResetStunt_Params {
		
	}; ResetStunt_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.StuntSpeedInterp
inline void AB::StuntSpeedInterp() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.StuntSpeedInterp");

	struct StuntSpeedInterp_Params {
		
	}; StuntSpeedInterp_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.ExecuteUbergraph_B
inline void AB::ExecuteUbergraph_B(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ExecuteUbergraph_B");

	struct ExecuteUbergraph_B_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_B_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.UserConstructionScript
inline void AB::UserConstructionScript() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.UserConstructionScript");

	struct UserConstructionScript_Params {
		
	}; UserConstructionScript_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.UserConstructionScript
inline void AB::UserConstructionScript() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.UserConstructionScript");

	struct UserConstructionScript_Params {
		
	}; UserConstructionScript_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.UserConstructionScript
inline void AB::UserConstructionScript() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.UserConstructionScript");

	struct UserConstructionScript_Params {
		
	}; UserConstructionScript_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.UserConstructionScript
inline void AB::UserConstructionScript() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.UserConstructionScript");

	struct UserConstructionScript_Params {
		
	}; UserConstructionScript_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.UserConstructionScript
inline void AB::UserConstructionScript() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.UserConstructionScript");

	struct UserConstructionScript_Params {
		
	}; UserConstructionScript_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.GetTopWidget
inline void AB::GetTopWidget(struct Unknown& Top) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.GetTopWidget");

	struct GetTopWidget_Params {
		struct Unknown& Top;
	}; GetTopWidget_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Top = Params.Top;

}

// Function B.B.GetMainWidget
inline void AB::GetMainWidget(struct Unknown& MainWidget) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.GetMainWidget");

	struct GetMainWidget_Params {
		struct Unknown& MainWidget;
	}; GetMainWidget_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	MainWidget = Params.MainWidget;

}

// Function B.B.IsOwnerLocallyControlled
inline void AB::IsOwnerLocallyControlled(char& bIsLocallyControlled) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.IsOwnerLocallyControlled");

	struct IsOwnerLocallyControlled_Params {
		char& bIsLocallyControlled;
	}; IsOwnerLocallyControlled_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	bIsLocallyControlled = Params.bIsLocallyControlled;

}

// Function B.B.BlackColorFunc
inline void AB::BlackColorFunc(char IsEnabled) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.BlackColorFunc");

	struct BlackColorFunc_Params {
		char IsEnabled;
	}; BlackColorFunc_Params Params;

	Params.IsEnabled = IsEnabled;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.Monochrome
inline void AB::Monochrome(char IsEnabled) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.Monochrome");

	struct Monochrome_Params {
		char IsEnabled;
	}; Monochrome_Params Params;

	Params.IsEnabled = IsEnabled;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.Selective
inline void AB::Selective(char IsEnabled) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.Selective");

	struct Selective_Params {
		char IsEnabled;
	}; Selective_Params Params;

	Params.IsEnabled = IsEnabled;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.SetEffectPriority
inline void AB::SetEffectPriority(int32_t Priority, struct Unknown Material) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.SetEffectPriority");

	struct SetEffectPriority_Params {
		int32_t Priority;
		struct Unknown Material;
	}; SetEffectPriority_Params Params;

	Params.Priority = Priority;
	Params.Material = Material;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.SetAdvancedEffectFeatures
inline void AB::SetAdvancedEffectFeatures(struct Unknown Features, struct Unknown Material, struct Unknown Dynamic) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.SetAdvancedEffectFeatures");

	struct SetAdvancedEffectFeatures_Params {
		struct Unknown Features;
		struct Unknown Material;
		struct Unknown Dynamic;
	}; SetAdvancedEffectFeatures_Params Params;

	Params.Features = Features;
	Params.Material = Material;
	Params.Dynamic = Dynamic;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.Radial
inline void AB::Radial(char IsEnabled) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.Radial");

	struct Radial_Params {
		char IsEnabled;
	}; Radial_Params Params;

	Params.IsEnabled = IsEnabled;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.CreateEffectMaterialInstance
inline void AB::CreateEffectMaterialInstance(struct Unknown Material, struct Unknown& Instance) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.CreateEffectMaterialInstance");

	struct CreateEffectMaterialInstance_Params {
		struct Unknown Material;
		struct Unknown& Instance;
	}; CreateEffectMaterialInstance_Params Params;

	Params.Material = Material;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Instance = Params.Instance;

}

// Function B.B.ScreenEffectEvent
inline void AB::ScreenEffectEvent(char RadialBlur, char BlackColor) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ScreenEffectEvent");

	struct ScreenEffectEvent_Params {
		char RadialBlur;
		char BlackColor;
	}; ScreenEffectEvent_Params Params;

	Params.RadialBlur = RadialBlur;
	Params.BlackColor = BlackColor;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.OnDeactiveAmplifier
inline void AB::OnDeactiveAmplifier() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.OnDeactiveAmplifier");

	struct OnDeactiveAmplifier_Params {
		
	}; OnDeactiveAmplifier_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.OnActiveAmplifier
inline void AB::OnActiveAmplifier() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.OnActiveAmplifier");

	struct OnActiveAmplifier_Params {
		
	}; OnActiveAmplifier_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.ReceiveTick
inline void AB::ReceiveTick(float DeltaSeconds) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ReceiveTick");

	struct ReceiveTick_Params {
		float DeltaSeconds;
	}; ReceiveTick_Params Params;

	Params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.OnPostEventAtLocationEvent
inline void AB::OnPostEventAtLocationEvent(struct FString EventKey, struct Unknown& Location) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.OnPostEventAtLocationEvent");

	struct OnPostEventAtLocationEvent_Params {
		struct FString EventKey;
		struct Unknown& Location;
	}; OnPostEventAtLocationEvent_Params Params;

	Params.EventKey = EventKey;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Location = Params.Location;

}

// Function B.B.ReceiveBeginPlay
inline void AB::ReceiveBeginPlay() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ReceiveBeginPlay");

	struct ReceiveBeginPlay_Params {
		
	}; ReceiveBeginPlay_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.AddActiveEvent
inline void AB::AddActiveEvent() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.AddActiveEvent");

	struct AddActiveEvent_Params {
		
	}; AddActiveEvent_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.OnClickedAmplifier
inline void AB::OnClickedAmplifier() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.OnClickedAmplifier");

	struct OnClickedAmplifier_Params {
		
	}; OnClickedAmplifier_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.K2_OnEquip
inline void AB::K2_OnEquip() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.K2_OnEquip");

	struct K2_OnEquip_Params {
		
	}; K2_OnEquip_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.ReceiveDestroyed
inline void AB::ReceiveDestroyed() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ReceiveDestroyed");

	struct ReceiveDestroyed_Params {
		
	}; ReceiveDestroyed_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.K2_OnUnEquip
inline void AB::K2_OnUnEquip() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.K2_OnUnEquip");

	struct K2_OnUnEquip_Params {
		
	}; K2_OnUnEquip_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.ExecuteUbergraph_B
inline void AB::ExecuteUbergraph_B(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.ExecuteUbergraph_B");

	struct ExecuteUbergraph_B_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_B_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.UserConstructionScript
inline void AB::UserConstructionScript() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.UserConstructionScript");

	struct UserConstructionScript_Params {
		
	}; UserConstructionScript_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.UserConstructionScript
inline void AB::UserConstructionScript() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.UserConstructionScript");

	struct UserConstructionScript_Params {
		
	}; UserConstructionScript_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.UserConstructionScript
inline void AB::UserConstructionScript() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.UserConstructionScript");

	struct UserConstructionScript_Params {
		
	}; UserConstructionScript_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function B.B.UserConstructionScript
inline void AB::UserConstructionScript() {
	static auto fn = UObject::FindObject<UFunction>("Function B.B.UserConstructionScript");

	struct UserConstructionScript_Params {
		
	}; UserConstructionScript_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

