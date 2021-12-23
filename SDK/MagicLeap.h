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
struct UInAppPurchaseComponent : UActorComponent {
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
struct ULuminApplicationLifecycleComponent : UApplicationLifecycleComponent {
	struct FMulticastInlineDelegate DeviceHasReactivatedDelegate; // 0x140 (16)
	struct FMulticastInlineDelegate DeviceWillEnterRealityModeDelegate; // 0x150 (16)
	struct FMulticastInlineDelegate DeviceWillGoInStandbyDelegate; // 0x160 (16)
	struct FMulticastInlineDelegate FocusLostDelegate; // 0x170 (16)
	struct FMulticastInlineDelegate FocusGainedDelegate; // 0x180 (16)
};

// Class MagicLeap.MagicLeapHeadTrackingNotificationsComponent
struct UMagicLeapHeadTrackingNotificationsComponent : UV {
	struct FMulticastInlineDelegate OnHeadTrackingLost; // 0x140 (16)
	struct FMulticastInlineDelegate OnHeadTrackingRecov; // 0x150 (16)
	struct FMulticastInlineDelegate OnHeadTrackingRecov; // 0x160 (16)
	struct FMulticastInlineDelegate OnHeadTrackingNewSessionStarted; // 0x170 (16)
};

// Class MagicLeap.MagicLeapMeshTrackerComponent
struct UMagicLeapMeshTrackerComponent : USceneComponent {
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
	struct Unknown M; // 0x2B0 (8)
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
struct UMagicLeapSettings : Object {
	char bEnableZI : 0; // 0x28 (1)
	char bUseVulkanForZI : 0; // 0x29 (1)
	char bUseMLAudioForZI : 0; // 0x2A (1)
};

