// Enum AnimationCore.ETransformConstraintType
enum class ETransformConstraintType : uint8_t {
	ETransformConstraintType = 0,
	ETransformConstraintType = 1,
	ETransformConstraintType = 2,
	ETransformConstraintType = 3,
	ETransformConstraintType = 4,
};

// Enum AnimationCore.EConstraintType
enum class EConstraintType : uint8_t {
	EConstraintType = 0,
	EConstraintType = 1,
	EConstraintType = 2,
};

// Class AnimationCore.AnimationDataSourceRegistry
class UAnimationDataSourceRegistry : public Object {

public:

	struct TMap<Unknown, Unknown> DataSources; // 0x28 (80)
};

// ScriptStruct AnimationCore.Axis
struct FAxis {
	struct Unknown Axis; // 0x0 (12)
	char bInLocalSpace : 0; // 0xC (1)
};

// ScriptStruct AnimationCore.ConstraintData
struct FConstraintData {
	struct Unknown Constraint; // 0x0 (16)
	float Weight; // 0x10 (4)
	char bMaintainOffset : 0; // 0x14 (1)
	struct Unknown Offset; // 0x20 (48)
	struct Unknown CurrentTransform; // 0x50 (48)
};

// ScriptStruct AnimationCore.ConstraintDescriptor
struct FConstraintDescriptor {
	enum class Unknow Type; // 0x0 (1)
};

// ScriptStruct AnimationCore.ConstraintDescriptionEx
struct FConstraintDescriptionEx {
	struct Unknown AxesFilterOption; // 0x8 (3)
};

// ScriptStruct AnimationCore.FilterOptionPerAxis
struct FFilterOptionPerAxis {
	char bX : 0; // 0x0 (1)
	char bY : 0; // 0x1 (1)
	char bZ : 0; // 0x2 (1)
};

// ScriptStruct AnimationCore.AimConstraintDescription
struct FAimConstraintDescription : FConstraintDescriptionEx {
	struct Unknown LookAt_Axis; // 0x10 (16)
	struct Unknown LookUp_Axis; // 0x20 (16)
	char bUseLookUp : 0; // 0x30 (1)
	struct Unknown LookUpTarget; // 0x34 (12)
};

// ScriptStruct AnimationCore.TransformConstraintDescription
struct FTransformConstraintDescription : FConstraintDescriptionEx {
	enum class Unknow TransformType; // 0x10 (1)
};

// ScriptStruct AnimationCore.TransformConstraint
struct FTransformConstraint {
	struct Unknown Operator; // 0x0 (13)
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
	struct Unknown TranslationAxes; // 0x4 (3)
	struct Unknown RotationAxes; // 0x7 (3)
	struct Unknown ScaleAxes; // 0xA (3)
};

// ScriptStruct AnimationCore.ConstraintOffset
struct FConstraintOffset {
	struct Unknown Translation; // 0x0 (12)
	struct Unknown Rotation; // 0x10 (16)
	struct Unknown Scale; // 0x20 (12)
	struct Unknown Parent; // 0x30 (48)
};

// ScriptStruct AnimationCore.TransformFilter
struct FTransformFilter {
	struct Unknown TranslationFilter; // 0x0 (3)
	struct Unknown RotationFilter; // 0x3 (3)
	struct Unknown ScaleFilter; // 0x6 (3)
};

// ScriptStruct AnimationCore.EulerTransform
struct FEulerTransform {
	struct Unknown Location; // 0x0 (12)
	struct Unknown Rotation; // 0xC (12)
	struct Unknown Scale; // 0x18 (12)
};

// ScriptStruct AnimationCore.NodeChain
struct FNodeChain {
	struct TArray<Unknown> Nodes; // 0x0 (16)
};

// ScriptStruct AnimationCore.NodeHierarchyWithUserData
struct FNodeHierarchyWithUserData {
	struct Unknown Hierarchy; // 0x8 (112)
};

// ScriptStruct AnimationCore.NodeHierarchyData
struct FNodeHierarchyData {
	struct TArray<Unknown> Nodes; // 0x0 (16)
	struct TArray<Unknown> Transforms; // 0x10 (16)
	struct TMap<Unknown, Unknown> NodeNameToIndexMapping; // 0x20 (80)
};

// ScriptStruct AnimationCore.NodeObject
struct FNodeObject {
	struct FName Name; // 0x0 (8)
	struct FName ParentName; // 0x8 (8)
};

// ScriptStruct AnimationCore.TransformNoScale
struct FTransformNoScale {
	struct Unknown Location; // 0x0 (12)
	struct Unknown Rotation; // 0x10 (16)
};

