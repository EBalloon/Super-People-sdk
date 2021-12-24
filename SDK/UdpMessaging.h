// Enum UdpMessaging.EUdpMessageFormat
enum class EUdpMessageFormat : uint8_t {
	EUdpMessageFormat = 0,
	EUdpMessageFormat = 1,
	EUdpMessageFormat = 2,
	EUdpMessageFormat = 3,
	EUdpMessageFormat = 4,
	EUdpMessageFormat = 5,
};

// Class UdpMessaging.UdpMessagingSettings
class UUdpMessagingSettings : public Object {

public:

	char EnableTransport : 0; // 0x28 (1)
	char bAutoRepair : 0; // 0x29 (1)
	char bStopServiceWhenAppDeactivates : 0; // 0x2A (1)
	struct FString UnicastEndpoint; // 0x30 (16)
	struct FString MulticastEndpoint; // 0x40 (16)
	enum class Unknow MessageFormat; // 0x50 (1)
	char MulticastTimeToLive; // 0x51 (1)
	struct TArray<Unknown> StaticEndpoints; // 0x58 (16)
	char EnableTunnel : 0; // 0x68 (1)
	struct FString TunnelUnicastEndpoint; // 0x70 (16)
	struct FString TunnelMulticastEndpoint; // 0x80 (16)
	struct TArray<Unknown> RemoteTunnelEndpoints; // 0x90 (16)
};

// ScriptStruct UdpMessaging.UdpMockMessage
struct FUdpMockMessage {
	struct TArray<Unknown> Data; // 0x0 (16)
};

