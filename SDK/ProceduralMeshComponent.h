// Enum ProceduralMeshComponent.EProcMeshSliceCapOption
enum class EProcMeshSliceCapOption : uint8 {
	EProcMeshSliceCapOption = 0
	EProcMeshSliceCapOption = 1
	EProcMeshSliceCapOption = 2
	EProcMeshSliceCapOption = 3
};

// Class ProceduralMeshComponent.ProceduralMeshComponent
struct UProceduralMeshComponent : UMeshComponent {
	char bUseComplexAsSimpleCollision : 0; // 0x4F0 (1)
	char bUseAsyncCooking : 0; // 0x4F1 (1)
	struct Unknown ProcMeshBodySetup; // 0x4F8 (8)
	struct TArray<Unknown> ProcMeshSections; // 0x500 (16)
	struct TArray<Unknown> CollisionConvexElems; // 0x510 (16)
	struct Unknown LocalBounds; // 0x520 (28)
	struct TArray<Unknown> AsyncBodySetupQueue; // 0x540 (16)

	void UpdateMeshSection_LinearColor(int32_t SectionIndex, struct TArray<Unknown>& Vertices, struct TArray<Unknown>& Normals, struct TArray<Unknown>& UV0, struct TArray<Unknown>& UV1, struct TArray<Unknown>& UV2, struct TArray<Unknown>& UV3, struct TArray<Unknown>& VertexColors, struct TArray<Unknown>& Tangents); // Function ProceduralMeshComponent.ProceduralMeshComponent.UpdateMeshSection_LinearColor(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x178E890>
	void UpdateMeshSection(int32_t SectionIndex, struct TArray<Unknown>& Vertices, struct TArray<Unknown>& Normals, struct TArray<Unknown>& UV0, struct TArray<Unknown>& VertexColors, struct TArray<Unknown>& Tangents); // Function ProceduralMeshComponent.ProceduralMeshComponent.UpdateMeshSection(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x178E5C0>
	void SetMeshSectionVisible(int32_t SectionIndex, char bNewVisibility); // Function ProceduralMeshComponent.ProceduralMeshComponent.SetMeshSectionVisible(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x178E2D0>
	char IsMeshSectionVisible(int32_t SectionIndex); // Function ProceduralMeshComponent.ProceduralMeshComponent.IsMeshSectionVisible(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x178E240>
	int32_t GetNumSections(); // Function ProceduralMeshComponent.ProceduralMeshComponent.GetNumSections(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x178DC50>
	void CreateMeshSection_LinearColor(int32_t SectionIndex, struct TArray<Unknown>& Vertices, struct TArray<Unknown>& Triangles, struct TArray<Unknown>& Normals, struct TArray<Unknown>& UV0, struct TArray<Unknown>& UV1, struct TArray<Unknown>& UV2, struct TArray<Unknown>& UV3, struct TArray<Unknown>& VertexColors, struct TArray<Unknown>& Tangents, char bCreateCollision); // Function ProceduralMeshComponent.ProceduralMeshComponent.CreateMeshSection_LinearColor(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x178D530>
	void CreateMeshSection(int32_t SectionIndex, struct TArray<Unknown>& Vertices, struct TArray<Unknown>& Triangles, struct TArray<Unknown>& Normals, struct TArray<Unknown>& UV0, struct TArray<Unknown>& VertexColors, struct TArray<Unknown>& Tangents, char bCreateCollision); // Function ProceduralMeshComponent.ProceduralMeshComponent.CreateMeshSection(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x178D1C0>
	void ClearMeshSection(int32_t SectionIndex); // Function ProceduralMeshComponent.ProceduralMeshComponent.ClearMeshSection(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x178C840>
	void ClearCollisionConvexMeshes(); // Function ProceduralMeshComponent.ProceduralMeshComponent.ClearCollisionConvexMeshes(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x178C820>
	void ClearAllMeshSections(); // Function ProceduralMeshComponent.ProceduralMeshComponent.ClearAllMeshSections(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x178C800>
	void AddCollisionConvexMesh(struct TArray<Unknown> ConvexVerts); // Function ProceduralMeshComponent.ProceduralMeshComponent.AddCollisionConvexMesh(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x178C4C0>
};

