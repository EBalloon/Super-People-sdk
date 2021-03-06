// BlueprintGeneratedClass BP-GrenadeWeaponBase.BP-GrenadeWeaponBase_C
class ABP-GrenadeWeaponBase_C : public ABravoHotelGrenadeWeapon {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1F80 (8)
	struct UStaticMeshComponent StaticMesh_Ring; // 0x1F88 (8)
	struct UStaticMeshComponent StaticMesh_Lever; // 0x1F90 (8)
	float Timeline_0_Lerp_77CED3694A7ECD58C02266AF5F5B5991; // 0x1F98 (4)
	char Timeline_0__Direction_77CED3694A7ECD58C02266AF5F5B5991; // 0x1F9C (1)
	struct UTimelineComponent Timeline_1; // 0x1FA0 (8)
	float Lerp_Lerp_EDD5977E4E850EC460B1E599F1FF45F8; // 0x1FA8 (4)
	char Lerp__Direction_EDD5977E4E850EC460B1E599F1FF45F8; // 0x1FAC (1)
	struct UTimelineComponent Lerp; // 0x1FB0 (8)
	struct FVector InterpOffset; // 0x1FB8 (12)
	struct FVector DesiredLocation; // 0x1FC4 (12)
	struct FVector InitalLocalVelocity; // 0x1FD0 (12)
	struct FVector DesiredLocation_Ing; // 0x1FDC (12)
	struct FVector InitalLocalVelocity_Ing; // 0x1FE8 (12)
	enum class EThrowingWeaponState ThrowingWeaponState; // 0x1FF4 (1)
	char ThrowingAction_Bool : 0; // 0x1FF5 (1)
	struct FVector DesiredLocation_3; // 0x1FF8 (12)
	struct FVector DesiredLocation_2_Ing; // 0x2004 (12)
	struct FVector InitalLocalVelocity_3; // 0x2010 (12)
	struct FVector InitalLocalVelocity_2_ing; // 0x201C (12)
	float PathLifeTime; // 0x2028 (4)
	float TimeInterval; // 0x202C (4)
	struct UStaticMeshComponent IndicatorComponent_2; // 0x2030 (8)
	struct UStaticMeshComponent IndicatorComponent_3; // 0x2038 (8)
	struct UProjectileTrajectoryComponent_C TrajectoryComponent_2; // 0x2040 (8)
	struct UProjectileTrajectoryComponent_C TrajectoryComponent_3; // 0x2048 (8)

	struct UBravoHotelDebugInfo GetDebugInfo(); // Function BP-GrenadeWeaponBase.BP-GrenadeWeaponBase_C.GetDebugInfo(HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void CheckNeedDrawing(char& Need); // Function BP-GrenadeWeaponBase.BP-GrenadeWeaponBase_C.CheckNeedDrawing(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void IsReplayTarget(char& IsReplayTarget); // Function BP-GrenadeWeaponBase.BP-GrenadeWeaponBase_C.IsReplayTarget(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void GetProjectileLocationAndVelocity(int32_t Index, struct FVector& Location, struct FVector& Velocity); // Function BP-GrenadeWeaponBase.BP-GrenadeWeaponBase_C.GetProjectileLocationAndVelocity(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void ThrowingAction(enum class EThrowingWeaponState ThrowingWeaponState, char Condition); // Function BP-GrenadeWeaponBase.BP-GrenadeWeaponBase_C.ThrowingAction(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	struct USplineMeshComponent Add Spline Mesh(); // Function BP-GrenadeWeaponBase.BP-GrenadeWeaponBase_C.Add Spline Mesh(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void CalcGrenadeWeaponLocationOffset(struct FVector Offest); // Function BP-GrenadeWeaponBase.BP-GrenadeWeaponBase_C.CalcGrenadeWeaponLocationOffset(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void Lerp__FinishedFunc(); // Function BP-GrenadeWeaponBase.BP-GrenadeWeaponBase_C.Lerp__FinishedFunc(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void Lerp__UpdateFunc(); // Function BP-GrenadeWeaponBase.BP-GrenadeWeaponBase_C.Lerp__UpdateFunc(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void Timeline_0__FinishedFunc(); // Function BP-GrenadeWeaponBase.BP-GrenadeWeaponBase_C.Timeline_0__FinishedFunc(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void Timeline_0__UpdateFunc(); // Function BP-GrenadeWeaponBase.BP-GrenadeWeaponBase_C.Timeline_0__UpdateFunc(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void DrawProjectileTrajectory(); // Function BP-GrenadeWeaponBase.BP-GrenadeWeaponBase_C.DrawProjectileTrajectory(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void ReceiveDestroyed(); // Function BP-GrenadeWeaponBase.BP-GrenadeWeaponBase_C.ReceiveDestroyed(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void OnChangeThrowingWeaponStateDelegate_Event(enum class EThrowingWeaponState ThrowingWeaponState); // Function BP-GrenadeWeaponBase.BP-GrenadeWeaponBase_C.OnChangeThrowingWeaponStateDelegate_Event(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void OnChangeThrowingTypeDelegate_Event(enum class EGrenadeThrowingType ThrowingType); // Function BP-GrenadeWeaponBase.BP-GrenadeWeaponBase_C.OnChangeThrowingTypeDelegate_Event(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void DrawProjectileTrajectory_ChangeType(); // Function BP-GrenadeWeaponBase.BP-GrenadeWeaponBase_C.DrawProjectileTrajectory_ChangeType(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void OnCharacterGroundStateChangeDelegate(enum class ECharacterGroundState State); // Function BP-GrenadeWeaponBase.BP-GrenadeWeaponBase_C.OnCharacterGroundStateChangeDelegate(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void InitProjectileTrajectory(); // Function BP-GrenadeWeaponBase.BP-GrenadeWeaponBase_C.InitProjectileTrajectory(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void OnFire(); // Function BP-GrenadeWeaponBase.BP-GrenadeWeaponBase_C.OnFire(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void ForceUpdateProjectileTrajectory(); // Function BP-GrenadeWeaponBase.BP-GrenadeWeaponBase_C.ForceUpdateProjectileTrajectory(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void OnChangedReplayViewMode_2(char IsPlayer); // Function BP-GrenadeWeaponBase.BP-GrenadeWeaponBase_C.OnChangedReplayViewMode_2(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void K2_OnOwnerBecomeViewTarget(); // Function BP-GrenadeWeaponBase.BP-GrenadeWeaponBase_C.K2_OnOwnerBecomeViewTarget(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void K2_OnOwnerEndViewTarget(); // Function BP-GrenadeWeaponBase.BP-GrenadeWeaponBase_C.K2_OnOwnerEndViewTarget(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void ReceiveEndPlay(char EndPlayReason); // Function BP-GrenadeWeaponBase.BP-GrenadeWeaponBase_C.ReceiveEndPlay(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void ExecuteUbergraph_BP-GrenadeWeaponBase(int32_t EntryPoint); // Function BP-GrenadeWeaponBase.BP-GrenadeWeaponBase_C.ExecuteUbergraph_BP-GrenadeWeaponBase(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
};

// Function BP-GrenadeWeaponBase.BP-GrenadeWeaponBase_C.GetDebugInfo
inline struct UBravoHotelDebugInfo ABP-GrenadeWeaponBase_C::GetDebugInfo() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-GrenadeWeaponBase.BP-GrenadeWeaponBase_C.GetDebugInfo");

	struct GetDebugInfo_Params {
		
		struct UBravoHotelDebugInfo ReturnValue;

	}; GetDebugInfo_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function BP-GrenadeWeaponBase.BP-GrenadeWeaponBase_C.CheckNeedDrawing
inline void ABP-GrenadeWeaponBase_C::CheckNeedDrawing(char& Need) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-GrenadeWeaponBase.BP-GrenadeWeaponBase_C.CheckNeedDrawing");

	struct CheckNeedDrawing_Params {
		char& Need;
	}; CheckNeedDrawing_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Need = Params.Need;

}

// Function BP-GrenadeWeaponBase.BP-GrenadeWeaponBase_C.IsReplayTarget
inline void ABP-GrenadeWeaponBase_C::IsReplayTarget(char& IsReplayTarget) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-GrenadeWeaponBase.BP-GrenadeWeaponBase_C.IsReplayTarget");

	struct IsReplayTarget_Params {
		char& IsReplayTarget;
	}; IsReplayTarget_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	IsReplayTarget = Params.IsReplayTarget;

}

// Function BP-GrenadeWeaponBase.BP-GrenadeWeaponBase_C.GetProjectileLocationAndVelocity
inline void ABP-GrenadeWeaponBase_C::GetProjectileLocationAndVelocity(int32_t Index, struct FVector& Location, struct FVector& Velocity) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-GrenadeWeaponBase.BP-GrenadeWeaponBase_C.GetProjectileLocationAndVelocity");

	struct GetProjectileLocationAndVelocity_Params {
		int32_t Index;
		struct FVector& Location;
		struct FVector& Velocity;
	}; GetProjectileLocationAndVelocity_Params Params;

	Params.Index = Index;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Location = Params.Location;
	Velocity = Params.Velocity;

}

// Function BP-GrenadeWeaponBase.BP-GrenadeWeaponBase_C.ThrowingAction
inline void ABP-GrenadeWeaponBase_C::ThrowingAction(enum class EThrowingWeaponState ThrowingWeaponState, char Condition) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-GrenadeWeaponBase.BP-GrenadeWeaponBase_C.ThrowingAction");

	struct ThrowingAction_Params {
		enum class EThrowingWeaponState ThrowingWeaponState;
		char Condition;
	}; ThrowingAction_Params Params;

	Params.ThrowingWeaponState = ThrowingWeaponState;
	Params.Condition = Condition;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-GrenadeWeaponBase.BP-GrenadeWeaponBase_C.Add Spline Mesh
inline struct USplineMeshComponent ABP-GrenadeWeaponBase_C::Add Spline Mesh() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-GrenadeWeaponBase.BP-GrenadeWeaponBase_C.Add Spline Mesh");

	struct Add Spline Mesh_Params {
		
		struct USplineMeshComponent ReturnValue;

	}; Add Spline Mesh_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function BP-GrenadeWeaponBase.BP-GrenadeWeaponBase_C.CalcGrenadeWeaponLocationOffset
inline void ABP-GrenadeWeaponBase_C::CalcGrenadeWeaponLocationOffset(struct FVector Offest) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-GrenadeWeaponBase.BP-GrenadeWeaponBase_C.CalcGrenadeWeaponLocationOffset");

	struct CalcGrenadeWeaponLocationOffset_Params {
		struct FVector Offest;
	}; CalcGrenadeWeaponLocationOffset_Params Params;

	Params.Offest = Offest;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-GrenadeWeaponBase.BP-GrenadeWeaponBase_C.Lerp__FinishedFunc
inline void ABP-GrenadeWeaponBase_C::Lerp__FinishedFunc() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-GrenadeWeaponBase.BP-GrenadeWeaponBase_C.Lerp__FinishedFunc");

	struct Lerp__FinishedFunc_Params {
		
	}; Lerp__FinishedFunc_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-GrenadeWeaponBase.BP-GrenadeWeaponBase_C.Lerp__UpdateFunc
inline void ABP-GrenadeWeaponBase_C::Lerp__UpdateFunc() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-GrenadeWeaponBase.BP-GrenadeWeaponBase_C.Lerp__UpdateFunc");

	struct Lerp__UpdateFunc_Params {
		
	}; Lerp__UpdateFunc_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-GrenadeWeaponBase.BP-GrenadeWeaponBase_C.Timeline_0__FinishedFunc
inline void ABP-GrenadeWeaponBase_C::Timeline_0__FinishedFunc() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-GrenadeWeaponBase.BP-GrenadeWeaponBase_C.Timeline_0__FinishedFunc");

	struct Timeline_0__FinishedFunc_Params {
		
	}; Timeline_0__FinishedFunc_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-GrenadeWeaponBase.BP-GrenadeWeaponBase_C.Timeline_0__UpdateFunc
inline void ABP-GrenadeWeaponBase_C::Timeline_0__UpdateFunc() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-GrenadeWeaponBase.BP-GrenadeWeaponBase_C.Timeline_0__UpdateFunc");

	struct Timeline_0__UpdateFunc_Params {
		
	}; Timeline_0__UpdateFunc_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-GrenadeWeaponBase.BP-GrenadeWeaponBase_C.DrawProjectileTrajectory
inline void ABP-GrenadeWeaponBase_C::DrawProjectileTrajectory() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-GrenadeWeaponBase.BP-GrenadeWeaponBase_C.DrawProjectileTrajectory");

	struct DrawProjectileTrajectory_Params {
		
	}; DrawProjectileTrajectory_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-GrenadeWeaponBase.BP-GrenadeWeaponBase_C.ReceiveDestroyed
inline void ABP-GrenadeWeaponBase_C::ReceiveDestroyed() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-GrenadeWeaponBase.BP-GrenadeWeaponBase_C.ReceiveDestroyed");

	struct ReceiveDestroyed_Params {
		
	}; ReceiveDestroyed_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-GrenadeWeaponBase.BP-GrenadeWeaponBase_C.OnChangeThrowingWeaponStateDelegate_Event
inline void ABP-GrenadeWeaponBase_C::OnChangeThrowingWeaponStateDelegate_Event(enum class EThrowingWeaponState ThrowingWeaponState) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-GrenadeWeaponBase.BP-GrenadeWeaponBase_C.OnChangeThrowingWeaponStateDelegate_Event");

	struct OnChangeThrowingWeaponStateDelegate_Event_Params {
		enum class EThrowingWeaponState ThrowingWeaponState;
	}; OnChangeThrowingWeaponStateDelegate_Event_Params Params;

	Params.ThrowingWeaponState = ThrowingWeaponState;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-GrenadeWeaponBase.BP-GrenadeWeaponBase_C.OnChangeThrowingTypeDelegate_Event
inline void ABP-GrenadeWeaponBase_C::OnChangeThrowingTypeDelegate_Event(enum class EGrenadeThrowingType ThrowingType) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-GrenadeWeaponBase.BP-GrenadeWeaponBase_C.OnChangeThrowingTypeDelegate_Event");

	struct OnChangeThrowingTypeDelegate_Event_Params {
		enum class EGrenadeThrowingType ThrowingType;
	}; OnChangeThrowingTypeDelegate_Event_Params Params;

	Params.ThrowingType = ThrowingType;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-GrenadeWeaponBase.BP-GrenadeWeaponBase_C.DrawProjectileTrajectory_ChangeType
inline void ABP-GrenadeWeaponBase_C::DrawProjectileTrajectory_ChangeType() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-GrenadeWeaponBase.BP-GrenadeWeaponBase_C.DrawProjectileTrajectory_ChangeType");

	struct DrawProjectileTrajectory_ChangeType_Params {
		
	}; DrawProjectileTrajectory_ChangeType_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-GrenadeWeaponBase.BP-GrenadeWeaponBase_C.OnCharacterGroundStateChangeDelegate
inline void ABP-GrenadeWeaponBase_C::OnCharacterGroundStateChangeDelegate(enum class ECharacterGroundState State) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-GrenadeWeaponBase.BP-GrenadeWeaponBase_C.OnCharacterGroundStateChangeDelegate");

	struct OnCharacterGroundStateChangeDelegate_Params {
		enum class ECharacterGroundState State;
	}; OnCharacterGroundStateChangeDelegate_Params Params;

	Params.State = State;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-GrenadeWeaponBase.BP-GrenadeWeaponBase_C.InitProjectileTrajectory
inline void ABP-GrenadeWeaponBase_C::InitProjectileTrajectory() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-GrenadeWeaponBase.BP-GrenadeWeaponBase_C.InitProjectileTrajectory");

	struct InitProjectileTrajectory_Params {
		
	}; InitProjectileTrajectory_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-GrenadeWeaponBase.BP-GrenadeWeaponBase_C.OnFire
inline void ABP-GrenadeWeaponBase_C::OnFire() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-GrenadeWeaponBase.BP-GrenadeWeaponBase_C.OnFire");

	struct OnFire_Params {
		
	}; OnFire_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-GrenadeWeaponBase.BP-GrenadeWeaponBase_C.ForceUpdateProjectileTrajectory
inline void ABP-GrenadeWeaponBase_C::ForceUpdateProjectileTrajectory() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-GrenadeWeaponBase.BP-GrenadeWeaponBase_C.ForceUpdateProjectileTrajectory");

	struct ForceUpdateProjectileTrajectory_Params {
		
	}; ForceUpdateProjectileTrajectory_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-GrenadeWeaponBase.BP-GrenadeWeaponBase_C.OnChangedReplayViewMode_2
inline void ABP-GrenadeWeaponBase_C::OnChangedReplayViewMode_2(char IsPlayer) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-GrenadeWeaponBase.BP-GrenadeWeaponBase_C.OnChangedReplayViewMode_2");

	struct OnChangedReplayViewMode_2_Params {
		char IsPlayer;
	}; OnChangedReplayViewMode_2_Params Params;

	Params.IsPlayer = IsPlayer;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-GrenadeWeaponBase.BP-GrenadeWeaponBase_C.K2_OnOwnerBecomeViewTarget
inline void ABP-GrenadeWeaponBase_C::K2_OnOwnerBecomeViewTarget() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-GrenadeWeaponBase.BP-GrenadeWeaponBase_C.K2_OnOwnerBecomeViewTarget");

	struct K2_OnOwnerBecomeViewTarget_Params {
		
	}; K2_OnOwnerBecomeViewTarget_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-GrenadeWeaponBase.BP-GrenadeWeaponBase_C.K2_OnOwnerEndViewTarget
inline void ABP-GrenadeWeaponBase_C::K2_OnOwnerEndViewTarget() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-GrenadeWeaponBase.BP-GrenadeWeaponBase_C.K2_OnOwnerEndViewTarget");

	struct K2_OnOwnerEndViewTarget_Params {
		
	}; K2_OnOwnerEndViewTarget_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-GrenadeWeaponBase.BP-GrenadeWeaponBase_C.ReceiveEndPlay
inline void ABP-GrenadeWeaponBase_C::ReceiveEndPlay(char EndPlayReason) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-GrenadeWeaponBase.BP-GrenadeWeaponBase_C.ReceiveEndPlay");

	struct ReceiveEndPlay_Params {
		char EndPlayReason;
	}; ReceiveEndPlay_Params Params;

	Params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-GrenadeWeaponBase.BP-GrenadeWeaponBase_C.ExecuteUbergraph_BP-GrenadeWeaponBase
inline void ABP-GrenadeWeaponBase_C::ExecuteUbergraph_BP-GrenadeWeaponBase(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-GrenadeWeaponBase.BP-GrenadeWeaponBase_C.ExecuteUbergraph_BP-GrenadeWeaponBase");

	struct ExecuteUbergraph_BP-GrenadeWeaponBase_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_BP-GrenadeWeaponBase_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

