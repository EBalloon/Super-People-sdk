// Enum AudioMixer.EAudioSpectrumType
enum class EAudioSpectrumType : uint8 {
	EAudioSpectrumType = 0
	EAudioSpectrumType = 1
	EAudioSpectrumType = 2
};

// Enum AudioMixer.EFFTWindowType
enum class EFFTWindowType : uint8 {
	EFFTWindowType = 0
	EFFTWindowType = 1
	EFFTWindowType = 2
	EFFTWindowType = 3
	EFFTWindowType = 4
};

// Enum AudioMixer.EFFTPeakInterpolationMethod
enum class EFFTPeakInterpolationMethod : uint8 {
	EFFTPeakInterpolationMethod = 0
	EFFTPeakInterpolationMethod = 1
	EFFTPeakInterpolationMethod = 2
	EFFTPeakInterpolationMethod = 3
};

// Enum AudioMixer.EFFTSize
enum class EFFTSize : uint8 {
	EFFTSize = 0
	EFFTSize = 1
	EFFTSize = 2
	EFFTSize = 3
	EFFTSize = 4
	EFFTSize = 5
};

// Enum AudioMixer.ESubmixEffectDynamicsChannelLinkMode
enum class ESubmixEffectDynamicsChannelLinkMode : uint8 {
	ESubmixEffectDynamicsChannelLinkMode = 0
	ESubmixEffectDynamicsChannelLinkMode = 1
	ESubmixEffectDynamicsChannelLinkMode = 2
	ESubmixEffectDynamicsChannelLinkMode = 3
	ESubmixEffectDynamicsChannelLinkMode = 4
};

// Enum AudioMixer.ESubmixEffectDynamicsPeakMode
enum class ESubmixEffectDynamicsPeakMode : uint8 {
	ESubmixEffectDynamicsPeakMode = 0
	ESubmixEffectDynamicsPeakMode = 1
	ESubmixEffectDynamicsPeakMode = 2
	ESubmixEffectDynamicsPeakMode = 3
	ESubmixEffectDynamicsPeakMode = 4
};

// Enum AudioMixer.ESubmixEffectDynamicsProcessorType
enum class ESubmixEffectDynamicsProcessorType : uint8 {
	ESubmixEffectDynamicsProcessorType = 0
	ESubmixEffectDynamicsProcessorType = 1
	ESubmixEffectDynamicsProcessorType = 2
	ESubmixEffectDynamicsProcessorType = 3
	ESubmixEffectDynamicsProcessorType = 4
	ESubmixEffectDynamicsProcessorType = 5
};

// Class AudioMixer.SynthComponent
struct USynthComponent : USceneComponent {
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

	void Stop(); // Function AudioMixer.SynthComponent.Stop(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x33FE5A0>
	void Start(); // Function AudioMixer.SynthComponent.Start(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x33FE2C0>
	void SetVolumeMultiplier(float VolumeMultiplier); // Function AudioMixer.SynthComponent.SetVolumeMultiplier(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x33FE240>
	void SetSubmixSend(struct Unknown Submix, float SendLevel); // Function AudioMixer.SynthComponent.SetSubmixSend(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x33FE170>
	char IsPlaying(); // Function AudioMixer.SynthComponent.IsPlaying(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x33FD3B0>
};

// Class AudioMixer.SubmixEffectDynamicsProcessorPreset
struct USubmixEffectDynamicsProcessorPreset : USoundEffectSubmixPreset {
	struct Unknown Settings; // 0xB8 (80)

	void SetSettings(struct Unknown& Settings); // Function AudioMixer.SubmixEffectDynamicsProcessorPreset.SetSettings(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x33FDCE0>
	void SetExternalSubmix(struct Unknown Submix); // Function AudioMixer.SubmixEffectDynamicsProcessorPreset.SetExternalSubmix(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x33FDC60>
};

// Class AudioMixer.SubmixEffectSubmixEQPreset
struct USubmixEffectSubmixEQPreset : USoundEffectSubmixPreset {
	struct Unknown Settings; // 0x78 (16)

	void SetSettings(struct Unknown& InSettings); // Function AudioMixer.SubmixEffectSubmixEQPreset.SetSettings(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18E0330>
};

// Class AudioMixer.SubmixEffectReverbPreset
struct USubmixEffectReverbPreset : USoundEffectSubmixPreset {
	struct Unknown Settings; // 0x9C (52)

	void SetSettingsWithReverbEffect(struct Unknown InReverbEffect, float WetLevel, float DryLevel); // Function AudioMixer.SubmixEffectReverbPreset.SetSettingsWithReverbEffect(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x33FE070>
	void SetSettings(struct Unknown& InSettings); // Function AudioMixer.SubmixEffectReverbPreset.SetSettings(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x33FDEB0>
};

// Class AudioMixer.SubmixEffectReverbFastPreset
struct USubmixEffectReverbFastPreset : USoundEffectSubmixPreset {
	struct Unknown Settings; // 0xA0 (56)

	void SetSettingsWithReverbEffect(struct Unknown InReverbEffect, float WetLevel, float DryLevel); // Function AudioMixer.SubmixEffectReverbFastPreset.SetSettingsWithReverbEffect(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x33FDF70>
	void SetSettings(struct Unknown& InSettings); // Function AudioMixer.SubmixEffectReverbFastPreset.SetSettings(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x33FDDF0>
};

// Class AudioMixer.SynthSound
struct USynthSound : USoundWaveProcedural {
	struct Unknown OwningSynthComponent; // 0x360 (8)
};

