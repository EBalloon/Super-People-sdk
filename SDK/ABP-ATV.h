// AnimBlueprintGeneratedClass ABP-ATV.ABP-ATV_C
class UABP-ATV_C : public UBravoHotelVehicleAnimInstance {

public:

	struct Unknown UberGraphFrame; // 0xA20 (8)
	struct Unknown AnimGraphNode_ModifyBone; // 0xA28 (264)
	struct Unknown AnimGraphNode_BlendListByBool; // 0xB30 (160)
	struct Unknown AnimGraphNode_MeshRefPose_2; // 0xBD0 (16)
	struct Unknown AnimGraphNode_ComponentToLocalSpace_2; // 0xBE0 (32)
	struct Unknown AnimGraphNode_CopyBone_12; // 0xC00 (240)
	struct Unknown AnimGraphNode_ComponentToLocalSpace; // 0xCF0 (32)
	struct Unknown AnimGraphNode_CopyBone_11; // 0xD10 (240)
	struct Unknown AnimGraphNode_WheelHandler; // 0xE00 (224)
	struct Unknown AnimGraphNode_CopyBone_10; // 0xEE0 (240)
	struct Unknown AnimGraphNode_MeshRefPose; // 0xFD0 (16)
	struct Unknown AnimGraphNode_CopyBone_9; // 0xFE0 (240)
	struct Unknown AnimGraphNode_Root; // 0x10D0 (48)
	struct Unknown AnimGraphNode_CopyBone_8; // 0x1100 (240)
	struct Unknown AnimGraphNode_CopyBone_7; // 0x11F0 (240)
	struct Unknown AnimGraphNode_CopyBone_6; // 0x12E0 (240)
	struct Unknown AnimGraphNode_CopyBone_5; // 0x13D0 (240)
	struct Unknown AnimGraphNode_CopyBone_4; // 0x14C0 (240)
	struct Unknown AnimGraphNode_CopyBone_3; // 0x15B0 (240)
	struct Unknown AnimGraphNode_CopyBone_2; // 0x16A0 (240)
	struct Unknown AnimGraphNode_CopyBone; // 0x1790 (240)

	void AnimGraph(struct Unknown& AnimGraph); // Function ABP-ATV.ABP-ATV_C.AnimGraph(HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function ABP-ATV.ABP-ATV_C.BlueprintUpdateAnimation(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void ExecuteUbergraph_ABP-ATV(int32_t EntryPoint); // Function ABP-ATV.ABP-ATV_C.ExecuteUbergraph_ABP-ATV(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
};

// Function ABP-ATV.ABP-ATV_C.AnimGraph
inline void UABP-ATV_C::AnimGraph(struct Unknown& AnimGraph) {
	static auto fn = UObject::FindObject<UFunction>("Function ABP-ATV.ABP-ATV_C.AnimGraph");

	struct AnimGraph_Params {
		struct Unknown& AnimGraph;
	}; AnimGraph_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	AnimGraph = Params.AnimGraph;

}

// Function ABP-ATV.ABP-ATV_C.BlueprintUpdateAnimation
inline void UABP-ATV_C::BlueprintUpdateAnimation(float DeltaTimeX) {
	static auto fn = UObject::FindObject<UFunction>("Function ABP-ATV.ABP-ATV_C.BlueprintUpdateAnimation");

	struct BlueprintUpdateAnimation_Params {
		float DeltaTimeX;
	}; BlueprintUpdateAnimation_Params Params;

	Params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ABP-ATV.ABP-ATV_C.ExecuteUbergraph_ABP-ATV
inline void UABP-ATV_C::ExecuteUbergraph_ABP-ATV(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function ABP-ATV.ABP-ATV_C.ExecuteUbergraph_ABP-ATV");

	struct ExecuteUbergraph_ABP-ATV_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_ABP-ATV_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

