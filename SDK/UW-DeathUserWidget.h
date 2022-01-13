// WidgetBlueprintGeneratedClass UW-DeathUserWidget.UW-DeathUserWidget_C
class UUW-DeathUserWidget_C : public UUserWidget {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248 (8)
	struct UWidgetAnimation EnemySkull; // 0x250 (8)
	struct UImage Image_436; // 0x258 (8)
	struct UActor Pawn; // 0x260 (8)

	void SetDiedPawnInfo(struct FKillBroadcastUIInfo BroadCastInfo); // Function UW-DeathUserWidget.UW-DeathUserWidget_C.SetDiedPawnInfo(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UW-DeathUserWidget.UW-DeathUserWidget_C.Tick(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void StartAnim(); // Function UW-DeathUserWidget.UW-DeathUserWidget_C.StartAnim(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void StartSetPosition(); // Function UW-DeathUserWidget.UW-DeathUserWidget_C.StartSetPosition(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void ExecuteUbergraph_UW-DeathUserWidget(int32_t EntryPoint); // Function UW-DeathUserWidget.UW-DeathUserWidget_C.ExecuteUbergraph_UW-DeathUserWidget(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
};

// Function UW-DeathUserWidget.UW-DeathUserWidget_C.SetDiedPawnInfo
inline void UUW-DeathUserWidget_C::SetDiedPawnInfo(struct FKillBroadcastUIInfo BroadCastInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-DeathUserWidget.UW-DeathUserWidget_C.SetDiedPawnInfo");

	struct SetDiedPawnInfo_Params {
		struct FKillBroadcastUIInfo BroadCastInfo;
	}; SetDiedPawnInfo_Params Params;

	Params.BroadCastInfo = BroadCastInfo;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-DeathUserWidget.UW-DeathUserWidget_C.Tick
inline void UUW-DeathUserWidget_C::Tick(struct FGeometry MyGeometry, float InDeltaTime) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-DeathUserWidget.UW-DeathUserWidget_C.Tick");

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

