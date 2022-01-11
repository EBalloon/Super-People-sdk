// WidgetBlueprintGeneratedClass UW-HittedDamageWidget.UW-HittedDamageWidget_C
class UUW-HittedDamageWidget_C : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown FadeOut; // 0x250 (8)
	struct Unknown HitImage; // 0x258 (8)
	struct Unknown SizeBox_1; // 0x260 (8)
	struct Unknown InstigatorLocation; // 0x268 (12)
	struct Unknown InstigatorCharacter; // 0x278 (8)

	void Hide(); // Function UW-HittedDamageWidget.UW-HittedDamageWidget_C.Hide(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void Construct(); // Function UW-HittedDamageWidget.UW-HittedDamageWidget_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void Tick(struct Unknown MyGeometry, float InDeltaTime); // Function UW-HittedDamageWidget.UW-HittedDamageWidget_C.Tick(BlueprintCosmetic|Event|Public|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void ExecuteUbergraph_UW-HittedDamageWidget(int32_t EntryPoint); // Function UW-HittedDamageWidget.UW-HittedDamageWidget_C.ExecuteUbergraph_UW-HittedDamageWidget(Final|UbergraphFunction|HasDefaults) // <Game_BE.exe+0x2B80160>
};

// Function UW-HittedDamageWidget.UW-HittedDamageWidget_C.Hide
inline void UUW-HittedDamageWidget_C::Hide() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-HittedDamageWidget.UW-HittedDamageWidget_C.Hide");

	struct Hide_Params {
		
	}; Hide_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-HittedDamageWidget.UW-HittedDamageWidget_C.Construct
inline void UUW-HittedDamageWidget_C::Construct() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-HittedDamageWidget.UW-HittedDamageWidget_C.Construct");

	struct Construct_Params {
		
	}; Construct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-HittedDamageWidget.UW-HittedDamageWidget_C.Tick
inline void UUW-HittedDamageWidget_C::Tick(struct Unknown MyGeometry, float InDeltaTime) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-HittedDamageWidget.UW-HittedDamageWidget_C.Tick");

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

// Function UW-HittedDamageWidget.UW-HittedDamageWidget_C.ExecuteUbergraph_UW-HittedDamageWidget
inline void UUW-HittedDamageWidget_C::ExecuteUbergraph_UW-HittedDamageWidget(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-HittedDamageWidget.UW-HittedDamageWidget_C.ExecuteUbergraph_UW-HittedDamageWidget");

	struct ExecuteUbergraph_UW-HittedDamageWidget_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_UW-HittedDamageWidget_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

