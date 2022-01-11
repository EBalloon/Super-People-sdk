// AnimBlueprintGeneratedClass ABP-AKM.ABP-AKM_C
class UABP-AKM_C : public UBravoHotelAnimInstanceWeapon {

public:

	struct Unknown UberGraphFrame; // 0x340 (8)
	struct Unknown AnimGraphNode_BlendListByEnum; // 0x348 (176)
	struct Unknown AnimGraphNode_SequencePlayer_3; // 0x3F8 (120)
	struct Unknown AnimGraphNode_SequencePlayer_2; // 0x470 (120)
	struct Unknown AnimGraphNode_SequencePlayer; // 0x4E8 (120)
	struct Unknown AnimGraphNode_Slot_4; // 0x560 (72)
	struct Unknown AnimGraphNode_TwoWayBlend; // 0x5A8 (200)
	struct Unknown AnimGraphNode_LayeredBoneBlend; // 0x670 (192)
	struct Unknown AnimGraphNode_LocalRefPose_3; // 0x730 (24)
	struct Unknown AnimGraphNode_Root; // 0x748 (48)
	struct Unknown AnimGraphNode_Slot_3; // 0x778 (72)
	struct Unknown AnimGraphNode_Slot_2; // 0x7C0 (72)
	struct Unknown AnimGraphNode_LocalRefPose_2; // 0x808 (24)
	struct Unknown AnimGraphNode_LocalRefPose; // 0x820 (24)
	struct Unknown AnimGraphNode_Slot; // 0x838 (72)
	struct Unknown AnimGraphNode_BlendListByBool; // 0x880 (160)

	void AnimGraph(struct Unknown& AnimGraph); // Function ABP-AKM.ABP-AKM_C.AnimGraph(HasOutParms|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void ExecuteUbergraph_ABP-AKM(int32_t EntryPoint); // Function ABP-AKM.ABP-AKM_C.ExecuteUbergraph_ABP-AKM(Final|UbergraphFunction) // <Game_BE.exe+0x2B80160>
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

