// AnimBlueprintGeneratedClass ABP-LobbyPawn.ABP-LobbyPawn_C
class UABP-LobbyPawn_C : public UAnimInstance {

public:

	struct Unknown UberGraphFrame; // 0x270 (8)
	struct Unknown AnimGraphNode_AnimDynamics_11; // 0x280 (1088)
	struct Unknown AnimGraphNode_AnimDynamics_10; // 0x6C0 (1088)
	struct Unknown AnimGraphNode_ComponentToLocalSpace; // 0xB00 (32)
	struct Unknown AnimGraphNode_AnimDynamics_9; // 0xB20 (1088)
	struct Unknown AnimGraphNode_AnimDynamics_8; // 0xF60 (1088)
	struct Unknown AnimGraphNode_AnimDynamics_7; // 0x13A0 (1088)
	struct Unknown AnimGraphNode_AnimDynamics_6; // 0x17E0 (1088)
	struct Unknown AnimGraphNode_AnimDynamics_5; // 0x1C20 (1088)
	struct Unknown AnimGraphNode_AnimDynamics_4; // 0x2060 (1088)
	struct Unknown AnimGraphNode_AnimDynamics_3; // 0x24A0 (1088)
	struct Unknown AnimGraphNode_LocalToComponentSpace; // 0x28E0 (32)
	struct Unknown AnimGraphNode_SequencePlayer_12; // 0x2900 (120)
	struct Unknown AnimGraphNode_TransitionResult_4; // 0x2978 (40)
	struct Unknown AnimGraphNode_TransitionResult_3; // 0x29A0 (40)
	struct Unknown AnimGraphNode_TransitionResult_2; // 0x29C8 (40)
	struct Unknown AnimGraphNode_TransitionResult; // 0x29F0 (40)
	struct Unknown AnimGraphNode_SequencePlayer_11; // 0x2A18 (120)
	struct Unknown AnimGraphNode_StateResult_4; // 0x2A90 (48)
	struct Unknown AnimGraphNode_SequencePlayer_10; // 0x2AC0 (120)
	struct Unknown AnimGraphNode_StateResult_3; // 0x2B38 (48)
	struct Unknown AnimGraphNode_SequencePlayer_9; // 0x2B68 (120)
	struct Unknown AnimGraphNode_StateResult_2; // 0x2BE0 (48)
	struct Unknown AnimGraphNode_SequencePlayer_8; // 0x2C10 (120)
	struct Unknown AnimGraphNode_StateResult; // 0x2C88 (48)
	struct Unknown AnimGraphNode_StateMachine; // 0x2CB8 (176)
	struct Unknown AnimGraphNode_SaveCachedPose_3; // 0x2D68 (184)
	struct Unknown AnimGraphNode_UseCachedPose_6; // 0x2E20 (40)
	struct Unknown AnimGraphNode_UseCachedPose_5; // 0x2E48 (40)
	struct Unknown AnimGraphNode_UseCachedPose_4; // 0x2E70 (40)
	struct Unknown AnimGraphNode_UseCachedPose_3; // 0x2E98 (40)
	struct Unknown AnimGraphNode_AnimDynamics_2; // 0x2EC0 (1088)
	struct Unknown AnimGraphNode_AnimDynamics; // 0x3300 (1088)
	struct Unknown AnimGraphNode_KawaiiPhysics_12; // 0x3740 (592)
	struct Unknown AnimGraphNode_KawaiiPhysics_11; // 0x3990 (592)
	struct Unknown AnimGraphNode_KawaiiPhysics_10; // 0x3BE0 (592)
	struct Unknown AnimGraphNode_KawaiiPhysics_9; // 0x3E30 (592)
	struct Unknown AnimGraphNode_KawaiiPhysics_8; // 0x4080 (592)
	struct Unknown AnimGraphNode_KawaiiPhysics_7; // 0x42D0 (592)
	struct Unknown AnimGraphNode_BoneDrivenController_8; // 0x4520 (280)
	struct Unknown AnimGraphNode_BoneDrivenController_7; // 0x4638 (280)
	struct Unknown AnimGraphNode_BoneDrivenController_6; // 0x4750 (280)
	struct Unknown AnimGraphNode_BoneDrivenController_5; // 0x4868 (280)
	struct Unknown AnimGraphNode_BoneDrivenController_4; // 0x4980 (280)
	struct Unknown AnimGraphNode_BoneDrivenController_3; // 0x4A98 (280)
	struct Unknown AnimGraphNode_BoneDrivenController_2; // 0x4BB0 (280)
	struct Unknown AnimGraphNode_BoneDrivenController; // 0x4CC8 (280)
	struct Unknown AnimGraphNode_SaveCachedPose_2; // 0x4DE0 (184)
	struct Unknown AnimGraphNode_BlendListByEnum; // 0x4E98 (176)
	struct Unknown AnimGraphNode_SequencePlayer_7; // 0x4F48 (120)
	struct Unknown AnimGraphNode_LayeredBoneBlend_2; // 0x4FC0 (192)
	struct Unknown AnimGraphNode_SequencePlayer_6; // 0x5080 (120)
	struct Unknown AnimGraphNode_SequencePlayer_5; // 0x50F8 (120)
	struct Unknown AnimGraphNode_LayeredBoneBlend; // 0x5170 (192)
	struct Unknown AnimGraphNode_SequencePlayer_4; // 0x5230 (120)
	struct Unknown AnimGraphNode_SequencePlayer_3; // 0x52A8 (120)
	struct Unknown AnimGraphNode_SequencePlayer_2; // 0x5320 (120)
	struct Unknown AnimGraphNode_ApplyAdditive; // 0x5398 (200)
	struct Unknown AnimGraphNode_UseCachedPose_2; // 0x5460 (40)
	struct Unknown AnimGraphNode_UseCachedPose; // 0x5488 (40)
	struct Unknown AnimGraphNode_SaveCachedPose; // 0x54B0 (184)
	struct Unknown AnimGraphNode_BlendListByBool; // 0x5568 (160)
	struct Unknown AnimGraphNode_SequencePlayer; // 0x5608 (120)
	struct Unknown AnimGraphNode_BlendListByInt; // 0x5680 (160)
	struct Unknown AnimGraphNode_Root; // 0x5720 (48)
	struct Unknown AnimGraphNode_KawaiiPhysics_6; // 0x5750 (592)
	struct Unknown AnimGraphNode_KawaiiPhysics_5; // 0x59A0 (592)
	struct Unknown AnimGraphNode_KawaiiPhysics_4; // 0x5BF0 (592)
	struct Unknown AnimGraphNode_KawaiiPhysics_3; // 0x5E40 (592)
	struct Unknown AnimGraphNode_KawaiiPhysics_2; // 0x6090 (592)
	struct Unknown AnimGraphNode_KawaiiPhysics; // 0x62E0 (592)
	int32_t PawnIndex; // 0x6530 (4)
	int32_t IdleNum; // 0x6534 (4)
	struct Unknown IdleAnimSequence; // 0x6538 (8)
	struct Unknown CharacterRef; // 0x6540 (8)
	char bIsMale : 0; // 0x6548 (1)
	char bIsEquippingWeapon : 0; // 0x6549 (1)
	enum class Unknow WeaponAnimType; // 0x654A (1)
	struct Unknown HandAnim; // 0x6550 (8)
	enum class Unknow GripType; // 0x6558 (1)
	char bIsEquippingNormalGrip : 0; // 0x6559 (1)
	struct Unknown HandL_Location; // 0x655C (12)
	struct Unknown HandL_Rotation; // 0x6568 (12)
	float LeftHandIK_Alpha; // 0x6574 (4)
	struct Unknown AnimDynamicsForce; // 0x6578 (12)
	float PrevCharacterRotationYaw; // 0x6584 (4)
	float RightHandIK_Alpha; // 0x6588 (4)
	char bReady : 0; // 0x658C (1)
	struct Unknown ReadyAnimSequence; // 0x6590 (8)
	struct Unknown Readyon_AnimSequence; // 0x6598 (8)
	struct Unknown Readyoff_AnimSequence; // 0x65A0 (8)
	float DeltaTimeX; // 0x65A8 (4)
	float HairAnimDynamicsAlpha; // 0x65AC (4)

	void AnimGraph(struct Unknown& AnimGraph); // Function ABP-LobbyPawn.ABP-LobbyPawn_C.AnimGraph(HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void UpdateAnimDynamicsAlpha(); // Function ABP-LobbyPawn.ABP-LobbyPawn_C.UpdateAnimDynamicsAlpha(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	char IsNeedToApplyLeftHandIK(); // Function ABP-LobbyPawn.ABP-LobbyPawn_C.IsNeedToApplyLeftHandIK(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function ABP-LobbyPawn.ABP-LobbyPawn_C.BlueprintUpdateAnimation(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP-LobbyPawn_AnimGraphNode_TransitionResult_B1938DBB4FA07527E591E291B7304361(); // Function ABP-LobbyPawn.ABP-LobbyPawn_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP-LobbyPawn_AnimGraphNode_TransitionResult_B1938DBB4FA07527E591E291B7304361(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP-LobbyPawn_AnimGraphNode_TransitionResult_5F4429C24615D1D556AB4C92EB9C64DC(); // Function ABP-LobbyPawn.ABP-LobbyPawn_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP-LobbyPawn_AnimGraphNode_TransitionResult_5F4429C24615D1D556AB4C92EB9C64DC(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void ExecuteUbergraph_ABP-LobbyPawn(int32_t EntryPoint); // Function ABP-LobbyPawn.ABP-LobbyPawn_C.ExecuteUbergraph_ABP-LobbyPawn(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
};

// Function ABP-LobbyPawn.ABP-LobbyPawn_C.AnimGraph
inline void UABP-LobbyPawn_C::AnimGraph(struct Unknown& AnimGraph) {
	static auto fn = UObject::FindObject<UFunction>("Function ABP-LobbyPawn.ABP-LobbyPawn_C.AnimGraph");

	struct AnimGraph_Params {
		struct Unknown& AnimGraph;
	}; AnimGraph_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	AnimGraph = Params.AnimGraph;

}

// Function ABP-LobbyPawn.ABP-LobbyPawn_C.UpdateAnimDynamicsAlpha
inline void UABP-LobbyPawn_C::UpdateAnimDynamicsAlpha() {
	static auto fn = UObject::FindObject<UFunction>("Function ABP-LobbyPawn.ABP-LobbyPawn_C.UpdateAnimDynamicsAlpha");

	struct UpdateAnimDynamicsAlpha_Params {
		
	}; UpdateAnimDynamicsAlpha_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ABP-LobbyPawn.ABP-LobbyPawn_C.IsNeedToApplyLeftHandIK
inline char UABP-LobbyPawn_C::IsNeedToApplyLeftHandIK() {
	static auto fn = UObject::FindObject<UFunction>("Function ABP-LobbyPawn.ABP-LobbyPawn_C.IsNeedToApplyLeftHandIK");

	struct IsNeedToApplyLeftHandIK_Params {
		
		char ReturnValue;

	}; IsNeedToApplyLeftHandIK_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function ABP-LobbyPawn.ABP-LobbyPawn_C.BlueprintUpdateAnimation
inline void UABP-LobbyPawn_C::BlueprintUpdateAnimation(float DeltaTimeX) {
	static auto fn = UObject::FindObject<UFunction>("Function ABP-LobbyPawn.ABP-LobbyPawn_C.BlueprintUpdateAnimation");

	struct BlueprintUpdateAnimation_Params {
		float DeltaTimeX;
	}; BlueprintUpdateAnimation_Params Params;

	Params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ABP-LobbyPawn.ABP-LobbyPawn_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP-LobbyPawn_AnimGraphNode_TransitionResult_B1938DBB4FA07527E591E291B7304361
inline void UABP-LobbyPawn_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP-LobbyPawn_AnimGraphNode_TransitionResult_B1938DBB4FA07527E591E291B7304361() {
	static auto fn = UObject::FindObject<UFunction>("Function ABP-LobbyPawn.ABP-LobbyPawn_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP-LobbyPawn_AnimGraphNode_TransitionResult_B1938DBB4FA07527E591E291B7304361");

	struct EvaluateGraphExposedInputs_ExecuteUbergraph_ABP-LobbyPawn_AnimGraphNode_TransitionResult_B1938DBB4FA07527E591E291B7304361_Params {
		
	}; EvaluateGraphExposedInputs_ExecuteUbergraph_ABP-LobbyPawn_AnimGraphNode_TransitionResult_B1938DBB4FA07527E591E291B7304361_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ABP-LobbyPawn.ABP-LobbyPawn_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP-LobbyPawn_AnimGraphNode_TransitionResult_5F4429C24615D1D556AB4C92EB9C64DC
inline void UABP-LobbyPawn_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP-LobbyPawn_AnimGraphNode_TransitionResult_5F4429C24615D1D556AB4C92EB9C64DC() {
	static auto fn = UObject::FindObject<UFunction>("Function ABP-LobbyPawn.ABP-LobbyPawn_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP-LobbyPawn_AnimGraphNode_TransitionResult_5F4429C24615D1D556AB4C92EB9C64DC");

	struct EvaluateGraphExposedInputs_ExecuteUbergraph_ABP-LobbyPawn_AnimGraphNode_TransitionResult_5F4429C24615D1D556AB4C92EB9C64DC_Params {
		
	}; EvaluateGraphExposedInputs_ExecuteUbergraph_ABP-LobbyPawn_AnimGraphNode_TransitionResult_5F4429C24615D1D556AB4C92EB9C64DC_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ABP-LobbyPawn.ABP-LobbyPawn_C.ExecuteUbergraph_ABP-LobbyPawn
inline void UABP-LobbyPawn_C::ExecuteUbergraph_ABP-LobbyPawn(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function ABP-LobbyPawn.ABP-LobbyPawn_C.ExecuteUbergraph_ABP-LobbyPawn");

	struct ExecuteUbergraph_ABP-LobbyPawn_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_ABP-LobbyPawn_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

