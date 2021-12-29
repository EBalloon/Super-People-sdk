// AnimBlueprintGeneratedClass ABP-Quadski.ABP-Quadski_C
class UABP-Quadski_C : public UBravoHotelVehicleAnimInstance {

public:

	struct Unknown UberGraphFrame; // 0xA20 (8)
	struct Unknown AnimGraphNode_Root; // 0xA28 (48)
	struct Unknown AnimGraphNode_TransitionResult_9; // 0xA58 (40)
	struct Unknown AnimGraphNode_TransitionResult_8; // 0xA80 (40)
	struct Unknown AnimGraphNode_TransitionResult_7; // 0xAA8 (40)
	struct Unknown AnimGraphNode_TransitionResult_6; // 0xAD0 (40)
	struct Unknown AnimGraphNode_TransitionResult_5; // 0xAF8 (40)
	struct Unknown AnimGraphNode_TransitionResult_4; // 0xB20 (40)
	struct Unknown AnimGraphNode_TransitionResult_3; // 0xB48 (40)
	struct Unknown AnimGraphNode_TransitionResult_2; // 0xB70 (40)
	struct Unknown AnimGraphNode_SequencePlayer_6; // 0xB98 (120)
	struct Unknown AnimGraphNode_StateResult_5; // 0xC10 (48)
	struct Unknown AnimGraphNode_SequencePlayer_5; // 0xC40 (120)
	struct Unknown AnimGraphNode_StateResult_4; // 0xCB8 (48)
	struct Unknown AnimGraphNode_SequencePlayer_4; // 0xCE8 (120)
	struct Unknown AnimGraphNode_StateResult_3; // 0xD60 (48)
	struct Unknown AnimGraphNode_TransitionResult; // 0xD90 (40)
	struct Unknown AnimGraphNode_ComponentToLocalSpace_4; // 0xDB8 (32)
	struct Unknown AnimGraphNode_MeshRefPose_2; // 0xDD8 (16)
	struct Unknown AnimGraphNode_BlendListByBool_2; // 0xDE8 (160)
	struct Unknown AnimGraphNode_SequencePlayer_3; // 0xE88 (120)
	struct Unknown AnimGraphNode_LayeredBoneBlend; // 0xF00 (192)
	struct Unknown AnimGraphNode_ComponentToLocalSpace_3; // 0xFC0 (32)
	struct Unknown AnimGraphNode_LocalToComponentSpace_2; // 0xFE0 (32)
	struct Unknown AnimGraphNode_ModifyBone_2; // 0x1000 (264)
	struct Unknown AnimGraphNode_WheelHandler_2; // 0x1108 (224)
	struct Unknown AnimGraphNode_SequencePlayer_2; // 0x11E8 (120)
	struct Unknown AnimGraphNode_StateResult_2; // 0x1260 (48)
	struct Unknown AnimGraphNode_CopyBone_12; // 0x1290 (240)
	struct Unknown AnimGraphNode_CopyBone_11; // 0x1380 (240)
	struct Unknown AnimGraphNode_CopyBone_10; // 0x1470 (240)
	struct Unknown AnimGraphNode_CopyBone_9; // 0x1560 (240)
	struct Unknown AnimGraphNode_CopyBone_8; // 0x1650 (240)
	struct Unknown AnimGraphNode_CopyBone_7; // 0x1740 (240)
	struct Unknown AnimGraphNode_CopyBone_6; // 0x1830 (240)
	struct Unknown AnimGraphNode_CopyBone_5; // 0x1920 (240)
	struct Unknown AnimGraphNode_CopyBone_4; // 0x1A10 (240)
	struct Unknown AnimGraphNode_CopyBone_3; // 0x1B00 (240)
	struct Unknown AnimGraphNode_CopyBone_2; // 0x1BF0 (240)
	struct Unknown AnimGraphNode_CopyBone; // 0x1CE0 (240)
	struct Unknown AnimGraphNode_ComponentToLocalSpace_2; // 0x1DD0 (32)
	struct Unknown AnimGraphNode_MeshRefPose; // 0x1DF0 (16)
	struct Unknown AnimGraphNode_BlendListByBool; // 0x1E00 (160)
	struct Unknown AnimGraphNode_AnimDynamics; // 0x1EA0 (1088)
	struct Unknown AnimGraphNode_LocalToComponentSpace; // 0x22E0 (32)
	struct Unknown AnimGraphNode_ModifyBone; // 0x2300 (264)
	struct Unknown AnimGraphNode_ComponentToLocalSpace; // 0x2408 (32)
	struct Unknown AnimGraphNode_WheelHandler; // 0x2428 (224)
	struct Unknown AnimGraphNode_SequencePlayer; // 0x2508 (120)
	struct Unknown AnimGraphNode_StateResult; // 0x2580 (48)
	struct Unknown AnimGraphNode_StateMachine; // 0x25B0 (176)
	char bIsAmphibiousMode : 0; // 0x2660 (1)

	void AnimGraph(struct Unknown& AnimGraph); // Function ABP-Quadski.ABP-Quadski_C.AnimGraph(HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP-Quadski_AnimGraphNode_TransitionResult_C584BAB4475226CF5A96DA84563281E0(); // Function ABP-Quadski.ABP-Quadski_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP-Quadski_AnimGraphNode_TransitionResult_C584BAB4475226CF5A96DA84563281E0(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP-Quadski_AnimGraphNode_TransitionResult_5B320C8249FFAA1FF5372BA69A6E9633(); // Function ABP-Quadski.ABP-Quadski_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP-Quadski_AnimGraphNode_TransitionResult_5B320C8249FFAA1FF5372BA69A6E9633(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function ABP-Quadski.ABP-Quadski_C.BlueprintUpdateAnimation(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void ExecuteUbergraph_ABP-Quadski(int32_t EntryPoint); // Function ABP-Quadski.ABP-Quadski_C.ExecuteUbergraph_ABP-Quadski(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
};

// Function ABP-Quadski.ABP-Quadski_C.AnimGraph
inline void UABP-Quadski_C::AnimGraph(struct Unknown& AnimGraph) {
	static auto fn = UObject::FindObject<UFunction>("Function ABP-Quadski.ABP-Quadski_C.AnimGraph");

	struct AnimGraph_Params {
		struct Unknown& AnimGraph;
	}; AnimGraph_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	AnimGraph = Params.AnimGraph;

}

// Function ABP-Quadski.ABP-Quadski_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP-Quadski_AnimGraphNode_TransitionResult_C584BAB4475226CF5A96DA84563281E0
inline void UABP-Quadski_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP-Quadski_AnimGraphNode_TransitionResult_C584BAB4475226CF5A96DA84563281E0() {
	static auto fn = UObject::FindObject<UFunction>("Function ABP-Quadski.ABP-Quadski_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP-Quadski_AnimGraphNode_TransitionResult_C584BAB4475226CF5A96DA84563281E0");

	struct EvaluateGraphExposedInputs_ExecuteUbergraph_ABP-Quadski_AnimGraphNode_TransitionResult_C584BAB4475226CF5A96DA84563281E0_Params {
		
	}; EvaluateGraphExposedInputs_ExecuteUbergraph_ABP-Quadski_AnimGraphNode_TransitionResult_C584BAB4475226CF5A96DA84563281E0_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ABP-Quadski.ABP-Quadski_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP-Quadski_AnimGraphNode_TransitionResult_5B320C8249FFAA1FF5372BA69A6E9633
inline void UABP-Quadski_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP-Quadski_AnimGraphNode_TransitionResult_5B320C8249FFAA1FF5372BA69A6E9633() {
	static auto fn = UObject::FindObject<UFunction>("Function ABP-Quadski.ABP-Quadski_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP-Quadski_AnimGraphNode_TransitionResult_5B320C8249FFAA1FF5372BA69A6E9633");

	struct EvaluateGraphExposedInputs_ExecuteUbergraph_ABP-Quadski_AnimGraphNode_TransitionResult_5B320C8249FFAA1FF5372BA69A6E9633_Params {
		
	}; EvaluateGraphExposedInputs_ExecuteUbergraph_ABP-Quadski_AnimGraphNode_TransitionResult_5B320C8249FFAA1FF5372BA69A6E9633_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ABP-Quadski.ABP-Quadski_C.BlueprintUpdateAnimation
inline void UABP-Quadski_C::BlueprintUpdateAnimation(float DeltaTimeX) {
	static auto fn = UObject::FindObject<UFunction>("Function ABP-Quadski.ABP-Quadski_C.BlueprintUpdateAnimation");

	struct BlueprintUpdateAnimation_Params {
		float DeltaTimeX;
	}; BlueprintUpdateAnimation_Params Params;

	Params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ABP-Quadski.ABP-Quadski_C.ExecuteUbergraph_ABP-Quadski
inline void UABP-Quadski_C::ExecuteUbergraph_ABP-Quadski(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function ABP-Quadski.ABP-Quadski_C.ExecuteUbergraph_ABP-Quadski");

	struct ExecuteUbergraph_ABP-Quadski_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_ABP-Quadski_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

