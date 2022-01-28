// Enum RTXGI.EDDGIRaysPerProbe
enum class EDDGIRaysPerProbe : uint8_t {
	n144 = 0,
	n288 = 1,
	n432 = 2,
	n576 = 3,
	n720 = 4,
	n864 = 5,
	n1008 = 6,
	Count = 7,
	EDDGIRaysPerProbe_MAX = 8,
};

// Enum RTXGI.EDDGIDistanceBits
enum class EDDGIDistanceBits : uint8_t {
	n16 = 0,
	n32 = 1,
	EDDGIDistanceBits_MAX = 2,
};

// Enum RTXGI.EDDGIIrradianceBits
enum class EDDGIIrradianceBits : uint8_t {
	n10 = 0,
	n32 = 1,
	EDDGIIrradianceBits_MAX = 2,
};

// Class RTXGI.DDGIVolume
class ADDGIVolume : public UActor {

public:

	struct UDDGIVolumeComponent DDGIVolumeComponent; // 0x328 (8)
};

// Class RTXGI.DDGIVolumeComponent
class UDDGIVolumeComponent : public USceneComponent {

public:

	enum class EDDGIRaysPerProbe RaysPerProbe; // 0x238 (1)
	struct FIntVector ProbeCounts; // 0x23C (12)
	int32_t LightingPriority; // 0x248 (4)
	float UpdatePriority; // 0x24C (4)
	float ProbeMaxRayDistance; // 0x250 (4)
	float ProbeHysteresis; // 0x254 (4)
	float ViewBias; // 0x258 (4)
	float NormalBias; // 0x25C (4)
	struct FLightingChannels LightingChannels; // 0x260 (1)
	float VolumeBlendDistance; // 0x264 (4)
	float VolumeBlendDistanceBlack; // 0x268 (4)
	char EnableProbeRelocation : 0; // 0x26C (1)
	char EnableProbeScrolling : 0; // 0x26D (1)
	char EnableViewDependentVolumeScrolling : 0; // 0x26E (1)
	float ViewDependentVolumeScrollingOffset; // 0x270 (4)
	char EnableVolume : 0; // 0x274 (1)
	char RuntimeStatic : 0; // 0x275 (1)
	float probeDistanceExponent; // 0x278 (4)
	float probeIrradianceEncodingGamma; // 0x27C (4)
	float probeChangeThreshold; // 0x280 (4)
	float probeBrightnessThreshold; // 0x284 (4)
	float ProbeMinFrontfaceDistance; // 0x288 (4)
	float ProbeBackfaceThreshold; // 0x28C (4)
	float LightMultiplier; // 0x290 (4)
	float EmissiveMultiplier; // 0x294 (4)
	float IrradianceScalar; // 0x298 (4)
	char SkyLight : 0; // 0x29C (1)
	struct FVector LastOrigin; // 0x2A0 (12)
	struct FIntVector ProbeScrollOffset; // 0x2AC (12)

	void DDGIClearVolumes(); // Function RTXGI.DDGIVolumeComponent.DDGIClearVolumes(Final|Exec|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1674690>
};

// Class RTXGI.RTXGIPluginSettings
class URTXGIPluginSettings : public UDeveloperSettings {

public:

	enum class EDDGIIrradianceBits IrradianceBits; // 0x38 (1)
	enum class EDDGIDistanceBits DistanceBits; // 0x39 (1)
	float DebugProbeRadius; // 0x3C (4)
	int32_t ProbeUpdateRayBudget; // 0x40 (4)
};

// Function RTXGI.DDGIVolumeComponent.DDGIClearVolumes
inline void UDDGIVolumeComponent::DDGIClearVolumes() {
	static auto fn = UObject::FindObject<UFunction>("Function RTXGI.DDGIVolumeComponent.DDGIClearVolumes");

	struct DDGIClearVolumes_Params {
		
	}; DDGIClearVolumes_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

