// WidgetBlueprintGeneratedClass UW-Radar_Cursor.UW-Radar_Cursor_C
class UUW-Radar_Cursor_C : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown Escape_Cursor_Reset; // 0x250 (8)
	struct Unknown MiniNuke_Cursor_Reset; // 0x258 (8)
	struct Unknown Escape_Cursor; // 0x260 (8)
	struct Unknown MiniNuke_Cursor; // 0x268 (8)
	struct Unknown Image_390; // 0x270 (8)
	struct Unknown Image_519; // 0x278 (8)
	struct Unknown Img_CursorNuclear; // 0x280 (8)
	struct Unknown SizeBox_Nuclear; // 0x288 (8)
	struct Unknown WidgetSwitcher_1; // 0x290 (8)
	struct Unknown Anim_MouseClicked; // 0x298 (8)
	struct Unknown DummyWidgetRef; // 0x2A0 (8)

	void PlayClickSound(); // Function UW-Radar_Cursor.UW-Radar_Cursor_C.PlayClickSound(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void SetCursorSize(); // Function UW-Radar_Cursor.UW-Radar_Cursor_C.SetCursorSize(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void SetCursorByBuffEventType(enum class Unknow BuffEventType); // Function UW-Radar_Cursor.UW-Radar_Cursor_C.SetCursorByBuffEventType(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void OnClicked_Event_1(struct Unknown TouchedActor, struct Unknown ButtonPressed); // Function UW-Radar_Cursor.UW-Radar_Cursor_C.OnClicked_Event_1(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void Construct(); // Function UW-Radar_Cursor.UW-Radar_Cursor_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void PlayMouseCursorAnimation(); // Function UW-Radar_Cursor.UW-Radar_Cursor_C.PlayMouseCursorAnimation(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void Tick(struct Unknown MyGeometry, float InDeltaTime); // Function UW-Radar_Cursor.UW-Radar_Cursor_C.Tick(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void UpdateCursorPosition(); // Function UW-Radar_Cursor.UW-Radar_Cursor_C.UpdateCursorPosition(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void ShowCursor(); // Function UW-Radar_Cursor.UW-Radar_Cursor_C.ShowCursor(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void HideCursor(); // Function UW-Radar_Cursor.UW-Radar_Cursor_C.HideCursor(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void ExecuteUbergraph_UW-Radar_Cursor(int32_t EntryPoint); // Function UW-Radar_Cursor.UW-Radar_Cursor_C.ExecuteUbergraph_UW-Radar_Cursor(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
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
inline void UUW-Radar_Cursor_C::SetCursorByBuffEventType(enum class Unknow BuffEventType) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Radar_Cursor.UW-Radar_Cursor_C.SetCursorByBuffEventType");

	struct SetCursorByBuffEventType_Params {
		enum class Unknow BuffEventType;
	}; SetCursorByBuffEventType_Params Params;

	Params.BuffEventType = BuffEventType;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Radar_Cursor.UW-Radar_Cursor_C.OnClicked_Event_1
inline void UUW-Radar_Cursor_C::OnClicked_Event_1(struct Unknown TouchedActor, struct Unknown ButtonPressed) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Radar_Cursor.UW-Radar_Cursor_C.OnClicked_Event_1");

	struct OnClicked_Event_1_Params {
		struct Unknown TouchedActor;
		struct Unknown ButtonPressed;
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
inline void UUW-Radar_Cursor_C::Tick(struct Unknown MyGeometry, float InDeltaTime) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Radar_Cursor.UW-Radar_Cursor_C.Tick");

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

