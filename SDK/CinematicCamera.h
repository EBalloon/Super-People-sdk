// Enum CinematicCamera.ECameraFocusMethod
enum class ECameraFocusMethod : uint8_t {
	DoNotOverride = 0,
	Manual = 1,
	Tracking = 2,
	Disable = 3,
	MAX = 4,
};

// Class CinematicCamera.CineCameraComponent
class UCineCameraComponent : public UCameraComponent {

public:

	struct FCameraFilmbackSettings FilmbackSettings; // 0x870 (12)
	struct FCameraFilmbackSettings Filmback; // 0x87C (12)
	struct FCameraLensSettings LensSettings; // 0x888 (24)
	struct FCameraFocusSettings FocusSettings; // 0x8A0 (88)
	float CurrentFocalLength; // 0x8F8 (4)
	float CurrentAperture; // 0x8FC (4)
	float CurrentFocusDistance; // 0x900 (4)
	struct TArray<struct FNamedFilmbackPreset> FilmbackPresets; // 0x910 (16)
	struct TArray<struct FNamedLensPreset> LensPresets; // 0x920 (16)
	struct FString DefaultFilmbackPresetName; // 0x930 (16)
	struct FString DefaultFilmbackPreset; // 0x940 (16)
	struct FString DefaultLensPresetName; // 0x950 (16)
	float DefaultLensFocalLength; // 0x960 (4)
	float DefaultLensFStop; // 0x964 (4)

	void SetLensPresetByName(struct FString InPresetName); // Function CinematicCamera.CineCameraComponent.SetLensPresetByName(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B8BFD0>
	void SetFilmbackPresetByName(struct FString InPresetName); // Function CinematicCamera.CineCameraComponent.SetFilmbackPresetByName(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B8BF30>
	void SetCurrentFocalLength(float& InFocalLength); // Function CinematicCamera.CineCameraComponent.SetCurrentFocalLength(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B8BE90>
	float GetVerticalFieldOfView(); // Function CinematicCamera.CineCameraComponent.GetVerticalFieldOfView(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B8BE60>
	struct TArray<struct FNamedLensPreset> GetLensPresetsCopy(); // Function CinematicCamera.CineCameraComponent.GetLensPresetsCopy(Final|Native|Static|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B8BD60>
	struct FString GetLensPresetName(); // Function CinematicCamera.CineCameraComponent.GetLensPresetName(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B8BCE0>
	float GetHorizontalFieldOfView(); // Function CinematicCamera.CineCameraComponent.GetHorizontalFieldOfView(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B8BCB0>
	struct FString GetFilmbackPresetName(); // Function CinematicCamera.CineCameraComponent.GetFilmbackPresetName(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B8BC30>
	struct FString GetDefaultFilmbackPresetName(); // Function CinematicCamera.CineCameraComponent.GetDefaultFilmbackPresetName(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B8BB60>
};

// Class CinematicCamera.CameraRig_Crane
class ACameraRig_Crane : public UActor {

public:

	float CranePitch; // 0x328 (4)
	float CraneYaw; // 0x32C (4)
	float CraneArmLength; // 0x330 (4)
	char bLockMountPitch : 0; // 0x334 (1)
	char bLockMountYaw : 0; // 0x335 (1)
	struct USceneComponent TransformComponent; // 0x338 (8)
	struct USceneComponent CraneYawControl; // 0x340 (8)
	struct USceneComponent CranePitchControl; // 0x348 (8)
	struct USceneComponent CraneCameraMount; // 0x350 (8)
};

// Class CinematicCamera.CameraRig_Rail
class ACameraRig_Rail : public UActor {

public:

	float CurrentPositionOnRail; // 0x328 (4)
	char bLockOrientationToRail : 0; // 0x32C (1)
	struct USceneComponent TransformComponent; // 0x330 (8)
	struct USplineComponent RailSplineComponent; // 0x338 (8)
	struct USceneComponent RailCameraMount; // 0x340 (8)

	struct USplineComponent GetRailSplineComponent(); // Function CinematicCamera.CameraRig_Rail.GetRailSplineComponent(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B8BE40>
};

// Class CinematicCamera.CineCameraActor
class ACineCameraActor : public ACameraActor {

public:

	struct FCameraLookatTrackingSettings LookatTrackingSettings; // 0x920 (80)

	struct UCineCameraComponent GetCineCameraComponent(); // Function CinematicCamera.CineCameraActor.GetCineCameraComponent(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B8BB40>
};

// ScriptStruct CinematicCamera.CameraLookatTrackingSettings
struct FCameraLookatTrackingSettings {
	char bEnableLookAtTracking : 0; // 0x0 (1)
	char bDrawDebugLookAtTrackingPosition : 0; // 0x0 (1)
	float LookAtTrackingInterpSpeed; // 0x4 (4)
	struct TSoftObjectPtr<UActor> ActorToTrack; // 0x18 (40)
	struct FVector RelativeOffset; // 0x40 (12)
	char bAllowRoll : 0; // 0x4C (1)
};

// ScriptStruct CinematicCamera.CameraFocusSettings
struct FCameraFocusSettings {
	enum class ECameraFocusMethod FocusMethod; // 0x0 (1)
	float ManualFocusDistance; // 0x4 (4)
	struct FCameraTrackingFocusSettings TrackingFocusSettings; // 0x8 (56)
	char bDrawDebugFocusPlane : 0; // 0x40 (1)
	struct FColor DebugFocusPlaneColor; // 0x44 (4)
	char bSmoothFocusChanges : 0; // 0x48 (1)
	float FocusSmoothingInterpSpeed; // 0x4C (4)
	float FocusOffset; // 0x50 (4)
};

// ScriptStruct CinematicCamera.CameraTrackingFocusSettings
struct FCameraTrackingFocusSettings {
	struct TSoftObjectPtr<UActor> ActorToTrack; // 0x0 (40)
	struct FVector RelativeOffset; // 0x28 (12)
	char bDrawDebugTrackingFocusPoint : 0; // 0x34 (1)
};

// ScriptStruct CinematicCamera.NamedLensPreset
struct FNamedLensPreset {
	struct FString Name; // 0x0 (16)
	struct FCameraLensSettings LensSettings; // 0x10 (24)
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
	struct FCameraFilmbackSettings FilmbackSettings; // 0x10 (12)
};

// ScriptStruct CinematicCamera.CameraFilmbackSettings
struct FCameraFilmbackSettings {
	float SensorWidth; // 0x0 (4)
	float SensorHeight; // 0x4 (4)
	float SensorAspectRatio; // 0x8 (4)
};

// Function CinematicCamera.CineCameraComponent.SetLensPresetByName
inline void UCineCameraComponent::SetLensPresetByName(struct FString InPresetName) {
	static auto fn = UObject::FindObject<UFunction>("Function CinematicCamera.CineCameraComponent.SetLensPresetByName");

	struct SetLensPresetByName_Params {
		struct FString InPresetName;
	}; SetLensPresetByName_Params Params;

	Params.InPresetName = InPresetName;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function CinematicCamera.CineCameraComponent.SetFilmbackPresetByName
inline void UCineCameraComponent::SetFilmbackPresetByName(struct FString InPresetName) {
	static auto fn = UObject::FindObject<UFunction>("Function CinematicCamera.CineCameraComponent.SetFilmbackPresetByName");

	struct SetFilmbackPresetByName_Params {
		struct FString InPresetName;
	}; SetFilmbackPresetByName_Params Params;

	Params.InPresetName = InPresetName;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function CinematicCamera.CineCameraComponent.SetCurrentFocalLength
inline void UCineCameraComponent::SetCurrentFocalLength(float& InFocalLength) {
	static auto fn = UObject::FindObject<UFunction>("Function CinematicCamera.CineCameraComponent.SetCurrentFocalLength");

	struct SetCurrentFocalLength_Params {
		float& InFocalLength;
	}; SetCurrentFocalLength_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	InFocalLength = Params.InFocalLength;

}

// Function CinematicCamera.CineCameraComponent.GetVerticalFieldOfView
inline float UCineCameraComponent::GetVerticalFieldOfView() {
	static auto fn = UObject::FindObject<UFunction>("Function CinematicCamera.CineCameraComponent.GetVerticalFieldOfView");

	struct GetVerticalFieldOfView_Params {
		
		float ReturnValue;

	}; GetVerticalFieldOfView_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function CinematicCamera.CineCameraComponent.GetLensPresetsCopy
inline struct TArray<struct FNamedLensPreset> UCineCameraComponent::GetLensPresetsCopy() {
	static auto fn = UObject::FindObject<UFunction>("Function CinematicCamera.CineCameraComponent.GetLensPresetsCopy");

	struct GetLensPresetsCopy_Params {
		
		struct TArray<struct FNamedLensPreset> ReturnValue;

	}; GetLensPresetsCopy_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function CinematicCamera.CineCameraComponent.GetLensPresetName
inline struct FString UCineCameraComponent::GetLensPresetName() {
	static auto fn = UObject::FindObject<UFunction>("Function CinematicCamera.CineCameraComponent.GetLensPresetName");

	struct GetLensPresetName_Params {
		
		struct FString ReturnValue;

	}; GetLensPresetName_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function CinematicCamera.CineCameraComponent.GetHorizontalFieldOfView
inline float UCineCameraComponent::GetHorizontalFieldOfView() {
	static auto fn = UObject::FindObject<UFunction>("Function CinematicCamera.CineCameraComponent.GetHorizontalFieldOfView");

	struct GetHorizontalFieldOfView_Params {
		
		float ReturnValue;

	}; GetHorizontalFieldOfView_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function CinematicCamera.CineCameraComponent.GetFilmbackPresetName
inline struct FString UCineCameraComponent::GetFilmbackPresetName() {
	static auto fn = UObject::FindObject<UFunction>("Function CinematicCamera.CineCameraComponent.GetFilmbackPresetName");

	struct GetFilmbackPresetName_Params {
		
		struct FString ReturnValue;

	}; GetFilmbackPresetName_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function CinematicCamera.CineCameraComponent.GetDefaultFilmbackPresetName
inline struct FString UCineCameraComponent::GetDefaultFilmbackPresetName() {
	static auto fn = UObject::FindObject<UFunction>("Function CinematicCamera.CineCameraComponent.GetDefaultFilmbackPresetName");

	struct GetDefaultFilmbackPresetName_Params {
		
		struct FString ReturnValue;

	}; GetDefaultFilmbackPresetName_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function CinematicCamera.CameraRig_Rail.GetRailSplineComponent
inline struct USplineComponent ACameraRig_Rail::GetRailSplineComponent() {
	static auto fn = UObject::FindObject<UFunction>("Function CinematicCamera.CameraRig_Rail.GetRailSplineComponent");

	struct GetRailSplineComponent_Params {
		
		struct USplineComponent ReturnValue;

	}; GetRailSplineComponent_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function CinematicCamera.CineCameraActor.GetCineCameraComponent
inline struct UCineCameraComponent ACineCameraActor::GetCineCameraComponent() {
	static auto fn = UObject::FindObject<UFunction>("Function CinematicCamera.CineCameraActor.GetCineCameraComponent");

	struct GetCineCameraComponent_Params {
		
		struct UCineCameraComponent ReturnValue;

	}; GetCineCameraComponent_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

