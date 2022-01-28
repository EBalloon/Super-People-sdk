// Enum MagicLeapARPin.EMagicLeapAutoPinType
enum class EMagicLeapAutoPinType : uint8_t {
	OnlyOnDataRestoration = 0,
	Always = 1,
	Never = 2,
	EMagicLeapAutoPinType_MAX = 3,
};

// Enum MagicLeapARPin.EMagicLeapPassableWorldError
enum class EMagicLeapPassableWorldError : uint8_t {
	None = 0,
	LowMapQuality = 1,
	UnableToLocalize = 2,
	Unavailable = 3,
	PrivilegeDenied = 4,
	InvalidParam = 5,
	UnspecifiedFailure = 6,
	PrivilegeRequestPending = 7,
	StartupPending = 8,
	NotImplemented = 9,
	PinNotFound = 10,
	EMagicLeapPassableWorldError_MAX = 11,
};

// Class MagicLeapARPin.MagicLeapARPinComponent
class UMagicLeapARPinComponent : public USceneComponent {

public:

	struct FString ObjectUID; // 0x230 (16)
	int32_t UserIndex; // 0x240 (4)
	enum class EMagicLeapAutoPinType AutoPinType; // 0x244 (1)
	char bShouldPinActor : 0; // 0x245 (1)
	struct UClass* PinDataClass; // 0x248 (8)
	struct FMulticastInlineDelegate OnPersistentEntityPinned; // 0x250 (16)
	struct FMulticastInlineDelegate OnPersistentEntityPinLost; // 0x260 (16)
	struct FGuid PinnedCFUID; // 0x270 (16)
	struct USceneComponent PinnedSceneComponent; // 0x280 (8)
	struct UMagicLeapARPinSaveGame PinData; // 0x288 (8)

	void UnPin(); // Function MagicLeapARPin.MagicLeapARPinComponent.UnPin(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x17DFE90>
	char PinSceneComponent(struct USceneComponent ComponentToPin); // Function MagicLeapARPin.MagicLeapARPinComponent.PinSceneComponent(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x17DFD60>
	char PinRestoredOrSynced(); // Function MagicLeapARPin.MagicLeapARPinComponent.PinRestoredOrSynced(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x17DFD30>
	char PinActor(struct UActor ActorToPin); // Function MagicLeapARPin.MagicLeapARPinComponent.PinActor(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x17DFCA0>
	void PersistentEntityPinned__DelegateSignature(char bRestoredOrSynced); // DelegateFunction MagicLeapARPin.MagicLeapARPinComponent.PersistentEntityPinned__DelegateSignature(MulticastDelegate|Public|Delegate) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void PersistentEntityPinLost__DelegateSignature(); // DelegateFunction MagicLeapARPin.MagicLeapARPinComponent.PersistentEntityPinLost__DelegateSignature(MulticastDelegate|Public|Delegate) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	char IsPinned(); // Function MagicLeapARPin.MagicLeapARPinComponent.IsPinned(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x17DFC40>
	char GetPinState(struct FMagicLeapARPinState& State); // Function MagicLeapARPin.MagicLeapARPinComponent.GetPinState(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x17DFAE0>
	char GetPinnedPinID(struct FGuid& PinID); // Function MagicLeapARPin.MagicLeapARPinComponent.GetPinnedPinID(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x17DFB90>
	struct UMagicLeapARPinSaveGame GetPinData(struct UClass* PinDataClass); // Function MagicLeapARPin.MagicLeapARPinComponent.GetPinData(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x17DFA50>
};

// Class MagicLeapARPin.MagicLeapARPinSettings
class UMagicLeapARPinSettings : public Object {

public:

	float UpdateCheckFrequency; // 0x28 (4)
	struct FMagicLeapARPinState OnUpdatedEventTriggerDelta; // 0x2C (16)
};

// Class MagicLeapARPin.MagicLeapARPinSaveGame
class UMagicLeapARPinSaveGame : public USaveGame {

public:

	struct FGuid PinnedID; // 0x28 (16)
	struct FTransform ComponentWorldTransform; // 0x40 (48)
	struct FTransform PinTransform; // 0x70 (48)
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
inline char UMagicLeapARPinComponent::PinSceneComponent(struct USceneComponent ComponentToPin) {
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeapARPin.MagicLeapARPinComponent.PinSceneComponent");

	struct PinSceneComponent_Params {
		struct USceneComponent ComponentToPin;
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
inline char UMagicLeapARPinComponent::PinActor(struct UActor ActorToPin) {
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeapARPin.MagicLeapARPinComponent.PinActor");

	struct PinActor_Params {
		struct UActor ActorToPin;
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

// DelegateFunction MagicLeapARPin.MagicLeapARPinComponent.PersistentEntityPinLost__DelegateSignature
inline void UMagicLeapARPinComponent::PersistentEntityPinLost__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction MagicLeapARPin.MagicLeapARPinComponent.PersistentEntityPinLost__DelegateSignature");

	struct PersistentEntityPinLost__DelegateSignature_Params {
		
	}; PersistentEntityPinLost__DelegateSignature_Params Params;


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
inline char UMagicLeapARPinComponent::GetPinState(struct FMagicLeapARPinState& State) {
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeapARPin.MagicLeapARPinComponent.GetPinState");

	struct GetPinState_Params {
		struct FMagicLeapARPinState& State;
		char ReturnValue;

	}; GetPinState_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	State = Params.State;


	return params.ReturnValue;
}

// Function MagicLeapARPin.MagicLeapARPinComponent.GetPinnedPinID
inline char UMagicLeapARPinComponent::GetPinnedPinID(struct FGuid& PinID) {
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeapARPin.MagicLeapARPinComponent.GetPinnedPinID");

	struct GetPinnedPinID_Params {
		struct FGuid& PinID;
		char ReturnValue;

	}; GetPinnedPinID_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	PinID = Params.PinID;


	return params.ReturnValue;
}

// Function MagicLeapARPin.MagicLeapARPinComponent.GetPinData
inline struct UMagicLeapARPinSaveGame UMagicLeapARPinComponent::GetPinData(struct UClass* PinDataClass) {
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeapARPin.MagicLeapARPinComponent.GetPinData");

	struct GetPinData_Params {
		struct UClass* PinDataClass;
		struct UMagicLeapARPinSaveGame ReturnValue;

	}; GetPinData_Params Params;

	Params.PinDataClass = PinDataClass;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

