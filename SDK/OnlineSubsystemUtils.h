// Enum OnlineSubsystemUtils.EInAppPurchaseStatus
enum class EInAppPurchaseStatus : uint8_t {
	EInAppPurchaseStatus = 0,
	EInAppPurchaseStatus = 1,
	EInAppPurchaseStatus = 2,
	EInAppPurchaseStatus = 3,
	EInAppPurchaseStatus = 4,
	EInAppPurchaseStatus = 5,
	EInAppPurchaseStatus = 6,
};

// Enum OnlineSubsystemUtils.EOnlineProxyStoreOfferDiscountType
enum class EOnlineProxyStoreOfferDiscountType : uint8_t {
	EOnlineProxyStoreOfferDiscountType = 0,
	EOnlineProxyStoreOfferDiscountType = 1,
	EOnlineProxyStoreOfferDiscountType = 2,
	EOnlineProxyStoreOfferDiscountType = 3,
	EOnlineProxyStoreOfferDiscountType = 4,
};

// Enum OnlineSubsystemUtils.EBeaconConnectionState
enum class EBeaconConnectionState : uint8_t {
	EBeaconConnectionState = 0,
	EBeaconConnectionState = 1,
	EBeaconConnectionState = 2,
	EBeaconConnectionState = 3,
	EBeaconConnectionState = 4,
};

// Enum OnlineSubsystemUtils.EClientRequestType
enum class EClientRequestType : uint8_t {
	EClientRequestType = 0,
	EClientRequestType = 1,
	EClientRequestType = 2,
	EClientRequestType = 3,
	EClientRequestType = 4,
	EClientRequestType = 5,
	EClientRequestType = 6,
	EClientRequestType = 7,
};

// Enum OnlineSubsystemUtils.EPartyReservationResult
enum class EPartyReservationResult : uint8_t {
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
	EPartyReservationResult = 16,
};

// Enum OnlineSubsystemUtils.ESpectatorClientRequestType
enum class ESpectatorClientRequestType : uint8_t {
	ESpectatorClientRequestType = 0,
	ESpectatorClientRequestType = 1,
	ESpectatorClientRequestType = 2,
	ESpectatorClientRequestType = 3,
	ESpectatorClientRequestType = 4,
	ESpectatorClientRequestType = 5,
	ESpectatorClientRequestType = 6,
};

// Enum OnlineSubsystemUtils.ESpectatorReservationResult
enum class ESpectatorReservationResult : uint8_t {
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
	ESpectatorReservationResult = 16,
};

// Class OnlineSubsystemUtils.IpConnection
class UIpConnection : public UNetConnection {

public:

	float SocketErrorDisconnectDelay; // 0x1AF0 (4)
};

// Class OnlineSubsystemUtils.IpNetDriver
class UIpNetDriver : public UNetDriver {

public:

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
class UAchievementQueryCallbackProxy : public UOnlineBlueprintCallProxyBase {

public:

	struct FMulticastInlineDelegate OnSuccess; // 0x30 (16)
	struct FMulticastInlineDelegate OnFailure; // 0x40 (16)

	struct Unknown CacheAchievements(struct Unknown WorldContextObject, struct Unknown PlayerController); // Function OnlineSubsystemUtils.AchievementQueryCallbackProxy.CacheAchievements(Final|Native|Static|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11C8A20>
	struct Unknown CacheAchievementDescriptions(struct Unknown WorldContextObject, struct Unknown PlayerController); // Function OnlineSubsystemUtils.AchievementQueryCallbackProxy.CacheAchievementDescriptions(Final|Native|Static|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11C8960>
};

// Class OnlineSubsystemUtils.AchievementWriteCallbackProxy
class UAchievementWriteCallbackProxy : public UOnlineBlueprintCallProxyBase {

public:

	struct FMulticastInlineDelegate OnSuccess; // 0x30 (16)
	struct FMulticastInlineDelegate OnFailure; // 0x40 (16)

	struct Unknown WriteAchievementProgress(struct Unknown WorldContextObject, struct Unknown PlayerController, struct FName AchievementName, float progress, int32_t UserTag); // Function OnlineSubsystemUtils.AchievementWriteCallbackProxy.WriteAchievementProgress(Final|Native|Static|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11CA650>
};

// Class OnlineSubsystemUtils.ConnectionCallbackProxy
class UConnectionCallbackProxy : public UOnlineBlueprintCallProxyBase {

public:

	struct FMulticastInlineDelegate OnSuccess; // 0x30 (16)
	struct FMulticastInlineDelegate OnFailure; // 0x40 (16)

	struct Unknown ConnectToService(struct Unknown WorldContextObject, struct Unknown PlayerController); // Function OnlineSubsystemUtils.ConnectionCallbackProxy.ConnectToService(Final|Native|Static|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11C8AE0>
};

// Class OnlineSubsystemUtils.CreateSessionCallbackProxy
class UCreateSessionCallbackProxy : public UOnlineBlueprintCallProxyBase {

public:

	struct FMulticastInlineDelegate OnSuccess; // 0x30 (16)
	struct FMulticastInlineDelegate OnFailure; // 0x40 (16)

	struct Unknown CreateSession(struct Unknown WorldContextObject, struct Unknown PlayerController, int32_t PublicConnections, char bUseLAN); // Function OnlineSubsystemUtils.CreateSessionCallbackProxy.CreateSession(Final|Native|Static|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11C90A0>
};

// Class OnlineSubsystemUtils.DestroySessionCallbackProxy
class UDestroySessionCallbackProxy : public UOnlineBlueprintCallProxyBase {

public:

	struct FMulticastInlineDelegate OnSuccess; // 0x30 (16)
	struct FMulticastInlineDelegate OnFailure; // 0x40 (16)

	struct Unknown DestroySession(struct Unknown WorldContextObject, struct Unknown PlayerController); // Function OnlineSubsystemUtils.DestroySessionCallbackProxy.DestroySession(Final|Native|Static|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11C91D0>
};

// Class OnlineSubsystemUtils.EndMatchCallbackProxy
class UEndMatchCallbackProxy : public UOnlineBlueprintCallProxyBase {

public:

	struct FMulticastInlineDelegate OnSuccess; // 0x30 (16)
	struct FMulticastInlineDelegate OnFailure; // 0x40 (16)

	struct Unknown EndMatch(struct Unknown WorldContextObject, struct Unknown PlayerController, struct TScriptInterface<IUnknown> MatchActor, struct FString MatchID, char LocalPlayerOutcome, char OtherPlayersOutcome); // Function OnlineSubsystemUtils.EndMatchCallbackProxy.EndMatch(Final|Native|Static|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11C9290>
};

// Class OnlineSubsystemUtils.EndTurnCallbackProxy
class UEndTurnCallbackProxy : public UOnlineBlueprintCallProxyBase {

public:

	struct FMulticastInlineDelegate OnSuccess; // 0x30 (16)
	struct FMulticastInlineDelegate OnFailure; // 0x40 (16)

	struct Unknown EndTurn(struct Unknown WorldContextObject, struct Unknown PlayerController, struct FString MatchID, struct TScriptInterface<IUnknown> TurnBasedMatchInterface); // Function OnlineSubsystemUtils.EndTurnCallbackProxy.EndTurn(Final|Native|Static|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11C94C0>
};

// Class OnlineSubsystemUtils.FindSessionsCallbackProxy
class UFindSessionsCallbackProxy : public UOnlineBlueprintCallProxyBase {

public:

	struct FMulticastInlineDelegate OnSuccess; // 0x30 (16)
	struct FMulticastInlineDelegate OnFailure; // 0x40 (16)

	struct FString GetServerName(struct Unknown& Result); // Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetServerName(Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11CA430>
	int32_t GetPingInMs(struct Unknown& Result); // Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetPingInMs(Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11CA250>
	int32_t GetMaxPlayers(struct Unknown& Result); // Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetMaxPlayers(Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11CA070>
	int32_t GetCurrentPlayers(struct Unknown& Result); // Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetCurrentPlayers(Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11C9E90>
	struct Unknown FindSessions(struct Unknown WorldContextObject, struct Unknown PlayerController, int32_t MaxResults, char bUseLAN); // Function OnlineSubsystemUtils.FindSessionsCallbackProxy.FindSessions(Final|Native|Static|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11C9660>
};

// Class OnlineSubsystemUtils.FindTurnBasedMatchCallback
class UFindTurnBasedMatchCallbackls : public UOnlineBlueprintCallProxyBase {

public:

	struct FMulticastInlineDelegate OnSuccess; // 0x30 (16)
	struct FMulticastInlineDelegate OnFailure; // 0x40 (16)

	struct Unknown FindTurnBasedMatch(struct Unknown WorldContextObject, struct Unknown PlayerController, struct TScriptInterface<IUnknown> MatchActor, int32_t MinPlayers, int32_t MaxPlayers, int32_t PlayerGroup, char ShowExistingMatches); // Function OnlineSubsystemUtils.FindTurnBasedMatchCallbackperty.FindTurnBasedMatch(Final|Native|Static|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11C9790>
};

// Class OnlineSubsystemUtils.InAppPurchaseCallbackProxy
class UInAppPurchaseCallbackProxy : public Object {

public:

	struct FMulticastInlineDelegate OnSuccess; // 0x28 (16)
	struct FMulticastInlineDelegate OnFailure; // 0x38 (16)

	struct Unknown CreateProxyObjectForInAppPurchase(struct Unknown PlayerController, struct Unknown& ProductRequest); // Function OnlineSubsystemUtils.InAppPurchaseCallbackProxy.CreateProxyObjectForInAppPurchase(Final|Native|Static|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11C8C90>
};

// Class OnlineSubsystemUtils.InAppPurchaseCallbackProxy2
class UInAppPurchaseCallbackProxy2 : public Object {

public:

	struct FMulticastInlineDelegate OnSuccess; // 0x28 (16)
	struct FMulticastInlineDelegate OnFailure; // 0x38 (16)

	struct Unknown CreateProxyObjectForInAppPurchaseUnprocessedPurchases(struct Unknown PlayerController); // Function OnlineSubsystemUtils.InAppPurchaseCallbackProxy2.CreateProxyObjectForInAppPurchaseUnprocessedPurchases(Final|Native|Static|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11C9020>
	struct Unknown CreateProxyObjectForInAppPurchaseQueryOwned(struct Unknown PlayerController); // Function OnlineSubsystemUtils.InAppPurchaseCallbackProxy2.CreateProxyObjectForInAppPurchaseQueryOwned(Final|Native|Static|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11C8FA0>
	struct Unknown CreateProxyObjectForInAppPurchase(struct Unknown PlayerController, struct Unknown& ProductRequest); // Function OnlineSubsystemUtils.InAppPurchaseCallbackProxy2.CreateProxyObjectForInAppPurchase(Final|Native|Static|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11C8BA0>
};

// Class OnlineSubsystemUtils.InAppPurchaseQueryCallback
class UInAppPurchaseQueryCallback : public Object {

public:

	struct FMulticastInlineDelegate OnSuccess; // 0x28 (16)
	struct FMulticastInlineDelegate OnFailure; // 0x38 (16)

	struct Unknown CreateProxyObjectForInAppPurchaseQuery(struct Unknown PlayerController, struct TArray<Unknown>& ProductIdentifiers); // Function OnlineSubsystemUtils.InAppPurchaseQueryCallback.CreateProxyObjectForInAppPurchaseQuery(Final|Native|Static|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11C8E90>
};

// Class OnlineSubsystemUtils.InAppPurchaseQueryCallbackls
class UInAppPurchaseQueryCallbackls : public Object {

public:

	struct FMulticastInlineDelegate OnSuccess; // 0x28 (16)
	struct FMulticastInlineDelegate OnFailure; // 0x38 (16)

	struct Unknown CreateProxyObjectForInAppPurchaseQuery(struct Unknown PlayerController, struct TArray<Unknown>& ProductIdentifiers); // Function OnlineSubsystemUtils.InAppPurchaseQueryCallback.CreateProxyObjectForInAppPurchaseQuery(Final|Native|Static|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11C8D80>
};

// Class OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy
class UInAppPurchaseRestoreCallbackProxy : public Object {

public:

	struct FMulticastInlineDelegate OnSuccess; // 0x28 (16)
	struct FMulticastInlineDelegate OnFailure; // 0x38 (16)

	struct Unknown CreateProxyObjectForInAppPurchaseRestore(struct TArray<Unknown>& ConsumableProductFlags, struct Unknown PlayerController); // Function OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy.CreateProxyObjectForInAppPurchaseRestore(Final|Native|Static|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11CE350>
};

// Class OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy2
class UInAppPurchaseRestoreCallbackProxy2 : public Object {

public:

	struct FMulticastInlineDelegate OnSuccess; // 0x28 (16)
	struct FMulticastInlineDelegate OnFailure; // 0x38 (16)

	struct Unknown CreateProxyObjectForInAppPurchaseRestore(struct TArray<Unknown>& ConsumableProductFlags, struct Unknown PlayerController); // Function OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy2.CreateProxyObjectForInAppPurchaseRestore(Final|Native|Static|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11CE230>
};

// Class OnlineSubsystemUtils.JoinSessionCallbackProxy
class UJoinSessionCallbackProxy : public UOnlineBlueprintCallProxyBase {

public:

	struct FMulticastInlineDelegate OnSuccess; // 0x30 (16)
	struct FMulticastInlineDelegate OnFailure; // 0x40 (16)

	struct Unknown JoinSession(struct Unknown WorldContextObject, struct Unknown PlayerController, struct Unknown& SearchResult); // Function OnlineSubsystemUtils.JoinSessionCallbackProxy.JoinSession(Final|Native|Static|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11CE530>
};

// Class OnlineSubsystemUtils.LeaderboardFlushCallbackProxy
class ULeaderboardFlushCallbackProxy : public Object {

public:

	struct FMulticastInlineDelegate OnSuccess; // 0x28 (16)
	struct FMulticastInlineDelegate OnFailure; // 0x38 (16)

	struct Unknown CreateProxyObjectForFlush(struct Unknown PlayerController, struct FName SessionName); // Function OnlineSubsystemUtils.LeaderboardFlushCallbackProxy.CreateProxyObjectForFlush(Final|Native|Static|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11CE170>
};

// Class OnlineSubsystemUtils.LeaderboardQueryCallbackProxy
class ULeaderboardQueryCallbackProxy : public Object {

public:

	struct FMulticastInlineDelegate OnSuccess; // 0x28 (16)
	struct FMulticastInlineDelegate OnFailure; // 0x38 (16)

	struct Unknown CreateProxyObjectForIntQuery(struct Unknown PlayerController, struct FName StatName); // Function OnlineSubsystemUtils.LeaderboardQueryCallbackProxy.CreateProxyObjectForIntQuery(Final|Native|Static|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11CE470>
};

// Class OnlineSubsystemUtils.LogoutCallbackProxy
class ULogoutCallbackProxy : public UBlueprintAsyncActionBase {

public:

	struct FMulticastInlineDelegate OnSuccess; // 0x30 (16)
	struct FMulticastInlineDelegate OnFailure; // 0x40 (16)

	struct Unknown Logout(struct Unknown WorldContextObject, struct Unknown PlayerController); // Function OnlineSubsystemUtils.LogoutCallbackProxy.Logout(Final|Native|Static|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11CE790>
};

// Class OnlineSubsystemUtils.OnlineBeacon
class AOnlineBeacon : public UActor {

public:

	float BeaconConnectionInitialTimeout; // 0x318 (4)
	float BeaconConnectionTimeout; // 0x31C (4)
	struct Unknown NetDriver; // 0x320 (8)
};

// Class OnlineSubsystemUtils.OnlineBeaconClient
class AOnlineBeaconClient : public AOnlineBeacon {

public:

	struct Unknown BeaconOwner; // 0x340 (8)
	struct Unknown BeaconConnection; // 0x348 (8)
	enum class Unknow ConnectionState; // 0x350 (1)

	void ClientOnConnected(); // Function OnlineSubsystemUtils.OnlineBeaconClient.ClientOnConnected(Final|Net|NetReliableNative|Event|Private|NetClient) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11CE020>
};

// Class OnlineSubsystemUtils.OnlineBeaconHost
class AOnlineBeaconHost : public AOnlineBeacon {

public:

	int32_t ListenPort; // 0x340 (4)
	struct TArray<Unknown> ClientActors; // 0x348 (16)
};

// Class OnlineSubsystemUtils.OnlineBeaconHostObject
class AOnlineBeaconHostObject : public UActor {

public:

	struct FString BeaconTypeName; // 0x310 (16)
	struct Unknown* ClientBeaconActorClass; // 0x320 (8)
	struct TArray<Unknown> ClientActors; // 0x328 (16)
};

// Class OnlineSubsystemUtils.OnlineEngineInterfaceImpl
class UOnlineEngineInterfaceImpl : public UOnlineEngineInterface {

public:

	struct FName VoiceSubsystemNameOverride; // 0x28 (8)
};

// Class OnlineSubsystemUtils.OnlinePIESettings
class UOnlinePIESettings : public UDeveloperSettings {

public:

	char bOnlinePIEEnabled : 0; // 0x38 (1)
	struct TArray<Unknown> Logins; // 0x40 (16)
};

// Class OnlineSubsystemUtils.OnlineSessionClient
class UOnlineSessionClient : public UOnlineSession {

public:

	char bIsFromInvite : 0; // 0x188 (1)
	char bHandlingDisconnect : 0; // 0x189 (1)
};

// Class OnlineSubsystemUtils.PartyBeaconClient
class APartyBeaconClient : public AOnlineBeaconClient {

public:

	struct FString DestSessionId; // 0x3D0 (16)
	struct Unknown PendingReservation; // 0x3E0 (80)
	enum class Unknow RequestType; // 0x430 (1)
	char bPendingReservationSent : 0; // 0x431 (1)
	char bCancelReservation : 0; // 0x432 (1)

	void ServerUpdateReservationRequest(struct FString SessionID, struct Unknown ReservationUpdate); // Function OnlineSubsystemUtils.PartyBeaconClient.ServerUpdateReservationRequest(Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11CF070>
	void ServerReservationRequest(struct FString SessionID, struct Unknown Reservation); // Function OnlineSubsystemUtils.PartyBeaconClient.ServerReservationRequest(Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11CEDD0>
	void ServerRemoveMemberFromReservationRequest(struct FString SessionID, struct Unknown ReservationUpdate); // Function OnlineSubsystemUtils.PartyBeaconClient.ServerRemoveMemberFromReservationRequest(Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11CEB30>
	void ServerCancelReservationRequest(struct Unknown PartyLeader); // Function OnlineSubsystemUtils.PartyBeaconClient.ServerCancelReservationRequest(Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11CEA20>
	void ClientSendReservationUpdates(int32_t NumRemainingReservations); // Function OnlineSubsystemUtils.PartyBeaconClient.ClientSendReservationUpdates(Net|NetReliableNative|Event|Public|NetClient) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11CE0E0>
	void ClientSendReservationFull(); // Function OnlineSubsystemUtils.PartyBeaconClient.ClientSendReservationFull(Net|NetReliableNative|Event|Public|NetClient) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11CE0C0>
	void ClientReservationResponse(char ReservationResponse); // Function OnlineSubsystemUtils.PartyBeaconClient.ClientReservationResponse(Net|NetReliableNative|Event|Public|NetClient) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11CE040>
	void ClientCancelReservationResponse(char ReservationResponse); // Function OnlineSubsystemUtils.PartyBeaconClient.ClientCancelReservationResponse(Net|NetReliableNative|Event|Public|NetClient) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11CDFA0>
};

// Class OnlineSubsystemUtils.PartyBeaconHost
class APartyBeaconHost : public AOnlineBeaconHostObject {

public:

	struct Unknown State; // 0x338 (8)
	char bLogoutOnSessionTimeout : 0; // 0x3A0 (1)
	float SessionTimeoutSecs; // 0x3A4 (4)
	float TravelSessionTimeoutSecs; // 0x3A8 (4)
};

// Class OnlineSubsystemUtils.PartyBeaconState
class UPartyBeaconState : public Object {

public:

	struct FName SessionName; // 0x28 (8)
	int32_t NumConsumedReservations; // 0x30 (4)
	int32_t MaxReservations; // 0x34 (4)
	int32_t NumTeams; // 0x38 (4)
	int32_t NumPlayersPerTeam; // 0x3C (4)
	struct FName TeamAssignmentMethod; // 0x40 (8)
	int32_t ReservedHostTeamNum; // 0x48 (4)
	int32_t ForceTeamNum; // 0x4C (4)
	char bRestrictCrossConsole : 0; // 0x50 (1)
	char bEnableRemovalRequests : 0; // 0x51 (1)
	struct TArray<Unknown> Reservations; // 0x58 (16)
};

// Class OnlineSubsystemUtils.QuitMatchCallbackProxy
class UQuitMatchCallbackProxy : public UOnlineBlueprintCallProxyBase {

public:

	struct FMulticastInlineDelegate OnSuccess; // 0x30 (16)
	struct FMulticastInlineDelegate OnFailure; // 0x40 (16)

	struct Unknown QuitMatch(struct Unknown WorldContextObject, struct Unknown PlayerController, struct FString MatchID, char Outcome, int32_t TurnTimeoutInSeconds); // Function OnlineSubsystemUtils.QuitMatchCallbackProxy.QuitMatch(Final|Native|Static|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11CE850>
};

// Class OnlineSubsystemUtils.ShowLoginUICallbackProxy
class UShowLoginUICallbackProxy : public UBlueprintAsyncActionBase {

public:

	struct FMulticastInlineDelegate OnSuccess; // 0x30 (16)
	struct FMulticastInlineDelegate OnFailure; // 0x40 (16)

	struct Unknown ShowExternalLoginUI(struct Unknown WorldContextObject, struct Unknown InPlayerController); // Function OnlineSubsystemUtils.ShowLoginUICallbackProxy.ShowExternalLoginUI(Final|Native|Static|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11D15D0>
};

// Class OnlineSubsystemUtils.SpectatorBeaconClient
class ASpectatorBeaconClient : public AOnlineBeaconClient {

public:

	struct FString DestSessionId; // 0x3D0 (16)
	struct Unknown PendingReservation; // 0x3E0 (120)
	enum class Unknow RequestType; // 0x458 (1)
	char bPendingReservationSent : 0; // 0x459 (1)
	char bCancelReservation : 0; // 0x45A (1)

	void ServerReservationRequest(struct FString SessionID, struct Unknown Reservation); // Function OnlineSubsystemUtils.SpectatorBeaconClient.ServerReservationRequest(Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11D13D0>
	void ServerCancelReservationRequest(struct Unknown Spectator); // Function OnlineSubsystemUtils.SpectatorBeaconClient.ServerCancelReservationRequest(Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11CEA20>
	void ClientSendReservationUpdates(int32_t NumRemainingReservations); // Function OnlineSubsystemUtils.SpectatorBeaconClient.ClientSendReservationUpdates(Net|NetReliableNative|Event|Public|NetClient) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11D0C70>
	void ClientSendReservationFull(); // Function OnlineSubsystemUtils.SpectatorBeaconClient.ClientSendReservationFull(Net|NetReliableNative|Event|Public|NetClient) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11D0C50>
	void ClientReservationResponse(char ReservationResponse); // Function OnlineSubsystemUtils.SpectatorBeaconClient.ClientReservationResponse(Net|NetReliableNative|Event|Public|NetClient) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11D0BD0>
	void ClientCancelReservationResponse(char ReservationResponse); // Function OnlineSubsystemUtils.SpectatorBeaconClient.ClientCancelReservationResponse(Net|NetReliableNative|Event|Public|NetClient) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11D0B30>
};

// Class OnlineSubsystemUtils.SpectatorBeaconHost
class ASpectatorBeaconHost : public AOnlineBeaconHostObject {

public:

	struct Unknown State; // 0x338 (8)
	char bLogoutOnSessionTimeout : 0; // 0x3A0 (1)
	float SessionTimeoutSecs; // 0x3A4 (4)
	float TravelSessionTimeoutSecs; // 0x3A8 (4)
};

// Class OnlineSubsystemUtils.SpectatorBeaconState
class USpectatorBeaconState : public Object {

public:

	struct FName SessionName; // 0x28 (8)
	int32_t NumConsumedReservations; // 0x30 (4)
	int32_t MaxReservations; // 0x34 (4)
	char bRestrictCrossConsole : 0; // 0x38 (1)
	struct TArray<Unknown> Reservations; // 0x40 (16)
};

// ScriptStruct OnlineSubsystemUtils.InAppPurchaseReceiptInfo2
struct FInAppPurchaseReceiptInfo2 {
	struct FString ItemName; // 0x0 (16)
	struct FString ItemId; // 0x10 (16)
	struct FString ValidationInfo; // 0x20 (16)
};

// ScriptStruct OnlineSubsystemUtils.OnlineProxyStoreOffer
struct FOnlineProxyStoreOffer {
	struct FString OfferId; // 0x0 (16)
	struct FText Title; // 0x10 (24)
	struct FText Description; // 0x28 (24)
	struct FText LongDescription; // 0x40 (24)
	struct FText RegularPriceText; // 0x58 (24)
	int32_t RegularPrice; // 0x70 (4)
	struct FText PriceText; // 0x78 (24)
	int32_t NumericPrice; // 0x90 (4)
	struct FString CurrencyCode; // 0x98 (16)
	struct Unknown ReleaseDate; // 0xA8 (8)
	struct Unknown ExpirationDate; // 0xB0 (8)
	enum class Unknow DiscountType; // 0xB8 (1)
	struct TMap<Unknown, Unknown> DynamicFields; // 0xC0 (80)
};

// ScriptStruct OnlineSubsystemUtils.InAppPurchaseRestoreInfo2
struct FInAppPurchaseRestoreInfo2 {
	struct FString ItemName; // 0x0 (16)
	struct FString ItemId; // 0x10 (16)
	struct FString ValidationInfo; // 0x20 (16)
};

// ScriptStruct OnlineSubsystemUtils.InAppPurchaseReceiptInfo
struct FInAppPurchaseReceiptInfo {
	struct FString ItemName; // 0x0 (16)
	struct FString ItemId; // 0x10 (16)
	struct FString ValidationInfo; // 0x20 (16)
};

// ScriptStruct OnlineSubsystemUtils.InAppPurchaseProductInfo2
struct FInAppPurchaseProductInfo2 {
	struct FString Identifier; // 0x0 (16)
	struct FString TransactionIdentifier; // 0x10 (16)
	struct FString DisplayName; // 0x20 (16)
	struct FString DisplayDescription; // 0x30 (16)
	struct FString DisplayPrice; // 0x40 (16)
	float RawPrice; // 0x50 (4)
	struct FString CurrencyCode; // 0x58 (16)
	struct FString CurrencySymbol; // 0x68 (16)
	struct FString DecimalSeparator; // 0x78 (16)
	struct FString GroupingSeparator; // 0x88 (16)
	struct FString ReceiptData; // 0x98 (16)
	struct TMap<Unknown, Unknown> DynamicFields; // 0xA8 (80)
};

// ScriptStruct OnlineSubsystemUtils.InAppPurchaseProductRequest2
struct FInAppPurchaseProductRequest2 {
	struct FString ProductIdentifier; // 0x0 (16)
	char bIsConsumable : 0; // 0x10 (1)
};

// ScriptStruct OnlineSubsystemUtils.PlayerReservation
struct FPlayerReservation {
	struct Unknown UniqueID; // 0x0 (40)
	struct FString ValidationStr; // 0x28 (16)
	struct FString Platform; // 0x38 (16)
	char bAllowCrossplay : 0; // 0x48 (1)
	float ElapsedTime; // 0x4C (4)
};

// ScriptStruct OnlineSubsystemUtils.PIELoginSettingsInternal
struct FPIELoginSettingsInternal {
	struct FString ID; // 0x0 (16)
	struct FString Token; // 0x10 (16)
	struct FString Type; // 0x20 (16)
	struct TArray<Unknown> TokenBytes; // 0x30 (16)
};

// ScriptStruct OnlineSubsystemUtils.PartyReservation
struct FPartyReservation {
	int32_t TeamNum; // 0x0 (4)
	struct Unknown PartyLeader; // 0x8 (40)
	struct TArray<Unknown> PartyMembers; // 0x30 (16)
	struct TArray<Unknown> RemovedPartyMembers; // 0x40 (16)
};

// ScriptStruct OnlineSubsystemUtils.SpectatorReservation
struct FSpectatorReservation {
	struct Unknown SpectatorId; // 0x0 (40)
	struct Unknown Spectator; // 0x28 (80)
};

