// Enum OnlineSubsystemUtils.EInAppPurchaseStatus
enum class EInAppPurchaseStatus : uint8 {
	EInAppPurchaseStatus = 0
	EInAppPurchaseStatus = 1
	EInAppPurchaseStatus = 2
	EInAppPurchaseStatus = 3
	EInAppPurchaseStatus = 4
	EInAppPurchaseStatus = 5
	EInAppPurchaseStatus = 6
};

// Enum OnlineSubsystemUtils.EOnlineProxyStoreOfferDiscountType
enum class EOnlineProxyStoreOfferDiscountType : uint8 {
	EOnlineProxyStoreOfferDiscountType = 0
	EOnlineProxyStoreOfferDiscountType = 1
	EOnlineProxyStoreOfferDiscountType = 2
	EOnlineProxyStoreOfferDiscountType = 3
	EOnlineProxyStoreOfferDiscountType = 4
};

// Enum OnlineSubsystemUtils.EBeaconConnectionState
enum class EBeaconConnectionState : uint8 {
	EBeaconConnectionState = 0
	EBeaconConnectionState = 1
	EBeaconConnectionState = 2
	EBeaconConnectionState = 3
	EBeaconConnectionState = 4
};

// Enum OnlineSubsystemUtils.EClientRequestType
enum class EClientRequestType : uint8 {
	EClientRequestType = 0
	EClientRequestType = 1
	EClientRequestType = 2
	EClientRequestType = 3
	EClientRequestType = 4
	EClientRequestType = 5
	EClientRequestType = 6
	EClientRequestType = 7
};

// Enum OnlineSubsystemUtils.EPartyReservationResult
enum class EPartyReservationResult : uint8 {
	EPartyReservationResult = 0
	EPartyReservationResult = 1
	EPartyReservationResult = 2
	EPartyReservationResult = 3
	EPartyReservationResult = 4
	EPartyReservationResult = 5
	EPartyReservationResult = 6
	EPartyReservationResult = 7
	EPartyReservationResult = 8
	EPartyReservationResult = 9
	EPartyReservationResult = 10
	EPartyReservationResult = 11
	EPartyReservationResult = 12
	EPartyReservationResult = 13
	EPartyReservationResult = 14
	EPartyReservationResult = 15
	EPartyReservationResult = 16
};

// Enum OnlineSubsystemUtils.ESpectatorClientRequestType
enum class ESpectatorClientRequestType : uint8 {
	ESpectatorClientRequestType = 0
	ESpectatorClientRequestType = 1
	ESpectatorClientRequestType = 2
	ESpectatorClientRequestType = 3
	ESpectatorClientRequestType = 4
	ESpectatorClientRequestType = 5
	ESpectatorClientRequestType = 6
};

// Enum OnlineSubsystemUtils.ESpectatorReservationResult
enum class ESpectatorReservationResult : uint8 {
	ESpectatorReservationResult = 0
	ESpectatorReservationResult = 1
	ESpectatorReservationResult = 2
	ESpectatorReservationResult = 3
	ESpectatorReservationResult = 4
	ESpectatorReservationResult = 5
	ESpectatorReservationResult = 6
	ESpectatorReservationResult = 7
	ESpectatorReservationResult = 8
	ESpectatorReservationResult = 9
	ESpectatorReservationResult = 10
	ESpectatorReservationResult = 11
	ESpectatorReservationResult = 12
	ESpectatorReservationResult = 13
	ESpectatorReservationResult = 14
	ESpectatorReservationResult = 15
	ESpectatorReservationResult = 16
};

// Class OnlineSubsystemUtils.IpConnection
struct UIpConnection : UNetConnection {
	float SocketErrorDisconnectDelay; // 0x1AF0 (4)
};

// Class OnlineSubsystemUtils.IpNetDriver
struct UIpNetDriver : UNetDriver {
	char LogPortUnreach : 0; // 0x748 (1)
	char AllowPlayerPortUnreach : 0; // 0x748 (1)
	uint32_t MaxPortCountToTry; // 0x74C (4)
	uint32_t ServerDesiredSocketReceiveBufferBytes; // 0x75C (4)
	uint32_t ServerDesiredSocketSendBufferBytes; // 0x760 (4)
	uint32_t ClientDesiredSocketReceiveBufferBytes; // 0x764 (4)
	uint32_t ClientDesiredSocketSendBufferBytes; // 0x768 (4)
	double MaxSecondsInReceive; // 0x770 (8)
	int32_t NbPacketsBetweenReceiveTimeTest; // 0x778 (4)
	float ResolutionConnectionTimeout; // 0x77C (4)
};

// Class OnlineSubsystemUtils.AchievementQueryCallbackProxy
struct UAchievementQueryCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x30 (16)
	struct FMulticastInlineDelegate OnFailure; // 0x40 (16)

	struct Unknown CacheAchievements(struct Unknown WorldContextObject, struct Unknown PlayerController); // Function OnlineSubsystemUtils.AchievementQueryCallbackProxy.CacheAchievements(Final|Native|Static|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11C75F0>
	struct Unknown CacheAchievementDescriptions(struct Unknown WorldContextObject, struct Unknown PlayerController); // Function OnlineSubsystemUtils.AchievementQueryCallbackProxy.CacheAchievementDescriptions(Final|Native|Static|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11C7530>
};

// Class OnlineSubsystemUtils.AchievementWriteCallbackProxy
struct UAchievementWriteCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x30 (16)
	struct FMulticastInlineDelegate OnFailure; // 0x40 (16)

	struct Unknown WriteAchievementProgress(struct Unknown WorldContextObject, struct Unknown PlayerController, struct FName AchievementName, float progress, int32_t UserTag); // Function OnlineSubsystemUtils.AchievementWriteCallbackProxy.WriteAchievementProgress(Final|Native|Static|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11C9220>
};

// Class OnlineSubsystemUtils.ConnectionCallbackProxy
struct UConnectionCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x30 (16)
	struct FMulticastInlineDelegate OnFailure; // 0x40 (16)

	struct Unknown ConnectToService(struct Unknown WorldContextObject, struct Unknown PlayerController); // Function OnlineSubsystemUtils.ConnectionCallbackProxy.ConnectToService(Final|Native|Static|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11C76B0>
};

// Class OnlineSubsystemUtils.CreateSessionCallbackProxy
struct UCreateSessionCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x30 (16)
	struct FMulticastInlineDelegate OnFailure; // 0x40 (16)

	struct Unknown CreateSession(struct Unknown WorldContextObject, struct Unknown PlayerController, int32_t PublicConnections, char bUseLAN); // Function OnlineSubsystemUtils.CreateSessionCallbackProxy.CreateSession(Final|Native|Static|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11C7C70>
};

// Class OnlineSubsystemUtils.DestroySessionCallbackProxy
struct UDestroySessionCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x30 (16)
	struct FMulticastInlineDelegate OnFailure; // 0x40 (16)

	struct Unknown DestroySession(struct Unknown WorldContextObject, struct Unknown PlayerController); // Function OnlineSubsystemUtils.DestroySessionCallbackProxy.DestroySession(Final|Native|Static|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11C7DA0>
};

// Class OnlineSubsystemUtils.EndMatchCallbackProxy
struct UEndMatchCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x30 (16)
	struct FMulticastInlineDelegate OnFailure; // 0x40 (16)

	struct Unknown EndMatch(struct Unknown WorldContextObject, struct Unknown PlayerController, struct TScriptInterface<IUnknown> MatchActor, struct FString MatchID, char LocalPlayerOutcome, char OtherPlayersOutcome); // Function OnlineSubsystemUtils.EndMatchCallbackProxy.EndMatch(Final|Native|Static|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11C7E60>
};

// Class OnlineSubsystemUtils.EndTurnCallbackProxy
struct UEndTurnCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x30 (16)
	struct FMulticastInlineDelegate OnFailure; // 0x40 (16)

	struct Unknown EndTurn(struct Unknown WorldContextObject, struct Unknown PlayerController, struct FString MatchID, struct TScriptInterface<IUnknown> TurnBasedMatchInterface); // Function OnlineSubsystemUtils.EndTurnCallbackProxy.EndTurn(Final|Native|Static|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11C8090>
};

// Class OnlineSubsystemUtils.FindSessionsCallbackProxy
struct UFindSessionsCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x30 (16)
	struct FMulticastInlineDelegate OnFailure; // 0x40 (16)

	struct FString GetServerName(struct Unknown& Result); // Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetServerName(Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11C9000>
	int32_t GetPingInMs(struct Unknown& Result); // Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetPingInMs(Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11C8E20>
	int32_t GetMaxPlayers(struct Unknown& Result); // Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetMaxPlayers(Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11C8C40>
	int32_t GetCurrentPlayers(struct Unknown& Result); // Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetCurrentPlayers(Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11C8A60>
	struct Unknown FindSessions(struct Unknown WorldContextObject, struct Unknown PlayerController, int32_t MaxResults, char bUseLAN); // Function OnlineSubsystemUtils.FindSessionsCallbackProxy.FindSessions(Final|Native|Static|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11C8230>
};

// Class OnlineSubsystemUtils.FindTurnBasedMatchCallbackProxy
struct UFindTurnBasedMatchCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x30 (16)
	struct FMulticastInlineDelegate OnFailure; // 0x40 (16)

	struct Unknown FindTurnBasedMatch(struct Unknown WorldContextObject, struct Unknown PlayerController, struct TScriptInterface<IUnknown> MatchActor, int32_t MinPlayers, int32_t MaxPlayers, int32_t PlayerGroup, char ShowExistingMatches); // Function OnlineSubsystemUtils.FindTurnBasedMatchCallbackProxy.FindTurnBasedMatch(Final|Native|Static|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11C8360>
};

// Class OnlineSubsystemUtils.InAppPurchaseCallbackProxy
struct UInAppPurchaseCallbackProxy : Object {
	struct FMulticastInlineDelegate OnSuccess; // 0x28 (16)
	struct FMulticastInlineDelegate OnFailure; // 0x38 (16)

	struct Unknown CreateProxyObjectForInAppPls(struct Unknown PlayerController, struct Unknown& ProductRequest); // Function OnlineSubsystemUtils.InAppPurchaseCallbackProxy.CreateProxyObjectForInAppPls(Final|Native|Static|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11C7860>
};

// Class OnlineSubsystemUtils.InAppPurchaseCallbackProxy2
struct UInAppPurchaseCallbackProxy2 : Object {
	struct FMulticastInlineDelegate OnSuccess; // 0x28 (16)
	struct FMulticastInlineDelegate OnFailure; // 0x38 (16)

	struct Unknown CreateProxyObjectForInAppP2F(struct Unknown PlayerController); // Function OnlineSubsystemUtils.InAppPurchaseCallbackProxy2.CreateProxyObjectForInApp(Final|Native|Static|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11C7BF0>
	struct Unknown CreateProxyObjectForInApp(struct Unknown PlayerController); // Function OnlineSubsystemUtils.InAppPurchaseCallbackProxy2.CreateProxyObjectForInApp(Final|Native|Static|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11C7B70>
	struct Unknown CreateProxyObjectForInApp(struct Unknown PlayerController, struct Unknown& ProductRequest); // Function OnlineSubsystemUtils.InAppPurchaseCallbackProxy2.CreateProxyObjectForInAppPls(Final|Native|Static|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11C7770>
};

// Class OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy
struct UInAppPurchaseQueryCallbackProxy : Object {
	struct FMulticastInlineDelegate OnSuccess; // 0x28 (16)
	struct FMulticastInlineDelegate OnFailure; // 0x38 (16)

	struct Unknown CreateProxyObjectForInApp(struct Unknown PlayerController, struct TArray<Unknown>& ProductIdentifiers); // Function OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy.CreateProxyObjectForInAppPls(Final|Native|Static|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11C7A60>
};

// Class OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy2
struct UInAppPurchaseQueryCallbackProxy2 : Object {
	struct FMulticastInlineDelegate OnSuccess; // 0x28 (16)
	struct FMulticastInlineDelegate OnFailure; // 0x38 (16)

	struct Unknown CreateProxyObjectForInApp(struct Unknown PlayerController, struct TArray<Unknown>& ProductIdentifiers); // Function OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy2.CreateProxyObjectForInAppPls(Final|Native|Static|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11C7950>
};

// Class OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy
struct UInAppPurchaseRestoreCallbackProxy : Object {
	struct FMulticastInlineDelegate OnSuccess; // 0x28 (16)
	struct FMulticastInlineDelegate OnFailure; // 0x38 (16)

	struct Unknown CreateProxyObjectForInAppPz(struct TArray<Unknown>& ConsumableProductFlags, struct Unknown PlayerController); // Function OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy.CreateProxyObjectForInAppPls(Final|Native|Static|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11CCF20>
};

// Class OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy2
struct UInAppPurchaseRestoreCallbackProxy2 : Object {
	struct FMulticastInlineDelegate OnSuccess; // 0x28 (16)
	struct FMulticastInlineDelegate OnFailure; // 0x38 (16)

	struct Unknown CreateProxyObjectForInAppPv(struct TArray<Unknown>& ConsumableProductFlags, struct Unknown PlayerController); // Function OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy2.CreateProxyObjectForInAppPls(Final|Native|Static|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11CCE00>
};

// Class OnlineSubsystemUtils.JoinSessionCallbackProxy
struct UJoinSessionCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x30 (16)
	struct FMulticastInlineDelegate OnFailure; // 0x40 (16)

	struct Unknown JoinSession(struct Unknown WorldContextObject, struct Unknown PlayerController, struct Unknown& SearchResult); // Function OnlineSubsystemUtils.JoinSessionCallbackProxy.JoinSession(Final|Native|Static|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11CD100>
};

// Class OnlineSubsystemUtils.LeaderboardFlushCallbackProxy
struct ULeaderboardFlushCallbackProxy : Object {
	struct FMulticastInlineDelegate OnSuccess; // 0x28 (16)
	struct FMulticastInlineDelegate OnFailure; // 0x38 (16)

	struct Unknown CreateProxyObjectForFlush(struct Unknown PlayerController, struct FName SessionName); // Function OnlineSubsystemUtils.LeaderboardFlushCallbackProxy.CreateProxyObjectForFlush(Final|Native|Static|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11CCD40>
};

// Class OnlineSubsystemUtils.LeaderboardQueryCallbackProxy
struct ULeaderboardQueryCallbackProxy : Object {
	struct FMulticastInlineDelegate OnSuccess; // 0x28 (16)
	struct FMulticastInlineDelegate OnFailure; // 0x38 (16)

	struct Unknown CreateProxyObjectForIntQuery(struct Unknown PlayerController, struct FName StatName); // Function OnlineSubsystemUtils.LeaderboardQueryCallbackProxy.CreateProxyObjectForIntQuery(Final|Native|Static|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11CD040>
};

// Class OnlineSubsystemUtils.LogoutCallbackProxy
struct ULogoutCallbackProxy : UBlueprintAsyncActionBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x30 (16)
	struct FMulticastInlineDelegate OnFailure; // 0x40 (16)

	struct Unknown Logout(struct Unknown WorldContextObject, struct Unknown PlayerController); // Function OnlineSubsystemUtils.LogoutCallbackProxy.Logout(Final|Native|Static|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11CD360>
};

// Class OnlineSubsystemUtils.OnlineBeacon
struct AOnlineBeacon : UActor {
	float BeaconConnectionInitialTimeout; // 0x318 (4)
	float BeaconConnectionTimeout; // 0x31C (4)
	struct Unknown NetDriver; // 0x320 (8)
};

// Class OnlineSubsystemUtils.OnlineBeaconClient
struct AOnlineBeaconClient : AOnlineBeacon {
	struct Unknown BeaconOwner; // 0x340 (8)
	struct Unknown BeaconConnection; // 0x348 (8)
	enum class Unknow ConnectionState; // 0x350 (1)

	void ClientOnConnected(); // Function OnlineSubsystemUtils.OnlineBeaconClient.ClientOnConnected(Final|Net|NetReliableNative|Event|Private|NetClient) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11CCBF0>
};

// Class OnlineSubsystemUtils.OnlineBeaconHost
struct AOnlineBeaconHost : AOnlineBeacon {
	int32_t ListenPort; // 0x340 (4)
	struct TArray<Unknown> ClientActors; // 0x348 (16)
};

// Class OnlineSubsystemUtils.OnlineBeaconHostObject
struct AOnlineBeaconHostObject : UActor {
	struct FString BeaconTypeName; // 0x310 (16)
	struct Unknown* ClientBeaconActorClass; // 0x320 (8)
	struct TArray<Unknown> ClientActors; // 0x328 (16)
};

// Class OnlineSubsystemUtils.OnlineEngineInterfaceImpl
struct UOnlineEngineInterfaceImpl : UOnlineEngineInterface {
	struct FName VoiceSubsystemNameOverride; // 0x28 (8)
};

// Class OnlineSubsystemUtils.OnlinePIESettings
struct UOnlinePIESettings : UDeveloperSettings {
	char bOnlinePIEEnabled : 0; // 0x38 (1)
	struct TArray<Unknown> Logins; // 0x40 (16)
};

// Class OnlineSubsystemUtils.OnlineSessionClient
struct UOnlineSessionClient : UOnlineSession {
	char bIsFromInvite : 0; // 0x188 (1)
	char bHandlingDisconnect : 0; // 0x189 (1)
};

// Class OnlineSubsystemUtils.PartyBeaconClient
struct APartyBeaconClient : AOnlineBeaconClient {
	struct FString DestSessionId; // 0x3D0 (16)
	struct Unknown PendingReservation; // 0x3E0 (80)
	enum class Unknow RequestType; // 0x430 (1)
	char bPendingReservationSent : 0; // 0x431 (1)
	char bCancelReservation : 0; // 0x432 (1)

	void ServerUpdateReservationRequest(struct FString SessionID, struct Unknown ReservationUpdate); // Function OnlineSubsystemUtils.PartyBeaconClient.ServerUpdateReservationRequest(Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11CDC40>
	void ServerReservationRequest(struct FString SessionID, struct Unknown Reservation); // Function OnlineSubsystemUtils.PartyBeaconClient.ServerReservationRequest(Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11CD9A0>
	void ServerRemoveMemberFromReservationRequest(struct FString SessionID, struct Unknown ReservationUpdate); // Function OnlineSubsystemUtils.PartyBeaconClient.ServerRemoveMemberFromReservationRequest(Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11CD700>
	void ServerCancelReservationRequest(struct Unknown PartyLeader); // Function OnlineSubsystemUtils.PartyBeaconClient.ServerCancelReservationRequest(Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11CD5F0>
	void ClientSendReservationUpdates(int32_t NumRemainingReservations); // Function OnlineSubsystemUtils.PartyBeaconClient.ClientSendReservationUpdates(Net|NetReliableNative|Event|Public|NetClient) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11CCCB0>
	void ClientSendReservationFull(); // Function OnlineSubsystemUtils.PartyBeaconClient.ClientSendReservationFull(Net|NetReliableNative|Event|Public|NetClient) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11CCC90>
	void ClientReservationResponse(char ReservationResponse); // Function OnlineSubsystemUtils.PartyBeaconClient.ClientReservationResponse(Net|NetReliableNative|Event|Public|NetClient) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11CCC10>
	void ClientCancelReservationResponse(char ReservationResponse); // Function OnlineSubsystemUtils.PartyBeaconClient.ClientCancelReservationResponse(Net|NetReliableNative|Event|Public|NetClient) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11CCB70>
};

// Class OnlineSubsystemUtils.PartyBeaconHost
struct APartyBeaconHost : AOnlineBeaconHostObject {
	struct Unknown State; // 0x338 (8)
	char bLogoutOnSessionTimeout : 0; // 0x3A0 (1)
	float SessionTimeoutSecs; // 0x3A4 (4)
	float TravelSessionTimeoutSecs; // 0x3A8 (4)
};

// Class OnlineSubsystemUtils.PartyBeaconState
struct UPartyBeaconState : Object {
	struct FName SessionName; // 0x28 (8)
	int32_t NumConsumedReservations; // 0x30 (4)
	int32_t MaxReservations; // 0x34 (4)
	int32_t NumTeams; // 0x38 (4)
	int32_t NumPlayersPerTeam; // 0x3C (4)
	struct FName TeamAssignmentMethod; // 0x40 (8)
	int32_t ReservedHostTeamNum; // 0x48 (4)
	int32_t ForceTeamNum; // 0x4C (4)
	char b : 0; // 0x50 (1)
	char bEnableRemovalRequests : 0; // 0x51 (1)
	struct TArray<Unknown> Reservations; // 0x58 (16)
};

// Class OnlineSubsystemUtils.QuitMatchCallbackProxy
struct UQuitMatchCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x30 (16)
	struct FMulticastInlineDelegate OnFailure; // 0x40 (16)

	struct Unknown QuitMatch(struct Unknown WorldContextObject, struct Unknown PlayerController, struct FString MatchID, char Outcome, int32_t TurnTimeoutInSeconds); // Function OnlineSubsystemUtils.QuitMatchCallbackProxy.QuitMatch(Final|Native|Static|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11CD420>
};

// Class OnlineSubsystemUtils.ShowLoginUICallbackProxy
struct UShowLoginUICallbackProxy : UBlueprintAsyncActionBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x30 (16)
	struct FMulticastInlineDelegate OnFailure; // 0x40 (16)

	struct Unknown ShowExternalLoginUI(struct Unknown WorldContextObject, struct Unknown InPlayerController); // Function OnlineSubsystemUtils.ShowLoginUICallbackProxy.ShowExternalLoginUI(Final|Native|Static|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11D01A0>
};

// Class OnlineSubsystemUtils.SpectatorBeaconClient
struct ASpectatorBeaconClient : AOnlineBeaconClient {
	struct FString DestSessionId; // 0x3D0 (16)
	struct Unknown PendingReservation; // 0x3E0 (120)
	enum class Unknow RequestType; // 0x458 (1)
	char bPendingReservationSent : 0; // 0x459 (1)
	char bCancelReservation : 0; // 0x45A (1)

	void ServerReservationRequest(struct FString SessionID, struct Unknown Reservation); // Function OnlineSubsystemUtils.SpectatorBeaconClient.ServerReservationRequest(Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11CFFA0>
	void ServerCancelReservationRequest(struct Unknown Spectator); // Function OnlineSubsystemUtils.SpectatorBeaconClient.ServerCancelReservationRequest(Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11CD5F0>
	void ClientSendReservationUpdates(int32_t NumRemainingReservations); // Function OnlineSubsystemUtils.SpectatorBeaconClient.ClientSendReservationUpdates(Net|NetReliableNative|Event|Public|NetClient) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11CF840>
	void ClientSendReservationFull(); // Function OnlineSubsystemUtils.SpectatorBeaconClient.ClientSendReservationFull(Net|NetReliableNative|Event|Public|NetClient) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11CF820>
	void ClientReservationResponse(char ReservationResponse); // Function OnlineSubsystemUtils.SpectatorBeaconClient.ClientReservationResponse(Net|NetReliableNative|Event|Public|NetClient) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11CF7A0>
	void ClientCancelReservationResponse(char ReservationResponse); // Function OnlineSubsystemUtils.SpectatorBeaconClient.ClientCancelReservationResponse(Net|NetReliableNative|Event|Public|NetClient) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11CF700>
};

// Class OnlineSubsystemUtils.SpectatorBeaconHost
struct ASpectatorBeaconHost : AOnlineBeaconHostObject {
	struct Unknown State; // 0x338 (8)
	char bLogoutOnSessionTimeout : 0; // 0x3A0 (1)
	float SessionTimeoutSecs; // 0x3A4 (4)
	float TravelSessionTimeoutSecs; // 0x3A8 (4)
};

// Class OnlineSubsystemUtils.SpectatorBeaconState
struct USpectatorBeaconState : Object {
	struct FName SessionName; // 0x28 (8)
	int32_t NumConsumedReservations; // 0x30 (4)
	int32_t MaxReservations; // 0x34 (4)
	char b : 0; // 0x38 (1)
	struct TArray<Unknown> Reservations; // 0x40 (16)
};

