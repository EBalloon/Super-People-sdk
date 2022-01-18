// WidgetBlueprintGeneratedClass UW-CheatReplayListTitleItem.UW-CheatReplayListTitleItem_C
class UUW-CheatReplayListTitleItem_C : public UUserWidget {

public:

	struct UTextBlock TextBlock_62; // 0x248 (8)

	void Init(struct FString Str); // Function UW-CheatReplayListTitleItem.UW-CheatReplayListTitleItem_C.Init(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
};

// Function UW-CheatReplayListTitleItem.UW-CheatReplayListTitleItem_C.Init
inline void UUW-CheatReplayListTitleItem_C::Init(struct FString Str) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-CheatReplayListTitleItem.UW-CheatReplayListTitleItem_C.Init");

	struct Init_Params {
		struct FString Str;
	}; Init_Params Params;

	Params.Str = Str;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

