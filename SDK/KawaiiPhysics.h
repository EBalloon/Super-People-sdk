// Enum KawaiiPhysics.ECollisionLimitType
enum class ECollisionLimitType : uint8_t {
	None = 0,
	Spherical = 1,
	Capsule = 2,
	Planar = 3,
	ECollisionLimitType_MAX = 4,
};

// Enum KawaiiPhysics.EBoneForwardAxis
enum class EBoneForwardAxis : uint8_t {
	X_Positive = 0,
	X_Negative = 1,
	Y_Positive = 2,
	Y_Negative = 3,
	Z_Positive = 4,
	Z_Negative = 5,
	EBoneForwardAxis_MAX = 6,
};

// Enum KawaiiPhysics.EPlanarConstraint
enum class EPlanarConstraint : uint8_t {
	None = 0,
	X = 1,
	Y = 2,
	Z = 3,
	EPlanarConstraint_MAX = 4,
};

// Class KawaiiPhysics.KawaiiPhysicsLimitsDataAsset
class UKawaiiPhysicsLimitsDataAsset : public UDataAsset {

public:

	struct TArray<Unknown> SphericalLimits; // 0x30 (16)
	struct TArray<Unknown> CapsuleLimits; // 0x40 (16)
	struct TArray<Unknown> PlanarLimits; // 0x50 (16)
};

// ScriptStruct KawaiiPhysics.AnimNode_KawaiiPhysics
struct FAnimNode_KawaiiPhysics : FAnimNode_SkeletalControlBase {
	struct Unknown RootBone; // 0xC8 (16)
	struct TArray<Unknown> ExcludeBones; // 0xD8 (16)
	int32_t TargetFramerate; // 0xE8 (4)
	char OverrideTargetFramerate : 0; // 0xEC (1)
	struct Unknown PhysicsSettings; // 0xF0 (24)
	struct Unknown DampingCurve; // 0x108 (8)
	struct Unknown WorldDampingLocationCurve; // 0x110 (8)
	struct Unknown WorldDampingRotationCurve; // 0x118 (8)
	struct Unknown StiffnessCurve; // 0x120 (8)
	struct Unknown RadiusCurve; // 0x128 (8)
	struct Unknown LimitAngleCurve; // 0x130 (8)
	char bUpdatePhysicsSettingsInGame : 0; // 0x138 (1)
	float DummyBoneLength; // 0x13C (4)
	enum class Unknow BoneForwardAxis; // 0x140 (1)
	enum class Unknow PlanarConstraint; // 0x141 (1)
	struct TArray<Unknown> SphericalLimits; // 0x148 (16)
	struct TArray<Unknown> CapsuleLimits; // 0x158 (16)
	struct TArray<Unknown> PlanarLimits; // 0x168 (16)
	struct Unknown LimitsDataAsset; // 0x178 (8)
	struct TArray<Unknown> SphericalLimitsData; // 0x180 (16)
	struct TArray<Unknown> CapsuleLimitsData; // 0x190 (16)
	struct TArray<Unknown> PlanarLimitsData; // 0x1A0 (16)
	float TeleportDistanceThreshold; // 0x1B0 (4)
	float TeleportRotationThreshold; // 0x1B4 (4)
	struct Unknown Gravity; // 0x1B8 (12)
	char bEnableWind : 0; // 0x1C4 (1)
	float WindScale; // 0x1C8 (4)
	struct TArray<Unknown> ModifyBones; // 0x1D0 (16)
	float TotalBoneLength; // 0x1E0 (4)
	struct Unknown PreSkelCompTransform; // 0x1F0 (48)
	char bInitPhysicsSettings : 0; // 0x220 (1)
};

// ScriptStruct KawaiiPhysics.KawaiiPhysicsModifyBone
struct FKawaiiPhysicsModifyBone {
	struct Unknown BoneRef; // 0x0 (16)
	int32_t ParentIndex; // 0x10 (4)
	struct TArray<Unknown> ChildIndexs; // 0x18 (16)
	struct Unknown PhysicsSettings; // 0x28 (24)
	struct Unknown Location; // 0x40 (12)
	struct Unknown PrevLocation; // 0x4C (12)
	struct Unknown PrevRotation; // 0x60 (16)
	struct Unknown PoseLocation; // 0x70 (12)
	struct Unknown PoseRotation; // 0x80 (16)
	struct Unknown PoseScale; // 0x90 (12)
	float LengthFromRoot; // 0x9C (4)
	char bDummy : 0; // 0xA0 (1)
};

// ScriptStruct KawaiiPhysics.KawaiiPhysicsSettings
struct FKawaiiPhysicsSettings {
	float Damping; // 0x0 (4)
	float WorldDampingLocation; // 0x4 (4)
	float WorldDampingRotation; // 0x8 (4)
	float Stiffness; // 0xC (4)
	float Radius; // 0x10 (4)
	float LimitAngle; // 0x14 (4)
};

// ScriptStruct KawaiiPhysics.CollisionLimitBase
struct FCollisionLimitBase {
	struct Unknown DrivingBone; // 0x0 (16)
	struct Unknown OffsetLocation; // 0x10 (12)
	struct Unknown OffsetRotation; // 0x1C (12)
	struct Unknown Location; // 0x28 (12)
	struct Unknown Rotation; // 0x40 (16)
};

// ScriptStruct KawaiiPhysics.PlanarLimit
struct FPlanarLimit : FCollisionLimitBase {
	struct Unknown Plane; // 0x50 (16)
};

// ScriptStruct KawaiiPhysics.CapsuleLimit
struct FCapsuleLimit : FCollisionLimitBase {
	float Radius; // 0x50 (4)
	float Length; // 0x54 (4)
};

// ScriptStruct KawaiiPhysics.SphericalLimit
struct FSphericalLimit : FCollisionLimitBase {
	float Radius; // 0x50 (4)
	enum class Unknow LimitType; // 0x54 (1)
};

// ScriptStruct KawaiiPhysics.CollisionLimitDataBase
struct FCollisionLimitDataBase {
	struct FName DrivingBoneName; // 0x0 (8)
	struct Unknown OffsetLocation; // 0x8 (12)
	struct Unknown OffsetRotation; // 0x14 (12)
	struct Unknown Location; // 0x20 (12)
	struct Unknown Rotation; // 0x30 (16)
	struct Unknown Guid; // 0x40 (16)
};

// ScriptStruct KawaiiPhysics.PlanarLimitData
struct FPlanarLimitData : FCollisionLimitDataBase {
	struct Unknown Plane; // 0x50 (16)
};

// ScriptStruct KawaiiPhysics.CapsuleLimitData
struct FCapsuleLimitData : FCollisionLimitDataBase {
	float Radius; // 0x50 (4)
	float Length; // 0x54 (4)
};

// ScriptStruct KawaiiPhysics.SphericalLimitData
struct FSphericalLimitData : FCollisionLimitDataBase {
	float Radius; // 0x50 (4)
	enum class Unknow LimitType; // 0x54 (1)
};

