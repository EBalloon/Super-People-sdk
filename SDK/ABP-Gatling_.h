// AnimBlueprintGeneratedClass ABP-Gatling_.ABP-Gatling__C
class UABP-Gatling__C : public UBravoHotelAnimInstanceWeapon {

public:

	struct Unknown UberGraphFrame; // 0x340 (8)
	struct Unknown AnimGraphNode_Root; // 0x348 (48)
	struct Unknown AnimGraphNode_Slot_3; // 0x378 (72)
	struct Unknown AnimGraphNode_TwoWayBlend; // 0x3C0 (200)
	struct Unknown AnimGraphNode_LocalRefPose_3; // 0x488 (24)
	struct Unknown AnimGraphNode_Slot_2; // 0x4A0 (72)
	struct Unknown AnimGraphNode_LocalRefPose_2; // 0x4E8 (24)
	struct Unknown AnimGraphNode_LocalRefPose; // 0x500 (24)
	struct Unknown AnimGraphNode_Slot; // 0x518 (72)
	struct Unknown AnimGraphNode_BlendListByBool; // 0x560 (160)

	void AnimGraph(struct Unknown& AnimGraph); // Function ABP-Gatling_.ABP-Gatling__C.AnimGraph(HasOutParms|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void ExecuteUbergraph_ABP-Gatling_(int32_t EntryPoint); // Function ABP-Gatling_.ABP-Gatling__C.ExecuteUbergraph_ABP-Gatling_(Final|UbergraphFunction) // <Game_BE.exe+0x2B80160>
};

// Function ABP-Gatling_.ABP-Gatling__C.AnimGraph
inline void UABP-Gatling__C::AnimGraph(struct Unknown& AnimGraph) {
	static auto fn = UObject::FindObject<UFunction>("Function ABP-Gatling_.ABP-Gatling__C.AnimGraph");

	struct AnimGraph_Params {
		struct Unknown& AnimGraph;
	}; AnimGraph_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	AnimGraph = Params.AnimGraph;

}

// Function ABP-Gatling_.ABP-Gatling__C.ExecuteUbergraph_ABP-Gatling_
inline void UABP-Gatling__C::ExecuteUbergraph_ABP-Gatling_(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function ABP-Gatling_.ABP-Gatling__C.ExecuteUbergraph_ABP-Gatling_");

	struct ExecuteUbergraph_ABP-Gatling__Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_ABP-Gatling__Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

