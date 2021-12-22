// Enum MagicLeapARPin.EMagicLeapAutoPinType
enum class EMagicLeapAutoPinType : uint8 {
	EMagicLeapAutoPinType = 0,
	EMagicLeapAutoPinType = 1,
	EMagicLeapAutoPinType = 2,
	EMagicLeapAutoPinType = 3
};

// Enum MagicLeapARPin.EMagicLeapPassableWorldError
enum class EMagicLeapPassableWorldError : uint8 {
	EMagicLeapPassableWorldError = 0,
	EMagicLeapPassableWorldError = 1,
	EMagicLeapPassableWorldError = 2,
	EMagicLeapPassableWorldError = 3,
	EMagicLeapPassableWorldError = 4,
	EMagicLeapPassableWorldError = 5,
	EMagicLeapPassableWorldError = 6,
	EMagicLeapPassableWorldError = 7,
	EMagicLeapPassableWorldError = 8,
	EMagicLeapPassableWorldError = 9,
	EMagicLeapPassableWorldError = 10,
	EMagicLeapPassableWorldError = 11
};

// Class MagicLeapARPin.MagicLeapARPinComponent
struct UMagicLeapARPinComponent : USceneComponent {
	struct FString ObjectUID; //  0x238 Size(10)
	int32_t UserIndex; //  0x248 Size(4)
	enum class Unknow AutoPinType; //  0x24c Size(1)
	char bShouldPinActor; //  0x24d Size(1)
	struct Unknown* PinDataClass; //  0x250 Size(8)
	struct FMulticastInlineDelegate OnPersistentEntityPinned; //  0x258 Size(10)
	struct FMulticastInlineDelegate OnPersistentEntityPinLost; //  0x268 Size(10)
	struct Unknown PinnedCFUID; //  0x278 Size(10)
	struct Unknown PinnedSceneComponent; //  0x288 Size(8)
	struct Unknown PinData; //  0x290 Size(8)

	void UnPin(); // Function MagicLeapARPin.MagicLeapARPinComponent.UnPin(Final|Native|Public|BlueprintCallable) // <Game+0x17b9a60>
};

// Class MagicLeapARPin.MagicLeapARPinSettings
struct UMagicLeapARPinSettings : Object {
	float UpdateCheckFrequency; //  0x28 Size(4)
	struct Unknown OnUpdatedEventTriggerDelta; //  0x2c Size(10)
};

// Class MagicLeapARPin.MagicLeapARPinSaveGame
struct UMagicLeapARPinSaveGame : USaveGame {
	struct Unknown PinnedID; //  0x28 Size(10)
	struct Unknown ComponentWorldTransform; //  0x40 Size(30)
	struct Unknown PinTransform; //  0x70 Size(30)
};

