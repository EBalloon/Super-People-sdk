// Class ArchVisCharacter.ArchVisCharacter
class AArchVisCharacter : public ACharacter {

public:

	struct FString LookUpAxisName; // 0x5E8 (16)
	struct FString LookUpAtRateAxisName; // 0x5F8 (16)
	struct FString TurnAxisName; // 0x608 (16)
	struct FString TurnAtRateAxisName; // 0x618 (16)
	struct FString MoveForwardAxisName; // 0x628 (16)
	struct FString MoveRightAxisName; // 0x638 (16)
	float MouseSensitivityScale_Pitch; // 0x648 (4)
	float MouseSensitivityScale_Yaw; // 0x64C (4)
};

// Class ArchVisCharacter.ArchVisCharMovementComponent
class UArchVisCharMovementComponent : public UCharacterMovementComponent {

public:

	struct FRotator RotationalAcceleration; // 0x6D0 (12)
	struct FRotator RotationalDeceleration; // 0x6DC (12)
	struct FRotator MaxRotationalVelocity; // 0x6E8 (12)
	float MinPitch; // 0x6F4 (4)
	float MaxPitch; // 0x6F8 (4)
	float WalkingFriction; // 0x6FC (4)
	float WalkingSpeed; // 0x700 (4)
	float WalkingAcceleration; // 0x704 (4)
};

