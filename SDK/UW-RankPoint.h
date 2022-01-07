// WidgetBlueprintGeneratedClass UW-RankPoint.UW-RankPoint_C
class UUW-RankPoint_C : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown HorizontalBox_Next; // 0x250 (8)
	struct Unknown ProgressBar_Current; // 0x258 (8)
	struct Unknown ProgressBar_Down; // 0x260 (8)
	struct Unknown ProgressBar_Up; // 0x268 (8)
	struct Unknown TextBlock_Current; // 0x270 (8)
	struct Unknown TextBlock_Max; // 0x278 (8)
	struct Unknown TextBlock_Next; // 0x280 (8)
	char EnableUpdate : 0; // 0x288 (1)
	float CurTime; // 0x28C (4)
	float ShowTime; // 0x290 (4)
	float EndPoint; // 0x294 (4)
	float ChangeValue; // 0x298 (4)
	float StartPoint; // 0x29C (4)
	float Min; // 0x2A0 (4)
	float MAX; // 0x2A4 (4)
	char IsUPState : 0; // 0x2A8 (1)
	struct FMulticastInlineDelegate Dispatcher_ProgressBarDone; // 0x2B0 (16)

	void SetData(float StartPoint, float EndPoint, float Min, float MAX, float ShowTime, char Play); // Function UW-RankPoint.UW-RankPoint_C.SetData(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void Tick(struct Unknown MyGeometry, float InDeltaTime); // Function UW-RankPoint.UW-RankPoint_C.Tick(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void ExecuteUbergraph_UW-RankPoint(int32_t EntryPoint); // Function UW-RankPoint.UW-RankPoint_C.ExecuteUbergraph_UW-RankPoint(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void Dispatcher_ProgressBarDone__DelegateSignature(); // Function UW-RankPoint.UW-RankPoint_C.Dispatcher_ProgressBarDone__DelegateSignature(Public|Delegate|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
};

// Function UW-RankPoint.UW-RankPoint_C.SetData
inline void UUW-RankPoint_C::SetData(float StartPoint, float EndPoint, float Min, float MAX, float ShowTime, char Play) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-RankPoint.UW-RankPoint_C.SetData");

	struct SetData_Params {
		float StartPoint;
		float EndPoint;
		float Min;
		float MAX;
		float ShowTime;
		char Play;
	}; SetData_Params Params;

	Params.StartPoint = StartPoint;
	Params.EndPoint = EndPoint;
	Params.Min = Min;
	Params.MAX = MAX;
	Params.ShowTime = ShowTime;
	Params.Play = Play;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-RankPoint.UW-RankPoint_C.Tick
inline void UUW-RankPoint_C::Tick(struct Unknown MyGeometry, float InDeltaTime) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-RankPoint.UW-RankPoint_C.Tick");

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

// Function UW-RankPoint.UW-RankPoint_C.ExecuteUbergraph_UW-RankPoint
inline void UUW-RankPoint_C::ExecuteUbergraph_UW-RankPoint(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-RankPoint.UW-RankPoint_C.ExecuteUbergraph_UW-RankPoint");

	struct ExecuteUbergraph_UW-RankPoint_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_UW-RankPoint_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-RankPoint.UW-RankPoint_C.Dispatcher_ProgressBarDone__DelegateSignature
inline void UUW-RankPoint_C::Dispatcher_ProgressBarDone__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-RankPoint.UW-RankPoint_C.Dispatcher_ProgressBarDone__DelegateSignature");

	struct Dispatcher_ProgressBarDone__DelegateSignature_Params {
		
	}; Dispatcher_ProgressBarDone__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

