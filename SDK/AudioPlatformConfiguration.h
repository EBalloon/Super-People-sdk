// Enum AudioPlatformConfiguration.ESoundwaveSampleRateSettings
enum class ESoundwaveSampleRateSettings : uint8_t {
	Max = 0,
	High = 1,
	Medium = 2,
	Low = 3,
	Min = 4,
	MatchDevice = 5,
};

// ScriptStruct AudioPlatformConfiguration.PlatformRuntimeAudioCompressionOverrides
struct FPlatformRuntimeAudioCompressionOverrides {
	char bOverrideCompressionTimes : 0; // 0x0 (1)
	float DurationThreshold; // 0x4 (4)
	int32_t MaxNumRandomBranches; // 0x8 (4)
	int32_t SoundCueQualityIndex; // 0xC (4)
};

