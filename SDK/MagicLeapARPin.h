// Enum MagicLeapARPin.EMagicLeapAutoPinType
enum class EMagicLeapAutoPinType : uint8_t {
	EMagicLeapAutoPinType = 0,
	EMagicLeapAutoPinType = 1,
	EMagicLeapAutoPinType = 2,
	EMagicLeapAutoPinType = 3,
};

// Enum MagicLeapARPin.EMagicLeapPassableWorldError
enum class EMagicLeapPassableWorldError : uint8_t {
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
	EMagicLeapPassableWorldError = 11,
};

// Class MagicLeapARPin.MagicLeapARPinComponent
class UMagicLeapARPinComponent : public USceneComponent {

public:

	struct FString ObjectUID; // 0x238 (16)
	int32_t UserIndex; // 0x248 (4)
	enum class Unknow AutoPinType; // 0x24C (1)
	char bShouldPinActor : 0; // 0x24D (1)
	struct Unknown* PinDataClass; // 0x250 (8)
	struct FMulticastInlineDelegate OnPersistentEntityPinned; // 0x258 (16)
	struct FMulticastInlineDelegate OnPersistentEntityPinLost; // 0x268 (16)
	struct Unknown PinnedCFUID; // 0x278 (16)
	struct Unknown PinnedSceneComponent; // 0x288 (8)
	struct Unknown PinData; // 0x290 (8)

	void UnPin(); // Function MagicLeapARPin.MagicLeapARPinComponent.UnPin(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x17BAED0>
	char PinSceneComponent(struct Unknown ComponentToPin); // Function MagicLeapARPin.MagicLeapARPinComponent.PinSceneComponent(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x17BADA0>
	char PinRestoredOrSynced(); // Function MagicLeapARPin.MagicLeapARPinComponent.PinRestoredOrSynced(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x17BAD70>
	char PinActor(struct Unknown ActorToPin); // Function MagicLeapARPin.MagicLeapARPinComponent.PinActor(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x17BACE0>
	void PersistentEntityPinned__DelegateSignature(char bRestoredOrSynced); // DelegateFunction MagicLeapARPin.MagicLeapARPinComponent.PersistentEntityPinned__DelegateSignature(MulticastDelegate|Public|Delegate) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void PersistentEntityPinLost__DelegateSignature(); // DelegateFunction MagicLeapARPin.MagicLeapARPinComponent.PersistentEntityPinLost__DelegateSignature(MulticastDelegate|Public|Delegate) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	char IsPinned(); // Function MagicLeapARPin.MagicLeapARPinComponent.IsPinned(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x17BAC80>
	char GetPinState(struct Unknown& State); // Function MagicLeapARPin.MagicLeapARPinComponent.GetPinState(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x17BAB20>
	char GetPinnedPinID(struct Unknown& PinID); // Function MagicLeapARPin.MagicLeapARPinComponent.GetPinnedPinID(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x17BABD0>
	struct Unknown GetPinData(struct Unknown* PinDataClass); // Function MagicLeapARPin.MagicLeapARPinComponent.GetPinData(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x17BAA90>
};

// Class MagicLeapARPin.MagicLeapARPinSettings
class UMagicLeapARPinSettings : public Object {

public:

	float UpdateCheckFrequency; // 0x28 (4)
	struct Unknown OnUpdatedEventTriggerDelta; // 0x2C (16)
};

// Class MagicLeapARPin.MagicLeapARPinSaveGame
class UMagicLeapARPinSaveGame : public USaveGame {

public:

	struct Unknown PinnedID; // 0x28 (16)
	struct Unknown ComponentWorldTransform; // 0x40 (48)
	struct Unknown PinTransform; // 0x70 (48)
};

// ScriptStruct MagicLeapARPin.MagicLeapARPinState
struct FMagicLeapARPinState {
	float Confidence; // 0x0 (4)
	float ValidRadius; // 0x4 (4)
	float RotationError; // 0x8 (4)
	float TranslationError; // 0xC (4)
};

