// BlueprintGeneratedClass BP-AreaSkill_PowerInterruption.BP-AreaSkill_PowerInterruption_C
class ABP-AreaSkill_PowerInterruption_C : public ABravoHotelAreaSkillZonePowerInterruption {

public:

	struct Unknown UberGraphFrame; // 0x390 (8)
	float SkillDelayTime; // 0x398 (4)
	struct Unknown BlackOutDynamicMaterial; // 0x3A0 (8)

	void UserConstructionScript(); // Function BP-AreaSkill_PowerInterruption.BP-AreaSkill_PowerInterruption_C.UserConstructionScript(Event|Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void ActivateEffect(struct Unknown Character); // Function BP-AreaSkill_PowerInterruption.BP-AreaSkill_PowerInterruption_C.ActivateEffect(Event|Public|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void DeactivateEffect(struct Unknown Character); // Function BP-AreaSkill_PowerInterruption.BP-AreaSkill_PowerInterruption_C.DeactivateEffect(Event|Public|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void BPSetAreaSkillInfo(); // Function BP-AreaSkill_PowerInterruption.BP-AreaSkill_PowerInterruption_C.BPSetAreaSkillInfo(Event|Public|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void StartDestroy(); // Function BP-AreaSkill_PowerInterruption.BP-AreaSkill_PowerInterruption_C.StartDestroy(Event|Public|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void ReceiveBeginPlay(); // Function BP-AreaSkill_PowerInterruption.BP-AreaSkill_PowerInterruption_C.ReceiveBeginPlay(Event|Protected|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void ExecuteUbergraph_BP-AreaSkill_PowerInterruption(int32_t EntryPoint); // Function BP-AreaSkill_PowerInterruption.BP-AreaSkill_PowerInterruption_C.ExecuteUbergraph_BP-AreaSkill_PowerInterruption(Final|UbergraphFunction|HasDefaults) // <Game_BE.exe+0x2B80160>
};

// Function BP-AreaSkill_PowerInterruption.BP-AreaSkill_PowerInterruption_C.UserConstructionScript
inline void ABP-AreaSkill_PowerInterruption_C::UserConstructionScript() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-AreaSkill_PowerInterruption.BP-AreaSkill_PowerInterruption_C.UserConstructionScript");

	struct UserConstructionScript_Params {
		
	}; UserConstructionScript_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-AreaSkill_PowerInterruption.BP-AreaSkill_PowerInterruption_C.ActivateEffect
inline void ABP-AreaSkill_PowerInterruption_C::ActivateEffect(struct Unknown Character) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-AreaSkill_PowerInterruption.BP-AreaSkill_PowerInterruption_C.ActivateEffect");

	struct ActivateEffect_Params {
		struct Unknown Character;
	}; ActivateEffect_Params Params;

	Params.Character = Character;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-AreaSkill_PowerInterruption.BP-AreaSkill_PowerInterruption_C.DeactivateEffect
inline void ABP-AreaSkill_PowerInterruption_C::DeactivateEffect(struct Unknown Character) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-AreaSkill_PowerInterruption.BP-AreaSkill_PowerInterruption_C.DeactivateEffect");

	struct DeactivateEffect_Params {
		struct Unknown Character;
	}; DeactivateEffect_Params Params;

	Params.Character = Character;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-AreaSkill_PowerInterruption.BP-AreaSkill_PowerInterruption_C.BPSetAreaSkillInfo
inline void ABP-AreaSkill_PowerInterruption_C::BPSetAreaSkillInfo() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-AreaSkill_PowerInterruption.BP-AreaSkill_PowerInterruption_C.BPSetAreaSkillInfo");

	struct BPSetAreaSkillInfo_Params {
		
	}; BPSetAreaSkillInfo_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-AreaSkill_PowerInterruption.BP-AreaSkill_PowerInterruption_C.StartDestroy
inline void ABP-AreaSkill_PowerInterruption_C::StartDestroy() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-AreaSkill_PowerInterruption.BP-AreaSkill_PowerInterruption_C.StartDestroy");

	struct StartDestroy_Params {
		
	}; StartDestroy_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-AreaSkill_PowerInterruption.BP-AreaSkill_PowerInterruption_C.ReceiveBeginPlay
inline void ABP-AreaSkill_PowerInterruption_C::ReceiveBeginPlay() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-AreaSkill_PowerInterruption.BP-AreaSkill_PowerInterruption_C.ReceiveBeginPlay");

	struct ReceiveBeginPlay_Params {
		
	}; ReceiveBeginPlay_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-AreaSkill_PowerInterruption.BP-AreaSkill_PowerInterruption_C.ExecuteUbergraph_BP-AreaSkill_PowerInterruption
inline void ABP-AreaSkill_PowerInterruption_C::ExecuteUbergraph_BP-AreaSkill_PowerInterruption(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-AreaSkill_PowerInterruption.BP-AreaSkill_PowerInterruption_C.ExecuteUbergraph_BP-AreaSkill_PowerInterruption");

	struct ExecuteUbergraph_BP-AreaSkill_PowerInterruption_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_BP-AreaSkill_PowerInterruption_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

