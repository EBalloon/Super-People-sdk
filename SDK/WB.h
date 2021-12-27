// WidgetBlueprintGeneratedClass WB.WB
class UWB : public UUserWidget {

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

	void Construct(); // Function WB.WB.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Tick(struct Unknown MyGeometry, float InDeltaTime); // Function WB.WB.Tick(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_WB(int32_t EntryPoint); // Function WB.WB.ExecuteUbergraph_WB(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass WB.WB
class UWB : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown FadeOut; // 0x250 (8)
	struct Unknown FadeIn; // 0x258 (8)
	struct Unknown Image_Effect; // 0x260 (8)
	struct Unknown NewVar_1; // 0x268 (8)
	char IsFadeInOutEvent : 0; // 0x270 (1)
	float CurrentFade; // 0x274 (4)

	void SetMaterialParameter(float Opacity, float Speed, float Scale); // Function WB.WB.SetMaterialParameter(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void EndAniEvent(); // Function WB.WB.EndAniEvent(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void FadeOutEvent(); // Function WB.WB.FadeOutEvent(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Tick(struct Unknown MyGeometry, float InDeltaTime); // Function WB.WB.Tick(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Construct(); // Function WB.WB.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void FadeInEvent(); // Function WB.WB.FadeInEvent(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void AmplifierEffectTikcEvent(float DeltaTime); // Function WB.WB.AmplifierEffectTikcEvent(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_WB(int32_t EntryPoint); // Function WB.WB.ExecuteUbergraph_WB(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// Function WB.WB.Construct
inline void UWB::Construct() {
	static auto fn = UObject::FindObject<UFunction>("Function WB.WB.Construct");

	struct Construct_Params {
		
	}; Construct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function WB.WB.Tick
inline void UWB::Tick(struct Unknown MyGeometry, float InDeltaTime) {
	static auto fn = UObject::FindObject<UFunction>("Function WB.WB.Tick");

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

// Function WB.WB.ExecuteUbergraph_WB
inline void UWB::ExecuteUbergraph_WB(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function WB.WB.ExecuteUbergraph_WB");

	struct ExecuteUbergraph_WB_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_WB_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function WB.WB.SetMaterialParameter
inline void UWB::SetMaterialParameter(float Opacity, float Speed, float Scale) {
	static auto fn = UObject::FindObject<UFunction>("Function WB.WB.SetMaterialParameter");

	struct SetMaterialParameter_Params {
		float Opacity;
		float Speed;
		float Scale;
	}; SetMaterialParameter_Params Params;

	Params.Opacity = Opacity;
	Params.Speed = Speed;
	Params.Scale = Scale;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function WB.WB.EndAniEvent
inline void UWB::EndAniEvent() {
	static auto fn = UObject::FindObject<UFunction>("Function WB.WB.EndAniEvent");

	struct EndAniEvent_Params {
		
	}; EndAniEvent_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function WB.WB.FadeOutEvent
inline void UWB::FadeOutEvent() {
	static auto fn = UObject::FindObject<UFunction>("Function WB.WB.FadeOutEvent");

	struct FadeOutEvent_Params {
		
	}; FadeOutEvent_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function WB.WB.Tick
inline void UWB::Tick(struct Unknown MyGeometry, float InDeltaTime) {
	static auto fn = UObject::FindObject<UFunction>("Function WB.WB.Tick");

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

// Function WB.WB.Construct
inline void UWB::Construct() {
	static auto fn = UObject::FindObject<UFunction>("Function WB.WB.Construct");

	struct Construct_Params {
		
	}; Construct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function WB.WB.FadeInEvent
inline void UWB::FadeInEvent() {
	static auto fn = UObject::FindObject<UFunction>("Function WB.WB.FadeInEvent");

	struct FadeInEvent_Params {
		
	}; FadeInEvent_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function WB.WB.AmplifierEffectTikcEvent
inline void UWB::AmplifierEffectTikcEvent(float DeltaTime) {
	static auto fn = UObject::FindObject<UFunction>("Function WB.WB.AmplifierEffectTikcEvent");

	struct AmplifierEffectTikcEvent_Params {
		float DeltaTime;
	}; AmplifierEffectTikcEvent_Params Params;

	Params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function WB.WB.ExecuteUbergraph_WB
inline void UWB::ExecuteUbergraph_WB(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function WB.WB.ExecuteUbergraph_WB");

	struct ExecuteUbergraph_WB_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_WB_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

