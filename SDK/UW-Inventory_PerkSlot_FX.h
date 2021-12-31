// WidgetBlueprintGeneratedClass UW-Inventory_PerkSlot_FX.UW-Inventory_PerkSlot_FX_C
class UUW-Inventory_PerkSlot_FX_C : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown IMG_PerkLevelUpFx; // 0x250 (8)
	enum class Unknow PerkSlot; // 0x258 (1)
	struct Unknown PerkFxTexture; // 0x260 (8)
	char PlayAnimation_1 : 0; // 0x268 (1)
	float CurrentAnimationTime; // 0x26C (4)
	float AnimLastTime; // 0x270 (4)
	struct Unknown PerkFxMaterialInstance; // 0x278 (8)
	struct Unknown UltimatePerkFxTexture; // 0x280 (8)

	void InitFxInfo(); // Function UW-Inventory_PerkSlot_FX.UW-Inventory_PerkSlot_FX_C.InitFxInfo(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Construct(); // Function UW-Inventory_PerkSlot_FX.UW-Inventory_PerkSlot_FX_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Tick(struct Unknown MyGeometry, float InDeltaTime); // Function UW-Inventory_PerkSlot_FX.UW-Inventory_PerkSlot_FX_C.Tick(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void ExecuteUbergraph_UW-Inventory_PerkSlot_FX(int32_t EntryPoint); // Function UW-Inventory_PerkSlot_FX.UW-Inventory_PerkSlot_FX_C.ExecuteUbergraph_UW-Inventory_PerkSlot_FX(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
};

// Function UW-Inventory_PerkSlot_FX.UW-Inventory_PerkSlot_FX_C.InitFxInfo
inline void UUW-Inventory_PerkSlot_FX_C::InitFxInfo() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_PerkSlot_FX.UW-Inventory_PerkSlot_FX_C.InitFxInfo");

	struct InitFxInfo_Params {
		
	}; InitFxInfo_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_PerkSlot_FX.UW-Inventory_PerkSlot_FX_C.Construct
inline void UUW-Inventory_PerkSlot_FX_C::Construct() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_PerkSlot_FX.UW-Inventory_PerkSlot_FX_C.Construct");

	struct Construct_Params {
		
	}; Construct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_PerkSlot_FX.UW-Inventory_PerkSlot_FX_C.Tick
inline void UUW-Inventory_PerkSlot_FX_C::Tick(struct Unknown MyGeometry, float InDeltaTime) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_PerkSlot_FX.UW-Inventory_PerkSlot_FX_C.Tick");

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

// Function UW-Inventory_PerkSlot_FX.UW-Inventory_PerkSlot_FX_C.ExecuteUbergraph_UW-Inventory_PerkSlot_FX
inline void UUW-Inventory_PerkSlot_FX_C::ExecuteUbergraph_UW-Inventory_PerkSlot_FX(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_PerkSlot_FX.UW-Inventory_PerkSlot_FX_C.ExecuteUbergraph_UW-Inventory_PerkSlot_FX");

	struct ExecuteUbergraph_UW-Inventory_PerkSlot_FX_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_UW-Inventory_PerkSlot_FX_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

