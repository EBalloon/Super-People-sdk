// AnimBlueprintGeneratedClass ABP-Riverine.ABP-Riverine_C
class UABP-Riverine_C : public UBravoHotelVehicleAnimInstance {

public:

	struct Unknown UberGraphFrame; // 0xA30 (8)
	struct Unknown AnimGraphNode_Root; // 0xA38 (48)
	struct Unknown AnimGraphNode_MeshRefPose_2; // 0xA68 (16)
	struct Unknown AnimGraphNode_ComponentToLocalSpace_2; // 0xA78 (32)
	struct Unknown AnimGraphNode_ModifyBone; // 0xA98 (264)
	struct Unknown AnimGraphNode_BlendListByBool; // 0xBA0 (160)
	struct Unknown AnimGraphNode_MeshRefPose; // 0xC40 (16)
	struct Unknown AnimGraphNode_ComponentToLocalSpace; // 0xC50 (32)

	void AnimGraph(struct Unknown& AnimGraph); // Function ABP-Riverine.ABP-Riverine_C.AnimGraph(HasOutParms|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function ABP-Riverine.ABP-Riverine_C.BlueprintUpdateAnimation(Event|Public|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void ExecuteUbergraph_ABP-Riverine(int32_t EntryPoint); // Function ABP-Riverine.ABP-Riverine_C.ExecuteUbergraph_ABP-Riverine(Final|UbergraphFunction) // <Game_BE.exe+0x2B812B0>
};

// Function ABP-Riverine.ABP-Riverine_C.AnimGraph
inline void UABP-Riverine_C::AnimGraph(struct Unknown& AnimGraph) {
	static auto fn = UObject::FindObject<UFunction>("Function ABP-Riverine.ABP-Riverine_C.AnimGraph");

	struct AnimGraph_Params {
		struct Unknown& AnimGraph;
	}; AnimGraph_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	AnimGraph = Params.AnimGraph;

}

// Function ABP-Riverine.ABP-Riverine_C.BlueprintUpdateAnimation
inline void UABP-Riverine_C::BlueprintUpdateAnimation(float DeltaTimeX) {
	static auto fn = UObject::FindObject<UFunction>("Function ABP-Riverine.ABP-Riverine_C.BlueprintUpdateAnimation");

	struct BlueprintUpdateAnimation_Params {
		float DeltaTimeX;
	}; BlueprintUpdateAnimation_Params Params;

	Params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ABP-Riverine.ABP-Riverine_C.ExecuteUbergraph_ABP-Riverine
inline void UABP-Riverine_C::ExecuteUbergraph_ABP-Riverine(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function ABP-Riverine.ABP-Riverine_C.ExecuteUbergraph_ABP-Riverine");

	struct ExecuteUbergraph_ABP-Riverine_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_ABP-Riverine_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

