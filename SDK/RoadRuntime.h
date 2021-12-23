// Class RoadRuntime.CrossActor
class ACrossActor : AStaticMeshActor {
	struct FString UniqueKey; // 0x320 (16)
	struct TArray<Unknown> SideActors; // 0x330 (16)
	struct TArray<Unknown> SideMeshes; // 0x340 (16)

	void UpdateSideMesh(struct Unknown InPrototype, struct Unknown MeshRelativeLocation, struct Unknown MeshRelativeRotation, struct Unknown MeshRelativeScale, int32_t SocketIndex, char IsEnable, char IsNormalized); // Function RoadRuntime.CrossActor.UpdateSideMesh(Final|Native|Public|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x109C2B0>
	void UpdateSideActor(struct Unknown* InPrototype, struct Unknown ActorRelativeLocation, struct Unknown ActorRelativeRotation, struct Unknown ActorRelativeScale, int32_t SocketIndex, char IsEnable, char IsNormalized); // Function RoadRuntime.CrossActor.UpdateSideActor(Final|Native|Public|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x109BDD0>
	void PushSideMesh(struct Unknown InPrototype, struct Unknown MeshRelativeLocation, struct Unknown MeshRelativeRotation, struct Unknown MeshRelativeScale, int32_t SocketIndex, char IsEnable, char IsNormalized); // Function RoadRuntime.CrossActor.PushSideMesh(Final|Native|Public|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x109B7B0>
	void PushSideActor(struct Unknown* InPrototype, struct Unknown ActorRelativeLocation, struct Unknown ActorRelativeRotation, struct Unknown ActorRelativeScale, int32_t SocketIndex, char IsEnable, char IsNormalized); // Function RoadRuntime.CrossActor.PushSideActor(Final|Native|Public|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x109B2D0>
	void DestroySideObjects(); // Function RoadRuntime.CrossActor.DestroySideObjects(Final|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x109AFF0>
};

// Class RoadRuntime.RoadActor
class ARoadActor : UActor {
	char SplineMeshAxis; // 0x310 (1)
	struct Unknown LocalOffset; // 0x314 (12)
	struct Unknown Father; // 0x320 (8)
	struct FString UniqueKey; // 0x328 (16)
	struct Unknown Spline; // 0x338 (8)
	int32_t Index; // 0x340 (4)
	int32_t Segmentation; // 0x344 (4)
	int32_t StepGeneration; // 0x348 (4)
	float Size; // 0x34C (4)
	struct Unknown RoadMesh; // 0x350 (8)
	struct TArray<Unknown> RoadMeshesComp; // 0x358 (16)
	struct TArray<Unknown> SideActors; // 0x368 (16)
	struct TArray<Unknown> SideMeshes; // 0x378 (16)
	struct TArray<Unknown> SideCurbs; // 0x388 (16)

	void UpdateSplineMesh(int32_t MeshIndex); // Function RoadRuntime.RoadActor.UpdateSplineMesh(Final|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x109C790>
	void UpdateSideMeshes(struct Unknown InPrototype, struct Unknown MeshRelativeLocation, struct Unknown MeshRelativeRotation, struct Unknown MeshRelativeScale, int32_t SocketIndex, int32_t InShift, int32_t InSpacing, char IsEnable, char IsNormalized); // Function RoadRuntime.RoadActor.UpdateSideMeshes(Final|Native|Public|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x109C4E0>
	void UpdateSideActor(struct Unknown* InPrototype, struct Unknown ActorRelativeLocation, struct Unknown ActorRelativeRotation, struct Unknown ActorRelativeScale, int32_t SocketIndex, int32_t InShift, int32_t InSpacing, char IsEnable, char IsNormalized); // Function RoadRuntime.RoadActor.UpdateSideActor(Final|Native|Public|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x109C000>
	void UpdateSegment(int32_t SegmentIndex, struct Unknown SplineComponent, struct Unknown StaticMesh, char InAxis); // Function RoadRuntime.RoadActor.UpdateSegment(Final|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x109BC90>
	void PushSideMesh(struct Unknown InPrototype, struct Unknown MeshRelativeLocation, struct Unknown MeshRelativeRotation, struct Unknown MeshRelativeScale, int32_t SocketIndex, int32_t InShift, int32_t InSpacing, char IsEnable, char IsNormalized); // Function RoadRuntime.RoadActor.PushSideMesh(Final|Native|Public|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x109B9E0>
	void PushSideActor(struct Unknown* InPrototype, struct Unknown ActorRelativeLocation, struct Unknown ActorRelativeRotation, struct Unknown ActorRelativeScale, int32_t SocketIndex, int32_t InShift, int32_t InSpacing, char IsEnable, char IsNormalized); // Function RoadRuntime.RoadActor.PushSideActor(Final|Native|Public|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x109B500>
	void PushCurbsMeshes(struct Unknown InPrototype, struct Unknown InStartPrototype, struct Unknown InEndPrototype, struct Unknown MeshRelativeLocation, struct Unknown MeshRelativeScale, int32_t SocketIndex, char IsEnable, char InStartEnable, char InEndEnable); // Function RoadRuntime.RoadActor.PushCurbsMeshes(Final|Native|Public|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x109B030>
	void DestroySideObjects(); // Function RoadRuntime.RoadActor.DestroySideObjects(Final|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x109B010>
	void DestroySideCurbs(); // Function RoadRuntime.RoadActor.DestroySideCurbs(Final|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x109AFD0>
	void ClearSplineMeshes(); // Function RoadRuntime.RoadActor.ClearSplineMeshes(Final|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x109AFB0>
	float ApproxLength(struct Unknown& SplineInfo, float Start, float End, int32_t ApproxSections); // Function RoadRuntime.RoadActor.ApproxLength(Final|Native|Static|Public|HasOutParms) // <BravoHotelClient-Win64-Shipping.protected.exe+0x109AE30>
	void AddSplineMesh(int32_t MeshIndex); // Function RoadRuntime.RoadActor.AddSplineMesh(Final|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x109ADB0>
};

// ScriptStruct RoadRuntime.CrossMeshManager
struct FCrossMeshManager {
	struct Unknown Prototype; // 0x0 (8)
	struct Unknown Owner; // 0x8 (8)
	struct Unknown SideMesh; // 0x10 (8)
	int32_t SocketIndex; // 0x18 (4)
};

// ScriptStruct RoadRuntime.CrossActorManager
struct FCrossActorManager {
	struct Unknown* Prototype; // 0x0 (8)
	struct Unknown SideActor; // 0x8 (8)
	int32_t SocketIndex; // 0x10 (4)
};

// ScriptStruct RoadRuntime.SideMeshManager
struct FSideMeshManager {
	struct Unknown Prototype; // 0x0 (8)
	struct Unknown Owner; // 0x8 (8)
	struct Unknown SideMeshes; // 0x10 (8)
	int32_t SocketIndex; // 0x18 (4)
};

// ScriptStruct RoadRuntime.CurbsManager
struct FCurbsManager {
	struct Unknown Owner; // 0x0 (8)
	struct Unknown Prototype; // 0x8 (8)
	struct Unknown StartPrototype; // 0x10 (8)
	struct Unknown EndPrototype; // 0x18 (8)
	struct TArray<Unknown> CurbsComp; // 0x20 (16)
	struct Unknown Spline; // 0x30 (8)
	int32_t SplineIndex; // 0x38 (4)
	int32_t SocketIndex; // 0x3C (4)
	int32_t Segmentation; // 0x40 (4)
	int32_t StepGeneration; // 0x44 (4)
	struct Unknown Offset; // 0x48 (12)
	struct Unknown Scale; // 0x54 (12)
	char CurbEnable : 0; // 0x60 (1)
	char StartEnable : 0; // 0x61 (1)
	char EndEnable : 0; // 0x62 (1)
	struct Unknown SplineInfo; // 0x68 (24)
	float StartRoll; // 0x80 (4)
	float EndRoll; // 0x84 (4)
};

// ScriptStruct RoadRuntime.SideActorManager
struct FSideActorManager {
	struct Unknown* Prototype; // 0x0 (8)
	struct TArray<Unknown> SideActors; // 0x8 (16)
	int32_t SocketIndex; // 0x18 (4)
};

