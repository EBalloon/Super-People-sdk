// BlueprintGeneratedClass LV-Title_Alternative.LV-Title_Alternative_C
class ALV-Title_Alternative_C : public ALevelScriptActor {

public:

	struct Unknown UberGraphFrame; // 0x320 (8)
	struct Unknown TitleWidgetRef; // 0x328 (8)
	struct Unknown LobbyWidgetRef; // 0x330 (8)
	struct TArray<Unknown> LobbyPawns; // 0x338 (16)
	struct TSoftClassPtr<UObject> LobbyPawnClass; // 0x348 (40)
	struct Unknown SkipKey; // 0x370 (24)
	char bSkip : 0; // 0x388 (1)
	char bNotFirstTime : 0; // 0x389 (1)
	struct Unknown LobbyCustomizePawn; // 0x390 (8)
	char IsCharacterAppearance : 0; // 0x398 (1)
	struct Unknown TargetWearableCamera; // 0x3A0 (8)
	struct FString CurrentArmorySceneState; // 0x3A8 (16)
	float SurveyUPanValue; // 0x3B8 (4)
	float GunSurveyMovingValue; // 0x3BC (4)
	struct Unknown SurveyUPan; // 0x3C0 (8)
	struct Unknown GunSurveyMoving; // 0x3C8 (8)
	struct Unknown IdentifiedTimer; // 0x3D0 (8)
	struct FString CurrentTab; // 0x3D8 (16)
	struct Unknown PP-OutlineGlow; // 0x3E8 (8)
	struct Unknown AudioIndex_BGM; // 0x3F0 (4)
	struct Unknown AudioIndex_Ambience; // 0x3F4 (4)
	struct Unknown AudioIndex_Analyze; // 0x3F8 (4)
	char PendingPartyInfoChange : 0; // 0x3FC (1)
	struct Unknown EnhanceTimerHandle; // 0x400 (8)
	struct Unknown ProceedingTimerHandle; // 0x408 (8)
	struct Unknown CreateCharacterRef; // 0x410 (8)
	struct Unknown IntroBGWidget; // 0x418 (8)
	struct Unknown MediaSoundComponent; // 0x420 (8)
	char bPlaySoloSequencePlayer : 0; // 0x428 (1)
	struct FString CurrentArmoryTab; // 0x430 (16)
	struct Unknown LoginWidget; // 0x440 (8)
	char bFinished_SequencePlayer_Endgame : 0; // 0x448 (1)
	struct Unknown ANIM-Lobby01_5_ExecuteUbergraph_LV-Title_Alternative_RefProperty; // 0x450 (8)
	struct Unknown ANIM-Lobby02_8_ExecuteUbergraph_LV-Title_Alternative_RefProperty; // 0x458 (8)
	struct Unknown ANIM-Lobby03_2_ExecuteUbergraph_LV-Title_Alternative_RefProperty; // 0x460 (8)
	struct Unknown ANIM-Lobby04_11_ExecuteUbergraph_LV-Title_Alternative_RefProperty; // 0x468 (8)
	struct Unknown SK-Body_Female_5_ExecuteUbergraph_LV-Title_Alternative_RefProperty; // 0x470 (8)
	struct Unknown Title_TowerBridge_Squard_5_ExecuteUbergraph_LV-Title_Alternative_RefProperty; // 0x478 (8)
	struct Unknown SK-Body_Female_Ranking_ExecuteUbergraph_LV-Title_Alternative_RefProperty; // 0x480 (8)
	struct Unknown Ak-LobbySound_1_ExecuteUbergraph_LV-Title_Alternative_RefProperty; // 0x488 (8)
	struct Unknown Title_TowerBridge_Endgame_2_ExecuteUbergraph_LV-Title_Alternative_RefProperty; // 0x490 (8)
	struct Unknown Title_TowerBridge_Readyshot_2_ExecuteUbergraph_LV-Title_Alternative_RefProperty; // 0x498 (8)
	struct Unknown Character_Creation_2_ExecuteUbergraph_LV-Title_Alternative_RefProperty; // 0x4A0 (8)
	struct Unknown ExponentialHeightFog3_ExecuteUbergraph_LV-Title_Alternative_RefProperty; // 0x4A8 (8)
	struct Unknown ExponentialHeightFog_1_ExecuteUbergraph_LV-Title_Alternative_RefProperty; // 0x4B0 (8)
	struct Unknown CineCameraActor_1_ExecuteUbergraph_LV-Title_Alternative_RefProperty; // 0x4B8 (8)
	struct Unknown CineCamera_Supplybox_ExecuteUbergraph_LV-Title_Alternative_RefProperty; // 0x4C0 (8)
	struct Unknown CineCamera_All_ExecuteUbergraph_LV-Title_Alternative_RefProperty; // 0x4C8 (8)
	struct Unknown Character_Customization_Face_3_ExecuteUbergraph_LV-Title_Alternative_RefProperty; // 0x4D0 (8)
	struct Unknown Supplybox_Lobby_4_ExecuteUbergraph_LV-Title_Alternative_RefProperty; // 0x4D8 (8)
	struct Unknown Supplybox_Lobby_3_ExecuteUbergraph_LV-Title_Alternative_RefProperty; // 0x4E0 (8)
	struct Unknown CineCamera_Target_ExecuteUbergraph_LV-Title_Alternative_RefProperty; // 0x4E8 (8)
	struct Unknown CineCamera_Rank_ExecuteUbergraph_LV-Title_Alternative_RefProperty; // 0x4F0 (8)
	struct Unknown Title_Rank_2_ExecuteUbergraph_LV-Title_Alternative_RefProperty; // 0x4F8 (8)
	struct Unknown Gun_Survey_Plane_ExecuteUbergraph_LV-Title_Alternative_RefProperty; // 0x500 (8)
	struct Unknown Weapon_Lobby_01_2_ExecuteUbergraph_LV-Title_Alternative_RefProperty; // 0x508 (8)
	struct Unknown CineCamera_Face3_ExecuteUbergraph_LV-Title_Alternative_RefProperty; // 0x510 (8)
	struct Unknown Screen_Transition_ExecuteUbergraph_LV-Title_Alternative_RefProperty; // 0x518 (8)
	struct Unknown Character_Fade_2_ExecuteUbergraph_LV-Title_Alternative_RefProperty; // 0x520 (8)
	struct Unknown PS-LobbyRay1_ExecuteUbergraph_LV-Title_Alternative_RefProperty; // 0x528 (8)
	struct Unknown PS-LobbyRay2_ExecuteUbergraph_LV-Title_Alternative_RefProperty; // 0x530 (8)
	struct Unknown PS-LobbyRay3_ExecuteUbergraph_LV-Title_Alternative_RefProperty; // 0x538 (8)
	struct Unknown PS-LobbyRay4_ExecuteUbergraph_LV-Title_Alternative_RefProperty; // 0x540 (8)
	struct Unknown PS-LobbyRay5_ExecuteUbergraph_LV-Title_Alternative_RefProperty; // 0x548 (8)
	struct Unknown PS-LobbyRay6_ExecuteUbergraph_LV-Title_Alternative_RefProperty; // 0x550 (8)
	struct Unknown PS-LobbyRay7_ExecuteUbergraph_LV-Title_Alternative_RefProperty; // 0x558 (8)
	struct Unknown PS-LobbyRay8_ExecuteUbergraph_LV-Title_Alternative_RefProperty; // 0x560 (8)
	struct Unknown Weapon_Lobby_Disassemble_ExecuteUbergraph_LV-Title_Alternative_RefProperty; // 0x568 (8)
	struct Unknown Weapon_Lobby_Repair_ExecuteUbergraph_LV-Title_Alternative_RefProperty; // 0x570 (8)
	struct Unknown CineCamera_Weapon_Customization02_ExecuteUbergraph_LV-Title_Alternative_RefProperty; // 0x578 (8)
	struct Unknown CineCamera_Weapon_Customization_2_ExecuteUbergraph_LV-Title_Alternative_RefProperty; // 0x580 (8)
	struct Unknown Weapon_Lobby_Custom_ExecuteUbergraph_LV-Title_Alternative_RefProperty; // 0x588 (8)
	struct Unknown SK-Body_Female_Creation_ExecuteUbergraph_LV-Title_Alternative_RefProperty; // 0x590 (8)
	struct Unknown CineCameraActor_1_EdGraph_4_RefProperty; // 0x598 (8)
	struct Unknown Gun_Survey_Plane_EdGraph_11_RefProperty; // 0x5A0 (8)
	struct Unknown Gun_Survey_Plane_EdGraph_12_RefProperty; // 0x5A8 (8)
	struct Unknown Gun_Survey_Plane_EdGraph_13_RefProperty; // 0x5B0 (8)
	struct Unknown PostProcessVolume2_EdGraph_14_RefProperty; // 0x5B8 (8)
	struct Unknown PostProcessVolume2_EdGraph_15_RefProperty; // 0x5C0 (8)
	struct Unknown Supplybox_Lobby_4_EdGraph_16_RefProperty; // 0x5C8 (8)
	struct Unknown Title_Rank_2_EdGraph_16_RefProperty; // 0x5D0 (8)
	struct Unknown Character_Customization_Face_3_EdGraph_16_RefProperty; // 0x5D8 (8)
	struct Unknown Supplybox_Lobby_3_EdGraph_16_RefProperty; // 0x5E0 (8)
	struct Unknown Plane_3_EdGraph_27_RefProperty; // 0x5E8 (8)
	struct Unknown Plane_2_EdGraph_27_RefProperty; // 0x5F0 (8)
	struct Unknown Plane_4_EdGraph_27_RefProperty; // 0x5F8 (8)

	void SetSequecePanelColor(int32_t WeaponRarity); // Function LV-Title_Alternative.LV-Title_Alternative_C.SetSequecePanelColor(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void ChangeMenu(struct FString Menu); // Function LV-Title_Alternative.LV-Title_Alternative_C.ChangeMenu(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void SetTutorial(); // Function LV-Title_Alternative.LV-Title_Alternative_C.SetTutorial(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void PlayLobbySound(); // Function LV-Title_Alternative.LV-Title_Alternative_C.PlayLobbySound(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void UpdatePartyInfo(); // Function LV-Title_Alternative.LV-Title_Alternative_C.UpdatePartyInfo(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void GetGammaSettings(struct Unknown& GammaWidget); // Function LV-Title_Alternative.LV-Title_Alternative_C.GetGammaSettings(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void GetTitleWdiget(struct Unknown& HUD); // Function LV-Title_Alternative.LV-Title_Alternative_C.GetTitleWdiget(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void StopArmoryAnalyzeSound(); // Function LV-Title_Alternative.LV-Title_Alternative_C.StopArmoryAnalyzeSound(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void PlayArmoryAnalyzeSound(); // Function LV-Title_Alternative.LV-Title_Alternative_C.PlayArmoryAnalyzeSound(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void StopArmoryAmbienceSound(); // Function LV-Title_Alternative.LV-Title_Alternative_C.StopArmoryAmbienceSound(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void PlayArmoryAmbienceSound(); // Function LV-Title_Alternative.LV-Title_Alternative_C.PlayArmoryAmbienceSound(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void StopSequence(); // Function LV-Title_Alternative.LV-Title_Alternative_C.StopSequence(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void SetOutlineGlow(float Value); // Function LV-Title_Alternative.LV-Title_Alternative_C.SetOutlineGlow(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void InitPostProcess(); // Function LV-Title_Alternative.LV-Title_Alternative_C.InitPostProcess(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void FinishIdentified(); // Function LV-Title_Alternative.LV-Title_Alternative_C.FinishIdentified(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void ResetIdentified(); // Function LV-Title_Alternative.LV-Title_Alternative_C.ResetIdentified(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void UpdateIdentifiedEffect(float DeltaTime); // Function LV-Title_Alternative.LV-Title_Alternative_C.UpdateIdentifiedEffect(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void SequencePlay(struct Unknown Sequence, int32_t StartFrame, int32_t Duration); // Function LV-Title_Alternative.LV-Title_Alternative_C.SequencePlay(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void StopLobbySound(); // Function LV-Title_Alternative.LV-Title_Alternative_C.StopLobbySound(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void PlayMoveLobbySound(); // Function LV-Title_Alternative.LV-Title_Alternative_C.PlayMoveLobbySound(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void PlayAmbienceSound(); // Function LV-Title_Alternative.LV-Title_Alternative_C.PlayAmbienceSound(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void PlayBGM(); // Function LV-Title_Alternative.LV-Title_Alternative_C.PlayBGM(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void ShowLobbyWidget(char IsConnectedLoginServer); // Function LV-Title_Alternative.LV-Title_Alternative_C.ShowLobbyWidget(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void SetCamera(char bLogin); // Function LV-Title_Alternative.LV-Title_Alternative_C.SetCamera(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void LoadSavedData(); // Function LV-Title_Alternative.LV-Title_Alternative_C.LoadSavedData(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void SaveUserData(); // Function LV-Title_Alternative.LV-Title_Alternative_C.SaveUserData(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void SetTitleWidget(); // Function LV-Title_Alternative.LV-Title_Alternative_C.SetTitleWidget(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void InitData(); // Function LV-Title_Alternative.LV-Title_Alternative_C.InitData(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void BindPartyEvent(); // Function LV-Title_Alternative.LV-Title_Alternative_C.BindPartyEvent(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void OnPartyInfoChanged(struct Unknown& PartyInfo); // Function LV-Title_Alternative.LV-Title_Alternative_C.OnPartyInfoChanged(HasOutParms|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void SetPartyView(char bIsParty); // Function LV-Title_Alternative.LV-Title_Alternative_C.SetPartyView(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void BindPartyInfo(); // Function LV-Title_Alternative.LV-Title_Alternative_C.BindPartyInfo(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void CustomEvent_5(); // Function LV-Title_Alternative.LV-Title_Alternative_C.CustomEvent_5(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void OnMatchingSucceeded(); // Function LV-Title_Alternative.LV-Title_Alternative_C.OnMatchingSucceeded(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void BindLoginProcess(); // Function LV-Title_Alternative.LV-Title_Alternative_C.BindLoginProcess(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void OnTriedToLogin(struct FName UserName, struct FString Password); // Function LV-Title_Alternative.LV-Title_Alternative_C.OnTriedToLogin(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void SetLobbyAkComponent(); // Function LV-Title_Alternative.LV-Title_Alternative_C.SetLobbyAkComponent(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void InitFlow(char IsConnectedLoginServer); // Function LV-Title_Alternative.LV-Title_Alternative_C.InitFlow(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void MoveSceneNotice(); // Function LV-Title_Alternative.LV-Title_Alternative_C.MoveSceneNotice(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void MoveSceneGammaSettings(); // Function LV-Title_Alternative.LV-Title_Alternative_C.MoveSceneGammaSettings(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void MoveSceneCompanyLogo(); // Function LV-Title_Alternative.LV-Title_Alternative_C.MoveSceneCompanyLogo(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void MoveSceneSupportProgram(); // Function LV-Title_Alternative.LV-Title_Alternative_C.MoveSceneSupportProgram(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void MoveSceneLogin(); // Function LV-Title_Alternative.LV-Title_Alternative_C.MoveSceneLogin(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void MoveSceneOpeningMovie(); // Function LV-Title_Alternative.LV-Title_Alternative_C.MoveSceneOpeningMovie(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void MoveSceneTermsConditions(); // Function LV-Title_Alternative.LV-Title_Alternative_C.MoveSceneTermsConditions(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void MoveSceneCreateCharacter(); // Function LV-Title_Alternative.LV-Title_Alternative_C.MoveSceneCreateCharacter(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void MoveSceneTutorialMovie(); // Function LV-Title_Alternative.LV-Title_Alternative_C.MoveSceneTutorialMovie(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void ChangedSceneDelegate_Event_1(enum class Unknow SceneType); // Function LV-Title_Alternative.LV-Title_Alternative_C.ChangedSceneDelegate_Event_1(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void CustomEvent_13(); // Function LV-Title_Alternative.LV-Title_Alternative_C.CustomEvent_13(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void ChangedLoginDelegate_Event_1(enum class Unknow LoginFlow); // Function LV-Title_Alternative.LV-Title_Alternative_C.ChangedLoginDelegate_Event_1(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void MoveLoginFlowServicePlatform(); // Function LV-Title_Alternative.LV-Title_Alternative_C.MoveLoginFlowServicePlatform(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void MoveSceneLobby(); // Function LV-Title_Alternative.LV-Title_Alternative_C.MoveSceneLobby(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void CustomEvent_15(); // Function LV-Title_Alternative.LV-Title_Alternative_C.CustomEvent_15(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void MoveLoginFlowWaitingTicket(); // Function LV-Title_Alternative.LV-Title_Alternative_C.MoveLoginFlowWaitingTicket(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void MoveNextScene(); // Function LV-Title_Alternative.LV-Title_Alternative_C.MoveNextScene(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void CustomEvent_16(); // Function LV-Title_Alternative.LV-Title_Alternative_C.CustomEvent_16(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void MoveSceneStartScenarioMode(); // Function LV-Title_Alternative.LV-Title_Alternative_C.MoveSceneStartScenarioMode(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void MoveScenePlayTutorial(); // Function LV-Title_Alternative.LV-Title_Alternative_C.MoveScenePlayTutorial(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void OnFinished_Event_3(); // Function LV-Title_Alternative.LV-Title_Alternative_C.OnFinished_Event_3(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void MoveLoginFlowCatalogue(); // Function LV-Title_Alternative.LV-Title_Alternative_C.MoveLoginFlowCatalogue(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void Event Lobby(); // Function LV-Title_Alternative.LV-Title_Alternative_C.Event Lobby(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void Event Armory(); // Function LV-Title_Alternative.LV-Title_Alternative_C.Event Armory(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void Event SupplyBox(); // Function LV-Title_Alternative.LV-Title_Alternative_C.Event SupplyBox(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void Event Character(); // Function LV-Title_Alternative.LV-Title_Alternative_C.Event Character(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void Event Rank(); // Function LV-Title_Alternative.LV-Title_Alternative_C.Event Rank(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void OnFinished_Event_1(); // Function LV-Title_Alternative.LV-Title_Alternative_C.OnFinished_Event_1(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void OnFinished_Event_2(); // Function LV-Title_Alternative.LV-Title_Alternative_C.OnFinished_Event_2(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void Event Identified(); // Function LV-Title_Alternative.LV-Title_Alternative_C.Event Identified(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void CustomEvent_2(); // Function LV-Title_Alternative.LV-Title_Alternative_C.CustomEvent_2(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void Event Replay(); // Function LV-Title_Alternative.LV-Title_Alternative_C.Event Replay(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void BindLobbyCharacterMenu(); // Function LV-Title_Alternative.LV-Title_Alternative_C.BindLobbyCharacterMenu(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void EventMoveLobbyCharacterWearable(struct FString WearableMenu); // Function LV-Title_Alternative.LV-Title_Alternative_C.EventMoveLobbyCharacterWearable(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void EventMoveLobbyCharacterAppearance(); // Function LV-Title_Alternative.LV-Title_Alternative_C.EventMoveLobbyCharacterAppearance(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void EventChangeTab(struct FString TabName); // Function LV-Title_Alternative.LV-Title_Alternative_C.EventChangeTab(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void Event_Enhance(); // Function LV-Title_Alternative.LV-Title_Alternative_C.Event_Enhance(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void Event_Proceeding(); // Function LV-Title_Alternative.LV-Title_Alternative_C.Event_Proceeding(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void Event_EnhanceResult(); // Function LV-Title_Alternative.LV-Title_Alternative_C.Event_EnhanceResult(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void EventChangeArmmyScene(struct FString SceneName); // Function LV-Title_Alternative.LV-Title_Alternative_C.EventChangeArmmyScene(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void Event_ArmoryEx(); // Function LV-Title_Alternative.LV-Title_Alternative_C.Event_ArmoryEx(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void CustomEvent_1(); // Function LV-Title_Alternative.LV-Title_Alternative_C.CustomEvent_1(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void EventSeasonChangedSubTab(struct FString TabName); // Function LV-Title_Alternative.LV-Title_Alternative_C.EventSeasonChangedSubTab(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void CustomEvent_4(); // Function LV-Title_Alternative.LV-Title_Alternative_C.CustomEvent_4(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void ArmoryUI(); // Function LV-Title_Alternative.LV-Title_Alternative_C.ArmoryUI(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void CustomEvent_6(); // Function LV-Title_Alternative.LV-Title_Alternative_C.CustomEvent_6(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void CustomEvent_8(struct FString Menu); // Function LV-Title_Alternative.LV-Title_Alternative_C.CustomEvent_8(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void CustomEvent_7(); // Function LV-Title_Alternative.LV-Title_Alternative_C.CustomEvent_7(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void CustomEvent_9(struct FString TabName); // Function LV-Title_Alternative.LV-Title_Alternative_C.CustomEvent_9(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void ApplyChangeTab(); // Function LV-Title_Alternative.LV-Title_Alternative_C.ApplyChangeTab(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void CustomEvent_11(struct FString TabName); // Function LV-Title_Alternative.LV-Title_Alternative_C.CustomEvent_11(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void CustomEvent_12(struct FString SceneName); // Function LV-Title_Alternative.LV-Title_Alternative_C.CustomEvent_12(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void CustomEvent_10(struct FString Menu); // Function LV-Title_Alternative.LV-Title_Alternative_C.CustomEvent_10(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void MoveLobbyCharacterAppearanceDelegate_Event_1(); // Function LV-Title_Alternative.LV-Title_Alternative_C.MoveLobbyCharacterAppearanceDelegate_Event_1(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void MoveCreateCharacterAppearance(); // Function LV-Title_Alternative.LV-Title_Alternative_C.MoveCreateCharacterAppearance(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void MoveCreateCharacterWearable(); // Function LV-Title_Alternative.LV-Title_Alternative_C.MoveCreateCharacterWearable(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void OnChangedArmoryTab(struct FString TabName); // Function LV-Title_Alternative.LV-Title_Alternative_C.OnChangedArmoryTab(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void Event_Craft(); // Function LV-Title_Alternative.LV-Title_Alternative_C.Event_Craft(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void CustomEvent(); // Function LV-Title_Alternative.LV-Title_Alternative_C.CustomEvent(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void Event_CraftResult(); // Function LV-Title_Alternative.LV-Title_Alternative_C.Event_CraftResult(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void SetCurrentArmoryCamera(); // Function LV-Title_Alternative.LV-Title_Alternative_C.SetCurrentArmoryCamera(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void SetArmorySequenceCamera(); // Function LV-Title_Alternative.LV-Title_Alternative_C.SetArmorySequenceCamera(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void InitArmoryTab(); // Function LV-Title_Alternative.LV-Title_Alternative_C.InitArmoryTab(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void ReceiveBeginPlay(); // Function LV-Title_Alternative.LV-Title_Alternative_C.ReceiveBeginPlay(Event|Protected|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void ReceiveTick(float DeltaSeconds); // Function LV-Title_Alternative.LV-Title_Alternative_C.ReceiveTick(Event|Public|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void ReceiveDestroyed(); // Function LV-Title_Alternative.LV-Title_Alternative_C.ReceiveDestroyed(Event|Public|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void ReceiveEndPlay(char EndPlayReason); // Function LV-Title_Alternative.LV-Title_Alternative_C.ReceiveEndPlay(Event|Protected|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void ExecuteUbergraph_LV-Title_Alternative(int32_t EntryPoint); // Function LV-Title_Alternative.LV-Title_Alternative_C.ExecuteUbergraph_LV-Title_Alternative(Final|UbergraphFunction|HasDefaults) // <Game_BE.exe+0x2B80160>
};

// Function LV-Title_Alternative.LV-Title_Alternative_C.SetSequecePanelColor
inline void ALV-Title_Alternative_C::SetSequecePanelColor(int32_t WeaponRarity) {
	static auto fn = UObject::FindObject<UFunction>("Function LV-Title_Alternative.LV-Title_Alternative_C.SetSequecePanelColor");

	struct SetSequecePanelColor_Params {
		int32_t WeaponRarity;
	}; SetSequecePanelColor_Params Params;

	Params.WeaponRarity = WeaponRarity;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function LV-Title_Alternative.LV-Title_Alternative_C.ChangeMenu
inline void ALV-Title_Alternative_C::ChangeMenu(struct FString Menu) {
	static auto fn = UObject::FindObject<UFunction>("Function LV-Title_Alternative.LV-Title_Alternative_C.ChangeMenu");

	struct ChangeMenu_Params {
		struct FString Menu;
	}; ChangeMenu_Params Params;

	Params.Menu = Menu;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function LV-Title_Alternative.LV-Title_Alternative_C.SetTutorial
inline void ALV-Title_Alternative_C::SetTutorial() {
	static auto fn = UObject::FindObject<UFunction>("Function LV-Title_Alternative.LV-Title_Alternative_C.SetTutorial");

	struct SetTutorial_Params {
		
	}; SetTutorial_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function LV-Title_Alternative.LV-Title_Alternative_C.PlayLobbySound
inline void ALV-Title_Alternative_C::PlayLobbySound() {
	static auto fn = UObject::FindObject<UFunction>("Function LV-Title_Alternative.LV-Title_Alternative_C.PlayLobbySound");

	struct PlayLobbySound_Params {
		
	}; PlayLobbySound_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function LV-Title_Alternative.LV-Title_Alternative_C.UpdatePartyInfo
inline void ALV-Title_Alternative_C::UpdatePartyInfo() {
	static auto fn = UObject::FindObject<UFunction>("Function LV-Title_Alternative.LV-Title_Alternative_C.UpdatePartyInfo");

	struct UpdatePartyInfo_Params {
		
	}; UpdatePartyInfo_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function LV-Title_Alternative.LV-Title_Alternative_C.GetGammaSettings
inline void ALV-Title_Alternative_C::GetGammaSettings(struct Unknown& GammaWidget) {
	static auto fn = UObject::FindObject<UFunction>("Function LV-Title_Alternative.LV-Title_Alternative_C.GetGammaSettings");

	struct GetGammaSettings_Params {
		struct Unknown& GammaWidget;
	}; GetGammaSettings_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	GammaWidget = Params.GammaWidget;

}

// Function LV-Title_Alternative.LV-Title_Alternative_C.GetTitleWdiget
inline void ALV-Title_Alternative_C::GetTitleWdiget(struct Unknown& HUD) {
	static auto fn = UObject::FindObject<UFunction>("Function LV-Title_Alternative.LV-Title_Alternative_C.GetTitleWdiget");

	struct GetTitleWdiget_Params {
		struct Unknown& HUD;
	}; GetTitleWdiget_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	HUD = Params.HUD;

}

// Function LV-Title_Alternative.LV-Title_Alternative_C.StopArmoryAnalyzeSound
inline void ALV-Title_Alternative_C::StopArmoryAnalyzeSound() {
	static auto fn = UObject::FindObject<UFunction>("Function LV-Title_Alternative.LV-Title_Alternative_C.StopArmoryAnalyzeSound");

	struct StopArmoryAnalyzeSound_Params {
		
	}; StopArmoryAnalyzeSound_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function LV-Title_Alternative.LV-Title_Alternative_C.PlayArmoryAnalyzeSound
inline void ALV-Title_Alternative_C::PlayArmoryAnalyzeSound() {
	static auto fn = UObject::FindObject<UFunction>("Function LV-Title_Alternative.LV-Title_Alternative_C.PlayArmoryAnalyzeSound");

	struct PlayArmoryAnalyzeSound_Params {
		
	}; PlayArmoryAnalyzeSound_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function LV-Title_Alternative.LV-Title_Alternative_C.StopArmoryAmbienceSound
inline void ALV-Title_Alternative_C::StopArmoryAmbienceSound() {
	static auto fn = UObject::FindObject<UFunction>("Function LV-Title_Alternative.LV-Title_Alternative_C.StopArmoryAmbienceSound");

	struct StopArmoryAmbienceSound_Params {
		
	}; StopArmoryAmbienceSound_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function LV-Title_Alternative.LV-Title_Alternative_C.PlayArmoryAmbienceSound
inline void ALV-Title_Alternative_C::PlayArmoryAmbienceSound() {
	static auto fn = UObject::FindObject<UFunction>("Function LV-Title_Alternative.LV-Title_Alternative_C.PlayArmoryAmbienceSound");

	struct PlayArmoryAmbienceSound_Params {
		
	}; PlayArmoryAmbienceSound_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function LV-Title_Alternative.LV-Title_Alternative_C.StopSequence
inline void ALV-Title_Alternative_C::StopSequence() {
	static auto fn = UObject::FindObject<UFunction>("Function LV-Title_Alternative.LV-Title_Alternative_C.StopSequence");

	struct StopSequence_Params {
		
	}; StopSequence_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function LV-Title_Alternative.LV-Title_Alternative_C.SetOutlineGlow
inline void ALV-Title_Alternative_C::SetOutlineGlow(float Value) {
	static auto fn = UObject::FindObject<UFunction>("Function LV-Title_Alternative.LV-Title_Alternative_C.SetOutlineGlow");

	struct SetOutlineGlow_Params {
		float Value;
	}; SetOutlineGlow_Params Params;

	Params.Value = Value;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function LV-Title_Alternative.LV-Title_Alternative_C.InitPostProcess
inline void ALV-Title_Alternative_C::InitPostProcess() {
	static auto fn = UObject::FindObject<UFunction>("Function LV-Title_Alternative.LV-Title_Alternative_C.InitPostProcess");

	struct InitPostProcess_Params {
		
	}; InitPostProcess_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function LV-Title_Alternative.LV-Title_Alternative_C.FinishIdentified
inline void ALV-Title_Alternative_C::FinishIdentified() {
	static auto fn = UObject::FindObject<UFunction>("Function LV-Title_Alternative.LV-Title_Alternative_C.FinishIdentified");

	struct FinishIdentified_Params {
		
	}; FinishIdentified_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function LV-Title_Alternative.LV-Title_Alternative_C.ResetIdentified
inline void ALV-Title_Alternative_C::ResetIdentified() {
	static auto fn = UObject::FindObject<UFunction>("Function LV-Title_Alternative.LV-Title_Alternative_C.ResetIdentified");

	struct ResetIdentified_Params {
		
	}; ResetIdentified_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function LV-Title_Alternative.LV-Title_Alternative_C.UpdateIdentifiedEffect
inline void ALV-Title_Alternative_C::UpdateIdentifiedEffect(float DeltaTime) {
	static auto fn = UObject::FindObject<UFunction>("Function LV-Title_Alternative.LV-Title_Alternative_C.UpdateIdentifiedEffect");

	struct UpdateIdentifiedEffect_Params {
		float DeltaTime;
	}; UpdateIdentifiedEffect_Params Params;

	Params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function LV-Title_Alternative.LV-Title_Alternative_C.SequencePlay
inline void ALV-Title_Alternative_C::SequencePlay(struct Unknown Sequence, int32_t StartFrame, int32_t Duration) {
	static auto fn = UObject::FindObject<UFunction>("Function LV-Title_Alternative.LV-Title_Alternative_C.SequencePlay");

	struct SequencePlay_Params {
		struct Unknown Sequence;
		int32_t StartFrame;
		int32_t Duration;
	}; SequencePlay_Params Params;

	Params.Sequence = Sequence;
	Params.StartFrame = StartFrame;
	Params.Duration = Duration;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function LV-Title_Alternative.LV-Title_Alternative_C.StopLobbySound
inline void ALV-Title_Alternative_C::StopLobbySound() {
	static auto fn = UObject::FindObject<UFunction>("Function LV-Title_Alternative.LV-Title_Alternative_C.StopLobbySound");

	struct StopLobbySound_Params {
		
	}; StopLobbySound_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function LV-Title_Alternative.LV-Title_Alternative_C.PlayMoveLobbySound
inline void ALV-Title_Alternative_C::PlayMoveLobbySound() {
	static auto fn = UObject::FindObject<UFunction>("Function LV-Title_Alternative.LV-Title_Alternative_C.PlayMoveLobbySound");

	struct PlayMoveLobbySound_Params {
		
	}; PlayMoveLobbySound_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function LV-Title_Alternative.LV-Title_Alternative_C.PlayAmbienceSound
inline void ALV-Title_Alternative_C::PlayAmbienceSound() {
	static auto fn = UObject::FindObject<UFunction>("Function LV-Title_Alternative.LV-Title_Alternative_C.PlayAmbienceSound");

	struct PlayAmbienceSound_Params {
		
	}; PlayAmbienceSound_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function LV-Title_Alternative.LV-Title_Alternative_C.PlayBGM
inline void ALV-Title_Alternative_C::PlayBGM() {
	static auto fn = UObject::FindObject<UFunction>("Function LV-Title_Alternative.LV-Title_Alternative_C.PlayBGM");

	struct PlayBGM_Params {
		
	}; PlayBGM_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function LV-Title_Alternative.LV-Title_Alternative_C.ShowLobbyWidget
inline void ALV-Title_Alternative_C::ShowLobbyWidget(char IsConnectedLoginServer) {
	static auto fn = UObject::FindObject<UFunction>("Function LV-Title_Alternative.LV-Title_Alternative_C.ShowLobbyWidget");

	struct ShowLobbyWidget_Params {
		char IsConnectedLoginServer;
	}; ShowLobbyWidget_Params Params;

	Params.IsConnectedLoginServer = IsConnectedLoginServer;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function LV-Title_Alternative.LV-Title_Alternative_C.SetCamera
inline void ALV-Title_Alternative_C::SetCamera(char bLogin) {
	static auto fn = UObject::FindObject<UFunction>("Function LV-Title_Alternative.LV-Title_Alternative_C.SetCamera");

	struct SetCamera_Params {
		char bLogin;
	}; SetCamera_Params Params;

	Params.bLogin = bLogin;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function LV-Title_Alternative.LV-Title_Alternative_C.LoadSavedData
inline void ALV-Title_Alternative_C::LoadSavedData() {
	static auto fn = UObject::FindObject<UFunction>("Function LV-Title_Alternative.LV-Title_Alternative_C.LoadSavedData");

	struct LoadSavedData_Params {
		
	}; LoadSavedData_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function LV-Title_Alternative.LV-Title_Alternative_C.SaveUserData
inline void ALV-Title_Alternative_C::SaveUserData() {
	static auto fn = UObject::FindObject<UFunction>("Function LV-Title_Alternative.LV-Title_Alternative_C.SaveUserData");

	struct SaveUserData_Params {
		
	}; SaveUserData_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function LV-Title_Alternative.LV-Title_Alternative_C.SetTitleWidget
inline void ALV-Title_Alternative_C::SetTitleWidget() {
	static auto fn = UObject::FindObject<UFunction>("Function LV-Title_Alternative.LV-Title_Alternative_C.SetTitleWidget");

	struct SetTitleWidget_Params {
		
	}; SetTitleWidget_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function LV-Title_Alternative.LV-Title_Alternative_C.InitData
inline void ALV-Title_Alternative_C::InitData() {
	static auto fn = UObject::FindObject<UFunction>("Function LV-Title_Alternative.LV-Title_Alternative_C.InitData");

	struct InitData_Params {
		
	}; InitData_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function LV-Title_Alternative.LV-Title_Alternative_C.BindPartyEvent
inline void ALV-Title_Alternative_C::BindPartyEvent() {
	static auto fn = UObject::FindObject<UFunction>("Function LV-Title_Alternative.LV-Title_Alternative_C.BindPartyEvent");

	struct BindPartyEvent_Params {
		
	}; BindPartyEvent_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function LV-Title_Alternative.LV-Title_Alternative_C.OnPartyInfoChanged
inline void ALV-Title_Alternative_C::OnPartyInfoChanged(struct Unknown& PartyInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function LV-Title_Alternative.LV-Title_Alternative_C.OnPartyInfoChanged");

	struct OnPartyInfoChanged_Params {
		struct Unknown& PartyInfo;
	}; OnPartyInfoChanged_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	PartyInfo = Params.PartyInfo;

}

// Function LV-Title_Alternative.LV-Title_Alternative_C.SetPartyView
inline void ALV-Title_Alternative_C::SetPartyView(char bIsParty) {
	static auto fn = UObject::FindObject<UFunction>("Function LV-Title_Alternative.LV-Title_Alternative_C.SetPartyView");

	struct SetPartyView_Params {
		char bIsParty;
	}; SetPartyView_Params Params;

	Params.bIsParty = bIsParty;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function LV-Title_Alternative.LV-Title_Alternative_C.BindPartyInfo
inline void ALV-Title_Alternative_C::BindPartyInfo() {
	static auto fn = UObject::FindObject<UFunction>("Function LV-Title_Alternative.LV-Title_Alternative_C.BindPartyInfo");

	struct BindPartyInfo_Params {
		
	}; BindPartyInfo_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function LV-Title_Alternative.LV-Title_Alternative_C.CustomEvent_5
inline void ALV-Title_Alternative_C::CustomEvent_5() {
	static auto fn = UObject::FindObject<UFunction>("Function LV-Title_Alternative.LV-Title_Alternative_C.CustomEvent_5");

	struct CustomEvent_5_Params {
		
	}; CustomEvent_5_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function LV-Title_Alternative.LV-Title_Alternative_C.OnMatchingSucceeded
inline void ALV-Title_Alternative_C::OnMatchingSucceeded() {
	static auto fn = UObject::FindObject<UFunction>("Function LV-Title_Alternative.LV-Title_Alternative_C.OnMatchingSucceeded");

	struct OnMatchingSucceeded_Params {
		
	}; OnMatchingSucceeded_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function LV-Title_Alternative.LV-Title_Alternative_C.BindLoginProcess
inline void ALV-Title_Alternative_C::BindLoginProcess() {
	static auto fn = UObject::FindObject<UFunction>("Function LV-Title_Alternative.LV-Title_Alternative_C.BindLoginProcess");

	struct BindLoginProcess_Params {
		
	}; BindLoginProcess_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function LV-Title_Alternative.LV-Title_Alternative_C.OnTriedToLogin
inline void ALV-Title_Alternative_C::OnTriedToLogin(struct FName UserName, struct FString Password) {
	static auto fn = UObject::FindObject<UFunction>("Function LV-Title_Alternative.LV-Title_Alternative_C.OnTriedToLogin");

	struct OnTriedToLogin_Params {
		struct FName UserName;
		struct FString Password;
	}; OnTriedToLogin_Params Params;

	Params.UserName = UserName;
	Params.Password = Password;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function LV-Title_Alternative.LV-Title_Alternative_C.SetLobbyAkComponent
inline void ALV-Title_Alternative_C::SetLobbyAkComponent() {
	static auto fn = UObject::FindObject<UFunction>("Function LV-Title_Alternative.LV-Title_Alternative_C.SetLobbyAkComponent");

	struct SetLobbyAkComponent_Params {
		
	}; SetLobbyAkComponent_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function LV-Title_Alternative.LV-Title_Alternative_C.InitFlow
inline void ALV-Title_Alternative_C::InitFlow(char IsConnectedLoginServer) {
	static auto fn = UObject::FindObject<UFunction>("Function LV-Title_Alternative.LV-Title_Alternative_C.InitFlow");

	struct InitFlow_Params {
		char IsConnectedLoginServer;
	}; InitFlow_Params Params;

	Params.IsConnectedLoginServer = IsConnectedLoginServer;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function LV-Title_Alternative.LV-Title_Alternative_C.MoveSceneNotice
inline void ALV-Title_Alternative_C::MoveSceneNotice() {
	static auto fn = UObject::FindObject<UFunction>("Function LV-Title_Alternative.LV-Title_Alternative_C.MoveSceneNotice");

	struct MoveSceneNotice_Params {
		
	}; MoveSceneNotice_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function LV-Title_Alternative.LV-Title_Alternative_C.MoveSceneGammaSettings
inline void ALV-Title_Alternative_C::MoveSceneGammaSettings() {
	static auto fn = UObject::FindObject<UFunction>("Function LV-Title_Alternative.LV-Title_Alternative_C.MoveSceneGammaSettings");

	struct MoveSceneGammaSettings_Params {
		
	}; MoveSceneGammaSettings_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function LV-Title_Alternative.LV-Title_Alternative_C.MoveSceneCompanyLogo
inline void ALV-Title_Alternative_C::MoveSceneCompanyLogo() {
	static auto fn = UObject::FindObject<UFunction>("Function LV-Title_Alternative.LV-Title_Alternative_C.MoveSceneCompanyLogo");

	struct MoveSceneCompanyLogo_Params {
		
	}; MoveSceneCompanyLogo_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function LV-Title_Alternative.LV-Title_Alternative_C.MoveSceneSupportProgram
inline void ALV-Title_Alternative_C::MoveSceneSupportProgram() {
	static auto fn = UObject::FindObject<UFunction>("Function LV-Title_Alternative.LV-Title_Alternative_C.MoveSceneSupportProgram");

	struct MoveSceneSupportProgram_Params {
		
	}; MoveSceneSupportProgram_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function LV-Title_Alternative.LV-Title_Alternative_C.MoveSceneLogin
inline void ALV-Title_Alternative_C::MoveSceneLogin() {
	static auto fn = UObject::FindObject<UFunction>("Function LV-Title_Alternative.LV-Title_Alternative_C.MoveSceneLogin");

	struct MoveSceneLogin_Params {
		
	}; MoveSceneLogin_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function LV-Title_Alternative.LV-Title_Alternative_C.MoveSceneOpeningMovie
inline void ALV-Title_Alternative_C::MoveSceneOpeningMovie() {
	static auto fn = UObject::FindObject<UFunction>("Function LV-Title_Alternative.LV-Title_Alternative_C.MoveSceneOpeningMovie");

	struct MoveSceneOpeningMovie_Params {
		
	}; MoveSceneOpeningMovie_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function LV-Title_Alternative.LV-Title_Alternative_C.MoveSceneTermsConditions
inline void ALV-Title_Alternative_C::MoveSceneTermsConditions() {
	static auto fn = UObject::FindObject<UFunction>("Function LV-Title_Alternative.LV-Title_Alternative_C.MoveSceneTermsConditions");

	struct MoveSceneTermsConditions_Params {
		
	}; MoveSceneTermsConditions_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function LV-Title_Alternative.LV-Title_Alternative_C.MoveSceneCreateCharacter
inline void ALV-Title_Alternative_C::MoveSceneCreateCharacter() {
	static auto fn = UObject::FindObject<UFunction>("Function LV-Title_Alternative.LV-Title_Alternative_C.MoveSceneCreateCharacter");

	struct MoveSceneCreateCharacter_Params {
		
	}; MoveSceneCreateCharacter_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function LV-Title_Alternative.LV-Title_Alternative_C.MoveSceneTutorialMovie
inline void ALV-Title_Alternative_C::MoveSceneTutorialMovie() {
	static auto fn = UObject::FindObject<UFunction>("Function LV-Title_Alternative.LV-Title_Alternative_C.MoveSceneTutorialMovie");

	struct MoveSceneTutorialMovie_Params {
		
	}; MoveSceneTutorialMovie_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function LV-Title_Alternative.LV-Title_Alternative_C.ChangedSceneDelegate_Event_1
inline void ALV-Title_Alternative_C::ChangedSceneDelegate_Event_1(enum class Unknow SceneType) {
	static auto fn = UObject::FindObject<UFunction>("Function LV-Title_Alternative.LV-Title_Alternative_C.ChangedSceneDelegate_Event_1");

	struct ChangedSceneDelegate_Event_1_Params {
		enum class Unknow SceneType;
	}; ChangedSceneDelegate_Event_1_Params Params;

	Params.SceneType = SceneType;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function LV-Title_Alternative.LV-Title_Alternative_C.CustomEvent_13
inline void ALV-Title_Alternative_C::CustomEvent_13() {
	static auto fn = UObject::FindObject<UFunction>("Function LV-Title_Alternative.LV-Title_Alternative_C.CustomEvent_13");

	struct CustomEvent_13_Params {
		
	}; CustomEvent_13_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function LV-Title_Alternative.LV-Title_Alternative_C.ChangedLoginDelegate_Event_1
inline void ALV-Title_Alternative_C::ChangedLoginDelegate_Event_1(enum class Unknow LoginFlow) {
	static auto fn = UObject::FindObject<UFunction>("Function LV-Title_Alternative.LV-Title_Alternative_C.ChangedLoginDelegate_Event_1");

	struct ChangedLoginDelegate_Event_1_Params {
		enum class Unknow LoginFlow;
	}; ChangedLoginDelegate_Event_1_Params Params;

	Params.LoginFlow = LoginFlow;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function LV-Title_Alternative.LV-Title_Alternative_C.MoveLoginFlowServicePlatform
inline void ALV-Title_Alternative_C::MoveLoginFlowServicePlatform() {
	static auto fn = UObject::FindObject<UFunction>("Function LV-Title_Alternative.LV-Title_Alternative_C.MoveLoginFlowServicePlatform");

	struct MoveLoginFlowServicePlatform_Params {
		
	}; MoveLoginFlowServicePlatform_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function LV-Title_Alternative.LV-Title_Alternative_C.MoveSceneLobby
inline void ALV-Title_Alternative_C::MoveSceneLobby() {
	static auto fn = UObject::FindObject<UFunction>("Function LV-Title_Alternative.LV-Title_Alternative_C.MoveSceneLobby");

	struct MoveSceneLobby_Params {
		
	}; MoveSceneLobby_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function LV-Title_Alternative.LV-Title_Alternative_C.CustomEvent_15
inline void ALV-Title_Alternative_C::CustomEvent_15() {
	static auto fn = UObject::FindObject<UFunction>("Function LV-Title_Alternative.LV-Title_Alternative_C.CustomEvent_15");

	struct CustomEvent_15_Params {
		
	}; CustomEvent_15_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function LV-Title_Alternative.LV-Title_Alternative_C.MoveLoginFlowWaitingTicket
inline void ALV-Title_Alternative_C::MoveLoginFlowWaitingTicket() {
	static auto fn = UObject::FindObject<UFunction>("Function LV-Title_Alternative.LV-Title_Alternative_C.MoveLoginFlowWaitingTicket");

	struct MoveLoginFlowWaitingTicket_Params {
		
	}; MoveLoginFlowWaitingTicket_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function LV-Title_Alternative.LV-Title_Alternative_C.MoveNextScene
inline void ALV-Title_Alternative_C::MoveNextScene() {
	static auto fn = UObject::FindObject<UFunction>("Function LV-Title_Alternative.LV-Title_Alternative_C.MoveNextScene");

	struct MoveNextScene_Params {
		
	}; MoveNextScene_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function LV-Title_Alternative.LV-Title_Alternative_C.CustomEvent_16
inline void ALV-Title_Alternative_C::CustomEvent_16() {
	static auto fn = UObject::FindObject<UFunction>("Function LV-Title_Alternative.LV-Title_Alternative_C.CustomEvent_16");

	struct CustomEvent_16_Params {
		
	}; CustomEvent_16_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function LV-Title_Alternative.LV-Title_Alternative_C.MoveSceneStartScenarioMode
inline void ALV-Title_Alternative_C::MoveSceneStartScenarioMode() {
	static auto fn = UObject::FindObject<UFunction>("Function LV-Title_Alternative.LV-Title_Alternative_C.MoveSceneStartScenarioMode");

	struct MoveSceneStartScenarioMode_Params {
		
	}; MoveSceneStartScenarioMode_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function LV-Title_Alternative.LV-Title_Alternative_C.MoveScenePlayTutorial
inline void ALV-Title_Alternative_C::MoveScenePlayTutorial() {
	static auto fn = UObject::FindObject<UFunction>("Function LV-Title_Alternative.LV-Title_Alternative_C.MoveScenePlayTutorial");

	struct MoveScenePlayTutorial_Params {
		
	}; MoveScenePlayTutorial_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function LV-Title_Alternative.LV-Title_Alternative_C.OnFinished_Event_3
inline void ALV-Title_Alternative_C::OnFinished_Event_3() {
	static auto fn = UObject::FindObject<UFunction>("Function LV-Title_Alternative.LV-Title_Alternative_C.OnFinished_Event_3");

	struct OnFinished_Event_3_Params {
		
	}; OnFinished_Event_3_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function LV-Title_Alternative.LV-Title_Alternative_C.MoveLoginFlowCatalogue
inline void ALV-Title_Alternative_C::MoveLoginFlowCatalogue() {
	static auto fn = UObject::FindObject<UFunction>("Function LV-Title_Alternative.LV-Title_Alternative_C.MoveLoginFlowCatalogue");

	struct MoveLoginFlowCatalogue_Params {
		
	}; MoveLoginFlowCatalogue_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function LV-Title_Alternative.LV-Title_Alternative_C.Event Lobby
inline void ALV-Title_Alternative_C::Event Lobby() {
	static auto fn = UObject::FindObject<UFunction>("Function LV-Title_Alternative.LV-Title_Alternative_C.Event Lobby");

	struct Event Lobby_Params {
		
	}; Event Lobby_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function LV-Title_Alternative.LV-Title_Alternative_C.Event Armory
inline void ALV-Title_Alternative_C::Event Armory() {
	static auto fn = UObject::FindObject<UFunction>("Function LV-Title_Alternative.LV-Title_Alternative_C.Event Armory");

	struct Event Armory_Params {
		
	}; Event Armory_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function LV-Title_Alternative.LV-Title_Alternative_C.Event SupplyBox
inline void ALV-Title_Alternative_C::Event SupplyBox() {
	static auto fn = UObject::FindObject<UFunction>("Function LV-Title_Alternative.LV-Title_Alternative_C.Event SupplyBox");

	struct Event SupplyBox_Params {
		
	}; Event SupplyBox_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function LV-Title_Alternative.LV-Title_Alternative_C.Event Character
inline void ALV-Title_Alternative_C::Event Character() {
	static auto fn = UObject::FindObject<UFunction>("Function LV-Title_Alternative.LV-Title_Alternative_C.Event Character");

	struct Event Character_Params {
		
	}; Event Character_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function LV-Title_Alternative.LV-Title_Alternative_C.Event Rank
inline void ALV-Title_Alternative_C::Event Rank() {
	static auto fn = UObject::FindObject<UFunction>("Function LV-Title_Alternative.LV-Title_Alternative_C.Event Rank");

	struct Event Rank_Params {
		
	}; Event Rank_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function LV-Title_Alternative.LV-Title_Alternative_C.OnFinished_Event_1
inline void ALV-Title_Alternative_C::OnFinished_Event_1() {
	static auto fn = UObject::FindObject<UFunction>("Function LV-Title_Alternative.LV-Title_Alternative_C.OnFinished_Event_1");

	struct OnFinished_Event_1_Params {
		
	}; OnFinished_Event_1_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function LV-Title_Alternative.LV-Title_Alternative_C.OnFinished_Event_2
inline void ALV-Title_Alternative_C::OnFinished_Event_2() {
	static auto fn = UObject::FindObject<UFunction>("Function LV-Title_Alternative.LV-Title_Alternative_C.OnFinished_Event_2");

	struct OnFinished_Event_2_Params {
		
	}; OnFinished_Event_2_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function LV-Title_Alternative.LV-Title_Alternative_C.Event Identified
inline void ALV-Title_Alternative_C::Event Identified() {
	static auto fn = UObject::FindObject<UFunction>("Function LV-Title_Alternative.LV-Title_Alternative_C.Event Identified");

	struct Event Identified_Params {
		
	}; Event Identified_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function LV-Title_Alternative.LV-Title_Alternative_C.CustomEvent_2
inline void ALV-Title_Alternative_C::CustomEvent_2() {
	static auto fn = UObject::FindObject<UFunction>("Function LV-Title_Alternative.LV-Title_Alternative_C.CustomEvent_2");

	struct CustomEvent_2_Params {
		
	}; CustomEvent_2_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function LV-Title_Alternative.LV-Title_Alternative_C.Event Replay
inline void ALV-Title_Alternative_C::Event Replay() {
	static auto fn = UObject::FindObject<UFunction>("Function LV-Title_Alternative.LV-Title_Alternative_C.Event Replay");

	struct Event Replay_Params {
		
	}; Event Replay_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function LV-Title_Alternative.LV-Title_Alternative_C.BindLobbyCharacterMenu
inline void ALV-Title_Alternative_C::BindLobbyCharacterMenu() {
	static auto fn = UObject::FindObject<UFunction>("Function LV-Title_Alternative.LV-Title_Alternative_C.BindLobbyCharacterMenu");

	struct BindLobbyCharacterMenu_Params {
		
	}; BindLobbyCharacterMenu_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function LV-Title_Alternative.LV-Title_Alternative_C.EventMoveLobbyCharacterWearable
inline void ALV-Title_Alternative_C::EventMoveLobbyCharacterWearable(struct FString WearableMenu) {
	static auto fn = UObject::FindObject<UFunction>("Function LV-Title_Alternative.LV-Title_Alternative_C.EventMoveLobbyCharacterWearable");

	struct EventMoveLobbyCharacterWearable_Params {
		struct FString WearableMenu;
	}; EventMoveLobbyCharacterWearable_Params Params;

	Params.WearableMenu = WearableMenu;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function LV-Title_Alternative.LV-Title_Alternative_C.EventMoveLobbyCharacterAppearance
inline void ALV-Title_Alternative_C::EventMoveLobbyCharacterAppearance() {
	static auto fn = UObject::FindObject<UFunction>("Function LV-Title_Alternative.LV-Title_Alternative_C.EventMoveLobbyCharacterAppearance");

	struct EventMoveLobbyCharacterAppearance_Params {
		
	}; EventMoveLobbyCharacterAppearance_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function LV-Title_Alternative.LV-Title_Alternative_C.EventChangeTab
inline void ALV-Title_Alternative_C::EventChangeTab(struct FString TabName) {
	static auto fn = UObject::FindObject<UFunction>("Function LV-Title_Alternative.LV-Title_Alternative_C.EventChangeTab");

	struct EventChangeTab_Params {
		struct FString TabName;
	}; EventChangeTab_Params Params;

	Params.TabName = TabName;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function LV-Title_Alternative.LV-Title_Alternative_C.Event_Enhance
inline void ALV-Title_Alternative_C::Event_Enhance() {
	static auto fn = UObject::FindObject<UFunction>("Function LV-Title_Alternative.LV-Title_Alternative_C.Event_Enhance");

	struct Event_Enhance_Params {
		
	}; Event_Enhance_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function LV-Title_Alternative.LV-Title_Alternative_C.Event_Proceeding
inline void ALV-Title_Alternative_C::Event_Proceeding() {
	static auto fn = UObject::FindObject<UFunction>("Function LV-Title_Alternative.LV-Title_Alternative_C.Event_Proceeding");

	struct Event_Proceeding_Params {
		
	}; Event_Proceeding_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function LV-Title_Alternative.LV-Title_Alternative_C.Event_EnhanceResult
inline void ALV-Title_Alternative_C::Event_EnhanceResult() {
	static auto fn = UObject::FindObject<UFunction>("Function LV-Title_Alternative.LV-Title_Alternative_C.Event_EnhanceResult");

	struct Event_EnhanceResult_Params {
		
	}; Event_EnhanceResult_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function LV-Title_Alternative.LV-Title_Alternative_C.EventChangeArmmyScene
inline void ALV-Title_Alternative_C::EventChangeArmmyScene(struct FString SceneName) {
	static auto fn = UObject::FindObject<UFunction>("Function LV-Title_Alternative.LV-Title_Alternative_C.EventChangeArmmyScene");

	struct EventChangeArmmyScene_Params {
		struct FString SceneName;
	}; EventChangeArmmyScene_Params Params;

	Params.SceneName = SceneName;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function LV-Title_Alternative.LV-Title_Alternative_C.Event_ArmoryEx
inline void ALV-Title_Alternative_C::Event_ArmoryEx() {
	static auto fn = UObject::FindObject<UFunction>("Function LV-Title_Alternative.LV-Title_Alternative_C.Event_ArmoryEx");

	struct Event_ArmoryEx_Params {
		
	}; Event_ArmoryEx_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function LV-Title_Alternative.LV-Title_Alternative_C.CustomEvent_1
inline void ALV-Title_Alternative_C::CustomEvent_1() {
	static auto fn = UObject::FindObject<UFunction>("Function LV-Title_Alternative.LV-Title_Alternative_C.CustomEvent_1");

	struct CustomEvent_1_Params {
		
	}; CustomEvent_1_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function LV-Title_Alternative.LV-Title_Alternative_C.EventSeasonChangedSubTab
inline void ALV-Title_Alternative_C::EventSeasonChangedSubTab(struct FString TabName) {
	static auto fn = UObject::FindObject<UFunction>("Function LV-Title_Alternative.LV-Title_Alternative_C.EventSeasonChangedSubTab");

	struct EventSeasonChangedSubTab_Params {
		struct FString TabName;
	}; EventSeasonChangedSubTab_Params Params;

	Params.TabName = TabName;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function LV-Title_Alternative.LV-Title_Alternative_C.CustomEvent_4
inline void ALV-Title_Alternative_C::CustomEvent_4() {
	static auto fn = UObject::FindObject<UFunction>("Function LV-Title_Alternative.LV-Title_Alternative_C.CustomEvent_4");

	struct CustomEvent_4_Params {
		
	}; CustomEvent_4_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function LV-Title_Alternative.LV-Title_Alternative_C.ArmoryUI
inline void ALV-Title_Alternative_C::ArmoryUI() {
	static auto fn = UObject::FindObject<UFunction>("Function LV-Title_Alternative.LV-Title_Alternative_C.ArmoryUI");

	struct ArmoryUI_Params {
		
	}; ArmoryUI_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function LV-Title_Alternative.LV-Title_Alternative_C.CustomEvent_6
inline void ALV-Title_Alternative_C::CustomEvent_6() {
	static auto fn = UObject::FindObject<UFunction>("Function LV-Title_Alternative.LV-Title_Alternative_C.CustomEvent_6");

	struct CustomEvent_6_Params {
		
	}; CustomEvent_6_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function LV-Title_Alternative.LV-Title_Alternative_C.CustomEvent_8
inline void ALV-Title_Alternative_C::CustomEvent_8(struct FString Menu) {
	static auto fn = UObject::FindObject<UFunction>("Function LV-Title_Alternative.LV-Title_Alternative_C.CustomEvent_8");

	struct CustomEvent_8_Params {
		struct FString Menu;
	}; CustomEvent_8_Params Params;

	Params.Menu = Menu;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function LV-Title_Alternative.LV-Title_Alternative_C.CustomEvent_7
inline void ALV-Title_Alternative_C::CustomEvent_7() {
	static auto fn = UObject::FindObject<UFunction>("Function LV-Title_Alternative.LV-Title_Alternative_C.CustomEvent_7");

	struct CustomEvent_7_Params {
		
	}; CustomEvent_7_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function LV-Title_Alternative.LV-Title_Alternative_C.CustomEvent_9
inline void ALV-Title_Alternative_C::CustomEvent_9(struct FString TabName) {
	static auto fn = UObject::FindObject<UFunction>("Function LV-Title_Alternative.LV-Title_Alternative_C.CustomEvent_9");

	struct CustomEvent_9_Params {
		struct FString TabName;
	}; CustomEvent_9_Params Params;

	Params.TabName = TabName;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function LV-Title_Alternative.LV-Title_Alternative_C.ApplyChangeTab
inline void ALV-Title_Alternative_C::ApplyChangeTab() {
	static auto fn = UObject::FindObject<UFunction>("Function LV-Title_Alternative.LV-Title_Alternative_C.ApplyChangeTab");

	struct ApplyChangeTab_Params {
		
	}; ApplyChangeTab_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function LV-Title_Alternative.LV-Title_Alternative_C.CustomEvent_11
inline void ALV-Title_Alternative_C::CustomEvent_11(struct FString TabName) {
	static auto fn = UObject::FindObject<UFunction>("Function LV-Title_Alternative.LV-Title_Alternative_C.CustomEvent_11");

	struct CustomEvent_11_Params {
		struct FString TabName;
	}; CustomEvent_11_Params Params;

	Params.TabName = TabName;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function LV-Title_Alternative.LV-Title_Alternative_C.CustomEvent_12
inline void ALV-Title_Alternative_C::CustomEvent_12(struct FString SceneName) {
	static auto fn = UObject::FindObject<UFunction>("Function LV-Title_Alternative.LV-Title_Alternative_C.CustomEvent_12");

	struct CustomEvent_12_Params {
		struct FString SceneName;
	}; CustomEvent_12_Params Params;

	Params.SceneName = SceneName;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function LV-Title_Alternative.LV-Title_Alternative_C.CustomEvent_10
inline void ALV-Title_Alternative_C::CustomEvent_10(struct FString Menu) {
	static auto fn = UObject::FindObject<UFunction>("Function LV-Title_Alternative.LV-Title_Alternative_C.CustomEvent_10");

	struct CustomEvent_10_Params {
		struct FString Menu;
	}; CustomEvent_10_Params Params;

	Params.Menu = Menu;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function LV-Title_Alternative.LV-Title_Alternative_C.MoveLobbyCharacterAppearanceDelegate_Event_1
inline void ALV-Title_Alternative_C::MoveLobbyCharacterAppearanceDelegate_Event_1() {
	static auto fn = UObject::FindObject<UFunction>("Function LV-Title_Alternative.LV-Title_Alternative_C.MoveLobbyCharacterAppearanceDelegate_Event_1");

	struct MoveLobbyCharacterAppearanceDelegate_Event_1_Params {
		
	}; MoveLobbyCharacterAppearanceDelegate_Event_1_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function LV-Title_Alternative.LV-Title_Alternative_C.MoveCreateCharacterAppearance
inline void ALV-Title_Alternative_C::MoveCreateCharacterAppearance() {
	static auto fn = UObject::FindObject<UFunction>("Function LV-Title_Alternative.LV-Title_Alternative_C.MoveCreateCharacterAppearance");

	struct MoveCreateCharacterAppearance_Params {
		
	}; MoveCreateCharacterAppearance_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function LV-Title_Alternative.LV-Title_Alternative_C.MoveCreateCharacterWearable
inline void ALV-Title_Alternative_C::MoveCreateCharacterWearable() {
	static auto fn = UObject::FindObject<UFunction>("Function LV-Title_Alternative.LV-Title_Alternative_C.MoveCreateCharacterWearable");

	struct MoveCreateCharacterWearable_Params {
		
	}; MoveCreateCharacterWearable_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function LV-Title_Alternative.LV-Title_Alternative_C.OnChangedArmoryTab
inline void ALV-Title_Alternative_C::OnChangedArmoryTab(struct FString TabName) {
	static auto fn = UObject::FindObject<UFunction>("Function LV-Title_Alternative.LV-Title_Alternative_C.OnChangedArmoryTab");

	struct OnChangedArmoryTab_Params {
		struct FString TabName;
	}; OnChangedArmoryTab_Params Params;

	Params.TabName = TabName;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function LV-Title_Alternative.LV-Title_Alternative_C.Event_Craft
inline void ALV-Title_Alternative_C::Event_Craft() {
	static auto fn = UObject::FindObject<UFunction>("Function LV-Title_Alternative.LV-Title_Alternative_C.Event_Craft");

	struct Event_Craft_Params {
		
	}; Event_Craft_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function LV-Title_Alternative.LV-Title_Alternative_C.CustomEvent
inline void ALV-Title_Alternative_C::CustomEvent() {
	static auto fn = UObject::FindObject<UFunction>("Function LV-Title_Alternative.LV-Title_Alternative_C.CustomEvent");

	struct CustomEvent_Params {
		
	}; CustomEvent_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function LV-Title_Alternative.LV-Title_Alternative_C.Event_CraftResult
inline void ALV-Title_Alternative_C::Event_CraftResult() {
	static auto fn = UObject::FindObject<UFunction>("Function LV-Title_Alternative.LV-Title_Alternative_C.Event_CraftResult");

	struct Event_CraftResult_Params {
		
	}; Event_CraftResult_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function LV-Title_Alternative.LV-Title_Alternative_C.SetCurrentArmoryCamera
inline void ALV-Title_Alternative_C::SetCurrentArmoryCamera() {
	static auto fn = UObject::FindObject<UFunction>("Function LV-Title_Alternative.LV-Title_Alternative_C.SetCurrentArmoryCamera");

	struct SetCurrentArmoryCamera_Params {
		
	}; SetCurrentArmoryCamera_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function LV-Title_Alternative.LV-Title_Alternative_C.SetArmorySequenceCamera
inline void ALV-Title_Alternative_C::SetArmorySequenceCamera() {
	static auto fn = UObject::FindObject<UFunction>("Function LV-Title_Alternative.LV-Title_Alternative_C.SetArmorySequenceCamera");

	struct SetArmorySequenceCamera_Params {
		
	}; SetArmorySequenceCamera_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function LV-Title_Alternative.LV-Title_Alternative_C.InitArmoryTab
inline void ALV-Title_Alternative_C::InitArmoryTab() {
	static auto fn = UObject::FindObject<UFunction>("Function LV-Title_Alternative.LV-Title_Alternative_C.InitArmoryTab");

	struct InitArmoryTab_Params {
		
	}; InitArmoryTab_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function LV-Title_Alternative.LV-Title_Alternative_C.ReceiveBeginPlay
inline void ALV-Title_Alternative_C::ReceiveBeginPlay() {
	static auto fn = UObject::FindObject<UFunction>("Function LV-Title_Alternative.LV-Title_Alternative_C.ReceiveBeginPlay");

	struct ReceiveBeginPlay_Params {
		
	}; ReceiveBeginPlay_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function LV-Title_Alternative.LV-Title_Alternative_C.ReceiveTick
inline void ALV-Title_Alternative_C::ReceiveTick(float DeltaSeconds) {
	static auto fn = UObject::FindObject<UFunction>("Function LV-Title_Alternative.LV-Title_Alternative_C.ReceiveTick");

	struct ReceiveTick_Params {
		float DeltaSeconds;
	}; ReceiveTick_Params Params;

	Params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function LV-Title_Alternative.LV-Title_Alternative_C.ReceiveDestroyed
inline void ALV-Title_Alternative_C::ReceiveDestroyed() {
	static auto fn = UObject::FindObject<UFunction>("Function LV-Title_Alternative.LV-Title_Alternative_C.ReceiveDestroyed");

	struct ReceiveDestroyed_Params {
		
	}; ReceiveDestroyed_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function LV-Title_Alternative.LV-Title_Alternative_C.ReceiveEndPlay
inline void ALV-Title_Alternative_C::ReceiveEndPlay(char EndPlayReason) {
	static auto fn = UObject::FindObject<UFunction>("Function LV-Title_Alternative.LV-Title_Alternative_C.ReceiveEndPlay");

	struct ReceiveEndPlay_Params {
		char EndPlayReason;
	}; ReceiveEndPlay_Params Params;

	Params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function LV-Title_Alternative.LV-Title_Alternative_C.ExecuteUbergraph_LV-Title_Alternative
inline void ALV-Title_Alternative_C::ExecuteUbergraph_LV-Title_Alternative(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function LV-Title_Alternative.LV-Title_Alternative_C.ExecuteUbergraph_LV-Title_Alternative");

	struct ExecuteUbergraph_LV-Title_Alternative_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_LV-Title_Alternative_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

