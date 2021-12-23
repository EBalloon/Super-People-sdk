// Class ArchVisCharacter.ArchVisCharacter
struct AArchVisCharacter : ACharacter {
	struct FString LookUpAxisName; // 0x5D8 (16)
	struct FString LookUpAtRateAxisName; // 0x5E8 (16)
	struct FString TurnAxisName; // 0x5F8 (16)
	struct FString TurnAtRateAxisName; // 0x608 (16)
	struct FString MoveForwardAxisName; // 0x618 (16)
	struct FString MoveRightAxisName; // 0x628 (16)
	float MouseSensitivityScale_Pitch; // 0x638 (4)
	float MouseSensitivityScale_Yaw; // 0x63C (4)
};

// Class ArchVisCharacter.ArchVisCharMovementComponent
struct UArchVisCharMovementComponent : UCharacterMovementComponent {
	struct Unknown RotationalAcceleration; // 0x6E8 (12)
	struct Unknown RotationalDeceleration; // 0x6F4 (12)
	struct Unknown MaxRotationalVelocity; // 0x700 (12)
	float MinPitch; // 0x70C (4)
	float MaxPitch; // 0x710 (4)
	float WalkingFriction; // 0x714 (4)
	float WalkingSpeed; // 0x718 (4)
	float WalkingAcceleration; // 0x71C (4)
};

