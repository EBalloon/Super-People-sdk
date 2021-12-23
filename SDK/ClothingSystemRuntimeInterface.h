// Class ClothingSystemRuntimeInterface.ClothingAssetBase
struct UClothingAssetBase : Object {
	struct FString ImportedFilePath; // 0x28 (16)
	struct Unknown AssetGuid; // 0x38 (16)
};

// Class ClothingSystemRuntimeInterface.ClothPhysicalMeshDataBase_Legacy
struct UClothPhysicalMeshDataBase_Legacy : Object {
	struct TArray<Unknown> Vertices; // 0x28 (16)
	struct TArray<Unknown> Normals; // 0x38 (16)
	struct TArray<Unknown> Indices; // 0x48 (16)
	struct TArray<Unknown> InverseMasses; // 0x58 (16)
	struct TArray<Unknown> BoneData; // 0x68 (16)
	int32_t NumFixedVerts; // 0x78 (4)
	int32_t MaxBoneWeights; // 0x7C (4)
	struct TArray<Unknown> SelfCollisionIndices; // 0x80 (16)
};

