// WidgetBlueprintGeneratedClass UW-IntroBackground.UW-IntroBackground_C
class UUW-IntroBackground_C : public UUserWidget {

public:

	struct Unknown Image_80; // 0x248 (8)

	void destroy(); // Function UW-IntroBackground.UW-IntroBackground_C.destroy(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
};

// Function UW-IntroBackground.UW-IntroBackground_C.destroy
inline void UUW-IntroBackground_C::destroy() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-IntroBackground.UW-IntroBackground_C.destroy");

	struct destroy_Params {
		
	}; destroy_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

