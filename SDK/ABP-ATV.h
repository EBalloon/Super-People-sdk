// AnimBlueprintGeneratedClass ABP-ATV.ABP-ATV_C
class UABP-ATV_C : public UBravoHotelVehicleAnimInstance {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0xA40 (8)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0xA48 (264)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0xB50 (160)
	struct FAnimNode_MeshSpaceRefPose AnimGraphNode_MeshRefPose_2; // 0xBF0 (16)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_2; // 0xC00 (32)
	struct FAnimNode_CopyBone AnimGraphNode_CopyBone_12; // 0xC20 (240)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0xD10 (32)
	struct FAnimNode_CopyBone AnimGraphNode_CopyBone_11; // 0xD30 (240)
	struct FAnimNode_WheelHandler AnimGraphNode_WheelHandler; // 0xE20 (224)
	struct FAnimNode_CopyBone AnimGraphNode_CopyBone_10; // 0xF00 (240)
	struct FAnimNode_MeshSpaceRefPose AnimGraphNode_MeshRefPose; // 0xFF0 (16)
	struct FAnimNode_CopyBone AnimGraphNode_CopyBone_9; // 0x1000 (240)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x10F0 (48)
	struct FAnimNode_CopyBone AnimGraphNode_CopyBone_8; // 0x1120 (240)
	struct FAnimNode_CopyBone AnimGraphNode_CopyBone_7; // 0x1210 (240)
	struct FAnimNode_CopyBone AnimGraphNode_CopyBone_6; // 0x1300 (240)
	struct FAnimNode_CopyBone AnimGraphNode_CopyBone_5; // 0x13F0 (240)
	struct FAnimNode_CopyBone AnimGraphNode_CopyBone_4; // 0x14E0 (240)
	struct FAnimNode_CopyBone AnimGraphNode_CopyBone_3; // 0x15D0 (240)
	struct FAnimNode_CopyBone AnimGraphNode_CopyBone_2; // 0x16C0 (240)
	struct FAnimNode_CopyBone AnimGraphNode_CopyBone; // 0x17B0 (240)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function ABP-ATV.ABP-ATV_C.AnimGraph(HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function ABP-ATV.ABP-ATV_C.BlueprintUpdateAnimation(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void ExecuteUbergraph_ABP-ATV(int32_t EntryPoint); // Function ABP-ATV.ABP-ATV_C.ExecuteUbergraph_ABP-ATV(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
};

// Function ABP-ATV.ABP-ATV_C.AnimGraph
inline void UABP-ATV_C::AnimGraph(struct FPoseLink& AnimGraph) {
	static auto fn = UObject::FindObject<UFunction>("Function ABP-ATV.ABP-ATV_C.AnimGraph");

	struct AnimGraph_Params {
		struct FPoseLink& AnimGraph;
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

