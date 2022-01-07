// Enum EditableMesh.ETriangleTessellationMode
enum class ETriangleTessellationMode : uint8_t {
	ThreeTriangles = 0,
	FourTriangles = 1,
	ETriangleTessellationMode_MAX = 2,
};

// Enum EditableMesh.EInsetPolygonsMode
enum class EInsetPolygonsMode : uint8_t {
	All = 0,
	CenterPolygonOnly = 1,
	SidePolygonsOnly = 2,
	EInsetPolygonsMode_MAX = 3,
};

// Enum EditableMesh.EPolygonEdgeHardness
enum class EPolygonEdgeHardness : uint8_t {
	NewEdgesSoft = 0,
	NewEdgesHard = 1,
	AllEdgesSoft = 2,
	AllEdgesHard = 3,
	EPolygonEdgeHardness_MAX = 4,
};

// Enum EditableMesh.EMeshElementAttributeType
enum class EMeshElementAttributeType : uint8_t {
	None = 0,
	FVector4 = 1,
	FVector = 2,
	FVector2D = 3,
	Float = 4,
	Int = 5,
	Bool = 6,
	FName = 7,
	EMeshElementAttributeType_MAX = 8,
};

// Enum EditableMesh.EMeshTopologyChange
enum class EMeshTopologyChange : uint8_t {
	NoTopologyChange = 0,
	TopologyChange = 1,
	EMeshTopologyChange_MAX = 2,
};

// Enum EditableMesh.EMeshModificationType
enum class EMeshModificationType : uint8_t {
	FirstInterim = 0,
	Interim = 1,
	Final = 2,
	EMeshModificationType_MAX = 3,
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

	void WeldVertices(struct TArray<Unknown>& VertexIDs, struct Unknown& OutNewVertexID); // Function EditableMesh.EditableMesh.WeldVertices(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1786540>
	void TryToRemoveVertex(struct Unknown VertexID, char& bOutWasVertexRemoved, struct Unknown& OutNewEdgeID); // Function EditableMesh.EditableMesh.TryToRemoveVertex(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1786410>
	void TryToRemovePolygonEdge(struct Unknown EdgeID, char& bOutWasEdgeRemoved, struct Unknown& OutNewPolygonID); // Function EditableMesh.EditableMesh.TryToRemovePolygonEdge(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x17862E0>
	void TriangulatePolygons(struct TArray<Unknown>& PolygonIDs, struct TArray<Unknown>& OutNewTrianglePolygons); // Function EditableMesh.EditableMesh.TriangulatePolygons(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x17861C0>
	void TessellatePolygons(struct TArray<Unknown>& PolygonIDs, enum class Unknow TriangleTessellationMode, struct TArray<Unknown>& OutNewPolygonIDs); // Function EditableMesh.EditableMesh.TessellatePolygons(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1786060>
	void StartModification(enum class Unknow MeshModificationType, enum class Unknow MeshTopologyChange); // Function EditableMesh.EditableMesh.StartModification(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1785FA0>
	void SplitPolygons(struct TArray<Unknown>& PolygonsToSplit, struct TArray<Unknown>& OutNewEdgeIDs); // Function EditableMesh.EditableMesh.SplitPolygons(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1785E60>
	void SplitPolygonalMesh(struct Unknown& InPlane, struct TArray<Unknown>& PolygonIDs1, struct TArray<Unknown>& PolygonIDs2, struct TArray<Unknown>& BoundaryIDs); // Function EditableMesh.EditableMesh.SplitPolygonalMesh(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1785C90>
	void SplitEdge(struct Unknown EdgeID, struct TArray<Unknown>& Splits, struct TArray<Unknown>& OutNewVertexIDs); // Function EditableMesh.EditableMesh.SplitEdge(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1785B30>
	void SetVerticesCornerSharpness(struct TArray<Unknown>& VertexIDs, struct TArray<Unknown>& VerticesNewCornerSharpness); // Function EditableMesh.EditableMesh.SetVerticesCornerSharpness(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1785A10>
	void SetVerticesAttributes(struct TArray<Unknown>& AttributesForVertices); // Function EditableMesh.EditableMesh.SetVerticesAttributes(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1785940>
	void SetVertexInstancesAttributes(struct TArray<Unknown>& AttributesForVertexInstances); // Function EditableMesh.EditableMesh.SetVertexInstancesAttributes(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1785870>
	void SetTextureCoordinateCount(int32_t NumTexCoords); // Function EditableMesh.EditableMesh.SetTextureCoordinateCount(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x17857F0>
	void SetSubdivisionCount(int32_t NewSubdivisionCount); // Function EditableMesh.EditableMesh.SetSubdivisionCount(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1785770>
	void SetPolygonsVertexAttributes(struct TArray<Unknown>& VertexAttributesForPolygons); // Function EditableMesh.EditableMesh.SetPolygonsVertexAttributes(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1785600>
	void SetEdgesHardnessAutomatically(struct TArray<Unknown>& EdgeIDs, float MaxDotProductForSoftEdge); // Function EditableMesh.EditableMesh.SetEdgesHardnessAutomatically(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1785500>
	void SetEdgesHardness(struct TArray<Unknown>& EdgeIDs, struct TArray<Unknown>& EdgesNewIsHard); // Function EditableMesh.EditableMesh.SetEdgesHardness(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x17853E0>
	void SetEdgesCreaseSharpness(struct TArray<Unknown>& EdgeIDs, struct TArray<Unknown>& EdgesNewCreaseSharpness); // Function EditableMesh.EditableMesh.SetEdgesCreaseSharpness(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x17852C0>
	void SetEdgesAttributes(struct TArray<Unknown>& AttributesForEdges); // Function EditableMesh.EditableMesh.SetEdgesAttributes(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x17851F0>
	void SetAllowUndo(char bInAllowUndo); // Function EditableMesh.EditableMesh.SetAllowUndo(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1785170>
	void SetAllowSpatialDatabase(char bInAllowSpatialDatabase); // Function EditableMesh.EditableMesh.SetAllowSpatialDatabase(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x17850E0>
	void SetAllowCompact(char bInAllowCompact); // Function EditableMesh.EditableMesh.SetAllowCompact(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1785060>
	void SearchSpatialDatabaseForPolygonsPotentiallyIntersectingPlane(struct Unknown& InPlane, struct TArray<Unknown>& OutPolygons); // Function EditableMesh.EditableMesh.SearchSpatialDatabaseForPolygonsPotentiallyIntersectingPlane(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1784F60>
	void SearchSpatialDatabaseForPolygonsPotentiallyIntersectingLineSegment(struct Unknown LineSegmentStart, struct Unknown LineSegmentEnd, struct TArray<Unknown>& OutPolygons); // Function EditableMesh.EditableMesh.SearchSpatialDatabaseForPolygonsPotentiallyIntersectingLineSegment(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1784E10>
	void SearchSpatialDatabaseForPolygonsInVolume(struct TArray<Unknown>& Planes, struct TArray<Unknown>& OutPolygons); // Function EditableMesh.EditableMesh.SearchSpatialDatabaseForPolygonsInVolume(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1784CF0>
	struct Unknown RevertInstance(); // Function EditableMesh.EditableMesh.RevertInstance(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1784CC0>
	void Revert(); // Function EditableMesh.EditableMesh.Revert(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1530870>
	void RebuildRenderMesh(); // Function EditableMesh.EditableMesh.RebuildRenderMesh(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1784CA0>
	void QuadrangulateMesh(struct TArray<Unknown>& OutNewPolygonIDs); // Function EditableMesh.EditableMesh.QuadrangulateMesh(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1784BF0>
	void PropagateInstanceChanges(); // Function EditableMesh.EditableMesh.PropagateInstanceChanges(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1530870>
	void MoveVertices(struct TArray<Unknown>& VerticesToMove); // Function EditableMesh.EditableMesh.MoveVertices(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1784B40>
	struct Unknown MakeVertexID(int32_t VertexIndex); // Function EditableMesh.EditableMesh.MakeVertexID(Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1784AC0>
	struct Unknown MakePolygonID(int32_t PolygonIndex); // Function EditableMesh.EditableMesh.MakePolygonID(Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1784AC0>
	struct Unknown MakePolygonGroupID(int32_t PolygonGroupIndex); // Function EditableMesh.EditableMesh.MakePolygonGroupID(Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1784AC0>
	struct Unknown MakeEdgeID(int32_t EdgeIndex); // Function EditableMesh.EditableMesh.MakeEdgeID(Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1784AC0>
	char IsValidVertex(struct Unknown VertexID); // Function EditableMesh.EditableMesh.IsValidVertex(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1784A30>
	char IsValidPolygonGroup(struct Unknown PolygonGroupID); // Function EditableMesh.EditableMesh.IsValidPolygonGroup(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x17849A0>
	char IsValidPolygon(struct Unknown PolygonID); // Function EditableMesh.EditableMesh.IsValidPolygon(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1784910>
	char IsValidEdge(struct Unknown EdgeID); // Function EditableMesh.EditableMesh.IsValidEdge(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1784880>
	char IsUndoAllowed(); // Function EditableMesh.EditableMesh.IsUndoAllowed(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1784860>
	char IsSpatialDatabaseAllowed(); // Function EditableMesh.EditableMesh.IsSpatialDatabaseAllowed(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1784840>
	char IsPreviewingSubdivisions(); // Function EditableMesh.EditableMesh.IsPreviewingSubdivisions(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1784810>
	char IsOrphanedVertex(struct Unknown VertexID); // Function EditableMesh.EditableMesh.IsOrphanedVertex(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1784780>
	char IsCompactAllowed(); // Function EditableMesh.EditableMesh.IsCompactAllowed(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1784760>
	char IsCommittedAsInstance(); // Function EditableMesh.EditableMesh.IsCommittedAsInstance(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1784730>
	char IsCommitted(); // Function EditableMesh.EditableMesh.IsCommitted(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1784700>
	char IsBeingModified(); // Function EditableMesh.EditableMesh.IsBeingModified(Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x17846D0>
	struct Unknown InvalidVertexID(); // Function EditableMesh.EditableMesh.InvalidVertexID(Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x17846B0>
	struct Unknown InvalidPolygonID(); // Function EditableMesh.EditableMesh.InvalidPolygonID(Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1784690>
	struct Unknown InvalidPolygonGroupID(); // Function EditableMesh.EditableMesh.InvalidPolygonGroupID(Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1784670>
	struct Unknown InvalidEdgeID(); // Function EditableMesh.EditableMesh.InvalidEdgeID(Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1784650>
	void InsetPolygons(struct TArray<Unknown>& PolygonIDs, float InsetFixedDistance, float InsetProgressTowardCenter, enum class Unknow Mode, struct TArray<Unknown>& OutNewCenterPolygonIDs, struct TArray<Unknown>& OutNewSidePolygonIDs); // Function EditableMesh.EditableMesh.InsetPolygons(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1784410>
	void InsertEdgeLoop(struct Unknown EdgeID, struct TArray<Unknown>& Splits, struct TArray<Unknown>& OutNewEdgeIDs); // Function EditableMesh.EditableMesh.InsertEdgeLoop(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x17842B0>
	void InitializeAdapters(); // Function EditableMesh.EditableMesh.InitializeAdapters(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1784290>
	struct Unknown GetVertexPairEdge(struct Unknown VertexID, struct Unknown NextVertexID, char& bOutEdgeWindingIsReversed); // Function EditableMesh.EditableMesh.GetVertexPairEdge(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1784160>
	struct Unknown GetVertexInstanceVertex(struct Unknown VertexInstanceID); // Function EditableMesh.EditableMesh.GetVertexInstanceVertex(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x17840C0>
	int32_t GetVertexInstanceCount(); // Function EditableMesh.EditableMesh.GetVertexInstanceCount(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1784090>
	void GetVertexInstanceConnectedPolygons(struct Unknown VertexInstanceID, struct TArray<Unknown>& OutConnectedPolygonIDs); // Function EditableMesh.EditableMesh.GetVertexInstanceConnectedPolygons(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1783FA0>
	int32_t GetVertexInstanceConnectedPolygonCount(struct Unknown VertexInstanceID); // Function EditableMesh.EditableMesh.GetVertexInstanceConnectedPolygonCount(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1783F10>
	struct Unknown GetVertexInstanceConnectedPolygon(struct Unknown VertexInstanceID, int32_t ConnectedPolygonNumber); // Function EditableMesh.EditableMesh.GetVertexInstanceConnectedPolygon(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1783E40>
	int32_t GetVertexCount(); // Function EditableMesh.EditableMesh.GetVertexCount(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1783E10>
	void GetVertexConnectedPolygons(struct Unknown VertexID, struct TArray<Unknown>& OutConnectedPolygonIDs); // Function EditableMesh.EditableMesh.GetVertexConnectedPolygons(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1783D20>
	void GetVertexConnectedEdges(struct Unknown VertexID, struct TArray<Unknown>& OutConnectedEdgeIDs); // Function EditableMesh.EditableMesh.GetVertexConnectedEdges(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1783C30>
	int32_t GetVertexConnectedEdgeCount(struct Unknown VertexID); // Function EditableMesh.EditableMesh.GetVertexConnectedEdgeCount(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1783BA0>
	struct Unknown GetVertexConnectedEdge(struct Unknown VertexID, int32_t ConnectedEdgeNumber); // Function EditableMesh.EditableMesh.GetVertexConnectedEdge(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1783AD0>
	void GetVertexAdjacentVertices(struct Unknown VertexID, struct TArray<Unknown>& OutAdjacentVertexIDs); // Function EditableMesh.EditableMesh.GetVertexAdjacentVertices(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x17839E0>
	int32_t GetTextureCoordinateCount(); // Function EditableMesh.EditableMesh.GetTextureCoordinateCount(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x17839B0>
	struct Unknown GetSubdivisionLimitData(); // Function EditableMesh.EditableMesh.GetSubdivisionLimitData(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1783970>
	int32_t GetSubdivisionCount(); // Function EditableMesh.EditableMesh.GetSubdivisionCount(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1783940>
	int32_t GetPolygonTriangulatedTriangleCount(struct Unknown PolygonID); // Function EditableMesh.EditableMesh.GetPolygonTriangulatedTriangleCount(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x17838B0>
	struct Unknown GetPolygonTriangulatedTriangle(struct Unknown PolygonID, int32_t PolygonTriangleNumber); // Function EditableMesh.EditableMesh.GetPolygonTriangulatedTriangle(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x17837E0>
	void GetPolygonPerimeterVertices(struct Unknown PolygonID, struct TArray<Unknown>& OutPolygonPerimeterVertexIDs); // Function EditableMesh.EditableMesh.GetPolygonPerimeterVertices(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x17836F0>
	void GetPolygonPerimeterVertexInstances(struct Unknown PolygonID, struct TArray<Unknown>& OutPolygonPerimeterVertexInstanceIDs); // Function EditableMesh.EditableMesh.GetPolygonPerimeterVertexInstances(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1783600>
	struct Unknown GetPolygonPerimeterVertexInstance(struct Unknown PolygonID, int32_t PolygonVertexNumber); // Function EditableMesh.EditableMesh.GetPolygonPerimeterVertexInstance(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1783530>
	int32_t GetPolygonPerimeterVertexCount(struct Unknown PolygonID); // Function EditableMesh.EditableMesh.GetPolygonPerimeterVertexCount(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x17832E0>
	struct Unknown GetPolygonPerimeterVertex(struct Unknown PolygonID, int32_t PolygonVertexNumber); // Function EditableMesh.EditableMesh.GetPolygonPerimeterVertex(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1783460>
	void GetPolygonPerimeterEdges(struct Unknown PolygonID, struct TArray<Unknown>& OutPolygonPerimeterEdgeIDs); // Function EditableMesh.EditableMesh.GetPolygonPerimeterEdges(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1783370>
	int32_t GetPolygonPerimeterEdgeCount(struct Unknown PolygonID); // Function EditableMesh.EditableMesh.GetPolygonPerimeterEdgeCount(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x17832E0>
	struct Unknown GetPolygonPerimeterEdge(struct Unknown PolygonID, int32_t PerimeterEdgeNumber, char& bOutEdgeWindingIsReversedForPolygon); // Function EditableMesh.EditableMesh.GetPolygonPerimeterEdge(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x17831C0>
	struct Unknown GetPolygonInGroup(struct Unknown PolygonGroupID, int32_t PolygonNumber); // Function EditableMesh.EditableMesh.GetPolygonInGroup(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x17830F0>
	int32_t GetPolygonGroupCount(); // Function EditableMesh.EditableMesh.GetPolygonGroupCount(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x17830C0>
	int32_t GetPolygonCountInGroup(struct Unknown PolygonGroupID); // Function EditableMesh.EditableMesh.GetPolygonCountInGroup(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1783030>
	int32_t GetPolygonCount(); // Function EditableMesh.EditableMesh.GetPolygonCount(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1783000>
	void GetPolygonAdjacentPolygons(struct Unknown PolygonID, struct TArray<Unknown>& OutAdjacentPolygons); // Function EditableMesh.EditableMesh.GetPolygonAdjacentPolygons(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1782F10>
	struct Unknown GetGroupForPolygon(struct Unknown PolygonID); // Function EditableMesh.EditableMesh.GetGroupForPolygon(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1782E70>
	struct Unknown GetFirstValidPolygonGroup(); // Function EditableMesh.EditableMesh.GetFirstValidPolygonGroup(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1782E30>
	void GetEdgeVertices(struct Unknown EdgeID, struct Unknown& OutEdgeVertexID0, struct Unknown& OutEdgeVertexID1); // Function EditableMesh.EditableMesh.GetEdgeVertices(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1782D00>
	struct Unknown GetEdgeVertex(struct Unknown EdgeID, int32_t EdgeVertexNumber); // Function EditableMesh.EditableMesh.GetEdgeVertex(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1782C30>
	struct Unknown GetEdgeThatConnectsVertices(struct Unknown VertexID0, struct Unknown VertexID1); // Function EditableMesh.EditableMesh.GetEdgeThatConnectsVertices(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1782B60>
	void GetEdgeLoopElements(struct Unknown EdgeID, struct TArray<Unknown>& EdgeLoopIDs); // Function EditableMesh.EditableMesh.GetEdgeLoopElements(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1782A70>
	int32_t GetEdgeCount(); // Function EditableMesh.EditableMesh.GetEdgeCount(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1782A40>
	void GetEdgeConnectedPolygons(struct Unknown EdgeID, struct TArray<Unknown>& OutConnectedPolygonIDs); // Function EditableMesh.EditableMesh.GetEdgeConnectedPolygons(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1782950>
	int32_t GetEdgeConnectedPolygonCount(struct Unknown EdgeID); // Function EditableMesh.EditableMesh.GetEdgeConnectedPolygonCount(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x17828C0>
	struct Unknown GetEdgeConnectedPolygon(struct Unknown EdgeID, int32_t ConnectedPolygonNumber); // Function EditableMesh.EditableMesh.GetEdgeConnectedPolygon(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x17827F0>
	void GeneratePolygonTangentsAndNormals(struct TArray<Unknown>& PolygonIDs); // Function EditableMesh.EditableMesh.GeneratePolygonTangentsAndNormals(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1782740>
	void FlipPolygons(struct TArray<Unknown>& PolygonIDs); // Function EditableMesh.EditableMesh.FlipPolygons(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1782690>
	int32_t FindPolygonPerimeterVertexNumberForVertex(struct Unknown PolygonID, struct Unknown VertexID); // Function EditableMesh.EditableMesh.FindPolygonPerimeterVertexNumberForVertex(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x17825C0>
	int32_t FindPolygonPerimeterEdgeNumberForVertices(struct Unknown PolygonID, struct Unknown EdgeVertexID0, struct Unknown EdgeVertexID1); // Function EditableMesh.EditableMesh.FindPolygonPerimeterEdgeNumberForVertices(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x17824B0>
	void FindPolygonLoop(struct Unknown EdgeID, struct TArray<Unknown>& OutEdgeLoopEdgeIDs, struct TArray<Unknown>& OutFlippedEdgeIDs, struct TArray<Unknown>& OutReversedEdgeIDPathToTake, struct TArray<Unknown>& OutPolygonIDsToSplit); // Function EditableMesh.EditableMesh.FindPolygonLoop(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1782290>
	void ExtrudePolygons(struct TArray<Unknown>& Polygons, float ExtrudeDistance, char bKeepNeighborsTogether, struct TArray<Unknown>& OutNewExtrudedFrontPolygons); // Function EditableMesh.EditableMesh.ExtrudePolygons(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x17820D0>
	void ExtendVertices(struct TArray<Unknown>& VertexIDs, char bOnlyExtendClosestEdge, struct Unknown ReferencePosition, struct TArray<Unknown>& OutNewExtendedVertexIDs); // Function EditableMesh.EditableMesh.ExtendVertices(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1781F20>
	void ExtendEdges(struct TArray<Unknown>& EdgeIDs, char bWeldNeighbors, struct TArray<Unknown>& OutNewExtendedEdgeIDs); // Function EditableMesh.EditableMesh.ExtendEdges(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1781DC0>
	void EndModification(char bFromUndo); // Function EditableMesh.EditableMesh.EndModification(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1781D30>
	void DeleteVertexInstances(struct TArray<Unknown>& VertexInstanceIDsToDelete, char bDeleteOrphanedVertices); // Function EditableMesh.EditableMesh.DeleteVertexInstances(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1781C30>
	void DeleteVertexAndConnectedEdgesAndPolygons(struct Unknown VertexID, char bDeleteOrphanedEdges, char bDeleteOrphanedVertices, char bDeleteOrphanedVertexInstances, char bDeleteEmptyPolygonGroups); // Function EditableMesh.EditableMesh.DeleteVertexAndConnectedEdgesAndPolygons(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1781A80>
	void DeletePolygons(struct TArray<Unknown>& PolygonIDsToDelete, char bDeleteOrphanedEdges, char bDeleteOrphanedVertices, char bDeleteOrphanedVertexInstances, char bDeleteEmptyPolygonGroups); // Function EditableMesh.EditableMesh.DeletePolygons(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1781890>
	void DeletePolygonGroups(struct TArray<Unknown>& PolygonGroupIDs); // Function EditableMesh.EditableMesh.DeletePolygonGroups(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x17817E0>
	void DeleteOrphanVertices(struct TArray<Unknown>& VertexIDsToDelete); // Function EditableMesh.EditableMesh.DeleteOrphanVertices(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1781730>
	void DeleteEdges(struct TArray<Unknown>& EdgeIDsToDelete, char bDeleteOrphanedVertices); // Function EditableMesh.EditableMesh.DeleteEdges(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1781630>
	void DeleteEdgeAndConnectedPolygons(struct Unknown EdgeID, char bDeleteOrphanedEdges, char bDeleteOrphanedVertices, char bDeleteOrphanedVertexInstances, char bDeleteEmptyPolygonGroups); // Function EditableMesh.EditableMesh.DeleteEdgeAndConnectedPolygons(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1781480>
	void CreateVertices(struct TArray<Unknown>& VerticesToCreate, struct TArray<Unknown>& OutNewVertexIDs); // Function EditableMesh.EditableMesh.CreateVertices(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1781340>
	void CreateVertexInstances(struct TArray<Unknown>& VertexInstancesToCreate, struct TArray<Unknown>& OutNewVertexInstanceIDs); // Function EditableMesh.EditableMesh.CreateVertexInstances(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1781200>
	void CreatePolygons(struct TArray<Unknown>& PolygonsToCreate, struct TArray<Unknown>& OutNewPolygonIDs, struct TArray<Unknown>& OutNewEdgeIDs); // Function EditableMesh.EditableMesh.CreatePolygons(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1781020>
	void CreatePolygonGroups(struct TArray<Unknown>& PolygonGroupsToCreate, struct TArray<Unknown>& OutNewPolygonGroupIDs); // Function EditableMesh.EditableMesh.CreatePolygonGroups(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1780EE0>
	void CreateMissingPolygonPerimeterEdges(struct Unknown PolygonID, struct TArray<Unknown>& OutNewEdgeIDs); // Function EditableMesh.EditableMesh.CreateMissingPolygonPerimeterEdges(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1780DF0>
	void CreateEmptyVertexRange(int32_t NumVerticesToCreate, struct TArray<Unknown>& OutNewVertexIDs); // Function EditableMesh.EditableMesh.CreateEmptyVertexRange(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1780D00>
	void CreateEdges(struct TArray<Unknown>& EdgesToCreate, struct TArray<Unknown>& OutNewEdgeIDs); // Function EditableMesh.EditableMesh.CreateEdges(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1780BC0>
	void ComputePolygonsSharedEdges(struct TArray<Unknown>& PolygonIDs, struct TArray<Unknown>& OutSharedEdgeIDs); // Function EditableMesh.EditableMesh.ComputePolygonsSharedEdges(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1780AA0>
	struct Unknown ComputePolygonPlane(struct Unknown PolygonID); // Function EditableMesh.EditableMesh.ComputePolygonPlane(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1780A00>
	struct Unknown ComputePolygonNormal(struct Unknown PolygonID); // Function EditableMesh.EditableMesh.ComputePolygonNormal(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1780960>
	struct Unknown ComputePolygonCenter(struct Unknown PolygonID); // Function EditableMesh.EditableMesh.ComputePolygonCenter(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x17808C0>
	struct Unknown ComputeBoundingBoxAndSphere(); // Function EditableMesh.EditableMesh.ComputeBoundingBoxAndSphere(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1780870>
	struct Unknown ComputeBoundingBox(); // Function EditableMesh.EditableMesh.ComputeBoundingBox(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1780820>
	struct Unknown CommitInstance(struct Unknown ComponentToInstanceTo); // Function EditableMesh.EditableMesh.CommitInstance(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1780790>
	void Commit(); // Function EditableMesh.EditableMesh.Commit(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1780770>
	void ChangePolygonsVertexInstances(struct TArray<Unknown>& VertexInstancesForPolygons); // Function EditableMesh.EditableMesh.ChangePolygonsVertexInstances(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1780650>
	void BevelPolygons(struct TArray<Unknown>& PolygonIDs, float BevelFixedDistance, float BevelProgressTowardCenter, struct TArray<Unknown>& OutNewCenterPolygonIDs, struct TArray<Unknown>& OutNewSidePolygonIDs); // Function EditableMesh.EditableMesh.BevelPolygons(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1780460>
	void AssignPolygonsToPolygonGroups(struct TArray<Unknown>& PolygonGroupForPolygons, char bDeleteOrphanedPolygonGroups); // Function EditableMesh.EditableMesh.AssignPolygonsToPolygonGroups(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1780360>
	char AnyChangesToUndo(); // Function EditableMesh.EditableMesh.AnyChangesToUndo(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1780330>
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

// Function EditableMesh.EditableMesh.WeldVertices
inline void UEditableMesh::WeldVertices(struct TArray<Unknown>& VertexIDs, struct Unknown& OutNewVertexID) {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.WeldVertices");

	struct WeldVertices_Params {
		struct TArray<Unknown>& VertexIDs;
		struct Unknown& OutNewVertexID;
	}; WeldVertices_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	VertexIDs = Params.VertexIDs;
	OutNewVertexID = Params.OutNewVertexID;

}

// Function EditableMesh.EditableMesh.TryToRemoveVertex
inline void UEditableMesh::TryToRemoveVertex(struct Unknown VertexID, char& bOutWasVertexRemoved, struct Unknown& OutNewEdgeID) {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.TryToRemoveVertex");

	struct TryToRemoveVertex_Params {
		struct Unknown VertexID;
		char& bOutWasVertexRemoved;
		struct Unknown& OutNewEdgeID;
	}; TryToRemoveVertex_Params Params;

	Params.VertexID = VertexID;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	bOutWasVertexRemoved = Params.bOutWasVertexRemoved;
	OutNewEdgeID = Params.OutNewEdgeID;

}

// Function EditableMesh.EditableMesh.TryToRemovePolygonEdge
inline void UEditableMesh::TryToRemovePolygonEdge(struct Unknown EdgeID, char& bOutWasEdgeRemoved, struct Unknown& OutNewPolygonID) {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.TryToRemovePolygonEdge");

	struct TryToRemovePolygonEdge_Params {
		struct Unknown EdgeID;
		char& bOutWasEdgeRemoved;
		struct Unknown& OutNewPolygonID;
	}; TryToRemovePolygonEdge_Params Params;

	Params.EdgeID = EdgeID;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	bOutWasEdgeRemoved = Params.bOutWasEdgeRemoved;
	OutNewPolygonID = Params.OutNewPolygonID;

}

// Function EditableMesh.EditableMesh.TriangulatePolygons
inline void UEditableMesh::TriangulatePolygons(struct TArray<Unknown>& PolygonIDs, struct TArray<Unknown>& OutNewTrianglePolygons) {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.TriangulatePolygons");

	struct TriangulatePolygons_Params {
		struct TArray<Unknown>& PolygonIDs;
		struct TArray<Unknown>& OutNewTrianglePolygons;
	}; TriangulatePolygons_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	PolygonIDs = Params.PolygonIDs;
	OutNewTrianglePolygons = Params.OutNewTrianglePolygons;

}

// Function EditableMesh.EditableMesh.TessellatePolygons
inline void UEditableMesh::TessellatePolygons(struct TArray<Unknown>& PolygonIDs, enum class Unknow TriangleTessellationMode, struct TArray<Unknown>& OutNewPolygonIDs) {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.TessellatePolygons");

	struct TessellatePolygons_Params {
		struct TArray<Unknown>& PolygonIDs;
		enum class Unknow TriangleTessellationMode;
		struct TArray<Unknown>& OutNewPolygonIDs;
	}; TessellatePolygons_Params Params;

	Params.TriangleTessellationMode = TriangleTessellationMode;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	PolygonIDs = Params.PolygonIDs;
	OutNewPolygonIDs = Params.OutNewPolygonIDs;

}

// Function EditableMesh.EditableMesh.StartModification
inline void UEditableMesh::StartModification(enum class Unknow MeshModificationType, enum class Unknow MeshTopologyChange) {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.StartModification");

	struct StartModification_Params {
		enum class Unknow MeshModificationType;
		enum class Unknow MeshTopologyChange;
	}; StartModification_Params Params;

	Params.MeshModificationType = MeshModificationType;
	Params.MeshTopologyChange = MeshTopologyChange;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function EditableMesh.EditableMesh.SplitPolygons
inline void UEditableMesh::SplitPolygons(struct TArray<Unknown>& PolygonsToSplit, struct TArray<Unknown>& OutNewEdgeIDs) {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.SplitPolygons");

	struct SplitPolygons_Params {
		struct TArray<Unknown>& PolygonsToSplit;
		struct TArray<Unknown>& OutNewEdgeIDs;
	}; SplitPolygons_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	PolygonsToSplit = Params.PolygonsToSplit;
	OutNewEdgeIDs = Params.OutNewEdgeIDs;

}

// Function EditableMesh.EditableMesh.SplitPolygonalMesh
inline void UEditableMesh::SplitPolygonalMesh(struct Unknown& InPlane, struct TArray<Unknown>& PolygonIDs1, struct TArray<Unknown>& PolygonIDs2, struct TArray<Unknown>& BoundaryIDs) {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.SplitPolygonalMesh");

	struct SplitPolygonalMesh_Params {
		struct Unknown& InPlane;
		struct TArray<Unknown>& PolygonIDs1;
		struct TArray<Unknown>& PolygonIDs2;
		struct TArray<Unknown>& BoundaryIDs;
	}; SplitPolygonalMesh_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	InPlane = Params.InPlane;
	PolygonIDs1 = Params.PolygonIDs1;
	PolygonIDs2 = Params.PolygonIDs2;
	BoundaryIDs = Params.BoundaryIDs;

}

// Function EditableMesh.EditableMesh.SplitEdge
inline void UEditableMesh::SplitEdge(struct Unknown EdgeID, struct TArray<Unknown>& Splits, struct TArray<Unknown>& OutNewVertexIDs) {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.SplitEdge");

	struct SplitEdge_Params {
		struct Unknown EdgeID;
		struct TArray<Unknown>& Splits;
		struct TArray<Unknown>& OutNewVertexIDs;
	}; SplitEdge_Params Params;

	Params.EdgeID = EdgeID;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Splits = Params.Splits;
	OutNewVertexIDs = Params.OutNewVertexIDs;

}

// Function EditableMesh.EditableMesh.SetVerticesCornerSharpness
inline void UEditableMesh::SetVerticesCornerSharpness(struct TArray<Unknown>& VertexIDs, struct TArray<Unknown>& VerticesNewCornerSharpness) {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.SetVerticesCornerSharpness");

	struct SetVerticesCornerSharpness_Params {
		struct TArray<Unknown>& VertexIDs;
		struct TArray<Unknown>& VerticesNewCornerSharpness;
	}; SetVerticesCornerSharpness_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	VertexIDs = Params.VertexIDs;
	VerticesNewCornerSharpness = Params.VerticesNewCornerSharpness;

}

// Function EditableMesh.EditableMesh.SetVerticesAttributes
inline void UEditableMesh::SetVerticesAttributes(struct TArray<Unknown>& AttributesForVertices) {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.SetVerticesAttributes");

	struct SetVerticesAttributes_Params {
		struct TArray<Unknown>& AttributesForVertices;
	}; SetVerticesAttributes_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	AttributesForVertices = Params.AttributesForVertices;

}

// Function EditableMesh.EditableMesh.SetVertexInstancesAttributes
inline void UEditableMesh::SetVertexInstancesAttributes(struct TArray<Unknown>& AttributesForVertexInstances) {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.SetVertexInstancesAttributes");

	struct SetVertexInstancesAttributes_Params {
		struct TArray<Unknown>& AttributesForVertexInstances;
	}; SetVertexInstancesAttributes_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	AttributesForVertexInstances = Params.AttributesForVertexInstances;

}

// Function EditableMesh.EditableMesh.SetTextureCoordinateCount
inline void UEditableMesh::SetTextureCoordinateCount(int32_t NumTexCoords) {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.SetTextureCoordinateCount");

	struct SetTextureCoordinateCount_Params {
		int32_t NumTexCoords;
	}; SetTextureCoordinateCount_Params Params;

	Params.NumTexCoords = NumTexCoords;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function EditableMesh.EditableMesh.SetSubdivisionCount
inline void UEditableMesh::SetSubdivisionCount(int32_t NewSubdivisionCount) {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.SetSubdivisionCount");

	struct SetSubdivisionCount_Params {
		int32_t NewSubdivisionCount;
	}; SetSubdivisionCount_Params Params;

	Params.NewSubdivisionCount = NewSubdivisionCount;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function EditableMesh.EditableMesh.SetPolygonsVertexAttributes
inline void UEditableMesh::SetPolygonsVertexAttributes(struct TArray<Unknown>& VertexAttributesForPolygons) {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.SetPolygonsVertexAttributes");

	struct SetPolygonsVertexAttributes_Params {
		struct TArray<Unknown>& VertexAttributesForPolygons;
	}; SetPolygonsVertexAttributes_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	VertexAttributesForPolygons = Params.VertexAttributesForPolygons;

}

// Function EditableMesh.EditableMesh.SetEdgesHardnessAutomatically
inline void UEditableMesh::SetEdgesHardnessAutomatically(struct TArray<Unknown>& EdgeIDs, float MaxDotProductForSoftEdge) {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.SetEdgesHardnessAutomatically");

	struct SetEdgesHardnessAutomatically_Params {
		struct TArray<Unknown>& EdgeIDs;
		float MaxDotProductForSoftEdge;
	}; SetEdgesHardnessAutomatically_Params Params;

	Params.MaxDotProductForSoftEdge = MaxDotProductForSoftEdge;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	EdgeIDs = Params.EdgeIDs;

}

// Function EditableMesh.EditableMesh.SetEdgesHardness
inline void UEditableMesh::SetEdgesHardness(struct TArray<Unknown>& EdgeIDs, struct TArray<Unknown>& EdgesNewIsHard) {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.SetEdgesHardness");

	struct SetEdgesHardness_Params {
		struct TArray<Unknown>& EdgeIDs;
		struct TArray<Unknown>& EdgesNewIsHard;
	}; SetEdgesHardness_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	EdgeIDs = Params.EdgeIDs;
	EdgesNewIsHard = Params.EdgesNewIsHard;

}

// Function EditableMesh.EditableMesh.SetEdgesCreaseSharpness
inline void UEditableMesh::SetEdgesCreaseSharpness(struct TArray<Unknown>& EdgeIDs, struct TArray<Unknown>& EdgesNewCreaseSharpness) {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.SetEdgesCreaseSharpness");

	struct SetEdgesCreaseSharpness_Params {
		struct TArray<Unknown>& EdgeIDs;
		struct TArray<Unknown>& EdgesNewCreaseSharpness;
	}; SetEdgesCreaseSharpness_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	EdgeIDs = Params.EdgeIDs;
	EdgesNewCreaseSharpness = Params.EdgesNewCreaseSharpness;

}

// Function EditableMesh.EditableMesh.SetEdgesAttributes
inline void UEditableMesh::SetEdgesAttributes(struct TArray<Unknown>& AttributesForEdges) {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.SetEdgesAttributes");

	struct SetEdgesAttributes_Params {
		struct TArray<Unknown>& AttributesForEdges;
	}; SetEdgesAttributes_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	AttributesForEdges = Params.AttributesForEdges;

}

// Function EditableMesh.EditableMesh.SetAllowUndo
inline void UEditableMesh::SetAllowUndo(char bInAllowUndo) {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.SetAllowUndo");

	struct SetAllowUndo_Params {
		char bInAllowUndo;
	}; SetAllowUndo_Params Params;

	Params.bInAllowUndo = bInAllowUndo;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function EditableMesh.EditableMesh.SetAllowSpatialDatabase
inline void UEditableMesh::SetAllowSpatialDatabase(char bInAllowSpatialDatabase) {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.SetAllowSpatialDatabase");

	struct SetAllowSpatialDatabase_Params {
		char bInAllowSpatialDatabase;
	}; SetAllowSpatialDatabase_Params Params;

	Params.bInAllowSpatialDatabase = bInAllowSpatialDatabase;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function EditableMesh.EditableMesh.SetAllowCompact
inline void UEditableMesh::SetAllowCompact(char bInAllowCompact) {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.SetAllowCompact");

	struct SetAllowCompact_Params {
		char bInAllowCompact;
	}; SetAllowCompact_Params Params;

	Params.bInAllowCompact = bInAllowCompact;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function EditableMesh.EditableMesh.SearchSpatialDatabaseForPolygonsPotentiallyIntersectingPlane
inline void UEditableMesh::SearchSpatialDatabaseForPolygonsPotentiallyIntersectingPlane(struct Unknown& InPlane, struct TArray<Unknown>& OutPolygons) {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.SearchSpatialDatabaseForPolygonsPotentiallyIntersectingPlane");

	struct SearchSpatialDatabaseForPolygonsPotentiallyIntersectingPlane_Params {
		struct Unknown& InPlane;
		struct TArray<Unknown>& OutPolygons;
	}; SearchSpatialDatabaseForPolygonsPotentiallyIntersectingPlane_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	InPlane = Params.InPlane;
	OutPolygons = Params.OutPolygons;

}

// Function EditableMesh.EditableMesh.SearchSpatialDatabaseForPolygonsPotentiallyIntersectingLineSegment
inline void UEditableMesh::SearchSpatialDatabaseForPolygonsPotentiallyIntersectingLineSegment(struct Unknown LineSegmentStart, struct Unknown LineSegmentEnd, struct TArray<Unknown>& OutPolygons) {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.SearchSpatialDatabaseForPolygonsPotentiallyIntersectingLineSegment");

	struct SearchSpatialDatabaseForPolygonsPotentiallyIntersectingLineSegment_Params {
		struct Unknown LineSegmentStart;
		struct Unknown LineSegmentEnd;
		struct TArray<Unknown>& OutPolygons;
	}; SearchSpatialDatabaseForPolygonsPotentiallyIntersectingLineSegment_Params Params;

	Params.LineSegmentStart = LineSegmentStart;
	Params.LineSegmentEnd = LineSegmentEnd;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	OutPolygons = Params.OutPolygons;

}

// Function EditableMesh.EditableMesh.SearchSpatialDatabaseForPolygonsInVolume
inline void UEditableMesh::SearchSpatialDatabaseForPolygonsInVolume(struct TArray<Unknown>& Planes, struct TArray<Unknown>& OutPolygons) {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.SearchSpatialDatabaseForPolygonsInVolume");

	struct SearchSpatialDatabaseForPolygonsInVolume_Params {
		struct TArray<Unknown>& Planes;
		struct TArray<Unknown>& OutPolygons;
	}; SearchSpatialDatabaseForPolygonsInVolume_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Planes = Params.Planes;
	OutPolygons = Params.OutPolygons;

}

// Function EditableMesh.EditableMesh.RevertInstance
inline struct Unknown UEditableMesh::RevertInstance() {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.RevertInstance");

	struct RevertInstance_Params {
		
		struct Unknown ReturnValue;

	}; RevertInstance_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function EditableMesh.EditableMesh.Revert
inline void UEditableMesh::Revert() {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.Revert");

	struct Revert_Params {
		
	}; Revert_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function EditableMesh.EditableMesh.RebuildRenderMesh
inline void UEditableMesh::RebuildRenderMesh() {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.RebuildRenderMesh");

	struct RebuildRenderMesh_Params {
		
	}; RebuildRenderMesh_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function EditableMesh.EditableMesh.QuadrangulateMesh
inline void UEditableMesh::QuadrangulateMesh(struct TArray<Unknown>& OutNewPolygonIDs) {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.QuadrangulateMesh");

	struct QuadrangulateMesh_Params {
		struct TArray<Unknown>& OutNewPolygonIDs;
	}; QuadrangulateMesh_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	OutNewPolygonIDs = Params.OutNewPolygonIDs;

}

// Function EditableMesh.EditableMesh.PropagateInstanceChanges
inline void UEditableMesh::PropagateInstanceChanges() {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.PropagateInstanceChanges");

	struct PropagateInstanceChanges_Params {
		
	}; PropagateInstanceChanges_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function EditableMesh.EditableMesh.MoveVertices
inline void UEditableMesh::MoveVertices(struct TArray<Unknown>& VerticesToMove) {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.MoveVertices");

	struct MoveVertices_Params {
		struct TArray<Unknown>& VerticesToMove;
	}; MoveVertices_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	VerticesToMove = Params.VerticesToMove;

}

// Function EditableMesh.EditableMesh.MakeVertexID
inline struct Unknown UEditableMesh::MakeVertexID(int32_t VertexIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.MakeVertexID");

	struct MakeVertexID_Params {
		int32_t VertexIndex;
		struct Unknown ReturnValue;

	}; MakeVertexID_Params Params;

	Params.VertexIndex = VertexIndex;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function EditableMesh.EditableMesh.MakePolygonID
inline struct Unknown UEditableMesh::MakePolygonID(int32_t PolygonIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.MakePolygonID");

	struct MakePolygonID_Params {
		int32_t PolygonIndex;
		struct Unknown ReturnValue;

	}; MakePolygonID_Params Params;

	Params.PolygonIndex = PolygonIndex;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function EditableMesh.EditableMesh.MakePolygonGroupID
inline struct Unknown UEditableMesh::MakePolygonGroupID(int32_t PolygonGroupIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.MakePolygonGroupID");

	struct MakePolygonGroupID_Params {
		int32_t PolygonGroupIndex;
		struct Unknown ReturnValue;

	}; MakePolygonGroupID_Params Params;

	Params.PolygonGroupIndex = PolygonGroupIndex;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function EditableMesh.EditableMesh.MakeEdgeID
inline struct Unknown UEditableMesh::MakeEdgeID(int32_t EdgeIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.MakeEdgeID");

	struct MakeEdgeID_Params {
		int32_t EdgeIndex;
		struct Unknown ReturnValue;

	}; MakeEdgeID_Params Params;

	Params.EdgeIndex = EdgeIndex;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function EditableMesh.EditableMesh.IsValidVertex
inline char UEditableMesh::IsValidVertex(struct Unknown VertexID) {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.IsValidVertex");

	struct IsValidVertex_Params {
		struct Unknown VertexID;
		char ReturnValue;

	}; IsValidVertex_Params Params;

	Params.VertexID = VertexID;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function EditableMesh.EditableMesh.IsValidPolygonGroup
inline char UEditableMesh::IsValidPolygonGroup(struct Unknown PolygonGroupID) {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.IsValidPolygonGroup");

	struct IsValidPolygonGroup_Params {
		struct Unknown PolygonGroupID;
		char ReturnValue;

	}; IsValidPolygonGroup_Params Params;

	Params.PolygonGroupID = PolygonGroupID;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function EditableMesh.EditableMesh.IsValidPolygon
inline char UEditableMesh::IsValidPolygon(struct Unknown PolygonID) {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.IsValidPolygon");

	struct IsValidPolygon_Params {
		struct Unknown PolygonID;
		char ReturnValue;

	}; IsValidPolygon_Params Params;

	Params.PolygonID = PolygonID;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function EditableMesh.EditableMesh.IsValidEdge
inline char UEditableMesh::IsValidEdge(struct Unknown EdgeID) {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.IsValidEdge");

	struct IsValidEdge_Params {
		struct Unknown EdgeID;
		char ReturnValue;

	}; IsValidEdge_Params Params;

	Params.EdgeID = EdgeID;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function EditableMesh.EditableMesh.IsUndoAllowed
inline char UEditableMesh::IsUndoAllowed() {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.IsUndoAllowed");

	struct IsUndoAllowed_Params {
		
		char ReturnValue;

	}; IsUndoAllowed_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function EditableMesh.EditableMesh.IsSpatialDatabaseAllowed
inline char UEditableMesh::IsSpatialDatabaseAllowed() {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.IsSpatialDatabaseAllowed");

	struct IsSpatialDatabaseAllowed_Params {
		
		char ReturnValue;

	}; IsSpatialDatabaseAllowed_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function EditableMesh.EditableMesh.IsPreviewingSubdivisions
inline char UEditableMesh::IsPreviewingSubdivisions() {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.IsPreviewingSubdivisions");

	struct IsPreviewingSubdivisions_Params {
		
		char ReturnValue;

	}; IsPreviewingSubdivisions_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function EditableMesh.EditableMesh.IsOrphanedVertex
inline char UEditableMesh::IsOrphanedVertex(struct Unknown VertexID) {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.IsOrphanedVertex");

	struct IsOrphanedVertex_Params {
		struct Unknown VertexID;
		char ReturnValue;

	}; IsOrphanedVertex_Params Params;

	Params.VertexID = VertexID;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function EditableMesh.EditableMesh.IsCompactAllowed
inline char UEditableMesh::IsCompactAllowed() {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.IsCompactAllowed");

	struct IsCompactAllowed_Params {
		
		char ReturnValue;

	}; IsCompactAllowed_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function EditableMesh.EditableMesh.IsCommittedAsInstance
inline char UEditableMesh::IsCommittedAsInstance() {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.IsCommittedAsInstance");

	struct IsCommittedAsInstance_Params {
		
		char ReturnValue;

	}; IsCommittedAsInstance_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function EditableMesh.EditableMesh.IsCommitted
inline char UEditableMesh::IsCommitted() {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.IsCommitted");

	struct IsCommitted_Params {
		
		char ReturnValue;

	}; IsCommitted_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function EditableMesh.EditableMesh.IsBeingModified
inline char UEditableMesh::IsBeingModified() {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.IsBeingModified");

	struct IsBeingModified_Params {
		
		char ReturnValue;

	}; IsBeingModified_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function EditableMesh.EditableMesh.InvalidVertexID
inline struct Unknown UEditableMesh::InvalidVertexID() {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.InvalidVertexID");

	struct InvalidVertexID_Params {
		
		struct Unknown ReturnValue;

	}; InvalidVertexID_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function EditableMesh.EditableMesh.InvalidPolygonID
inline struct Unknown UEditableMesh::InvalidPolygonID() {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.InvalidPolygonID");

	struct InvalidPolygonID_Params {
		
		struct Unknown ReturnValue;

	}; InvalidPolygonID_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function EditableMesh.EditableMesh.InvalidPolygonGroupID
inline struct Unknown UEditableMesh::InvalidPolygonGroupID() {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.InvalidPolygonGroupID");

	struct InvalidPolygonGroupID_Params {
		
		struct Unknown ReturnValue;

	}; InvalidPolygonGroupID_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function EditableMesh.EditableMesh.InvalidEdgeID
inline struct Unknown UEditableMesh::InvalidEdgeID() {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.InvalidEdgeID");

	struct InvalidEdgeID_Params {
		
		struct Unknown ReturnValue;

	}; InvalidEdgeID_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function EditableMesh.EditableMesh.InsetPolygons
inline void UEditableMesh::InsetPolygons(struct TArray<Unknown>& PolygonIDs, float InsetFixedDistance, float InsetProgressTowardCenter, enum class Unknow Mode, struct TArray<Unknown>& OutNewCenterPolygonIDs, struct TArray<Unknown>& OutNewSidePolygonIDs) {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.InsetPolygons");

	struct InsetPolygons_Params {
		struct TArray<Unknown>& PolygonIDs;
		float InsetFixedDistance;
		float InsetProgressTowardCenter;
		enum class Unknow Mode;
		struct TArray<Unknown>& OutNewCenterPolygonIDs;
		struct TArray<Unknown>& OutNewSidePolygonIDs;
	}; InsetPolygons_Params Params;

	Params.InsetFixedDistance = InsetFixedDistance;
	Params.InsetProgressTowardCenter = InsetProgressTowardCenter;
	Params.Mode = Mode;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	PolygonIDs = Params.PolygonIDs;
	OutNewCenterPolygonIDs = Params.OutNewCenterPolygonIDs;
	OutNewSidePolygonIDs = Params.OutNewSidePolygonIDs;

}

// Function EditableMesh.EditableMesh.InsertEdgeLoop
inline void UEditableMesh::InsertEdgeLoop(struct Unknown EdgeID, struct TArray<Unknown>& Splits, struct TArray<Unknown>& OutNewEdgeIDs) {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.InsertEdgeLoop");

	struct InsertEdgeLoop_Params {
		struct Unknown EdgeID;
		struct TArray<Unknown>& Splits;
		struct TArray<Unknown>& OutNewEdgeIDs;
	}; InsertEdgeLoop_Params Params;

	Params.EdgeID = EdgeID;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Splits = Params.Splits;
	OutNewEdgeIDs = Params.OutNewEdgeIDs;

}

// Function EditableMesh.EditableMesh.InitializeAdapters
inline void UEditableMesh::InitializeAdapters() {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.InitializeAdapters");

	struct InitializeAdapters_Params {
		
	}; InitializeAdapters_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function EditableMesh.EditableMesh.GetVertexPairEdge
inline struct Unknown UEditableMesh::GetVertexPairEdge(struct Unknown VertexID, struct Unknown NextVertexID, char& bOutEdgeWindingIsReversed) {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetVertexPairEdge");

	struct GetVertexPairEdge_Params {
		struct Unknown VertexID;
		struct Unknown NextVertexID;
		char& bOutEdgeWindingIsReversed;
		struct Unknown ReturnValue;

	}; GetVertexPairEdge_Params Params;

	Params.VertexID = VertexID;
	Params.NextVertexID = NextVertexID;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	bOutEdgeWindingIsReversed = Params.bOutEdgeWindingIsReversed;


	return params.ReturnValue;
}

// Function EditableMesh.EditableMesh.GetVertexInstanceVertex
inline struct Unknown UEditableMesh::GetVertexInstanceVertex(struct Unknown VertexInstanceID) {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetVertexInstanceVertex");

	struct GetVertexInstanceVertex_Params {
		struct Unknown VertexInstanceID;
		struct Unknown ReturnValue;

	}; GetVertexInstanceVertex_Params Params;

	Params.VertexInstanceID = VertexInstanceID;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function EditableMesh.EditableMesh.GetVertexInstanceCount
inline int32_t UEditableMesh::GetVertexInstanceCount() {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetVertexInstanceCount");

	struct GetVertexInstanceCount_Params {
		
		int32_t ReturnValue;

	}; GetVertexInstanceCount_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function EditableMesh.EditableMesh.GetVertexInstanceConnectedPolygons
inline void UEditableMesh::GetVertexInstanceConnectedPolygons(struct Unknown VertexInstanceID, struct TArray<Unknown>& OutConnectedPolygonIDs) {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetVertexInstanceConnectedPolygons");

	struct GetVertexInstanceConnectedPolygons_Params {
		struct Unknown VertexInstanceID;
		struct TArray<Unknown>& OutConnectedPolygonIDs;
	}; GetVertexInstanceConnectedPolygons_Params Params;

	Params.VertexInstanceID = VertexInstanceID;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	OutConnectedPolygonIDs = Params.OutConnectedPolygonIDs;

}

// Function EditableMesh.EditableMesh.GetVertexInstanceConnectedPolygonCount
inline int32_t UEditableMesh::GetVertexInstanceConnectedPolygonCount(struct Unknown VertexInstanceID) {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetVertexInstanceConnectedPolygonCount");

	struct GetVertexInstanceConnectedPolygonCount_Params {
		struct Unknown VertexInstanceID;
		int32_t ReturnValue;

	}; GetVertexInstanceConnectedPolygonCount_Params Params;

	Params.VertexInstanceID = VertexInstanceID;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function EditableMesh.EditableMesh.GetVertexInstanceConnectedPolygon
inline struct Unknown UEditableMesh::GetVertexInstanceConnectedPolygon(struct Unknown VertexInstanceID, int32_t ConnectedPolygonNumber) {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetVertexInstanceConnectedPolygon");

	struct GetVertexInstanceConnectedPolygon_Params {
		struct Unknown VertexInstanceID;
		int32_t ConnectedPolygonNumber;
		struct Unknown ReturnValue;

	}; GetVertexInstanceConnectedPolygon_Params Params;

	Params.VertexInstanceID = VertexInstanceID;
	Params.ConnectedPolygonNumber = ConnectedPolygonNumber;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function EditableMesh.EditableMesh.GetVertexCount
inline int32_t UEditableMesh::GetVertexCount() {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetVertexCount");

	struct GetVertexCount_Params {
		
		int32_t ReturnValue;

	}; GetVertexCount_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function EditableMesh.EditableMesh.GetVertexConnectedPolygons
inline void UEditableMesh::GetVertexConnectedPolygons(struct Unknown VertexID, struct TArray<Unknown>& OutConnectedPolygonIDs) {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetVertexConnectedPolygons");

	struct GetVertexConnectedPolygons_Params {
		struct Unknown VertexID;
		struct TArray<Unknown>& OutConnectedPolygonIDs;
	}; GetVertexConnectedPolygons_Params Params;

	Params.VertexID = VertexID;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	OutConnectedPolygonIDs = Params.OutConnectedPolygonIDs;

}

// Function EditableMesh.EditableMesh.GetVertexConnectedEdges
inline void UEditableMesh::GetVertexConnectedEdges(struct Unknown VertexID, struct TArray<Unknown>& OutConnectedEdgeIDs) {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetVertexConnectedEdges");

	struct GetVertexConnectedEdges_Params {
		struct Unknown VertexID;
		struct TArray<Unknown>& OutConnectedEdgeIDs;
	}; GetVertexConnectedEdges_Params Params;

	Params.VertexID = VertexID;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	OutConnectedEdgeIDs = Params.OutConnectedEdgeIDs;

}

// Function EditableMesh.EditableMesh.GetVertexConnectedEdgeCount
inline int32_t UEditableMesh::GetVertexConnectedEdgeCount(struct Unknown VertexID) {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetVertexConnectedEdgeCount");

	struct GetVertexConnectedEdgeCount_Params {
		struct Unknown VertexID;
		int32_t ReturnValue;

	}; GetVertexConnectedEdgeCount_Params Params;

	Params.VertexID = VertexID;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function EditableMesh.EditableMesh.GetVertexConnectedEdge
inline struct Unknown UEditableMesh::GetVertexConnectedEdge(struct Unknown VertexID, int32_t ConnectedEdgeNumber) {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetVertexConnectedEdge");

	struct GetVertexConnectedEdge_Params {
		struct Unknown VertexID;
		int32_t ConnectedEdgeNumber;
		struct Unknown ReturnValue;

	}; GetVertexConnectedEdge_Params Params;

	Params.VertexID = VertexID;
	Params.ConnectedEdgeNumber = ConnectedEdgeNumber;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function EditableMesh.EditableMesh.GetVertexAdjacentVertices
inline void UEditableMesh::GetVertexAdjacentVertices(struct Unknown VertexID, struct TArray<Unknown>& OutAdjacentVertexIDs) {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetVertexAdjacentVertices");

	struct GetVertexAdjacentVertices_Params {
		struct Unknown VertexID;
		struct TArray<Unknown>& OutAdjacentVertexIDs;
	}; GetVertexAdjacentVertices_Params Params;

	Params.VertexID = VertexID;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	OutAdjacentVertexIDs = Params.OutAdjacentVertexIDs;

}

// Function EditableMesh.EditableMesh.GetTextureCoordinateCount
inline int32_t UEditableMesh::GetTextureCoordinateCount() {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetTextureCoordinateCount");

	struct GetTextureCoordinateCount_Params {
		
		int32_t ReturnValue;

	}; GetTextureCoordinateCount_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function EditableMesh.EditableMesh.GetSubdivisionLimitData
inline struct Unknown UEditableMesh::GetSubdivisionLimitData() {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetSubdivisionLimitData");

	struct GetSubdivisionLimitData_Params {
		
		struct Unknown ReturnValue;

	}; GetSubdivisionLimitData_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function EditableMesh.EditableMesh.GetSubdivisionCount
inline int32_t UEditableMesh::GetSubdivisionCount() {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetSubdivisionCount");

	struct GetSubdivisionCount_Params {
		
		int32_t ReturnValue;

	}; GetSubdivisionCount_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function EditableMesh.EditableMesh.GetPolygonTriangulatedTriangleCount
inline int32_t UEditableMesh::GetPolygonTriangulatedTriangleCount(struct Unknown PolygonID) {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetPolygonTriangulatedTriangleCount");

	struct GetPolygonTriangulatedTriangleCount_Params {
		struct Unknown PolygonID;
		int32_t ReturnValue;

	}; GetPolygonTriangulatedTriangleCount_Params Params;

	Params.PolygonID = PolygonID;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function EditableMesh.EditableMesh.GetPolygonTriangulatedTriangle
inline struct Unknown UEditableMesh::GetPolygonTriangulatedTriangle(struct Unknown PolygonID, int32_t PolygonTriangleNumber) {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetPolygonTriangulatedTriangle");

	struct GetPolygonTriangulatedTriangle_Params {
		struct Unknown PolygonID;
		int32_t PolygonTriangleNumber;
		struct Unknown ReturnValue;

	}; GetPolygonTriangulatedTriangle_Params Params;

	Params.PolygonID = PolygonID;
	Params.PolygonTriangleNumber = PolygonTriangleNumber;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function EditableMesh.EditableMesh.GetPolygonPerimeterVertices
inline void UEditableMesh::GetPolygonPerimeterVertices(struct Unknown PolygonID, struct TArray<Unknown>& OutPolygonPerimeterVertexIDs) {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetPolygonPerimeterVertices");

	struct GetPolygonPerimeterVertices_Params {
		struct Unknown PolygonID;
		struct TArray<Unknown>& OutPolygonPerimeterVertexIDs;
	}; GetPolygonPerimeterVertices_Params Params;

	Params.PolygonID = PolygonID;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	OutPolygonPerimeterVertexIDs = Params.OutPolygonPerimeterVertexIDs;

}

// Function EditableMesh.EditableMesh.GetPolygonPerimeterVertexInstances
inline void UEditableMesh::GetPolygonPerimeterVertexInstances(struct Unknown PolygonID, struct TArray<Unknown>& OutPolygonPerimeterVertexInstanceIDs) {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetPolygonPerimeterVertexInstances");

	struct GetPolygonPerimeterVertexInstances_Params {
		struct Unknown PolygonID;
		struct TArray<Unknown>& OutPolygonPerimeterVertexInstanceIDs;
	}; GetPolygonPerimeterVertexInstances_Params Params;

	Params.PolygonID = PolygonID;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	OutPolygonPerimeterVertexInstanceIDs = Params.OutPolygonPerimeterVertexInstanceIDs;

}

// Function EditableMesh.EditableMesh.GetPolygonPerimeterVertexInstance
inline struct Unknown UEditableMesh::GetPolygonPerimeterVertexInstance(struct Unknown PolygonID, int32_t PolygonVertexNumber) {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetPolygonPerimeterVertexInstance");

	struct GetPolygonPerimeterVertexInstance_Params {
		struct Unknown PolygonID;
		int32_t PolygonVertexNumber;
		struct Unknown ReturnValue;

	}; GetPolygonPerimeterVertexInstance_Params Params;

	Params.PolygonID = PolygonID;
	Params.PolygonVertexNumber = PolygonVertexNumber;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function EditableMesh.EditableMesh.GetPolygonPerimeterVertexCount
inline int32_t UEditableMesh::GetPolygonPerimeterVertexCount(struct Unknown PolygonID) {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetPolygonPerimeterVertexCount");

	struct GetPolygonPerimeterVertexCount_Params {
		struct Unknown PolygonID;
		int32_t ReturnValue;

	}; GetPolygonPerimeterVertexCount_Params Params;

	Params.PolygonID = PolygonID;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function EditableMesh.EditableMesh.GetPolygonPerimeterVertex
inline struct Unknown UEditableMesh::GetPolygonPerimeterVertex(struct Unknown PolygonID, int32_t PolygonVertexNumber) {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetPolygonPerimeterVertex");

	struct GetPolygonPerimeterVertex_Params {
		struct Unknown PolygonID;
		int32_t PolygonVertexNumber;
		struct Unknown ReturnValue;

	}; GetPolygonPerimeterVertex_Params Params;

	Params.PolygonID = PolygonID;
	Params.PolygonVertexNumber = PolygonVertexNumber;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function EditableMesh.EditableMesh.GetPolygonPerimeterEdges
inline void UEditableMesh::GetPolygonPerimeterEdges(struct Unknown PolygonID, struct TArray<Unknown>& OutPolygonPerimeterEdgeIDs) {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetPolygonPerimeterEdges");

	struct GetPolygonPerimeterEdges_Params {
		struct Unknown PolygonID;
		struct TArray<Unknown>& OutPolygonPerimeterEdgeIDs;
	}; GetPolygonPerimeterEdges_Params Params;

	Params.PolygonID = PolygonID;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	OutPolygonPerimeterEdgeIDs = Params.OutPolygonPerimeterEdgeIDs;

}

// Function EditableMesh.EditableMesh.GetPolygonPerimeterEdgeCount
inline int32_t UEditableMesh::GetPolygonPerimeterEdgeCount(struct Unknown PolygonID) {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetPolygonPerimeterEdgeCount");

	struct GetPolygonPerimeterEdgeCount_Params {
		struct Unknown PolygonID;
		int32_t ReturnValue;

	}; GetPolygonPerimeterEdgeCount_Params Params;

	Params.PolygonID = PolygonID;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function EditableMesh.EditableMesh.GetPolygonPerimeterEdge
inline struct Unknown UEditableMesh::GetPolygonPerimeterEdge(struct Unknown PolygonID, int32_t PerimeterEdgeNumber, char& bOutEdgeWindingIsReversedForPolygon) {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetPolygonPerimeterEdge");

	struct GetPolygonPerimeterEdge_Params {
		struct Unknown PolygonID;
		int32_t PerimeterEdgeNumber;
		char& bOutEdgeWindingIsReversedForPolygon;
		struct Unknown ReturnValue;

	}; GetPolygonPerimeterEdge_Params Params;

	Params.PolygonID = PolygonID;
	Params.PerimeterEdgeNumber = PerimeterEdgeNumber;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	bOutEdgeWindingIsReversedForPolygon = Params.bOutEdgeWindingIsReversedForPolygon;


	return params.ReturnValue;
}

// Function EditableMesh.EditableMesh.GetPolygonInGroup
inline struct Unknown UEditableMesh::GetPolygonInGroup(struct Unknown PolygonGroupID, int32_t PolygonNumber) {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetPolygonInGroup");

	struct GetPolygonInGroup_Params {
		struct Unknown PolygonGroupID;
		int32_t PolygonNumber;
		struct Unknown ReturnValue;

	}; GetPolygonInGroup_Params Params;

	Params.PolygonGroupID = PolygonGroupID;
	Params.PolygonNumber = PolygonNumber;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function EditableMesh.EditableMesh.GetPolygonGroupCount
inline int32_t UEditableMesh::GetPolygonGroupCount() {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetPolygonGroupCount");

	struct GetPolygonGroupCount_Params {
		
		int32_t ReturnValue;

	}; GetPolygonGroupCount_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function EditableMesh.EditableMesh.GetPolygonCountInGroup
inline int32_t UEditableMesh::GetPolygonCountInGroup(struct Unknown PolygonGroupID) {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetPolygonCountInGroup");

	struct GetPolygonCountInGroup_Params {
		struct Unknown PolygonGroupID;
		int32_t ReturnValue;

	}; GetPolygonCountInGroup_Params Params;

	Params.PolygonGroupID = PolygonGroupID;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function EditableMesh.EditableMesh.GetPolygonCount
inline int32_t UEditableMesh::GetPolygonCount() {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetPolygonCount");

	struct GetPolygonCount_Params {
		
		int32_t ReturnValue;

	}; GetPolygonCount_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function EditableMesh.EditableMesh.GetPolygonAdjacentPolygons
inline void UEditableMesh::GetPolygonAdjacentPolygons(struct Unknown PolygonID, struct TArray<Unknown>& OutAdjacentPolygons) {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetPolygonAdjacentPolygons");

	struct GetPolygonAdjacentPolygons_Params {
		struct Unknown PolygonID;
		struct TArray<Unknown>& OutAdjacentPolygons;
	}; GetPolygonAdjacentPolygons_Params Params;

	Params.PolygonID = PolygonID;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	OutAdjacentPolygons = Params.OutAdjacentPolygons;

}

// Function EditableMesh.EditableMesh.GetGroupForPolygon
inline struct Unknown UEditableMesh::GetGroupForPolygon(struct Unknown PolygonID) {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetGroupForPolygon");

	struct GetGroupForPolygon_Params {
		struct Unknown PolygonID;
		struct Unknown ReturnValue;

	}; GetGroupForPolygon_Params Params;

	Params.PolygonID = PolygonID;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function EditableMesh.EditableMesh.GetFirstValidPolygonGroup
inline struct Unknown UEditableMesh::GetFirstValidPolygonGroup() {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetFirstValidPolygonGroup");

	struct GetFirstValidPolygonGroup_Params {
		
		struct Unknown ReturnValue;

	}; GetFirstValidPolygonGroup_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function EditableMesh.EditableMesh.GetEdgeVertices
inline void UEditableMesh::GetEdgeVertices(struct Unknown EdgeID, struct Unknown& OutEdgeVertexID0, struct Unknown& OutEdgeVertexID1) {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetEdgeVertices");

	struct GetEdgeVertices_Params {
		struct Unknown EdgeID;
		struct Unknown& OutEdgeVertexID0;
		struct Unknown& OutEdgeVertexID1;
	}; GetEdgeVertices_Params Params;

	Params.EdgeID = EdgeID;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	OutEdgeVertexID0 = Params.OutEdgeVertexID0;
	OutEdgeVertexID1 = Params.OutEdgeVertexID1;

}

// Function EditableMesh.EditableMesh.GetEdgeVertex
inline struct Unknown UEditableMesh::GetEdgeVertex(struct Unknown EdgeID, int32_t EdgeVertexNumber) {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetEdgeVertex");

	struct GetEdgeVertex_Params {
		struct Unknown EdgeID;
		int32_t EdgeVertexNumber;
		struct Unknown ReturnValue;

	}; GetEdgeVertex_Params Params;

	Params.EdgeID = EdgeID;
	Params.EdgeVertexNumber = EdgeVertexNumber;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function EditableMesh.EditableMesh.GetEdgeThatConnectsVertices
inline struct Unknown UEditableMesh::GetEdgeThatConnectsVertices(struct Unknown VertexID0, struct Unknown VertexID1) {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetEdgeThatConnectsVertices");

	struct GetEdgeThatConnectsVertices_Params {
		struct Unknown VertexID0;
		struct Unknown VertexID1;
		struct Unknown ReturnValue;

	}; GetEdgeThatConnectsVertices_Params Params;

	Params.VertexID0 = VertexID0;
	Params.VertexID1 = VertexID1;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function EditableMesh.EditableMesh.GetEdgeLoopElements
inline void UEditableMesh::GetEdgeLoopElements(struct Unknown EdgeID, struct TArray<Unknown>& EdgeLoopIDs) {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetEdgeLoopElements");

	struct GetEdgeLoopElements_Params {
		struct Unknown EdgeID;
		struct TArray<Unknown>& EdgeLoopIDs;
	}; GetEdgeLoopElements_Params Params;

	Params.EdgeID = EdgeID;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	EdgeLoopIDs = Params.EdgeLoopIDs;

}

// Function EditableMesh.EditableMesh.GetEdgeCount
inline int32_t UEditableMesh::GetEdgeCount() {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetEdgeCount");

	struct GetEdgeCount_Params {
		
		int32_t ReturnValue;

	}; GetEdgeCount_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function EditableMesh.EditableMesh.GetEdgeConnectedPolygons
inline void UEditableMesh::GetEdgeConnectedPolygons(struct Unknown EdgeID, struct TArray<Unknown>& OutConnectedPolygonIDs) {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetEdgeConnectedPolygons");

	struct GetEdgeConnectedPolygons_Params {
		struct Unknown EdgeID;
		struct TArray<Unknown>& OutConnectedPolygonIDs;
	}; GetEdgeConnectedPolygons_Params Params;

	Params.EdgeID = EdgeID;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	OutConnectedPolygonIDs = Params.OutConnectedPolygonIDs;

}

// Function EditableMesh.EditableMesh.GetEdgeConnectedPolygonCount
inline int32_t UEditableMesh::GetEdgeConnectedPolygonCount(struct Unknown EdgeID) {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetEdgeConnectedPolygonCount");

	struct GetEdgeConnectedPolygonCount_Params {
		struct Unknown EdgeID;
		int32_t ReturnValue;

	}; GetEdgeConnectedPolygonCount_Params Params;

	Params.EdgeID = EdgeID;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function EditableMesh.EditableMesh.GetEdgeConnectedPolygon
inline struct Unknown UEditableMesh::GetEdgeConnectedPolygon(struct Unknown EdgeID, int32_t ConnectedPolygonNumber) {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetEdgeConnectedPolygon");

	struct GetEdgeConnectedPolygon_Params {
		struct Unknown EdgeID;
		int32_t ConnectedPolygonNumber;
		struct Unknown ReturnValue;

	}; GetEdgeConnectedPolygon_Params Params;

	Params.EdgeID = EdgeID;
	Params.ConnectedPolygonNumber = ConnectedPolygonNumber;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function EditableMesh.EditableMesh.GeneratePolygonTangentsAndNormals
inline void UEditableMesh::GeneratePolygonTangentsAndNormals(struct TArray<Unknown>& PolygonIDs) {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GeneratePolygonTangentsAndNormals");

	struct GeneratePolygonTangentsAndNormals_Params {
		struct TArray<Unknown>& PolygonIDs;
	}; GeneratePolygonTangentsAndNormals_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	PolygonIDs = Params.PolygonIDs;

}

// Function EditableMesh.EditableMesh.FlipPolygons
inline void UEditableMesh::FlipPolygons(struct TArray<Unknown>& PolygonIDs) {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.FlipPolygons");

	struct FlipPolygons_Params {
		struct TArray<Unknown>& PolygonIDs;
	}; FlipPolygons_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	PolygonIDs = Params.PolygonIDs;

}

// Function EditableMesh.EditableMesh.FindPolygonPerimeterVertexNumberForVertex
inline int32_t UEditableMesh::FindPolygonPerimeterVertexNumberForVertex(struct Unknown PolygonID, struct Unknown VertexID) {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.FindPolygonPerimeterVertexNumberForVertex");

	struct FindPolygonPerimeterVertexNumberForVertex_Params {
		struct Unknown PolygonID;
		struct Unknown VertexID;
		int32_t ReturnValue;

	}; FindPolygonPerimeterVertexNumberForVertex_Params Params;

	Params.PolygonID = PolygonID;
	Params.VertexID = VertexID;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function EditableMesh.EditableMesh.FindPolygonPerimeterEdgeNumberForVertices
inline int32_t UEditableMesh::FindPolygonPerimeterEdgeNumberForVertices(struct Unknown PolygonID, struct Unknown EdgeVertexID0, struct Unknown EdgeVertexID1) {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.FindPolygonPerimeterEdgeNumberForVertices");

	struct FindPolygonPerimeterEdgeNumberForVertices_Params {
		struct Unknown PolygonID;
		struct Unknown EdgeVertexID0;
		struct Unknown EdgeVertexID1;
		int32_t ReturnValue;

	}; FindPolygonPerimeterEdgeNumberForVertices_Params Params;

	Params.PolygonID = PolygonID;
	Params.EdgeVertexID0 = EdgeVertexID0;
	Params.EdgeVertexID1 = EdgeVertexID1;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function EditableMesh.EditableMesh.FindPolygonLoop
inline void UEditableMesh::FindPolygonLoop(struct Unknown EdgeID, struct TArray<Unknown>& OutEdgeLoopEdgeIDs, struct TArray<Unknown>& OutFlippedEdgeIDs, struct TArray<Unknown>& OutReversedEdgeIDPathToTake, struct TArray<Unknown>& OutPolygonIDsToSplit) {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.FindPolygonLoop");

	struct FindPolygonLoop_Params {
		struct Unknown EdgeID;
		struct TArray<Unknown>& OutEdgeLoopEdgeIDs;
		struct TArray<Unknown>& OutFlippedEdgeIDs;
		struct TArray<Unknown>& OutReversedEdgeIDPathToTake;
		struct TArray<Unknown>& OutPolygonIDsToSplit;
	}; FindPolygonLoop_Params Params;

	Params.EdgeID = EdgeID;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	OutEdgeLoopEdgeIDs = Params.OutEdgeLoopEdgeIDs;
	OutFlippedEdgeIDs = Params.OutFlippedEdgeIDs;
	OutReversedEdgeIDPathToTake = Params.OutReversedEdgeIDPathToTake;
	OutPolygonIDsToSplit = Params.OutPolygonIDsToSplit;

}

// Function EditableMesh.EditableMesh.ExtrudePolygons
inline void UEditableMesh::ExtrudePolygons(struct TArray<Unknown>& Polygons, float ExtrudeDistance, char bKeepNeighborsTogether, struct TArray<Unknown>& OutNewExtrudedFrontPolygons) {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.ExtrudePolygons");

	struct ExtrudePolygons_Params {
		struct TArray<Unknown>& Polygons;
		float ExtrudeDistance;
		char bKeepNeighborsTogether;
		struct TArray<Unknown>& OutNewExtrudedFrontPolygons;
	}; ExtrudePolygons_Params Params;

	Params.ExtrudeDistance = ExtrudeDistance;
	Params.bKeepNeighborsTogether = bKeepNeighborsTogether;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Polygons = Params.Polygons;
	OutNewExtrudedFrontPolygons = Params.OutNewExtrudedFrontPolygons;

}

// Function EditableMesh.EditableMesh.ExtendVertices
inline void UEditableMesh::ExtendVertices(struct TArray<Unknown>& VertexIDs, char bOnlyExtendClosestEdge, struct Unknown ReferencePosition, struct TArray<Unknown>& OutNewExtendedVertexIDs) {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.ExtendVertices");

	struct ExtendVertices_Params {
		struct TArray<Unknown>& VertexIDs;
		char bOnlyExtendClosestEdge;
		struct Unknown ReferencePosition;
		struct TArray<Unknown>& OutNewExtendedVertexIDs;
	}; ExtendVertices_Params Params;

	Params.bOnlyExtendClosestEdge = bOnlyExtendClosestEdge;
	Params.ReferencePosition = ReferencePosition;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	VertexIDs = Params.VertexIDs;
	OutNewExtendedVertexIDs = Params.OutNewExtendedVertexIDs;

}

// Function EditableMesh.EditableMesh.ExtendEdges
inline void UEditableMesh::ExtendEdges(struct TArray<Unknown>& EdgeIDs, char bWeldNeighbors, struct TArray<Unknown>& OutNewExtendedEdgeIDs) {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.ExtendEdges");

	struct ExtendEdges_Params {
		struct TArray<Unknown>& EdgeIDs;
		char bWeldNeighbors;
		struct TArray<Unknown>& OutNewExtendedEdgeIDs;
	}; ExtendEdges_Params Params;

	Params.bWeldNeighbors = bWeldNeighbors;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	EdgeIDs = Params.EdgeIDs;
	OutNewExtendedEdgeIDs = Params.OutNewExtendedEdgeIDs;

}

// Function EditableMesh.EditableMesh.EndModification
inline void UEditableMesh::EndModification(char bFromUndo) {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.EndModification");

	struct EndModification_Params {
		char bFromUndo;
	}; EndModification_Params Params;

	Params.bFromUndo = bFromUndo;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function EditableMesh.EditableMesh.DeleteVertexInstances
inline void UEditableMesh::DeleteVertexInstances(struct TArray<Unknown>& VertexInstanceIDsToDelete, char bDeleteOrphanedVertices) {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.DeleteVertexInstances");

	struct DeleteVertexInstances_Params {
		struct TArray<Unknown>& VertexInstanceIDsToDelete;
		char bDeleteOrphanedVertices;
	}; DeleteVertexInstances_Params Params;

	Params.bDeleteOrphanedVertices = bDeleteOrphanedVertices;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	VertexInstanceIDsToDelete = Params.VertexInstanceIDsToDelete;

}

// Function EditableMesh.EditableMesh.DeleteVertexAndConnectedEdgesAndPolygons
inline void UEditableMesh::DeleteVertexAndConnectedEdgesAndPolygons(struct Unknown VertexID, char bDeleteOrphanedEdges, char bDeleteOrphanedVertices, char bDeleteOrphanedVertexInstances, char bDeleteEmptyPolygonGroups) {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.DeleteVertexAndConnectedEdgesAndPolygons");

	struct DeleteVertexAndConnectedEdgesAndPolygons_Params {
		struct Unknown VertexID;
		char bDeleteOrphanedEdges;
		char bDeleteOrphanedVertices;
		char bDeleteOrphanedVertexInstances;
		char bDeleteEmptyPolygonGroups;
	}; DeleteVertexAndConnectedEdgesAndPolygons_Params Params;

	Params.VertexID = VertexID;
	Params.bDeleteOrphanedEdges = bDeleteOrphanedEdges;
	Params.bDeleteOrphanedVertices = bDeleteOrphanedVertices;
	Params.bDeleteOrphanedVertexInstances = bDeleteOrphanedVertexInstances;
	Params.bDeleteEmptyPolygonGroups = bDeleteEmptyPolygonGroups;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function EditableMesh.EditableMesh.DeletePolygons
inline void UEditableMesh::DeletePolygons(struct TArray<Unknown>& PolygonIDsToDelete, char bDeleteOrphanedEdges, char bDeleteOrphanedVertices, char bDeleteOrphanedVertexInstances, char bDeleteEmptyPolygonGroups) {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.DeletePolygons");

	struct DeletePolygons_Params {
		struct TArray<Unknown>& PolygonIDsToDelete;
		char bDeleteOrphanedEdges;
		char bDeleteOrphanedVertices;
		char bDeleteOrphanedVertexInstances;
		char bDeleteEmptyPolygonGroups;
	}; DeletePolygons_Params Params;

	Params.bDeleteOrphanedEdges = bDeleteOrphanedEdges;
	Params.bDeleteOrphanedVertices = bDeleteOrphanedVertices;
	Params.bDeleteOrphanedVertexInstances = bDeleteOrphanedVertexInstances;
	Params.bDeleteEmptyPolygonGroups = bDeleteEmptyPolygonGroups;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	PolygonIDsToDelete = Params.PolygonIDsToDelete;

}

// Function EditableMesh.EditableMesh.DeletePolygonGroups
inline void UEditableMesh::DeletePolygonGroups(struct TArray<Unknown>& PolygonGroupIDs) {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.DeletePolygonGroups");

	struct DeletePolygonGroups_Params {
		struct TArray<Unknown>& PolygonGroupIDs;
	}; DeletePolygonGroups_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	PolygonGroupIDs = Params.PolygonGroupIDs;

}

// Function EditableMesh.EditableMesh.DeleteOrphanVertices
inline void UEditableMesh::DeleteOrphanVertices(struct TArray<Unknown>& VertexIDsToDelete) {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.DeleteOrphanVertices");

	struct DeleteOrphanVertices_Params {
		struct TArray<Unknown>& VertexIDsToDelete;
	}; DeleteOrphanVertices_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	VertexIDsToDelete = Params.VertexIDsToDelete;

}

// Function EditableMesh.EditableMesh.DeleteEdges
inline void UEditableMesh::DeleteEdges(struct TArray<Unknown>& EdgeIDsToDelete, char bDeleteOrphanedVertices) {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.DeleteEdges");

	struct DeleteEdges_Params {
		struct TArray<Unknown>& EdgeIDsToDelete;
		char bDeleteOrphanedVertices;
	}; DeleteEdges_Params Params;

	Params.bDeleteOrphanedVertices = bDeleteOrphanedVertices;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	EdgeIDsToDelete = Params.EdgeIDsToDelete;

}

// Function EditableMesh.EditableMesh.DeleteEdgeAndConnectedPolygons
inline void UEditableMesh::DeleteEdgeAndConnectedPolygons(struct Unknown EdgeID, char bDeleteOrphanedEdges, char bDeleteOrphanedVertices, char bDeleteOrphanedVertexInstances, char bDeleteEmptyPolygonGroups) {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.DeleteEdgeAndConnectedPolygons");

	struct DeleteEdgeAndConnectedPolygons_Params {
		struct Unknown EdgeID;
		char bDeleteOrphanedEdges;
		char bDeleteOrphanedVertices;
		char bDeleteOrphanedVertexInstances;
		char bDeleteEmptyPolygonGroups;
	}; DeleteEdgeAndConnectedPolygons_Params Params;

	Params.EdgeID = EdgeID;
	Params.bDeleteOrphanedEdges = bDeleteOrphanedEdges;
	Params.bDeleteOrphanedVertices = bDeleteOrphanedVertices;
	Params.bDeleteOrphanedVertexInstances = bDeleteOrphanedVertexInstances;
	Params.bDeleteEmptyPolygonGroups = bDeleteEmptyPolygonGroups;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function EditableMesh.EditableMesh.CreateVertices
inline void UEditableMesh::CreateVertices(struct TArray<Unknown>& VerticesToCreate, struct TArray<Unknown>& OutNewVertexIDs) {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.CreateVertices");

	struct CreateVertices_Params {
		struct TArray<Unknown>& VerticesToCreate;
		struct TArray<Unknown>& OutNewVertexIDs;
	}; CreateVertices_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	VerticesToCreate = Params.VerticesToCreate;
	OutNewVertexIDs = Params.OutNewVertexIDs;

}

// Function EditableMesh.EditableMesh.CreateVertexInstances
inline void UEditableMesh::CreateVertexInstances(struct TArray<Unknown>& VertexInstancesToCreate, struct TArray<Unknown>& OutNewVertexInstanceIDs) {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.CreateVertexInstances");

	struct CreateVertexInstances_Params {
		struct TArray<Unknown>& VertexInstancesToCreate;
		struct TArray<Unknown>& OutNewVertexInstanceIDs;
	}; CreateVertexInstances_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	VertexInstancesToCreate = Params.VertexInstancesToCreate;
	OutNewVertexInstanceIDs = Params.OutNewVertexInstanceIDs;

}

// Function EditableMesh.EditableMesh.CreatePolygons
inline void UEditableMesh::CreatePolygons(struct TArray<Unknown>& PolygonsToCreate, struct TArray<Unknown>& OutNewPolygonIDs, struct TArray<Unknown>& OutNewEdgeIDs) {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.CreatePolygons");

	struct CreatePolygons_Params {
		struct TArray<Unknown>& PolygonsToCreate;
		struct TArray<Unknown>& OutNewPolygonIDs;
		struct TArray<Unknown>& OutNewEdgeIDs;
	}; CreatePolygons_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	PolygonsToCreate = Params.PolygonsToCreate;
	OutNewPolygonIDs = Params.OutNewPolygonIDs;
	OutNewEdgeIDs = Params.OutNewEdgeIDs;

}

// Function EditableMesh.EditableMesh.CreatePolygonGroups
inline void UEditableMesh::CreatePolygonGroups(struct TArray<Unknown>& PolygonGroupsToCreate, struct TArray<Unknown>& OutNewPolygonGroupIDs) {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.CreatePolygonGroups");

	struct CreatePolygonGroups_Params {
		struct TArray<Unknown>& PolygonGroupsToCreate;
		struct TArray<Unknown>& OutNewPolygonGroupIDs;
	}; CreatePolygonGroups_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	PolygonGroupsToCreate = Params.PolygonGroupsToCreate;
	OutNewPolygonGroupIDs = Params.OutNewPolygonGroupIDs;

}

// Function EditableMesh.EditableMesh.CreateMissingPolygonPerimeterEdges
inline void UEditableMesh::CreateMissingPolygonPerimeterEdges(struct Unknown PolygonID, struct TArray<Unknown>& OutNewEdgeIDs) {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.CreateMissingPolygonPerimeterEdges");

	struct CreateMissingPolygonPerimeterEdges_Params {
		struct Unknown PolygonID;
		struct TArray<Unknown>& OutNewEdgeIDs;
	}; CreateMissingPolygonPerimeterEdges_Params Params;

	Params.PolygonID = PolygonID;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	OutNewEdgeIDs = Params.OutNewEdgeIDs;

}

// Function EditableMesh.EditableMesh.CreateEmptyVertexRange
inline void UEditableMesh::CreateEmptyVertexRange(int32_t NumVerticesToCreate, struct TArray<Unknown>& OutNewVertexIDs) {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.CreateEmptyVertexRange");

	struct CreateEmptyVertexRange_Params {
		int32_t NumVerticesToCreate;
		struct TArray<Unknown>& OutNewVertexIDs;
	}; CreateEmptyVertexRange_Params Params;

	Params.NumVerticesToCreate = NumVerticesToCreate;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	OutNewVertexIDs = Params.OutNewVertexIDs;

}

// Function EditableMesh.EditableMesh.CreateEdges
inline void UEditableMesh::CreateEdges(struct TArray<Unknown>& EdgesToCreate, struct TArray<Unknown>& OutNewEdgeIDs) {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.CreateEdges");

	struct CreateEdges_Params {
		struct TArray<Unknown>& EdgesToCreate;
		struct TArray<Unknown>& OutNewEdgeIDs;
	}; CreateEdges_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	EdgesToCreate = Params.EdgesToCreate;
	OutNewEdgeIDs = Params.OutNewEdgeIDs;

}

// Function EditableMesh.EditableMesh.ComputePolygonsSharedEdges
inline void UEditableMesh::ComputePolygonsSharedEdges(struct TArray<Unknown>& PolygonIDs, struct TArray<Unknown>& OutSharedEdgeIDs) {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.ComputePolygonsSharedEdges");

	struct ComputePolygonsSharedEdges_Params {
		struct TArray<Unknown>& PolygonIDs;
		struct TArray<Unknown>& OutSharedEdgeIDs;
	}; ComputePolygonsSharedEdges_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	PolygonIDs = Params.PolygonIDs;
	OutSharedEdgeIDs = Params.OutSharedEdgeIDs;

}

// Function EditableMesh.EditableMesh.ComputePolygonPlane
inline struct Unknown UEditableMesh::ComputePolygonPlane(struct Unknown PolygonID) {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.ComputePolygonPlane");

	struct ComputePolygonPlane_Params {
		struct Unknown PolygonID;
		struct Unknown ReturnValue;

	}; ComputePolygonPlane_Params Params;

	Params.PolygonID = PolygonID;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function EditableMesh.EditableMesh.ComputePolygonNormal
inline struct Unknown UEditableMesh::ComputePolygonNormal(struct Unknown PolygonID) {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.ComputePolygonNormal");

	struct ComputePolygonNormal_Params {
		struct Unknown PolygonID;
		struct Unknown ReturnValue;

	}; ComputePolygonNormal_Params Params;

	Params.PolygonID = PolygonID;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function EditableMesh.EditableMesh.ComputePolygonCenter
inline struct Unknown UEditableMesh::ComputePolygonCenter(struct Unknown PolygonID) {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.ComputePolygonCenter");

	struct ComputePolygonCenter_Params {
		struct Unknown PolygonID;
		struct Unknown ReturnValue;

	}; ComputePolygonCenter_Params Params;

	Params.PolygonID = PolygonID;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function EditableMesh.EditableMesh.ComputeBoundingBoxAndSphere
inline struct Unknown UEditableMesh::ComputeBoundingBoxAndSphere() {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.ComputeBoundingBoxAndSphere");

	struct ComputeBoundingBoxAndSphere_Params {
		
		struct Unknown ReturnValue;

	}; ComputeBoundingBoxAndSphere_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function EditableMesh.EditableMesh.ComputeBoundingBox
inline struct Unknown UEditableMesh::ComputeBoundingBox() {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.ComputeBoundingBox");

	struct ComputeBoundingBox_Params {
		
		struct Unknown ReturnValue;

	}; ComputeBoundingBox_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function EditableMesh.EditableMesh.CommitInstance
inline struct Unknown UEditableMesh::CommitInstance(struct Unknown ComponentToInstanceTo) {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.CommitInstance");

	struct CommitInstance_Params {
		struct Unknown ComponentToInstanceTo;
		struct Unknown ReturnValue;

	}; CommitInstance_Params Params;

	Params.ComponentToInstanceTo = ComponentToInstanceTo;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function EditableMesh.EditableMesh.Commit
inline void UEditableMesh::Commit() {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.Commit");

	struct Commit_Params {
		
	}; Commit_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function EditableMesh.EditableMesh.ChangePolygonsVertexInstances
inline void UEditableMesh::ChangePolygonsVertexInstances(struct TArray<Unknown>& VertexInstancesForPolygons) {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.ChangePolygonsVertexInstances");

	struct ChangePolygonsVertexInstances_Params {
		struct TArray<Unknown>& VertexInstancesForPolygons;
	}; ChangePolygonsVertexInstances_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	VertexInstancesForPolygons = Params.VertexInstancesForPolygons;

}

// Function EditableMesh.EditableMesh.BevelPolygons
inline void UEditableMesh::BevelPolygons(struct TArray<Unknown>& PolygonIDs, float BevelFixedDistance, float BevelProgressTowardCenter, struct TArray<Unknown>& OutNewCenterPolygonIDs, struct TArray<Unknown>& OutNewSidePolygonIDs) {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.BevelPolygons");

	struct BevelPolygons_Params {
		struct TArray<Unknown>& PolygonIDs;
		float BevelFixedDistance;
		float BevelProgressTowardCenter;
		struct TArray<Unknown>& OutNewCenterPolygonIDs;
		struct TArray<Unknown>& OutNewSidePolygonIDs;
	}; BevelPolygons_Params Params;

	Params.BevelFixedDistance = BevelFixedDistance;
	Params.BevelProgressTowardCenter = BevelProgressTowardCenter;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	PolygonIDs = Params.PolygonIDs;
	OutNewCenterPolygonIDs = Params.OutNewCenterPolygonIDs;
	OutNewSidePolygonIDs = Params.OutNewSidePolygonIDs;

}

// Function EditableMesh.EditableMesh.AssignPolygonsToPolygonGroups
inline void UEditableMesh::AssignPolygonsToPolygonGroups(struct TArray<Unknown>& PolygonGroupForPolygons, char bDeleteOrphanedPolygonGroups) {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.AssignPolygonsToPolygonGroups");

	struct AssignPolygonsToPolygonGroups_Params {
		struct TArray<Unknown>& PolygonGroupForPolygons;
		char bDeleteOrphanedPolygonGroups;
	}; AssignPolygonsToPolygonGroups_Params Params;

	Params.bDeleteOrphanedPolygonGroups = bDeleteOrphanedPolygonGroups;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	PolygonGroupForPolygons = Params.PolygonGroupForPolygons;

}

// Function EditableMesh.EditableMesh.AnyChangesToUndo
inline char UEditableMesh::AnyChangesToUndo() {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.AnyChangesToUndo");

	struct AnyChangesToUndo_Params {
		
		char ReturnValue;

	}; AnyChangesToUndo_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

