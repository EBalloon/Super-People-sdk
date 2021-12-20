// Class ClothingSystemRuntimeInterface.ClothingAssetBase
struct UClothingAssetBase : Object {
	struct FString ImportedFilePath; //  0x28 Size(10)
	Unknown AssetGuid; //  0x38 Size(10)
};

// Class ClothingSystemRuntimeInterface.ClothPhysicalMeshDataBase_Legacy
struct UClothPhysicalMeshDataBase_Legacy : Object {
	Unknown Vertices; //  0x28 Size(10)
	Unknown Normals; //  0x38 Size(10)
	Unknown Indices; //  0x48 Size(10)
	Unknown InverseMasses; //  0x58 Size(10)
	Unknown BoneData; //  0x68 Size(10)
	int32_t NumFixedVerts; //  0x78 Size(4)
	int32_t MaxBoneWeights; //  0x7c Size(4)
	Unknown SelfCollisionIndices; //  0x80 Size(10)
};

