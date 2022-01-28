// WidgetBlueprintGeneratedClass UW-Route.UW-Route_C
class UUW-Route_C : public UBravoHotelAircraftRouteWidget {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2B0 (8)
	struct UWidgetAnimation Propeller1; // 0x2B8 (8)
	struct UCanvasPanel Aircraft; // 0x2C0 (8)
	struct UImage Image_156; // 0x2C8 (8)
	struct UImage Image_236; // 0x2D0 (8)
	struct UImage Image_237; // 0x2D8 (8)
	struct UUW-MapComp_C MapCompRef; // 0x2E0 (8)

	void StopAirCraftAnimation(); // Function UW-Route.UW-Route_C.StopAirCraftAnimation(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void UpdateAirCraftScaleByMouseWheel(float Delta); // Function UW-Route.UW-Route_C.UpdateAirCraftScaleByMouseWheel(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void StartAirCraftAnimation(); // Function UW-Route.UW-Route_C.StartAirCraftAnimation(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void UpdateAircraftAngle(float Angle); // Function UW-Route.UW-Route_C.UpdateAircraftAngle(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void ExecuteUbergraph_UW-Route(int32_t EntryPoint); // Function UW-Route.UW-Route_C.ExecuteUbergraph_UW-Route(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
};

// Function UW-Route.UW-Route_C.StopAirCraftAnimation
inline void UUW-Route_C::StopAirCraftAnimation() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Route.UW-Route_C.StopAirCraftAnimation");

	struct StopAirCraftAnimation_Params {
		
	}; StopAirCraftAnimation_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Route.UW-Route_C.UpdateAirCraftScaleByMouseWheel
inline void UUW-Route_C::UpdateAirCraftScaleByMouseWheel(float Delta) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Route.UW-Route_C.UpdateAirCraftScaleByMouseWheel");

	struct UpdateAirCraftScaleByMouseWheel_Params {
		float Delta;
	}; UpdateAirCraftScaleByMouseWheel_Params Params;

	Params.Delta = Delta;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Route.UW-Route_C.StartAirCraftAnimation
inline void UUW-Route_C::StartAirCraftAnimation() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Route.UW-Route_C.StartAirCraftAnimation");

	struct StartAirCraftAnimation_Params {
		
	}; StartAirCraftAnimation_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Route.UW-Route_C.UpdateAircraftAngle
inline void UUW-Route_C::UpdateAircraftAngle(float Angle) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Route.UW-Route_C.UpdateAircraftAngle");

	struct UpdateAircraftAngle_Params {
		float Angle;
	}; UpdateAircraftAngle_Params Params;

	Params.Angle = Angle;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Route.UW-Route_C.ExecuteUbergraph_UW-Route
inline void UUW-Route_C::ExecuteUbergraph_UW-Route(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Route.UW-Route_C.ExecuteUbergraph_UW-Route");

	struct ExecuteUbergraph_UW-Route_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_UW-Route_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

