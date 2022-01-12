// Class ClothingSystemRuntimeInterface.ClothingAssetBase
class UClothingAssetBase : public Object {

public:

	struct FString ImportedFilePath; // 0x28 (16)
	struct FGuid AssetGuid; // 0x38 (16)
};

// Class ClothingSystemRuntimeInterface.ClothPhysicalMeshDataBase_Legacy
class UClothPhysicalMeshDataBase_Legacy : public Object {

public:

	struct TArray<struct FVector> Vertices; // 0x28 (16)
	struct TArray<struct FVector> Normals; // 0x38 (16)
	struct TArray<uint32_t> Indices; // 0x48 (16)
	struct TArray<float> InverseMasses; // 0x58 (16)
	struct TArray<struct FClothVertBoneData> BoneData; // 0x68 (16)
	int32_t NumFixedVerts; // 0x78 (4)
	int32_t MaxBoneWeights; // 0x7C (4)
	struct TArray<uint32_t> SelfCollisionIndices; // 0x80 (16)
};

// ScriptStruct ClothingSystemRuntimeInterface.ClothCollisionData
struct FClothCollisionData {
	struct TArray<struct FClothCollisionPrim_Sphere> Spheres; // 0x0 (16)
	struct TArray<struct FClothCollisionPrim_SphereConnection> SphereConnections; // 0x10 (16)
	struct TArray<struct FClothCollisionPrim_Convex> Convexes; // 0x20 (16)
	struct TArray<struct FClothCollisionPrim_Box> Boxes; // 0x30 (16)
};

// ScriptStruct ClothingSystemRuntimeInterface.ClothCollisionPrim_Box
struct FClothCollisionPrim_Box {
	struct FVector LocalPosition; // 0x0 (12)
	struct FQuat LocalRotation; // 0x10 (16)
	struct FVector HalfExtents; // 0x20 (12)
	int32_t BoneIndex; // 0x2C (4)
};

// ScriptStruct ClothingSystemRuntimeInterface.ClothCollisionPrim_Convex
struct FClothCollisionPrim_Convex {
	struct TArray<struct FPlane> Planes; // 0x0 (16)
	struct TArray<struct FVector> SurfacePoints; // 0x10 (16)
	int32_t BoneIndex; // 0x20 (4)
};

// ScriptStruct ClothingSystemRuntimeInterface.ClothCollisionPrim_SphereConnection
struct FClothCollisionPrim_SphereConnection {
	int32_t SphereIndices[0x2]; // 0x0 (8)
};

// ScriptStruct ClothingSystemRuntimeInterface.ClothCollisionPrim_Sphere
struct FClothCollisionPrim_Sphere {
	int32_t BoneIndex; // 0x0 (4)
	float Radius; // 0x4 (4)
	struct FVector LocalPosition; // 0x8 (12)
};

// ScriptStruct ClothingSystemRuntimeInterface.ClothVertBoneData
struct FClothVertBoneData {
	int32_t NumInfluences; // 0x0 (4)
	uint16_t BoneIndices[0xc]; // 0x4 (24)
	float BoneWeights[0xc]; // 0x1C (48)
};

