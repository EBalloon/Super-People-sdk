// Class ReplicationGraph.ReplicationGraph
class UReplicationGraph : public UReplicationDriver {

public:

	struct UClass* ReplicationConnectionManagerClass; // 0x28 (8)
	struct UNetDriver NetDriver; // 0x30 (8)
	struct TArray<struct UNetReplicationGraphConnection> Connections; // 0x38 (16)
	struct TArray<struct UNetReplicationGraphConnection> PendingConnections; // 0x48 (16)
	struct TArray<struct UReplicationGraphNode> GlobalGraphNodes; // 0x98 (16)
	struct TArray<struct UReplicationGraphNode> PrepareForReplicationNodes; // 0xA8 (16)
};

// Class ReplicationGraph.ReplicationGraphNode
class UReplicationGraphNode : public Object {

public:

	struct TArray<struct UReplicationGraphNode> AllChildNodes; // 0x28 (16)
};

// Class ReplicationGraph.BasicReplicationGraph
class UBasicReplicationGraph : public UReplicationGraph {

public:

	struct UReplicationGraphNode_GridSpatialization2D GridNode; // 0x578 (8)
	struct UReplicationGraphNode_ActorList AlwaysRelevantNode; // 0x580 (8)
	struct TArray<struct FConnectionAlwaysRelevantNodePair> AlwaysRelevantForConnectionList; // 0x588 (16)
	struct TArray<struct UActor> ActorsWithoutNetConnection; // 0x598 (16)
};

// Class ReplicationGraph.ReplicationGraphNode_GridCell
class UReplicationGraphNode_GridCell : public UReplicationGraphNode_ActorList {

public:

	struct UReplicationGraphNode StaticNode; // 0x140 (8)
	struct UReplicationGraphNode DynamicNode; // 0x1D0 (8)
	struct UReplicationGraphNode_DormancyNode DormancyNode; // 0x1D8 (8)
};

// Class ReplicationGraph.ReplicationGraphNode_AlwaysRelevant
class UReplicationGraphNode_AlwaysRelevant : public UReplicationGraphNode {

public:

	struct UReplicationGraphNode ChildNode; // 0x50 (8)
};

// Class ReplicationGraph.ReplicationGraphNode_AlwaysRelevant_ForConnection
class UReplicationGraphNode_AlwaysRelevant_ForConnection : public UReplicationGraphNode_ActorList {

public:

	struct TArray<struct FAlwaysRelevantActorInfo> PastRelevantActors; // 0x110 (16)
	struct UActor LastViewer; // 0x120 (8)
	struct UActor LastViewTarget; // 0x128 (8)
};

// Class ReplicationGraph.ReplicationGraphNode_TearOff_ForConnection
class UReplicationGraphNode_TearOff_ForConnection : public UReplicationGraphNode {

public:

	struct TArray<struct FTearOffActorInfo> TearOffActors; // 0x50 (16)
};

// Class ReplicationGraph.NetReplicationGraphConnection
class UNetReplicationGraphConnection : public UReplicationConnectionDriver {

public:

	struct UNetConnection NetConnection; // 0x28 (8)
	struct AReplicationGraphDebugActor DebugActor; // 0x180 (8)
	struct TArray<struct FLastLocationGatherInfo> LastGatherLocations; // 0x1A0 (16)
	struct TArray<struct UReplicationGraphNode> ConnectionGraphNodes; // 0x1B8 (16)
	struct UReplicationGraphNode_TearOff_ForConnection TearOffNode; // 0x1C8 (8)
};

// Class ReplicationGraph.ReplicationGraphDebugActor
class AReplicationGraphDebugActor : public UActor {

public:

	struct UReplicationGraph ReplicationGraph; // 0x328 (8)
	struct UNetReplicationGraphConnection ConnectionManager; // 0x330 (8)

	void ServerStopDebugging(); // Function ReplicationGraph.ReplicationGraphDebugActor.ServerStopDebugging(Net|NetReliableNative|Event|Public|NetServer) // <BravoHotelClient-Win64-Shipping.protected.exe+0x125CAF0>
	void ServerStartDebugging(); // Function ReplicationGraph.ReplicationGraphDebugActor.ServerStartDebugging(Net|NetReliableNative|Event|Public|NetServer) // <BravoHotelClient-Win64-Shipping.protected.exe+0x125CAD0>
	void ServerSetPeriodFrameForClass(struct UClass* Class, int32_t PeriodFrame); // Function ReplicationGraph.ReplicationGraphDebugActor.ServerSetPeriodFrameForClass(Net|NetReliableNative|Event|Public|NetServer) // <BravoHotelClient-Win64-Shipping.protected.exe+0x125CA00>
	void ServerSetCullDistanceForClass(struct UClass* Class, float CullDistance); // Function ReplicationGraph.ReplicationGraphDebugActor.ServerSetCullDistanceForClass(Net|NetReliableNative|Event|Public|NetServer) // <BravoHotelClient-Win64-Shipping.protected.exe+0x125C930>
	void ServerSetConditionalActorBreakpoint(struct UActor Actor); // Function ReplicationGraph.ReplicationGraphDebugActor.ServerSetConditionalActorBreakpoint(Net|NetReliableNative|Event|Public|NetServer) // <BravoHotelClient-Win64-Shipping.protected.exe+0x125C8A0>
	void ServerPrintCullDistances(); // Function ReplicationGraph.ReplicationGraphDebugActor.ServerPrintCullDistances(Net|NetReliableNative|Event|Public|NetServer) // <BravoHotelClient-Win64-Shipping.protected.exe+0x125C880>
	void ServerPrintAllActorInfo(struct FString Str); // Function ReplicationGraph.ReplicationGraphDebugActor.ServerPrintAllActorInfo(Net|NetReliableNative|Event|Public|NetServer) // <BravoHotelClient-Win64-Shipping.protected.exe+0x125C7D0>
	void ServerCellInfo(); // Function ReplicationGraph.ReplicationGraphDebugActor.ServerCellInfo(Net|NetReliableNative|Event|Public|NetServer) // <BravoHotelClient-Win64-Shipping.protected.exe+0x125C7B0>
	void ClientCellInfo(struct FVector CellLocation, struct FVector CellExtent, struct TArray<struct UActor> Actors); // Function ReplicationGraph.ReplicationGraphDebugActor.ClientCellInfo(Net|NetReliableNative|Event|Public|HasDefaults|NetClient) // <BravoHotelClient-Win64-Shipping.protected.exe+0x125C670>
};

// ScriptStruct ReplicationGraph.ConnectionAlwaysRelevantNodePair
struct FConnectionAlwaysRelevantNodePair {
	struct UNetConnection NetConnection; // 0x0 (8)
	struct UReplicationGraphNode_AlwaysRelevant_ForConnection Node; // 0x8 (8)
};

// ScriptStruct ReplicationGraph.LastLocationGatherInfo
struct FLastLocationGatherInfo {
	struct UNetConnection Connection; // 0x0 (8)
	struct FVector LastLocation; // 0x8 (12)
	struct FVector LastOutOfRangeLocationCheck; // 0x14 (12)
};

// ScriptStruct ReplicationGraph.TearOffActorInfo
struct FTearOffActorInfo {
	struct UActor Actor; // 0x8 (8)
};

// ScriptStruct ReplicationGraph.AlwaysRelevantActorInfo
struct FAlwaysRelevantActorInfo {
	struct UNetConnection Connection; // 0x0 (8)
	struct UActor LastViewer; // 0x8 (8)
	struct UActor LastViewTarget; // 0x10 (8)
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
inline void AReplicationGraphDebugActor::ServerSetPeriodFrameForClass(struct UClass* Class, int32_t PeriodFrame) {
	static auto fn = UObject::FindObject<UFunction>("Function ReplicationGraph.ReplicationGraphDebugActor.ServerSetPeriodFrameForClass");

	struct ServerSetPeriodFrameForClass_Params {
		struct UClass* Class;
		int32_t PeriodFrame;
	}; ServerSetPeriodFrameForClass_Params Params;

	Params.Class = Class;
	Params.PeriodFrame = PeriodFrame;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ReplicationGraph.ReplicationGraphDebugActor.ServerSetCullDistanceForClass
inline void AReplicationGraphDebugActor::ServerSetCullDistanceForClass(struct UClass* Class, float CullDistance) {
	static auto fn = UObject::FindObject<UFunction>("Function ReplicationGraph.ReplicationGraphDebugActor.ServerSetCullDistanceForClass");

	struct ServerSetCullDistanceForClass_Params {
		struct UClass* Class;
		float CullDistance;
	}; ServerSetCullDistanceForClass_Params Params;

	Params.Class = Class;
	Params.CullDistance = CullDistance;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ReplicationGraph.ReplicationGraphDebugActor.ServerSetConditionalActorBreakpoint
inline void AReplicationGraphDebugActor::ServerSetConditionalActorBreakpoint(struct UActor Actor) {
	static auto fn = UObject::FindObject<UFunction>("Function ReplicationGraph.ReplicationGraphDebugActor.ServerSetConditionalActorBreakpoint");

	struct ServerSetConditionalActorBreakpoint_Params {
		struct UActor Actor;
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
inline void AReplicationGraphDebugActor::ClientCellInfo(struct FVector CellLocation, struct FVector CellExtent, struct TArray<struct UActor> Actors) {
	static auto fn = UObject::FindObject<UFunction>("Function ReplicationGraph.ReplicationGraphDebugActor.ClientCellInfo");

	struct ClientCellInfo_Params {
		struct FVector CellLocation;
		struct FVector CellExtent;
		struct TArray<struct UActor> Actors;
	}; ClientCellInfo_Params Params;

	Params.CellLocation = CellLocation;
	Params.CellExtent = CellExtent;
	Params.Actors = Actors;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

