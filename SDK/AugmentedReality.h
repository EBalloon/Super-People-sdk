// Enum AugmentedReality.EARTrackingState
enum class EARTrackingState : uint8_t {
	Unknown = 0,
	Tracking = 1,
	NotTracking = 2,
	StoppedTracking = 3,
	EARTrackingState_MAX = 4,
};

// Enum AugmentedReality.EARSessionTrackingFeature
enum class EARSessionTrackingFeature : uint8_t {
	None = 0,
	PoseDetection2D = 1,
	PersonSegmentation = 2,
	PersonSegmentationWithDepth = 3,
	EARSessionTrackingFeature_MAX = 4,
};

// Enum AugmentedReality.EARFaceTrackingUpdate
enum class EARFaceTrackingUpdate : uint8_t {
	CurvesAndGeo = 0,
	CurvesOnly = 1,
	EARFaceTrackingUpdate_MAX = 2,
};

// Enum AugmentedReality.EAREnvironmentCaptureProbeType
enum class EAREnvironmentCaptureProbeType : uint8_t {
	None = 0,
	Manual = 1,
	Automatic = 2,
	EAREnvironmentCaptureProbeType_MAX = 3,
};

// Enum AugmentedReality.EARFrameSyncMode
enum class EARFrameSyncMode : uint8_t {
	SyncTickWithCameraImage = 0,
	SyncTickWithoutCameraImage = 1,
	EARFrameSyncMode_MAX = 2,
};

// Enum AugmentedReality.EARLightEstimationMode
enum class EARLightEstimationMode : uint8_t {
	None = 0,
	AmbientLightEstimate = 1,
	DirectionalLightEstimate = 2,
	EARLightEstimationMode_MAX = 3,
};

// Enum AugmentedReality.EARPlaneDetectionMode
enum class EARPlaneDetectionMode : uint8_t {
	None = 0,
	HorizontalPlaneDetection = 1,
	VerticalPlaneDetection = 2,
	EARPlaneDetectionMode_MAX = 3,
};

// Enum AugmentedReality.EARSessionType
enum class EARSessionType : uint8_t {
	None = 0,
	Orientation = 1,
	World = 2,
	Face = 3,
	Image = 4,
	ObjectScanning = 5,
	PoseTracking = 6,
	EARSessionType_MAX = 7,
};

// Enum AugmentedReality.EARWorldAlignment
enum class EARWorldAlignment : uint8_t {
	Gravity = 0,
	GravityAndHeading = 1,
	Camera = 2,
	EARWorldAlignment_MAX = 3,
};

// Enum AugmentedReality.EARDepthAccuracy
enum class EARDepthAccuracy : uint8_t {
	Unkown = 0,
	Approximate = 1,
	Accurate = 2,
	EARDepthAccuracy_MAX = 3,
};

// Enum AugmentedReality.EARDepthQuality
enum class EARDepthQuality : uint8_t {
	Unkown = 0,
	Low = 1,
	High = 2,
	EARDepthQuality_MAX = 3,
};

// Enum AugmentedReality.EARTextureType
enum class EARTextureType : uint8_t {
	CameraImage = 0,
	CameraDepth = 1,
	EnvironmentCapture = 2,
	EARTextureType_MAX = 3,
};

// Enum AugmentedReality.EAREye
enum class EAREye : uint8_t {
	LeftEye = 0,
	RightEye = 1,
	EAREye_MAX = 2,
};

// Enum AugmentedReality.EARFaceBlendShape
enum class EARFaceBlendShape : uint8_t {
	EyeBlinkLeft = 0,
	EyeLookDownLeft = 1,
	EyeLookInLeft = 2,
	EyeLookOutLeft = 3,
	EyeLookUpLeft = 4,
	EyeSquintLeft = 5,
	EyeWideLeft = 6,
	EyeBlinkRight = 7,
	EyeLookDownRight = 8,
	EyeLookInRight = 9,
	EyeLookOutRight = 10,
	EyeLookUpRight = 11,
	EyeSquintRight = 12,
	EyeWideRight = 13,
	JawForward = 14,
	JawLeft = 15,
	JawRight = 16,
	JawOpen = 17,
	MouthClose = 18,
	MouthFunnel = 19,
	MouthPucker = 20,
	MouthLeft = 21,
	MouthRight = 22,
	MouthSmileLeft = 23,
	MouthSmileRight = 24,
	MouthFrownLeft = 25,
	MouthFrownRight = 26,
	MouthDimpleLeft = 27,
	MouthDimpleRight = 28,
	MouthStretchLeft = 29,
	MouthStretchRight = 30,
	MouthRollLower = 31,
	MouthRollUpper = 32,
	MouthShrugLower = 33,
	MouthShrugUpper = 34,
	MouthPressLeft = 35,
	MouthPressRight = 36,
	MouthLowerDownLeft = 37,
	MouthLowerDownRight = 38,
	MouthUpperUpLeft = 39,
	MouthUpperUpRight = 40,
	BrowDownLeft = 41,
	BrowDownRight = 42,
	BrowInnerUp = 43,
	BrowOuterUpLeft = 44,
	BrowOuterUpRight = 45,
	CheekPuff = 46,
	CheekSquintLeft = 47,
	CheekSquintRight = 48,
	NoseSneerLeft = 49,
	NoseSneerRight = 50,
	TongueOut = 51,
	HeadYaw = 52,
	HeadPitch = 53,
	HeadRoll = 54,
	LeftEyeYaw = 55,
	LeftEyePitch = 56,
	LeftEyeRoll = 57,
	RightEyeYaw = 58,
	RightEyePitch = 59,
	RightEyeRoll = 60,
	MAX = 61,
};

// Enum AugmentedReality.EARFaceTrackingDirection
enum class EARFaceTrackingDirection : uint8_t {
	FaceRelative = 0,
	FaceMirrored = 1,
	EARFaceTrackingDirection_MAX = 2,
};

// Enum AugmentedReality.EARCandidateImageOrientation
enum class EARCandidateImageOrientation : uint8_t {
	Landscape = 0,
	Portrait = 1,
	EARCandidateImageOrientation_MAX = 2,
};

// Enum AugmentedReality.EARJointTransformSpace
enum class EARJointTransformSpace : uint8_t {
	Model = 0,
	ParentJoint = 1,
	EARJointTransformSpace_MAX = 2,
};

// Enum AugmentedReality.EARObjectClassification
enum class EARObjectClassification : uint8_t {
	NotApplicable = 0,
	Unknown = 1,
	Wall = 2,
	Ceiling = 3,
	Floor = 4,
	Table = 5,
	Seat = 6,
	Face = 7,
	Image = 8,
	World = 9,
	SceneObject = 10,
	HandMesh = 11,
	EARObjectClassification_MAX = 12,
};

// Enum AugmentedReality.EARPlaneOrientation
enum class EARPlaneOrientation : uint8_t {
	Horizontal = 0,
	Vertical = 1,
	Diagonal = 2,
	EARPlaneOrientation_MAX = 3,
};

// Enum AugmentedReality.EARWorldMappingState
enum class EARWorldMappingState : uint8_t {
	NotAvailable = 0,
	StillMappingNotRelocalizable = 1,
	StillMappingRelocalizable = 2,
	Mapped = 3,
	EARWorldMappingState_MAX = 4,
};

// Enum AugmentedReality.EARSessionStatus
enum class EARSessionStatus : uint8_t {
	NotStarted = 0,
	Running = 1,
	NotSupported = 2,
	FatalError = 3,
	PermissionNotGranted = 4,
	UnsupportedConfiguration = 5,
	Other = 6,
	EARSessionStatus_MAX = 7,
};

// Enum AugmentedReality.EARTrackingQualityReason
enum class EARTrackingQualityReason : uint8_t {
	None = 0,
	Initializing = 1,
	Relocalizing = 2,
	ExcessiveMotion = 3,
	InsufficientFeatures = 4,
	EARTrackingQualityReason_MAX = 5,
};

// Enum AugmentedReality.EARTrackingQuality
enum class EARTrackingQuality : uint8_t {
	NotTracking = 0,
	OrientationOnly = 1,
	OrientationAndPosition = 2,
	EARTrackingQuality_MAX = 3,
};

// Enum AugmentedReality.EARLineTraceChannels
enum class EARLineTraceChannels : uint8_t {
	None = 0,
	FeaturePoint = 1,
	GroundPlane = 2,
	PlaneUsingExtent = 4,
	PlaneUsingBoundaryPolygon = 8,
	EARLineTraceChannels_MAX = 9,
};

// Class AugmentedReality.ARSessionConfig
class UARSessionConfig : public UDataAsset {

public:

	char bGenerateMeshDataFromTrackedGeometry : 0; // 0x30 (1)
	char bGenerateCollisionForMeshData : 0; // 0x31 (1)
	char bGenerateNavMeshForMeshData : 0; // 0x32 (1)
	char bUseMeshDataForOcclusion : 0; // 0x33 (1)
	char bRenderMeshDataInWireframe : 0; // 0x34 (1)
	char bTrackSceneObjects : 0; // 0x35 (1)
	char bUsePersonSegmentationForOcclusion : 0; // 0x36 (1)
	enum class EARWorldAlignment WorldAlignment; // 0x37 (1)
	enum class EARSessionType SessionType; // 0x38 (1)
	enum class EARPlaneDetectionMode PlaneDetectionMode; // 0x39 (1)
	char bHorizontalPlaneDetection : 0; // 0x3A (1)
	char bVerticalPlaneDetection : 0; // 0x3B (1)
	char bEnableAutoFocus : 0; // 0x3C (1)
	enum class EARLightEstimationMode LightEstimationMode; // 0x3D (1)
	enum class EARFrameSyncMode FrameSyncMode; // 0x3E (1)
	char bEnableAutomaticCameraOverlay : 0; // 0x3F (1)
	char bEnableAutomaticCameraTracking : 0; // 0x40 (1)
	char bResetCameraTracking : 0; // 0x41 (1)
	char bResetTrackedObjects : 0; // 0x42 (1)
	struct TArray<struct UARCandidateImage> CandidateImages; // 0x48 (16)
	int32_t MaxNumSimultaneousImagesTracked; // 0x58 (4)
	enum class EAREnvironmentCaptureProbeType EnvironmentCaptureProbeType; // 0x5C (1)
	struct TArray<char> WorldMapData; // 0x60 (16)
	struct TArray<struct UARCandidateObject> CandidateObjects; // 0x70 (16)
	struct FARVideoFormat DesiredVideoFormat; // 0x80 (12)
	enum class EARFaceTrackingDirection FaceTrackingDirection; // 0x8C (1)
	enum class EARFaceTrackingUpdate FaceTrackingUpdate; // 0x8D (1)
	struct TArray<char> SerializedARCandidateImageDatabase; // 0x90 (16)
	enum class EARSessionTrackingFeature EnabledSessionTrackingFeature; // 0xA0 (1)

	char ShouldResetTrackedObjects(); // Function AugmentedReality.ARSessionConfig.ShouldResetTrackedObjects(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x36E22A0>
	char ShouldResetCameraTracking(); // Function AugmentedReality.ARSessionConfig.ShouldResetCameraTracking(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x36E2270>
	char ShouldRenderCameraOverlay(); // Function AugmentedReality.ARSessionConfig.ShouldRenderCameraOverlay(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x36E2240>
	char ShouldEnableCameraTracking(); // Function AugmentedReality.ARSessionConfig.ShouldEnableCameraTracking(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x36E2210>
	char ShouldEnableAutoFocus(); // Function AugmentedReality.ARSessionConfig.ShouldEnableAutoFocus(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x36E21E0>
	void SetWorldMapData(struct TArray<char> WorldMapData); // Function AugmentedReality.ARSessionConfig.SetWorldMapData(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x36E20F0>
	void SetSessionTrackingFeatureToEnable(enum class EARSessionTrackingFeature InSessionTrackingFeature); // Function AugmentedReality.ARSessionConfig.SetSessionTrackingFeatureToEnable(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x36E2070>
	void SetResetTrackedObjects(char bNewValue); // Function AugmentedReality.ARSessionConfig.SetResetTrackedObjects(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x36E1FE0>
	void SetResetCameraTracking(char bNewValue); // Function AugmentedReality.ARSessionConfig.SetResetCameraTracking(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x36E1F50>
	void SetFaceTrackingUpdate(enum class EARFaceTrackingUpdate InUpdate); // Function AugmentedReality.ARSessionConfig.SetFaceTrackingUpdate(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x36E1ED0>
	void SetFaceTrackingDirection(enum class EARFaceTrackingDirection InDirection); // Function AugmentedReality.ARSessionConfig.SetFaceTrackingDirection(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x36E1E50>
	void SetEnableAutoFocus(char bNewValue); // Function AugmentedReality.ARSessionConfig.SetEnableAutoFocus(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x36E1DC0>
	void SetDesiredVideoFormat(struct FARVideoFormat NewFormat); // Function AugmentedReality.ARSessionConfig.SetDesiredVideoFormat(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x36E1D20>
	void SetCandidateObjectList(struct TArray<struct UARCandidateObject>& InCandidateObjects); // Function AugmentedReality.ARSessionConfig.SetCandidateObjectList(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x36E1C70>
	struct TArray<char> GetWorldMapData(); // Function AugmentedReality.ARSessionConfig.GetWorldMapData(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x36E11A0>
	enum class EARWorldAlignment GetWorldAlignment(); // Function AugmentedReality.ARSessionConfig.GetWorldAlignment(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x36E1170>
	enum class EARSessionType GetSessionType(); // Function AugmentedReality.ARSessionConfig.GetSessionType(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x162C510>
	enum class EARPlaneDetectionMode GetPlaneDetectionMode(); // Function AugmentedReality.ARSessionConfig.GetPlaneDetectionMode(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x36E0D70>
	int32_t GetMaxNumSimultaneousImagesTracked(); // Function AugmentedReality.ARSessionConfig.GetMaxNumSimultaneousImagesTracked(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x36E0CB0>
	enum class EARLightEstimationMode GetLightEstimationMode(); // Function AugmentedReality.ARSessionConfig.GetLightEstimationMode(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x36E0980>
	enum class EARFrameSyncMode GetFrameSyncMode(); // Function AugmentedReality.ARSessionConfig.GetFrameSyncMode(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x36E0950>
	enum class EARFaceTrackingUpdate GetFaceTrackingUpdate(); // Function AugmentedReality.ARSessionConfig.GetFaceTrackingUpdate(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x36E0920>
	enum class EARFaceTrackingDirection GetFaceTrackingDirection(); // Function AugmentedReality.ARSessionConfig.GetFaceTrackingDirection(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x36E08F0>
	enum class EAREnvironmentCaptureProbeType GetEnvironmentCaptureProbeType(); // Function AugmentedReality.ARSessionConfig.GetEnvironmentCaptureProbeType(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x36E08C0>
	enum class EARSessionTrackingFeature GetEnabledSessionTrackingFeature(); // Function AugmentedReality.ARSessionConfig.GetEnabledSessionTrackingFeature(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x36E0890>
	struct FARVideoFormat GetDesiredVideoFormat(); // Function AugmentedReality.ARSessionConfig.GetDesiredVideoFormat(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x36E0750>
	struct TArray<struct UARCandidateObject> GetCandidateObjectList(); // Function AugmentedReality.ARSessionConfig.GetCandidateObjectList(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x36E0650>
	struct TArray<struct UARCandidateImage> GetCandidateImageList(); // Function AugmentedReality.ARSessionConfig.GetCandidateImageList(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x36E05C0>
	void AddCandidateObject(struct UARCandidateObject CandidateObject); // Function AugmentedReality.ARSessionConfig.AddCandidateObject(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x36DF810>
	void AddCandidateImage(struct UARCandidateImage NewCandidateImage); // Function AugmentedReality.ARSessionConfig.AddCandidateImage(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x36DF790>
};

// Class AugmentedReality.ARBasicLightEstimate
class UARBasicLightEstimate : public UARLightEstimate {

public:

	float AmbientIntensityLumens; // 0x28 (4)
	float AmbientColorTemperatureKelvin; // 0x2C (4)
	struct FLinearColor AmbientColor; // 0x30 (16)

	float GetAmbientIntensityLumens(); // Function AugmentedReality.ARBasicLightEstimate.GetAmbientIntensityLumens(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x36E0530>
	float GetAmbientColorTemperatureKelvin(); // Function AugmentedReality.ARBasicLightEstimate.GetAmbientColorTemperatureKelvin(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x36E0500>
	struct FLinearColor GetAmbientColor(); // Function AugmentedReality.ARBasicLightEstimate.GetAmbientColor(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x36E04C0>
};

// Class AugmentedReality.ARCandidateImage
class UARCandidateImage : public UDataAsset {

public:

	struct UTexture2D CandidateTexture; // 0x30 (8)
	struct FString FriendlyName; // 0x38 (16)
	float Width; // 0x48 (4)
	float Height; // 0x4C (4)
	enum class EARCandidateImageOrientation Orientation; // 0x50 (1)

	float GetPhysicalWidth(); // Function AugmentedReality.ARCandidateImage.GetPhysicalWidth(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x36E8B50>
	float GetPhysicalHeight(); // Function AugmentedReality.ARCandidateImage.GetPhysicalHeight(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x36E8B30>
	enum class EARCandidateImageOrientation GetOrientation(); // Function AugmentedReality.ARCandidateImage.GetOrientation(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x36E8B10>
	struct FString GetFriendlyName(); // Function AugmentedReality.ARCandidateImage.GetFriendlyName(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x36E8AB0>
	struct UTexture2D GetCandidateTexture(); // Function AugmentedReality.ARCandidateImage.GetCandidateTexture(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x36E8A90>
};

// Class AugmentedReality.ARSaveWorldAsyncTaskBlueprintProxy
class UARSaveWorldAsyncTaskBlueprintProxy : public UARBaseAsyncTaskBlueprintProxy {

public:

	struct FMulticastInlineDelegate OnSuccess; // 0x50 (16)
	struct FMulticastInlineDelegate OnFailed; // 0x60 (16)

	struct UARSaveWorldAsyncTaskBlueprintProxy ARSaveWorld(struct Object WorldContextObject); // Function AugmentedReality.ARSaveWorldAsyncTaskBlueprintProxy.ARSaveWorld(Final|Native|Static|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x36DF710>
};

// Class AugmentedReality.ARGetCandidateObjectAsyncTaskBlueprintProxy
class UARGetCandidateObjectAsyncTaskBlueprintProxy : public UARBaseAsyncTaskBlueprintProxy {

public:

	struct FMulticastInlineDelegate OnSuccess; // 0x50 (16)
	struct FMulticastInlineDelegate OnFailed; // 0x60 (16)

	struct UARGetCandidateObjectAsyncTaskBlueprintProxy ARGetCandidateObject(struct Object WorldContextObject, struct FVector Location, struct FVector Extent); // Function AugmentedReality.ARGetCandidateObjectAsyncTaskBlueprintProxy.ARGetCandidateObject(Final|Native|Static|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x36DF5F0>
};

// Class AugmentedReality.ARPin
class UARPin : public Object {

public:

	struct UARTrackedGeometry TrackedGeometry; // 0x28 (8)
	struct USceneComponent PinnedComponent; // 0x30 (8)
	struct FTransform LocalToTrackingTransform; // 0x40 (48)
	struct FTransform LocalToAlignedTrackingTransform; // 0x70 (48)
	enum class EARTrackingState TrackingState; // 0xA0 (1)
	struct FMulticastInlineDelegate OnARTrackingStateChanged; // 0xC0 (16)
	struct FMulticastInlineDelegate OnARTransformUpdated; // 0xD0 (16)

	enum class EARTrackingState GetTrackingState(); // Function AugmentedReality.ARPin.GetTrackingState(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x36E0890>
	struct UARTrackedGeometry GetTrackedGeometry(); // Function AugmentedReality.ARPin.GetTrackedGeometry(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x36E1010>
	struct USceneComponent GetPinnedComponent(); // Function AugmentedReality.ARPin.GetPinnedComponent(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x36E0D40>
	struct FTransform GetLocalToWorldTransform(); // Function AugmentedReality.ARPin.GetLocalToWorldTransform(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x36E0B30>
	struct FTransform GetLocalToTrackingTransform(); // Function AugmentedReality.ARPin.GetLocalToTrackingTransform(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x36E09B0>
	struct FName GetDebugName(); // Function AugmentedReality.ARPin.GetDebugName(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x36E0710>
	void DebugDraw(struct UWorld World, struct FLinearColor& Color, float Scale, float PersistForSeconds); // Function AugmentedReality.ARPin.DebugDraw(Native|Public|HasOutParms|HasDefaults|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x36DFB00>
};

// Class AugmentedReality.ARSharedWorldGameMode
class AARSharedWorldGameMode : public AGameMode {

public:

	int32_t BufferSizePerChunk; // 0x410 (4)

	void SetPreviewImageData(struct TArray<char> ImageData); // Function AugmentedReality.ARSharedWorldGameMode.SetPreviewImageData(Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x36E6640>
	void SetARWorldSharingIsReady(); // Function AugmentedReality.ARSharedWorldGameMode.SetARWorldSharingIsReady(Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x36E65A0>
	void SetARSharedWorldData(struct TArray<char> ARWorldData); // Function AugmentedReality.ARSharedWorldGameMode.SetARSharedWorldData(Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x36E64B0>
	struct AARSharedWorldGameState GetARSharedWorldGameState(); // Function AugmentedReality.ARSharedWorldGameMode.GetARSharedWorldGameState(Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x36E5C80>
};

// Class AugmentedReality.ARSharedWorldGameState
class AARSharedWorldGameState : public AGameState {

public:

	struct TArray<char> PreviewImageData; // 0x398 (16)
	struct TArray<char> ARWorldData; // 0x3A8 (16)
	int32_t PreviewImageBytesTotal; // 0x3B8 (4)
	int32_t ARWorldBytesTotal; // 0x3BC (4)
	int32_t PreviewImageBytesDelivered; // 0x3C0 (4)
	int32_t ARWorldBytesDelivered; // 0x3C4 (4)

	void K2_OnARWorldMapIsReady(); // Function AugmentedReality.ARSharedWorldGameState.K2_OnARWorldMapIsReady(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
};

// Class AugmentedReality.ARSkyLight
class AARSkyLight : public ASkyLight {

public:

	struct UAREnvironmentCaptureProbe CaptureProbe; // 0x338 (8)

	void SetEnvironmentCaptureProbe(struct UAREnvironmentCaptureProbe InCaptureProbe); // Function AugmentedReality.ARSkyLight.SetEnvironmentCaptureProbe(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x36E65C0>
};

// Class AugmentedReality.ARTexture
class UARTexture : public UTexture {

public:

	enum class EARTextureType TextureType; // 0xB8 (1)
	float Timestamp; // 0xBC (4)
	struct FGuid ExternalTextureGuid; // 0xC0 (16)
	struct FVector2D Size; // 0xD0 (8)
};

// Class AugmentedReality.ARTextureCameraDepth
class UARTextureCameraDepth : public UARTexture {

public:

	enum class EARDepthQuality DepthQuality; // 0xD8 (1)
	enum class EARDepthAccuracy DepthAccuracy; // 0xD9 (1)
	char bIsTemporallySmoothed : 0; // 0xDA (1)
};

// Class AugmentedReality.AREnvironmentCaptureProbeTexture
class UAREnvironmentCaptureProbeTexture : public UTextureCube {

public:

	enum class EARTextureType TextureType; // 0x110 (1)
	float Timestamp; // 0x114 (4)
	struct FGuid ExternalTextureGuid; // 0x118 (16)
	struct FVector2D Size; // 0x128 (8)
};

// Class AugmentedReality.ARTrackedGeometry
class UARTrackedGeometry : public Object {

public:

	struct FGuid UniqueID; // 0x28 (16)
	struct FTransform LocalToTrackingTransform; // 0x40 (48)
	struct FTransform LocalToAlignedTrackingTransform; // 0x70 (48)
	enum class EARTrackingState TrackingState; // 0xA0 (1)
	struct UMRMeshComponent UnderlyingMesh; // 0xB0 (8)
	enum class EARObjectClassification ObjectClassification; // 0xB8 (1)
	int32_t LastUpdateFrameNumber; // 0xD0 (4)
	struct FName DebugName; // 0xE0 (8)

	char IsTracked(); // Function AugmentedReality.ARTrackedGeometry.IsTracked(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x36E6430>
	struct UMRMeshComponent GetUnderlyingMesh(); // Function AugmentedReality.ARTrackedGeometry.GetUnderlyingMesh(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x36E6350>
	enum class EARTrackingState GetTrackingState(); // Function AugmentedReality.ARTrackedGeometry.GetTrackingState(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x36E0890>
	enum class EARObjectClassification GetObjectClassification(); // Function AugmentedReality.ARTrackedGeometry.GetObjectClassification(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x36E62C0>
	struct FTransform GetLocalToWorldTransform(); // Function AugmentedReality.ARTrackedGeometry.GetLocalToWorldTransform(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x36E6260>
	struct FTransform GetLocalToTrackingTransform(); // Function AugmentedReality.ARTrackedGeometry.GetLocalToTrackingTransform(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x36E09B0>
	float GetLastUpdateTimestamp(); // Function AugmentedReality.ARTrackedGeometry.GetLastUpdateTimestamp(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x36E6190>
	int32_t GetLastUpdateFrameNumber(); // Function AugmentedReality.ARTrackedGeometry.GetLastUpdateFrameNumber(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x36E6160>
	struct FName GetDebugName(); // Function AugmentedReality.ARTrackedGeometry.GetDebugName(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x36E6020>
};

// Class AugmentedReality.ARPlaneGeometry
class UARPlaneGeometry : public UARTrackedGeometry {

public:

	enum class EARPlaneOrientation Orientation; // 0xE8 (1)
	struct FVector Center; // 0xEC (12)
	struct FVector Extent; // 0xF8 (12)
	struct UARPlaneGeometry SubsumedBy; // 0x118 (8)

	struct UARPlaneGeometry GetSubsumedBy(); // Function AugmentedReality.ARPlaneGeometry.GetSubsumedBy(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x36E6300>
	enum class EARPlaneOrientation GetOrientation(); // Function AugmentedReality.ARPlaneGeometry.GetOrientation(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x36E62E0>
	struct FVector GetExtent(); // Function AugmentedReality.ARPlaneGeometry.GetExtent(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x36E6130>
	struct FVector GetCenter(); // Function AugmentedReality.ARPlaneGeometry.GetCenter(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x36E5FF0>
	struct TArray<struct FVector> GetBoundaryPolygonInLocalSpace(); // Function AugmentedReality.ARPlaneGeometry.GetBoundaryPolygonInLocalSpace(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x36E5F20>
};

// Class AugmentedReality.ARTrackedImage
class UARTrackedImage : public UARTrackedGeometry {

public:

	struct UARCandidateImage DetectedImage; // 0xE8 (8)
	struct FVector2D EstimatedSize; // 0xF0 (8)

	struct FVector2D GetEstimateSize(); // Function AugmentedReality.ARTrackedImage.GetEstimateSize(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x36E60B0>
	struct UARCandidateImage GetDetectedImage(); // Function AugmentedReality.ARTrackedImage.GetDetectedImage(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x36E6060>
};

// Class AugmentedReality.ARTrackedQRCode
class UARTrackedQRCode : public UARTrackedImage {

public:

	struct FString QRCode; // 0xF8 (16)
	int32_t Version; // 0x108 (4)
};

// Class AugmentedReality.ARFaceGeometry
class UARFaceGeometry : public UARTrackedGeometry {

public:

	struct FVector LookAtTarget; // 0xE8 (12)
	char bIsTracked : 0; // 0xF4 (1)
	struct TMap<enum class EARFaceBlendShape, float> BlendShapes; // 0xF8 (80)

	struct FTransform GetWorldSpaceEyeTransform(enum class EAREye Eye); // Function AugmentedReality.ARFaceGeometry.GetWorldSpaceEyeTransform(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x36E6380>
	struct FTransform GetLocalSpaceEyeTransform(enum class EAREye Eye); // Function AugmentedReality.ARFaceGeometry.GetLocalSpaceEyeTransform(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x36E61C0>
	float GetBlendShapeValue(enum class EARFaceBlendShape BlendShape); // Function AugmentedReality.ARFaceGeometry.GetBlendShapeValue(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x36E5CB0>
	struct TMap<enum class EARFaceBlendShape, float> GetBlendShapes(); // Function AugmentedReality.ARFaceGeometry.GetBlendShapes(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x36E5D40>
};

// Class AugmentedReality.AREnvironmentCaptureProbe
class UAREnvironmentCaptureProbe : public UARTrackedGeometry {

public:

	struct UAREnvironmentCaptureProbeTexture EnvironmentCaptureTexture; // 0xF8 (8)

	struct FVector GetExtent(); // Function AugmentedReality.AREnvironmentCaptureProbe.GetExtent(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x36E60F0>
	struct UAREnvironmentCaptureProbeTexture GetEnvironmentCaptureTexture(); // Function AugmentedReality.AREnvironmentCaptureProbe.GetEnvironmentCaptureTexture(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x36E6080>
};

// Class AugmentedReality.ARTrackedObject
class UARTrackedObject : public UARTrackedGeometry {

public:

	struct UARCandidateObject DetectedObject; // 0xE8 (8)

	struct UARCandidateObject GetDetectedObject(); // Function AugmentedReality.ARTrackedObject.GetDetectedObject(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x36E6060>
};

// Class AugmentedReality.ARTrackableNotifyComponent
class UARTrackableNotifyComponent : public UActorComponent {

public:

	struct FMulticastInlineDelegate OnAddTrackedGeometry; // 0xB0 (16)
	struct FMulticastInlineDelegate OnUpdateTrackedGeometry; // 0xC0 (16)
	struct FMulticastInlineDelegate OnRemoveTrackedGeometry; // 0xD0 (16)
	struct FMulticastInlineDelegate OnAddTrackedPlane; // 0xE0 (16)
	struct FMulticastInlineDelegate OnUpdateTrackedPlane; // 0xF0 (16)
	struct FMulticastInlineDelegate OnRemoveTrackedPlane; // 0x100 (16)
	struct FMulticastInlineDelegate OnAddTrackedPoint; // 0x110 (16)
	struct FMulticastInlineDelegate OnUpdateTrackedPoint; // 0x120 (16)
	struct FMulticastInlineDelegate OnRemoveTrackedPoint; // 0x130 (16)
	struct FMulticastInlineDelegate OnAddTrackedImage; // 0x140 (16)
	struct FMulticastInlineDelegate OnUpdateTrackedImage; // 0x150 (16)
	struct FMulticastInlineDelegate OnRemoveTrackedImage; // 0x160 (16)
	struct FMulticastInlineDelegate OnAddTrackedFace; // 0x170 (16)
	struct FMulticastInlineDelegate OnUpdateTrackedFace; // 0x180 (16)
	struct FMulticastInlineDelegate OnRemoveTrackedFace; // 0x190 (16)
	struct FMulticastInlineDelegate OnAddTrackedEnvProbe; // 0x1A0 (16)
	struct FMulticastInlineDelegate OnUpdateTrackedEnvProbe; // 0x1B0 (16)
	struct FMulticastInlineDelegate OnRemoveTrackedEnvProbe; // 0x1C0 (16)
	struct FMulticastInlineDelegate OnAddTrackedObject; // 0x1D0 (16)
	struct FMulticastInlineDelegate OnUpdateTrackedObject; // 0x1E0 (16)
	struct FMulticastInlineDelegate OnRemoveTrackedObject; // 0x1F0 (16)
};

// Class AugmentedReality.ARCandidateObject
class UARCandidateObject : public UDataAsset {

public:

	struct TArray<char> CandidateObjectData; // 0x30 (16)
	struct FString FriendlyName; // 0x40 (16)
	struct FBox BoundingBox; // 0x50 (28)

	void SetFriendlyName(struct FString NewName); // Function AugmentedReality.ARCandidateObject.SetFriendlyName(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x36E8CC0>
	void SetCandidateObjectData(struct TArray<char>& InCandidateObject); // Function AugmentedReality.ARCandidateObject.SetCandidateObjectData(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x36E8C10>
	void SetBoundingBox(struct FBox& InBoundingBox); // Function AugmentedReality.ARCandidateObject.SetBoundingBox(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x36E8B70>
	struct FString GetFriendlyName(); // Function AugmentedReality.ARCandidateObject.GetFriendlyName(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x36E8AE0>
	struct TArray<char> GetCandidateObjectData(); // Function AugmentedReality.ARCandidateObject.GetCandidateObjectData(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x36E8A60>
	struct FBox GetBoundingBox(); // Function AugmentedReality.ARCandidateObject.GetBoundingBox(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x36E8A30>
};

// ScriptStruct AugmentedReality.ARSharedWorldReplicationState
struct FARSharedWorldReplicationState {
	int32_t PreviewImageOffset; // 0x0 (4)
	int32_t ARWorldOffset; // 0x4 (4)
};

// ScriptStruct AugmentedReality.ARTraceResult
struct FARTraceResult {
	float DistanceFromCamera; // 0x0 (4)
	enum class EARLineTraceChannels TraceChannel; // 0x4 (1)
	struct FTransform LocalToTrackingTransform; // 0x10 (48)
	struct UARTrackedGeometry TrackedGeometry; // 0x40 (8)
};

// ScriptStruct AugmentedReality.ARPose3D
struct FARPose3D {
	struct FARSkeletonDefinition SkeletonDefinition; // 0x0 (40)
	struct TArray<struct FTransform> JointTransforms; // 0x28 (16)
	struct TArray<char> IsJointTracked; // 0x38 (16)
	enum class EARJointTransformSpace JointTransformSpace; // 0x48 (1)
};

// ScriptStruct AugmentedReality.ARSkeletonDefinition
struct FARSkeletonDefinition {
	int32_t NumJoints; // 0x0 (4)
	struct TArray<struct FName> JointNames; // 0x8 (16)
	struct TArray<int32_t> ParentIndices; // 0x18 (16)
};

// ScriptStruct AugmentedReality.ARPose2D
struct FARPose2D {
	struct FARSkeletonDefinition SkeletonDefinition; // 0x0 (40)
	struct TArray<struct FVector2D> JointLocations; // 0x28 (16)
	struct TArray<char> IsJointTracked; // 0x38 (16)
};

// ScriptStruct AugmentedReality.ARVideoFormat
struct FARVideoFormat {
	int32_t FPS; // 0x0 (4)
	int32_t Width; // 0x4 (4)
	int32_t Height; // 0x8 (4)
};

// ScriptStruct AugmentedReality.ARSessionStatus
struct FARSessionStatus {
	struct FString AdditionalInfo; // 0x0 (16)
	enum class EARSessionStatus status; // 0x10 (1)
};

// Function AugmentedReality.ARSessionConfig.ShouldResetTrackedObjects
inline char UARSessionConfig::ShouldResetTrackedObjects() {
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.ShouldResetTrackedObjects");

	struct ShouldResetTrackedObjects_Params {
		
		char ReturnValue;

	}; ShouldResetTrackedObjects_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function AugmentedReality.ARSessionConfig.ShouldResetCameraTracking
inline char UARSessionConfig::ShouldResetCameraTracking() {
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.ShouldResetCameraTracking");

	struct ShouldResetCameraTracking_Params {
		
		char ReturnValue;

	}; ShouldResetCameraTracking_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function AugmentedReality.ARSessionConfig.ShouldRenderCameraOverlay
inline char UARSessionConfig::ShouldRenderCameraOverlay() {
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.ShouldRenderCameraOverlay");

	struct ShouldRenderCameraOverlay_Params {
		
		char ReturnValue;

	}; ShouldRenderCameraOverlay_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function AugmentedReality.ARSessionConfig.ShouldEnableCameraTracking
inline char UARSessionConfig::ShouldEnableCameraTracking() {
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.ShouldEnableCameraTracking");

	struct ShouldEnableCameraTracking_Params {
		
		char ReturnValue;

	}; ShouldEnableCameraTracking_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function AugmentedReality.ARSessionConfig.ShouldEnableAutoFocus
inline char UARSessionConfig::ShouldEnableAutoFocus() {
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.ShouldEnableAutoFocus");

	struct ShouldEnableAutoFocus_Params {
		
		char ReturnValue;

	}; ShouldEnableAutoFocus_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function AugmentedReality.ARSessionConfig.SetWorldMapData
inline void UARSessionConfig::SetWorldMapData(struct TArray<char> WorldMapData) {
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.SetWorldMapData");

	struct SetWorldMapData_Params {
		struct TArray<char> WorldMapData;
	}; SetWorldMapData_Params Params;

	Params.WorldMapData = WorldMapData;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AugmentedReality.ARSessionConfig.SetSessionTrackingFeatureToEnable
inline void UARSessionConfig::SetSessionTrackingFeatureToEnable(enum class EARSessionTrackingFeature InSessionTrackingFeature) {
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.SetSessionTrackingFeatureToEnable");

	struct SetSessionTrackingFeatureToEnable_Params {
		enum class EARSessionTrackingFeature InSessionTrackingFeature;
	}; SetSessionTrackingFeatureToEnable_Params Params;

	Params.InSessionTrackingFeature = InSessionTrackingFeature;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AugmentedReality.ARSessionConfig.SetResetTrackedObjects
inline void UARSessionConfig::SetResetTrackedObjects(char bNewValue) {
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.SetResetTrackedObjects");

	struct SetResetTrackedObjects_Params {
		char bNewValue;
	}; SetResetTrackedObjects_Params Params;

	Params.bNewValue = bNewValue;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AugmentedReality.ARSessionConfig.SetResetCameraTracking
inline void UARSessionConfig::SetResetCameraTracking(char bNewValue) {
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.SetResetCameraTracking");

	struct SetResetCameraTracking_Params {
		char bNewValue;
	}; SetResetCameraTracking_Params Params;

	Params.bNewValue = bNewValue;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AugmentedReality.ARSessionConfig.SetFaceTrackingUpdate
inline void UARSessionConfig::SetFaceTrackingUpdate(enum class EARFaceTrackingUpdate InUpdate) {
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.SetFaceTrackingUpdate");

	struct SetFaceTrackingUpdate_Params {
		enum class EARFaceTrackingUpdate InUpdate;
	}; SetFaceTrackingUpdate_Params Params;

	Params.InUpdate = InUpdate;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AugmentedReality.ARSessionConfig.SetFaceTrackingDirection
inline void UARSessionConfig::SetFaceTrackingDirection(enum class EARFaceTrackingDirection InDirection) {
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.SetFaceTrackingDirection");

	struct SetFaceTrackingDirection_Params {
		enum class EARFaceTrackingDirection InDirection;
	}; SetFaceTrackingDirection_Params Params;

	Params.InDirection = InDirection;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AugmentedReality.ARSessionConfig.SetEnableAutoFocus
inline void UARSessionConfig::SetEnableAutoFocus(char bNewValue) {
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.SetEnableAutoFocus");

	struct SetEnableAutoFocus_Params {
		char bNewValue;
	}; SetEnableAutoFocus_Params Params;

	Params.bNewValue = bNewValue;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AugmentedReality.ARSessionConfig.SetDesiredVideoFormat
inline void UARSessionConfig::SetDesiredVideoFormat(struct FARVideoFormat NewFormat) {
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.SetDesiredVideoFormat");

	struct SetDesiredVideoFormat_Params {
		struct FARVideoFormat NewFormat;
	}; SetDesiredVideoFormat_Params Params;

	Params.NewFormat = NewFormat;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AugmentedReality.ARSessionConfig.SetCandidateObjectList
inline void UARSessionConfig::SetCandidateObjectList(struct TArray<struct UARCandidateObject>& InCandidateObjects) {
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.SetCandidateObjectList");

	struct SetCandidateObjectList_Params {
		struct TArray<struct UARCandidateObject>& InCandidateObjects;
	}; SetCandidateObjectList_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	InCandidateObjects = Params.InCandidateObjects;

}

// Function AugmentedReality.ARSessionConfig.GetWorldMapData
inline struct TArray<char> UARSessionConfig::GetWorldMapData() {
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.GetWorldMapData");

	struct GetWorldMapData_Params {
		
		struct TArray<char> ReturnValue;

	}; GetWorldMapData_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function AugmentedReality.ARSessionConfig.GetWorldAlignment
inline enum class EARWorldAlignment UARSessionConfig::GetWorldAlignment() {
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.GetWorldAlignment");

	struct GetWorldAlignment_Params {
		
		enum class EARWorldAlignment ReturnValue;

	}; GetWorldAlignment_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function AugmentedReality.ARSessionConfig.GetSessionType
inline enum class EARSessionType UARSessionConfig::GetSessionType() {
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.GetSessionType");

	struct GetSessionType_Params {
		
		enum class EARSessionType ReturnValue;

	}; GetSessionType_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function AugmentedReality.ARSessionConfig.GetPlaneDetectionMode
inline enum class EARPlaneDetectionMode UARSessionConfig::GetPlaneDetectionMode() {
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.GetPlaneDetectionMode");

	struct GetPlaneDetectionMode_Params {
		
		enum class EARPlaneDetectionMode ReturnValue;

	}; GetPlaneDetectionMode_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function AugmentedReality.ARSessionConfig.GetMaxNumSimultaneousImagesTracked
inline int32_t UARSessionConfig::GetMaxNumSimultaneousImagesTracked() {
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.GetMaxNumSimultaneousImagesTracked");

	struct GetMaxNumSimultaneousImagesTracked_Params {
		
		int32_t ReturnValue;

	}; GetMaxNumSimultaneousImagesTracked_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function AugmentedReality.ARSessionConfig.GetLightEstimationMode
inline enum class EARLightEstimationMode UARSessionConfig::GetLightEstimationMode() {
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.GetLightEstimationMode");

	struct GetLightEstimationMode_Params {
		
		enum class EARLightEstimationMode ReturnValue;

	}; GetLightEstimationMode_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function AugmentedReality.ARSessionConfig.GetFrameSyncMode
inline enum class EARFrameSyncMode UARSessionConfig::GetFrameSyncMode() {
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.GetFrameSyncMode");

	struct GetFrameSyncMode_Params {
		
		enum class EARFrameSyncMode ReturnValue;

	}; GetFrameSyncMode_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function AugmentedReality.ARSessionConfig.GetFaceTrackingUpdate
inline enum class EARFaceTrackingUpdate UARSessionConfig::GetFaceTrackingUpdate() {
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.GetFaceTrackingUpdate");

	struct GetFaceTrackingUpdate_Params {
		
		enum class EARFaceTrackingUpdate ReturnValue;

	}; GetFaceTrackingUpdate_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function AugmentedReality.ARSessionConfig.GetFaceTrackingDirection
inline enum class EARFaceTrackingDirection UARSessionConfig::GetFaceTrackingDirection() {
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.GetFaceTrackingDirection");

	struct GetFaceTrackingDirection_Params {
		
		enum class EARFaceTrackingDirection ReturnValue;

	}; GetFaceTrackingDirection_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function AugmentedReality.ARSessionConfig.GetEnvironmentCaptureProbeType
inline enum class EAREnvironmentCaptureProbeType UARSessionConfig::GetEnvironmentCaptureProbeType() {
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.GetEnvironmentCaptureProbeType");

	struct GetEnvironmentCaptureProbeType_Params {
		
		enum class EAREnvironmentCaptureProbeType ReturnValue;

	}; GetEnvironmentCaptureProbeType_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function AugmentedReality.ARSessionConfig.GetEnabledSessionTrackingFeature
inline enum class EARSessionTrackingFeature UARSessionConfig::GetEnabledSessionTrackingFeature() {
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.GetEnabledSessionTrackingFeature");

	struct GetEnabledSessionTrackingFeature_Params {
		
		enum class EARSessionTrackingFeature ReturnValue;

	}; GetEnabledSessionTrackingFeature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function AugmentedReality.ARSessionConfig.GetDesiredVideoFormat
inline struct FARVideoFormat UARSessionConfig::GetDesiredVideoFormat() {
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.GetDesiredVideoFormat");

	struct GetDesiredVideoFormat_Params {
		
		struct FARVideoFormat ReturnValue;

	}; GetDesiredVideoFormat_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function AugmentedReality.ARSessionConfig.GetCandidateObjectList
inline struct TArray<struct UARCandidateObject> UARSessionConfig::GetCandidateObjectList() {
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.GetCandidateObjectList");

	struct GetCandidateObjectList_Params {
		
		struct TArray<struct UARCandidateObject> ReturnValue;

	}; GetCandidateObjectList_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function AugmentedReality.ARSessionConfig.GetCandidateImageList
inline struct TArray<struct UARCandidateImage> UARSessionConfig::GetCandidateImageList() {
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.GetCandidateImageList");

	struct GetCandidateImageList_Params {
		
		struct TArray<struct UARCandidateImage> ReturnValue;

	}; GetCandidateImageList_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function AugmentedReality.ARSessionConfig.AddCandidateObject
inline void UARSessionConfig::AddCandidateObject(struct UARCandidateObject CandidateObject) {
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.AddCandidateObject");

	struct AddCandidateObject_Params {
		struct UARCandidateObject CandidateObject;
	}; AddCandidateObject_Params Params;

	Params.CandidateObject = CandidateObject;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AugmentedReality.ARSessionConfig.AddCandidateImage
inline void UARSessionConfig::AddCandidateImage(struct UARCandidateImage NewCandidateImage) {
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.AddCandidateImage");

	struct AddCandidateImage_Params {
		struct UARCandidateImage NewCandidateImage;
	}; AddCandidateImage_Params Params;

	Params.NewCandidateImage = NewCandidateImage;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AugmentedReality.ARBasicLightEstimate.GetAmbientIntensityLumens
inline float UARBasicLightEstimate::GetAmbientIntensityLumens() {
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBasicLightEstimate.GetAmbientIntensityLumens");

	struct GetAmbientIntensityLumens_Params {
		
		float ReturnValue;

	}; GetAmbientIntensityLumens_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function AugmentedReality.ARBasicLightEstimate.GetAmbientColorTemperatureKelvin
inline float UARBasicLightEstimate::GetAmbientColorTemperatureKelvin() {
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBasicLightEstimate.GetAmbientColorTemperatureKelvin");

	struct GetAmbientColorTemperatureKelvin_Params {
		
		float ReturnValue;

	}; GetAmbientColorTemperatureKelvin_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function AugmentedReality.ARBasicLightEstimate.GetAmbientColor
inline struct FLinearColor UARBasicLightEstimate::GetAmbientColor() {
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBasicLightEstimate.GetAmbientColor");

	struct GetAmbientColor_Params {
		
		struct FLinearColor ReturnValue;

	}; GetAmbientColor_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function AugmentedReality.ARCandidateImage.GetPhysicalWidth
inline float UARCandidateImage::GetPhysicalWidth() {
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARCandidateImage.GetPhysicalWidth");

	struct GetPhysicalWidth_Params {
		
		float ReturnValue;

	}; GetPhysicalWidth_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function AugmentedReality.ARCandidateImage.GetPhysicalHeight
inline float UARCandidateImage::GetPhysicalHeight() {
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARCandidateImage.GetPhysicalHeight");

	struct GetPhysicalHeight_Params {
		
		float ReturnValue;

	}; GetPhysicalHeight_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function AugmentedReality.ARCandidateImage.GetOrientation
inline enum class EARCandidateImageOrientation UARCandidateImage::GetOrientation() {
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARCandidateImage.GetOrientation");

	struct GetOrientation_Params {
		
		enum class EARCandidateImageOrientation ReturnValue;

	}; GetOrientation_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function AugmentedReality.ARCandidateImage.GetFriendlyName
inline struct FString UARCandidateImage::GetFriendlyName() {
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARCandidateImage.GetFriendlyName");

	struct GetFriendlyName_Params {
		
		struct FString ReturnValue;

	}; GetFriendlyName_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function AugmentedReality.ARCandidateImage.GetCandidateTexture
inline struct UTexture2D UARCandidateImage::GetCandidateTexture() {
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARCandidateImage.GetCandidateTexture");

	struct GetCandidateTexture_Params {
		
		struct UTexture2D ReturnValue;

	}; GetCandidateTexture_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function AugmentedReality.ARSaveWorldAsyncTaskBlueprintProxy.ARSaveWorld
inline struct UARSaveWorldAsyncTaskBlueprintProxy UARSaveWorldAsyncTaskBlueprintProxy::ARSaveWorld(struct Object WorldContextObject) {
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSaveWorldAsyncTaskBlueprintProxy.ARSaveWorld");

	struct ARSaveWorld_Params {
		struct Object WorldContextObject;
		struct UARSaveWorldAsyncTaskBlueprintProxy ReturnValue;

	}; ARSaveWorld_Params Params;

	Params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function AugmentedReality.ARGetCandidateObjectAsyncTaskBlueprintProxy.ARGetCandidateObject
inline struct UARGetCandidateObjectAsyncTaskBlueprintProxy UARGetCandidateObjectAsyncTaskBlueprintProxy::ARGetCandidateObject(struct Object WorldContextObject, struct FVector Location, struct FVector Extent) {
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARGetCandidateObjectAsyncTaskBlueprintProxy.ARGetCandidateObject");

	struct ARGetCandidateObject_Params {
		struct Object WorldContextObject;
		struct FVector Location;
		struct FVector Extent;
		struct UARGetCandidateObjectAsyncTaskBlueprintProxy ReturnValue;

	}; ARGetCandidateObject_Params Params;

	Params.WorldContextObject = WorldContextObject;
	Params.Location = Location;
	Params.Extent = Extent;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function AugmentedReality.ARPin.GetTrackingState
inline enum class EARTrackingState UARPin::GetTrackingState() {
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARPin.GetTrackingState");

	struct GetTrackingState_Params {
		
		enum class EARTrackingState ReturnValue;

	}; GetTrackingState_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function AugmentedReality.ARPin.GetTrackedGeometry
inline struct UARTrackedGeometry UARPin::GetTrackedGeometry() {
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARPin.GetTrackedGeometry");

	struct GetTrackedGeometry_Params {
		
		struct UARTrackedGeometry ReturnValue;

	}; GetTrackedGeometry_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function AugmentedReality.ARPin.GetPinnedComponent
inline struct USceneComponent UARPin::GetPinnedComponent() {
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARPin.GetPinnedComponent");

	struct GetPinnedComponent_Params {
		
		struct USceneComponent ReturnValue;

	}; GetPinnedComponent_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function AugmentedReality.ARPin.GetLocalToWorldTransform
inline struct FTransform UARPin::GetLocalToWorldTransform() {
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARPin.GetLocalToWorldTransform");

	struct GetLocalToWorldTransform_Params {
		
		struct FTransform ReturnValue;

	}; GetLocalToWorldTransform_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function AugmentedReality.ARPin.GetLocalToTrackingTransform
inline struct FTransform UARPin::GetLocalToTrackingTransform() {
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARPin.GetLocalToTrackingTransform");

	struct GetLocalToTrackingTransform_Params {
		
		struct FTransform ReturnValue;

	}; GetLocalToTrackingTransform_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function AugmentedReality.ARPin.GetDebugName
inline struct FName UARPin::GetDebugName() {
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARPin.GetDebugName");

	struct GetDebugName_Params {
		
		struct FName ReturnValue;

	}; GetDebugName_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function AugmentedReality.ARPin.DebugDraw
inline void UARPin::DebugDraw(struct UWorld World, struct FLinearColor& Color, float Scale, float PersistForSeconds) {
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARPin.DebugDraw");

	struct DebugDraw_Params {
		struct UWorld World;
		struct FLinearColor& Color;
		float Scale;
		float PersistForSeconds;
	}; DebugDraw_Params Params;

	Params.World = World;
	Params.Scale = Scale;
	Params.PersistForSeconds = PersistForSeconds;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Color = Params.Color;

}

// Function AugmentedReality.ARSharedWorldGameMode.SetPreviewImageData
inline void AARSharedWorldGameMode::SetPreviewImageData(struct TArray<char> ImageData) {
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSharedWorldGameMode.SetPreviewImageData");

	struct SetPreviewImageData_Params {
		struct TArray<char> ImageData;
	}; SetPreviewImageData_Params Params;

	Params.ImageData = ImageData;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AugmentedReality.ARSharedWorldGameMode.SetARWorldSharingIsReady
inline void AARSharedWorldGameMode::SetARWorldSharingIsReady() {
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSharedWorldGameMode.SetARWorldSharingIsReady");

	struct SetARWorldSharingIsReady_Params {
		
	}; SetARWorldSharingIsReady_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AugmentedReality.ARSharedWorldGameMode.SetARSharedWorldData
inline void AARSharedWorldGameMode::SetARSharedWorldData(struct TArray<char> ARWorldData) {
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSharedWorldGameMode.SetARSharedWorldData");

	struct SetARSharedWorldData_Params {
		struct TArray<char> ARWorldData;
	}; SetARSharedWorldData_Params Params;

	Params.ARWorldData = ARWorldData;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AugmentedReality.ARSharedWorldGameMode.GetARSharedWorldGameState
inline struct AARSharedWorldGameState AARSharedWorldGameMode::GetARSharedWorldGameState() {
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSharedWorldGameMode.GetARSharedWorldGameState");

	struct GetARSharedWorldGameState_Params {
		
		struct AARSharedWorldGameState ReturnValue;

	}; GetARSharedWorldGameState_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function AugmentedReality.ARSharedWorldGameState.K2_OnARWorldMapIsReady
inline void AARSharedWorldGameState::K2_OnARWorldMapIsReady() {
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSharedWorldGameState.K2_OnARWorldMapIsReady");

	struct K2_OnARWorldMapIsReady_Params {
		
	}; K2_OnARWorldMapIsReady_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AugmentedReality.ARSkyLight.SetEnvironmentCaptureProbe
inline void AARSkyLight::SetEnvironmentCaptureProbe(struct UAREnvironmentCaptureProbe InCaptureProbe) {
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSkyLight.SetEnvironmentCaptureProbe");

	struct SetEnvironmentCaptureProbe_Params {
		struct UAREnvironmentCaptureProbe InCaptureProbe;
	}; SetEnvironmentCaptureProbe_Params Params;

	Params.InCaptureProbe = InCaptureProbe;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AugmentedReality.ARTrackedGeometry.IsTracked
inline char UARTrackedGeometry::IsTracked() {
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTrackedGeometry.IsTracked");

	struct IsTracked_Params {
		
		char ReturnValue;

	}; IsTracked_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function AugmentedReality.ARTrackedGeometry.GetUnderlyingMesh
inline struct UMRMeshComponent UARTrackedGeometry::GetUnderlyingMesh() {
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTrackedGeometry.GetUnderlyingMesh");

	struct GetUnderlyingMesh_Params {
		
		struct UMRMeshComponent ReturnValue;

	}; GetUnderlyingMesh_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function AugmentedReality.ARTrackedGeometry.GetTrackingState
inline enum class EARTrackingState UARTrackedGeometry::GetTrackingState() {
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTrackedGeometry.GetTrackingState");

	struct GetTrackingState_Params {
		
		enum class EARTrackingState ReturnValue;

	}; GetTrackingState_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function AugmentedReality.ARTrackedGeometry.GetObjectClassification
inline enum class EARObjectClassification UARTrackedGeometry::GetObjectClassification() {
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTrackedGeometry.GetObjectClassification");

	struct GetObjectClassification_Params {
		
		enum class EARObjectClassification ReturnValue;

	}; GetObjectClassification_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function AugmentedReality.ARTrackedGeometry.GetLocalToWorldTransform
inline struct FTransform UARTrackedGeometry::GetLocalToWorldTransform() {
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTrackedGeometry.GetLocalToWorldTransform");

	struct GetLocalToWorldTransform_Params {
		
		struct FTransform ReturnValue;

	}; GetLocalToWorldTransform_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function AugmentedReality.ARTrackedGeometry.GetLocalToTrackingTransform
inline struct FTransform UARTrackedGeometry::GetLocalToTrackingTransform() {
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTrackedGeometry.GetLocalToTrackingTransform");

	struct GetLocalToTrackingTransform_Params {
		
		struct FTransform ReturnValue;

	}; GetLocalToTrackingTransform_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function AugmentedReality.ARTrackedGeometry.GetLastUpdateTimestamp
inline float UARTrackedGeometry::GetLastUpdateTimestamp() {
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTrackedGeometry.GetLastUpdateTimestamp");

	struct GetLastUpdateTimestamp_Params {
		
		float ReturnValue;

	}; GetLastUpdateTimestamp_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function AugmentedReality.ARTrackedGeometry.GetLastUpdateFrameNumber
inline int32_t UARTrackedGeometry::GetLastUpdateFrameNumber() {
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTrackedGeometry.GetLastUpdateFrameNumber");

	struct GetLastUpdateFrameNumber_Params {
		
		int32_t ReturnValue;

	}; GetLastUpdateFrameNumber_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function AugmentedReality.ARTrackedGeometry.GetDebugName
inline struct FName UARTrackedGeometry::GetDebugName() {
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTrackedGeometry.GetDebugName");

	struct GetDebugName_Params {
		
		struct FName ReturnValue;

	}; GetDebugName_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function AugmentedReality.ARPlaneGeometry.GetSubsumedBy
inline struct UARPlaneGeometry UARPlaneGeometry::GetSubsumedBy() {
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARPlaneGeometry.GetSubsumedBy");

	struct GetSubsumedBy_Params {
		
		struct UARPlaneGeometry ReturnValue;

	}; GetSubsumedBy_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function AugmentedReality.ARPlaneGeometry.GetOrientation
inline enum class EARPlaneOrientation UARPlaneGeometry::GetOrientation() {
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARPlaneGeometry.GetOrientation");

	struct GetOrientation_Params {
		
		enum class EARPlaneOrientation ReturnValue;

	}; GetOrientation_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function AugmentedReality.ARPlaneGeometry.GetExtent
inline struct FVector UARPlaneGeometry::GetExtent() {
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARPlaneGeometry.GetExtent");

	struct GetExtent_Params {
		
		struct FVector ReturnValue;

	}; GetExtent_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function AugmentedReality.ARPlaneGeometry.GetCenter
inline struct FVector UARPlaneGeometry::GetCenter() {
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARPlaneGeometry.GetCenter");

	struct GetCenter_Params {
		
		struct FVector ReturnValue;

	}; GetCenter_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function AugmentedReality.ARPlaneGeometry.GetBoundaryPolygonInLocalSpace
inline struct TArray<struct FVector> UARPlaneGeometry::GetBoundaryPolygonInLocalSpace() {
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARPlaneGeometry.GetBoundaryPolygonInLocalSpace");

	struct GetBoundaryPolygonInLocalSpace_Params {
		
		struct TArray<struct FVector> ReturnValue;

	}; GetBoundaryPolygonInLocalSpace_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function AugmentedReality.ARTrackedImage.GetEstimateSize
inline struct FVector2D UARTrackedImage::GetEstimateSize() {
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTrackedImage.GetEstimateSize");

	struct GetEstimateSize_Params {
		
		struct FVector2D ReturnValue;

	}; GetEstimateSize_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function AugmentedReality.ARTrackedImage.GetDetectedImage
inline struct UARCandidateImage UARTrackedImage::GetDetectedImage() {
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTrackedImage.GetDetectedImage");

	struct GetDetectedImage_Params {
		
		struct UARCandidateImage ReturnValue;

	}; GetDetectedImage_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function AugmentedReality.ARFaceGeometry.GetWorldSpaceEyeTransform
inline struct FTransform UARFaceGeometry::GetWorldSpaceEyeTransform(enum class EAREye Eye) {
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARFaceGeometry.GetWorldSpaceEyeTransform");

	struct GetWorldSpaceEyeTransform_Params {
		enum class EAREye Eye;
		struct FTransform ReturnValue;

	}; GetWorldSpaceEyeTransform_Params Params;

	Params.Eye = Eye;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function AugmentedReality.ARFaceGeometry.GetLocalSpaceEyeTransform
inline struct FTransform UARFaceGeometry::GetLocalSpaceEyeTransform(enum class EAREye Eye) {
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARFaceGeometry.GetLocalSpaceEyeTransform");

	struct GetLocalSpaceEyeTransform_Params {
		enum class EAREye Eye;
		struct FTransform ReturnValue;

	}; GetLocalSpaceEyeTransform_Params Params;

	Params.Eye = Eye;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function AugmentedReality.ARFaceGeometry.GetBlendShapeValue
inline float UARFaceGeometry::GetBlendShapeValue(enum class EARFaceBlendShape BlendShape) {
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARFaceGeometry.GetBlendShapeValue");

	struct GetBlendShapeValue_Params {
		enum class EARFaceBlendShape BlendShape;
		float ReturnValue;

	}; GetBlendShapeValue_Params Params;

	Params.BlendShape = BlendShape;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function AugmentedReality.ARFaceGeometry.GetBlendShapes
inline struct TMap<enum class EARFaceBlendShape, float> UARFaceGeometry::GetBlendShapes() {
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARFaceGeometry.GetBlendShapes");

	struct GetBlendShapes_Params {
		
		struct TMap<enum class EARFaceBlendShape, float> ReturnValue;

	}; GetBlendShapes_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function AugmentedReality.AREnvironmentCaptureProbe.GetExtent
inline struct FVector UAREnvironmentCaptureProbe::GetExtent() {
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.AREnvironmentCaptureProbe.GetExtent");

	struct GetExtent_Params {
		
		struct FVector ReturnValue;

	}; GetExtent_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function AugmentedReality.AREnvironmentCaptureProbe.GetEnvironmentCaptureTexture
inline struct UAREnvironmentCaptureProbeTexture UAREnvironmentCaptureProbe::GetEnvironmentCaptureTexture() {
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.AREnvironmentCaptureProbe.GetEnvironmentCaptureTexture");

	struct GetEnvironmentCaptureTexture_Params {
		
		struct UAREnvironmentCaptureProbeTexture ReturnValue;

	}; GetEnvironmentCaptureTexture_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function AugmentedReality.ARTrackedObject.GetDetectedObject
inline struct UARCandidateObject UARTrackedObject::GetDetectedObject() {
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTrackedObject.GetDetectedObject");

	struct GetDetectedObject_Params {
		
		struct UARCandidateObject ReturnValue;

	}; GetDetectedObject_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function AugmentedReality.ARCandidateObject.SetFriendlyName
inline void UARCandidateObject::SetFriendlyName(struct FString NewName) {
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARCandidateObject.SetFriendlyName");

	struct SetFriendlyName_Params {
		struct FString NewName;
	}; SetFriendlyName_Params Params;

	Params.NewName = NewName;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AugmentedReality.ARCandidateObject.SetCandidateObjectData
inline void UARCandidateObject::SetCandidateObjectData(struct TArray<char>& InCandidateObject) {
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARCandidateObject.SetCandidateObjectData");

	struct SetCandidateObjectData_Params {
		struct TArray<char>& InCandidateObject;
	}; SetCandidateObjectData_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	InCandidateObject = Params.InCandidateObject;

}

// Function AugmentedReality.ARCandidateObject.SetBoundingBox
inline void UARCandidateObject::SetBoundingBox(struct FBox& InBoundingBox) {
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARCandidateObject.SetBoundingBox");

	struct SetBoundingBox_Params {
		struct FBox& InBoundingBox;
	}; SetBoundingBox_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	InBoundingBox = Params.InBoundingBox;

}

// Function AugmentedReality.ARCandidateObject.GetFriendlyName
inline struct FString UARCandidateObject::GetFriendlyName() {
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARCandidateObject.GetFriendlyName");

	struct GetFriendlyName_Params {
		
		struct FString ReturnValue;

	}; GetFriendlyName_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function AugmentedReality.ARCandidateObject.GetCandidateObjectData
inline struct TArray<char> UARCandidateObject::GetCandidateObjectData() {
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARCandidateObject.GetCandidateObjectData");

	struct GetCandidateObjectData_Params {
		
		struct TArray<char> ReturnValue;

	}; GetCandidateObjectData_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function AugmentedReality.ARCandidateObject.GetBoundingBox
inline struct FBox UARCandidateObject::GetBoundingBox() {
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARCandidateObject.GetBoundingBox");

	struct GetBoundingBox_Params {
		
		struct FBox ReturnValue;

	}; GetBoundingBox_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

