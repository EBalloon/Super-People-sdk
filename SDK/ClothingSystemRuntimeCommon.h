// Enum ClothingSystemRuntimeCommon.EClothingWindMethod_Legacy
enum class EClothingWindMethod_Legacy : uint8 {
	EClothingWindMethod_Legacy = 0
	EClothingWindMethod_Legacy = 1
	EClothingWindMethod_Legacy = 2
};

// Enum ClothingSystemRuntimeCommon.EWeightMapTargetCommon
enum class EWeightMapTargetCommon : uint8 {
	EWeightMapTargetCommon = 0
	EWeightMapTargetCommon = 1
	EWeightMapTargetCommon = 2
	EWeightMapTargetCommon = 3
	EWeightMapTargetCommon = 4
	EWeightMapTargetCommon = 5
};

// Class ClothingSystemRuntimeCommon.ClothingAssetCommon
struct UClothingAssetCommon : UClothingAssetBase {
	struct Unknown PhysicsAsset; // 0x48 (8)
	struct TMap<Unknown, Unknown>Unknown ClothConfigs; // 0x50 (80)
	struct Unknown ClothSharedSimConfig; // 0xA0 (8)
	struct Unknown ClothSimConfig; // 0xA8 (8)
	struct Unknown ChaosClothSimConfig; // 0xB0 (8)
	struct TArray<Unknown> ClothLODData; // 0xB8 (16)
	struct TArray<Unknown> LODData; // 0xC8 (16)
	struct TArray<Unknown> LodMap; // 0xD8 (16)
	struct TArray<Unknown> UsedBoneNames; // 0xE8 (16)
	struct TArray<Unknown> UsedBoneIndices; // 0xF8 (16)
	int32_t ReferenceBoneIndex; // 0x108 (4)
	struct Unknown CustomData; // 0x110 (8)
	struct Unknown ClothConfig; // 0x118 (212)
};

// Class ClothingSystemRuntimeCommon.ClothLODDataCommon_Legacy
struct UClothLODDataCommon_Legacy : Object {
	struct Unknown PhysicalMeshData; // 0x28 (8)
	struct Unknown ClothPhysicalMeshData; // 0x30 (248)
	struct Unknown CollisionData; // 0x128 (64)
};

