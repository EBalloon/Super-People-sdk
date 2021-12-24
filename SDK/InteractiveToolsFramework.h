// Enum InteractiveToolsFramework.EInputCaptureState
enum class EInputCaptureState : uint8_t {
	EInputCaptureState = 1,
	EInputCaptureState = 2,
	EInputCaptureState = 3,
	EInputCaptureState = 4,
	EInputCaptureState = 5,
};

// Enum InteractiveToolsFramework.EInputCaptureRequestType
enum class EInputCaptureRequestType : uint8_t {
	EInputCaptureRequestType = 1,
	EInputCaptureRequestType = 2,
	EInputCaptureRequestType = 3,
};

// Enum InteractiveToolsFramework.EInputCaptureSide
enum class EInputCaptureSide : uint8_t {
	EInputCaptureSide = 0,
	EInputCaptureSide = 1,
	EInputCaptureSide = 2,
	EInputCaptureSide = 3,
	EInputCaptureSide = 99,
	EInputCaptureSide = 100,
};

// Enum InteractiveToolsFramework.EInputDevices
enum class EInputDevices : int32_t {
	EInputDevices = 0,
	EInputDevices = 1,
	EInputDevices = 2,
	EInputDevices = 4,
	EInputDevices = 8,
	EInputDevices = 16,
	EInputDevices = 24,
	EInputDevices = 1024,
	EInputDevices = 1025,
};

// Enum InteractiveToolsFramework.ETransformGizmoSubElements
enum class ETransformGizmoSubElements : int32_t {
	ETransformGizmoSubElements = 0,
	ETransformGizmoSubElements = 2,
	ETransformGizmoSubElements = 4,
	ETransformGizmoSubElements = 8,
	ETransformGizmoSubElements = 14,
	ETransformGizmoSubElements = 16,
	ETransformGizmoSubElements = 32,
	ETransformGizmoSubElements = 64,
	ETransformGizmoSubElements = 112,
	ETransformGizmoSubElements = 128,
	ETransformGizmoSubElements = 256,
	ETransformGizmoSubElements = 512,
	ETransformGizmoSubElements = 896,
	ETransformGizmoSubElements = 1024,
	ETransformGizmoSubElements = 2048,
	ETransformGizmoSubElements = 4096,
	ETransformGizmoSubElements = 7168,
	ETransformGizmoSubElements = 8192,
	ETransformGizmoSubElements = 16384,
	ETransformGizmoSubElements = 32768,
	ETransformGizmoSubElements = 57344,
	ETransformGizmoSubElements = 65536,
	ETransformGizmoSubElements = 1022,
	ETransformGizmoSubElements = 66558,
	ETransformGizmoSubElements = 131070,
	ETransformGizmoSubElements = 131071,
};

// Enum InteractiveToolsFramework.EToolChangeTrackingMode
enum class EToolChangeTrackingMode : uint8_t {
	EToolChangeTrackingMode = 1,
	EToolChangeTrackingMode = 2,
	EToolChangeTrackingMode = 3,
	EToolChangeTrackingMode = 4,
};

// Enum InteractiveToolsFramework.EToolSide
enum class EToolSide : uint8_t {
	EToolSide = 1,
	EToolSide = 1,
	EToolSide = 2,
	EToolSide = 3,
};

// Enum InteractiveToolsFramework.ESelectedObjectsModificationType
enum class ESelectedObjectsModificationType : uint8_t {
	ESelectedObjectsModificationType = 0,
	ESelectedObjectsModificationType = 1,
	ESelectedObjectsModificationType = 2,
	ESelectedObjectsModificationType = 3,
	ESelectedObjectsModificationType = 4,
};

// Enum InteractiveToolsFramework.EToolMessageLevel
enum class EToolMessageLevel : uint8_t {
	EToolMessageLevel = 0,
	EToolMessageLevel = 1,
	EToolMessageLevel = 2,
	EToolMessageLevel = 3,
	EToolMessageLevel = 4,
	EToolMessageLevel = 5,
};

// Enum InteractiveToolsFramework.EToolContextCoordinateSystem
enum class EToolContextCoordinateSystem : uint8_t {
	EToolContextCoordinateSystem = 0,
	EToolContextCoordinateSystem = 1,
	EToolContextCoordinateSystem = 2,
};

// Enum InteractiveToolsFramework.EStandardToolContextMaterials
enum class EStandardToolContextMaterials : uint8_t {
	EStandardToolContextMaterials = 1,
	EStandardToolContextMaterials = 2,
};

// Enum InteractiveToolsFramework.ESceneSnapQueryTargetType
enum class ESceneSnapQueryTargetType : uint8_t {
	ESceneSnapQueryTargetType = 0,
	ESceneSnapQueryTargetType = 1,
	ESceneSnapQueryTargetType = 2,
	ESceneSnapQueryTargetType = 4,
	ESceneSnapQueryTargetType = 7,
	ESceneSnapQueryTargetType = 8,
};

// Enum InteractiveToolsFramework.ESceneSnapQueryType
enum class ESceneSnapQueryType : uint8_t {
	ESceneSnapQueryType = 1,
	ESceneSnapQueryType = 2,
};

// Class InteractiveToolsFramework.InteractiveGizmo
class UInteractiveGizmo : public Object {

public:

	struct Unknown InputBehaviors; // 0x30 (8)
};

// Class InteractiveToolsFramework.AxisAngleGizmo
class UAxisAngleGizmo : public UInteractiveGizmo {

public:

	struct TScriptInterface<IUnknown> AxisSource; // 0x48 (16)
	struct TScriptInterface<IUnknown> AngleSource; // 0x58 (16)
	struct TScriptInterface<IUnknown> HitTarget; // 0x68 (16)
	struct TScriptInterface<IUnknown> StateTarget; // 0x78 (16)
	char bInInteraction : 0; // 0x88 (1)
	struct Unknown RotationOrigin; // 0x8C (12)
	struct Unknown RotationAxis; // 0x98 (12)
	struct Unknown RotationPlaneX; // 0xA4 (12)
	struct Unknown RotationPlaneY; // 0xB0 (12)
	struct Unknown InteractionStartPoint; // 0xBC (12)
	struct Unknown InteractionCurPoint; // 0xC8 (12)
	float InteractionStartAngle; // 0xD4 (4)
	float InteractionCurAngle; // 0xD8 (4)
};

// Class InteractiveToolsFramework.AxisPositionGizmo
class UAxisPositionGizmo : public UInteractiveGizmo {

public:

	struct TScriptInterface<IUnknown> AxisSource; // 0x48 (16)
	struct TScriptInterface<IUnknown> ParameterSource; // 0x58 (16)
	struct TScriptInterface<IUnknown> HitTarget; // 0x68 (16)
	struct TScriptInterface<IUnknown> StateTarget; // 0x78 (16)
	char bEnableSignedAxis : 0; // 0x88 (1)
	char bInInteraction : 0; // 0x89 (1)
	struct Unknown InteractionOrigin; // 0x8C (12)
	struct Unknown InteractionAxis; // 0x98 (12)
	struct Unknown InteractionStartPoint; // 0xA4 (12)
	struct Unknown InteractionCurPoint; // 0xB0 (12)
	float InteractionStartParameter; // 0xBC (4)
	float InteractionCurParameter; // 0xC0 (4)
	float ParameterSign; // 0xC4 (4)
};

// Class InteractiveToolsFramework.GizmoConstantAxisSource
class UGizmoConstantAxisSource : public Object {

public:

	struct Unknown Origin; // 0x30 (12)
	struct Unknown Direction; // 0x3C (12)
};

// Class InteractiveToolsFramework.GizmoConstantFrameAxisSource
class UGizmoConstantFrameAxisSource : public Object {

public:

	struct Unknown Origin; // 0x30 (12)
	struct Unknown Direction; // 0x3C (12)
	struct Unknown TangentX; // 0x48 (12)
	struct Unknown TangentY; // 0x54 (12)
};

// Class InteractiveToolsFramework.GizmoWorldAxisSource
class UGizmoWorldAxisSource : public Object {

public:

	struct Unknown Origin; // 0x30 (12)
	int32_t AxisIndex; // 0x3C (4)
};

// Class InteractiveToolsFramework.GizmoComponentAxisSource
class UGizmoComponentAxisSource : public Object {

public:

	struct Unknown Component; // 0x30 (8)
	int32_t AxisIndex; // 0x38 (4)
	char bLocalAxes : 0; // 0x3C (1)
};

// Class InteractiveToolsFramework.InteractiveToolPropertySet
class UInteractiveToolPropertySet : public Object {

public:

	struct Unknown CachedProperties; // 0x40 (8)
	char bIsPropertySetEnabled : 0; // 0x48 (1)
};

// Class InteractiveToolsFramework.BrushBaseProperties
class UBrushBaseProperties : public UInteractiveToolPropertySet {

public:

	float BrushSize; // 0x50 (4)
	char bSpecifyRadius : 0; // 0x54 (1)
	float BrushRadius; // 0x58 (4)
	float BrushStrength; // 0x5C (4)
	float BrushFalloffAmount; // 0x60 (4)
	char bShowStrength : 0; // 0x64 (1)
	char bShowFalloff : 0; // 0x65 (1)
};

// Class InteractiveToolsFramework.InteractiveTool
class UInteractiveTool : public Object {

public:

	struct Unknown InputBehaviors; // 0x48 (8)
	struct TArray<Unknown> ToolPropertyObjects; // 0x50 (16)
};

// Class InteractiveToolsFramework.BaseBrushTool
class UBaseBrushTool : public UMeshSurfacePointTool {

public:

	struct Unknown BrushProperties; // 0xC0 (8)
	char bInBrushStroke : 0; // 0xC8 (1)
	struct Unknown LastBrushStamp; // 0xCC (168)
	struct TSoftClassPtr<UObject> PropertyClass; // 0x188 (40)
	struct Unknown BrushStampIndicator; // 0x1B0 (8)
};

// Class InteractiveToolsFramework.BrushStampIndicator
class UBrushStampIndicator : public UInteractiveGizmo {

public:

	float BrushRadius; // 0x38 (4)
	float BrushFalloff; // 0x3C (4)
	struct Unknown BrushPosition; // 0x40 (12)
	struct Unknown BrushNormal; // 0x4C (12)
	char bDrawIndicatorLines : 0; // 0x58 (1)
	char bDrawRadiusCircle : 0; // 0x59 (1)
	char bDrawFalloffCircle : 0; // 0x5A (1)
	int32_t SampleStepCount; // 0x5C (4)
	struct Unknown LineColor; // 0x60 (16)
	float LineThickness; // 0x70 (4)
	char bDepthTested : 0; // 0x74 (1)
	char bDrawSecondaryLines : 0; // 0x75 (1)
	float SecondaryLineThickness; // 0x78 (4)
	struct Unknown SecondaryLineColor; // 0x7C (16)
	struct Unknown AttachedComponent; // 0x90 (8)
};

// Class InteractiveToolsFramework.ClickDragInputBehavess
class UClickDragInputBehav : public UAnyButtonInputBehav {

public:

	char bUpdateModifiersDuringDrag : 0; // 0x120 (1)
};

// Class InteractiveToolsFramework.GizmoBaseComponent
class UGizmoBaseComponent : public UPrimitiveComponent {

public:

	struct Unknown Color; // 0x4B8 (16)
	float HoverSizeMultiplier; // 0x4C8 (4)
	float PixelHitDistanceThreshold; // 0x4CC (4)

	void UpdateWorldLocalState(char bWorldIn); // Function InteractiveToolsFramework.GizmoBaseComponent.UpdateWorldLocalState(Final|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x4057700>
	void UpdateHoverState(char bHoveringIn); // Function InteractiveToolsFramework.GizmoBaseComponent.UpdateHoverState(Final|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x4057670>
};

// Class InteractiveToolsFramework.GizmoArrowComponent
class UGizmoArrowComponent : public UGizmoBaseComponent {

public:

	struct Unknown Direction; // 0x4D8 (12)
	float Gap; // 0x4E4 (4)
	float Length; // 0x4E8 (4)
	float Thickness; // 0x4EC (4)
};

// Class InteractiveToolsFramework.GizmoBoxComponent
class UGizmoBoxComponent : public UGizmoBaseComponent {

public:

	struct Unknown Origin; // 0x4D8 (12)
	struct Unknown Rotation; // 0x4F0 (16)
	struct Unknown Dimensions; // 0x500 (12)
	float LineThickness; // 0x50C (4)
	char bRemoveHiddenLines : 0; // 0x510 (1)
	char bEnableAxisFlip : 0; // 0x511 (1)
};

// Class InteractiveToolsFramework.GizmoCircleComponent
class UGizmoCircleComponent : public UGizmoBaseComponent {

public:

	struct Unknown Normal; // 0x4D8 (12)
	float Radius; // 0x4E4 (4)
	float Thickness; // 0x4E8 (4)
	int32_t NumSides; // 0x4EC (4)
	char bViewAligned : 0; // 0x4F0 (1)
	char bOnlyAllowFrontFacingHits : 0; // 0x4F1 (1)
};

// Class InteractiveToolsFramework.GizmoLineHandleComponent
class UGizmoLineHandleComponent : public UGizmoBaseComponent {

public:

	struct Unknown Normal; // 0x4D8 (12)
	float HandleSize; // 0x4E4 (4)
	float Thickness; // 0x4E8 (4)
	struct Unknown Direction; // 0x4EC (12)
	float Length; // 0x4F8 (4)
	char bImageScale : 0; // 0x4FC (1)
};

// Class InteractiveToolsFramework.GizmoRectangleComponent
class UGizmoRectangleComponent : public UGizmoBaseComponent {

public:

	struct Unknown DirectionX; // 0x4D8 (12)
	struct Unknown DirectionY; // 0x4E4 (12)
	float OffsetX; // 0x4F0 (4)
	float OffsetY; // 0x4F4 (4)
	float LengthX; // 0x4F8 (4)
	float LengthY; // 0x4FC (4)
	float Thickness; // 0x500 (4)
	char SegmentFlags; // 0x504 (1)
};

// Class InteractiveToolsFramework.GizmoComponentHitTarget
class UGizmoComponentHitTarget : public Object {

public:

	struct Unknown Component; // 0x30 (8)
};

// Class InteractiveToolsFramework.InputBehaviorSet
class UInputBehaviorSet : public Object {

public:

	struct TArray<Unknown> Behaviors; // 0x28 (16)
};

// Class InteractiveToolsFramework.InputRouter
class UInputRouter : public Object {

public:

	char bAutoInvalidateOnHover : 0; // 0x28 (1)
	char bAutoInvalidateOnCapture : 0; // 0x29 (1)
	struct Unknown ActiveInputBehaviors; // 0x38 (8)
};

// Class InteractiveToolsFramework.InteractiveGizmoManager
class UInteractiveGizmoManager : public Object {

public:

	struct TArray<Unknown> ActiveGizmos; // 0x30 (16)
	struct TMap<Unknown, Unknown> GizmoBuilders; // 0x58 (80)
};

// Class InteractiveToolsFramework.InteractiveToolManager
class UInteractiveToolManager : public Object {

public:

	struct Unknown ActiveLeftTool; // 0x30 (8)
	struct Unknown ActiveRightTool; // 0x38 (8)
	struct TMap<Unknown, Unknown> ToolBuilders; // 0x90 (80)
};

// Class InteractiveToolsFramework.InteractiveToolsContext
class UInteractiveToolsContext : public Object {

public:

	struct Unknown InputRouter; // 0x58 (8)
	struct Unknown ToolManager; // 0x60 (8)
	struct Unknown GizmoManager; // 0x68 (8)
	struct TSoftClassPtr<UObject> ToolManagerClass; // 0x70 (40)
};

// Class InteractiveToolsFramework.IntervalGizmoActor
class AIntervalGizmoActor : public AGizmoActor {

public:

	struct Unknown UpIntervalComponent; // 0x310 (8)
	struct Unknown DownIntervalComponent; // 0x318 (8)
	struct Unknown ForwardIntervalComponent; // 0x320 (8)
};

// Class InteractiveToolsFramework.IntervalGizmo
class UIntervalGizmo : public UInteractiveGizmo {

public:

	struct Unknown StateTarget; // 0x38 (8)
	struct Unknown TransformProxy; // 0x50 (8)
	struct TArray<Unknown> ActiveComponents; // 0x58 (16)
	struct TArray<Unknown> ActiveGizmos; // 0x68 (16)
	struct Unknown AxisYSource; // 0x90 (8)
	struct Unknown AxisZSource; // 0x98 (8)
};

// Class InteractiveToolsFramework.GizmoAxisIntervalParameterSource
class UGizmoAxisIntervalParameterSource : public UGizmoBaseFloatParameterSource {

public:

	struct TScriptInterface<IUnknown> FloatParameterSource; // 0x48 (16)
	float MinParameter; // 0x58 (4)
	float MaxParameter; // 0x5C (4)
};

// Class InteractiveToolsFramework.GizmoLocalFloatParameterSource
class UGizmoLocalFloatParameterSource : public UGizmoBaseFloatParameterSource {

public:

	float Value; // 0x48 (4)
	struct Unknown LastChange; // 0x4C (8)
};

// Class InteractiveToolsFramework.GizmoLocalVec2ParameterSource
class UGizmoLocalVec2ParameterSource : public UGizmoBaseVec2ParameterSource {

public:

	struct Unknown Value; // 0x48 (8)
	struct Unknown LastChange; // 0x50 (16)
};

// Class InteractiveToolsFramework.GizmoAxisTranslationParameterSource
class UGizmoAxisTranslationParameterSource : public UGizmoBaseFloatParameterSource {

public:

	struct TScriptInterface<IUnknown> AxisSource; // 0x90 (16)
	struct TScriptInterface<IUnknown> TransformSource; // 0xA0 (16)
	float Parameter; // 0xB0 (4)
	struct Unknown LastChange; // 0xB4 (8)
	struct Unknown CurTranslationAxis; // 0xBC (12)
	struct Unknown CurTranslationOrigin; // 0xC8 (12)
	struct Unknown InitialTransform; // 0xE0 (48)
};

// Class InteractiveToolsFramework.GizmoPlaneTranslationParameterSource
class UGizmoPlaneTranslationParameterSource : public UGizmoBaseVec2ParameterSource {

public:

	struct TScriptInterface<IUnknown> AxisSource; // 0x90 (16)
	struct TScriptInterface<IUnknown> TransformSource; // 0xA0 (16)
	struct Unknown Parameter; // 0xB0 (8)
	struct Unknown LastChange; // 0xB8 (16)
	struct Unknown CurTranslationOrigin; // 0xC8 (12)
	struct Unknown CurTranslationNormal; // 0xD4 (12)
	struct Unknown CurTranslationAxisX; // 0xE0 (12)
	struct Unknown CurTranslationAxisY; // 0xEC (12)
	struct Unknown InitialTransform; // 0x100 (48)
};

// Class InteractiveToolsFramework.GizmoAxisRotationParameterSource
class UGizmoAxisRotationParameterSource : public UGizmoBaseFloatParameterSource {

public:

	struct TScriptInterface<IUnknown> AxisSource; // 0x48 (16)
	struct TScriptInterface<IUnknown> TransformSource; // 0x58 (16)
	float Angle; // 0x68 (4)
	struct Unknown LastChange; // 0x6C (8)
	struct Unknown CurRotationAxis; // 0x74 (12)
	struct Unknown CurRotationOrigin; // 0x80 (12)
	struct Unknown InitialTransform; // 0x90 (48)
};

// Class InteractiveToolsFramework.GizmoUniformScaleParameterSource
class UGizmoUniformScaleParameterSource : public UGizmoBaseVec2ParameterSource {

public:

	struct TScriptInterface<IUnknown> AxisSource; // 0x48 (16)
	struct TScriptInterface<IUnknown> TransformSource; // 0x58 (16)
	float ScaleMultiplier; // 0x68 (4)
	struct Unknown Parameter; // 0x6C (8)
	struct Unknown LastChange; // 0x74 (16)
	struct Unknown CurScaleOrigin; // 0x84 (12)
	struct Unknown CurScaleNormal; // 0x90 (12)
	struct Unknown CurScaleAxisX; // 0x9C (12)
	struct Unknown CurScaleAxisY; // 0xA8 (12)
	struct Unknown InitialTransform; // 0xC0 (48)
};

// Class InteractiveToolsFramework.GizmoAxisScaleParameterSource
class UGizmoAxisScaleParameterSource : public UGizmoBaseFloatParameterSource {

public:

	struct TScriptInterface<IUnknown> AxisSource; // 0x48 (16)
	struct TScriptInterface<IUnknown> TransformSource; // 0x58 (16)
	float ScaleMultiplier; // 0x68 (4)
	float Parameter; // 0x6C (4)
	struct Unknown LastChange; // 0x70 (8)
	struct Unknown CurScaleAxis; // 0x78 (12)
	struct Unknown CurScaleOrigin; // 0x84 (12)
	struct Unknown InitialTransform; // 0x90 (48)
};

// Class InteractiveToolsFramework.GizmoPlaneScaleParameterSource
class UGizmoPlaneScaleParameterSource : public UGizmoBaseVec2ParameterSource {

public:

	struct TScriptInterface<IUnknown> AxisSource; // 0x90 (16)
	struct TScriptInterface<IUnknown> TransformSource; // 0xA0 (16)
	float ScaleMultiplier; // 0xB0 (4)
	struct Unknown Parameter; // 0xB4 (8)
	struct Unknown LastChange; // 0xBC (16)
	struct Unknown CurScaleOrigin; // 0xCC (12)
	struct Unknown CurScaleNormal; // 0xD8 (12)
	struct Unknown CurScaleAxisX; // 0xE4 (12)
	struct Unknown CurScaleAxisY; // 0xF0 (12)
	struct Unknown InitialTransform; // 0x100 (48)
};

// Class InteractiveToolsFramework.PlanePositionGizmo
class UPlanePositionGizmo : public UInteractiveGizmo {

public:

	struct TScriptInterface<IUnknown> AxisSource; // 0x48 (16)
	struct TScriptInterface<IUnknown> ParameterSource; // 0x58 (16)
	struct TScriptInterface<IUnknown> HitTarget; // 0x68 (16)
	struct TScriptInterface<IUnknown> StateTarget; // 0x78 (16)
	char bEnableSignedAxis : 0; // 0x88 (1)
	char bFlipX : 0; // 0x89 (1)
	char bFlipY : 0; // 0x8A (1)
	char bInInteraction : 0; // 0x8B (1)
	struct Unknown InteractionOrigin; // 0x8C (12)
	struct Unknown InteractionNormal; // 0x98 (12)
	struct Unknown InteractionAxisX; // 0xA4 (12)
	struct Unknown InteractionAxisY; // 0xB0 (12)
	struct Unknown InteractionStartPoint; // 0xBC (12)
	struct Unknown InteractionCurPoint; // 0xC8 (12)
	struct Unknown InteractionStartParameter; // 0xD4 (8)
	struct Unknown InteractionCurParameter; // 0xDC (8)
	struct Unknown ParameterSigns; // 0xE4 (8)
};

// Class InteractiveToolsFramework.MeshSelectionSet
class UMeshSelectionSet : public USelectionSet {

public:

	struct TArray<Unknown> Vertices; // 0x40 (16)
	struct TArray<Unknown> Edges; // 0x50 (16)
	struct TArray<Unknown> Faces; // 0x60 (16)
	struct TArray<Unknown> Groups; // 0x70 (16)
};

// Class InteractiveToolsFramework.SingleClickInputBehavior
class USingleClickInputBehavior : public UAnyButtonInputBehav {

public:

	char HitTestOnRelease : 0; // 0xC0 (1)
};

// Class InteractiveToolsFramework.GizmoTransformChangeStateTarget
class UGizmoTransformChangeStateTarget : public Object {

public:

	struct TScriptInterface<IUnknown> TransactionManager; // 0x50 (16)
};

// Class InteractiveToolsFramework.TransformGizmoActor
class ATransformGizmoActor : public AGizmoActor {

public:

	struct Unknown TranslateX; // 0x310 (8)
	struct Unknown TranslateY; // 0x318 (8)
	struct Unknown TranslateZ; // 0x320 (8)
	struct Unknown TranslateYZ; // 0x328 (8)
	struct Unknown TranslateXZ; // 0x330 (8)
	struct Unknown TranslateXY; // 0x338 (8)
	struct Unknown RotateX; // 0x340 (8)
	struct Unknown RotateY; // 0x348 (8)
	struct Unknown RotateZ; // 0x350 (8)
	struct Unknown UniformScale; // 0x358 (8)
	struct Unknown AxisScaleX; // 0x360 (8)
	struct Unknown AxisScaleY; // 0x368 (8)
	struct Unknown AxisScaleZ; // 0x370 (8)
	struct Unknown PlaneScaleYZ; // 0x378 (8)
	struct Unknown PlaneScaleXZ; // 0x380 (8)
	struct Unknown PlaneScaleXY; // 0x388 (8)
};

// Class InteractiveToolsFramework.TransformGizmo
class UTransformGizmo : public UInteractiveGizmo {

public:

	struct Unknown ActiveTarget; // 0x40 (8)
	char bSnapToWorldGrid : 0; // 0x48 (1)
	char bUseContextCoordinateSystem : 0; // 0x49 (1)
	enum class Unknow CurrentCoordinateSystem; // 0x4C (4)
	struct TArray<Unknown> ActiveComponents; // 0xE0 (16)
	struct TArray<Unknown> NonuniformScaleComponents; // 0xF0 (16)
	struct TArray<Unknown> ActiveGizmos; // 0x100 (16)
	struct Unknown CameraAxisSource; // 0x120 (8)
	struct Unknown AxisXSource; // 0x128 (8)
	struct Unknown AxisYSource; // 0x130 (8)
	struct Unknown AxisZSource; // 0x138 (8)
	struct Unknown UnitAxisXSource; // 0x140 (8)
	struct Unknown UnitAxisYSource; // 0x148 (8)
	struct Unknown UnitAxisZSource; // 0x150 (8)
	struct Unknown StateTarget; // 0x158 (8)
	struct Unknown ScaledTransformSource; // 0x160 (8)
};

// Class InteractiveToolsFramework.TransformProxy
class UTransformProxy : public Object {

public:

	char bRotatePerObject : 0; // 0x70 (1)
	char bSetPivotMode : 0; // 0x71 (1)
	struct Unknown SharedTransform; // 0x90 (48)
	struct Unknown InitialSharedTransform; // 0xC0 (48)
};

// Class InteractiveToolsFramework.GizmoComponentWorldTransformSource
class UGizmoComponentWorldTransformSource : public UGizmoBaseTransformSource {

public:

	struct Unknown Component; // 0x48 (8)
	char bModifyComponentOnTransform : 0; // 0x50 (1)
};

// Class InteractiveToolsFramework.GizmoScaledTransformSource
class UGizmoScaledTransformSource : public UGizmoBaseTransformSource {

public:

	struct TScriptInterface<IUnknown> ChildTransformSource; // 0x48 (16)
};

// Class InteractiveToolsFramework.GizmoTransformProxyTransformSource
class UGizmoTransformProxyTransformSource : public UGizmoBaseTransformSource {

public:

	struct Unknown Proxy; // 0x48 (8)
};

// ScriptStruct InteractiveToolsFramework.BehaviorInfo
struct FBehaviorInfo {
	struct Unknown Behavior; // 0x0 (8)
};

// ScriptStruct InteractiveToolsFramework.GizmoFloatParameterChange
struct FGizmoFloatParameterChange {
	float InitialValue; // 0x0 (4)
	float CurrentValue; // 0x4 (4)
};

// ScriptStruct InteractiveToolsFramework.GizmoVec2ParameterChange
struct FGizmoVec2ParameterChange {
	struct Unknown InitialValue; // 0x0 (8)
	struct Unknown CurrentValue; // 0x8 (8)
};

