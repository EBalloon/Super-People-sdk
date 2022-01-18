// Enum OodleNetworkHandlerComponent.EOodleEnableMode
enum class EOodleEnableMode : uint8_t {
	AlwaysEnabled = 0,
	WhenCompressedPacketReceived = 1,
	EOodleEnableMode_MAX = 2,
};

// Class OodleNetworkHandlerComponent.OodleNetworkTrainerCommandlet
class UOodleNetworkTrainerCommandlet : public UCommandlet {

public:

	char bCompressionTest : 0; // 0x80 (1)
	int32_t HashTableSize; // 0x84 (4)
	int32_t DictionarySize; // 0x88 (4)
	int32_t DictionaryTrials; // 0x8C (4)
	int32_t TrialRandomness; // 0x90 (4)
	int32_t TrialGenerations; // 0x94 (4)
	char bNoTrials : 0; // 0x98 (1)
};

