// BlueprintGeneratedClass BP-DefaultWaterVehicle.BP-DefaultWaterVehicle_C
class ABP-DefaultWaterVehicle_C : public ABP-DefaultWheeledVehicle_C {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0xD60 (8)
	struct FTimerHandle Handle_IsAnyHit; // 0xD68 (8)
	char IsAnyHit : 0; // 0xD70 (1)
	struct UActor LastHitActor; // 0xD78 (8)

	void CheckLastHitActor(); // Function BP-DefaultWaterVehicle.BP-DefaultWaterVehicle_C.CheckLastHitActor(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void IsLandscape(char& IsLandscape); // Function BP-DefaultWaterVehicle.BP-DefaultWaterVehicle_C.IsLandscape(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void ReceiveHit(struct UPrimitiveComponent MyComp, struct UActor Other, struct UPrimitiveComponent OtherComp, char bSelfMoved, struct FVector HitLocation, struct FVector HitNormal, struct FVector NormalImpulse, struct FHitResult& Hit); // Function BP-DefaultWaterVehicle.BP-DefaultWaterVehicle_C.ReceiveHit(Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void CheckAnyHit(); // Function BP-DefaultWaterVehicle.BP-DefaultWaterVehicle_C.CheckAnyHit(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void ResetGate(); // Function BP-DefaultWaterVehicle.BP-DefaultWaterVehicle_C.ResetGate(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void ExecuteUbergraph_BP-DefaultWaterVehicle(int32_t EntryPoint); // Function BP-DefaultWaterVehicle.BP-DefaultWaterVehicle_C.ExecuteUbergraph_BP-DefaultWaterVehicle(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
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
inline void ABP-DefaultWaterVehicle_C::ReceiveHit(struct UPrimitiveComponent MyComp, struct UActor Other, struct UPrimitiveComponent OtherComp, char bSelfMoved, struct FVector HitLocation, struct FVector HitNormal, struct FVector NormalImpulse, struct FHitResult& Hit) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-DefaultWaterVehicle.BP-DefaultWaterVehicle_C.ReceiveHit");

	struct ReceiveHit_Params {
		struct UPrimitiveComponent MyComp;
		struct UActor Other;
		struct UPrimitiveComponent OtherComp;
		char bSelfMoved;
		struct FVector HitLocation;
		struct FVector HitNormal;
		struct FVector NormalImpulse;
		struct FHitResult& Hit;
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

