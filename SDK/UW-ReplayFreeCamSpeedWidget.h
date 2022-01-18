// WidgetBlueprintGeneratedClass UW-ReplayFreeCamSpeedWidget.UW-ReplayFreeCamSpeedWidget_C
class UUW-ReplayFreeCamSpeedWidget_C : public UUserWidget {

public:

	struct UImage Image_136; // 0x248 (8)
	struct USlider Slider_Speed; // 0x250 (8)
	struct UTextBlock T_CamSpeed; // 0x258 (8)
	struct FTimerHandle Handle_HideFreeCamSpeed; // 0x260 (8)

	void HideFreeCamSpeed(); // Function UW-ReplayFreeCamSpeedWidget.UW-ReplayFreeCamSpeedWidget_C.HideFreeCamSpeed(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void ShowFreeCamSpeed(); // Function UW-ReplayFreeCamSpeedWidget.UW-ReplayFreeCamSpeedWidget_C.ShowFreeCamSpeed(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void OnChangedFreeCamSpeedLevel(float SpeedLevel); // Function UW-ReplayFreeCamSpeedWidget.UW-ReplayFreeCamSpeedWidget_C.OnChangedFreeCamSpeedLevel(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
};

// Function UW-ReplayFreeCamSpeedWidget.UW-ReplayFreeCamSpeedWidget_C.HideFreeCamSpeed
inline void UUW-ReplayFreeCamSpeedWidget_C::HideFreeCamSpeed() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ReplayFreeCamSpeedWidget.UW-ReplayFreeCamSpeedWidget_C.HideFreeCamSpeed");

	struct HideFreeCamSpeed_Params {
		
	}; HideFreeCamSpeed_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ReplayFreeCamSpeedWidget.UW-ReplayFreeCamSpeedWidget_C.ShowFreeCamSpeed
inline void UUW-ReplayFreeCamSpeedWidget_C::ShowFreeCamSpeed() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ReplayFreeCamSpeedWidget.UW-ReplayFreeCamSpeedWidget_C.ShowFreeCamSpeed");

	struct ShowFreeCamSpeed_Params {
		
	}; ShowFreeCamSpeed_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ReplayFreeCamSpeedWidget.UW-ReplayFreeCamSpeedWidget_C.OnChangedFreeCamSpeedLevel
inline void UUW-ReplayFreeCamSpeedWidget_C::OnChangedFreeCamSpeedLevel(float SpeedLevel) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ReplayFreeCamSpeedWidget.UW-ReplayFreeCamSpeedWidget_C.OnChangedFreeCamSpeedLevel");

	struct OnChangedFreeCamSpeedLevel_Params {
		float SpeedLevel;
	}; OnChangedFreeCamSpeedLevel_Params Params;

	Params.SpeedLevel = SpeedLevel;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

