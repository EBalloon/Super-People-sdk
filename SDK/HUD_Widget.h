// WidgetBlueprintGeneratedClass HUD_Widget.HUD_Widget_C
class UHUD_Widget_C : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown ChatWidget; // 0x250 (8)
	struct Unknown Chat System; // 0x258 (8)

	void ShowHUDToggle(char ShowToggle); // Function HUD_Widget.HUD_Widget_C.ShowHUDToggle(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void Construct(); // Function HUD_Widget.HUD_Widget_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void ExecuteUbergraph_HUD_Widget(int32_t EntryPoint); // Function HUD_Widget.HUD_Widget_C.ExecuteUbergraph_HUD_Widget(Final|UbergraphFunction) // <Game_BE.exe+0x2B812B0>
};

// Function HUD_Widget.HUD_Widget_C.ShowHUDToggle
inline void UHUD_Widget_C::ShowHUDToggle(char ShowToggle) {
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Widget.HUD_Widget_C.ShowHUDToggle");

	struct ShowHUDToggle_Params {
		char ShowToggle;
	}; ShowHUDToggle_Params Params;

	Params.ShowToggle = ShowToggle;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function HUD_Widget.HUD_Widget_C.Construct
inline void UHUD_Widget_C::Construct() {
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Widget.HUD_Widget_C.Construct");

	struct Construct_Params {
		
	}; Construct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function HUD_Widget.HUD_Widget_C.ExecuteUbergraph_HUD_Widget
inline void UHUD_Widget_C::ExecuteUbergraph_HUD_Widget(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Widget.HUD_Widget_C.ExecuteUbergraph_HUD_Widget");

	struct ExecuteUbergraph_HUD_Widget_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_HUD_Widget_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

