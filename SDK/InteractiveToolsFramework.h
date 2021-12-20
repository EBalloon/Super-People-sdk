// Enum InteractiveToolsFramework.EInputCaptureState
enum class EInputCaptureState : uint8 {
	EInputCaptureState = 1,
	EInputCaptureState = 2,
	EInputCaptureState = 3,
	EInputCaptureState = 4,
	EInputCaptureState = 5
};

// Enum InteractiveToolsFramework.EInputCaptureRequestType
enum class EInputCaptureRequestType : uint8 {
	EInputCaptureRequestType = 1,
	EInputCaptureRequestType = 2,
	EInputCaptureRequestType = 3
};

// Enum InteractiveToolsFramework.EInputCaptureSide
enum class EInputCaptureSide : uint8 {
	EInputCaptureSide = 0,
	EInputCaptureSide = 1,
	EInputCaptureSide = 2,
	EInputCaptureSide = 3,
	EInputCaptureSide = 99,
	EInputCaptureSide = 100
};

// Enum InteractiveToolsFramework.EInputDevices
enum class EInputDevices : int32 {
	EInputDevices = 0,
	EInputDevices = 1,
	EInputDevices = 2,
	EInputDevices = 4,
	EInputDevices = 8,
	EInputDevices = 16,
	EInputDevices = 24,
	EInputDevices = 1024,
	EInputDevices = 1025
};

// Enum InteractiveToolsFramework.ETransformGizmoSubElements
enum class ETransformGizmoSubElements : int32 {
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
	ETransformGizmoSubElements = 131071
};

// Enum InteractiveToolsFramework.EToolChangeTrackingMode
enum class EToolChangeTrackingMode : uint8 {
	EToolChangeTrackingMode = 1,
	EToolChangeTrackingMode = 2,
	EToolChangeTrackingMode = 3,
	EToolChangeTrackingMode = 4
};

// Enum InteractiveToolsFramework.EToolSide
enum class EToolSide : uint8 {
	EToolSide = 1,
	EToolSide = 1,
	EToolSide = 2,
	EToolSide = 3
};

// Enum InteractiveToolsFramework.ESelectedObjectsModificatio
enum class ESelectedObjectsModificatiomewor : uint8 {
	ESelectedObjectsModificatio = 0,
	ESelectedObjectsModificatiomework = 1,
	ESelectedObjectsModificatio = 2,
	ESelectedObjectsModificatiomework = 3,
	ESelectedObjectsModificatio = 4
};

// Enum InteractiveToolsFramework.EToolMessageLevel
enum class EToolMessageLevel : uint8 {
	EToolMessageLevel = 0,
	EToolMessageLevel = 1,
	EToolMessageLevel = 2,
	EToolMessageLevel = 3,
	EToolMessageLevel = 4,
	EToolMessageLevel = 5
};

// Enum InteractiveToolsFramework.EToolContextCoordinateSystem
enum class EToolContextCoordinateSystem : uint8 {
	EToolContextCoordinateSystem = 0,
	EToolContextCoordinateSystem = 1,
	EToolContextCoordinateSystem = 2
};

// Enum InteractiveToolsFramework.EStandardToolContextMaterials
enum class EStandardToolContextMaterials : uint8 {
	EStandardToolContextMaterials = 1,
	EStandardToolContextMaterials = 2
};

// Enum InteractiveToolsFramework.ESceneSnapQueryTargetType
enum class ESceneSnapQueryTargetType : uint8 {
	ESceneSnapQueryTargetType = 0,
	ESceneSnapQueryTargetType = 1,
	ESceneSnapQueryTargetType = 2,
	ESceneSnapQueryTargetType = 4,
	ESceneSnapQueryTargetType = 7,
	ESceneSnapQueryTargetType = 8
};

// Enum InteractiveToolsFramework.ESceneSnapQueryType
enum class ESceneSnapQueryType : uint8 {
	ESceneSnapQueryType = 1,
	ESceneSnapQueryType = 2
};

// Class InteractiveToolsFramework.InteractiveGizmo
struct UInteractiveGizmo : Object {
	Unknown InputBehaviors; //  0x30 Size(8)
};

// Class InteractiveToolsFramework.AxisAngleGizmo
struct UAxisAngleGizmo : UInteractiveGizmo {
	Unknown AxisSource; //  0x48 Size(10)
	Unknown AngleSource; //  0x58 Size(10)
	Unknown HitTarget; //  0x68 Size(10)
	Unknown StateTarget; //  0x78 Size(10)
	char bInInteraction; //  0x88 Size(1)
	Unknown RotationOrigin; //  0x8c Size(c)
	Unknown RotationAxis; //  0x98 Size(c)
	Unknown RotationPlaneX; //  0xa4 Size(c)
	Unknown RotationPlaneY; //  0xb0 Size(c)
	Unknown InteractionStartPoint; //  0xbc Size(c)
	Unknown InteractionCurPoint; //  0xc8 Size(c)
	float InteractionStartAngle; //  0xd4 Size(4)
	float InteractionCurAngle; //  0xd8 Size(4)
};

// Class InteractiveToolsFramework.AxisPositionGizmo
struct UAxisPositionGizmo : UInteractiveGizmo {
	Unknown AxisSource; //  0x48 Size(10)
	Unknown ParameterSource; //  0x58 Size(10)
	Unknown HitTarget; //  0x68 Size(10)
	Unknown StateTarget; //  0x78 Size(10)
	char bEnableSignedAxis; //  0x88 Size(1)
	char bInInteraction; //  0x89 Size(1)
	Unknown InteractionOrigin; //  0x8c Size(c)
	Unknown InteractionAxis; //  0x98 Size(c)
	Unknown InteractionStartPoint; //  0xa4 Size(c)
	Unknown InteractionCurPoint; //  0xb0 Size(c)
	float InteractionStartParameter; //  0xbc Size(4)
	float InteractionCurParameter; //  0xc0 Size(4)
	float ParameterSign; //  0xc4 Size(4)
};

// Class InteractiveToolsFramework.GizmoConstantAxisSource
struct UGizmoConstantAxisSource : Object {
	Unknown Origin; //  0x30 Size(c)
	Unknown Direction; //  0x3c Size(c)
};

// Class InteractiveToolsFramework.GizmoConstantFrameAxisSource
struct UGizmoConstantFrameAxisSource : Object {
	Unknown Origin; //  0x30 Size(c)
	Unknown Direction; //  0x3c Size(c)
	Unknown TangentX; //  0x48 Size(c)
	Unknown TangentY; //  0x54 Size(c)
};

// Class InteractiveToolsFramework.GizmoWorldAxisSource
struct UGizmoWorldAxisSource : Object {
	Unknown Origin; //  0x30 Size(c)
	int32_t AxisIndex; //  0x3c Size(4)
};

// Class InteractiveToolsFramework.GizmoComponentAxisSource
struct UGizmoComponentAxisSource : Object {
	Unknown Component; //  0x30 Size(8)
	int32_t AxisIndex; //  0x38 Size(4)
	char bLocalAxes; //  0x3c Size(1)
};

// Class InteractiveToolsFramework.InteractiveToolPropertySet
struct UInteractiveToolPropertySet : Object {
	Unknown CachedProperties; //  0x40 Size(8)
	char bIsPropertySetEnabled; //  0x48 Size(1)
};

// Class InteractiveToolsFramework.BrushBaseProperties
struct UBrushBaseProperties : UInteractiveToolPropertySet {
	float BrushSize; //  0x50 Size(4)
	char bSpecifyRadius; //  0x54 Size(1)
	float BrushRadius; //  0x58 Size(4)
	float BrushStrength; //  0x5c Size(4)
	float BrushFalloffAmount; //  0x60 Size(4)
	char bShowStrength; //  0x64 Size(1)
	char bShowFalloff; //  0x65 Size(1)
};

// Class InteractiveToolsFramework.InteractiveTool
struct UInteractiveTool : Object {
	Unknown InputBehaviors; //  0x48 Size(8)
	Unknown ToolPropertyObjects; //  0x50 Size(10)
};

// Class InteractiveToolsFramework.BaseBrushTool
struct UBaseBrushTool : UMeshSurfacePointTool {
	Unknown BrushProperties; //  0xc0 Size(8)
	char bInBrushStroke; //  0xc8 Size(1)
	Unknown LastBrushStamp; //  0xcc Size(a8)
	struct TSoftClassPtr<UObject> PropertyClass; //  0x188 Size(28)
	Unknown BrushStampIndicator; //  0x1b0 Size(8)
};

// Class InteractiveToolsFramework.BrushStampIndicator
struct UBrushStampIndicator : UInteractiveGizmo {
	float BrushRadius; //  0x38 Size(4)
	float BrushFalloff; //  0x3c Size(4)
	Unknown BrushPosition; //  0x40 Size(c)
	Unknown BrushNormal; //  0x4c Size(c)
	char bDrawIndicatorLines; //  0x58 Size(1)
	char bDrawRadiusCircle; //  0x59 Size(1)
	char bDrawFalloffCircle; //  0x5a Size(1)
	int32_t SampleStepCount; //  0x5c Size(4)
	Unknown LineColor; //  0x60 Size(10)
	float LineThickness; //  0x70 Size(4)
	char bDepthTested; //  0x74 Size(1)
	char bDrawSecondaryLines; //  0x75 Size(1)
	float SecondaryLineThickness; //  0x78 Size(4)
	Unknown SecondaryLineColor; //  0x7c Size(10)
	Unknown AttachedComponent; //  0x90 Size(8)
};

// Class InteractiveToolsFramework.ClickDragInputBehav
struct UClickDragInputBehav : UAnyButtonInputBehavk {
	char bUpdateModifiersDuringDrag; //  0x120 Size(1)
};

// Class InteractiveToolsFramework.GizmoBaseComponent
struct UGizmoBaseComponent : UPrimitiveComponent {
	Unknown Color; //  0x4b8 Size(10)
	float HoverSizeMultiplier; //  0x4c8 Size(4)
	float PixelHitDistanceThreshold; //  0x4cc Size(4)

	void UpdateWorldLocalState(char bWorldIn); // Function InteractiveToolsFramework.GizmoBaseComponent.UpdateWorldLocalState(Final|Native|Public) // <Game+0x4048b10>
};

// Class InteractiveToolsFramework.GizmoArrowComponent
struct UGizmoArrowComponent : UGizmoBaseComponent {
	Unknown Direction; //  0x4d8 Size(c)
	float Gap; //  0x4e4 Size(4)
	float Length; //  0x4e8 Size(4)
	float Thickness; //  0x4ec Size(4)
};

// Class InteractiveToolsFramework.GizmoBoxComponent
struct UGizmoBoxComponent : UGizmoBaseComponent {
	Unknown Origin; //  0x4d8 Size(c)
	Unknown Rotation; //  0x4f0 Size(10)
	Unknown Dimensions; //  0x500 Size(c)
	float LineThickness; //  0x50c Size(4)
	char bRemoveHiddenLines; //  0x510 Size(1)
	char bEnableAxisFlip; //  0x511 Size(1)
};

// Class InteractiveToolsFramework.GizmoCircleComponent
struct UGizmoCircleComponent : UGizmoBaseComponent {
	Unknown Normal; //  0x4d8 Size(c)
	float Radius; //  0x4e4 Size(4)
	float Thickness; //  0x4e8 Size(4)
	int32_t NumSides; //  0x4ec Size(4)
	char bViewAligned; //  0x4f0 Size(1)
	char bOnlyAllowFrontFacingHits; //  0x4f1 Size(1)
};

// Class InteractiveToolsFramework.GizmoLineHandleComponent
struct UGizmoLineHandleComponent : UGizmoBaseComponent {
	Unknown Normal; //  0x4d8 Size(c)
	float HandleSize; //  0x4e4 Size(4)
	float Thickness; //  0x4e8 Size(4)
	Unknown Direction; //  0x4ec Size(c)
	float Length; //  0x4f8 Size(4)
	char bImageScale; //  0x4fc Size(1)
};

// Class InteractiveToolsFramework.GizmoRectangleComponent
struct UGizmoRectangleComponent : UGizmoBaseComponent {
	Unknown DirectionX; //  0x4d8 Size(c)
	Unknown DirectionY; //  0x4e4 Size(c)
	float OffsetX; //  0x4f0 Size(4)
	float OffsetY; //  0x4f4 Size(4)
	float LengthX; //  0x4f8 Size(4)
	float LengthY; //  0x4fc Size(4)
	float Thickness; //  0x500 Size(4)
	Unknown SegmentFlags; //  0x504 Size(1)
};

// Class InteractiveToolsFramework.GizmoComponentHitTarget
struct UGizmoComponentHitTarget : Object {
	Unknown Component; //  0x30 Size(8)
};

// Class InteractiveToolsFramework.InputBehaviorSet
struct UInputBehaviorSet : Object {
	Unknown Behaviors; //  0x28 Size(10)
};

// Class InteractiveToolsFramework.InputRouter
struct UInputRouter : Object {
	char bAutoInvalidateOnHover; //  0x28 Size(1)
	char bAutoInvalidateOnCapture; //  0x29 Size(1)
	Unknown ActiveInputBehaviors; //  0x38 Size(8)
};

// Class InteractiveToolsFramework.InteractiveGizmoManager
struct UInteractiveGizmoManager : Object {
	Unknown ActiveGizmos; //  0x30 Size(10)
	Unknown GizmoBuilders; //  0x58 Size(50)
};

// Class InteractiveToolsFramework.InteractiveToolManager
struct UInteractiveToolManager : Object {
	Unknown ActiveLeftTool; //  0x30 Size(8)
	Unknown ActiveRightTool; //  0x38 Size(8)
	Unknown ToolBuilders; //  0x90 Size(50)
};

// Class InteractiveToolsFramework.InteractiveToolsContext
struct UInteractiveToolsContext : Object {
	Unknown InputRouter; //  0x58 Size(8)
	Unknown ToolManager; //  0x60 Size(8)
	Unknown GizmoManager; //  0x68 Size(8)
	struct TSoftClassPtr<UObject> ToolManagerClass; //  0x70 Size(28)
};

// Class InteractiveToolsFramework.IntervalGizmoActor
struct AIntervalGizmoActor : AGizmoActor {
	Unknown UpIntervalComponent; //  0x310 Size(8)
	Unknown DownIntervalComponent; //  0x318 Size(8)
	Unknown ForwardIntervalComponent; //  0x320 Size(8)
};

// Class InteractiveToolsFramework.IntervalGizmo
struct UIntervalGizmo : UInteractiveGizmo {
	Unknown StateTarget; //  0x38 Size(8)
	Unknown TransformProxy; //  0x50 Size(8)
	Unknown ActiveComponents; //  0x58 Size(10)
	Unknown ActiveGizmos; //  0x68 Size(10)
	Unknown AxisYSource; //  0x90 Size(8)
	Unknown AxisZSource; //  0x98 Size(8)
};

// Class InteractiveToolsFramework.GizmoAxisIntervalParameterSource
struct UGizmoAxisIntervalParameterSource : UGizmoBaseFloatParameterSource {
	Unknown FloatParameterSource; //  0x48 Size(10)
	float MinParameter; //  0x58 Size(4)
	float MaxParameter; //  0x5c Size(4)
};

// Class InteractiveToolsFramework.GizmoLocalFloatParameterSource
struct UGizmoLocalFloatParameterSource : UGizmoBaseFloatParameterSource {
	float Value; //  0x48 Size(4)
	Unknown LastChange; //  0x4c Size(8)
};

// Class InteractiveToolsFramework.GizmoLocalVec2ParameterSource
struct UGizmoLocalVec2ParameterSource : UGizmoBaseVec2ParameterSource {
	Unknown Value; //  0x48 Size(8)
	Unknown LastChange; //  0x50 Size(10)
};

// Class InteractiveToolsFramework.GizmoAxisTranslationParameterSource
struct UGizmoAxisTranslationParameterSource : UGizmoBaseFloatParameterSource {
	Unknown AxisSource; //  0x90 Size(10)
	Unknown TransformSource; //  0xa0 Size(10)
	float Parameter; //  0xb0 Size(4)
	Unknown LastChange; //  0xb4 Size(8)
	Unknown CurTranslationAxis; //  0xbc Size(c)
	Unknown CurTranslationOrigin; //  0xc8 Size(c)
	Unknown InitialTransform; //  0xe0 Size(30)
};

// Class InteractiveToolsFramework.GizmoPlaneTranslationParameterSource
struct UGizmoPlaneTranslationParameterSource : UGizmoBaseVec2ParameterSource {
	Unknown AxisSource; //  0x90 Size(10)
	Unknown TransformSource; //  0xa0 Size(10)
	Unknown Parameter; //  0xb0 Size(8)
	Unknown LastChange; //  0xb8 Size(10)
	Unknown CurTranslationOrigin; //  0xc8 Size(c)
	Unknown CurTranslationNormal; //  0xd4 Size(c)
	Unknown CurTranslationAxisX; //  0xe0 Size(c)
	Unknown CurTranslationAxisY; //  0xec Size(c)
	Unknown InitialTransform; //  0x100 Size(30)
};

// Class InteractiveToolsFramework.GizmoAxisRotationParameterSource
struct UGizmoAxisRotationParameterSource : UGizmoBaseFloatParameterSource {
	Unknown AxisSource; //  0x48 Size(10)
	Unknown TransformSource; //  0x58 Size(10)
	float Angle; //  0x68 Size(4)
	Unknown LastChange; //  0x6c Size(8)
	Unknown CurRotationAxis; //  0x74 Size(c)
	Unknown CurRotationOrigin; //  0x80 Size(c)
	Unknown InitialTransform; //  0x90 Size(30)
};

// Class InteractiveToolsFramework.GizmoUniformScaleParameterSource
struct UGizmoUniformScaleParameterSource : UGizmoBaseVec2ParameterSource {
	Unknown AxisSource; //  0x48 Size(10)
	Unknown TransformSource; //  0x58 Size(10)
	float ScaleMultiplier; //  0x68 Size(4)
	Unknown Parameter; //  0x6c Size(8)
	Unknown LastChange; //  0x74 Size(10)
	Unknown CurScaleOrigin; //  0x84 Size(c)
	Unknown CurScaleNormal; //  0x90 Size(c)
	Unknown CurScaleAxisX; //  0x9c Size(c)
	Unknown CurScaleAxisY; //  0xa8 Size(c)
	Unknown InitialTransform; //  0xc0 Size(30)
};

// Class InteractiveToolsFramework.GizmoAxisScaleParameterSource
struct UGizmoAxisScaleParameterSource : UGizmoBaseFloatParameterSource {
	Unknown AxisSource; //  0x48 Size(10)
	Unknown TransformSource; //  0x58 Size(10)
	float ScaleMultiplier; //  0x68 Size(4)
	float Parameter; //  0x6c Size(4)
	Unknown LastChange; //  0x70 Size(8)
	Unknown CurScaleAxis; //  0x78 Size(c)
	Unknown CurScaleOrigin; //  0x84 Size(c)
	Unknown InitialTransform; //  0x90 Size(30)
};

// Class InteractiveToolsFramework.GizmoPlaneScaleParameterSource
struct UGizmoPlaneScaleParameterSource : UGizmoBaseVec2ParameterSource {
	Unknown AxisSource; //  0x90 Size(10)
	Unknown TransformSource; //  0xa0 Size(10)
	float ScaleMultiplier; //  0xb0 Size(4)
	Unknown Parameter; //  0xb4 Size(8)
	Unknown LastChange; //  0xbc Size(10)
	Unknown CurScaleOrigin; //  0xcc Size(c)
	Unknown CurScaleNormal; //  0xd8 Size(c)
	Unknown CurScaleAxisX; //  0xe4 Size(c)
	Unknown CurScaleAxisY; //  0xf0 Size(c)
	Unknown InitialTransform; //  0x100 Size(30)
};

// Class InteractiveToolsFramework.PlanePositionGizmo
struct UPlanePositionGizmo : UInteractiveGizmo {
	Unknown AxisSource; //  0x48 Size(10)
	Unknown ParameterSource; //  0x58 Size(10)
	Unknown HitTarget; //  0x68 Size(10)
	Unknown StateTarget; //  0x78 Size(10)
	char bEnableSignedAxis; //  0x88 Size(1)
	char bFlipX; //  0x89 Size(1)
	char bFlipY; //  0x8a Size(1)
	char bInInteraction; //  0x8b Size(1)
	Unknown InteractionOrigin; //  0x8c Size(c)
	Unknown InteractionNormal; //  0x98 Size(c)
	Unknown InteractionAxisX; //  0xa4 Size(c)
	Unknown InteractionAxisY; //  0xb0 Size(c)
	Unknown InteractionStartPoint; //  0xbc Size(c)
	Unknown InteractionCurPoint; //  0xc8 Size(c)
	Unknown InteractionStartParameter; //  0xd4 Size(8)
	Unknown InteractionCurParameter; //  0xdc Size(8)
	Unknown ParameterSigns; //  0xe4 Size(8)
};

// Class InteractiveToolsFramework.MeshSelectionSet
struct UMeshSelectionSet : USelectionSet {
	Unknown Vertices; //  0x40 Size(10)
	Unknown Edges; //  0x50 Size(10)
	Unknown Faces; //  0x60 Size(10)
	Unknown Groups; //  0x70 Size(10)
};

// Class InteractiveToolsFramework.SingleClickInputBehavior
struct USingleClickInputBehavior : UAnyButtonInputBehav {
	char HitTestOnRelease; //  0xc0 Size(1)
};

// Class InteractiveToolsFramework.GizmoTransformChangeStateTarget
struct UGizmoTransformChangeStateTarget : Object {
	Unknown TransactionManager; //  0x50 Size(10)
};

// Class InteractiveToolsFramework.TransformGizmoActor
struct ATransformGizmoActor : AGizmoActor {
	Unknown TranslateX; //  0x310 Size(8)
	Unknown TranslateY; //  0x318 Size(8)
	Unknown TranslateZ; //  0x320 Size(8)
	Unknown TranslateYZ; //  0x328 Size(8)
	Unknown TranslateXZ; //  0x330 Size(8)
	Unknown TranslateXY; //  0x338 Size(8)
	Unknown RotateX; //  0x340 Size(8)
	Unknown RotateY; //  0x348 Size(8)
	Unknown RotateZ; //  0x350 Size(8)
	Unknown UniformScale; //  0x358 Size(8)
	Unknown AxisScaleX; //  0x360 Size(8)
	Unknown AxisScaleY; //  0x368 Size(8)
	Unknown AxisScaleZ; //  0x370 Size(8)
	Unknown PlaneScaleYZ; //  0x378 Size(8)
	Unknown PlaneScaleXZ; //  0x380 Size(8)
	Unknown PlaneScaleXY; //  0x388 Size(8)
};

// Class InteractiveToolsFramework.TransformGizmo
struct UTransformGizmo : UInteractiveGizmo {
	Unknown ActiveTarget; //  0x40 Size(8)
	char bSnapToWorldGrid; //  0x48 Size(1)
	char bUseContextCoordinateSystem; //  0x49 Size(1)
	Unknown CurrentCoordinateSystem; //  0x4c Size(4)
	Unknown ActiveComponents; //  0xe0 Size(10)
	Unknown NonuniformScaleComponents; //  0xf0 Size(10)
	Unknown ActiveGizmos; //  0x100 Size(10)
	Unknown CameraAxisSource; //  0x120 Size(8)
	Unknown AxisXSource; //  0x128 Size(8)
	Unknown AxisYSource; //  0x130 Size(8)
	Unknown AxisZSource; //  0x138 Size(8)
	Unknown UnitAxisXSource; //  0x140 Size(8)
	Unknown UnitAxisYSource; //  0x148 Size(8)
	Unknown UnitAxisZSource; //  0x150 Size(8)
	Unknown StateTarget; //  0x158 Size(8)
	Unknown ScaledTransformSource; //  0x160 Size(8)
};

// Class InteractiveToolsFramework.TransformProxy
struct UTransformProxy : Object {
	char bRotatePerObject; //  0x70 Size(1)
	char bSetPivotMode; //  0x71 Size(1)
	Unknown SharedTransform; //  0x90 Size(30)
	Unknown InitialSharedTransform; //  0xc0 Size(30)
};

// Class InteractiveToolsFramework.GizmoComponentWorldTransformSource
struct UGizmoComponentWorldTransformSource : UGizmoBaseTransformSource {
	Unknown Component; //  0x48 Size(8)
	char bModifyComponentOnTransform; //  0x50 Size(1)
};

// Class InteractiveToolsFramework.GizmoScaledTransformSource
struct UGizmoScaledTransformSource : UGizmoBaseTransformSource {
	Unknown ChildTransformSource; //  0x48 Size(10)
};

// Class InteractiveToolsFramework.GizmoTransformProxyTransformSource
struct UGizmoTransformProxyTransformSource : UGizmoBaseTransformSource {
	Unknown Proxy; //  0x48 Size(8)
};

