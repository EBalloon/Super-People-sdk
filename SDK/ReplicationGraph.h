// Class ReplicationGraph.ReplicationGraph
class UReplicationGraph : public UReplicationDriver {

public:

	struct Unknown* ReplicationConnectionManagerClass; // 0x28 (8)
	struct Unknown NetDriver; // 0x30 (8)
	struct TArray<Unknown> Connections; // 0x38 (16)
	struct TArray<Unknown> PendingConnections; // 0x48 (16)
	struct TArray<Unknown> GlobalGraphNodes; // 0x98 (16)
	struct TArray<Unknown> PrepareForReplicationNodes; // 0xA8 (16)
};

// Class ReplicationGraph.ReplicationGraphNode
class UReplicationGraphNode : public Object {

public:

	struct TArray<Unknown> AllChildNodes; // 0x28 (16)
};

// Class ReplicationGraph.BasicReplicationGraph
class UBasicReplicationGraph : public UReplicationGraph {

public:

	struct Unknown GridNode; // 0x578 (8)
	struct Unknown AlwaysRelevantNode; // 0x580 (8)
	struct TArray<Unknown> AlwaysRelevantForConnectionList; // 0x588 (16)
	struct TArray<Unknown> ActorsWithoutNetConnection; // 0x598 (16)
};

// Class ReplicationGraph.ReplicationGraphNode_GridCell
class UReplicationGraphNode_GridCell : public UReplicationGraphNode_ActorList {

public:

	struct Unknown StaticNode; // 0x140 (8)
	struct Unknown DynamicNode; // 0x1D0 (8)
	struct Unknown DormancyNode; // 0x1D8 (8)
};

// Class ReplicationGraph.ReplicationGraphNode_AlwaysRelevant
class UReplicationGraphNode_AlwaysRelevant : public UReplicationGraphNode {

public:

	struct Unknown ChildNode; // 0x50 (8)
};

// Class ReplicationGraph.ReplicationGraphNode_AlwaysRelevant_ForConnection
class UReplicationGraphNode_AlwaysRelevant_ForConnection : public UReplicationGraphNode_ActorList {

public:

	struct TArray<Unknown> PastRelevantActors; // 0x110 (16)
	struct Unknown LastViewer; // 0x120 (8)
	struct Unknown LastViewTarget; // 0x128 (8)
};

// Class ReplicationGraph.ReplicationGraphNode_TearOff_ForConnection
class UReplicationGraphNode_TearOff_ForConnection : public UReplicationGraphNode {

public:

	struct TArray<Unknown> TearOffActors; // 0x50 (16)
};

// Class ReplicationGraph.NetReplicationGraphConnection
class UNetReplicationGraphConnection : public UReplicationConnectionDriver {

public:

	struct Unknown NetConnection; // 0x28 (8)
	struct Unknown DebugActor; // 0x180 (8)
	struct TArray<Unknown> LastGatherLocations; // 0x1A0 (16)
	struct TArray<Unknown> ConnectionGraphNodes; // 0x1B8 (16)
	struct Unknown TearOffNode; // 0x1C8 (8)
};

// Class ReplicationGraph.ReplicationGraphDebugActor
class AReplicationGraphDebugActor : public UActor {

public:

	struct Unknown ReplicationGraph; // 0x300 (8)
	struct Unknown ConnectionManager; // 0x308 (8)

	void ServerStopDebugging(); // Function ReplicationGraph.ReplicationGraphDebugActor.ServerStopDebugging(Net|NetReliableNative|Event|Public|NetServer) // <Game_BE.exe+0x124CE40>
	void ServerStartDebugging(); // Function ReplicationGraph.ReplicationGraphDebugActor.ServerStartDebugging(Net|NetReliableNative|Event|Public|NetServer) // <Game_BE.exe+0x124CE20>
	void ServerSetPeriodFrameForClass(struct Unknown* Class, int32_t PeriodFrame); // Function ReplicationGraph.ReplicationGraphDebugActor.ServerSetPeriodFrameForClass(Net|NetReliableNative|Event|Public|NetServer) // <Game_BE.exe+0x124CD50>
	void ServerSetCullDistanceForClass(struct Unknown* Class, float CullDistance); // Function ReplicationGraph.ReplicationGraphDebugActor.ServerSetCullDistanceForClass(Net|NetReliableNative|Event|Public|NetServer) // <Game_BE.exe+0x124CC80>
	void ServerSetConditionalActorBreakpoint(struct Unknown Actor); // Function ReplicationGraph.ReplicationGraphDebugActor.ServerSetConditionalActorBreakpoint(Net|NetReliableNative|Event|Public|NetServer) // <Game_BE.exe+0x124CBF0>
	void ServerPrintCullDistances(); // Function ReplicationGraph.ReplicationGraphDebugActor.ServerPrintCullDistances(Net|NetReliableNative|Event|Public|NetServer) // <Game_BE.exe+0x124CBD0>
	void ServerPrintAllActorInfo(struct FString Str); // Function ReplicationGraph.ReplicationGraphDebugActor.ServerPrintAllActorInfo(Net|NetReliableNative|Event|Public|NetServer) // <Game_BE.exe+0x124CB20>
	void ServerCellInfo(); // Function ReplicationGraph.ReplicationGraphDebugActor.ServerCellInfo(Net|NetReliableNative|Event|Public|NetServer) // <Game_BE.exe+0x124CB00>
	void ClientCellInfo(struct Unknown CellLocation, struct Unknown CellExtent, struct TArray<Unknown> Actors); // Function ReplicationGraph.ReplicationGraphDebugActor.ClientCellInfo(Net|NetReliableNative|Event|Public|HasDefaults|NetClient) // <Game_BE.exe+0x124C9C0>
};

// ScriptStruct ReplicationGraph.ConnectionAlwaysRelevantNodePair
struct FConnectionAlwaysRelevantNodePair {
	struct Unknown NetConnection; // 0x0 (8)
	struct Unknown Node; // 0x8 (8)
};

// ScriptStruct ReplicationGraph.LastLocationGatherInfo
struct FLastLocationGatherInfo {
	struct Unknown Connection; // 0x0 (8)
	struct Unknown LastLocation; // 0x8 (12)
	struct Unknown LastOutOfRangeLocationCheck; // 0x14 (12)
};

// ScriptStruct ReplicationGraph.TearOffActorInfo
struct FTearOffActorInfo {
	struct Unknown Actor; // 0x8 (8)
};

// ScriptStruct ReplicationGraph.AlwaysRelevantActorInfo
struct FAlwaysRelevantActorInfo {
	struct Unknown Connection; // 0x0 (8)
	struct Unknown LastViewer; // 0x8 (8)
	struct Unknown LastViewTarget; // 0x10 (8)
};

// Function ReplicationGraph.ReplicationGraphDebugActor.ServerStopDebugging
inline void AReplicationGraphDebugActor::ServerStopDebugging() {
	static auto fn = UObject::FindObject<UFunction>("Function ReplicationGraph.ReplicationGraphDebugActor.ServerStopDebugging");

	struct ServerStopDebugging_Params {
		
	}; ServerStopDebugging_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ReplicationGraph.ReplicationGraphDebugActor.ServerStartDebugging
inline void AReplicationGraphDebugActor::ServerStartDebugging() {
	static auto fn = UObject::FindObject<UFunction>("Function ReplicationGraph.ReplicationGraphDebugActor.ServerStartDebugging");

	struct ServerStartDebugging_Params {
		
	}; ServerStartDebugging_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ReplicationGraph.ReplicationGraphDebugActor.ServerSetPeriodFrameForClass
inline void AReplicationGraphDebugActor::ServerSetPeriodFrameForClass(struct Unknown* Class, int32_t PeriodFrame) {
	static auto fn = UObject::FindObject<UFunction>("Function ReplicationGraph.ReplicationGraphDebugActor.ServerSetPeriodFrameForClass");

	struct ServerSetPeriodFrameForClass_Params {
		struct Unknown* Class;
		int32_t PeriodFrame;
	}; ServerSetPeriodFrameForClass_Params Params;

	Params.Class = Class;
	Params.PeriodFrame = PeriodFrame;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ReplicationGraph.ReplicationGraphDebugActor.ServerSetCullDistanceForClass
inline void AReplicationGraphDebugActor::ServerSetCullDistanceForClass(struct Unknown* Class, float CullDistance) {
	static auto fn = UObject::FindObject<UFunction>("Function ReplicationGraph.ReplicationGraphDebugActor.ServerSetCullDistanceForClass");

	struct ServerSetCullDistanceForClass_Params {
		struct Unknown* Class;
		float CullDistance;
	}; ServerSetCullDistanceForClass_Params Params;

	Params.Class = Class;
	Params.CullDistance = CullDistance;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ReplicationGraph.ReplicationGraphDebugActor.ServerSetConditionalActorBreakpoint
inline void AReplicationGraphDebugActor::ServerSetConditionalActorBreakpoint(struct Unknown Actor) {
	static auto fn = UObject::FindObject<UFunction>("Function ReplicationGraph.ReplicationGraphDebugActor.ServerSetConditionalActorBreakpoint");

	struct ServerSetConditionalActorBreakpoint_Params {
		struct Unknown Actor;
	}; ServerSetConditionalActorBreakpoint_Params Params;

	Params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ReplicationGraph.ReplicationGraphDebugActor.ServerPrintCullDistances
inline void AReplicationGraphDebugActor::ServerPrintCullDistances() {
	static auto fn = UObject::FindObject<UFunction>("Function ReplicationGraph.ReplicationGraphDebugActor.ServerPrintCullDistances");

	struct ServerPrintCullDistances_Params {
		
	}; ServerPrintCullDistances_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ReplicationGraph.ReplicationGraphDebugActor.ServerPrintAllActorInfo
inline void AReplicationGraphDebugActor::ServerPrintAllActorInfo(struct FString Str) {
	static auto fn = UObject::FindObject<UFunction>("Function ReplicationGraph.ReplicationGraphDebugActor.ServerPrintAllActorInfo");

	struct ServerPrintAllActorInfo_Params {
		struct FString Str;
	}; ServerPrintAllActorInfo_Params Params;

	Params.Str = Str;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ReplicationGraph.ReplicationGraphDebugActor.ServerCellInfo
inline void AReplicationGraphDebugActor::ServerCellInfo() {
	static auto fn = UObject::FindObject<UFunction>("Function ReplicationGraph.ReplicationGraphDebugActor.ServerCellInfo");

	struct ServerCellInfo_Params {
		
	}; ServerCellInfo_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ReplicationGraph.ReplicationGraphDebugActor.ClientCellInfo
inline void AReplicationGraphDebugActor::ClientCellInfo(struct Unknown CellLocation, struct Unknown CellExtent, struct TArray<Unknown> Actors) {
	static auto fn = UObject::FindObject<UFunction>("Function ReplicationGraph.ReplicationGraphDebugActor.ClientCellInfo");

	struct ClientCellInfo_Params {
		struct Unknown CellLocation;
		struct Unknown CellExtent;
		struct TArray<Unknown> Actors;
	}; ClientCellInfo_Params Params;

	Params.CellLocation = CellLocation;
	Params.CellExtent = CellExtent;
	Params.Actors = Actors;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

