// Enum RTXGI.EDDGIRaysPerProbe
enum class EDDGIRaysPerProbe : uint8 {
	EDDGIRaysPerProbe = 0,
	EDDGIRaysPerProbe = 1,
	EDDGIRaysPerProbe = 2,
	EDDGIRaysPerProbe = 3,
	EDDGIRaysPerProbe = 4,
	EDDGIRaysPerProbe = 5,
	EDDGIRaysPerProbe = 6,
	EDDGIRaysPerProbe = 7,
	EDDGIRaysPerProbe = 8
};

// Enum RTXGI.EDDGIDistanceBits
enum class EDDGIDistanceBits : uint8 {
	EDDGIDistanceBits = 0,
	EDDGIDistanceBits = 1,
	EDDGIDistanceBits = 2
};

// Enum RTXGI.EDDGIIrradianceBits
enum class EDDGIIrradianceBits : uint8 {
	EDDGIIrradianceBits = 0,
	EDDGIIrradianceBits = 1,
	EDDGIIrradianceBits = 2
};

// Class RTXGI.DDGIVolume
struct ADDGIVolume : UActor {
	Unknown DDGIVolumeComponent; //  0x310 Size(8)
};

// Class RTXGI.DDGIVolumeComponent
struct UDDGIVolumeComponent : USceneComponent {
	Unknown RaysPerProbe; //  0x240 Size(1)
	Unknown Prob; //  0x244 Size(c)
	int32_t LightingPriority; //  0x250 Size(4)
	float UpdatePriority; //  0x254 Size(4)
	float Prob; //  0x258 Size(4)
	float ProbtePriority; //  0x25c Size(4)
	float ViewBias; //  0x260 Size(4)
	float NormalBias; //  0x264 Size(4)
	Unknown LightingChannels; //  0x268 Size(1)
	float VolumeBlendDistance; //  0x26c Size(4)
	float VolumeBlendDistanceBlack; //  0x270 Size(4)
	char Enab; //  0x274 Size(1)
	char EnabmeBlendDistanceB; //  0x275 Size(1)
	char Enab; //  0x276 Size(1)
	float ViewDependentVolumeScrollingOffset; //  0x278 Size(4)
	char Enab; //  0x27c Size(1)
	char RuntimeStatic; //  0x27d Size(1)
	float prob; //  0x280 Size(4)
	float probimeStatic; //  0x284 Size(4)
	float prob; //  0x288 Size(4)
	float probimeStatic; //  0x28c Size(4)
	float Prob; //  0x290 Size(4)
	float ProbimeStatic; //  0x294 Size(4)
	float LightMultiplier; //  0x298 Size(4)
	float EmissiveMultiplier; //  0x29c Size(4)
	float IrradianceScalar; //  0x2a0 Size(4)
	char SkyLight; //  0x2a4 Size(1)
	Unknown LastOrigin; //  0x2a8 Size(c)
	Unknown Prob; //  0x2b4 Size(c)

	void DDGIClearVolumes(); // Function RTXGI.DDGIVolumeComponent.DDGIClearVolumes(Final|Exec|Native|Public) // <Game+0x164d800>
};

// Class RTXGI.RTXGIPluginSettings
struct URTXGIPluginSettings : UDeveloperSettings {
	Unknown IrradianceBits; //  0x38 Size(1)
	Unknown DistanceBits; //  0x39 Size(1)
	float DebugProbeRadius; //  0x3c Size(4)
	int32_t Prob; //  0x40 Size(4)
};

