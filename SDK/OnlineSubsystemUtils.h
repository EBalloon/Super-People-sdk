// Enum OnlineSubsystemUtils.EInAppPurchaseStatus
enum class EInAppPurchaseStatus : uint8_t {
	Invalid = 0,
	Failed = 1,
	Deferred = 2,
	Canceled = 3,
	Purchased = 4,
	Restored = 5,
	EInAppPurchaseStatus_MAX = 6,
};

// Enum OnlineSubsystemUtils.EOnlineProxyStoreOfferDiscountType
enum class EOnlineProxyStoreOfferDiscountType : uint8_t {
	NotOnSale = 0,
	Percentage = 1,
	DiscountAmount = 2,
	PayAmount = 3,
	EOnlineProxyStoreOfferDiscountType_MAX = 4,
};

// Enum OnlineSubsystemUtils.EBeaconConnectionState
enum class EBeaconConnectionState : uint8_t {
	Invalid = 0,
	Closed = 1,
	Pending = 2,
	Open = 3,
	EBeaconConnectionState_MAX = 4,
};

// Enum OnlineSubsystemUtils.EClientRequestType
enum class EClientRequestType : uint8_t {
	NonePending = 0,
	ExistingSessionReservation = 1,
	ReservationUpdate = 2,
	EmptyServerReservation = 3,
	Reconnect = 4,
	Abandon = 5,
	ReservationRemoveMembers = 6,
	EClientRequestType_MAX = 7,
};

// Enum OnlineSubsystemUtils.EPartyReservationResult
enum class EPartyReservationResult : uint8_t {
	NoResult = 0,
	RequestPending = 1,
	GeneralError = 2,
	PartyLimitReached = 3,
	IncorrectPlayerCount = 4,
	RequestTimedOut = 5,
	ReservationDuplicate = 6,
	ReservationNotFound = 7,
	ReservationAccepted = 8,
	ReservationDenied = 9,
	ReservationDenied_CrossPlayRestriction = 10,
	ReservationDenied_Banned = 11,
	ReservationRequestCanceled = 12,
	ReservationInvalid = 13,
	BadSessionId = 14,
	ReservationDenied_ContainsExistingPlayers = 15,
	EPartyReservationResult_MAX = 16,
};

// Enum OnlineSubsystemUtils.ESpectatorClientRequestType
enum class ESpectatorClientRequestType : uint8_t {
	NonePending = 0,
	ExistingSessionReservation = 1,
	ReservationUpdate = 2,
	EmptyServerReservation = 3,
	Reconnect = 4,
	Abandon = 5,
	ESpectatorClientRequestType_MAX = 6,
};

// Enum OnlineSubsystemUtils.ESpectatorReservationResult
enum class ESpectatorReservationResult : uint8_t {
	NoResult = 0,
	RequestPending = 1,
	GeneralError = 2,
	SpectatorLimitReached = 3,
	IncorrectPlayerCount = 4,
	RequestTimedOut = 5,
	ReservationDuplicate = 6,
	ReservationNotFound = 7,
	ReservationAccepted = 8,
	ReservationDenied = 9,
	ReservationDenied_CrossPlayRestriction = 10,
	ReservationDenied_Banned = 11,
	ReservationRequestCanceled = 12,
	ReservationInvalid = 13,
	BadSessionId = 14,
	ReservationDenied_ContainsExistingPlayers = 15,
	ESpectatorReservationResult_MAX = 16,
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

	struct Unknown CacheAchievements(struct Unknown WorldContextObject, struct Unknown PlayerController); // Function OnlineSubsystemUtils.AchievementQueryCallbackProxy.CacheAchievements(Final|Native|Static|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11D5B80>
	struct Unknown CacheAchievementDescriptions(struct Unknown WorldContextObject, struct Unknown PlayerController); // Function OnlineSubsystemUtils.AchievementQueryCallbackProxy.CacheAchievementDescriptions(Final|Native|Static|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11D5AC0>
};

// Class OnlineSubsystemUtils.AchievementWriteCallbackProxy
class UAchievementWriteCallbackProxy : public UOnlineBlueprintCallProxyBase {

public:

	struct FMulticastInlineDelegate OnSuccess; // 0x30 (16)
	struct FMulticastInlineDelegate OnFailure; // 0x40 (16)

	struct Unknown WriteAchievementProgress(struct Unknown WorldContextObject, struct Unknown PlayerController, struct FName AchievementName, float progress, int32_t UserTag); // Function OnlineSubsystemUtils.AchievementWriteCallbackProxy.WriteAchievementProgress(Final|Native|Static|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11D77B0>
};

// Class OnlineSubsystemUtils.ConnectionCallbackProxy
class UConnectionCallbackProxy : public UOnlineBlueprintCallProxyBase {

public:

	struct FMulticastInlineDelegate OnSuccess; // 0x30 (16)
	struct FMulticastInlineDelegate OnFailure; // 0x40 (16)

	struct Unknown ConnectToService(struct Unknown WorldContextObject, struct Unknown PlayerController); // Function OnlineSubsystemUtils.ConnectionCallbackProxy.ConnectToService(Final|Native|Static|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11D5C40>
};

// Class OnlineSubsystemUtils.CreateSessionCallbackProxy
class UCreateSessionCallbackProxy : public UOnlineBlueprintCallProxyBase {

public:

	struct FMulticastInlineDelegate OnSuccess; // 0x30 (16)
	struct FMulticastInlineDelegate OnFailure; // 0x40 (16)

	struct Unknown CreateSession(struct Unknown WorldContextObject, struct Unknown PlayerController, int32_t PublicConnections, char bUseLAN); // Function OnlineSubsystemUtils.CreateSessionCallbackProxy.CreateSession(Final|Native|Static|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11D6200>
};

// Class OnlineSubsystemUtils.DestroySessionCallbackProxy
class UDestroySessionCallbackProxy : public UOnlineBlueprintCallProxyBase {

public:

	struct FMulticastInlineDelegate OnSuccess; // 0x30 (16)
	struct FMulticastInlineDelegate OnFailure; // 0x40 (16)

	struct Unknown DestroySession(struct Unknown WorldContextObject, struct Unknown PlayerController); // Function OnlineSubsystemUtils.DestroySessionCallbackProxy.DestroySession(Final|Native|Static|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11D6330>
};

// Class OnlineSubsystemUtils.EndMatchCallbackProxy
class UEndMatchCallbackProxy : public UOnlineBlueprintCallProxyBase {

public:

	struct FMulticastInlineDelegate OnSuccess; // 0x30 (16)
	struct FMulticastInlineDelegate OnFailure; // 0x40 (16)

	struct Unknown EndMatch(struct Unknown WorldContextObject, struct Unknown PlayerController, struct TScriptInterface<IUnknown> MatchActor, struct FString MatchID, char LocalPlayerOutcome, char OtherPlayersOutcome); // Function OnlineSubsystemUtils.EndMatchCallbackProxy.EndMatch(Final|Native|Static|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11D63F0>
};

// Class OnlineSubsystemUtils.EndTurnCallbackProxy
class UEndTurnCallbackProxy : public UOnlineBlueprintCallProxyBase {

public:

	struct FMulticastInlineDelegate OnSuccess; // 0x30 (16)
	struct FMulticastInlineDelegate OnFailure; // 0x40 (16)

	struct Unknown EndTurn(struct Unknown WorldContextObject, struct Unknown PlayerController, struct FString MatchID, struct TScriptInterface<IUnknown> TurnBasedMatchInterface); // Function OnlineSubsystemUtils.EndTurnCallbackProxy.EndTurn(Final|Native|Static|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11D6620>
};

// Class OnlineSubsystemUtils.FindSessionsCallbackProxy
class UFindSessionsCallbackProxy : public UOnlineBlueprintCallProxyBase {

public:

	struct FMulticastInlineDelegate OnSuccess; // 0x30 (16)
	struct FMulticastInlineDelegate OnFailure; // 0x40 (16)

	struct FString GetServerName(struct Unknown& Result); // Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetServerName(Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11D7590>
	int32_t GetPingInMs(struct Unknown& Result); // Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetPingInMs(Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11D73B0>
	int32_t GetMaxPlayers(struct Unknown& Result); // Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetMaxPlayers(Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11D71D0>
	int32_t GetCurrentPlayers(struct Unknown& Result); // Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetCurrentPlayers(Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11D6FF0>
	struct Unknown FindSessions(struct Unknown WorldContextObject, struct Unknown PlayerController, int32_t MaxResults, char bUseLAN); // Function OnlineSubsystemUtils.FindSessionsCallbackProxy.FindSessions(Final|Native|Static|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11D67C0>
};

// Class OnlineSubsystemUtils.FindTurnBasedMatchCallbackProxy
class UFindTurnBasedMatchCallbackProxy : public UOnlineBlueprintCallProxyBase {

public:

	struct FMulticastInlineDelegate OnSuccess; // 0x30 (16)
	struct FMulticastInlineDelegate OnFailure; // 0x40 (16)

	struct Unknown FindTurnBasedMatch(struct Unknown WorldContextObject, struct Unknown PlayerController, struct TScriptInterface<IUnknown> MatchActor, int32_t MinPlayers, int32_t MaxPlayers, int32_t PlayerGroup, char ShowExistingMatches); // Function OnlineSubsystemUtils.FindTurnBasedMatchCallbackProxy.FindTurnBasedMatch(Final|Native|Static|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11D68F0>
};

// Class OnlineSubsystemUtils.InAppPurchaseCallbackProxy
class UInAppPurchaseCallbackProxy : public Object {

public:

	struct FMulticastInlineDelegate OnSuccess; // 0x28 (16)
	struct FMulticastInlineDelegate OnFailure; // 0x38 (16)

	struct Unknown CreateProxyObjectForInAppPurchase(struct Unknown PlayerController, struct Unknown& ProductRequest); // Function OnlineSubsystemUtils.InAppPurchaseCallbackProxy.CreateProxyObjectForInAppPurchase(Final|Native|Static|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11D5DF0>
};

// Class OnlineSubsystemUtils.InAppPurchaseCallbackProxy2
class UInAppPurchaseCallbackProxy2 : public Object {

public:

	struct FMulticastInlineDelegate OnSuccess; // 0x28 (16)
	struct FMulticastInlineDelegate OnFailure; // 0x38 (16)

	struct Unknown CreateProxyObjectForInAppPurchaseUnprocessedPurchases(struct Unknown PlayerController); // Function OnlineSubsystemUtils.InAppPurchaseCallbackProxy2.CreateProxyObjectForInAppPurchaseUnprocessedPurchases(Final|Native|Static|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11D6180>
	struct Unknown CreateProxyObjectForInAppPurchaseQueryOwned(struct Unknown PlayerController); // Function OnlineSubsystemUtils.InAppPurchaseCallbackProxy2.CreateProxyObjectForInAppPurchaseQueryOwned(Final|Native|Static|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11D6100>
	struct Unknown CreateProxyObjectForInAppPurchase(struct Unknown PlayerController, struct Unknown& ProductRequest); // Function OnlineSubsystemUtils.InAppPurchaseCallbackProxy2.CreateProxyObjectForInAppPurchase(Final|Native|Static|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11D5D00>
};

// Class OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy
class UInAppPurchaseQueryCallbackProxy : public Object {

public:

	struct FMulticastInlineDelegate OnSuccess; // 0x28 (16)
	struct FMulticastInlineDelegate OnFailure; // 0x38 (16)

	struct Unknown CreateProxyObjectForInAppPurchaseQuery(struct Unknown PlayerController, struct TArray<Unknown>& ProductIdentifiers); // Function OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy.CreateProxyObjectForInAppPurchaseQuery(Final|Native|Static|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11D5FF0>
};

// Class OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy2
class UInAppPurchaseQueryCallbackProxy2 : public Object {

public:

	struct FMulticastInlineDelegate OnSuccess; // 0x28 (16)
	struct FMulticastInlineDelegate OnFailure; // 0x38 (16)

	struct Unknown CreateProxyObjectForInAppPurchaseQuery(struct Unknown PlayerController, struct TArray<Unknown>& ProductIdentifiers); // Function OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy2.CreateProxyObjectForInAppPurchaseQuery(Final|Native|Static|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11D5EE0>
};

// Class OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy
class UInAppPurchaseRestoreCallbackProxy : public Object {

public:

	struct FMulticastInlineDelegate OnSuccess; // 0x28 (16)
	struct FMulticastInlineDelegate OnFailure; // 0x38 (16)

	struct Unknown CreateProxyObjectForInAppPurchaseRestore(struct TArray<Unknown>& ConsumableProductFlags, struct Unknown PlayerController); // Function OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy.CreateProxyObjectForInAppPurchaseRestore(Final|Native|Static|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11DB4B0>
};

// Class OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy2
class UInAppPurchaseRestoreCallbackProxy2 : public Object {

public:

	struct FMulticastInlineDelegate OnSuccess; // 0x28 (16)
	struct FMulticastInlineDelegate OnFailure; // 0x38 (16)

	struct Unknown CreateProxyObjectForInAppPurchaseRestore(struct TArray<Unknown>& ConsumableProductFlags, struct Unknown PlayerController); // Function OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy2.CreateProxyObjectForInAppPurchaseRestore(Final|Native|Static|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11DB390>
};

// Class OnlineSubsystemUtils.JoinSessionCallbackProxy
class UJoinSessionCallbackProxy : public UOnlineBlueprintCallProxyBase {

public:

	struct FMulticastInlineDelegate OnSuccess; // 0x30 (16)
	struct FMulticastInlineDelegate OnFailure; // 0x40 (16)

	struct Unknown JoinSession(struct Unknown WorldContextObject, struct Unknown PlayerController, struct Unknown& SearchResult); // Function OnlineSubsystemUtils.JoinSessionCallbackProxy.JoinSession(Final|Native|Static|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11DB690>
};

// Class OnlineSubsystemUtils.LeaderboardFlushCallbackProxy
class ULeaderboardFlushCallbackProxy : public Object {

public:

	struct FMulticastInlineDelegate OnSuccess; // 0x28 (16)
	struct FMulticastInlineDelegate OnFailure; // 0x38 (16)

	struct Unknown CreateProxyObjectForFlush(struct Unknown PlayerController, struct FName SessionName); // Function OnlineSubsystemUtils.LeaderboardFlushCallbackProxy.CreateProxyObjectForFlush(Final|Native|Static|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11DB2D0>
};

// Class OnlineSubsystemUtils.LeaderboardQueryCallbackProxy
class ULeaderboardQueryCallbackProxy : public Object {

public:

	struct FMulticastInlineDelegate OnSuccess; // 0x28 (16)
	struct FMulticastInlineDelegate OnFailure; // 0x38 (16)

	struct Unknown CreateProxyObjectForIntQuery(struct Unknown PlayerController, struct FName StatName); // Function OnlineSubsystemUtils.LeaderboardQueryCallbackProxy.CreateProxyObjectForIntQuery(Final|Native|Static|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11DB5D0>
};

// Class OnlineSubsystemUtils.LogoutCallbackProxy
class ULogoutCallbackProxy : public UBlueprintAsyncActionBase {

public:

	struct FMulticastInlineDelegate OnSuccess; // 0x30 (16)
	struct FMulticastInlineDelegate OnFailure; // 0x40 (16)

	struct Unknown Logout(struct Unknown WorldContextObject, struct Unknown PlayerController); // Function OnlineSubsystemUtils.LogoutCallbackProxy.Logout(Final|Native|Static|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11DB8F0>
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

	void ClientOnConnected(); // Function OnlineSubsystemUtils.OnlineBeaconClient.ClientOnConnected(Final|Net|NetReliableNative|Event|Private|NetClient) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11DB180>
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

	void ServerUpdateReservationRequest(struct FString SessionID, struct Unknown ReservationUpdate); // Function OnlineSubsystemUtils.PartyBeaconClient.ServerUpdateReservationRequest(Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11DC1D0>
	void ServerReservationRequest(struct FString SessionID, struct Unknown Reservation); // Function OnlineSubsystemUtils.PartyBeaconClient.ServerReservationRequest(Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11DBF30>
	void ServerRemoveMemberFromReservationRequest(struct FString SessionID, struct Unknown ReservationUpdate); // Function OnlineSubsystemUtils.PartyBeaconClient.ServerRemoveMemberFromReservationRequest(Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11DBC90>
	void ServerCancelReservationRequest(struct Unknown PartyLeader); // Function OnlineSubsystemUtils.PartyBeaconClient.ServerCancelReservationRequest(Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11DBB80>
	void ClientSendReservationUpdates(int32_t NumRemainingReservations); // Function OnlineSubsystemUtils.PartyBeaconClient.ClientSendReservationUpdates(Net|NetReliableNative|Event|Public|NetClient) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11DB240>
	void ClientSendReservationFull(); // Function OnlineSubsystemUtils.PartyBeaconClient.ClientSendReservationFull(Net|NetReliableNative|Event|Public|NetClient) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11DB220>
	void ClientReservationResponse(char ReservationResponse); // Function OnlineSubsystemUtils.PartyBeaconClient.ClientReservationResponse(Net|NetReliableNative|Event|Public|NetClient) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11DB1A0>
	void ClientCancelReservationResponse(char ReservationResponse); // Function OnlineSubsystemUtils.PartyBeaconClient.ClientCancelReservationResponse(Net|NetReliableNative|Event|Public|NetClient) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11DB100>
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

	struct Unknown QuitMatch(struct Unknown WorldContextObject, struct Unknown PlayerController, struct FString MatchID, char Outcome, int32_t TurnTimeoutInSeconds); // Function OnlineSubsystemUtils.QuitMatchCallbackProxy.QuitMatch(Final|Native|Static|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11DB9B0>
};

// Class OnlineSubsystemUtils.ShowLoginUICallbackProxy
class UShowLoginUICallbackProxy : public UBlueprintAsyncActionBase {

public:

	struct FMulticastInlineDelegate OnSuccess; // 0x30 (16)
	struct FMulticastInlineDelegate OnFailure; // 0x40 (16)

	struct Unknown ShowExternalLoginUI(struct Unknown WorldContextObject, struct Unknown InPlayerController); // Function OnlineSubsystemUtils.ShowLoginUICallbackProxy.ShowExternalLoginUI(Final|Native|Static|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11DE730>
};

// Class OnlineSubsystemUtils.SpectatorBeaconClient
class ASpectatorBeaconClient : public AOnlineBeaconClient {

public:

	struct FString DestSessionId; // 0x3D0 (16)
	struct Unknown PendingReservation; // 0x3E0 (120)
	enum class Unknow RequestType; // 0x458 (1)
	char bPendingReservationSent : 0; // 0x459 (1)
	char bCancelReservation : 0; // 0x45A (1)

	void ServerReservationRequest(struct FString SessionID, struct Unknown Reservation); // Function OnlineSubsystemUtils.SpectatorBeaconClient.ServerReservationRequest(Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11DE530>
	void ServerCancelReservationRequest(struct Unknown Spectator); // Function OnlineSubsystemUtils.SpectatorBeaconClient.ServerCancelReservationRequest(Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11DBB80>
	void ClientSendReservationUpdates(int32_t NumRemainingReservations); // Function OnlineSubsystemUtils.SpectatorBeaconClient.ClientSendReservationUpdates(Net|NetReliableNative|Event|Public|NetClient) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11DDDD0>
	void ClientSendReservationFull(); // Function OnlineSubsystemUtils.SpectatorBeaconClient.ClientSendReservationFull(Net|NetReliableNative|Event|Public|NetClient) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11DDDB0>
	void ClientReservationResponse(char ReservationResponse); // Function OnlineSubsystemUtils.SpectatorBeaconClient.ClientReservationResponse(Net|NetReliableNative|Event|Public|NetClient) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11DDD30>
	void ClientCancelReservationResponse(char ReservationResponse); // Function OnlineSubsystemUtils.SpectatorBeaconClient.ClientCancelReservationResponse(Net|NetReliableNative|Event|Public|NetClient) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11DDC90>
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

// Function OnlineSubsystemUtils.AchievementQueryCallbackProxy.CacheAchievements
inline struct Unknown UAchievementQueryCallbackProxy::CacheAchievements(struct Unknown WorldContextObject, struct Unknown PlayerController) {
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.AchievementQueryCallbackProxy.CacheAchievements");

	struct CacheAchievements_Params {
		struct Unknown WorldContextObject;
		struct Unknown PlayerController;
		struct Unknown ReturnValue;

	}; CacheAchievements_Params Params;

	Params.WorldContextObject = WorldContextObject;
	Params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function OnlineSubsystemUtils.AchievementQueryCallbackProxy.CacheAchievementDescriptions
inline struct Unknown UAchievementQueryCallbackProxy::CacheAchievementDescriptions(struct Unknown WorldContextObject, struct Unknown PlayerController) {
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.AchievementQueryCallbackProxy.CacheAchievementDescriptions");

	struct CacheAchievementDescriptions_Params {
		struct Unknown WorldContextObject;
		struct Unknown PlayerController;
		struct Unknown ReturnValue;

	}; CacheAchievementDescriptions_Params Params;

	Params.WorldContextObject = WorldContextObject;
	Params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function OnlineSubsystemUtils.AchievementWriteCallbackProxy.WriteAchievementProgress
inline struct Unknown UAchievementWriteCallbackProxy::WriteAchievementProgress(struct Unknown WorldContextObject, struct Unknown PlayerController, struct FName AchievementName, float progress, int32_t UserTag) {
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.AchievementWriteCallbackProxy.WriteAchievementProgress");

	struct WriteAchievementProgress_Params {
		struct Unknown WorldContextObject;
		struct Unknown PlayerController;
		struct FName AchievementName;
		float progress;
		int32_t UserTag;
		struct Unknown ReturnValue;

	}; WriteAchievementProgress_Params Params;

	Params.WorldContextObject = WorldContextObject;
	Params.PlayerController = PlayerController;
	Params.AchievementName = AchievementName;
	Params.progress = progress;
	Params.UserTag = UserTag;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function OnlineSubsystemUtils.ConnectionCallbackProxy.ConnectToService
inline struct Unknown UConnectionCallbackProxy::ConnectToService(struct Unknown WorldContextObject, struct Unknown PlayerController) {
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.ConnectionCallbackProxy.ConnectToService");

	struct ConnectToService_Params {
		struct Unknown WorldContextObject;
		struct Unknown PlayerController;
		struct Unknown ReturnValue;

	}; ConnectToService_Params Params;

	Params.WorldContextObject = WorldContextObject;
	Params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function OnlineSubsystemUtils.CreateSessionCallbackProxy.CreateSession
inline struct Unknown UCreateSessionCallbackProxy::CreateSession(struct Unknown WorldContextObject, struct Unknown PlayerController, int32_t PublicConnections, char bUseLAN) {
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.CreateSessionCallbackProxy.CreateSession");

	struct CreateSession_Params {
		struct Unknown WorldContextObject;
		struct Unknown PlayerController;
		int32_t PublicConnections;
		char bUseLAN;
		struct Unknown ReturnValue;

	}; CreateSession_Params Params;

	Params.WorldContextObject = WorldContextObject;
	Params.PlayerController = PlayerController;
	Params.PublicConnections = PublicConnections;
	Params.bUseLAN = bUseLAN;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function OnlineSubsystemUtils.DestroySessionCallbackProxy.DestroySession
inline struct Unknown UDestroySessionCallbackProxy::DestroySession(struct Unknown WorldContextObject, struct Unknown PlayerController) {
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.DestroySessionCallbackProxy.DestroySession");

	struct DestroySession_Params {
		struct Unknown WorldContextObject;
		struct Unknown PlayerController;
		struct Unknown ReturnValue;

	}; DestroySession_Params Params;

	Params.WorldContextObject = WorldContextObject;
	Params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function OnlineSubsystemUtils.EndMatchCallbackProxy.EndMatch
inline struct Unknown UEndMatchCallbackProxy::EndMatch(struct Unknown WorldContextObject, struct Unknown PlayerController, struct TScriptInterface<IUnknown> MatchActor, struct FString MatchID, char LocalPlayerOutcome, char OtherPlayersOutcome) {
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.EndMatchCallbackProxy.EndMatch");

	struct EndMatch_Params {
		struct Unknown WorldContextObject;
		struct Unknown PlayerController;
		struct TScriptInterface<IUnknown> MatchActor;
		struct FString MatchID;
		char LocalPlayerOutcome;
		char OtherPlayersOutcome;
		struct Unknown ReturnValue;

	}; EndMatch_Params Params;

	Params.WorldContextObject = WorldContextObject;
	Params.PlayerController = PlayerController;
	Params.MatchActor = MatchActor;
	Params.MatchID = MatchID;
	Params.LocalPlayerOutcome = LocalPlayerOutcome;
	Params.OtherPlayersOutcome = OtherPlayersOutcome;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function OnlineSubsystemUtils.EndTurnCallbackProxy.EndTurn
inline struct Unknown UEndTurnCallbackProxy::EndTurn(struct Unknown WorldContextObject, struct Unknown PlayerController, struct FString MatchID, struct TScriptInterface<IUnknown> TurnBasedMatchInterface) {
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.EndTurnCallbackProxy.EndTurn");

	struct EndTurn_Params {
		struct Unknown WorldContextObject;
		struct Unknown PlayerController;
		struct FString MatchID;
		struct TScriptInterface<IUnknown> TurnBasedMatchInterface;
		struct Unknown ReturnValue;

	}; EndTurn_Params Params;

	Params.WorldContextObject = WorldContextObject;
	Params.PlayerController = PlayerController;
	Params.MatchID = MatchID;
	Params.TurnBasedMatchInterface = TurnBasedMatchInterface;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetServerName
inline struct FString UFindSessionsCallbackProxy::GetServerName(struct Unknown& Result) {
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetServerName");

	struct GetServerName_Params {
		struct Unknown& Result;
		struct FString ReturnValue;

	}; GetServerName_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Result = Params.Result;


	return params.ReturnValue;
}

// Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetPingInMs
inline int32_t UFindSessionsCallbackProxy::GetPingInMs(struct Unknown& Result) {
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetPingInMs");

	struct GetPingInMs_Params {
		struct Unknown& Result;
		int32_t ReturnValue;

	}; GetPingInMs_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Result = Params.Result;


	return params.ReturnValue;
}

// Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetMaxPlayers
inline int32_t UFindSessionsCallbackProxy::GetMaxPlayers(struct Unknown& Result) {
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetMaxPlayers");

	struct GetMaxPlayers_Params {
		struct Unknown& Result;
		int32_t ReturnValue;

	}; GetMaxPlayers_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Result = Params.Result;


	return params.ReturnValue;
}

// Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetCurrentPlayers
inline int32_t UFindSessionsCallbackProxy::GetCurrentPlayers(struct Unknown& Result) {
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetCurrentPlayers");

	struct GetCurrentPlayers_Params {
		struct Unknown& Result;
		int32_t ReturnValue;

	}; GetCurrentPlayers_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Result = Params.Result;


	return params.ReturnValue;
}

// Function OnlineSubsystemUtils.FindSessionsCallbackProxy.FindSessions
inline struct Unknown UFindSessionsCallbackProxy::FindSessions(struct Unknown WorldContextObject, struct Unknown PlayerController, int32_t MaxResults, char bUseLAN) {
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.FindSessionsCallbackProxy.FindSessions");

	struct FindSessions_Params {
		struct Unknown WorldContextObject;
		struct Unknown PlayerController;
		int32_t MaxResults;
		char bUseLAN;
		struct Unknown ReturnValue;

	}; FindSessions_Params Params;

	Params.WorldContextObject = WorldContextObject;
	Params.PlayerController = PlayerController;
	Params.MaxResults = MaxResults;
	Params.bUseLAN = bUseLAN;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function OnlineSubsystemUtils.FindTurnBasedMatchCallbackProxy.FindTurnBasedMatch
inline struct Unknown UFindTurnBasedMatchCallbackProxy::FindTurnBasedMatch(struct Unknown WorldContextObject, struct Unknown PlayerController, struct TScriptInterface<IUnknown> MatchActor, int32_t MinPlayers, int32_t MaxPlayers, int32_t PlayerGroup, char ShowExistingMatches) {
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.FindTurnBasedMatchCallbackProxy.FindTurnBasedMatch");

	struct FindTurnBasedMatch_Params {
		struct Unknown WorldContextObject;
		struct Unknown PlayerController;
		struct TScriptInterface<IUnknown> MatchActor;
		int32_t MinPlayers;
		int32_t MaxPlayers;
		int32_t PlayerGroup;
		char ShowExistingMatches;
		struct Unknown ReturnValue;

	}; FindTurnBasedMatch_Params Params;

	Params.WorldContextObject = WorldContextObject;
	Params.PlayerController = PlayerController;
	Params.MatchActor = MatchActor;
	Params.MinPlayers = MinPlayers;
	Params.MaxPlayers = MaxPlayers;
	Params.PlayerGroup = PlayerGroup;
	Params.ShowExistingMatches = ShowExistingMatches;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function OnlineSubsystemUtils.InAppPurchaseCallbackProxy.CreateProxyObjectForInAppPurchase
inline struct Unknown UInAppPurchaseCallbackProxy::CreateProxyObjectForInAppPurchase(struct Unknown PlayerController, struct Unknown& ProductRequest) {
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.InAppPurchaseCallbackProxy.CreateProxyObjectForInAppPurchase");

	struct CreateProxyObjectForInAppPurchase_Params {
		struct Unknown PlayerController;
		struct Unknown& ProductRequest;
		struct Unknown ReturnValue;

	}; CreateProxyObjectForInAppPurchase_Params Params;

	Params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	ProductRequest = Params.ProductRequest;


	return params.ReturnValue;
}

// Function OnlineSubsystemUtils.InAppPurchaseCallbackProxy2.CreateProxyObjectForInAppPurchaseUnprocessedPurchases
inline struct Unknown UInAppPurchaseCallbackProxy2::CreateProxyObjectForInAppPurchaseUnprocessedPurchases(struct Unknown PlayerController) {
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.InAppPurchaseCallbackProxy2.CreateProxyObjectForInAppPurchaseUnprocessedPurchases");

	struct CreateProxyObjectForInAppPurchaseUnprocessedPurchases_Params {
		struct Unknown PlayerController;
		struct Unknown ReturnValue;

	}; CreateProxyObjectForInAppPurchaseUnprocessedPurchases_Params Params;

	Params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function OnlineSubsystemUtils.InAppPurchaseCallbackProxy2.CreateProxyObjectForInAppPurchaseQueryOwned
inline struct Unknown UInAppPurchaseCallbackProxy2::CreateProxyObjectForInAppPurchaseQueryOwned(struct Unknown PlayerController) {
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.InAppPurchaseCallbackProxy2.CreateProxyObjectForInAppPurchaseQueryOwned");

	struct CreateProxyObjectForInAppPurchaseQueryOwned_Params {
		struct Unknown PlayerController;
		struct Unknown ReturnValue;

	}; CreateProxyObjectForInAppPurchaseQueryOwned_Params Params;

	Params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function OnlineSubsystemUtils.InAppPurchaseCallbackProxy2.CreateProxyObjectForInAppPurchase
inline struct Unknown UInAppPurchaseCallbackProxy2::CreateProxyObjectForInAppPurchase(struct Unknown PlayerController, struct Unknown& ProductRequest) {
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.InAppPurchaseCallbackProxy2.CreateProxyObjectForInAppPurchase");

	struct CreateProxyObjectForInAppPurchase_Params {
		struct Unknown PlayerController;
		struct Unknown& ProductRequest;
		struct Unknown ReturnValue;

	}; CreateProxyObjectForInAppPurchase_Params Params;

	Params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	ProductRequest = Params.ProductRequest;


	return params.ReturnValue;
}

// Function OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy.CreateProxyObjectForInAppPurchaseQuery
inline struct Unknown UInAppPurchaseQueryCallbackProxy::CreateProxyObjectForInAppPurchaseQuery(struct Unknown PlayerController, struct TArray<Unknown>& ProductIdentifiers) {
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy.CreateProxyObjectForInAppPurchaseQuery");

	struct CreateProxyObjectForInAppPurchaseQuery_Params {
		struct Unknown PlayerController;
		struct TArray<Unknown>& ProductIdentifiers;
		struct Unknown ReturnValue;

	}; CreateProxyObjectForInAppPurchaseQuery_Params Params;

	Params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	ProductIdentifiers = Params.ProductIdentifiers;


	return params.ReturnValue;
}

// Function OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy2.CreateProxyObjectForInAppPurchaseQuery
inline struct Unknown UInAppPurchaseQueryCallbackProxy2::CreateProxyObjectForInAppPurchaseQuery(struct Unknown PlayerController, struct TArray<Unknown>& ProductIdentifiers) {
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy2.CreateProxyObjectForInAppPurchaseQuery");

	struct CreateProxyObjectForInAppPurchaseQuery_Params {
		struct Unknown PlayerController;
		struct TArray<Unknown>& ProductIdentifiers;
		struct Unknown ReturnValue;

	}; CreateProxyObjectForInAppPurchaseQuery_Params Params;

	Params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	ProductIdentifiers = Params.ProductIdentifiers;


	return params.ReturnValue;
}

// Function OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy.CreateProxyObjectForInAppPurchaseRestore
inline struct Unknown UInAppPurchaseRestoreCallbackProxy::CreateProxyObjectForInAppPurchaseRestore(struct TArray<Unknown>& ConsumableProductFlags, struct Unknown PlayerController) {
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy.CreateProxyObjectForInAppPurchaseRestore");

	struct CreateProxyObjectForInAppPurchaseRestore_Params {
		struct TArray<Unknown>& ConsumableProductFlags;
		struct Unknown PlayerController;
		struct Unknown ReturnValue;

	}; CreateProxyObjectForInAppPurchaseRestore_Params Params;

	Params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	ConsumableProductFlags = Params.ConsumableProductFlags;


	return params.ReturnValue;
}

// Function OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy2.CreateProxyObjectForInAppPurchaseRestore
inline struct Unknown UInAppPurchaseRestoreCallbackProxy2::CreateProxyObjectForInAppPurchaseRestore(struct TArray<Unknown>& ConsumableProductFlags, struct Unknown PlayerController) {
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy2.CreateProxyObjectForInAppPurchaseRestore");

	struct CreateProxyObjectForInAppPurchaseRestore_Params {
		struct TArray<Unknown>& ConsumableProductFlags;
		struct Unknown PlayerController;
		struct Unknown ReturnValue;

	}; CreateProxyObjectForInAppPurchaseRestore_Params Params;

	Params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	ConsumableProductFlags = Params.ConsumableProductFlags;


	return params.ReturnValue;
}

// Function OnlineSubsystemUtils.JoinSessionCallbackProxy.JoinSession
inline struct Unknown UJoinSessionCallbackProxy::JoinSession(struct Unknown WorldContextObject, struct Unknown PlayerController, struct Unknown& SearchResult) {
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.JoinSessionCallbackProxy.JoinSession");

	struct JoinSession_Params {
		struct Unknown WorldContextObject;
		struct Unknown PlayerController;
		struct Unknown& SearchResult;
		struct Unknown ReturnValue;

	}; JoinSession_Params Params;

	Params.WorldContextObject = WorldContextObject;
	Params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	SearchResult = Params.SearchResult;


	return params.ReturnValue;
}

// Function OnlineSubsystemUtils.LeaderboardFlushCallbackProxy.CreateProxyObjectForFlush
inline struct Unknown ULeaderboardFlushCallbackProxy::CreateProxyObjectForFlush(struct Unknown PlayerController, struct FName SessionName) {
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.LeaderboardFlushCallbackProxy.CreateProxyObjectForFlush");

	struct CreateProxyObjectForFlush_Params {
		struct Unknown PlayerController;
		struct FName SessionName;
		struct Unknown ReturnValue;

	}; CreateProxyObjectForFlush_Params Params;

	Params.PlayerController = PlayerController;
	Params.SessionName = SessionName;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function OnlineSubsystemUtils.LeaderboardQueryCallbackProxy.CreateProxyObjectForIntQuery
inline struct Unknown ULeaderboardQueryCallbackProxy::CreateProxyObjectForIntQuery(struct Unknown PlayerController, struct FName StatName) {
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.LeaderboardQueryCallbackProxy.CreateProxyObjectForIntQuery");

	struct CreateProxyObjectForIntQuery_Params {
		struct Unknown PlayerController;
		struct FName StatName;
		struct Unknown ReturnValue;

	}; CreateProxyObjectForIntQuery_Params Params;

	Params.PlayerController = PlayerController;
	Params.StatName = StatName;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function OnlineSubsystemUtils.LogoutCallbackProxy.Logout
inline struct Unknown ULogoutCallbackProxy::Logout(struct Unknown WorldContextObject, struct Unknown PlayerController) {
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.LogoutCallbackProxy.Logout");

	struct Logout_Params {
		struct Unknown WorldContextObject;
		struct Unknown PlayerController;
		struct Unknown ReturnValue;

	}; Logout_Params Params;

	Params.WorldContextObject = WorldContextObject;
	Params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function OnlineSubsystemUtils.OnlineBeaconClient.ClientOnConnected
inline void AOnlineBeaconClient::ClientOnConnected() {
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.OnlineBeaconClient.ClientOnConnected");

	struct ClientOnConnected_Params {
		
	}; ClientOnConnected_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function OnlineSubsystemUtils.PartyBeaconClient.ServerUpdateReservationRequest
inline void APartyBeaconClient::ServerUpdateReservationRequest(struct FString SessionID, struct Unknown ReservationUpdate) {
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.PartyBeaconClient.ServerUpdateReservationRequest");

	struct ServerUpdateReservationRequest_Params {
		struct FString SessionID;
		struct Unknown ReservationUpdate;
	}; ServerUpdateReservationRequest_Params Params;

	Params.SessionID = SessionID;
	Params.ReservationUpdate = ReservationUpdate;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function OnlineSubsystemUtils.PartyBeaconClient.ServerReservationRequest
inline void APartyBeaconClient::ServerReservationRequest(struct FString SessionID, struct Unknown Reservation) {
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.PartyBeaconClient.ServerReservationRequest");

	struct ServerReservationRequest_Params {
		struct FString SessionID;
		struct Unknown Reservation;
	}; ServerReservationRequest_Params Params;

	Params.SessionID = SessionID;
	Params.Reservation = Reservation;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function OnlineSubsystemUtils.PartyBeaconClient.ServerRemoveMemberFromReservationRequest
inline void APartyBeaconClient::ServerRemoveMemberFromReservationRequest(struct FString SessionID, struct Unknown ReservationUpdate) {
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.PartyBeaconClient.ServerRemoveMemberFromReservationRequest");

	struct ServerRemoveMemberFromReservationRequest_Params {
		struct FString SessionID;
		struct Unknown ReservationUpdate;
	}; ServerRemoveMemberFromReservationRequest_Params Params;

	Params.SessionID = SessionID;
	Params.ReservationUpdate = ReservationUpdate;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function OnlineSubsystemUtils.PartyBeaconClient.ServerCancelReservationRequest
inline void APartyBeaconClient::ServerCancelReservationRequest(struct Unknown PartyLeader) {
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.PartyBeaconClient.ServerCancelReservationRequest");

	struct ServerCancelReservationRequest_Params {
		struct Unknown PartyLeader;
	}; ServerCancelReservationRequest_Params Params;

	Params.PartyLeader = PartyLeader;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function OnlineSubsystemUtils.PartyBeaconClient.ClientSendReservationUpdates
inline void APartyBeaconClient::ClientSendReservationUpdates(int32_t NumRemainingReservations) {
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.PartyBeaconClient.ClientSendReservationUpdates");

	struct ClientSendReservationUpdates_Params {
		int32_t NumRemainingReservations;
	}; ClientSendReservationUpdates_Params Params;

	Params.NumRemainingReservations = NumRemainingReservations;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function OnlineSubsystemUtils.PartyBeaconClient.ClientSendReservationFull
inline void APartyBeaconClient::ClientSendReservationFull() {
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.PartyBeaconClient.ClientSendReservationFull");

	struct ClientSendReservationFull_Params {
		
	}; ClientSendReservationFull_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function OnlineSubsystemUtils.PartyBeaconClient.ClientReservationResponse
inline void APartyBeaconClient::ClientReservationResponse(char ReservationResponse) {
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.PartyBeaconClient.ClientReservationResponse");

	struct ClientReservationResponse_Params {
		char ReservationResponse;
	}; ClientReservationResponse_Params Params;

	Params.ReservationResponse = ReservationResponse;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function OnlineSubsystemUtils.PartyBeaconClient.ClientCancelReservationResponse
inline void APartyBeaconClient::ClientCancelReservationResponse(char ReservationResponse) {
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.PartyBeaconClient.ClientCancelReservationResponse");

	struct ClientCancelReservationResponse_Params {
		char ReservationResponse;
	}; ClientCancelReservationResponse_Params Params;

	Params.ReservationResponse = ReservationResponse;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function OnlineSubsystemUtils.QuitMatchCallbackProxy.QuitMatch
inline struct Unknown UQuitMatchCallbackProxy::QuitMatch(struct Unknown WorldContextObject, struct Unknown PlayerController, struct FString MatchID, char Outcome, int32_t TurnTimeoutInSeconds) {
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.QuitMatchCallbackProxy.QuitMatch");

	struct QuitMatch_Params {
		struct Unknown WorldContextObject;
		struct Unknown PlayerController;
		struct FString MatchID;
		char Outcome;
		int32_t TurnTimeoutInSeconds;
		struct Unknown ReturnValue;

	}; QuitMatch_Params Params;

	Params.WorldContextObject = WorldContextObject;
	Params.PlayerController = PlayerController;
	Params.MatchID = MatchID;
	Params.Outcome = Outcome;
	Params.TurnTimeoutInSeconds = TurnTimeoutInSeconds;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function OnlineSubsystemUtils.ShowLoginUICallbackProxy.ShowExternalLoginUI
inline struct Unknown UShowLoginUICallbackProxy::ShowExternalLoginUI(struct Unknown WorldContextObject, struct Unknown InPlayerController) {
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.ShowLoginUICallbackProxy.ShowExternalLoginUI");

	struct ShowExternalLoginUI_Params {
		struct Unknown WorldContextObject;
		struct Unknown InPlayerController;
		struct Unknown ReturnValue;

	}; ShowExternalLoginUI_Params Params;

	Params.WorldContextObject = WorldContextObject;
	Params.InPlayerController = InPlayerController;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function OnlineSubsystemUtils.SpectatorBeaconClient.ServerReservationRequest
inline void ASpectatorBeaconClient::ServerReservationRequest(struct FString SessionID, struct Unknown Reservation) {
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.SpectatorBeaconClient.ServerReservationRequest");

	struct ServerReservationRequest_Params {
		struct FString SessionID;
		struct Unknown Reservation;
	}; ServerReservationRequest_Params Params;

	Params.SessionID = SessionID;
	Params.Reservation = Reservation;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function OnlineSubsystemUtils.SpectatorBeaconClient.ServerCancelReservationRequest
inline void ASpectatorBeaconClient::ServerCancelReservationRequest(struct Unknown Spectator) {
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.SpectatorBeaconClient.ServerCancelReservationRequest");

	struct ServerCancelReservationRequest_Params {
		struct Unknown Spectator;
	}; ServerCancelReservationRequest_Params Params;

	Params.Spectator = Spectator;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function OnlineSubsystemUtils.SpectatorBeaconClient.ClientSendReservationUpdates
inline void ASpectatorBeaconClient::ClientSendReservationUpdates(int32_t NumRemainingReservations) {
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.SpectatorBeaconClient.ClientSendReservationUpdates");

	struct ClientSendReservationUpdates_Params {
		int32_t NumRemainingReservations;
	}; ClientSendReservationUpdates_Params Params;

	Params.NumRemainingReservations = NumRemainingReservations;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function OnlineSubsystemUtils.SpectatorBeaconClient.ClientSendReservationFull
inline void ASpectatorBeaconClient::ClientSendReservationFull() {
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.SpectatorBeaconClient.ClientSendReservationFull");

	struct ClientSendReservationFull_Params {
		
	}; ClientSendReservationFull_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function OnlineSubsystemUtils.SpectatorBeaconClient.ClientReservationResponse
inline void ASpectatorBeaconClient::ClientReservationResponse(char ReservationResponse) {
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.SpectatorBeaconClient.ClientReservationResponse");

	struct ClientReservationResponse_Params {
		char ReservationResponse;
	}; ClientReservationResponse_Params Params;

	Params.ReservationResponse = ReservationResponse;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function OnlineSubsystemUtils.SpectatorBeaconClient.ClientCancelReservationResponse
inline void ASpectatorBeaconClient::ClientCancelReservationResponse(char ReservationResponse) {
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.SpectatorBeaconClient.ClientCancelReservationResponse");

	struct ClientCancelReservationResponse_Params {
		char ReservationResponse;
	}; ClientCancelReservationResponse_Params Params;

	Params.ReservationResponse = ReservationResponse;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

