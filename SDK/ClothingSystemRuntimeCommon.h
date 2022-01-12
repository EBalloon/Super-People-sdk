// Enum ClothingSystemRuntimeCommon.EClothingWindMethod_Legacy
enum class EClothingWindMethod_Legacy : uint8_t {
	Legacy = 0,
	Accurate = 1,
	EClothingWindMethod_MAX = 2,
};

// Enum ClothingSystemRuntimeCommon.EWeightMapTargetCommon
enum class EWeightMapTargetCommon : uint8_t {
	None = 0,
	MaxDistance = 1,
	BackstopDistance = 2,
	BackstopRadius = 3,
	AnimDriveMultiplier = 4,
	EWeightMapTargetCommon_MAX = 5,
};

// Class ClothingSystemRuntimeCommon.ClothingAssetCommon
class UClothingAssetCommon : public UClothingAssetBase {

public:

	struct UPhysicsAsset PhysicsAsset; // 0x48 (8)
	struct TMap<struct FName, struct UClothConfigBase> ClothConfigs; // 0x50 (80)
	struct UClothConfigBase ClothSharedSimConfig; // 0xA0 (8)
	struct UClothConfigBase ClothSimConfig; // 0xA8 (8)
	struct UClothConfigBase ChaosClothSimConfig; // 0xB0 (8)
	struct TArray<struct UClothLODDataCommon_Legacy> ClothLODData; // 0xB8 (16)
	struct TArray<struct FClothLODDataCommon> LODData; // 0xC8 (16)
	struct TArray<int32_t> LodMap; // 0xD8 (16)
	struct TArray<struct FName> UsedBoneNames; // 0xE8 (16)
	struct TArray<int32_t> UsedBoneIndices; // 0xF8 (16)
	int32_t ReferenceBoneIndex; // 0x108 (4)
	struct UClothingAssetCustomData CustomData; // 0x110 (8)
	struct FClothConfig_Legacy ClothConfig; // 0x118 (212)
};

// Class ClothingSystemRuntimeCommon.ClothLODDataCommon_Legacy
class UClothLODDataCommon_Legacy : public Object {

public:

	struct UClothPhysicalMeshDataBase_Legacy PhysicalMeshData; // 0x28 (8)
	struct FClothPhysicalMeshData ClothPhysicalMeshData; // 0x30 (248)
	struct FClothCollisionData CollisionData; // 0x128 (64)
};

// ScriptStruct ClothingSystemRuntimeCommon.ClothConfig_Legacy
struct FClothConfig_Legacy {
	enum class EClothingWindMethod_Legacy WindMethod; // 0x0 (1)
	struct FClothConstraintSetup_Legacy VerticalConstraintConfig; // 0x4 (16)
	struct FClothConstraintSetup_Legacy HorizontalConstraintConfig; // 0x14 (16)
	struct FClothConstraintSetup_Legacy BendConstraintConfig; // 0x24 (16)
	struct FClothConstraintSetup_Legacy ShearConstraintConfig; // 0x34 (16)
	float SelfCollisionRadius; // 0x44 (4)
	float SelfCollisionStiffness; // 0x48 (4)
	float SelfCollisionCullScale; // 0x4C (4)
	struct FVector Damping; // 0x50 (12)
	float Friction; // 0x5C (4)
	float WindDragCoefficient; // 0x60 (4)
	float WindLiftCoefficient; // 0x64 (4)
	struct FVector LinearDrag; // 0x68 (12)
	struct FVector AngularDrag; // 0x74 (12)
	struct FVector LinearInertiaScale; // 0x80 (12)
	struct FVector AngularInertiaScale; // 0x8C (12)
	struct FVector CentrifugalInertiaScale; // 0x98 (12)
	float SolverFrequency; // 0xA4 (4)
	float StiffnessFrequency; // 0xA8 (4)
	float GravityScale; // 0xAC (4)
	struct FVector GravityOverride; // 0xB0 (12)
	char bUseGravityOverride : 0; // 0xBC (1)
	float TetherStiffness; // 0xC0 (4)
	float TetherLimit; // 0xC4 (4)
	float CollisionThickness; // 0xC8 (4)
	float AnimDriveSpringStiffness; // 0xCC (4)
	float AnimDriveDamperStiffness; // 0xD0 (4)
};

// ScriptStruct ClothingSystemRuntimeCommon.ClothConstraintSetup_Legacy
struct FClothConstraintSetup_Legacy {
	float Stiffness; // 0x0 (4)
	float StiffnessMultiplier; // 0x4 (4)
	float StretchLimit; // 0x8 (4)
	float CompressionLimit; // 0xC (4)
};

// ScriptStruct ClothingSystemRuntimeCommon.ClothLODDataCommon
struct FClothLODDataCommon {
	struct FClothPhysicalMeshData PhysicalMeshData; // 0x0 (248)
	struct FClothCollisionData CollisionData; // 0xF8 (64)
};

// ScriptStruct ClothingSystemRuntimeCommon.ClothPhysicalMeshData
struct FClothPhysicalMeshData {
	struct TArray<struct FVector> Vertices; // 0x0 (16)
	struct TArray<struct FVector> Normals; // 0x10 (16)
	struct TArray<uint32_t> Indices; // 0x20 (16)
	struct TMap<uint32_t, struct FPointWeightMap> WeightMaps; // 0x30 (80)
	struct TArray<float> InverseMasses; // 0x80 (16)
	struct TArray<struct FClothVertBoneData> BoneData; // 0x90 (16)
	int32_t MaxBoneWeights; // 0xA0 (4)
	int32_t NumFixedVerts; // 0xA4 (4)
	struct TArray<uint32_t> SelfCollisionIndices; // 0xA8 (16)
	struct TArray<float> MaxDistances; // 0xB8 (16)
	struct TArray<float> BackstopDistances; // 0xC8 (16)
	struct TArray<float> BackstopRadiuses; // 0xD8 (16)
	struct TArray<float> AnimDriveMultipliers; // 0xE8 (16)
};

// ScriptStruct ClothingSystemRuntimeCommon.PointWeightMap
struct FPointWeightMap {
	struct TArray<float> Values; // 0x0 (16)
};

// ScriptStruct ClothingSystemRuntimeCommon.ClothParameterMask_Legacy
struct FClothParameterMask_Legacy {
	struct FName MaskName; // 0x0 (8)
	enum class EWeightMapTargetCommon CurrentTarget; // 0x8 (1)
	float MaxValue; // 0xC (4)
	float MinValue; // 0x10 (4)
	struct TArray<float> Values; // 0x18 (16)
	char bEnabled : 0; // 0x28 (1)
};

