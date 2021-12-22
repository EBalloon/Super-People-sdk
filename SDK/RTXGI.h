// Enum RTXGI.EDDG
enum class EDDG : uint8 {
	EDDG = 0,
	EDDG = 1,
	EDDG = 2,
	EDDG = 3,
	EDDG = 4,
	EDDG = 5,
	EDDG = 6,
	EDDG = 7,
	EDDG = 8
};

// Enum RTXGI.EDDG
enum class EDDG : uint8 {
	EDDG = 0,
	EDDG = 1,
	EDDG = 2
};

// Enum RTXGI.EDDG
enum class EDDG : uint8 {
	EDDG = 0,
	EDDG = 1,
	EDDG = 2
};

// Class RTXGI.DDGIVolume
struct ADDGIVolume : UActor {
	struct Unknown DDGIVolumeComponent; //  0x310 Size(8)
};

// Class RTXGI.DDGIVolumeComponent
struct UDDGIVolumeComponent : USceneComponent {
	enum class Unknow RaysPerProbe; //  0x240 Size(1)
	struct Unknown ProbeCounts; //  0x244 Size(c)
	int32_t LightingPriority; //  0x250 Size(4)
	float UpdatePriority; //  0x254 Size(4)
	float ProbeMaxRayDistance; //  0x258 Size(4)
	float ProbeHysteresis; //  0x25c Size(4)
	float ViewBias; //  0x260 Size(4)
	float NormalBias; //  0x264 Size(4)
	struct Unknown LightingChannels; //  0x268 Size(1)
	float VolumeBlendDistance; //  0x26c Size(4)
	float VolumeBlendDistanceBlack; //  0x270 Size(4)
	char EnableProbeRelocation; //  0x274 Size(1)
	char EnableProbeScrolling; //  0x275 Size(1)
	char EnableViewDependentVolumeScrolling; //  0x276 Size(1)
	float View; //  0x278 Size(4)
	char EnableVolume; //  0x27c Size(1)
	char RuntimeStatic; //  0x27d Size(1)
	float probeDistanceExponent; //  0x280 Size(4)
	float probeIrradianceEncodingGamma; //  0x284 Size(4)
	float probeChangeThreshold; //  0x288 Size(4)
	float probeBrightnessThreshold; //  0x28c Size(4)
	float ProbeMinFrontfaceDistance; //  0x290 Size(4)
	float ProbeBackfaceThreshold; //  0x294 Size(4)
	float LightMultiplier; //  0x298 Size(4)
	float EmissiveMultiplier; //  0x29c Size(4)
	float IrradianceScalar; //  0x2a0 Size(4)
	char SkyLight; //  0x2a4 Size(1)
	struct Unknown LastOrigin; //  0x2a8 Size(c)
	struct Unknown ProbeScrollOffset; //  0x2b4 Size(c)

	void DDGIClearVolumes(); // Function RTXGI.DDGIVolumeComponent.DDGIClearVolumes(Final|Exec|Native|Public) // <Game+0x164e2c0>
};

// Class RTXGI.RTXG
struct URTXG : UDeveloperSettings {
	enum class Unknow IrradianceBits; //  0x38 Size(1)
	enum class Unknow DistanceBits; //  0x39 Size(1)
	float DebugProbeRadius; //  0x3c Size(4)
	int32_t ProbeUpdateRayBudget; //  0x40 Size(4)
};

