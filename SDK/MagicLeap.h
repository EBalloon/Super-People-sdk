// Enum MagicLeap.PurchaseType
enum class PurchaseType : uint8 {
	PurchaseType = 0,
	PurchaseType = 1,
	PurchaseType = 2,
	PurchaseType = 3
};

// Enum MagicLeap.EFocusLostReason
enum class EFocusLostReason : uint8 {
	EFocusLostReason = 0,
	EFocusLostReason = 1,
	EFocusLostReason = 2
};

// Enum MagicLeap.EMagicLeapMeshLOD
enum class EMagicLeapMeshLOD : uint8 {
	EMagicLeapMeshLO = 0,
	EMagicLeapMeshLO = 1,
	EMagicLeapMeshLO = 2,
	EMagicLeapMeshLO = 3
};

// Enum MagicLeap.EMagicLeapMeshState
enum class EMagicLeapMeshState : uint8 {
	EMagicLeapMeshState = 0,
	EMagicLeapMeshState = 1,
	EMagicLeapMeshState = 2,
	EMagicLeapMeshState = 3,
	EMagicLeapMeshState = 4
};

// Enum MagicLeap.EMagicLeapMeshVertexColorMode
enum class EMagicLeapMeshVertexColorMode : uint8 {
	EMagicLeapMeshVertexColorMode = 0,
	EMagicLeapMeshVertexColorMode = 1,
	EMagicLeapMeshVertexColorMode = 2,
	EMagicLeapMeshVertexColorMode = 3,
	EMagicLeapMeshVertexColorMode = 4
};

// Enum MagicLeap.EMagicLeapMeshType
enum class EMagicLeapMeshType : uint8 {
	EMagicLeapMeshType = 0,
	EMagicLeapMeshType = 1,
	EMagicLeapMeshType = 2
};

// Enum MagicLeap.EMagicLeapRaycastResultState
enum class EMagicLeapRaycastResultState : uint8 {
	EMagicLeapRaycastResultState = 0,
	EMagicLeapRaycastResultState = 1,
	EMagicLeapRaycastResultState = 2,
	EMagicLeapRaycastResultState = 3,
	EMagicLeapRaycastResultState = 4
};

// Enum MagicLeap.CloudStatus
enum class CloudStatus : uint8 {
	CloudStatus = 0,
	CloudStatus = 1,
	CloudStatus = 2
};

// Enum MagicLeap.EMagicLeapHeadTrackingMapEvent
enum class EMagicLeapHeadTrackingMapEvent : uint8 {
	EMagicLeapHeadTrackingMapEvent = 0,
	EMagicLeapHeadTrackingMapEvent = 1,
	EMagicLeapHeadTrackingMapEvent = 2,
	EMagicLeapHeadTrackingMapEvent = 3,
	EMagicLeapHeadTrackingMapEvent = 4
};

// Enum MagicLeap.EMagicLeapHeadTrackingMode
enum class EMagicLeapHeadTrackingMode : uint8 {
	EMagicLeapHeadTrackingMode = 0,
	EMagicLeapHeadTrackingMode = 1,
	EMagicLeapHeadTrackingMode = 2,
	EMagicLeapHeadTrackingMode = 3
};

// Enum MagicLeap.EMagicLeapHeadTrackingError
enum class EMagicLeapHeadTrackingError : uint8 {
	EMagicLeapHeadTrackingError = 0,
	EMagicLeapHeadTrackingError = 1,
	EMagicLeapHeadTrackingError = 2,
	EMagicLeapHeadTrackingError = 3,
	EMagicLeapHeadTrackingError = 4
};

// Class MagicLeap.InAppPurchaseComponent
struct UInAppPurchaseComponent : UActorComponent {
	struct FMulticastInlineDelegate InAppPurchaseLogMessage; //  0xb0 Size(10)
	struct FMulticastInlineDelegate GetItemsDetailsSuccess; //  0xc0 Size(10)
	struct FMulticastInlineDelegate GetItemsDetailsFailure; //  0xd0 Size(10)
	struct FMulticastInlineDelegate PurchaseConfirmationSuccess; //  0xe0 Size(10)
	struct FMulticastInlineDelegate PurchaseConfirmationFailure; //  0xf0 Size(10)
	struct FMulticastInlineDelegate GetPurchaseHistorySuccess; //  0x100 Size(10)
	struct FMulticastInlineDelegate GetPurchaseHistoryFailure; //  0x110 Size(10)

	char TryPurchaseItemAsync(struct Unknown& Item); // Function MagicLeap.InAppPurchaseComponent.TryPurchaseItemAsync(Final|Native|Public|HasOutParms|BlueprintCallable) // <Game+0x17ca870>
};

// Class MagicLeap.LuminApplicationLifecycleComponent
struct ULuminApplicationLifecycleComponent : UApplicationLifecycleComponent {
	struct FMulticastInlineDelegate DeviceHasReactivatedDomponen; //  0x140 Size(10)
	struct FMulticastInlineDelegate DeviceWillEnterRealityModeDelegate; //  0x150 Size(10)
	struct FMulticastInlineDelegate DeviceWillGoInStandbyDelegate; //  0x160 Size(10)
	struct FMulticastInlineDelegate FocusLostDelegate; //  0x170 Size(10)
	struct FMulticastInlineDelegate FocusGainedDelegate; //  0x180 Size(10)
};

// Class MagicLeap.MagicLeapHeadTrackingNotificati
struct UMagicLeapHeadTrackingNotificati : UVRNotificationsComponent {
	struct FMulticastInlineDelegate OnHeadTrackingLost; //  0x140 Size(10)
	struct FMulticastInlineDelegate OnHeadTrackingRecovonen; //  0x150 Size(10)
	struct FMulticastInlineDelegate OnHeadTrackingRecov; //  0x160 Size(10)
	struct FMulticastInlineDelegate OnHeadTrackingNewSessionStarted; //  0x170 Size(10)
};

// Class MagicLeap.MagicLeapMeshTrackerComponent
struct UMagicLeapMeshTrackerComponent : USceneComponent {
	struct FMulticastInlineDelegate OnMeshTrackerUpdated; //  0x240 Size(10)
	char ScanWorld; //  0x250 Size(1)
	enum class Unknow MeshType; //  0x251 Size(1)
	struct Unknown BoundingVolume; //  0x258 Size(8)
	enum class Unknow LevelOfDetail; //  0x260 Size(1)
	float PerimeterOfGapsToFill; //  0x264 Size(4)
	char Planarize; //  0x268 Size(1)
	float DisconnectedSectionArea; //  0x26c Size(4)
	char RequestNormals; //  0x270 Size(1)
	char RequestVertexConfidence; //  0x271 Size(1)
	enum class Unknow VertexColorMode; //  0x272 Size(1)
	struct TArray<Unknown> BlockVertexColors; //  0x278 Size(10)
	struct Unknown VertexColorFromConfidenceZero; //  0x288 Size(10)
	struct Unknown VertexColorFromConfidenceOne; //  0x298 Size(10)
	char RemoveOverlappingTriangles; //  0x2a8 Size(1)
	struct Unknown MRMesh; //  0x2b0 Size(8)
	int32_t BricksPerFrame; //  0x2b8 Size(4)

	void SelectMeshBlocks(struct Unknown& NewMeshInfo, struct TArray<Unknown>& RequestedMesh); // Function MagicLeap.MagicLeapMeshTrackerComponent.SelectMeshBlocks(Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <Game+0x17ca3e0>
};

// Class MagicLeap.MagicLeapSettings
struct UMagicLeapSettings : Object {
	char bEnableZI; //  0x28 Size(1)
	char bUseVulkanForZI; //  0x29 Size(1)
	char bUseMLAudioForZI; //  0x2a Size(1)
};

