// WidgetBlueprintGeneratedClass BP-CreateCharacterWidget_Web.BP-CreateCharacterWidget_Web_C
class UBP-CreateCharacterWidget_Web_C : public UBravoHotelCreateCharacterWidget {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x308 (8)
	struct UCoherentUIGTWidget CoherentUIGTWidget_90; // 0x310 (8)
	struct UUW-CustomizedCharacter_C UW-CustomizedCharacter; // 0x318 (8)
	enum class ESceneType CurrentSceneType; // 0x320 (1)

	void Construct(); // Function BP-CreateCharacterWidget_Web.BP-CreateCharacterWidget_Web_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function BP-CreateCharacterWidget_Web.BP-CreateCharacterWidget_Web_C.Tick(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void CustomEvent_1(enum class ESceneType SceneType); // Function BP-CreateCharacterWidget_Web.BP-CreateCharacterWidget_Web_C.CustomEvent_1(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void ExecuteUbergraph_BP-CreateCharacterWidget_Web(int32_t EntryPoint); // Function BP-CreateCharacterWidget_Web.BP-CreateCharacterWidget_Web_C.ExecuteUbergraph_BP-CreateCharacterWidget_Web(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
};

// Function BP-CreateCharacterWidget_Web.BP-CreateCharacterWidget_Web_C.Construct
inline void UBP-CreateCharacterWidget_Web_C::Construct() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-CreateCharacterWidget_Web.BP-CreateCharacterWidget_Web_C.Construct");

	struct Construct_Params {
		
	}; Construct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-CreateCharacterWidget_Web.BP-CreateCharacterWidget_Web_C.Tick
inline void UBP-CreateCharacterWidget_Web_C::Tick(struct FGeometry MyGeometry, float InDeltaTime) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-CreateCharacterWidget_Web.BP-CreateCharacterWidget_Web_C.Tick");

	struct Tick_Params {
		struct FGeometry MyGeometry;
		float InDeltaTime;
	}; Tick_Params Params;

	Params.MyGeometry = MyGeometry;
	Params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-CreateCharacterWidget_Web.BP-CreateCharacterWidget_Web_C.CustomEvent_1
inline void UBP-CreateCharacterWidget_Web_C::CustomEvent_1(enum class ESceneType SceneType) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-CreateCharacterWidget_Web.BP-CreateCharacterWidget_Web_C.CustomEvent_1");

	struct CustomEvent_1_Params {
		enum class ESceneType SceneType;
	}; CustomEvent_1_Params Params;

	Params.SceneType = SceneType;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-CreateCharacterWidget_Web.BP-CreateCharacterWidget_Web_C.ExecuteUbergraph_BP-CreateCharacterWidget_Web
inline void UBP-CreateCharacterWidget_Web_C::ExecuteUbergraph_BP-CreateCharacterWidget_Web(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-CreateCharacterWidget_Web.BP-CreateCharacterWidget_Web_C.ExecuteUbergraph_BP-CreateCharacterWidget_Web");

	struct ExecuteUbergraph_BP-CreateCharacterWidget_Web_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_BP-CreateCharacterWidget_Web_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

