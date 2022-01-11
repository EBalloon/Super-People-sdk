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

	struct Unknown RotationalAcceleration; // 0x6D8 (12)
	struct Unknown RotationalDeceleration; // 0x6E4 (12)
	struct Unknown MaxRotationalVelocity; // 0x6F0 (12)
	float MinPitch; // 0x6FC (4)
	float MaxPitch; // 0x700 (4)
	float WalkingFriction; // 0x704 (4)
	float WalkingSpeed; // 0x708 (4)
	float WalkingAcceleration; // 0x70C (4)
};

