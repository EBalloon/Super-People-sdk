// Class ReplicationGraph.ReplicationGraph
struct UReplicationGraph : UReplicationDriver {
	struct Unknown* ReplicationConnectionManagerClass; //  0x28 Size(8)
	struct Unknown NetDriver; //  0x30 Size(8)
	struct TArray<Unknown> Connections; //  0x38 Size(10)
	struct TArray<Unknown> PendingConnections; //  0x48 Size(10)
	struct TArray<Unknown> GlobalGraphNodes; //  0x98 Size(10)
	struct TArray<Unknown> PrepareForReplicationNodes; //  0xa8 Size(10)
};

// Class ReplicationGraph.ReplicationGraphNode
struct UReplicationGraphNode : Object {
	struct TArray<Unknown> AllChildNodes; //  0x28 Size(10)
};

// Class ReplicationGraph.BasicReplicationGraph
struct UBasicReplicationGraph : UReplicationGraph {
	struct Unknown GridNode; //  0x578 Size(8)
	struct Unknown AlwaysRelevantNode; //  0x580 Size(8)
	struct TArray<Unknown> AlwaysRelevantForConnectionList; //  0x588 Size(10)
	struct TArray<Unknown> ActorsWithoutNetConnection; //  0x598 Size(10)
};

// Class ReplicationGraph.ReplicationGraphNode_GridCell
struct UReplicationGraphNode_GridCell : UReplicationGraphNode_ActorList {
	struct Unknown StaticNode; //  0x140 Size(8)
	struct Unknown DynamicNode; //  0x1d0 Size(8)
	struct Unknown DormancyNode; //  0x1d8 Size(8)
};

// Class ReplicationGraph.ReplicationGraphNode_Always
struct UReplicationGraphNode_Alwaysisti : UReplicationGraphNode {
	struct Unknown ChildNode; //  0x50 Size(8)
};

// Class ReplicationGraph.ReplicationGraphNode_Alwaysisti
struct UReplicationGraphNode_Always : UReplicationGraphNode_ActorList {
	struct TArray<Unknown> PastRelevantActors; //  0x110 Size(10)
	struct Unknown LastViewer; //  0x120 Size(8)
	struct Unknown LastViewTarget; //  0x128 Size(8)
};

// Class ReplicationGraph.ReplicationGraphNode_TearOff_ForConnection
struct UReplicationGraphNode_TearOff_ForConnection : UReplicationGraphNode {
	struct TArray<Unknown> TearOffActors; //  0x50 Size(10)
};

// Class ReplicationGraph.NetReplicationGraphConnection
struct UNetReplicationGraphConnection : UReplicationConnectionDriver {
	struct Unknown NetConnection; //  0x28 Size(8)
	struct Unknown DebugActor; //  0x180 Size(8)
	struct TArray<Unknown> LastGatherLocations; //  0x1a0 Size(10)
	struct TArray<Unknown> ConnectionGraphNodes; //  0x1b8 Size(10)
	struct Unknown TearOffNode; //  0x1c8 Size(8)
};

// Class ReplicationGraph.ReplicationGraphDebugActor
struct AReplicationGraphDebugActor : UActor {
	struct Unknown ReplicationGraph; //  0x310 Size(8)
	struct Unknown ConnectionManager; //  0x318 Size(8)

	void ServerStopDebugging(); // Function ReplicationGraph.ReplicationGraphDebugActor.ServerStopDebugging(Net|NetReliableNative|Event|Public|NetServer) // <Game+0x1237520>
};

