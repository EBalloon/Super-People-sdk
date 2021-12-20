// Enum LowEntrySocketConnection.ELowEntryLatentFunctionCallAction
enum class ELowEntryLatentFunctionCallAction : uint8 {
	ELowEntryLatentFunctionCallAction = 0,
	ELowEntryLatentFunctionCallAction = 1,
	ELowEntryLatentFunctionCallAction = 2
};

// Class LowEntrySocketConnection.LowEntryRawSocketConnection
struct ULowEntryRawSocketConnection : Object {
	Unknown ListenerCode; //  0x38 Size(8)
	struct FString Host; //  0x40 Size(10)
	int32_t Port; //  0x50 Size(4)
	int32_t PortUdp; //  0x54 Size(4)
	Unknown SendingBytes; //  0x58 Size(10)
	Unknown ReceivedBytes; //  0x68 Size(10)
	Unknown ReceivingBuffer; //  0x78 Size(10)
	char CanCallOnDisconnect; //  0x98 Size(1)
	struct FDelegate OnConnectEvent; //  0x9c Size(10)
	struct FDelegate OnDisconnectEvent; //  0xac Size(10)
	struct FDelegate OnReceiveMessageEvent; //  0xbc Size(10)
	struct FDelegate OnReceiveUnreliableMessageEvent; //  0xcc Size(10)

	void SendUnreliableMessage(Unknown& Bytes); // Function LowEntrySocketConnection.LowEntryRawSocketConnection.SendUnreliableMessage(Final|Native|Public|HasOutParms|BlueprintCallable) // <Game+0x1086090>
};

// Class LowEntrySocketConnection.LowEntryRawSocketConnectionListenerCode
struct ULowEntryRawSocketConnectionListenerCode : Object {
	char Stopped; //  0x28 Size(1)
	char RunExec; //  0x29 Size(1)
	char ConnectionSuccess; //  0x2a Size(1)
	char JustConnected; //  0x38 Size(1)
	float WaitingForConnectionTime; //  0x3c Size(4)
	Unknown SocketConnection; //  0x40 Size(8)
	int32_t LatentUUID; //  0x48 Size(4)
};

// Class LowEntrySocketConnection.LowEntrySocketConnection
struct ULowEntrySocketConnection : Object {
	Unknown ListenerCode; //  0x38 Size(8)
	struct FString Host; //  0x40 Size(10)
	int32_t Port; //  0x50 Size(4)
	int32_t PortUdp; //  0x54 Size(4)
	int32_t NextConnectionValidationFunction; //  0x58 Size(4)
	int32_t NextFunctionCallId; //  0x5c Size(4)
	int32_t NextLatentFunctionCallId; //  0xb0 Size(4)
	Unknown SendingBytes; //  0x108 Size(10)
	Unknown ReceivedBytes; //  0x118 Size(10)
	Unknown ReceivingBuffer; //  0x128 Size(10)
	Unknown ReceivingType; //  0x139 Size(1)
	int32_t ReceivingFunctionCallId; //  0x13c Size(4)
	int32_t ReceivingPacketSize; //  0x140 Size(4)
	Unknown ReceivingPacket; //  0x148 Size(10)
	char WaitingForConnectionValidationResponse; //  0x168 Size(1)
	float ConnectionValidationResponseTime; //  0x16c Size(4)
	float ConnectionValidationDelayTime; //  0x170 Size(4)
	float LatentFunctionConnectionValidationDelayTime; //  0x174 Size(4)
	int32_t ConnectionValidationFunctio; //  0x178 Size(4)
	char PeriodicConnectionValidatioidation; //  0x17c Size(1)
	char CanCallOnDisconnect; //  0x17d Size(1)
	struct FDelegate OnConnectEvent; //  0x180 Size(10)
	struct FDelegate OnDisconnectEvent; //  0x190 Size(10)
	struct FDelegate OnReceiveMessageEvent; //  0x1a0 Size(10)
	struct FDelegate OnReceiveUnreliableMessageEvent; //  0x1b0 Size(10)

	void SetPeriodicConnectionValidationEnabled(char Enab); // Function LowEntrySocketConnection.LowEntrySocketConnection.SetPeriodicConnectionValidationEnabled(Final|Native|Public|BlueprintCallable) // <Game+0x10861f0>
};

// Class LowEntrySocketConnection.LowEntrySocketConnectionListener
struct ULowEntrySocketConnectionListener : Object {
	char Stopped; //  0x28 Size(1)
	char RunExec; //  0x29 Size(1)
	char ConnectionSuccess; //  0x2a Size(1)
	char JustConnected; //  0x38 Size(1)
	float WaitingForConnectionTime; //  0x3c Size(4)
	Unknown SocketConnection; //  0x40 Size(8)
	int32_t LatentUUID; //  0x48 Size(4)
};

