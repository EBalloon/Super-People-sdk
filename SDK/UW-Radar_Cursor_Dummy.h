// WidgetBlueprintGeneratedClass UW-Radar_Cursor_Dummy.UW-Radar_Cursor_Dummy_C
class UUW-Radar_Cursor_Dummy_C : public UUserWidget {

public:

	struct UImage Image_47; // 0x248 (8)

	void UpdateCursorVisibility(); // Function UW-Radar_Cursor_Dummy.UW-Radar_Cursor_Dummy_C.UpdateCursorVisibility(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
};

// Function UW-Radar_Cursor_Dummy.UW-Radar_Cursor_Dummy_C.UpdateCursorVisibility
inline void UUW-Radar_Cursor_Dummy_C::UpdateCursorVisibility() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Radar_Cursor_Dummy.UW-Radar_Cursor_Dummy_C.UpdateCursorVisibility");

	struct UpdateCursorVisibility_Params {
		
	}; UpdateCursorVisibility_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

