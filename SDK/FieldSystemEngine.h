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

	void ResetFieldSystem(); // Function FieldSystemEngine.FieldSystemComponent.ResetFieldSystem(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x47CF320>
	void ApplyUniformVectorFalloffForce(char Enabled, struct Unknown Position, struct Unknown Direction, float Radius, float Magnitude); // Function FieldSystemEngine.FieldSystemComponent.ApplyUniformVectorFalloffForce(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x47CF170>
	void ApplyStrainField(char Enabled, struct Unknown Position, float Radius, float Magnitude, int32_t Iterations); // Function FieldSystemEngine.FieldSystemComponent.ApplyStrainField(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x47CEFC0>
	void ApplyStayDynamicField(char Enabled, struct Unknown Position, float Radius); // Function FieldSystemEngine.FieldSystemComponent.ApplyStayDynamicField(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x47CEEA0>
	void ApplyRadialVectorFalloffForce(char Enabled, struct Unknown Position, float Radius, float Magnitude); // Function FieldSystemEngine.FieldSystemComponent.ApplyRadialVectorFalloffForce(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x47CED30>
	void ApplyRadialForce(char Enabled, struct Unknown Position, float Magnitude); // Function FieldSystemEngine.FieldSystemComponent.ApplyRadialForce(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x47CEC10>
	void ApplyPhysicsField(char Enabled, char Target, struct Unknown MetaData, struct Unknown Field); // Function FieldSystemEngine.FieldSystemComponent.ApplyPhysicsField(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x47CEAC0>
	void ApplyLinearForce(char Enabled, struct Unknown Direction, float Magnitude); // Function FieldSystemEngine.FieldSystemComponent.ApplyLinearForce(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x47CE9A0>
	void AddFieldCommand(char Enabled, char Target, struct Unknown MetaData, struct Unknown Field); // Function FieldSystemEngine.FieldSystemComponent.AddFieldCommand(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x47CE850>
};

// Class FieldSystemEngine.FieldSystemMetaDataIteration
class UFieldSystemMetaDataIteration : public UFieldSystemMetaData {

public:

	int32_t Iterations; // 0xB0 (4)

	struct Unknown SetMetaDataIteration(int32_t Iterations); // Function FieldSystemEngine.FieldSystemMetaDataIteration.SetMetaDataIteration(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x47CF670>
};

// Class FieldSystemEngine.FieldSystemMetaDataProcessingResolution
class UFieldSystemMetaDataProcessingResolution : public UFieldSystemMetaData {

public:

	char ResolutionType; // 0xB0 (1)

	struct Unknown SetMetaDataaProcessingResolutionType(char ResolutionType); // Function FieldSystemEngine.FieldSystemMetaDataProcessingResolution.SetMetaDataaProcessingResolutionType(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x47CF700>
};

// Class FieldSystemEngine.UniformInteger
class UUniformInteger : public UFieldNodeInt {

public:

	int32_t Magnitude; // 0xB0 (4)

	struct Unknown SetUniformInteger(int32_t Magnitude); // Function FieldSystemEngine.UniformInteger.SetUniformInteger(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x47CF670>
};

// Class FieldSystemEngine.RadialIntMask
class URadialIntMask : public UFieldNodeInt {

public:

	float Radius; // 0xB0 (4)
	struct Unknown Position; // 0xB4 (12)
	int32_t InteriorValue; // 0xC0 (4)
	int32_t ExteriorValue; // 0xC4 (4)
	char SetMaskCondition; // 0xC8 (1)

	struct Unknown SetRadialIntMask(float Radius, struct Unknown Position, int32_t InteriorValue, int32_t ExteriorValue, char SetMaskConditionIn); // Function FieldSystemEngine.RadialIntMask.SetRadialIntMask(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x47CFF00>
};

// Class FieldSystemEngine.UniformScalar
class UUniformScalar : public UFieldNodeFloat {

public:

	float Magnitude; // 0xB0 (4)

	struct Unknown SetUniformScalar(float Magnitude); // Function FieldSystemEngine.UniformScalar.SetUniformScalar(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x47D01A0>
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

	struct Unknown SetRadialFalloff(float Magnitude, float MinRange, float MaxRange, float Default, float Radius, struct Unknown Position, char Falloff); // Function FieldSystemEngine.RadialFalloff.SetRadialFalloff(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x47CFCE0>
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

	struct Unknown SetPlaneFalloff(float Magnitude, float MinRange, float MaxRange, float Default, float Distance, struct Unknown Position, struct Unknown Normal, char Falloff); // Function FieldSystemEngine.PlaneFalloff.SetPlaneFalloff(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x47CFA60>
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

	struct Unknown SetBoxFalloff(float Magnitude, float MinRange, float MaxRange, float Default, struct Unknown Transform, char Falloff); // Function FieldSystemEngine.BoxFalloff.SetBoxFalloff(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x47CF340>
};

// Class FieldSystemEngine.NoiseField
class UNoiseField : public UFieldNodeFloat {

public:

	float MinRange; // 0xB0 (4)
	float MaxRange; // 0xB4 (4)
	struct Unknown Transform; // 0xC0 (48)

	struct Unknown SetNoiseField(float MinRange, float MaxRange, struct Unknown Transform); // Function FieldSystemEngine.NoiseField.SetNoiseField(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x47CF790>
};

// Class FieldSystemEngine.UniformVector
class UUniformVector : public UFieldNodeVector {

public:

	float Magnitude; // 0xB0 (4)
	struct Unknown Direction; // 0xB4 (12)

	struct Unknown SetUniformVector(float Magnitude, struct Unknown Direction); // Function FieldSystemEngine.UniformVector.SetUniformVector(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x47D00C0>
};

// Class FieldSystemEngine.RadialVector
class URadialVector : public UFieldNodeVector {

public:

	float Magnitude; // 0xB0 (4)
	struct Unknown Position; // 0xB4 (12)

	struct Unknown SetRadialVector(float Magnitude, struct Unknown Position); // Function FieldSystemEngine.RadialVector.SetRadialVector(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x47D00C0>
};

// Class FieldSystemEngine.RandomVector
class URandomVector : public UFieldNodeVector {

public:

	float Magnitude; // 0xB0 (4)

	struct Unknown SetRandomVector(float Magnitude); // Function FieldSystemEngine.RandomVector.SetRandomVector(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x47D01A0>
};

// Class FieldSystemEngine.OperatorField
class UOperatorField : public UFieldNodeBase {

public:

	float Magnitude; // 0xB0 (4)
	struct Unknown RightField; // 0xB8 (8)
	struct Unknown LeftField; // 0xC0 (8)
	char Operation; // 0xC8 (1)

	struct Unknown SetOperatorField(float Magnitude, struct Unknown RightField, struct Unknown LeftField, char Operation); // Function FieldSystemEngine.OperatorField.SetOperatorField(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x47CF910>
};

// Class FieldSystemEngine.ToIntegerField
class UToIntegerField : public UFieldNodeInt {

public:

	struct Unknown FloatField; // 0xB0 (8)

	struct Unknown SetToIntegerField(struct Unknown FloatField); // Function FieldSystemEngine.ToIntegerField.SetToIntegerField(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x47D0260>
};

// Class FieldSystemEngine.ToFloatField
class UToFloatField : public UFieldNodeFloat {

public:

	struct Unknown IntField; // 0xB0 (8)

	struct Unknown SetToFloatField(struct Unknown IntegerField); // Function FieldSystemEngine.ToFloatField.SetToFloatField(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x47D0260>
};

// Class FieldSystemEngine.CullingField
class UCullingField : public UFieldNodeBase {

public:

	struct Unknown Culling; // 0xB0 (8)
	struct Unknown Field; // 0xB8 (8)
	char Operation; // 0xC0 (1)

	struct Unknown SetCullingField(struct Unknown Culling, struct Unknown Field, char Operation); // Function FieldSystemEngine.CullingField.SetCullingField(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x47CF570>
};

// Function FieldSystemEngine.FieldSystemComponent.ResetFieldSystem
inline void UFieldSystemComponent::ResetFieldSystem() {
	static auto fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.FieldSystemComponent.ResetFieldSystem");

	struct ResetFieldSystem_Params {
		
	}; ResetFieldSystem_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function FieldSystemEngine.FieldSystemComponent.ApplyUniformVectorFalloffForce
inline void UFieldSystemComponent::ApplyUniformVectorFalloffForce(char Enabled, struct Unknown Position, struct Unknown Direction, float Radius, float Magnitude) {
	static auto fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.FieldSystemComponent.ApplyUniformVectorFalloffForce");

	struct ApplyUniformVectorFalloffForce_Params {
		char Enabled;
		struct Unknown Position;
		struct Unknown Direction;
		float Radius;
		float Magnitude;
	}; ApplyUniformVectorFalloffForce_Params Params;

	Params.Enabled = Enabled;
	Params.Position = Position;
	Params.Direction = Direction;
	Params.Radius = Radius;
	Params.Magnitude = Magnitude;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function FieldSystemEngine.FieldSystemComponent.ApplyStrainField
inline void UFieldSystemComponent::ApplyStrainField(char Enabled, struct Unknown Position, float Radius, float Magnitude, int32_t Iterations) {
	static auto fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.FieldSystemComponent.ApplyStrainField");

	struct ApplyStrainField_Params {
		char Enabled;
		struct Unknown Position;
		float Radius;
		float Magnitude;
		int32_t Iterations;
	}; ApplyStrainField_Params Params;

	Params.Enabled = Enabled;
	Params.Position = Position;
	Params.Radius = Radius;
	Params.Magnitude = Magnitude;
	Params.Iterations = Iterations;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function FieldSystemEngine.FieldSystemComponent.ApplyStayDynamicField
inline void UFieldSystemComponent::ApplyStayDynamicField(char Enabled, struct Unknown Position, float Radius) {
	static auto fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.FieldSystemComponent.ApplyStayDynamicField");

	struct ApplyStayDynamicField_Params {
		char Enabled;
		struct Unknown Position;
		float Radius;
	}; ApplyStayDynamicField_Params Params;

	Params.Enabled = Enabled;
	Params.Position = Position;
	Params.Radius = Radius;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function FieldSystemEngine.FieldSystemComponent.ApplyRadialVectorFalloffForce
inline void UFieldSystemComponent::ApplyRadialVectorFalloffForce(char Enabled, struct Unknown Position, float Radius, float Magnitude) {
	static auto fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.FieldSystemComponent.ApplyRadialVectorFalloffForce");

	struct ApplyRadialVectorFalloffForce_Params {
		char Enabled;
		struct Unknown Position;
		float Radius;
		float Magnitude;
	}; ApplyRadialVectorFalloffForce_Params Params;

	Params.Enabled = Enabled;
	Params.Position = Position;
	Params.Radius = Radius;
	Params.Magnitude = Magnitude;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function FieldSystemEngine.FieldSystemComponent.ApplyRadialForce
inline void UFieldSystemComponent::ApplyRadialForce(char Enabled, struct Unknown Position, float Magnitude) {
	static auto fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.FieldSystemComponent.ApplyRadialForce");

	struct ApplyRadialForce_Params {
		char Enabled;
		struct Unknown Position;
		float Magnitude;
	}; ApplyRadialForce_Params Params;

	Params.Enabled = Enabled;
	Params.Position = Position;
	Params.Magnitude = Magnitude;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function FieldSystemEngine.FieldSystemComponent.ApplyPhysicsField
inline void UFieldSystemComponent::ApplyPhysicsField(char Enabled, char Target, struct Unknown MetaData, struct Unknown Field) {
	static auto fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.FieldSystemComponent.ApplyPhysicsField");

	struct ApplyPhysicsField_Params {
		char Enabled;
		char Target;
		struct Unknown MetaData;
		struct Unknown Field;
	}; ApplyPhysicsField_Params Params;

	Params.Enabled = Enabled;
	Params.Target = Target;
	Params.MetaData = MetaData;
	Params.Field = Field;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function FieldSystemEngine.FieldSystemComponent.ApplyLinearForce
inline void UFieldSystemComponent::ApplyLinearForce(char Enabled, struct Unknown Direction, float Magnitude) {
	static auto fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.FieldSystemComponent.ApplyLinearForce");

	struct ApplyLinearForce_Params {
		char Enabled;
		struct Unknown Direction;
		float Magnitude;
	}; ApplyLinearForce_Params Params;

	Params.Enabled = Enabled;
	Params.Direction = Direction;
	Params.Magnitude = Magnitude;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function FieldSystemEngine.FieldSystemComponent.AddFieldCommand
inline void UFieldSystemComponent::AddFieldCommand(char Enabled, char Target, struct Unknown MetaData, struct Unknown Field) {
	static auto fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.FieldSystemComponent.AddFieldCommand");

	struct AddFieldCommand_Params {
		char Enabled;
		char Target;
		struct Unknown MetaData;
		struct Unknown Field;
	}; AddFieldCommand_Params Params;

	Params.Enabled = Enabled;
	Params.Target = Target;
	Params.MetaData = MetaData;
	Params.Field = Field;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function FieldSystemEngine.FieldSystemMetaDataIteration.SetMetaDataIteration
inline struct Unknown UFieldSystemMetaDataIteration::SetMetaDataIteration(int32_t Iterations) {
	static auto fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.FieldSystemMetaDataIteration.SetMetaDataIteration");

	struct SetMetaDataIteration_Params {
		int32_t Iterations;
		struct Unknown ReturnValue;

	}; SetMetaDataIteration_Params Params;

	Params.Iterations = Iterations;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function FieldSystemEngine.FieldSystemMetaDataProcessingResolution.SetMetaDataaProcessingResolutionType
inline struct Unknown UFieldSystemMetaDataProcessingResolution::SetMetaDataaProcessingResolutionType(char ResolutionType) {
	static auto fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.FieldSystemMetaDataProcessingResolution.SetMetaDataaProcessingResolutionType");

	struct SetMetaDataaProcessingResolutionType_Params {
		char ResolutionType;
		struct Unknown ReturnValue;

	}; SetMetaDataaProcessingResolutionType_Params Params;

	Params.ResolutionType = ResolutionType;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function FieldSystemEngine.UniformInteger.SetUniformInteger
inline struct Unknown UUniformInteger::SetUniformInteger(int32_t Magnitude) {
	static auto fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.UniformInteger.SetUniformInteger");

	struct SetUniformInteger_Params {
		int32_t Magnitude;
		struct Unknown ReturnValue;

	}; SetUniformInteger_Params Params;

	Params.Magnitude = Magnitude;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function FieldSystemEngine.RadialIntMask.SetRadialIntMask
inline struct Unknown URadialIntMask::SetRadialIntMask(float Radius, struct Unknown Position, int32_t InteriorValue, int32_t ExteriorValue, char SetMaskConditionIn) {
	static auto fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.RadialIntMask.SetRadialIntMask");

	struct SetRadialIntMask_Params {
		float Radius;
		struct Unknown Position;
		int32_t InteriorValue;
		int32_t ExteriorValue;
		char SetMaskConditionIn;
		struct Unknown ReturnValue;

	}; SetRadialIntMask_Params Params;

	Params.Radius = Radius;
	Params.Position = Position;
	Params.InteriorValue = InteriorValue;
	Params.ExteriorValue = ExteriorValue;
	Params.SetMaskConditionIn = SetMaskConditionIn;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function FieldSystemEngine.UniformScalar.SetUniformScalar
inline struct Unknown UUniformScalar::SetUniformScalar(float Magnitude) {
	static auto fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.UniformScalar.SetUniformScalar");

	struct SetUniformScalar_Params {
		float Magnitude;
		struct Unknown ReturnValue;

	}; SetUniformScalar_Params Params;

	Params.Magnitude = Magnitude;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function FieldSystemEngine.RadialFalloff.SetRadialFalloff
inline struct Unknown URadialFalloff::SetRadialFalloff(float Magnitude, float MinRange, float MaxRange, float Default, float Radius, struct Unknown Position, char Falloff) {
	static auto fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.RadialFalloff.SetRadialFalloff");

	struct SetRadialFalloff_Params {
		float Magnitude;
		float MinRange;
		float MaxRange;
		float Default;
		float Radius;
		struct Unknown Position;
		char Falloff;
		struct Unknown ReturnValue;

	}; SetRadialFalloff_Params Params;

	Params.Magnitude = Magnitude;
	Params.MinRange = MinRange;
	Params.MaxRange = MaxRange;
	Params.Default = Default;
	Params.Radius = Radius;
	Params.Position = Position;
	Params.Falloff = Falloff;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function FieldSystemEngine.PlaneFalloff.SetPlaneFalloff
inline struct Unknown UPlaneFalloff::SetPlaneFalloff(float Magnitude, float MinRange, float MaxRange, float Default, float Distance, struct Unknown Position, struct Unknown Normal, char Falloff) {
	static auto fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.PlaneFalloff.SetPlaneFalloff");

	struct SetPlaneFalloff_Params {
		float Magnitude;
		float MinRange;
		float MaxRange;
		float Default;
		float Distance;
		struct Unknown Position;
		struct Unknown Normal;
		char Falloff;
		struct Unknown ReturnValue;

	}; SetPlaneFalloff_Params Params;

	Params.Magnitude = Magnitude;
	Params.MinRange = MinRange;
	Params.MaxRange = MaxRange;
	Params.Default = Default;
	Params.Distance = Distance;
	Params.Position = Position;
	Params.Normal = Normal;
	Params.Falloff = Falloff;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function FieldSystemEngine.BoxFalloff.SetBoxFalloff
inline struct Unknown UBoxFalloff::SetBoxFalloff(float Magnitude, float MinRange, float MaxRange, float Default, struct Unknown Transform, char Falloff) {
	static auto fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.BoxFalloff.SetBoxFalloff");

	struct SetBoxFalloff_Params {
		float Magnitude;
		float MinRange;
		float MaxRange;
		float Default;
		struct Unknown Transform;
		char Falloff;
		struct Unknown ReturnValue;

	}; SetBoxFalloff_Params Params;

	Params.Magnitude = Magnitude;
	Params.MinRange = MinRange;
	Params.MaxRange = MaxRange;
	Params.Default = Default;
	Params.Transform = Transform;
	Params.Falloff = Falloff;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function FieldSystemEngine.NoiseField.SetNoiseField
inline struct Unknown UNoiseField::SetNoiseField(float MinRange, float MaxRange, struct Unknown Transform) {
	static auto fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.NoiseField.SetNoiseField");

	struct SetNoiseField_Params {
		float MinRange;
		float MaxRange;
		struct Unknown Transform;
		struct Unknown ReturnValue;

	}; SetNoiseField_Params Params;

	Params.MinRange = MinRange;
	Params.MaxRange = MaxRange;
	Params.Transform = Transform;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function FieldSystemEngine.UniformVector.SetUniformVector
inline struct Unknown UUniformVector::SetUniformVector(float Magnitude, struct Unknown Direction) {
	static auto fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.UniformVector.SetUniformVector");

	struct SetUniformVector_Params {
		float Magnitude;
		struct Unknown Direction;
		struct Unknown ReturnValue;

	}; SetUniformVector_Params Params;

	Params.Magnitude = Magnitude;
	Params.Direction = Direction;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function FieldSystemEngine.RadialVector.SetRadialVector
inline struct Unknown URadialVector::SetRadialVector(float Magnitude, struct Unknown Position) {
	static auto fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.RadialVector.SetRadialVector");

	struct SetRadialVector_Params {
		float Magnitude;
		struct Unknown Position;
		struct Unknown ReturnValue;

	}; SetRadialVector_Params Params;

	Params.Magnitude = Magnitude;
	Params.Position = Position;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function FieldSystemEngine.RandomVector.SetRandomVector
inline struct Unknown URandomVector::SetRandomVector(float Magnitude) {
	static auto fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.RandomVector.SetRandomVector");

	struct SetRandomVector_Params {
		float Magnitude;
		struct Unknown ReturnValue;

	}; SetRandomVector_Params Params;

	Params.Magnitude = Magnitude;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function FieldSystemEngine.OperatorField.SetOperatorField
inline struct Unknown UOperatorField::SetOperatorField(float Magnitude, struct Unknown RightField, struct Unknown LeftField, char Operation) {
	static auto fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.OperatorField.SetOperatorField");

	struct SetOperatorField_Params {
		float Magnitude;
		struct Unknown RightField;
		struct Unknown LeftField;
		char Operation;
		struct Unknown ReturnValue;

	}; SetOperatorField_Params Params;

	Params.Magnitude = Magnitude;
	Params.RightField = RightField;
	Params.LeftField = LeftField;
	Params.Operation = Operation;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function FieldSystemEngine.ToIntegerField.SetToIntegerField
inline struct Unknown UToIntegerField::SetToIntegerField(struct Unknown FloatField) {
	static auto fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.ToIntegerField.SetToIntegerField");

	struct SetToIntegerField_Params {
		struct Unknown FloatField;
		struct Unknown ReturnValue;

	}; SetToIntegerField_Params Params;

	Params.FloatField = FloatField;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function FieldSystemEngine.ToFloatField.SetToFloatField
inline struct Unknown UToFloatField::SetToFloatField(struct Unknown IntegerField) {
	static auto fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.ToFloatField.SetToFloatField");

	struct SetToFloatField_Params {
		struct Unknown IntegerField;
		struct Unknown ReturnValue;

	}; SetToFloatField_Params Params;

	Params.IntegerField = IntegerField;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function FieldSystemEngine.CullingField.SetCullingField
inline struct Unknown UCullingField::SetCullingField(struct Unknown Culling, struct Unknown Field, char Operation) {
	static auto fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.CullingField.SetCullingField");

	struct SetCullingField_Params {
		struct Unknown Culling;
		struct Unknown Field;
		char Operation;
		struct Unknown ReturnValue;

	}; SetCullingField_Params Params;

	Params.Culling = Culling;
	Params.Field = Field;
	Params.Operation = Operation;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

