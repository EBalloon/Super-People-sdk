// Class TcpMessaging.TcpMessagingSettings
struct UTcpMessagingSettings : Object {
	char EnableTransport : 0; // 0x28 (1)
	struct FString ListenEndpoint; // 0x30 (16)
	struct TArray<Unknown> ConnectToEndpoints; // 0x40 (16)
	int32_t ConnectionRetryDelay; // 0x50 (4)
	char bStopServiceWhenAppDeactivates : 0; // 0x54 (1)
};

