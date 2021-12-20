// Enum CinematicCamera.ECameraFocusMethod
enum class ECameraFocusMethod : uint8 {
	ECameraFocusMethod = 0,
	ECameraFocusMethod = 1,
	ECameraFocusMethod = 2,
	ECameraFocusMethod = 3,
	ECameraFocusMethod = 4
};

// Class CinematicCamera.CineCameraComponent
struct UCineCameraComponent : UCameraComponent {
	Unknown FilmbackSettings; //  0x880 Size(c)
	Unknown Filmback; //  0x88c Size(c)
	Unknown LensSettings; //  0x898 Size(18)
	Unknown FocusSettings; //  0x8b0 Size(58)
	float CurrentFocalLength; //  0x908 Size(4)
	float CurrentAperture; //  0x90c Size(4)
	float CurrentFocusDistance; //  0x910 Size(4)
	Unknown FilmbackPresets; //  0x920 Size(10)
	Unknown LensPresets; //  0x930 Size(10)
	struct FString DefaultFilmbackPresetName; //  0x940 Size(10)
	struct FString DefaultFilmbackPreset; //  0x950 Size(10)
	struct FString DefaultLensPresetName; //  0x960 Size(10)
	float DefaultLensFocalLength; //  0x970 Size(4)
	float DefaultLensFStop; //  0x974 Size(4)

	void SetLensPresetByName(struct FString InPresetName); // Function CinematicCamera.CineCameraComponent.SetLensPresetByName(Final|Native|Public|BlueprintCallable) // <Game+0x3390f80>
};

// Class CinematicCamera.CameraRig_Crane
struct ACameraRig_Crane : UActor {
	float CranePitch; //  0x310 Size(4)
	float CraneYaw; //  0x314 Size(4)
	float CraneArmLength; //  0x318 Size(4)
	char bLockMountPitch; //  0x31c Size(1)
	char bLockMountYaw; //  0x31d Size(1)
	Unknown TransformComponent; //  0x320 Size(8)
	Unknown CraneYawControl; //  0x328 Size(8)
	Unknown CranePitchControl; //  0x330 Size(8)
	Unknown CraneCameraMount; //  0x338 Size(8)
};

// Class CinematicCamera.CameraRig_Rail
struct ACameraRig_Rail : UActor {
	float CurrentPositionOnRail; //  0x310 Size(4)
	char bLockOrientationToRail; //  0x314 Size(1)
	Unknown TransformComponent; //  0x318 Size(8)
	Unknown RailSplineComponent; //  0x320 Size(8)
	Unknown RailCameraMount; //  0x328 Size(8)

	Unknown GetRailSplineComponent(); // Function CinematicCamera.CameraRig_Rail.GetRailSplineComponent(Final|Native|Public|BlueprintCallable|BlueprintPure) // <Game+0x3390df0>
};

// Class CinematicCamera.CineCameraActor
struct ACineCameraActor : ACameraActor {
	Unknown LookatTrackingSettings; //  0x900 Size(50)

	Unknown GetCineCameraComponent(); // Function CinematicCamera.CineCameraActor.GetCineCameraComponent(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <Game+0x3390af0>
};

