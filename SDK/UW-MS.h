// WidgetBlueprintGeneratedClass UW-MS.UW-MS_C
class UUW-MS_C : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown Anim_MS; // 0x250 (8)
	struct Unknown Image_78; // 0x258 (8)
	struct Unknown PingImage; // 0x260 (8)

	void UpdatePing(); // Function UW-MS.UW-MS_C.UpdatePing(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void Construct(); // Function UW-MS.UW-MS_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void 鉹@t元_1(); // Function UW-MS.UW-MS_C.鉹@t元_1(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void ExecuteUbergraph_UW-MS(int32_t EntryPoint); // Function UW-MS.UW-MS_C.ExecuteUbergraph_UW-MS(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
};

// Function UW-MS.UW-MS_C.UpdatePing
inline void UUW-MS_C::UpdatePing() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MS.UW-MS_C.UpdatePing");

	struct UpdatePing_Params {
		
	}; UpdatePing_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MS.UW-MS_C.Construct
inline void UUW-MS_C::Construct() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MS.UW-MS_C.Construct");

	struct Construct_Params {
		
	}; Construct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MS.UW-MS_C.鉹@t元_1
inline void UUW-MS_C::鉹@t元_1() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MS.UW-MS_C.鉹@t元_1");

	struct 鉹@t元_1_Params {
		
	}; 鉹@t元_1_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MS.UW-MS_C.ExecuteUbergraph_UW-MS
inline void UUW-MS_C::ExecuteUbergraph_UW-MS(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MS.UW-MS_C.ExecuteUbergraph_UW-MS");

	struct ExecuteUbergraph_UW-MS_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_UW-MS_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

