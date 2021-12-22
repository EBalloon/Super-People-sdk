// Class CableComponent.CableActor
struct ACableActor : UActor {
	struct Unknown CableComponent; //  0x310 Size(8)
};

// Class CableComponent.CableComponent
struct UCableComponent : UMeshComponent {
	char bAttachStart; //  0x4e8 Size(1)
	char bAttachEnd; //  0x4e9 Size(1)
	struct Unknown AttachEndTo; //  0x4f0 Size(28)
	struct FName AttachEndToSocketName; //  0x518 Size(8)
	struct Unknown EndLocation; //  0x520 Size(c)
	float CableLength; //  0x52c Size(4)
	int32_t NumSegments; //  0x530 Size(4)
	float SubstepTime; //  0x534 Size(4)
	int32_t SolverIterations; //  0x538 Size(4)
	char bEnableStiffness; //  0x53c Size(1)
	char bEnableCollision; //  0x53d Size(1)
	float CollisionFriction; //  0x540 Size(4)
	struct Unknown CableForce; //  0x544 Size(c)
	float CableGravityScale; //  0x550 Size(4)
	float CableWidth; //  0x554 Size(4)
	int32_t NumSides; //  0x558 Size(4)
	float TileMaterial; //  0x55c Size(4)

	void SetAttachEndToComponent(struct Unknown Component, struct FName SocketName); // Function CableComponent.CableComponent.SetAttachEndToComponent(Final|Native|Public|BlueprintCallable) // <Game+0x1859aa0>
};

