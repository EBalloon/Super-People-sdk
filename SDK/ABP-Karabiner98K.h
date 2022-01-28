// AnimBlueprintGeneratedClass ABP-Karabiner98K.ABP-Karabiner98K_C
class UABP-Karabiner98K_C : public UBravoHotelAnimInstanceWeapon {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x330 (8)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x338 (48)
	struct FAnimNode_Slot AnimGraphNode_Slot_3; // 0x368 (72)
	struct FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend; // 0x3B0 (200)
	struct FAnimNode_RefPose AnimGraphNode_LocalRefPose_3; // 0x478 (24)
	struct FAnimNode_Slot AnimGraphNode_Slot_2; // 0x490 (72)
	struct FAnimNode_RefPose AnimGraphNode_LocalRefPose_2; // 0x4D8 (24)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x4F0 (160)
	struct FAnimNode_Slot AnimGraphNode_Slot; // 0x590 (72)
	struct FAnimNode_RefPose AnimGraphNode_LocalRefPose; // 0x5D8 (24)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function ABP-Karabiner98K.ABP-Karabiner98K_C.AnimGraph(HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void ExecuteUbergraph_ABP-Karabiner98K(int32_t EntryPoint); // Function ABP-Karabiner98K.ABP-Karabiner98K_C.ExecuteUbergraph_ABP-Karabiner98K(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
};

// Function ABP-Karabiner98K.ABP-Karabiner98K_C.AnimGraph
inline void UABP-Karabiner98K_C::AnimGraph(struct FPoseLink& AnimGraph) {
	static auto fn = UObject::FindObject<UFunction>("Function ABP-Karabiner98K.ABP-Karabiner98K_C.AnimGraph");

	struct AnimGraph_Params {
		struct FPoseLink& AnimGraph;
	}; AnimGraph_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	AnimGraph = Params.AnimGraph;

}

// Function ABP-Karabiner98K.ABP-Karabiner98K_C.ExecuteUbergraph_ABP-Karabiner98K
inline void UABP-Karabiner98K_C::ExecuteUbergraph_ABP-Karabiner98K(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function ABP-Karabiner98K.ABP-Karabiner98K_C.ExecuteUbergraph_ABP-Karabiner98K");

	struct ExecuteUbergraph_ABP-Karabiner98K_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_ABP-Karabiner98K_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

