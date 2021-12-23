// Enum CinematicCamera.ECameraFocusMethod
enum class ECameraFocusMethod : uint8 {
	ECameraFocusMethod = 0
	ECameraFocusMethod = 1
	ECameraFocusMethod = 2
	ECameraFocusMethod = 3
	ECameraFocusMethod = 4
};

// Class CinematicCamera.CineCameraComponent
class UCineCameraComponent : UCameraComponent {
	struct Unknown FilmbackSettings; // 0x880 (12)
	struct Unknown Filmback; // 0x88C (12)
	struct Unknown LensSettings; // 0x898 (24)
	struct Unknown FocusSettings; // 0x8B0 (88)
	float CurrentFocalLength; // 0x908 (4)
	float CurrentAperture; // 0x90C (4)
	float CurrentFocusDistance; // 0x910 (4)
	struct TArray<Unknown> FilmbackPresets; // 0x920 (16)
	struct TArray<Unknown> LensPresets; // 0x930 (16)
	struct FString DefaultFilmbackPresetName; // 0x940 (16)
	struct FString DefaultFilmbackPreset; // 0x950 (16)
	struct FString DefaultLensPresetName; // 0x960 (16)
	float DefaultLensFocalLength; // 0x970 (4)
	float DefaultLensFStop; // 0x974 (4)

	void SetLensPresetByName(struct FString InPresetName); // Function CinematicCamera.CineCameraComponent.SetLensPresetByName(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x339C530>
	void SetFilmbackPresetByName(struct FString InPresetName); // Function CinematicCamera.CineCameraComponent.SetFilmbackPresetByName(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x339C490>
	void SetCurrentFocalLength(float& InFocalLength); // Function CinematicCamera.CineCameraComponent.SetCurrentFocalLength(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x339C3F0>
	float GetVerticalFieldOfView(); // Function CinematicCamera.CineCameraComponent.GetVerticalFieldOfView(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x339C3C0>
	struct TArray<Unknown> GetLensPresetsCopy(); // Function CinematicCamera.CineCameraComponent.GetLensPresetsCopy(Final|Native|Static|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x339C2C0>
	struct FString GetLensPresetName(); // Function CinematicCamera.CineCameraComponent.GetLensPresetName(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x339C240>
	float GetHorizontalFieldOfView(); // Function CinematicCamera.CineCameraComponent.GetHorizontalFieldOfView(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x339C210>
	struct FString GetFilmbackPresetName(); // Function CinematicCamera.CineCameraComponent.GetFilmbackPresetName(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x339C190>
	struct FString GetDefaultFilmbackPresetName(); // Function CinematicCamera.CineCameraComponent.GetDefaultFilmbackPresetName(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x339C0C0>
};

// Class CinematicCamera.CameraRig_Crane
class ACameraRig_Crane : UActor {
	float CranePitch; // 0x310 (4)
	float CraneYaw; // 0x314 (4)
	float CraneArmLength; // 0x318 (4)
	char bLockMountPitch : 0; // 0x31C (1)
	char bLockMountYaw : 0; // 0x31D (1)
	struct Unknown TransformComponent; // 0x320 (8)
	struct Unknown CraneYawControl; // 0x328 (8)
	struct Unknown CranePitchControl; // 0x330 (8)
	struct Unknown CraneCameraMount; // 0x338 (8)
};

// Class CinematicCamera.CameraRig_Rail
class ACameraRig_Rail : UActor {
	float CurrentPositionOnRail; // 0x310 (4)
	char bLockOrientationToRail : 0; // 0x314 (1)
	struct Unknown TransformComponent; // 0x318 (8)
	struct Unknown RailSplineComponent; // 0x320 (8)
	struct Unknown RailCameraMount; // 0x328 (8)

	struct Unknown GetRailSplineComponent(); // Function CinematicCamera.CameraRig_Rail.GetRailSplineComponent(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x339C3A0>
};

// Class CinematicCamera.CineCameraActor
class ACineCameraActor : ACameraActor {
	struct Unknown LookatTrackingSettings; // 0x900 (80)

	struct Unknown GetCineCameraComponent(); // Function CinematicCamera.CineCameraActor.GetCineCameraComponent(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x339C0A0>
};

// ScriptStruct CinematicCamera.CameraLookatTrackingSettings
struct FCameraLookatTrackingSettings {
	char bEnableLookAtTracking : 0; // 0x0 (1)
	char bDrawDebugLookAtTrackingPosition : 0; // 0x0 (1)
	float LookAtTrackingInterpSpeed; // 0x4 (4)
	struct TSoftObjectPtr<Unknown> ActorToTrack; // 0x18 (40)
	struct Unknown RelativeOffset; // 0x40 (12)
	char bAllowRoll : 0; // 0x4C (1)
};

// ScriptStruct CinematicCamera.CameraFocusSettings
struct FCameraFocusSettings {
	enum class Unknow FocusMethod; // 0x0 (1)
	float ManualFocusDistance; // 0x4 (4)
	struct Unknown TrackingFocusSettings; // 0x8 (56)
	char bDrawDebugFocusPlane : 0; // 0x40 (1)
	struct Unknown DebugFocusPlaneColor; // 0x44 (4)
	char bSmoothFocusChanges : 0; // 0x48 (1)
	float FocusSmoothingInterpSpeed; // 0x4C (4)
	float FocusOffset; // 0x50 (4)
};

// ScriptStruct CinematicCamera.CameraTrackingFocusSettings
struct FCameraTrackingFocusSettings {
	struct TSoftObjectPtr<Unknown> ActorToTrack; // 0x0 (40)
	struct Unknown RelativeOffset; // 0x28 (12)
	char bDrawDebugTrackingFocusPoint : 0; // 0x34 (1)
};

// ScriptStruct CinematicCamera.NamedLensPreset
struct FNamedLensPreset {
	struct FString Name; // 0x0 (16)
	struct Unknown LensSettings; // 0x10 (24)
};

// ScriptStruct CinematicCamera.CameraLensSettings
struct FCameraLensSettings {
	float MinFocalLength; // 0x0 (4)
	float MaxFocalLength; // 0x4 (4)
	float MinFStop; // 0x8 (4)
	float MaxFStop; // 0xC (4)
	float MinimumFocusDistance; // 0x10 (4)
	int32_t DiaphragmBladeCount; // 0x14 (4)
};

// ScriptStruct CinematicCamera.NamedFilmbackPreset
struct FNamedFilmbackPreset {
	struct FString Name; // 0x0 (16)
	struct Unknown FilmbackSettings; // 0x10 (12)
};

// ScriptStruct CinematicCamera.CameraFilmbackSettings
struct FCameraFilmbackSettings {
	float SensorWidth; // 0x0 (4)
	float SensorHeight; // 0x4 (4)
	float SensorAspectRatio; // 0x8 (4)
};

