// AnimBlueprintGeneratedClass ABP-ACR.ABP-ACR_C
class UABP-ACR_C : public UBravoHotelAnimInstanceWeapon {

public:

	struct Unknown UberGraphFrame; // 0x330 (8)
	struct Unknown AnimGraphNode_Root; // 0x338 (48)
	struct Unknown AnimGraphNode_Slot_4; // 0x368 (72)
	struct Unknown AnimGraphNode_BlendListByEnum; // 0x3B0 (176)
	struct Unknown AnimGraphNode_SequencePlayer_3; // 0x460 (120)
	struct Unknown AnimGraphNode_SequencePlayer_2; // 0x4D8 (120)
	struct Unknown AnimGraphNode_SequencePlayer; // 0x550 (120)
	struct Unknown AnimGraphNode_TwoWayBlend; // 0x5C8 (200)
	struct Unknown AnimGraphNode_LayeredBoneBlend; // 0x690 (192)
	struct Unknown AnimGraphNode_LocalRefPose_3; // 0x750 (24)
	struct Unknown AnimGraphNode_Slot_3; // 0x768 (72)
	struct Unknown AnimGraphNode_Slot_2; // 0x7B0 (72)
	struct Unknown AnimGraphNode_LocalRefPose_2; // 0x7F8 (24)
	struct Unknown AnimGraphNode_BlendListByBool; // 0x810 (160)
	struct Unknown AnimGraphNode_Slot; // 0x8B0 (72)
	struct Unknown AnimGraphNode_LocalRefPose; // 0x8F8 (24)

	void AnimGraph(struct Unknown& AnimGraph); // Function ABP-ACR.ABP-ACR_C.AnimGraph(HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void ExecuteUbergraph_ABP-ACR(int32_t EntryPoint); // Function ABP-ACR.ABP-ACR_C.ExecuteUbergraph_ABP-ACR(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
};

// Function ABP-ACR.ABP-ACR_C.AnimGraph
inline void UABP-ACR_C::AnimGraph(struct Unknown& AnimGraph) {
	static auto fn = UObject::FindObject<UFunction>("Function ABP-ACR.ABP-ACR_C.AnimGraph");

	struct AnimGraph_Params {
		struct Unknown& AnimGraph;
	}; AnimGraph_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	AnimGraph = Params.AnimGraph;

}

// Function ABP-ACR.ABP-ACR_C.ExecuteUbergraph_ABP-ACR
inline void UABP-ACR_C::ExecuteUbergraph_ABP-ACR(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function ABP-ACR.ABP-ACR_C.ExecuteUbergraph_ABP-ACR");

	struct ExecuteUbergraph_ABP-ACR_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_ABP-ACR_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

