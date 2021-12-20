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

// Enum OnlineSubsystemUtils.EOnlineProxyStoreOfferDisco
enum class EOnlineProxyStoreOfferDiscos : uint8 {
	EOnlineProxyStoreOfferDisco = 0,
	EOnlineProxyStoreOfferDiscos = 1,
	EOnlineProxyStoreOfferDisco = 2,
	EOnlineProxyStoreOfferDiscos = 3,
	EOnlineProxyStoreOfferDisco = 4
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
	Unknown MaxSecondsInReceive; //  0x770 Size(8)
	int32_t NbPacketsBetweenReceiveTimeTest; //  0x778 Size(4)
	float ResolutionConnectionTimeout; //  0x77c Size(4)
};

// Class OnlineSubsystemUtils.AchievementQueryCallbackPro
struct UAchievementQueryCallbackProt : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; //  0x30 Size(10)
	struct FMulticastInlineDelegate OnFailure; //  0x40 Size(10)

	Unknown CacheAchievements(Unknown WorldContextObject, Unknown PlayerController); // Function OnlineSubsystemUtils.AchievementQueryCallbackProt.CacheAchievements(Final|Native|Static|Public|BlueprintCallable) // <Game+0x11c7130>
};

// Class OnlineSubsystemUtils.AchievementWriteCallbackPro
struct UAchievementWriteCallbackProt : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; //  0x30 Size(10)
	struct FMulticastInlineDelegate OnFailure; //  0x40 Size(10)

	Unknown WriteAchievementProgress(Unknown WorldContextObject, Unknown PlayerController, struct FName AchievementName, float progress, int32_t UserTag); // Function OnlineSubsystemUtils.AchievementWriteCallbackProt.WriteAchievementProgress(Final|Native|Static|Public|BlueprintCallable) // <Game+0x11c8d60>
};

// Class OnlineSubsystemUtils.ConnectionCallbackProxy
struct UConnectionCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; //  0x30 Size(10)
	struct FMulticastInlineDelegate OnFailure; //  0x40 Size(10)

	Unknown ConnectToService(Unknown WorldContextObject, Unknown PlayerController); // Function OnlineSubsystemUtils.ConnectionCallbackProxy.ConnectToService(Final|Native|Static|Public|BlueprintCallable) // <Game+0x11c71f0>
};

// Class OnlineSubsystemUtils.CreateSessionCallbackProxy
struct UCreateSessionCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; //  0x30 Size(10)
	struct FMulticastInlineDelegate OnFailure; //  0x40 Size(10)

	Unknown CreateSession(Unknown WorldContextObject, Unknown PlayerController, int32_t PublicConnections, char bUseLAN); // Function OnlineSubsystemUtils.CreateSessionCallbackProxy.CreateSession(Final|Native|Static|Public|BlueprintCallable) // <Game+0x11c77b0>
};

// Class OnlineSubsystemUtils.DestroySessionCallbackProxy
struct UDestroySessionCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; //  0x30 Size(10)
	struct FMulticastInlineDelegate OnFailure; //  0x40 Size(10)

	Unknown DestroySession(Unknown WorldContextObject, Unknown PlayerController); // Function OnlineSubsystemUtils.DestroySessionCallbackProxy.DestroySession(Final|Native|Static|Public|BlueprintCallable) // <Game+0x11c78e0>
};

// Class OnlineSubsystemUtils.EndMatchCallbackProxy
struct UEndMatchCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; //  0x30 Size(10)
	struct FMulticastInlineDelegate OnFailure; //  0x40 Size(10)

	Unknown EndMatch(Unknown WorldContextObject, Unknown PlayerController, Unknown MatchActor, struct FString MatchID, Unknown LocalPlayerOutcome, Unknown OtherPlayersOutcome); // Function OnlineSubsystemUtils.EndMatchCallbackProxy.EndMatch(Final|Native|Static|Public|BlueprintCallable) // <Game+0x11c79a0>
};

// Class OnlineSubsystemUtils.EndTurnCallbackProxy
struct UEndTurnCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; //  0x30 Size(10)
	struct FMulticastInlineDelegate OnFailure; //  0x40 Size(10)

	Unknown EndTurn(Unknown WorldContextObject, Unknown PlayerController, struct FString MatchID, Unknown TurnBasedMatchInterface); // Function OnlineSubsystemUtils.EndTurnCallbackProxy.EndTurn(Final|Native|Static|Public|BlueprintCallable) // <Game+0x11c7bd0>
};

// Class OnlineSubsystemUtils.FindSessionsCallbackProxy
struct UFindSessionsCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; //  0x30 Size(10)
	struct FMulticastInlineDelegate OnFailure; //  0x40 Size(10)

	struct FString GetServerName(Unknown& Result); // Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetServerName(Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // <Game+0x11c8b40>
};

// Class OnlineSubsystemUtils.FindTurnBasedMatchCallbackProxy
struct UFindTurnBasedMatchCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; //  0x30 Size(10)
	struct FMulticastInlineDelegate OnFailure; //  0x40 Size(10)

	Unknown FindTurnBasedMatch(Unknown WorldContextObject, Unknown PlayerController, Unknown MatchActor, int32_t MinPlayers, int32_t MaxPlayers, int32_t PlayerGroup, char ShowExistingMatches); // Function OnlineSubsystemUtils.FindTurnBasedMatchCallbackProxy.FindTurnBasedMatch(Final|Native|Static|Public|BlueprintCallable) // <Game+0x11c7ea0>
};

// Class OnlineSubsystemUtils.InAppPurchaseCallbackProxy
struct UInAppPurchaseCallbackProxy : Object {
	struct FMulticastInlineDelegate OnSuccess; //  0x28 Size(10)
	struct FMulticastInlineDelegate OnFailure; //  0x38 Size(10)

	Unknown CreateProxyObjectForInAppPurchase(Unknown PlayerController, Unknown& ProductRequest); // Function OnlineSubsystemUtils.InAppPurchaseCallbackProxy.CreateProxyObjectForInAppPurchase(Final|Native|Static|Public|HasOutParms|BlueprintCallable) // <Game+0x11c73a0>
};

// Class OnlineSubsystemUtils.InAppPurchaseCallbackProxy2
struct UInAppPurchaseCallbackProxy2 : Object {
	struct FMulticastInlineDelegate OnSuccess; //  0x28 Size(10)
	struct FMulticastInlineDelegate OnFailure; //  0x38 Size(10)

	Unknown CreateProxyObjectForInAppPurchaseUnprocessedPurchases(Unknown PlayerController); // Function OnlineSubsystemUtils.InAppPurchaseCallbackProxy2.CreateProxyObjectForInAppPurchaseUnprocessedPurchases(Final|Native|Static|Public|BlueprintCallable) // <Game+0x11c7730>
};

// Class OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy
struct UInAppPurchaseQueryCallbackProxy : Object {
	struct FMulticastInlineDelegate OnSuccess; //  0x28 Size(10)
	struct FMulticastInlineDelegate OnFailure; //  0x38 Size(10)

	Unknown CreateProxyObjectForInAppPurchaseQuery(Unknown PlayerController, Unknown& ProductIdentifiers); // Function OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy.CreateProxyObjectForInAppPurchaseQuery(Final|Native|Static|Public|HasOutParms|BlueprintCallable) // <Game+0x11c75a0>
};

// Class OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy2
struct UInAppPurchaseQueryCallbackProxy2 : Object {
	struct FMulticastInlineDelegate OnSuccess; //  0x28 Size(10)
	struct FMulticastInlineDelegate OnFailure; //  0x38 Size(10)

	Unknown CreateProxyObjectForInAppPurchaseQuery(Unknown PlayerController, Unknown& ProductIdentifiers); // Function OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy2.CreateProxyObjectForInAppPurchaseQuery(Final|Native|Static|Public|HasOutParms|BlueprintCallable) // <Game+0x11c7490>
};

// Class OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy
struct UInAppPurchaseRestoreCallbackProxy : Object {
	struct FMulticastInlineDelegate OnSuccess; //  0x28 Size(10)
	struct FMulticastInlineDelegate OnFailure; //  0x38 Size(10)

	Unknown CreateProxyObjectForInAppPurchaseRestore(Unknown& ConsumableProductFlags, Unknown PlayerController); // Function OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy.CreateProxyObjectForInAppPurchaseRestore(Final|Native|Static|Public|HasOutParms|BlueprintCallable) // <Game+0x11cca40>
};

// Class OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy2
struct UInAppPurchaseRestoreCallbackProxy2 : Object {
	struct FMulticastInlineDelegate OnSuccess; //  0x28 Size(10)
	struct FMulticastInlineDelegate OnFailure; //  0x38 Size(10)

	Unknown CreateProxyObjectForInAppPurchaseRestore(Unknown& ConsumableProductFlags, Unknown PlayerController); // Function OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy2.CreateProxyObjectForInAppPurchaseRestore(Final|Native|Static|Public|HasOutParms|BlueprintCallable) // <Game+0x11cc920>
};

// Class OnlineSubsystemUtils.JoinSessionCallbackProxy
struct UJoinSessionCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; //  0x30 Size(10)
	struct FMulticastInlineDelegate OnFailure; //  0x40 Size(10)

	Unknown JoinSession(Unknown WorldContextObject, Unknown PlayerController, Unknown& SearchResult); // Function OnlineSubsystemUtils.JoinSessionCallbackProxy.JoinSession(Final|Native|Static|Public|HasOutParms|BlueprintCallable) // <Game+0x11ccc20>
};

// Class OnlineSubsystemUtils.LeaderboardFlushCallbackPro
struct ULeaderboardFlushCallbackProt : Object {
	struct FMulticastInlineDelegate OnSuccess; //  0x28 Size(10)
	struct FMulticastInlineDelegate OnFailure; //  0x38 Size(10)

	Unknown CreateProxyObjectForFlush(Unknown PlayerController, struct FName SessionName); // Function OnlineSubsystemUtils.LeaderboardFlushCallbackProt.CreateProxyObjectForFlush(Final|Native|Static|Public|BlueprintCallable) // <Game+0x11cc860>
};

// Class OnlineSubsystemUtils.LeaderboardQueryCallbackPro
struct ULeaderboardQueryCallbackProt : Object {
	struct FMulticastInlineDelegate OnSuccess; //  0x28 Size(10)
	struct FMulticastInlineDelegate OnFailure; //  0x38 Size(10)

	Unknown CreateProxyObjectForIntQuery(Unknown PlayerController, struct FName StatName); // Function OnlineSubsystemUtils.LeaderboardQueryCallbackProt.CreateProxyObjectForIntQuery(Final|Native|Static|Public|BlueprintCallable) // <Game+0x11ccb60>
};

// Class OnlineSubsystemUtils.LogoutCallbackProxy
struct ULogoutCallbackProxy : UBlueprintAsyncActionBase {
	struct FMulticastInlineDelegate OnSuccess; //  0x30 Size(10)
	struct FMulticastInlineDelegate OnFailure; //  0x40 Size(10)

	Unknown Logout(Unknown WorldContextObject, Unknown PlayerController); // Function OnlineSubsystemUtils.LogoutCallbackProxy.Logout(Final|Native|Static|Public|BlueprintCallable) // <Game+0x11cce80>
};

// Class OnlineSubsystemUtils.OnlineBeacon
struct AOnlineBeacon : UActor {
	float BeaconConnectionInitialTimeout; //  0x318 Size(4)
	float BeaconConnectionTimeout; //  0x31c Size(4)
	Unknown NetDriver; //  0x320 Size(8)
};

// Class OnlineSubsystemUtils.OnlineBeaconClient
struct AOnlineBeaconClient : AOnlineBeacon {
	Unknown BeaconOwner; //  0x340 Size(8)
	Unknown BeaconConnection; //  0x348 Size(8)
	Unknown ConnectionState; //  0x350 Size(1)

	void ClientOnConnected(); // Function OnlineSubsystemUtils.OnlineBeaconClient.ClientOnConnected(Final|Net|NetReliableNative|Event|Private|NetClient) // <Game+0x11cc710>
};

// Class OnlineSubsystemUtils.OnlineBeaconHost
struct AOnlineBeaconHost : AOnlineBeacon {
	int32_t ListenPort; //  0x340 Size(4)
	Unknown ClientActors; //  0x348 Size(10)
};

// Class OnlineSubsystemUtils.OnlineBeaconHostObject
struct AOnlineBeaconHostObject : UActor {
	struct FString BeaconTypeName; //  0x310 Size(10)
	Unknown ClientBeaconActorClass; //  0x320 Size(8)
	Unknown ClientActors; //  0x328 Size(10)
};

// Class OnlineSubsystemUtils.OnlineEngineInterfaceImpl
struct UOnlineEngineInterfaceImpl : UOnlineEngineInterface {
	struct FName VoiceSubsystemNameOverride; //  0x28 Size(8)
};

// Class OnlineSubsystemUtils.OnlinePIESettings
struct UOnlinePIESettings : UDeveloperSettings {
	char bOnlinePIEEnabled; //  0x38 Size(1)
	Unknown Logins; //  0x40 Size(10)
};

// Class OnlineSubsystemUtils.OnlineSessionClient
struct UOnlineSessionClient : UOnlineSession {
	char bIsFromInvite; //  0x188 Size(1)
	char bHandlingDisconnect; //  0x189 Size(1)
};

// Class OnlineSubsystemUtils.PartyBeaconClient
struct APartyBeaconClient : AOnlineBeaconClient {
	struct FString DestSessionId; //  0x3d0 Size(10)
	Unknown PendingReservation; //  0x3e0 Size(50)
	Unknown RequestType; //  0x430 Size(1)
	char bPendingReservationSent; //  0x431 Size(1)
	char bCancelReservation; //  0x432 Size(1)

	void ServerUpdateReservationRequest(struct FString SessionID, Unknown ReservationUpdate); // Function OnlineSubsystemUtils.PartyBeaconClient.ServerUpdateReservationRequest(Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // <Game+0x11cd760>
};

// Class OnlineSubsystemUtils.PartyBeaconHost
struct APartyBeaconHost : AOnlineBeaconHostObject {
	Unknown State; //  0x338 Size(8)
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
	Unknown Reservations; //  0x58 Size(10)
};

// Class OnlineSubsystemUtils.QuitMatchCallbackProxy
struct UQuitMatchCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; //  0x30 Size(10)
	struct FMulticastInlineDelegate OnFailure; //  0x40 Size(10)

	Unknown QuitMatch(Unknown WorldContextObject, Unknown PlayerController, struct FString MatchID, Unknown Outcome, int32_t TurnTimeoutInSeconds); // Function OnlineSubsystemUtils.QuitMatchCallbackProxy.QuitMatch(Final|Native|Static|Public|BlueprintCallable) // <Game+0x11ccf40>
};

// Class OnlineSubsystemUtils.ShowLoginUICallbackProxy
struct UShowLoginUICallbackProxy : UBlueprintAsyncActionBase {
	struct FMulticastInlineDelegate OnSuccess; //  0x30 Size(10)
	struct FMulticastInlineDelegate OnFailure; //  0x40 Size(10)

	Unknown ShowExternalLoginUI(Unknown WorldContextObject, Unknown InPlayerController); // Function OnlineSubsystemUtils.ShowLoginUICallbackProxy.ShowExternalLoginUI(Final|Native|Static|Public|BlueprintCallable) // <Game+0x11cfcc0>
};

// Class OnlineSubsystemUtils.SpectatorBeaconClient
struct ASpectatorBeaconClient : AOnlineBeaconClient {
	struct FString DestSessionId; //  0x3d0 Size(10)
	Unknown PendingReservation; //  0x3e0 Size(78)
	Unknown RequestType; //  0x458 Size(1)
	char bPendingReservationSent; //  0x459 Size(1)
	char bCancelReservation; //  0x45a Size(1)

	void ServerReservationRequest(struct FString SessionID, Unknown Reservation); // Function OnlineSubsystemUtils.SpectatorBeaconClient.ServerReservationRequest(Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // <Game+0x11cfac0>
};

// Class OnlineSubsystemUtils.SpectatorBeaconHost
struct ASpectatorBeaconHost : AOnlineBeaconHostObject {
	Unknown State; //  0x338 Size(8)
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
	Unknown Reservations; //  0x40 Size(10)
};

