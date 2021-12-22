// Enum ProceduralMeshComponent.EProcMeshSliceCapOption
enum class EProcMeshSliceCapOption : uint8 {
	EProcMeshSliceCapOption = 0,
	EProcMeshSliceCapOption = 1,
	EProcMeshSliceCapOption = 2,
	EProcMeshSliceCapOption = 3
};

// Class ProceduralMeshComponent.ProceduralMeshComponent
struct UProceduralMeshComponent : UMeshComponent {
	char bUseComplexAsSimpleCollision; //  0x4f0 Size(1)
	char bUseAsyncCooking; //  0x4f1 Size(1)
	struct Unknown ProcMeshBodySetup; //  0x4f8 Size(8)
	struct TArray<Unknown> ProcMeshSections; //  0x500 Size(10)
	struct TArray<Unknown> CollisionConvexElems; //  0x510 Size(10)
	struct Unknown LocalBounds; //  0x520 Size(1c)
	struct TArray<Unknown> AsyncBodySetupQueue; //  0x540 Size(10)

	void UpdateMeshSection_LinearColor(int32_t SectionIndex, struct TArray<Unknown>& Vertices, struct TArray<Unknown>& Normals, struct TArray<Unknown>& UV0, struct TArray<Unknown>& UV1, struct TArray<Unknown>& UV2, struct TArray<Unknown>& UV3, struct TArray<Unknown>& VertexColors, struct TArray<Unknown>& Tangents); // Function ProceduralMeshComponent.ProceduralMeshComponent.UpdateMeshSection_LinearColor(Final|Native|Public|HasOutParms|BlueprintCallable) // <Game+0x178e890>
};

