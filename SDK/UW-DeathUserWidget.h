// WidgetBlueprintGeneratedClass UW-DeathUserWidget.UW-DeathUserWidget_C
class UUW-DeathUserWidget_C : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown EnemySkull; // 0x250 (8)
	struct Unknown Image_436; // 0x258 (8)
	struct Unknown Pawn; // 0x260 (8)

	void SetDiedPawnInfo(struct Unknown BroadCastInfo); // Function UW-DeathUserWidget.UW-DeathUserWidget_C.SetDiedPawnInfo(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void Tick(struct Unknown MyGeometry, float InDeltaTime); // Function UW-DeathUserWidget.UW-DeathUserWidget_C.Tick(BlueprintCosmetic|Event|Public|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void StartAnim(); // Function UW-DeathUserWidget.UW-DeathUserWidget_C.StartAnim(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void StartSetPosition(); // Function UW-DeathUserWidget.UW-DeathUserWidget_C.StartSetPosition(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void ExecuteUbergraph_UW-DeathUserWidget(int32_t EntryPoint); // Function UW-DeathUserWidget.UW-DeathUserWidget_C.ExecuteUbergraph_UW-DeathUserWidget(Final|UbergraphFunction|HasDefaults) // <Game_BE.exe+0x2B80160>
};

// Function UW-DeathUserWidget.UW-DeathUserWidget_C.SetDiedPawnInfo
inline void UUW-DeathUserWidget_C::SetDiedPawnInfo(struct Unknown BroadCastInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-DeathUserWidget.UW-DeathUserWidget_C.SetDiedPawnInfo");

	struct SetDiedPawnInfo_Params {
		struct Unknown BroadCastInfo;
	}; SetDiedPawnInfo_Params Params;

	Params.BroadCastInfo = BroadCastInfo;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-DeathUserWidget.UW-DeathUserWidget_C.Tick
inline void UUW-DeathUserWidget_C::Tick(struct Unknown MyGeometry, float InDeltaTime) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-DeathUserWidget.UW-DeathUserWidget_C.Tick");

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

// Function UW-DeathUserWidget.UW-DeathUserWidget_C.StartAnim
inline void UUW-DeathUserWidget_C::StartAnim() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-DeathUserWidget.UW-DeathUserWidget_C.StartAnim");

	struct StartAnim_Params {
		
	}; StartAnim_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-DeathUserWidget.UW-DeathUserWidget_C.StartSetPosition
inline void UUW-DeathUserWidget_C::StartSetPosition() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-DeathUserWidget.UW-DeathUserWidget_C.StartSetPosition");

	struct StartSetPosition_Params {
		
	}; StartSetPosition_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-DeathUserWidget.UW-DeathUserWidget_C.ExecuteUbergraph_UW-DeathUserWidget
inline void UUW-DeathUserWidget_C::ExecuteUbergraph_UW-DeathUserWidget(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-DeathUserWidget.UW-DeathUserWidget_C.ExecuteUbergraph_UW-DeathUserWidget");

	struct ExecuteUbergraph_UW-DeathUserWidget_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_UW-DeathUserWidget_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

