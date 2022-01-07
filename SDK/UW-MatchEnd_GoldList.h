// WidgetBlueprintGeneratedClass UW-MatchEnd_GoldList.UW-MatchEnd_GoldList_C
class UUW-MatchEnd_GoldList_C : public UUserWidget {

public:

	struct Unknown TextBlock_Gold; // 0x248 (8)
	struct Unknown TextBlock_Title; // 0x250 (8)
	struct Unknown ColorType1; // 0x258 (40)
	struct Unknown ColorType2; // 0x280 (40)

	void Init(struct FText Title, int32_t Value); // Function UW-MatchEnd_GoldList.UW-MatchEnd_GoldList_C.Init(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
};

// Function UW-MatchEnd_GoldList.UW-MatchEnd_GoldList_C.Init
inline void UUW-MatchEnd_GoldList_C::Init(struct FText Title, int32_t Value) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MatchEnd_GoldList.UW-MatchEnd_GoldList_C.Init");

	struct Init_Params {
		struct FText Title;
		int32_t Value;
	}; Init_Params Params;

	Params.Title = Title;
	Params.Value = Value;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

