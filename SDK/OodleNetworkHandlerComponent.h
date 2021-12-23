// Enum OodleNetworkHandlerComponent.EOodleEnableMode
enum class EOodleEnableMode : uint8 {
	EOodleEnableMode = 0
	EOodleEnableMode = 1
	EOodleEnableMode = 2
};

// Class OodleNetworkHandlerComponent.OodleNetworkTrainerCommandlet
class UOodleNetworkTrainerCommandlet : UCommandlet {
	char bCompressionTest : 0; // 0x80 (1)
	int32_t HashTableSize; // 0x84 (4)
	int32_t DictionarySize; // 0x88 (4)
	int32_t DictionaryTrials; // 0x8C (4)
	int32_t TrialRandomness; // 0x90 (4)
	int32_t TrialGenerations; // 0x94 (4)
	char bNoTrials : 0; // 0x98 (1)
};

