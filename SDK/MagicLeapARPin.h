// Enum MagicLeapARPin.EMagicLeapAutoPinType
enum class EMagicLeapAutoPinType : uint8 {
	EMagicLeapAutoPinType = 0,
	EMagicLeapAutoPinType = 1,
	EMagicLeapAutoPinType = 2,
	EMagicLeapAutoPinType = 3
};

// Enum MagicLeapARPin.EMagicLeapPassableWorldErroD
enum class EMagicLeapPassableWorldErro : uint8 {
	EMagicLeapPassableWorldErro = 0,
	EMagicLeapPassableWorldErroicLeap = 1,
	EMagicLeapPassableWorldErro = 2,
	EMagicLeapPassableWorldErroicLeap = 3,
	EMagicLeapPassableWorldErro = 4,
	EMagicLeapPassableWorldErroicLeap = 5,
	EMagicLeapPassableWorldErro = 6,
	EMagicLeapPassableWorldErroicLeap = 7,
	EMagicLeapPassableWorldErro = 8,
	EMagicLeapPassableWorldErroicLeap = 9,
	EMagicLeapPassableWorldErro = 10,
	EMagicLeapPassableWorldErroicLeap = 11
};

// Class MagicLeapARPin.MagicLeapARPinComponent
struct UMagicLeapARPinComponent : USceneComponent {
	struct FString ObjectUID; //  0x238 Size(10)
	int32_t UserIndex; //  0x248 Size(4)
	Unknown AutoPinType; //  0x24c Size(1)
	char bShouldPinActor; //  0x24d Size(1)
	Unknown PinDataClass; //  0x250 Size(8)
	struct FMulticastInlineDelegate OnPersistentEntityPinned; //  0x258 Size(10)
	struct FMulticastInlineDelegate OnPersistentEntityPinLost; //  0x268 Size(10)
	Unknown PinnedCFUID; //  0x278 Size(10)
	Unknown PinnedSceneComponent; //  0x288 Size(8)
	Unknown PinData; //  0x290 Size(8)

	void UnPin(); // Function MagicLeapARPin.MagicLeapARPinComponent.UnPin(Final|Native|Public|BlueprintCallable) // <Game+0x17b8d50>
};

// Class MagicLeapARPin.MagicLeapARPinSettings
struct UMagicLeapARPinSettings : Object {
	float UpdateCheckFrequency; //  0x28 Size(4)
	Unknown OnUpdatedEventTriggerDelta; //  0x2c Size(10)
};

// Class MagicLeapARPin.MagicLeapARPinSaveGame
struct UMagicLeapARPinSaveGame : USaveGame {
	Unknown PinnedID; //  0x28 Size(10)
	Unknown ComponentWorldTransform; //  0x40 Size(30)
	Unknown PinTransform; //  0x70 Size(30)
};

