// WidgetBlueprintGeneratedClass UW-VehicleSubInfo_Camaro.UW-VehicleSubInfo_Camaro_C
class UUW-VehicleSubInfo_Camaro_C : public UUW-VehicleSubInfo_Base_C {

public:

	struct Unknown UberGraphFrame; // 0x268 (8)
	struct Unknown SeatIcons; // 0x270 (8)
	struct Unknown WheelIcons; // 0x278 (8)

	void Setup(struct Unknown VehicleInstance); // Function UW-VehicleSubInfo_Camaro.UW-VehicleSubInfo_Camaro_C.Setup(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void ExecuteUbergraph_UW-VehicleSubInfo_Camaro(int32_t EntryPoint); // Function UW-VehicleSubInfo_Camaro.UW-VehicleSubInfo_Camaro_C.ExecuteUbergraph_UW-VehicleSubInfo_Camaro(Final|UbergraphFunction) // <Game_BE.exe+0x2B80160>
};

// Function UW-VehicleSubInfo_Camaro.UW-VehicleSubInfo_Camaro_C.Setup
inline void UUW-VehicleSubInfo_Camaro_C::Setup(struct Unknown VehicleInstance) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-VehicleSubInfo_Camaro.UW-VehicleSubInfo_Camaro_C.Setup");

	struct Setup_Params {
		struct Unknown VehicleInstance;
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

