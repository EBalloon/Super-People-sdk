// WidgetBlueprintGeneratedClass UW-CompassWidget_Item_Resuscitation.UW-CompassWidget_Item_Resuscitation_C
class UUW-CompassWidget_Item_Resuscitation_C : public UUserWidget {

public:

	struct UWidgetAnimation NewAnimation; // 0x248 (8)
	struct UImage Icon; // 0x250 (8)
	struct UImage ImageLine; // 0x258 (8)
	struct UImage Img_Color; // 0x260 (8)

	void InitIcon(struct ABravoHotelPlayerState PlayerState); // Function UW-CompassWidget_Item_Resuscitation.UW-CompassWidget_Item_Resuscitation_C.InitIcon(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
};

// Function UW-CompassWidget_Item_Resuscitation.UW-CompassWidget_Item_Resuscitation_C.InitIcon
inline void UUW-CompassWidget_Item_Resuscitation_C::InitIcon(struct ABravoHotelPlayerState PlayerState) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-CompassWidget_Item_Resuscitation.UW-CompassWidget_Item_Resuscitation_C.InitIcon");

	struct InitIcon_Params {
		struct ABravoHotelPlayerState PlayerState;
	}; InitIcon_Params Params;

	Params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

