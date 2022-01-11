// WidgetBlueprintGeneratedClass UW-BlackMarket.UW-BlackMarket_C
class UUW-BlackMarket_C : public UUserWidget {

public:

	struct Unknown Image_3; // 0x248 (8)
	struct Unknown IMG-BG; // 0x250 (8)
	struct Unknown IMG-Close; // 0x258 (8)
	struct Unknown IMG-TitleBG; // 0x260 (8)
	struct Unknown UW-BlackMarket_Main; // 0x268 (8)

	struct Unknown OnClose(struct Unknown MyGeometry, struct Unknown& MouseEvent); // Function UW-BlackMarket.UW-BlackMarket_C.OnClose(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
};

// Function UW-BlackMarket.UW-BlackMarket_C.OnClose
inline struct Unknown UUW-BlackMarket_C::OnClose(struct Unknown MyGeometry, struct Unknown& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-BlackMarket.UW-BlackMarket_C.OnClose");

	struct OnClose_Params {
		struct Unknown MyGeometry;
		struct Unknown& MouseEvent;
		struct Unknown ReturnValue;

	}; OnClose_Params Params;

	Params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	MouseEvent = Params.MouseEvent;


	return params.ReturnValue;
}

