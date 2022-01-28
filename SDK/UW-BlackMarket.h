// WidgetBlueprintGeneratedClass UW-BlackMarket.UW-BlackMarket_C
class UUW-BlackMarket_C : public UUserWidget {

public:

	struct UImage Image_3; // 0x248 (8)
	struct UImage IMG-BG; // 0x250 (8)
	struct UImage IMG-Close; // 0x258 (8)
	struct UImage IMG-TitleBG; // 0x260 (8)
	struct UUW-BlackMarket_Main_C UW-BlackMarket_Main; // 0x268 (8)

	struct FEventReply OnClose(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UW-BlackMarket.UW-BlackMarket_C.OnClose(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
};

// Function UW-BlackMarket.UW-BlackMarket_C.OnClose
inline struct FEventReply UUW-BlackMarket_C::OnClose(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-BlackMarket.UW-BlackMarket_C.OnClose");

	struct OnClose_Params {
		struct FGeometry MyGeometry;
		struct FPointerEvent& MouseEvent;
		struct FEventReply ReturnValue;

	}; OnClose_Params Params;

	Params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	MouseEvent = Params.MouseEvent;


	return params.ReturnValue;
}

