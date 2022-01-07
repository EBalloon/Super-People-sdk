// Class CableComponent.CableActor
class ACableActor : public UActor {

public:

	struct Unknown CableComponent; // 0x300 (8)
};

// Class CableComponent.CableComponent
class UCableComponent : public UMeshComponent {

public:

	char bAttachStart : 0; // 0x4D8 (1)
	char bAttachEnd : 0; // 0x4D9 (1)
	struct Unknown AttachEndTo; // 0x4E0 (40)
	struct FName AttachEndToSocketName; // 0x508 (8)
	struct Unknown EndLocation; // 0x510 (12)
	float CableLength; // 0x51C (4)
	int32_t NumSegments; // 0x520 (4)
	float SubstepTime; // 0x524 (4)
	int32_t SolverIterations; // 0x528 (4)
	char bEnableStiffness : 0; // 0x52C (1)
	char bEnableCollision : 0; // 0x52D (1)
	float CollisionFriction; // 0x530 (4)
	struct Unknown CableForce; // 0x534 (12)
	float CableGravityScale; // 0x540 (4)
	float CableWidth; // 0x544 (4)
	int32_t NumSides; // 0x548 (4)
	float TileMaterial; // 0x54C (4)

	void SetAttachEndToComponent(struct Unknown Component, struct FName SocketName); // Function CableComponent.CableComponent.SetAttachEndToComponent(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x186F820>
	void SetAttachEndTo(struct Unknown Actor, struct FName ComponentProperty, struct FName SocketName); // Function CableComponent.CableComponent.SetAttachEndTo(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x186F720>
	void GetCableParticleLocations(struct TArray<Unknown>& Locations); // Function CableComponent.CableComponent.GetCableParticleLocations(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x186F670>
	struct Unknown GetAttachedComponent(); // Function CableComponent.CableComponent.GetAttachedComponent(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x186F640>
	struct Unknown GetAttachedActor(); // Function CableComponent.CableComponent.GetAttachedActor(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x186F610>
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

