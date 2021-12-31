// BlueprintGeneratedClass BP-DefaultWaterVehicle.BP-DefaultWaterVehicle_C
class ABP-DefaultWaterVehicle_C : public ABP-DefaultWheeledVehicle_C {

public:

	struct Unknown UberGraphFrame; // 0xD48 (8)
	struct Unknown Handle_IsAnyHit; // 0xD50 (8)
	char IsAnyHit : 0; // 0xD58 (1)
	struct Unknown LastHitActor; // 0xD60 (8)

	void CheckLastHitActor(); // Function BP-DefaultWaterVehicle.BP-DefaultWaterVehicle_C.CheckLastHitActor(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void IsLandscape(char& IsLandscape); // Function BP-DefaultWaterVehicle.BP-DefaultWaterVehicle_C.IsLandscape(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void ReceiveHit(struct Unknown MyComp, struct Unknown Other, struct Unknown OtherComp, char bSelfMoved, struct Unknown HitLocation, struct Unknown HitNormal, struct Unknown NormalImpulse, struct Unknown& Hit); // Function BP-DefaultWaterVehicle.BP-DefaultWaterVehicle_C.ReceiveHit(Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void CheckAnyHit(); // Function BP-DefaultWaterVehicle.BP-DefaultWaterVehicle_C.CheckAnyHit(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void ResetGate(); // Function BP-DefaultWaterVehicle.BP-DefaultWaterVehicle_C.ResetGate(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void ExecuteUbergraph_BP-DefaultWaterVehicle(int32_t EntryPoint); // Function BP-DefaultWaterVehicle.BP-DefaultWaterVehicle_C.ExecuteUbergraph_BP-DefaultWaterVehicle(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
};

// Function BP-DefaultWaterVehicle.BP-DefaultWaterVehicle_C.CheckLastHitActor
inline void ABP-DefaultWaterVehicle_C::CheckLastHitActor() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-DefaultWaterVehicle.BP-DefaultWaterVehicle_C.CheckLastHitActor");

	struct CheckLastHitActor_Params {
		
	}; CheckLastHitActor_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-DefaultWaterVehicle.BP-DefaultWaterVehicle_C.IsLandscape
inline void ABP-DefaultWaterVehicle_C::IsLandscape(char& IsLandscape) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-DefaultWaterVehicle.BP-DefaultWaterVehicle_C.IsLandscape");

	struct IsLandscape_Params {
		char& IsLandscape;
	}; IsLandscape_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	IsLandscape = Params.IsLandscape;

}

// Function BP-DefaultWaterVehicle.BP-DefaultWaterVehicle_C.ReceiveHit
inline void ABP-DefaultWaterVehicle_C::ReceiveHit(struct Unknown MyComp, struct Unknown Other, struct Unknown OtherComp, char bSelfMoved, struct Unknown HitLocation, struct Unknown HitNormal, struct Unknown NormalImpulse, struct Unknown& Hit) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-DefaultWaterVehicle.BP-DefaultWaterVehicle_C.ReceiveHit");

	struct ReceiveHit_Params {
		struct Unknown MyComp;
		struct Unknown Other;
		struct Unknown OtherComp;
		char bSelfMoved;
		struct Unknown HitLocation;
		struct Unknown HitNormal;
		struct Unknown NormalImpulse;
		struct Unknown& Hit;
	}; ReceiveHit_Params Params;

	Params.MyComp = MyComp;
	Params.Other = Other;
	Params.OtherComp = OtherComp;
	Params.bSelfMoved = bSelfMoved;
	Params.HitLocation = HitLocation;
	Params.HitNormal = HitNormal;
	Params.NormalImpulse = NormalImpulse;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Hit = Params.Hit;

}

// Function BP-DefaultWaterVehicle.BP-DefaultWaterVehicle_C.CheckAnyHit
inline void ABP-DefaultWaterVehicle_C::CheckAnyHit() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-DefaultWaterVehicle.BP-DefaultWaterVehicle_C.CheckAnyHit");

	struct CheckAnyHit_Params {
		
	}; CheckAnyHit_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-DefaultWaterVehicle.BP-DefaultWaterVehicle_C.ResetGate
inline void ABP-DefaultWaterVehicle_C::ResetGate() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-DefaultWaterVehicle.BP-DefaultWaterVehicle_C.ResetGate");

	struct ResetGate_Params {
		
	}; ResetGate_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-DefaultWaterVehicle.BP-DefaultWaterVehicle_C.ExecuteUbergraph_BP-DefaultWaterVehicle
inline void ABP-DefaultWaterVehicle_C::ExecuteUbergraph_BP-DefaultWaterVehicle(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-DefaultWaterVehicle.BP-DefaultWaterVehicle_C.ExecuteUbergraph_BP-DefaultWaterVehicle");

	struct ExecuteUbergraph_BP-DefaultWaterVehicle_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_BP-DefaultWaterVehicle_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

