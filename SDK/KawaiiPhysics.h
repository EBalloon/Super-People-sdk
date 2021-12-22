// Enum KawaiiPhysics.ECollisionLimitType
enum class ECollisionLimitType : uint8 {
	ECollisionLimitType = 0,
	ECollisionLimitType = 1,
	ECollisionLimitType = 2,
	ECollisionLimitType = 3,
	ECollisionLimitType = 4
};

// Enum KawaiiPhysics.EBoneForwardAxis
enum class EBoneForwardAxis : uint8 {
	EBoneForwardAxis = 0,
	EBoneForwardAxis = 1,
	EBoneForwardAxis = 2,
	EBoneForwardAxis = 3,
	EBoneForwardAxis = 4,
	EBoneForwardAxis = 5,
	EBoneForwardAxis = 6
};

// Enum KawaiiPhysics.EPlanarConstraint
enum class EPlanarConstraint : uint8 {
	EPlanarConstraint = 0,
	EPlanarConstraint = 1,
	EPlanarConstraint = 2,
	EPlanarConstraint = 3,
	EPlanarConstraint = 4
};

// Class KawaiiPhysics.KawaiiPhysicsLimitsDataAsset
struct UKawaiiPhysicsLimitsDataAsset : UDataAsset {
	struct TArray<Unknown> SphericalLimits; //  0x30 Size(10)
	struct TArray<Unknown> CapsuleLimits; //  0x40 Size(10)
	struct TArray<Unknown> PlanarLimits; //  0x50 Size(10)
};

