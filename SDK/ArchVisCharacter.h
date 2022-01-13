// Class ArchVisCharacter.ArchVisCharacter
class AArchVisCharacter : public ACharacter {

public:

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
class UArchVisCharMovementComponent : public UCharacterMovementComponent {

public:

	struct FRotator RotationalAcceleration; // 0x6E0 (12)
	struct FRotator RotationalDeceleration; // 0x6EC (12)
	struct FRotator MaxRotationalVelocity; // 0x6F8 (12)
	float MinPitch; // 0x704 (4)
	float MaxPitch; // 0x708 (4)
	float WalkingFriction; // 0x70C (4)
	float WalkingSpeed; // 0x710 (4)
	float WalkingAcceleration; // 0x714 (4)
};

