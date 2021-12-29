// WidgetBlueprintGeneratedClass UW-Volume.UW-Volume_C
class UUW-Volume_C : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown Img_Voice; // 0x250 (8)
	struct Unknown Img_VoiceX; // 0x258 (8)
	struct Unknown SizeBox_2; // 0x260 (8)
	struct Unknown TextBlock; // 0x268 (8)
	struct Unknown WidgetSwitcher_LogOut; // 0x270 (8)
	struct Unknown Timer; // 0x278 (8)

	void Construct(); // Function UW-Volume.UW-Volume_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void 鉹@t元_1(float VolumeOnOff, float Volume); // Function UW-Volume.UW-Volume_C.鉹@t元_1(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void Destruct(); // Function UW-Volume.UW-Volume_C.Destruct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void 鉹@t元_2(); // Function UW-Volume.UW-Volume_C.鉹@t元_2(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void ExecuteUbergraph_UW-Volume(int32_t EntryPoint); // Function UW-Volume.UW-Volume_C.ExecuteUbergraph_UW-Volume(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
};

// Function UW-Volume.UW-Volume_C.Construct
inline void UUW-Volume_C::Construct() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Volume.UW-Volume_C.Construct");

	struct Construct_Params {
		
	}; Construct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Volume.UW-Volume_C.鉹@t元_1
inline void UUW-Volume_C::鉹@t元_1(float VolumeOnOff, float Volume) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Volume.UW-Volume_C.鉹@t元_1");

	struct 鉹@t元_1_Params {
		float VolumeOnOff;
		float Volume;
	}; 鉹@t元_1_Params Params;

	Params.VolumeOnOff = VolumeOnOff;
	Params.Volume = Volume;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Volume.UW-Volume_C.Destruct
inline void UUW-Volume_C::Destruct() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Volume.UW-Volume_C.Destruct");

	struct Destruct_Params {
		
	}; Destruct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Volume.UW-Volume_C.鉹@t元_2
inline void UUW-Volume_C::鉹@t元_2() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Volume.UW-Volume_C.鉹@t元_2");

	struct 鉹@t元_2_Params {
		
	}; 鉹@t元_2_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Volume.UW-Volume_C.ExecuteUbergraph_UW-Volume
inline void UUW-Volume_C::ExecuteUbergraph_UW-Volume(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Volume.UW-Volume_C.ExecuteUbergraph_UW-Volume");

	struct ExecuteUbergraph_UW-Volume_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_UW-Volume_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

