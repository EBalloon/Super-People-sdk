// Class FieldSystemEngine.FieldSystemActor
struct AFieldSystemActor : UActor {
	Unknown FieldSystemComponent; //  0x310 Size(8)
};

// Class FieldSystemEngine.FieldSystemComponent
struct UFieldSystemComponent : UPrimitiveComponent {
	Unknown FieldSystem; //  0x4b8 Size(8)
	Unknown SupportedSolvers; //  0x4d0 Size(10)

	void ResetFieldSystem(); // Function FieldSystemEngine.FieldSystemComponent.ResetFieldSystem(Final|Native|Public|BlueprintCallable) // <Game+0x4005810>
};

// Class FieldSystemEngine.FieldSystemMetaDataIteratio
struct UFieldSystemMetaDataIteratiot : UFieldSystemMetaData {
	int32_t Iterations; //  0xb0 Size(4)

	Unknown SetMetaDataIteration(int32_t Iterations); // Function FieldSystemEngine.FieldSystemMetaDataIteratiot.SetMetaDataIteration(Final|Native|Public|BlueprintCallable|BlueprintPure) // <Game+0x4005b60>
};

// Class FieldSystemEngine.FieldSystemMetaDataProcessingResolution
struct UFieldSystemMetaDataProcessingResolution : UFieldSystemMetaData {
	Unknown ResolutionType; //  0xb0 Size(1)

	Unknown SetMetaDataaProcessingResolutionType(Unknown ResolutionType); // Function FieldSystemEngine.FieldSystemMetaDataProcessingResolution.SetMetaDataaProcessingResolutionType(Final|Native|Public|BlueprintCallable|BlueprintPure) // <Game+0x4005bf0>
};

// Class FieldSystemEngine.UniformInteger
struct UUniformInteger : UFieldNodeInt {
	int32_t Magnitude; //  0xb0 Size(4)

	Unknown SetUniformInteger(int32_t Magnitude); // Function FieldSystemEngine.UniformInteger.SetUniformInteger(Final|Native|Public|BlueprintCallable|BlueprintPure) // <Game+0x4005b60>
};

// Class FieldSystemEngine.RadialIntMask
struct URadialIntMask : UFieldNodeInt {
	float Radius; //  0xb0 Size(4)
	Unknown Position; //  0xb4 Size(c)
	int32_t InteriorValue; //  0xc0 Size(4)
	int32_t ExteriorValue; //  0xc4 Size(4)
	Unknown SetMaskCondition; //  0xc8 Size(1)

	Unknown SetRadialIntMask(float Radius, Unknown Position, int32_t InteriorValue, int32_t ExteriorValue, Unknown SetMaskConditionIn); // Function FieldSystemEngine.RadialIntMask.SetRadialIntMask(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // <Game+0x40063f0>
};

// Class FieldSystemEngine.UniformScalar
struct UUniformScalar : UFieldNodeFloat {
	float Magnitude; //  0xb0 Size(4)

	Unknown SetUniformScalar(float Magnitude); // Function FieldSystemEngine.UniformScalar.SetUniformScalar(Final|Native|Public|BlueprintCallable|BlueprintPure) // <Game+0x4006690>
};

// Class FieldSystemEngine.RadialFalloff
struct URadialFalloff : UFieldNodeFloat {
	float Magnitude; //  0xb0 Size(4)
	float MinRange; //  0xb4 Size(4)
	float MaxRange; //  0xb8 Size(4)
	float Default; //  0xbc Size(4)
	float Radius; //  0xc0 Size(4)
	Unknown Position; //  0xc4 Size(c)
	Unknown Falloff; //  0xd0 Size(1)

	Unknown SetRadialFalloff(float Magnitude, float MinRange, float MaxRange, float Default, float Radius, Unknown Position, Unknown Falloff); // Function FieldSystemEngine.RadialFalloff.SetRadialFalloff(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // <Game+0x40061d0>
};

// Class FieldSystemEngine.PlaneFalloff
struct UPlaneFalloff : UFieldNodeFloat {
	float Magnitude; //  0xb0 Size(4)
	float MinRange; //  0xb4 Size(4)
	float MaxRange; //  0xb8 Size(4)
	float Default; //  0xbc Size(4)
	float Distance; //  0xc0 Size(4)
	Unknown Position; //  0xc4 Size(c)
	Unknown Normal; //  0xd0 Size(c)
	Unknown Falloff; //  0xdc Size(1)

	Unknown SetPlaneFalloff(float Magnitude, float MinRange, float MaxRange, float Default, float Distance, Unknown Position, Unknown Normal, Unknown Falloff); // Function FieldSystemEngine.PlaneFalloff.SetPlaneFalloff(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // <Game+0x4005f50>
};

// Class FieldSystemEngine.BoxFalloff
struct UBoxFalloff : UFieldNodeFloat {
	float Magnitude; //  0xb0 Size(4)
	float MinRange; //  0xb4 Size(4)
	float MaxRange; //  0xb8 Size(4)
	float Default; //  0xbc Size(4)
	Unknown Transform; //  0xc0 Size(30)
	Unknown Falloff; //  0xf0 Size(1)

	Unknown SetBoxFalloff(float Magnitude, float MinRange, float MaxRange, float Default, Unknown Transform, Unknown Falloff); // Function FieldSystemEngine.BoxFalloff.SetBoxFalloff(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // <Game+0x4005830>
};

// Class FieldSystemEngine.NoiseField
struct UNoiseField : UFieldNodeFloat {
	float MinRange; //  0xb0 Size(4)
	float MaxRange; //  0xb4 Size(4)
	Unknown Transform; //  0xc0 Size(30)

	Unknown SetNoiseField(float MinRange, float MaxRange, Unknown Transform); // Function FieldSystemEngine.NoiseField.SetNoiseField(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // <Game+0x4005c80>
};

// Class FieldSystemEngine.UniformVector
struct UUniformVector : UFieldNodeVector {
	float Magnitude; //  0xb0 Size(4)
	Unknown Direction; //  0xb4 Size(c)

	Unknown SetUniformVector(float Magnitude, Unknown Direction); // Function FieldSystemEngine.UniformVector.SetUniformVector(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // <Game+0x40065b0>
};

// Class FieldSystemEngine.RadialVector
struct URadialVector : UFieldNodeVector {
	float Magnitude; //  0xb0 Size(4)
	Unknown Position; //  0xb4 Size(c)

	Unknown SetRadialVector(float Magnitude, Unknown Position); // Function FieldSystemEngine.RadialVector.SetRadialVector(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // <Game+0x40065b0>
};

// Class FieldSystemEngine.RandomVector
struct URandomVector : UFieldNodeVector {
	float Magnitude; //  0xb0 Size(4)

	Unknown SetRandomVector(float Magnitude); // Function FieldSystemEngine.RandomVector.SetRandomVector(Final|Native|Public|BlueprintCallable|BlueprintPure) // <Game+0x4006690>
};

// Class FieldSystemEngine.OperatorField
struct UOperatorField : UFieldNodeBase {
	float Magnitude; //  0xb0 Size(4)
	Unknown RightField; //  0xb8 Size(8)
	Unknown LeftField; //  0xc0 Size(8)
	Unknown Operation; //  0xc8 Size(1)

	Unknown SetOperatorField(float Magnitude, Unknown RightField, Unknown LeftField, Unknown Operation); // Function FieldSystemEngine.OperatorField.SetOperatorField(Final|Native|Public|BlueprintCallable|BlueprintPure) // <Game+0x4005e00>
};

// Class FieldSystemEngine.ToIntegerField
struct UToIntegerField : UFieldNodeInt {
	Unknown FloatField; //  0xb0 Size(8)

	Unknown SetToIntegerField(Unknown FloatField); // Function FieldSystemEngine.ToIntegerField.SetToIntegerField(Final|Native|Public|BlueprintCallable|BlueprintPure) // <Game+0x4006750>
};

// Class FieldSystemEngine.ToFloatField
struct UToFloatField : UFieldNodeFloat {
	Unknown IntField; //  0xb0 Size(8)

	Unknown SetToFloatField(Unknown IntegerField); // Function FieldSystemEngine.ToFloatField.SetToFloatField(Final|Native|Public|BlueprintCallable|BlueprintPure) // <Game+0x4006750>
};

// Class FieldSystemEngine.CullingField
struct UCullingField : UFieldNodeBase {
	Unknown Culling; //  0xb0 Size(8)
	Unknown Field; //  0xb8 Size(8)
	Unknown Operation; //  0xc0 Size(1)

	Unknown SetCullingField(Unknown Culling, Unknown Field, Unknown Operation); // Function FieldSystemEngine.CullingField.SetCullingField(Final|Native|Public|BlueprintCallable|BlueprintPure) // <Game+0x4005a60>
};

