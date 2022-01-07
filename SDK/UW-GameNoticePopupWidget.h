// WidgetBlueprintGeneratedClass UW-GameNoticePopupWidget.UW-GameNoticePopupWidget_C
class UUW-GameNoticePopupWidget_C : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown Image_2; // 0x250 (8)
	struct Unknown Notice; // 0x258 (8)
	struct Unknown WidgetSwitcher_1; // 0x260 (8)

	void SetMessage(struct FText Str); // Function UW-GameNoticePopupWidget.UW-GameNoticePopupWidget_C.SetMessage(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void Construct(); // Function UW-GameNoticePopupWidget.UW-GameNoticePopupWidget_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void ExecuteUbergraph_UW-GameNoticePopupWidget(int32_t EntryPoint); // Function UW-GameNoticePopupWidget.UW-GameNoticePopupWidget_C.ExecuteUbergraph_UW-GameNoticePopupWidget(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
};

// Function UW-GameNoticePopupWidget.UW-GameNoticePopupWidget_C.SetMessage
inline void UUW-GameNoticePopupWidget_C::SetMessage(struct FText Str) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-GameNoticePopupWidget.UW-GameNoticePopupWidget_C.SetMessage");

	struct SetMessage_Params {
		struct FText Str;
	}; SetMessage_Params Params;

	Params.Str = Str;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-GameNoticePopupWidget.UW-GameNoticePopupWidget_C.Construct
inline void UUW-GameNoticePopupWidget_C::Construct() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-GameNoticePopupWidget.UW-GameNoticePopupWidget_C.Construct");

	struct Construct_Params {
		
	}; Construct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-GameNoticePopupWidget.UW-GameNoticePopupWidget_C.ExecuteUbergraph_UW-GameNoticePopupWidget
inline void UUW-GameNoticePopupWidget_C::ExecuteUbergraph_UW-GameNoticePopupWidget(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-GameNoticePopupWidget.UW-GameNoticePopupWidget_C.ExecuteUbergraph_UW-GameNoticePopupWidget");

	struct ExecuteUbergraph_UW-GameNoticePopupWidget_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_UW-GameNoticePopupWidget_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

