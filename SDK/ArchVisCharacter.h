// Class ArchVisCharacter.ArchVisCharacter
struct AArchVisCharacter : ACharacter {
	struct FString LookUpAxisName; //  0x5d8 Size(10)
	struct FString LookUpAtRateAxisName; //  0x5e8 Size(10)
	struct FString TurnAxisName; //  0x5f8 Size(10)
	struct FString TurnAtRateAxisName; //  0x608 Size(10)
	struct FString MoveForwardAxisName; //  0x618 Size(10)
	struct FString MoveRightAxisName; //  0x628 Size(10)
	float MouseSensitivityScale_Pitch; //  0x638 Size(4)
	float MouseSensitivityScale_Yaw; //  0x63c Size(4)
};

// Class ArchVisCharacter.ArchVisCharMovementComponent
struct UArchVisCharMovementComponent : UCharacterMovementComponent {
	struct Unknown RotationalAcceleration; //  0x6e8 Size(c)
	struct Unknown RotationalDeceleration; //  0x6f4 Size(c)
	struct Unknown MaxRotationalVelocity; //  0x700 Size(c)
	float MinPitch; //  0x70c Size(4)
	float MaxPitch; //  0x710 Size(4)
	float WalkingFriction; //  0x714 Size(4)
	float WalkingSpeed; //  0x718 Size(4)
	float WalkingAcceleration; //  0x71c Size(4)
};

