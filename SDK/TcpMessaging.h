// Class TcpMessaging.TcpMessagingSettings
struct UTcpMessagingSettings : Object {
	char EnableTransport; //  0x28 Size(1)
	struct FString ListenEndpoint; //  0x30 Size(10)
	struct TArray<Unknown> ConnectToEndpoints; //  0x40 Size(10)
	int32_t ConnectionRetryDelay; //  0x50 Size(4)
	char bStopServiceWhenAppDeactivates; //  0x54 Size(1)
};

