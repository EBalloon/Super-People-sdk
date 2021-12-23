// Enum MagicLeap.PurchaseType
enum class PurchaseType : uint8 {
	PurchaseType = 0
	PurchaseType = 1
	PurchaseType = 2
	PurchaseType = 3
};

// Enum MagicLeap.EFocusLostReason
enum class EFocusLostReason : uint8 {
	EFocusLostReason = 0
	EFocusLostReason = 1
	EFocusLostReason = 2
};

// Enum MagicLeap.EMagicLeapMeshLOD
enum class EMagicLeapMeshLOD : uint8 {
	EMagicLeapMeshLO = 0
	EMagicLeapMeshLO = 1
	EMagicLeapMeshLO = 2
	EMagicLeapMeshLO = 3
};

// Enum MagicLeap.EMagicLeapMeshState
enum class EMagicLeapMeshState : uint8 {
	EMagicLeapMeshState = 0
	EMagicLeapMeshState = 1
	EMagicLeapMeshState = 2
	EMagicLeapMeshState = 3
	EMagicLeapMeshState = 4
};

// Enum MagicLeap.EMagicLeapMeshVertexColorMode
enum class EMagicLeapMeshVertexColorMode : uint8 {
	EMagicLeapMeshVertexColorMode = 0
	EMagicLeapMeshVertexColorMode = 1
	EMagicLeapMeshVertexColorMode = 2
	EMagicLeapMeshVertexColorMode = 3
	EMagicLeapMeshVertexColorMode = 4
};

// Enum MagicLeap.EMagicLeapMeshType
enum class EMagicLeapMeshType : uint8 {
	EMagicLeapMeshType = 0
	EMagicLeapMeshType = 1
	EMagicLeapMeshType = 2
};

// Enum MagicLeap.EMagicLeapRaycastResultState
enum class EMagicLeapRaycastResultState : uint8 {
	EMagicLeapRaycastResultState = 0
	EMagicLeapRaycastResultState = 1
	EMagicLeapRaycastResultState = 2
	EMagicLeapRaycastResultState = 3
	EMagicLeapRaycastResultState = 4
};

// Enum MagicLeap.CloudStatus
enum class CloudStatus : uint8 {
	CloudStatus = 0
	CloudStatus = 1
	CloudStatus = 2
};

// Enum MagicLeap.EMagicLeapHeadTrackingMapEvent
enum class EMagicLeapHeadTrackingMapEvent : uint8 {
	EMagicLeapHeadTrackingMapEvent = 0
	EMagicLeapHeadTrackingMapEvent = 1
	EMagicLeapHeadTrackingMapEvent = 2
	EMagicLeapHeadTrackingMapEvent = 3
	EMagicLeapHeadTrackingMapEvent = 4
};

// Enum MagicLeap.EMagicLeapHeadTrackingMode
enum class EMagicLeapHeadTrackingMode : uint8 {
	EMagicLeapHeadTrackingMode = 0
	EMagicLeapHeadTrackingMode = 1
	EMagicLeapHeadTrackingMode = 2
	EMagicLeapHeadTrackingMode = 3
};

// Enum MagicLeap.EMagicLeapHeadTrackingError
enum class EMagicLeapHeadTrackingError : uint8 {
	EMagicLeapHeadTrackingError = 0
	EMagicLeapHeadTrackingError = 1
	EMagicLeapHeadTrackingError = 2
	EMagicLeapHeadTrackingError = 3
	EMagicLeapHeadTrackingError = 4
};

// Class MagicLeap.InAppPurchaseComponent
class UInAppPurchaseComponent : UActorComponent {
	struct FMulticastInlineDelegate InAppPurchaseLogMessage; // 0xB0 (16)
	struct FMulticastInlineDelegate GetItemsDetailsSuccess; // 0xC0 (16)
	struct FMulticastInlineDelegate GetItemsDetailsFailure; // 0xD0 (16)
	struct FMulticastInlineDelegate PurchaseConfirmationSuccess; // 0xE0 (16)
	struct FMulticastInlineDelegate PurchaseConfirmationFailure; // 0xF0 (16)
	struct FMulticastInlineDelegate GetPurchaseHistorySuccess; // 0x100 (16)
	struct FMulticastInlineDelegate GetPurchaseHistoryFailure; // 0x110 (16)

	char TryPurchaseItemAsync(struct Unknown& ItemDetails); // Function MagicLeap.InAppPurchaseComponent.TryPurchaseItemAsync(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x17CA870>
	char TryGetPurchaseHistoryAsync(int32_t InNumPages); // Function MagicLeap.InAppPurchaseComponent.TryGetPurchaseHistoryAsync(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x17CA7E0>
	char TryGetItemsDetailsAsync(struct TArray<Unknown>& ItemIDs); // Function MagicLeap.InAppPurchaseComponent.TryGetItemsDetailsAsync(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x17CA700>
	void PurchaseConfirmationSuccess__DelegateSignature(struct Unknown& PurchaseConfirmations); // DelegateFunction MagicLeap.InAppPurchaseComponent.PurchaseConfirmationSuccess__DelegateSignature(MulticastDelegate|Public|Delegate|HasOutParms) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void PurchaseConfirmationFailure__DelegateSignature(); // DelegateFunction MagicLeap.InAppPurchaseComponent.PurchaseConfirmationFailure__DelegateSignature(MulticastDelegate|Public|Delegate) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void InAppPurchaseLogMessage__DelegateSignature(struct FString LogMessage); // DelegateFunction MagicLeap.InAppPurchaseComponent.InAppPurchaseLogMessage__DelegateSignature(MulticastDelegate|Public|Delegate) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void GetPurchaseHistorySuccess__DelegateSignature(struct TArray<Unknown>& PurchaseHistory); // DelegateFunction MagicLeap.InAppPurchaseComponent.GetPurchaseHistorySuccess__DelegateSignature(MulticastDelegate|Public|Delegate|HasOutParms) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void GetPurchaseHistoryFailure__DelegateSignature(); // DelegateFunction MagicLeap.InAppPurchaseComponent.GetPurchaseHistoryFailure__DelegateSignature(MulticastDelegate|Public|Delegate) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void GetItemsDetailsSuccess__DelegateSignature(struct TArray<Unknown>& ItemsDetails); // DelegateFunction MagicLeap.InAppPurchaseComponent.GetItemsDetailsSuccess__DelegateSignature(MulticastDelegate|Public|Delegate|HasOutParms) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void GetItemsDetailsFailure__DelegateSignature(); // DelegateFunction MagicLeap.InAppPurchaseComponent.GetItemsDetailsFailure__DelegateSignature(MulticastDelegate|Public|Delegate) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
};

// Class MagicLeap.LuminApplicationLifecycleComponent
class ULuminApplicationLifecycleComponent : UApplicationLifecycleComponent {
	struct FMulticastInlineDelegate DeviceHasReactivatedDelegate; // 0x140 (16)
	struct FMulticastInlineDelegate DeviceWillEnterRealityModeDelegate; // 0x150 (16)
	struct FMulticastInlineDelegate DeviceWillGoInStandbyDelegate; // 0x160 (16)
	struct FMulticastInlineDelegate FocusLostDelegate; // 0x170 (16)
	struct FMulticastInlineDelegate FocusGainedDelegate; // 0x180 (16)
};

// Class MagicLeap.MagicLeapHeadTrackingNotificationsComponent
class UMagicLeapHeadTrackingNotificationsComponent : UVRNotificationsComponent {
	struct FMulticastInlineDelegate OnHeadTrackingLost; // 0x140 (16)
	struct FMulticastInlineDelegate OnHeadTrackingRecovonen; // 0x150 (16)
	struct FMulticastInlineDelegate OnHeadTrackingRecov; // 0x160 (16)
	struct FMulticastInlineDelegate OnHeadTrackingNewSessionStarted; // 0x170 (16)
};

// Class MagicLeap.MagicLeapMeshTrackerComponent
class UMagicLeapMeshTrackerComponent : USceneComponent {
	struct FMulticastInlineDelegate OnMeshTrackerUpdated; // 0x240 (16)
	char ScanWorld : 0; // 0x250 (1)
	enum class Unknow MeshType; // 0x251 (1)
	struct Unknown BoundingVolume; // 0x258 (8)
	enum class Unknow LevelOfDetail; // 0x260 (1)
	float PerimeterOfGapsToFill; // 0x264 (4)
	char Planarize : 0; // 0x268 (1)
	float DisconnectedSectionArea; // 0x26C (4)
	char RequestNormals : 0; // 0x270 (1)
	char RequestVertexConfidence : 0; // 0x271 (1)
	enum class Unknow VertexColorMode; // 0x272 (1)
	struct TArray<Unknown> BlockVertexColors; // 0x278 (16)
	struct Unknown VertexColorFromConfidenceZero; // 0x288 (16)
	struct Unknown VertexColorFromConfidenceOne; // 0x298 (16)
	char RemoveOverlappingTriangles : 0; // 0x2A8 (1)
	struct Unknown MRMesh; // 0x2B0 (8)
	int32_t BricksPerFrame; // 0x2B8 (4)

	void SelectMeshBlocks(struct Unknown& NewMeshInfo, struct TArray<Unknown>& RequestedMesh); // Function MagicLeap.MagicLeapMeshTrackerComponent.SelectMeshBlocks(Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x17CA3E0>
	void OnMeshTrackerUpdated__DelegateSignature(struct Unknown ID, struct TArray<Unknown>& Vertices, struct TArray<Unknown>& Triangles, struct TArray<Unknown>& Normals, struct TArray<Unknown>& Confidence); // DelegateFunction MagicLeap.MagicLeapMeshTrackerComponent.OnMeshTrackerUpdated__DelegateSignature(MulticastDelegate|Public|Delegate|HasOutParms|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	int32_t GetNumQueuedBlockUpdates(); // Function MagicLeap.MagicLeapMeshTrackerComponent.GetNumQueuedBlockUpdates(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x17C9E90>
	void DisconnectMRMesh(struct Unknown InMRMeshPtr); // Function MagicLeap.MagicLeapMeshTrackerComponent.DisconnectMRMesh(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x17C9A60>
	void DisconnectBlockSelector(); // Function MagicLeap.MagicLeapMeshTrackerComponent.DisconnectBlockSelector(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x17C9A40>
	void ConnectMRMesh(struct Unknown InMRMeshPtr); // Function MagicLeap.MagicLeapMeshTrackerComponent.ConnectMRMesh(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x17C99C0>
	void ConnectBlockSelector(struct TScriptInterface<IUnknown> Selector); // Function MagicLeap.MagicLeapMeshTrackerComponent.ConnectBlockSelector(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x17C9920>
};

// Class MagicLeap.MagicLeapSettings
class UMagicLeapSettings : Object {
	char bEnableZI : 0; // 0x28 (1)
	char bUseVulkanForZI : 0; // 0x29 (1)
	char bUseMLAudioForZI : 0; // 0x2A (1)
};

// ScriptStruct MagicLeap.PurchaseItemDetails
struct FPurchaseItemDetails {
	struct FString Price; // 0x10 (16)
	struct FString Name; // 0x20 (16)
	enum class Unknow Type; // 0x30 (1)
};

// ScriptStruct MagicLeap.PurchaseConfirmation
struct FPurchaseConfirmation {
	struct FString PackageName; // 0x10 (16)
	enum class Unknow Type; // 0x48 (1)
};

// ScriptStruct MagicLeap.MagicLeapMeshBlockRequest
struct FMagicLeapMeshBlockRequest {
	struct Unknown BlockID; // 0x0 (16)
	enum class Unknow LevelOfDetail; // 0x10 (1)
};

// ScriptStruct MagicLeap.MagicLeapTrackingMeshInfo
struct FMagicLeapTrackingMeshInfo {
	struct Unknown Timestamp; // 0x0 (8)
	struct TArray<Unknown> BlockData; // 0x8 (16)
};

// ScriptStruct MagicLeap.MagicLeapMeshBlockInfo
struct FMagicLeapMeshBlockInfo {
	struct Unknown BlockID; // 0x0 (16)
	struct Unknown BlockPosition; // 0x10 (12)
	struct Unknown BlockOrientation; // 0x1C (12)
	struct Unknown BlockDimensions; // 0x28 (12)
	struct Unknown Timestamp; // 0x38 (8)
	enum class Unknow BlockState; // 0x40 (1)
};

// ScriptStruct MagicLeap.MagicLeapRaycastHitResult
struct FMagicLeapRaycastHitResult {
	enum class Unknow HitState; // 0x0 (1)
	struct Unknown HitPoint; // 0x4 (12)
	struct Unknown Normal; // 0x10 (12)
	float Confidence; // 0x1C (4)
	int32_t UserData; // 0x20 (4)
};

// ScriptStruct MagicLeap.MagicLeapRaycastQueryParams
struct FMagicLeapRaycastQueryParams {
	struct Unknown Position; // 0x0 (12)
	struct Unknown Direction; // 0xC (12)
	struct Unknown UpVector; // 0x18 (12)
	int32_t Width; // 0x24 (4)
	int32_t Height; // 0x28 (4)
	float HorizontalFovDegrees; // 0x2C (4)
	char CollideWithUnobservnf : 0; // 0x30 (1)
	int32_t UserData; // 0x34 (4)
};

// ScriptStruct MagicLeap.MagicLeapGraphicsClientPerformanceInfo
struct FMagicLeapGraphicsClientPerformanceInfo {
	float FrameStartCPUCompAcquireCPUTimeMs; // 0x0 (4)
	float FrameStartCPUFrameEndGPUTimeMs; // 0x4 (4)
	float FrameStartCPUFrameStartCPUTimeMs; // 0x8 (4)
	float FrameDurationCPUTimeMs; // 0xC (4)
	float FrameDurationGPUTimeMs; // 0x10 (4)
	float FrameInternalDurationCPUTimeMs; // 0x14 (4)
	float FrameInternalDurationGPUTimeMs; // 0x18 (4)
};

// ScriptStruct MagicLeap.MagicLeapHeadTrackingState
struct FMagicLeapHeadTrackingState {
	enum class Unknow Mode; // 0x0 (1)
	enum class Unknow Error; // 0x1 (1)
	float Confidence; // 0x4 (4)
};

