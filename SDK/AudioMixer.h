// Enum AudioMixer.EAudioSpectrumType
enum class EAudioSpectrumType : uint8 {
	EAudioSpectrumType = 0,
	EAudioSpectrumType = 1,
	EAudioSpectrumType = 2
};

// Enum AudioMixer.EFFTWindowType
enum class EFFTWindowType : uint8 {
	EFFTWindowType = 0,
	EFFTWindowType = 1,
	EFFTWindowType = 2,
	EFFTWindowType = 3,
	EFFTWindowType = 4
};

// Enum AudioMixer.EFFTPeakInterpolationMethod
enum class EFFTPeakInterpolationMethod : uint8 {
	EFFTPeakInterpolationMethod = 0,
	EFFTPeakInterpolationMethod = 1,
	EFFTPeakInterpolationMethod = 2,
	EFFTPeakInterpolationMethod = 3
};

// Enum AudioMixer.EFFTSize
enum class EFFTSize : uint8 {
	EFFTSize = 0,
	EFFTSize = 1,
	EFFTSize = 2,
	EFFTSize = 3,
	EFFTSize = 4,
	EFFTSize = 5
};

// Enum AudioMixer.ESub
enum class ESubd : uint8 {
	ESub = 0,
	ESubd = 1,
	ESubd = 2,
	ESubd = 3,
	ESubd = 4
};

// Enum AudioMixer.ESub
enum class ESubd : uint8 {
	ESub = 0,
	ESubd = 1,
	ESubd = 2,
	ESubd = 3,
	ESubd = 4
};

// Enum AudioMixer.ESub
enum class ESubd : uint8 {
	ESub = 0,
	ESubd = 1,
	ESubd = 2,
	ESubd = 3,
	ESubd = 4,
	ESubd = 5
};

// Class AudioMixer.SynthComponent
struct USynthComponent : USceneComponent {
	char bAutoDestroy; //  0x238 Size(1)
	char bStopWhenOwnerDestroyed; //  0x238 Size(1)
	char bAllowSpatialization; //  0x238 Size(1)
	char bOverrideAttenuation; //  0x238 Size(1)
	char bOutputToBusOnly; //  0x23c Size(1)
	Unknown AttenuationSettings; //  0x240 Size(8)
	Unknown AttenuationOverrides; //  0x248 Size(3a0)
	Unknown ConcurrencySettings; //  0x5e8 Size(8)
	Unknown ConcurrencySet; //  0x5f0 Size(50)
	Unknown SoundClass; //  0x640 Size(8)
	Unknown SourceEffectChain; //  0x648 Size(8)
	Unknown SoundSubmix; //  0x650 Size(8)
	Unknown SoundSubmixSends; //  0x658 Size(10)
	Unknown BusSends; //  0x668 Size(10)
	Unknown Modulation; //  0x678 Size(10)
	Unknown PreEffectBusSends; //  0x688 Size(10)
	char bIsUISound; //  0x698 Size(1)
	char bIsPreviewSound; //  0x698 Size(1)
	int32_t EnvelopeFollowerAttackTime; //  0x69c Size(4)
	int32_t EnvelopeFollowerReleaseTime; //  0x6a0 Size(4)
	struct FMulticastInlineDelegate OnAudioEnvelopeValue; //  0x6a8 Size(10)
	Unknown Synth; //  0x6d8 Size(8)
	Unknown AudioComponent; //  0x6e0 Size(8)

	void Stop(); // Function AudioMixer.SynthComponent.Stop(Final|Native|Public|BlueprintCallable) // <Game+0x33f3020>
};

// Class AudioMixer.SubmixEffectDynamicsProcessorPreset
struct USubmixEffectDynamicsProcessorPreset : USoundEffectSubmixPreset {
	Unknown Settings; //  0xb8 Size(50)

	void SetSettings(Unknown& Settings); // Function AudioMixer.SubmixEffectDynamicsProcessorPreset.SetSettings(Final|Native|Public|HasOutParms|BlueprintCallable) // <Game+0x33f2760>
};

// Class AudioMixer.SubmixEffectSubmixEQPreset
struct USubmixEffectSubmixEQPreset : USoundEffectSubmixPreset {
	Unknown Settings; //  0x78 Size(10)

	void SetSettings(Unknown& InSettings); // Function AudioMixer.SubmixEffectSubmixEQPreset.SetSettings(Final|Native|Public|HasOutParms|BlueprintCallable) // <Game+0x18df450>
};

// Class AudioMixer.SubmixEffectReverbPreset
struct USubmixEffectReverbPreset : USoundEffectSubmixPreset {
	Unknown Settings; //  0x9c Size(34)

	void SetSettingsWithReverbEffect(Unknown InReverbEffect, float WetLevel, float DryLevel); // Function AudioMixer.SubmixEffectReverbPreset.SetSettingsWithReverbEffect(Final|Native|Public|BlueprintCallable) // <Game+0x33f2af0>
};

// Class AudioMixer.SubmixEffectReverbFastPreset
struct USubmixEffectReverbFastPreset : USoundEffectSubmixPreset {
	Unknown Settings; //  0xa0 Size(38)

	void SetSettingsWithReverbEffect(Unknown InReverbEffect, float WetLevel, float DryLevel); // Function AudioMixer.SubmixEffectReverbFastPreset.SetSettingsWithReverbEffect(Final|Native|Public|BlueprintCallable) // <Game+0x33f29f0>
};

// Class AudioMixer.SynthSound
struct USynthSound : USoundWaveProcedural {
	Unknown OwningSynthComponent; //  0x360 Size(8)
};

