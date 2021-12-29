// WidgetBlueprintGeneratedClass UW-CompassRulerWidget.UW-CompassRulerWidget_C
class UUW-CompassRulerWidget_C : public UUserWidget {

public:

	struct Unknown Image_2; // 0x248 (8)
	struct Unknown InvalidationBox_1; // 0x250 (8)
	struct Unknown Switcher; // 0x258 (8)
	float OwnDirection; // 0x260 (4)

	void Initialize(float Direction); // Function UW-CompassRulerWidget.UW-CompassRulerWidget_C.Initialize(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
};

// Function UW-CompassRulerWidget.UW-CompassRulerWidget_C.Initialize
inline void UUW-CompassRulerWidget_C::Initialize(float Direction) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-CompassRulerWidget.UW-CompassRulerWidget_C.Initialize");

	struct Initialize_Params {
		float Direction;
	}; Initialize_Params Params;

	Params.Direction = Direction;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

