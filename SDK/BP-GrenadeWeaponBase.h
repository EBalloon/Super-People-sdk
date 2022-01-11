// BlueprintGeneratedClass BP-GrenadeWeaponBase.BP-GrenadeWeaponBase_C
class ABP-GrenadeWeaponBase_C : public ABravoHotelGrenadeWeapon {

public:

	struct Unknown UberGraphFrame; // 0x1F10 (8)
	struct Unknown StaticMesh_Ring; // 0x1F18 (8)
	struct Unknown StaticMesh_Lever; // 0x1F20 (8)
	float Timeline_0_Lerp_77CED3694A7ECD58C02266AF5F5B5991; // 0x1F28 (4)
	char Timeline_0__Direction_77CED3694A7ECD58C02266AF5F5B5991; // 0x1F2C (1)
	struct Unknown Timeline_1; // 0x1F30 (8)
	float Lerp_Lerp_EDD5977E4E850EC460B1E599F1FF45F8; // 0x1F38 (4)
	char Lerp__Direction_EDD5977E4E850EC460B1E599F1FF45F8; // 0x1F3C (1)
	struct Unknown Lerp; // 0x1F40 (8)
	struct Unknown InterpOffset; // 0x1F48 (12)
	struct Unknown DesiredLocation; // 0x1F54 (12)
	struct Unknown InitalLocalVelocity; // 0x1F60 (12)
	struct Unknown DesiredLocation_Ing; // 0x1F6C (12)
	struct Unknown InitalLocalVelocity_Ing; // 0x1F78 (12)
	enum class Unknow ThrowingWeaponState; // 0x1F84 (1)
	char ThrowingAction_Bool : 0; // 0x1F85 (1)
	struct Unknown DesiredLocation_3; // 0x1F88 (12)
	struct Unknown DesiredLocation_2_Ing; // 0x1F94 (12)
	struct Unknown InitalLocalVelocity_3; // 0x1FA0 (12)
	struct Unknown InitalLocalVelocity_2_ing; // 0x1FAC (12)
	float PathLifeTime; // 0x1FB8 (4)
	float TimeInterval; // 0x1FBC (4)
	struct Unknown IndicatorComponent_2; // 0x1FC0 (8)
	struct Unknown IndicatorComponent_3; // 0x1FC8 (8)
	struct Unknown TrajectoryComponent_2; // 0x1FD0 (8)
	struct Unknown TrajectoryComponent_3; // 0x1FD8 (8)

	struct Unknown GetDebugInfo(); // Function BP-GrenadeWeaponBase.BP-GrenadeWeaponBase_C.GetDebugInfo(HasOutParms|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void CheckNeedDrawing(char& Need); // Function BP-GrenadeWeaponBase.BP-GrenadeWeaponBase_C.CheckNeedDrawing(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <Game_BE.exe+0x2B80160>
	void IsReplayTarget(char& IsReplayTarget); // Function BP-GrenadeWeaponBase.BP-GrenadeWeaponBase_C.IsReplayTarget(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <Game_BE.exe+0x2B80160>
	void GetProjectileLocationAndVelocity(int32_t Index, struct Unknown& Location, struct Unknown& Velocity); // Function BP-GrenadeWeaponBase.BP-GrenadeWeaponBase_C.GetProjectileLocationAndVelocity(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <Game_BE.exe+0x2B80160>
	void ThrowingAction(enum class Unknow ThrowingWeaponState, char Condition); // Function BP-GrenadeWeaponBase.BP-GrenadeWeaponBase_C.ThrowingAction(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	struct Unknown Add Spline Mesh(); // Function BP-GrenadeWeaponBase.BP-GrenadeWeaponBase_C.Add Spline Mesh(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void CalcGrenadeWeaponLocationOffset(struct Unknown Offest); // Function BP-GrenadeWeaponBase.BP-GrenadeWeaponBase_C.CalcGrenadeWeaponLocationOffset(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void Lerp__FinishedFunc(); // Function BP-GrenadeWeaponBase.BP-GrenadeWeaponBase_C.Lerp__FinishedFunc(BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void Lerp__UpdateFunc(); // Function BP-GrenadeWeaponBase.BP-GrenadeWeaponBase_C.Lerp__UpdateFunc(BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void Timeline_0__FinishedFunc(); // Function BP-GrenadeWeaponBase.BP-GrenadeWeaponBase_C.Timeline_0__FinishedFunc(BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void Timeline_0__UpdateFunc(); // Function BP-GrenadeWeaponBase.BP-GrenadeWeaponBase_C.Timeline_0__UpdateFunc(BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void DrawProjectileTrajectory(); // Function BP-GrenadeWeaponBase.BP-GrenadeWeaponBase_C.DrawProjectileTrajectory(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void ReceiveDestroyed(); // Function BP-GrenadeWeaponBase.BP-GrenadeWeaponBase_C.ReceiveDestroyed(Event|Public|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void OnChangeThrowingWeaponStateDelegate_Event(enum class Unknow ThrowingWeaponState); // Function BP-GrenadeWeaponBase.BP-GrenadeWeaponBase_C.OnChangeThrowingWeaponStateDelegate_Event(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void OnChangeThrowingTypeDelegate_Event(enum class Unknow ThrowingType); // Function BP-GrenadeWeaponBase.BP-GrenadeWeaponBase_C.OnChangeThrowingTypeDelegate_Event(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void DrawProjectileTrajectory_ChangeType(); // Function BP-GrenadeWeaponBase.BP-GrenadeWeaponBase_C.DrawProjectileTrajectory_ChangeType(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void OnCharacterGroundStateChangeDelegate(enum class Unknow State); // Function BP-GrenadeWeaponBase.BP-GrenadeWeaponBase_C.OnCharacterGroundStateChangeDelegate(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void InitProjectileTrajectory(); // Function BP-GrenadeWeaponBase.BP-GrenadeWeaponBase_C.InitProjectileTrajectory(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void OnFire(); // Function BP-GrenadeWeaponBase.BP-GrenadeWeaponBase_C.OnFire(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void ForceUpdateProjectileTrajectory(); // Function BP-GrenadeWeaponBase.BP-GrenadeWeaponBase_C.ForceUpdateProjectileTrajectory(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void OnChangedReplayViewMode_2(char IsPlayer); // Function BP-GrenadeWeaponBase.BP-GrenadeWeaponBase_C.OnChangedReplayViewMode_2(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void K2_OnOwnerBecomeViewTarget(); // Function BP-GrenadeWeaponBase.BP-GrenadeWeaponBase_C.K2_OnOwnerBecomeViewTarget(Event|Protected|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void K2_OnOwnerEndViewTarget(); // Function BP-GrenadeWeaponBase.BP-GrenadeWeaponBase_C.K2_OnOwnerEndViewTarget(Event|Protected|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void ReceiveEndPlay(char EndPlayReason); // Function BP-GrenadeWeaponBase.BP-GrenadeWeaponBase_C.ReceiveEndPlay(Event|Protected|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void ExecuteUbergraph_BP-GrenadeWeaponBase(int32_t EntryPoint); // Function BP-GrenadeWeaponBase.BP-GrenadeWeaponBase_C.ExecuteUbergraph_BP-GrenadeWeaponBase(Final|UbergraphFunction|HasDefaults) // <Game_BE.exe+0x2B80160>
};

// Function BP-GrenadeWeaponBase.BP-GrenadeWeaponBase_C.GetDebugInfo
inline struct Unknown ABP-GrenadeWeaponBase_C::GetDebugInfo() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-GrenadeWeaponBase.BP-GrenadeWeaponBase_C.GetDebugInfo");

	struct GetDebugInfo_Params {
		
		struct Unknown ReturnValue;

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
inline void ABP-GrenadeWeaponBase_C::GetProjectileLocationAndVelocity(int32_t Index, struct Unknown& Location, struct Unknown& Velocity) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-GrenadeWeaponBase.BP-GrenadeWeaponBase_C.GetProjectileLocationAndVelocity");

	struct GetProjectileLocationAndVelocity_Params {
		int32_t Index;
		struct Unknown& Location;
		struct Unknown& Velocity;
	}; GetProjectileLocationAndVelocity_Params Params;

	Params.Index = Index;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Location = Params.Location;
	Velocity = Params.Velocity;

}

// Function BP-GrenadeWeaponBase.BP-GrenadeWeaponBase_C.ThrowingAction
inline void ABP-GrenadeWeaponBase_C::ThrowingAction(enum class Unknow ThrowingWeaponState, char Condition) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-GrenadeWeaponBase.BP-GrenadeWeaponBase_C.ThrowingAction");

	struct ThrowingAction_Params {
		enum class Unknow ThrowingWeaponState;
		char Condition;
	}; ThrowingAction_Params Params;

	Params.ThrowingWeaponState = ThrowingWeaponState;
	Params.Condition = Condition;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-GrenadeWeaponBase.BP-GrenadeWeaponBase_C.Add Spline Mesh
inline struct Unknown ABP-GrenadeWeaponBase_C::Add Spline Mesh() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-GrenadeWeaponBase.BP-GrenadeWeaponBase_C.Add Spline Mesh");

	struct Add Spline Mesh_Params {
		
		struct Unknown ReturnValue;

	}; Add Spline Mesh_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function BP-GrenadeWeaponBase.BP-GrenadeWeaponBase_C.CalcGrenadeWeaponLocationOffset
inline void ABP-GrenadeWeaponBase_C::CalcGrenadeWeaponLocationOffset(struct Unknown Offest) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-GrenadeWeaponBase.BP-GrenadeWeaponBase_C.CalcGrenadeWeaponLocationOffset");

	struct CalcGrenadeWeaponLocationOffset_Params {
		struct Unknown Offest;
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
inline void ABP-GrenadeWeaponBase_C::OnChangeThrowingWeaponStateDelegate_Event(enum class Unknow ThrowingWeaponState) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-GrenadeWeaponBase.BP-GrenadeWeaponBase_C.OnChangeThrowingWeaponStateDelegate_Event");

	struct OnChangeThrowingWeaponStateDelegate_Event_Params {
		enum class Unknow ThrowingWeaponState;
	}; OnChangeThrowingWeaponStateDelegate_Event_Params Params;

	Params.ThrowingWeaponState = ThrowingWeaponState;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-GrenadeWeaponBase.BP-GrenadeWeaponBase_C.OnChangeThrowingTypeDelegate_Event
inline void ABP-GrenadeWeaponBase_C::OnChangeThrowingTypeDelegate_Event(enum class Unknow ThrowingType) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-GrenadeWeaponBase.BP-GrenadeWeaponBase_C.OnChangeThrowingTypeDelegate_Event");

	struct OnChangeThrowingTypeDelegate_Event_Params {
		enum class Unknow ThrowingType;
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
inline void ABP-GrenadeWeaponBase_C::OnCharacterGroundStateChangeDelegate(enum class Unknow State) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-GrenadeWeaponBase.BP-GrenadeWeaponBase_C.OnCharacterGroundStateChangeDelegate");

	struct OnCharacterGroundStateChangeDelegate_Params {
		enum class Unknow State;
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

