// Enum EngineSettings.ESubLevelStripMode
enum class ESubLevelStripMode : uint8 {
	ESubLevelStripMode = 0
	ESubLevelStripMode = 1
	ESubLevelStripMode = 2
};

// Enum EngineSettings.EFourPlayerSplitScreenType
enum class EFourPlayerSplitScreenType : uint8 {
	EFourPlayerSplitScreenType = 0
	EFourPlayerSplitScreenType = 1
	EFourPlayerSplitScreenType = 2
	EFourPlayerSplitScreenType = 3
};

// Enum EngineSettings.EThreePlayerSplitScreenType
enum class EThreePlayerSplitScreenType : uint8 {
	EThreePlayerSplitScreenType = 0
	EThreePlayerSplitScreenType = 1
	EThreePlayerSplitScreenType = 2
	EThreePlayerSplitScreenType = 3
	EThreePlayerSplitScreenType = 4
};

// Enum EngineSettings.ETwoPlayerSplitScreenType
enum class ETwoPlayerSplitScreenType : uint8 {
	ETwoPlayerSplitScreenType = 0
	ETwoPlayerSplitScreenType = 1
	ETwoPlayerSplitScreenType = 2
};

// Class EngineSettings.ConsoleSettings
class UConsoleSettings : Object {
	int32_t MaxScrollbackSize; // 0x28 (4)
	struct TArray<Unknown> ManualAutoCompleteList; // 0x30 (16)
	struct TArray<Unknown> AutoCompleteMapPaths; // 0x40 (16)
	float BackgroundOpacityPercentage; // 0x50 (4)
	char bOrderTopToBottom : 0; // 0x54 (1)
	char bDisplayHelpInAutoComplete : 0; // 0x55 (1)
	struct Unknown InputColor; // 0x58 (4)
	struct Unknown HistoryColor; // 0x5C (4)
	struct Unknown AutoCompleteCommandColor; // 0x60 (4)
	struct Unknown AutoCompleteCVarColor; // 0x64 (4)
	struct Unknown AutoCompleteFadedColor; // 0x68 (4)
};

// Class EngineSettings.GameMapsSettings
class UGameMapsSettings : Object {
	struct FString LocalMapOptions; // 0x28 (16)
	struct Unknown TransitionMap; // 0x38 (24)
	char bUseSplitscreen : 0; // 0x50 (1)
	char TwoPlayerSplitscreenLayout; // 0x51 (1)
	char ThreePlayerSplitscreenLayout; // 0x52 (1)
	enum class Unknow FourPlayerSplitscreenLayout; // 0x53 (1)
	char bOffsetPlayerGamepadIds : 0; // 0x54 (1)
	struct Unknown GameInstanceClass; // 0x58 (24)
	struct Unknown ServerGameInstanceClass; // 0x70 (24)
	struct Unknown GameDefaultMap; // 0x88 (24)
	struct Unknown ServerDefaultMap; // 0xA0 (24)
	struct Unknown GlobalDefaultGameMode; // 0xB8 (24)
	struct Unknown GlobalDefaultServerGameMode; // 0xD0 (24)
	struct TArray<Unknown> GameModeMapPrefixes; // 0xE8 (16)
	struct TArray<Unknown> GameModeClassAliases; // 0xF8 (16)

	void SetSkipAssigningGamepadToPlayer1(char bSkipFirstPlayer); // Function EngineSettings.GameMapsSettings.SetSkipAssigningGamepadToPlayer1(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2C297E0>
	char GetSkipAssigningGamepadToPlayer1(); // Function EngineSettings.GameMapsSettings.GetSkipAssigningGamepadToPlayer1(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2C297B0>
	struct Unknown GetGameMapsSettings(); // Function EngineSettings.GameMapsSettings.GetGameMapsSettings(Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2C29780>
};

// Class EngineSettings.GameNetworkManagerSettings
class UGameNetworkManagerSettings : Object {
	int32_t MinDynamicBandwidth; // 0x28 (4)
	int32_t MaxDynamicBandwidth; // 0x2C (4)
	int32_t TotalNetBandwidth; // 0x30 (4)
	int32_t BadPingThreshold; // 0x34 (4)
	char bIsStandbyCheckingEnabled : 0; // 0x38 (1)
	float StandbyRxCheatTime; // 0x3C (4)
	float StandbyTxCheatTime; // 0x40 (4)
	float PercentMissingForRxStandby; // 0x44 (4)
	float PercentMissingForTxStandby; // 0x48 (4)
	float PercentForBadPing; // 0x4C (4)
	float JoinInProgressStandbyWaitTime; // 0x50 (4)
};

// Class EngineSettings.GameSessionSettings
class UGameSessionSettings : Object {
	int32_t MaxSpectators; // 0x28 (4)
	int32_t MaxPlayers; // 0x2C (4)
	char bRequiresPushToTalk : 0; // 0x30 (1)
};

// Class EngineSettings.GeneralProjectSettings
class UGeneralProjectSettings : Object {
	struct FString CompanyName; // 0x28 (16)
	struct FString CompanyDistinguishedName; // 0x38 (16)
	struct FString CopyrightNotice; // 0x48 (16)
	struct FString Description; // 0x58 (16)
	struct FString Homepage; // 0x68 (16)
	struct FString LicensingTerms; // 0x78 (16)
	struct FString PrivacyPolicy; // 0x88 (16)
	struct Unknown ProjectID; // 0x98 (16)
	struct FString ProjectName; // 0xA8 (16)
	struct FString ProjectVersion; // 0xB8 (16)
	struct FString SupportContact; // 0xC8 (16)
	struct FText ProjectDisplayedTitle; // 0xD8 (24)
	struct FText ProjectDebugTitleInfo; // 0xF0 (24)
	char bShouldWindowPreserveAspectRatio : 0; // 0x108 (1)
	char bUseBorderlessWindow : 0; // 0x109 (1)
	char bStartInVR : 0; // 0x10A (1)
	char bStartInAR : 0; // 0x10B (1)
	char bSupportAR : 0; // 0x10C (1)
	char bAllowWindowResize : 0; // 0x10D (1)
	char bAllowClose : 0; // 0x10E (1)
	char bAllowMaximize : 0; // 0x10F (1)
	char bAllowMinimize : 0; // 0x110 (1)
};

// Class EngineSettings.HudSettings
class UHudSettings : Object {
	char bShowHUD : 0; // 0x28 (1)
	struct TArray<Unknown> DebugDisplay; // 0x30 (16)
};

// ScriptStruct EngineSettings.AutoCompleteCommand
struct FAutoCompleteCommand {
	struct FString Command; // 0x0 (16)
	struct FString Desc; // 0x10 (16)
};

// ScriptStruct EngineSettings.GameModeName
struct FGameModeName {
	struct FString Name; // 0x0 (16)
	struct Unknown GameMode; // 0x10 (24)
};

