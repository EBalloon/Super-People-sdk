// AnimBlueprintGeneratedClass ABP-Motorcycle.ABP-Motorcycle_C
class UABP-Motorcycle_C : public UBravoHotelVehicleAnimInstance {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0xA40 (8)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_2; // 0xA48 (32)
	struct FAnimNode_MeshSpaceRefPose AnimGraphNode_MeshRefPose_2; // 0xA68 (16)
	struct FAnimNode_MeshSpaceRefPose AnimGraphNode_MeshRefPose; // 0xA78 (16)
	struct FAnimNode_WheelHandler AnimGraphNode_WheelHandler; // 0xA88 (224)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0xB68 (32)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_2; // 0xB88 (264)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0xC90 (160)
	struct FAnimNode_Root AnimGraphNode_Root; // 0xD30 (48)
	struct FAnimNode_RotationMultiplier AnimGraphNode_RotationMultiplier_3; // 0xD60 (240)
	struct FAnimNode_RotationMultiplier AnimGraphNode_RotationMultiplier_2; // 0xE50 (240)
	struct FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController_4; // 0xF40 (280)
	struct FAnimNode_CopyBone AnimGraphNode_CopyBone; // 0x1058 (240)
	struct FAnimNode_RotationMultiplier AnimGraphNode_RotationMultiplier; // 0x1148 (240)
	struct FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController_3; // 0x1238 (280)
	struct FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController_2; // 0x1350 (280)
	struct FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController; // 0x1468 (280)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x1580 (264)
	struct UCurveFloat CV-Motorcycle_Rotate_Center; // 0x1688 (8)
	struct FRotator RotateCenterValue; // 0x1690 (12)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function ABP-Motorcycle.ABP-Motorcycle_C.AnimGraph(HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function ABP-Motorcycle.ABP-Motorcycle_C.BlueprintUpdateAnimation(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void ExecuteUbergraph_ABP-Motorcycle(int32_t EntryPoint); // Function ABP-Motorcycle.ABP-Motorcycle_C.ExecuteUbergraph_ABP-Motorcycle(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
};

// Function ABP-Motorcycle.ABP-Motorcycle_C.AnimGraph
inline void UABP-Motorcycle_C::AnimGraph(struct FPoseLink& AnimGraph) {
	static auto fn = UObject::FindObject<UFunction>("Function ABP-Motorcycle.ABP-Motorcycle_C.AnimGraph");

	struct AnimGraph_Params {
		struct FPoseLink& AnimGraph;
	}; AnimGraph_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	AnimGraph = Params.AnimGraph;

}

// Function ABP-Motorcycle.ABP-Motorcycle_C.BlueprintUpdateAnimation
inline void UABP-Motorcycle_C::BlueprintUpdateAnimation(float DeltaTimeX) {
	static auto fn = UObject::FindObject<UFunction>("Function ABP-Motorcycle.ABP-Motorcycle_C.BlueprintUpdateAnimation");

	struct BlueprintUpdateAnimation_Params {
		float DeltaTimeX;
	}; BlueprintUpdateAnimation_Params Params;

	Params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ABP-Motorcycle.ABP-Motorcycle_C.ExecuteUbergraph_ABP-Motorcycle
inline void UABP-Motorcycle_C::ExecuteUbergraph_ABP-Motorcycle(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function ABP-Motorcycle.ABP-Motorcycle_C.ExecuteUbergraph_ABP-Motorcycle");

	struct ExecuteUbergraph_ABP-Motorcycle_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_ABP-Motorcycle_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

