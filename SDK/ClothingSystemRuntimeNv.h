// Enum ClothingSystemRuntimeNv.EClothingWindMethodNv
enum class EClothingWindMethodNv : uint8 {
	EClothingWindMethodNv = 0,
	EClothingWindMethodNv = 1,
	EClothingWindMethodNv = 2
};

// Class ClothingSystemRuntimeNv.ClothConfigNv
struct UClothConfigNv : UClothConfigCommon {
	Unknown ClothingWindMethod; //  0x28 Size(1)
	Unknown VerticalConstraint; //  0x2c Size(10)
	Unknown HorizontalConstraint; //  0x3c Size(10)
	Unknown BendConstraint; //  0x4c Size(10)
	Unknown ShearConstraint; //  0x5c Size(10)
	float SelfCollisionRadius; //  0x6c Size(4)
	float SelfCollisionStiffness; //  0x70 Size(4)
	float SelfCollisionCullScale; //  0x74 Size(4)
	Unknown Damping; //  0x78 Size(c)
	float Friction; //  0x84 Size(4)
	float WindDragCoefficient; //  0x88 Size(4)
	float WindLiftCoefficient; //  0x8c Size(4)
	Unknown LinearDrag; //  0x90 Size(c)
	Unknown AngularDrag; //  0x9c Size(c)
	Unknown LinearInertiaScale; //  0xa8 Size(c)
	Unknown AngularInertiaScale; //  0xb4 Size(c)
	Unknown CentrifugalInertiaScale; //  0xc0 Size(c)
	float SolverFrequency; //  0xcc Size(4)
	float StiffnessFrequency; //  0xd0 Size(4)
	float GravityScale; //  0xd4 Size(4)
	Unknown GravityOverride; //  0xd8 Size(c)
	char bUseGravityOverride; //  0xe4 Size(1)
	float TetherStiffness; //  0xe8 Size(4)
	float TetherLimit; //  0xec Size(4)
	float CollisionThickness; //  0xf0 Size(4)
	float AnimDriveSpringStiffness; //  0xf4 Size(4)
	float AnimDriveDamperStiffness; //  0xf8 Size(4)
	Unknown WindMethod; //  0xfc Size(1)
	Unknown VerticalConstraintConfig; //  0x100 Size(10)
	Unknown HorizontalConstraintConfig; //  0x110 Size(10)
	Unknown BendConstraintConfig; //  0x120 Size(10)
	Unknown ShearConstraintConfig; //  0x130 Size(10)
};

// Class ClothingSystemRuntimeNv.ClothPhysicalMeshDataNv_Legacy
struct UClothPhysicalMeshDataNv_Legacy : UClothPhysicalMeshDataBase_Legacy {
	Unknown MaxDistances; //  0xe0 Size(10)
	Unknown BackstopDistances; //  0xf0 Size(10)
	Unknown BackstopRadiuses; //  0x100 Size(10)
	Unknown AnimDriveMultipliers; //  0x110 Size(10)
};

