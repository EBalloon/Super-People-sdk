// Enum MagicLeapAR.ELuminARLineTraceChannel
enum class ELuminARLineTraceChannel : uint8_t {
	None = 0,
	FeaturePoint = 1,
	InfinitePlane = 2,
	PlaneUsingExtent = 4,
	PlaneUsingBoundaryPolygon = 8,
	FeaturePointWithSurfaceNormal = 16,
	ELuminARLineTraceChannel_MAX = 17,
};

// Enum MagicLeapAR.ELuminARTrackingState
enum class ELuminARTrackingState : uint8_t {
	Tracking = 0,
	NotTracking = 1,
	StoppedTracking = 2,
	ELuminARTrackingState_MAX = 3,
};

// Class MagicLeapAR.LuminARSessionConfig
class ULuminARSessionConfig : public UARSessionConfig {

public:

	struct Unknown PlanesQuery; // 0xB0 (96)
	int32_t MaxPlaneQueryResults; // 0x110 (4)
	int32_t MinPlaneArea; // 0x114 (4)
	char bArbitraryOrientationPlaneDetection : 0; // 0x118 (1)
	struct Unknown PlaneSearchExtents; // 0x11C (12)
	struct TArray<Unknown> PlaneQueryFlags; // 0x128 (16)
	char bDiscardZeroExtentPlanes : 0; // 0x138 (1)
	char bDefaultUseUnreliablePose : 0; // 0x139 (1)
};

// Class MagicLeapAR.LuminARLightEstimate
class ULuminARLightEstimate : public UARBasicLightEstimate {

public:

	struct TArray<Unknown> AmbientIntensityNits; // 0x40 (16)

	struct TArray<Unknown> GetAmbientIntensityNits(); // Function MagicLeapAR.LuminARLightEstimate.GetAmbientIntensityNits(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <Game_BE.exe+0x17E3D20>
};

// Class MagicLeapAR.LuminARCandidateImage
class ULuminARCandidateImage : public UARCandidateImage {

public:

	char bUseUnreliablePose : 0; // 0x58 (1)
	char bImageIsStationary : 0; // 0x59 (1)

	char GetUseUnreliablePose(); // Function MagicLeapAR.LuminARCandidateImage.GetUseUnreliablePose(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <Game_BE.exe+0x17E3E30>
	char GetImageIsStationary(); // Function MagicLeapAR.LuminARCandidateImage.GetImageIsStationary(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <Game_BE.exe+0x17E3DE0>
};

// Function MagicLeapAR.LuminARLightEstimate.GetAmbientIntensityNits
inline struct TArray<Unknown> ULuminARLightEstimate::GetAmbientIntensityNits() {
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeapAR.LuminARLightEstimate.GetAmbientIntensityNits");

	struct GetAmbientIntensityNits_Params {
		
		struct TArray<Unknown> ReturnValue;

	}; GetAmbientIntensityNits_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MagicLeapAR.LuminARCandidateImage.GetUseUnreliablePose
inline char ULuminARCandidateImage::GetUseUnreliablePose() {
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeapAR.LuminARCandidateImage.GetUseUnreliablePose");

	struct GetUseUnreliablePose_Params {
		
		char ReturnValue;

	}; GetUseUnreliablePose_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MagicLeapAR.LuminARCandidateImage.GetImageIsStationary
inline char ULuminARCandidateImage::GetImageIsStationary() {
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeapAR.LuminARCandidateImage.GetImageIsStationary");

	struct GetImageIsStationary_Params {
		
		char ReturnValue;

	}; GetImageIsStationary_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

