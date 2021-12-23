// Class ClothingSystemRuntimeInterface.ClothingAssetBase
class UClothingAssetBase : Object {
	struct FString ImportedFilePath; // 0x28 (16)
	struct Unknown AssetGuid; // 0x38 (16)
};

// Class ClothingSystemRuntimeInterface.ClothPhysicalMeshDataBase_Legac
class UClothPhysicalMeshDataBase_Legac : Object {
	struct TArray<Unknown> Vertices; // 0x28 (16)
	struct TArray<Unknown> Normals; // 0x38 (16)
	struct TArray<Unknown> Indices; // 0x48 (16)
	struct TArray<Unknown> InverseMasses; // 0x58 (16)
	struct TArray<Unknown> BoneData; // 0x68 (16)
	int32_t NumFixedVerts; // 0x78 (4)
	int32_t MaxBoneWeights; // 0x7C (4)
	struct TArray<Unknown> SelfCollisionIndices; // 0x80 (16)
};

// ScriptStruct ClothingSystemRuntimeInterface.ClothCollisionData
struct FClothCollisionData {
	struct TArray<Unknown> Spheres; // 0x0 (16)
	struct TArray<Unknown> SphereConnections; // 0x10 (16)
	struct TArray<Unknown> Convexes; // 0x20 (16)
	struct TArray<Unknown> Boxes; // 0x30 (16)
};

// ScriptStruct ClothingSystemRuntimeInterface.ClothCollisionPrim_Box
struct FClothCollisionPrim_Box {
	struct Unknown LocalPosition; // 0x0 (12)
	struct Unknown LocalRotation; // 0x10 (16)
	struct Unknown HalfExtents; // 0x20 (12)
	int32_t BoneIndex; // 0x2C (4)
};

// ScriptStruct ClothingSystemRuntimeInterface.ClothCollisionPrim_Convex
struct FClothCollisionPrim_Convex {
	struct TArray<Unknown> Planes; // 0x0 (16)
	struct TArray<Unknown> SurfacePoints; // 0x10 (16)
	int32_t BoneIndex; // 0x20 (4)
};

// ScriptStruct ClothingSystemRuntimeInterface.ClothCollisionPrim_SphereConnec
struct FClothCollisionPrim_SphereConnec {
	int32_t SphereIndices[0x2]; // 0x0 (8)
};

// ScriptStruct ClothingSystemRuntimeInterface.ClothCollisionPrim_Sphere
struct FClothCollisionPrim_Sphere {
	int32_t BoneIndex; // 0x0 (4)
	float Radius; // 0x4 (4)
	struct Unknown LocalPosition; // 0x8 (12)
};

// ScriptStruct ClothingSystemRuntimeInterface.ClothVertBoneData
struct FClothVertBoneData {
	int32_t NumInfluences; // 0x0 (4)
	uint16_t BoneIndices[0xc]; // 0x4 (24)
	float BoneWeights[0xc]; // 0x1C (48)
};

