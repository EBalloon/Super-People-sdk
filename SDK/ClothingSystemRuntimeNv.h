// Enum ClothingSystemRuntimeNv.EClothingWindMethodNv
enum class EClothingWindMethodNv : uint8 {
	EClothingWindMethodNv = 0,
	EClothingWindMethodNv = 1,
	EClothingWindMethodNv = 2
};

// Class ClothingSystemRuntimeNv.ClothConfigNv
struct UClothConfigNv : UClothConfigCommon {
	enum class Unknow ClothingWindMethod; //  0x28 Size(1)
	struct Unknown VerticalConstraint; //  0x2c Size(10)
	struct Unknown HorizontalConstraint; //  0x3c Size(10)
	struct Unknown BendConstraint; //  0x4c Size(10)
	struct Unknown ShearConstraint; //  0x5c Size(10)
	float SelfCollisionRadius; //  0x6c Size(4)
	float SelfCollisionStiffness; //  0x70 Size(4)
	float SelfCollisionCullScale; //  0x74 Size(4)
	struct Unknown Damping; //  0x78 Size(c)
	float Friction; //  0x84 Size(4)
	float Wind; //  0x88 Size(4)
	float WindLiftCoefficient; //  0x8c Size(4)
	struct Unknown LinearDrag; //  0x90 Size(c)
	struct Unknown AngularDrag; //  0x9c Size(c)
	struct Unknown LinearInertiaScale; //  0xa8 Size(c)
	struct Unknown AngularInertiaScale; //  0xb4 Size(c)
	struct Unknown CentrifugalInertiaScale; //  0xc0 Size(c)
	float SolverFrequency; //  0xcc Size(4)
	float StiffnessFrequency; //  0xd0 Size(4)
	float GravityScale; //  0xd4 Size(4)
	struct Unknown GravityOverride; //  0xd8 Size(c)
	char bUseGravityOverride; //  0xe4 Size(1)
	float TetherStiffness; //  0xe8 Size(4)
	float TetherLimit; //  0xec Size(4)
	float CollisionThickness; //  0xf0 Size(4)
	float Anim; //  0xf4 Size(4)
	float Anim; //  0xf8 Size(4)
	enum class Unknow WindMethod; //  0xfc Size(1)
	struct Unknown VerticalConstraintConfig; //  0x100 Size(10)
	struct Unknown HorizontalConstraintConfig; //  0x110 Size(10)
	struct Unknown BendConstraintConfig; //  0x120 Size(10)
	struct Unknown ShearConstraintConfig; //  0x130 Size(10)
};

// Class ClothingSystemRuntimeNv.ClothPhysicalMeshDataNv_Legacy
struct UClothPhysicalMeshDataNv_Legacy : UClothPhysicalMeshDataBase_Legacy {
	struct TArray<Unknown> MaxDistances; //  0xe0 Size(10)
	struct TArray<Unknown> BackstopDistances; //  0xf0 Size(10)
	struct TArray<Unknown> BackstopRadiuses; //  0x100 Size(10)
	struct TArray<Unknown> Anim; //  0x110 Size(10)
};

