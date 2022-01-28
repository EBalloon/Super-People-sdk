// AnimBlueprintGeneratedClass ABP-MK14.ABP-MK14_C
class UABP-MK14_C : public UBravoHotelAnimInstanceWeapon {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x330 (8)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x338 (48)
	struct FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum; // 0x368 (176)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0x418 (120)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x490 (120)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x508 (120)
	struct FAnimNode_Slot AnimGraphNode_Slot_4; // 0x580 (72)
	struct FAnimNode_Slot AnimGraphNode_Slot_3; // 0x5C8 (72)
	struct FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend; // 0x610 (200)
	struct FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend; // 0x6D8 (192)
	struct FAnimNode_RefPose AnimGraphNode_LocalRefPose_3; // 0x798 (24)
	struct FAnimNode_RefPose AnimGraphNode_LocalRefPose_2; // 0x7B0 (24)
	struct FAnimNode_Slot AnimGraphNode_Slot_2; // 0x7C8 (72)
	struct FAnimNode_Slot AnimGraphNode_Slot; // 0x810 (72)
	struct FAnimNode_RefPose AnimGraphNode_LocalRefPose; // 0x858 (24)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x870 (160)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function ABP-MK14.ABP-MK14_C.AnimGraph(HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void ExecuteUbergraph_ABP-MK14(int32_t EntryPoint); // Function ABP-MK14.ABP-MK14_C.ExecuteUbergraph_ABP-MK14(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
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

