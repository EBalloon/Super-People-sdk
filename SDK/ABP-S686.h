// AnimBlueprintGeneratedClass ABP-S686.ABP-S686_C
class UABP-S686_C : public UBravoHotelAnimInstanceWeapon {

public:

	struct Unknown UberGraphFrame; // 0x340 (8)
	struct Unknown AnimGraphNode_Root; // 0x348 (48)
	struct Unknown AnimGraphNode_Slot_3; // 0x378 (72)
	struct Unknown AnimGraphNode_TwoWayBlend; // 0x3C0 (200)
	struct Unknown AnimGraphNode_LocalRefPose_3; // 0x488 (24)
	struct Unknown AnimGraphNode_LocalRefPose_2; // 0x4A0 (24)
	struct Unknown AnimGraphNode_Slot_2; // 0x4B8 (72)
	struct Unknown AnimGraphNode_Slot; // 0x500 (72)
	struct Unknown AnimGraphNode_LocalRefPose; // 0x548 (24)
	struct Unknown AnimGraphNode_BlendListByBool; // 0x560 (160)

	void AnimGraph(struct Unknown& AnimGraph); // Function ABP-S686.ABP-S686_C.AnimGraph(HasOutParms|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void ExecuteUbergraph_ABP-S686(int32_t EntryPoint); // Function ABP-S686.ABP-S686_C.ExecuteUbergraph_ABP-S686(Final|UbergraphFunction) // <Game_BE.exe+0x2B812B0>
};

// Function ABP-S686.ABP-S686_C.AnimGraph
inline void UABP-S686_C::AnimGraph(struct Unknown& AnimGraph) {
	static auto fn = UObject::FindObject<UFunction>("Function ABP-S686.ABP-S686_C.AnimGraph");

	struct AnimGraph_Params {
		struct Unknown& AnimGraph;
	}; AnimGraph_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	AnimGraph = Params.AnimGraph;

}

// Function ABP-S686.ABP-S686_C.ExecuteUbergraph_ABP-S686
inline void UABP-S686_C::ExecuteUbergraph_ABP-S686(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function ABP-S686.ABP-S686_C.ExecuteUbergraph_ABP-S686");

	struct ExecuteUbergraph_ABP-S686_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_ABP-S686_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

