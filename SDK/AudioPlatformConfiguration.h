// Enum AudioPlatformConfiguration.ESoundwaveSampleRateSettings
enum class ESoundwaveSampleRateSettings : uint8_t {
	ESoundwaveSampleRateSettings = 0,
	ESoundwaveSampleRateSettings = 1,
	ESoundwaveSampleRateSettings = 2,
	ESoundwaveSampleRateSettings = 3,
	ESoundwaveSampleRateSettings = 4,
	ESoundwaveSampleRateSettings = 5,
};

// ScriptStruct AudioPlatformConfiguration.PlatformRuntimeAudioCompressionOverrides
struct FPlatformRuntimeAudioCompressionOverrides {
	char bOverrideCompressionTimes : 0; // 0x0 (1)
	float DurationThreshold; // 0x4 (4)
	int32_t MaxNumRandomBranches; // 0x8 (4)
	int32_t SoundCueQualityIndex; // 0xC (4)
};

