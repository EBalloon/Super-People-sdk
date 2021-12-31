// AnimBlueprintGeneratedClass ABP-M416.ABP-M416_C
class UABP-M416_C : public UBravoHotelAnimInstanceWeapon {

public:

	struct Unknown UberGraphFrame; // 0x340 (8)
	struct Unknown AnimGraphNode_Root; // 0x348 (48)
	struct Unknown AnimGraphNode_BlendListByEnum; // 0x378 (176)
	struct Unknown AnimGraphNode_SequencePlayer_3; // 0x428 (120)
	struct Unknown AnimGraphNode_SequencePlayer_2; // 0x4A0 (120)
	struct Unknown AnimGraphNode_SequencePlayer; // 0x518 (120)
	struct Unknown AnimGraphNode_Slot_4; // 0x590 (72)
	struct Unknown AnimGraphNode_TwoWayBlend; // 0x5D8 (200)
	struct Unknown AnimGraphNode_LayeredBoneBlend; // 0x6A0 (192)
	struct Unknown AnimGraphNode_LocalRefPose_3; // 0x760 (24)
	struct Unknown AnimGraphNode_LocalRefPose_2; // 0x778 (24)
	struct Unknown AnimGraphNode_Slot_3; // 0x790 (72)
	struct Unknown AnimGraphNode_Slot_2; // 0x7D8 (72)
	struct Unknown AnimGraphNode_Slot; // 0x820 (72)
	struct Unknown AnimGraphNode_LocalRefPose; // 0x868 (24)
	struct Unknown AnimGraphNode_BlendListByBool; // 0x880 (160)

	void AnimGraph(struct Unknown& AnimGraph); // Function ABP-M416.ABP-M416_C.AnimGraph(HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void ExecuteUbergraph_ABP-M416(int32_t EntryPoint); // Function ABP-M416.ABP-M416_C.ExecuteUbergraph_ABP-M416(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
};

// Function ABP-M416.ABP-M416_C.AnimGraph
inline void UABP-M416_C::AnimGraph(struct Unknown& AnimGraph) {
	static auto fn = UObject::FindObject<UFunction>("Function ABP-M416.ABP-M416_C.AnimGraph");

	struct AnimGraph_Params {
		struct Unknown& AnimGraph;
	}; AnimGraph_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	AnimGraph = Params.AnimGraph;

}

// Function ABP-M416.ABP-M416_C.ExecuteUbergraph_ABP-M416
inline void UABP-M416_C::ExecuteUbergraph_ABP-M416(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function ABP-M416.ABP-M416_C.ExecuteUbergraph_ABP-M416");

	struct ExecuteUbergraph_ABP-M416_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_ABP-M416_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

