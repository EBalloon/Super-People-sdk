// CustomizableInstanceLODManagementBase CustomizableObject.CustomizableInstanceLODManagementBase
 struct UCustomizableInstanceLODManagementBase : Object {
	Unknown UberGraphFrame; // 0x368(0x08)
	char bUseComplexAsSimpleCollision; // 0x4f0(0x01)
	char bUseAsyncCooking; // 0x4f1(0x01)
	Unknown ProcMeshBodySetup; // 0x4f8(0x08)
	Unknown ProcMeshSections; // 0x500(0x10)
	Unknown CollisionConvexElems; // 0x510(0x10)
	Unknown LocalBounds; // 0x520(0x1c)
	Unknown AsyncBodySetupQueue; // 0x540(0x10)
	Unknown RenderingLogSeverity; // 0x28(0x01)
	char ShowWarningsOnScreen; // 0x29(0x01)
	struct FString DeveloperOptions; // 0x30(0x10)
	Unknown Texture; // 0x70(0x08)

	void ExecuteUbergraph(int32_t EntryPoint); // ExecuteUbergraph CoreUObject.Object.ExecuteUbergraph // (Event|Public|BlueprintEvent) // <Game+0x23ad490>
	void ReceiveBeginPlay(); // ReceiveBeginPlay BP-SkillTargetingBombing.BP-SkillTargetingBombing_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // <Game+0x23ad490>
	void SliceProceduralMesh(Unknown InProcMesh, Unknown PlanePosition, Unknown PlaneNormal, char bCreateOtherHalf, Unknown& OutOtherHalfProcMesh, Unknown CapOption, Unknown CapMaterial); // SliceProceduralMesh ProceduralMeshComponent.KismetProceduralMeshLibrary.SliceProceduralMesh // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // <Game+0x178e790>
	void UpdateMeshSection_LinearColor(int32_t SectionIndex, Unknown& Vertices, Unknown& Normals, Unknown& UV0, Unknown& UV1, Unknown& UV2, Unknown& UV3, Unknown& VertexColors, Unknown& Tangents); // UpdateMeshSection_LinearColor ProceduralMeshComponent.ProceduralMeshComponent.UpdateMeshSection_LinearColor // (Final|Native|Public|HasOutParms|BlueprintCallable) // <Game+0x178ec90>
};

