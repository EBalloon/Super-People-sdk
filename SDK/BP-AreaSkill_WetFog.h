// BlueprintGeneratedClass BP-AreaSkill_WetFog.BP-AreaSkill_WetFog_C
class ABP-AreaSkill_WetFog_C : public ABravoHotelAreaSkillZoneWetFog {

public:

	struct Unknown UberGraphFrame; // 0x388 (8)

	void ActivateEffect(struct Unknown Character); // Function BP-AreaSkill_WetFog.BP-AreaSkill_WetFog_C.ActivateEffect(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void DeactivateEffect(struct Unknown Character); // Function BP-AreaSkill_WetFog.BP-AreaSkill_WetFog_C.DeactivateEffect(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void BPSetAreaSkillInfo(); // Function BP-AreaSkill_WetFog.BP-AreaSkill_WetFog_C.BPSetAreaSkillInfo(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void StartDestroy(); // Function BP-AreaSkill_WetFog.BP-AreaSkill_WetFog_C.StartDestroy(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void ExecuteUbergraph_BP-AreaSkill_WetFog(int32_t EntryPoint); // Function BP-AreaSkill_WetFog.BP-AreaSkill_WetFog_C.ExecuteUbergraph_BP-AreaSkill_WetFog(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
};

// Function BP-AreaSkill_WetFog.BP-AreaSkill_WetFog_C.ActivateEffect
inline void ABP-AreaSkill_WetFog_C::ActivateEffect(struct Unknown Character) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-AreaSkill_WetFog.BP-AreaSkill_WetFog_C.ActivateEffect");

	struct ActivateEffect_Params {
		struct Unknown Character;
	}; ActivateEffect_Params Params;

	Params.Character = Character;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-AreaSkill_WetFog.BP-AreaSkill_WetFog_C.DeactivateEffect
inline void ABP-AreaSkill_WetFog_C::DeactivateEffect(struct Unknown Character) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-AreaSkill_WetFog.BP-AreaSkill_WetFog_C.DeactivateEffect");

	struct DeactivateEffect_Params {
		struct Unknown Character;
	}; DeactivateEffect_Params Params;

	Params.Character = Character;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-AreaSkill_WetFog.BP-AreaSkill_WetFog_C.BPSetAreaSkillInfo
inline void ABP-AreaSkill_WetFog_C::BPSetAreaSkillInfo() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-AreaSkill_WetFog.BP-AreaSkill_WetFog_C.BPSetAreaSkillInfo");

	struct BPSetAreaSkillInfo_Params {
		
	}; BPSetAreaSkillInfo_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-AreaSkill_WetFog.BP-AreaSkill_WetFog_C.StartDestroy
inline void ABP-AreaSkill_WetFog_C::StartDestroy() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-AreaSkill_WetFog.BP-AreaSkill_WetFog_C.StartDestroy");

	struct StartDestroy_Params {
		
	}; StartDestroy_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-AreaSkill_WetFog.BP-AreaSkill_WetFog_C.ExecuteUbergraph_BP-AreaSkill_WetFog
inline void ABP-AreaSkill_WetFog_C::ExecuteUbergraph_BP-AreaSkill_WetFog(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-AreaSkill_WetFog.BP-AreaSkill_WetFog_C.ExecuteUbergraph_BP-AreaSkill_WetFog");

	struct ExecuteUbergraph_BP-AreaSkill_WetFog_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_BP-AreaSkill_WetFog_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

