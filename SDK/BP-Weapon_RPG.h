// BlueprintGeneratedClass BP-Weapon_RPG.BP-Weapon_RPG_C
class ABP-Weapon_RPG_C : public ABP-RangedWeaponBase_C {

public:

	struct Unknown UberGraphFrame; // 0x22A0 (8)

	void GetTargetEffectorLocationR(struct Unknown& TargetEffectorLocationR); // Function BP-Weapon_RPG.BP-Weapon_RPG_C.GetTargetEffectorLocationR(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <Game_BE.exe+0x2B812B0>
	void ReceiveTick(float DeltaSeconds); // Function BP-Weapon_RPG.BP-Weapon_RPG_C.ReceiveTick(Event|Public|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void K2_OnEquip(); // Function BP-Weapon_RPG.BP-Weapon_RPG_C.K2_OnEquip(Event|Public|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void K2_OnUnEquip(); // Function BP-Weapon_RPG.BP-Weapon_RPG_C.K2_OnUnEquip(Event|Public|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void ReceiveBeginPlay(); // Function BP-Weapon_RPG.BP-Weapon_RPG_C.ReceiveBeginPlay(Event|Protected|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void CheckWeaponScale(); // Function BP-Weapon_RPG.BP-Weapon_RPG_C.CheckWeaponScale(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void ExecuteUbergraph_BP-Weapon_RPG(int32_t EntryPoint); // Function BP-Weapon_RPG.BP-Weapon_RPG_C.ExecuteUbergraph_BP-Weapon_RPG(Final|UbergraphFunction|HasDefaults) // <Game_BE.exe+0x2B812B0>
};

// Function BP-Weapon_RPG.BP-Weapon_RPG_C.GetTargetEffectorLocationR
inline void ABP-Weapon_RPG_C::GetTargetEffectorLocationR(struct Unknown& TargetEffectorLocationR) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-Weapon_RPG.BP-Weapon_RPG_C.GetTargetEffectorLocationR");

	struct GetTargetEffectorLocationR_Params {
		struct Unknown& TargetEffectorLocationR;
	}; GetTargetEffectorLocationR_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	TargetEffectorLocationR = Params.TargetEffectorLocationR;

}

// Function BP-Weapon_RPG.BP-Weapon_RPG_C.ReceiveTick
inline void ABP-Weapon_RPG_C::ReceiveTick(float DeltaSeconds) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-Weapon_RPG.BP-Weapon_RPG_C.ReceiveTick");

	struct ReceiveTick_Params {
		float DeltaSeconds;
	}; ReceiveTick_Params Params;

	Params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-Weapon_RPG.BP-Weapon_RPG_C.K2_OnEquip
inline void ABP-Weapon_RPG_C::K2_OnEquip() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-Weapon_RPG.BP-Weapon_RPG_C.K2_OnEquip");

	struct K2_OnEquip_Params {
		
	}; K2_OnEquip_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-Weapon_RPG.BP-Weapon_RPG_C.K2_OnUnEquip
inline void ABP-Weapon_RPG_C::K2_OnUnEquip() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-Weapon_RPG.BP-Weapon_RPG_C.K2_OnUnEquip");

	struct K2_OnUnEquip_Params {
		
	}; K2_OnUnEquip_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-Weapon_RPG.BP-Weapon_RPG_C.ReceiveBeginPlay
inline void ABP-Weapon_RPG_C::ReceiveBeginPlay() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-Weapon_RPG.BP-Weapon_RPG_C.ReceiveBeginPlay");

	struct ReceiveBeginPlay_Params {
		
	}; ReceiveBeginPlay_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-Weapon_RPG.BP-Weapon_RPG_C.CheckWeaponScale
inline void ABP-Weapon_RPG_C::CheckWeaponScale() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-Weapon_RPG.BP-Weapon_RPG_C.CheckWeaponScale");

	struct CheckWeaponScale_Params {
		
	}; CheckWeaponScale_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-Weapon_RPG.BP-Weapon_RPG_C.ExecuteUbergraph_BP-Weapon_RPG
inline void ABP-Weapon_RPG_C::ExecuteUbergraph_BP-Weapon_RPG(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-Weapon_RPG.BP-Weapon_RPG_C.ExecuteUbergraph_BP-Weapon_RPG");

	struct ExecuteUbergraph_BP-Weapon_RPG_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_BP-Weapon_RPG_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

