// WidgetBlueprintGeneratedClass UW-CompassWidget_Item_Resuscitation.UW-CompassWidget_Item_Resuscitation_C
class UUW-CompassWidget_Item_Resuscitation_C : public UUserWidget {

public:

	struct Unknown NewAnimation; // 0x248 (8)
	struct Unknown Icon; // 0x250 (8)
	struct Unknown ImageLine; // 0x258 (8)
	struct Unknown Img_Color; // 0x260 (8)

	void InitIcon(struct Unknown PlayerState); // Function UW-CompassWidget_Item_Resuscitation.UW-CompassWidget_Item_Resuscitation_C.InitIcon(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
};

// Function UW-CompassWidget_Item_Resuscitation.UW-CompassWidget_Item_Resuscitation_C.InitIcon
inline void UUW-CompassWidget_Item_Resuscitation_C::InitIcon(struct Unknown PlayerState) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-CompassWidget_Item_Resuscitation.UW-CompassWidget_Item_Resuscitation_C.InitIcon");

	struct InitIcon_Params {
		struct Unknown PlayerState;
	}; InitIcon_Params Params;

	Params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

