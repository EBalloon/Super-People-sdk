// Enum MagicLeapAR.ELuminARLineTraceChannel
enum class ELuminARLineTraceChannel : uint8 {
	ELuminARLineTraceChannel = 0,
	ELuminARLineTraceChannel = 1,
	ELuminARLineTraceChannel = 2,
	ELuminARLineTraceChannel = 4,
	ELuminARLineTraceChannel = 8,
	ELuminARLineTraceChannel = 16,
	ELuminARLineTraceChannel = 17
};

// Enum MagicLeapAR.ELuminARTrackingState
enum class ELuminARTrackingState : uint8 {
	ELuminARTrackingState = 0,
	ELuminARTrackingState = 1,
	ELuminARTrackingState = 2,
	ELuminARTrackingState = 3
};

// Class MagicLeapAR.LuminARSessionConfig
struct ULuminARSessionConfig : UARSessionConfig {
	Unknown PlanesQuery; //  0xb0 Size(60)
	int32_t MaxPlaneQueryResults; //  0x110 Size(4)
	int32_t MinPlaneArea; //  0x114 Size(4)
	char bArb; //  0x118 Size(1)
	Unknown PlaneSearchExtents; //  0x11c Size(c)
	Unknown PlaneQueryFlags; //  0x128 Size(10)
	char bDiscardZeroExtentPlanes; //  0x138 Size(1)
	char bDefaultUseUnreliablePose; //  0x139 Size(1)
};

// Class MagicLeapAR.LuminARLightEstimate
struct ULuminARLightEstimate : UARBasicLightEstimate {
	Unknown AmbientIntensityNits; //  0x40 Size(10)

	Unknown GetAmbientIntensityNits(); // Function MagicLeapAR.LuminARLightEstimate.GetAmbientIntensityNits(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <Game+0x17cd820>
};

// Class MagicLeapAR.LuminARCandidateImage
struct ULuminARCandidateImage : UARCandidateImage {
	char bUseUnreliablePose; //  0x58 Size(1)
	char bImageIsStationary; //  0x59 Size(1)

	char GetUseUnreliablePose(); // Function MagicLeapAR.LuminARCandidateImage.GetUseUnreliablePose(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <Game+0x17cd930>
};

