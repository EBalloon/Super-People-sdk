// UserDefinedEnum Weapo.E_DrawingType
enum class E_DrawingType : uint8 {
	E_DrawingType = 0,
	E_DrawingType = 1,
	E_DrawingType = 2
};

// BlueprintGeneratedClass Weapo.ProjectileTrajectoryComponent_C
struct UProjectileTrajectoryComponent_C : UActorComponent {
	Unknown UberGraphFrame; //  0xb0 Size(8)
	Unknown BeamsArray; //  0xb8 Size(10)
	Unknown Decal; //  0xc8 Size(8)
	Unknown StartLocation; //  0xd0 Size(c)
	Unknown InitialVelocity; //  0xdc Size(c)
	float PathLifeTime; //  0xe8 Size(4)
	float TimeInterval; //  0xec Size(4)
	Unknown DrawingType; //  0xf0 Size(1)
	Unknown DesiredStartLocation; //  0xf4 Size(c)
	Unknown InitialLocalVelocity; //  0x100 Size(c)
	Unknown BeamParticle; //  0x110 Size(8)
	Unknown DebugColor; //  0x118 Size(10)
	float DebugThickness; //  0x128 Size(4)
	Unknown ParticleColor; //  0x12c Size(10)
	float ParticleColorMultipler; //  0x13c Size(4)
	Unknown DecalMaterial; //  0x140 Size(8)
	Unknown DecalColor; //  0x148 Size(10)
	Unknown DecalScale; //  0x158 Size(c)
	char ConstantScale; //  0x164 Size(1)
	Unknown ResizerTimer; //  0x168 Size(8)
	Unknown DecalScaleMin; //  0x170 Size(c)
	Unknown DecalScaleMax; //  0x17c Size(c)
	float ScaleTime; //  0x188 Size(4)
	char ScaleStart; //  0x18c Size(1)
	Unknown Gravity; //  0x190 Size(c)
	float InitXAxisValue; //  0x19c Size(4)
	char CreateBeam; //  0x1a0 Size(1)
	int32_t HitBeamIndex; //  0x1a4 Size(4)
	Unknown SplineStaticMesh; //  0x1a8 Size(8)
	Unknown SplineMeshArray; //  0x1b0 Size(10)
	Unknown S; //  0x1c0 Size(c)
	Unknown S; //  0x1d0 Size(8)
	char Hit; //  0x1d8 Size(1)
	char bForceStop; //  0x1d9 Size(1)
	char FPSMode; //  0x1da Size(1)

	void InterpProjectileTrajectoryJumpState(char Jump, Unknown Location, Unknown Rotation, Unknown& StartLocation, Unknown& Velocity); // Function Weapo.ProjectileTrajectoryComponent_C.InterpProjectileTrajectoryJumpState(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game+0x23a73f0>
};

// BlueprintGeneratedClass Weapo.B
struct AB : ABravoHotelGrenadeWeapon {
	Unknown UberGraphFrame; //  0x1f20 Size(8)
	Unknown StaticMesh_Ring; //  0x1f28 Size(8)
	Unknown StaticMesh_Lever; //  0x1f30 Size(8)
	float Timeline_0_Lerp_77CED3694A7ECD58; //  0x1f38 Size(4)
	Unknown Timeline_0__Direction_77CED3694A7ECD58C02266AF5F5B5991; //  0x1f3c Size(1)
	Unknown Timeline_1; //  0x1f40 Size(8)
	float Lerp_Lerp_EDD5977E4E850EC460B1E599F1FF45F8; //  0x1f48 Size(4)
	Unknown Lerp__Direction_EDD5977E4E850EC460B1E599F1FF45F8; //  0x1f4c Size(1)
	Unknown Lerp; //  0x1f50 Size(8)
	Unknown InterpOffset; //  0x1f58 Size(c)
	Unknown DesiredLocation; //  0x1f64 Size(c)
	Unknown InitalLocalVelocity; //  0x1f70 Size(c)
	Unknown DesiredLocation_Ing; //  0x1f7c Size(c)
	Unknown InitalLocalVelocity_Ing; //  0x1f88 Size(c)
	Unknown ThrowingWeaponState; //  0x1f94 Size(1)
	char ThrowingAction_Bool; //  0x1f95 Size(1)
	Unknown DesiredLocation_3; //  0x1f98 Size(c)
	Unknown DesiredLocation_2_Ing; //  0x1fa4 Size(c)
	Unknown InitalLocalVelocity_3; //  0x1fb0 Size(c)
	Unknown InitalLocalVelocity_2_ing; //  0x1fbc Size(c)
	float PathLifeTime; //  0x1fc8 Size(4)
	float TimeInterval; //  0x1fcc Size(4)
	Unknown IndicatorComponent_2; //  0x1fd0 Size(8)
	Unknown IndicatorComponent_3; //  0x1fd8 Size(8)
	Unknown TrajectoryComponent_2; //  0x1fe0 Size(8)
	Unknown TrajectoryComponent_3; //  0x1fe8 Size(8)

	Unknown GetDebugInfo(); // Function Weapot.B.GetDebugInfo(HasOutParms|BlueprintCallable|BlueprintEvent) // <Game+0x23a73f0>
};

// BlueprintGeneratedClass Weapo.B
struct AB : ABravoHotelMagazineForDrop {
	Unknown UberGraphFrame; //  0x360 Size(8)
	float PhysicsSimulateTime; //  0x368 Size(4)
	float LifeTime; //  0x36c Size(4)
	float AddImpulse; //  0x370 Size(4)
	Unknown Stance; //  0x374 Size(1)
	float AddImpulse_Crouched; //  0x378 Size(4)
	float AddImpulse_Proned; //  0x37c Size(4)

	void ReceiveBeginPlay(); // Function Weapot.B.ReceiveBeginPlay(Event|Protected|BlueprintEvent) // <Game+0x23a73f0>
};

