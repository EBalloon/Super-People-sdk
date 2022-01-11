// BlueprintGeneratedClass BP-PersonalSupplyBox.BP-PersonalSupplyBox_C
class ABP-PersonalSupplyBox_C : public ABHPersonalSupplyBox {

public:

	struct Unknown UberGraphFrame; // 0x380 (8)
	struct Unknown StaticMeshUnassigned; // 0x388 (8)
	struct Unknown StaticMeshAssigned; // 0x390 (8)
	float LandingTimer; // 0x398 (4)
	char bLanding : 0; // 0x39C (1)
	struct TArray<Unknown> ItemResult; // 0x3A0 (16)
	float ParachuteTimer; // 0x3B0 (4)
	float VisibleValue; // 0x3B4 (4)
	char VisibleAnimationState : 0; // 0x3B8 (1)

	void ReceiveTick(float DeltaSeconds); // Function BP-PersonalSupplyBox.BP-PersonalSupplyBox_C.ReceiveTick(Event|Public|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void UpdateEffect(float InterpValue); // Function BP-PersonalSupplyBox.BP-PersonalSupplyBox_C.UpdateEffect(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void ChangeBoxMesh(char IsMyBox); // Function BP-PersonalSupplyBox.BP-PersonalSupplyBox_C.ChangeBoxMesh(Event|Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void Visible Animation(char IsShow); // Function BP-PersonalSupplyBox.BP-PersonalSupplyBox_C.Visible Animation(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void OnChangeState(enum class Unknow StateType); // Function BP-PersonalSupplyBox.BP-PersonalSupplyBox_C.OnChangeState(Event|Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void ReceiveBeginPlay(); // Function BP-PersonalSupplyBox.BP-PersonalSupplyBox_C.ReceiveBeginPlay(Event|Protected|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void ExecuteUbergraph_BP-PersonalSupplyBox(int32_t EntryPoint); // Function BP-PersonalSupplyBox.BP-PersonalSupplyBox_C.ExecuteUbergraph_BP-PersonalSupplyBox(Final|UbergraphFunction) // <Game_BE.exe+0x2B80160>
};

// Function BP-PersonalSupplyBox.BP-PersonalSupplyBox_C.ReceiveTick
inline void ABP-PersonalSupplyBox_C::ReceiveTick(float DeltaSeconds) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-PersonalSupplyBox.BP-PersonalSupplyBox_C.ReceiveTick");

	struct ReceiveTick_Params {
		float DeltaSeconds;
	}; ReceiveTick_Params Params;

	Params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-PersonalSupplyBox.BP-PersonalSupplyBox_C.UpdateEffect
inline void ABP-PersonalSupplyBox_C::UpdateEffect(float InterpValue) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-PersonalSupplyBox.BP-PersonalSupplyBox_C.UpdateEffect");

	struct UpdateEffect_Params {
		float InterpValue;
	}; UpdateEffect_Params Params;

	Params.InterpValue = InterpValue;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-PersonalSupplyBox.BP-PersonalSupplyBox_C.ChangeBoxMesh
inline void ABP-PersonalSupplyBox_C::ChangeBoxMesh(char IsMyBox) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-PersonalSupplyBox.BP-PersonalSupplyBox_C.ChangeBoxMesh");

	struct ChangeBoxMesh_Params {
		char IsMyBox;
	}; ChangeBoxMesh_Params Params;

	Params.IsMyBox = IsMyBox;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-PersonalSupplyBox.BP-PersonalSupplyBox_C.Visible Animation
inline void ABP-PersonalSupplyBox_C::Visible Animation(char IsShow) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-PersonalSupplyBox.BP-PersonalSupplyBox_C.Visible Animation");

	struct Visible Animation_Params {
		char IsShow;
	}; Visible Animation_Params Params;

	Params.IsShow = IsShow;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-PersonalSupplyBox.BP-PersonalSupplyBox_C.OnChangeState
inline void ABP-PersonalSupplyBox_C::OnChangeState(enum class Unknow StateType) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-PersonalSupplyBox.BP-PersonalSupplyBox_C.OnChangeState");

	struct OnChangeState_Params {
		enum class Unknow StateType;
	}; OnChangeState_Params Params;

	Params.StateType = StateType;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-PersonalSupplyBox.BP-PersonalSupplyBox_C.ReceiveBeginPlay
inline void ABP-PersonalSupplyBox_C::ReceiveBeginPlay() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-PersonalSupplyBox.BP-PersonalSupplyBox_C.ReceiveBeginPlay");

	struct ReceiveBeginPlay_Params {
		
	}; ReceiveBeginPlay_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-PersonalSupplyBox.BP-PersonalSupplyBox_C.ExecuteUbergraph_BP-PersonalSupplyBox
inline void ABP-PersonalSupplyBox_C::ExecuteUbergraph_BP-PersonalSupplyBox(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-PersonalSupplyBox.BP-PersonalSupplyBox_C.ExecuteUbergraph_BP-PersonalSupplyBox");

	struct ExecuteUbergraph_BP-PersonalSupplyBox_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_BP-PersonalSupplyBox_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

