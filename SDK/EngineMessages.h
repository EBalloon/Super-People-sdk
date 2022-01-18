// ScriptStruct EngineMessages.EngineServiceNotification
struct FEngineServiceNotification {
	struct FString Text; // 0x0 (16)
	double TimeSeconds; // 0x10 (8)
};

// ScriptStruct EngineMessages.EngineServiceTerminate
struct FEngineServiceTerminate {
	struct FString UserName; // 0x0 (16)
};

// ScriptStruct EngineMessages.EngineServiceExecuteCommand
struct FEngineServiceExecuteCommand {
	struct FString Command; // 0x0 (16)
	struct FString UserName; // 0x10 (16)
};

// ScriptStruct EngineMessages.EngineServiceAuthGrant
struct FEngineServiceAuthGrant {
	struct FString UserName; // 0x0 (16)
	struct FString UserToGrant; // 0x10 (16)
};

// ScriptStruct EngineMessages.EngineServiceAuthDeny
struct FEngineServiceAuthDeny {
	struct FString UserName; // 0x0 (16)
	struct FString UserToDeny; // 0x10 (16)
};

// ScriptStruct EngineMessages.EngineServicePong
struct FEngineServicePong {
	struct FString CurrentLevel; // 0x0 (16)
	int32_t EngineVersion; // 0x10 (4)
	char HasBegunPlay : 0; // 0x14 (1)
	struct FGuid InstanceId; // 0x18 (16)
	struct FString InstanceType; // 0x28 (16)
	struct FGuid SessionID; // 0x38 (16)
	float WorldTimeSeconds; // 0x48 (4)
};

