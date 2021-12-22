// Class RoadRuntime.CrossActor
struct ACrossActor : AStaticMeshActor {
	struct FString UniqueKey; //  0x320 Size(10)
	struct TArray<Unknown> SideActors; //  0x330 Size(10)
	struct TArray<Unknown> SideMeshes; //  0x340 Size(10)

	void UpdateSideMesh(struct Unknown InPrototype, struct Unknown MeshRelativeLocation, struct Unknown MeshRelativeRotation, struct Unknown MeshRelativeScale, int32_t SocketIndex, char IsEnable, char IsNormalized); // Function RoadRuntime.CrossActor.UpdateSideMesh(Final|Native|Public|HasDefaults) // <Game+0x109c2b0>
};

// Class RoadRuntime.RoadActor
struct ARoadActor : UActor {
	char SplineMeshAxis; //  0x310 Size(1)
	struct Unknown LocalOffset; //  0x314 Size(c)
	struct Unknown Father; //  0x320 Size(8)
	struct FString UniqueKey; //  0x328 Size(10)
	struct Unknown Spline; //  0x338 Size(8)
	int32_t Index; //  0x340 Size(4)
	int32_t Segmentation; //  0x344 Size(4)
	int32_t StepGeneration; //  0x348 Size(4)
	float Size; //  0x34c Size(4)
	struct Unknown RoadMesh; //  0x350 Size(8)
	struct TArray<Unknown> RoadMeshesComp; //  0x358 Size(10)
	struct TArray<Unknown> SideActors; //  0x368 Size(10)
	struct TArray<Unknown> SideMeshes; //  0x378 Size(10)
	struct TArray<Unknown> SideCurbs; //  0x388 Size(10)

	void UpdateSplineMesh(int32_t MeshIndex); // Function RoadRuntime.RoadActor.UpdateSplineMesh(Final|Native|Public) // <Game+0x109c790>
};

