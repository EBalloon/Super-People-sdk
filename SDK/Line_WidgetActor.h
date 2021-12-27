// BlueprintGeneratedClass Line_WidgetActor.Line_WidgetActor_C
class ALine_WidgetActor_C : public UActor {

public:

	struct Unknown UberGraphFrame; // 0x310 (8)
	struct Unknown Widget1; // 0x318 (8)
	struct Unknown DefaultSceneRoot; // 0x320 (8)

	void SetLine(char Show, int32_t IconIndex); // Function Line_WidgetActor.Line_WidgetActor_C.SetLine(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetScale(float Scale); // Function Line_WidgetActor.Line_WidgetActor_C.SetScale(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_Line_WidgetActor(int32_t EntryPoint); // Function Line_WidgetActor.Line_WidgetActor_C.ExecuteUbergraph_Line_WidgetActor(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// Function Line_WidgetActor.Line_WidgetActor_C.SetLine
inline void ALine_WidgetActor_C::SetLine(char Show, int32_t IconIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function Line_WidgetActor.Line_WidgetActor_C.SetLine");

	struct SetLine_Params {
		char Show;
		int32_t IconIndex;
	}; SetLine_Params Params;

	Params.Show = Show;
	Params.IconIndex = IconIndex;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Line_WidgetActor.Line_WidgetActor_C.SetScale
inline void ALine_WidgetActor_C::SetScale(float Scale) {
	static auto fn = UObject::FindObject<UFunction>("Function Line_WidgetActor.Line_WidgetActor_C.SetScale");

	struct SetScale_Params {
		float Scale;
	}; SetScale_Params Params;

	Params.Scale = Scale;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Line_WidgetActor.Line_WidgetActor_C.ExecuteUbergraph_Line_WidgetActor
inline void ALine_WidgetActor_C::ExecuteUbergraph_Line_WidgetActor(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function Line_WidgetActor.Line_WidgetActor_C.ExecuteUbergraph_Line_WidgetActor");

	struct ExecuteUbergraph_Line_WidgetActor_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_Line_WidgetActor_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

