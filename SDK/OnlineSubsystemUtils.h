// Enum OnlineSubsystemUtils.EInAppPurchaseStatus
enum class EInAppPurchaseStatus : uint8 {
	EInAppPurchaseStatus = 0,
	EInAppPurchaseStatus = 1,
	EInAppPurchaseStatus = 2,
	EInAppPurchaseStatus = 3,
	EInAppPurchaseStatus = 4,
	EInAppPurchaseStatus = 5,
	EInAppPurchaseStatus = 6
};

// Enum OnlineSubsystemUtils.EOnlineProxyStoreOfferDiscountType
enum class EOnlineProxyStoreOfferDiscountType : uint8 {
	EOnlineProxyStoreOfferDiscountType = 0,
	EOnlineProxyStoreOfferDiscountType = 1,
	EOnlineProxyStoreOfferDiscountType = 2,
	EOnlineProxyStoreOfferDiscountType = 3,
	EOnlineProxyStoreOfferDiscountType = 4
};

// Enum OnlineSubsystemUtils.EBeaconConnectionState
enum class EBeaconConnectionState : uint8 {
	EBeaconConnectionState = 0,
	EBeaconConnectionState = 1,
	EBeaconConnectionState = 2,
	EBeaconConnectionState = 3,
	EBeaconConnectionState = 4
};

// Enum OnlineSubsystemUtils.EClientRequestType
enum class EClientRequestType : uint8 {
	EClientRequestType = 0,
	EClientRequestType = 1,
	EClientRequestType = 2,
	EClientRequestType = 3,
	EClientRequestType = 4,
	EClientRequestType = 5,
	EClientRequestType = 6,
	EClientRequestType = 7
};

// Enum OnlineSubsystemUtils.EPartyReservationResult
enum class EPartyReservationResult : uint8 {
	EPartyReservationResult = 0,
	EPartyReservationResult = 1,
	EPartyReservationResult = 2,
	EPartyReservationResult = 3,
	EPartyReservationResult = 4,
	EPartyReservationResult = 5,
	EPartyReservationResult = 6,
	EPartyReservationResult = 7,
	EPartyReservationResult = 8,
	EPartyReservationResult = 9,
	EPartyReservationResult = 10,
	EPartyReservationResult = 11,
	EPartyReservationResult = 12,
	EPartyReservationResult = 13,
	EPartyReservationResult = 14,
	EPartyReservationResult = 15,
	EPartyReservationResult = 16
};

// Enum OnlineSubsystemUtils.ESpectatorClientRequestType
enum class ESpectatorClientRequestType : uint8 {
	ESpectatorClientRequestType = 0,
	ESpectatorClientRequestType = 1,
	ESpectatorClientRequestType = 2,
	ESpectatorClientRequestType = 3,
	ESpectatorClientRequestType = 4,
	ESpectatorClientRequestType = 5,
	ESpectatorClientRequestType = 6
};

// Enum OnlineSubsystemUtils.ESpectatorReservationResult
enum class ESpectatorReservationResult : uint8 {
	ESpectatorReservationResult = 0,
	ESpectatorReservationResult = 1,
	ESpectatorReservationResult = 2,
	ESpectatorReservationResult = 3,
	ESpectatorReservationResult = 4,
	ESpectatorReservationResult = 5,
	ESpectatorReservationResult = 6,
	ESpectatorReservationResult = 7,
	ESpectatorReservationResult = 8,
	ESpectatorReservationResult = 9,
	ESpectatorReservationResult = 10,
	ESpectatorReservationResult = 11,
	ESpectatorReservationResult = 12,
	ESpectatorReservationResult = 13,
	ESpectatorReservationResult = 14,
	ESpectatorReservationResult = 15,
	ESpectatorReservationResult = 16
};

// Class OnlineSubsystemUtils.IpConnection
struct UIpConnection : UNetConnection {
	float SocketErrorDisconnectDelay; //  0x1af0 Size(4)
};

// Class OnlineSubsystemUtils.IpNetDriver
struct UIpNetDriver : UNetDriver {
	char LogPortUnreach; //  0x748 Size(1)
	char AllowPlayerPortUnreach; //  0x748 Size(1)
	uint32_t MaxPortCountToTry; //  0x74c Size(4)
	uint32_t ServerDesiredSocketReceiveBufferBytes; //  0x75c Size(4)
	uint32_t ServerDesiredSocketSendBufferBytes; //  0x760 Size(4)
	uint32_t ClientDesiredSocketReceiveBufferBytes; //  0x764 Size(4)
	uint32_t ClientDesiredSocketSendBufferBytes; //  0x768 Size(4)
	double MaxSecondsInReceive; //  0x770 Size(8)
	int32_t NbPacketsBetweenReceiveTimeTest; //  0x778 Size(4)
	float ResolutionConnectionTimeout; //  0x77c Size(4)
};

// Class OnlineSubsystemUtils.AchievementQueryCallbackProxy
struct UAchievementQueryCallbackProxy : UOnlineBlueprintCallProxyBas {
	struct FMulticastInlineDelegate OnSuccess; //  0x30 Size(10)
	struct FMulticastInlineDelegate OnFailure; //  0x40 Size(10)

	struct Unknown CacheAchievements(struct Unknown WorldContextObject, struct Unknown PlayerController); // Function OnlineSubsystemUtils.AchievementQueryCallbackProxy.CacheAchievements(Final|Native|Static|Public|BlueprintCallable) // <Game+0x11c75f0>
};

// Class OnlineSubsystemUtils.AchievementWriteCallbackProxy
struct UAchievementWriteCallbackProxy : UOnlineBlueprintCallProxyBas {
	struct FMulticastInlineDelegate OnSuccess; //  0x30 Size(10)
	struct FMulticastInlineDelegate OnFailure; //  0x40 Size(10)

	struct Unknown WriteAchievementProgress(struct Unknown WorldContextObject, struct Unknown PlayerController, struct FName AchievementName, float progress, int32_t UserTag); // Function OnlineSubsystemUtils.AchievementWriteCallbackProxy.WriteAchievementProgress(Final|Native|Static|Public|BlueprintCallable) // <Game+0x11c9220>
};

// Class OnlineSubsystemUtils.ConnectionCallbackProxy
struct UConnectionCallbackProxy : UOnlineBlueprintCallProxyBas {
	struct FMulticastInlineDelegate OnSuccess; //  0x30 Size(10)
	struct FMulticastInlineDelegate OnFailure; //  0x40 Size(10)

	struct Unknown ConnectToService(struct Unknown WorldContextObject, struct Unknown PlayerController); // Function OnlineSubsystemUtils.ConnectionCallbackProxy.ConnectToService(Final|Native|Static|Public|BlueprintCallable) // <Game+0x11c76b0>
};

// Class OnlineSubsystemUtils.CreateSessionCallbackProxy
struct UCreateSessionCallbackProxy : UOnlineBlueprintCallProxyBass {
	struct FMulticastInlineDelegate OnSuccess; //  0x30 Size(10)
	struct FMulticastInlineDelegate OnFailure; //  0x40 Size(10)

	struct Unknown CreateSession(struct Unknown WorldContextObject, struct Unknown PlayerController, int32_t PublicConnections, char bUseLAN); // Function OnlineSubsystemUtils.CreateSessionCallbackProxy.CreateSession(Final|Native|Static|Public|BlueprintCallable) // <Game+0x11c7c70>
};

// Class OnlineSubsystemUtils.DestroySessionCallbackProxy
struct UDestroySessionCallbackProxy : UOnlineBlueprintCallProxyBas {
	struct FMulticastInlineDelegate OnSuccess; //  0x30 Size(10)
	struct FMulticastInlineDelegate OnFailure; //  0x40 Size(10)

	struct Unknown DestroySession(struct Unknown WorldContextObject, struct Unknown PlayerController); // Function OnlineSubsystemUtils.DestroySessionCallbackProxy.DestroySession(Final|Native|Static|Public|BlueprintCallable) // <Game+0x11c7da0>
};

// Class OnlineSubsystemUtils.EndMatchCallbackProxy
struct UEndMatchCallbackProxy : UOnlineBlueprintCallProxyBas {
	struct FMulticastInlineDelegate OnSuccess; //  0x30 Size(10)
	struct FMulticastInlineDelegate OnFailure; //  0x40 Size(10)

	struct Unknown EndMatch(struct Unknown WorldContextObject, struct Unknown PlayerController, struct TScriptInterface<IUnknown> MatchActor, struct FString MatchID, char LocalPlayerOutcome, char OtherPlayersOutcome); // Function OnlineSubsystemUtils.EndMatchCallbackProxy.EndMatch(Final|Native|Static|Public|BlueprintCallable) // <Game+0x11c7e60>
};

// Class OnlineSubsystemUtils.EndTurnCallbackProxy
struct UEndTurnCallbackProxy : UOnlineBlueprintCallProxyBass {
	struct FMulticastInlineDelegate OnSuccess; //  0x30 Size(10)
	struct FMulticastInlineDelegate OnFailure; //  0x40 Size(10)

	struct Unknown EndTurn(struct Unknown WorldContextObject, struct Unknown PlayerController, struct FString MatchID, struct TScriptInterface<IUnknown> TurnBasedMatchInterface); // Function OnlineSubsystemUtils.EndTurnCallbackProxy.EndTurn(Final|Native|Static|Public|BlueprintCallable) // <Game+0x11c8090>
};

// Class OnlineSubsystemUtils.FindSessionsCallbackProxy
struct UFindSessionsCallbackProxy : UOnlineBlueprintCallProxyBas {
	struct FMulticastInlineDelegate OnSuccess; //  0x30 Size(10)
	struct FMulticastInlineDelegate OnFailure; //  0x40 Size(10)

	struct FString GetServerName(struct Unknown& Result); // Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetServerName(Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // <Game+0x11c9000>
};

// Class OnlineSubsystemUtils.FindTurnBasedMatchCallbackProxy
struct UFindTurnBasedMatchCallbackProxy : UOnlineBlueprintCallProxyBasr {
	struct FMulticastInlineDelegate OnSuccess; //  0x30 Size(10)
	struct FMulticastInlineDelegate OnFailure; //  0x40 Size(10)

	struct Unknown FindTurnBasedMatch(struct Unknown WorldContextObject, struct Unknown PlayerController, struct TScriptInterface<IUnknown> MatchActor, int32_t MinPlayers, int32_t MaxPlayers, int32_t PlayerGroup, char ShowExistingMatches); // Function OnlineSubsystemUtils.FindTurnBasedMatchCallbackProxy.FindTurnBasedMatch(Final|Native|Static|Public|BlueprintCallable) // <Game+0x11c8360>
};

// Class OnlineSubsystemUtils.InAppPurchaseCallbackProxy
struct UInAppPurchaseCallbackProxy : Object {
	struct FMulticastInlineDelegate OnSuccess; //  0x28 Size(10)
	struct FMulticastInlineDelegate OnFailure; //  0x38 Size(10)

	struct Unknown CreateProxyObjectForInAppPurchase(struct Unknown PlayerController, struct Unknown& ProductRequest); // Function OnlineSubsystemUtils.InAppPurchaseCallbackProxy.CreateProxyObjectForInAppPurchase(Final|Native|Static|Public|HasOutParms|BlueprintCallable) // <Game+0x11c7860>
};

// Class OnlineSubsystemUtils.InAppPurchaseCallbackProxy2
struct UInAppPurchaseCallbackProxy2 : Object {
	struct FMulticastInlineDelegate OnSuccess; //  0x28 Size(10)
	struct FMulticastInlineDelegate OnFailure; //  0x38 Size(10)

	struct Unknown CreateProxyObjectForInAppPurchaseUnprocessedPurchases(struct Unknown PlayerController); // Function OnlineSubsystemUtils.InAppPurchaseCallbackProxy2.CreateProxyObjectForInAppPurchaseUnprocessedPurchases(Final|Native|Static|Public|BlueprintCallable) // <Game+0x11c7bf0>
};

// Class OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy
struct UInAppPurchaseQueryCallbackProxy : Object {
	struct FMulticastInlineDelegate OnSuccess; //  0x28 Size(10)
	struct FMulticastInlineDelegate OnFailure; //  0x38 Size(10)

	struct Unknown CreateProxyObjectForInAppPurchaseQuery(struct Unknown PlayerController, struct TArray<Unknown>& ProductIdentifiers); // Function OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy.CreateProxyObjectForInAppPurchaseQuery(Final|Native|Static|Public|HasOutParms|BlueprintCallable) // <Game+0x11c7a60>
};

// Class OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy2
struct UInAppPurchaseQueryCallbackProxy2 : Object {
	struct FMulticastInlineDelegate OnSuccess; //  0x28 Size(10)
	struct FMulticastInlineDelegate OnFailure; //  0x38 Size(10)

	struct Unknown CreateProxyObjectForInAppPurchaseQuery(struct Unknown PlayerController, struct TArray<Unknown>& ProductIdentifiers); // Function OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy2.CreateProxyObjectForInAppPurchaseQuery(Final|Native|Static|Public|HasOutParms|BlueprintCallable) // <Game+0x11c7950>
};

// Class OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy
struct UInAppPurchaseRestoreCallbackProxy : Object {
	struct FMulticastInlineDelegate OnSuccess; //  0x28 Size(10)
	struct FMulticastInlineDelegate OnFailure; //  0x38 Size(10)

	struct Unknown CreateProxyObjectForInAppPurchaseRestore(struct TArray<Unknown>& ConsumableProductFlags, struct Unknown PlayerController); // Function OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy.CreateProxyObjectForInAppPurchaseRestore(Final|Native|Static|Public|HasOutParms|BlueprintCallable) // <Game+0x11ccf20>
};

// Class OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy2
struct UInAppPurchaseRestoreCallbackProxy2 : Object {
	struct FMulticastInlineDelegate OnSuccess; //  0x28 Size(10)
	struct FMulticastInlineDelegate OnFailure; //  0x38 Size(10)

	struct Unknown CreateProxyObjectForInAppPurchaseRestore(struct TArray<Unknown>& ConsumableProductFlags, struct Unknown PlayerController); // Function OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy2.CreateProxyObjectForInAppPurchaseRestore(Final|Native|Static|Public|HasOutParms|BlueprintCallable) // <Game+0x11cce00>
};

// Class OnlineSubsystemUtils.JoinSessionCallbackProxy
struct UJoinSessionCallbackProxy : UOnlineBlueprintCallProxyBas {
	struct FMulticastInlineDelegate OnSuccess; //  0x30 Size(10)
	struct FMulticastInlineDelegate OnFailure; //  0x40 Size(10)

	struct Unknown JoinSession(struct Unknown WorldContextObject, struct Unknown PlayerController, struct Unknown& SearchResult); // Function OnlineSubsystemUtils.JoinSessionCallbackProxy.JoinSession(Final|Native|Static|Public|HasOutParms|BlueprintCallable) // <Game+0x11cd100>
};

// Class OnlineSubsystemUtils.LeaderboardFlushCallbackProxy
struct ULeaderboardFlushCallbackProxy : Object {
	struct FMulticastInlineDelegate OnSuccess; //  0x28 Size(10)
	struct FMulticastInlineDelegate OnFailure; //  0x38 Size(10)

	struct Unknown CreateProxyObjectForFlush(struct Unknown PlayerController, struct FName SessionName); // Function OnlineSubsystemUtils.LeaderboardFlushCallbackProxy.CreateProxyObjectForFlush(Final|Native|Static|Public|BlueprintCallable) // <Game+0x11ccd40>
};

// Class OnlineSubsystemUtils.LeaderboardQueryCallbackProxy
struct ULeaderboardQueryCallbackProxy : Object {
	struct FMulticastInlineDelegate OnSuccess; //  0x28 Size(10)
	struct FMulticastInlineDelegate OnFailure; //  0x38 Size(10)

	struct Unknown CreateProxyObjectForIntQuery(struct Unknown PlayerController, struct FName StatName); // Function OnlineSubsystemUtils.LeaderboardQueryCallbackProxy.CreateProxyObjectForIntQuery(Final|Native|Static|Public|BlueprintCallable) // <Game+0x11cd040>
};

// Class OnlineSubsystemUtils.LogoutCallbackProxy
struct ULogoutCallbackProxy : UBlueprintAsyncActionBase {
	struct FMulticastInlineDelegate OnSuccess; //  0x30 Size(10)
	struct FMulticastInlineDelegate OnFailure; //  0x40 Size(10)

	struct Unknown Logout(struct Unknown WorldContextObject, struct Unknown PlayerController); // Function OnlineSubsystemUtils.LogoutCallbackProxy.Logout(Final|Native|Static|Public|BlueprintCallable) // <Game+0x11cd360>
};

// Class OnlineSubsystemUtils.OnlineBeacon
struct AOnlineBeacon : UActor {
	float BeaconConnectionInitialTimeout; //  0x318 Size(4)
	float BeaconConnectionTimeout; //  0x31c Size(4)
	struct Unknown NetDriver; //  0x320 Size(8)
};

// Class OnlineSubsystemUtils.OnlineBeaconClient
struct AOnlineBeaconClient : AOnlineBeacon {
	struct Unknown BeaconOwner; //  0x340 Size(8)
	struct Unknown BeaconConnection; //  0x348 Size(8)
	enum class Unknow ConnectionState; //  0x350 Size(1)

	void ClientOnConnected(); // Function OnlineSubsystemUtils.OnlineBeaconClient.ClientOnConnected(Final|Net|NetReliableNative|Event|Private|NetClient) // <Game+0x11ccbf0>
};

// Class OnlineSubsystemUtils.OnlineBeaconHost
struct AOnlineBeaconHost : AOnlineBeacon {
	int32_t ListenPort; //  0x340 Size(4)
	struct TArray<Unknown> ClientActors; //  0x348 Size(10)
};

// Class OnlineSubsystemUtils.OnlineBeaconHostObject
struct AOnlineBeaconHostObject : UActor {
	struct FString BeaconTypeName; //  0x310 Size(10)
	struct Unknown* ClientBeaconActorClass; //  0x320 Size(8)
	struct TArray<Unknown> ClientActors; //  0x328 Size(10)
};

// Class OnlineSubsystemUtils.OnlineEngineInterfaceImpl
struct UOnlineEngineInterfaceImpl : UOnlineEngineInterface {
	struct FName VoiceSubsystemNameOverride; //  0x28 Size(8)
};

// Class OnlineSubsystemUtils.OnlinePIESettings
struct UOnlinePIESettings : UDeveloperSettings {
	char bOnlinePIEEnabled; //  0x38 Size(1)
	struct TArray<Unknown> Logins; //  0x40 Size(10)
};

// Class OnlineSubsystemUtils.OnlineSessionClient
struct UOnlineSessionClient : UOnlineSession {
	char bIsFromInvite; //  0x188 Size(1)
	char bHandlingDisconnect; //  0x189 Size(1)
};

// Class OnlineSubsystemUtils.PartyBeaconClient
struct APartyBeaconClient : AOnlineBeaconClient {
	struct FString DestSessionId; //  0x3d0 Size(10)
	struct Unknown PendingReservation; //  0x3e0 Size(50)
	enum class Unknow RequestType; //  0x430 Size(1)
	char bPendingReservationSent; //  0x431 Size(1)
	char bCancelReservation; //  0x432 Size(1)

	void ServerUpdateReservationRequest(struct FString SessionID, struct Unknown ReservationUpdate); // Function OnlineSubsystemUtils.PartyBeaconClient.ServerUpdateReservationRequest(Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // <Game+0x11cdc40>
};

// Class OnlineSubsystemUtils.PartyBeaconHost
struct APartyBeaconHost : AOnlineBeaconHostObject {
	struct Unknown State; //  0x338 Size(8)
	char bLogoutOnSessionTimeout; //  0x3a0 Size(1)
	float SessionTimeoutSecs; //  0x3a4 Size(4)
	float TravelSessionTimeoutSecs; //  0x3a8 Size(4)
};

// Class OnlineSubsystemUtils.PartyBeaconState
struct UPartyBeaconState : Object {
	struct FName SessionName; //  0x28 Size(8)
	int32_t NumConsumedReservations; //  0x30 Size(4)
	int32_t MaxReservations; //  0x34 Size(4)
	int32_t NumTeams; //  0x38 Size(4)
	int32_t NumPlayersPerTeam; //  0x3c Size(4)
	struct FName TeamAssignmentMethod; //  0x40 Size(8)
	int32_t ReservedHostTeamNum; //  0x48 Size(4)
	int32_t ForceTeamNum; //  0x4c Size(4)
	char bRestrictCrossConsole; //  0x50 Size(1)
	char bEnableRemovalRequests; //  0x51 Size(1)
	struct TArray<Unknown> Reservations; //  0x58 Size(10)
};

// Class OnlineSubsystemUtils.QuitMatchCallbackProxy
struct UQuitMatchCallbackProxy : UOnlineBlueprintCallProxyBas {
	struct FMulticastInlineDelegate OnSuccess; //  0x30 Size(10)
	struct FMulticastInlineDelegate OnFailure; //  0x40 Size(10)

	struct Unknown QuitMatch(struct Unknown WorldContextObject, struct Unknown PlayerController, struct FString MatchID, char Outcome, int32_t TurnTimeoutInSeconds); // Function OnlineSubsystemUtils.QuitMatchCallbackProxy.QuitMatch(Final|Native|Static|Public|BlueprintCallable) // <Game+0x11cd420>
};

// Class OnlineSubsystemUtils.ShowLoginUICallbackProxy
struct UShowLoginUICallbackProxy : UBlueprintAsyncActionBase {
	struct FMulticastInlineDelegate OnSuccess; //  0x30 Size(10)
	struct FMulticastInlineDelegate OnFailure; //  0x40 Size(10)

	struct Unknown ShowExternalLoginUI(struct Unknown WorldContextObject, struct Unknown InPlayerController); // Function OnlineSubsystemUtils.ShowLoginUICallbackProxy.ShowExternalLoginUI(Final|Native|Static|Public|BlueprintCallable) // <Game+0x11d01a0>
};

// Class OnlineSubsystemUtils.SpectatorBeaconClient
struct ASpectatorBeaconClient : AOnlineBeaconClient {
	struct FString DestSessionId; //  0x3d0 Size(10)
	struct Unknown PendingReservation; //  0x3e0 Size(78)
	enum class Unknow RequestType; //  0x458 Size(1)
	char bPendingReservationSent; //  0x459 Size(1)
	char bCancelReservation; //  0x45a Size(1)

	void ServerReservationRequest(struct FString SessionID, struct Unknown Reservation); // Function OnlineSubsystemUtils.SpectatorBeaconClient.ServerReservationRequest(Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // <Game+0x11cffa0>
};

// Class OnlineSubsystemUtils.SpectatorBeaconHost
struct ASpectatorBeaconHost : AOnlineBeaconHostObject {
	struct Unknown State; //  0x338 Size(8)
	char bLogoutOnSessionTimeout; //  0x3a0 Size(1)
	float SessionTimeoutSecs; //  0x3a4 Size(4)
	float TravelSessionTimeoutSecs; //  0x3a8 Size(4)
};

// Class OnlineSubsystemUtils.SpectatorBeaconState
struct USpectatorBeaconState : Object {
	struct FName SessionName; //  0x28 Size(8)
	int32_t NumConsumedReservations; //  0x30 Size(4)
	int32_t MaxReservations; //  0x34 Size(4)
	char bRestrictCrossConsole; //  0x38 Size(1)
	struct TArray<Unknown> Reservations; //  0x40 Size(10)
};

