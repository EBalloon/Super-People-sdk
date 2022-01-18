// Enum AnimationCore.ETransformConstraintType
enum class ETransformConstraintType : uint8_t {
	Translation = 0,
	Rotation = 1,
	Scale = 2,
	Parent = 3,
	ETransformConstraintType_MAX = 4,
};

// Enum AnimationCore.EConstraintType
enum class EConstraintType : uint8_t {
	Transform = 0,
	Aim = 1,
	MAX = 2,
};

// Class AnimationCore.AnimationDataSourceRegistry
class UAnimationDataSourceRegistry : public Object {

public:

	struct TMap<struct FName, struct TWeakObjectPtr<struct Object>> DataSources; // 0x28 (80)
};

// ScriptStruct AnimationCore.Axis
struct FAxis {
	struct FVector Axis; // 0x0 (12)
	char bInLocalSpace : 0; // 0xC (1)
};

// ScriptStruct AnimationCore.ConstraintData
struct FConstraintData {
	struct FConstraintDescriptor Constraint; // 0x0 (16)
	float Weight; // 0x10 (4)
	char bMaintainOffset : 0; // 0x14 (1)
	struct FTransform Offset; // 0x20 (48)
	struct FTransform CurrentTransform; // 0x50 (48)
};

// ScriptStruct AnimationCore.ConstraintDescriptor
struct FConstraintDescriptor {
	enum class EConstraintType Type; // 0x0 (1)
};

// ScriptStruct AnimationCore.ConstraintDescriptionEx
struct FConstraintDescriptionEx {
	struct FFilterOptionPerAxis AxesFilterOption; // 0x8 (3)
};

// ScriptStruct AnimationCore.FilterOptionPerAxis
struct FFilterOptionPerAxis {
	char bX : 0; // 0x0 (1)
	char bY : 0; // 0x1 (1)
	char bZ : 0; // 0x2 (1)
};

// ScriptStruct AnimationCore.AimConstraintDescription
struct FAimConstraintDescription : FConstraintDescriptionEx {
	struct FAxis LookAt_Axis; // 0x10 (16)
	struct FAxis LookUp_Axis; // 0x20 (16)
	char bUseLookUp : 0; // 0x30 (1)
	struct FVector LookUpTarget; // 0x34 (12)
};

// ScriptStruct AnimationCore.TransformConstraintDescription
struct FTransformConstraintDescription : FConstraintDescriptionEx {
	enum class ETransformConstraintType TransformType; // 0x10 (1)
};

// ScriptStruct AnimationCore.TransformConstraint
struct FTransformConstraint {
	struct FConstraintDescription Operator; // 0x0 (13)
	struct FName SourceNode; // 0x10 (8)
	struct FName TargetNode; // 0x18 (8)
	float Weight; // 0x20 (4)
	char bMaintainOffset : 0; // 0x24 (1)
};

// ScriptStruct AnimationCore.ConstraintDescription
struct FConstraintDescription {
	char bTranslation : 0; // 0x0 (1)
	char bRotation : 0; // 0x1 (1)
	char bScale : 0; // 0x2 (1)
	char bParent : 0; // 0x3 (1)
	struct FFilterOptionPerAxis TranslationAxes; // 0x4 (3)
	struct FFilterOptionPerAxis RotationAxes; // 0x7 (3)
	struct FFilterOptionPerAxis ScaleAxes; // 0xA (3)
};

// ScriptStruct AnimationCore.ConstraintOffset
struct FConstraintOffset {
	struct FVector Translation; // 0x0 (12)
	struct FQuat Rotation; // 0x10 (16)
	struct FVector Scale; // 0x20 (12)
	struct FTransform Parent; // 0x30 (48)
};

// ScriptStruct AnimationCore.TransformFilter
struct FTransformFilter {
	struct FFilterOptionPerAxis TranslationFilter; // 0x0 (3)
	struct FFilterOptionPerAxis RotationFilter; // 0x3 (3)
	struct FFilterOptionPerAxis ScaleFilter; // 0x6 (3)
};

// ScriptStruct AnimationCore.EulerTransform
struct FEulerTransform {
	struct FVector Location; // 0x0 (12)
	struct FRotator Rotation; // 0xC (12)
	struct FVector Scale; // 0x18 (12)
};

// ScriptStruct AnimationCore.NodeChain
struct FNodeChain {
	struct TArray<struct FName> Nodes; // 0x0 (16)
};

// ScriptStruct AnimationCore.NodeHierarchyWithUserData
struct FNodeHierarchyWithUserData {
	struct FNodeHierarchyData Hierarchy; // 0x8 (112)
};

// ScriptStruct AnimationCore.NodeHierarchyData
struct FNodeHierarchyData {
	struct TArray<struct FNodeObject> Nodes; // 0x0 (16)
	struct TArray<struct FTransform> Transforms; // 0x10 (16)
	struct TMap<struct FName, int32_t> NodeNameToIndexMapping; // 0x20 (80)
};

// ScriptStruct AnimationCore.NodeObject
struct FNodeObject {
	struct FName Name; // 0x0 (8)
	struct FName ParentName; // 0x8 (8)
};

// ScriptStruct AnimationCore.TransformNoScale
struct FTransformNoScale {
	struct FVector Location; // 0x0 (12)
	struct FQuat Rotation; // 0x10 (16)
};

