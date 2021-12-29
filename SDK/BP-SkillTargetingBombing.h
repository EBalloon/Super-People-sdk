// BlueprintGeneratedClass BP-SkillTargetingBombing.BP-SkillTargetingBombing_C
class ABP-SkillTargetingBombing_C : public ABravoHotelSkillTargetingBombing {

public:

	struct Unknown UberGraphFrame; // 0x368 (8)

	void ReceiveBeginPlay(); // Function BP-SkillTargetingBombing.BP-SkillTargetingBombing_C.ReceiveBeginPlay(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void ExecuteUbergraph_BP-SkillTargetingBombing(int32_t EntryPoint); // Function BP-SkillTargetingBombing.BP-SkillTargetingBombing_C.ExecuteUbergraph_BP-SkillTargetingBombing(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
};

// Function BP-SkillTargetingBombing.BP-SkillTargetingBombing_C.ReceiveBeginPlay
inline void ABP-SkillTargetingBombing_C::ReceiveBeginPlay() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-SkillTargetingBombing.BP-SkillTargetingBombing_C.ReceiveBeginPlay");

	struct ReceiveBeginPlay_Params {
		
	}; ReceiveBeginPlay_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-SkillTargetingBombing.BP-SkillTargetingBombing_C.ExecuteUbergraph_BP-SkillTargetingBombing
inline void ABP-SkillTargetingBombing_C::ExecuteUbergraph_BP-SkillTargetingBombing(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-SkillTargetingBombing.BP-SkillTargetingBombing_C.ExecuteUbergraph_BP-SkillTargetingBombing");

	struct ExecuteUbergraph_BP-SkillTargetingBombing_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_BP-SkillTargetingBombing_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

