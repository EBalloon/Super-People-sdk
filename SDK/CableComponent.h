// Class CableComponent.CableActor
class ACableActor : public UActor {

public:

	struct Unknown CableComponent; // 0x310 (8)
};

// Class CableComponent.CableComponent
class UCableComponent : public UMeshComponent {

public:

	char bAttachStart : 0; // 0x4E0 (1)
	char bAttachEnd : 0; // 0x4E1 (1)
	struct Unknown AttachEndTo; // 0x4E8 (40)
	struct FName AttachEndToSocketName; // 0x510 (8)
	struct Unknown EndLocation; // 0x518 (12)
	float CableLength; // 0x524 (4)
	int32_t NumSegments; // 0x528 (4)
	float SubstepTime; // 0x52C (4)
	int32_t SolverIterations; // 0x530 (4)
	char bEnableStiffness : 0; // 0x534 (1)
	char bEnableCollision : 0; // 0x535 (1)
	float CollisionFriction; // 0x538 (4)
	struct Unknown CableForce; // 0x53C (12)
	float CableGravityScale; // 0x548 (4)
	float CableWidth; // 0x54C (4)
	int32_t NumSides; // 0x550 (4)
	float TileMaterial; // 0x554 (4)

	void SetAttachEndToComponent(struct Unknown Component, struct FName SocketName); // Function CableComponent.CableComponent.SetAttachEndToComponent(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1867FF0>
	void SetAttachEndTo(struct Unknown Actor, struct FName ComponentProperty, struct FName SocketName); // Function CableComponent.CableComponent.SetAttachEndTo(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1867EF0>
	void GetCableParticleLocations(struct TArray<Unknown>& Locations); // Function CableComponent.CableComponent.GetCableParticleLocations(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1867E40>
	struct Unknown GetAttachedComponent(); // Function CableComponent.CableComponent.GetAttachedComponent(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1867E10>
	struct Unknown GetAttachedActor(); // Function CableComponent.CableComponent.GetAttachedActor(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1867DE0>
};

// Function CableComponent.CableComponent.SetAttachEndToComponent
inline void UCableComponent::SetAttachEndToComponent(struct Unknown Component, struct FName SocketName) {
	static auto fn = UObject::FindObject<UFunction>("Function CableComponent.CableComponent.SetAttachEndToComponent");

	struct SetAttachEndToComponent_Params {
		struct Unknown Component;
		struct FName SocketName;
	}; SetAttachEndToComponent_Params Params;

	Params.Component = Component;
	Params.SocketName = SocketName;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function CableComponent.CableComponent.SetAttachEndTo
inline void UCableComponent::SetAttachEndTo(struct Unknown Actor, struct FName ComponentProperty, struct FName SocketName) {
	static auto fn = UObject::FindObject<UFunction>("Function CableComponent.CableComponent.SetAttachEndTo");

	struct SetAttachEndTo_Params {
		struct Unknown Actor;
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
inline void UCableComponent::GetCableParticleLocations(struct TArray<Unknown>& Locations) {
	static auto fn = UObject::FindObject<UFunction>("Function CableComponent.CableComponent.GetCableParticleLocations");

	struct GetCableParticleLocations_Params {
		struct TArray<Unknown>& Locations;
	}; GetCableParticleLocations_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Locations = Params.Locations;

}

// Function CableComponent.CableComponent.GetAttachedComponent
inline struct Unknown UCableComponent::GetAttachedComponent() {
	static auto fn = UObject::FindObject<UFunction>("Function CableComponent.CableComponent.GetAttachedComponent");

	struct GetAttachedComponent_Params {
		
		struct Unknown ReturnValue;

	}; GetAttachedComponent_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function CableComponent.CableComponent.GetAttachedActor
inline struct Unknown UCableComponent::GetAttachedActor() {
	static auto fn = UObject::FindObject<UFunction>("Function CableComponent.CableComponent.GetAttachedActor");

	struct GetAttachedActor_Params {
		
		struct Unknown ReturnValue;

	}; GetAttachedActor_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

