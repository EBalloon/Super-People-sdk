// Enum ReplicationOptimizer.EClassRepNodeMapping
enum class EClassRepNodeMapping : uint8 {
	EClassRepNodeMapping = 0
	EClassRepNodeMapping = 1
	EClassRepNodeMapping = 2
	EClassRepNodeMapping = 3
	EClassRepNodeMapping = 4
	EClassRepNodeMapping = 5
	EClassRepNodeMapping = 6
};

// Class ReplicationOptimizer.RealReplicationGraph
class URealReplicationGraph : UReplicationGraph {
	struct Unknown GridNode; // 0x5C8 (8)
	struct TArray<Unknown> SpatializedClasses; // 0x5D0 (16)
	struct TArray<Unknown> NonSpatializedChildClasses; // 0x5E0 (16)
	struct Unknown AlwaysRelevantNode; // 0x5F0 (8)
	struct TArray<Unknown> ExplicitlySetClasses; // 0x940 (16)
};

// Class ReplicationOptimizer.RealRepGraphNode_AlwaysRelevant_ForConnection
class URealRepGraphNode_AlwaysRelevant_ForConnection : UReplicationGraphNode {
	struct Unknown LastViewer; // 0x50 (8)
	struct Unknown LastViewTarget; // 0x58 (8)
};

// Class ReplicationOptimizer.ReplicationPingComponet
class UReplicationPingComponet : UActorComponent {
	int32_t PingCounter; // 0xB0 (4)
	char bEnabled : 0; // 0xB4 (1)
	struct Unknown PlayerState; // 0xB8 (8)

	void ServerRPVPing(); // Function ReplicationOptimizer.ReplicationPingComponet.ServerRPVPing(Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate) // <BravoHotelClient-Win64-Shipping.protected.exe+0x120D230>
	void ServerRPCPing(); // Function ReplicationOptimizer.ReplicationPingComponet.ServerRPCPing(Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate) // <BravoHotelClient-Win64-Shipping.protected.exe+0x120D1E0>
	void OnRep_Ping(); // Function ReplicationOptimizer.ReplicationPingComponet.OnRep_Ping(Final|Native|Private) // <BravoHotelClient-Win64-Shipping.protected.exe+0x120D1C0>
	void OnRep_Enabled(); // Function ReplicationOptimizer.ReplicationPingComponet.OnRep_Enabled(Final|Native|Private) // <BravoHotelClient-Win64-Shipping.protected.exe+0x120D1A0>
	void ClientPing(); // Function ReplicationOptimizer.ReplicationPingComponet.ClientPing(Final|Net|NetReliableNative|Event|Private|NetClient) // <BravoHotelClient-Win64-Shipping.protected.exe+0x120D180>
};

