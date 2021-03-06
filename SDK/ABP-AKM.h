// AnimBlueprintGeneratedClass ABP-AKM.ABP-AKM_C
class UABP-AKM_C : public UBravoHotelAnimInstanceWeapon {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x330 (8)
	struct FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum; // 0x338 (176)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0x3E8 (120)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x460 (120)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x4D8 (120)
	struct FAnimNode_Slot AnimGraphNode_Slot_4; // 0x550 (72)
	struct FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend; // 0x598 (200)
	struct FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend; // 0x660 (192)
	struct FAnimNode_RefPose AnimGraphNode_LocalRefPose_3; // 0x720 (24)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x738 (48)
	struct FAnimNode_Slot AnimGraphNode_Slot_3; // 0x768 (72)
	struct FAnimNode_Slot AnimGraphNode_Slot_2; // 0x7B0 (72)
	struct FAnimNode_RefPose AnimGraphNode_LocalRefPose_2; // 0x7F8 (24)
	struct FAnimNode_RefPose AnimGraphNode_LocalRefPose; // 0x810 (24)
	struct FAnimNode_Slot AnimGraphNode_Slot; // 0x828 (72)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x870 (160)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function ABP-AKM.ABP-AKM_C.AnimGraph(HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void ExecuteUbergraph_ABP-AKM(int32_t EntryPoint); // Function ABP-AKM.ABP-AKM_C.ExecuteUbergraph_ABP-AKM(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
};

// Function ABP-AKM.ABP-AKM_C.AnimGraph
inline void UABP-AKM_C::AnimGraph(struct FPoseLink& AnimGraph) {
	static auto fn = UObject::FindObject<UFunction>("Function ABP-AKM.ABP-AKM_C.AnimGraph");

	struct AnimGraph_Params {
		struct FPoseLink& AnimGraph;
	}; AnimGraph_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	AnimGraph = Params.AnimGraph;

}

// Function ABP-AKM.ABP-AKM_C.ExecuteUbergraph_ABP-AKM
inline void UABP-AKM_C::ExecuteUbergraph_ABP-AKM(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function ABP-AKM.ABP-AKM_C.ExecuteUbergraph_ABP-AKM");

	struct ExecuteUbergraph_ABP-AKM_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_ABP-AKM_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

