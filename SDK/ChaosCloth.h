// Enum ChaosCloth.EChaosWeightMapTarget
enum class EChaosWeightMapTarget : uint8 {
	EChaosWeightMapTarget = 0,
	EChaosWeightMapTarget = 1,
	EChaosWeightMapTarget = 2,
	EChaosWeightMapTarget = 3,
	EChaosWeightMapTarget = 4,
	EChaosWeightMapTarget = 5
};

// Class ChaosCloth.ChaosClothConfig
struct UChaosClothConfig : UClothConfigCommon {
	Unknown MassMode; //  0x28 Size(1)
	float UniformMass; //  0x2c Size(4)
	float TotalMass; //  0x30 Size(4)
	float Density; //  0x34 Size(4)
	float MinPerParticleMass; //  0x38 Size(4)
	float EdgeStiffness; //  0x3c Size(4)
	float BendingStiffness; //  0x40 Size(4)
	float AreaStiffness; //  0x44 Size(4)
	float VolumeStiffness; //  0x48 Size(4)
	float StrainLimitingStiffness; //  0x4c Size(4)
	float LimitScale; //  0x50 Size(4)
	char bUseGeodesicDistance; //  0x54 Size(1)
	float ShapeTargetStiffness; //  0x58 Size(4)
	float CollisionThickness; //  0x5c Size(4)
	float FrictionCoefficient; //  0x60 Size(4)
	float DampingCoefficient; //  0x64 Size(4)
	float DragCoefficient; //  0x68 Size(4)
	float AnimDriveSpringStiffness; //  0x6c Size(4)
	char bUseBendingElements; //  0x70 Size(1)
	char bUseTetrahedralConstraints; //  0x71 Size(1)
	char bUseThinShellVolumeConstraints; //  0x72 Size(1)
	char bUseSelfCollisions; //  0x73 Size(1)
	char bUseContinuousCollisionDetection; //  0x74 Size(1)
	Unknown LinearVelocityScale; //  0x78 Size(c)
	float AngularVelocityScale; //  0x84 Size(4)
};

// Class ChaosCloth.ChaosClothSharedSimConfig
struct UChaosClothSharedSimConfig : UClothSharedConfigCommon {
	int32_t IterationCount; //  0x28 Size(4)
	int32_t SubdivisionCount; //  0x2c Size(4)
	float SelfCollisionThickness; //  0x30 Size(4)
	float CollisionThickness; //  0x34 Size(4)
	char bUseDampingOverride; //  0x38 Size(1)
	float Damping; //  0x3c Size(4)
	char bUseGravityOverride; //  0x40 Size(1)
	float GravityScale; //  0x44 Size(4)
	Unknown Gravity; //  0x48 Size(c)
	char bUseLocalSpaceSimulation; //  0x54 Size(1)
	char bUseXPBDConstraints; //  0x55 Size(1)
};

