// Enum EditableMesh.ETriangleTessellationMode
enum class ETriangleTessellationMode : uint8_t {
	ETriangleTessellationMode = 0,
	ETriangleTessellationMode = 1,
	ETriangleTessellationMode = 2,
};

// Enum EditableMesh.EInsetPolygonsMode
enum class EInsetPolygonsMode : uint8_t {
	EInsetPolygonsMode = 0,
	EInsetPolygonsMode = 1,
	EInsetPolygonsMode = 2,
	EInsetPolygonsMode = 3,
};

// Enum EditableMesh.EPolygonEdgeHardness
enum class EPolygonEdgeHardness : uint8_t {
	EPolygonEdgeHardness = 0,
	EPolygonEdgeHardness = 1,
	EPolygonEdgeHardness = 2,
	EPolygonEdgeHardness = 3,
	EPolygonEdgeHardness = 4,
};

// Enum EditableMesh.EMeshElementAttributeType
enum class EMeshElementAttributeType : uint8_t {
	EMeshElementAttributeType = 0,
	EMeshElementAttributeType = 1,
	EMeshElementAttributeType = 2,
	EMeshElementAttributeType = 3,
	EMeshElementAttributeType = 4,
	EMeshElementAttributeType = 5,
	EMeshElementAttributeType = 6,
	EMeshElementAttributeType = 7,
	EMeshElementAttributeType = 8,
};

// Enum EditableMesh.EMeshTopologyChange
enum class EMeshTopologyChange : uint8_t {
	EMeshTopologyChange = 0,
	EMeshTopologyChange = 1,
	EMeshTopologyChange = 2,
};

// Enum EditableMesh.EMeshModificationType
enum class EMeshModificationType : uint8_t {
	EMeshModificationType = 0,
	EMeshModificationType = 1,
	EMeshModificationType = 2,
	EMeshModificationType = 3,
};

// Class EditableMesh.EditableGeometryCollectionAdapter
class UEditableGeometryCollectionAdapter : public UEditableMeshAdapter {

public:

	struct Unknown GeometryCollection; // 0x28 (8)
	struct Unknown OriginalGeometryCollection; // 0x30 (8)
	int32_t GeometryCollectionLODIndex; // 0x38 (4)
};

// Class EditableMesh.EditableMesh
class UEditableMesh : public Object {

public:

	struct TArray<Unknown> Adapters; // 0x3B8 (16)
	int32_t TextureCoordinateCount; // 0x3D0 (4)
	int32_t PendingCompactCounter; // 0x51C (4)
	int32_t SubdivisionCount; // 0x520 (4)

	void WeldVertices(struct TArray<Unknown>& VertexIDs, struct Unknown& OutNewVertexID); // Function EditableMesh.EditableMesh.WeldVertices(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1771AA0>
	void TryToRemoveVertex(struct Unknown VertexID, char& bOutWasVertexRemoved, struct Unknown& OutNewEdgeID); // Function EditableMesh.EditableMesh.TryToRemoveVertex(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1771970>
	void TryToRemovePolygonEdge(struct Unknown EdgeID, char& bOutWasEdgeRemoved, struct Unknown& OutNewPolygonID); // Function EditableMesh.EditableMesh.TryToRemovePolygonEdge(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1771840>
	void TriangulatePolygons(struct TArray<Unknown>& PolygonIDs, struct TArray<Unknown>& OutNewTrianglePolygons); // Function EditableMesh.EditableMesh.TriangulatePolygons(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1771720>
	void TessellatePolygons(struct TArray<Unknown>& PolygonIDs, enum class Unknow TriangleTessellationMode, struct TArray<Unknown>& OutNewPolygonIDs); // Function EditableMesh.EditableMesh.TessellatePolygons(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x17715C0>
	void StartModification(enum class Unknow MeshModificationType, enum class Unknow MeshTopologyChange); // Function EditableMesh.EditableMesh.StartModification(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1771500>
	void SplitPolygons(struct TArray<Unknown>& PolygonsToSplit, struct TArray<Unknown>& OutNewEdgeIDs); // Function EditableMesh.EditableMesh.SplitPolygons(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x17713C0>
	void SplitPolygonalMesh(struct Unknown& InPlane, struct TArray<Unknown>& PolygonIDs1, struct TArray<Unknown>& PolygonIDs2, struct TArray<Unknown>& BoundaryIDs); // Function EditableMesh.EditableMesh.SplitPolygonalMesh(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x17711F0>
	void SplitEdge(struct Unknown EdgeID, struct TArray<Unknown>& Splits, struct TArray<Unknown>& OutNewVertexIDs); // Function EditableMesh.EditableMesh.SplitEdge(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1771090>
	void SetVerticesCornerSharpness(struct TArray<Unknown>& VertexIDs, struct TArray<Unknown>& VerticesNewCornerSharpness); // Function EditableMesh.EditableMesh.SetVerticesCornerSharpness(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1770F70>
	void SetVerticesAttributes(struct TArray<Unknown>& AttributesForVertices); // Function EditableMesh.EditableMesh.SetVerticesAttributes(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1770EA0>
	void SetVertexInstancesAttributes(struct TArray<Unknown>& AttributesForVertexInstances); // Function EditableMesh.EditableMesh.SetVertexInstancesAttributes(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1770DD0>
	void SetTextureCoordinateCount(int32_t NumTexCoords); // Function EditableMesh.EditableMesh.SetTextureCoordinateCount(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1770D50>
	void SetSubdivisionCount(int32_t NewSubdivisionCount); // Function EditableMesh.EditableMesh.SetSubdivisionCount(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1770CD0>
	void SetPolygonsVertexAttributes(struct TArray<Unknown>& VertexAttributesForPolygons); // Function EditableMesh.EditableMesh.SetPolygonsVertexAttributes(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1770B60>
	void SetEdgesHardnessAutomatically(struct TArray<Unknown>& EdgeIDs, float MaxDotProductForSoftEdge); // Function EditableMesh.EditableMesh.SetEdgesHardnessAutomatically(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1770A60>
	void SetEdgesHardness(struct TArray<Unknown>& EdgeIDs, struct TArray<Unknown>& EdgesNewIsHard); // Function EditableMesh.EditableMesh.SetEdgesHardness(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1770940>
	void SetEdgesCreaseSharpness(struct TArray<Unknown>& EdgeIDs, struct TArray<Unknown>& EdgesNewCreaseSharpness); // Function EditableMesh.EditableMesh.SetEdgesCreaseSharpness(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1770820>
	void SetEdgesAttributes(struct TArray<Unknown>& AttributesForEdges); // Function EditableMesh.EditableMesh.SetEdgesAttributes(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1770750>
	void SetAllowUndo(char bInAllowUndo); // Function EditableMesh.EditableMesh.SetAllowUndo(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x17706D0>
	void SetAllowSpatialDatabase(char bInAllowSpatialDatabase); // Function EditableMesh.EditableMesh.SetAllowSpatialDatabase(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1770640>
	void SetAllowCompact(char bInAllowCompact); // Function EditableMesh.EditableMesh.SetAllowCompact(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x17705C0>
	void SearchSpatialDatabaseForPolygonsPotentiallyIntersectingPlane(struct Unknown& InPlane, struct TArray<Unknown>& OutPolygons); // Function EditableMesh.EditableMesh.SearchSpatialDatabaseForPolygonsPotentiallyIntersectingPlane(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x17704C0>
	void SearchSpatialDatabaseForPolygonsPotentiallyIntersectingLineSegment(struct Unknown LineSegmentStart, struct Unknown LineSegmentEnd, struct TArray<Unknown>& OutPolygons); // Function EditableMesh.EditableMesh.SearchSpatialDatabaseForPolygonsPotentiallyIntersectingLineSegment(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1770370>
	void SearchSpatialDatabaseForPolygonsInVolum(struct TArray<Unknown>& Planes, struct TArray<Unknown>& OutPolygons); // Function EditableMesh.EditableMesh.SearchSpatialDatabaseForPolygonsInVolum(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1770250>
	struct Unknown RevertInstance(); // Function EditableMesh.EditableMesh.RevertInstance(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1770220>
	void Revert(); // Function EditableMesh.EditableMesh.Revert(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x151C360>
	void RebuildRenderMesh(); // Function EditableMesh.EditableMesh.RebuildRenderMesh(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1770200>
	void QuadrangulateMesh(struct TArray<Unknown>& OutNewPolygonIDs); // Function EditableMesh.EditableMesh.QuadrangulateMesh(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1770150>
	void PropagateInstanceChanges(); // Function EditableMesh.EditableMesh.PropagateInstanceChanges(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x151C360>
	void MoveVertices(struct TArray<Unknown>& VerticesToMove); // Function EditableMesh.EditableMesh.MoveVertices(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x17700A0>
	struct Unknown MakeVertexID(int32_t VertexIndex); // Function EditableMesh.EditableMesh.MakeVertexID(Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1770020>
	struct Unknown MakePolygonID(int32_t PolygonIndex); // Function EditableMesh.EditableMesh.MakePolygonID(Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1770020>
	struct Unknown MakePolygonGroupID(int32_t PolygonGroupIndex); // Function EditableMesh.EditableMesh.MakePolygonGroupID(Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1770020>
	struct Unknown MakeEdgeID(int32_t EdgeIndex); // Function EditableMesh.EditableMesh.MakeEdgeID(Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1770020>
	char IsValidVertex(struct Unknown VertexID); // Function EditableMesh.EditableMesh.IsValidVertex(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176FF90>
	char IsValidPolygonGroup(struct Unknown PolygonGroupID); // Function EditableMesh.EditableMesh.IsValidPolygonGroup(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176FF00>
	char IsValidPolygon(struct Unknown PolygonID); // Function EditableMesh.EditableMesh.IsValidPolygon(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176FE70>
	char IsValidEdge(struct Unknown EdgeID); // Function EditableMesh.EditableMesh.IsValidEdge(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176FDE0>
	char IsUndoAllowed(); // Function EditableMesh.EditableMesh.IsUndoAllowed(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176FDC0>
	char IsSpatialDatabaseAllowed(); // Function EditableMesh.EditableMesh.IsSpatialDatabaseAllowed(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176FDA0>
	char IsPreviewingSubdivisions(); // Function EditableMesh.EditableMesh.IsPreviewingSubdivisions(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176FD70>
	char IsOrphanedVertex(struct Unknown VertexID); // Function EditableMesh.EditableMesh.IsOrphanedVertex(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176FCE0>
	char IsCompactAllowed(); // Function EditableMesh.EditableMesh.IsCompactAllowed(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176FCC0>
	char IsCommittedAsInstance(); // Function EditableMesh.EditableMesh.IsCommittedAsInstance(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176FC90>
	char IsCommitted(); // Function EditableMesh.EditableMesh.IsCommitted(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176FC60>
	char IsBeingModified(); // Function EditableMesh.EditableMesh.IsBeingModified(Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176FC30>
	struct Unknown InvalidVertexID(); // Function EditableMesh.EditableMesh.InvalidVertexID(Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176FC10>
	struct Unknown InvalidPolygonID(); // Function EditableMesh.EditableMesh.InvalidPolygonID(Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176FBF0>
	struct Unknown InvalidPolygonGroupID(); // Function EditableMesh.EditableMesh.InvalidPolygonGroupID(Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176FBD0>
	struct Unknown InvalidEdgeID(); // Function EditableMesh.EditableMesh.InvalidEdgeID(Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176FBB0>
	void InsetPolygons(struct TArray<Unknown>& PolygonIDs, float InsetFixedDistance, float InsetProgressTowardCenter, enum class Unknow Mode, struct TArray<Unknown>& OutNewCenterPolygonIDs, struct TArray<Unknown>& OutNewSidePolygonIDs); // Function EditableMesh.EditableMesh.InsetPolygons(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176F970>
	void InsertEdgeLoop(struct Unknown EdgeID, struct TArray<Unknown>& Splits, struct TArray<Unknown>& OutNewEdgeIDs); // Function EditableMesh.EditableMesh.InsertEdgeLoop(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176F810>
	void InitializeAdapters(); // Function EditableMesh.EditableMesh.InitializeAdapters(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176F7F0>
	struct Unknown GetVertexPairEdge(struct Unknown VertexID, struct Unknown NextVertexID, char& bOutEdgeWindingIsReversed); // Function EditableMesh.EditableMesh.GetVertexPairEdge(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176F6C0>
	struct Unknown GetVertexInstanceVertex(struct Unknown VertexInstanceID); // Function EditableMesh.EditableMesh.GetVertexInstanceVertex(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176F620>
	int32_t GetVertexInstanceCount(); // Function EditableMesh.EditableMesh.GetVertexInstanceCount(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176F5F0>
	void GetVertexInstanceConnectedPolygons(struct Unknown VertexInstanceID, struct TArray<Unknown>& OutConnectedPolygonIDs); // Function EditableMesh.EditableMesh.GetVertexInstanceConnectedPolygons(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176F500>
	int32_t GetVertexInstanceConnectedPolygonCount(struct Unknown VertexInstanceID); // Function EditableMesh.EditableMesh.GetVertexInstanceConnectedPolygonCount(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176F470>
	struct Unknown GetVertexInstanceConnectedPolygon(struct Unknown VertexInstanceID, int32_t ConnectedPolygonNumber); // Function EditableMesh.EditableMesh.GetVertexInstanceConnectedPolygon(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176F3A0>
	int32_t GetVertexCount(); // Function EditableMesh.EditableMesh.GetVertexCount(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176F370>
	void GetVertexConnectedPolygons(struct Unknown VertexID, struct TArray<Unknown>& OutConnectedPolygonIDs); // Function EditableMesh.EditableMesh.GetVertexConnectedPolygons(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176F280>
	void GetVertexConnectedEdges(struct Unknown VertexID, struct TArray<Unknown>& OutConnectedEdgeIDs); // Function EditableMesh.EditableMesh.GetVertexConnectedEdges(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176F190>
	int32_t GetVertexConnectedEdgeCount(struct Unknown VertexID); // Function EditableMesh.EditableMesh.GetVertexConnectedEdgeCount(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176F100>
	struct Unknown GetVertexConnectedEdge(struct Unknown VertexID, int32_t ConnectedEdgeNumber); // Function EditableMesh.EditableMesh.GetVertexConnectedEdge(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176F030>
	void GetVertexAdjacentVertices(struct Unknown VertexID, struct TArray<Unknown>& OutAdjacentVertexIDs); // Function EditableMesh.EditableMesh.GetVertexAdjacentVertices(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176EF40>
	int32_t GetTextureCoordinateCount(); // Function EditableMesh.EditableMesh.GetTextureCoordinateCount(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176EF10>
	struct Unknown GetSubdivisionLimitData(); // Function EditableMesh.EditableMesh.GetSubdivisionLimitData(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176EED0>
	int32_t GetSubdivisionCount(); // Function EditableMesh.EditableMesh.GetSubdivisionCount(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176EEA0>
	int32_t GetPolygonTriangulatedTriangleCount(struct Unknown PolygonID); // Function EditableMesh.EditableMesh.GetPolygonTriangulatedTriangleCount(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176EE10>
	struct Unknown GetPolygonTriangulatedTriangle(struct Unknown PolygonID, int32_t PolygonTriangleNumber); // Function EditableMesh.EditableMesh.GetPolygonTriangulatedTriangle(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176ED40>
	void GetPolygonPerimeterVertices(struct Unknown PolygonID, struct TArray<Unknown>& OutPolygonPerimeterVertexIDs); // Function EditableMesh.EditableMesh.GetPolygonPerimeterVertices(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176EC50>
	void GetPolygonPerimeterVertexInstances(struct Unknown PolygonID, struct TArray<Unknown>& OutPolygonPerimeterVertexInstanceIDs); // Function EditableMesh.EditableMesh.GetPolygonPerimeterVertexInstances(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176EB60>
	struct Unknown GetPolygonPerimeterVertexInstance(struct Unknown PolygonID, int32_t PolygonVertexNumber); // Function EditableMesh.EditableMesh.GetPolygonPerimeterVertexInstance(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176EA90>
	int32_t GetPolygonPerimeterVertexCount(struct Unknown PolygonID); // Function EditableMesh.EditableMesh.GetPolygonPerimeterVertexCount(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176E840>
	struct Unknown GetPolygonPerimeterVertex(struct Unknown PolygonID, int32_t PolygonVertexNumber); // Function EditableMesh.EditableMesh.GetPolygonPerimeterVertex(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176E9C0>
	void GetPolygonPerimeterEdges(struct Unknown PolygonID, struct TArray<Unknown>& OutPolygonPerimeterEdgeIDs); // Function EditableMesh.EditableMesh.GetPolygonPerimeterEdges(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176E8D0>
	int32_t GetPolygonPerimeterEdgeCount(struct Unknown PolygonID); // Function EditableMesh.EditableMesh.GetPolygonPerimeterEdgeCount(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176E840>
	struct Unknown GetPolygonPerimeterEdge(struct Unknown PolygonID, int32_t PerimeterEdgeNumber, char& bOutEdgeWindingIsReversedForPolygon); // Function EditableMesh.EditableMesh.GetPolygonPerimeterEdge(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176E720>
	struct Unknown GetPolygonInGroup(struct Unknown PolygonGroupID, int32_t PolygonNumber); // Function EditableMesh.EditableMesh.GetPolygonInGroup(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176E650>
	int32_t GetPolygonGroupCount(); // Function EditableMesh.EditableMesh.GetPolygonGroupCount(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176E620>
	int32_t GetPolygonCountInGroup(struct Unknown PolygonGroupID); // Function EditableMesh.EditableMesh.GetPolygonCountInGroup(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176E590>
	int32_t GetPolygonCount(); // Function EditableMesh.EditableMesh.GetPolygonCount(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176E560>
	void GetPolygonAdjacentPolygons(struct Unknown PolygonID, struct TArray<Unknown>& OutAdjacentPolygons); // Function EditableMesh.EditableMesh.GetPolygonAdjacentPolygons(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176E470>
	struct Unknown GetGroupForPolygon(struct Unknown PolygonID); // Function EditableMesh.EditableMesh.GetGroupForPolygon(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176E3D0>
	struct Unknown GetFirstValidPolygonGroup(); // Function EditableMesh.EditableMesh.GetFirstValidPolygonGroup(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176E390>
	void GetEdgeVertices(struct Unknown EdgeID, struct Unknown& OutEdgeVertexID0, struct Unknown& OutEdgeVertexID1); // Function EditableMesh.EditableMesh.GetEdgeVertices(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176E260>
	struct Unknown GetEdgeVertex(struct Unknown EdgeID, int32_t EdgeVertexNumber); // Function EditableMesh.EditableMesh.GetEdgeVertex(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176E190>
	struct Unknown GetEdgeThatConnectsVertices(struct Unknown VertexID0, struct Unknown VertexID1); // Function EditableMesh.EditableMesh.GetEdgeThatConnectsVertices(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176E0C0>
	void GetEdgeLoopElements(struct Unknown EdgeID, struct TArray<Unknown>& EdgeLoopIDs); // Function EditableMesh.EditableMesh.GetEdgeLoopElements(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176DFD0>
	int32_t GetEdgeCount(); // Function EditableMesh.EditableMesh.GetEdgeCount(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176DFA0>
	void GetEdgeConnectedPolygons(struct Unknown EdgeID, struct TArray<Unknown>& OutConnectedPolygonIDs); // Function EditableMesh.EditableMesh.GetEdgeConnectedPolygons(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176DEB0>
	int32_t GetEdgeConnectedPolygonCount(struct Unknown EdgeID); // Function EditableMesh.EditableMesh.GetEdgeConnectedPolygonCount(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176DE20>
	struct Unknown GetEdgeConnectedPolygon(struct Unknown EdgeID, int32_t ConnectedPolygonNumber); // Function EditableMesh.EditableMesh.GetEdgeConnectedPolygon(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176DD50>
	void GeneratePolygonTangentsAndNormals(struct TArray<Unknown>& PolygonIDs); // Function EditableMesh.EditableMesh.GeneratePolygonTangentsAndNormals(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176DCA0>
	void FlipPolygons(struct TArray<Unknown>& PolygonIDs); // Function EditableMesh.EditableMesh.FlipPolygons(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176DBF0>
	int32_t FindPolygonPerimeterVertexNumberForVertex(struct Unknown PolygonID, struct Unknown VertexID); // Function EditableMesh.EditableMesh.FindPolygonPerimeterVertexNumberForVertex(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176DB20>
	int32_t FindPolygonPerimeterEdgeNumberForVertices(struct Unknown PolygonID, struct Unknown EdgeVertexID0, struct Unknown EdgeVertexID1); // Function EditableMesh.EditableMesh.FindPolygonPerimeterEdgeNumberForVertices(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176DA10>
	void FindPolygonLoop(struct Unknown EdgeID, struct TArray<Unknown>& OutEdgeLoopEdgeIDs, struct TArray<Unknown>& OutFlippedEdgeIDs, struct TArray<Unknown>& OutReversedEdgeIDPathToTak, struct TArray<Unknown>& OutPolygonIDsToSplit); // Function EditableMesh.EditableMesh.FindPolygonLoop(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176D7F0>
	void ExtrudePolygons(struct TArray<Unknown>& Polygons, float ExtrudeDistance, char bKeepNeighborsTogether, struct TArray<Unknown>& OutNewExtrudedFrontPolygons); // Function EditableMesh.EditableMesh.ExtrudePolygons(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176D630>
	void ExtendVertices(struct TArray<Unknown>& VertexIDs, char bOnlyExtendClosestEdge, struct Unknown ReferencePosition, struct TArray<Unknown>& OutNewExtendedVertexIDs); // Function EditableMesh.EditableMesh.ExtendVertices(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176D480>
	void ExtendEdges(struct TArray<Unknown>& EdgeIDs, char bWeldNeighbors, struct TArray<Unknown>& OutNewExtendedEdgeIDs); // Function EditableMesh.EditableMesh.ExtendEdges(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176D320>
	void EndModification(char bFromUndo); // Function EditableMesh.EditableMesh.EndModification(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176D290>
	void DeleteVertexInstances(struct TArray<Unknown>& VertexInstanceIDsToDelete, char bDeleteOrphanedVertices); // Function EditableMesh.EditableMesh.DeleteVertexInstances(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176D190>
	void DeleteVertexAndConnectedEdgesAndPolygons(struct Unknown VertexID, char bDeleteOrphanedEdges, char bDeleteOrphanedVertices, char bDeleteOrphanedVertexInstances, char bDeleteEmptyPolygonGroups); // Function EditableMesh.EditableMesh.DeleteVertexAndConnectedEdgesAndPolygons(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176CFE0>
	void DeletePolygons(struct TArray<Unknown>& PolygonIDsToDelete, char bDeleteOrphanedEdges, char bDeleteOrphanedVertices, char bDeleteOrphanedVertexInstances, char bDeleteEmptyPolygonGroups); // Function EditableMesh.EditableMesh.DeletePolygons(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176CDF0>
	void DeletePolygonGroups(struct TArray<Unknown>& PolygonGroupIDs); // Function EditableMesh.EditableMesh.DeletePolygonGroups(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176CD40>
	void DeleteOrphanVertices(struct TArray<Unknown>& VertexIDsToDelete); // Function EditableMesh.EditableMesh.DeleteOrphanVertices(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176CC90>
	void DeleteEdges(struct TArray<Unknown>& EdgeIDsToDelete, char bDeleteOrphanedVertices); // Function EditableMesh.EditableMesh.DeleteEdges(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176CB90>
	void DeleteEdgeAndConnectedPolygons(struct Unknown EdgeID, char bDeleteOrphanedEdges, char bDeleteOrphanedVertices, char bDeleteOrphanedVertexInstances, char bDeleteEmptyPolygonGroups); // Function EditableMesh.EditableMesh.DeleteEdgeAndConnectedPolygons(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176C9E0>
	void CreateVertices(struct TArray<Unknown>& VerticesToCreate, struct TArray<Unknown>& OutNewVertexIDs); // Function EditableMesh.EditableMesh.CreateVertices(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176C8A0>
	void CreateVertexInstances(struct TArray<Unknown>& VertexInstancesToCreate, struct TArray<Unknown>& OutNewVertexInstanceIDs); // Function EditableMesh.EditableMesh.CreateVertexInstances(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176C760>
	void CreatePolygons(struct TArray<Unknown>& PolygonsToCreate, struct TArray<Unknown>& OutNewPolygonIDs, struct TArray<Unknown>& OutNewEdgeIDs); // Function EditableMesh.EditableMesh.CreatePolygons(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176C580>
	void CreatePolygonGroups(struct TArray<Unknown>& PolygonGroupsToCreate, struct TArray<Unknown>& OutNewPolygonGroupIDs); // Function EditableMesh.EditableMesh.CreatePolygonGroups(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176C440>
	void CreateMissingPolygonPerimeterEdges(struct Unknown PolygonID, struct TArray<Unknown>& OutNewEdgeIDs); // Function EditableMesh.EditableMesh.CreateMissingPolygonPerimeterEdges(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176C350>
	void CreateEmptyVertexRange(int32_t NumVerticesToCreate, struct TArray<Unknown>& OutNewVertexIDs); // Function EditableMesh.EditableMesh.CreateEmptyVertexRange(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176C260>
	void CreateEdges(struct TArray<Unknown>& EdgesToCreate, struct TArray<Unknown>& OutNewEdgeIDs); // Function EditableMesh.EditableMesh.CreateEdges(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176C120>
	void ComputePolygonsSharedEdges(struct TArray<Unknown>& PolygonIDs, struct TArray<Unknown>& OutSharedEdgeIDs); // Function EditableMesh.EditableMesh.ComputePolygonsSharedEdges(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176C000>
	struct Unknown ComputePolygonPlane(struct Unknown PolygonID); // Function EditableMesh.EditableMesh.ComputePolygonPlane(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176BF60>
	struct Unknown ComputePolygonNormal(struct Unknown PolygonID); // Function EditableMesh.EditableMesh.ComputePolygonNormal(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176BEC0>
	struct Unknown ComputePolygonCenter(struct Unknown PolygonID); // Function EditableMesh.EditableMesh.ComputePolygonCenter(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176BE20>
	struct Unknown ComputeBoundingBoxAndSphere(); // Function EditableMesh.EditableMesh.ComputeBoundingBoxAndSphere(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176BDD0>
	struct Unknown ComputeBoundingBox(); // Function EditableMesh.EditableMesh.ComputeBoundingBox(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176BD80>
	struct Unknown CommitInstance(struct Unknown ComponentToInstanceTo); // Function EditableMesh.EditableMesh.CommitInstance(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176BCF0>
	void Commit(); // Function EditableMesh.EditableMesh.Commit(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176BCD0>
	void ChangePolygonsVertexInstances(struct TArray<Unknown>& VertexInstancesForPolygons); // Function EditableMesh.EditableMesh.ChangePolygonsVertexInstances(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176BBB0>
	void BevelPolygons(struct TArray<Unknown>& PolygonIDs, float BevelFixedDistance, float BevelProgressTowardCenter, struct TArray<Unknown>& OutNewCenterPolygonIDs, struct TArray<Unknown>& OutNewSidePolygonIDs); // Function EditableMesh.EditableMesh.BevelPolygons(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176B9C0>
	void AssignPolygonsToPolygonGroups(struct TArray<Unknown>& PolygonGroupForPolygons, char bDeleteOrphanedPolygonGroups); // Function EditableMesh.EditableMesh.AssignPolygonsToPolygonGroups(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176B8C0>
	char AnyChangesToUndo(); // Function EditableMesh.EditableMesh.AnyChangesToUndo(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176B890>
};

// Class EditableMesh.EditableStaticMeshAdapter
class UEditableStaticMeshAdapter : public UEditableMeshAdapter {

public:

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

