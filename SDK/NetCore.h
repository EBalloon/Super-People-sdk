// Class NetCore.NetAnalyticsAggregatorConfig
class UNetAnalyticsAggregatorConfig : public Object {

public:

	struct TArray<struct FNetAnalyticsDataConfig> NetAnalyticsData; // 0x28 (16)
};

// ScriptStruct NetCore.NetAnalyticsDataConfig
struct FNetAnalyticsDataConfig {
	struct FName DataName; // 0x0 (8)
	char bEnabled : 0; // 0x8 (1)
};

