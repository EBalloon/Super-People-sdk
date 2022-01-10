// AnimBlueprintGeneratedClass ABP-SupplyHelicopter.ABP-SupplyHelicopter_C
class UABP-SupplyHelicopter_C : public UAnimInstance {

public:

	struct Unknown UberGraphFrame; // 0x270 (8)
	struct Unknown AnimGraphNode_Root; // 0x278 (48)
	struct Unknown AnimGraphNode_SequencePlayer; // 0x2A8 (120)

	void AnimGraph(struct Unknown& AnimGraph); // Function ABP-SupplyHelicopter.ABP-SupplyHelicopter_C.AnimGraph(HasOutParms|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void ExecuteUbergraph_ABP-SupplyHelicopter(int32_t EntryPoint); // Function ABP-SupplyHelicopter.ABP-SupplyHelicopter_C.ExecuteUbergraph_ABP-SupplyHelicopter(Final|UbergraphFunction) // <Game_BE.exe+0x2B812B0>
};

// Function ABP-SupplyHelicopter.ABP-SupplyHelicopter_C.AnimGraph
inline void UABP-SupplyHelicopter_C::AnimGraph(struct Unknown& AnimGraph) {
	static auto fn = UObject::FindObject<UFunction>("Function ABP-SupplyHelicopter.ABP-SupplyHelicopter_C.AnimGraph");

	struct AnimGraph_Params {
		struct Unknown& AnimGraph;
	}; AnimGraph_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	AnimGraph = Params.AnimGraph;

}

// Function ABP-SupplyHelicopter.ABP-SupplyHelicopter_C.ExecuteUbergraph_ABP-SupplyHelicopter
inline void UABP-SupplyHelicopter_C::ExecuteUbergraph_ABP-SupplyHelicopter(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function ABP-SupplyHelicopter.ABP-SupplyHelicopter_C.ExecuteUbergraph_ABP-SupplyHelicopter");

	struct ExecuteUbergraph_ABP-SupplyHelicopter_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_ABP-SupplyHelicopter_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

