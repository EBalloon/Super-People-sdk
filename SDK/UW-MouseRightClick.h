// WidgetBlueprintGeneratedClass UW-MouseRightClick.UW-MouseRightClick_C
class UUW-MouseRightClick_C : public UUserWidget {

public:

	struct Unknown Ani_MouseRight; // 0x248 (8)
	struct Unknown Image; // 0x250 (8)
	struct Unknown Image_2; // 0x258 (8)
	struct Unknown Image_292; // 0x260 (8)
	struct Unknown Image_503; // 0x268 (8)

	void HideMouse(); // Function UW-MouseRightClick.UW-MouseRightClick_C.HideMouse(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void ShowMouse(); // Function UW-MouseRightClick.UW-MouseRightClick_C.ShowMouse(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
};

// Function UW-MouseRightClick.UW-MouseRightClick_C.HideMouse
inline void UUW-MouseRightClick_C::HideMouse() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MouseRightClick.UW-MouseRightClick_C.HideMouse");

	struct HideMouse_Params {
		
	}; HideMouse_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MouseRightClick.UW-MouseRightClick_C.ShowMouse
inline void UUW-MouseRightClick_C::ShowMouse() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MouseRightClick.UW-MouseRightClick_C.ShowMouse");

	struct ShowMouse_Params {
		
	}; ShowMouse_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

