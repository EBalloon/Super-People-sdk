// WidgetBlueprintGeneratedClass UW-CompanyLogo.UW-CompanyLogo_C
class UUW-CompanyLogo_C : public UUserWidget {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248 (8)
	struct UWidgetAnimation FadeIn; // 0x250 (8)
	struct UImage Image; // 0x258 (8)
	struct UImage Image_2; // 0x260 (8)
	struct UImage Image_69; // 0x268 (8)
	char NextScene : 0; // 0x270 (1)

	void Destory(); // Function UW-CompanyLogo.UW-CompanyLogo_C.Destory(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void MoveNextScene(); // Function UW-CompanyLogo.UW-CompanyLogo_C.MoveNextScene(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void Construct(); // Function UW-CompanyLogo.UW-CompanyLogo_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void 鉹@t元_1(); // Function UW-CompanyLogo.UW-CompanyLogo_C.鉹@t元_1(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void ExecuteUbergraph_UW-CompanyLogo(int32_t EntryPoint); // Function UW-CompanyLogo.UW-CompanyLogo_C.ExecuteUbergraph_UW-CompanyLogo(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
};

// Function UW-CompanyLogo.UW-CompanyLogo_C.Destory
inline void UUW-CompanyLogo_C::Destory() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-CompanyLogo.UW-CompanyLogo_C.Destory");

	struct Destory_Params {
		
	}; Destory_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-CompanyLogo.UW-CompanyLogo_C.MoveNextScene
inline void UUW-CompanyLogo_C::MoveNextScene() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-CompanyLogo.UW-CompanyLogo_C.MoveNextScene");

	struct MoveNextScene_Params {
		
	}; MoveNextScene_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-CompanyLogo.UW-CompanyLogo_C.Construct
inline void UUW-CompanyLogo_C::Construct() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-CompanyLogo.UW-CompanyLogo_C.Construct");

	struct Construct_Params {
		
	}; Construct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-CompanyLogo.UW-CompanyLogo_C.鉹@t元_1
inline void UUW-CompanyLogo_C::鉹@t元_1() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-CompanyLogo.UW-CompanyLogo_C.鉹@t元_1");

	struct 鉹@t元_1_Params {
		
	}; 鉹@t元_1_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-CompanyLogo.UW-CompanyLogo_C.ExecuteUbergraph_UW-CompanyLogo
inline void UUW-CompanyLogo_C::ExecuteUbergraph_UW-CompanyLogo(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-CompanyLogo.UW-CompanyLogo_C.ExecuteUbergraph_UW-CompanyLogo");

	struct ExecuteUbergraph_UW-CompanyLogo_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_UW-CompanyLogo_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

