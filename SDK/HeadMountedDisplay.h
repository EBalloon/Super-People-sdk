// Enum HeadMountedDisplay.EXRTrackedDeviceType
enum class EXRTrackedDeviceType : uint8 {
	EXRTrackedDeviceType = 0,
	EXRTrackedDeviceType = 1,
	EXRTrackedDeviceType = 2,
	EXRTrackedDeviceType = 3,
	EXRTrackedDeviceType = 254,
	EXRTrackedDeviceType = 255,
	EXRTrackedDeviceType = 256
};

// Enum HeadMountedDisplay.ESpectatorScreenMode
enum class ESpectatorScreenMode : uint8 {
	ESpectatorScreenMode = 0,
	ESpectatorScreenMode = 1,
	ESpectatorScreenMode = 2,
	ESpectatorScreenMode = 3,
	ESpectatorScreenMode = 4,
	ESpectatorScreenMode = 5,
	ESpectatorScreenMode = 6,
	ESpectatorScreenMode = 7,
	ESpectatorScreenMode = 8
};

// Enum HeadMountedDisplay.EHMDWornState
enum class EHMDWornState : uint8 {
	EHMDWornState = 0,
	EHMDWornState = 1,
	EHMDWornState = 2,
	EHMDWornState = 3
};

// Enum HeadMountedDisplay.EHMDTrackingOrigin
enum class EHMDTrackingOrigin : uint8 {
	EHMDTrackingOrigin = 0,
	EHMDTrackingOrigin = 1,
	EHMDTrackingOrigin = 2,
	EHMDTrackingOrigin = 3
};

// Enum HeadMountedDisplay.EOrientPositionSelector
enum class EOrientPositionSelector : uint8 {
	EOrientPositionSelector = 0,
	EOrientPositionSelector = 1,
	EOrientPositionSelector = 2,
	EOrientPositionSelector = 3
};

// Enum HeadMountedDisplay.ETrackingStatus
enum class ETrackingStatus : uint8 {
	ETrackingStatus = 0,
	ETrackingStatus = 1,
	ETrackingStatus = 2,
	ETrackingStatus = 3
};

// Class HeadMountedDisplay.VRNotificationsComponent
struct UVRNotificationsComponent : UActorComponent {
	struct FMulticastInlineDelegate HMDTrackingInitializingAndNeedsHMDToBeTrackedDelegate; //  0xb0 Size(10)
	struct FMulticastInlineDelegate HMDTrackingInitializedDelegate; //  0xc0 Size(10)
	struct FMulticastInlineDelegate HMDRecenteredDelegate; //  0xd0 Size(10)
	struct FMulticastInlineDelegate HMDLostDelegate; //  0xe0 Size(10)
	struct FMulticastInlineDelegate HMDReconnectedDelegate; //  0xf0 Size(10)
	struct FMulticastInlineDelegate HMDConnectCanceledDelegate; //  0x100 Size(10)
	struct FMulticastInlineDelegate HMDPutOnHead; //  0x110 Size(10)
	struct FMulticastInlineDelegate HMDRemovedFromHeadDelegate; //  0x120 Size(10)
	struct FMulticastInlineDelegate VRControllerRecenteredDelegate; //  0x130 Size(10)
};

// Class HeadMountedDisplay.MotionControllerComponent
struct UMotionControllerComponent : UPrimitiveComponent {
	int32_t PlayerIndex; //  0x4b8 Size(4)
	enum class Unknow Hand; //  0x4bc Size(1)
	struct FName MotionSource; //  0x4c0 Size(8)
	char bDisableLowLatencyUpdate; //  0x4c8 Size(1)
	enum class Unknow CurrentTrackingStatus; //  0x4cc Size(1)
	char bDisplayDeviceModel; //  0x4cd Size(1)
	struct FName DisplayModelSource; //  0x4d0 Size(8)
	struct Unknown CustomDisplayMesh; //  0x4d8 Size(8)
	struct TArray<Unknown> DisplayMeshMaterialOverrides; //  0x4e0 Size(10)
	struct Unknown DisplayComponent; //  0x550 Size(8)

	void SetTrackingSource(enum class Unknow NewSource); // Function HeadMountedDisplay.MotionControllerComponent.SetTrackingSource(Final|Native|Public|BlueprintCallable) // <Game+0x2f14fe0>
};

// Class HeadMountedDisplay.AsyncTask_LoadXRDevDisplayssj
struct UAsyncTask_LoadXRDev : UBlueprintAsyncActionBase {
	struct FMulticastInlineDelegate OnModelLoaded; //  0x30 Size(10)
	struct FMulticastInlineDelegate OnLoadFailure; //  0x40 Size(10)
	struct Unknown SpawnedComponent; //  0x58 Size(8)

	struct Unknown AddNamedDeviceVisualizationComponentAsync(struct Unknown Target, struct FName SystemName, struct FName DeviceName, char bManualAttachment, struct Unknown& RelativeTransform, struct Unknown& XRDeviceId, struct Unknown& NewComponent); // Function HeadMountedDisplay.AsyncTask_LoadXRDevgateProperty.AddNamedDeviceVisualizationComponentAsync(Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // <Game+0x2f12470>
};

