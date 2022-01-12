// Enum MagicLeap.PurchaseType
enum class PurchaseType : uint8_t {
	Consumable = 0,
	Nonconsumable = 1,
	Undefined = 2,
	PurchaseType_MAX = 3,
};

// Enum MagicLeap.EFocusLostReason
enum class EFocusLostReason : uint8_t {
	EFocusLostReason_Invalid = 0,
	EFocusLostReason_System = 1,
	EFocusLostReason_MAX = 2,
};

// Enum MagicLeap.EMagicLeapMeshLOD
enum class EMagicLeapMeshLOD : uint8_t {
	Minimum = 0,
	Medium = 1,
	Maximum = 2,
	EMagicLeapMeshLOD_MAX = 3,
};

// Enum MagicLeap.EMagicLeapMeshState
enum class EMagicLeapMeshState : uint8_t {
	New = 0,
	Updated = 1,
	Deleted = 2,
	Unchanged = 3,
	EMagicLeapMeshState_MAX = 4,
};

// Enum MagicLeap.EMagicLeapMeshVertexColorMode
enum class EMagicLeapMeshVertexColorMode : uint8_t {
	None = 0,
	Confidence = 1,
	Block = 2,
	LOD = 3,
	EMagicLeapMeshVertexColorMode_MAX = 4,
};

// Enum MagicLeap.EMagicLeapMeshType
enum class EMagicLeapMeshType : uint8_t {
	Triangles = 0,
	PointCloud = 1,
	EMagicLeapMeshType_MAX = 2,
};

// Enum MagicLeap.EMagicLeapRaycastResultState
enum class EMagicLeapRaycastResultState : uint8_t {
	RequestFailed = 0,
	NoCollision = 1,
	HitUnobserved = 2,
	HitObserved = 3,
	EMagicLeapRaycastResultState_MAX = 4,
};

// Enum MagicLeap.CloudStatus
enum class CloudStatus : uint8_t {
	CloudStatus_NotDone = 0,
	CloudStatus_Done = 1,
	CloudStatus_MAX = 2,
};

// Enum MagicLeap.EMagicLeapHeadTrackingMapEvent
enum class EMagicLeapHeadTrackingMapEvent : uint8_t {
	Lost = 0,
	Recovered = 1,
	RecoveryFailed = 2,
	NewSession = 3,
	EMagicLeapHeadTrackingMapEvent_MAX = 4,
};

// Enum MagicLeap.EMagicLeapHeadTrackingMode
enum class EMagicLeapHeadTrackingMode : uint8_t {
	PositionAndOrientation = 0,
	Unavailable = 1,
	Unknown = 2,
	EMagicLeapHeadTrackingMode_MAX = 3,
};

// Enum MagicLeap.EMagicLeapHeadTrackingError
enum class EMagicLeapHeadTrackingError : uint8_t {
	None = 0,
	NotEnoughFeatures = 1,
	LowLight = 2,
	Unknown = 3,
	EMagicLeapHeadTrackingError_MAX = 4,
};

// Class MagicLeap.InAppPurchaseComponent
class UInAppPurchaseComponent : public UActorComponent {

public:

	struct FMulticastInlineDelegate InAppPurchaseLogMessage; // 0xB0 (16)
	struct FMulticastInlineDelegate GetItemsDetailsSuccess; // 0xC0 (16)
	struct FMulticastInlineDelegate GetItemsDetailsFailure; // 0xD0 (16)
	struct FMulticastInlineDelegate PurchaseConfirmationSuccess; // 0xE0 (16)
	struct FMulticastInlineDelegate PurchaseConfirmationFailure; // 0xF0 (16)
	struct FMulticastInlineDelegate GetPurchaseHistorySuccess; // 0x100 (16)
	struct FMulticastInlineDelegate GetPurchaseHistoryFailure; // 0x110 (16)

	char TryPurchaseItemAsync(struct FPurchaseItemDetails& ItemDetails); // Function MagicLeap.InAppPurchaseComponent.TryPurchaseItemAsync(Final|Native|Public|HasOutParms|BlueprintCallable) // <Game_BE.exe+0x17E0000>
	char TryGetPurchaseHistoryAsync(int32_t InNumPages); // Function MagicLeap.InAppPurchaseComponent.TryGetPurchaseHistoryAsync(Final|Native|Public|BlueprintCallable) // <Game_BE.exe+0x17DFF70>
	char TryGetItemsDetailsAsync(struct TArray<struct FString>& ItemIDs); // Function MagicLeap.InAppPurchaseComponent.TryGetItemsDetailsAsync(Final|Native|Public|HasOutParms|BlueprintCallable) // <Game_BE.exe+0x17DFE90>
	void PurchaseConfirmationSuccess__DelegateSignature(struct FPurchaseConfirmation& PurchaseConfirmations); // DelegateFunction MagicLeap.InAppPurchaseComponent.PurchaseConfirmationSuccess__DelegateSignature(MulticastDelegate|Public|Delegate|HasOutParms) // <Game_BE.exe+0x2B80160>
	void PurchaseConfirmationFailure__DelegateSignature(); // DelegateFunction MagicLeap.InAppPurchaseComponent.PurchaseConfirmationFailure__DelegateSignature(MulticastDelegate|Public|Delegate) // <Game_BE.exe+0x2B80160>
	void InAppPurchaseLogMessage__DelegateSignature(struct FString LogMessage); // DelegateFunction MagicLeap.InAppPurchaseComponent.InAppPurchaseLogMessage__DelegateSignature(MulticastDelegate|Public|Delegate) // <Game_BE.exe+0x2B80160>
	void GetPurchaseHistorySuccess__DelegateSignature(struct TArray<struct FPurchaseConfirmation>& PurchaseHistory); // DelegateFunction MagicLeap.InAppPurchaseComponent.GetPurchaseHistorySuccess__DelegateSignature(MulticastDelegate|Public|Delegate|HasOutParms) // <Game_BE.exe+0x2B80160>
	void GetPurchaseHistoryFailure__DelegateSignature(); // DelegateFunction MagicLeap.InAppPurchaseComponent.GetPurchaseHistoryFailure__DelegateSignature(MulticastDelegate|Public|Delegate) // <Game_BE.exe+0x2B80160>
	void GetItemsDetailsSuccess__DelegateSignature(struct TArray<struct FPurchaseItemDetails>& ItemsDetails); // DelegateFunction MagicLeap.InAppPurchaseComponent.GetItemsDetailsSuccess__DelegateSignature(MulticastDelegate|Public|Delegate|HasOutParms) // <Game_BE.exe+0x2B80160>
	void GetItemsDetailsFailure__DelegateSignature(); // DelegateFunction MagicLeap.InAppPurchaseComponent.GetItemsDetailsFailure__DelegateSignature(MulticastDelegate|Public|Delegate) // <Game_BE.exe+0x2B80160>
};

// Class MagicLeap.LuminApplicationLifecycleComponent
class ULuminApplicationLifecycleComponent : public UApplicationLifecycleComponent {

public:

	struct FMulticastInlineDelegate DeviceHasReactivatedDelegate; // 0x140 (16)
	struct FMulticastInlineDelegate DeviceWillEnterRealityModeDelegate; // 0x150 (16)
	struct FMulticastInlineDelegate DeviceWillGoInStandbyDelegate; // 0x160 (16)
	struct FMulticastInlineDelegate FocusLostDelegate; // 0x170 (16)
	struct FMulticastInlineDelegate FocusGainedDelegate; // 0x180 (16)
};

// Class MagicLeap.MagicLeapHeadTrackingNotificationsComponent
class UMagicLeapHeadTrackingNotificationsComponent : public UVRNotificationsComponent {

public:

	struct FMulticastInlineDelegate OnHeadTrackingLost; // 0x140 (16)
	struct FMulticastInlineDelegate OnHeadTrackingRecovered; // 0x150 (16)
	struct FMulticastInlineDelegate OnHeadTrackingRecoveryFailed; // 0x160 (16)
	struct FMulticastInlineDelegate OnHeadTrackingNewSessionStarted; // 0x170 (16)
};

// Class MagicLeap.MagicLeapMeshTrackerComponent
class UMagicLeapMeshTrackerComponent : public USceneComponent {

public:

	struct FMulticastInlineDelegate OnMeshTrackerUpdated; // 0x230 (16)
	char ScanWorld : 0; // 0x240 (1)
	enum class EMagicLeapMeshType MeshType; // 0x241 (1)
	struct UBoxComponent BoundingVolume; // 0x248 (8)
	enum class EMagicLeapMeshLOD LevelOfDetail; // 0x250 (1)
	float PerimeterOfGapsToFill; // 0x254 (4)
	char Planarize : 0; // 0x258 (1)
	float DisconnectedSectionArea; // 0x25C (4)
	char RequestNormals : 0; // 0x260 (1)
	char RequestVertexConfidence : 0; // 0x261 (1)
	enum class EMagicLeapMeshVertexColorMode VertexColorMode; // 0x262 (1)
	struct TArray<struct FColor> BlockVertexColors; // 0x268 (16)
	struct FLinearColor VertexColorFromConfidenceZero; // 0x278 (16)
	struct FLinearColor VertexColorFromConfidenceOne; // 0x288 (16)
	char RemoveOverlappingTriangles : 0; // 0x298 (1)
	struct UMRMeshComponent MRMesh; // 0x2A0 (8)
	int32_t BricksPerFrame; // 0x2A8 (4)

	void SelectMeshBlocks(struct FMagicLeapTrackingMeshInfo& NewMeshInfo, struct TArray<struct FMagicLeapMeshBlockRequest>& RequestedMesh); // Function MagicLeap.MagicLeapMeshTrackerComponent.SelectMeshBlocks(Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x17DFB70>
	void OnMeshTrackerUpdated__DelegateSignature(struct FGuid ID, struct TArray<struct FVector>& Vertices, struct TArray<int32_t>& Triangles, struct TArray<struct FVector>& Normals, struct TArray<float>& Confidence); // DelegateFunction MagicLeap.MagicLeapMeshTrackerComponent.OnMeshTrackerUpdated__DelegateSignature(MulticastDelegate|Public|Delegate|HasOutParms|HasDefaults) // <Game_BE.exe+0x2B80160>
	int32_t GetNumQueuedBlockUpdates(); // Function MagicLeap.MagicLeapMeshTrackerComponent.GetNumQueuedBlockUpdates(Final|Native|Public|BlueprintCallable) // <Game_BE.exe+0x17DF620>
	void DisconnectMRMesh(struct UMRMeshComponent InMRMeshPtr); // Function MagicLeap.MagicLeapMeshTrackerComponent.DisconnectMRMesh(Final|Native|Public|BlueprintCallable) // <Game_BE.exe+0x17DF1F0>
	void DisconnectBlockSelector(); // Function MagicLeap.MagicLeapMeshTrackerComponent.DisconnectBlockSelector(Final|Native|Public|BlueprintCallable) // <Game_BE.exe+0x17DF1D0>
	void ConnectMRMesh(struct UMRMeshComponent InMRMeshPtr); // Function MagicLeap.MagicLeapMeshTrackerComponent.ConnectMRMesh(Final|Native|Public|BlueprintCallable) // <Game_BE.exe+0x17DF150>
	void ConnectBlockSelector(struct TScriptInterface<IMagicLeapMeshBlockSelectorInterface> Selector); // Function MagicLeap.MagicLeapMeshTrackerComponent.ConnectBlockSelector(Final|Native|Public|BlueprintCallable) // <Game_BE.exe+0x17DF0B0>
};

// Class MagicLeap.MagicLeapSettings
class UMagicLeapSettings : public Object {

public:

	char bEnableZI : 0; // 0x28 (1)
	char bUseVulkanForZI : 0; // 0x29 (1)
	char bUseMLAudioForZI : 0; // 0x2A (1)
};

// ScriptStruct MagicLeap.PurchaseItemDetails
struct FPurchaseItemDetails {
	struct FString Price; // 0x10 (16)
	struct FString Name; // 0x20 (16)
	enum class PurchaseType Type; // 0x30 (1)
};

// ScriptStruct MagicLeap.PurchaseConfirmation
struct FPurchaseConfirmation {
	struct FString PackageName; // 0x10 (16)
	enum class PurchaseType Type; // 0x48 (1)
};

// ScriptStruct MagicLeap.MagicLeapMeshBlockRequest
struct FMagicLeapMeshBlockRequest {
	struct FGuid BlockID; // 0x0 (16)
	enum class EMagicLeapMeshLOD LevelOfDetail; // 0x10 (1)
};

// ScriptStruct MagicLeap.MagicLeapTrackingMeshInfo
struct FMagicLeapTrackingMeshInfo {
	struct FTimespan Timestamp; // 0x0 (8)
	struct TArray<struct FMagicLeapMeshBlockInfo> BlockData; // 0x8 (16)
};

// ScriptStruct MagicLeap.MagicLeapMeshBlockInfo
struct FMagicLeapMeshBlockInfo {
	struct FGuid BlockID; // 0x0 (16)
	struct FVector BlockPosition; // 0x10 (12)
	struct FRotator BlockOrientation; // 0x1C (12)
	struct FVector BlockDimensions; // 0x28 (12)
	struct FTimespan Timestamp; // 0x38 (8)
	enum class EMagicLeapMeshState BlockState; // 0x40 (1)
};

// ScriptStruct MagicLeap.MagicLeapRaycastHitResult
struct FMagicLeapRaycastHitResult {
	enum class EMagicLeapRaycastResultState HitState; // 0x0 (1)
	struct FVector HitPoint; // 0x4 (12)
	struct FVector Normal; // 0x10 (12)
	float Confidence; // 0x1C (4)
	int32_t UserData; // 0x20 (4)
};

// ScriptStruct MagicLeap.MagicLeapRaycastQueryParams
struct FMagicLeapRaycastQueryParams {
	struct FVector Position; // 0x0 (12)
	struct FVector Direction; // 0xC (12)
	struct FVector UpVector; // 0x18 (12)
	int32_t Width; // 0x24 (4)
	int32_t Height; // 0x28 (4)
	float HorizontalFovDegrees; // 0x2C (4)
	char CollideWithUnobserved : 0; // 0x30 (1)
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
	enum class EMagicLeapHeadTrackingMode Mode; // 0x0 (1)
	enum class EMagicLeapHeadTrackingError Error; // 0x1 (1)
	float Confidence; // 0x4 (4)
};

// Function MagicLeap.InAppPurchaseComponent.TryPurchaseItemAsync
inline char UInAppPurchaseComponent::TryPurchaseItemAsync(struct FPurchaseItemDetails& ItemDetails) {
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeap.InAppPurchaseComponent.TryPurchaseItemAsync");

	struct TryPurchaseItemAsync_Params {
		struct FPurchaseItemDetails& ItemDetails;
		char ReturnValue;

	}; TryPurchaseItemAsync_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	ItemDetails = Params.ItemDetails;


	return params.ReturnValue;
}

// Function MagicLeap.InAppPurchaseComponent.TryGetPurchaseHistoryAsync
inline char UInAppPurchaseComponent::TryGetPurchaseHistoryAsync(int32_t InNumPages) {
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeap.InAppPurchaseComponent.TryGetPurchaseHistoryAsync");

	struct TryGetPurchaseHistoryAsync_Params {
		int32_t InNumPages;
		char ReturnValue;

	}; TryGetPurchaseHistoryAsync_Params Params;

	Params.InNumPages = InNumPages;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MagicLeap.InAppPurchaseComponent.TryGetItemsDetailsAsync
inline char UInAppPurchaseComponent::TryGetItemsDetailsAsync(struct TArray<struct FString>& ItemIDs) {
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeap.InAppPurchaseComponent.TryGetItemsDetailsAsync");

	struct TryGetItemsDetailsAsync_Params {
		struct TArray<struct FString>& ItemIDs;
		char ReturnValue;

	}; TryGetItemsDetailsAsync_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	ItemIDs = Params.ItemIDs;


	return params.ReturnValue;
}

// DelegateFunction MagicLeap.InAppPurchaseComponent.PurchaseConfirmationSuccess__DelegateSignature
inline void UInAppPurchaseComponent::PurchaseConfirmationSuccess__DelegateSignature(struct FPurchaseConfirmation& PurchaseConfirmations) {
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction MagicLeap.InAppPurchaseComponent.PurchaseConfirmationSuccess__DelegateSignature");

	struct PurchaseConfirmationSuccess__DelegateSignature_Params {
		struct FPurchaseConfirmation& PurchaseConfirmations;
	}; PurchaseConfirmationSuccess__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	PurchaseConfirmations = Params.PurchaseConfirmations;

}

// DelegateFunction MagicLeap.InAppPurchaseComponent.PurchaseConfirmationFailure__DelegateSignature
inline void UInAppPurchaseComponent::PurchaseConfirmationFailure__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction MagicLeap.InAppPurchaseComponent.PurchaseConfirmationFailure__DelegateSignature");

	struct PurchaseConfirmationFailure__DelegateSignature_Params {
		
	}; PurchaseConfirmationFailure__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// DelegateFunction MagicLeap.InAppPurchaseComponent.InAppPurchaseLogMessage__DelegateSignature
inline void UInAppPurchaseComponent::InAppPurchaseLogMessage__DelegateSignature(struct FString LogMessage) {
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction MagicLeap.InAppPurchaseComponent.InAppPurchaseLogMessage__DelegateSignature");

	struct InAppPurchaseLogMessage__DelegateSignature_Params {
		struct FString LogMessage;
	}; InAppPurchaseLogMessage__DelegateSignature_Params Params;

	Params.LogMessage = LogMessage;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// DelegateFunction MagicLeap.InAppPurchaseComponent.GetPurchaseHistorySuccess__DelegateSignature
inline void UInAppPurchaseComponent::GetPurchaseHistorySuccess__DelegateSignature(struct TArray<struct FPurchaseConfirmation>& PurchaseHistory) {
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction MagicLeap.InAppPurchaseComponent.GetPurchaseHistorySuccess__DelegateSignature");

	struct GetPurchaseHistorySuccess__DelegateSignature_Params {
		struct TArray<struct FPurchaseConfirmation>& PurchaseHistory;
	}; GetPurchaseHistorySuccess__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	PurchaseHistory = Params.PurchaseHistory;

}

// DelegateFunction MagicLeap.InAppPurchaseComponent.GetPurchaseHistoryFailure__DelegateSignature
inline void UInAppPurchaseComponent::GetPurchaseHistoryFailure__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction MagicLeap.InAppPurchaseComponent.GetPurchaseHistoryFailure__DelegateSignature");

	struct GetPurchaseHistoryFailure__DelegateSignature_Params {
		
	}; GetPurchaseHistoryFailure__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// DelegateFunction MagicLeap.InAppPurchaseComponent.GetItemsDetailsSuccess__DelegateSignature
inline void UInAppPurchaseComponent::GetItemsDetailsSuccess__DelegateSignature(struct TArray<struct FPurchaseItemDetails>& ItemsDetails) {
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction MagicLeap.InAppPurchaseComponent.GetItemsDetailsSuccess__DelegateSignature");

	struct GetItemsDetailsSuccess__DelegateSignature_Params {
		struct TArray<struct FPurchaseItemDetails>& ItemsDetails;
	}; GetItemsDetailsSuccess__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	ItemsDetails = Params.ItemsDetails;

}

// DelegateFunction MagicLeap.InAppPurchaseComponent.GetItemsDetailsFailure__DelegateSignature
inline void UInAppPurchaseComponent::GetItemsDetailsFailure__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction MagicLeap.InAppPurchaseComponent.GetItemsDetailsFailure__DelegateSignature");

	struct GetItemsDetailsFailure__DelegateSignature_Params {
		
	}; GetItemsDetailsFailure__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MagicLeap.MagicLeapMeshTrackerComponent.SelectMeshBlocks
inline void UMagicLeapMeshTrackerComponent::SelectMeshBlocks(struct FMagicLeapTrackingMeshInfo& NewMeshInfo, struct TArray<struct FMagicLeapMeshBlockRequest>& RequestedMesh) {
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeap.MagicLeapMeshTrackerComponent.SelectMeshBlocks");

	struct SelectMeshBlocks_Params {
		struct FMagicLeapTrackingMeshInfo& NewMeshInfo;
		struct TArray<struct FMagicLeapMeshBlockRequest>& RequestedMesh;
	}; SelectMeshBlocks_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	NewMeshInfo = Params.NewMeshInfo;
	RequestedMesh = Params.RequestedMesh;

}

// DelegateFunction MagicLeap.MagicLeapMeshTrackerComponent.OnMeshTrackerUpdated__DelegateSignature
inline void UMagicLeapMeshTrackerComponent::OnMeshTrackerUpdated__DelegateSignature(struct FGuid ID, struct TArray<struct FVector>& Vertices, struct TArray<int32_t>& Triangles, struct TArray<struct FVector>& Normals, struct TArray<float>& Confidence) {
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction MagicLeap.MagicLeapMeshTrackerComponent.OnMeshTrackerUpdated__DelegateSignature");

	struct OnMeshTrackerUpdated__DelegateSignature_Params {
		struct FGuid ID;
		struct TArray<struct FVector>& Vertices;
		struct TArray<int32_t>& Triangles;
		struct TArray<struct FVector>& Normals;
		struct TArray<float>& Confidence;
	}; OnMeshTrackerUpdated__DelegateSignature_Params Params;

	Params.ID = ID;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Vertices = Params.Vertices;
	Triangles = Params.Triangles;
	Normals = Params.Normals;
	Confidence = Params.Confidence;

}

// Function MagicLeap.MagicLeapMeshTrackerComponent.GetNumQueuedBlockUpdates
inline int32_t UMagicLeapMeshTrackerComponent::GetNumQueuedBlockUpdates() {
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeap.MagicLeapMeshTrackerComponent.GetNumQueuedBlockUpdates");

	struct GetNumQueuedBlockUpdates_Params {
		
		int32_t ReturnValue;

	}; GetNumQueuedBlockUpdates_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MagicLeap.MagicLeapMeshTrackerComponent.DisconnectMRMesh
inline void UMagicLeapMeshTrackerComponent::DisconnectMRMesh(struct UMRMeshComponent InMRMeshPtr) {
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeap.MagicLeapMeshTrackerComponent.DisconnectMRMesh");

	struct DisconnectMRMesh_Params {
		struct UMRMeshComponent InMRMeshPtr;
	}; DisconnectMRMesh_Params Params;

	Params.InMRMeshPtr = InMRMeshPtr;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MagicLeap.MagicLeapMeshTrackerComponent.DisconnectBlockSelector
inline void UMagicLeapMeshTrackerComponent::DisconnectBlockSelector() {
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeap.MagicLeapMeshTrackerComponent.DisconnectBlockSelector");

	struct DisconnectBlockSelector_Params {
		
	}; DisconnectBlockSelector_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MagicLeap.MagicLeapMeshTrackerComponent.ConnectMRMesh
inline void UMagicLeapMeshTrackerComponent::ConnectMRMesh(struct UMRMeshComponent InMRMeshPtr) {
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeap.MagicLeapMeshTrackerComponent.ConnectMRMesh");

	struct ConnectMRMesh_Params {
		struct UMRMeshComponent InMRMeshPtr;
	}; ConnectMRMesh_Params Params;

	Params.InMRMeshPtr = InMRMeshPtr;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MagicLeap.MagicLeapMeshTrackerComponent.ConnectBlockSelector
inline void UMagicLeapMeshTrackerComponent::ConnectBlockSelector(struct TScriptInterface<IMagicLeapMeshBlockSelectorInterface> Selector) {
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeap.MagicLeapMeshTrackerComponent.ConnectBlockSelector");

	struct ConnectBlockSelector_Params {
		struct TScriptInterface<IMagicLeapMeshBlockSelectorInterface> Selector;
	}; ConnectBlockSelector_Params Params;

	Params.Selector = Selector;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

