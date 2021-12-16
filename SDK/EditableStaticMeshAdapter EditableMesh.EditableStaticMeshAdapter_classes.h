// EditableStaticMeshAdapter EditableMesh.EditableStaticMeshAdapter
// Size: 0x00 (Inherited: 0x28)
struct UEditableStaticMeshAdapter : UEditableMeshAdapter {
	None GeometryCollection; // 0x28(0x08)
	None OriginalGeometryCollection; // 0x30(0x08)
	None GeometryCollectionLODIndex; // 0x38(0x04)
	None Adapters; // 0x3b8(0x10)
	None TextureCoordinateCount; // 0x3d0(0x04)
	None PendingCompactCounter; // 0x51c(0x04)
	None SubdivisionCount; // 0x520(0x04)
	None StaticMesh; // 0x28(0x08)
	None OriginalStaticMesh; // 0x30(0x08)
	None StaticMeshLODIndex; // 0x38(0x04)

	void SetStaticGestureConfidenceThreshold(None Gesture, None Confidence); // SetStaticGestureConfidenceThreshold MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.SetStaticGestureConfidenceThreshold // (Final|Native|Static|Public|BlueprintCallable) // <Game+0x17e7cb0>
	void WeldVertices(None& VertexIDs, None& OutNewVertexID); // WeldVertices EditableMesh.EditableMesh.WeldVertices // (Final|Native|Public|HasOutParms|BlueprintCallable) // <Game+0x1770a30>
	None MakeEditableMesh(None PrimitiveComponent, None LODIndex); // MakeEditableMesh EditableMesh.EditableMeshFactory.MakeEditableMesh // (Final|Native|Static|Public|BlueprintCallable) // <Game+0x1776fd0>
};

