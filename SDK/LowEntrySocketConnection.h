// Enum LowEntrySocketConnection.ELowEntryLatentFunctionCallAction
enum class ELowEntryLatentFunctionCallAction : uint8_t {
	ELowEntryLatentFunctionCallAction = 0,
	ELowEntryLatentFunctionCallAction = 1,
	ELowEntryLatentFunctionCallAction = 2,
};

// Class LowEntrySocketConnection.LowEntryRawSocketConnection
class ULowEntryRawSocketConnection : public Object {

public:

	struct Unknown ListenerCode; // 0x38 (8)
	struct FString Host; // 0x40 (16)
	int32_t Port; // 0x50 (4)
	int32_t PortUdp; // 0x54 (4)
	struct TArray<Unknown> SendingBytes; // 0x58 (16)
	struct TArray<Unknown> ReceivedBytes; // 0x68 (16)
	struct TArray<Unknown> ReceivingBuffer; // 0x78 (16)
	char CanCallOnDisconnect : 0; // 0x98 (1)
	struct FDelegate OnConnectEvent; // 0x9C (16)
	struct FDelegate OnDisconnectEvent; // 0xAC (16)
	struct FDelegate OnReceiveMessageEvent; // 0xBC (16)
	struct FDelegate OnReceiveUnreliableMessageEvent; // 0xCC (16)

	void SendUnreliableMessage(struct TArray<Unknown>& Bytes); // Function LowEntrySocketConnection.LowEntryRawSocketConnection.SendUnreliableMessage(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1087890>
	void SendMessage(struct TArray<Unknown>& Bytes); // Function LowEntrySocketConnection.LowEntryRawSocketConnection.SendMessage(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1087730>
	char IsConnected(); // Function LowEntrySocketConnection.LowEntryRawSocketConnection.IsConnected(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1086230>
	int32_t GetPortUdp(); // Function LowEntrySocketConnection.LowEntryRawSocketConnection.GetPortUdp(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1086200>
	int32_t GetPort(); // Function LowEntrySocketConnection.LowEntryRawSocketConnection.GetPort(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x10861D0>
	int32_t GetLocalPortUdp(); // Function LowEntrySocketConnection.LowEntryRawSocketConnection.GetLocalPortUdp(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x10861A0>
	int32_t GetLocalPort(); // Function LowEntrySocketConnection.LowEntryRawSocketConnection.GetLocalPort(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1086170>
	struct FString GetHost(); // Function LowEntrySocketConnection.LowEntryRawSocketConnection.GetHost(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x10860F0>
	void Disconnect(); // Function LowEntrySocketConnection.LowEntryRawSocketConnection.Disconnect(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x10860B0>
	void Connect(struct Unknown WorldContextObject, struct Unknown LatentInfo, char& SUCCESS); // Function LowEntrySocketConnection.LowEntryRawSocketConnection.Connect(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x10854B0>
};

// Class LowEntrySocketConnection.LowEntryRawSocketConnectionListenerCode
class ULowEntryRawSocketConnectionListenerCode : public Object {

public:

	char Stopped : 0; // 0x28 (1)
	char RunExec : 0; // 0x29 (1)
	char ConnectionSuccess : 0; // 0x2A (1)
	char JustConnected : 0; // 0x38 (1)
	float WaitingForConnectionTime; // 0x3C (4)
	struct Unknown SocketConnection; // 0x40 (8)
	int32_t LatentUUID; // 0x48 (4)
};

// Class LowEntrySocketConnection.LowEntrySocketConnection
class ULowEntrySocketConnection : public Object {

public:

	struct Unknown ListenerCode; // 0x38 (8)
	struct FString Host; // 0x40 (16)
	int32_t Port; // 0x50 (4)
	int32_t PortUdp; // 0x54 (4)
	int32_t NextConnectionValidationFunctionCallId; // 0x58 (4)
	int32_t NextFunctionCallId; // 0x5C (4)
	int32_t NextLatentFunctionCallId; // 0xB0 (4)
	struct TArray<Unknown> SendingBytes; // 0x108 (16)
	struct TArray<Unknown> ReceivedBytes; // 0x118 (16)
	struct TArray<Unknown> ReceivingBuffer; // 0x128 (16)
	char ReceivingType; // 0x139 (1)
	int32_t ReceivingFunctionCallId; // 0x13C (4)
	int32_t ReceivingPacketSize; // 0x140 (4)
	struct TArray<Unknown> ReceivingPacket; // 0x148 (16)
	char WaitingForConnectionValidationResponse : 0; // 0x168 (1)
	float ConnectionValidationResponseTim; // 0x16C (4)
	float ConnectionValidationDelayTime; // 0x170 (4)
	float LatentFunctionConnectionValidationDelayTime; // 0x174 (4)
	int32_t ConnectionValidationFunctionCallId; // 0x178 (4)
	char PeriodicConnectionValidationEnabled : 0; // 0x17C (1)
	char CanCallOnDisconnect : 0; // 0x17D (1)
	struct FDelegate OnConnectEvent; // 0x180 (16)
	struct FDelegate OnDisconnectEvent; // 0x190 (16)
	struct FDelegate OnReceiveMessageEvent; // 0x1A0 (16)
	struct FDelegate OnReceiveUnreliableMessageEvent; // 0x1B0 (16)

	void SetPeriodicConnectionValidationEnabled(char Enabled); // Function LowEntrySocketConnection.LowEntrySocketConnection.SetPeriodicConnectionValidationEnabled(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x10879F0>
	void SendUnreliableMessage(struct TArray<Unknown>& Bytes); // Function LowEntrySocketConnection.LowEntrySocketConnection.SendUnreliableMessage(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1087940>
	void SendMessage(struct TArray<Unknown>& Bytes); // Function LowEntrySocketConnection.LowEntrySocketConnection.SendMessage(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x10877E0>
	void SendLatentFunctionCall(struct Unknown WorldContextObject, struct Unknown LatentInfo, enum class Unknow Branch, struct TArray<Unknown>& Bytes, char& Failed, char& Canceled, struct TArray<Unknown>& ResponseBytes, float Timeout); // Function LowEntrySocketConnection.LowEntrySocketConnection.SendLatentFunctionCall(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1087450>
	void SendFunctionCall(struct Unknown WorldContextObject, struct Unknown LatentInfo, struct TArray<Unknown>& Bytes, char& SUCCESS, struct TArray<Unknown>& ResponseBytes, float Timeout); // Function LowEntrySocketConnection.LowEntrySocketConnection.SendFunctionCall(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1087200>
	void SendConnectionValidation(float Timeout); // Function LowEntrySocketConnection.LowEntrySocketConnection.SendConnectionValidation(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1087180>
	void IsPeriodicConnectionValidationEnabled(char& Enabled); // Function LowEntrySocketConnection.LowEntrySocketConnection.IsPeriodicConnectionValidationEnabled(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1086290>
	char IsConnected(); // Function LowEntrySocketConnection.LowEntrySocketConnection.IsConnected(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1086260>
	int32_t GetPortUdp(); // Function LowEntrySocketConnection.LowEntrySocketConnection.GetPortUdp(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1086200>
	int32_t GetPort(); // Function LowEntrySocketConnection.LowEntrySocketConnection.GetPort(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x10861D0>
	int32_t GetLocalPortUdp(); // Function LowEntrySocketConnection.LowEntrySocketConnection.GetLocalPortUdp(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x10861A0>
	int32_t GetLocalPort(); // Function LowEntrySocketConnection.LowEntrySocketConnection.GetLocalPort(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1086170>
	struct FString GetHost(); // Function LowEntrySocketConnection.LowEntrySocketConnection.GetHost(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x10860F0>
	void Disconnect(); // Function LowEntrySocketConnection.LowEntrySocketConnection.Disconnect(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x10860D0>
	void Connect(struct Unknown WorldContextObject, struct Unknown LatentInfo, char& SUCCESS); // Function LowEntrySocketConnection.LowEntrySocketConnection.Connect(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x10855F0>
};

// Class LowEntrySocketConnection.LowEntrySocketConnectionListenerCode
class ULowEntrySocketConnectionListenerCode : public Object {

public:

	char Stopped : 0; // 0x28 (1)
	char RunExec : 0; // 0x29 (1)
	char ConnectionSuccess : 0; // 0x2A (1)
	char JustConnected : 0; // 0x38 (1)
	float WaitingForConnectionTime; // 0x3C (4)
	struct Unknown SocketConnection; // 0x40 (8)
	int32_t LatentUUID; // 0x48 (4)
};

