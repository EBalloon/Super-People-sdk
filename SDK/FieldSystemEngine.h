// Class FieldSystemEngine.FieldSystemActor
struct AFieldSystemActor : UActor {
	struct Unknown FieldSystemComponent; //  0x310 Size(8)
};

// Class FieldSystemEngine.FieldSystemComponent
struct UFieldSystemComponent : UPrimitiveComponent {
	struct Unknown FieldSystem; //  0x4b8 Size(8)
	struct TArray<Unknown> SupportedSolvers; //  0x4d0 Size(10)

	void ResetFieldSystem(); // Function FieldSystemEngine.FieldSystemComponent.ResetFieldSystem(Final|Native|Public|BlueprintCallable) // <Game+0x4013180>
};

// Class FieldSystemEngine.FieldSystemMetaDataIteration
struct UFieldSystemMetaDataIteration : UFieldSystemMetaData {
	int32_t Iterations; //  0xb0 Size(4)

	struct Unknown SetMetaDataIteration(int32_t Iterations); // Function FieldSystemEngine.FieldSystemMetaDataIteration.SetMetaDataIteration(Final|Native|Public|BlueprintCallable|BlueprintPure) // <Game+0x40134d0>
};

// Class FieldSystemEngine.FieldSystemMetaDataProcessingResolution
struct UFieldSystemMetaDataProcessingResolution : UFieldSystemMetaData {
	char ResolutionType; //  0xb0 Size(1)

	struct Unknown SetMetaDataaProcessingResolutionType(char ResolutionType); // Function FieldSystemEngine.FieldSystemMetaDataProcessingResolution.SetMetaDataaProcessingResolutionType(Final|Native|Public|BlueprintCallable|BlueprintPure) // <Game+0x4013560>
};

// Class FieldSystemEngine.UniformInteger
struct UUniformInteger : UFieldNodeInt {
	int32_t Magnitude; //  0xb0 Size(4)

	struct Unknown SetUniformInteger(int32_t Magnitude); // Function FieldSystemEngine.UniformInteger.SetUniformInteger(Final|Native|Public|BlueprintCallable|BlueprintPure) // <Game+0x40134d0>
};

// Class FieldSystemEngine.RadialIntMask
struct URadialIntMask : UFieldNodeInt {
	float Radius; //  0xb0 Size(4)
	struct Unknown Position; //  0xb4 Size(c)
	int32_t InteriorValue; //  0xc0 Size(4)
	int32_t ExteriorValue; //  0xc4 Size(4)
	char SetMaskCondition; //  0xc8 Size(1)

	struct Unknown SetRadialIntMask(float Radius, struct Unknown Position, int32_t InteriorValue, int32_t ExteriorValue, char SetMaskConditionIn); // Function FieldSystemEngine.RadialIntMask.SetRadialIntMask(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // <Game+0x4013d60>
};

// Class FieldSystemEngine.UniformScalar
struct UUniformScalar : UFieldNodeFloat {
	float Magnitude; //  0xb0 Size(4)

	struct Unknown SetUniformScalar(float Magnitude); // Function FieldSystemEngine.UniformScalar.SetUniformScalar(Final|Native|Public|BlueprintCallable|BlueprintPure) // <Game+0x4014000>
};

// Class FieldSystemEngine.RadialFalloff
struct URadialFalloff : UFieldNodeFloat {
	float Magnitude; //  0xb0 Size(4)
	float MinRange; //  0xb4 Size(4)
	float MaxRange; //  0xb8 Size(4)
	float Default; //  0xbc Size(4)
	float Radius; //  0xc0 Size(4)
	struct Unknown Position; //  0xc4 Size(c)
	char Falloff; //  0xd0 Size(1)

	struct Unknown SetRadialFalloff(float Magnitude, float MinRange, float MaxRange, float Default, float Radius, struct Unknown Position, char Falloff); // Function FieldSystemEngine.RadialFalloff.SetRadialFalloff(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // <Game+0x4013b40>
};

// Class FieldSystemEngine.PlaneFalloff
struct UPlaneFalloff : UFieldNodeFloat {
	float Magnitude; //  0xb0 Size(4)
	float MinRange; //  0xb4 Size(4)
	float MaxRange; //  0xb8 Size(4)
	float Default; //  0xbc Size(4)
	float Distance; //  0xc0 Size(4)
	struct Unknown Position; //  0xc4 Size(c)
	struct Unknown Normal; //  0xd0 Size(c)
	char Falloff; //  0xdc Size(1)

	struct Unknown SetPlaneFalloff(float Magnitude, float MinRange, float MaxRange, float Default, float Distance, struct Unknown Position, struct Unknown Normal, char Falloff); // Function FieldSystemEngine.PlaneFalloff.SetPlaneFalloff(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // <Game+0x40138c0>
};

// Class FieldSystemEngine.BoxFalloff
struct UBoxFalloff : UFieldNodeFloat {
	float Magnitude; //  0xb0 Size(4)
	float MinRange; //  0xb4 Size(4)
	float MaxRange; //  0xb8 Size(4)
	float Default; //  0xbc Size(4)
	struct Unknown Transform; //  0xc0 Size(30)
	char Falloff; //  0xf0 Size(1)

	struct Unknown SetBoxFalloff(float Magnitude, float MinRange, float MaxRange, float Default, struct Unknown Transform, char Falloff); // Function FieldSystemEngine.BoxFalloff.SetBoxFalloff(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // <Game+0x40131a0>
};

// Class FieldSystemEngine.NoiseField
struct UNoiseField : UFieldNodeFloat {
	float MinRange; //  0xb0 Size(4)
	float MaxRange; //  0xb4 Size(4)
	struct Unknown Transform; //  0xc0 Size(30)

	struct Unknown SetNoiseField(float MinRange, float MaxRange, struct Unknown Transform); // Function FieldSystemEngine.NoiseField.SetNoiseField(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // <Game+0x40135f0>
};

// Class FieldSystemEngine.UniformVector
struct UUniformVector : UFieldNodeVector {
	float Magnitude; //  0xb0 Size(4)
	struct Unknown Direction; //  0xb4 Size(c)

	struct Unknown SetUniformVector(float Magnitude, struct Unknown Direction); // Function FieldSystemEngine.UniformVector.SetUniformVector(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // <Game+0x4013f20>
};

// Class FieldSystemEngine.RadialVector
struct URadialVector : UFieldNodeVector {
	float Magnitude; //  0xb0 Size(4)
	struct Unknown Position; //  0xb4 Size(c)

	struct Unknown SetRadialVector(float Magnitude, struct Unknown Position); // Function FieldSystemEngine.RadialVector.SetRadialVector(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // <Game+0x4013f20>
};

// Class FieldSystemEngine.RandomVector
struct URandomVector : UFieldNodeVector {
	float Magnitude; //  0xb0 Size(4)

	struct Unknown SetRandomVector(float Magnitude); // Function FieldSystemEngine.RandomVector.SetRandomVector(Final|Native|Public|BlueprintCallable|BlueprintPure) // <Game+0x4014000>
};

// Class FieldSystemEngine.OperatorField
struct UOperatorField : UFieldNodeBase {
	float Magnitude; //  0xb0 Size(4)
	struct Unknown RightField; //  0xb8 Size(8)
	struct Unknown LeftField; //  0xc0 Size(8)
	char Operation; //  0xc8 Size(1)

	struct Unknown SetOperatorField(float Magnitude, struct Unknown RightField, struct Unknown LeftField, char Operation); // Function FieldSystemEngine.OperatorField.SetOperatorField(Final|Native|Public|BlueprintCallable|BlueprintPure) // <Game+0x4013770>
};

// Class FieldSystemEngine.ToIntegerField
struct UToIntegerField : UFieldNodeInt {
	struct Unknown FloatField; //  0xb0 Size(8)

	struct Unknown SetToIntegerField(struct Unknown FloatField); // Function FieldSystemEngine.ToIntegerField.SetToIntegerField(Final|Native|Public|BlueprintCallable|BlueprintPure) // <Game+0x40140c0>
};

// Class FieldSystemEngine.ToFloatField
struct UToFloatField : UFieldNodeFloat {
	struct Unknown IntField; //  0xb0 Size(8)

	struct Unknown SetToFloatField(struct Unknown IntegerField); // Function FieldSystemEngine.ToFloatField.SetToFloatField(Final|Native|Public|BlueprintCallable|BlueprintPure) // <Game+0x40140c0>
};

// Class FieldSystemEngine.CullingField
struct UCullingField : UFieldNodeBase {
	struct Unknown Culling; //  0xb0 Size(8)
	struct Unknown Field; //  0xb8 Size(8)
	char Operation; //  0xc0 Size(1)

	struct Unknown SetCullingField(struct Unknown Culling, struct Unknown Field, char Operation); // Function FieldSystemEngine.CullingField.SetCullingField(Final|Native|Public|BlueprintCallable|BlueprintPure) // <Game+0x40133d0>
};

