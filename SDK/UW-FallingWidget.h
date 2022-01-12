// WidgetBlueprintGeneratedClass UW-FallingWidget.UW-FallingWidget_C
class UUW-FallingWidget_C : public UBravoHotelFallingWidget {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x270 (8)
	struct UWidgetAnimation Parachute_Loop; // 0x278 (8)
	struct UWidgetAnimation Parachute_Open; // 0x280 (8)
	struct UCanvasPanel Canvas; // 0x288 (8)
	struct UHorizontalBox HorizontalBox_Ground; // 0x290 (8)
	struct UHorizontalBox HorizontalBox_Parachute; // 0x298 (8)
	struct UHorizontalBox HorizontalBox_Sea; // 0x2A0 (8)
	struct UImage Image_797; // 0x2A8 (8)
	struct UImage Image_798; // 0x2B0 (8)
	struct UOverlay Overlay_Speed; // 0x2B8 (8)
	struct UImage Parachute; // 0x2C0 (8)
	struct UImage Player; // 0x2C8 (8)
	struct UCanvasPanel PlayerGroup; // 0x2D0 (8)
	struct UProgressBar SeaHeight; // 0x2D8 (8)
	struct UTextBlock Speed; // 0x2E0 (8)
	struct UProgressBar TerrainHeight; // 0x2E8 (8)
	char IsParachute : 0; // 0x2F0 (1)

	void SetParachuteInfo(struct FParachuteInfo SetParachuteInfo); // Function UW-FallingWidget.UW-FallingWidget_C.SetParachuteInfo(Event|Public|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void ExecuteUbergraph_UW-FallingWidget(int32_t EntryPoint); // Function UW-FallingWidget.UW-FallingWidget_C.ExecuteUbergraph_UW-FallingWidget(Final|UbergraphFunction|HasDefaults) // <Game_BE.exe+0x2B80160>
};

// Function UW-FallingWidget.UW-FallingWidget_C.SetParachuteInfo
inline void UUW-FallingWidget_C::SetParachuteInfo(struct FParachuteInfo SetParachuteInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-FallingWidget.UW-FallingWidget_C.SetParachuteInfo");

	struct SetParachuteInfo_Params {
		struct FParachuteInfo SetParachuteInfo;
	}; SetParachuteInfo_Params Params;

	Params.SetParachuteInfo = SetParachuteInfo;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-FallingWidget.UW-FallingWidget_C.ExecuteUbergraph_UW-FallingWidget
inline void UUW-FallingWidget_C::ExecuteUbergraph_UW-FallingWidget(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-FallingWidget.UW-FallingWidget_C.ExecuteUbergraph_UW-FallingWidget");

	struct ExecuteUbergraph_UW-FallingWidget_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_UW-FallingWidget_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

