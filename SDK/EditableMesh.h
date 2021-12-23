// Enum EditableMesh.ETriangleTessellationMode
enum class ETriangleTessellationMode : uint8 {
	ETriangleTessellationMode = 0
	ETriangleTessellationMode = 1
	ETriangleTessellationMode = 2
};

// Enum EditableMesh.EInsetPolygonsMode
enum class EInsetPolygonsMode : uint8 {
	EInsetPolygonsMode = 0
	EInsetPolygonsMode = 1
	EInsetPolygonsMode = 2
	EInsetPolygonsMode = 3
};

// Enum EditableMesh.EPolygonEdgeHardness
enum class EPolygonEdgeHardness : uint8 {
	EPolygonEdgeHardness = 0
	EPolygonEdgeHardness = 1
	EPolygonEdgeHardness = 2
	EPolygonEdgeHardness = 3
	EPolygonEdgeHardness = 4
};

// Enum EditableMesh.EMeshElementAttributeType
enum class EMeshElementAttributeType : uint8 {
	EMeshElementAttributeType = 0
	EMeshElementAttributeType = 1
	EMeshElementAttributeType = 2
	EMeshElementAttributeType = 3
	EMeshElementAttributeType = 4
	EMeshElementAttributeType = 5
	EMeshElementAttributeType = 6
	EMeshElementAttributeType = 7
	EMeshElementAttributeType = 8
};

// Enum EditableMesh.EMeshTopologyChange
enum class EMeshTopologyChange : uint8 {
	EMeshTopologyChange = 0
	EMeshTopologyChange = 1
	EMeshTopologyChange = 2
};

// Enum EditableMesh.EMeshModificationType
enum class EMeshModificationType : uint8 {
	EMeshModificationType = 0
	EMeshModificationType = 1
	EMeshModificationType = 2
	EMeshModificationType = 3
};

// Class EditableMesh.EditableGeometryCollectionAdapter
class UEditableGeometryCollectionAdapter : UEditableMeshAdapter {
	struct Unknown GeometryCollection; // 0x28 (8)
	struct Unknown OriginalGeometryCollection; // 0x30 (8)
	int32_t GeometryCollectionLODIndex; // 0x38 (4)
};

// Class EditableMesh.EditableMesh
class UEditableMesh : Object {
	struct TArray<Unknown> Adapters; // 0x3B8 (16)
	int32_t TextureCoordinateCount; // 0x3D0 (4)
	int32_t PendingCompactCounter; // 0x51C (4)
	int32_t SubdivisionCount; // 0x520 (4)

	void WeldVertices(struct TArray<Unknown>& VertexIDs, struct Unknown& OutNewVertexID); // Function EditableMesh.EditableMesh.WeldVertices(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1770630>
	void TryToRemoveVertex(struct Unknown VertexID, char& bOutWasVertexRemoved, struct Unknown& OutNewEdgeID); // Function EditableMesh.EditableMesh.TryToRemoveVertex(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1770500>
	void TryToRemovePolygonEdge(struct Unknown EdgeID, char& bOutWasEdgeRemoved, struct Unknown& OutNewPolygonID); // Function EditableMesh.EditableMesh.TryToRemovePolygonEdge(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x17703D0>
	void TriangulatePolygons(struct TArray<Unknown>& PolygonIDs, struct TArray<Unknown>& OutNewTrianglePolygons); // Function EditableMesh.EditableMesh.TriangulatePolygons(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x17702B0>
	void TessellatePolygons(struct TArray<Unknown>& PolygonIDs, enum class Unknow TriangleTessellationMode, struct TArray<Unknown>& OutNewPolygonIDs); // Function EditableMesh.EditableMesh.TessellatePolygons(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1770150>
	void StartModification(enum class Unknow MeshModificationType, enum class Unknow MeshTopologyChange); // Function EditableMesh.EditableMesh.StartModification(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1770090>
	void SplitPolygons(struct TArray<Unknown>& PolygonsToSplit, struct TArray<Unknown>& OutNewEdgeIDs); // Function EditableMesh.EditableMesh.SplitPolygons(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176FF50>
	void SplitPolygonalMesh(struct Unknown& InPlane, struct TArray<Unknown>& PolygonIDs1, struct TArray<Unknown>& PolygonIDs2, struct TArray<Unknown>& BoundaryIDs); // Function EditableMesh.EditableMesh.SplitPolygonalMesh(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176FD80>
	void SplitEdge(struct Unknown EdgeID, struct TArray<Unknown>& Splits, struct TArray<Unknown>& OutNewVertexIDs); // Function EditableMesh.EditableMesh.SplitEdge(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176FC20>
	void SetVerticesCornerSharpness(struct TArray<Unknown>& VertexIDs, struct TArray<Unknown>& VerticesNewCornerSharpness); // Function EditableMesh.EditableMesh.SetVerticesCornerSharpness(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176FB00>
	void SetVerticesAttributes(struct TArray<Unknown>& AttributesForVertices); // Function EditableMesh.EditableMesh.SetVerticesAttributes(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176FA30>
	void SetVertexInstancesAttributes(struct TArray<Unknown>& AttributesForVertexInstances); // Function EditableMesh.EditableMesh.SetVertexInstancesAttributes(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176F960>
	void SetTextureCoordinateCount(int32_t NumTexCoords); // Function EditableMesh.EditableMesh.SetTextureCoordinateCount(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176F8E0>
	void SetSubdivisionCount(int32_t NewSubdivisionCount); // Function EditableMesh.EditableMesh.SetSubdivisionCount(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176F860>
	void SetPolygonsVertexAttributes(struct TArray<Unknown>& VertexAttributesForPolygons); // Function EditableMesh.EditableMesh.SetPolygonsVertexAttributes(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176F6F0>
	void SetEdgesHardnessAutomatically(struct TArray<Unknown>& EdgeIDs, float MaxDotProductForSoftEdge); // Function EditableMesh.EditableMesh.SetEdgesHardnessAutomatically(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176F5F0>
	void SetEdgesHardness(struct TArray<Unknown>& EdgeIDs, struct TArray<Unknown>& EdgesNewIsHard); // Function EditableMesh.EditableMesh.SetEdgesHardness(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176F4D0>
	void SetEdgesCreaseSharpness(struct TArray<Unknown>& EdgeIDs, struct TArray<Unknown>& EdgesNewCreaseSharpness); // Function EditableMesh.EditableMesh.SetEdgesCreaseSharpness(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176F3B0>
	void SetEdgesAttributes(struct TArray<Unknown>& AttributesForEdges); // Function EditableMesh.EditableMesh.SetEdgesAttributes(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176F2E0>
	void SetAllowUndo(char bInAllowUndo); // Function EditableMesh.EditableMesh.SetAllowUndo(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176F260>
	void SetAllowSpatialDatabase(char bInAllowSpatialDatabase); // Function EditableMesh.EditableMesh.SetAllowSpatialDatabase(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176F1D0>
	void SetAllowCompact(char bInAllowCompact); // Function EditableMesh.EditableMesh.SetAllowCompact(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176F150>
	void SearchSpatialDatabaseForPolygonsPotentiallyIntersectingPlane(struct Unknown& InPlane, struct TArray<Unknown>& OutPolygons); // Function EditableMesh.EditableMesh.SearchSpatialDatabaseForPolygonsPotentiallyIntersectingPlane(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176F050>
	void SearchSpatialDatabaseForPolygonsPotentiallyIntersectingLineSegment(struct Unknown LineSegmentStart, struct Unknown LineSegmentEnd, struct TArray<Unknown>& OutPolygons); // Function EditableMesh.EditableMesh.SearchSpatialDatabaseForPolygonsPotentiallyIntersectingLineSegment(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176EF00>
	void SearchSpatialDatabaseForPolygonsInVolume(struct TArray<Unknown>& Planes, struct TArray<Unknown>& OutPolygons); // Function EditableMesh.EditableMesh.SearchSpatialDatabaseForPolygonsInVolume(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176EDE0>
	struct Unknown RevertInstance(); // Function EditableMesh.EditableMesh.RevertInstance(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176EDB0>
	void Revert(); // Function EditableMesh.EditableMesh.Revert(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x151AF10>
	void RebuildRenderMesh(); // Function EditableMesh.EditableMesh.RebuildRenderMesh(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176ED90>
	void QuadrangulateMesh(struct TArray<Unknown>& OutNewPolygonIDs); // Function EditableMesh.EditableMesh.QuadrangulateMesh(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176ECE0>
	void PropagateInstanceChanges(); // Function EditableMesh.EditableMesh.PropagateInstanceChanges(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x151AF10>
	void MoveVertices(struct TArray<Unknown>& VerticesToMove); // Function EditableMesh.EditableMesh.MoveVertices(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176EC30>
	struct Unknown MakeVertexID(int32_t VertexIndex); // Function EditableMesh.EditableMesh.MakeVertexID(Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176EBB0>
	struct Unknown MakePolygonID(int32_t PolygonIndex); // Function EditableMesh.EditableMesh.MakePolygonID(Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176EBB0>
	struct Unknown MakePolygonGroupID(int32_t PolygonGroupIndex); // Function EditableMesh.EditableMesh.MakePolygonGroupID(Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176EBB0>
	struct Unknown MakeEdgeID(int32_t EdgeIndex); // Function EditableMesh.EditableMesh.MakeEdgeID(Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176EBB0>
	char IsValidVertex(struct Unknown VertexID); // Function EditableMesh.EditableMesh.IsValidVertex(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176EB20>
	char IsValidPolygonGroup(struct Unknown PolygonGroupID); // Function EditableMesh.EditableMesh.IsValidPolygonGroup(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176EA90>
	char IsValidPolygon(struct Unknown PolygonID); // Function EditableMesh.EditableMesh.IsValidPolygon(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176EA00>
	char IsValidEdge(struct Unknown EdgeID); // Function EditableMesh.EditableMesh.IsValidEdge(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176E970>
	char IsUndoAllowed(); // Function EditableMesh.EditableMesh.IsUndoAllowed(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176E950>
	char IsSpatialDatabaseAllowed(); // Function EditableMesh.EditableMesh.IsSpatialDatabaseAllowed(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176E930>
	char IsPreviewingSubdivisions(); // Function EditableMesh.EditableMesh.IsPreviewingSubdivisions(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176E900>
	char IsOrphanedVertex(struct Unknown VertexID); // Function EditableMesh.EditableMesh.IsOrphanedVertex(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176E870>
	char IsCompactAllowed(); // Function EditableMesh.EditableMesh.IsCompactAllowed(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176E850>
	char IsCommittedAsInstance(); // Function EditableMesh.EditableMesh.IsCommittedAsInstance(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176E820>
	char IsCommitted(); // Function EditableMesh.EditableMesh.IsCommitted(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176E7F0>
	char IsBeingModified(); // Function EditableMesh.EditableMesh.IsBeingModified(Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176E7C0>
	struct Unknown InvalidVertexID(); // Function EditableMesh.EditableMesh.InvalidVertexID(Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176E7A0>
	struct Unknown InvalidPolygonID(); // Function EditableMesh.EditableMesh.InvalidPolygonID(Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176E780>
	struct Unknown InvalidPolygonGroupID(); // Function EditableMesh.EditableMesh.InvalidPolygonGroupID(Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176E760>
	struct Unknown InvalidEdgeID(); // Function EditableMesh.EditableMesh.InvalidEdgeID(Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176E740>
	void InsetPolygons(struct TArray<Unknown>& PolygonIDs, float InsetFixedDistance, float InsetProgressTowardCenter, enum class Unknow Mode, struct TArray<Unknown>& OutNewCenterPolygonIDs, struct TArray<Unknown>& OutNewSidePolygonIDs); // Function EditableMesh.EditableMesh.InsetPolygons(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176E500>
	void InsertEdgeLoop(struct Unknown EdgeID, struct TArray<Unknown>& Splits, struct TArray<Unknown>& OutNewEdgeIDs); // Function EditableMesh.EditableMesh.InsertEdgeLoop(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176E3A0>
	void InitializeAdapters(); // Function EditableMesh.EditableMesh.InitializeAdapters(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176E380>
	struct Unknown GetVertexPairEdge(struct Unknown VertexID, struct Unknown NextVertexID, char& bOutEdgeWindingIsReversed); // Function EditableMesh.EditableMesh.GetVertexPairEdge(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176E250>
	struct Unknown GetVertexInstanceVertex(struct Unknown VertexInstanceID); // Function EditableMesh.EditableMesh.GetVertexInstanceVertex(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176E1B0>
	int32_t GetVertexInstanceCount(); // Function EditableMesh.EditableMesh.GetVertexInstanceCount(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176E180>
	void GetVertexInstanceConnectedPolygons(struct Unknown VertexInstanceID, struct TArray<Unknown>& OutConnectedPolygonIDs); // Function EditableMesh.EditableMesh.GetVertexInstanceConnectedPolygons(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176E090>
	int32_t GetVertexInstanceConnectedPolygonCount(struct Unknown VertexInstanceID); // Function EditableMesh.EditableMesh.GetVertexInstanceConnectedPolygonCount(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176E000>
	struct Unknown GetVertexInstanceConnectedPolygon(struct Unknown VertexInstanceID, int32_t ConnectedPolygonNumber); // Function EditableMesh.EditableMesh.GetVertexInstanceConnectedPolygon(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176DF30>
	int32_t GetVertexCount(); // Function EditableMesh.EditableMesh.GetVertexCount(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176DF00>
	void GetVertexConnectedPolygons(struct Unknown VertexID, struct TArray<Unknown>& OutConnectedPolygonIDs); // Function EditableMesh.EditableMesh.GetVertexConnectedPolygons(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176DE10>
	void GetVertexConnectedEdges(struct Unknown VertexID, struct TArray<Unknown>& OutConnectedEdgeIDs); // Function EditableMesh.EditableMesh.GetVertexConnectedEdges(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176DD20>
	int32_t GetVertexConnectedEdgeCount(struct Unknown VertexID); // Function EditableMesh.EditableMesh.GetVertexConnectedEdgeCount(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176DC90>
	struct Unknown GetVertexConnectedEdge(struct Unknown VertexID, int32_t ConnectedEdgeNumber); // Function EditableMesh.EditableMesh.GetVertexConnectedEdge(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176DBC0>
	void GetVertexAdjacentVertices(struct Unknown VertexID, struct TArray<Unknown>& OutAdjacentVertexIDs); // Function EditableMesh.EditableMesh.GetVertexAdjacentVertices(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176DAD0>
	int32_t GetTextureCoordinateCount(); // Function EditableMesh.EditableMesh.GetTextureCoordinateCount(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176DAA0>
	struct Unknown GetSubdivisionLimitData(); // Function EditableMesh.EditableMesh.GetSubdivisionLimitData(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176DA60>
	int32_t GetSubdivisionCount(); // Function EditableMesh.EditableMesh.GetSubdivisionCount(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176DA30>
	int32_t GetPolygonTriangulatedTriangleCount(struct Unknown PolygonID); // Function EditableMesh.EditableMesh.GetPolygonTriangulatedTriangleCount(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176D9A0>
	struct Unknown GetPolygonTriangulatedTriangle(struct Unknown PolygonID, int32_t PolygonTriangleNumber); // Function EditableMesh.EditableMesh.GetPolygonTriangulatedTriangle(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176D8D0>
	void GetPolygonPerimeterVertices(struct Unknown PolygonID, struct TArray<Unknown>& OutPolygonPerimeterVertexIDs); // Function EditableMesh.EditableMesh.GetPolygonPerimeterVertices(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176D7E0>
	void GetPolygonPerimeterVertexInstances(struct Unknown PolygonID, struct TArray<Unknown>& OutPolygonPerimeterVertexInstanceIDs); // Function EditableMesh.EditableMesh.GetPolygonPerimeterVertexInstances(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176D6F0>
	struct Unknown GetPolygonPerimeterVertexInstance(struct Unknown PolygonID, int32_t PolygonVertexNumber); // Function EditableMesh.EditableMesh.GetPolygonPerimeterVertexInstance(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176D620>
	int32_t GetPolygonPerimeterVertexCount(struct Unknown PolygonID); // Function EditableMesh.EditableMesh.GetPolygonPerimeterVertexCount(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176D3D0>
	struct Unknown GetPolygonPerimeterVertex(struct Unknown PolygonID, int32_t PolygonVertexNumber); // Function EditableMesh.EditableMesh.GetPolygonPerimeterVertex(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176D550>
	void GetPolygonPerimeterEdges(struct Unknown PolygonID, struct TArray<Unknown>& OutPolygonPerimeterEdgeIDs); // Function EditableMesh.EditableMesh.GetPolygonPerimeterEdges(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176D460>
	int32_t GetPolygonPerimeterEdgeCount(struct Unknown PolygonID); // Function EditableMesh.EditableMesh.GetPolygonPerimeterEdgeCount(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176D3D0>
	struct Unknown GetPolygonPerimeterEdge(struct Unknown PolygonID, int32_t PerimeterEdgeNumber, char& bOutEdgeWindingIsReversedForPolygon); // Function EditableMesh.EditableMesh.GetPolygonPerimeterEdge(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176D2B0>
	struct Unknown GetPolygonInGroup(struct Unknown PolygonGroupID, int32_t PolygonNumber); // Function EditableMesh.EditableMesh.GetPolygonInGroup(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176D1E0>
	int32_t GetPolygonGroupCount(); // Function EditableMesh.EditableMesh.GetPolygonGroupCount(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176D1B0>
	int32_t GetPolygonCountInGroup(struct Unknown PolygonGroupID); // Function EditableMesh.EditableMesh.GetPolygonCountInGroup(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176D120>
	int32_t GetPolygonCount(); // Function EditableMesh.EditableMesh.GetPolygonCount(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176D0F0>
	void GetPolygonAdjacentPolygons(struct Unknown PolygonID, struct TArray<Unknown>& OutAdjacentPolygons); // Function EditableMesh.EditableMesh.GetPolygonAdjacentPolygons(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176D000>
	struct Unknown GetGroupForPolygon(struct Unknown PolygonID); // Function EditableMesh.EditableMesh.GetGroupForPolygon(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176CF60>
	struct Unknown GetFirstValidPolygonGroup(); // Function EditableMesh.EditableMesh.GetFirstValidPolygonGroup(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176CF20>
	void GetEdgeVertices(struct Unknown EdgeID, struct Unknown& OutEdgeVertexID0, struct Unknown& OutEdgeVertexID1); // Function EditableMesh.EditableMesh.GetEdgeVertices(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176CDF0>
	struct Unknown GetEdgeVertex(struct Unknown EdgeID, int32_t EdgeVertexNumber); // Function EditableMesh.EditableMesh.GetEdgeVertex(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176CD20>
	struct Unknown GetEdgeThatConnectsVertices(struct Unknown VertexID0, struct Unknown VertexID1); // Function EditableMesh.EditableMesh.GetEdgeThatConnectsVertices(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176CC50>
	void GetEdgeLoopElements(struct Unknown EdgeID, struct TArray<Unknown>& EdgeLoopIDs); // Function EditableMesh.EditableMesh.GetEdgeLoopElements(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176CB60>
	int32_t GetEdgeCount(); // Function EditableMesh.EditableMesh.GetEdgeCount(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176CB30>
	void GetEdgeConnectedPolygons(struct Unknown EdgeID, struct TArray<Unknown>& OutConnectedPolygonIDs); // Function EditableMesh.EditableMesh.GetEdgeConnectedPolygons(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176CA40>
	int32_t GetEdgeConnectedPolygonCount(struct Unknown EdgeID); // Function EditableMesh.EditableMesh.GetEdgeConnectedPolygonCount(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176C9B0>
	struct Unknown GetEdgeConnectedPolygon(struct Unknown EdgeID, int32_t ConnectedPolygonNumber); // Function EditableMesh.EditableMesh.GetEdgeConnectedPolygon(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176C8E0>
	void GeneratePolygonTangentsAndNormals(struct TArray<Unknown>& PolygonIDs); // Function EditableMesh.EditableMesh.GeneratePolygonTangentsAndNormals(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176C830>
	void FlipPolygons(struct TArray<Unknown>& PolygonIDs); // Function EditableMesh.EditableMesh.FlipPolygons(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176C780>
	int32_t FindPolygonPerimeterVertexNumberForVertex(struct Unknown PolygonID, struct Unknown VertexID); // Function EditableMesh.EditableMesh.FindPolygonPerimeterVertexNumberForVertex(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176C6B0>
	int32_t FindPolygonPerimeterEdgeNumberForVertic(struct Unknown PolygonID, struct Unknown EdgeVertexID0, struct Unknown EdgeVertexID1); // Function EditableMesh.EditableMesh.FindPolygonPerimeterEdgeNumberForVertic(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176C5A0>
	void FindPolygonLoop(struct Unknown EdgeID, struct TArray<Unknown>& OutEdgeLoopEdgeIDs, struct TArray<Unknown>& OutFlippedEdgeIDs, struct TArray<Unknown>& OutReversedEdgeIDPathToTake, struct TArray<Unknown>& OutPolygonIDsToSplit); // Function EditableMesh.EditableMesh.FindPolygonLoop(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176C380>
	void ExtrudePolygons(struct TArray<Unknown>& Polygons, float ExtrudeDistance, char bKeepNeighborsTogether, struct TArray<Unknown>& OutNewExtrudedFrontPolygons); // Function EditableMesh.EditableMesh.ExtrudePolygons(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176C1C0>
	void ExtendVertices(struct TArray<Unknown>& VertexIDs, char bOnlyExtendClosestEdge, struct Unknown ReferencePosition, struct TArray<Unknown>& OutNewExtendedVertexIDs); // Function EditableMesh.EditableMesh.ExtendVertices(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176C010>
	void ExtendEdges(struct TArray<Unknown>& EdgeIDs, char bWeldNeighbors, struct TArray<Unknown>& OutNewExtendedEdgeIDs); // Function EditableMesh.EditableMesh.ExtendEdges(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176BEB0>
	void EndModification(char bFromUndo); // Function EditableMesh.EditableMesh.EndModification(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176BE20>
	void DeleteVertexInstances(struct TArray<Unknown>& VertexInstanceIDsToDelete, char bDeleteOrphanedVertices); // Function EditableMesh.EditableMesh.DeleteVertexInstances(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176BD20>
	void DeleteVertexAndConnectedEdgesAndPolygons(struct Unknown VertexID, char bDeleteOrphanedEdges, char bDeleteOrphanedVertices, char bDeleteOrphanedVertexInstances, char bDeleteEmptyPolygonGroups); // Function EditableMesh.EditableMesh.DeleteVertexAndConnectedEdgesAndPolygons(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176BB70>
	void DeletePolygons(struct TArray<Unknown>& PolygonIDsToDelete, char bDeleteOrphanedEdges, char bDeleteOrphanedVertices, char bDeleteOrphanedVertexInstances, char bDeleteEmptyPolygonGroups); // Function EditableMesh.EditableMesh.DeletePolygons(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176B980>
	void DeletePolygonGroups(struct TArray<Unknown>& PolygonGroupIDs); // Function EditableMesh.EditableMesh.DeletePolygonGroups(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176B8D0>
	void DeleteOrphanVertices(struct TArray<Unknown>& VertexIDsToDelete); // Function EditableMesh.EditableMesh.DeleteOrphanVertices(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176B820>
	void DeleteEdges(struct TArray<Unknown>& EdgeIDsToDelete, char bDeleteOrphanedVertices); // Function EditableMesh.EditableMesh.DeleteEdges(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176B720>
	void DeleteEdgeAndConnectedPolygons(struct Unknown EdgeID, char bDeleteOrphanedEdges, char bDeleteOrphanedVertices, char bDeleteOrphanedVertexInstances, char bDeleteEmptyPolygonGroups); // Function EditableMesh.EditableMesh.DeleteEdgeAndConnectedPolygons(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176B570>
	void CreateVertices(struct TArray<Unknown>& VerticesToCreate, struct TArray<Unknown>& OutNewVertexIDs); // Function EditableMesh.EditableMesh.CreateVertices(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176B430>
	void CreateVertexInstances(struct TArray<Unknown>& VertexInstancesToCreate, struct TArray<Unknown>& OutNewVertexInstanceIDs); // Function EditableMesh.EditableMesh.CreateVertexInstances(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176B2F0>
	void CreatePolygons(struct TArray<Unknown>& PolygonsToCreate, struct TArray<Unknown>& OutNewPolygonIDs, struct TArray<Unknown>& OutNewEdgeIDs); // Function EditableMesh.EditableMesh.CreatePolygons(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176B110>
	void CreatePolygonGroups(struct TArray<Unknown>& PolygonGroupsToCreate, struct TArray<Unknown>& OutNewPolygonGroupIDs); // Function EditableMesh.EditableMesh.CreatePolygonGroups(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176AFD0>
	void CreateMissingPolygonPerimeterEdges(struct Unknown PolygonID, struct TArray<Unknown>& OutNewEdgeIDs); // Function EditableMesh.EditableMesh.CreateMissingPolygonPerimeterEdges(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176AEE0>
	void CreateEmptyVertexRange(int32_t NumVerticesToCreate, struct TArray<Unknown>& OutNewVertexIDs); // Function EditableMesh.EditableMesh.CreateEmptyVertexRange(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176ADF0>
	void CreateEdges(struct TArray<Unknown>& EdgesToCreate, struct TArray<Unknown>& OutNewEdgeIDs); // Function EditableMesh.EditableMesh.CreateEdges(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176ACB0>
	void ComputePolygonsSharedEdges(struct TArray<Unknown>& PolygonIDs, struct TArray<Unknown>& OutSharedEdgeIDs); // Function EditableMesh.EditableMesh.ComputePolygonsSharedEdges(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176AB90>
	struct Unknown ComputePolygonPlane(struct Unknown PolygonID); // Function EditableMesh.EditableMesh.ComputePolygonPlane(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176AAF0>
	struct Unknown ComputePolygonNormal(struct Unknown PolygonID); // Function EditableMesh.EditableMesh.ComputePolygonNormal(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176AA50>
	struct Unknown ComputePolygonCenter(struct Unknown PolygonID); // Function EditableMesh.EditableMesh.ComputePolygonCenter(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176A9B0>
	struct Unknown ComputeBoundingBoxAndSphere(); // Function EditableMesh.EditableMesh.ComputeBoundingBoxAndSphere(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176A960>
	struct Unknown ComputeBoundingBox(); // Function EditableMesh.EditableMesh.ComputeBoundingBox(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176A910>
	struct Unknown CommitInstance(struct Unknown ComponentToInstanceTo); // Function EditableMesh.EditableMesh.CommitInstance(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176A880>
	void Commit(); // Function EditableMesh.EditableMesh.Commit(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176A860>
	void ChangePolygonsVertexInstances(struct TArray<Unknown>& VertexInstancesForPolygons); // Function EditableMesh.EditableMesh.ChangePolygonsVertexInstances(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176A740>
	void BevelPolygons(struct TArray<Unknown>& PolygonIDs, float BevelFixedDistance, float BevelProgressTowardCenter, struct TArray<Unknown>& OutNewCenterPolygonIDs, struct TArray<Unknown>& OutNewSidePolygonIDs); // Function EditableMesh.EditableMesh.BevelPolygons(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176A550>
	void AssignPolygonsToPolygonGroups(struct TArray<Unknown>& PolygonGroupForPolygons, char bDeleteOrphanedPolygonGroups); // Function EditableMesh.EditableMesh.AssignPolygonsToPolygonGroups(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176A450>
	char AnyChangesToUndo(); // Function EditableMesh.EditableMesh.AnyChangesToUndo(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176A420>
};

// Class EditableMesh.EditableStaticMeshAdapter
class UEditableStaticMeshAdapter : UEditableMeshAdapter {
	struct Unknown StaticMesh; // 0x28 (8)
	struct Unknown OriginalStaticMesh; // 0x30 (8)
	int32_t StaticMeshLODIndex; // 0x38 (4)
};

// ScriptStruct EditableMesh.AdaptorPolygon2Group
struct FAdaptorPolygon2Group {
	uint32_t RenderingSectionIndex; // 0x0 (4)
	int32_t MaterialIndex; // 0x4 (4)
	int32_t MaxTriangles; // 0x8 (4)
};

// ScriptStruct EditableMesh.AdaptorPolygon
struct FAdaptorPolygon {
	struct Unknown PolygonGroupID; // 0x0 (4)
	struct TArray<Unknown> TriangulatedPolygonTriangleIndices; // 0x8 (16)
};

// ScriptStruct EditableMesh.PolygonGroupForPolygon
struct FPolygonGroupForPolygon {
	struct Unknown PolygonID; // 0x0 (4)
	struct Unknown PolygonGroupID; // 0x4 (4)
};

// ScriptStruct EditableMesh.PolygonGroupToCreate
struct FPolygonGroupToCreate {
	struct Unknown PolygonGroupAttributes; // 0x0 (16)
	struct Unknown OriginalPolygonGroupID; // 0x10 (4)
};

// ScriptStruct EditableMesh.MeshElementAttributeList
struct FMeshElementAttributeList {
	struct TArray<Unknown> Attributes; // 0x0 (16)
};

// ScriptStruct EditableMesh.MeshElementAttributeData
struct FMeshElementAttributeData {
	struct FName AttributeName; // 0x0 (8)
	int32_t AttributeIndex; // 0x8 (4)
	struct Unknown AttributeValue; // 0x10 (80)
};

// ScriptStruct EditableMesh.VertexToMove
struct FVertexToMove {
	struct Unknown VertexID; // 0x0 (4)
	struct Unknown NewVertexPosition; // 0x4 (12)
};

// ScriptStruct EditableMesh.ChangeVertexInstancesForPolygon
struct FChangeVertexInstancesForPolygon {
	struct Unknown PolygonID; // 0x0 (4)
	struct TArray<Unknown> PerimeterVertexIndicesAndInstanceIDs; // 0x8 (16)
	struct TArray<Unknown> VertexIndicesAndInstanceIDsForEachHole; // 0x18 (16)
};

// ScriptStruct EditableMesh.VertexInstancesForPolygonHole
struct FVertexInstancesForPolygonHole {
	struct TArray<Unknown> VertexIndicesAndInstanceIDs; // 0x0 (16)
};

// ScriptStruct EditableMesh.VertexIndexAndInstanceID
struct FVertexIndexAndInstanceID {
	int32_t ContourIndex; // 0x0 (4)
	struct Unknown VertexInstanceID; // 0x4 (4)
};

// ScriptStruct EditableMesh.VertexAttributesForPolygon
struct FVertexAttributesForPolygon {
	struct Unknown PolygonID; // 0x0 (4)
	struct TArray<Unknown> PerimeterVertexAttributeLists; // 0x8 (16)
	struct TArray<Unknown> VertexAttributeListsForEachHole; // 0x18 (16)
};

// ScriptStruct EditableMesh.VertexAttributesForPolygonHole
struct FVertexAttributesForPolygonHole {
	struct TArray<Unknown> VertexAttributeList; // 0x0 (16)
};

// ScriptStruct EditableMesh.AttributesForEdge
struct FAttributesForEdge {
	struct Unknown EdgeID; // 0x0 (4)
	struct Unknown EdgeAttributes; // 0x8 (16)
};

// ScriptStruct EditableMesh.AttributesForVertexInstance
struct FAttributesForVertexInstance {
	struct Unknown VertexInstanceID; // 0x0 (4)
	struct Unknown VertexInstanceAttributes; // 0x8 (16)
};

// ScriptStruct EditableMesh.AttributesForVertex
struct FAttributesForVertex {
	struct Unknown VertexID; // 0x0 (4)
	struct Unknown VertexAttributes; // 0x8 (16)
};

// ScriptStruct EditableMesh.PolygonToSplit
struct FPolygonToSplit {
	struct Unknown PolygonID; // 0x0 (4)
	struct TArray<Unknown> VertexPairsToSplitAt; // 0x8 (16)
};

// ScriptStruct EditableMesh.VertexPair
struct FVertexPair {
	struct Unknown VertexID0; // 0x0 (4)
	struct Unknown VertexID1; // 0x4 (4)
};

// ScriptStruct EditableMesh.PolygonToCreate
struct FPolygonToCreate {
	struct Unknown PolygonGroupID; // 0x0 (4)
	struct TArray<Unknown> PerimeterVertices; // 0x8 (16)
	struct Unknown OriginalPolygonID; // 0x18 (4)
	enum class Unknow PolygonEdgeHardness; // 0x1C (1)
};

// ScriptStruct EditableMesh.VertexAndAttributes
struct FVertexAndAttributes {
	struct Unknown VertexInstanceID; // 0x0 (4)
	struct Unknown VertexID; // 0x4 (4)
	struct Unknown PolygonVertexAttributes; // 0x8 (16)
};

// ScriptStruct EditableMesh.EdgeToCreate
struct FEdgeToCreate {
	struct Unknown VertexID0; // 0x0 (4)
	struct Unknown VertexID1; // 0x4 (4)
	struct Unknown EdgeAttributes; // 0x8 (16)
	struct Unknown OriginalEdgeID; // 0x18 (4)
};

// ScriptStruct EditableMesh.VertexInstanceToCreate
struct FVertexInstanceToCreate {
	struct Unknown VertexID; // 0x0 (4)
	struct Unknown VertexInstanceAttributes; // 0x8 (16)
	struct Unknown OriginalVertexInstanceID; // 0x18 (4)
};

// ScriptStruct EditableMesh.VertexToCreate
struct FVertexToCreate {
	struct Unknown VertexAttributes; // 0x0 (16)
	struct Unknown OriginalVertexID; // 0x10 (4)
};

// ScriptStruct EditableMesh.SubdivisionLimitData
struct FSubdivisionLimitData {
	struct TArray<Unknown> VertexPositions; // 0x0 (16)
	struct TArray<Unknown> Sections; // 0x10 (16)
	struct TArray<Unknown> SubdividedWireEdges; // 0x20 (16)
};

// ScriptStruct EditableMesh.SubdividedWireEdge
struct FSubdividedWireEdge {
	int32_t EdgeVertex0PositionIndex; // 0x0 (4)
	int32_t EdgeVertex1PositionIndex; // 0x4 (4)
};

// ScriptStruct EditableMesh.SubdivisionLimitSection
struct FSubdivisionLimitSection {
	struct TArray<Unknown> SubdividedQuads; // 0x0 (16)
};

// ScriptStruct EditableMesh.SubdividedQuad
struct FSubdividedQuad {
	struct Unknown QuadVertex0; // 0x0 (52)
	struct Unknown QuadVertex1; // 0x34 (52)
	struct Unknown QuadVertex2; // 0x68 (52)
	struct Unknown QuadVertex3; // 0x9C (52)
};

// ScriptStruct EditableMesh.SubdividedQuadVertex
struct FSubdividedQuadVertex {
	int32_t VertexPositionIndex; // 0x0 (4)
	struct Unknown TextureCoordinate0; // 0x4 (8)
	struct Unknown TextureCoordinate1; // 0xC (8)
	struct Unknown VertexColor; // 0x14 (4)
	struct Unknown VertexNormal; // 0x18 (12)
	struct Unknown VertexTangent; // 0x24 (12)
	float VertexBinormalSign; // 0x30 (4)
};

// ScriptStruct EditableMesh.RenderingPolygonGroup
struct FRenderingPolygonGroup {
	uint32_t RenderingSectionIndex; // 0x0 (4)
	int32_t MaterialIndex; // 0x4 (4)
	int32_t MaxTriangles; // 0x8 (4)
};

// ScriptStruct EditableMesh.RenderingPolygon
struct FRenderingPolygon {
	struct Unknown PolygonGroupID; // 0x0 (4)
	struct TArray<Unknown> TriangulatedPolygonTriangleIndices; // 0x8 (16)
};

