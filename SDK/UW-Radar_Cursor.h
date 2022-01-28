// WidgetBlueprintGeneratedClass UW-Radar_Cursor.UW-Radar_Cursor_C
class UUW-Radar_Cursor_C : public UUserWidget {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248 (8)
	struct UWidgetAnimation Escape_Cursor_Reset; // 0x250 (8)
	struct UWidgetAnimation MiniNuke_Cursor_Reset; // 0x258 (8)
	struct UWidgetAnimation Escape_Cursor; // 0x260 (8)
	struct UWidgetAnimation MiniNuke_Cursor; // 0x268 (8)
	struct UImage Image_390; // 0x270 (8)
	struct UImage Image_519; // 0x278 (8)
	struct UImage Img_CursorNuclear; // 0x280 (8)
	struct USizeBox SizeBox_Nuclear; // 0x288 (8)
	struct UWidgetSwitcher WidgetSwitcher_1; // 0x290 (8)
	struct UWidgetAnimation Anim_MouseClicked; // 0x298 (8)
	struct UUW-Radar_Cursor_Dummy_C DummyWidgetRef; // 0x2A0 (8)

	void PlayClickSound(); // Function UW-Radar_Cursor.UW-Radar_Cursor_C.PlayClickSound(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void SetCursorSize(); // Function UW-Radar_Cursor.UW-Radar_Cursor_C.SetCursorSize(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void SetCursorByBuffEventType(enum class EBuffEventType BuffEventType); // Function UW-Radar_Cursor.UW-Radar_Cursor_C.SetCursorByBuffEventType(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void OnClicked_Event_1(struct UActor TouchedActor, struct FKey ButtonPressed); // Function UW-Radar_Cursor.UW-Radar_Cursor_C.OnClicked_Event_1(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void Construct(); // Function UW-Radar_Cursor.UW-Radar_Cursor_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void PlayMouseCursorAnimation(); // Function UW-Radar_Cursor.UW-Radar_Cursor_C.PlayMouseCursorAnimation(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UW-Radar_Cursor.UW-Radar_Cursor_C.Tick(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void UpdateCursorPosition(); // Function UW-Radar_Cursor.UW-Radar_Cursor_C.UpdateCursorPosition(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void ShowCursor(); // Function UW-Radar_Cursor.UW-Radar_Cursor_C.ShowCursor(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void HideCursor(); // Function UW-Radar_Cursor.UW-Radar_Cursor_C.HideCursor(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void ExecuteUbergraph_UW-Radar_Cursor(int32_t EntryPoint); // Function UW-Radar_Cursor.UW-Radar_Cursor_C.ExecuteUbergraph_UW-Radar_Cursor(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
};

// Function UW-Radar_Cursor.UW-Radar_Cursor_C.PlayClickSound
inline void UUW-Radar_Cursor_C::PlayClickSound() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Radar_Cursor.UW-Radar_Cursor_C.PlayClickSound");

	struct PlayClickSound_Params {
		
	}; PlayClickSound_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Radar_Cursor.UW-Radar_Cursor_C.SetCursorSize
inline void UUW-Radar_Cursor_C::SetCursorSize() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Radar_Cursor.UW-Radar_Cursor_C.SetCursorSize");

	struct SetCursorSize_Params {
		
	}; SetCursorSize_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Radar_Cursor.UW-Radar_Cursor_C.SetCursorByBuffEventType
inline void UUW-Radar_Cursor_C::SetCursorByBuffEventType(enum class EBuffEventType BuffEventType) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Radar_Cursor.UW-Radar_Cursor_C.SetCursorByBuffEventType");

	struct SetCursorByBuffEventType_Params {
		enum class EBuffEventType BuffEventType;
	}; SetCursorByBuffEventType_Params Params;

	Params.BuffEventType = BuffEventType;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Radar_Cursor.UW-Radar_Cursor_C.OnClicked_Event_1
inline void UUW-Radar_Cursor_C::OnClicked_Event_1(struct UActor TouchedActor, struct FKey ButtonPressed) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Radar_Cursor.UW-Radar_Cursor_C.OnClicked_Event_1");

	struct OnClicked_Event_1_Params {
		struct UActor TouchedActor;
		struct FKey ButtonPressed;
	}; OnClicked_Event_1_Params Params;

	Params.TouchedActor = TouchedActor;
	Params.ButtonPressed = ButtonPressed;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Radar_Cursor.UW-Radar_Cursor_C.Construct
inline void UUW-Radar_Cursor_C::Construct() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Radar_Cursor.UW-Radar_Cursor_C.Construct");

	struct Construct_Params {
		
	}; Construct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Radar_Cursor.UW-Radar_Cursor_C.PlayMouseCursorAnimation
inline void UUW-Radar_Cursor_C::PlayMouseCursorAnimation() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Radar_Cursor.UW-Radar_Cursor_C.PlayMouseCursorAnimation");

	struct PlayMouseCursorAnimation_Params {
		
	}; PlayMouseCursorAnimation_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Radar_Cursor.UW-Radar_Cursor_C.Tick
inline void UUW-Radar_Cursor_C::Tick(struct FGeometry MyGeometry, float InDeltaTime) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Radar_Cursor.UW-Radar_Cursor_C.Tick");

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

// Function UW-Radar_Cursor.UW-Radar_Cursor_C.UpdateCursorPosition
inline void UUW-Radar_Cursor_C::UpdateCursorPosition() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Radar_Cursor.UW-Radar_Cursor_C.UpdateCursorPosition");

	struct UpdateCursorPosition_Params {
		
	}; UpdateCursorPosition_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Radar_Cursor.UW-Radar_Cursor_C.ShowCursor
inline void UUW-Radar_Cursor_C::ShowCursor() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Radar_Cursor.UW-Radar_Cursor_C.ShowCursor");

	struct ShowCursor_Params {
		
	}; ShowCursor_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Radar_Cursor.UW-Radar_Cursor_C.HideCursor
inline void UUW-Radar_Cursor_C::HideCursor() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Radar_Cursor.UW-Radar_Cursor_C.HideCursor");

	struct HideCursor_Params {
		
	}; HideCursor_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Radar_Cursor.UW-Radar_Cursor_C.ExecuteUbergraph_UW-Radar_Cursor
inline void UUW-Radar_Cursor_C::ExecuteUbergraph_UW-Radar_Cursor(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Radar_Cursor.UW-Radar_Cursor_C.ExecuteUbergraph_UW-Radar_Cursor");

	struct ExecuteUbergraph_UW-Radar_Cursor_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_UW-Radar_Cursor_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

