// BlueprintGeneratedClass BP-AircraftBomber_TypeC.BP-AircraftBomber_TypeC_C
class ABP-AircraftBomber_TypeC_C : public ABravoHotelAircraftBomber {

public:

	struct Unknown UberGraphFrame; // 0x320 (8)
	struct Unknown ParticleSystem; // 0x328 (8)
	struct Unknown SM-Aricraft001__WheelFolding; // 0x330 (8)
	struct Unknown DefaultSceneRoot; // 0x338 (8)

	void ReceiveBeginPlay(); // Function BP-AircraftBomber_TypeC.BP-AircraftBomber_TypeC_C.ReceiveBeginPlay(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void ReceiveTick(float DeltaSeconds); // Function BP-AircraftBomber_TypeC.BP-AircraftBomber_TypeC_C.ReceiveTick(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void ReceiveDestroyed(); // Function BP-AircraftBomber_TypeC.BP-AircraftBomber_TypeC_C.ReceiveDestroyed(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void BndEvt__MovementComponent_K2Node_ComponentBoundEvent_0_OnInterpToResetDelegate__DelegateSignature(struct Unknown& ImpactResult, float Time); // Function BP-AircraftBomber_TypeC.BP-AircraftBomber_TypeC_C.BndEvt__MovementComponent_K2Node_ComponentBoundEvent_0_OnInterpToResetDelegate__DelegateSignature(HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void ExecuteUbergraph_BP-AircraftBomber_TypeC(int32_t EntryPoint); // Function BP-AircraftBomber_TypeC.BP-AircraftBomber_TypeC_C.ExecuteUbergraph_BP-AircraftBomber_TypeC(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
};

// Function BP-AircraftBomber_TypeC.BP-AircraftBomber_TypeC_C.ReceiveBeginPlay
inline void ABP-AircraftBomber_TypeC_C::ReceiveBeginPlay() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-AircraftBomber_TypeC.BP-AircraftBomber_TypeC_C.ReceiveBeginPlay");

	struct ReceiveBeginPlay_Params {
		
	}; ReceiveBeginPlay_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-AircraftBomber_TypeC.BP-AircraftBomber_TypeC_C.ReceiveTick
inline void ABP-AircraftBomber_TypeC_C::ReceiveTick(float DeltaSeconds) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-AircraftBomber_TypeC.BP-AircraftBomber_TypeC_C.ReceiveTick");

	struct ReceiveTick_Params {
		float DeltaSeconds;
	}; ReceiveTick_Params Params;

	Params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-AircraftBomber_TypeC.BP-AircraftBomber_TypeC_C.ReceiveDestroyed
inline void ABP-AircraftBomber_TypeC_C::ReceiveDestroyed() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-AircraftBomber_TypeC.BP-AircraftBomber_TypeC_C.ReceiveDestroyed");

	struct ReceiveDestroyed_Params {
		
	}; ReceiveDestroyed_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-AircraftBomber_TypeC.BP-AircraftBomber_TypeC_C.BndEvt__MovementComponent_K2Node_ComponentBoundEvent_0_OnInterpToResetDelegate__DelegateSignature
inline void ABP-AircraftBomber_TypeC_C::BndEvt__MovementComponent_K2Node_ComponentBoundEvent_0_OnInterpToResetDelegate__DelegateSignature(struct Unknown& ImpactResult, float Time) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-AircraftBomber_TypeC.BP-AircraftBomber_TypeC_C.BndEvt__MovementComponent_K2Node_ComponentBoundEvent_0_OnInterpToResetDelegate__DelegateSignature");

	struct BndEvt__MovementComponent_K2Node_ComponentBoundEvent_0_OnInterpToResetDelegate__DelegateSignature_Params {
		struct Unknown& ImpactResult;
		float Time;
	}; BndEvt__MovementComponent_K2Node_ComponentBoundEvent_0_OnInterpToResetDelegate__DelegateSignature_Params Params;

	Params.Time = Time;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	ImpactResult = Params.ImpactResult;

}

// Function BP-AircraftBomber_TypeC.BP-AircraftBomber_TypeC_C.ExecuteUbergraph_BP-AircraftBomber_TypeC
inline void ABP-AircraftBomber_TypeC_C::ExecuteUbergraph_BP-AircraftBomber_TypeC(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-AircraftBomber_TypeC.BP-AircraftBomber_TypeC_C.ExecuteUbergraph_BP-AircraftBomber_TypeC");

	struct ExecuteUbergraph_BP-AircraftBomber_TypeC_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_BP-AircraftBomber_TypeC_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

