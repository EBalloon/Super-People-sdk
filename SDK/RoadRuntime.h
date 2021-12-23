// Class RoadRuntime.CrossActor
struct ACrossActor : AStaticMeshActor {
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
struct ARoadActor : UActor {
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

