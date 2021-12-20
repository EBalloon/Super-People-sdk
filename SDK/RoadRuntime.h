// Class RoadRuntime.CrossActor
struct ACrossActor : AStaticMeshActor {
	struct FString UniqueKey; //  0x320 Size(10)
	Unknown SideActors; //  0x330 Size(10)
	Unknown SideMeshes; //  0x340 Size(10)

	void UpdateSideMesh(Unknown InPrototype, Unknown MeshRelativeLocation, Unknown MeshRelativeRotation, Unknown MeshRelativeScale, int32_t SocketIndex, char IsEnable, char IsNormalized); // Function RoadRuntime.CrossActor.UpdateSideMesh(Final|Native|Public|HasDefaults) // <Game+0x109bec0>
};

// Class RoadRuntime.RoadActor
struct ARoadActor : UActor {
	Unknown SplineMeshAxis; //  0x310 Size(1)
	Unknown LocalOffset; //  0x314 Size(c)
	Unknown Father; //  0x320 Size(8)
	struct FString UniqueKey; //  0x328 Size(10)
	Unknown Spline; //  0x338 Size(8)
	int32_t Index; //  0x340 Size(4)
	int32_t Segmentation; //  0x344 Size(4)
	int32_t StepGeneration; //  0x348 Size(4)
	float Size; //  0x34c Size(4)
	Unknown RoadMesh; //  0x350 Size(8)
	Unknown RoadMeshesComp; //  0x358 Size(10)
	Unknown SideActors; //  0x368 Size(10)
	Unknown SideMeshes; //  0x378 Size(10)
	Unknown SideCurbs; //  0x388 Size(10)

	void UpdateSplineMesh(int32_t MeshIndex); // Function RoadRuntime.RoadActor.UpdateSplineMesh(Final|Native|Public) // <Game+0x109c3a0>
};

