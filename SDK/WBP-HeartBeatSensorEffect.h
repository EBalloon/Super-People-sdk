// WidgetBlueprintGeneratedClass WBP-HeartBeatSensorEffect.WBP-HeartBeatSensorEffect_C
class UWBP-HeartBeatSensorEffect_C : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown HeartBeat; // 0x250 (8)
	struct Unknown FadeOut; // 0x258 (8)
	struct Unknown FadeIn; // 0x260 (8)
	struct Unknown Image; // 0x268 (8)
	struct Unknown Image_95; // 0x270 (8)
	struct Unknown Image_140; // 0x278 (8)
	struct Unknown NewVar_1; // 0x280 (8)
	char IsFadeInOutEvent : 0; // 0x288 (1)
	float CurrentFade; // 0x28C (4)

	void Construct(); // Function WBP-HeartBeatSensorEffect.WBP-HeartBeatSensorEffect_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void Tick(struct Unknown MyGeometry, float InDeltaTime); // Function WBP-HeartBeatSensorEffect.WBP-HeartBeatSensorEffect_C.Tick(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void ExecuteUbergraph_WBP-HeartBeatSensorEffect(int32_t EntryPoint); // Function WBP-HeartBeatSensorEffect.WBP-HeartBeatSensorEffect_C.ExecuteUbergraph_WBP-HeartBeatSensorEffect(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
};

// Function WBP-HeartBeatSensorEffect.WBP-HeartBeatSensorEffect_C.Construct
inline void UWBP-HeartBeatSensorEffect_C::Construct() {
	static auto fn = UObject::FindObject<UFunction>("Function WBP-HeartBeatSensorEffect.WBP-HeartBeatSensorEffect_C.Construct");

	struct Construct_Params {
		
	}; Construct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function WBP-HeartBeatSensorEffect.WBP-HeartBeatSensorEffect_C.Tick
inline void UWBP-HeartBeatSensorEffect_C::Tick(struct Unknown MyGeometry, float InDeltaTime) {
	static auto fn = UObject::FindObject<UFunction>("Function WBP-HeartBeatSensorEffect.WBP-HeartBeatSensorEffect_C.Tick");

	struct Tick_Params {
		struct Unknown MyGeometry;
		float InDeltaTime;
	}; Tick_Params Params;

	Params.MyGeometry = MyGeometry;
	Params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function WBP-HeartBeatSensorEffect.WBP-HeartBeatSensorEffect_C.ExecuteUbergraph_WBP-HeartBeatSensorEffect
inline void UWBP-HeartBeatSensorEffect_C::ExecuteUbergraph_WBP-HeartBeatSensorEffect(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function WBP-HeartBeatSensorEffect.WBP-HeartBeatSensorEffect_C.ExecuteUbergraph_WBP-HeartBeatSensorEffect");

	struct ExecuteUbergraph_WBP-HeartBeatSensorEffect_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_WBP-HeartBeatSensorEffect_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

