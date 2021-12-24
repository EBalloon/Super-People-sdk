// Class FieldSystemEngine.FieldSystemActor
class AFieldSystemActor : public UActor {

public:

	struct Unknown FieldSystemComponent; // 0x310 (8)
};

// Class FieldSystemEngine.FieldSystemComponent
class UFieldSystemComponent : public UPrimitiveComponent {

public:

	struct Unknown FieldSystem; // 0x4B8 (8)
	struct TArray<Unknown> SupportedSolvers; // 0x4D0 (16)

	void ResetFieldSystem(); // Function FieldSystemEngine.FieldSystemComponent.ResetFieldSystem(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x40143B0>
	void ApplyUniformVectorFalloffForce(char Enabled, struct Unknown Position, struct Unknown Direction, float Radius, float Magnitude); // Function FieldSystemEngine.FieldSystemComponent.ApplyUniformVectorFalloffForce(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x4014200>
	void ApplyStrainField(char Enabled, struct Unknown Position, float Radius, float Magnitude, int32_t Iterations); // Function FieldSystemEngine.FieldSystemComponent.ApplyStrainField(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x4014050>
	void ApplyStayDynamicField(char Enabled, struct Unknown Position, float Radius); // Function FieldSystemEngine.FieldSystemComponent.ApplyStayDynamicField(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x4013F30>
	void ApplyRadialVectorFalloffForce(char Enabled, struct Unknown Position, float Radius, float Magnitude); // Function FieldSystemEngine.FieldSystemComponent.ApplyRadialVectorFalloffForce(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x4013DC0>
	void ApplyRadialForce(char Enabled, struct Unknown Position, float Magnitude); // Function FieldSystemEngine.FieldSystemComponent.ApplyRadialForce(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x4013CA0>
	void ApplyPhysicsField(char Enabled, char Target, struct Unknown MetaData, struct Unknown Field); // Function FieldSystemEngine.FieldSystemComponent.ApplyPhysicsField(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x4013B50>
	void ApplyLinearForce(char Enabled, struct Unknown Direction, float Magnitude); // Function FieldSystemEngine.FieldSystemComponent.ApplyLinearForce(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x4013A30>
	void AddFieldCommand(char Enabled, char Target, struct Unknown MetaData, struct Unknown Field); // Function FieldSystemEngine.FieldSystemComponent.AddFieldCommand(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x40138E0>
};

// Class FieldSystemEngine.FieldSystemMetaDataIteration
class UFieldSystemMetaDataIteration : public UFieldSystemMetaData {

public:

	int32_t Iterations; // 0xB0 (4)

	struct Unknown SetMetaDataIteration(int32_t Iterations); // Function FieldSystemEngine.FieldSystemMetaDataIteration.SetMetaDataIteration(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x4014700>
};

// Class FieldSystemEngine.FieldSystemMetaDataProcessingResolution
class UFieldSystemMetaDataProcessingResolution : public UFieldSystemMetaData {

public:

	char ResolutionType; // 0xB0 (1)

	struct Unknown SetMetaDataaProcessingResolutionType(char ResolutionType); // Function FieldSystemEngine.FieldSystemMetaDataProcessingResolution.SetMetaDataaProcessingResolutionType(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x4014790>
};

// Class FieldSystemEngine.UniformInteger
class UUniformInteger : public UFieldNodeInt {

public:

	int32_t Magnitude; // 0xB0 (4)

	struct Unknown SetUniformInteger(int32_t Magnitude); // Function FieldSystemEngine.UniformInteger.SetUniformInteger(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x4014700>
};

// Class FieldSystemEngine.RadialIntMask
class URadialIntMask : public UFieldNodeInt {

public:

	float Radius; // 0xB0 (4)
	struct Unknown Position; // 0xB4 (12)
	int32_t InteriorValue; // 0xC0 (4)
	int32_t ExteriorValue; // 0xC4 (4)
	char SetMaskCondition; // 0xC8 (1)

	struct Unknown SetRadialIntMask(float Radius, struct Unknown Position, int32_t InteriorValue, int32_t ExteriorValue, char SetMaskConditionIn); // Function FieldSystemEngine.RadialIntMask.SetRadialIntMask(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x4014F90>
};

// Class FieldSystemEngine.UniformScalar
class UUniformScalar : public UFieldNodeFloat {

public:

	float Magnitude; // 0xB0 (4)

	struct Unknown SetUniformScalar(float Magnitude); // Function FieldSystemEngine.UniformScalar.SetUniformScalar(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x4015230>
};

// Class FieldSystemEngine.RadialFalloff
class URadialFalloff : public UFieldNodeFloat {

public:

	float Magnitude; // 0xB0 (4)
	float MinRange; // 0xB4 (4)
	float MaxRange; // 0xB8 (4)
	float Default; // 0xBC (4)
	float Radius; // 0xC0 (4)
	struct Unknown Position; // 0xC4 (12)
	char Falloff; // 0xD0 (1)

	struct Unknown SetRadialFalloff(float Magnitude, float MinRange, float MaxRange, float Default, float Radius, struct Unknown Position, char Falloff); // Function FieldSystemEngine.RadialFalloff.SetRadialFalloff(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x4014D70>
};

// Class FieldSystemEngine.PlaneFalloff
class UPlaneFalloff : public UFieldNodeFloat {

public:

	float Magnitude; // 0xB0 (4)
	float MinRange; // 0xB4 (4)
	float MaxRange; // 0xB8 (4)
	float Default; // 0xBC (4)
	float Distance; // 0xC0 (4)
	struct Unknown Position; // 0xC4 (12)
	struct Unknown Normal; // 0xD0 (12)
	char Falloff; // 0xDC (1)

	struct Unknown SetPlaneFalloff(float Magnitude, float MinRange, float MaxRange, float Default, float Distance, struct Unknown Position, struct Unknown Normal, char Falloff); // Function FieldSystemEngine.PlaneFalloff.SetPlaneFalloff(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x4014AF0>
};

// Class FieldSystemEngine.BoxFalloff
class UBoxFalloff : public UFieldNodeFloat {

public:

	float Magnitude; // 0xB0 (4)
	float MinRange; // 0xB4 (4)
	float MaxRange; // 0xB8 (4)
	float Default; // 0xBC (4)
	struct Unknown Transform; // 0xC0 (48)
	char Falloff; // 0xF0 (1)

	struct Unknown SetBoxFalloff(float Magnitude, float MinRange, float MaxRange, float Default, struct Unknown Transform, char Falloff); // Function FieldSystemEngine.BoxFalloff.SetBoxFalloff(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x40143D0>
};

// Class FieldSystemEngine.NoiseField
class UNoiseField : public UFieldNodeFloat {

public:

	float MinRange; // 0xB0 (4)
	float MaxRange; // 0xB4 (4)
	struct Unknown Transform; // 0xC0 (48)

	struct Unknown SetNoiseField(float MinRange, float MaxRange, struct Unknown Transform); // Function FieldSystemEngine.NoiseField.SetNoiseField(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x4014820>
};

// Class FieldSystemEngine.UniformVector
class UUniformVector : public UFieldNodeVector {

public:

	float Magnitude; // 0xB0 (4)
	struct Unknown Direction; // 0xB4 (12)

	struct Unknown SetUniformVector(float Magnitude, struct Unknown Direction); // Function FieldSystemEngine.UniformVector.SetUniformVector(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x4015150>
};

// Class FieldSystemEngine.RadialVector
class URadialVector : public UFieldNodeVector {

public:

	float Magnitude; // 0xB0 (4)
	struct Unknown Position; // 0xB4 (12)

	struct Unknown SetRadialVector(float Magnitude, struct Unknown Position); // Function FieldSystemEngine.RadialVector.SetRadialVector(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x4015150>
};

// Class FieldSystemEngine.RandomVector
class URandomVector : public UFieldNodeVector {

public:

	float Magnitude; // 0xB0 (4)

	struct Unknown SetRandomVector(float Magnitude); // Function FieldSystemEngine.RandomVector.SetRandomVector(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x4015230>
};

// Class FieldSystemEngine.OperatorField
class UOperatorField : public UFieldNodeBase {

public:

	float Magnitude; // 0xB0 (4)
	struct Unknown RightField; // 0xB8 (8)
	struct Unknown LeftField; // 0xC0 (8)
	char Operation; // 0xC8 (1)

	struct Unknown SetOperatorField(float Magnitude, struct Unknown RightField, struct Unknown LeftField, char Operation); // Function FieldSystemEngine.OperatorField.SetOperatorField(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x40149A0>
};

// Class FieldSystemEngine.ToIntegerField
class UToIntegerField : public UFieldNodeInt {

public:

	struct Unknown FloatField; // 0xB0 (8)

	struct Unknown SetToIntegerField(struct Unknown FloatField); // Function FieldSystemEngine.ToIntegerField.SetToIntegerField(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x40152F0>
};

// Class FieldSystemEngine.ToFloatField
class UToFloatField : public UFieldNodeFloat {

public:

	struct Unknown IntField; // 0xB0 (8)

	struct Unknown SetToFloatField(struct Unknown IntegerField); // Function FieldSystemEngine.ToFloatField.SetToFloatField(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x40152F0>
};

// Class FieldSystemEngine.CullingField
class UCullingField : public UFieldNodeBase {

public:

	struct Unknown Culling; // 0xB0 (8)
	struct Unknown Field; // 0xB8 (8)
	char Operation; // 0xC0 (1)

	struct Unknown SetCullingField(struct Unknown Culling, struct Unknown Field, char Operation); // Function FieldSystemEngine.CullingField.SetCullingField(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x4014600>
};

