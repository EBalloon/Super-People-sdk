// BlueprintGeneratedClass ProjectileTrajectoryComponent.ProjectileTrajectoryComponent_C
class UProjectileTrajectoryComponent_C : public UActorComponent {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0xB0 (8)
	struct TArray<struct UParticleSystemComponent> BeamsArray; // 0xB8 (16)
	struct UDecalComponent Decal; // 0xC8 (8)
	struct FVector StartLocation; // 0xD0 (12)
	struct FVector InitialVelocity; // 0xDC (12)
	float PathLifeTime; // 0xE8 (4)
	float TimeInterval; // 0xEC (4)
	char DrawingType; // 0xF0 (1)
	struct FVector DesiredStartLocation; // 0xF4 (12)
	struct FVector InitialLocalVelocity; // 0x100 (12)
	struct UParticleSystem BeamParticle; // 0x110 (8)
	struct FLinearColor DebugColor; // 0x118 (16)
	float DebugThickness; // 0x128 (4)
	struct FLinearColor ParticleColor; // 0x12C (16)
	float ParticleColorMultipler; // 0x13C (4)
	struct UMaterialInterface DecalMaterial; // 0x140 (8)
	struct FLinearColor DecalColor; // 0x148 (16)
	struct FVector DecalScale; // 0x158 (12)
	char ConstantScale? : 0; // 0x164 (1)
	struct FTimerHandle ResizerTimer; // 0x168 (8)
	struct FVector DecalScaleMin; // 0x170 (12)
	struct FVector DecalScaleMax; // 0x17C (12)
	float ScaleTime; // 0x188 (4)
	char ScaleStart? : 0; // 0x18C (1)
	struct FVector Gravity; // 0x190 (12)
	float InitXAxisValue; // 0x19C (4)
	char CreateBeam : 0; // 0x1A0 (1)
	int32_t HitBeamIndex; // 0x1A4 (4)
	struct USplineMeshComponent SplineStaticMesh; // 0x1A8 (8)
	struct TArray<struct USplineMeshComponent> SplineMeshArray; // 0x1B0 (16)
	struct FVector SM-IndicatorScale; // 0x1C0 (12)
	struct UStaticMeshComponent SM-Indicator; // 0x1D0 (8)
	char Hit : 0; // 0x1D8 (1)
	char bForceStop : 0; // 0x1D9 (1)
	char FPSMode : 0; // 0x1DA (1)

	void InterpProjectileTrajectoryJumpState(char Jump, struct FVector Location, struct FRotator Rotation, struct FVector& StartLocation, struct FVector& Velocity); // Function ProjectileTrajectoryComponent.ProjectileTrajectoryComponent_C.InterpProjectileTrajectoryJumpState(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void ResizeDecalFunc(); // Function ProjectileTrajectoryComponent.ProjectileTrajectoryComponent_C.ResizeDecalFunc(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void SetParticleColorDecalColor(); // Function ProjectileTrajectoryComponent.ProjectileTrajectoryComponent_C.SetParticleColorDecalColor(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void CalculateStartLocationAndLocalVelocity(struct FVector& StartLocaton, struct FVector& In1tialLocalVelocity); // Function ProjectileTrajectoryComponent.ProjectileTrajectoryComponent_C.CalculateStartLocationAndLocalVelocity(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <Game_BE.exe+0x2B80160>
	void ClearBeams(); // Function ProjectileTrajectoryComponent.ProjectileTrajectoryComponent_C.ClearBeams(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void AddNewBeam(struct FVector NewSourcePoint, struct FVector NewTargetPoint, int32_t Index); // Function ProjectileTrajectoryComponent.ProjectileTrajectoryComponent_C.AddNewBeam(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void VisualizeSegment(char Selection, struct FVector Point1, struct FVector Point2, int32_t Index); // Function ProjectileTrajectoryComponent.ProjectileTrajectoryComponent_C.VisualizeSegment(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void GetSegmentAtTime(struct FVector StartLocation, struct FVector InitialVelocity, struct FVector Gravity, float Time1, float Time2, struct FVector& Point1, struct FVector& Point2); // Function ProjectileTrajectoryComponent.ProjectileTrajectoryComponent_C.GetSegmentAtTime(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void DrawProjectileTrajectory(struct FVector DesiredStartLocation, struct FVector Gravity, struct FVector InitialLocalVelocity, float PathLifeTime, float TimeInterval); // Function ProjectileTrajectoryComponent.ProjectileTrajectoryComponent_C.DrawProjectileTrajectory(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void BreakDrawingLoop(); // Function ProjectileTrajectoryComponent.ProjectileTrajectoryComponent_C.BreakDrawingLoop(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void ReceiveTick(float DeltaSeconds); // Function ProjectileTrajectoryComponent.ProjectileTrajectoryComponent_C.ReceiveTick(Event|Public|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void StartDraw(struct FVector DesiredStartLocation, struct FVector Gravity, struct FVector InitialLocalVelocity, float PathLifeTime, float TimeInterval, char DrawingType); // Function ProjectileTrajectoryComponent.ProjectileTrajectoryComponent_C.StartDraw(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void StopDraw(); // Function ProjectileTrajectoryComponent.ProjectileTrajectoryComponent_C.StopDraw(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void SpawnActorFromClass(struct UClass* Class, struct FTransform SpawnTransform, struct FVector ProjectileVelocity, struct USoundBase Sound, struct FVector NewScale3D, enum class ESpawnActorCollisionHandlingMethod CollisionHandlingOverride, struct APawn Instigator); // Function ProjectileTrajectoryComponent.ProjectileTrajectoryComponent_C.SpawnActorFromClass(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void ForceStopDraw(); // Function ProjectileTrajectoryComponent.ProjectileTrajectoryComponent_C.ForceStopDraw(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void ResetForceStopDraw(); // Function ProjectileTrajectoryComponent.ProjectileTrajectoryComponent_C.ResetForceStopDraw(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void ReceiveBeginPlay(); // Function ProjectileTrajectoryComponent.ProjectileTrajectoryComponent_C.ReceiveBeginPlay(Event|Public|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void IsFPS(char bIsThirdPerson); // Function ProjectileTrajectoryComponent.ProjectileTrajectoryComponent_C.IsFPS(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void ExecuteUbergraph_ProjectileTrajectoryComponent(int32_t EntryPoint); // Function ProjectileTrajectoryComponent.ProjectileTrajectoryComponent_C.ExecuteUbergraph_ProjectileTrajectoryComponent(Final|UbergraphFunction|HasDefaults) // <Game_BE.exe+0x2B80160>
};

// Function ProjectileTrajectoryComponent.ProjectileTrajectoryComponent_C.InterpProjectileTrajectoryJumpState
inline void UProjectileTrajectoryComponent_C::InterpProjectileTrajectoryJumpState(char Jump, struct FVector Location, struct FRotator Rotation, struct FVector& StartLocation, struct FVector& Velocity) {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectileTrajectoryComponent.ProjectileTrajectoryComponent_C.InterpProjectileTrajectoryJumpState");

	struct InterpProjectileTrajectoryJumpState_Params {
		char Jump;
		struct FVector Location;
		struct FRotator Rotation;
		struct FVector& StartLocation;
		struct FVector& Velocity;
	}; InterpProjectileTrajectoryJumpState_Params Params;

	Params.Jump = Jump;
	Params.Location = Location;
	Params.Rotation = Rotation;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	StartLocation = Params.StartLocation;
	Velocity = Params.Velocity;

}

// Function ProjectileTrajectoryComponent.ProjectileTrajectoryComponent_C.ResizeDecalFunc
inline void UProjectileTrajectoryComponent_C::ResizeDecalFunc() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectileTrajectoryComponent.ProjectileTrajectoryComponent_C.ResizeDecalFunc");

	struct ResizeDecalFunc_Params {
		
	}; ResizeDecalFunc_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectileTrajectoryComponent.ProjectileTrajectoryComponent_C.SetParticleColorDecalColor
inline void UProjectileTrajectoryComponent_C::SetParticleColorDecalColor() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectileTrajectoryComponent.ProjectileTrajectoryComponent_C.SetParticleColorDecalColor");

	struct SetParticleColorDecalColor_Params {
		
	}; SetParticleColorDecalColor_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectileTrajectoryComponent.ProjectileTrajectoryComponent_C.CalculateStartLocationAndLocalVelocity
inline void UProjectileTrajectoryComponent_C::CalculateStartLocationAndLocalVelocity(struct FVector& StartLocaton, struct FVector& In1tialLocalVelocity) {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectileTrajectoryComponent.ProjectileTrajectoryComponent_C.CalculateStartLocationAndLocalVelocity");

	struct CalculateStartLocationAndLocalVelocity_Params {
		struct FVector& StartLocaton;
		struct FVector& In1tialLocalVelocity;
	}; CalculateStartLocationAndLocalVelocity_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	StartLocaton = Params.StartLocaton;
	In1tialLocalVelocity = Params.In1tialLocalVelocity;

}

// Function ProjectileTrajectoryComponent.ProjectileTrajectoryComponent_C.ClearBeams
inline void UProjectileTrajectoryComponent_C::ClearBeams() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectileTrajectoryComponent.ProjectileTrajectoryComponent_C.ClearBeams");

	struct ClearBeams_Params {
		
	}; ClearBeams_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectileTrajectoryComponent.ProjectileTrajectoryComponent_C.AddNewBeam
inline void UProjectileTrajectoryComponent_C::AddNewBeam(struct FVector NewSourcePoint, struct FVector NewTargetPoint, int32_t Index) {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectileTrajectoryComponent.ProjectileTrajectoryComponent_C.AddNewBeam");

	struct AddNewBeam_Params {
		struct FVector NewSourcePoint;
		struct FVector NewTargetPoint;
		int32_t Index;
	}; AddNewBeam_Params Params;

	Params.NewSourcePoint = NewSourcePoint;
	Params.NewTargetPoint = NewTargetPoint;
	Params.Index = Index;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectileTrajectoryComponent.ProjectileTrajectoryComponent_C.VisualizeSegment
inline void UProjectileTrajectoryComponent_C::VisualizeSegment(char Selection, struct FVector Point1, struct FVector Point2, int32_t Index) {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectileTrajectoryComponent.ProjectileTrajectoryComponent_C.VisualizeSegment");

	struct VisualizeSegment_Params {
		char Selection;
		struct FVector Point1;
		struct FVector Point2;
		int32_t Index;
	}; VisualizeSegment_Params Params;

	Params.Selection = Selection;
	Params.Point1 = Point1;
	Params.Point2 = Point2;
	Params.Index = Index;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectileTrajectoryComponent.ProjectileTrajectoryComponent_C.GetSegmentAtTime
inline void UProjectileTrajectoryComponent_C::GetSegmentAtTime(struct FVector StartLocation, struct FVector InitialVelocity, struct FVector Gravity, float Time1, float Time2, struct FVector& Point1, struct FVector& Point2) {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectileTrajectoryComponent.ProjectileTrajectoryComponent_C.GetSegmentAtTime");

	struct GetSegmentAtTime_Params {
		struct FVector StartLocation;
		struct FVector InitialVelocity;
		struct FVector Gravity;
		float Time1;
		float Time2;
		struct FVector& Point1;
		struct FVector& Point2;
	}; GetSegmentAtTime_Params Params;

	Params.StartLocation = StartLocation;
	Params.InitialVelocity = InitialVelocity;
	Params.Gravity = Gravity;
	Params.Time1 = Time1;
	Params.Time2 = Time2;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Point1 = Params.Point1;
	Point2 = Params.Point2;

}

// Function ProjectileTrajectoryComponent.ProjectileTrajectoryComponent_C.DrawProjectileTrajectory
inline void UProjectileTrajectoryComponent_C::DrawProjectileTrajectory(struct FVector DesiredStartLocation, struct FVector Gravity, struct FVector InitialLocalVelocity, float PathLifeTime, float TimeInterval) {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectileTrajectoryComponent.ProjectileTrajectoryComponent_C.DrawProjectileTrajectory");

	struct DrawProjectileTrajectory_Params {
		struct FVector DesiredStartLocation;
		struct FVector Gravity;
		struct FVector InitialLocalVelocity;
		float PathLifeTime;
		float TimeInterval;
	}; DrawProjectileTrajectory_Params Params;

	Params.DesiredStartLocation = DesiredStartLocation;
	Params.Gravity = Gravity;
	Params.InitialLocalVelocity = InitialLocalVelocity;
	Params.PathLifeTime = PathLifeTime;
	Params.TimeInterval = TimeInterval;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectileTrajectoryComponent.ProjectileTrajectoryComponent_C.BreakDrawingLoop
inline void UProjectileTrajectoryComponent_C::BreakDrawingLoop() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectileTrajectoryComponent.ProjectileTrajectoryComponent_C.BreakDrawingLoop");

	struct BreakDrawingLoop_Params {
		
	}; BreakDrawingLoop_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectileTrajectoryComponent.ProjectileTrajectoryComponent_C.ReceiveTick
inline void UProjectileTrajectoryComponent_C::ReceiveTick(float DeltaSeconds) {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectileTrajectoryComponent.ProjectileTrajectoryComponent_C.ReceiveTick");

	struct ReceiveTick_Params {
		float DeltaSeconds;
	}; ReceiveTick_Params Params;

	Params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectileTrajectoryComponent.ProjectileTrajectoryComponent_C.StartDraw
inline void UProjectileTrajectoryComponent_C::StartDraw(struct FVector DesiredStartLocation, struct FVector Gravity, struct FVector InitialLocalVelocity, float PathLifeTime, float TimeInterval, char DrawingType) {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectileTrajectoryComponent.ProjectileTrajectoryComponent_C.StartDraw");

	struct StartDraw_Params {
		struct FVector DesiredStartLocation;
		struct FVector Gravity;
		struct FVector InitialLocalVelocity;
		float PathLifeTime;
		float TimeInterval;
		char DrawingType;
	}; StartDraw_Params Params;

	Params.DesiredStartLocation = DesiredStartLocation;
	Params.Gravity = Gravity;
	Params.InitialLocalVelocity = InitialLocalVelocity;
	Params.PathLifeTime = PathLifeTime;
	Params.TimeInterval = TimeInterval;
	Params.DrawingType = DrawingType;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectileTrajectoryComponent.ProjectileTrajectoryComponent_C.StopDraw
inline void UProjectileTrajectoryComponent_C::StopDraw() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectileTrajectoryComponent.ProjectileTrajectoryComponent_C.StopDraw");

	struct StopDraw_Params {
		
	}; StopDraw_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectileTrajectoryComponent.ProjectileTrajectoryComponent_C.SpawnActorFromClass
inline void UProjectileTrajectoryComponent_C::SpawnActorFromClass(struct UClass* Class, struct FTransform SpawnTransform, struct FVector ProjectileVelocity, struct USoundBase Sound, struct FVector NewScale3D, enum class ESpawnActorCollisionHandlingMethod CollisionHandlingOverride, struct APawn Instigator) {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectileTrajectoryComponent.ProjectileTrajectoryComponent_C.SpawnActorFromClass");

	struct SpawnActorFromClass_Params {
		struct UClass* Class;
		struct FTransform SpawnTransform;
		struct FVector ProjectileVelocity;
		struct USoundBase Sound;
		struct FVector NewScale3D;
		enum class ESpawnActorCollisionHandlingMethod CollisionHandlingOverride;
		struct APawn Instigator;
	}; SpawnActorFromClass_Params Params;

	Params.Class = Class;
	Params.SpawnTransform = SpawnTransform;
	Params.ProjectileVelocity = ProjectileVelocity;
	Params.Sound = Sound;
	Params.NewScale3D = NewScale3D;
	Params.CollisionHandlingOverride = CollisionHandlingOverride;
	Params.Instigator = Instigator;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectileTrajectoryComponent.ProjectileTrajectoryComponent_C.ForceStopDraw
inline void UProjectileTrajectoryComponent_C::ForceStopDraw() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectileTrajectoryComponent.ProjectileTrajectoryComponent_C.ForceStopDraw");

	struct ForceStopDraw_Params {
		
	}; ForceStopDraw_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectileTrajectoryComponent.ProjectileTrajectoryComponent_C.ResetForceStopDraw
inline void UProjectileTrajectoryComponent_C::ResetForceStopDraw() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectileTrajectoryComponent.ProjectileTrajectoryComponent_C.ResetForceStopDraw");

	struct ResetForceStopDraw_Params {
		
	}; ResetForceStopDraw_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectileTrajectoryComponent.ProjectileTrajectoryComponent_C.ReceiveBeginPlay
inline void UProjectileTrajectoryComponent_C::ReceiveBeginPlay() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectileTrajectoryComponent.ProjectileTrajectoryComponent_C.ReceiveBeginPlay");

	struct ReceiveBeginPlay_Params {
		
	}; ReceiveBeginPlay_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectileTrajectoryComponent.ProjectileTrajectoryComponent_C.IsFPS
inline void UProjectileTrajectoryComponent_C::IsFPS(char bIsThirdPerson) {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectileTrajectoryComponent.ProjectileTrajectoryComponent_C.IsFPS");

	struct IsFPS_Params {
		char bIsThirdPerson;
	}; IsFPS_Params Params;

	Params.bIsThirdPerson = bIsThirdPerson;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectileTrajectoryComponent.ProjectileTrajectoryComponent_C.ExecuteUbergraph_ProjectileTrajectoryComponent
inline void UProjectileTrajectoryComponent_C::ExecuteUbergraph_ProjectileTrajectoryComponent(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectileTrajectoryComponent.ProjectileTrajectoryComponent_C.ExecuteUbergraph_ProjectileTrajectoryComponent");

	struct ExecuteUbergraph_ProjectileTrajectoryComponent_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_ProjectileTrajectoryComponent_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

