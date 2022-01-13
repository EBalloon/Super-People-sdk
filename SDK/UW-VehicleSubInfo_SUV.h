// WidgetBlueprintGeneratedClass UW-VehicleSubInfo_SUV.UW-VehicleSubInfo_SUV_C
class UUW-VehicleSubInfo_SUV_C : public UUW-VehicleSubInfo_Base_C {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268 (8)
	struct UCanvasPanel SeatIcons; // 0x270 (8)
	struct UCanvasPanel WheelIcons; // 0x278 (8)

	void Setup(struct ABravoHotelVehicle VehicleInstance); // Function UW-VehicleSubInfo_SUV.UW-VehicleSubInfo_SUV_C.Setup(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void ExecuteUbergraph_UW-VehicleSubInfo_SUV(int32_t EntryPoint); // Function UW-VehicleSubInfo_SUV.UW-VehicleSubInfo_SUV_C.ExecuteUbergraph_UW-VehicleSubInfo_SUV(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
};

// Function UW-VehicleSubInfo_SUV.UW-VehicleSubInfo_SUV_C.Setup
inline void UUW-VehicleSubInfo_SUV_C::Setup(struct ABravoHotelVehicle VehicleInstance) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-VehicleSubInfo_SUV.UW-VehicleSubInfo_SUV_C.Setup");

	struct Setup_Params {
		struct ABravoHotelVehicle VehicleInstance;
	}; Setup_Params Params;

	Params.VehicleInstance = VehicleInstance;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-VehicleSubInfo_SUV.UW-VehicleSubInfo_SUV_C.ExecuteUbergraph_UW-VehicleSubInfo_SUV
inline void UUW-VehicleSubInfo_SUV_C::ExecuteUbergraph_UW-VehicleSubInfo_SUV(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-VehicleSubInfo_SUV.UW-VehicleSubInfo_SUV_C.ExecuteUbergraph_UW-VehicleSubInfo_SUV");

	struct ExecuteUbergraph_UW-VehicleSubInfo_SUV_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_UW-VehicleSubInfo_SUV_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

