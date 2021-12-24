// Enum AudioMixer.EAudioSpectrumType
enum class EAudioSpectrumType : uint8_t {
	EAudioSpectrumType = 0,
	EAudioSpectrumType = 1,
	EAudioSpectrumType = 2,
};

// Enum AudioMixer.EFFTWindowType
enum class EFFTWindowType : uint8_t {
	EFFTWindowType = 0,
	EFFTWindowType = 1,
	EFFTWindowType = 2,
	EFFTWindowType = 3,
	EFFTWindowType = 4,
};

// Enum AudioMixer.EFFTPeakInterpolationMethod
enum class EFFTPeakInterpolationMethod : uint8_t {
	EFFTPeakInterpolationMethod = 0,
	EFFTPeakInterpolationMethod = 1,
	EFFTPeakInterpolationMethod = 2,
	EFFTPeakInterpolationMethod = 3,
};

// Enum AudioMixer.EFFTSize
enum class EFFTSize : uint8_t {
	EFFTSize = 0,
	EFFTSize = 1,
	EFFTSize = 2,
	EFFTSize = 3,
	EFFTSize = 4,
	EFFTSize = 5,
};

// Enum AudioMixer.ESubmixEffectDynamicsChannelLinkMode
enum class ESubmixEffectDynamicsChannelLinkMode : uint8_t {
	ESubmixEffectDynamicsChannelLinkMode = 0,
	ESubmixEffectDynamicsChannelLinkMode = 1,
	ESubmixEffectDynamicsChannelLinkMode = 2,
	ESubmixEffectDynamicsChannelLinkMode = 3,
	ESubmixEffectDynamicsChannelLinkMode = 4,
};

// Enum AudioMixer.ESubmixEffectDynamicsPeakMode
enum class ESubmixEffectDynamicsPeakMode : uint8_t {
	ESubmixEffectDynamicsPeakMode = 0,
	ESubmixEffectDynamicsPeakMode = 1,
	ESubmixEffectDynamicsPeakMode = 2,
	ESubmixEffectDynamicsPeakMode = 3,
	ESubmixEffectDynamicsPeakMode = 4,
};

// Enum AudioMixer.ESubmixEffectDynamicsProcessorType
enum class ESubmixEffectDynamicsProcessorType : uint8_t {
	ESubmixEffectDynamicsProcessorType = 0,
	ESubmixEffectDynamicsProcessorType = 1,
	ESubmixEffectDynamicsProcessorType = 2,
	ESubmixEffectDynamicsProcessorType = 3,
	ESubmixEffectDynamicsProcessorType = 4,
	ESubmixEffectDynamicsProcessorType = 5,
};

// Class AudioMixer.SynthComponent
class USynthComponent : public USceneComponent {

public:

	char bAutoDestroy : 0; // 0x238 (1)
	char bStopWhenOwnerDestroyed : 0; // 0x238 (1)
	char bAllowSpatialization : 0; // 0x238 (1)
	char bOverrideAttenuation : 0; // 0x238 (1)
	char bOutputToBusOnly : 0; // 0x23C (1)
	struct Unknown AttenuationSettings; // 0x240 (8)
	struct Unknown AttenuationOverrides; // 0x248 (928)
	struct Unknown ConcurrencySettings; // 0x5E8 (8)
	struct TSet<Unknown> ConcurrencySet; // 0x5F0 (80)
	struct Unknown SoundClass; // 0x640 (8)
	struct Unknown SourceEffectChain; // 0x648 (8)
	struct Unknown SoundSubmix; // 0x650 (8)
	struct TArray<Unknown> SoundSubmixSends; // 0x658 (16)
	struct TArray<Unknown> BusSends; // 0x668 (16)
	struct Unknown Modulation; // 0x678 (16)
	struct TArray<Unknown> PreEffectBusSends; // 0x688 (16)
	char bIsUISound : 0; // 0x698 (1)
	char bIsPreviewSound : 0; // 0x698 (1)
	int32_t EnvelopeFollowerAttackTime; // 0x69C (4)
	int32_t EnvelopeFollowerReleaseTime; // 0x6A0 (4)
	struct FMulticastInlineDelegate OnAudioEnvelopeValue; // 0x6A8 (16)
	struct Unknown Synth; // 0x6D8 (8)
	struct Unknown AudioComponent; // 0x6E0 (8)

	void Stop(); // Function AudioMixer.SynthComponent.Stop(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x33FF8A0>
	void Start(); // Function AudioMixer.SynthComponent.Start(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x33FF5C0>
	void SetVolumeMultiplier(float VolumeMultiplier); // Function AudioMixer.SynthComponent.SetVolumeMultiplier(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x33FF540>
	void SetSubmixSend(struct Unknown Submix, float SendLevel); // Function AudioMixer.SynthComponent.SetSubmixSend(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x33FF470>
	char IsPlaying(); // Function AudioMixer.SynthComponent.IsPlaying(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x33FE6B0>
};

// Class AudioMixer.SubmixEffectDynamicsProcessorPreset
class USubmixEffectDynamicsProcessorPreset : public USoundEffectSubmixPreset {

public:

	struct Unknown Settings; // 0xB8 (80)

	void SetSettings(struct Unknown& Settings); // Function AudioMixer.SubmixEffectDynamicsProcessorPreset.SetSettings(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x33FEFE0>
	void SetExternalSubmix(struct Unknown Submix); // Function AudioMixer.SubmixEffectDynamicsProcessorPreset.SetExternalSubmix(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x33FEF60>
};

// Class AudioMixer.SubmixEffectSubmixEQPreset
class USubmixEffectSubmixEQPreset : public USoundEffectSubmixPreset {

public:

	struct Unknown Settings; // 0x78 (16)

	void SetSettings(struct Unknown& InSettings); // Function AudioMixer.SubmixEffectSubmixEQPreset.SetSettings(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18E17A0>
};

// Class AudioMixer.SubmixEffectReverbPreset
class USubmixEffectReverbPreset : public USoundEffectSubmixPreset {

public:

	struct Unknown Settings; // 0x9C (52)

	void SetSettingsWithReverbEffect(struct Unknown InReverbEffect, float WetLevel, float DryLevel); // Function AudioMixer.SubmixEffectReverbPreset.SetSettingsWithReverbEffect(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x33FF370>
	void SetSettings(struct Unknown& InSettings); // Function AudioMixer.SubmixEffectReverbPreset.SetSettings(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x33FF1B0>
};

// Class AudioMixer.SubmixEffectReverbFastPreset
class USubmixEffectReverbFastPreset : public USoundEffectSubmixPreset {

public:

	struct Unknown Settings; // 0xA0 (56)

	void SetSettingsWithReverbEffect(struct Unknown InReverbEffect, float WetLevel, float DryLevel); // Function AudioMixer.SubmixEffectReverbFastPreset.SetSettingsWithReverbEffect(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x33FF270>
	void SetSettings(struct Unknown& InSettings); // Function AudioMixer.SubmixEffectReverbFastPreset.SetSettings(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x33FF0F0>
};

// Class AudioMixer.SynthSound
class USynthSound : public USoundWaveProcedural {

public:

	struct Unknown OwningSynthComponent; // 0x360 (8)
};

// ScriptStruct AudioMixer.SubmixEffectDynamicsProcessorSettings
struct FSubmixEffectDynamicsProcessorSettings {
	enum class Unknow DynamicsProcessorType; // 0x0 (1)
	enum class Unknow PeakMode; // 0x1 (1)
	enum class Unknow LinkMode; // 0x2 (1)
	float InputGainDb; // 0x4 (4)
	float ThresholdDb; // 0x8 (4)
	float Ratio; // 0xC (4)
	float KneeBandwidthDb; // 0x10 (4)
	float LookAheadMsec; // 0x14 (4)
	float AttackTimeMsec; // 0x18 (4)
	float ReleaseTimeMsec; // 0x1C (4)
	struct Unknown ExternalSubmix; // 0x20 (8)
	char bChannelLinked : 0; // 0x28 (1)
	char bAnalogMode : 0; // 0x28 (1)
	char bKeyAudition : 0; // 0x28 (1)
	float KeyGainDb; // 0x2C (4)
	float OutputGainDb; // 0x30 (4)
	struct Unknown KeyHighshelf; // 0x34 (12)
	struct Unknown KeyLowshelf; // 0x40 (12)
};

// ScriptStruct AudioMixer.SubmixEffectDynamicProcessorFilterSettings
struct FSubmixEffectDynamicProcessorFilterSettings {
	char bEnabled : 0; // 0x0 (1)
	float Cutoff; // 0x4 (4)
	float GainDb; // 0x8 (4)
};

// ScriptStruct AudioMixer.SubmixEffectSubmixEQSettings
struct FSubmixEffectSubmixEQSettings {
	struct TArray<Unknown> EQBands; // 0x0 (16)
};

// ScriptStruct AudioMixer.SubmixEffectEQBand
struct FSubmixEffectEQBand {
	float Frequency; // 0x0 (4)
	float Bandwidth; // 0x4 (4)
	float GainDb; // 0x8 (4)
	char bEnabled : 0; // 0xC (1)
};

// ScriptStruct AudioMixer.SubmixEffectReverbSettings
struct FSubmixEffectReverbSettings {
	float Density; // 0x0 (4)
	float Diffusion; // 0x4 (4)
	float Gain; // 0x8 (4)
	float GainHF; // 0xC (4)
	float DecayTime; // 0x10 (4)
	float DecayHFRatio; // 0x14 (4)
	float ReflectionsGain; // 0x18 (4)
	float ReflectionsDelay; // 0x1C (4)
	float LateGain; // 0x20 (4)
	float LateDelay; // 0x24 (4)
	float AirAbsorptionGainHF; // 0x28 (4)
	float WetLevel; // 0x2C (4)
	float DryLevel; // 0x30 (4)
};

// ScriptStruct AudioMixer.SubmixEffectReverbFastSettings
struct FSubmixEffectReverbFastSettings {
	char bBypass : 0; // 0x0 (1)
	float Density; // 0x4 (4)
	float Diffusion; // 0x8 (4)
	float Gain; // 0xC (4)
	float GainHF; // 0x10 (4)
	float DecayTime; // 0x14 (4)
	float DecayHFRatio; // 0x18 (4)
	float ReflectionsGain; // 0x1C (4)
	float ReflectionsDelay; // 0x20 (4)
	float LateGain; // 0x24 (4)
	float LateDelay; // 0x28 (4)
	float AirAbsorptionGainHF; // 0x2C (4)
	float WetLevel; // 0x30 (4)
	float DryLevel; // 0x34 (4)
};

