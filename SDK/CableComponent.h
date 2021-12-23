// Class CableComponent.CableActor
class ACableActor : UActor {
	struct Unknown CableComponent; // 0x310 (8)
};

// Class CableComponent.CableComponent
class UCableComponent : UMeshComponent {
	char bAttachStart : 0; // 0x4E8 (1)
	char bAttachEnd : 0; // 0x4E9 (1)
	struct Unknown AttachEndTo; // 0x4F0 (40)
	struct FName AttachEndToSocketName; // 0x518 (8)
	struct Unknown EndLocation; // 0x520 (12)
	float CableLength; // 0x52C (4)
	int32_t NumSegments; // 0x530 (4)
	float SubstepTime; // 0x534 (4)
	int32_t SolverIterations; // 0x538 (4)
	char bEnableStiffness : 0; // 0x53C (1)
	char bEnableCollision : 0; // 0x53D (1)
	float CollisionFriction; // 0x540 (4)
	struct Unknown CableForce; // 0x544 (12)
	float CableGravityScale; // 0x550 (4)
	float CableWidth; // 0x554 (4)
	int32_t NumSides; // 0x558 (4)
	float TileMaterial; // 0x55C (4)

	void SetAttachEndToComponent(struct Unknown Component, struct FName SocketName); // Function CableComponent.CableComponent.SetAttachEndToComponent(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1859AA0>
	void SetAttachEndTo(struct Unknown Actor, struct FName ComponentProperty, struct FName SocketName); // Function CableComponent.CableComponent.SetAttachEndTo(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18599A0>
	void GetCableParticleLocations(struct TArray<Unknown>& Locations); // Function CableComponent.CableComponent.GetCableParticleLocations(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18598F0>
	struct Unknown GetAttachedComponent(); // Function CableComponent.CableComponent.GetAttachedComponent(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18598C0>
	struct Unknown GetAttachedActor(); // Function CableComponent.CableComponent.GetAttachedActor(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1859890>
};

