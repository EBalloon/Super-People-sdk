// Enum EngineSettings.ESubLevelStripMode
enum class ESubLevelStripMode : uint8_t {
	ExactClass = 0,
	IsChildOf = 1,
	ESubLevelStripMode_MAX = 2,
};

// Enum EngineSettings.EFourPlayerSplitScreenType
enum class EFourPlayerSplitScreenType : uint8_t {
	Grid = 0,
	Vertical = 1,
	Horizontal = 2,
	EFourPlayerSplitScreenType_MAX = 3,
};

// Enum EngineSettings.EThreePlayerSplitScreenType
enum class EThreePlayerSplitScreenType : uint8_t {
	FavorTop = 0,
	FavorBottom = 1,
	Vertical = 2,
	Horizontal = 3,
	EThreePlayerSplitScreenType_MAX = 4,
};

// Enum EngineSettings.ETwoPlayerSplitScreenType
enum class ETwoPlayerSplitScreenType : uint8_t {
	Horizontal = 0,
	Vertical = 1,
	ETwoPlayerSplitScreenType_MAX = 2,
};

// Class EngineSettings.ConsoleSettings
class UConsoleSettings : public Object {

public:

	int32_t MaxScrollbackSize; // 0x28 (4)
	struct TArray<struct FAutoCompleteCommand> ManualAutoCompleteList; // 0x30 (16)
	struct TArray<struct FString> AutoCompleteMapPaths; // 0x40 (16)
	float BackgroundOpacityPercentage; // 0x50 (4)
	char bOrderTopToBottom : 0; // 0x54 (1)
	char bDisplayHelpInAutoComplete : 0; // 0x55 (1)
	struct FColor InputColor; // 0x58 (4)
	struct FColor HistoryColor; // 0x5C (4)
	struct FColor AutoCompleteCommandColor; // 0x60 (4)
	struct FColor AutoCompleteCVarColor; // 0x64 (4)
	struct FColor AutoCompleteFadedColor; // 0x68 (4)
};

// Class EngineSettings.GameMapsSettings
class UGameMapsSettings : public Object {

public:

	struct FString LocalMapOptions; // 0x28 (16)
	struct FSoftObjectPath TransitionMap; // 0x38 (24)
	char bUseSplitscreen : 0; // 0x50 (1)
	char TwoPlayerSplitscreenLayout; // 0x51 (1)
	char ThreePlayerSplitscreenLayout; // 0x52 (1)
	enum class EFourPlayerSplitScreenType FourPlayerSplitscreenLayout; // 0x53 (1)
	char bOffsetPlayerGamepadIds : 0; // 0x54 (1)
	struct FSoftClassPath GameInstanceClass; // 0x58 (24)
	struct FSoftClassPath ServerGameInstanceClass; // 0x70 (24)
	struct FSoftObjectPath GameDefaultMap; // 0x88 (24)
	struct FSoftObjectPath ServerDefaultMap; // 0xA0 (24)
	struct FSoftClassPath GlobalDefaultGameMode; // 0xB8 (24)
	struct FSoftClassPath GlobalDefaultServerGameMode; // 0xD0 (24)
	struct TArray<struct FGameModeName> GameModeMapPrefixes; // 0xE8 (16)
	struct TArray<struct FGameModeName> GameModeClassAliases; // 0xF8 (16)

	void SetSkipAssigningGamepadToPlayer1(char bSkipFirstPlayer); // Function EngineSettings.GameMapsSettings.SetSkipAssigningGamepadToPlayer1(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3419CB0>
	char GetSkipAssigningGamepadToPlayer1(); // Function EngineSettings.GameMapsSettings.GetSkipAssigningGamepadToPlayer1(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3419C80>
	struct UGameMapsSettings GetGameMapsSettings(); // Function EngineSettings.GameMapsSettings.GetGameMapsSettings(Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3419C50>
};

// Class EngineSettings.GameNetworkManagerSettings
class UGameNetworkManagerSettings : public Object {

public:

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
class UGameSessionSettings : public Object {

public:

	int32_t MaxSpectators; // 0x28 (4)
	int32_t MaxPlayers; // 0x2C (4)
	char bRequiresPushToTalk : 0; // 0x30 (1)
};

// Class EngineSettings.GeneralProjectSettings
class UGeneralProjectSettings : public Object {

public:

	struct FString CompanyName; // 0x28 (16)
	struct FString CompanyDistinguishedName; // 0x38 (16)
	struct FString CopyrightNotice; // 0x48 (16)
	struct FString Description; // 0x58 (16)
	struct FString Homepage; // 0x68 (16)
	struct FString LicensingTerms; // 0x78 (16)
	struct FString PrivacyPolicy; // 0x88 (16)
	struct FGuid ProjectID; // 0x98 (16)
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
class UHudSettings : public Object {

public:

	char bShowHUD : 0; // 0x28 (1)
	struct TArray<struct FName> DebugDisplay; // 0x30 (16)
};

// ScriptStruct EngineSettings.AutoCompleteCommand
struct FAutoCompleteCommand {
	struct FString Command; // 0x0 (16)
	struct FString Desc; // 0x10 (16)
};

// ScriptStruct EngineSettings.GameModeName
struct FGameModeName {
	struct FString Name; // 0x0 (16)
	struct FSoftClassPath GameMode; // 0x10 (24)
};

// Function EngineSettings.GameMapsSettings.SetSkipAssigningGamepadToPlayer1
inline void UGameMapsSettings::SetSkipAssigningGamepadToPlayer1(char bSkipFirstPlayer) {
	static auto fn = UObject::FindObject<UFunction>("Function EngineSettings.GameMapsSettings.SetSkipAssigningGamepadToPlayer1");

	struct SetSkipAssigningGamepadToPlayer1_Params {
		char bSkipFirstPlayer;
	}; SetSkipAssigningGamepadToPlayer1_Params Params;

	Params.bSkipFirstPlayer = bSkipFirstPlayer;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function EngineSettings.GameMapsSettings.GetSkipAssigningGamepadToPlayer1
inline char UGameMapsSettings::GetSkipAssigningGamepadToPlayer1() {
	static auto fn = UObject::FindObject<UFunction>("Function EngineSettings.GameMapsSettings.GetSkipAssigningGamepadToPlayer1");

	struct GetSkipAssigningGamepadToPlayer1_Params {
		
		char ReturnValue;

	}; GetSkipAssigningGamepadToPlayer1_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function EngineSettings.GameMapsSettings.GetGameMapsSettings
inline struct UGameMapsSettings UGameMapsSettings::GetGameMapsSettings() {
	static auto fn = UObject::FindObject<UFunction>("Function EngineSettings.GameMapsSettings.GetGameMapsSettings");

	struct GetGameMapsSettings_Params {
		
		struct UGameMapsSettings ReturnValue;

	}; GetGameMapsSettings_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

