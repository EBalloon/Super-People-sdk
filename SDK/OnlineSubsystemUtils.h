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

	struct UAchievementQueryCallbackProxy CacheAchievements(struct Object WorldContextObject, struct APlayerController PlayerController); // Function OnlineSubsystemUtils.AchievementQueryCallbackProxy.CacheAchievements(Final|Native|Static|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11DDEA0>
	struct UAchievementQueryCallbackProxy CacheAchievementDescriptions(struct Object WorldContextObject, struct APlayerController PlayerController); // Function OnlineSubsystemUtils.AchievementQueryCallbackProxy.CacheAchievementDescriptions(Final|Native|Static|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11DDDE0>
};

// Class OnlineSubsystemUtils.AchievementWriteCallbackProxy
class UAchievementWriteCallbackProxy : public UOnlineBlueprintCallProxyBase {

public:

	struct FMulticastInlineDelegate OnSuccess; // 0x30 (16)
	struct FMulticastInlineDelegate OnFailure; // 0x40 (16)

	struct UAchievementWriteCallbackProxy WriteAchievementProgress(struct Object WorldContextObject, struct APlayerController PlayerController, struct FName AchievementName, float progress, int32_t UserTag); // Function OnlineSubsystemUtils.AchievementWriteCallbackProxy.WriteAchievementProgress(Final|Native|Static|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11DFAD0>
};

// Class OnlineSubsystemUtils.ConnectionCallbackProxy
class UConnectionCallbackProxy : public UOnlineBlueprintCallProxyBase {

public:

	struct FMulticastInlineDelegate OnSuccess; // 0x30 (16)
	struct FMulticastInlineDelegate OnFailure; // 0x40 (16)

	struct UConnectionCallbackProxy ConnectToService(struct Object WorldContextObject, struct APlayerController PlayerController); // Function OnlineSubsystemUtils.ConnectionCallbackProxy.ConnectToService(Final|Native|Static|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11DDF60>
};

// Class OnlineSubsystemUtils.CreateSessionCallbackProxy
class UCreateSessionCallbackProxy : public UOnlineBlueprintCallProxyBase {

public:

	struct FMulticastInlineDelegate OnSuccess; // 0x30 (16)
	struct FMulticastInlineDelegate OnFailure; // 0x40 (16)

	struct UCreateSessionCallbackProxy CreateSession(struct Object WorldContextObject, struct APlayerController PlayerController, int32_t PublicConnections, char bUseLAN); // Function OnlineSubsystemUtils.CreateSessionCallbackProxy.CreateSession(Final|Native|Static|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11DE520>
};

// Class OnlineSubsystemUtils.DestroySessionCallbackProxy
class UDestroySessionCallbackProxy : public UOnlineBlueprintCallProxyBase {

public:

	struct FMulticastInlineDelegate OnSuccess; // 0x30 (16)
	struct FMulticastInlineDelegate OnFailure; // 0x40 (16)

	struct UDestroySessionCallbackProxy DestroySession(struct Object WorldContextObject, struct APlayerController PlayerController); // Function OnlineSubsystemUtils.DestroySessionCallbackProxy.DestroySession(Final|Native|Static|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11DE650>
};

// Class OnlineSubsystemUtils.EndMatchCallbackProxy
class UEndMatchCallbackProxy : public UOnlineBlueprintCallProxyBase {

public:

	struct FMulticastInlineDelegate OnSuccess; // 0x30 (16)
	struct FMulticastInlineDelegate OnFailure; // 0x40 (16)

	struct UEndMatchCallbackProxy EndMatch(struct Object WorldContextObject, struct APlayerController PlayerController, struct TScriptInterface<ITurnBasedMatchInterface> MatchActor, struct FString MatchID, char LocalPlayerOutcome, char OtherPlayersOutcome); // Function OnlineSubsystemUtils.EndMatchCallbackProxy.EndMatch(Final|Native|Static|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11DE710>
};

// Class OnlineSubsystemUtils.EndTurnCallbackProxy
class UEndTurnCallbackProxy : public UOnlineBlueprintCallProxyBase {

public:

	struct FMulticastInlineDelegate OnSuccess; // 0x30 (16)
	struct FMulticastInlineDelegate OnFailure; // 0x40 (16)

	struct UEndTurnCallbackProxy EndTurn(struct Object WorldContextObject, struct APlayerController PlayerController, struct FString MatchID, struct TScriptInterface<ITurnBasedMatchInterface> TurnBasedMatchInterface); // Function OnlineSubsystemUtils.EndTurnCallbackProxy.EndTurn(Final|Native|Static|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11DE940>
};

// Class OnlineSubsystemUtils.FindSessionsCallbackProxy
class UFindSessionsCallbackProxy : public UOnlineBlueprintCallProxyBase {

public:

	struct FMulticastInlineDelegate OnSuccess; // 0x30 (16)
	struct FMulticastInlineDelegate OnFailure; // 0x40 (16)

	struct FString GetServerName(struct FBlueprintSessionResult& Result); // Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetServerName(Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11DF8B0>
	int32_t GetPingInMs(struct FBlueprintSessionResult& Result); // Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetPingInMs(Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11DF6D0>
	int32_t GetMaxPlayers(struct FBlueprintSessionResult& Result); // Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetMaxPlayers(Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11DF4F0>
	int32_t GetCurrentPlayers(struct FBlueprintSessionResult& Result); // Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetCurrentPlayers(Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11DF310>
	struct UFindSessionsCallbackProxy FindSessions(struct Object WorldContextObject, struct APlayerController PlayerController, int32_t MaxResults, char bUseLAN); // Function OnlineSubsystemUtils.FindSessionsCallbackProxy.FindSessions(Final|Native|Static|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11DEAE0>
};

// Class OnlineSubsystemUtils.FindTurnBasedMatchCallbackProxy
class UFindTurnBasedMatchCallbackProxy : public UOnlineBlueprintCallProxyBase {

public:

	struct FMulticastInlineDelegate OnSuccess; // 0x30 (16)
	struct FMulticastInlineDelegate OnFailure; // 0x40 (16)

	struct UFindTurnBasedMatchCallbackProxy FindTurnBasedMatch(struct Object WorldContextObject, struct APlayerController PlayerController, struct TScriptInterface<ITurnBasedMatchInterface> MatchActor, int32_t MinPlayers, int32_t MaxPlayers, int32_t PlayerGroup, char ShowExistingMatches); // Function OnlineSubsystemUtils.FindTurnBasedMatchCallbackProxy.FindTurnBasedMatch(Final|Native|Static|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11DEC10>
};

// Class OnlineSubsystemUtils.InAppPurchaseCallbackProxy
class UInAppPurchaseCallbackProxy : public Object {

public:

	struct FMulticastInlineDelegate OnSuccess; // 0x28 (16)
	struct FMulticastInlineDelegate OnFailure; // 0x38 (16)

	struct UInAppPurchaseCallbackProxy CreateProxyObjectForInAppPurchase(struct APlayerController PlayerController, struct FInAppPurchaseProductRequest& ProductRequest); // Function OnlineSubsystemUtils.InAppPurchaseCallbackProxy.CreateProxyObjectForInAppPurchase(Final|Native|Static|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11DE110>
};

// Class OnlineSubsystemUtils.InAppPurchaseCallbackProxy2
class UInAppPurchaseCallbackProxy2 : public Object {

public:

	struct FMulticastInlineDelegate OnSuccess; // 0x28 (16)
	struct FMulticastInlineDelegate OnFailure; // 0x38 (16)

	struct UInAppPurchaseCallbackProxy2 CreateProxyObjectForInAppPurchaseUnprocessedPurchases(struct APlayerController PlayerController); // Function OnlineSubsystemUtils.InAppPurchaseCallbackProxy2.CreateProxyObjectForInAppPurchaseUnprocessedPurchases(Final|Native|Static|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11DE4A0>
	struct UInAppPurchaseCallbackProxy2 CreateProxyObjectForInAppPurchaseQueryOwned(struct APlayerController PlayerController); // Function OnlineSubsystemUtils.InAppPurchaseCallbackProxy2.CreateProxyObjectForInAppPurchaseQueryOwned(Final|Native|Static|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11DE420>
	struct UInAppPurchaseCallbackProxy2 CreateProxyObjectForInAppPurchase(struct APlayerController PlayerController, struct FInAppPurchaseProductRequest2& ProductRequest); // Function OnlineSubsystemUtils.InAppPurchaseCallbackProxy2.CreateProxyObjectForInAppPurchase(Final|Native|Static|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11DE020>
};

// Class OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy
class UInAppPurchaseQueryCallbackProxy : public Object {

public:

	struct FMulticastInlineDelegate OnSuccess; // 0x28 (16)
	struct FMulticastInlineDelegate OnFailure; // 0x38 (16)

	struct UInAppPurchaseQueryCallbackProxy CreateProxyObjectForInAppPurchaseQuery(struct APlayerController PlayerController, struct TArray<struct FString>& ProductIdentifiers); // Function OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy.CreateProxyObjectForInAppPurchaseQuery(Final|Native|Static|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11DE310>
};

// Class OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy2
class UInAppPurchaseQueryCallbackProxy2 : public Object {

public:

	struct FMulticastInlineDelegate OnSuccess; // 0x28 (16)
	struct FMulticastInlineDelegate OnFailure; // 0x38 (16)

	struct UInAppPurchaseQueryCallbackProxy2 CreateProxyObjectForInAppPurchaseQuery(struct APlayerController PlayerController, struct TArray<struct FString>& ProductIdentifiers); // Function OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy2.CreateProxyObjectForInAppPurchaseQuery(Final|Native|Static|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11DE200>
};

// Class OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy
class UInAppPurchaseRestoreCallbackProxy : public Object {

public:

	struct FMulticastInlineDelegate OnSuccess; // 0x28 (16)
	struct FMulticastInlineDelegate OnFailure; // 0x38 (16)

	struct UInAppPurchaseRestoreCallbackProxy CreateProxyObjectForInAppPurchaseRestore(struct TArray<struct FInAppPurchaseProductRequest>& ConsumableProductFlags, struct APlayerController PlayerController); // Function OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy.CreateProxyObjectForInAppPurchaseRestore(Final|Native|Static|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11E37D0>
};

// Class OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy2
class UInAppPurchaseRestoreCallbackProxy2 : public Object {

public:

	struct FMulticastInlineDelegate OnSuccess; // 0x28 (16)
	struct FMulticastInlineDelegate OnFailure; // 0x38 (16)

	struct UInAppPurchaseRestoreCallbackProxy2 CreateProxyObjectForInAppPurchaseRestore(struct TArray<struct FInAppPurchaseProductRequest2>& ConsumableProductFlags, struct APlayerController PlayerController); // Function OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy2.CreateProxyObjectForInAppPurchaseRestore(Final|Native|Static|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11E36B0>
};

// Class OnlineSubsystemUtils.JoinSessionCallbackProxy
class UJoinSessionCallbackProxy : public UOnlineBlueprintCallProxyBase {

public:

	struct FMulticastInlineDelegate OnSuccess; // 0x30 (16)
	struct FMulticastInlineDelegate OnFailure; // 0x40 (16)

	struct UJoinSessionCallbackProxy JoinSession(struct Object WorldContextObject, struct APlayerController PlayerController, struct FBlueprintSessionResult& SearchResult); // Function OnlineSubsystemUtils.JoinSessionCallbackProxy.JoinSession(Final|Native|Static|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11E39B0>
};

// Class OnlineSubsystemUtils.LeaderboardFlushCallbackProxy
class ULeaderboardFlushCallbackProxy : public Object {

public:

	struct FMulticastInlineDelegate OnSuccess; // 0x28 (16)
	struct FMulticastInlineDelegate OnFailure; // 0x38 (16)

	struct ULeaderboardFlushCallbackProxy CreateProxyObjectForFlush(struct APlayerController PlayerController, struct FName SessionName); // Function OnlineSubsystemUtils.LeaderboardFlushCallbackProxy.CreateProxyObjectForFlush(Final|Native|Static|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11E35F0>
};

// Class OnlineSubsystemUtils.LeaderboardQueryCallbackProxy
class ULeaderboardQueryCallbackProxy : public Object {

public:

	struct FMulticastInlineDelegate OnSuccess; // 0x28 (16)
	struct FMulticastInlineDelegate OnFailure; // 0x38 (16)

	struct ULeaderboardQueryCallbackProxy CreateProxyObjectForIntQuery(struct APlayerController PlayerController, struct FName StatName); // Function OnlineSubsystemUtils.LeaderboardQueryCallbackProxy.CreateProxyObjectForIntQuery(Final|Native|Static|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11E38F0>
};

// Class OnlineSubsystemUtils.LogoutCallbackProxy
class ULogoutCallbackProxy : public UBlueprintAsyncActionBase {

public:

	struct FMulticastInlineDelegate OnSuccess; // 0x30 (16)
	struct FMulticastInlineDelegate OnFailure; // 0x40 (16)

	struct ULogoutCallbackProxy Logout(struct Object WorldContextObject, struct APlayerController PlayerController); // Function OnlineSubsystemUtils.LogoutCallbackProxy.Logout(Final|Native|Static|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11E3C10>
};

// Class OnlineSubsystemUtils.OnlineBeacon
class AOnlineBeacon : public UActor {

public:

	float BeaconConnectionInitialTimeout; // 0x320 (4)
	float BeaconConnectionTimeout; // 0x324 (4)
	struct UNetDriver NetDriver; // 0x328 (8)
};

// Class OnlineSubsystemUtils.OnlineBeaconClient
class AOnlineBeaconClient : public AOnlineBeacon {

public:

	struct AOnlineBeaconHostObject BeaconOwner; // 0x348 (8)
	struct UNetConnection BeaconConnection; // 0x350 (8)
	enum class EBeaconConnectionState ConnectionState; // 0x358 (1)

	void ClientOnConnected(); // Function OnlineSubsystemUtils.OnlineBeaconClient.ClientOnConnected(Final|Net|NetReliableNative|Event|Private|NetClient) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11E34A0>
};

// Class OnlineSubsystemUtils.OnlineBeaconHost
class AOnlineBeaconHost : public AOnlineBeacon {

public:

	int32_t ListenPort; // 0x348 (4)
	struct TArray<struct AOnlineBeaconClient> ClientActors; // 0x350 (16)
};

// Class OnlineSubsystemUtils.OnlineBeaconHostObject
class AOnlineBeaconHostObject : public UActor {

public:

	struct FString BeaconTypeName; // 0x318 (16)
	struct UClass* ClientBeaconActorClass; // 0x328 (8)
	struct TArray<struct AOnlineBeaconClient> ClientActors; // 0x330 (16)
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
	struct TArray<struct FPIELoginSettingsInternal> Logins; // 0x40 (16)
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

	struct FString DestSessionId; // 0x3D8 (16)
	struct FPartyReservation PendingReservation; // 0x3E8 (80)
	enum class EClientRequestType RequestType; // 0x438 (1)
	char bPendingReservationSent : 0; // 0x439 (1)
	char bCancelReservation : 0; // 0x43A (1)

	void ServerUpdateReservationRequest(struct FString SessionID, struct FPartyReservation ReservationUpdate); // Function OnlineSubsystemUtils.PartyBeaconClient.ServerUpdateReservationRequest(Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11E44F0>
	void ServerReservationRequest(struct FString SessionID, struct FPartyReservation Reservation); // Function OnlineSubsystemUtils.PartyBeaconClient.ServerReservationRequest(Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11E4250>
	void ServerRemoveMemberFromReservationRequest(struct FString SessionID, struct FPartyReservation ReservationUpdate); // Function OnlineSubsystemUtils.PartyBeaconClient.ServerRemoveMemberFromReservationRequest(Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11E3FB0>
	void ServerCancelReservationRequest(struct FUniqueNetIdRepl PartyLeader); // Function OnlineSubsystemUtils.PartyBeaconClient.ServerCancelReservationRequest(Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11E3EA0>
	void ClientSendReservationUpdates(int32_t NumRemainingReservations); // Function OnlineSubsystemUtils.PartyBeaconClient.ClientSendReservationUpdates(Net|NetReliableNative|Event|Public|NetClient) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11E3560>
	void ClientSendReservationFull(); // Function OnlineSubsystemUtils.PartyBeaconClient.ClientSendReservationFull(Net|NetReliableNative|Event|Public|NetClient) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11E3540>
	void ClientReservationResponse(char ReservationResponse); // Function OnlineSubsystemUtils.PartyBeaconClient.ClientReservationResponse(Net|NetReliableNative|Event|Public|NetClient) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11E34C0>
	void ClientCancelReservationResponse(char ReservationResponse); // Function OnlineSubsystemUtils.PartyBeaconClient.ClientCancelReservationResponse(Net|NetReliableNative|Event|Public|NetClient) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11E3420>
};

// Class OnlineSubsystemUtils.PartyBeaconHost
class APartyBeaconHost : public AOnlineBeaconHostObject {

public:

	struct UPartyBeaconState State; // 0x340 (8)
	char bLogoutOnSessionTimeout : 0; // 0x3A8 (1)
	float SessionTimeoutSecs; // 0x3AC (4)
	float TravelSessionTimeoutSecs; // 0x3B0 (4)
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
	struct TArray<struct FPartyReservation> Reservations; // 0x58 (16)
};

// Class OnlineSubsystemUtils.QuitMatchCallbackProxy
class UQuitMatchCallbackProxy : public UOnlineBlueprintCallProxyBase {

public:

	struct FMulticastInlineDelegate OnSuccess; // 0x30 (16)
	struct FMulticastInlineDelegate OnFailure; // 0x40 (16)

	struct UQuitMatchCallbackProxy QuitMatch(struct Object WorldContextObject, struct APlayerController PlayerController, struct FString MatchID, char Outcome, int32_t TurnTimeoutInSeconds); // Function OnlineSubsystemUtils.QuitMatchCallbackProxy.QuitMatch(Final|Native|Static|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11E3CD0>
};

// Class OnlineSubsystemUtils.ShowLoginUICallbackProxy
class UShowLoginUICallbackProxy : public UBlueprintAsyncActionBase {

public:

	struct FMulticastInlineDelegate OnSuccess; // 0x30 (16)
	struct FMulticastInlineDelegate OnFailure; // 0x40 (16)

	struct UShowLoginUICallbackProxy ShowExternalLoginUI(struct Object WorldContextObject, struct APlayerController InPlayerController); // Function OnlineSubsystemUtils.ShowLoginUICallbackProxy.ShowExternalLoginUI(Final|Native|Static|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11E6A50>
};

// Class OnlineSubsystemUtils.SpectatorBeaconClient
class ASpectatorBeaconClient : public AOnlineBeaconClient {

public:

	struct FString DestSessionId; // 0x3D8 (16)
	struct FSpectatorReservation PendingReservation; // 0x3E8 (120)
	enum class ESpectatorClientRequestType RequestType; // 0x460 (1)
	char bPendingReservationSent : 0; // 0x461 (1)
	char bCancelReservation : 0; // 0x462 (1)

	void ServerReservationRequest(struct FString SessionID, struct FSpectatorReservation Reservation); // Function OnlineSubsystemUtils.SpectatorBeaconClient.ServerReservationRequest(Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11E6850>
	void ServerCancelReservationRequest(struct FUniqueNetIdRepl Spectator); // Function OnlineSubsystemUtils.SpectatorBeaconClient.ServerCancelReservationRequest(Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11E3EA0>
	void ClientSendReservationUpdates(int32_t NumRemainingReservations); // Function OnlineSubsystemUtils.SpectatorBeaconClient.ClientSendReservationUpdates(Net|NetReliableNative|Event|Public|NetClient) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11E60F0>
	void ClientSendReservationFull(); // Function OnlineSubsystemUtils.SpectatorBeaconClient.ClientSendReservationFull(Net|NetReliableNative|Event|Public|NetClient) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11E60D0>
	void ClientReservationResponse(char ReservationResponse); // Function OnlineSubsystemUtils.SpectatorBeaconClient.ClientReservationResponse(Net|NetReliableNative|Event|Public|NetClient) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11E6050>
	void ClientCancelReservationResponse(char ReservationResponse); // Function OnlineSubsystemUtils.SpectatorBeaconClient.ClientCancelReservationResponse(Net|NetReliableNative|Event|Public|NetClient) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11E5FB0>
};

// Class OnlineSubsystemUtils.SpectatorBeaconHost
class ASpectatorBeaconHost : public AOnlineBeaconHostObject {

public:

	struct USpectatorBeaconState State; // 0x340 (8)
	char bLogoutOnSessionTimeout : 0; // 0x3A8 (1)
	float SessionTimeoutSecs; // 0x3AC (4)
	float TravelSessionTimeoutSecs; // 0x3B0 (4)
};

// Class OnlineSubsystemUtils.SpectatorBeaconState
class USpectatorBeaconState : public Object {

public:

	struct FName SessionName; // 0x28 (8)
	int32_t NumConsumedReservations; // 0x30 (4)
	int32_t MaxReservations; // 0x34 (4)
	char bRestrictCrossConsole : 0; // 0x38 (1)
	struct TArray<struct FSpectatorReservation> Reservations; // 0x40 (16)
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
	struct FDateTime ReleaseDate; // 0xA8 (8)
	struct FDateTime ExpirationDate; // 0xB0 (8)
	enum class EOnlineProxyStoreOfferDiscountType DiscountType; // 0xB8 (1)
	struct TMap<struct FString, struct FString> DynamicFields; // 0xC0 (80)
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
	struct TMap<struct FString, struct FString> DynamicFields; // 0xA8 (80)
};

// ScriptStruct OnlineSubsystemUtils.InAppPurchaseProductRequest2
struct FInAppPurchaseProductRequest2 {
	struct FString ProductIdentifier; // 0x0 (16)
	char bIsConsumable : 0; // 0x10 (1)
};

// ScriptStruct OnlineSubsystemUtils.PlayerReservation
struct FPlayerReservation {
	struct FUniqueNetIdRepl UniqueID; // 0x0 (40)
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
	struct TArray<char> TokenBytes; // 0x30 (16)
};

// ScriptStruct OnlineSubsystemUtils.PartyReservation
struct FPartyReservation {
	int32_t TeamNum; // 0x0 (4)
	struct FUniqueNetIdRepl PartyLeader; // 0x8 (40)
	struct TArray<struct FPlayerReservation> PartyMembers; // 0x30 (16)
	struct TArray<struct FPlayerReservation> RemovedPartyMembers; // 0x40 (16)
};

// ScriptStruct OnlineSubsystemUtils.SpectatorReservation
struct FSpectatorReservation {
	struct FUniqueNetIdRepl SpectatorId; // 0x0 (40)
	struct FPlayerReservation Spectator; // 0x28 (80)
};

// Function OnlineSubsystemUtils.AchievementQueryCallbackProxy.CacheAchievements
inline struct UAchievementQueryCallbackProxy UAchievementQueryCallbackProxy::CacheAchievements(struct Object WorldContextObject, struct APlayerController PlayerController) {
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.AchievementQueryCallbackProxy.CacheAchievements");

	struct CacheAchievements_Params {
		struct Object WorldContextObject;
		struct APlayerController PlayerController;
		struct UAchievementQueryCallbackProxy ReturnValue;

	}; CacheAchievements_Params Params;

	Params.WorldContextObject = WorldContextObject;
	Params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function OnlineSubsystemUtils.AchievementQueryCallbackProxy.CacheAchievementDescriptions
inline struct UAchievementQueryCallbackProxy UAchievementQueryCallbackProxy::CacheAchievementDescriptions(struct Object WorldContextObject, struct APlayerController PlayerController) {
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.AchievementQueryCallbackProxy.CacheAchievementDescriptions");

	struct CacheAchievementDescriptions_Params {
		struct Object WorldContextObject;
		struct APlayerController PlayerController;
		struct UAchievementQueryCallbackProxy ReturnValue;

	}; CacheAchievementDescriptions_Params Params;

	Params.WorldContextObject = WorldContextObject;
	Params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function OnlineSubsystemUtils.AchievementWriteCallbackProxy.WriteAchievementProgress
inline struct UAchievementWriteCallbackProxy UAchievementWriteCallbackProxy::WriteAchievementProgress(struct Object WorldContextObject, struct APlayerController PlayerController, struct FName AchievementName, float progress, int32_t UserTag) {
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.AchievementWriteCallbackProxy.WriteAchievementProgress");

	struct WriteAchievementProgress_Params {
		struct Object WorldContextObject;
		struct APlayerController PlayerController;
		struct FName AchievementName;
		float progress;
		int32_t UserTag;
		struct UAchievementWriteCallbackProxy ReturnValue;

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
inline struct UConnectionCallbackProxy UConnectionCallbackProxy::ConnectToService(struct Object WorldContextObject, struct APlayerController PlayerController) {
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.ConnectionCallbackProxy.ConnectToService");

	struct ConnectToService_Params {
		struct Object WorldContextObject;
		struct APlayerController PlayerController;
		struct UConnectionCallbackProxy ReturnValue;

	}; ConnectToService_Params Params;

	Params.WorldContextObject = WorldContextObject;
	Params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function OnlineSubsystemUtils.CreateSessionCallbackProxy.CreateSession
inline struct UCreateSessionCallbackProxy UCreateSessionCallbackProxy::CreateSession(struct Object WorldContextObject, struct APlayerController PlayerController, int32_t PublicConnections, char bUseLAN) {
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.CreateSessionCallbackProxy.CreateSession");

	struct CreateSession_Params {
		struct Object WorldContextObject;
		struct APlayerController PlayerController;
		int32_t PublicConnections;
		char bUseLAN;
		struct UCreateSessionCallbackProxy ReturnValue;

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
inline struct UDestroySessionCallbackProxy UDestroySessionCallbackProxy::DestroySession(struct Object WorldContextObject, struct APlayerController PlayerController) {
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.DestroySessionCallbackProxy.DestroySession");

	struct DestroySession_Params {
		struct Object WorldContextObject;
		struct APlayerController PlayerController;
		struct UDestroySessionCallbackProxy ReturnValue;

	}; DestroySession_Params Params;

	Params.WorldContextObject = WorldContextObject;
	Params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function OnlineSubsystemUtils.EndMatchCallbackProxy.EndMatch
inline struct UEndMatchCallbackProxy UEndMatchCallbackProxy::EndMatch(struct Object WorldContextObject, struct APlayerController PlayerController, struct TScriptInterface<ITurnBasedMatchInterface> MatchActor, struct FString MatchID, char LocalPlayerOutcome, char OtherPlayersOutcome) {
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.EndMatchCallbackProxy.EndMatch");

	struct EndMatch_Params {
		struct Object WorldContextObject;
		struct APlayerController PlayerController;
		struct TScriptInterface<ITurnBasedMatchInterface> MatchActor;
		struct FString MatchID;
		char LocalPlayerOutcome;
		char OtherPlayersOutcome;
		struct UEndMatchCallbackProxy ReturnValue;

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
inline struct UEndTurnCallbackProxy UEndTurnCallbackProxy::EndTurn(struct Object WorldContextObject, struct APlayerController PlayerController, struct FString MatchID, struct TScriptInterface<ITurnBasedMatchInterface> TurnBasedMatchInterface) {
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.EndTurnCallbackProxy.EndTurn");

	struct EndTurn_Params {
		struct Object WorldContextObject;
		struct APlayerController PlayerController;
		struct FString MatchID;
		struct TScriptInterface<ITurnBasedMatchInterface> TurnBasedMatchInterface;
		struct UEndTurnCallbackProxy ReturnValue;

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
inline struct FString UFindSessionsCallbackProxy::GetServerName(struct FBlueprintSessionResult& Result) {
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetServerName");

	struct GetServerName_Params {
		struct FBlueprintSessionResult& Result;
		struct FString ReturnValue;

	}; GetServerName_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Result = Params.Result;


	return params.ReturnValue;
}

// Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetPingInMs
inline int32_t UFindSessionsCallbackProxy::GetPingInMs(struct FBlueprintSessionResult& Result) {
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetPingInMs");

	struct GetPingInMs_Params {
		struct FBlueprintSessionResult& Result;
		int32_t ReturnValue;

	}; GetPingInMs_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Result = Params.Result;


	return params.ReturnValue;
}

// Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetMaxPlayers
inline int32_t UFindSessionsCallbackProxy::GetMaxPlayers(struct FBlueprintSessionResult& Result) {
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetMaxPlayers");

	struct GetMaxPlayers_Params {
		struct FBlueprintSessionResult& Result;
		int32_t ReturnValue;

	}; GetMaxPlayers_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Result = Params.Result;


	return params.ReturnValue;
}

// Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetCurrentPlayers
inline int32_t UFindSessionsCallbackProxy::GetCurrentPlayers(struct FBlueprintSessionResult& Result) {
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetCurrentPlayers");

	struct GetCurrentPlayers_Params {
		struct FBlueprintSessionResult& Result;
		int32_t ReturnValue;

	}; GetCurrentPlayers_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Result = Params.Result;


	return params.ReturnValue;
}

// Function OnlineSubsystemUtils.FindSessionsCallbackProxy.FindSessions
inline struct UFindSessionsCallbackProxy UFindSessionsCallbackProxy::FindSessions(struct Object WorldContextObject, struct APlayerController PlayerController, int32_t MaxResults, char bUseLAN) {
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.FindSessionsCallbackProxy.FindSessions");

	struct FindSessions_Params {
		struct Object WorldContextObject;
		struct APlayerController PlayerController;
		int32_t MaxResults;
		char bUseLAN;
		struct UFindSessionsCallbackProxy ReturnValue;

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
inline struct UFindTurnBasedMatchCallbackProxy UFindTurnBasedMatchCallbackProxy::FindTurnBasedMatch(struct Object WorldContextObject, struct APlayerController PlayerController, struct TScriptInterface<ITurnBasedMatchInterface> MatchActor, int32_t MinPlayers, int32_t MaxPlayers, int32_t PlayerGroup, char ShowExistingMatches) {
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.FindTurnBasedMatchCallbackProxy.FindTurnBasedMatch");

	struct FindTurnBasedMatch_Params {
		struct Object WorldContextObject;
		struct APlayerController PlayerController;
		struct TScriptInterface<ITurnBasedMatchInterface> MatchActor;
		int32_t MinPlayers;
		int32_t MaxPlayers;
		int32_t PlayerGroup;
		char ShowExistingMatches;
		struct UFindTurnBasedMatchCallbackProxy ReturnValue;

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
inline struct UInAppPurchaseCallbackProxy UInAppPurchaseCallbackProxy::CreateProxyObjectForInAppPurchase(struct APlayerController PlayerController, struct FInAppPurchaseProductRequest& ProductRequest) {
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.InAppPurchaseCallbackProxy.CreateProxyObjectForInAppPurchase");

	struct CreateProxyObjectForInAppPurchase_Params {
		struct APlayerController PlayerController;
		struct FInAppPurchaseProductRequest& ProductRequest;
		struct UInAppPurchaseCallbackProxy ReturnValue;

	}; CreateProxyObjectForInAppPurchase_Params Params;

	Params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	ProductRequest = Params.ProductRequest;


	return params.ReturnValue;
}

// Function OnlineSubsystemUtils.InAppPurchaseCallbackProxy2.CreateProxyObjectForInAppPurchaseUnprocessedPurchases
inline struct UInAppPurchaseCallbackProxy2 UInAppPurchaseCallbackProxy2::CreateProxyObjectForInAppPurchaseUnprocessedPurchases(struct APlayerController PlayerController) {
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.InAppPurchaseCallbackProxy2.CreateProxyObjectForInAppPurchaseUnprocessedPurchases");

	struct CreateProxyObjectForInAppPurchaseUnprocessedPurchases_Params {
		struct APlayerController PlayerController;
		struct UInAppPurchaseCallbackProxy2 ReturnValue;

	}; CreateProxyObjectForInAppPurchaseUnprocessedPurchases_Params Params;

	Params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function OnlineSubsystemUtils.InAppPurchaseCallbackProxy2.CreateProxyObjectForInAppPurchaseQueryOwned
inline struct UInAppPurchaseCallbackProxy2 UInAppPurchaseCallbackProxy2::CreateProxyObjectForInAppPurchaseQueryOwned(struct APlayerController PlayerController) {
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.InAppPurchaseCallbackProxy2.CreateProxyObjectForInAppPurchaseQueryOwned");

	struct CreateProxyObjectForInAppPurchaseQueryOwned_Params {
		struct APlayerController PlayerController;
		struct UInAppPurchaseCallbackProxy2 ReturnValue;

	}; CreateProxyObjectForInAppPurchaseQueryOwned_Params Params;

	Params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function OnlineSubsystemUtils.InAppPurchaseCallbackProxy2.CreateProxyObjectForInAppPurchase
inline struct UInAppPurchaseCallbackProxy2 UInAppPurchaseCallbackProxy2::CreateProxyObjectForInAppPurchase(struct APlayerController PlayerController, struct FInAppPurchaseProductRequest2& ProductRequest) {
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.InAppPurchaseCallbackProxy2.CreateProxyObjectForInAppPurchase");

	struct CreateProxyObjectForInAppPurchase_Params {
		struct APlayerController PlayerController;
		struct FInAppPurchaseProductRequest2& ProductRequest;
		struct UInAppPurchaseCallbackProxy2 ReturnValue;

	}; CreateProxyObjectForInAppPurchase_Params Params;

	Params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	ProductRequest = Params.ProductRequest;


	return params.ReturnValue;
}

// Function OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy.CreateProxyObjectForInAppPurchaseQuery
inline struct UInAppPurchaseQueryCallbackProxy UInAppPurchaseQueryCallbackProxy::CreateProxyObjectForInAppPurchaseQuery(struct APlayerController PlayerController, struct TArray<struct FString>& ProductIdentifiers) {
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy.CreateProxyObjectForInAppPurchaseQuery");

	struct CreateProxyObjectForInAppPurchaseQuery_Params {
		struct APlayerController PlayerController;
		struct TArray<struct FString>& ProductIdentifiers;
		struct UInAppPurchaseQueryCallbackProxy ReturnValue;

	}; CreateProxyObjectForInAppPurchaseQuery_Params Params;

	Params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	ProductIdentifiers = Params.ProductIdentifiers;


	return params.ReturnValue;
}

// Function OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy2.CreateProxyObjectForInAppPurchaseQuery
inline struct UInAppPurchaseQueryCallbackProxy2 UInAppPurchaseQueryCallbackProxy2::CreateProxyObjectForInAppPurchaseQuery(struct APlayerController PlayerController, struct TArray<struct FString>& ProductIdentifiers) {
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy2.CreateProxyObjectForInAppPurchaseQuery");

	struct CreateProxyObjectForInAppPurchaseQuery_Params {
		struct APlayerController PlayerController;
		struct TArray<struct FString>& ProductIdentifiers;
		struct UInAppPurchaseQueryCallbackProxy2 ReturnValue;

	}; CreateProxyObjectForInAppPurchaseQuery_Params Params;

	Params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	ProductIdentifiers = Params.ProductIdentifiers;


	return params.ReturnValue;
}

// Function OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy.CreateProxyObjectForInAppPurchaseRestore
inline struct UInAppPurchaseRestoreCallbackProxy UInAppPurchaseRestoreCallbackProxy::CreateProxyObjectForInAppPurchaseRestore(struct TArray<struct FInAppPurchaseProductRequest>& ConsumableProductFlags, struct APlayerController PlayerController) {
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy.CreateProxyObjectForInAppPurchaseRestore");

	struct CreateProxyObjectForInAppPurchaseRestore_Params {
		struct TArray<struct FInAppPurchaseProductRequest>& ConsumableProductFlags;
		struct APlayerController PlayerController;
		struct UInAppPurchaseRestoreCallbackProxy ReturnValue;

	}; CreateProxyObjectForInAppPurchaseRestore_Params Params;

	Params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	ConsumableProductFlags = Params.ConsumableProductFlags;


	return params.ReturnValue;
}

// Function OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy2.CreateProxyObjectForInAppPurchaseRestore
inline struct UInAppPurchaseRestoreCallbackProxy2 UInAppPurchaseRestoreCallbackProxy2::CreateProxyObjectForInAppPurchaseRestore(struct TArray<struct FInAppPurchaseProductRequest2>& ConsumableProductFlags, struct APlayerController PlayerController) {
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy2.CreateProxyObjectForInAppPurchaseRestore");

	struct CreateProxyObjectForInAppPurchaseRestore_Params {
		struct TArray<struct FInAppPurchaseProductRequest2>& ConsumableProductFlags;
		struct APlayerController PlayerController;
		struct UInAppPurchaseRestoreCallbackProxy2 ReturnValue;

	}; CreateProxyObjectForInAppPurchaseRestore_Params Params;

	Params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	ConsumableProductFlags = Params.ConsumableProductFlags;


	return params.ReturnValue;
}

// Function OnlineSubsystemUtils.JoinSessionCallbackProxy.JoinSession
inline struct UJoinSessionCallbackProxy UJoinSessionCallbackProxy::JoinSession(struct Object WorldContextObject, struct APlayerController PlayerController, struct FBlueprintSessionResult& SearchResult) {
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.JoinSessionCallbackProxy.JoinSession");

	struct JoinSession_Params {
		struct Object WorldContextObject;
		struct APlayerController PlayerController;
		struct FBlueprintSessionResult& SearchResult;
		struct UJoinSessionCallbackProxy ReturnValue;

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
inline struct ULeaderboardFlushCallbackProxy ULeaderboardFlushCallbackProxy::CreateProxyObjectForFlush(struct APlayerController PlayerController, struct FName SessionName) {
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.LeaderboardFlushCallbackProxy.CreateProxyObjectForFlush");

	struct CreateProxyObjectForFlush_Params {
		struct APlayerController PlayerController;
		struct FName SessionName;
		struct ULeaderboardFlushCallbackProxy ReturnValue;

	}; CreateProxyObjectForFlush_Params Params;

	Params.PlayerController = PlayerController;
	Params.SessionName = SessionName;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function OnlineSubsystemUtils.LeaderboardQueryCallbackProxy.CreateProxyObjectForIntQuery
inline struct ULeaderboardQueryCallbackProxy ULeaderboardQueryCallbackProxy::CreateProxyObjectForIntQuery(struct APlayerController PlayerController, struct FName StatName) {
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.LeaderboardQueryCallbackProxy.CreateProxyObjectForIntQuery");

	struct CreateProxyObjectForIntQuery_Params {
		struct APlayerController PlayerController;
		struct FName StatName;
		struct ULeaderboardQueryCallbackProxy ReturnValue;

	}; CreateProxyObjectForIntQuery_Params Params;

	Params.PlayerController = PlayerController;
	Params.StatName = StatName;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function OnlineSubsystemUtils.LogoutCallbackProxy.Logout
inline struct ULogoutCallbackProxy ULogoutCallbackProxy::Logout(struct Object WorldContextObject, struct APlayerController PlayerController) {
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.LogoutCallbackProxy.Logout");

	struct Logout_Params {
		struct Object WorldContextObject;
		struct APlayerController PlayerController;
		struct ULogoutCallbackProxy ReturnValue;

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
inline void APartyBeaconClient::ServerUpdateReservationRequest(struct FString SessionID, struct FPartyReservation ReservationUpdate) {
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.PartyBeaconClient.ServerUpdateReservationRequest");

	struct ServerUpdateReservationRequest_Params {
		struct FString SessionID;
		struct FPartyReservation ReservationUpdate;
	}; ServerUpdateReservationRequest_Params Params;

	Params.SessionID = SessionID;
	Params.ReservationUpdate = ReservationUpdate;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function OnlineSubsystemUtils.PartyBeaconClient.ServerReservationRequest
inline void APartyBeaconClient::ServerReservationRequest(struct FString SessionID, struct FPartyReservation Reservation) {
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.PartyBeaconClient.ServerReservationRequest");

	struct ServerReservationRequest_Params {
		struct FString SessionID;
		struct FPartyReservation Reservation;
	}; ServerReservationRequest_Params Params;

	Params.SessionID = SessionID;
	Params.Reservation = Reservation;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function OnlineSubsystemUtils.PartyBeaconClient.ServerRemoveMemberFromReservationRequest
inline void APartyBeaconClient::ServerRemoveMemberFromReservationRequest(struct FString SessionID, struct FPartyReservation ReservationUpdate) {
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.PartyBeaconClient.ServerRemoveMemberFromReservationRequest");

	struct ServerRemoveMemberFromReservationRequest_Params {
		struct FString SessionID;
		struct FPartyReservation ReservationUpdate;
	}; ServerRemoveMemberFromReservationRequest_Params Params;

	Params.SessionID = SessionID;
	Params.ReservationUpdate = ReservationUpdate;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function OnlineSubsystemUtils.PartyBeaconClient.ServerCancelReservationRequest
inline void APartyBeaconClient::ServerCancelReservationRequest(struct FUniqueNetIdRepl PartyLeader) {
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.PartyBeaconClient.ServerCancelReservationRequest");

	struct ServerCancelReservationRequest_Params {
		struct FUniqueNetIdRepl PartyLeader;
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
inline struct UQuitMatchCallbackProxy UQuitMatchCallbackProxy::QuitMatch(struct Object WorldContextObject, struct APlayerController PlayerController, struct FString MatchID, char Outcome, int32_t TurnTimeoutInSeconds) {
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.QuitMatchCallbackProxy.QuitMatch");

	struct QuitMatch_Params {
		struct Object WorldContextObject;
		struct APlayerController PlayerController;
		struct FString MatchID;
		char Outcome;
		int32_t TurnTimeoutInSeconds;
		struct UQuitMatchCallbackProxy ReturnValue;

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
inline struct UShowLoginUICallbackProxy UShowLoginUICallbackProxy::ShowExternalLoginUI(struct Object WorldContextObject, struct APlayerController InPlayerController) {
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.ShowLoginUICallbackProxy.ShowExternalLoginUI");

	struct ShowExternalLoginUI_Params {
		struct Object WorldContextObject;
		struct APlayerController InPlayerController;
		struct UShowLoginUICallbackProxy ReturnValue;

	}; ShowExternalLoginUI_Params Params;

	Params.WorldContextObject = WorldContextObject;
	Params.InPlayerController = InPlayerController;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function OnlineSubsystemUtils.SpectatorBeaconClient.ServerReservationRequest
inline void ASpectatorBeaconClient::ServerReservationRequest(struct FString SessionID, struct FSpectatorReservation Reservation) {
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.SpectatorBeaconClient.ServerReservationRequest");

	struct ServerReservationRequest_Params {
		struct FString SessionID;
		struct FSpectatorReservation Reservation;
	}; ServerReservationRequest_Params Params;

	Params.SessionID = SessionID;
	Params.Reservation = Reservation;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function OnlineSubsystemUtils.SpectatorBeaconClient.ServerCancelReservationRequest
inline void ASpectatorBeaconClient::ServerCancelReservationRequest(struct FUniqueNetIdRepl Spectator) {
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.SpectatorBeaconClient.ServerCancelReservationRequest");

	struct ServerCancelReservationRequest_Params {
		struct FUniqueNetIdRepl Spectator;
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

