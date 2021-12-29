// BlueprintGeneratedClass BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C
class ABP-BravoHotel-PlayerController_C : public ABravoHotelPlayerController {

public:

	struct Unknown UberGraphFrame; // 0x13D8 (8)
	struct Unknown BP-HUDInteractionComponent; // 0x13E0 (8)
	struct Unknown SmartPingSystemComponent; // 0x13E8 (8)
	struct Unknown MapSize; // 0x13F0 (12)
	char IsInWidget : 0; // 0x13FC (1)
	struct TArray<Unknown> InputActionsToBlock; // 0x1400 (16)
	struct Unknown BlueZone; // 0x1410 (8)
	struct TArray<Unknown> PhoneticAlphabetTable_NATO; // 0x1418 (16)
	char bHasJustClosed : 0; // 0x1428 (1)
	char bLineTrace : 0; // 0x1429 (1)
	struct Unknown UI-BlackMarket; // 0x1430 (8)
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

	char HasPerkDeckWidget(); // Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.HasPerkDeckWidget(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	struct Unknown GetHUDInteractionComponent(); // Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.GetHUDInteractionComponent(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	char IsShowingSystemPopup(); // Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.IsShowingSystemPopup(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void SetSmartpingInfo(struct Unknown ServerLocation, char IsAgree); // Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.SetSmartpingInfo(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void MakeSmartpingInfo(struct Unknown ServerLocation, char IsAgree); // Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.MakeSmartpingInfo(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void CalcZLocation(struct Unknown WorldLocation, float& ZLocation); // Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.CalcZLocation(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void OnMakeSmartpingInfo(int32_t PingTypeIndex, struct Unknown ServerLocation, char IsAgree); // Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.OnMakeSmartpingInfo(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void ShowPerkDeckPopup(); // Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.ShowPerkDeckPopup(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void IsSpectating(char& IsSpectating); // Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.IsSpectating(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void HideInteractive(); // Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.HideInteractive(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	struct Unknown GetSmartPingSystem(); // Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.GetSmartPingSystem(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void CheckInputState(); // Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.CheckInputState(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void IsMatchEnd(char& State); // Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.IsMatchEnd(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void IsOpenSystemPopup(char& bResult); // Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.IsOpenSystemPopup(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void GetSpectatorTargetRank(char& Result, int32_t& Rank); // Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.GetSpectatorTargetRank(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	char IsGlobalPostProcessVolume(struct Unknown Other); // Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.IsGlobalPostProcessVolume(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void SaveInventoryData(char bSaveAppearlance); // Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.SaveInventoryData(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void CheckSavedInventoryData(); // Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.CheckSavedInventoryData(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void SetDefaultItem(); // Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.SetDefaultItem(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void RunInventoryDataCommand(struct Unknown SavedInventoryData); // Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.RunInventoryDataCommand(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void AddInBackpackItem(); // Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.AddInBackpackItem(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void AddWeaponItem(); // Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.AddWeaponItem(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void AddWearableItem(); // Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.AddWearableItem(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void GetPlayerSpectatorHUD(struct Unknown& RefSpectatorHUD); // Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.GetPlayerSpectatorHUD(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void CalcReverseSideScreenPosition(struct Unknown WorldLocation, float& OutScreenPositionAngle); // Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.CalcReverseSideScreenPosition(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void CorrectionScreenPositionByTeamPositionWidget(struct Unknown& ScreenPosition, char& RetOutScreenPosition); // Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.CorrectionScreenPositionByTeamPositionWidget(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void GetCurrentViewportMaxSizeByTeamPositionWidget(struct Unknown& ViewportMaxSize); // Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.GetCurrentViewportMaxSizeByTeamPositionWidget(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void SetActionBlocked(char bWantsToBlock, struct TArray<Unknown>& ActionNames, struct Unknown Widget); // Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.SetActionBlocked(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void DoNothing(); // Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.DoNothing(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void GetPlayerMainWidget(char bWantsToCreateIfNull, struct Unknown& Widget); // Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.GetPlayerMainWidget(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void GetInventoryWidget(char bWantsToCreateIfNull, struct Unknown& Widget); // Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.GetInventoryWidget(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void GetPlayerHUD(char& IsAlive, struct Unknown& PlayerHUD); // Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.GetPlayerHUD(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void GetPawnPosition(struct Unknown& out_Position, struct Unknown& out_MapSize); // Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.GetPawnPosition(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void InpActEvt_Ctrl+Shift_H_K2Node_InputKeyEvent_5(struct Unknown Key); // Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.InpActEvt_Ctrl+Shift_H_K2Node_InputKeyEvent_5(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void InpActEvt_Ctrl_B_K2Node_InputKeyEvent_4(struct Unknown Key); // Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.InpActEvt_Ctrl_B_K2Node_InputKeyEvent_4(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void InpActEvt_LeftControl_K2Node_InputKeyEvent_3(struct Unknown Key); // Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.InpActEvt_LeftControl_K2Node_InputKeyEvent_3(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void InpActEvt_LeftControl_K2Node_InputKeyEvent_2(struct Unknown Key); // Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.InpActEvt_LeftControl_K2Node_InputKeyEvent_2(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void InpActEvt_AcceptUI_K2Node_InputActionEvent_6(struct Unknown Key); // Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.InpActEvt_AcceptUI_K2Node_InputActionEvent_6(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void InpActEvt_MiniMap_K2Node_InputActionEvent_5(struct Unknown Key); // Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.InpActEvt_MiniMap_K2Node_InputActionEvent_5(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void InpActEvt_CloseUI_K2Node_InputActionEvent_4(struct Unknown Key); // Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.InpActEvt_CloseUI_K2Node_InputActionEvent_4(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void InpActEvt_OptionMenu_K2Node_InputActionEvent_3(struct Unknown Key); // Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.InpActEvt_OptionMenu_K2Node_InputActionEvent_3(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void InpActEvt_ToggleInGameHUD_K2Node_InputActionEvent_2(struct Unknown Key); // Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.InpActEvt_ToggleInGameHUD_K2Node_InputActionEvent_2(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void InpActEvt_ToggleGuideWidget_K2Node_InputActionEvent_1(struct Unknown Key); // Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.InpActEvt_ToggleGuideWidget_K2Node_InputActionEvent_1(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void InpActEvt_J_K2Node_InputKeyEvent_1(struct Unknown Key); // Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.InpActEvt_J_K2Node_InputKeyEvent_1(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void OpenMarket(); // Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.OpenMarket(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void CustomEvent_1(); // Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.CustomEvent_1(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void 鉹@ t元_1(); // Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.鉹@ t元_1(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void CloseBlackMarket(); // Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.CloseBlackMarket(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void OpenBlackMarket(); // Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.OpenBlackMarket(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void Cheat Event(struct FString CheatCommand); // Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.Cheat Event(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void SmartPingConfirmHoldUI_BP(); // Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.SmartPingConfirmHoldUI_BP(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void SmartPingCancelHoldUI_BP(); // Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.SmartPingCancelHoldUI_BP(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void SmartPingReleased_BP(char bIgnoreMenu); // Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.SmartPingReleased_BP(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void SmartPingPressed_BP(char bIgnoreMenu); // Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.SmartPingPressed_BP(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void SmartPingFastAgree(); // Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.SmartPingFastAgree(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void SmartPingHotKey_BP(int32_t Index); // Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.SmartPingHotKey_BP(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void ClientSetSmartpingInfo(struct Unknown ServerLocation, char IsAgree); // Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.ClientSetSmartpingInfo(Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void ServerMakeSmartpingInfo(struct Unknown ServerLocation, char IsAgree); // Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.ServerMakeSmartpingInfo(Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void OnInputInventory(); // Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.OnInputInventory(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void EnterSceneOfWin(char bWin); // Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.EnterSceneOfWin(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void LoadInventoryData(); // Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.LoadInventoryData(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void InputModeUI(struct Unknown Widget); // Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.InputModeUI(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void InputModeGame(struct Unknown Widget); // Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.InputModeGame(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void ServerEnterSceneOfWin(); // Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.ServerEnterSceneOfWin(Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void ClientEnterSceneOfWin(); // Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.ClientEnterSceneOfWin(Net|NetClient|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void OpenPerkDeckPopup(); // Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.OpenPerkDeckPopup(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void K2_SaveInventoryData(); // Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.K2_SaveInventoryData(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void NotifyOperationMessage(struct FText& NotifyText); // Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.NotifyOperationMessage(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void InsertMarker(); // Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.InsertMarker(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void 鉹@t元_1(struct FName ItemKey); // Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.鉹@t元_1(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void SetUseItemSelectMenu(char bIsShow); // Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.SetUseItemSelectMenu(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void SetBoostItemSelectMenu(char bIsShow); // Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.SetBoostItemSelectMenu(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void CustomEvent(struct FName ItemKey); // Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.CustomEvent(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void CheckNameTooltip(); // Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.CheckNameTooltip(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void RemoveallCharacterToolTip(); // Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.RemoveallCharacterToolTip(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void CreateCharacterToolTip(); // Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.CreateCharacterToolTip(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void ExecuteUbergraph_BP-BravoHotel-PlayerController(int32_t EntryPoint); // Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.ExecuteUbergraph_BP-BravoHotel-PlayerController(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
};

// Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.HasPerkDeckWidget
inline char ABP-BravoHotel-PlayerController_C::HasPerkDeckWidget() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.HasPerkDeckWidget");

	struct HasPerkDeckWidget_Params {
		
		char ReturnValue;

	}; HasPerkDeckWidget_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.GetHUDInteractionComponent
inline struct Unknown ABP-BravoHotel-PlayerController_C::GetHUDInteractionComponent() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.GetHUDInteractionComponent");

	struct GetHUDInteractionComponent_Params {
		
		struct Unknown ReturnValue;

	}; GetHUDInteractionComponent_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.IsShowingSystemPopup
inline char ABP-BravoHotel-PlayerController_C::IsShowingSystemPopup() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.IsShowingSystemPopup");

	struct IsShowingSystemPopup_Params {
		
		char ReturnValue;

	}; IsShowingSystemPopup_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.SetSmartpingInfo
inline void ABP-BravoHotel-PlayerController_C::SetSmartpingInfo(struct Unknown ServerLocation, char IsAgree) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.SetSmartpingInfo");

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

// Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.MakeSmartpingInfo
inline void ABP-BravoHotel-PlayerController_C::MakeSmartpingInfo(struct Unknown ServerLocation, char IsAgree) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.MakeSmartpingInfo");

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

// Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.CalcZLocation
inline void ABP-BravoHotel-PlayerController_C::CalcZLocation(struct Unknown WorldLocation, float& ZLocation) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.CalcZLocation");

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

// Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.OnMakeSmartpingInfo
inline void ABP-BravoHotel-PlayerController_C::OnMakeSmartpingInfo(int32_t PingTypeIndex, struct Unknown ServerLocation, char IsAgree) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.OnMakeSmartpingInfo");

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

// Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.ShowPerkDeckPopup
inline void ABP-BravoHotel-PlayerController_C::ShowPerkDeckPopup() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.ShowPerkDeckPopup");

	struct ShowPerkDeckPopup_Params {
		
	}; ShowPerkDeckPopup_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.IsSpectating
inline void ABP-BravoHotel-PlayerController_C::IsSpectating(char& IsSpectating) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.IsSpectating");

	struct IsSpectating_Params {
		char& IsSpectating;
	}; IsSpectating_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	IsSpectating = Params.IsSpectating;

}

// Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.HideInteractive
inline void ABP-BravoHotel-PlayerController_C::HideInteractive() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.HideInteractive");

	struct HideInteractive_Params {
		
	}; HideInteractive_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.GetSmartPingSystem
inline struct Unknown ABP-BravoHotel-PlayerController_C::GetSmartPingSystem() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.GetSmartPingSystem");

	struct GetSmartPingSystem_Params {
		
		struct Unknown ReturnValue;

	}; GetSmartPingSystem_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.CheckInputState
inline void ABP-BravoHotel-PlayerController_C::CheckInputState() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.CheckInputState");

	struct CheckInputState_Params {
		
	}; CheckInputState_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.IsMatchEnd
inline void ABP-BravoHotel-PlayerController_C::IsMatchEnd(char& State) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.IsMatchEnd");

	struct IsMatchEnd_Params {
		char& State;
	}; IsMatchEnd_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	State = Params.State;

}

// Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.IsOpenSystemPopup
inline void ABP-BravoHotel-PlayerController_C::IsOpenSystemPopup(char& bResult) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.IsOpenSystemPopup");

	struct IsOpenSystemPopup_Params {
		char& bResult;
	}; IsOpenSystemPopup_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	bResult = Params.bResult;

}

// Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.GetSpectatorTargetRank
inline void ABP-BravoHotel-PlayerController_C::GetSpectatorTargetRank(char& Result, int32_t& Rank) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.GetSpectatorTargetRank");

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

// Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.IsGlobalPostProcessVolume
inline char ABP-BravoHotel-PlayerController_C::IsGlobalPostProcessVolume(struct Unknown Other) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.IsGlobalPostProcessVolume");

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

// Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.SaveInventoryData
inline void ABP-BravoHotel-PlayerController_C::SaveInventoryData(char bSaveAppearlance) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.SaveInventoryData");

	struct SaveInventoryData_Params {
		char bSaveAppearlance;
	}; SaveInventoryData_Params Params;

	Params.bSaveAppearlance = bSaveAppearlance;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.CheckSavedInventoryData
inline void ABP-BravoHotel-PlayerController_C::CheckSavedInventoryData() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.CheckSavedInventoryData");

	struct CheckSavedInventoryData_Params {
		
	}; CheckSavedInventoryData_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.SetDefaultItem
inline void ABP-BravoHotel-PlayerController_C::SetDefaultItem() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.SetDefaultItem");

	struct SetDefaultItem_Params {
		
	}; SetDefaultItem_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.RunInventoryDataCommand
inline void ABP-BravoHotel-PlayerController_C::RunInventoryDataCommand(struct Unknown SavedInventoryData) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.RunInventoryDataCommand");

	struct RunInventoryDataCommand_Params {
		struct Unknown SavedInventoryData;
	}; RunInventoryDataCommand_Params Params;

	Params.SavedInventoryData = SavedInventoryData;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.AddInBackpackItem
inline void ABP-BravoHotel-PlayerController_C::AddInBackpackItem() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.AddInBackpackItem");

	struct AddInBackpackItem_Params {
		
	}; AddInBackpackItem_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.AddWeaponItem
inline void ABP-BravoHotel-PlayerController_C::AddWeaponItem() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.AddWeaponItem");

	struct AddWeaponItem_Params {
		
	}; AddWeaponItem_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.AddWearableItem
inline void ABP-BravoHotel-PlayerController_C::AddWearableItem() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.AddWearableItem");

	struct AddWearableItem_Params {
		
	}; AddWearableItem_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.GetPlayerSpectatorHUD
inline void ABP-BravoHotel-PlayerController_C::GetPlayerSpectatorHUD(struct Unknown& RefSpectatorHUD) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.GetPlayerSpectatorHUD");

	struct GetPlayerSpectatorHUD_Params {
		struct Unknown& RefSpectatorHUD;
	}; GetPlayerSpectatorHUD_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	RefSpectatorHUD = Params.RefSpectatorHUD;

}

// Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.CalcReverseSideScreenPosition
inline void ABP-BravoHotel-PlayerController_C::CalcReverseSideScreenPosition(struct Unknown WorldLocation, float& OutScreenPositionAngle) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.CalcReverseSideScreenPosition");

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

// Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.CorrectionScreenPositionByTeamPositionWidget
inline void ABP-BravoHotel-PlayerController_C::CorrectionScreenPositionByTeamPositionWidget(struct Unknown& ScreenPosition, char& RetOutScreenPosition) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.CorrectionScreenPositionByTeamPositionWidget");

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

// Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.GetCurrentViewportMaxSizeByTeamPositionWidget
inline void ABP-BravoHotel-PlayerController_C::GetCurrentViewportMaxSizeByTeamPositionWidget(struct Unknown& ViewportMaxSize) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.GetCurrentViewportMaxSizeByTeamPositionWidget");

	struct GetCurrentViewportMaxSizeByTeamPositionWidget_Params {
		struct Unknown& ViewportMaxSize;
	}; GetCurrentViewportMaxSizeByTeamPositionWidget_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	ViewportMaxSize = Params.ViewportMaxSize;

}

// Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.SetActionBlocked
inline void ABP-BravoHotel-PlayerController_C::SetActionBlocked(char bWantsToBlock, struct TArray<Unknown>& ActionNames, struct Unknown Widget) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.SetActionBlocked");

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

// Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.DoNothing
inline void ABP-BravoHotel-PlayerController_C::DoNothing() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.DoNothing");

	struct DoNothing_Params {
		
	}; DoNothing_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.GetPlayerMainWidget
inline void ABP-BravoHotel-PlayerController_C::GetPlayerMainWidget(char bWantsToCreateIfNull, struct Unknown& Widget) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.GetPlayerMainWidget");

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

// Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.GetInventoryWidget
inline void ABP-BravoHotel-PlayerController_C::GetInventoryWidget(char bWantsToCreateIfNull, struct Unknown& Widget) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.GetInventoryWidget");

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

// Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.GetPlayerHUD
inline void ABP-BravoHotel-PlayerController_C::GetPlayerHUD(char& IsAlive, struct Unknown& PlayerHUD) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.GetPlayerHUD");

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

// Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.GetPawnPosition
inline void ABP-BravoHotel-PlayerController_C::GetPawnPosition(struct Unknown& out_Position, struct Unknown& out_MapSize) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.GetPawnPosition");

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

// Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.InpActEvt_Ctrl+Shift_H_K2Node_InputKeyEvent_5
inline void ABP-BravoHotel-PlayerController_C::InpActEvt_Ctrl+Shift_H_K2Node_InputKeyEvent_5(struct Unknown Key) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.InpActEvt_Ctrl+Shift_H_K2Node_InputKeyEvent_5");

	struct InpActEvt_Ctrl+Shift_H_K2Node_InputKeyEvent_5_Params {
		struct Unknown Key;
	}; InpActEvt_Ctrl+Shift_H_K2Node_InputKeyEvent_5_Params Params;

	Params.Key = Key;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.InpActEvt_Ctrl_B_K2Node_InputKeyEvent_4
inline void ABP-BravoHotel-PlayerController_C::InpActEvt_Ctrl_B_K2Node_InputKeyEvent_4(struct Unknown Key) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.InpActEvt_Ctrl_B_K2Node_InputKeyEvent_4");

	struct InpActEvt_Ctrl_B_K2Node_InputKeyEvent_4_Params {
		struct Unknown Key;
	}; InpActEvt_Ctrl_B_K2Node_InputKeyEvent_4_Params Params;

	Params.Key = Key;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.InpActEvt_LeftControl_K2Node_InputKeyEvent_3
inline void ABP-BravoHotel-PlayerController_C::InpActEvt_LeftControl_K2Node_InputKeyEvent_3(struct Unknown Key) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.InpActEvt_LeftControl_K2Node_InputKeyEvent_3");

	struct InpActEvt_LeftControl_K2Node_InputKeyEvent_3_Params {
		struct Unknown Key;
	}; InpActEvt_LeftControl_K2Node_InputKeyEvent_3_Params Params;

	Params.Key = Key;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.InpActEvt_LeftControl_K2Node_InputKeyEvent_2
inline void ABP-BravoHotel-PlayerController_C::InpActEvt_LeftControl_K2Node_InputKeyEvent_2(struct Unknown Key) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.InpActEvt_LeftControl_K2Node_InputKeyEvent_2");

	struct InpActEvt_LeftControl_K2Node_InputKeyEvent_2_Params {
		struct Unknown Key;
	}; InpActEvt_LeftControl_K2Node_InputKeyEvent_2_Params Params;

	Params.Key = Key;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.InpActEvt_AcceptUI_K2Node_InputActionEvent_6
inline void ABP-BravoHotel-PlayerController_C::InpActEvt_AcceptUI_K2Node_InputActionEvent_6(struct Unknown Key) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.InpActEvt_AcceptUI_K2Node_InputActionEvent_6");

	struct InpActEvt_AcceptUI_K2Node_InputActionEvent_6_Params {
		struct Unknown Key;
	}; InpActEvt_AcceptUI_K2Node_InputActionEvent_6_Params Params;

	Params.Key = Key;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.InpActEvt_MiniMap_K2Node_InputActionEvent_5
inline void ABP-BravoHotel-PlayerController_C::InpActEvt_MiniMap_K2Node_InputActionEvent_5(struct Unknown Key) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.InpActEvt_MiniMap_K2Node_InputActionEvent_5");

	struct InpActEvt_MiniMap_K2Node_InputActionEvent_5_Params {
		struct Unknown Key;
	}; InpActEvt_MiniMap_K2Node_InputActionEvent_5_Params Params;

	Params.Key = Key;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.InpActEvt_CloseUI_K2Node_InputActionEvent_4
inline void ABP-BravoHotel-PlayerController_C::InpActEvt_CloseUI_K2Node_InputActionEvent_4(struct Unknown Key) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.InpActEvt_CloseUI_K2Node_InputActionEvent_4");

	struct InpActEvt_CloseUI_K2Node_InputActionEvent_4_Params {
		struct Unknown Key;
	}; InpActEvt_CloseUI_K2Node_InputActionEvent_4_Params Params;

	Params.Key = Key;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.InpActEvt_OptionMenu_K2Node_InputActionEvent_3
inline void ABP-BravoHotel-PlayerController_C::InpActEvt_OptionMenu_K2Node_InputActionEvent_3(struct Unknown Key) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.InpActEvt_OptionMenu_K2Node_InputActionEvent_3");

	struct InpActEvt_OptionMenu_K2Node_InputActionEvent_3_Params {
		struct Unknown Key;
	}; InpActEvt_OptionMenu_K2Node_InputActionEvent_3_Params Params;

	Params.Key = Key;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.InpActEvt_ToggleInGameHUD_K2Node_InputActionEvent_2
inline void ABP-BravoHotel-PlayerController_C::InpActEvt_ToggleInGameHUD_K2Node_InputActionEvent_2(struct Unknown Key) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.InpActEvt_ToggleInGameHUD_K2Node_InputActionEvent_2");

	struct InpActEvt_ToggleInGameHUD_K2Node_InputActionEvent_2_Params {
		struct Unknown Key;
	}; InpActEvt_ToggleInGameHUD_K2Node_InputActionEvent_2_Params Params;

	Params.Key = Key;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.InpActEvt_ToggleGuideWidget_K2Node_InputActionEvent_1
inline void ABP-BravoHotel-PlayerController_C::InpActEvt_ToggleGuideWidget_K2Node_InputActionEvent_1(struct Unknown Key) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.InpActEvt_ToggleGuideWidget_K2Node_InputActionEvent_1");

	struct InpActEvt_ToggleGuideWidget_K2Node_InputActionEvent_1_Params {
		struct Unknown Key;
	}; InpActEvt_ToggleGuideWidget_K2Node_InputActionEvent_1_Params Params;

	Params.Key = Key;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.InpActEvt_J_K2Node_InputKeyEvent_1
inline void ABP-BravoHotel-PlayerController_C::InpActEvt_J_K2Node_InputKeyEvent_1(struct Unknown Key) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.InpActEvt_J_K2Node_InputKeyEvent_1");

	struct InpActEvt_J_K2Node_InputKeyEvent_1_Params {
		struct Unknown Key;
	}; InpActEvt_J_K2Node_InputKeyEvent_1_Params Params;

	Params.Key = Key;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.OpenMarket
inline void ABP-BravoHotel-PlayerController_C::OpenMarket() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.OpenMarket");

	struct OpenMarket_Params {
		
	}; OpenMarket_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.CustomEvent_1
inline void ABP-BravoHotel-PlayerController_C::CustomEvent_1() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.CustomEvent_1");

	struct CustomEvent_1_Params {
		
	}; CustomEvent_1_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.鉹@ t元_1
inline void ABP-BravoHotel-PlayerController_C::鉹@ t元_1() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.鉹@ t元_1");

	struct 鉹@ t元_1_Params {
		
	}; 鉹@ t元_1_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.CloseBlackMarket
inline void ABP-BravoHotel-PlayerController_C::CloseBlackMarket() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.CloseBlackMarket");

	struct CloseBlackMarket_Params {
		
	}; CloseBlackMarket_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.OpenBlackMarket
inline void ABP-BravoHotel-PlayerController_C::OpenBlackMarket() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.OpenBlackMarket");

	struct OpenBlackMarket_Params {
		
	}; OpenBlackMarket_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.Cheat Event
inline void ABP-BravoHotel-PlayerController_C::Cheat Event(struct FString CheatCommand) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.Cheat Event");

	struct Cheat Event_Params {
		struct FString CheatCommand;
	}; Cheat Event_Params Params;

	Params.CheatCommand = CheatCommand;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.SmartPingConfirmHoldUI_BP
inline void ABP-BravoHotel-PlayerController_C::SmartPingConfirmHoldUI_BP() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.SmartPingConfirmHoldUI_BP");

	struct SmartPingConfirmHoldUI_BP_Params {
		
	}; SmartPingConfirmHoldUI_BP_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.SmartPingCancelHoldUI_BP
inline void ABP-BravoHotel-PlayerController_C::SmartPingCancelHoldUI_BP() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.SmartPingCancelHoldUI_BP");

	struct SmartPingCancelHoldUI_BP_Params {
		
	}; SmartPingCancelHoldUI_BP_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.SmartPingReleased_BP
inline void ABP-BravoHotel-PlayerController_C::SmartPingReleased_BP(char bIgnoreMenu) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.SmartPingReleased_BP");

	struct SmartPingReleased_BP_Params {
		char bIgnoreMenu;
	}; SmartPingReleased_BP_Params Params;

	Params.bIgnoreMenu = bIgnoreMenu;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.SmartPingPressed_BP
inline void ABP-BravoHotel-PlayerController_C::SmartPingPressed_BP(char bIgnoreMenu) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.SmartPingPressed_BP");

	struct SmartPingPressed_BP_Params {
		char bIgnoreMenu;
	}; SmartPingPressed_BP_Params Params;

	Params.bIgnoreMenu = bIgnoreMenu;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.SmartPingFastAgree
inline void ABP-BravoHotel-PlayerController_C::SmartPingFastAgree() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.SmartPingFastAgree");

	struct SmartPingFastAgree_Params {
		
	}; SmartPingFastAgree_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.SmartPingHotKey_BP
inline void ABP-BravoHotel-PlayerController_C::SmartPingHotKey_BP(int32_t Index) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.SmartPingHotKey_BP");

	struct SmartPingHotKey_BP_Params {
		int32_t Index;
	}; SmartPingHotKey_BP_Params Params;

	Params.Index = Index;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.ClientSetSmartpingInfo
inline void ABP-BravoHotel-PlayerController_C::ClientSetSmartpingInfo(struct Unknown ServerLocation, char IsAgree) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.ClientSetSmartpingInfo");

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

// Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.ServerMakeSmartpingInfo
inline void ABP-BravoHotel-PlayerController_C::ServerMakeSmartpingInfo(struct Unknown ServerLocation, char IsAgree) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.ServerMakeSmartpingInfo");

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

// Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.OnInputInventory
inline void ABP-BravoHotel-PlayerController_C::OnInputInventory() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.OnInputInventory");

	struct OnInputInventory_Params {
		
	}; OnInputInventory_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.EnterSceneOfWin
inline void ABP-BravoHotel-PlayerController_C::EnterSceneOfWin(char bWin) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.EnterSceneOfWin");

	struct EnterSceneOfWin_Params {
		char bWin;
	}; EnterSceneOfWin_Params Params;

	Params.bWin = bWin;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.LoadInventoryData
inline void ABP-BravoHotel-PlayerController_C::LoadInventoryData() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.LoadInventoryData");

	struct LoadInventoryData_Params {
		
	}; LoadInventoryData_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.InputModeUI
inline void ABP-BravoHotel-PlayerController_C::InputModeUI(struct Unknown Widget) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.InputModeUI");

	struct InputModeUI_Params {
		struct Unknown Widget;
	}; InputModeUI_Params Params;

	Params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.InputModeGame
inline void ABP-BravoHotel-PlayerController_C::InputModeGame(struct Unknown Widget) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.InputModeGame");

	struct InputModeGame_Params {
		struct Unknown Widget;
	}; InputModeGame_Params Params;

	Params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.ServerEnterSceneOfWin
inline void ABP-BravoHotel-PlayerController_C::ServerEnterSceneOfWin() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.ServerEnterSceneOfWin");

	struct ServerEnterSceneOfWin_Params {
		
	}; ServerEnterSceneOfWin_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.ClientEnterSceneOfWin
inline void ABP-BravoHotel-PlayerController_C::ClientEnterSceneOfWin() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.ClientEnterSceneOfWin");

	struct ClientEnterSceneOfWin_Params {
		
	}; ClientEnterSceneOfWin_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.OpenPerkDeckPopup
inline void ABP-BravoHotel-PlayerController_C::OpenPerkDeckPopup() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.OpenPerkDeckPopup");

	struct OpenPerkDeckPopup_Params {
		
	}; OpenPerkDeckPopup_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.K2_SaveInventoryData
inline void ABP-BravoHotel-PlayerController_C::K2_SaveInventoryData() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.K2_SaveInventoryData");

	struct K2_SaveInventoryData_Params {
		
	}; K2_SaveInventoryData_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.NotifyOperationMessage
inline void ABP-BravoHotel-PlayerController_C::NotifyOperationMessage(struct FText& NotifyText) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.NotifyOperationMessage");

	struct NotifyOperationMessage_Params {
		struct FText& NotifyText;
	}; NotifyOperationMessage_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	NotifyText = Params.NotifyText;

}

// Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.InsertMarker
inline void ABP-BravoHotel-PlayerController_C::InsertMarker() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.InsertMarker");

	struct InsertMarker_Params {
		
	}; InsertMarker_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.鉹@t元_1
inline void ABP-BravoHotel-PlayerController_C::鉹@t元_1(struct FName ItemKey) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.鉹@t元_1");

	struct 鉹@t元_1_Params {
		struct FName ItemKey;
	}; 鉹@t元_1_Params Params;

	Params.ItemKey = ItemKey;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.SetUseItemSelectMenu
inline void ABP-BravoHotel-PlayerController_C::SetUseItemSelectMenu(char bIsShow) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.SetUseItemSelectMenu");

	struct SetUseItemSelectMenu_Params {
		char bIsShow;
	}; SetUseItemSelectMenu_Params Params;

	Params.bIsShow = bIsShow;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.SetBoostItemSelectMenu
inline void ABP-BravoHotel-PlayerController_C::SetBoostItemSelectMenu(char bIsShow) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.SetBoostItemSelectMenu");

	struct SetBoostItemSelectMenu_Params {
		char bIsShow;
	}; SetBoostItemSelectMenu_Params Params;

	Params.bIsShow = bIsShow;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.CustomEvent
inline void ABP-BravoHotel-PlayerController_C::CustomEvent(struct FName ItemKey) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.CustomEvent");

	struct CustomEvent_Params {
		struct FName ItemKey;
	}; CustomEvent_Params Params;

	Params.ItemKey = ItemKey;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.CheckNameTooltip
inline void ABP-BravoHotel-PlayerController_C::CheckNameTooltip() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.CheckNameTooltip");

	struct CheckNameTooltip_Params {
		
	}; CheckNameTooltip_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.RemoveallCharacterToolTip
inline void ABP-BravoHotel-PlayerController_C::RemoveallCharacterToolTip() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.RemoveallCharacterToolTip");

	struct RemoveallCharacterToolTip_Params {
		
	}; RemoveallCharacterToolTip_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.CreateCharacterToolTip
inline void ABP-BravoHotel-PlayerController_C::CreateCharacterToolTip() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.CreateCharacterToolTip");

	struct CreateCharacterToolTip_Params {
		
	}; CreateCharacterToolTip_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.ExecuteUbergraph_BP-BravoHotel-PlayerController
inline void ABP-BravoHotel-PlayerController_C::ExecuteUbergraph_BP-BravoHotel-PlayerController(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.ExecuteUbergraph_BP-BravoHotel-PlayerController");

	struct ExecuteUbergraph_BP-BravoHotel-PlayerController_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_BP-BravoHotel-PlayerController_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

