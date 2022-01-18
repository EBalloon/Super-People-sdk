// Class CableComponent.CableActor
class ACableActor : public UActor {

public:

	struct UCableComponent CableComponent; // 0x300 (8)
};

// Class CableComponent.CableComponent
class UCableComponent : public UMeshComponent {

public:

	char bAttachStart : 0; // 0x4D0 (1)
	char bAttachEnd : 0; // 0x4D1 (1)
	struct FComponentReference AttachEndTo; // 0x4D8 (40)
	struct FName AttachEndToSocketName; // 0x500 (8)
	struct FVector EndLocation; // 0x508 (12)
	float CableLength; // 0x514 (4)
	int32_t NumSegments; // 0x518 (4)
	float SubstepTime; // 0x51C (4)
	int32_t SolverIterations; // 0x520 (4)
	char bEnableStiffness : 0; // 0x524 (1)
	char bEnableCollision : 0; // 0x525 (1)
	float CollisionFriction; // 0x528 (4)
	struct FVector CableForce; // 0x52C (12)
	float CableGravityScale; // 0x538 (4)
	float CableWidth; // 0x53C (4)
	int32_t NumSides; // 0x540 (4)
	float TileMaterial; // 0x544 (4)

	void SetAttachEndToComponent(struct USceneComponent Component, struct FName SocketName); // Function CableComponent.CableComponent.SetAttachEndToComponent(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1871500>
	void SetAttachEndTo(struct UActor Actor, struct FName ComponentProperty, struct FName SocketName); // Function CableComponent.CableComponent.SetAttachEndTo(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1871400>
	void GetCableParticleLocations(struct TArray<struct FVector>& Locations); // Function CableComponent.CableComponent.GetCableParticleLocations(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1871350>
	struct USceneComponent GetAttachedComponent(); // Function CableComponent.CableComponent.GetAttachedComponent(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1871320>
	struct UActor GetAttachedActor(); // Function CableComponent.CableComponent.GetAttachedActor(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18712F0>
};

// Function CableComponent.CableComponent.SetAttachEndToComponent
inline void UCableComponent::SetAttachEndToComponent(struct USceneComponent Component, struct FName SocketName) {
	static auto fn = UObject::FindObject<UFunction>("Function CableComponent.CableComponent.SetAttachEndToComponent");

	struct SetAttachEndToComponent_Params {
		struct USceneComponent Component;
		struct FName SocketName;
	}; SetAttachEndToComponent_Params Params;

	Params.Component = Component;
	Params.SocketName = SocketName;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function CableComponent.CableComponent.SetAttachEndTo
inline void UCableComponent::SetAttachEndTo(struct UActor Actor, struct FName ComponentProperty, struct FName SocketName) {
	static auto fn = UObject::FindObject<UFunction>("Function CableComponent.CableComponent.SetAttachEndTo");

	struct SetAttachEndTo_Params {
		struct UActor Actor;
		struct FName ComponentProperty;
		struct FName SocketName;
	}; SetAttachEndTo_Params Params;

	Params.Actor = Actor;
	Params.ComponentProperty = ComponentProperty;
	Params.SocketName = SocketName;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function CableComponent.CableComponent.GetCableParticleLocations
inline void UCableComponent::GetCableParticleLocations(struct TArray<struct FVector>& Locations) {
	static auto fn = UObject::FindObject<UFunction>("Function CableComponent.CableComponent.GetCableParticleLocations");

	struct GetCableParticleLocations_Params {
		struct TArray<struct FVector>& Locations;
	}; GetCableParticleLocations_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Locations = Params.Locations;

}

// Function CableComponent.CableComponent.GetAttachedComponent
inline struct USceneComponent UCableComponent::GetAttachedComponent() {
	static auto fn = UObject::FindObject<UFunction>("Function CableComponent.CableComponent.GetAttachedComponent");

	struct GetAttachedComponent_Params {
		
		struct USceneComponent ReturnValue;

	}; GetAttachedComponent_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function CableComponent.CableComponent.GetAttachedActor
inline struct UActor UCableComponent::GetAttachedActor() {
	static auto fn = UObject::FindObject<UFunction>("Function CableComponent.CableComponent.GetAttachedActor");

	struct GetAttachedActor_Params {
		
		struct UActor ReturnValue;

	}; GetAttachedActor_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

