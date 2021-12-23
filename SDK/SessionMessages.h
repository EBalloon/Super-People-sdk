// ScriptStruct SessionMessages.SessionServiceLog
struct FSessionServiceLog {
	struct FName Category; // 0x0 (8)
	struct FString Data; // 0x8 (16)
	struct Unknown InstanceId; // 0x18 (16)
	double TimeSeconds; // 0x28 (8)
	char Verbosity; // 0x30 (1)
};

// ScriptStruct SessionMessages.SessionServicePong
struct FSessionServicePong {
	char Authorized : 0; // 0x0 (1)
	struct FString BuildDate; // 0x8 (16)
	struct FString DeviceName; // 0x18 (16)
	struct Unknown InstanceId; // 0x28 (16)
	struct FString InstanceName; // 0x38 (16)
	struct FString PlatformName; // 0x48 (16)
	struct Unknown SessionID; // 0x58 (16)
	struct FString SessionName; // 0x68 (16)
	struct FString SessionOwner; // 0x78 (16)
	char Standalone : 0; // 0x88 (1)
};

// ScriptStruct SessionMessages.SessionServicePing
struct FSessionServicePing {
	struct FString UserName; // 0x0 (16)
};

