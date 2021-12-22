// Enum ReplicationOptimizer.EClassRepNodeMapping
enum class EClassRepNodeMapping : uint8 {
	EClassRepNodeMapping = 0,
	EClassRepNodeMapping = 1,
	EClassRepNodeMapping = 2,
	EClassRepNodeMapping = 3,
	EClassRepNodeMapping = 4,
	EClassRepNodeMapping = 5,
	EClassRepNodeMapping = 6
};

// Class ReplicationOptimizer.RealReplicationGraph
struct URealReplicationGraph : UReplicationGraph {
	struct Unknown GridNode; //  0x5c8 Size(8)
	struct TArray<Unknown> SpatializedClasses; //  0x5d0 Size(10)
	struct TArray<Unknown> NonSpatializedChildClasses; //  0x5e0 Size(10)
	struct Unknown AlwaysRelevantNode; //  0x5f0 Size(8)
	struct TArray<Unknown> ExplicitlySetClasses; //  0x940 Size(10)
};

// Class ReplicationOptimizer.RealRepGraphNode_AlwaysRelevant_ForConnection
struct URealRepGraphNode_AlwaysRelevant_ForConnection : UReplicationGraphNode {
	struct Unknown LastViewer; //  0x50 Size(8)
	struct Unknown LastViewTarget; //  0x58 Size(8)
};

// Class ReplicationOptimizer.ReplicationPingComponet
struct UReplicationPingComponet : UActorComponent {
	int32_t PingCounter; //  0xb0 Size(4)
	char bEnabled; //  0xb4 Size(1)
	struct Unknown PlayerState; //  0xb8 Size(8)

	void ServerRPVPing(); // Function ReplicationOptimizer.ReplicationPingComponet.ServerRPVPing(Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate) // <Game+0x120d230>
};

