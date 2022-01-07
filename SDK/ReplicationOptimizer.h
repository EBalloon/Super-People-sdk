// Enum ReplicationOptimizer.EClassRepNodeMapping
enum class EClassRepNodeMapping : uint8_t {
	NotRouted = 0,
	RelevantAllConnections = 1,
	Spatialize_Static_Conditional = 2,
	Spatialize_Static_Always = 3,
	Spatialize_Dynamic = 4,
	Spatialize_Dormancy = 5,
	EClassRepNodeMapping_MAX = 6,
};

// Class ReplicationOptimizer.RealReplicationGraph
class URealReplicationGraph : public UReplicationGraph {

public:

	struct Unknown GridNode; // 0x5C8 (8)
	struct TArray<Unknown> SpatializedClasses; // 0x5D0 (16)
	struct TArray<Unknown> NonSpatializedChildClasses; // 0x5E0 (16)
	struct Unknown AlwaysRelevantNode; // 0x5F0 (8)
	struct TArray<Unknown> ExplicitlySetClasses; // 0x940 (16)
};

// Class ReplicationOptimizer.RealRepGraphNode_AlwaysRelevant_ForConnection
class URealRepGraphNode_AlwaysRelevant_ForConnection : public UReplicationGraphNode {

public:

	struct Unknown LastViewer; // 0x50 (8)
	struct Unknown LastViewTarget; // 0x58 (8)
};

// Class ReplicationOptimizer.ReplicationPingComponet
class UReplicationPingComponet : public UActorComponent {

public:

	int32_t PingCounter; // 0xB0 (4)
	char bEnabled : 0; // 0xB4 (1)
	struct Unknown PlayerState; // 0xB8 (8)

	void ServerRPVPing(); // Function ReplicationOptimizer.ReplicationPingComponet.ServerRPVPing(Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1222B70>
	void ServerRPCPing(); // Function ReplicationOptimizer.ReplicationPingComponet.ServerRPCPing(Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1222B20>
	void OnRep_Ping(); // Function ReplicationOptimizer.ReplicationPingComponet.OnRep_Ping(Final|Native|Private) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1222B00>
	void OnRep_Enabled(); // Function ReplicationOptimizer.ReplicationPingComponet.OnRep_Enabled(Final|Native|Private) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1222AE0>
	void ClientPing(); // Function ReplicationOptimizer.ReplicationPingComponet.ClientPing(Final|Net|NetReliableNative|Event|Private|NetClient) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1222AC0>
};

// Function ReplicationOptimizer.ReplicationPingComponet.ServerRPVPing
inline void UReplicationPingComponet::ServerRPVPing() {
	static auto fn = UObject::FindObject<UFunction>("Function ReplicationOptimizer.ReplicationPingComponet.ServerRPVPing");

	struct ServerRPVPing_Params {
		
	}; ServerRPVPing_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ReplicationOptimizer.ReplicationPingComponet.ServerRPCPing
inline void UReplicationPingComponet::ServerRPCPing() {
	static auto fn = UObject::FindObject<UFunction>("Function ReplicationOptimizer.ReplicationPingComponet.ServerRPCPing");

	struct ServerRPCPing_Params {
		
	}; ServerRPCPing_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ReplicationOptimizer.ReplicationPingComponet.OnRep_Ping
inline void UReplicationPingComponet::OnRep_Ping() {
	static auto fn = UObject::FindObject<UFunction>("Function ReplicationOptimizer.ReplicationPingComponet.OnRep_Ping");

	struct OnRep_Ping_Params {
		
	}; OnRep_Ping_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ReplicationOptimizer.ReplicationPingComponet.OnRep_Enabled
inline void UReplicationPingComponet::OnRep_Enabled() {
	static auto fn = UObject::FindObject<UFunction>("Function ReplicationOptimizer.ReplicationPingComponet.OnRep_Enabled");

	struct OnRep_Enabled_Params {
		
	}; OnRep_Enabled_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ReplicationOptimizer.ReplicationPingComponet.ClientPing
inline void UReplicationPingComponet::ClientPing() {
	static auto fn = UObject::FindObject<UFunction>("Function ReplicationOptimizer.ReplicationPingComponet.ClientPing");

	struct ClientPing_Params {
		
	}; ClientPing_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

