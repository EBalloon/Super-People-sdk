// Enum PhysXVehicles.EVehicleDifferential4W
enum class EVehicleDifferential4W : uint8 {
	EVehicleDifferential4 = 0
	EVehicleDifferential4 = 1
	EVehicleDifferential4 = 2
	EVehicleDifferential4 = 3
	EVehicleDifferential4 = 4
	EVehicleDifferential4 = 5
	EVehicleDifferential4 = 6
};

// Enum PhysXVehicles.EWheelSweepType
enum class EWheelSweepType : uint8 {
	SimpleAndComplex = 0
	Simple = 1
	Complex = 2
	EWheelSweepType_MAX = 3
};

// Class PhysXVehicles.WheeledVehicleMovementComponent
struct UWheeledVehicleMovementComponent : UPawnMovementComponent {
	char bDeprecatedSpringOffsetMode : 0; // 0x140 (1)
	char b : 0; // 0x140 (1)
	char bUseRVOAvoidance : 0; // 0x140 (1)
	char b : 0; // 0x140 (1)
	char b : 0; // 0x140 (1)
	char b : 0; // 0x140 (1)
	char bWasAvoidanceUpdated : 0; // 0x144 (1)
	float Mass; // 0x148 (4)
	struct TArray<Unknown> WheelSetups; // 0x150 (16)
	float DragCoefficient; // 0x160 (4)
	float ChassisWidth; // 0x164 (4)
	float ChassisHeight; // 0x168 (4)
	float DragArea; // 0x16C (4)
	float EstimatedMaxEngineSpeed; // 0x170 (4)
	float MaxEngineRPM; // 0x174 (4)
	float DebugDragMagnitude; // 0x178 (4)
	struct Unknown InertiaTensorScale; // 0x17C (12)
	float MinNormalizedTireLoad; // 0x188 (4)
	float MinNormalizedTireLoadFiltered; // 0x18C (4)
	float MaxNormalizedTireLoad; // 0x190 (4)
	float MaxNormalizedTireLoadFiltered; // 0x194 (4)
	float ThresholdLongitudinalSpeed; // 0x198 (4)
	int32_t LowForwardSpeedSubStepCount; // 0x19C (4)
	int32_t HighForwardSpeedSubStepCount; // 0x1A0 (4)
	struct TArray<Unknown> Wheels; // 0x1A8 (16)
	char WheelsCollisionChannel; // 0x1B8 (1)
	float RVOAvoidanceRadius; // 0x1D0 (4)
	float RVOAvoidanceHeight; // 0x1D4 (4)
	float AvoidanceConsiderationRadius; // 0x1D8 (4)
	float RVOSteeringStep; // 0x1DC (4)
	float RVOThrottleStep; // 0x1E0 (4)
	int32_t AvoidanceUID; // 0x1E4 (4)
	struct Unknown AvoidanceGroup; // 0x1E8 (4)
	struct Unknown GroupsToAvoid; // 0x1EC (4)
	struct Unknown GroupsToIgnore; // 0x1F0 (4)
	float AvoidanceWeight; // 0x1F4 (4)
	struct Unknown PendingLaunchVelocity; // 0x1F8 (12)
	struct Unknown ReplicatedState; // 0x204 (20)
	float RawSteeringInput; // 0x21C (4)
	float RawThrottleInput; // 0x220 (4)
	float RawBrakeInput; // 0x224 (4)
	float SteeringInput; // 0x228 (4)
	float ThrottleInput; // 0x22C (4)
	float BrakeInput; // 0x230 (4)
	float HandbrakeInput; // 0x234 (4)
	float IdleBrakeInput; // 0x238 (4)
	float StopThreshold; // 0x23C (4)
	float WrongDirectionThreshold; // 0x240 (4)
	struct Unknown ThrottleInputRate; // 0x244 (8)
	struct Unknown BrakeInputRate; // 0x24C (8)
	struct Unknown HandbrakeInputRate; // 0x254 (8)
	struct Unknown SteeringInputRate; // 0x25C (8)
	struct Unknown OverrideController; // 0x288 (8)

	void SetUseAutoGears(char bUseAuto); // Function PhysXVehicles.WheeledVehicleMovementComponent.SetUseAutoGears(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18AC3A0>
	void SetThrottleInput(float Throttle); // Function PhysXVehicles.WheeledVehicleMovementComponent.SetThrottleInput(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18AC320>
	void SetTargetGear(int32_t GearNum, char bImmediate); // Function PhysXVehicles.WheeledVehicleMovementComponent.SetTargetGear(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18AC260>
	void SetSteeringInput(float Steering); // Function PhysXVehicles.WheeledVehicleMovementComponent.SetSteeringInput(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18AC1E0>
	void SetHandbrakeInput(char bNewHandbrake); // Function PhysXVehicles.WheeledVehicleMovementComponent.SetHandbrakeInput(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18AC080>
	void SetGroupsToIgnoreMask(struct Unknown& GroupMask); // Function PhysXVehicles.WheeledVehicleMovementComponent.SetGroupsToIgnoreMask(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18ABFF0>
	void SetGroupsToIgnore(int32_t GroupFlags); // Function PhysXVehicles.WheeledVehicleMovementComponent.SetGroupsToIgnore(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18ABF70>
	void SetGroupsToAvoidMask(struct Unknown& GroupMask); // Function PhysXVehicles.WheeledVehicleMovementComponent.SetGroupsToAvoidMask(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18ABEE0>
	void SetGroupsToAvoid(int32_t GroupFlags); // Function PhysXVehicles.WheeledVehicleMovementComponent.SetGroupsToAvoid(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18ABE60>
	void SetGearUp(char bNewGearUp); // Function PhysXVehicles.WheeledVehicleMovementComponent.SetGearUp(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18ABDD0>
	void SetGearDown(char bNewGearDown); // Function PhysXVehicles.WheeledVehicleMovementComponent.SetGearDown(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18ABD40>
	void SetBrakeInput(float Brake); // Function PhysXVehicles.WheeledVehicleMovementComponent.SetBrakeInput(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18ABB20>
	void SetAvoidanceGroupMask(struct Unknown& GroupMask); // Function PhysXVehicles.WheeledVehicleMovementComponent.SetAvoidanceGroupMask(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18ABA90>
	void SetAvoidanceGroup(int32_t GroupFlags); // Function PhysXVehicles.WheeledVehicleMovementComponent.SetAvoidanceGroup(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18ABA10>
	void SetAvoidanceEnabled(char bEnable); // Function PhysXVehicles.WheeledVehicleMovementComponent.SetAvoidanceEnabled(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18AB980>
	void ServerUpdateState(float InSteeringInput, float InThrottleInput, float InBrakeInput, float InHandbrakeInput, int32_t CurrentGear); // Function PhysXVehicles.WheeledVehicleMovementComponent.ServerUpdateState(Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18AB7B0>
	float GetWheelsRotationSpeed(); // Function PhysXVehicles.WheeledVehicleMovementComponent.GetWheelsRotationSpeed(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18AB750>
	char GetUseAutoGears(); // Function PhysXVehicles.WheeledVehicleMovementComponent.GetUseAutoGears(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18AB6F0>
	int32_t GetTargetGear(); // Function PhysXVehicles.WheeledVehicleMovementComponent.GetTargetGear(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18AB6C0>
	float GetForwardSpeed(); // Function PhysXVehicles.WheeledVehicleMovementComponent.GetForwardSpeed(Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18AB5F0>
	float GetEngineRotationSpeed(); // Function PhysXVehicles.WheeledVehicleMovementComponent.GetEngineRotationSpeed(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18AB5C0>
	float GetEngineMaxRotationSpeed(); // Function PhysXVehicles.WheeledVehicleMovementComponent.GetEngineMaxRotationSpeed(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18AB590>
	int32_t GetCurrentGear(); // Function PhysXVehicles.WheeledVehicleMovementComponent.GetCurrentGear(Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18AB560>
};

// Class PhysXVehicles.TireConfig
struct UTireConfig : UDataAsset {
	float FrictionScale; // 0x30 (4)
	struct TArray<Unknown> TireFrictionScales; // 0x38 (16)
};

// Class PhysXVehicles.VehicleAnimInstance
struct UVehicleAnimInstance : UAnimInstance {
	struct Unknown WheeledVehicleMovementComponent; // 0x970 (8)

	struct Unknown GetVehicle(); // Function PhysXVehicles.VehicleAnimInstance.GetVehicle(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18AB720>
};

// Class PhysXVehicles.VehicleWheel
struct UVehicleWheel : Object {
	struct Unknown CollisionMesh; // 0x28 (8)
	char bDontCreateShape : 0; // 0x30 (1)
	char bAutoAdjustCollisionSize : 0; // 0x31 (1)
	struct Unknown Offset; // 0x34 (12)
	float ShapeRadius; // 0x40 (4)
	float ShapeWidth; // 0x44 (4)
	float Mass; // 0x48 (4)
	float DampingRate; // 0x4C (4)
	float SteerAngle; // 0x50 (4)
	char bAffectedByHandbrake : 0; // 0x54 (1)
	struct Unknown TireType; // 0x58 (8)
	struct Unknown TireConfig; // 0x60 (8)
	float LatStiffMaxLoad; // 0x68 (4)
	float LatStiffValue; // 0x6C (4)
	float LongStiffValue; // 0x70 (4)
	float SuspensionForceOffset; // 0x74 (4)
	float SuspensionMaxRaise; // 0x78 (4)
	float SuspensionMaxDrop; // 0x7C (4)
	float SuspensionNaturalFrequency; // 0x80 (4)
	float SuspensionDampingRatio; // 0x84 (4)
	char SweepType; // 0x88 (1)
	float MaxBrakeTorque; // 0x8C (4)
	float MaxHandBrakeTorque; // 0x90 (4)
	struct Unknown VehicleSim; // 0x98 (8)
	int32_t WheelIndex; // 0xA0 (4)
	float DebugLongSlip; // 0xA4 (4)
	float DebugLatSlip; // 0xA8 (4)
	float DebugNormalizedTireLoad; // 0xAC (4)
	float DebugWheelTorque; // 0xB4 (4)
	float DebugLongForce; // 0xB8 (4)
	float DebugLatForce; // 0xBC (4)
	struct Unknown Location; // 0xC0 (12)
	struct Unknown OldLocation; // 0xCC (12)
	struct Unknown Velocity; // 0xD8 (12)

	char IsInAir(); // Function PhysXVehicles.VehicleWheel.IsInAir(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18AB780>
	float GetSuspensionOffset(); // Function PhysXVehicles.VehicleWheel.GetSuspensionOffset(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18AB690>
	float GetSteerAngle(); // Function PhysXVehicles.VehicleWheel.GetSteerAngle(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18AB660>
	float GetRotationAngle(); // Function PhysXVehicles.VehicleWheel.GetRotationAngle(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18AB630>
};

// Class PhysXVehicles.WheeledVehicle
struct AWheeledVehicle : APawn {
	struct Unknown Mesh; // 0x380 (8)
	struct Unknown VehicleMovement; // 0x388 (8)
};

// Class PhysXVehicles.WheeledVehicleMovementComponent4W
struct UWheeledVehicleMovementComponent4W : UWheeledVehicleMovementComponent {
	struct Unknown EngineSetup; // 0x290 (160)
	struct Unknown DifferentialSetup; // 0x330 (28)
	float AckermannAccuracy; // 0x34C (4)
	struct Unknown TransmissionSetup; // 0x350 (48)
	struct Unknown SteeringCurve; // 0x380 (136)
};

// Class PhysXVehicles.WheeledVehicleMovementComponentMotor
struct UWheeledVehicleMovementComponentMotor : UWheeledVehicleMovementComponent {
	struct Unknown EngineSetup; // 0x290 (160)
	struct Unknown TransmissionSetup; // 0x330 (48)
	struct Unknown SteeringCurve; // 0x360 (136)
};

