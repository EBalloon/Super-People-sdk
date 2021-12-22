// Enum UdpMessaging.EUdpMessageFormat
enum class EUdpMessageFormat : uint8 {
	EUdpMessageFormat = 0,
	EUdpMessageFormat = 1,
	EUdpMessageFormat = 2,
	EUdpMessageFormat = 3,
	EUdpMessageFormat = 4,
	EUdpMessageFormat = 5
};

// Class UdpMessaging.UdpMessagingSettings
struct UUdpMessagingSettings : Object {
	char EnableTransport; //  0x28 Size(1)
	char bAutoRepair; //  0x29 Size(1)
	char bStopServiceWhenAppDeactivates; //  0x2a Size(1)
	struct FString UnicastEndpoint; //  0x30 Size(10)
	struct FString MulticastEndpoint; //  0x40 Size(10)
	enum class Unknow MessageFormat; //  0x50 Size(1)
	char MulticastTimeToLive; //  0x51 Size(1)
	struct TArray<Unknown> StaticEndpoints; //  0x58 Size(10)
	char EnableTunnel; //  0x68 Size(1)
	struct FString TunnelUnicastEndpoint; //  0x70 Size(10)
	struct FString TunnelMulticastEndpoint; //  0x80 Size(10)
	struct TArray<Unknown> RemoteTunnelEndpoints; //  0x90 Size(10)
};

