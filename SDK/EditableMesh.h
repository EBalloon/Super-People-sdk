// Enum EditableMesh.ETriangleTessellationMode
enum class ETriangleTessellationMode : uint8 {
	ETriangleTessellationMode = 0,
	ETriangleTessellationMode = 1,
	ETriangleTessellationMode = 2
};

// Enum EditableMesh.EInsetPolygonsMode
enum class EInsetPolygonsMode : uint8 {
	EInsetPolygonsMode = 0,
	EInsetPolygonsMode = 1,
	EInsetPolygonsMode = 2,
	EInsetPolygonsMode = 3
};

// Enum EditableMesh.EPolygonEdgeHardness
enum class EPolygonEdgeHardness : uint8 {
	EPolygonEdgeHardness = 0,
	EPolygonEdgeHardness = 1,
	EPolygonEdgeHardness = 2,
	EPolygonEdgeHardness = 3,
	EPolygonEdgeHardness = 4
};

// Enum EditableMesh.EMeshElementAttributeType
enum class EMeshElementAttributeType : uint8 {
	EMeshElementAttributeType = 0,
	EMeshElementAttributeType = 1,
	EMeshElementAttributeType = 2,
	EMeshElementAttributeType = 3,
	EMeshElementAttributeType = 4,
	EMeshElementAttributeType = 5,
	EMeshElementAttributeType = 6,
	EMeshElementAttributeType = 7,
	EMeshElementAttributeType = 8
};

// Enum EditableMesh.EMeshTopologyChange
enum class EMeshTopologyChange : uint8 {
	EMeshTopologyChange = 0,
	EMeshTopologyChange = 1,
	EMeshTopologyChange = 2
};

// Enum EditableMesh.EMeshModificationType
enum class EMeshModificationType : uint8 {
	EMeshModificationType = 0,
	EMeshModificationType = 1,
	EMeshModificationType = 2,
	EMeshModificationType = 3
};

// Class EditableMesh.EditableGeometryCollectionAdapter
struct UEditableGeometryCollectionAdapter : UEditableMeshAdapter {
	Unknown GeometryCollection; //  0x28 Size(8)
	Unknown OriginalGeometryCollection; //  0x30 Size(8)
	int32_t GeometryCollectionLODIndex; //  0x38 Size(4)
};

// Class EditableMesh.EditableMesh
struct UEditableMesh : Object {
	Unknown Adapters; //  0x3b8 Size(10)
	int32_t TextureCoordinateCount; //  0x3d0 Size(4)
	int32_t PendingCompactCounter; //  0x51c Size(4)
	int32_t SubdivisionCount; //  0x520 Size(4)

	void WeldVertices(Unknown& VertexIDs, Unknown& OutNewVertexID); // Function EditableMesh.EditableMesh.WeldVertices(Final|Native|Public|HasOutParms|BlueprintCallable) // <Game+0x176f9f0>
};

// Class EditableMesh.EditableStaticMeshAdapter
struct UEditableStaticMeshAdapter : UEditableMeshAdapter {
	Unknown StaticMesh; //  0x28 Size(8)
	Unknown OriginalStaticMesh; //  0x30 Size(8)
	int32_t StaticMeshLODIndex; //  0x38 Size(4)
};

