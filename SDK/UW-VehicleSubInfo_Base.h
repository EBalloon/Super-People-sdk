// WidgetBlueprintGeneratedClass UW-VehicleSubInfo_Base.UW-VehicleSubInfo_Base_C
class UUW-VehicleSubInfo_Base_C : public UUserWidget {

public:

	struct Unknown MySeatColor; // 0x248 (16)
	struct Unknown WheelGroup; // 0x258 (8)
	struct Unknown SeatGroup; // 0x260 (8)

	void Setup(struct Unknown VehicleInstance); // Function UW-VehicleSubInfo_Base.UW-VehicleSubInfo_Base_C.Setup(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void ShowSeatIcon(int32_t SeatIndex, char bShow, char bIsMine); // Function UW-VehicleSubInfo_Base.UW-VehicleSubInfo_Base_C.ShowSeatIcon(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void ShowWreckedWheelIcon(int32_t WheelIndex, char bShow); // Function UW-VehicleSubInfo_Base.UW-VehicleSubInfo_Base_C.ShowWreckedWheelIcon(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
};

// Function UW-VehicleSubInfo_Base.UW-VehicleSubInfo_Base_C.Setup
inline void UUW-VehicleSubInfo_Base_C::Setup(struct Unknown VehicleInstance) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-VehicleSubInfo_Base.UW-VehicleSubInfo_Base_C.Setup");

	struct Setup_Params {
		struct Unknown VehicleInstance;
	}; Setup_Params Params;

	Params.VehicleInstance = VehicleInstance;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-VehicleSubInfo_Base.UW-VehicleSubInfo_Base_C.ShowSeatIcon
inline void UUW-VehicleSubInfo_Base_C::ShowSeatIcon(int32_t SeatIndex, char bShow, char bIsMine) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-VehicleSubInfo_Base.UW-VehicleSubInfo_Base_C.ShowSeatIcon");

	struct ShowSeatIcon_Params {
		int32_t SeatIndex;
		char bShow;
		char bIsMine;
	}; ShowSeatIcon_Params Params;

	Params.SeatIndex = SeatIndex;
	Params.bShow = bShow;
	Params.bIsMine = bIsMine;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-VehicleSubInfo_Base.UW-VehicleSubInfo_Base_C.ShowWreckedWheelIcon
inline void UUW-VehicleSubInfo_Base_C::ShowWreckedWheelIcon(int32_t WheelIndex, char bShow) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-VehicleSubInfo_Base.UW-VehicleSubInfo_Base_C.ShowWreckedWheelIcon");

	struct ShowWreckedWheelIcon_Params {
		int32_t WheelIndex;
		char bShow;
	}; ShowWreckedWheelIcon_Params Params;

	Params.WheelIndex = WheelIndex;
	Params.bShow = bShow;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

