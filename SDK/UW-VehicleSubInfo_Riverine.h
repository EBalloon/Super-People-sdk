// WidgetBlueprintGeneratedClass UW-VehicleSubInfo_Riverine.UW-VehicleSubInfo_Riverine_C
class UUW-VehicleSubInfo_Riverine_C : public UUW-VehicleSubInfo_Base_C {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268 (8)
	struct UCanvasPanel SeatIcons; // 0x270 (8)
	struct UCanvasPanel WheelIcons; // 0x278 (8)

	void Setup(struct ABravoHotelVehicle VehicleInstance); // Function UW-VehicleSubInfo_Riverine.UW-VehicleSubInfo_Riverine_C.Setup(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void ExecuteUbergraph_UW-VehicleSubInfo_Riverine(int32_t EntryPoint); // Function UW-VehicleSubInfo_Riverine.UW-VehicleSubInfo_Riverine_C.ExecuteUbergraph_UW-VehicleSubInfo_Riverine(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
};

// Function UW-VehicleSubInfo_Riverine.UW-VehicleSubInfo_Riverine_C.Setup
inline void UUW-VehicleSubInfo_Riverine_C::Setup(struct ABravoHotelVehicle VehicleInstance) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-VehicleSubInfo_Riverine.UW-VehicleSubInfo_Riverine_C.Setup");

	struct Setup_Params {
		struct ABravoHotelVehicle VehicleInstance;
	}; Setup_Params Params;

	Params.VehicleInstance = VehicleInstance;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-VehicleSubInfo_Riverine.UW-VehicleSubInfo_Riverine_C.ExecuteUbergraph_UW-VehicleSubInfo_Riverine
inline void UUW-VehicleSubInfo_Riverine_C::ExecuteUbergraph_UW-VehicleSubInfo_Riverine(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-VehicleSubInfo_Riverine.UW-VehicleSubInfo_Riverine_C.ExecuteUbergraph_UW-VehicleSubInfo_Riverine");

	struct ExecuteUbergraph_UW-VehicleSubInfo_Riverine_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_UW-VehicleSubInfo_Riverine_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

