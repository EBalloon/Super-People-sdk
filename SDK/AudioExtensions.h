// Class AudioExtensions.SoundfieldEffectBase
class USoundfieldEffectBase : public Object {

public:

	struct USoundfieldEffectSettingsBase Settings; // 0x28 (8)
};

// ScriptStruct AudioExtensions.SoundModulationParameter
struct FSoundModulationParameter {
	struct FName Control; // 0x0 (8)
	float Value; // 0x8 (4)
};

// ScriptStruct AudioExtensions.SoundModulation
struct FSoundModulation {
	struct TArray<struct USoundModulationPluginSourceSettingsBase> Settings; // 0x0 (16)
};

