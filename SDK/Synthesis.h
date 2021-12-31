// Enum Synthesis.ESynth1PatchDestination
enum class ESynth1PatchDestination : uint8_t {
	Osc1Gain = 0,
	Osc1Frequency = 1,
	Osc1Pulsewidth = 2,
	Osc2Gain = 3,
	Osc2Frequency = 4,
	Osc2Pulsewidth = 5,
	FilterFrequency = 6,
	FilterQ = 7,
	Gain = 8,
	Pan = 9,
	LFO1Frequency = 10,
	LFO1Gain = 11,
	LFO2Frequency = 12,
	LFO2Gain = 13,
	Count = 14,
	ESynth1PatchDestination_MAX = 15,
};

// Enum Synthesis.ESynth1PatchSource
enum class ESynth1PatchSource : uint8_t {
	LFO1 = 0,
	LFO2 = 1,
	Envelope = 2,
	BiasEnvelope = 3,
	Count = 4,
	ESynth1PatchSource_MAX = 5,
};

// Enum Synthesis.ESynthStereoDelayMode
enum class ESynthStereoDelayMode : uint8_t {
	Normal = 0,
	Cross = 1,
	PingPong = 2,
	Count = 3,
	ESynthStereoDelayMode_MAX = 4,
};

// Enum Synthesis.ESynthFilterAlgorithm
enum class ESynthFilterAlgorithm : uint8_t {
	OnePole = 0,
	StateVariable = 1,
	Ladder = 2,
	Count = 3,
	ESynthFilterAlgorithm_MAX = 4,
};

// Enum Synthesis.ESynthFilterType
enum class ESynthFilterType : uint8_t {
	LowPass = 0,
	HighPass = 1,
	BandPass = 2,
	BandStop = 3,
	Count = 4,
	ESynthFilterType_MAX = 5,
};

// Enum Synthesis.ESynthModEnvBiasPatch
enum class ESynthModEnvBiasPatch : uint8_t {
	PatchToNone = 0,
	PatchToOscFreq = 1,
	PatchToFilterFreq = 2,
	PatchToFilterQ = 3,
	PatchToLFO1Gain = 4,
	PatchToLFO2Gain = 5,
	PatchToLFO1Freq = 6,
	PatchToLFO2Freq = 7,
	Count = 8,
	ESynthModEnvBiasPatch_MAX = 9,
};

// Enum Synthesis.ESynthModEnvPatch
enum class ESynthModEnvPatch : uint8_t {
	PatchToNone = 0,
	PatchToOscFreq = 1,
	PatchToFilterFreq = 2,
	PatchToFilterQ = 3,
	PatchToLFO1Gain = 4,
	PatchToLFO2Gain = 5,
	PatchToLFO1Freq = 6,
	PatchToLFO2Freq = 7,
	Count = 8,
	ESynthModEnvPatch_MAX = 9,
};

// Enum Synthesis.ESynthLFOPatchType
enum class ESynthLFOPatchType : uint8_t {
	PatchToNone = 0,
	PatchToGain = 1,
	PatchToOscFreq = 2,
	PatchToFilterFreq = 3,
	PatchToFilterQ = 4,
	PatchToOscPulseWidth = 5,
	PatchToOscPan = 6,
	PatchLFO1ToLFO2Frequency = 7,
	PatchLFO1ToLFO2Gain = 8,
	Count = 9,
	ESynthLFOPatchType_MAX = 10,
};

// Enum Synthesis.ESynthLFOMode
enum class ESynthLFOMode : uint8_t {
	Sync = 0,
	OneShot = 1,
	Free = 2,
	Count = 3,
	ESynthLFOMode_MAX = 4,
};

// Enum Synthesis.ESynthLFOType
enum class ESynthLFOType : uint8_t {
	Sine = 0,
	UpSaw = 1,
	DownSaw = 2,
	Square = 3,
	Triangle = 4,
	Exponential = 5,
	RandomSampleHold = 6,
	Count = 7,
	ESynthLFOType_MAX = 8,
};

// Enum Synthesis.ESynth1OscType
enum class ESynth1OscType : uint8_t {
	Sine = 0,
	Saw = 1,
	Triangle = 2,
	Square = 3,
	Noise = 4,
	Count = 5,
	ESynth1OscType_MAX = 6,
};

// Enum Synthesis.ESourceEffectDynamicsPeakMode
enum class ESourceEffectDynamicsPeakMode : uint8_t {
	MeanSquared = 0,
	RootMeanSquared = 1,
	Peak = 2,
	Count = 3,
	ESourceEffectDynamicsPeakMode_MAX = 4,
};

// Enum Synthesis.ESourceEffectDynamicsProcessorType
enum class ESourceEffectDynamicsProcessorType : uint8_t {
	Compressor = 0,
	Limiter = 1,
	Expander = 2,
	Gate = 3,
	Count = 4,
	ESourceEffectDynamicsProcessorType_MAX = 5,
};

// Enum Synthesis.EEnvelopeFollowerPeakMode
enum class EEnvelopeFollowerPeakMode : uint8_t {
	MeanSquared = 0,
	RootMeanSquared = 1,
	Peak = 2,
	Count = 3,
	EEnvelopeFollowerPeakMode_MAX = 4,
};

// Enum Synthesis.ESourceEffectFilterType
enum class ESourceEffectFilterType : uint8_t {
	LowPass = 0,
	HighPass = 1,
	BandPass = 2,
	BandStop = 3,
	Count = 4,
	ESourceEffectFilterType_MAX = 5,
};

// Enum Synthesis.ESourceEffectFilterCircuit
enum class ESourceEffectFilterCircuit : uint8_t {
	OnePole = 0,
	StateVariable = 1,
	Ladder = 2,
	Count = 3,
	ESourceEffectFilterCircuit_MAX = 4,
};

// Enum Synthesis.EStereoChannelMode
enum class EStereoChannelMode : uint8_t {
	MidSide = 0,
	LeftRight = 1,
	count = 2,
	EStereoChannelMode_MAX = 3,
};

// Enum Synthesis.EPhaserLFOType
enum class EPhaserLFOType : uint8_t {
	Sine = 0,
	UpSaw = 1,
	DownSaw = 2,
	Square = 3,
	Triangle = 4,
	Exponential = 5,
	RandomSampleHold = 6,
	Count = 7,
	EPhaserLFOType_MAX = 8,
};

// Enum Synthesis.ERingModulatorTypeSourceEffect
enum class ERingModulatorTypeSourceEffect : uint8_t {
	Sine = 0,
	Saw = 1,
	Triangle = 2,
	Square = 3,
	Count = 4,
	ERingModulatorTypeSourceEffect_MAX = 5,
};

// Enum Synthesis.EStereoDelaySourceEffect
enum class EStereoDelaySourceEffect : uint8_t {
	Normal = 0,
	Cross = 1,
	PingPong = 2,
	Count = 3,
	EStereoDelaySourceEffect_MAX = 4,
};

// Enum Synthesis.ESubmixEffectConvolutionReverbBlockSize
enum class ESubmixEffectConvolutionReverbBlockSize : uint8_t {
	BlockSize256 = 0,
	BlockSize512 = 1,
	BlockSize1024 = 2,
	ESubmixEffectConvolutionReverbBlockSize_MAX = 3,
};

// Enum Synthesis.ESubmixFilterAlgorithm
enum class ESubmixFilterAlgorithm : uint8_t {
	OnePole = 0,
	StateVariable = 1,
	Ladder = 2,
	Count = 3,
	ESubmixFilterAlgorithm_MAX = 4,
};

// Enum Synthesis.ESubmixFilterType
enum class ESubmixFilterType : uint8_t {
	LowPass = 0,
	HighPass = 1,
	BandPass = 2,
	BandStop = 3,
	Count = 4,
	ESubmixFilterType_MAX = 5,
};

// Enum Synthesis.ETapLineMode
enum class ETapLineMode : uint8_t {
	SendToChannel = 0,
	Panning = 1,
	Disabled = 2,
	ETapLineMode_MAX = 3,
};

// Enum Synthesis.EGranularSynthSeekType
enum class EGranularSynthSeekType : uint8_t {
	FromBeginning = 0,
	FromCurrentPosition = 1,
	Count = 2,
	EGranularSynthSeekType_MAX = 3,
};

// Enum Synthesis.EGranularSynthEnvelopeType
enum class EGranularSynthEnvelopeType : uint8_t {
	Rectangular = 0,
	Triangle = 1,
	DownwardTriangle = 2,
	UpwardTriangle = 3,
	ExponentialDecay = 4,
	ExponentialIncrease = 5,
	Gaussian = 6,
	Hanning = 7,
	Lanczos = 8,
	Cosine = 9,
	CosineSquared = 10,
	Welch = 11,
	Blackman = 12,
	BlackmanHarris = 13,
	Count = 14,
	EGranularSynthEnvelopeType_MAX = 15,
};

// Enum Synthesis.CurveInterpolationType
enum class CurveInterpolationType : uint8_t {
	AUTOINTERP = 0,
	LINEAR = 1,
	CONSTANT = 2,
	CurveInterpolationType_MAX = 3,
};

// Enum Synthesis.ESamplePlayerSeekType
enum class ESamplePlayerSeekType : uint8_t {
	FromBeginning = 0,
	FromCurrentPosition = 1,
	FromEnd = 2,
	Count = 3,
	ESamplePlayerSeekType_MAX = 4,
};

// Enum Synthesis.ESynthKnobSize
enum class ESynthKnobSize : uint8_t {
	Medium = 0,
	Large = 1,
	Count = 2,
	ESynthKnobSize_MAX = 3,
};

// Enum Synthesis.ESynthSlateColorStyle
enum class ESynthSlateColorStyle : uint8_t {
	Light = 0,
	Dark = 1,
	Count = 2,
	ESynthSlateColorStyle_MAX = 3,
};

// Enum Synthesis.ESynthSlateSizeType
enum class ESynthSlateSizeType : uint8_t {
	Small = 0,
	Medium = 1,
	Large = 2,
	Count = 3,
	ESynthSlateSizeType_MAX = 4,
};

// Class Synthesis.ModularSynthPresetBank
class UModularSynthPresetBank : public Object {

public:

	struct TArray<Unknown> Presets; // 0x28 (16)
};

// Class Synthesis.ModularSynthComponent
class UModularSynthComponent : public USynthComponent {

public:

	int32_t VoiceCount; // 0x710 (4)

	void SetSynthPreset(struct Unknown& SynthPreset); // Function Synthesis.ModularSynthComponent.SetSynthPreset(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18E6B30>
	void SetSustainGain(float SustainGain); // Function Synthesis.ModularSynthComponent.SetSustainGain(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18E6AB0>
	void SetStereoDelayWetlevel(float DelayWetlevel); // Function Synthesis.ModularSynthComponent.SetStereoDelayWetlevel(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18E6A30>
	void SetStereoDelayTime(float DelayTimeMsec); // Function Synthesis.ModularSynthComponent.SetStereoDelayTime(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18E69B0>
	void SetStereoDelayRatio(float DelayRatio); // Function Synthesis.ModularSynthComponent.SetStereoDelayRatio(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18E6930>
	void SetStereoDelayMode(enum class Unknow StereoDelayMode); // Function Synthesis.ModularSynthComponent.SetStereoDelayMode(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18E68B0>
	void SetStereoDelayIsEnabled(char StereoDelayEnabled); // Function Synthesis.ModularSynthComponent.SetStereoDelayIsEnabled(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18E6820>
	void SetStereoDelayFeedback(float DelayFeedback); // Function Synthesis.ModularSynthComponent.SetStereoDelayFeedback(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18E67A0>
	void SetSpread(float Spread); // Function Synthesis.ModularSynthComponent.SetSpread(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18E6720>
	void SetReleaseTime(float ReleaseTimeMsec); // Function Synthesis.ModularSynthComponent.SetReleaseTime(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18E66A0>
	void SetPortamento(float Portamento); // Function Synthesis.ModularSynthComponent.SetPortamento(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18E6620>
	void SetPitchBend(float PitchBend); // Function Synthesis.ModularSynthComponent.SetPitchBend(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18E65A0>
	void SetPan(float Pan); // Function Synthesis.ModularSynthComponent.SetPan(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18E6520>
	void SetOscType(int32_t OscIndex, enum class Unknow OscType); // Function Synthesis.ModularSynthComponent.SetOscType(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18E6460>
	void SetOscSync(char bIsSynced); // Function Synthesis.ModularSynthComponent.SetOscSync(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18E63D0>
	void SetOscSemitones(int32_t OscIndex, float Semitones); // Function Synthesis.ModularSynthComponent.SetOscSemitones(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18E6300>
	void SetOscPulsewidth(int32_t OscIndex, float Pulsewidth); // Function Synthesis.ModularSynthComponent.SetOscPulsewidth(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18E6230>
	void SetOscOctave(int32_t OscIndex, float Octave); // Function Synthesis.ModularSynthComponent.SetOscOctave(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18E6160>
	void SetOscGainMod(int32_t OscIndex, float OscGainMod); // Function Synthesis.ModularSynthComponent.SetOscGainMod(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18E6090>
	void SetOscGain(int32_t OscIndex, float OscGain); // Function Synthesis.ModularSynthComponent.SetOscGain(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18E5FC0>
	void SetOscFrequencyMod(int32_t OscIndex, float OscFreqMod); // Function Synthesis.ModularSynthComponent.SetOscFrequencyMod(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18E5EF0>
	void SetOscCents(int32_t OscIndex, float Cents); // Function Synthesis.ModularSynthComponent.SetOscCents(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18E5E20>
	void SetModEnvSustainGain(float SustainGain); // Function Synthesis.ModularSynthComponent.SetModEnvSustainGain(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18E5DA0>
	void SetModEnvReleaseTime(float Release); // Function Synthesis.ModularSynthComponent.SetModEnvReleaseTime(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18E5D20>
	void SetModEnvPatch(enum class Unknow InPatchType); // Function Synthesis.ModularSynthComponent.SetModEnvPatch(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18E5CA0>
	void SetModEnvInvert(char bInvert); // Function Synthesis.ModularSynthComponent.SetModEnvInvert(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18E5C10>
	void SetModEnvDepth(float Depth); // Function Synthesis.ModularSynthComponent.SetModEnvDepth(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18E5B90>
	void SetModEnvDecayTime(float DecayTimeMsec); // Function Synthesis.ModularSynthComponent.SetModEnvDecayTime(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18E5B10>
	void SetModEnvBiasPatch(enum class Unknow InPatchType); // Function Synthesis.ModularSynthComponent.SetModEnvBiasPatch(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18E5A90>
	void SetModEnvBiasInvert(char bInvert); // Function Synthesis.ModularSynthComponent.SetModEnvBiasInvert(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18E5A00>
	void SetModEnvAttackTime(float AttackTimeMsec); // Function Synthesis.ModularSynthComponent.SetModEnvAttackTime(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18E5980>
	void SetLFOType(int32_t LFOIndex, enum class Unknow LFOType); // Function Synthesis.ModularSynthComponent.SetLFOType(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18E58C0>
	void SetLFOPatch(int32_t LFOIndex, enum class Unknow LFOPatchType); // Function Synthesis.ModularSynthComponent.SetLFOPatch(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18E5800>
	void SetLFOMode(int32_t LFOIndex, enum class Unknow LFOMode); // Function Synthesis.ModularSynthComponent.SetLFOMode(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18E5740>
	void SetLFOGainMod(int32_t LFOIndex, float GainMod); // Function Synthesis.ModularSynthComponent.SetLFOGainMod(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18E5670>
	void SetLFOGain(int32_t LFOIndex, float Gain); // Function Synthesis.ModularSynthComponent.SetLFOGain(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18E55A0>
	void SetLFOFrequencyMod(int32_t LFOIndex, float FrequencyModHz); // Function Synthesis.ModularSynthComponent.SetLFOFrequencyMod(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18E54D0>
	void SetLFOFrequency(int32_t LFOIndex, float FrequencyHz); // Function Synthesis.ModularSynthComponent.SetLFOFrequency(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18E5400>
	void SetGainDb(float GainDb); // Function Synthesis.ModularSynthComponent.SetGainDb(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18E5380>
	void SetFilterType(enum class Unknow FilterType); // Function Synthesis.ModularSynthComponent.SetFilterType(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18E5300>
	void SetFilterQMod(float FilterQ); // Function Synthesis.ModularSynthComponent.SetFilterQMod(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18E5280>
	void SetFilterQ(float FilterQ); // Function Synthesis.ModularSynthComponent.SetFilterQ(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18E5200>
	void SetFilterFrequencyMod(float FilterFrequencyHz); // Function Synthesis.ModularSynthComponent.SetFilterFrequencyMod(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18E5180>
	void SetFilterFrequency(float FilterFrequencyHz); // Function Synthesis.ModularSynthComponent.SetFilterFrequency(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18E5100>
	void SetFilterAlgorithm(enum class Unknow FilterAlgorithm); // Function Synthesis.ModularSynthComponent.SetFilterAlgorithm(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18E5080>
	void SetEnableUnison(char EnableUnison); // Function Synthesis.ModularSynthComponent.SetEnableUnison(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18E4FF0>
	void SetEnableRetrigger(char RetriggerEnabled); // Function Synthesis.ModularSynthComponent.SetEnableRetrigger(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18E4F60>
	void SetEnablePolyphony(char bEnablePolyphony); // Function Synthesis.ModularSynthComponent.SetEnablePolyphony(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18E4ED0>
	char SetEnablePatch(struct Unknown PatchId, char bIsEnabled); // Function Synthesis.ModularSynthComponent.SetEnablePatch(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18E4E00>
	void SetEnableLegato(char LegatoEnabled); // Function Synthesis.ModularSynthComponent.SetEnableLegato(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18E4D70>
	void SetDecayTime(float DecayTimeMsec); // Function Synthesis.ModularSynthComponent.SetDecayTime(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18E4CF0>
	void SetChorusFrequency(float Frequency); // Function Synthesis.ModularSynthComponent.SetChorusFrequency(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18E4C70>
	void SetChorusFeedback(float Feedback); // Function Synthesis.ModularSynthComponent.SetChorusFeedback(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18E4BF0>
	void SetChorusEnabled(char EnableChorus); // Function Synthesis.ModularSynthComponent.SetChorusEnabled(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18E4B60>
	void SetChorusDepth(float Depth); // Function Synthesis.ModularSynthComponent.SetChorusDepth(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18E4AE0>
	void SetAttackTime(float AttackTimeMsec); // Function Synthesis.ModularSynthComponent.SetAttackTime(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18E4A60>
	void NoteOn(float Note, int32_t Velocity, float Duration); // Function Synthesis.ModularSynthComponent.NoteOn(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18E4950>
	void NoteOff(float Note, char bAllNotesOff, char bKillAllNotes); // Function Synthesis.ModularSynthComponent.NoteOff(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18E4840>
	struct Unknown CreatePatch(enum class Unknow PatchSource, struct TArray<Unknown>& PatchCables, char bEnableByDefault); // Function Synthesis.ModularSynthComponent.CreatePatch(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18E46F0>
};

// Class Synthesis.SourceEffectBitCrusherPreset
class USourceEffectBitCrusherPreset : public USoundEffectSourcePreset {

public:

	struct Unknown Settings; // 0x70 (8)

	void SetSettings(struct Unknown& InSettings); // Function Synthesis.SourceEffectBitCrusherPreset.SetSettings(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18EE750>
};

// Class Synthesis.SourceEffectChorusPreset
class USourceEffectChorusPreset : public USoundEffectSourcePreset {

public:

	struct Unknown Settings; // 0x80 (24)

	void SetSettings(struct Unknown& InSettings); // Function Synthesis.SourceEffectChorusPreset.SetSettings(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18EE800>
};

// Class Synthesis.SourceEffectDynamicsProcessorPreset
class USourceEffectDynamicsProcessorPreset : public USoundEffectSourcePreset {

public:

	struct Unknown Settings; // 0x90 (40)

	void SetSettings(struct Unknown& InSettings); // Function Synthesis.SourceEffectDynamicsProcessorPreset.SetSettings(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18EE8B0>
};

// Class Synthesis.EnvelopeFollowerListener
class UEnvelopeFollowerListener : public UActorComponent {

public:

	struct FMulticastInlineDelegate OnEnvelopeFollowerUpdate; // 0xB0 (16)
};

// Class Synthesis.SourceEffectEnvelopeFollowerPreset
class USourceEffectEnvelopeFollowerPreset : public USoundEffectSourcePreset {

public:

	struct Unknown Settings; // 0x74 (12)

	void UnregisterEnvelopeFollowerListener(struct Unknown EnvelopeFollowerListener); // Function Synthesis.SourceEffectEnvelopeFollowerPreset.UnregisterEnvelopeFollowerListener(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18EF030>
	void SetSettings(struct Unknown& InSettings); // Function Synthesis.SourceEffectEnvelopeFollowerPreset.SetSettings(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18EEA10>
	void RegisterEnvelopeFollowerListener(struct Unknown EnvelopeFollowerListener); // Function Synthesis.SourceEffectEnvelopeFollowerPreset.RegisterEnvelopeFollowerListener(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18EE6D0>
};

// Class Synthesis.SourceEffectEQPreset
class USourceEffectEQPreset : public USoundEffectSourcePreset {

public:

	struct Unknown Settings; // 0x78 (16)

	void SetSettings(struct Unknown& InSettings); // Function Synthesis.SourceEffectEQPreset.SetSettings(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18EE960>
};

// Class Synthesis.SourceEffectFilterPreset
class USourceEffectFilterPreset : public USoundEffectSourcePreset {

public:

	struct Unknown Settings; // 0x74 (12)

	void SetSettings(struct Unknown& InSettings); // Function Synthesis.SourceEffectFilterPreset.SetSettings(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18EEAC0>
};

// Class Synthesis.SourceEffectFoldbackDistortionPreset
class USourceEffectFoldbackDistortionPreset : public USoundEffectSourcePreset {

public:

	struct Unknown Settings; // 0x74 (12)

	void SetSettings(struct Unknown& InSettings); // Function Synthesis.SourceEffectFoldbackDistortionPreset.SetSettings(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18EEB70>
};

// Class Synthesis.SourceEffectMidSideSpreaderPreset
class USourceEffectMidSideSpreaderPreset : public USoundEffectSourcePreset {

public:

	struct Unknown Settings; // 0x74 (12)

	void SetSettings(struct Unknown& InSettings); // Function Synthesis.SourceEffectMidSideSpreaderPreset.SetSettings(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18EEC20>
};

// Class Synthesis.SourceEffectPannerPreset
class USourceEffectPannerPreset : public USoundEffectSourcePreset {

public:

	struct Unknown Settings; // 0x70 (8)

	void SetSettings(struct Unknown& InSettings); // Function Synthesis.SourceEffectPannerPreset.SetSettings(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18EECD0>
};

// Class Synthesis.SourceEffectPhaserPreset
class USourceEffectPhaserPreset : public USoundEffectSourcePreset {

public:

	struct Unknown Settings; // 0x78 (16)

	void SetSettings(struct Unknown& InSettings); // Function Synthesis.SourceEffectPhaserPreset.SetSettings(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18EED80>
};

// Class Synthesis.SourceEffectRingModulationPreset
class USourceEffectRingModulationPreset : public USoundEffectSourcePreset {

public:

	struct Unknown Settings; // 0x7C (20)

	void SetSettings(struct Unknown& InSettings); // Function Synthesis.SourceEffectRingModulationPreset.SetSettings(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18EEE40>
};

// Class Synthesis.SourceEffectSimpleDelayPreset
class USourceEffectSimpleDelayPreset : public USoundEffectSourcePreset {

public:

	struct Unknown Settings; // 0x80 (24)

	void SetSettings(struct Unknown& InSettings); // Function Synthesis.SourceEffectSimpleDelayPreset.SetSettings(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18EEEE0>
};

// Class Synthesis.SourceEffectStereoDelayPreset
class USourceEffectStereoDelayPreset : public USoundEffectSourcePreset {

public:

	struct Unknown Settings; // 0x7C (20)

	void SetSettings(struct Unknown& InSettings); // Function Synthesis.SourceEffectStereoDelayPreset.SetSettings(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18EEF90>
};

// Class Synthesis.SourceEffectWaveShaperPreset
class USourceEffectWaveShaperPreset : public USoundEffectSourcePreset {

public:

	struct Unknown Settings; // 0x70 (8)

	void SetSettings(struct Unknown& InSettings); // Function Synthesis.SourceEffectWaveShaperPreset.SetSettings(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18EECD0>
};

// Class Synthesis.AudioImpulseResponse
class UAudioImpulseResponse : public Object {

public:

	struct TArray<Unknown> ImpulseResponse; // 0x28 (16)
	int32_t NumChannels; // 0x38 (4)
	int32_t SampleRate; // 0x3C (4)
	float NormalizationVolumeDb; // 0x40 (4)
	struct TArray<Unknown> IRData; // 0x48 (16)
};

// Class Synthesis.SubmixEffectConvolutionReverbPreset
class USubmixEffectConvolutionReverbPreset : public USoundEffectSubmixPreset {

public:

	struct Unknown Settings; // 0x40 (32)
	struct Unknown ImpulseResponse; // 0x60 (8)
	enum class Unknow BlockSize; // 0x68 (1)
	char bEnableHardwareAcceleration : 0; // 0x69 (1)

	void SetSettings(struct Unknown& InSettings); // Function Synthesis.SubmixEffectConvolutionReverbPreset.SetSettings(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18F4180>
	void SetImpulseResponse(struct Unknown InImpulseResponse); // Function Synthesis.SubmixEffectConvolutionReverbPreset.SetImpulseResponse(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18F3C50>
};

// Class Synthesis.SubmixEffectDelayPreset
class USubmixEffectDelayPreset : public USoundEffectSubmixPreset {

public:

	struct Unknown Settings; // 0x74 (12)
	struct Unknown DynamicSettings; // 0x80 (12)

	void SetSettings(struct Unknown& InSettings); // Function Synthesis.SubmixEffectDelayPreset.SetSettings(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18F4220>
	void SetInterpolationTime(float Time); // Function Synthesis.SubmixEffectDelayPreset.SetInterpolationTime(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18F3D60>
	void SetDelay(float Length); // Function Synthesis.SubmixEffectDelayPreset.SetDelay(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18F3450>
	float GetMaxDelayInMilliseconds(); // Function Synthesis.SubmixEffectDelayPreset.GetMaxDelayInMilliseconds(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18F2F00>
};

// Class Synthesis.SubmixEffectFilterPreset
class USubmixEffectFilterPreset : public USoundEffectSubmixPreset {

public:

	struct Unknown Settings; // 0x74 (12)

	void SetSettings(struct Unknown& InSettings); // Function Synthesis.SubmixEffectFilterPreset.SetSettings(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18F42E0>
	void SetFilterType(enum class Unknow InType); // Function Synthesis.SubmixEffectFilterPreset.SetFilterType(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18F3750>
	void SetFilterQMod(float InQ); // Function Synthesis.SubmixEffectFilterPreset.SetFilterQMod(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18F36D0>
	void SetFilterQ(float InQ); // Function Synthesis.SubmixEffectFilterPreset.SetFilterQ(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18F3650>
	void SetFilterCutoffFrequencyMod(float InFrequency); // Function Synthesis.SubmixEffectFilterPreset.SetFilterCutoffFrequencyMod(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18F35D0>
	void SetFilterCutoffFrequency(float InFrequency); // Function Synthesis.SubmixEffectFilterPreset.SetFilterCutoffFrequency(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18F3550>
	void SetFilterAlgorithm(enum class Unknow InAlgorithm); // Function Synthesis.SubmixEffectFilterPreset.SetFilterAlgorithm(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18F34D0>
};

// Class Synthesis.SubmixEffectFlexiverbPreset
class USubmixEffectFlexiverbPreset : public USoundEffectSubmixPreset {

public:

	struct Unknown Settings; // 0x78 (16)

	void SetSettings(struct Unknown& InSettings); // Function Synthesis.SubmixEffectFlexiverbPreset.SetSettings(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18F4390>
};

// Class Synthesis.SubmixEffectTapDelayPreset
class USubmixEffectTapDelayPreset : public USoundEffectSubmixPreset {

public:

	struct Unknown Settings; // 0x80 (24)

	void SetTap(int32_t TapId, struct Unknown& TapInfo); // Function Synthesis.SubmixEffectTapDelayPreset.SetTap(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18F4710>
	void SetSettings(struct Unknown& InSettings); // Function Synthesis.SubmixEffectTapDelayPreset.SetSettings(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18F4450>
	void SetInterpolationTime(float Time); // Function Synthesis.SubmixEffectTapDelayPreset.SetInterpolationTime(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18F3DE0>
	void RemoveTap(int32_t TapId); // Function Synthesis.SubmixEffectTapDelayPreset.RemoveTap(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18F3350>
	void GetTapIds(struct TArray<Unknown>& TapIds); // Function Synthesis.SubmixEffectTapDelayPreset.GetTapIds(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18F3050>
	void GetTap(int32_t TapId, struct Unknown& TapInfo); // Function Synthesis.SubmixEffectTapDelayPreset.GetTap(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18F2F70>
	float GetMaxDelayInMilliseconds(); // Function Synthesis.SubmixEffectTapDelayPreset.GetMaxDelayInMilliseconds(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18F2F20>
	void AddTap(int32_t& TapId); // Function Synthesis.SubmixEffectTapDelayPreset.AddTap(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18F2E40>
};

// Class Synthesis.Synth2DSlider
class USynth2DSlider : public UWidget {

public:

	float ValueX; // 0x108 (4)
	float ValueY; // 0x10C (4)
	struct FDelegate ValueXDelegate; // 0x110 (16)
	struct FDelegate ValueYDelegate; // 0x120 (16)
	struct Unknown WidgetStyle; // 0x130 (696)
	struct Unknown SliderHandleColor; // 0x3E8 (16)
	char IndentHandle : 0; // 0x3F8 (1)
	char Locked : 0; // 0x3F9 (1)
	float StepSize; // 0x3FC (4)
	char IsFocusable : 0; // 0x400 (1)
	struct FMulticastInlineDelegate OnMouseCaptureBegin; // 0x408 (16)
	struct FMulticastInlineDelegate OnMouseCaptureEnd; // 0x418 (16)
	struct FMulticastInlineDelegate OnControllerCaptureBegin; // 0x428 (16)
	struct FMulticastInlineDelegate OnControllerCaptureEnd; // 0x438 (16)
	struct FMulticastInlineDelegate OnValueChangedX; // 0x448 (16)
	struct FMulticastInlineDelegate OnValueChangedY; // 0x458 (16)

	void SetValue(struct Unknown InValue); // Function Synthesis.Synth2DSlider.SetValue(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18F47F0>
	void SetStepSize(float InValue); // Function Synthesis.Synth2DSlider.SetStepSize(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18F4610>
	void SetSliderHandleColor(struct Unknown InValue); // Function Synthesis.Synth2DSlider.SetSliderHandleColor(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18F4510>
	void SetLocked(char InValue); // Function Synthesis.Synth2DSlider.SetLocked(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18F3E60>
	void SetIndentHandle(char InValue); // Function Synthesis.Synth2DSlider.SetIndentHandle(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18F3CD0>
	struct Unknown GetValue(); // Function Synthesis.Synth2DSlider.GetValue(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18F3100>
};

// Class Synthesis.GranularSynth
class UGranularSynth : public USynthComponent {

public:

	struct Unknown GranulatedSoundWave; // 0x710 (8)

	void SetSustainGain(float SustainGain); // Function Synthesis.GranularSynth.SetSustainGain(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18F4690>
	void SetSoundWave(struct Unknown InSoundWave); // Function Synthesis.GranularSynth.SetSoundWave(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18F4590>
	void SetScrubMode(char bScrubMode); // Function Synthesis.GranularSynth.SetScrubMode(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18F40F0>
	void SetReleaseTimeMsec(float ReleaseTimeMsec); // Function Synthesis.GranularSynth.SetReleaseTimeMsec(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18F4070>
	void SetPlayheadTime(float InPositionSec, float LerpTimeSec, enum class Unknow SeekType); // Function Synthesis.GranularSynth.SetPlayheadTime(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18F3F70>
	void SetPlaybackSpeed(float InPlayheadRate); // Function Synthesis.GranularSynth.SetPlaybackSpeed(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18F3EF0>
	void SetGrainVolume(float BaseVolume, struct Unknown VolumeRange); // Function Synthesis.GranularSynth.SetGrainVolume(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18F3B10>
	void SetGrainsPerSecond(float InGrainsPerSecond); // Function Synthesis.GranularSynth.SetGrainsPerSecond(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18F3BD0>
	void SetGrainProbability(float InGrainProbability); // Function Synthesis.GranularSynth.SetGrainProbability(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18F3A90>
	void SetGrainPitch(float BasePitch, struct Unknown PitchRange); // Function Synthesis.GranularSynth.SetGrainPitch(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18F39D0>
	void SetGrainPan(float BasePan, struct Unknown PanRange); // Function Synthesis.GranularSynth.SetGrainPan(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18F3910>
	void SetGrainEnvelopeType(enum class Unknow EnvelopeType); // Function Synthesis.GranularSynth.SetGrainEnvelopeType(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18F3890>
	void SetGrainDuration(float BaseDurationMsec, struct Unknown DurationRange); // Function Synthesis.GranularSynth.SetGrainDuration(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18F37D0>
	void SetDecayTime(float DecayTimeMsec); // Function Synthesis.GranularSynth.SetDecayTime(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18F33D0>
	void SetAttackTime(float AttackTimeMsec); // Function Synthesis.GranularSynth.SetAttackTime(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18F33D0>
	void NoteOn(float Note, int32_t Velocity, float Duration); // Function Synthesis.GranularSynth.NoteOn(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18F3240>
	void NoteOff(float Note, char bKill); // Function Synthesis.GranularSynth.NoteOff(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18F3170>
	char IsLoaded(); // Function Synthesis.GranularSynth.IsLoaded(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18F3140>
	float GetSampleDuration(); // Function Synthesis.GranularSynth.GetSampleDuration(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18F2F40>
	float GetCurrentPlayheadTime(); // Function Synthesis.GranularSynth.GetCurrentPlayheadTime(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18F2ED0>
};

// Class Synthesis.MonoWaveTableSynthPreset
class UMonoWaveTableSynthPreset : public Object {

public:

	struct FString PresetName; // 0x28 (16)
	char bLockKeyframesToGridBool : 0; // 0x38 (1)
	int32_t LockKeyframesToGrid; // 0x3C (4)
	int32_t WaveTableResolution; // 0x40 (4)
	struct TArray<Unknown> WaveTable; // 0x48 (16)
	char bNormalizeWaveTables : 0; // 0x58 (1)
};

// Class Synthesis.SynthComponentMonoWaveTable
class USynthComponentMonoWaveTable : public USynthComponent {

public:

	struct FMulticastInlineDelegate OnTableAltered; // 0x710 (16)
	struct FMulticastInlineDelegate OnNumTablesChanged; // 0x720 (16)
	struct Unknown CurrentPreset; // 0x730 (8)

	void SetWaveTablePosition(float InPosition); // Function Synthesis.SynthComponentMonoWaveTable.SetWaveTablePosition(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18F7E70>
	void SetSustainPedalState(char InSustainPedalState); // Function Synthesis.SynthComponentMonoWaveTable.SetSustainPedalState(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18F7D60>
	void SetPosLfoType(enum class Unknow InLfoType); // Function Synthesis.SynthComponentMonoWaveTable.SetPosLfoType(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18F76B0>
	void SetPosLfoFrequency(float InLfoFrequency); // Function Synthesis.SynthComponentMonoWaveTable.SetPosLfoFrequency(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18F7630>
	void SetPosLfoDepth(float InLfoDepth); // Function Synthesis.SynthComponentMonoWaveTable.SetPosLfoDepth(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18F75B0>
	void SetPositionEnvelopeSustainGain(float InSustainGain); // Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeSustainGain(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18F7AD0>
	void SetPositionEnvelopeReleaseTime(float InReleaseTimeMsec); // Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeReleaseTime(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18F7A50>
	void SetPositionEnvelopeInvert(char bInInvert); // Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeInvert(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18F79C0>
	void SetPositionEnvelopeDepth(float InDepth); // Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeDepth(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18F7940>
	void SetPositionEnvelopeDecayTime(float InDecayTimeMsec); // Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeDecayTime(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18F78C0>
	void SetPositionEnvelopeBiasInvert(char bInBiasInvert); // Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeBiasInvert(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18F7830>
	void SetPositionEnvelopeBiasDepth(float InDepth); // Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeBiasDepth(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18F77B0>
	void SetPositionEnvelopeAttackTime(float InAttackTimeMsec); // Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeAttackTime(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18F7730>
	void SetLowPassFilterResonance(float InNewQ); // Function Synthesis.SynthComponentMonoWaveTable.SetLowPassFilterResonance(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18F7470>
	void SetLowPassFilterFrequency(float InNewFrequency); // Function Synthesis.SynthComponentMonoWaveTable.SetLowPassFilterFrequency(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18F73F0>
	void SetFrequencyWithMidiNote(float InMidiNote); // Function Synthesis.SynthComponentMonoWaveTable.SetFrequencyWithMidiNote(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18F72E0>
	void SetFrequencyPitchBend(float FrequencyOffsetCents); // Function Synthesis.SynthComponentMonoWaveTable.SetFrequencyPitchBend(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18F7260>
	void SetFrequency(float FrequencyHz); // Function Synthesis.SynthComponentMonoWaveTable.SetFrequency(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18F71E0>
	void SetFilterEnvelopeSustainGain(float InSustainGain); // Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeSustainGain(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18F70E0>
	void SetFilterEnvelopeReleaseTime(float InReleaseTimeMsec); // Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeReleaseTime(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18F7060>
	void SetFilterEnvelopenDecayTime(float InDecayTimeMsec); // Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopenDecayTime(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18F7160>
	void SetFilterEnvelopeInvert(char bInInvert); // Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeInvert(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18F6FD0>
	void SetFilterEnvelopeDepth(float InDepth); // Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeDepth(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18F6F50>
	void SetFilterEnvelopeBiasInvert(char bInBiasInvert); // Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeBiasInvert(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18F6EC0>
	void SetFilterEnvelopeBiasDepth(float InDepth); // Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeBiasDepth(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18F6E40>
	void SetFilterEnvelopeAttackTime(float InAttackTimeMsec); // Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeAttackTime(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18F6DC0>
	char SetCurveValue(int32_t TableIndex, int32_t KeyframeIndex, float NewValue); // Function Synthesis.SynthComponentMonoWaveTable.SetCurveValue(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18F6CC0>
	char SetCurveTangent(int32_t TableIndex, float InNewTangent); // Function Synthesis.SynthComponentMonoWaveTable.SetCurveTangent(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18F6BF0>
	char SetCurveInterpolationType(enum class Unknow InterpolationType, int32_t TableIndex); // Function Synthesis.SynthComponentMonoWaveTable.SetCurveInterpolationType(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18F6B30>
	void SetAmpEnvelopeSustainGain(float InSustainGain); // Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeSustainGain(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18F6AB0>
	void SetAmpEnvelopeReleaseTime(float InReleaseTimeMsec); // Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeReleaseTime(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18F6A30>
	void SetAmpEnvelopeInvert(char bInInvert); // Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeInvert(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18F69A0>
	void SetAmpEnvelopeDepth(float InDepth); // Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeDepth(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18F6920>
	void SetAmpEnvelopeDecayTime(float InDecayTimeMsec); // Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeDecayTime(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18F68A0>
	void SetAmpEnvelopeBiasInvert(char bInBiasInvert); // Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeBiasInvert(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18F6810>
	void SetAmpEnvelopeBiasDepth(float InDepth); // Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeBiasDepth(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18F6790>
	void SetAmpEnvelopeAttackTime(float InAttackTimeMsec); // Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeAttackTime(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18F6710>
	void RefreshWaveTable(int32_t Index); // Function Synthesis.SynthComponentMonoWaveTable.RefreshWaveTable(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18F6580>
	void RefreshAllWaveTables(); // Function Synthesis.SynthComponentMonoWaveTable.RefreshAllWaveTables(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18F6560>
	void NoteOn(float InMidiNote, float InVelocity); // Function Synthesis.SynthComponentMonoWaveTable.NoteOn(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18F64A0>
	void NoteOff(float InMidiNote); // Function Synthesis.SynthComponentMonoWaveTable.NoteOff(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18F6420>
	int32_t GetNumTableEntries(); // Function Synthesis.SynthComponentMonoWaveTable.GetNumTableEntries(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18F6360>
	int32_t GetMaxTableIndex(); // Function Synthesis.SynthComponentMonoWaveTable.GetMaxTableIndex(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18F6320>
	struct TArray<Unknown> GetKeyFrameValuesForTable(float TableIndex); // Function Synthesis.SynthComponentMonoWaveTable.GetKeyFrameValuesForTable(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18F6240>
	float GetCurveTangent(int32_t TableIndex); // Function Synthesis.SynthComponentMonoWaveTable.GetCurveTangent(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18F61B0>
};

// Class Synthesis.SynthSamplePlayer
class USynthSamplePlayer : public USynthComponent {

public:

	struct Unknown SoundWave; // 0x710 (8)
	struct FMulticastInlineDelegate OnSampleLoaded; // 0x718 (16)
	struct FMulticastInlineDelegate OnSamplePlaybackProgress; // 0x728 (16)

	void SetSoundWave(struct Unknown InSoundWave); // Function Synthesis.SynthSamplePlayer.SetSoundWave(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18F7C60>
	void SetScrubTimeWidth(float InScrubTimeWidthSec); // Function Synthesis.SynthSamplePlayer.SetScrubTimeWidth(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18F7BE0>
	void SetScrubMode(char bScrubMode); // Function Synthesis.SynthSamplePlayer.SetScrubMode(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18F7B50>
	void SetPitch(float InPitch, float TimeSec); // Function Synthesis.SynthSamplePlayer.SetPitch(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18F74F0>
	void SeekToTime(float TimeSec, enum class Unknow SeekType, char bWrap); // Function Synthesis.SynthSamplePlayer.SeekToTime(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18F6600>
	char IsLoaded(); // Function Synthesis.SynthSamplePlayer.IsLoaded(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18F63F0>
	float GetSampleDuration(); // Function Synthesis.SynthSamplePlayer.GetSampleDuration(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18F6390>
	float GetCurrentPlaybackProgressTime(); // Function Synthesis.SynthSamplePlayer.GetCurrentPlaybackProgressTime(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18F6180>
	float GetCurrentPlaybackProgressPercent(); // Function Synthesis.SynthSamplePlayer.GetCurrentPlaybackProgressPercent(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18F6150>
};

// Class Synthesis.SynthKnob
class USynthKnob : public UWidget {

public:

	float Value; // 0x108 (4)
	float StepSize; // 0x10C (4)
	float MouseSpeed; // 0x110 (4)
	float MouseFineTuneSpeed; // 0x114 (4)
	char ShowTooltipInfo : 0; // 0x118 (1)
	struct FText ParameterName; // 0x120 (24)
	struct FText ParameterUnits; // 0x138 (24)
	struct FDelegate ValueDelegate; // 0x150 (16)
	struct Unknown WidgetStyle; // 0x160 (568)
	char Locked : 0; // 0x398 (1)
	char IsFocusable : 0; // 0x399 (1)
	struct FMulticastInlineDelegate OnMouseCaptureBegin; // 0x3A0 (16)
	struct FMulticastInlineDelegate OnMouseCaptureEnd; // 0x3B0 (16)
	struct FMulticastInlineDelegate OnControllerCaptureBegin; // 0x3C0 (16)
	struct FMulticastInlineDelegate OnControllerCaptureEnd; // 0x3D0 (16)
	struct FMulticastInlineDelegate OnValueChanged; // 0x3E0 (16)

	void SetValue(float InValue); // Function Synthesis.SynthKnob.SetValue(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18F7DF0>
	void SetStepSize(float InValue); // Function Synthesis.SynthKnob.SetStepSize(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18F7CE0>
	void SetLocked(char InValue); // Function Synthesis.SynthKnob.SetLocked(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18F7360>
	float GetValue(); // Function Synthesis.SynthKnob.GetValue(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18F63C0>
};

// ScriptStruct Synthesis.ModularSynthPresetBankEntry
struct FModularSynthPresetBankEntry {
	struct FString PresetName; // 0x0 (16)
	struct Unknown Preset; // 0x10 (224)
};

// ScriptStruct Synthesis.ModularSynthPreset
struct FModularSynthPreset : FTableRowBase {
	char bEnablePolyphony : 0; // 0x8 (1)
	enum class Unknow Osc1Type; // 0xC (1)
	float Osc1Gain; // 0x10 (4)
	float Osc1Octave; // 0x14 (4)
	float Osc1Semitones; // 0x18 (4)
	float Osc1Cents; // 0x1C (4)
	float Osc1PulseWidth; // 0x20 (4)
	enum class Unknow Osc2Type; // 0x24 (1)
	float Osc2Gain; // 0x28 (4)
	float Osc2Octave; // 0x2C (4)
	float Osc2Semitones; // 0x30 (4)
	float Osc2Cents; // 0x34 (4)
	float Osc2PulseWidth; // 0x38 (4)
	float Portamento; // 0x3C (4)
	char bEnableUnison : 0; // 0x40 (1)
	char bEnableOscillatorSync : 0; // 0x40 (1)
	float Spread; // 0x44 (4)
	float Pan; // 0x48 (4)
	float LFO1Frequency; // 0x4C (4)
	float LFO1Gain; // 0x50 (4)
	enum class Unknow LFO1Type; // 0x54 (1)
	enum class Unknow LFO1Mode; // 0x55 (1)
	enum class Unknow LFO1PatchType; // 0x56 (1)
	float LFO2Frequency; // 0x58 (4)
	float LFO2Gain; // 0x5C (4)
	enum class Unknow LFO2Type; // 0x60 (1)
	enum class Unknow LFO2Mode; // 0x61 (1)
	enum class Unknow LFO2PatchType; // 0x62 (1)
	float GainDb; // 0x64 (4)
	float AttackTime; // 0x68 (4)
	float DecayTime; // 0x6C (4)
	float SustainGain; // 0x70 (4)
	float ReleaseTime; // 0x74 (4)
	enum class Unknow ModEnvPatchType; // 0x78 (1)
	enum class Unknow ModEnvBiasPatchType; // 0x79 (1)
	char bInvertModulationEnvelope : 0; // 0x7C (1)
	char bInvertModulationEnvelopeBias : 0; // 0x7C (1)
	float ModulationEnvelopeDepth; // 0x80 (4)
	float ModulationEnvelopeAttackTime; // 0x84 (4)
	float ModulationEnvelopeDecayTime; // 0x88 (4)
	float ModulationEnvelopeSustainGain; // 0x8C (4)
	float ModulationEnvelopeReleaseTime; // 0x90 (4)
	char bLegato : 0; // 0x94 (1)
	char bRetrigger : 0; // 0x94 (1)
	float FilterFrequency; // 0x98 (4)
	float FilterQ; // 0x9C (4)
	enum class Unknow FilterType; // 0xA0 (1)
	enum class Unknow FilterAlgorithm; // 0xA1 (1)
	char bStereoDelayEnabled : 0; // 0xA4 (1)
	enum class Unknow StereoDelayMode; // 0xA8 (1)
	float StereoDelayTime; // 0xAC (4)
	float StereoDelayFeedback; // 0xB0 (4)
	float StereoDelayWetlevel; // 0xB4 (4)
	float StereoDelayRatio; // 0xB8 (4)
	char bChorusEnabled : 0; // 0xBC (1)
	float ChorusDepth; // 0xC0 (4)
	float ChorusFeedback; // 0xC4 (4)
	float ChorusFrequency; // 0xC8 (4)
	struct TArray<Unknown> Patches; // 0xD0 (16)
};

// ScriptStruct Synthesis.EpicSynth1Patch
struct FEpicSynth1Patch {
	enum class Unknow PatchSource; // 0x0 (1)
	struct TArray<Unknown> PatchCables; // 0x8 (16)
};

// ScriptStruct Synthesis.Synth1PatchCable
struct FSynth1PatchCable {
	float Depth; // 0x0 (4)
	enum class Unknow Destination; // 0x4 (1)
};

// ScriptStruct Synthesis.PatchId
struct FPatchId {
	int32_t ID; // 0x0 (4)
};

// ScriptStruct Synthesis.SourceEffectBitCrusherSettings
struct FSourceEffectBitCrusherSettings {
	float CrushedSampleRate; // 0x0 (4)
	float CrushedBits; // 0x4 (4)
};

// ScriptStruct Synthesis.SourceEffectChorusSettings
struct FSourceEffectChorusSettings {
	float Depth; // 0x0 (4)
	float Frequency; // 0x4 (4)
	float Feedback; // 0x8 (4)
	float WetLevel; // 0xC (4)
	float DryLevel; // 0x10 (4)
	float Spread; // 0x14 (4)
};

// ScriptStruct Synthesis.SourceEffectDynamicsProcessorSettings
struct FSourceEffectDynamicsProcessorSettings {
	enum class Unknow DynamicsProcessorType; // 0x0 (1)
	enum class Unknow PeakMode; // 0x1 (1)
	float LookAheadMsec; // 0x4 (4)
	float AttackTimeMsec; // 0x8 (4)
	float ReleaseTimeMsec; // 0xC (4)
	float ThresholdDb; // 0x10 (4)
	float Ratio; // 0x14 (4)
	float KneeBandwidthDb; // 0x18 (4)
	float InputGainDb; // 0x1C (4)
	float OutputGainDb; // 0x20 (4)
	char bStereoLinked : 0; // 0x24 (1)
	char bAnalogMode : 0; // 0x24 (1)
};

// ScriptStruct Synthesis.SourceEffectEnvelopeFollowerSettings
struct FSourceEffectEnvelopeFollowerSettings {
	float AttackTime; // 0x0 (4)
	float ReleaseTime; // 0x4 (4)
	enum class Unknow PeakMode; // 0x8 (1)
	char bIsAnalogMode : 0; // 0x9 (1)
};

// ScriptStruct Synthesis.SourceEffectEQSettings
struct FSourceEffectEQSettings {
	struct TArray<Unknown> EQBands; // 0x0 (16)
};

// ScriptStruct Synthesis.SourceEffectEQBand
struct FSourceEffectEQBand {
	float Frequency; // 0x0 (4)
	float Bandwidth; // 0x4 (4)
	float GainDb; // 0x8 (4)
	char bEnabled : 0; // 0xC (1)
};

// ScriptStruct Synthesis.SourceEffectFilterSettings
struct FSourceEffectFilterSettings {
	enum class Unknow FilterCircuit; // 0x0 (1)
	enum class Unknow FilterType; // 0x1 (1)
	float CutoffFrequency; // 0x4 (4)
	float FilterQ; // 0x8 (4)
};

// ScriptStruct Synthesis.SourceEffectFoldbackDistortionSettings
struct FSourceEffectFoldbackDistortionSettings {
	float InputGainDb; // 0x0 (4)
	float ThresholdDb; // 0x4 (4)
	float OutputGainDb; // 0x8 (4)
};

// ScriptStruct Synthesis.SourceEffectMidSideSpreaderSettings
struct FSourceEffectMidSideSpreaderSettings {
	enum class Unknow InputMode; // 0x0 (1)
	float SpreadAmount; // 0x4 (4)
	enum class Unknow OutputMode; // 0x8 (1)
	char bEqualPower : 0; // 0x9 (1)
};

// ScriptStruct Synthesis.SourceEffectPannerSettings
struct FSourceEffectPannerSettings {
	float Spread; // 0x0 (4)
	float Pan; // 0x4 (4)
};

// ScriptStruct Synthesis.SourceEffectPhaserSettings
struct FSourceEffectPhaserSettings {
	float WetLevel; // 0x0 (4)
	float Frequency; // 0x4 (4)
	float Feedback; // 0x8 (4)
	enum class Unknow LFOType; // 0xC (1)
	char UseQuadraturePhase : 0; // 0xD (1)
};

// ScriptStruct Synthesis.SourceEffectRingModulationSettings
struct FSourceEffectRingModulationSettings {
	enum class Unknow ModulatorType; // 0x0 (1)
	float Frequency; // 0x4 (4)
	float Depth; // 0x8 (4)
	float DryLevel; // 0xC (4)
	float WetLevel; // 0x10 (4)
};

// ScriptStruct Synthesis.SourceEffectSimpleDelaySettings
struct FSourceEffectSimpleDelaySettings {
	float SpeedOfSound; // 0x0 (4)
	float DelayAmount; // 0x4 (4)
	float DryAmount; // 0x8 (4)
	float WetAmount; // 0xC (4)
	float Feedback; // 0x10 (4)
	char bDelayBasedOnDistance : 0; // 0x14 (1)
};

// ScriptStruct Synthesis.SourceEffectStereoDelaySettings
struct FSourceEffectStereoDelaySettings {
	enum class Unknow DelayMode; // 0x0 (1)
	float DelayTimeMsec; // 0x4 (4)
	float Feedback; // 0x8 (4)
	float DelayRatio; // 0xC (4)
	float WetLevel; // 0x10 (4)
};

// ScriptStruct Synthesis.SourceEffectWaveShaperSettings
struct FSourceEffectWaveShaperSettings {
	float Amount; // 0x0 (4)
	float OutputGainDb; // 0x4 (4)
};

// ScriptStruct Synthesis.SubmixEffectConvolutionReverbSettings
struct FSubmixEffectConvolutionReverbSettings {
	float NormalizationVolumeDb; // 0x0 (4)
	float SurroundRearChannelBleedDb; // 0x4 (4)
	char bInvertRearChannelBleedPhase : 0; // 0x8 (1)
	char bSurroundRearChannelFlip : 0; // 0x9 (1)
	float SurroundRearChannelBleedAmount; // 0xC (4)
	struct Unknown ImpulseResponse; // 0x10 (8)
	char pad_14_0 : 5; // 0x14 (1)
	char AllowHArdwareAcceleration : 1; // 0x18 (1)
};

// ScriptStruct Synthesis.SubmixEffectDelaySettings
struct FSubmixEffectDelaySettings {
	float MaximumDelayLength; // 0x0 (4)
	float InterpolationTime; // 0x4 (4)
	float DelayLength; // 0x8 (4)
};

// ScriptStruct Synthesis.SubmixEffectFilterSettings
struct FSubmixEffectFilterSettings {
	enum class Unknow FilterType; // 0x0 (1)
	enum class Unknow FilterAlgorithm; // 0x1 (1)
	float FilterFrequency; // 0x4 (4)
	float FilterQ; // 0x8 (4)
};

// ScriptStruct Synthesis.SubmixEffectFlexiverbSettings
struct FSubmixEffectFlexiverbSettings {
	float PreDelay; // 0x0 (4)
	float DecayTime; // 0x4 (4)
	float RoomDampening; // 0x8 (4)
	int32_t Complexity; // 0xC (4)
};

// ScriptStruct Synthesis.SubmixEffectTapDelaySettings
struct FSubmixEffectTapDelaySettings {
	float MaximumDelayLength; // 0x0 (4)
	float InterpolationTime; // 0x4 (4)
	struct TArray<Unknown> Taps; // 0x8 (16)
};

// ScriptStruct Synthesis.TapDelayInfo
struct FTapDelayInfo {
	enum class Unknow TapLineMode; // 0x0 (1)
	float DelayLength; // 0x4 (4)
	float Gain; // 0x8 (4)
	int32_t OutputChannel; // 0xC (4)
	float PanInDegrees; // 0x10 (4)
	int32_t TapId; // 0x14 (4)
};

// ScriptStruct Synthesis.Synth2DSliderStyle
struct FSynth2DSliderStyle : FSlateWidgetStyle {
	struct Unknown NormalThumbImage; // 0x8 (136)
	struct Unknown DisabledThumbImage; // 0x90 (136)
	struct Unknown NormalBarImage; // 0x118 (136)
	struct Unknown DisabledBarImage; // 0x1A0 (136)
	struct Unknown BackgroundImage; // 0x228 (136)
	float BarThickness; // 0x2B0 (4)
};

// ScriptStruct Synthesis.SynthKnobStyle
struct FSynthKnobStyle : FSlateWidgetStyle {
	struct Unknown LargeKnob; // 0x8 (136)
	struct Unknown LargeKnobOverlay; // 0x90 (136)
	struct Unknown MediumKnob; // 0x118 (136)
	struct Unknown MediumKnobOverlay; // 0x1A0 (136)
	float MinValueAngle; // 0x228 (4)
	float MaxValueAngle; // 0x22C (4)
	enum class Unknow KnobSize; // 0x230 (1)
};

// ScriptStruct Synthesis.SynthSlateStyle
struct FSynthSlateStyle : FSlateWidgetStyle {
	enum class Unknow SizeType; // 0x8 (1)
	enum class Unknow ColorStyle; // 0x9 (1)
};

// Function Synthesis.ModularSynthComponent.SetSynthPreset
inline void UModularSynthComponent::SetSynthPreset(struct Unknown& SynthPreset) {
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetSynthPreset");

	struct SetSynthPreset_Params {
		struct Unknown& SynthPreset;
	}; SetSynthPreset_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	SynthPreset = Params.SynthPreset;

}

// Function Synthesis.ModularSynthComponent.SetSustainGain
inline void UModularSynthComponent::SetSustainGain(float SustainGain) {
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetSustainGain");

	struct SetSustainGain_Params {
		float SustainGain;
	}; SetSustainGain_Params Params;

	Params.SustainGain = SustainGain;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Synthesis.ModularSynthComponent.SetStereoDelayWetlevel
inline void UModularSynthComponent::SetStereoDelayWetlevel(float DelayWetlevel) {
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetStereoDelayWetlevel");

	struct SetStereoDelayWetlevel_Params {
		float DelayWetlevel;
	}; SetStereoDelayWetlevel_Params Params;

	Params.DelayWetlevel = DelayWetlevel;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Synthesis.ModularSynthComponent.SetStereoDelayTime
inline void UModularSynthComponent::SetStereoDelayTime(float DelayTimeMsec) {
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetStereoDelayTime");

	struct SetStereoDelayTime_Params {
		float DelayTimeMsec;
	}; SetStereoDelayTime_Params Params;

	Params.DelayTimeMsec = DelayTimeMsec;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Synthesis.ModularSynthComponent.SetStereoDelayRatio
inline void UModularSynthComponent::SetStereoDelayRatio(float DelayRatio) {
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetStereoDelayRatio");

	struct SetStereoDelayRatio_Params {
		float DelayRatio;
	}; SetStereoDelayRatio_Params Params;

	Params.DelayRatio = DelayRatio;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Synthesis.ModularSynthComponent.SetStereoDelayMode
inline void UModularSynthComponent::SetStereoDelayMode(enum class Unknow StereoDelayMode) {
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetStereoDelayMode");

	struct SetStereoDelayMode_Params {
		enum class Unknow StereoDelayMode;
	}; SetStereoDelayMode_Params Params;

	Params.StereoDelayMode = StereoDelayMode;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Synthesis.ModularSynthComponent.SetStereoDelayIsEnabled
inline void UModularSynthComponent::SetStereoDelayIsEnabled(char StereoDelayEnabled) {
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetStereoDelayIsEnabled");

	struct SetStereoDelayIsEnabled_Params {
		char StereoDelayEnabled;
	}; SetStereoDelayIsEnabled_Params Params;

	Params.StereoDelayEnabled = StereoDelayEnabled;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Synthesis.ModularSynthComponent.SetStereoDelayFeedback
inline void UModularSynthComponent::SetStereoDelayFeedback(float DelayFeedback) {
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetStereoDelayFeedback");

	struct SetStereoDelayFeedback_Params {
		float DelayFeedback;
	}; SetStereoDelayFeedback_Params Params;

	Params.DelayFeedback = DelayFeedback;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Synthesis.ModularSynthComponent.SetSpread
inline void UModularSynthComponent::SetSpread(float Spread) {
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetSpread");

	struct SetSpread_Params {
		float Spread;
	}; SetSpread_Params Params;

	Params.Spread = Spread;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Synthesis.ModularSynthComponent.SetReleaseTime
inline void UModularSynthComponent::SetReleaseTime(float ReleaseTimeMsec) {
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetReleaseTime");

	struct SetReleaseTime_Params {
		float ReleaseTimeMsec;
	}; SetReleaseTime_Params Params;

	Params.ReleaseTimeMsec = ReleaseTimeMsec;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Synthesis.ModularSynthComponent.SetPortamento
inline void UModularSynthComponent::SetPortamento(float Portamento) {
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetPortamento");

	struct SetPortamento_Params {
		float Portamento;
	}; SetPortamento_Params Params;

	Params.Portamento = Portamento;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Synthesis.ModularSynthComponent.SetPitchBend
inline void UModularSynthComponent::SetPitchBend(float PitchBend) {
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetPitchBend");

	struct SetPitchBend_Params {
		float PitchBend;
	}; SetPitchBend_Params Params;

	Params.PitchBend = PitchBend;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Synthesis.ModularSynthComponent.SetPan
inline void UModularSynthComponent::SetPan(float Pan) {
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetPan");

	struct SetPan_Params {
		float Pan;
	}; SetPan_Params Params;

	Params.Pan = Pan;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Synthesis.ModularSynthComponent.SetOscType
inline void UModularSynthComponent::SetOscType(int32_t OscIndex, enum class Unknow OscType) {
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetOscType");

	struct SetOscType_Params {
		int32_t OscIndex;
		enum class Unknow OscType;
	}; SetOscType_Params Params;

	Params.OscIndex = OscIndex;
	Params.OscType = OscType;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Synthesis.ModularSynthComponent.SetOscSync
inline void UModularSynthComponent::SetOscSync(char bIsSynced) {
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetOscSync");

	struct SetOscSync_Params {
		char bIsSynced;
	}; SetOscSync_Params Params;

	Params.bIsSynced = bIsSynced;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Synthesis.ModularSynthComponent.SetOscSemitones
inline void UModularSynthComponent::SetOscSemitones(int32_t OscIndex, float Semitones) {
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetOscSemitones");

	struct SetOscSemitones_Params {
		int32_t OscIndex;
		float Semitones;
	}; SetOscSemitones_Params Params;

	Params.OscIndex = OscIndex;
	Params.Semitones = Semitones;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Synthesis.ModularSynthComponent.SetOscPulsewidth
inline void UModularSynthComponent::SetOscPulsewidth(int32_t OscIndex, float Pulsewidth) {
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetOscPulsewidth");

	struct SetOscPulsewidth_Params {
		int32_t OscIndex;
		float Pulsewidth;
	}; SetOscPulsewidth_Params Params;

	Params.OscIndex = OscIndex;
	Params.Pulsewidth = Pulsewidth;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Synthesis.ModularSynthComponent.SetOscOctave
inline void UModularSynthComponent::SetOscOctave(int32_t OscIndex, float Octave) {
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetOscOctave");

	struct SetOscOctave_Params {
		int32_t OscIndex;
		float Octave;
	}; SetOscOctave_Params Params;

	Params.OscIndex = OscIndex;
	Params.Octave = Octave;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Synthesis.ModularSynthComponent.SetOscGainMod
inline void UModularSynthComponent::SetOscGainMod(int32_t OscIndex, float OscGainMod) {
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetOscGainMod");

	struct SetOscGainMod_Params {
		int32_t OscIndex;
		float OscGainMod;
	}; SetOscGainMod_Params Params;

	Params.OscIndex = OscIndex;
	Params.OscGainMod = OscGainMod;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Synthesis.ModularSynthComponent.SetOscGain
inline void UModularSynthComponent::SetOscGain(int32_t OscIndex, float OscGain) {
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetOscGain");

	struct SetOscGain_Params {
		int32_t OscIndex;
		float OscGain;
	}; SetOscGain_Params Params;

	Params.OscIndex = OscIndex;
	Params.OscGain = OscGain;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Synthesis.ModularSynthComponent.SetOscFrequencyMod
inline void UModularSynthComponent::SetOscFrequencyMod(int32_t OscIndex, float OscFreqMod) {
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetOscFrequencyMod");

	struct SetOscFrequencyMod_Params {
		int32_t OscIndex;
		float OscFreqMod;
	}; SetOscFrequencyMod_Params Params;

	Params.OscIndex = OscIndex;
	Params.OscFreqMod = OscFreqMod;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Synthesis.ModularSynthComponent.SetOscCents
inline void UModularSynthComponent::SetOscCents(int32_t OscIndex, float Cents) {
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetOscCents");

	struct SetOscCents_Params {
		int32_t OscIndex;
		float Cents;
	}; SetOscCents_Params Params;

	Params.OscIndex = OscIndex;
	Params.Cents = Cents;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Synthesis.ModularSynthComponent.SetModEnvSustainGain
inline void UModularSynthComponent::SetModEnvSustainGain(float SustainGain) {
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetModEnvSustainGain");

	struct SetModEnvSustainGain_Params {
		float SustainGain;
	}; SetModEnvSustainGain_Params Params;

	Params.SustainGain = SustainGain;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Synthesis.ModularSynthComponent.SetModEnvReleaseTime
inline void UModularSynthComponent::SetModEnvReleaseTime(float Release) {
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetModEnvReleaseTime");

	struct SetModEnvReleaseTime_Params {
		float Release;
	}; SetModEnvReleaseTime_Params Params;

	Params.Release = Release;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Synthesis.ModularSynthComponent.SetModEnvPatch
inline void UModularSynthComponent::SetModEnvPatch(enum class Unknow InPatchType) {
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetModEnvPatch");

	struct SetModEnvPatch_Params {
		enum class Unknow InPatchType;
	}; SetModEnvPatch_Params Params;

	Params.InPatchType = InPatchType;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Synthesis.ModularSynthComponent.SetModEnvInvert
inline void UModularSynthComponent::SetModEnvInvert(char bInvert) {
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetModEnvInvert");

	struct SetModEnvInvert_Params {
		char bInvert;
	}; SetModEnvInvert_Params Params;

	Params.bInvert = bInvert;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Synthesis.ModularSynthComponent.SetModEnvDepth
inline void UModularSynthComponent::SetModEnvDepth(float Depth) {
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetModEnvDepth");

	struct SetModEnvDepth_Params {
		float Depth;
	}; SetModEnvDepth_Params Params;

	Params.Depth = Depth;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Synthesis.ModularSynthComponent.SetModEnvDecayTime
inline void UModularSynthComponent::SetModEnvDecayTime(float DecayTimeMsec) {
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetModEnvDecayTime");

	struct SetModEnvDecayTime_Params {
		float DecayTimeMsec;
	}; SetModEnvDecayTime_Params Params;

	Params.DecayTimeMsec = DecayTimeMsec;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Synthesis.ModularSynthComponent.SetModEnvBiasPatch
inline void UModularSynthComponent::SetModEnvBiasPatch(enum class Unknow InPatchType) {
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetModEnvBiasPatch");

	struct SetModEnvBiasPatch_Params {
		enum class Unknow InPatchType;
	}; SetModEnvBiasPatch_Params Params;

	Params.InPatchType = InPatchType;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Synthesis.ModularSynthComponent.SetModEnvBiasInvert
inline void UModularSynthComponent::SetModEnvBiasInvert(char bInvert) {
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetModEnvBiasInvert");

	struct SetModEnvBiasInvert_Params {
		char bInvert;
	}; SetModEnvBiasInvert_Params Params;

	Params.bInvert = bInvert;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Synthesis.ModularSynthComponent.SetModEnvAttackTime
inline void UModularSynthComponent::SetModEnvAttackTime(float AttackTimeMsec) {
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetModEnvAttackTime");

	struct SetModEnvAttackTime_Params {
		float AttackTimeMsec;
	}; SetModEnvAttackTime_Params Params;

	Params.AttackTimeMsec = AttackTimeMsec;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Synthesis.ModularSynthComponent.SetLFOType
inline void UModularSynthComponent::SetLFOType(int32_t LFOIndex, enum class Unknow LFOType) {
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetLFOType");

	struct SetLFOType_Params {
		int32_t LFOIndex;
		enum class Unknow LFOType;
	}; SetLFOType_Params Params;

	Params.LFOIndex = LFOIndex;
	Params.LFOType = LFOType;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Synthesis.ModularSynthComponent.SetLFOPatch
inline void UModularSynthComponent::SetLFOPatch(int32_t LFOIndex, enum class Unknow LFOPatchType) {
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetLFOPatch");

	struct SetLFOPatch_Params {
		int32_t LFOIndex;
		enum class Unknow LFOPatchType;
	}; SetLFOPatch_Params Params;

	Params.LFOIndex = LFOIndex;
	Params.LFOPatchType = LFOPatchType;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Synthesis.ModularSynthComponent.SetLFOMode
inline void UModularSynthComponent::SetLFOMode(int32_t LFOIndex, enum class Unknow LFOMode) {
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetLFOMode");

	struct SetLFOMode_Params {
		int32_t LFOIndex;
		enum class Unknow LFOMode;
	}; SetLFOMode_Params Params;

	Params.LFOIndex = LFOIndex;
	Params.LFOMode = LFOMode;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Synthesis.ModularSynthComponent.SetLFOGainMod
inline void UModularSynthComponent::SetLFOGainMod(int32_t LFOIndex, float GainMod) {
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetLFOGainMod");

	struct SetLFOGainMod_Params {
		int32_t LFOIndex;
		float GainMod;
	}; SetLFOGainMod_Params Params;

	Params.LFOIndex = LFOIndex;
	Params.GainMod = GainMod;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Synthesis.ModularSynthComponent.SetLFOGain
inline void UModularSynthComponent::SetLFOGain(int32_t LFOIndex, float Gain) {
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetLFOGain");

	struct SetLFOGain_Params {
		int32_t LFOIndex;
		float Gain;
	}; SetLFOGain_Params Params;

	Params.LFOIndex = LFOIndex;
	Params.Gain = Gain;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Synthesis.ModularSynthComponent.SetLFOFrequencyMod
inline void UModularSynthComponent::SetLFOFrequencyMod(int32_t LFOIndex, float FrequencyModHz) {
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetLFOFrequencyMod");

	struct SetLFOFrequencyMod_Params {
		int32_t LFOIndex;
		float FrequencyModHz;
	}; SetLFOFrequencyMod_Params Params;

	Params.LFOIndex = LFOIndex;
	Params.FrequencyModHz = FrequencyModHz;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Synthesis.ModularSynthComponent.SetLFOFrequency
inline void UModularSynthComponent::SetLFOFrequency(int32_t LFOIndex, float FrequencyHz) {
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetLFOFrequency");

	struct SetLFOFrequency_Params {
		int32_t LFOIndex;
		float FrequencyHz;
	}; SetLFOFrequency_Params Params;

	Params.LFOIndex = LFOIndex;
	Params.FrequencyHz = FrequencyHz;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Synthesis.ModularSynthComponent.SetGainDb
inline void UModularSynthComponent::SetGainDb(float GainDb) {
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetGainDb");

	struct SetGainDb_Params {
		float GainDb;
	}; SetGainDb_Params Params;

	Params.GainDb = GainDb;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Synthesis.ModularSynthComponent.SetFilterType
inline void UModularSynthComponent::SetFilterType(enum class Unknow FilterType) {
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetFilterType");

	struct SetFilterType_Params {
		enum class Unknow FilterType;
	}; SetFilterType_Params Params;

	Params.FilterType = FilterType;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Synthesis.ModularSynthComponent.SetFilterQMod
inline void UModularSynthComponent::SetFilterQMod(float FilterQ) {
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetFilterQMod");

	struct SetFilterQMod_Params {
		float FilterQ;
	}; SetFilterQMod_Params Params;

	Params.FilterQ = FilterQ;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Synthesis.ModularSynthComponent.SetFilterQ
inline void UModularSynthComponent::SetFilterQ(float FilterQ) {
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetFilterQ");

	struct SetFilterQ_Params {
		float FilterQ;
	}; SetFilterQ_Params Params;

	Params.FilterQ = FilterQ;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Synthesis.ModularSynthComponent.SetFilterFrequencyMod
inline void UModularSynthComponent::SetFilterFrequencyMod(float FilterFrequencyHz) {
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetFilterFrequencyMod");

	struct SetFilterFrequencyMod_Params {
		float FilterFrequencyHz;
	}; SetFilterFrequencyMod_Params Params;

	Params.FilterFrequencyHz = FilterFrequencyHz;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Synthesis.ModularSynthComponent.SetFilterFrequency
inline void UModularSynthComponent::SetFilterFrequency(float FilterFrequencyHz) {
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetFilterFrequency");

	struct SetFilterFrequency_Params {
		float FilterFrequencyHz;
	}; SetFilterFrequency_Params Params;

	Params.FilterFrequencyHz = FilterFrequencyHz;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Synthesis.ModularSynthComponent.SetFilterAlgorithm
inline void UModularSynthComponent::SetFilterAlgorithm(enum class Unknow FilterAlgorithm) {
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetFilterAlgorithm");

	struct SetFilterAlgorithm_Params {
		enum class Unknow FilterAlgorithm;
	}; SetFilterAlgorithm_Params Params;

	Params.FilterAlgorithm = FilterAlgorithm;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Synthesis.ModularSynthComponent.SetEnableUnison
inline void UModularSynthComponent::SetEnableUnison(char EnableUnison) {
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetEnableUnison");

	struct SetEnableUnison_Params {
		char EnableUnison;
	}; SetEnableUnison_Params Params;

	Params.EnableUnison = EnableUnison;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Synthesis.ModularSynthComponent.SetEnableRetrigger
inline void UModularSynthComponent::SetEnableRetrigger(char RetriggerEnabled) {
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetEnableRetrigger");

	struct SetEnableRetrigger_Params {
		char RetriggerEnabled;
	}; SetEnableRetrigger_Params Params;

	Params.RetriggerEnabled = RetriggerEnabled;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Synthesis.ModularSynthComponent.SetEnablePolyphony
inline void UModularSynthComponent::SetEnablePolyphony(char bEnablePolyphony) {
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetEnablePolyphony");

	struct SetEnablePolyphony_Params {
		char bEnablePolyphony;
	}; SetEnablePolyphony_Params Params;

	Params.bEnablePolyphony = bEnablePolyphony;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Synthesis.ModularSynthComponent.SetEnablePatch
inline char UModularSynthComponent::SetEnablePatch(struct Unknown PatchId, char bIsEnabled) {
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetEnablePatch");

	struct SetEnablePatch_Params {
		struct Unknown PatchId;
		char bIsEnabled;
		char ReturnValue;

	}; SetEnablePatch_Params Params;

	Params.PatchId = PatchId;
	Params.bIsEnabled = bIsEnabled;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Synthesis.ModularSynthComponent.SetEnableLegato
inline void UModularSynthComponent::SetEnableLegato(char LegatoEnabled) {
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetEnableLegato");

	struct SetEnableLegato_Params {
		char LegatoEnabled;
	}; SetEnableLegato_Params Params;

	Params.LegatoEnabled = LegatoEnabled;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Synthesis.ModularSynthComponent.SetDecayTime
inline void UModularSynthComponent::SetDecayTime(float DecayTimeMsec) {
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetDecayTime");

	struct SetDecayTime_Params {
		float DecayTimeMsec;
	}; SetDecayTime_Params Params;

	Params.DecayTimeMsec = DecayTimeMsec;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Synthesis.ModularSynthComponent.SetChorusFrequency
inline void UModularSynthComponent::SetChorusFrequency(float Frequency) {
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetChorusFrequency");

	struct SetChorusFrequency_Params {
		float Frequency;
	}; SetChorusFrequency_Params Params;

	Params.Frequency = Frequency;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Synthesis.ModularSynthComponent.SetChorusFeedback
inline void UModularSynthComponent::SetChorusFeedback(float Feedback) {
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetChorusFeedback");

	struct SetChorusFeedback_Params {
		float Feedback;
	}; SetChorusFeedback_Params Params;

	Params.Feedback = Feedback;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Synthesis.ModularSynthComponent.SetChorusEnabled
inline void UModularSynthComponent::SetChorusEnabled(char EnableChorus) {
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetChorusEnabled");

	struct SetChorusEnabled_Params {
		char EnableChorus;
	}; SetChorusEnabled_Params Params;

	Params.EnableChorus = EnableChorus;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Synthesis.ModularSynthComponent.SetChorusDepth
inline void UModularSynthComponent::SetChorusDepth(float Depth) {
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetChorusDepth");

	struct SetChorusDepth_Params {
		float Depth;
	}; SetChorusDepth_Params Params;

	Params.Depth = Depth;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Synthesis.ModularSynthComponent.SetAttackTime
inline void UModularSynthComponent::SetAttackTime(float AttackTimeMsec) {
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetAttackTime");

	struct SetAttackTime_Params {
		float AttackTimeMsec;
	}; SetAttackTime_Params Params;

	Params.AttackTimeMsec = AttackTimeMsec;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Synthesis.ModularSynthComponent.NoteOn
inline void UModularSynthComponent::NoteOn(float Note, int32_t Velocity, float Duration) {
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.NoteOn");

	struct NoteOn_Params {
		float Note;
		int32_t Velocity;
		float Duration;
	}; NoteOn_Params Params;

	Params.Note = Note;
	Params.Velocity = Velocity;
	Params.Duration = Duration;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Synthesis.ModularSynthComponent.NoteOff
inline void UModularSynthComponent::NoteOff(float Note, char bAllNotesOff, char bKillAllNotes) {
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.NoteOff");

	struct NoteOff_Params {
		float Note;
		char bAllNotesOff;
		char bKillAllNotes;
	}; NoteOff_Params Params;

	Params.Note = Note;
	Params.bAllNotesOff = bAllNotesOff;
	Params.bKillAllNotes = bKillAllNotes;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Synthesis.ModularSynthComponent.CreatePatch
inline struct Unknown UModularSynthComponent::CreatePatch(enum class Unknow PatchSource, struct TArray<Unknown>& PatchCables, char bEnableByDefault) {
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.CreatePatch");

	struct CreatePatch_Params {
		enum class Unknow PatchSource;
		struct TArray<Unknown>& PatchCables;
		char bEnableByDefault;
		struct Unknown ReturnValue;

	}; CreatePatch_Params Params;

	Params.PatchSource = PatchSource;
	Params.bEnableByDefault = bEnableByDefault;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	PatchCables = Params.PatchCables;


	return params.ReturnValue;
}

// Function Synthesis.SourceEffectBitCrusherPreset.SetSettings
inline void USourceEffectBitCrusherPreset::SetSettings(struct Unknown& InSettings) {
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.SourceEffectBitCrusherPreset.SetSettings");

	struct SetSettings_Params {
		struct Unknown& InSettings;
	}; SetSettings_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	InSettings = Params.InSettings;

}

// Function Synthesis.SourceEffectChorusPreset.SetSettings
inline void USourceEffectChorusPreset::SetSettings(struct Unknown& InSettings) {
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.SourceEffectChorusPreset.SetSettings");

	struct SetSettings_Params {
		struct Unknown& InSettings;
	}; SetSettings_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	InSettings = Params.InSettings;

}

// Function Synthesis.SourceEffectDynamicsProcessorPreset.SetSettings
inline void USourceEffectDynamicsProcessorPreset::SetSettings(struct Unknown& InSettings) {
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.SourceEffectDynamicsProcessorPreset.SetSettings");

	struct SetSettings_Params {
		struct Unknown& InSettings;
	}; SetSettings_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	InSettings = Params.InSettings;

}

// Function Synthesis.SourceEffectEnvelopeFollowerPreset.UnregisterEnvelopeFollowerListener
inline void USourceEffectEnvelopeFollowerPreset::UnregisterEnvelopeFollowerListener(struct Unknown EnvelopeFollowerListener) {
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.SourceEffectEnvelopeFollowerPreset.UnregisterEnvelopeFollowerListener");

	struct UnregisterEnvelopeFollowerListener_Params {
		struct Unknown EnvelopeFollowerListener;
	}; UnregisterEnvelopeFollowerListener_Params Params;

	Params.EnvelopeFollowerListener = EnvelopeFollowerListener;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Synthesis.SourceEffectEnvelopeFollowerPreset.SetSettings
inline void USourceEffectEnvelopeFollowerPreset::SetSettings(struct Unknown& InSettings) {
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.SourceEffectEnvelopeFollowerPreset.SetSettings");

	struct SetSettings_Params {
		struct Unknown& InSettings;
	}; SetSettings_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	InSettings = Params.InSettings;

}

// Function Synthesis.SourceEffectEnvelopeFollowerPreset.RegisterEnvelopeFollowerListener
inline void USourceEffectEnvelopeFollowerPreset::RegisterEnvelopeFollowerListener(struct Unknown EnvelopeFollowerListener) {
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.SourceEffectEnvelopeFollowerPreset.RegisterEnvelopeFollowerListener");

	struct RegisterEnvelopeFollowerListener_Params {
		struct Unknown EnvelopeFollowerListener;
	}; RegisterEnvelopeFollowerListener_Params Params;

	Params.EnvelopeFollowerListener = EnvelopeFollowerListener;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Synthesis.SourceEffectEQPreset.SetSettings
inline void USourceEffectEQPreset::SetSettings(struct Unknown& InSettings) {
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.SourceEffectEQPreset.SetSettings");

	struct SetSettings_Params {
		struct Unknown& InSettings;
	}; SetSettings_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	InSettings = Params.InSettings;

}

// Function Synthesis.SourceEffectFilterPreset.SetSettings
inline void USourceEffectFilterPreset::SetSettings(struct Unknown& InSettings) {
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.SourceEffectFilterPreset.SetSettings");

	struct SetSettings_Params {
		struct Unknown& InSettings;
	}; SetSettings_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	InSettings = Params.InSettings;

}

// Function Synthesis.SourceEffectFoldbackDistortionPreset.SetSettings
inline void USourceEffectFoldbackDistortionPreset::SetSettings(struct Unknown& InSettings) {
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.SourceEffectFoldbackDistortionPreset.SetSettings");

	struct SetSettings_Params {
		struct Unknown& InSettings;
	}; SetSettings_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	InSettings = Params.InSettings;

}

// Function Synthesis.SourceEffectMidSideSpreaderPreset.SetSettings
inline void USourceEffectMidSideSpreaderPreset::SetSettings(struct Unknown& InSettings) {
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.SourceEffectMidSideSpreaderPreset.SetSettings");

	struct SetSettings_Params {
		struct Unknown& InSettings;
	}; SetSettings_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	InSettings = Params.InSettings;

}

// Function Synthesis.SourceEffectPannerPreset.SetSettings
inline void USourceEffectPannerPreset::SetSettings(struct Unknown& InSettings) {
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.SourceEffectPannerPreset.SetSettings");

	struct SetSettings_Params {
		struct Unknown& InSettings;
	}; SetSettings_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	InSettings = Params.InSettings;

}

// Function Synthesis.SourceEffectPhaserPreset.SetSettings
inline void USourceEffectPhaserPreset::SetSettings(struct Unknown& InSettings) {
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.SourceEffectPhaserPreset.SetSettings");

	struct SetSettings_Params {
		struct Unknown& InSettings;
	}; SetSettings_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	InSettings = Params.InSettings;

}

// Function Synthesis.SourceEffectRingModulationPreset.SetSettings
inline void USourceEffectRingModulationPreset::SetSettings(struct Unknown& InSettings) {
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.SourceEffectRingModulationPreset.SetSettings");

	struct SetSettings_Params {
		struct Unknown& InSettings;
	}; SetSettings_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	InSettings = Params.InSettings;

}

// Function Synthesis.SourceEffectSimpleDelayPreset.SetSettings
inline void USourceEffectSimpleDelayPreset::SetSettings(struct Unknown& InSettings) {
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.SourceEffectSimpleDelayPreset.SetSettings");

	struct SetSettings_Params {
		struct Unknown& InSettings;
	}; SetSettings_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	InSettings = Params.InSettings;

}

// Function Synthesis.SourceEffectStereoDelayPreset.SetSettings
inline void USourceEffectStereoDelayPreset::SetSettings(struct Unknown& InSettings) {
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.SourceEffectStereoDelayPreset.SetSettings");

	struct SetSettings_Params {
		struct Unknown& InSettings;
	}; SetSettings_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	InSettings = Params.InSettings;

}

// Function Synthesis.SourceEffectWaveShaperPreset.SetSettings
inline void USourceEffectWaveShaperPreset::SetSettings(struct Unknown& InSettings) {
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.SourceEffectWaveShaperPreset.SetSettings");

	struct SetSettings_Params {
		struct Unknown& InSettings;
	}; SetSettings_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	InSettings = Params.InSettings;

}

// Function Synthesis.SubmixEffectConvolutionReverbPreset.SetSettings
inline void USubmixEffectConvolutionReverbPreset::SetSettings(struct Unknown& InSettings) {
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.SubmixEffectConvolutionReverbPreset.SetSettings");

	struct SetSettings_Params {
		struct Unknown& InSettings;
	}; SetSettings_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	InSettings = Params.InSettings;

}

// Function Synthesis.SubmixEffectConvolutionReverbPreset.SetImpulseResponse
inline void USubmixEffectConvolutionReverbPreset::SetImpulseResponse(struct Unknown InImpulseResponse) {
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.SubmixEffectConvolutionReverbPreset.SetImpulseResponse");

	struct SetImpulseResponse_Params {
		struct Unknown InImpulseResponse;
	}; SetImpulseResponse_Params Params;

	Params.InImpulseResponse = InImpulseResponse;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Synthesis.SubmixEffectDelayPreset.SetSettings
inline void USubmixEffectDelayPreset::SetSettings(struct Unknown& InSettings) {
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.SubmixEffectDelayPreset.SetSettings");

	struct SetSettings_Params {
		struct Unknown& InSettings;
	}; SetSettings_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	InSettings = Params.InSettings;

}

// Function Synthesis.SubmixEffectDelayPreset.SetInterpolationTime
inline void USubmixEffectDelayPreset::SetInterpolationTime(float Time) {
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.SubmixEffectDelayPreset.SetInterpolationTime");

	struct SetInterpolationTime_Params {
		float Time;
	}; SetInterpolationTime_Params Params;

	Params.Time = Time;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Synthesis.SubmixEffectDelayPreset.SetDelay
inline void USubmixEffectDelayPreset::SetDelay(float Length) {
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.SubmixEffectDelayPreset.SetDelay");

	struct SetDelay_Params {
		float Length;
	}; SetDelay_Params Params;

	Params.Length = Length;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Synthesis.SubmixEffectDelayPreset.GetMaxDelayInMilliseconds
inline float USubmixEffectDelayPreset::GetMaxDelayInMilliseconds() {
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.SubmixEffectDelayPreset.GetMaxDelayInMilliseconds");

	struct GetMaxDelayInMilliseconds_Params {
		
		float ReturnValue;

	}; GetMaxDelayInMilliseconds_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Synthesis.SubmixEffectFilterPreset.SetSettings
inline void USubmixEffectFilterPreset::SetSettings(struct Unknown& InSettings) {
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.SubmixEffectFilterPreset.SetSettings");

	struct SetSettings_Params {
		struct Unknown& InSettings;
	}; SetSettings_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	InSettings = Params.InSettings;

}

// Function Synthesis.SubmixEffectFilterPreset.SetFilterType
inline void USubmixEffectFilterPreset::SetFilterType(enum class Unknow InType) {
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.SubmixEffectFilterPreset.SetFilterType");

	struct SetFilterType_Params {
		enum class Unknow InType;
	}; SetFilterType_Params Params;

	Params.InType = InType;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Synthesis.SubmixEffectFilterPreset.SetFilterQMod
inline void USubmixEffectFilterPreset::SetFilterQMod(float InQ) {
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.SubmixEffectFilterPreset.SetFilterQMod");

	struct SetFilterQMod_Params {
		float InQ;
	}; SetFilterQMod_Params Params;

	Params.InQ = InQ;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Synthesis.SubmixEffectFilterPreset.SetFilterQ
inline void USubmixEffectFilterPreset::SetFilterQ(float InQ) {
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.SubmixEffectFilterPreset.SetFilterQ");

	struct SetFilterQ_Params {
		float InQ;
	}; SetFilterQ_Params Params;

	Params.InQ = InQ;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Synthesis.SubmixEffectFilterPreset.SetFilterCutoffFrequencyMod
inline void USubmixEffectFilterPreset::SetFilterCutoffFrequencyMod(float InFrequency) {
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.SubmixEffectFilterPreset.SetFilterCutoffFrequencyMod");

	struct SetFilterCutoffFrequencyMod_Params {
		float InFrequency;
	}; SetFilterCutoffFrequencyMod_Params Params;

	Params.InFrequency = InFrequency;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Synthesis.SubmixEffectFilterPreset.SetFilterCutoffFrequency
inline void USubmixEffectFilterPreset::SetFilterCutoffFrequency(float InFrequency) {
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.SubmixEffectFilterPreset.SetFilterCutoffFrequency");

	struct SetFilterCutoffFrequency_Params {
		float InFrequency;
	}; SetFilterCutoffFrequency_Params Params;

	Params.InFrequency = InFrequency;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Synthesis.SubmixEffectFilterPreset.SetFilterAlgorithm
inline void USubmixEffectFilterPreset::SetFilterAlgorithm(enum class Unknow InAlgorithm) {
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.SubmixEffectFilterPreset.SetFilterAlgorithm");

	struct SetFilterAlgorithm_Params {
		enum class Unknow InAlgorithm;
	}; SetFilterAlgorithm_Params Params;

	Params.InAlgorithm = InAlgorithm;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Synthesis.SubmixEffectFlexiverbPreset.SetSettings
inline void USubmixEffectFlexiverbPreset::SetSettings(struct Unknown& InSettings) {
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.SubmixEffectFlexiverbPreset.SetSettings");

	struct SetSettings_Params {
		struct Unknown& InSettings;
	}; SetSettings_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	InSettings = Params.InSettings;

}

// Function Synthesis.SubmixEffectTapDelayPreset.SetTap
inline void USubmixEffectTapDelayPreset::SetTap(int32_t TapId, struct Unknown& TapInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.SubmixEffectTapDelayPreset.SetTap");

	struct SetTap_Params {
		int32_t TapId;
		struct Unknown& TapInfo;
	}; SetTap_Params Params;

	Params.TapId = TapId;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	TapInfo = Params.TapInfo;

}

// Function Synthesis.SubmixEffectTapDelayPreset.SetSettings
inline void USubmixEffectTapDelayPreset::SetSettings(struct Unknown& InSettings) {
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.SubmixEffectTapDelayPreset.SetSettings");

	struct SetSettings_Params {
		struct Unknown& InSettings;
	}; SetSettings_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	InSettings = Params.InSettings;

}

// Function Synthesis.SubmixEffectTapDelayPreset.SetInterpolationTime
inline void USubmixEffectTapDelayPreset::SetInterpolationTime(float Time) {
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.SubmixEffectTapDelayPreset.SetInterpolationTime");

	struct SetInterpolationTime_Params {
		float Time;
	}; SetInterpolationTime_Params Params;

	Params.Time = Time;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Synthesis.SubmixEffectTapDelayPreset.RemoveTap
inline void USubmixEffectTapDelayPreset::RemoveTap(int32_t TapId) {
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.SubmixEffectTapDelayPreset.RemoveTap");

	struct RemoveTap_Params {
		int32_t TapId;
	}; RemoveTap_Params Params;

	Params.TapId = TapId;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Synthesis.SubmixEffectTapDelayPreset.GetTapIds
inline void USubmixEffectTapDelayPreset::GetTapIds(struct TArray<Unknown>& TapIds) {
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.SubmixEffectTapDelayPreset.GetTapIds");

	struct GetTapIds_Params {
		struct TArray<Unknown>& TapIds;
	}; GetTapIds_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	TapIds = Params.TapIds;

}

// Function Synthesis.SubmixEffectTapDelayPreset.GetTap
inline void USubmixEffectTapDelayPreset::GetTap(int32_t TapId, struct Unknown& TapInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.SubmixEffectTapDelayPreset.GetTap");

	struct GetTap_Params {
		int32_t TapId;
		struct Unknown& TapInfo;
	}; GetTap_Params Params;

	Params.TapId = TapId;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	TapInfo = Params.TapInfo;

}

// Function Synthesis.SubmixEffectTapDelayPreset.GetMaxDelayInMilliseconds
inline float USubmixEffectTapDelayPreset::GetMaxDelayInMilliseconds() {
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.SubmixEffectTapDelayPreset.GetMaxDelayInMilliseconds");

	struct GetMaxDelayInMilliseconds_Params {
		
		float ReturnValue;

	}; GetMaxDelayInMilliseconds_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Synthesis.SubmixEffectTapDelayPreset.AddTap
inline void USubmixEffectTapDelayPreset::AddTap(int32_t& TapId) {
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.SubmixEffectTapDelayPreset.AddTap");

	struct AddTap_Params {
		int32_t& TapId;
	}; AddTap_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	TapId = Params.TapId;

}

// Function Synthesis.Synth2DSlider.SetValue
inline void USynth2DSlider::SetValue(struct Unknown InValue) {
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.Synth2DSlider.SetValue");

	struct SetValue_Params {
		struct Unknown InValue;
	}; SetValue_Params Params;

	Params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Synthesis.Synth2DSlider.SetStepSize
inline void USynth2DSlider::SetStepSize(float InValue) {
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.Synth2DSlider.SetStepSize");

	struct SetStepSize_Params {
		float InValue;
	}; SetStepSize_Params Params;

	Params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Synthesis.Synth2DSlider.SetSliderHandleColor
inline void USynth2DSlider::SetSliderHandleColor(struct Unknown InValue) {
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.Synth2DSlider.SetSliderHandleColor");

	struct SetSliderHandleColor_Params {
		struct Unknown InValue;
	}; SetSliderHandleColor_Params Params;

	Params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Synthesis.Synth2DSlider.SetLocked
inline void USynth2DSlider::SetLocked(char InValue) {
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.Synth2DSlider.SetLocked");

	struct SetLocked_Params {
		char InValue;
	}; SetLocked_Params Params;

	Params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Synthesis.Synth2DSlider.SetIndentHandle
inline void USynth2DSlider::SetIndentHandle(char InValue) {
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.Synth2DSlider.SetIndentHandle");

	struct SetIndentHandle_Params {
		char InValue;
	}; SetIndentHandle_Params Params;

	Params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Synthesis.Synth2DSlider.GetValue
inline struct Unknown USynth2DSlider::GetValue() {
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.Synth2DSlider.GetValue");

	struct GetValue_Params {
		
		struct Unknown ReturnValue;

	}; GetValue_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Synthesis.GranularSynth.SetSustainGain
inline void UGranularSynth::SetSustainGain(float SustainGain) {
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.GranularSynth.SetSustainGain");

	struct SetSustainGain_Params {
		float SustainGain;
	}; SetSustainGain_Params Params;

	Params.SustainGain = SustainGain;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Synthesis.GranularSynth.SetSoundWave
inline void UGranularSynth::SetSoundWave(struct Unknown InSoundWave) {
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.GranularSynth.SetSoundWave");

	struct SetSoundWave_Params {
		struct Unknown InSoundWave;
	}; SetSoundWave_Params Params;

	Params.InSoundWave = InSoundWave;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Synthesis.GranularSynth.SetScrubMode
inline void UGranularSynth::SetScrubMode(char bScrubMode) {
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.GranularSynth.SetScrubMode");

	struct SetScrubMode_Params {
		char bScrubMode;
	}; SetScrubMode_Params Params;

	Params.bScrubMode = bScrubMode;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Synthesis.GranularSynth.SetReleaseTimeMsec
inline void UGranularSynth::SetReleaseTimeMsec(float ReleaseTimeMsec) {
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.GranularSynth.SetReleaseTimeMsec");

	struct SetReleaseTimeMsec_Params {
		float ReleaseTimeMsec;
	}; SetReleaseTimeMsec_Params Params;

	Params.ReleaseTimeMsec = ReleaseTimeMsec;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Synthesis.GranularSynth.SetPlayheadTime
inline void UGranularSynth::SetPlayheadTime(float InPositionSec, float LerpTimeSec, enum class Unknow SeekType) {
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.GranularSynth.SetPlayheadTime");

	struct SetPlayheadTime_Params {
		float InPositionSec;
		float LerpTimeSec;
		enum class Unknow SeekType;
	}; SetPlayheadTime_Params Params;

	Params.InPositionSec = InPositionSec;
	Params.LerpTimeSec = LerpTimeSec;
	Params.SeekType = SeekType;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Synthesis.GranularSynth.SetPlaybackSpeed
inline void UGranularSynth::SetPlaybackSpeed(float InPlayheadRate) {
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.GranularSynth.SetPlaybackSpeed");

	struct SetPlaybackSpeed_Params {
		float InPlayheadRate;
	}; SetPlaybackSpeed_Params Params;

	Params.InPlayheadRate = InPlayheadRate;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Synthesis.GranularSynth.SetGrainVolume
inline void UGranularSynth::SetGrainVolume(float BaseVolume, struct Unknown VolumeRange) {
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.GranularSynth.SetGrainVolume");

	struct SetGrainVolume_Params {
		float BaseVolume;
		struct Unknown VolumeRange;
	}; SetGrainVolume_Params Params;

	Params.BaseVolume = BaseVolume;
	Params.VolumeRange = VolumeRange;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Synthesis.GranularSynth.SetGrainsPerSecond
inline void UGranularSynth::SetGrainsPerSecond(float InGrainsPerSecond) {
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.GranularSynth.SetGrainsPerSecond");

	struct SetGrainsPerSecond_Params {
		float InGrainsPerSecond;
	}; SetGrainsPerSecond_Params Params;

	Params.InGrainsPerSecond = InGrainsPerSecond;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Synthesis.GranularSynth.SetGrainProbability
inline void UGranularSynth::SetGrainProbability(float InGrainProbability) {
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.GranularSynth.SetGrainProbability");

	struct SetGrainProbability_Params {
		float InGrainProbability;
	}; SetGrainProbability_Params Params;

	Params.InGrainProbability = InGrainProbability;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Synthesis.GranularSynth.SetGrainPitch
inline void UGranularSynth::SetGrainPitch(float BasePitch, struct Unknown PitchRange) {
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.GranularSynth.SetGrainPitch");

	struct SetGrainPitch_Params {
		float BasePitch;
		struct Unknown PitchRange;
	}; SetGrainPitch_Params Params;

	Params.BasePitch = BasePitch;
	Params.PitchRange = PitchRange;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Synthesis.GranularSynth.SetGrainPan
inline void UGranularSynth::SetGrainPan(float BasePan, struct Unknown PanRange) {
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.GranularSynth.SetGrainPan");

	struct SetGrainPan_Params {
		float BasePan;
		struct Unknown PanRange;
	}; SetGrainPan_Params Params;

	Params.BasePan = BasePan;
	Params.PanRange = PanRange;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Synthesis.GranularSynth.SetGrainEnvelopeType
inline void UGranularSynth::SetGrainEnvelopeType(enum class Unknow EnvelopeType) {
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.GranularSynth.SetGrainEnvelopeType");

	struct SetGrainEnvelopeType_Params {
		enum class Unknow EnvelopeType;
	}; SetGrainEnvelopeType_Params Params;

	Params.EnvelopeType = EnvelopeType;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Synthesis.GranularSynth.SetGrainDuration
inline void UGranularSynth::SetGrainDuration(float BaseDurationMsec, struct Unknown DurationRange) {
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.GranularSynth.SetGrainDuration");

	struct SetGrainDuration_Params {
		float BaseDurationMsec;
		struct Unknown DurationRange;
	}; SetGrainDuration_Params Params;

	Params.BaseDurationMsec = BaseDurationMsec;
	Params.DurationRange = DurationRange;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Synthesis.GranularSynth.SetDecayTime
inline void UGranularSynth::SetDecayTime(float DecayTimeMsec) {
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.GranularSynth.SetDecayTime");

	struct SetDecayTime_Params {
		float DecayTimeMsec;
	}; SetDecayTime_Params Params;

	Params.DecayTimeMsec = DecayTimeMsec;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Synthesis.GranularSynth.SetAttackTime
inline void UGranularSynth::SetAttackTime(float AttackTimeMsec) {
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.GranularSynth.SetAttackTime");

	struct SetAttackTime_Params {
		float AttackTimeMsec;
	}; SetAttackTime_Params Params;

	Params.AttackTimeMsec = AttackTimeMsec;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Synthesis.GranularSynth.NoteOn
inline void UGranularSynth::NoteOn(float Note, int32_t Velocity, float Duration) {
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.GranularSynth.NoteOn");

	struct NoteOn_Params {
		float Note;
		int32_t Velocity;
		float Duration;
	}; NoteOn_Params Params;

	Params.Note = Note;
	Params.Velocity = Velocity;
	Params.Duration = Duration;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Synthesis.GranularSynth.NoteOff
inline void UGranularSynth::NoteOff(float Note, char bKill) {
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.GranularSynth.NoteOff");

	struct NoteOff_Params {
		float Note;
		char bKill;
	}; NoteOff_Params Params;

	Params.Note = Note;
	Params.bKill = bKill;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Synthesis.GranularSynth.IsLoaded
inline char UGranularSynth::IsLoaded() {
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.GranularSynth.IsLoaded");

	struct IsLoaded_Params {
		
		char ReturnValue;

	}; IsLoaded_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Synthesis.GranularSynth.GetSampleDuration
inline float UGranularSynth::GetSampleDuration() {
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.GranularSynth.GetSampleDuration");

	struct GetSampleDuration_Params {
		
		float ReturnValue;

	}; GetSampleDuration_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Synthesis.GranularSynth.GetCurrentPlayheadTime
inline float UGranularSynth::GetCurrentPlayheadTime() {
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.GranularSynth.GetCurrentPlayheadTime");

	struct GetCurrentPlayheadTime_Params {
		
		float ReturnValue;

	}; GetCurrentPlayheadTime_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Synthesis.SynthComponentMonoWaveTable.SetWaveTablePosition
inline void USynthComponentMonoWaveTable::SetWaveTablePosition(float InPosition) {
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.SynthComponentMonoWaveTable.SetWaveTablePosition");

	struct SetWaveTablePosition_Params {
		float InPosition;
	}; SetWaveTablePosition_Params Params;

	Params.InPosition = InPosition;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Synthesis.SynthComponentMonoWaveTable.SetSustainPedalState
inline void USynthComponentMonoWaveTable::SetSustainPedalState(char InSustainPedalState) {
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.SynthComponentMonoWaveTable.SetSustainPedalState");

	struct SetSustainPedalState_Params {
		char InSustainPedalState;
	}; SetSustainPedalState_Params Params;

	Params.InSustainPedalState = InSustainPedalState;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Synthesis.SynthComponentMonoWaveTable.SetPosLfoType
inline void USynthComponentMonoWaveTable::SetPosLfoType(enum class Unknow InLfoType) {
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.SynthComponentMonoWaveTable.SetPosLfoType");

	struct SetPosLfoType_Params {
		enum class Unknow InLfoType;
	}; SetPosLfoType_Params Params;

	Params.InLfoType = InLfoType;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Synthesis.SynthComponentMonoWaveTable.SetPosLfoFrequency
inline void USynthComponentMonoWaveTable::SetPosLfoFrequency(float InLfoFrequency) {
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.SynthComponentMonoWaveTable.SetPosLfoFrequency");

	struct SetPosLfoFrequency_Params {
		float InLfoFrequency;
	}; SetPosLfoFrequency_Params Params;

	Params.InLfoFrequency = InLfoFrequency;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Synthesis.SynthComponentMonoWaveTable.SetPosLfoDepth
inline void USynthComponentMonoWaveTable::SetPosLfoDepth(float InLfoDepth) {
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.SynthComponentMonoWaveTable.SetPosLfoDepth");

	struct SetPosLfoDepth_Params {
		float InLfoDepth;
	}; SetPosLfoDepth_Params Params;

	Params.InLfoDepth = InLfoDepth;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeSustainGain
inline void USynthComponentMonoWaveTable::SetPositionEnvelopeSustainGain(float InSustainGain) {
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeSustainGain");

	struct SetPositionEnvelopeSustainGain_Params {
		float InSustainGain;
	}; SetPositionEnvelopeSustainGain_Params Params;

	Params.InSustainGain = InSustainGain;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeReleaseTime
inline void USynthComponentMonoWaveTable::SetPositionEnvelopeReleaseTime(float InReleaseTimeMsec) {
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeReleaseTime");

	struct SetPositionEnvelopeReleaseTime_Params {
		float InReleaseTimeMsec;
	}; SetPositionEnvelopeReleaseTime_Params Params;

	Params.InReleaseTimeMsec = InReleaseTimeMsec;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeInvert
inline void USynthComponentMonoWaveTable::SetPositionEnvelopeInvert(char bInInvert) {
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeInvert");

	struct SetPositionEnvelopeInvert_Params {
		char bInInvert;
	}; SetPositionEnvelopeInvert_Params Params;

	Params.bInInvert = bInInvert;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeDepth
inline void USynthComponentMonoWaveTable::SetPositionEnvelopeDepth(float InDepth) {
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeDepth");

	struct SetPositionEnvelopeDepth_Params {
		float InDepth;
	}; SetPositionEnvelopeDepth_Params Params;

	Params.InDepth = InDepth;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeDecayTime
inline void USynthComponentMonoWaveTable::SetPositionEnvelopeDecayTime(float InDecayTimeMsec) {
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeDecayTime");

	struct SetPositionEnvelopeDecayTime_Params {
		float InDecayTimeMsec;
	}; SetPositionEnvelopeDecayTime_Params Params;

	Params.InDecayTimeMsec = InDecayTimeMsec;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeBiasInvert
inline void USynthComponentMonoWaveTable::SetPositionEnvelopeBiasInvert(char bInBiasInvert) {
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeBiasInvert");

	struct SetPositionEnvelopeBiasInvert_Params {
		char bInBiasInvert;
	}; SetPositionEnvelopeBiasInvert_Params Params;

	Params.bInBiasInvert = bInBiasInvert;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeBiasDepth
inline void USynthComponentMonoWaveTable::SetPositionEnvelopeBiasDepth(float InDepth) {
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeBiasDepth");

	struct SetPositionEnvelopeBiasDepth_Params {
		float InDepth;
	}; SetPositionEnvelopeBiasDepth_Params Params;

	Params.InDepth = InDepth;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeAttackTime
inline void USynthComponentMonoWaveTable::SetPositionEnvelopeAttackTime(float InAttackTimeMsec) {
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeAttackTime");

	struct SetPositionEnvelopeAttackTime_Params {
		float InAttackTimeMsec;
	}; SetPositionEnvelopeAttackTime_Params Params;

	Params.InAttackTimeMsec = InAttackTimeMsec;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Synthesis.SynthComponentMonoWaveTable.SetLowPassFilterResonance
inline void USynthComponentMonoWaveTable::SetLowPassFilterResonance(float InNewQ) {
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.SynthComponentMonoWaveTable.SetLowPassFilterResonance");

	struct SetLowPassFilterResonance_Params {
		float InNewQ;
	}; SetLowPassFilterResonance_Params Params;

	Params.InNewQ = InNewQ;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Synthesis.SynthComponentMonoWaveTable.SetLowPassFilterFrequency
inline void USynthComponentMonoWaveTable::SetLowPassFilterFrequency(float InNewFrequency) {
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.SynthComponentMonoWaveTable.SetLowPassFilterFrequency");

	struct SetLowPassFilterFrequency_Params {
		float InNewFrequency;
	}; SetLowPassFilterFrequency_Params Params;

	Params.InNewFrequency = InNewFrequency;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Synthesis.SynthComponentMonoWaveTable.SetFrequencyWithMidiNote
inline void USynthComponentMonoWaveTable::SetFrequencyWithMidiNote(float InMidiNote) {
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.SynthComponentMonoWaveTable.SetFrequencyWithMidiNote");

	struct SetFrequencyWithMidiNote_Params {
		float InMidiNote;
	}; SetFrequencyWithMidiNote_Params Params;

	Params.InMidiNote = InMidiNote;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Synthesis.SynthComponentMonoWaveTable.SetFrequencyPitchBend
inline void USynthComponentMonoWaveTable::SetFrequencyPitchBend(float FrequencyOffsetCents) {
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.SynthComponentMonoWaveTable.SetFrequencyPitchBend");

	struct SetFrequencyPitchBend_Params {
		float FrequencyOffsetCents;
	}; SetFrequencyPitchBend_Params Params;

	Params.FrequencyOffsetCents = FrequencyOffsetCents;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Synthesis.SynthComponentMonoWaveTable.SetFrequency
inline void USynthComponentMonoWaveTable::SetFrequency(float FrequencyHz) {
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.SynthComponentMonoWaveTable.SetFrequency");

	struct SetFrequency_Params {
		float FrequencyHz;
	}; SetFrequency_Params Params;

	Params.FrequencyHz = FrequencyHz;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeSustainGain
inline void USynthComponentMonoWaveTable::SetFilterEnvelopeSustainGain(float InSustainGain) {
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeSustainGain");

	struct SetFilterEnvelopeSustainGain_Params {
		float InSustainGain;
	}; SetFilterEnvelopeSustainGain_Params Params;

	Params.InSustainGain = InSustainGain;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeReleaseTime
inline void USynthComponentMonoWaveTable::SetFilterEnvelopeReleaseTime(float InReleaseTimeMsec) {
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeReleaseTime");

	struct SetFilterEnvelopeReleaseTime_Params {
		float InReleaseTimeMsec;
	}; SetFilterEnvelopeReleaseTime_Params Params;

	Params.InReleaseTimeMsec = InReleaseTimeMsec;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopenDecayTime
inline void USynthComponentMonoWaveTable::SetFilterEnvelopenDecayTime(float InDecayTimeMsec) {
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopenDecayTime");

	struct SetFilterEnvelopenDecayTime_Params {
		float InDecayTimeMsec;
	}; SetFilterEnvelopenDecayTime_Params Params;

	Params.InDecayTimeMsec = InDecayTimeMsec;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeInvert
inline void USynthComponentMonoWaveTable::SetFilterEnvelopeInvert(char bInInvert) {
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeInvert");

	struct SetFilterEnvelopeInvert_Params {
		char bInInvert;
	}; SetFilterEnvelopeInvert_Params Params;

	Params.bInInvert = bInInvert;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeDepth
inline void USynthComponentMonoWaveTable::SetFilterEnvelopeDepth(float InDepth) {
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeDepth");

	struct SetFilterEnvelopeDepth_Params {
		float InDepth;
	}; SetFilterEnvelopeDepth_Params Params;

	Params.InDepth = InDepth;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeBiasInvert
inline void USynthComponentMonoWaveTable::SetFilterEnvelopeBiasInvert(char bInBiasInvert) {
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeBiasInvert");

	struct SetFilterEnvelopeBiasInvert_Params {
		char bInBiasInvert;
	}; SetFilterEnvelopeBiasInvert_Params Params;

	Params.bInBiasInvert = bInBiasInvert;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeBiasDepth
inline void USynthComponentMonoWaveTable::SetFilterEnvelopeBiasDepth(float InDepth) {
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeBiasDepth");

	struct SetFilterEnvelopeBiasDepth_Params {
		float InDepth;
	}; SetFilterEnvelopeBiasDepth_Params Params;

	Params.InDepth = InDepth;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeAttackTime
inline void USynthComponentMonoWaveTable::SetFilterEnvelopeAttackTime(float InAttackTimeMsec) {
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeAttackTime");

	struct SetFilterEnvelopeAttackTime_Params {
		float InAttackTimeMsec;
	}; SetFilterEnvelopeAttackTime_Params Params;

	Params.InAttackTimeMsec = InAttackTimeMsec;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Synthesis.SynthComponentMonoWaveTable.SetCurveValue
inline char USynthComponentMonoWaveTable::SetCurveValue(int32_t TableIndex, int32_t KeyframeIndex, float NewValue) {
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.SynthComponentMonoWaveTable.SetCurveValue");

	struct SetCurveValue_Params {
		int32_t TableIndex;
		int32_t KeyframeIndex;
		float NewValue;
		char ReturnValue;

	}; SetCurveValue_Params Params;

	Params.TableIndex = TableIndex;
	Params.KeyframeIndex = KeyframeIndex;
	Params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Synthesis.SynthComponentMonoWaveTable.SetCurveTangent
inline char USynthComponentMonoWaveTable::SetCurveTangent(int32_t TableIndex, float InNewTangent) {
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.SynthComponentMonoWaveTable.SetCurveTangent");

	struct SetCurveTangent_Params {
		int32_t TableIndex;
		float InNewTangent;
		char ReturnValue;

	}; SetCurveTangent_Params Params;

	Params.TableIndex = TableIndex;
	Params.InNewTangent = InNewTangent;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Synthesis.SynthComponentMonoWaveTable.SetCurveInterpolationType
inline char USynthComponentMonoWaveTable::SetCurveInterpolationType(enum class Unknow InterpolationType, int32_t TableIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.SynthComponentMonoWaveTable.SetCurveInterpolationType");

	struct SetCurveInterpolationType_Params {
		enum class Unknow InterpolationType;
		int32_t TableIndex;
		char ReturnValue;

	}; SetCurveInterpolationType_Params Params;

	Params.InterpolationType = InterpolationType;
	Params.TableIndex = TableIndex;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeSustainGain
inline void USynthComponentMonoWaveTable::SetAmpEnvelopeSustainGain(float InSustainGain) {
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeSustainGain");

	struct SetAmpEnvelopeSustainGain_Params {
		float InSustainGain;
	}; SetAmpEnvelopeSustainGain_Params Params;

	Params.InSustainGain = InSustainGain;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeReleaseTime
inline void USynthComponentMonoWaveTable::SetAmpEnvelopeReleaseTime(float InReleaseTimeMsec) {
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeReleaseTime");

	struct SetAmpEnvelopeReleaseTime_Params {
		float InReleaseTimeMsec;
	}; SetAmpEnvelopeReleaseTime_Params Params;

	Params.InReleaseTimeMsec = InReleaseTimeMsec;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeInvert
inline void USynthComponentMonoWaveTable::SetAmpEnvelopeInvert(char bInInvert) {
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeInvert");

	struct SetAmpEnvelopeInvert_Params {
		char bInInvert;
	}; SetAmpEnvelopeInvert_Params Params;

	Params.bInInvert = bInInvert;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeDepth
inline void USynthComponentMonoWaveTable::SetAmpEnvelopeDepth(float InDepth) {
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeDepth");

	struct SetAmpEnvelopeDepth_Params {
		float InDepth;
	}; SetAmpEnvelopeDepth_Params Params;

	Params.InDepth = InDepth;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeDecayTime
inline void USynthComponentMonoWaveTable::SetAmpEnvelopeDecayTime(float InDecayTimeMsec) {
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeDecayTime");

	struct SetAmpEnvelopeDecayTime_Params {
		float InDecayTimeMsec;
	}; SetAmpEnvelopeDecayTime_Params Params;

	Params.InDecayTimeMsec = InDecayTimeMsec;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeBiasInvert
inline void USynthComponentMonoWaveTable::SetAmpEnvelopeBiasInvert(char bInBiasInvert) {
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeBiasInvert");

	struct SetAmpEnvelopeBiasInvert_Params {
		char bInBiasInvert;
	}; SetAmpEnvelopeBiasInvert_Params Params;

	Params.bInBiasInvert = bInBiasInvert;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeBiasDepth
inline void USynthComponentMonoWaveTable::SetAmpEnvelopeBiasDepth(float InDepth) {
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeBiasDepth");

	struct SetAmpEnvelopeBiasDepth_Params {
		float InDepth;
	}; SetAmpEnvelopeBiasDepth_Params Params;

	Params.InDepth = InDepth;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeAttackTime
inline void USynthComponentMonoWaveTable::SetAmpEnvelopeAttackTime(float InAttackTimeMsec) {
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeAttackTime");

	struct SetAmpEnvelopeAttackTime_Params {
		float InAttackTimeMsec;
	}; SetAmpEnvelopeAttackTime_Params Params;

	Params.InAttackTimeMsec = InAttackTimeMsec;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Synthesis.SynthComponentMonoWaveTable.RefreshWaveTable
inline void USynthComponentMonoWaveTable::RefreshWaveTable(int32_t Index) {
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.SynthComponentMonoWaveTable.RefreshWaveTable");

	struct RefreshWaveTable_Params {
		int32_t Index;
	}; RefreshWaveTable_Params Params;

	Params.Index = Index;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Synthesis.SynthComponentMonoWaveTable.RefreshAllWaveTables
inline void USynthComponentMonoWaveTable::RefreshAllWaveTables() {
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.SynthComponentMonoWaveTable.RefreshAllWaveTables");

	struct RefreshAllWaveTables_Params {
		
	}; RefreshAllWaveTables_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Synthesis.SynthComponentMonoWaveTable.NoteOn
inline void USynthComponentMonoWaveTable::NoteOn(float InMidiNote, float InVelocity) {
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.SynthComponentMonoWaveTable.NoteOn");

	struct NoteOn_Params {
		float InMidiNote;
		float InVelocity;
	}; NoteOn_Params Params;

	Params.InMidiNote = InMidiNote;
	Params.InVelocity = InVelocity;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Synthesis.SynthComponentMonoWaveTable.NoteOff
inline void USynthComponentMonoWaveTable::NoteOff(float InMidiNote) {
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.SynthComponentMonoWaveTable.NoteOff");

	struct NoteOff_Params {
		float InMidiNote;
	}; NoteOff_Params Params;

	Params.InMidiNote = InMidiNote;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Synthesis.SynthComponentMonoWaveTable.GetNumTableEntries
inline int32_t USynthComponentMonoWaveTable::GetNumTableEntries() {
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.SynthComponentMonoWaveTable.GetNumTableEntries");

	struct GetNumTableEntries_Params {
		
		int32_t ReturnValue;

	}; GetNumTableEntries_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Synthesis.SynthComponentMonoWaveTable.GetMaxTableIndex
inline int32_t USynthComponentMonoWaveTable::GetMaxTableIndex() {
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.SynthComponentMonoWaveTable.GetMaxTableIndex");

	struct GetMaxTableIndex_Params {
		
		int32_t ReturnValue;

	}; GetMaxTableIndex_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Synthesis.SynthComponentMonoWaveTable.GetKeyFrameValuesForTable
inline struct TArray<Unknown> USynthComponentMonoWaveTable::GetKeyFrameValuesForTable(float TableIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.SynthComponentMonoWaveTable.GetKeyFrameValuesForTable");

	struct GetKeyFrameValuesForTable_Params {
		float TableIndex;
		struct TArray<Unknown> ReturnValue;

	}; GetKeyFrameValuesForTable_Params Params;

	Params.TableIndex = TableIndex;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Synthesis.SynthComponentMonoWaveTable.GetCurveTangent
inline float USynthComponentMonoWaveTable::GetCurveTangent(int32_t TableIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.SynthComponentMonoWaveTable.GetCurveTangent");

	struct GetCurveTangent_Params {
		int32_t TableIndex;
		float ReturnValue;

	}; GetCurveTangent_Params Params;

	Params.TableIndex = TableIndex;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Synthesis.SynthSamplePlayer.SetSoundWave
inline void USynthSamplePlayer::SetSoundWave(struct Unknown InSoundWave) {
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.SynthSamplePlayer.SetSoundWave");

	struct SetSoundWave_Params {
		struct Unknown InSoundWave;
	}; SetSoundWave_Params Params;

	Params.InSoundWave = InSoundWave;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Synthesis.SynthSamplePlayer.SetScrubTimeWidth
inline void USynthSamplePlayer::SetScrubTimeWidth(float InScrubTimeWidthSec) {
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.SynthSamplePlayer.SetScrubTimeWidth");

	struct SetScrubTimeWidth_Params {
		float InScrubTimeWidthSec;
	}; SetScrubTimeWidth_Params Params;

	Params.InScrubTimeWidthSec = InScrubTimeWidthSec;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Synthesis.SynthSamplePlayer.SetScrubMode
inline void USynthSamplePlayer::SetScrubMode(char bScrubMode) {
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.SynthSamplePlayer.SetScrubMode");

	struct SetScrubMode_Params {
		char bScrubMode;
	}; SetScrubMode_Params Params;

	Params.bScrubMode = bScrubMode;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Synthesis.SynthSamplePlayer.SetPitch
inline void USynthSamplePlayer::SetPitch(float InPitch, float TimeSec) {
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.SynthSamplePlayer.SetPitch");

	struct SetPitch_Params {
		float InPitch;
		float TimeSec;
	}; SetPitch_Params Params;

	Params.InPitch = InPitch;
	Params.TimeSec = TimeSec;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Synthesis.SynthSamplePlayer.SeekToTime
inline void USynthSamplePlayer::SeekToTime(float TimeSec, enum class Unknow SeekType, char bWrap) {
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.SynthSamplePlayer.SeekToTime");

	struct SeekToTime_Params {
		float TimeSec;
		enum class Unknow SeekType;
		char bWrap;
	}; SeekToTime_Params Params;

	Params.TimeSec = TimeSec;
	Params.SeekType = SeekType;
	Params.bWrap = bWrap;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Synthesis.SynthSamplePlayer.IsLoaded
inline char USynthSamplePlayer::IsLoaded() {
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.SynthSamplePlayer.IsLoaded");

	struct IsLoaded_Params {
		
		char ReturnValue;

	}; IsLoaded_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Synthesis.SynthSamplePlayer.GetSampleDuration
inline float USynthSamplePlayer::GetSampleDuration() {
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.SynthSamplePlayer.GetSampleDuration");

	struct GetSampleDuration_Params {
		
		float ReturnValue;

	}; GetSampleDuration_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Synthesis.SynthSamplePlayer.GetCurrentPlaybackProgressTime
inline float USynthSamplePlayer::GetCurrentPlaybackProgressTime() {
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.SynthSamplePlayer.GetCurrentPlaybackProgressTime");

	struct GetCurrentPlaybackProgressTime_Params {
		
		float ReturnValue;

	}; GetCurrentPlaybackProgressTime_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Synthesis.SynthSamplePlayer.GetCurrentPlaybackProgressPercent
inline float USynthSamplePlayer::GetCurrentPlaybackProgressPercent() {
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.SynthSamplePlayer.GetCurrentPlaybackProgressPercent");

	struct GetCurrentPlaybackProgressPercent_Params {
		
		float ReturnValue;

	}; GetCurrentPlaybackProgressPercent_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Synthesis.SynthKnob.SetValue
inline void USynthKnob::SetValue(float InValue) {
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.SynthKnob.SetValue");

	struct SetValue_Params {
		float InValue;
	}; SetValue_Params Params;

	Params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Synthesis.SynthKnob.SetStepSize
inline void USynthKnob::SetStepSize(float InValue) {
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.SynthKnob.SetStepSize");

	struct SetStepSize_Params {
		float InValue;
	}; SetStepSize_Params Params;

	Params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Synthesis.SynthKnob.SetLocked
inline void USynthKnob::SetLocked(char InValue) {
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.SynthKnob.SetLocked");

	struct SetLocked_Params {
		char InValue;
	}; SetLocked_Params Params;

	Params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Synthesis.SynthKnob.GetValue
inline float USynthKnob::GetValue() {
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.SynthKnob.GetValue");

	struct GetValue_Params {
		
		float ReturnValue;

	}; GetValue_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

