// AnimBlueprintGeneratedClass ABP-AKM.ABP-AKM_C
class UABP-AKM_C : public UBravoHotelAnimInstanceWeapon {

public:

	struct Unknown UberGraphFrame; // 0x330 (8)
	struct Unknown AnimGraphNode_BlendListByEnum; // 0x338 (176)
	struct Unknown AnimGraphNode_SequencePlayer_3; // 0x3E8 (120)
	struct Unknown AnimGraphNode_SequencePlayer_2; // 0x460 (120)
	struct Unknown AnimGraphNode_SequencePlayer; // 0x4D8 (120)
	struct Unknown AnimGraphNode_Slot_4; // 0x550 (72)
	struct Unknown AnimGraphNode_TwoWayBlend; // 0x598 (200)
	struct Unknown AnimGraphNode_LayeredBoneBlend; // 0x660 (192)
	struct Unknown AnimGraphNode_LocalRefPose_3; // 0x720 (24)
	struct Unknown AnimGraphNode_Root; // 0x738 (48)
	struct Unknown AnimGraphNode_Slot_3; // 0x768 (72)
	struct Unknown AnimGraphNode_Slot_2; // 0x7B0 (72)
	struct Unknown AnimGraphNode_LocalRefPose_2; // 0x7F8 (24)
	struct Unknown AnimGraphNode_LocalRefPose; // 0x810 (24)
	struct Unknown AnimGraphNode_Slot; // 0x828 (72)
	struct Unknown AnimGraphNode_BlendListByBool; // 0x870 (160)

	void AnimGraph(struct Unknown& AnimGraph); // Function ABP-AKM.ABP-AKM_C.AnimGraph(HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void ExecuteUbergraph_ABP-AKM(int32_t EntryPoint); // Function ABP-AKM.ABP-AKM_C.ExecuteUbergraph_ABP-AKM(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
};

// Function ABP-AKM.ABP-AKM_C.AnimGraph
inline void UABP-AKM_C::AnimGraph(struct Unknown& AnimGraph) {
	static auto fn = UObject::FindObject<UFunction>("Function ABP-AKM.ABP-AKM_C.AnimGraph");

	struct AnimGraph_Params {
		struct Unknown& AnimGraph;
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

