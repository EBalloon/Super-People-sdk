// Enum PhysXVehicles.EVehicleDifferential4W
enum class EVehicleDifferential4W : uint8 {
	EVehicleDifferential4 = 0,
	EVehicleDifferential4 = 1,
	EVehicleDifferential4 = 2,
	EVehicleDifferential4 = 3,
	EVehicleDifferential4 = 4,
	EVehicleDifferential4 = 5,
	EVehicleDifferential4 = 6
};

// Enum PhysXVehicles.EWheelSweepType
enum class EWheelSweepType : uint8 {
	SimpleAndComplex = 0,
	Simple = 1,
	Complex = 2,
	EWheelSweepType_MAX = 3
};

// Class PhysXVehicles.WheeledVehicleMovementComponent
struct UWheeledVehicleMovementComponent : UPawnMovementComponent {
	char bDeprecatedSpringOffsetMode; //  0x140 Size(1)
	char bReverseAsBrake; //  0x140 Size(1)
	char bUseRVOAvoidance; //  0x140 Size(1)
	char bRawHandbrakeInput; //  0x140 Size(1)
	char bRawGearUpInput; //  0x140 Size(1)
	char bRawGearDownInput; //  0x140 Size(1)
	char bWasAvoidanceUpdated; //  0x144 Size(1)
	float Mass; //  0x148 Size(4)
	struct TArray<Unknown> WheelSetups; //  0x150 Size(10)
	float DragCoefficient; //  0x160 Size(4)
	float ChassisWidth; //  0x164 Size(4)
	float ChassisHeight; //  0x168 Size(4)
	float DragArea; //  0x16c Size(4)
	float EstimatedMaxEngineSpeed; //  0x170 Size(4)
	float MaxEngineRPM; //  0x174 Size(4)
	float DebugDragMagnitude; //  0x178 Size(4)
	struct Unknown InertiaTensorScale; //  0x17c Size(c)
	float MinNormalizedTireLoad; //  0x188 Size(4)
	float MinNormalizedTireLoadFiltered; //  0x18c Size(4)
	float MaxNormalizedTireLoad; //  0x190 Size(4)
	float MaxNormalizedTireLoadFiltered; //  0x194 Size(4)
	float ThresholdLongitudinalSpeed; //  0x198 Size(4)
	int32_t LowForwardSpeedSubStepCount; //  0x19c Size(4)
	int32_t HighForwardSpeedSubStepCount; //  0x1a0 Size(4)
	struct TArray<Unknown> Wheels; //  0x1a8 Size(10)
	char WheelsCollisionChannel; //  0x1b8 Size(1)
	float RVOAvoidanceRadius; //  0x1d0 Size(4)
	float RVOAvoidanceHeight; //  0x1d4 Size(4)
	float AvoidanceConsiderationRadius; //  0x1d8 Size(4)
	float RVOSteeringStep; //  0x1dc Size(4)
	float RVOThrottleStep; //  0x1e0 Size(4)
	int32_t AvoidanceUID; //  0x1e4 Size(4)
	struct Unknown AvoidanceGroup; //  0x1e8 Size(4)
	struct Unknown GroupsToAvoid; //  0x1ec Size(4)
	struct Unknown GroupsToIgnore; //  0x1f0 Size(4)
	float AvoidanceWeight; //  0x1f4 Size(4)
	struct Unknown PendingLaunchVelocity; //  0x1f8 Size(c)
	struct Unknown ReplicatedState; //  0x204 Size(14)
	float RawSteeringInput; //  0x21c Size(4)
	float RawThrottleInput; //  0x220 Size(4)
	float RawBrakeInput; //  0x224 Size(4)
	float SteeringInput; //  0x228 Size(4)
	float ThrottleInput; //  0x22c Size(4)
	float BrakeInput; //  0x230 Size(4)
	float HandbrakeInput; //  0x234 Size(4)
	float IdleBrakeInput; //  0x238 Size(4)
	float StopThreshold; //  0x23c Size(4)
	float WrongDirectionThreshold; //  0x240 Size(4)
	struct Unknown ThrottleInputRate; //  0x244 Size(8)
	struct Unknown BrakeInputRate; //  0x24c Size(8)
	struct Unknown HandbrakeInputRate; //  0x254 Size(8)
	struct Unknown SteeringInputRate; //  0x25c Size(8)
	struct Unknown OverrideController; //  0x288 Size(8)

	void SetUseAutoGears(char bUseAuto); // Function PhysXVehicles.WheeledVehicleMovementComponent.SetUseAutoGears(Final|Native|Public|BlueprintCallable) // <Game+0x18ac3a0>
};

// Class PhysXVehicles.TireConfig
struct UTireConfig : UDataAsset {
	float FrictionScale; //  0x30 Size(4)
	struct TArray<Unknown> TireFrictionScales; //  0x38 Size(10)
};

// Class PhysXVehicles.VehicleAnimInstance
struct UVehicleAnimInstance : UAnimInstance {
	struct Unknown WheeledVehicleMovementComponent; //  0x970 Size(8)

	struct Unknown GetVehicle(); // Function PhysXVehicles.VehicleAnimInstance.GetVehicle(Final|Native|Public|BlueprintCallable) // <Game+0x18ab720>
};

// Class PhysXVehicles.VehicleWheel
struct UVehicleWheel : Object {
	struct Unknown CollisionMesh; //  0x28 Size(8)
	char bDontCreateShape; //  0x30 Size(1)
	char bAutoAdjustCollisionSize; //  0x31 Size(1)
	struct Unknown Offset; //  0x34 Size(c)
	float ShapeRadius; //  0x40 Size(4)
	float ShapeWidth; //  0x44 Size(4)
	float Mass; //  0x48 Size(4)
	float DampingRate; //  0x4c Size(4)
	float SteerAngle; //  0x50 Size(4)
	char bAffectedByHandbrake; //  0x54 Size(1)
	struct Unknown TireType; //  0x58 Size(8)
	struct Unknown TireConfig; //  0x60 Size(8)
	float LatStiffMaxLoad; //  0x68 Size(4)
	float LatStiffValue; //  0x6c Size(4)
	float LongStiffValue; //  0x70 Size(4)
	float SuspensionForceOffset; //  0x74 Size(4)
	float SuspensionMaxRaise; //  0x78 Size(4)
	float SuspensionMaxDrop; //  0x7c Size(4)
	float SuspensionNaturalFrequency; //  0x80 Size(4)
	float SuspensionDampingRatio; //  0x84 Size(4)
	char SweepType; //  0x88 Size(1)
	float MaxBrakeTorque; //  0x8c Size(4)
	float MaxHandBrakeTorque; //  0x90 Size(4)
	struct Unknown VehicleSim; //  0x98 Size(8)
	int32_t WheelIndex; //  0xa0 Size(4)
	float DebugLongSlip; //  0xa4 Size(4)
	float DebugLatSlip; //  0xa8 Size(4)
	float DebugNormalizedTireLoad; //  0xac Size(4)
	float DebugWheelTorque; //  0xb4 Size(4)
	float DebugLongForce; //  0xb8 Size(4)
	float DebugLatForce; //  0xbc Size(4)
	struct Unknown Location; //  0xc0 Size(c)
	struct Unknown OldLocation; //  0xcc Size(c)
	struct Unknown Velocity; //  0xd8 Size(c)

	char IsInAir(); // Function PhysXVehicles.VehicleWheel.IsInAir(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <Game+0x18ab780>
};

// Class PhysXVehicles.WheeledVehicle
struct AWheeledVehicle : APawn {
	struct Unknown Mesh; //  0x380 Size(8)
	struct Unknown VehicleMovement; //  0x388 Size(8)
};

// Class PhysXVehicles.WheeledVehicleMovementComponent4W
struct UWheeledVehicleMovementComponent4W : UWheeledVehicleMovementComponent {
	struct Unknown EngineSetup; //  0x290 Size(a0)
	struct Unknown DifferentialSetup; //  0x330 Size(1c)
	float AckermannAccuracy; //  0x34c Size(4)
	struct Unknown TransmissionSetup; //  0x350 Size(30)
	struct Unknown SteeringCurve; //  0x380 Size(88)
};

// Class PhysXVehicles.WheeledVehicleMovementComponentMotor
struct UWheeledVehicleMovementComponentMotor : UWheeledVehicleMovementComponent {
	struct Unknown EngineSetup; //  0x290 Size(a0)
	struct Unknown TransmissionSetup; //  0x330 Size(30)
	struct Unknown SteeringCurve; //  0x360 Size(88)
};

