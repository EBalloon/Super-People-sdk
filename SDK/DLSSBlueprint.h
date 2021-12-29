// Enum DLSSBlueprint.UDLSSMode
enum class UDLSSMode : uint8_t {
	Off = 0,
	Auto = 1,
	UltraQuality = 2,
	Quality = 3,
	Balanced = 4,
	Performance = 5,
	UltraPerformance = 6,
	UDLSSMode_MAX = 7,
};

// Enum DLSSBlueprint.UDLSSSupport
enum class UDLSSSupport : uint8_t {
	Supported = 0,
	NotSupported = 1,
	NotSupportedIncompatibleHardware = 2,
	NotSupportedDriverOutOfDate = 3,
	NotSupportedOperatingSystemOutOfDate = 4,
	NotSupportedByPlatformAtBuildTime = 5,
	UDLSSSupport_MAX = 6,
};

