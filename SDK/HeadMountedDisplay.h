// Enum HeadMountedDisplay.EXRTrackedDeviceType
enum class EXRTrackedDeviceType : uint8 {
	EXRTrackedDeviceType = 0
	EXRTrackedDeviceType = 1
	EXRTrackedDeviceType = 2
	EXRTrackedDeviceType = 3
	EXRTrackedDeviceType = 254
	EXRTrackedDeviceType = 255
	EXRTrackedDeviceType = 256
};

// Enum HeadMountedDisplay.ESpectatorScreenMode
enum class ESpectatorScreenMode : uint8 {
	ESpectatorScreenMode = 0
	ESpectatorScreenMode = 1
	ESpectatorScreenMode = 2
	ESpectatorScreenMode = 3
	ESpectatorScreenMode = 4
	ESpectatorScreenMode = 5
	ESpectatorScreenMode = 6
	ESpectatorScreenMode = 7
	ESpectatorScreenMode = 8
};

// Enum HeadMountedDisplay.EHMDWornState
enum class EHMDWornState : uint8 {
	EHMDWornState = 0
	EHMDWornState = 1
	EHMDWornState = 2
	EHMDWornState = 3
};

// Enum HeadMountedDisplay.EHMDTrackingOrigin
enum class EHMDTrackingOrigin : uint8 {
	EHMDTrackingOrigin = 0
	EHMDTrackingOrigin = 1
	EHMDTrackingOrigin = 2
	EHMDTrackingOrigin = 3
};

// Enum HeadMountedDisplay.EOrientPositionSelector
enum class EOrientPositionSelector : uint8 {
	EOrientPositionSelector = 0
	EOrientPositionSelector = 1
	EOrientPositionSelector = 2
	EOrientPositionSelector = 3
};

// Enum HeadMountedDisplay.ETrackingStatus
enum class ETrackingStatus : uint8 {
	ETrackingStatus = 0
	ETrackingStatus = 1
	ETrackingStatus = 2
	ETrackingStatus = 3
};

// Class HeadMountedDisplay.VRNotificationsComponent
class UVRNotificationsComponent : UActorComponent {
	struct FMulticastInlineDelegate HMDTrackingInitializingAndNeedsHMDToBeTrackedDelegate; // 0xB0 (16)
	struct FMulticastInlineDelegate HMDTrackingInitializedDelegate; // 0xC0 (16)
	struct FMulticastInlineDelegate HMDRecenteredDelegate; // 0xD0 (16)
	struct FMulticastInlineDelegate HMDLostDelegate; // 0xE0 (16)
	struct FMulticastInlineDelegate HMDReconnectedDelegate; // 0xF0 (16)
	struct FMulticastInlineDelegate HMDConnectCanceledDelegate; // 0x100 (16)
	struct FMulticastInlineDelegate HMDPutOnHeadDelegate; // 0x110 (16)
	struct FMulticastInlineDelegate HMDRemovedFromHeadDelegate; // 0x120 (16)
	struct FMulticastInlineDelegate VRControllerRecenteredDelegate; // 0x130 (16)
};

// Class HeadMountedDisplay.MotionControllerComponent
class UMotionControllerComponent : UPrimitiveComponent {
	int32_t PlayerIndex; // 0x4B8 (4)
	enum class Unknow Hand; // 0x4BC (1)
	struct FName MotionSource; // 0x4C0 (8)
	char bDisableLowLatencyUpdate : 0; // 0x4C8 (1)
	enum class Unknow CurrentTrackingStatus; // 0x4CC (1)
	char bDisplayDeviceModel : 0; // 0x4CD (1)
	struct FName DisplayModelSource; // 0x4D0 (8)
	struct Unknown CustomDisplayMesh; // 0x4D8 (8)
	struct TArray<Unknown> DisplayMeshMaterialOverrides; // 0x4E0 (16)
	struct Unknown DisplayComponent; // 0x550 (8)

	void SetTrackingSource(enum class Unknow NewSource); // Function HeadMountedDisplay.MotionControllerComponent.SetTrackingSource(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2F14FE0>
	void SetTrackingMotionSource(struct FName NewSource); // Function HeadMountedDisplay.MotionControllerComponent.SetTrackingMotionSource(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2F14EF0>
	void SetShowDeviceModel(char bShowControllerModel); // Function HeadMountedDisplay.MotionControllerComponent.SetShowDeviceModel(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2F14B90>
	void SetDisplayModelSource(struct FName NewDisplayModelSource); // Function HeadMountedDisplay.MotionControllerComponent.SetDisplayModelSource(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2F148F0>
	void SetCustomDisplayMesh(struct Unknown NewDisplayMesh); // Function HeadMountedDisplay.MotionControllerComponent.SetCustomDisplayMesh(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2F14870>
	void SetAssociatedPlayerIndex(int32_t NewPlayer); // Function HeadMountedDisplay.MotionControllerComponent.SetAssociatedPlayerIndex(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2F14740>
	void OnMotionControllerUpdated(); // Function HeadMountedDisplay.MotionControllerComponent.OnMotionControllerUpdated(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	char IsTracked(); // Function HeadMountedDisplay.MotionControllerComponent.IsTracked(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2F14670>
	enum class Unknow GetTrackingSource(); // Function HeadMountedDisplay.MotionControllerComponent.GetTrackingSource(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2F13FA0>
	float GetParameterValue(struct FName InName, char& bValueFound); // Function HeadMountedDisplay.MotionControllerComponent.GetParameterValue(Final|Native|Protected|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2F13810>
	struct Unknown GetHandJointPosition(int32_t jointIndex, char& bValueFound); // Function HeadMountedDisplay.MotionControllerComponent.GetHandJointPosition(Final|Native|Protected|HasOutParms|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2F135D0>
};

// Class HeadMountedDisplay.AsyncTask_LoadXRDev
class UAsyncTask_LoadXRDev : UBlueprintAsyncActionBase {
	struct FMulticastInlineDelegate OnModelLoaded; // 0x30 (16)
	struct FMulticastInlineDelegate OnLoadFailure; // 0x40 (16)
	struct Unknown SpawnedComponent; // 0x58 (8)

	struct Unknown AddNamedDeviceVisualizationComponentAsync(struct Unknown Target, struct FName SystemName, struct FName DeviceName, char bManualAttachment, struct Unknown& RelativeTransform, struct Unknown& XRDeviceId, struct Unknown& NewComponent); // Function HeadMountedDisplay.AsyncTask_LoadXRDev.AddNamedDeviceVisualizationComponentAsync(Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2F12470>
	struct Unknown AddDeviceVisualizationComponentAsync(struct Unknown Target, struct Unknown& XRDeviceId, char bManualAttachment, struct Unknown& RelativeTransform, struct Unknown& NewComponent); // Function HeadMountedDisplay.AsyncTask_LoadXRDev.AddDeviceVisualizationComponentAsync(Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2F11EB0>
};

// ScriptStruct HeadMountedDisplay.XRDeviceId
struct FXRDeviceId {
	struct FName SystemName; // 0x0 (8)
	int32_t DeviceID; // 0x8 (4)
};

