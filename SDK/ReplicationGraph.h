// Class ReplicationGraph.ReplicationGraph
struct UReplicationGraph : UReplicationDriver {
	Unknown ReplicationConnectionManagerClass; //  0x28 Size(8)
	Unknown NetDriver; //  0x30 Size(8)
	Unknown Connections; //  0x38 Size(10)
	Unknown PendingConnections; //  0x48 Size(10)
	Unknown Glob; //  0x98 Size(10)
	Unknown PrepareForReplicationNodes; //  0xa8 Size(10)
};

// Class ReplicationGraph.ReplicationGraphNode
struct UReplicationGraphNode : Object {
	Unknown AllChildNodes; //  0x28 Size(10)
};

// Class ReplicationGraph.BasicReplicationGraph
struct UBasicReplicationGraph : UReplicationGraph {
	Unknown GridNode; //  0x578 Size(8)
	Unknown AlwaysRelevantNode; //  0x580 Size(8)
	Unknown AlwaysRelevantForConnectionList; //  0x588 Size(10)
	Unknown ActorsWithoutNetConnection; //  0x598 Size(10)
};

// Class ReplicationGraph.ReplicationGraphNode_GridCell
struct UReplicationGraphNode_GridCell : UReplicationGraphNode_ActorList {
	Unknown StaticNode; //  0x140 Size(8)
	Unknown DynamicNode; //  0x1d0 Size(8)
	Unknown DormancyNode; //  0x1d8 Size(8)
};

// Class ReplicationGraph.ReplicationGraphNode_AlwaysRelevant
struct UReplicationGraphNode_AlwaysRelevant : UReplicationGraphNode {
	Unknown ChildNode; //  0x50 Size(8)
};

// Class ReplicationGraph.ReplicationGraphNode_AlwaysRelevant_ForConnection
struct UReplicationGraphNode_AlwaysRelevant_ForConnection : UReplicationGraphNode_ActorList {
	Unknown PastRelevantActors; //  0x110 Size(10)
	Unknown LastViewer; //  0x120 Size(8)
	Unknown LastViewTarget; //  0x128 Size(8)
};

// Class ReplicationGraph.ReplicationGraphNode_TearOff_For
struct UReplicationGraphNode_TearOff_For : UReplicationGraphNode {
	Unknown TearOffActors; //  0x50 Size(10)
};

// Class ReplicationGraph.NetReplicationGraphConnection
struct UNetReplicationGraphConnection : UReplicationConnectionDriver {
	Unknown NetConnection; //  0x28 Size(8)
	Unknown DebugActor; //  0x180 Size(8)
	Unknown LastGatherLocations; //  0x1a0 Size(10)
	Unknown ConnectionGraphNodes; //  0x1b8 Size(10)
	Unknown TearOffNode; //  0x1c8 Size(8)
};

// Class ReplicationGraph.ReplicationGraphDebugActor
struct AReplicationGraphDebugActor : UActor {
	Unknown ReplicationGraph; //  0x310 Size(8)
	Unknown ConnectionManager; //  0x318 Size(8)

	void ServerStopDebugging(); // Function ReplicationGraph.ReplicationGraphDebugActor.ServerStopDebugging(Net|NetReliableNative|Event|Public|NetServer) // <Game+0x1236fb0>
};

