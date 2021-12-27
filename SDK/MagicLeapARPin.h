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
	void PersistentEntityPinLost__Deleg(); // DelegateFunction MagicLeapARPin.MagicLeapARPinComponent.PersistentEntityPinLost__Deleg(MulticastDelegate|Public|Delegate) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
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

// Function MagicLeapARPin.MagicLeapARPinComponent.UnPin
inline void UMagicLeapARPinComponent::UnPin() {
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeapARPin.MagicLeapARPinComponent.UnPin");

	struct UnPin_Params {
		
	}; UnPin_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MagicLeapARPin.MagicLeapARPinComponent.PinSceneComponent
inline char UMagicLeapARPinComponent::PinSceneComponent(struct Unknown ComponentToPin) {
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeapARPin.MagicLeapARPinComponent.PinSceneComponent");

	struct PinSceneComponent_Params {
		struct Unknown ComponentToPin;
		char ReturnValue;

	}; PinSceneComponent_Params Params;

	Params.ComponentToPin = ComponentToPin;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MagicLeapARPin.MagicLeapARPinComponent.PinRestoredOrSynced
inline char UMagicLeapARPinComponent::PinRestoredOrSynced() {
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeapARPin.MagicLeapARPinComponent.PinRestoredOrSynced");

	struct PinRestoredOrSynced_Params {
		
		char ReturnValue;

	}; PinRestoredOrSynced_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MagicLeapARPin.MagicLeapARPinComponent.PinActor
inline char UMagicLeapARPinComponent::PinActor(struct Unknown ActorToPin) {
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeapARPin.MagicLeapARPinComponent.PinActor");

	struct PinActor_Params {
		struct Unknown ActorToPin;
		char ReturnValue;

	}; PinActor_Params Params;

	Params.ActorToPin = ActorToPin;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// DelegateFunction MagicLeapARPin.MagicLeapARPinComponent.PersistentEntityPinned__DelegateSignature
inline void UMagicLeapARPinComponent::PersistentEntityPinned__DelegateSignature(char bRestoredOrSynced) {
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction MagicLeapARPin.MagicLeapARPinComponent.PersistentEntityPinned__DelegateSignature");

	struct PersistentEntityPinned__DelegateSignature_Params {
		char bRestoredOrSynced;
	}; PersistentEntityPinned__DelegateSignature_Params Params;

	Params.bRestoredOrSynced = bRestoredOrSynced;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// DelegateFunction MagicLeapARPin.MagicLeapARPinComponent.PersistentEntityPinLost__Deleg
inline void UMagicLeapARPinComponent::PersistentEntityPinLost__Deleg() {
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction MagicLeapARPin.MagicLeapARPinComponent.PersistentEntityPinLost__Deleg");

	struct PersistentEntityPinLost__Deleg_Params {
		
	}; PersistentEntityPinLost__Deleg_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MagicLeapARPin.MagicLeapARPinComponent.IsPinned
inline char UMagicLeapARPinComponent::IsPinned() {
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeapARPin.MagicLeapARPinComponent.IsPinned");

	struct IsPinned_Params {
		
		char ReturnValue;

	}; IsPinned_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MagicLeapARPin.MagicLeapARPinComponent.GetPinState
inline char UMagicLeapARPinComponent::GetPinState(struct Unknown& State) {
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeapARPin.MagicLeapARPinComponent.GetPinState");

	struct GetPinState_Params {
		struct Unknown& State;
		char ReturnValue;

	}; GetPinState_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	State = Params.State;


	return params.ReturnValue;
}

// Function MagicLeapARPin.MagicLeapARPinComponent.GetPinnedPinID
inline char UMagicLeapARPinComponent::GetPinnedPinID(struct Unknown& PinID) {
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeapARPin.MagicLeapARPinComponent.GetPinnedPinID");

	struct GetPinnedPinID_Params {
		struct Unknown& PinID;
		char ReturnValue;

	}; GetPinnedPinID_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	PinID = Params.PinID;


	return params.ReturnValue;
}

// Function MagicLeapARPin.MagicLeapARPinComponent.GetPinData
inline struct Unknown UMagicLeapARPinComponent::GetPinData(struct Unknown* PinDataClass) {
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeapARPin.MagicLeapARPinComponent.GetPinData");

	struct GetPinData_Params {
		struct Unknown* PinDataClass;
		struct Unknown ReturnValue;

	}; GetPinData_Params Params;

	Params.PinDataClass = PinDataClass;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

