// AnimBlueprintGeneratedClass ABP-Parachute.ABP-Parachute_C
class UABP-Parachute_C : public UBravoHotelAnimInstanceParachute {

public:

	struct Unknown UberGraphFrame; // 0x2D0 (8)
	struct Unknown AnimGraphNode_Root; // 0x2D8 (48)
	struct Unknown AnimGraphNode_TransitionResult_5; // 0x308 (40)
	struct Unknown AnimGraphNode_TransitionResult_4; // 0x330 (40)
	struct Unknown AnimGraphNode_TransitionResult_3; // 0x358 (40)
	struct Unknown AnimGraphNode_TransitionResult_2; // 0x380 (40)
	struct Unknown AnimGraphNode_TransitionResult; // 0x3A8 (40)
	struct Unknown AnimGraphNode_SequencePlayer_3; // 0x3D0 (120)
	struct Unknown AnimGraphNode_StateResult_4; // 0x448 (48)
	struct Unknown AnimGraphNode_BlendSpacePlayer; // 0x478 (224)
	struct Unknown AnimGraphNode_StateResult_3; // 0x558 (48)
	struct Unknown AnimGraphNode_SequencePlayer_2; // 0x588 (120)
	struct Unknown AnimGraphNode_StateResult_2; // 0x600 (48)
	struct Unknown AnimGraphNode_SequencePlayer; // 0x630 (120)
	struct Unknown AnimGraphNode_StateResult; // 0x6A8 (48)
	struct Unknown AnimGraphNode_StateMachine; // 0x6D8 (176)
	struct Unknown AnimGraphNode_LocalToComponentSpace; // 0x788 (32)
	struct Unknown AnimGraphNode_ComponentToLocalSpace; // 0x7A8 (32)
	struct Unknown AnimGraphNode_ModifyBone_2; // 0x7C8 (264)
	struct Unknown AnimGraphNode_ModifyBone; // 0x8D0 (264)
	struct Unknown RightHandleLocation; // 0x9D8 (12)
	struct Unknown LeftHandleLocation; // 0x9E4 (12)

	void AnimGraph(struct Unknown& AnimGraph); // Function ABP-Parachute.ABP-Parachute_C.AnimGraph(HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP-Parachute_AnimGraphNode_TransitionResult_DFAECCE14753957E23B3978C5E705C11(); // Function ABP-Parachute.ABP-Parachute_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP-Parachute_AnimGraphNode_TransitionResult_DFAECCE14753957E23B3978C5E705C11(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void AnimNotify_ResetSkipTransitionFlag(); // Function ABP-Parachute.ABP-Parachute_C.AnimNotify_ResetSkipTransitionFlag(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void ExecuteUbergraph_ABP-Parachute(int32_t EntryPoint); // Function ABP-Parachute.ABP-Parachute_C.ExecuteUbergraph_ABP-Parachute(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
};

// Function ABP-Parachute.ABP-Parachute_C.AnimGraph
inline void UABP-Parachute_C::AnimGraph(struct Unknown& AnimGraph) {
	static auto fn = UObject::FindObject<UFunction>("Function ABP-Parachute.ABP-Parachute_C.AnimGraph");

	struct AnimGraph_Params {
		struct Unknown& AnimGraph;
	}; AnimGraph_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	AnimGraph = Params.AnimGraph;

}

// Function ABP-Parachute.ABP-Parachute_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP-Parachute_AnimGraphNode_TransitionResult_DFAECCE14753957E23B3978C5E705C11
inline void UABP-Parachute_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP-Parachute_AnimGraphNode_TransitionResult_DFAECCE14753957E23B3978C5E705C11() {
	static auto fn = UObject::FindObject<UFunction>("Function ABP-Parachute.ABP-Parachute_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP-Parachute_AnimGraphNode_TransitionResult_DFAECCE14753957E23B3978C5E705C11");

	struct EvaluateGraphExposedInputs_ExecuteUbergraph_ABP-Parachute_AnimGraphNode_TransitionResult_DFAECCE14753957E23B3978C5E705C11_Params {
		
	}; EvaluateGraphExposedInputs_ExecuteUbergraph_ABP-Parachute_AnimGraphNode_TransitionResult_DFAECCE14753957E23B3978C5E705C11_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ABP-Parachute.ABP-Parachute_C.AnimNotify_ResetSkipTransitionFlag
inline void UABP-Parachute_C::AnimNotify_ResetSkipTransitionFlag() {
	static auto fn = UObject::FindObject<UFunction>("Function ABP-Parachute.ABP-Parachute_C.AnimNotify_ResetSkipTransitionFlag");

	struct AnimNotify_ResetSkipTransitionFlag_Params {
		
	}; AnimNotify_ResetSkipTransitionFlag_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ABP-Parachute.ABP-Parachute_C.ExecuteUbergraph_ABP-Parachute
inline void UABP-Parachute_C::ExecuteUbergraph_ABP-Parachute(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function ABP-Parachute.ABP-Parachute_C.ExecuteUbergraph_ABP-Parachute");

	struct ExecuteUbergraph_ABP-Parachute_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_ABP-Parachute_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

