// AnimBlueprintGeneratedClass ABP-UMP9.ABP-UMP9_C
class UABP-UMP9_C : public UBravoHotelAnimInstanceWeapon {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x340 (8)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x348 (48)
	struct FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum; // 0x378 (176)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0x428 (120)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x4A0 (120)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x518 (120)
	struct FAnimNode_Slot AnimGraphNode_Slot_4; // 0x590 (72)
	struct FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend; // 0x5D8 (200)
	struct FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend; // 0x6A0 (192)
	struct FAnimNode_RefPose AnimGraphNode_LocalRefPose_3; // 0x760 (24)
	struct FAnimNode_Slot AnimGraphNode_Slot_3; // 0x778 (72)
	struct FAnimNode_RefPose AnimGraphNode_LocalRefPose_2; // 0x7C0 (24)
	struct FAnimNode_Slot AnimGraphNode_Slot_2; // 0x7D8 (72)
	struct FAnimNode_Slot AnimGraphNode_Slot; // 0x820 (72)
	struct FAnimNode_RefPose AnimGraphNode_LocalRefPose; // 0x868 (24)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x880 (160)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function ABP-UMP9.ABP-UMP9_C.AnimGraph(HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void ExecuteUbergraph_ABP-UMP9(int32_t EntryPoint); // Function ABP-UMP9.ABP-UMP9_C.ExecuteUbergraph_ABP-UMP9(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
};

// Function ABP-UMP9.ABP-UMP9_C.AnimGraph
inline void UABP-UMP9_C::AnimGraph(struct FPoseLink& AnimGraph) {
	static auto fn = UObject::FindObject<UFunction>("Function ABP-UMP9.ABP-UMP9_C.AnimGraph");

	struct AnimGraph_Params {
		struct FPoseLink& AnimGraph;
	}; AnimGraph_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	AnimGraph = Params.AnimGraph;

}

// Function ABP-UMP9.ABP-UMP9_C.ExecuteUbergraph_ABP-UMP9
inline void UABP-UMP9_C::ExecuteUbergraph_ABP-UMP9(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function ABP-UMP9.ABP-UMP9_C.ExecuteUbergraph_ABP-UMP9");

	struct ExecuteUbergraph_ABP-UMP9_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_ABP-UMP9_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

