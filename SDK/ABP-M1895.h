// AnimBlueprintGeneratedClass ABP-M1895.ABP-M1895_C
class UABP-M1895_C : public UBravoHotelAnimInstanceWeapon {

public:

	struct Unknown UberGraphFrame; // 0x340 (8)
	struct Unknown AnimGraphNode_Root; // 0x348 (48)
	struct Unknown AnimGraphNode_Slot_3; // 0x378 (72)
	struct Unknown AnimGraphNode_TwoWayBlend; // 0x3C0 (200)
	struct Unknown AnimGraphNode_LocalRefPose_3; // 0x488 (24)
	struct Unknown AnimGraphNode_Slot_2; // 0x4A0 (72)
	struct Unknown AnimGraphNode_LocalRefPose_2; // 0x4E8 (24)
	struct Unknown AnimGraphNode_BlendListByBool; // 0x500 (160)
	struct Unknown AnimGraphNode_Slot; // 0x5A0 (72)
	struct Unknown AnimGraphNode_LocalRefPose; // 0x5E8 (24)

	void AnimGraph(struct Unknown& AnimGraph); // Function ABP-M1895.ABP-M1895_C.AnimGraph(HasOutParms|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void ExecuteUbergraph_ABP-M1895(int32_t EntryPoint); // Function ABP-M1895.ABP-M1895_C.ExecuteUbergraph_ABP-M1895(Final|UbergraphFunction) // <Game_BE.exe+0x2B812B0>
};

// Function ABP-M1895.ABP-M1895_C.AnimGraph
inline void UABP-M1895_C::AnimGraph(struct Unknown& AnimGraph) {
	static auto fn = UObject::FindObject<UFunction>("Function ABP-M1895.ABP-M1895_C.AnimGraph");

	struct AnimGraph_Params {
		struct Unknown& AnimGraph;
	}; AnimGraph_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	AnimGraph = Params.AnimGraph;

}

// Function ABP-M1895.ABP-M1895_C.ExecuteUbergraph_ABP-M1895
inline void UABP-M1895_C::ExecuteUbergraph_ABP-M1895(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function ABP-M1895.ABP-M1895_C.ExecuteUbergraph_ABP-M1895");

	struct ExecuteUbergraph_ABP-M1895_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_ABP-M1895_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

