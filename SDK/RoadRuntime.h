// Class RoadRuntime.CrossActor
class ACrossActor : public AStaticMeshActor {

public:

	struct FString UniqueKey; // 0x320 (16)
	struct TArray<Unknown> SideActors; // 0x330 (16)
	struct TArray<Unknown> SideMeshes; // 0x340 (16)

	void UpdateSideMesh(struct Unknown InPrototype, struct Unknown MeshRelativeLocation, struct Unknown MeshRelativeRotation, struct Unknown MeshRelativeScale, int32_t SocketIndex, char IsEnable, char IsNormalized); // Function RoadRuntime.CrossActor.UpdateSideMesh(Final|Native|Public|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x10AE090>
	void UpdateSideActor(struct Unknown* InPrototype, struct Unknown ActorRelativeLocation, struct Unknown ActorRelativeRotation, struct Unknown ActorRelativeScale, int32_t SocketIndex, char IsEnable, char IsNormalized); // Function RoadRuntime.CrossActor.UpdateSideActor(Final|Native|Public|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x10ADBB0>
	void PushSideMesh(struct Unknown InPrototype, struct Unknown MeshRelativeLocation, struct Unknown MeshRelativeRotation, struct Unknown MeshRelativeScale, int32_t SocketIndex, char IsEnable, char IsNormalized); // Function RoadRuntime.CrossActor.PushSideMesh(Final|Native|Public|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x10AD590>
	void PushSideActor(struct Unknown* InPrototype, struct Unknown ActorRelativeLocation, struct Unknown ActorRelativeRotation, struct Unknown ActorRelativeScale, int32_t SocketIndex, char IsEnable, char IsNormalized); // Function RoadRuntime.CrossActor.PushSideActor(Final|Native|Public|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x10AD0B0>
	void DestroySideObjects(); // Function RoadRuntime.CrossActor.DestroySideObjects(Final|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x10ACDD0>
};

// Class RoadRuntime.RoadActor
class ARoadActor : public UActor {

public:

	char SplineMeshAxis; // 0x310 (1)
	struct Unknown LocalOffset; // 0x314 (12)
	struct Unknown Father; // 0x320 (8)
	struct FString UniqueKey; // 0x328 (16)
	struct Unknown Spline; // 0x338 (8)
	int32_t Index; // 0x340 (4)
	int32_t Segmentation; // 0x344 (4)
	int32_t StepGeneration; // 0x348 (4)
	float Size; // 0x34C (4)
	struct Unknown RoadMesh; // 0x350 (8)
	struct TArray<Unknown> RoadMeshesComp; // 0x358 (16)
	struct TArray<Unknown> SideActors; // 0x368 (16)
	struct TArray<Unknown> SideMeshes; // 0x378 (16)
	struct TArray<Unknown> SideCurbs; // 0x388 (16)

	void UpdateSplineMesh(int32_t MeshIndex); // Function RoadRuntime.RoadActor.UpdateSplineMesh(Final|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x10AE570>
	void UpdateSideMeshes(struct Unknown InPrototype, struct Unknown MeshRelativeLocation, struct Unknown MeshRelativeRotation, struct Unknown MeshRelativeScale, int32_t SocketIndex, int32_t InShift, int32_t InSpacing, char IsEnable, char IsNormalized); // Function RoadRuntime.RoadActor.UpdateSideMeshes(Final|Native|Public|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x10AE2C0>
	void UpdateSideActor(struct Unknown* InPrototype, struct Unknown ActorRelativeLocation, struct Unknown ActorRelativeRotation, struct Unknown ActorRelativeScale, int32_t SocketIndex, int32_t InShift, int32_t InSpacing, char IsEnable, char IsNormalized); // Function RoadRuntime.RoadActor.UpdateSideActor(Final|Native|Public|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x10ADDE0>
	void UpdateSegment(int32_t SegmentIndex, struct Unknown SplineComponent, struct Unknown StaticMesh, char InAxis); // Function RoadRuntime.RoadActor.UpdateSegment(Final|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x10ADA70>
	void PushSideMesh(struct Unknown InPrototype, struct Unknown MeshRelativeLocation, struct Unknown MeshRelativeRotation, struct Unknown MeshRelativeScale, int32_t SocketIndex, int32_t InShift, int32_t InSpacing, char IsEnable, char IsNormalized); // Function RoadRuntime.RoadActor.PushSideMesh(Final|Native|Public|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x10AD7C0>
	void PushSideActor(struct Unknown* InPrototype, struct Unknown ActorRelativeLocation, struct Unknown ActorRelativeRotation, struct Unknown ActorRelativeScale, int32_t SocketIndex, int32_t InShift, int32_t InSpacing, char IsEnable, char IsNormalized); // Function RoadRuntime.RoadActor.PushSideActor(Final|Native|Public|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x10AD2E0>
	void PushCurbsMeshes(struct Unknown InPrototype, struct Unknown InStartPrototype, struct Unknown InEndPrototype, struct Unknown MeshRelativeLocation, struct Unknown MeshRelativeScale, int32_t SocketIndex, char IsEnable, char InStartEnable, char InEndEnable); // Function RoadRuntime.RoadActor.PushCurbsMeshes(Final|Native|Public|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x10ACE10>
	void DestroySideObjects(); // Function RoadRuntime.RoadActor.DestroySideObjects(Final|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x10ACDF0>
	void DestroySideCurbs(); // Function RoadRuntime.RoadActor.DestroySideCurbs(Final|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x10ACDB0>
	void ClearSplineMeshes(); // Function RoadRuntime.RoadActor.ClearSplineMeshes(Final|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x10ACD90>
	float ApproxLength(struct Unknown& SplineInfo, float Start, float End, int32_t ApproxSections); // Function RoadRuntime.RoadActor.ApproxLength(Final|Native|Static|Public|HasOutParms) // <BravoHotelClient-Win64-Shipping.protected.exe+0x10ACC10>
	void AddSplineMesh(int32_t MeshIndex); // Function RoadRuntime.RoadActor.AddSplineMesh(Final|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x10ACB90>
};

// ScriptStruct RoadRuntime.CrossMeshManager
struct FCrossMeshManager {
	struct Unknown Prototype; // 0x0 (8)
	struct Unknown Owner; // 0x8 (8)
	struct Unknown SideMesh; // 0x10 (8)
	int32_t SocketIndex; // 0x18 (4)
};

// ScriptStruct RoadRuntime.CrossActorManager
struct FCrossActorManager {
	struct Unknown* Prototype; // 0x0 (8)
	struct Unknown SideActor; // 0x8 (8)
	int32_t SocketIndex; // 0x10 (4)
};

// ScriptStruct RoadRuntime.SideMeshManager
struct FSideMeshManager {
	struct Unknown Prototype; // 0x0 (8)
	struct Unknown Owner; // 0x8 (8)
	struct Unknown SideMeshes; // 0x10 (8)
	int32_t SocketIndex; // 0x18 (4)
};

// ScriptStruct RoadRuntime.CurbsManager
struct FCurbsManager {
	struct Unknown Owner; // 0x0 (8)
	struct Unknown Prototype; // 0x8 (8)
	struct Unknown StartPrototype; // 0x10 (8)
	struct Unknown EndPrototype; // 0x18 (8)
	struct TArray<Unknown> CurbsComp; // 0x20 (16)
	struct Unknown Spline; // 0x30 (8)
	int32_t SplineIndex; // 0x38 (4)
	int32_t SocketIndex; // 0x3C (4)
	int32_t Segmentation; // 0x40 (4)
	int32_t StepGeneration; // 0x44 (4)
	struct Unknown Offset; // 0x48 (12)
	struct Unknown Scale; // 0x54 (12)
	char CurbEnable : 0; // 0x60 (1)
	char StartEnable : 0; // 0x61 (1)
	char EndEnable : 0; // 0x62 (1)
	struct Unknown SplineInfo; // 0x68 (24)
	float StartRoll; // 0x80 (4)
	float EndRoll; // 0x84 (4)
};

// ScriptStruct RoadRuntime.SideActorManager
struct FSideActorManager {
	struct Unknown* Prototype; // 0x0 (8)
	struct TArray<Unknown> SideActors; // 0x8 (16)
	int32_t SocketIndex; // 0x18 (4)
};

// Function RoadRuntime.CrossActor.UpdateSideMesh
inline void ACrossActor::UpdateSideMesh(struct Unknown InPrototype, struct Unknown MeshRelativeLocation, struct Unknown MeshRelativeRotation, struct Unknown MeshRelativeScale, int32_t SocketIndex, char IsEnable, char IsNormalized) {
	static auto fn = UObject::FindObject<UFunction>("Function RoadRuntime.CrossActor.UpdateSideMesh");

	struct UpdateSideMesh_Params {
		struct Unknown InPrototype;
		struct Unknown MeshRelativeLocation;
		struct Unknown MeshRelativeRotation;
		struct Unknown MeshRelativeScale;
		int32_t SocketIndex;
		char IsEnable;
		char IsNormalized;
	}; UpdateSideMesh_Params Params;

	Params.InPrototype = InPrototype;
	Params.MeshRelativeLocation = MeshRelativeLocation;
	Params.MeshRelativeRotation = MeshRelativeRotation;
	Params.MeshRelativeScale = MeshRelativeScale;
	Params.SocketIndex = SocketIndex;
	Params.IsEnable = IsEnable;
	Params.IsNormalized = IsNormalized;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function RoadRuntime.CrossActor.UpdateSideActor
inline void ACrossActor::UpdateSideActor(struct Unknown* InPrototype, struct Unknown ActorRelativeLocation, struct Unknown ActorRelativeRotation, struct Unknown ActorRelativeScale, int32_t SocketIndex, char IsEnable, char IsNormalized) {
	static auto fn = UObject::FindObject<UFunction>("Function RoadRuntime.CrossActor.UpdateSideActor");

	struct UpdateSideActor_Params {
		struct Unknown* InPrototype;
		struct Unknown ActorRelativeLocation;
		struct Unknown ActorRelativeRotation;
		struct Unknown ActorRelativeScale;
		int32_t SocketIndex;
		char IsEnable;
		char IsNormalized;
	}; UpdateSideActor_Params Params;

	Params.InPrototype = InPrototype;
	Params.ActorRelativeLocation = ActorRelativeLocation;
	Params.ActorRelativeRotation = ActorRelativeRotation;
	Params.ActorRelativeScale = ActorRelativeScale;
	Params.SocketIndex = SocketIndex;
	Params.IsEnable = IsEnable;
	Params.IsNormalized = IsNormalized;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function RoadRuntime.CrossActor.PushSideMesh
inline void ACrossActor::PushSideMesh(struct Unknown InPrototype, struct Unknown MeshRelativeLocation, struct Unknown MeshRelativeRotation, struct Unknown MeshRelativeScale, int32_t SocketIndex, char IsEnable, char IsNormalized) {
	static auto fn = UObject::FindObject<UFunction>("Function RoadRuntime.CrossActor.PushSideMesh");

	struct PushSideMesh_Params {
		struct Unknown InPrototype;
		struct Unknown MeshRelativeLocation;
		struct Unknown MeshRelativeRotation;
		struct Unknown MeshRelativeScale;
		int32_t SocketIndex;
		char IsEnable;
		char IsNormalized;
	}; PushSideMesh_Params Params;

	Params.InPrototype = InPrototype;
	Params.MeshRelativeLocation = MeshRelativeLocation;
	Params.MeshRelativeRotation = MeshRelativeRotation;
	Params.MeshRelativeScale = MeshRelativeScale;
	Params.SocketIndex = SocketIndex;
	Params.IsEnable = IsEnable;
	Params.IsNormalized = IsNormalized;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function RoadRuntime.CrossActor.PushSideActor
inline void ACrossActor::PushSideActor(struct Unknown* InPrototype, struct Unknown ActorRelativeLocation, struct Unknown ActorRelativeRotation, struct Unknown ActorRelativeScale, int32_t SocketIndex, char IsEnable, char IsNormalized) {
	static auto fn = UObject::FindObject<UFunction>("Function RoadRuntime.CrossActor.PushSideActor");

	struct PushSideActor_Params {
		struct Unknown* InPrototype;
		struct Unknown ActorRelativeLocation;
		struct Unknown ActorRelativeRotation;
		struct Unknown ActorRelativeScale;
		int32_t SocketIndex;
		char IsEnable;
		char IsNormalized;
	}; PushSideActor_Params Params;

	Params.InPrototype = InPrototype;
	Params.ActorRelativeLocation = ActorRelativeLocation;
	Params.ActorRelativeRotation = ActorRelativeRotation;
	Params.ActorRelativeScale = ActorRelativeScale;
	Params.SocketIndex = SocketIndex;
	Params.IsEnable = IsEnable;
	Params.IsNormalized = IsNormalized;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function RoadRuntime.CrossActor.DestroySideObjects
inline void ACrossActor::DestroySideObjects() {
	static auto fn = UObject::FindObject<UFunction>("Function RoadRuntime.CrossActor.DestroySideObjects");

	struct DestroySideObjects_Params {
		
	}; DestroySideObjects_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function RoadRuntime.RoadActor.UpdateSplineMesh
inline void ARoadActor::UpdateSplineMesh(int32_t MeshIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function RoadRuntime.RoadActor.UpdateSplineMesh");

	struct UpdateSplineMesh_Params {
		int32_t MeshIndex;
	}; UpdateSplineMesh_Params Params;

	Params.MeshIndex = MeshIndex;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function RoadRuntime.RoadActor.UpdateSideMeshes
inline void ARoadActor::UpdateSideMeshes(struct Unknown InPrototype, struct Unknown MeshRelativeLocation, struct Unknown MeshRelativeRotation, struct Unknown MeshRelativeScale, int32_t SocketIndex, int32_t InShift, int32_t InSpacing, char IsEnable, char IsNormalized) {
	static auto fn = UObject::FindObject<UFunction>("Function RoadRuntime.RoadActor.UpdateSideMeshes");

	struct UpdateSideMeshes_Params {
		struct Unknown InPrototype;
		struct Unknown MeshRelativeLocation;
		struct Unknown MeshRelativeRotation;
		struct Unknown MeshRelativeScale;
		int32_t SocketIndex;
		int32_t InShift;
		int32_t InSpacing;
		char IsEnable;
		char IsNormalized;
	}; UpdateSideMeshes_Params Params;

	Params.InPrototype = InPrototype;
	Params.MeshRelativeLocation = MeshRelativeLocation;
	Params.MeshRelativeRotation = MeshRelativeRotation;
	Params.MeshRelativeScale = MeshRelativeScale;
	Params.SocketIndex = SocketIndex;
	Params.InShift = InShift;
	Params.InSpacing = InSpacing;
	Params.IsEnable = IsEnable;
	Params.IsNormalized = IsNormalized;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function RoadRuntime.RoadActor.UpdateSideActor
inline void ARoadActor::UpdateSideActor(struct Unknown* InPrototype, struct Unknown ActorRelativeLocation, struct Unknown ActorRelativeRotation, struct Unknown ActorRelativeScale, int32_t SocketIndex, int32_t InShift, int32_t InSpacing, char IsEnable, char IsNormalized) {
	static auto fn = UObject::FindObject<UFunction>("Function RoadRuntime.RoadActor.UpdateSideActor");

	struct UpdateSideActor_Params {
		struct Unknown* InPrototype;
		struct Unknown ActorRelativeLocation;
		struct Unknown ActorRelativeRotation;
		struct Unknown ActorRelativeScale;
		int32_t SocketIndex;
		int32_t InShift;
		int32_t InSpacing;
		char IsEnable;
		char IsNormalized;
	}; UpdateSideActor_Params Params;

	Params.InPrototype = InPrototype;
	Params.ActorRelativeLocation = ActorRelativeLocation;
	Params.ActorRelativeRotation = ActorRelativeRotation;
	Params.ActorRelativeScale = ActorRelativeScale;
	Params.SocketIndex = SocketIndex;
	Params.InShift = InShift;
	Params.InSpacing = InSpacing;
	Params.IsEnable = IsEnable;
	Params.IsNormalized = IsNormalized;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function RoadRuntime.RoadActor.UpdateSegment
inline void ARoadActor::UpdateSegment(int32_t SegmentIndex, struct Unknown SplineComponent, struct Unknown StaticMesh, char InAxis) {
	static auto fn = UObject::FindObject<UFunction>("Function RoadRuntime.RoadActor.UpdateSegment");

	struct UpdateSegment_Params {
		int32_t SegmentIndex;
		struct Unknown SplineComponent;
		struct Unknown StaticMesh;
		char InAxis;
	}; UpdateSegment_Params Params;

	Params.SegmentIndex = SegmentIndex;
	Params.SplineComponent = SplineComponent;
	Params.StaticMesh = StaticMesh;
	Params.InAxis = InAxis;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function RoadRuntime.RoadActor.PushSideMesh
inline void ARoadActor::PushSideMesh(struct Unknown InPrototype, struct Unknown MeshRelativeLocation, struct Unknown MeshRelativeRotation, struct Unknown MeshRelativeScale, int32_t SocketIndex, int32_t InShift, int32_t InSpacing, char IsEnable, char IsNormalized) {
	static auto fn = UObject::FindObject<UFunction>("Function RoadRuntime.RoadActor.PushSideMesh");

	struct PushSideMesh_Params {
		struct Unknown InPrototype;
		struct Unknown MeshRelativeLocation;
		struct Unknown MeshRelativeRotation;
		struct Unknown MeshRelativeScale;
		int32_t SocketIndex;
		int32_t InShift;
		int32_t InSpacing;
		char IsEnable;
		char IsNormalized;
	}; PushSideMesh_Params Params;

	Params.InPrototype = InPrototype;
	Params.MeshRelativeLocation = MeshRelativeLocation;
	Params.MeshRelativeRotation = MeshRelativeRotation;
	Params.MeshRelativeScale = MeshRelativeScale;
	Params.SocketIndex = SocketIndex;
	Params.InShift = InShift;
	Params.InSpacing = InSpacing;
	Params.IsEnable = IsEnable;
	Params.IsNormalized = IsNormalized;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function RoadRuntime.RoadActor.PushSideActor
inline void ARoadActor::PushSideActor(struct Unknown* InPrototype, struct Unknown ActorRelativeLocation, struct Unknown ActorRelativeRotation, struct Unknown ActorRelativeScale, int32_t SocketIndex, int32_t InShift, int32_t InSpacing, char IsEnable, char IsNormalized) {
	static auto fn = UObject::FindObject<UFunction>("Function RoadRuntime.RoadActor.PushSideActor");

	struct PushSideActor_Params {
		struct Unknown* InPrototype;
		struct Unknown ActorRelativeLocation;
		struct Unknown ActorRelativeRotation;
		struct Unknown ActorRelativeScale;
		int32_t SocketIndex;
		int32_t InShift;
		int32_t InSpacing;
		char IsEnable;
		char IsNormalized;
	}; PushSideActor_Params Params;

	Params.InPrototype = InPrototype;
	Params.ActorRelativeLocation = ActorRelativeLocation;
	Params.ActorRelativeRotation = ActorRelativeRotation;
	Params.ActorRelativeScale = ActorRelativeScale;
	Params.SocketIndex = SocketIndex;
	Params.InShift = InShift;
	Params.InSpacing = InSpacing;
	Params.IsEnable = IsEnable;
	Params.IsNormalized = IsNormalized;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function RoadRuntime.RoadActor.PushCurbsMeshes
inline void ARoadActor::PushCurbsMeshes(struct Unknown InPrototype, struct Unknown InStartPrototype, struct Unknown InEndPrototype, struct Unknown MeshRelativeLocation, struct Unknown MeshRelativeScale, int32_t SocketIndex, char IsEnable, char InStartEnable, char InEndEnable) {
	static auto fn = UObject::FindObject<UFunction>("Function RoadRuntime.RoadActor.PushCurbsMeshes");

	struct PushCurbsMeshes_Params {
		struct Unknown InPrototype;
		struct Unknown InStartPrototype;
		struct Unknown InEndPrototype;
		struct Unknown MeshRelativeLocation;
		struct Unknown MeshRelativeScale;
		int32_t SocketIndex;
		char IsEnable;
		char InStartEnable;
		char InEndEnable;
	}; PushCurbsMeshes_Params Params;

	Params.InPrototype = InPrototype;
	Params.InStartPrototype = InStartPrototype;
	Params.InEndPrototype = InEndPrototype;
	Params.MeshRelativeLocation = MeshRelativeLocation;
	Params.MeshRelativeScale = MeshRelativeScale;
	Params.SocketIndex = SocketIndex;
	Params.IsEnable = IsEnable;
	Params.InStartEnable = InStartEnable;
	Params.InEndEnable = InEndEnable;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function RoadRuntime.RoadActor.DestroySideObjects
inline void ARoadActor::DestroySideObjects() {
	static auto fn = UObject::FindObject<UFunction>("Function RoadRuntime.RoadActor.DestroySideObjects");

	struct DestroySideObjects_Params {
		
	}; DestroySideObjects_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function RoadRuntime.RoadActor.DestroySideCurbs
inline void ARoadActor::DestroySideCurbs() {
	static auto fn = UObject::FindObject<UFunction>("Function RoadRuntime.RoadActor.DestroySideCurbs");

	struct DestroySideCurbs_Params {
		
	}; DestroySideCurbs_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function RoadRuntime.RoadActor.ClearSplineMeshes
inline void ARoadActor::ClearSplineMeshes() {
	static auto fn = UObject::FindObject<UFunction>("Function RoadRuntime.RoadActor.ClearSplineMeshes");

	struct ClearSplineMeshes_Params {
		
	}; ClearSplineMeshes_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function RoadRuntime.RoadActor.ApproxLength
inline float ARoadActor::ApproxLength(struct Unknown& SplineInfo, float Start, float End, int32_t ApproxSections) {
	static auto fn = UObject::FindObject<UFunction>("Function RoadRuntime.RoadActor.ApproxLength");

	struct ApproxLength_Params {
		struct Unknown& SplineInfo;
		float Start;
		float End;
		int32_t ApproxSections;
		float ReturnValue;

	}; ApproxLength_Params Params;

	Params.Start = Start;
	Params.End = End;
	Params.ApproxSections = ApproxSections;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	SplineInfo = Params.SplineInfo;


	return params.ReturnValue;
}

// Function RoadRuntime.RoadActor.AddSplineMesh
inline void ARoadActor::AddSplineMesh(int32_t MeshIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function RoadRuntime.RoadActor.AddSplineMesh");

	struct AddSplineMesh_Params {
		int32_t MeshIndex;
	}; AddSplineMesh_Params Params;

	Params.MeshIndex = MeshIndex;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

