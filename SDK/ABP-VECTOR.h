// AnimBlueprintGeneratedClass ABP-VECTOR.ABP-VECTOR_C
class UABP-VECTOR_C : public UBravoHotelAnimInstanceWeapon {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x340 (8)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x348 (48)
	struct FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum; // 0x378 (176)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4; // 0x428 (120)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0x4A0 (120)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x518 (120)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x590 (120)
	struct FAnimNode_Slot AnimGraphNode_Slot_4; // 0x608 (72)
	struct FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend; // 0x650 (200)
	struct FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend; // 0x718 (192)
	struct FAnimNode_RefPose AnimGraphNode_LocalRefPose_3; // 0x7D8 (24)
	struct FAnimNode_Slot AnimGraphNode_Slot_3; // 0x7F0 (72)
	struct FAnimNode_RefPose AnimGraphNode_LocalRefPose_2; // 0x838 (24)
	struct FAnimNode_Slot AnimGraphNode_Slot_2; // 0x850 (72)
	struct FAnimNode_Slot AnimGraphNode_Slot; // 0x898 (72)
	struct FAnimNode_RefPose AnimGraphNode_LocalRefPose; // 0x8E0 (24)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x8F8 (160)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function ABP-VECTOR.ABP-VECTOR_C.AnimGraph(HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void ExecuteUbergraph_ABP-VECTOR(int32_t EntryPoint); // Function ABP-VECTOR.ABP-VECTOR_C.ExecuteUbergraph_ABP-VECTOR(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
};

// Function ABP-VECTOR.ABP-VECTOR_C.AnimGraph
inline void UABP-VECTOR_C::AnimGraph(struct FPoseLink& AnimGraph) {
	static auto fn = UObject::FindObject<UFunction>("Function ABP-VECTOR.ABP-VECTOR_C.AnimGraph");

	struct AnimGraph_Params {
		struct FPoseLink& AnimGraph;
	}; AnimGraph_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	AnimGraph = Params.AnimGraph;

}

// Function ABP-VECTOR.ABP-VECTOR_C.ExecuteUbergraph_ABP-VECTOR
inline void UABP-VECTOR_C::ExecuteUbergraph_ABP-VECTOR(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function ABP-VECTOR.ABP-VECTOR_C.ExecuteUbergraph_ABP-VECTOR");

	struct ExecuteUbergraph_ABP-VECTOR_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_ABP-VECTOR_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

