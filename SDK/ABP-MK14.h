// AnimBlueprintGeneratedClass ABP-MK14.ABP-MK14_C
class UABP-MK14_C : public UBravoHotelAnimInstanceWeapon {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x340 (8)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x348 (48)
	struct FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum; // 0x378 (176)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0x428 (120)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x4A0 (120)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x518 (120)
	struct FAnimNode_Slot AnimGraphNode_Slot_4; // 0x590 (72)
	struct FAnimNode_Slot AnimGraphNode_Slot_3; // 0x5D8 (72)
	struct FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend; // 0x620 (200)
	struct FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend; // 0x6E8 (192)
	struct FAnimNode_RefPose AnimGraphNode_LocalRefPose_3; // 0x7A8 (24)
	struct FAnimNode_RefPose AnimGraphNode_LocalRefPose_2; // 0x7C0 (24)
	struct FAnimNode_Slot AnimGraphNode_Slot_2; // 0x7D8 (72)
	struct FAnimNode_Slot AnimGraphNode_Slot; // 0x820 (72)
	struct FAnimNode_RefPose AnimGraphNode_LocalRefPose; // 0x868 (24)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x880 (160)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function ABP-MK14.ABP-MK14_C.AnimGraph(HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void ExecuteUbergraph_ABP-MK14(int32_t EntryPoint); // Function ABP-MK14.ABP-MK14_C.ExecuteUbergraph_ABP-MK14(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
};

// Function ABP-MK14.ABP-MK14_C.AnimGraph
inline void UABP-MK14_C::AnimGraph(struct FPoseLink& AnimGraph) {
	static auto fn = UObject::FindObject<UFunction>("Function ABP-MK14.ABP-MK14_C.AnimGraph");

	struct AnimGraph_Params {
		struct FPoseLink& AnimGraph;
	}; AnimGraph_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	AnimGraph = Params.AnimGraph;

}

// Function ABP-MK14.ABP-MK14_C.ExecuteUbergraph_ABP-MK14
inline void UABP-MK14_C::ExecuteUbergraph_ABP-MK14(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function ABP-MK14.ABP-MK14_C.ExecuteUbergraph_ABP-MK14");

	struct ExecuteUbergraph_ABP-MK14_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_ABP-MK14_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

