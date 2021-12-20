// Enum EngineSettings.ESub
enum class ESubd : uint8 {
	ESub = 0,
	ESubd = 1,
	ESubd = 2
};

// Enum EngineSettings.EFourPlayerSplitScreenType
enum class EFourPlayerSplitScreenType : uint8 {
	EFourPlayerSplitScreenType = 0,
	EFourPlayerSplitScreenType = 1,
	EFourPlayerSplitScreenType = 2,
	EFourPlayerSplitScreenType = 3
};

// Enum EngineSettings.EThreePlayerSplitScreenType
enum class EThreePlayerSplitScreenType : uint8 {
	EThreePlayerSplitScreenType = 0,
	EThreePlayerSplitScreenType = 1,
	EThreePlayerSplitScreenType = 2,
	EThreePlayerSplitScreenType = 3,
	EThreePlayerSplitScreenType = 4
};

// Enum EngineSettings.ETwoPlayerSplitScreenType
enum class ETwoPlayerSplitScreenType : uint8 {
	ETwoPlayerSplitScreenType = 0,
	ETwoPlayerSplitScreenType = 1,
	ETwoPlayerSplitScreenType = 2
};

// Class EngineSettings.ConsoleSettings
struct UConsoleSettings : Object {
	int32_t MaxScrollbackSize; //  0x28 Size(4)
	Unknown ManualAutoCompleteList; //  0x30 Size(10)
	Unknown AutoCompleteMapPaths; //  0x40 Size(10)
	float BackgroundOpacityPercentage; //  0x50 Size(4)
	char bOrderTopToBottom; //  0x54 Size(1)
	char bDisplayHelpInAutoComplete; //  0x55 Size(1)
	Unknown InputColor; //  0x58 Size(4)
	Unknown HistoryColor; //  0x5c Size(4)
	Unknown AutoCompleteCommandColor; //  0x60 Size(4)
	Unknown AutoCompleteCVarColor; //  0x64 Size(4)
	Unknown AutoCompleteFadedColor; //  0x68 Size(4)
};

// Class EngineSettings.GameMapsSettings
struct UGameMapsSettings : Object {
	struct FString LocalMapOptions; //  0x28 Size(10)
	Unknown TransitionMap; //  0x38 Size(18)
	char bUseSplitscreen; //  0x50 Size(1)
	Unknown TwoPlayerSplitscreenLayout; //  0x51 Size(1)
	Unknown ThreePlayerSplitscreenLayout; //  0x52 Size(1)
	Unknown FourPlayerSplitscreenLayout; //  0x53 Size(1)
	char bOffsetPlayerGamepadIds; //  0x54 Size(1)
	Unknown GameInstanceClass; //  0x58 Size(18)
	Unknown ServerGameInstanceClass; //  0x70 Size(18)
	Unknown GameDefaultMap; //  0x88 Size(18)
	Unknown ServerDefaultMap; //  0xa0 Size(18)
	Unknown Glob; //  0xb8 Size(18)
	Unknown GloberDefaultMap; //  0xd0 Size(18)
	Unknown GameModeMapPrefixes; //  0xe8 Size(10)
	Unknown GameModeClassAliases; //  0xf8 Size(10)

	void SetSkipAssigningGamepadToPlayer1(char bSkipFirstPlayer); // Function EngineSettings.GameMapsSettings.SetSkipAssigningGamepadToPlayer1(Final|Native|Public|BlueprintCallable) // <Game+0x2c1ea90>
};

// Class EngineSettings.GameNetworkManagerSettings
struct UGameNetworkManagerSettings : Object {
	int32_t MinDynamicBandwidth; //  0x28 Size(4)
	int32_t MaxDynamicBandwidth; //  0x2c Size(4)
	int32_t TotalNetBandwidth; //  0x30 Size(4)
	int32_t BadPingThreshold; //  0x34 Size(4)
	char bIsStandbyCheckingEnabled; //  0x38 Size(1)
	float StandbyRxCheatTime; //  0x3c Size(4)
	float StandbyTxCheatTime; //  0x40 Size(4)
	float PercentMissingForRxStandby; //  0x44 Size(4)
	float PercentMissingForTxStandby; //  0x48 Size(4)
	float PercentForBadPing; //  0x4c Size(4)
	float JoinInProgressStandbyWaitTime; //  0x50 Size(4)
};

// Class EngineSettings.GameSessionSettings
struct UGameSessionSettings : Object {
	int32_t MaxSpectators; //  0x28 Size(4)
	int32_t MaxPlayers; //  0x2c Size(4)
	char bRequiresPushToTalk; //  0x30 Size(1)
};

// Class EngineSettings.GeneralProjectSettings
struct UGeneralProjectSettings : Object {
	struct FString CompanyName; //  0x28 Size(10)
	struct FString CompanyDistinguishedName; //  0x38 Size(10)
	struct FString CopyrightNotice; //  0x48 Size(10)
	struct FString Description; //  0x58 Size(10)
	struct FString Homepage; //  0x68 Size(10)
	struct FString LicensingTerms; //  0x78 Size(10)
	struct FString PrivacyPolicy; //  0x88 Size(10)
	Unknown ProjectID; //  0x98 Size(10)
	struct FString ProjectName; //  0xa8 Size(10)
	struct FString ProjectVersion; //  0xb8 Size(10)
	struct FString SupportContact; //  0xc8 Size(10)
	struct FText ProjectDisplayedTitle; //  0xd8 Size(18)
	struct FText ProjectDebugTitleInfo; //  0xf0 Size(18)
	char bShouldWindowPreserveAspectRatio; //  0x108 Size(1)
	char bUseBorderlessWindow; //  0x109 Size(1)
	char bStartInVR; //  0x10a Size(1)
	char bStartInAR; //  0x10b Size(1)
	char bSupportAR; //  0x10c Size(1)
	char bAllowWindowResize; //  0x10d Size(1)
	char bAllowClose; //  0x10e Size(1)
	char bAllowMaximize; //  0x10f Size(1)
	char bAllowMinimize; //  0x110 Size(1)
};

// Class EngineSettings.HudSettings
struct UHudSettings : Object {
	char bShowHUD; //  0x28 Size(1)
	Unknown DebugDisplay; //  0x30 Size(10)
};

