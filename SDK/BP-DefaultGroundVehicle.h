// BlueprintGeneratedClass BP-DefaultGroundVehicle.BP-DefaultGroundVehicle_C
class ABP-DefaultGroundVehicle_C : public ABP-DefaultWheeledVehicle_C {

public:

	struct Unknown UberGraphFrame; // 0xCF8 (8)
	struct Unknown SplashParticleComp; // 0xD00 (8)
	struct Unknown PlaneParticleComp; // 0xD08 (8)
	struct Unknown TimerHandle_RemoveAllWaterParticle; // 0xD10 (8)

	void ReceiveTick(float DeltaSeconds); // Function BP-DefaultGroundVehicle.BP-DefaultGroundVehicle_C.ReceiveTick(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void OnPlaySplashParticle(char IsToWater); // Function BP-DefaultGroundVehicle.BP-DefaultGroundVehicle_C.OnPlaySplashParticle(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void RemoveAllWaterParticle(); // Function BP-DefaultGroundVehicle.BP-DefaultGroundVehicle_C.RemoveAllWaterParticle(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void AdjustWaterParticle(); // Function BP-DefaultGroundVehicle.BP-DefaultGroundVehicle_C.AdjustWaterParticle(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void ExecuteUbergraph_BP-DefaultGroundVehicle(int32_t EntryPoint); // Function BP-DefaultGroundVehicle.BP-DefaultGroundVehicle_C.ExecuteUbergraph_BP-DefaultGroundVehicle(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
};

// Function BP-DefaultGroundVehicle.BP-DefaultGroundVehicle_C.ReceiveTick
inline void ABP-DefaultGroundVehicle_C::ReceiveTick(float DeltaSeconds) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-DefaultGroundVehicle.BP-DefaultGroundVehicle_C.ReceiveTick");

	struct ReceiveTick_Params {
		float DeltaSeconds;
	}; ReceiveTick_Params Params;

	Params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-DefaultGroundVehicle.BP-DefaultGroundVehicle_C.OnPlaySplashParticle
inline void ABP-DefaultGroundVehicle_C::OnPlaySplashParticle(char IsToWater) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-DefaultGroundVehicle.BP-DefaultGroundVehicle_C.OnPlaySplashParticle");

	struct OnPlaySplashParticle_Params {
		char IsToWater;
	}; OnPlaySplashParticle_Params Params;

	Params.IsToWater = IsToWater;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-DefaultGroundVehicle.BP-DefaultGroundVehicle_C.RemoveAllWaterParticle
inline void ABP-DefaultGroundVehicle_C::RemoveAllWaterParticle() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-DefaultGroundVehicle.BP-DefaultGroundVehicle_C.RemoveAllWaterParticle");

	struct RemoveAllWaterParticle_Params {
		
	}; RemoveAllWaterParticle_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-DefaultGroundVehicle.BP-DefaultGroundVehicle_C.AdjustWaterParticle
inline void ABP-DefaultGroundVehicle_C::AdjustWaterParticle() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-DefaultGroundVehicle.BP-DefaultGroundVehicle_C.AdjustWaterParticle");

	struct AdjustWaterParticle_Params {
		
	}; AdjustWaterParticle_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-DefaultGroundVehicle.BP-DefaultGroundVehicle_C.ExecuteUbergraph_BP-DefaultGroundVehicle
inline void ABP-DefaultGroundVehicle_C::ExecuteUbergraph_BP-DefaultGroundVehicle(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-DefaultGroundVehicle.BP-DefaultGroundVehicle_C.ExecuteUbergraph_BP-DefaultGroundVehicle");

	struct ExecuteUbergraph_BP-DefaultGroundVehicle_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_BP-DefaultGroundVehicle_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

