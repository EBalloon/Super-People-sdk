// Enum MagicLeap.PurchaseType
enum class PurchaseType : uint8_t {
	PurchaseType = 0,
	PurchaseType = 1,
	PurchaseType = 2,
	PurchaseType = 3,
};

// Enum MagicLeap.EFocusLostReason
enum class EFocusLostReason : uint8_t {
	EFocusLostReason = 0,
	EFocusLostReason = 1,
	EFocusLostReason = 2,
};

// Enum MagicLeap.EMagicLeapMeshLOD
enum class EMagicLeapMeshLOD : uint8_t {
	EMagicLeapMeshLO = 0,
	EMagicLeapMeshLO = 1,
	EMagicLeapMeshLO = 2,
	EMagicLeapMeshLO = 3,
};

// Enum MagicLeap.EMagicLeapMeshState
enum class EMagicLeapMeshState : uint8_t {
	EMagicLeapMeshState = 0,
	EMagicLeapMeshState = 1,
	EMagicLeapMeshState = 2,
	EMagicLeapMeshState = 3,
	EMagicLeapMeshState = 4,
};

// Enum MagicLeap.EMagicLeapMeshVertexColor
enum class EMagicLeapMeshVertexColor : uint8_t {
	EMagicLeapMeshVertexColor = 0,
	EMagicLeapMeshVertexColorMnged = 1,
	EMagicLeapMeshVertexColor = 2,
	EMagicLeapMeshVertexColorMed = 3,
	EMagicLeapMeshVertexColor = 4,
};

// Enum MagicLeap.EMagicLeapMeshType
enum class EMagicLeapMeshType : uint8_t {
	EMagicLeapMeshType = 0,
	EMagicLeapMeshType = 1,
	EMagicLeapMeshType = 2,
};

// Enum MagicLeap.EMagicLeapRaycastResultState
enum class EMagicLeapRaycastResultState : uint8_t {
	EMagicLeapRaycastResultState = 0,
	EMagicLeapRaycastResultState = 1,
	EMagicLeapRaycastResultState = 2,
	EMagicLeapRaycastResultState = 3,
	EMagicLeapRaycastResultState = 4,
};

// Enum MagicLeap.CloudStatus
enum class CloudStatus : uint8_t {
	CloudStatus = 0,
	CloudStatus = 1,
	CloudStatus = 2,
};

// Enum MagicLeap.EMagicLeapHeadTrackingMapEvent
enum class EMagicLeapHeadTrackingMapEvent : uint8_t {
	EMagicLeapHeadTrackingMapEvent = 0,
	EMagicLeapHeadTrackingMapEvent = 1,
	EMagicLeapHeadTrackingMapEvent = 2,
	EMagicLeapHeadTrackingMapEvent = 3,
	EMagicLeapHeadTrackingMapEvent = 4,
};

// Enum MagicLeap.EMagicLeapHeadTrackingMode
enum class EMagicLeapHeadTrackingMode : uint8_t {
	EMagicLeapHeadTrackingMode = 0,
	EMagicLeapHeadTrackingMode = 1,
	EMagicLeapHeadTrackingMode = 2,
	EMagicLeapHeadTrackingMode = 3,
};

// Enum MagicLeap.EMagicLeapHeadTrackingError
enum class EMagicLeapHeadTrackingError : uint8_t {
	EMagicLeapHeadTrackingError = 0,
	EMagicLeapHeadTrackingError = 1,
	EMagicLeapHeadTrackingError = 2,
	EMagicLeapHeadTrackingError = 3,
	EMagicLeapHeadTrackingError = 4,
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

	char TryPurchaseItemAsync(struct Unknown& ItemDetails); // Function MagicLeap.InAppPurchaseComponent.TryPurchaseItemAsync(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x17CBCE0>
	char TryGetPurchaseHistoryAsync(int32_t InNumPages); // Function MagicLeap.InAppPurchaseComponent.TryGetPurchaseHistoryAsync(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x17CBC50>
	char TryGetItemsDetailsAsync(struct TArray<Unknown>& ItemIDs); // Function MagicLeap.InAppPurchaseComponent.TryGetItemsDetailsAsync(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x17CBB70>
	void PurchaseConfirmationSuccess__DelegateSignature(struct Unknown& PurchaseConfirmations); // DelegateFunction MagicLeap.InAppPurchaseComponent.PurchaseConfirmationSuccess__DelegateSignature(MulticastDelegate|Public|Delegate|HasOutParms) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void PurchaseConfirmationFailure__DelegateSignature(); // DelegateFunction MagicLeap.InAppPurchaseComponent.PurchaseConfirmationFailure__DelegateSignature(MulticastDelegate|Public|Delegate) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void InAppPurchaseLogMessage__Delegy(struct FString LogMessage); // DelegateFunction MagicLeap.InAppPurchaseComponent.InAppPurchaseLogMessage__Deleg(MulticastDelegate|Public|Delegate) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void GetPurchaseHistorySuccess__DelegateSig(struct TArray<Unknown>& PurchaseHistory); // DelegateFunction MagicLeap.InAppPurchaseComponent.GetPurchaseHistorySuccess__DelegateSigture(MulticastDelegate|Public|Delegate|HasOutParms) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void GetPurchaseHistoryFailure__DelegateSig(); // DelegateFunction MagicLeap.InAppPurchaseComponent.GetPurchaseHistoryFailure__DelegateSig(MulticastDelegate|Public|Delegate) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void GetItemsDetailsSuccess__DelegateSignature(struct TArray<Unknown>& ItemsDetails); // DelegateFunction MagicLeap.InAppPurchaseComponent.GetItemsDetailsSuccess__DelegateSignature(MulticastDelegate|Public|Delegate|HasOutParms) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void GetItemsDetailsFailure__DelegateSignature(); // DelegateFunction MagicLeap.InAppPurchaseComponent.GetItemsDetailsFailure__DelegateSignature(MulticastDelegate|Public|Delegate) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
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
	struct FMulticastInlineDelegate OnHeadTrackingRecov; // 0x150 (16)
	struct FMulticastInlineDelegate OnHeadTrackingRecovgatePrope; // 0x160 (16)
	struct FMulticastInlineDelegate OnHeadTrackingNewSessionStarted; // 0x170 (16)
};

// Class MagicLeap.MagicLeapMeshTrackerComponent
class UMagicLeapMeshTrackerComponent : public USceneComponent {

public:

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

	void SelectMeshBlocks(struct Unknown& NewMeshInfo, struct TArray<Unknown>& RequestedMesh); // Function MagicLeap.MagicLeapMeshTrackerComponent.SelectMeshBlocks(Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x17CB850>
	void OnMeshTrackerUpdated__DelegateSignature(struct Unknown ID, struct TArray<Unknown>& Vertices, struct TArray<Unknown>& Triangles, struct TArray<Unknown>& Normals, struct TArray<Unknown>& Confidence); // DelegateFunction MagicLeap.MagicLeapMeshTrackerComponent.OnMeshTrackerUpdated__DelegateSignature(MulticastDelegate|Public|Delegate|HasOutParms|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	int32_t GetNumQueuedBlockUpdates(); // Function MagicLeap.MagicLeapMeshTrackerComponent.GetNumQueuedBlockUpdates(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x17CB300>
	void DisconnectMRMesh(struct Unknown InMRMeshPtr); // Function MagicLeap.MagicLeapMeshTrackerComponent.DisconnectMRMesh(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x17CAED0>
	void DisconnectBlockSelector(); // Function MagicLeap.MagicLeapMeshTrackerComponent.DisconnectBlockSelector(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x17CAEB0>
	void ConnectMRMesh(struct Unknown InMRMeshPtr); // Function MagicLeap.MagicLeapMeshTrackerComponent.ConnectMRMesh(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x17CAE30>
	void ConnectBlockSelector(struct TScriptInterface<IUnknown> Selector); // Function MagicLeap.MagicLeapMeshTrackerComponent.ConnectBlockSelector(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x17CAD90>
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
	char CollideWithUnobservry : 0; // 0x30 (1)
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

// Function MagicLeap.InAppPurchaseComponent.TryPurchaseItemAsync
inline char UInAppPurchaseComponent::TryPurchaseItemAsync(struct Unknown& ItemDetails) {
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeap.InAppPurchaseComponent.TryPurchaseItemAsync");

	struct TryPurchaseItemAsync_Params {
		struct Unknown& ItemDetails;
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
inline char UInAppPurchaseComponent::TryGetItemsDetailsAsync(struct TArray<Unknown>& ItemIDs) {
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeap.InAppPurchaseComponent.TryGetItemsDetailsAsync");

	struct TryGetItemsDetailsAsync_Params {
		struct TArray<Unknown>& ItemIDs;
		char ReturnValue;

	}; TryGetItemsDetailsAsync_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	ItemIDs = Params.ItemIDs;


	return params.ReturnValue;
}

// DelegateFunction MagicLeap.InAppPurchaseComponent.PurchaseConfirmationSuccess__DelegateSignature
inline void UInAppPurchaseComponent::PurchaseConfirmationSuccess__DelegateSignature(struct Unknown& PurchaseConfirmations) {
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction MagicLeap.InAppPurchaseComponent.PurchaseConfirmationSuccess__DelegateSignature");

	struct PurchaseConfirmationSuccess__DelegateSignature_Params {
		struct Unknown& PurchaseConfirmations;
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

// DelegateFunction MagicLeap.InAppPurchaseComponent.InAppPurchaseLogMessage__Deleg
inline void UInAppPurchaseComponent::InAppPurchaseLogMessage__Deleg(struct FString LogMessage) {
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction MagicLeap.InAppPurchaseComponent.InAppPurchaseLogMessage__Deleg");

	struct InAppPurchaseLogMessage__Deleg_Params {
		struct FString LogMessage;
	}; InAppPurchaseLogMessage__Deleg_Params Params;

	Params.LogMessage = LogMessage;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// DelegateFunction MagicLeap.InAppPurchaseComponent.GetPurchaseHistorySuccess__DelegateSigture
inline void UInAppPurchaseComponent::GetPurchaseHistorySuccess__DelegateSig(struct TArray<Unknown>& PurchaseHistory) {
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction MagicLeap.InAppPurchaseComponent.GetPurchaseHistorySuccess__DelegateSigture");

	struct GetPurchaseHistorySuccess__DelegateSig_Params {
		struct TArray<Unknown>& PurchaseHistory;
	}; GetPurchaseHistorySuccess__DelegateSig_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	PurchaseHistory = Params.PurchaseHistory;

}

// DelegateFunction MagicLeap.InAppPurchaseComponent.GetPurchaseHistoryFailure__DelegateSig
inline void UInAppPurchaseComponent::GetPurchaseHistoryFailure__DelegateSig() {
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction MagicLeap.InAppPurchaseComponent.GetPurchaseHistoryFailure__DelegateSig");

	struct GetPurchaseHistoryFailure__DelegateSig_Params {
		
	}; GetPurchaseHistoryFailure__DelegateSig_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// DelegateFunction MagicLeap.InAppPurchaseComponent.GetItemsDetailsSuccess__DelegateSignature
inline void UInAppPurchaseComponent::GetItemsDetailsSuccess__DelegateSignature(struct TArray<Unknown>& ItemsDetails) {
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction MagicLeap.InAppPurchaseComponent.GetItemsDetailsSuccess__DelegateSignature");

	struct GetItemsDetailsSuccess__DelegateSignature_Params {
		struct TArray<Unknown>& ItemsDetails;
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
inline void UMagicLeapMeshTrackerComponent::SelectMeshBlocks(struct Unknown& NewMeshInfo, struct TArray<Unknown>& RequestedMesh) {
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeap.MagicLeapMeshTrackerComponent.SelectMeshBlocks");

	struct SelectMeshBlocks_Params {
		struct Unknown& NewMeshInfo;
		struct TArray<Unknown>& RequestedMesh;
	}; SelectMeshBlocks_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	NewMeshInfo = Params.NewMeshInfo;
	RequestedMesh = Params.RequestedMesh;

}

// DelegateFunction MagicLeap.MagicLeapMeshTrackerComponent.OnMeshTrackerUpdated__DelegateSignature
inline void UMagicLeapMeshTrackerComponent::OnMeshTrackerUpdated__DelegateSignature(struct Unknown ID, struct TArray<Unknown>& Vertices, struct TArray<Unknown>& Triangles, struct TArray<Unknown>& Normals, struct TArray<Unknown>& Confidence) {
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction MagicLeap.MagicLeapMeshTrackerComponent.OnMeshTrackerUpdated__DelegateSignature");

	struct OnMeshTrackerUpdated__DelegateSignature_Params {
		struct Unknown ID;
		struct TArray<Unknown>& Vertices;
		struct TArray<Unknown>& Triangles;
		struct TArray<Unknown>& Normals;
		struct TArray<Unknown>& Confidence;
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
inline void UMagicLeapMeshTrackerComponent::DisconnectMRMesh(struct Unknown InMRMeshPtr) {
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeap.MagicLeapMeshTrackerComponent.DisconnectMRMesh");

	struct DisconnectMRMesh_Params {
		struct Unknown InMRMeshPtr;
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
inline void UMagicLeapMeshTrackerComponent::ConnectMRMesh(struct Unknown InMRMeshPtr) {
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeap.MagicLeapMeshTrackerComponent.ConnectMRMesh");

	struct ConnectMRMesh_Params {
		struct Unknown InMRMeshPtr;
	}; ConnectMRMesh_Params Params;

	Params.InMRMeshPtr = InMRMeshPtr;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MagicLeap.MagicLeapMeshTrackerComponent.ConnectBlockSelector
inline void UMagicLeapMeshTrackerComponent::ConnectBlockSelector(struct TScriptInterface<IUnknown> Selector) {
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeap.MagicLeapMeshTrackerComponent.ConnectBlockSelector");

	struct ConnectBlockSelector_Params {
		struct TScriptInterface<IUnknown> Selector;
	}; ConnectBlockSelector_Params Params;

	Params.Selector = Selector;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

