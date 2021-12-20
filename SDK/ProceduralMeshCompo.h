// Enum ProceduralMeshCompo.EProcMeshSliceCapOption
enum class EProcMeshSliceCapOption : uint8 {
	EProcMeshSliceCapOption = 0,
	EProcMeshSliceCapOption = 1,
	EProcMeshSliceCapOption = 2,
	EProcMeshSliceCapOption = 3
};

// Class ProceduralMeshCompo.ProceduralMeshComponent
struct UProceduralMeshComponent : UMeshComponent {
	char bUseComplexAsSimpleCollisio; //  0x4f0 Size(1)
	char bUseAsyncCooking; //  0x4f1 Size(1)
	Unknown ProcMeshBodySetup; //  0x4f8 Size(8)
	Unknown ProcMeshSections; //  0x500 Size(10)
	Unknown CollisionConvexElems; //  0x510 Size(10)
	Unknown LocalBounds; //  0x520 Size(1c)
	Unknown AsyncBodySetupQueue; //  0x540 Size(10)

	void UpdateMeshSection_LinearColor(int32_t SectionIndex, Unknown& Vertices, Unknown& Normals, Unknown& UV0, Unknown& UV1, Unknown& UV2, Unknown& UV3, Unknown& VertexColors, Unknown& Tangents); // Function ProceduralMeshCompot.ProceduralMeshComponent.UpdateMeshSection_LinearColor(Final|Native|Public|HasOutParms|BlueprintCallable) // <Game+0x178dba0>
};

