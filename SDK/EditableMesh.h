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

	struct UGeometryCollection GeometryCollection; // 0x28 (8)
	struct UGeometryCollection OriginalGeometryCollection; // 0x30 (8)
	int32_t GeometryCollectionLODIndex; // 0x38 (4)
};

// Class EditableMesh.EditableMesh
class UEditableMesh : public Object {

public:

	struct TArray<struct UEditableMeshAdapter> Adapters; // 0x3B8 (16)
	int32_t TextureCoordinateCount; // 0x3D0 (4)
	int32_t PendingCompactCounter; // 0x51C (4)
	int32_t SubdivisionCount; // 0x520 (4)

	void WeldVertices(struct TArray<struct FVertexID>& VertexIDs, struct FVertexID& OutNewVertexID); // Function EditableMesh.EditableMesh.WeldVertices(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1788120>
	void TryToRemoveVertex(struct FVertexID VertexID, char& bOutWasVertexRemoved, struct FEdgeID& OutNewEdgeID); // Function EditableMesh.EditableMesh.TryToRemoveVertex(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1787FF0>
	void TryToRemovePolygonEdge(struct FEdgeID EdgeID, char& bOutWasEdgeRemoved, struct FPolygonID& OutNewPolygonID); // Function EditableMesh.EditableMesh.TryToRemovePolygonEdge(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1787EC0>
	void TriangulatePolygons(struct TArray<struct FPolygonID>& PolygonIDs, struct TArray<struct FPolygonID>& OutNewTrianglePolygons); // Function EditableMesh.EditableMesh.TriangulatePolygons(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1787DA0>
	void TessellatePolygons(struct TArray<struct FPolygonID>& PolygonIDs, enum class ETriangleTessellationMode TriangleTessellationMode, struct TArray<struct FPolygonID>& OutNewPolygonIDs); // Function EditableMesh.EditableMesh.TessellatePolygons(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1787C40>
	void StartModification(enum class EMeshModificationType MeshModificationType, enum class EMeshTopologyChange MeshTopologyChange); // Function EditableMesh.EditableMesh.StartModification(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1787B80>
	void SplitPolygons(struct TArray<struct FPolygonToSplit>& PolygonsToSplit, struct TArray<struct FEdgeID>& OutNewEdgeIDs); // Function EditableMesh.EditableMesh.SplitPolygons(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1787A40>
	void SplitPolygonalMesh(struct FPlane& InPlane, struct TArray<struct FPolygonID>& PolygonIDs1, struct TArray<struct FPolygonID>& PolygonIDs2, struct TArray<struct FEdgeID>& BoundaryIDs); // Function EditableMesh.EditableMesh.SplitPolygonalMesh(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1787870>
	void SplitEdge(struct FEdgeID EdgeID, struct TArray<float>& Splits, struct TArray<struct FVertexID>& OutNewVertexIDs); // Function EditableMesh.EditableMesh.SplitEdge(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1787710>
	void SetVerticesCornerSharpness(struct TArray<struct FVertexID>& VertexIDs, struct TArray<float>& VerticesNewCornerSharpness); // Function EditableMesh.EditableMesh.SetVerticesCornerSharpness(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x17875F0>
	void SetVerticesAttributes(struct TArray<struct FAttributesForVertex>& AttributesForVertices); // Function EditableMesh.EditableMesh.SetVerticesAttributes(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1787520>
	void SetVertexInstancesAttributes(struct TArray<struct FAttributesForVertexInstance>& AttributesForVertexInstances); // Function EditableMesh.EditableMesh.SetVertexInstancesAttributes(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1787450>
	void SetTextureCoordinateCount(int32_t NumTexCoords); // Function EditableMesh.EditableMesh.SetTextureCoordinateCount(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x17873D0>
	void SetSubdivisionCount(int32_t NewSubdivisionCount); // Function EditableMesh.EditableMesh.SetSubdivisionCount(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1787350>
	void SetPolygonsVertexAttributes(struct TArray<struct FVertexAttributesForPolygon>& VertexAttributesForPolygons); // Function EditableMesh.EditableMesh.SetPolygonsVertexAttributes(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x17871E0>
	void SetEdgesHardnessAutomatically(struct TArray<struct FEdgeID>& EdgeIDs, float MaxDotProductForSoftEdge); // Function EditableMesh.EditableMesh.SetEdgesHardnessAutomatically(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x17870E0>
	void SetEdgesHardness(struct TArray<struct FEdgeID>& EdgeIDs, struct TArray<char>& EdgesNewIsHard); // Function EditableMesh.EditableMesh.SetEdgesHardness(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1786FC0>
	void SetEdgesCreaseSharpness(struct TArray<struct FEdgeID>& EdgeIDs, struct TArray<float>& EdgesNewCreaseSharpness); // Function EditableMesh.EditableMesh.SetEdgesCreaseSharpness(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1786EA0>
	void SetEdgesAttributes(struct TArray<struct FAttributesForEdge>& AttributesForEdges); // Function EditableMesh.EditableMesh.SetEdgesAttributes(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1786DD0>
	void SetAllowUndo(char bInAllowUndo); // Function EditableMesh.EditableMesh.SetAllowUndo(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1786D50>
	void SetAllowSpatialDatabase(char bInAllowSpatialDatabase); // Function EditableMesh.EditableMesh.SetAllowSpatialDatabase(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1786CC0>
	void SetAllowCompact(char bInAllowCompact); // Function EditableMesh.EditableMesh.SetAllowCompact(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1786C40>
	void SearchSpatialDatabaseForPolygonsPotentiallyIntersectingPlane(struct FPlane& InPlane, struct TArray<struct FPolygonID>& OutPolygons); // Function EditableMesh.EditableMesh.SearchSpatialDatabaseForPolygonsPotentiallyIntersectingPlane(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1786B40>
	void SearchSpatialDatabaseForPolygonsPotentiallyIntersectingLineSegment(struct FVector LineSegmentStart, struct FVector LineSegmentEnd, struct TArray<struct FPolygonID>& OutPolygons); // Function EditableMesh.EditableMesh.SearchSpatialDatabaseForPolygonsPotentiallyIntersectingLineSegment(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x17869F0>
	void SearchSpatialDatabaseForPolygonsInVolume(struct TArray<struct FPlane>& Planes, struct TArray<struct FPolygonID>& OutPolygons); // Function EditableMesh.EditableMesh.SearchSpatialDatabaseForPolygonsInVolume(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x17868D0>
	struct UEditableMesh RevertInstance(); // Function EditableMesh.EditableMesh.RevertInstance(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x17868A0>
	void Revert(); // Function EditableMesh.EditableMesh.Revert(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1532410>
	void RebuildRenderMesh(); // Function EditableMesh.EditableMesh.RebuildRenderMesh(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1786880>
	void QuadrangulateMesh(struct TArray<struct FPolygonID>& OutNewPolygonIDs); // Function EditableMesh.EditableMesh.QuadrangulateMesh(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x17867D0>
	void PropagateInstanceChanges(); // Function EditableMesh.EditableMesh.PropagateInstanceChanges(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1532410>
	void MoveVertices(struct TArray<struct FVertexToMove>& VerticesToMove); // Function EditableMesh.EditableMesh.MoveVertices(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1786720>
	struct FVertexID MakeVertexID(int32_t VertexIndex); // Function EditableMesh.EditableMesh.MakeVertexID(Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x17866A0>
	struct FPolygonID MakePolygonID(int32_t PolygonIndex); // Function EditableMesh.EditableMesh.MakePolygonID(Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x17866A0>
	struct FPolygonGroupID MakePolygonGroupID(int32_t PolygonGroupIndex); // Function EditableMesh.EditableMesh.MakePolygonGroupID(Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x17866A0>
	struct FEdgeID MakeEdgeID(int32_t EdgeIndex); // Function EditableMesh.EditableMesh.MakeEdgeID(Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x17866A0>
	char IsValidVertex(struct FVertexID VertexID); // Function EditableMesh.EditableMesh.IsValidVertex(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1786610>
	char IsValidPolygonGroup(struct FPolygonGroupID PolygonGroupID); // Function EditableMesh.EditableMesh.IsValidPolygonGroup(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1786580>
	char IsValidPolygon(struct FPolygonID PolygonID); // Function EditableMesh.EditableMesh.IsValidPolygon(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x17864F0>
	char IsValidEdge(struct FEdgeID EdgeID); // Function EditableMesh.EditableMesh.IsValidEdge(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1786460>
	char IsUndoAllowed(); // Function EditableMesh.EditableMesh.IsUndoAllowed(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1786440>
	char IsSpatialDatabaseAllowed(); // Function EditableMesh.EditableMesh.IsSpatialDatabaseAllowed(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1786420>
	char IsPreviewingSubdivisions(); // Function EditableMesh.EditableMesh.IsPreviewingSubdivisions(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x17863F0>
	char IsOrphanedVertex(struct FVertexID VertexID); // Function EditableMesh.EditableMesh.IsOrphanedVertex(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1786360>
	char IsCompactAllowed(); // Function EditableMesh.EditableMesh.IsCompactAllowed(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1786340>
	char IsCommittedAsInstance(); // Function EditableMesh.EditableMesh.IsCommittedAsInstance(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1786310>
	char IsCommitted(); // Function EditableMesh.EditableMesh.IsCommitted(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x17862E0>
	char IsBeingModified(); // Function EditableMesh.EditableMesh.IsBeingModified(Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x17862B0>
	struct FVertexID InvalidVertexID(); // Function EditableMesh.EditableMesh.InvalidVertexID(Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1786290>
	struct FPolygonID InvalidPolygonID(); // Function EditableMesh.EditableMesh.InvalidPolygonID(Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1786270>
	struct FPolygonGroupID InvalidPolygonGroupID(); // Function EditableMesh.EditableMesh.InvalidPolygonGroupID(Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1786250>
	struct FEdgeID InvalidEdgeID(); // Function EditableMesh.EditableMesh.InvalidEdgeID(Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1786230>
	void InsetPolygons(struct TArray<struct FPolygonID>& PolygonIDs, float InsetFixedDistance, float InsetProgressTowardCenter, enum class EInsetPolygonsMode Mode, struct TArray<struct FPolygonID>& OutNewCenterPolygonIDs, struct TArray<struct FPolygonID>& OutNewSidePolygonIDs); // Function EditableMesh.EditableMesh.InsetPolygons(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1785FF0>
	void InsertEdgeLoop(struct FEdgeID EdgeID, struct TArray<float>& Splits, struct TArray<struct FEdgeID>& OutNewEdgeIDs); // Function EditableMesh.EditableMesh.InsertEdgeLoop(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1785E90>
	void InitializeAdapters(); // Function EditableMesh.EditableMesh.InitializeAdapters(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1785E70>
	struct FEdgeID GetVertexPairEdge(struct FVertexID VertexID, struct FVertexID NextVertexID, char& bOutEdgeWindingIsReversed); // Function EditableMesh.EditableMesh.GetVertexPairEdge(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1785D40>
	struct FVertexID GetVertexInstanceVertex(struct FVertexInstanceID VertexInstanceID); // Function EditableMesh.EditableMesh.GetVertexInstanceVertex(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1785CA0>
	int32_t GetVertexInstanceCount(); // Function EditableMesh.EditableMesh.GetVertexInstanceCount(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1785C70>
	void GetVertexInstanceConnectedPolygons(struct FVertexInstanceID VertexInstanceID, struct TArray<struct FPolygonID>& OutConnectedPolygonIDs); // Function EditableMesh.EditableMesh.GetVertexInstanceConnectedPolygons(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1785B80>
	int32_t GetVertexInstanceConnectedPolygonCount(struct FVertexInstanceID VertexInstanceID); // Function EditableMesh.EditableMesh.GetVertexInstanceConnectedPolygonCount(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1785AF0>
	struct FPolygonID GetVertexInstanceConnectedPolygon(struct FVertexInstanceID VertexInstanceID, int32_t ConnectedPolygonNumber); // Function EditableMesh.EditableMesh.GetVertexInstanceConnectedPolygon(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1785A20>
	int32_t GetVertexCount(); // Function EditableMesh.EditableMesh.GetVertexCount(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x17859F0>
	void GetVertexConnectedPolygons(struct FVertexID VertexID, struct TArray<struct FPolygonID>& OutConnectedPolygonIDs); // Function EditableMesh.EditableMesh.GetVertexConnectedPolygons(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1785900>
	void GetVertexConnectedEdges(struct FVertexID VertexID, struct TArray<struct FEdgeID>& OutConnectedEdgeIDs); // Function EditableMesh.EditableMesh.GetVertexConnectedEdges(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1785810>
	int32_t GetVertexConnectedEdgeCount(struct FVertexID VertexID); // Function EditableMesh.EditableMesh.GetVertexConnectedEdgeCount(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1785780>
	struct FEdgeID GetVertexConnectedEdge(struct FVertexID VertexID, int32_t ConnectedEdgeNumber); // Function EditableMesh.EditableMesh.GetVertexConnectedEdge(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x17856B0>
	void GetVertexAdjacentVertices(struct FVertexID VertexID, struct TArray<struct FVertexID>& OutAdjacentVertexIDs); // Function EditableMesh.EditableMesh.GetVertexAdjacentVertices(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x17855C0>
	int32_t GetTextureCoordinateCount(); // Function EditableMesh.EditableMesh.GetTextureCoordinateCount(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1785590>
	struct FSubdivisionLimitData GetSubdivisionLimitData(); // Function EditableMesh.EditableMesh.GetSubdivisionLimitData(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1785550>
	int32_t GetSubdivisionCount(); // Function EditableMesh.EditableMesh.GetSubdivisionCount(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1785520>
	int32_t GetPolygonTriangulatedTriangleCount(struct FPolygonID PolygonID); // Function EditableMesh.EditableMesh.GetPolygonTriangulatedTriangleCount(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1785490>
	struct FTriangleID GetPolygonTriangulatedTriangle(struct FPolygonID PolygonID, int32_t PolygonTriangleNumber); // Function EditableMesh.EditableMesh.GetPolygonTriangulatedTriangle(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x17853C0>
	void GetPolygonPerimeterVertices(struct FPolygonID PolygonID, struct TArray<struct FVertexID>& OutPolygonPerimeterVertexIDs); // Function EditableMesh.EditableMesh.GetPolygonPerimeterVertices(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x17852D0>
	void GetPolygonPerimeterVertexInstances(struct FPolygonID PolygonID, struct TArray<struct FVertexInstanceID>& OutPolygonPerimeterVertexInstanceIDs); // Function EditableMesh.EditableMesh.GetPolygonPerimeterVertexInstances(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x17851E0>
	struct FVertexInstanceID GetPolygonPerimeterVertexInstance(struct FPolygonID PolygonID, int32_t PolygonVertexNumber); // Function EditableMesh.EditableMesh.GetPolygonPerimeterVertexInstance(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1785110>
	int32_t GetPolygonPerimeterVertexCount(struct FPolygonID PolygonID); // Function EditableMesh.EditableMesh.GetPolygonPerimeterVertexCount(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1784EC0>
	struct FVertexID GetPolygonPerimeterVertex(struct FPolygonID PolygonID, int32_t PolygonVertexNumber); // Function EditableMesh.EditableMesh.GetPolygonPerimeterVertex(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1785040>
	void GetPolygonPerimeterEdges(struct FPolygonID PolygonID, struct TArray<struct FEdgeID>& OutPolygonPerimeterEdgeIDs); // Function EditableMesh.EditableMesh.GetPolygonPerimeterEdges(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1784F50>
	int32_t GetPolygonPerimeterEdgeCount(struct FPolygonID PolygonID); // Function EditableMesh.EditableMesh.GetPolygonPerimeterEdgeCount(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1784EC0>
	struct FEdgeID GetPolygonPerimeterEdge(struct FPolygonID PolygonID, int32_t PerimeterEdgeNumber, char& bOutEdgeWindingIsReversedForPolygon); // Function EditableMesh.EditableMesh.GetPolygonPerimeterEdge(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1784DA0>
	struct FPolygonID GetPolygonInGroup(struct FPolygonGroupID PolygonGroupID, int32_t PolygonNumber); // Function EditableMesh.EditableMesh.GetPolygonInGroup(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1784CD0>
	int32_t GetPolygonGroupCount(); // Function EditableMesh.EditableMesh.GetPolygonGroupCount(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1784CA0>
	int32_t GetPolygonCountInGroup(struct FPolygonGroupID PolygonGroupID); // Function EditableMesh.EditableMesh.GetPolygonCountInGroup(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1784C10>
	int32_t GetPolygonCount(); // Function EditableMesh.EditableMesh.GetPolygonCount(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1784BE0>
	void GetPolygonAdjacentPolygons(struct FPolygonID PolygonID, struct TArray<struct FPolygonID>& OutAdjacentPolygons); // Function EditableMesh.EditableMesh.GetPolygonAdjacentPolygons(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1784AF0>
	struct FPolygonGroupID GetGroupForPolygon(struct FPolygonID PolygonID); // Function EditableMesh.EditableMesh.GetGroupForPolygon(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1784A50>
	struct FPolygonGroupID GetFirstValidPolygonGroup(); // Function EditableMesh.EditableMesh.GetFirstValidPolygonGroup(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1784A10>
	void GetEdgeVertices(struct FEdgeID EdgeID, struct FVertexID& OutEdgeVertexID0, struct FVertexID& OutEdgeVertexID1); // Function EditableMesh.EditableMesh.GetEdgeVertices(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x17848E0>
	struct FVertexID GetEdgeVertex(struct FEdgeID EdgeID, int32_t EdgeVertexNumber); // Function EditableMesh.EditableMesh.GetEdgeVertex(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1784810>
	struct FEdgeID GetEdgeThatConnectsVertices(struct FVertexID VertexID0, struct FVertexID VertexID1); // Function EditableMesh.EditableMesh.GetEdgeThatConnectsVertices(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1784740>
	void GetEdgeLoopElements(struct FEdgeID EdgeID, struct TArray<struct FEdgeID>& EdgeLoopIDs); // Function EditableMesh.EditableMesh.GetEdgeLoopElements(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1784650>
	int32_t GetEdgeCount(); // Function EditableMesh.EditableMesh.GetEdgeCount(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1784620>
	void GetEdgeConnectedPolygons(struct FEdgeID EdgeID, struct TArray<struct FPolygonID>& OutConnectedPolygonIDs); // Function EditableMesh.EditableMesh.GetEdgeConnectedPolygons(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1784530>
	int32_t GetEdgeConnectedPolygonCount(struct FEdgeID EdgeID); // Function EditableMesh.EditableMesh.GetEdgeConnectedPolygonCount(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x17844A0>
	struct FPolygonID GetEdgeConnectedPolygon(struct FEdgeID EdgeID, int32_t ConnectedPolygonNumber); // Function EditableMesh.EditableMesh.GetEdgeConnectedPolygon(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x17843D0>
	void GeneratePolygonTangentsAndNormals(struct TArray<struct FPolygonID>& PolygonIDs); // Function EditableMesh.EditableMesh.GeneratePolygonTangentsAndNormals(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1784320>
	void FlipPolygons(struct TArray<struct FPolygonID>& PolygonIDs); // Function EditableMesh.EditableMesh.FlipPolygons(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1784270>
	int32_t FindPolygonPerimeterVertexNumberForVertex(struct FPolygonID PolygonID, struct FVertexID VertexID); // Function EditableMesh.EditableMesh.FindPolygonPerimeterVertexNumberForVertex(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x17841A0>
	int32_t FindPolygonPerimeterEdgeNumberForVertices(struct FPolygonID PolygonID, struct FVertexID EdgeVertexID0, struct FVertexID EdgeVertexID1); // Function EditableMesh.EditableMesh.FindPolygonPerimeterEdgeNumberForVertices(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1784090>
	void FindPolygonLoop(struct FEdgeID EdgeID, struct TArray<struct FEdgeID>& OutEdgeLoopEdgeIDs, struct TArray<struct FEdgeID>& OutFlippedEdgeIDs, struct TArray<struct FEdgeID>& OutReversedEdgeIDPathToTake, struct TArray<struct FPolygonID>& OutPolygonIDsToSplit); // Function EditableMesh.EditableMesh.FindPolygonLoop(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1783E70>
	void ExtrudePolygons(struct TArray<struct FPolygonID>& Polygons, float ExtrudeDistance, char bKeepNeighborsTogether, struct TArray<struct FPolygonID>& OutNewExtrudedFrontPolygons); // Function EditableMesh.EditableMesh.ExtrudePolygons(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1783CB0>
	void ExtendVertices(struct TArray<struct FVertexID>& VertexIDs, char bOnlyExtendClosestEdge, struct FVector ReferencePosition, struct TArray<struct FVertexID>& OutNewExtendedVertexIDs); // Function EditableMesh.EditableMesh.ExtendVertices(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1783B00>
	void ExtendEdges(struct TArray<struct FEdgeID>& EdgeIDs, char bWeldNeighbors, struct TArray<struct FEdgeID>& OutNewExtendedEdgeIDs); // Function EditableMesh.EditableMesh.ExtendEdges(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x17839A0>
	void EndModification(char bFromUndo); // Function EditableMesh.EditableMesh.EndModification(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1783910>
	void DeleteVertexInstances(struct TArray<struct FVertexInstanceID>& VertexInstanceIDsToDelete, char bDeleteOrphanedVertices); // Function EditableMesh.EditableMesh.DeleteVertexInstances(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1783810>
	void DeleteVertexAndConnectedEdgesAndPolygons(struct FVertexID VertexID, char bDeleteOrphanedEdges, char bDeleteOrphanedVertices, char bDeleteOrphanedVertexInstances, char bDeleteEmptyPolygonGroups); // Function EditableMesh.EditableMesh.DeleteVertexAndConnectedEdgesAndPolygons(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1783660>
	void DeletePolygons(struct TArray<struct FPolygonID>& PolygonIDsToDelete, char bDeleteOrphanedEdges, char bDeleteOrphanedVertices, char bDeleteOrphanedVertexInstances, char bDeleteEmptyPolygonGroups); // Function EditableMesh.EditableMesh.DeletePolygons(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1783470>
	void DeletePolygonGroups(struct TArray<struct FPolygonGroupID>& PolygonGroupIDs); // Function EditableMesh.EditableMesh.DeletePolygonGroups(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x17833C0>
	void DeleteOrphanVertices(struct TArray<struct FVertexID>& VertexIDsToDelete); // Function EditableMesh.EditableMesh.DeleteOrphanVertices(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1783310>
	void DeleteEdges(struct TArray<struct FEdgeID>& EdgeIDsToDelete, char bDeleteOrphanedVertices); // Function EditableMesh.EditableMesh.DeleteEdges(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1783210>
	void DeleteEdgeAndConnectedPolygons(struct FEdgeID EdgeID, char bDeleteOrphanedEdges, char bDeleteOrphanedVertices, char bDeleteOrphanedVertexInstances, char bDeleteEmptyPolygonGroups); // Function EditableMesh.EditableMesh.DeleteEdgeAndConnectedPolygons(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1783060>
	void CreateVertices(struct TArray<struct FVertexToCreate>& VerticesToCreate, struct TArray<struct FVertexID>& OutNewVertexIDs); // Function EditableMesh.EditableMesh.CreateVertices(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1782F20>
	void CreateVertexInstances(struct TArray<struct FVertexInstanceToCreate>& VertexInstancesToCreate, struct TArray<struct FVertexInstanceID>& OutNewVertexInstanceIDs); // Function EditableMesh.EditableMesh.CreateVertexInstances(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1782DE0>
	void CreatePolygons(struct TArray<struct FPolygonToCreate>& PolygonsToCreate, struct TArray<struct FPolygonID>& OutNewPolygonIDs, struct TArray<struct FEdgeID>& OutNewEdgeIDs); // Function EditableMesh.EditableMesh.CreatePolygons(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1782C00>
	void CreatePolygonGroups(struct TArray<struct FPolygonGroupToCreate>& PolygonGroupsToCreate, struct TArray<struct FPolygonGroupID>& OutNewPolygonGroupIDs); // Function EditableMesh.EditableMesh.CreatePolygonGroups(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1782AC0>
	void CreateMissingPolygonPerimeterEdges(struct FPolygonID PolygonID, struct TArray<struct FEdgeID>& OutNewEdgeIDs); // Function EditableMesh.EditableMesh.CreateMissingPolygonPerimeterEdges(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x17829D0>
	void CreateEmptyVertexRange(int32_t NumVerticesToCreate, struct TArray<struct FVertexID>& OutNewVertexIDs); // Function EditableMesh.EditableMesh.CreateEmptyVertexRange(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x17828E0>
	void CreateEdges(struct TArray<struct FEdgeToCreate>& EdgesToCreate, struct TArray<struct FEdgeID>& OutNewEdgeIDs); // Function EditableMesh.EditableMesh.CreateEdges(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x17827A0>
	void ComputePolygonsSharedEdges(struct TArray<struct FPolygonID>& PolygonIDs, struct TArray<struct FEdgeID>& OutSharedEdgeIDs); // Function EditableMesh.EditableMesh.ComputePolygonsSharedEdges(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1782680>
	struct FPlane ComputePolygonPlane(struct FPolygonID PolygonID); // Function EditableMesh.EditableMesh.ComputePolygonPlane(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x17825E0>
	struct FVector ComputePolygonNormal(struct FPolygonID PolygonID); // Function EditableMesh.EditableMesh.ComputePolygonNormal(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1782540>
	struct FVector ComputePolygonCenter(struct FPolygonID PolygonID); // Function EditableMesh.EditableMesh.ComputePolygonCenter(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x17824A0>
	struct FBoxSphereBounds ComputeBoundingBoxAndSphere(); // Function EditableMesh.EditableMesh.ComputeBoundingBoxAndSphere(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1782450>
	struct FBox ComputeBoundingBox(); // Function EditableMesh.EditableMesh.ComputeBoundingBox(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1782400>
	struct UEditableMesh CommitInstance(struct UPrimitiveComponent ComponentToInstanceTo); // Function EditableMesh.EditableMesh.CommitInstance(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1782370>
	void Commit(); // Function EditableMesh.EditableMesh.Commit(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1782350>
	void ChangePolygonsVertexInstances(struct TArray<struct FChangeVertexInstancesForPolygon>& VertexInstancesForPolygons); // Function EditableMesh.EditableMesh.ChangePolygonsVertexInstances(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1782230>
	void BevelPolygons(struct TArray<struct FPolygonID>& PolygonIDs, float BevelFixedDistance, float BevelProgressTowardCenter, struct TArray<struct FPolygonID>& OutNewCenterPolygonIDs, struct TArray<struct FPolygonID>& OutNewSidePolygonIDs); // Function EditableMesh.EditableMesh.BevelPolygons(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1782040>
	void AssignPolygonsToPolygonGroups(struct TArray<struct FPolygonGroupForPolygon>& PolygonGroupForPolygons, char bDeleteOrphanedPolygonGroups); // Function EditableMesh.EditableMesh.AssignPolygonsToPolygonGroups(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1781F40>
	char AnyChangesToUndo(); // Function EditableMesh.EditableMesh.AnyChangesToUndo(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1781F10>
};

// Class EditableMesh.EditableStaticMeshAdapter
class UEditableStaticMeshAdapter : public UEditableMeshAdapter {

public:

	struct UStaticMesh StaticMesh; // 0x28 (8)
	struct UStaticMesh OriginalStaticMesh; // 0x30 (8)
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
	struct FPolygonGroupID PolygonGroupID; // 0x0 (4)
	struct TArray<struct FAdaptorTriangleID> TriangulatedPolygonTriangleIndices; // 0x8 (16)
};

// ScriptStruct EditableMesh.PolygonGroupForPolygon
struct FPolygonGroupForPolygon {
	struct FPolygonID PolygonID; // 0x0 (4)
	struct FPolygonGroupID PolygonGroupID; // 0x4 (4)
};

// ScriptStruct EditableMesh.PolygonGroupToCreate
struct FPolygonGroupToCreate {
	struct FMeshElementAttributeList PolygonGroupAttributes; // 0x0 (16)
	struct FPolygonGroupID OriginalPolygonGroupID; // 0x10 (4)
};

// ScriptStruct EditableMesh.MeshElementAttributeList
struct FMeshElementAttributeList {
	struct TArray<struct FMeshElementAttributeData> Attributes; // 0x0 (16)
};

// ScriptStruct EditableMesh.MeshElementAttributeData
struct FMeshElementAttributeData {
	struct FName AttributeName; // 0x0 (8)
	int32_t AttributeIndex; // 0x8 (4)
	struct FMeshElementAttributeValue AttributeValue; // 0x10 (80)
};

// ScriptStruct EditableMesh.VertexToMove
struct FVertexToMove {
	struct FVertexID VertexID; // 0x0 (4)
	struct FVector NewVertexPosition; // 0x4 (12)
};

// ScriptStruct EditableMesh.ChangeVertexInstancesForPolygon
struct FChangeVertexInstancesForPolygon {
	struct FPolygonID PolygonID; // 0x0 (4)
	struct TArray<struct FVertexIndexAndInstanceID> PerimeterVertexIndicesAndInstanceIDs; // 0x8 (16)
	struct TArray<struct FVertexInstancesForPolygonHole> VertexIndicesAndInstanceIDsForEachHole; // 0x18 (16)
};

// ScriptStruct EditableMesh.VertexInstancesForPolygonHole
struct FVertexInstancesForPolygonHole {
	struct TArray<struct FVertexIndexAndInstanceID> VertexIndicesAndInstanceIDs; // 0x0 (16)
};

// ScriptStruct EditableMesh.VertexIndexAndInstanceID
struct FVertexIndexAndInstanceID {
	int32_t ContourIndex; // 0x0 (4)
	struct FVertexInstanceID VertexInstanceID; // 0x4 (4)
};

// ScriptStruct EditableMesh.VertexAttributesForPolygon
struct FVertexAttributesForPolygon {
	struct FPolygonID PolygonID; // 0x0 (4)
	struct TArray<struct FMeshElementAttributeList> PerimeterVertexAttributeLists; // 0x8 (16)
	struct TArray<struct FVertexAttributesForPolygonHole> VertexAttributeListsForEachHole; // 0x18 (16)
};

// ScriptStruct EditableMesh.VertexAttributesForPolygonHole
struct FVertexAttributesForPolygonHole {
	struct TArray<struct FMeshElementAttributeList> VertexAttributeList; // 0x0 (16)
};

// ScriptStruct EditableMesh.AttributesForEdge
struct FAttributesForEdge {
	struct FEdgeID EdgeID; // 0x0 (4)
	struct FMeshElementAttributeList EdgeAttributes; // 0x8 (16)
};

// ScriptStruct EditableMesh.AttributesForVertexInstance
struct FAttributesForVertexInstance {
	struct FVertexInstanceID VertexInstanceID; // 0x0 (4)
	struct FMeshElementAttributeList VertexInstanceAttributes; // 0x8 (16)
};

// ScriptStruct EditableMesh.AttributesForVertex
struct FAttributesForVertex {
	struct FVertexID VertexID; // 0x0 (4)
	struct FMeshElementAttributeList VertexAttributes; // 0x8 (16)
};

// ScriptStruct EditableMesh.PolygonToSplit
struct FPolygonToSplit {
	struct FPolygonID PolygonID; // 0x0 (4)
	struct TArray<struct FVertexPair> VertexPairsToSplitAt; // 0x8 (16)
};

// ScriptStruct EditableMesh.VertexPair
struct FVertexPair {
	struct FVertexID VertexID0; // 0x0 (4)
	struct FVertexID VertexID1; // 0x4 (4)
};

// ScriptStruct EditableMesh.PolygonToCreate
struct FPolygonToCreate {
	struct FPolygonGroupID PolygonGroupID; // 0x0 (4)
	struct TArray<struct FVertexAndAttributes> PerimeterVertices; // 0x8 (16)
	struct FPolygonID OriginalPolygonID; // 0x18 (4)
	enum class EPolygonEdgeHardness PolygonEdgeHardness; // 0x1C (1)
};

// ScriptStruct EditableMesh.VertexAndAttributes
struct FVertexAndAttributes {
	struct FVertexInstanceID VertexInstanceID; // 0x0 (4)
	struct FVertexID VertexID; // 0x4 (4)
	struct FMeshElementAttributeList PolygonVertexAttributes; // 0x8 (16)
};

// ScriptStruct EditableMesh.EdgeToCreate
struct FEdgeToCreate {
	struct FVertexID VertexID0; // 0x0 (4)
	struct FVertexID VertexID1; // 0x4 (4)
	struct FMeshElementAttributeList EdgeAttributes; // 0x8 (16)
	struct FEdgeID OriginalEdgeID; // 0x18 (4)
};

// ScriptStruct EditableMesh.VertexInstanceToCreate
struct FVertexInstanceToCreate {
	struct FVertexID VertexID; // 0x0 (4)
	struct FMeshElementAttributeList VertexInstanceAttributes; // 0x8 (16)
	struct FVertexInstanceID OriginalVertexInstanceID; // 0x18 (4)
};

// ScriptStruct EditableMesh.VertexToCreate
struct FVertexToCreate {
	struct FMeshElementAttributeList VertexAttributes; // 0x0 (16)
	struct FVertexID OriginalVertexID; // 0x10 (4)
};

// ScriptStruct EditableMesh.SubdivisionLimitData
struct FSubdivisionLimitData {
	struct TArray<struct FVector> VertexPositions; // 0x0 (16)
	struct TArray<struct FSubdivisionLimitSection> Sections; // 0x10 (16)
	struct TArray<struct FSubdividedWireEdge> SubdividedWireEdges; // 0x20 (16)
};

// ScriptStruct EditableMesh.SubdividedWireEdge
struct FSubdividedWireEdge {
	int32_t EdgeVertex0PositionIndex; // 0x0 (4)
	int32_t EdgeVertex1PositionIndex; // 0x4 (4)
};

// ScriptStruct EditableMesh.SubdivisionLimitSection
struct FSubdivisionLimitSection {
	struct TArray<struct FSubdividedQuad> SubdividedQuads; // 0x0 (16)
};

// ScriptStruct EditableMesh.SubdividedQuad
struct FSubdividedQuad {
	struct FSubdividedQuadVertex QuadVertex0; // 0x0 (52)
	struct FSubdividedQuadVertex QuadVertex1; // 0x34 (52)
	struct FSubdividedQuadVertex QuadVertex2; // 0x68 (52)
	struct FSubdividedQuadVertex QuadVertex3; // 0x9C (52)
};

// ScriptStruct EditableMesh.SubdividedQuadVertex
struct FSubdividedQuadVertex {
	int32_t VertexPositionIndex; // 0x0 (4)
	struct FVector2D TextureCoordinate0; // 0x4 (8)
	struct FVector2D TextureCoordinate1; // 0xC (8)
	struct FColor VertexColor; // 0x14 (4)
	struct FVector VertexNormal; // 0x18 (12)
	struct FVector VertexTangent; // 0x24 (12)
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
	struct FPolygonGroupID PolygonGroupID; // 0x0 (4)
	struct TArray<struct FTriangleID> TriangulatedPolygonTriangleIndices; // 0x8 (16)
};

// Function EditableMesh.EditableMesh.WeldVertices
inline void UEditableMesh::WeldVertices(struct TArray<struct FVertexID>& VertexIDs, struct FVertexID& OutNewVertexID) {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.WeldVertices");

	struct WeldVertices_Params {
		struct TArray<struct FVertexID>& VertexIDs;
		struct FVertexID& OutNewVertexID;
	}; WeldVertices_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	VertexIDs = Params.VertexIDs;
	OutNewVertexID = Params.OutNewVertexID;

}

// Function EditableMesh.EditableMesh.TryToRemoveVertex
inline void UEditableMesh::TryToRemoveVertex(struct FVertexID VertexID, char& bOutWasVertexRemoved, struct FEdgeID& OutNewEdgeID) {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.TryToRemoveVertex");

	struct TryToRemoveVertex_Params {
		struct FVertexID VertexID;
		char& bOutWasVertexRemoved;
		struct FEdgeID& OutNewEdgeID;
	}; TryToRemoveVertex_Params Params;

	Params.VertexID = VertexID;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	bOutWasVertexRemoved = Params.bOutWasVertexRemoved;
	OutNewEdgeID = Params.OutNewEdgeID;

}

// Function EditableMesh.EditableMesh.TryToRemovePolygonEdge
inline void UEditableMesh::TryToRemovePolygonEdge(struct FEdgeID EdgeID, char& bOutWasEdgeRemoved, struct FPolygonID& OutNewPolygonID) {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.TryToRemovePolygonEdge");

	struct TryToRemovePolygonEdge_Params {
		struct FEdgeID EdgeID;
		char& bOutWasEdgeRemoved;
		struct FPolygonID& OutNewPolygonID;
	}; TryToRemovePolygonEdge_Params Params;

	Params.EdgeID = EdgeID;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	bOutWasEdgeRemoved = Params.bOutWasEdgeRemoved;
	OutNewPolygonID = Params.OutNewPolygonID;

}

// Function EditableMesh.EditableMesh.TriangulatePolygons
inline void UEditableMesh::TriangulatePolygons(struct TArray<struct FPolygonID>& PolygonIDs, struct TArray<struct FPolygonID>& OutNewTrianglePolygons) {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.TriangulatePolygons");

	struct TriangulatePolygons_Params {
		struct TArray<struct FPolygonID>& PolygonIDs;
		struct TArray<struct FPolygonID>& OutNewTrianglePolygons;
	}; TriangulatePolygons_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	PolygonIDs = Params.PolygonIDs;
	OutNewTrianglePolygons = Params.OutNewTrianglePolygons;

}

// Function EditableMesh.EditableMesh.TessellatePolygons
inline void UEditableMesh::TessellatePolygons(struct TArray<struct FPolygonID>& PolygonIDs, enum class ETriangleTessellationMode TriangleTessellationMode, struct TArray<struct FPolygonID>& OutNewPolygonIDs) {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.TessellatePolygons");

	struct TessellatePolygons_Params {
		struct TArray<struct FPolygonID>& PolygonIDs;
		enum class ETriangleTessellationMode TriangleTessellationMode;
		struct TArray<struct FPolygonID>& OutNewPolygonIDs;
	}; TessellatePolygons_Params Params;

	Params.TriangleTessellationMode = TriangleTessellationMode;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	PolygonIDs = Params.PolygonIDs;
	OutNewPolygonIDs = Params.OutNewPolygonIDs;

}

// Function EditableMesh.EditableMesh.StartModification
inline void UEditableMesh::StartModification(enum class EMeshModificationType MeshModificationType, enum class EMeshTopologyChange MeshTopologyChange) {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.StartModification");

	struct StartModification_Params {
		enum class EMeshModificationType MeshModificationType;
		enum class EMeshTopologyChange MeshTopologyChange;
	}; StartModification_Params Params;

	Params.MeshModificationType = MeshModificationType;
	Params.MeshTopologyChange = MeshTopologyChange;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function EditableMesh.EditableMesh.SplitPolygons
inline void UEditableMesh::SplitPolygons(struct TArray<struct FPolygonToSplit>& PolygonsToSplit, struct TArray<struct FEdgeID>& OutNewEdgeIDs) {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.SplitPolygons");

	struct SplitPolygons_Params {
		struct TArray<struct FPolygonToSplit>& PolygonsToSplit;
		struct TArray<struct FEdgeID>& OutNewEdgeIDs;
	}; SplitPolygons_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	PolygonsToSplit = Params.PolygonsToSplit;
	OutNewEdgeIDs = Params.OutNewEdgeIDs;

}

// Function EditableMesh.EditableMesh.SplitPolygonalMesh
inline void UEditableMesh::SplitPolygonalMesh(struct FPlane& InPlane, struct TArray<struct FPolygonID>& PolygonIDs1, struct TArray<struct FPolygonID>& PolygonIDs2, struct TArray<struct FEdgeID>& BoundaryIDs) {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.SplitPolygonalMesh");

	struct SplitPolygonalMesh_Params {
		struct FPlane& InPlane;
		struct TArray<struct FPolygonID>& PolygonIDs1;
		struct TArray<struct FPolygonID>& PolygonIDs2;
		struct TArray<struct FEdgeID>& BoundaryIDs;
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
inline void UEditableMesh::SplitEdge(struct FEdgeID EdgeID, struct TArray<float>& Splits, struct TArray<struct FVertexID>& OutNewVertexIDs) {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.SplitEdge");

	struct SplitEdge_Params {
		struct FEdgeID EdgeID;
		struct TArray<float>& Splits;
		struct TArray<struct FVertexID>& OutNewVertexIDs;
	}; SplitEdge_Params Params;

	Params.EdgeID = EdgeID;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Splits = Params.Splits;
	OutNewVertexIDs = Params.OutNewVertexIDs;

}

// Function EditableMesh.EditableMesh.SetVerticesCornerSharpness
inline void UEditableMesh::SetVerticesCornerSharpness(struct TArray<struct FVertexID>& VertexIDs, struct TArray<float>& VerticesNewCornerSharpness) {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.SetVerticesCornerSharpness");

	struct SetVerticesCornerSharpness_Params {
		struct TArray<struct FVertexID>& VertexIDs;
		struct TArray<float>& VerticesNewCornerSharpness;
	}; SetVerticesCornerSharpness_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	VertexIDs = Params.VertexIDs;
	VerticesNewCornerSharpness = Params.VerticesNewCornerSharpness;

}

// Function EditableMesh.EditableMesh.SetVerticesAttributes
inline void UEditableMesh::SetVerticesAttributes(struct TArray<struct FAttributesForVertex>& AttributesForVertices) {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.SetVerticesAttributes");

	struct SetVerticesAttributes_Params {
		struct TArray<struct FAttributesForVertex>& AttributesForVertices;
	}; SetVerticesAttributes_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	AttributesForVertices = Params.AttributesForVertices;

}

// Function EditableMesh.EditableMesh.SetVertexInstancesAttributes
inline void UEditableMesh::SetVertexInstancesAttributes(struct TArray<struct FAttributesForVertexInstance>& AttributesForVertexInstances) {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.SetVertexInstancesAttributes");

	struct SetVertexInstancesAttributes_Params {
		struct TArray<struct FAttributesForVertexInstance>& AttributesForVertexInstances;
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
inline void UEditableMesh::SetPolygonsVertexAttributes(struct TArray<struct FVertexAttributesForPolygon>& VertexAttributesForPolygons) {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.SetPolygonsVertexAttributes");

	struct SetPolygonsVertexAttributes_Params {
		struct TArray<struct FVertexAttributesForPolygon>& VertexAttributesForPolygons;
	}; SetPolygonsVertexAttributes_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	VertexAttributesForPolygons = Params.VertexAttributesForPolygons;

}

// Function EditableMesh.EditableMesh.SetEdgesHardnessAutomatically
inline void UEditableMesh::SetEdgesHardnessAutomatically(struct TArray<struct FEdgeID>& EdgeIDs, float MaxDotProductForSoftEdge) {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.SetEdgesHardnessAutomatically");

	struct SetEdgesHardnessAutomatically_Params {
		struct TArray<struct FEdgeID>& EdgeIDs;
		float MaxDotProductForSoftEdge;
	}; SetEdgesHardnessAutomatically_Params Params;

	Params.MaxDotProductForSoftEdge = MaxDotProductForSoftEdge;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	EdgeIDs = Params.EdgeIDs;

}

// Function EditableMesh.EditableMesh.SetEdgesHardness
inline void UEditableMesh::SetEdgesHardness(struct TArray<struct FEdgeID>& EdgeIDs, struct TArray<char>& EdgesNewIsHard) {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.SetEdgesHardness");

	struct SetEdgesHardness_Params {
		struct TArray<struct FEdgeID>& EdgeIDs;
		struct TArray<char>& EdgesNewIsHard;
	}; SetEdgesHardness_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	EdgeIDs = Params.EdgeIDs;
	EdgesNewIsHard = Params.EdgesNewIsHard;

}

// Function EditableMesh.EditableMesh.SetEdgesCreaseSharpness
inline void UEditableMesh::SetEdgesCreaseSharpness(struct TArray<struct FEdgeID>& EdgeIDs, struct TArray<float>& EdgesNewCreaseSharpness) {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.SetEdgesCreaseSharpness");

	struct SetEdgesCreaseSharpness_Params {
		struct TArray<struct FEdgeID>& EdgeIDs;
		struct TArray<float>& EdgesNewCreaseSharpness;
	}; SetEdgesCreaseSharpness_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	EdgeIDs = Params.EdgeIDs;
	EdgesNewCreaseSharpness = Params.EdgesNewCreaseSharpness;

}

// Function EditableMesh.EditableMesh.SetEdgesAttributes
inline void UEditableMesh::SetEdgesAttributes(struct TArray<struct FAttributesForEdge>& AttributesForEdges) {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.SetEdgesAttributes");

	struct SetEdgesAttributes_Params {
		struct TArray<struct FAttributesForEdge>& AttributesForEdges;
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
inline void UEditableMesh::SearchSpatialDatabaseForPolygonsPotentiallyIntersectingPlane(struct FPlane& InPlane, struct TArray<struct FPolygonID>& OutPolygons) {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.SearchSpatialDatabaseForPolygonsPotentiallyIntersectingPlane");

	struct SearchSpatialDatabaseForPolygonsPotentiallyIntersectingPlane_Params {
		struct FPlane& InPlane;
		struct TArray<struct FPolygonID>& OutPolygons;
	}; SearchSpatialDatabaseForPolygonsPotentiallyIntersectingPlane_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	InPlane = Params.InPlane;
	OutPolygons = Params.OutPolygons;

}

// Function EditableMesh.EditableMesh.SearchSpatialDatabaseForPolygonsPotentiallyIntersectingLineSegment
inline void UEditableMesh::SearchSpatialDatabaseForPolygonsPotentiallyIntersectingLineSegment(struct FVector LineSegmentStart, struct FVector LineSegmentEnd, struct TArray<struct FPolygonID>& OutPolygons) {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.SearchSpatialDatabaseForPolygonsPotentiallyIntersectingLineSegment");

	struct SearchSpatialDatabaseForPolygonsPotentiallyIntersectingLineSegment_Params {
		struct FVector LineSegmentStart;
		struct FVector LineSegmentEnd;
		struct TArray<struct FPolygonID>& OutPolygons;
	}; SearchSpatialDatabaseForPolygonsPotentiallyIntersectingLineSegment_Params Params;

	Params.LineSegmentStart = LineSegmentStart;
	Params.LineSegmentEnd = LineSegmentEnd;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	OutPolygons = Params.OutPolygons;

}

// Function EditableMesh.EditableMesh.SearchSpatialDatabaseForPolygonsInVolume
inline void UEditableMesh::SearchSpatialDatabaseForPolygonsInVolume(struct TArray<struct FPlane>& Planes, struct TArray<struct FPolygonID>& OutPolygons) {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.SearchSpatialDatabaseForPolygonsInVolume");

	struct SearchSpatialDatabaseForPolygonsInVolume_Params {
		struct TArray<struct FPlane>& Planes;
		struct TArray<struct FPolygonID>& OutPolygons;
	}; SearchSpatialDatabaseForPolygonsInVolume_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Planes = Params.Planes;
	OutPolygons = Params.OutPolygons;

}

// Function EditableMesh.EditableMesh.RevertInstance
inline struct UEditableMesh UEditableMesh::RevertInstance() {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.RevertInstance");

	struct RevertInstance_Params {
		
		struct UEditableMesh ReturnValue;

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
inline void UEditableMesh::QuadrangulateMesh(struct TArray<struct FPolygonID>& OutNewPolygonIDs) {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.QuadrangulateMesh");

	struct QuadrangulateMesh_Params {
		struct TArray<struct FPolygonID>& OutNewPolygonIDs;
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
inline void UEditableMesh::MoveVertices(struct TArray<struct FVertexToMove>& VerticesToMove) {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.MoveVertices");

	struct MoveVertices_Params {
		struct TArray<struct FVertexToMove>& VerticesToMove;
	}; MoveVertices_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	VerticesToMove = Params.VerticesToMove;

}

// Function EditableMesh.EditableMesh.MakeVertexID
inline struct FVertexID UEditableMesh::MakeVertexID(int32_t VertexIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.MakeVertexID");

	struct MakeVertexID_Params {
		int32_t VertexIndex;
		struct FVertexID ReturnValue;

	}; MakeVertexID_Params Params;

	Params.VertexIndex = VertexIndex;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function EditableMesh.EditableMesh.MakePolygonID
inline struct FPolygonID UEditableMesh::MakePolygonID(int32_t PolygonIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.MakePolygonID");

	struct MakePolygonID_Params {
		int32_t PolygonIndex;
		struct FPolygonID ReturnValue;

	}; MakePolygonID_Params Params;

	Params.PolygonIndex = PolygonIndex;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function EditableMesh.EditableMesh.MakePolygonGroupID
inline struct FPolygonGroupID UEditableMesh::MakePolygonGroupID(int32_t PolygonGroupIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.MakePolygonGroupID");

	struct MakePolygonGroupID_Params {
		int32_t PolygonGroupIndex;
		struct FPolygonGroupID ReturnValue;

	}; MakePolygonGroupID_Params Params;

	Params.PolygonGroupIndex = PolygonGroupIndex;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function EditableMesh.EditableMesh.MakeEdgeID
inline struct FEdgeID UEditableMesh::MakeEdgeID(int32_t EdgeIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.MakeEdgeID");

	struct MakeEdgeID_Params {
		int32_t EdgeIndex;
		struct FEdgeID ReturnValue;

	}; MakeEdgeID_Params Params;

	Params.EdgeIndex = EdgeIndex;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function EditableMesh.EditableMesh.IsValidVertex
inline char UEditableMesh::IsValidVertex(struct FVertexID VertexID) {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.IsValidVertex");

	struct IsValidVertex_Params {
		struct FVertexID VertexID;
		char ReturnValue;

	}; IsValidVertex_Params Params;

	Params.VertexID = VertexID;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function EditableMesh.EditableMesh.IsValidPolygonGroup
inline char UEditableMesh::IsValidPolygonGroup(struct FPolygonGroupID PolygonGroupID) {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.IsValidPolygonGroup");

	struct IsValidPolygonGroup_Params {
		struct FPolygonGroupID PolygonGroupID;
		char ReturnValue;

	}; IsValidPolygonGroup_Params Params;

	Params.PolygonGroupID = PolygonGroupID;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function EditableMesh.EditableMesh.IsValidPolygon
inline char UEditableMesh::IsValidPolygon(struct FPolygonID PolygonID) {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.IsValidPolygon");

	struct IsValidPolygon_Params {
		struct FPolygonID PolygonID;
		char ReturnValue;

	}; IsValidPolygon_Params Params;

	Params.PolygonID = PolygonID;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function EditableMesh.EditableMesh.IsValidEdge
inline char UEditableMesh::IsValidEdge(struct FEdgeID EdgeID) {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.IsValidEdge");

	struct IsValidEdge_Params {
		struct FEdgeID EdgeID;
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
inline char UEditableMesh::IsOrphanedVertex(struct FVertexID VertexID) {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.IsOrphanedVertex");

	struct IsOrphanedVertex_Params {
		struct FVertexID VertexID;
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
inline struct FVertexID UEditableMesh::InvalidVertexID() {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.InvalidVertexID");

	struct InvalidVertexID_Params {
		
		struct FVertexID ReturnValue;

	}; InvalidVertexID_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function EditableMesh.EditableMesh.InvalidPolygonID
inline struct FPolygonID UEditableMesh::InvalidPolygonID() {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.InvalidPolygonID");

	struct InvalidPolygonID_Params {
		
		struct FPolygonID ReturnValue;

	}; InvalidPolygonID_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function EditableMesh.EditableMesh.InvalidPolygonGroupID
inline struct FPolygonGroupID UEditableMesh::InvalidPolygonGroupID() {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.InvalidPolygonGroupID");

	struct InvalidPolygonGroupID_Params {
		
		struct FPolygonGroupID ReturnValue;

	}; InvalidPolygonGroupID_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function EditableMesh.EditableMesh.InvalidEdgeID
inline struct FEdgeID UEditableMesh::InvalidEdgeID() {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.InvalidEdgeID");

	struct InvalidEdgeID_Params {
		
		struct FEdgeID ReturnValue;

	}; InvalidEdgeID_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function EditableMesh.EditableMesh.InsetPolygons
inline void UEditableMesh::InsetPolygons(struct TArray<struct FPolygonID>& PolygonIDs, float InsetFixedDistance, float InsetProgressTowardCenter, enum class EInsetPolygonsMode Mode, struct TArray<struct FPolygonID>& OutNewCenterPolygonIDs, struct TArray<struct FPolygonID>& OutNewSidePolygonIDs) {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.InsetPolygons");

	struct InsetPolygons_Params {
		struct TArray<struct FPolygonID>& PolygonIDs;
		float InsetFixedDistance;
		float InsetProgressTowardCenter;
		enum class EInsetPolygonsMode Mode;
		struct TArray<struct FPolygonID>& OutNewCenterPolygonIDs;
		struct TArray<struct FPolygonID>& OutNewSidePolygonIDs;
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
inline void UEditableMesh::InsertEdgeLoop(struct FEdgeID EdgeID, struct TArray<float>& Splits, struct TArray<struct FEdgeID>& OutNewEdgeIDs) {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.InsertEdgeLoop");

	struct InsertEdgeLoop_Params {
		struct FEdgeID EdgeID;
		struct TArray<float>& Splits;
		struct TArray<struct FEdgeID>& OutNewEdgeIDs;
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
inline struct FEdgeID UEditableMesh::GetVertexPairEdge(struct FVertexID VertexID, struct FVertexID NextVertexID, char& bOutEdgeWindingIsReversed) {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetVertexPairEdge");

	struct GetVertexPairEdge_Params {
		struct FVertexID VertexID;
		struct FVertexID NextVertexID;
		char& bOutEdgeWindingIsReversed;
		struct FEdgeID ReturnValue;

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
inline struct FVertexID UEditableMesh::GetVertexInstanceVertex(struct FVertexInstanceID VertexInstanceID) {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetVertexInstanceVertex");

	struct GetVertexInstanceVertex_Params {
		struct FVertexInstanceID VertexInstanceID;
		struct FVertexID ReturnValue;

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
inline void UEditableMesh::GetVertexInstanceConnectedPolygons(struct FVertexInstanceID VertexInstanceID, struct TArray<struct FPolygonID>& OutConnectedPolygonIDs) {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetVertexInstanceConnectedPolygons");

	struct GetVertexInstanceConnectedPolygons_Params {
		struct FVertexInstanceID VertexInstanceID;
		struct TArray<struct FPolygonID>& OutConnectedPolygonIDs;
	}; GetVertexInstanceConnectedPolygons_Params Params;

	Params.VertexInstanceID = VertexInstanceID;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	OutConnectedPolygonIDs = Params.OutConnectedPolygonIDs;

}

// Function EditableMesh.EditableMesh.GetVertexInstanceConnectedPolygonCount
inline int32_t UEditableMesh::GetVertexInstanceConnectedPolygonCount(struct FVertexInstanceID VertexInstanceID) {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetVertexInstanceConnectedPolygonCount");

	struct GetVertexInstanceConnectedPolygonCount_Params {
		struct FVertexInstanceID VertexInstanceID;
		int32_t ReturnValue;

	}; GetVertexInstanceConnectedPolygonCount_Params Params;

	Params.VertexInstanceID = VertexInstanceID;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function EditableMesh.EditableMesh.GetVertexInstanceConnectedPolygon
inline struct FPolygonID UEditableMesh::GetVertexInstanceConnectedPolygon(struct FVertexInstanceID VertexInstanceID, int32_t ConnectedPolygonNumber) {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetVertexInstanceConnectedPolygon");

	struct GetVertexInstanceConnectedPolygon_Params {
		struct FVertexInstanceID VertexInstanceID;
		int32_t ConnectedPolygonNumber;
		struct FPolygonID ReturnValue;

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
inline void UEditableMesh::GetVertexConnectedPolygons(struct FVertexID VertexID, struct TArray<struct FPolygonID>& OutConnectedPolygonIDs) {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetVertexConnectedPolygons");

	struct GetVertexConnectedPolygons_Params {
		struct FVertexID VertexID;
		struct TArray<struct FPolygonID>& OutConnectedPolygonIDs;
	}; GetVertexConnectedPolygons_Params Params;

	Params.VertexID = VertexID;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	OutConnectedPolygonIDs = Params.OutConnectedPolygonIDs;

}

// Function EditableMesh.EditableMesh.GetVertexConnectedEdges
inline void UEditableMesh::GetVertexConnectedEdges(struct FVertexID VertexID, struct TArray<struct FEdgeID>& OutConnectedEdgeIDs) {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetVertexConnectedEdges");

	struct GetVertexConnectedEdges_Params {
		struct FVertexID VertexID;
		struct TArray<struct FEdgeID>& OutConnectedEdgeIDs;
	}; GetVertexConnectedEdges_Params Params;

	Params.VertexID = VertexID;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	OutConnectedEdgeIDs = Params.OutConnectedEdgeIDs;

}

// Function EditableMesh.EditableMesh.GetVertexConnectedEdgeCount
inline int32_t UEditableMesh::GetVertexConnectedEdgeCount(struct FVertexID VertexID) {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetVertexConnectedEdgeCount");

	struct GetVertexConnectedEdgeCount_Params {
		struct FVertexID VertexID;
		int32_t ReturnValue;

	}; GetVertexConnectedEdgeCount_Params Params;

	Params.VertexID = VertexID;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function EditableMesh.EditableMesh.GetVertexConnectedEdge
inline struct FEdgeID UEditableMesh::GetVertexConnectedEdge(struct FVertexID VertexID, int32_t ConnectedEdgeNumber) {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetVertexConnectedEdge");

	struct GetVertexConnectedEdge_Params {
		struct FVertexID VertexID;
		int32_t ConnectedEdgeNumber;
		struct FEdgeID ReturnValue;

	}; GetVertexConnectedEdge_Params Params;

	Params.VertexID = VertexID;
	Params.ConnectedEdgeNumber = ConnectedEdgeNumber;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function EditableMesh.EditableMesh.GetVertexAdjacentVertices
inline void UEditableMesh::GetVertexAdjacentVertices(struct FVertexID VertexID, struct TArray<struct FVertexID>& OutAdjacentVertexIDs) {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetVertexAdjacentVertices");

	struct GetVertexAdjacentVertices_Params {
		struct FVertexID VertexID;
		struct TArray<struct FVertexID>& OutAdjacentVertexIDs;
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
inline struct FSubdivisionLimitData UEditableMesh::GetSubdivisionLimitData() {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetSubdivisionLimitData");

	struct GetSubdivisionLimitData_Params {
		
		struct FSubdivisionLimitData ReturnValue;

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
inline int32_t UEditableMesh::GetPolygonTriangulatedTriangleCount(struct FPolygonID PolygonID) {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetPolygonTriangulatedTriangleCount");

	struct GetPolygonTriangulatedTriangleCount_Params {
		struct FPolygonID PolygonID;
		int32_t ReturnValue;

	}; GetPolygonTriangulatedTriangleCount_Params Params;

	Params.PolygonID = PolygonID;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function EditableMesh.EditableMesh.GetPolygonTriangulatedTriangle
inline struct FTriangleID UEditableMesh::GetPolygonTriangulatedTriangle(struct FPolygonID PolygonID, int32_t PolygonTriangleNumber) {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetPolygonTriangulatedTriangle");

	struct GetPolygonTriangulatedTriangle_Params {
		struct FPolygonID PolygonID;
		int32_t PolygonTriangleNumber;
		struct FTriangleID ReturnValue;

	}; GetPolygonTriangulatedTriangle_Params Params;

	Params.PolygonID = PolygonID;
	Params.PolygonTriangleNumber = PolygonTriangleNumber;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function EditableMesh.EditableMesh.GetPolygonPerimeterVertices
inline void UEditableMesh::GetPolygonPerimeterVertices(struct FPolygonID PolygonID, struct TArray<struct FVertexID>& OutPolygonPerimeterVertexIDs) {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetPolygonPerimeterVertices");

	struct GetPolygonPerimeterVertices_Params {
		struct FPolygonID PolygonID;
		struct TArray<struct FVertexID>& OutPolygonPerimeterVertexIDs;
	}; GetPolygonPerimeterVertices_Params Params;

	Params.PolygonID = PolygonID;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	OutPolygonPerimeterVertexIDs = Params.OutPolygonPerimeterVertexIDs;

}

// Function EditableMesh.EditableMesh.GetPolygonPerimeterVertexInstances
inline void UEditableMesh::GetPolygonPerimeterVertexInstances(struct FPolygonID PolygonID, struct TArray<struct FVertexInstanceID>& OutPolygonPerimeterVertexInstanceIDs) {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetPolygonPerimeterVertexInstances");

	struct GetPolygonPerimeterVertexInstances_Params {
		struct FPolygonID PolygonID;
		struct TArray<struct FVertexInstanceID>& OutPolygonPerimeterVertexInstanceIDs;
	}; GetPolygonPerimeterVertexInstances_Params Params;

	Params.PolygonID = PolygonID;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	OutPolygonPerimeterVertexInstanceIDs = Params.OutPolygonPerimeterVertexInstanceIDs;

}

// Function EditableMesh.EditableMesh.GetPolygonPerimeterVertexInstance
inline struct FVertexInstanceID UEditableMesh::GetPolygonPerimeterVertexInstance(struct FPolygonID PolygonID, int32_t PolygonVertexNumber) {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetPolygonPerimeterVertexInstance");

	struct GetPolygonPerimeterVertexInstance_Params {
		struct FPolygonID PolygonID;
		int32_t PolygonVertexNumber;
		struct FVertexInstanceID ReturnValue;

	}; GetPolygonPerimeterVertexInstance_Params Params;

	Params.PolygonID = PolygonID;
	Params.PolygonVertexNumber = PolygonVertexNumber;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function EditableMesh.EditableMesh.GetPolygonPerimeterVertexCount
inline int32_t UEditableMesh::GetPolygonPerimeterVertexCount(struct FPolygonID PolygonID) {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetPolygonPerimeterVertexCount");

	struct GetPolygonPerimeterVertexCount_Params {
		struct FPolygonID PolygonID;
		int32_t ReturnValue;

	}; GetPolygonPerimeterVertexCount_Params Params;

	Params.PolygonID = PolygonID;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function EditableMesh.EditableMesh.GetPolygonPerimeterVertex
inline struct FVertexID UEditableMesh::GetPolygonPerimeterVertex(struct FPolygonID PolygonID, int32_t PolygonVertexNumber) {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetPolygonPerimeterVertex");

	struct GetPolygonPerimeterVertex_Params {
		struct FPolygonID PolygonID;
		int32_t PolygonVertexNumber;
		struct FVertexID ReturnValue;

	}; GetPolygonPerimeterVertex_Params Params;

	Params.PolygonID = PolygonID;
	Params.PolygonVertexNumber = PolygonVertexNumber;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function EditableMesh.EditableMesh.GetPolygonPerimeterEdges
inline void UEditableMesh::GetPolygonPerimeterEdges(struct FPolygonID PolygonID, struct TArray<struct FEdgeID>& OutPolygonPerimeterEdgeIDs) {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetPolygonPerimeterEdges");

	struct GetPolygonPerimeterEdges_Params {
		struct FPolygonID PolygonID;
		struct TArray<struct FEdgeID>& OutPolygonPerimeterEdgeIDs;
	}; GetPolygonPerimeterEdges_Params Params;

	Params.PolygonID = PolygonID;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	OutPolygonPerimeterEdgeIDs = Params.OutPolygonPerimeterEdgeIDs;

}

// Function EditableMesh.EditableMesh.GetPolygonPerimeterEdgeCount
inline int32_t UEditableMesh::GetPolygonPerimeterEdgeCount(struct FPolygonID PolygonID) {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetPolygonPerimeterEdgeCount");

	struct GetPolygonPerimeterEdgeCount_Params {
		struct FPolygonID PolygonID;
		int32_t ReturnValue;

	}; GetPolygonPerimeterEdgeCount_Params Params;

	Params.PolygonID = PolygonID;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function EditableMesh.EditableMesh.GetPolygonPerimeterEdge
inline struct FEdgeID UEditableMesh::GetPolygonPerimeterEdge(struct FPolygonID PolygonID, int32_t PerimeterEdgeNumber, char& bOutEdgeWindingIsReversedForPolygon) {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetPolygonPerimeterEdge");

	struct GetPolygonPerimeterEdge_Params {
		struct FPolygonID PolygonID;
		int32_t PerimeterEdgeNumber;
		char& bOutEdgeWindingIsReversedForPolygon;
		struct FEdgeID ReturnValue;

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
inline struct FPolygonID UEditableMesh::GetPolygonInGroup(struct FPolygonGroupID PolygonGroupID, int32_t PolygonNumber) {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetPolygonInGroup");

	struct GetPolygonInGroup_Params {
		struct FPolygonGroupID PolygonGroupID;
		int32_t PolygonNumber;
		struct FPolygonID ReturnValue;

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
inline int32_t UEditableMesh::GetPolygonCountInGroup(struct FPolygonGroupID PolygonGroupID) {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetPolygonCountInGroup");

	struct GetPolygonCountInGroup_Params {
		struct FPolygonGroupID PolygonGroupID;
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
inline void UEditableMesh::GetPolygonAdjacentPolygons(struct FPolygonID PolygonID, struct TArray<struct FPolygonID>& OutAdjacentPolygons) {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetPolygonAdjacentPolygons");

	struct GetPolygonAdjacentPolygons_Params {
		struct FPolygonID PolygonID;
		struct TArray<struct FPolygonID>& OutAdjacentPolygons;
	}; GetPolygonAdjacentPolygons_Params Params;

	Params.PolygonID = PolygonID;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	OutAdjacentPolygons = Params.OutAdjacentPolygons;

}

// Function EditableMesh.EditableMesh.GetGroupForPolygon
inline struct FPolygonGroupID UEditableMesh::GetGroupForPolygon(struct FPolygonID PolygonID) {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetGroupForPolygon");

	struct GetGroupForPolygon_Params {
		struct FPolygonID PolygonID;
		struct FPolygonGroupID ReturnValue;

	}; GetGroupForPolygon_Params Params;

	Params.PolygonID = PolygonID;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function EditableMesh.EditableMesh.GetFirstValidPolygonGroup
inline struct FPolygonGroupID UEditableMesh::GetFirstValidPolygonGroup() {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetFirstValidPolygonGroup");

	struct GetFirstValidPolygonGroup_Params {
		
		struct FPolygonGroupID ReturnValue;

	}; GetFirstValidPolygonGroup_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function EditableMesh.EditableMesh.GetEdgeVertices
inline void UEditableMesh::GetEdgeVertices(struct FEdgeID EdgeID, struct FVertexID& OutEdgeVertexID0, struct FVertexID& OutEdgeVertexID1) {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetEdgeVertices");

	struct GetEdgeVertices_Params {
		struct FEdgeID EdgeID;
		struct FVertexID& OutEdgeVertexID0;
		struct FVertexID& OutEdgeVertexID1;
	}; GetEdgeVertices_Params Params;

	Params.EdgeID = EdgeID;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	OutEdgeVertexID0 = Params.OutEdgeVertexID0;
	OutEdgeVertexID1 = Params.OutEdgeVertexID1;

}

// Function EditableMesh.EditableMesh.GetEdgeVertex
inline struct FVertexID UEditableMesh::GetEdgeVertex(struct FEdgeID EdgeID, int32_t EdgeVertexNumber) {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetEdgeVertex");

	struct GetEdgeVertex_Params {
		struct FEdgeID EdgeID;
		int32_t EdgeVertexNumber;
		struct FVertexID ReturnValue;

	}; GetEdgeVertex_Params Params;

	Params.EdgeID = EdgeID;
	Params.EdgeVertexNumber = EdgeVertexNumber;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function EditableMesh.EditableMesh.GetEdgeThatConnectsVertices
inline struct FEdgeID UEditableMesh::GetEdgeThatConnectsVertices(struct FVertexID VertexID0, struct FVertexID VertexID1) {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetEdgeThatConnectsVertices");

	struct GetEdgeThatConnectsVertices_Params {
		struct FVertexID VertexID0;
		struct FVertexID VertexID1;
		struct FEdgeID ReturnValue;

	}; GetEdgeThatConnectsVertices_Params Params;

	Params.VertexID0 = VertexID0;
	Params.VertexID1 = VertexID1;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function EditableMesh.EditableMesh.GetEdgeLoopElements
inline void UEditableMesh::GetEdgeLoopElements(struct FEdgeID EdgeID, struct TArray<struct FEdgeID>& EdgeLoopIDs) {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetEdgeLoopElements");

	struct GetEdgeLoopElements_Params {
		struct FEdgeID EdgeID;
		struct TArray<struct FEdgeID>& EdgeLoopIDs;
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
inline void UEditableMesh::GetEdgeConnectedPolygons(struct FEdgeID EdgeID, struct TArray<struct FPolygonID>& OutConnectedPolygonIDs) {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetEdgeConnectedPolygons");

	struct GetEdgeConnectedPolygons_Params {
		struct FEdgeID EdgeID;
		struct TArray<struct FPolygonID>& OutConnectedPolygonIDs;
	}; GetEdgeConnectedPolygons_Params Params;

	Params.EdgeID = EdgeID;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	OutConnectedPolygonIDs = Params.OutConnectedPolygonIDs;

}

// Function EditableMesh.EditableMesh.GetEdgeConnectedPolygonCount
inline int32_t UEditableMesh::GetEdgeConnectedPolygonCount(struct FEdgeID EdgeID) {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetEdgeConnectedPolygonCount");

	struct GetEdgeConnectedPolygonCount_Params {
		struct FEdgeID EdgeID;
		int32_t ReturnValue;

	}; GetEdgeConnectedPolygonCount_Params Params;

	Params.EdgeID = EdgeID;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function EditableMesh.EditableMesh.GetEdgeConnectedPolygon
inline struct FPolygonID UEditableMesh::GetEdgeConnectedPolygon(struct FEdgeID EdgeID, int32_t ConnectedPolygonNumber) {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetEdgeConnectedPolygon");

	struct GetEdgeConnectedPolygon_Params {
		struct FEdgeID EdgeID;
		int32_t ConnectedPolygonNumber;
		struct FPolygonID ReturnValue;

	}; GetEdgeConnectedPolygon_Params Params;

	Params.EdgeID = EdgeID;
	Params.ConnectedPolygonNumber = ConnectedPolygonNumber;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function EditableMesh.EditableMesh.GeneratePolygonTangentsAndNormals
inline void UEditableMesh::GeneratePolygonTangentsAndNormals(struct TArray<struct FPolygonID>& PolygonIDs) {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GeneratePolygonTangentsAndNormals");

	struct GeneratePolygonTangentsAndNormals_Params {
		struct TArray<struct FPolygonID>& PolygonIDs;
	}; GeneratePolygonTangentsAndNormals_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	PolygonIDs = Params.PolygonIDs;

}

// Function EditableMesh.EditableMesh.FlipPolygons
inline void UEditableMesh::FlipPolygons(struct TArray<struct FPolygonID>& PolygonIDs) {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.FlipPolygons");

	struct FlipPolygons_Params {
		struct TArray<struct FPolygonID>& PolygonIDs;
	}; FlipPolygons_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	PolygonIDs = Params.PolygonIDs;

}

// Function EditableMesh.EditableMesh.FindPolygonPerimeterVertexNumberForVertex
inline int32_t UEditableMesh::FindPolygonPerimeterVertexNumberForVertex(struct FPolygonID PolygonID, struct FVertexID VertexID) {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.FindPolygonPerimeterVertexNumberForVertex");

	struct FindPolygonPerimeterVertexNumberForVertex_Params {
		struct FPolygonID PolygonID;
		struct FVertexID VertexID;
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
inline int32_t UEditableMesh::FindPolygonPerimeterEdgeNumberForVertices(struct FPolygonID PolygonID, struct FVertexID EdgeVertexID0, struct FVertexID EdgeVertexID1) {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.FindPolygonPerimeterEdgeNumberForVertices");

	struct FindPolygonPerimeterEdgeNumberForVertices_Params {
		struct FPolygonID PolygonID;
		struct FVertexID EdgeVertexID0;
		struct FVertexID EdgeVertexID1;
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
inline void UEditableMesh::FindPolygonLoop(struct FEdgeID EdgeID, struct TArray<struct FEdgeID>& OutEdgeLoopEdgeIDs, struct TArray<struct FEdgeID>& OutFlippedEdgeIDs, struct TArray<struct FEdgeID>& OutReversedEdgeIDPathToTake, struct TArray<struct FPolygonID>& OutPolygonIDsToSplit) {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.FindPolygonLoop");

	struct FindPolygonLoop_Params {
		struct FEdgeID EdgeID;
		struct TArray<struct FEdgeID>& OutEdgeLoopEdgeIDs;
		struct TArray<struct FEdgeID>& OutFlippedEdgeIDs;
		struct TArray<struct FEdgeID>& OutReversedEdgeIDPathToTake;
		struct TArray<struct FPolygonID>& OutPolygonIDsToSplit;
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
inline void UEditableMesh::ExtrudePolygons(struct TArray<struct FPolygonID>& Polygons, float ExtrudeDistance, char bKeepNeighborsTogether, struct TArray<struct FPolygonID>& OutNewExtrudedFrontPolygons) {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.ExtrudePolygons");

	struct ExtrudePolygons_Params {
		struct TArray<struct FPolygonID>& Polygons;
		float ExtrudeDistance;
		char bKeepNeighborsTogether;
		struct TArray<struct FPolygonID>& OutNewExtrudedFrontPolygons;
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
inline void UEditableMesh::ExtendVertices(struct TArray<struct FVertexID>& VertexIDs, char bOnlyExtendClosestEdge, struct FVector ReferencePosition, struct TArray<struct FVertexID>& OutNewExtendedVertexIDs) {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.ExtendVertices");

	struct ExtendVertices_Params {
		struct TArray<struct FVertexID>& VertexIDs;
		char bOnlyExtendClosestEdge;
		struct FVector ReferencePosition;
		struct TArray<struct FVertexID>& OutNewExtendedVertexIDs;
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
inline void UEditableMesh::ExtendEdges(struct TArray<struct FEdgeID>& EdgeIDs, char bWeldNeighbors, struct TArray<struct FEdgeID>& OutNewExtendedEdgeIDs) {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.ExtendEdges");

	struct ExtendEdges_Params {
		struct TArray<struct FEdgeID>& EdgeIDs;
		char bWeldNeighbors;
		struct TArray<struct FEdgeID>& OutNewExtendedEdgeIDs;
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
inline void UEditableMesh::DeleteVertexInstances(struct TArray<struct FVertexInstanceID>& VertexInstanceIDsToDelete, char bDeleteOrphanedVertices) {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.DeleteVertexInstances");

	struct DeleteVertexInstances_Params {
		struct TArray<struct FVertexInstanceID>& VertexInstanceIDsToDelete;
		char bDeleteOrphanedVertices;
	}; DeleteVertexInstances_Params Params;

	Params.bDeleteOrphanedVertices = bDeleteOrphanedVertices;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	VertexInstanceIDsToDelete = Params.VertexInstanceIDsToDelete;

}

// Function EditableMesh.EditableMesh.DeleteVertexAndConnectedEdgesAndPolygons
inline void UEditableMesh::DeleteVertexAndConnectedEdgesAndPolygons(struct FVertexID VertexID, char bDeleteOrphanedEdges, char bDeleteOrphanedVertices, char bDeleteOrphanedVertexInstances, char bDeleteEmptyPolygonGroups) {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.DeleteVertexAndConnectedEdgesAndPolygons");

	struct DeleteVertexAndConnectedEdgesAndPolygons_Params {
		struct FVertexID VertexID;
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
inline void UEditableMesh::DeletePolygons(struct TArray<struct FPolygonID>& PolygonIDsToDelete, char bDeleteOrphanedEdges, char bDeleteOrphanedVertices, char bDeleteOrphanedVertexInstances, char bDeleteEmptyPolygonGroups) {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.DeletePolygons");

	struct DeletePolygons_Params {
		struct TArray<struct FPolygonID>& PolygonIDsToDelete;
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
inline void UEditableMesh::DeletePolygonGroups(struct TArray<struct FPolygonGroupID>& PolygonGroupIDs) {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.DeletePolygonGroups");

	struct DeletePolygonGroups_Params {
		struct TArray<struct FPolygonGroupID>& PolygonGroupIDs;
	}; DeletePolygonGroups_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	PolygonGroupIDs = Params.PolygonGroupIDs;

}

// Function EditableMesh.EditableMesh.DeleteOrphanVertices
inline void UEditableMesh::DeleteOrphanVertices(struct TArray<struct FVertexID>& VertexIDsToDelete) {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.DeleteOrphanVertices");

	struct DeleteOrphanVertices_Params {
		struct TArray<struct FVertexID>& VertexIDsToDelete;
	}; DeleteOrphanVertices_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	VertexIDsToDelete = Params.VertexIDsToDelete;

}

// Function EditableMesh.EditableMesh.DeleteEdges
inline void UEditableMesh::DeleteEdges(struct TArray<struct FEdgeID>& EdgeIDsToDelete, char bDeleteOrphanedVertices) {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.DeleteEdges");

	struct DeleteEdges_Params {
		struct TArray<struct FEdgeID>& EdgeIDsToDelete;
		char bDeleteOrphanedVertices;
	}; DeleteEdges_Params Params;

	Params.bDeleteOrphanedVertices = bDeleteOrphanedVertices;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	EdgeIDsToDelete = Params.EdgeIDsToDelete;

}

// Function EditableMesh.EditableMesh.DeleteEdgeAndConnectedPolygons
inline void UEditableMesh::DeleteEdgeAndConnectedPolygons(struct FEdgeID EdgeID, char bDeleteOrphanedEdges, char bDeleteOrphanedVertices, char bDeleteOrphanedVertexInstances, char bDeleteEmptyPolygonGroups) {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.DeleteEdgeAndConnectedPolygons");

	struct DeleteEdgeAndConnectedPolygons_Params {
		struct FEdgeID EdgeID;
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
inline void UEditableMesh::CreateVertices(struct TArray<struct FVertexToCreate>& VerticesToCreate, struct TArray<struct FVertexID>& OutNewVertexIDs) {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.CreateVertices");

	struct CreateVertices_Params {
		struct TArray<struct FVertexToCreate>& VerticesToCreate;
		struct TArray<struct FVertexID>& OutNewVertexIDs;
	}; CreateVertices_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	VerticesToCreate = Params.VerticesToCreate;
	OutNewVertexIDs = Params.OutNewVertexIDs;

}

// Function EditableMesh.EditableMesh.CreateVertexInstances
inline void UEditableMesh::CreateVertexInstances(struct TArray<struct FVertexInstanceToCreate>& VertexInstancesToCreate, struct TArray<struct FVertexInstanceID>& OutNewVertexInstanceIDs) {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.CreateVertexInstances");

	struct CreateVertexInstances_Params {
		struct TArray<struct FVertexInstanceToCreate>& VertexInstancesToCreate;
		struct TArray<struct FVertexInstanceID>& OutNewVertexInstanceIDs;
	}; CreateVertexInstances_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	VertexInstancesToCreate = Params.VertexInstancesToCreate;
	OutNewVertexInstanceIDs = Params.OutNewVertexInstanceIDs;

}

// Function EditableMesh.EditableMesh.CreatePolygons
inline void UEditableMesh::CreatePolygons(struct TArray<struct FPolygonToCreate>& PolygonsToCreate, struct TArray<struct FPolygonID>& OutNewPolygonIDs, struct TArray<struct FEdgeID>& OutNewEdgeIDs) {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.CreatePolygons");

	struct CreatePolygons_Params {
		struct TArray<struct FPolygonToCreate>& PolygonsToCreate;
		struct TArray<struct FPolygonID>& OutNewPolygonIDs;
		struct TArray<struct FEdgeID>& OutNewEdgeIDs;
	}; CreatePolygons_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	PolygonsToCreate = Params.PolygonsToCreate;
	OutNewPolygonIDs = Params.OutNewPolygonIDs;
	OutNewEdgeIDs = Params.OutNewEdgeIDs;

}

// Function EditableMesh.EditableMesh.CreatePolygonGroups
inline void UEditableMesh::CreatePolygonGroups(struct TArray<struct FPolygonGroupToCreate>& PolygonGroupsToCreate, struct TArray<struct FPolygonGroupID>& OutNewPolygonGroupIDs) {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.CreatePolygonGroups");

	struct CreatePolygonGroups_Params {
		struct TArray<struct FPolygonGroupToCreate>& PolygonGroupsToCreate;
		struct TArray<struct FPolygonGroupID>& OutNewPolygonGroupIDs;
	}; CreatePolygonGroups_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	PolygonGroupsToCreate = Params.PolygonGroupsToCreate;
	OutNewPolygonGroupIDs = Params.OutNewPolygonGroupIDs;

}

// Function EditableMesh.EditableMesh.CreateMissingPolygonPerimeterEdges
inline void UEditableMesh::CreateMissingPolygonPerimeterEdges(struct FPolygonID PolygonID, struct TArray<struct FEdgeID>& OutNewEdgeIDs) {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.CreateMissingPolygonPerimeterEdges");

	struct CreateMissingPolygonPerimeterEdges_Params {
		struct FPolygonID PolygonID;
		struct TArray<struct FEdgeID>& OutNewEdgeIDs;
	}; CreateMissingPolygonPerimeterEdges_Params Params;

	Params.PolygonID = PolygonID;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	OutNewEdgeIDs = Params.OutNewEdgeIDs;

}

// Function EditableMesh.EditableMesh.CreateEmptyVertexRange
inline void UEditableMesh::CreateEmptyVertexRange(int32_t NumVerticesToCreate, struct TArray<struct FVertexID>& OutNewVertexIDs) {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.CreateEmptyVertexRange");

	struct CreateEmptyVertexRange_Params {
		int32_t NumVerticesToCreate;
		struct TArray<struct FVertexID>& OutNewVertexIDs;
	}; CreateEmptyVertexRange_Params Params;

	Params.NumVerticesToCreate = NumVerticesToCreate;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	OutNewVertexIDs = Params.OutNewVertexIDs;

}

// Function EditableMesh.EditableMesh.CreateEdges
inline void UEditableMesh::CreateEdges(struct TArray<struct FEdgeToCreate>& EdgesToCreate, struct TArray<struct FEdgeID>& OutNewEdgeIDs) {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.CreateEdges");

	struct CreateEdges_Params {
		struct TArray<struct FEdgeToCreate>& EdgesToCreate;
		struct TArray<struct FEdgeID>& OutNewEdgeIDs;
	}; CreateEdges_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	EdgesToCreate = Params.EdgesToCreate;
	OutNewEdgeIDs = Params.OutNewEdgeIDs;

}

// Function EditableMesh.EditableMesh.ComputePolygonsSharedEdges
inline void UEditableMesh::ComputePolygonsSharedEdges(struct TArray<struct FPolygonID>& PolygonIDs, struct TArray<struct FEdgeID>& OutSharedEdgeIDs) {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.ComputePolygonsSharedEdges");

	struct ComputePolygonsSharedEdges_Params {
		struct TArray<struct FPolygonID>& PolygonIDs;
		struct TArray<struct FEdgeID>& OutSharedEdgeIDs;
	}; ComputePolygonsSharedEdges_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	PolygonIDs = Params.PolygonIDs;
	OutSharedEdgeIDs = Params.OutSharedEdgeIDs;

}

// Function EditableMesh.EditableMesh.ComputePolygonPlane
inline struct FPlane UEditableMesh::ComputePolygonPlane(struct FPolygonID PolygonID) {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.ComputePolygonPlane");

	struct ComputePolygonPlane_Params {
		struct FPolygonID PolygonID;
		struct FPlane ReturnValue;

	}; ComputePolygonPlane_Params Params;

	Params.PolygonID = PolygonID;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function EditableMesh.EditableMesh.ComputePolygonNormal
inline struct FVector UEditableMesh::ComputePolygonNormal(struct FPolygonID PolygonID) {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.ComputePolygonNormal");

	struct ComputePolygonNormal_Params {
		struct FPolygonID PolygonID;
		struct FVector ReturnValue;

	}; ComputePolygonNormal_Params Params;

	Params.PolygonID = PolygonID;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function EditableMesh.EditableMesh.ComputePolygonCenter
inline struct FVector UEditableMesh::ComputePolygonCenter(struct FPolygonID PolygonID) {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.ComputePolygonCenter");

	struct ComputePolygonCenter_Params {
		struct FPolygonID PolygonID;
		struct FVector ReturnValue;

	}; ComputePolygonCenter_Params Params;

	Params.PolygonID = PolygonID;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function EditableMesh.EditableMesh.ComputeBoundingBoxAndSphere
inline struct FBoxSphereBounds UEditableMesh::ComputeBoundingBoxAndSphere() {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.ComputeBoundingBoxAndSphere");

	struct ComputeBoundingBoxAndSphere_Params {
		
		struct FBoxSphereBounds ReturnValue;

	}; ComputeBoundingBoxAndSphere_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function EditableMesh.EditableMesh.ComputeBoundingBox
inline struct FBox UEditableMesh::ComputeBoundingBox() {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.ComputeBoundingBox");

	struct ComputeBoundingBox_Params {
		
		struct FBox ReturnValue;

	}; ComputeBoundingBox_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function EditableMesh.EditableMesh.CommitInstance
inline struct UEditableMesh UEditableMesh::CommitInstance(struct UPrimitiveComponent ComponentToInstanceTo) {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.CommitInstance");

	struct CommitInstance_Params {
		struct UPrimitiveComponent ComponentToInstanceTo;
		struct UEditableMesh ReturnValue;

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
inline void UEditableMesh::ChangePolygonsVertexInstances(struct TArray<struct FChangeVertexInstancesForPolygon>& VertexInstancesForPolygons) {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.ChangePolygonsVertexInstances");

	struct ChangePolygonsVertexInstances_Params {
		struct TArray<struct FChangeVertexInstancesForPolygon>& VertexInstancesForPolygons;
	}; ChangePolygonsVertexInstances_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	VertexInstancesForPolygons = Params.VertexInstancesForPolygons;

}

// Function EditableMesh.EditableMesh.BevelPolygons
inline void UEditableMesh::BevelPolygons(struct TArray<struct FPolygonID>& PolygonIDs, float BevelFixedDistance, float BevelProgressTowardCenter, struct TArray<struct FPolygonID>& OutNewCenterPolygonIDs, struct TArray<struct FPolygonID>& OutNewSidePolygonIDs) {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.BevelPolygons");

	struct BevelPolygons_Params {
		struct TArray<struct FPolygonID>& PolygonIDs;
		float BevelFixedDistance;
		float BevelProgressTowardCenter;
		struct TArray<struct FPolygonID>& OutNewCenterPolygonIDs;
		struct TArray<struct FPolygonID>& OutNewSidePolygonIDs;
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
inline void UEditableMesh::AssignPolygonsToPolygonGroups(struct TArray<struct FPolygonGroupForPolygon>& PolygonGroupForPolygons, char bDeleteOrphanedPolygonGroups) {
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.AssignPolygonsToPolygonGroups");

	struct AssignPolygonsToPolygonGroups_Params {
		struct TArray<struct FPolygonGroupForPolygon>& PolygonGroupForPolygons;
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

