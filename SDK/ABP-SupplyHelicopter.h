// AnimBlueprintGeneratedClass ABP-SupplyHelicopter.ABP-SupplyHelicopter_C
class UABP-SupplyHelicopter_C : public UAnimInstance {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x270 (8)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x278 (48)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x2A8 (120)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function ABP-SupplyHelicopter.ABP-SupplyHelicopter_C.AnimGraph(HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void ExecuteUbergraph_ABP-SupplyHelicopter(int32_t EntryPoint); // Function ABP-SupplyHelicopter.ABP-SupplyHelicopter_C.ExecuteUbergraph_ABP-SupplyHelicopter(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
};

// Function ABP-SupplyHelicopter.ABP-SupplyHelicopter_C.AnimGraph
inline void UABP-SupplyHelicopter_C::AnimGraph(struct FPoseLink& AnimGraph) {
	static auto fn = UObject::FindObject<UFunction>("Function ABP-SupplyHelicopter.ABP-SupplyHelicopter_C.AnimGraph");

	struct AnimGraph_Params {
		struct FPoseLink& AnimGraph;
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

