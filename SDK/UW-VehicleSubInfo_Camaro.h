// WidgetBlueprintGeneratedClass UW-VehicleSubInfo_Camaro.UW-VehicleSubInfo_Camaro_C
class UUW-VehicleSubInfo_Camaro_C : public UUW-VehicleSubInfo_Base_C {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268 (8)
	struct UCanvasPanel SeatIcons; // 0x270 (8)
	struct UCanvasPanel WheelIcons; // 0x278 (8)

	void Setup(struct ABravoHotelVehicle VehicleInstance); // Function UW-VehicleSubInfo_Camaro.UW-VehicleSubInfo_Camaro_C.Setup(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void ExecuteUbergraph_UW-VehicleSubInfo_Camaro(int32_t EntryPoint); // Function UW-VehicleSubInfo_Camaro.UW-VehicleSubInfo_Camaro_C.ExecuteUbergraph_UW-VehicleSubInfo_Camaro(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
};

// Function UW-VehicleSubInfo_Camaro.UW-VehicleSubInfo_Camaro_C.Setup
inline void UUW-VehicleSubInfo_Camaro_C::Setup(struct ABravoHotelVehicle VehicleInstance) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-VehicleSubInfo_Camaro.UW-VehicleSubInfo_Camaro_C.Setup");

	struct Setup_Params {
		struct ABravoHotelVehicle VehicleInstance;
	}; Setup_Params Params;

	Params.VehicleInstance = VehicleInstance;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-VehicleSubInfo_Camaro.UW-VehicleSubInfo_Camaro_C.ExecuteUbergraph_UW-VehicleSubInfo_Camaro
inline void UUW-VehicleSubInfo_Camaro_C::ExecuteUbergraph_UW-VehicleSubInfo_Camaro(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-VehicleSubInfo_Camaro.UW-VehicleSubInfo_Camaro_C.ExecuteUbergraph_UW-VehicleSubInfo_Camaro");

	struct ExecuteUbergraph_UW-VehicleSubInfo_Camaro_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_UW-VehicleSubInfo_Camaro_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

