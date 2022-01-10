// WidgetBlueprintGeneratedClass UW-Lobby_Craft_Success_Perk_Open.UW-Lobby_Craft_Success_Perk_Open_C
class UUW-Lobby_Craft_Success_Perk_Open_C : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown Fade_in_Black_Bg; // 0x250 (8)
	struct Unknown Anim_ShowPerk; // 0x258 (8)
	struct Unknown Image_319; // 0x260 (8)
	struct Unknown Img_Opened; // 0x268 (8)
	struct Unknown T_Desc; // 0x270 (8)
	struct Unknown T_Name; // 0x278 (8)
	struct Unknown UW-Lobby_Craft_Success_Perk_Slot; // 0x280 (8)
	struct Unknown RarityBGMaterialInstance; // 0x288 (8)
	float CurrentAnim; // 0x290 (4)

	void SetItemOption(struct Unknown& ItemOption); // Function UW-Lobby_Craft_Success_Perk_Open.UW-Lobby_Craft_Success_Perk_Open_C.SetItemOption(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void Tick(struct Unknown MyGeometry, float InDeltaTime); // Function UW-Lobby_Craft_Success_Perk_Open.UW-Lobby_Craft_Success_Perk_Open_C.Tick(BlueprintCosmetic|Event|Public|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void ExecuteUbergraph_UW-Lobby_Craft_Success_Perk_Open(int32_t EntryPoint); // Function UW-Lobby_Craft_Success_Perk_Open.UW-Lobby_Craft_Success_Perk_Open_C.ExecuteUbergraph_UW-Lobby_Craft_Success_Perk_Open(Final|UbergraphFunction|HasDefaults) // <Game_BE.exe+0x2B812B0>
};

// Function UW-Lobby_Craft_Success_Perk_Open.UW-Lobby_Craft_Success_Perk_Open_C.SetItemOption
inline void UUW-Lobby_Craft_Success_Perk_Open_C::SetItemOption(struct Unknown& ItemOption) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_Craft_Success_Perk_Open.UW-Lobby_Craft_Success_Perk_Open_C.SetItemOption");

	struct SetItemOption_Params {
		struct Unknown& ItemOption;
	}; SetItemOption_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	ItemOption = Params.ItemOption;

}

// Function UW-Lobby_Craft_Success_Perk_Open.UW-Lobby_Craft_Success_Perk_Open_C.Tick
inline void UUW-Lobby_Craft_Success_Perk_Open_C::Tick(struct Unknown MyGeometry, float InDeltaTime) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_Craft_Success_Perk_Open.UW-Lobby_Craft_Success_Perk_Open_C.Tick");

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

