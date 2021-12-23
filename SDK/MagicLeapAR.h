// Enum MagicLeapAR.ELuminARLineTraceChannel
enum class ELuminARLineTraceChannel : uint8 {
	ELuminARLineTraceChannel = 0
	ELuminARLineTraceChannel = 1
	ELuminARLineTraceChannel = 2
	ELuminARLineTraceChannel = 4
	ELuminARLineTraceChannel = 8
	ELuminARLineTraceChannel = 16
	ELuminARLineTraceChannel = 17
};

// Enum MagicLeapAR.ELuminARTrackingState
enum class ELuminARTrackingState : uint8 {
	ELuminARTrackingState = 0
	ELuminARTrackingState = 1
	ELuminARTrackingState = 2
	ELuminARTrackingState = 3
};

// Class MagicLeapAR.LuminARSessionConfig
struct ULuminARSessionConfig : UA {
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
struct ULuminARLightEstimate : UA {
	struct TArray<Unknown> AmbientIntensityNits; // 0x40 (16)

	struct TArray<Unknown> GetAmbientIntensityNits(); // Function MagicLeapAR.LuminARLightEstimate.GetAmbientIntensityNits(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x17CE590>
};

// Class MagicLeapAR.LuminARCandidateImage
struct ULuminARCandidateImage : UA {
	char bUseUnreliablePose : 0; // 0x58 (1)
	char bImageIsStationary : 0; // 0x59 (1)

	char GetUseUnreliablePose(); // Function MagicLeapAR.LuminARCandidateImage.GetUseUnreliablePose(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x17CE6A0>
	char GetImageIsStationary(); // Function MagicLeapAR.LuminARCandidateImage.GetImageIsStationary(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x17CE650>
};

