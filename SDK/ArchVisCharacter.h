// Class ArchVisCharacter.ArchVisCharacter
class AArchVisCharacter : public ACharacter {

public:

	struct FString LookUpAxisName; // 0x5C8 (16)
	struct FString LookUpAtRateAxisName; // 0x5D8 (16)
	struct FString TurnAxisName; // 0x5E8 (16)
	struct FString TurnAtRateAxisName; // 0x5F8 (16)
	struct FString MoveForwardAxisName; // 0x608 (16)
	struct FString MoveRightAxisName; // 0x618 (16)
	float MouseSensitivityScale_Pitch; // 0x628 (4)
	float MouseSensitivityScale_Yaw; // 0x62C (4)
};

// Class ArchVisCharacter.ArchVisCharMovementComponent
class UArchVisCharMovementComponent : public UCharacterMovementComponent {

public:

	struct Unknown RotationalAcceleration; // 0x6F8 (12)
	struct Unknown RotationalDeceleration; // 0x704 (12)
	struct Unknown MaxRotationalVelocity; // 0x710 (12)
	float MinPitch; // 0x71C (4)
	float MaxPitch; // 0x720 (4)
	float WalkingFriction; // 0x724 (4)
	float WalkingSpeed; // 0x728 (4)
	float WalkingAcceleration; // 0x72C (4)
};

