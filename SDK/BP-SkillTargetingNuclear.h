// BlueprintGeneratedClass BP-SkillTargetingNuclear.BP-SkillTargetingNuclear_C
class ABP-SkillTargetingNuclear_C : public ABravoHotelSkillTargetingNuclear {

public:

	struct Unknown UberGraphFrame; // 0x348 (8)

	void UpdateTargetSize(); // Function BP-SkillTargetingNuclear.BP-SkillTargetingNuclear_C.UpdateTargetSize(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void ExecuteUbergraph_BP-SkillTargetingNuclear(int32_t EntryPoint); // Function BP-SkillTargetingNuclear.BP-SkillTargetingNuclear_C.ExecuteUbergraph_BP-SkillTargetingNuclear(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
};

// Function BP-SkillTargetingNuclear.BP-SkillTargetingNuclear_C.UpdateTargetSize
inline void ABP-SkillTargetingNuclear_C::UpdateTargetSize() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-SkillTargetingNuclear.BP-SkillTargetingNuclear_C.UpdateTargetSize");

	struct UpdateTargetSize_Params {
		
	}; UpdateTargetSize_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-SkillTargetingNuclear.BP-SkillTargetingNuclear_C.ExecuteUbergraph_BP-SkillTargetingNuclear
inline void ABP-SkillTargetingNuclear_C::ExecuteUbergraph_BP-SkillTargetingNuclear(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-SkillTargetingNuclear.BP-SkillTargetingNuclear_C.ExecuteUbergraph_BP-SkillTargetingNuclear");

	struct ExecuteUbergraph_BP-SkillTargetingNuclear_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_BP-SkillTargetingNuclear_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

