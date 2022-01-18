// Enum ClothingSystemRuntimeNv.EClothingWindMethodNv
enum class EClothingWindMethodNv : uint8_t {
	Legacy = 0,
	Accurate = 1,
	EClothingWindMethodNv_MAX = 2,
};

// Class ClothingSystemRuntimeNv.ClothConfigNv
class UClothConfigNv : public UClothConfigCommon {

public:

	enum class EClothingWindMethodNv ClothingWindMethod; // 0x28 (1)
	struct FClothConstraintSetupNv VerticalConstraint; // 0x2C (16)
	struct FClothConstraintSetupNv HorizontalConstraint; // 0x3C (16)
	struct FClothConstraintSetupNv BendConstraint; // 0x4C (16)
	struct FClothConstraintSetupNv ShearConstraint; // 0x5C (16)
	float SelfCollisionRadius; // 0x6C (4)
	float SelfCollisionStiffness; // 0x70 (4)
	float SelfCollisionCullScale; // 0x74 (4)
	struct FVector Damping; // 0x78 (12)
	float Friction; // 0x84 (4)
	float WindDragCoefficient; // 0x88 (4)
	float WindLiftCoefficient; // 0x8C (4)
	struct FVector LinearDrag; // 0x90 (12)
	struct FVector AngularDrag; // 0x9C (12)
	struct FVector LinearInertiaScale; // 0xA8 (12)
	struct FVector AngularInertiaScale; // 0xB4 (12)
	struct FVector CentrifugalInertiaScale; // 0xC0 (12)
	float SolverFrequency; // 0xCC (4)
	float StiffnessFrequency; // 0xD0 (4)
	float GravityScale; // 0xD4 (4)
	struct FVector GravityOverride; // 0xD8 (12)
	char bUseGravityOverride : 0; // 0xE4 (1)
	float TetherStiffness; // 0xE8 (4)
	float TetherLimit; // 0xEC (4)
	float CollisionThickness; // 0xF0 (4)
	float AnimDriveSpringStiffness; // 0xF4 (4)
	float AnimDriveDamperStiffness; // 0xF8 (4)
	enum class EClothingWindMethod_Legacy WindMethod; // 0xFC (1)
	struct FClothConstraintSetup_Legacy VerticalConstraintConfig; // 0x100 (16)
	struct FClothConstraintSetup_Legacy HorizontalConstraintConfig; // 0x110 (16)
	struct FClothConstraintSetup_Legacy BendConstraintConfig; // 0x120 (16)
	struct FClothConstraintSetup_Legacy ShearConstraintConfig; // 0x130 (16)
};

// Class ClothingSystemRuntimeNv.ClothPhysicalMeshDataNv_Legacy
class UClothPhysicalMeshDataNv_Legacy : public UClothPhysicalMeshDataBase_Legacy {

public:

	struct TArray<float> MaxDistances; // 0xE0 (16)
	struct TArray<float> BackstopDistances; // 0xF0 (16)
	struct TArray<float> BackstopRadiuses; // 0x100 (16)
	struct TArray<float> AnimDriveMultipliers; // 0x110 (16)
};

// ScriptStruct ClothingSystemRuntimeNv.ClothConstraintSetupNv
struct FClothConstraintSetupNv {
	float Stiffness; // 0x0 (4)
	float StiffnessMultiplier; // 0x4 (4)
	float StretchLimit; // 0x8 (4)
	float CompressionLimit; // 0xC (4)
};

