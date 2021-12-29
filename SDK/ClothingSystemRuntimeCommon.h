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

	struct Unknown PhysicsAsset; // 0x48 (8)
	struct TMap<Unknown, Unknown> ClothConfigs; // 0x50 (80)
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
class UClothLODDataCommon_Legacy : public Object {

public:

	struct Unknown PhysicalMeshData; // 0x28 (8)
	struct Unknown ClothPhysicalMeshData; // 0x30 (248)
	struct Unknown CollisionData; // 0x128 (64)
};

// ScriptStruct ClothingSystemRuntimeCommon.ClothConfig_Legacy
struct FClothConfig_Legacy {
	enum class Unknow WindMethod; // 0x0 (1)
	struct Unknown VerticalConstraintConfig; // 0x4 (16)
	struct Unknown HorizontalConstraintConfig; // 0x14 (16)
	struct Unknown BendConstraintConfig; // 0x24 (16)
	struct Unknown ShearConstraintConfig; // 0x34 (16)
	float SelfCollisionRadius; // 0x44 (4)
	float SelfCollisionStiffness; // 0x48 (4)
	float SelfCollisionCullScale; // 0x4C (4)
	struct Unknown Damping; // 0x50 (12)
	float Friction; // 0x5C (4)
	float WindDragCoefficient; // 0x60 (4)
	float WindLiftCoefficient; // 0x64 (4)
	struct Unknown LinearDrag; // 0x68 (12)
	struct Unknown AngularDrag; // 0x74 (12)
	struct Unknown LinearInertiaScale; // 0x80 (12)
	struct Unknown AngularInertiaScale; // 0x8C (12)
	struct Unknown CentrifugalInertiaScale; // 0x98 (12)
	float SolverFrequency; // 0xA4 (4)
	float StiffnessFrequency; // 0xA8 (4)
	float GravityScale; // 0xAC (4)
	struct Unknown GravityOverride; // 0xB0 (12)
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
	struct Unknown PhysicalMeshData; // 0x0 (248)
	struct Unknown CollisionData; // 0xF8 (64)
};

// ScriptStruct ClothingSystemRuntimeCommon.ClothPhysicalMeshData
struct FClothPhysicalMeshData {
	struct TArray<Unknown> Vertices; // 0x0 (16)
	struct TArray<Unknown> Normals; // 0x10 (16)
	struct TArray<Unknown> Indices; // 0x20 (16)
	struct TMap<Unknown, Unknown> WeightMaps; // 0x30 (80)
	struct TArray<Unknown> InverseMasses; // 0x80 (16)
	struct TArray<Unknown> BoneData; // 0x90 (16)
	int32_t MaxBoneWeights; // 0xA0 (4)
	int32_t NumFixedVerts; // 0xA4 (4)
	struct TArray<Unknown> SelfCollisionIndices; // 0xA8 (16)
	struct TArray<Unknown> MaxDistances; // 0xB8 (16)
	struct TArray<Unknown> BackstopDistances; // 0xC8 (16)
	struct TArray<Unknown> BackstopRadiuses; // 0xD8 (16)
	struct TArray<Unknown> AnimDriveMultipliers; // 0xE8 (16)
};

// ScriptStruct ClothingSystemRuntimeCommon.PointWeightMap
struct FPointWeightMap {
	struct TArray<Unknown> Values; // 0x0 (16)
};

// ScriptStruct ClothingSystemRuntimeCommon.ClothParameterMask_Legacy
struct FClothParameterMask_Legacy {
	struct FName MaskName; // 0x0 (8)
	enum class Unknow CurrentTarget; // 0x8 (1)
	float MaxValue; // 0xC (4)
	float MinValue; // 0x10 (4)
	struct TArray<Unknown> Values; // 0x18 (16)
	char bEnabled : 0; // 0x28 (1)
};

