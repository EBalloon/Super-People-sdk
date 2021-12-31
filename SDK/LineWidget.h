// WidgetBlueprintGeneratedClass LineWidget.LineWidget_C
class ULineWidget_C : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown Image_51; // 0x250 (8)
	float InitSize; // 0x258 (4)

	void Construct(); // Function LineWidget.LineWidget_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Set Color(int32_t IconIndex); // Function LineWidget.LineWidget_C.Set Color(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void SetScale(float Scale); // Function LineWidget.LineWidget_C.SetScale(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void ExecuteUbergraph_LineWidget(int32_t EntryPoint); // Function LineWidget.LineWidget_C.ExecuteUbergraph_LineWidget(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
};

// Function LineWidget.LineWidget_C.Construct
inline void ULineWidget_C::Construct() {
	static auto fn = UObject::FindObject<UFunction>("Function LineWidget.LineWidget_C.Construct");

	struct Construct_Params {
		
	}; Construct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function LineWidget.LineWidget_C.Set Color
inline void ULineWidget_C::Set Color(int32_t IconIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function LineWidget.LineWidget_C.Set Color");

	struct Set Color_Params {
		int32_t IconIndex;
	}; Set Color_Params Params;

	Params.IconIndex = IconIndex;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function LineWidget.LineWidget_C.SetScale
inline void ULineWidget_C::SetScale(float Scale) {
	static auto fn = UObject::FindObject<UFunction>("Function LineWidget.LineWidget_C.SetScale");

	struct SetScale_Params {
		float Scale;
	}; SetScale_Params Params;

	Params.Scale = Scale;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function LineWidget.LineWidget_C.ExecuteUbergraph_LineWidget
inline void ULineWidget_C::ExecuteUbergraph_LineWidget(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function LineWidget.LineWidget_C.ExecuteUbergraph_LineWidget");

	struct ExecuteUbergraph_LineWidget_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_LineWidget_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

