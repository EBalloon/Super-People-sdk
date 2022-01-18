// WidgetBlueprintGeneratedClass UW-Lobby_Craft_Success_Perk_Open.UW-Lobby_Craft_Success_Perk_Open_C
class UUW-Lobby_Craft_Success_Perk_Open_C : public UUserWidget {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248 (8)
	struct UWidgetAnimation Fade_in_Black_Bg; // 0x250 (8)
	struct UWidgetAnimation Anim_ShowPerk; // 0x258 (8)
	struct UImage Image_319; // 0x260 (8)
	struct UImage Img_Opened; // 0x268 (8)
	struct UTextBlock T_Desc; // 0x270 (8)
	struct UTextBlock T_Name; // 0x278 (8)
	struct UUW-Lobby_Craft_Success_Perk_Slot_C UW-Lobby_Craft_Success_Perk_Slot; // 0x280 (8)
	struct UMaterialInstanceDynamic RarityBGMaterialInstance; // 0x288 (8)
	float CurrentAnim; // 0x290 (4)

	void SetItemOption(struct FItemOption& ItemOption); // Function UW-Lobby_Craft_Success_Perk_Open.UW-Lobby_Craft_Success_Perk_Open_C.SetItemOption(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UW-Lobby_Craft_Success_Perk_Open.UW-Lobby_Craft_Success_Perk_Open_C.Tick(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void ExecuteUbergraph_UW-Lobby_Craft_Success_Perk_Open(int32_t EntryPoint); // Function UW-Lobby_Craft_Success_Perk_Open.UW-Lobby_Craft_Success_Perk_Open_C.ExecuteUbergraph_UW-Lobby_Craft_Success_Perk_Open(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
};

// Function UW-Lobby_Craft_Success_Perk_Open.UW-Lobby_Craft_Success_Perk_Open_C.SetItemOption
inline void UUW-Lobby_Craft_Success_Perk_Open_C::SetItemOption(struct FItemOption& ItemOption) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_Craft_Success_Perk_Open.UW-Lobby_Craft_Success_Perk_Open_C.SetItemOption");

	struct SetItemOption_Params {
		struct FItemOption& ItemOption;
	}; SetItemOption_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	ItemOption = Params.ItemOption;

}

// Function UW-Lobby_Craft_Success_Perk_Open.UW-Lobby_Craft_Success_Perk_Open_C.Tick
inline void UUW-Lobby_Craft_Success_Perk_Open_C::Tick(struct FGeometry MyGeometry, float InDeltaTime) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_Craft_Success_Perk_Open.UW-Lobby_Craft_Success_Perk_Open_C.Tick");

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

// Function UW-Lobby_Craft_Success_Perk_Open.UW-Lobby_Craft_Success_Perk_Open_C.ExecuteUbergraph_UW-Lobby_Craft_Success_Perk_Open
inline void UUW-Lobby_Craft_Success_Perk_Open_C::ExecuteUbergraph_UW-Lobby_Craft_Success_Perk_Open(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_Craft_Success_Perk_Open.UW-Lobby_Craft_Success_Perk_Open_C.ExecuteUbergraph_UW-Lobby_Craft_Success_Perk_Open");

	struct ExecuteUbergraph_UW-Lobby_Craft_Success_Perk_Open_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_UW-Lobby_Craft_Success_Perk_Open_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

