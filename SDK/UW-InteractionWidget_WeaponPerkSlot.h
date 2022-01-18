// WidgetBlueprintGeneratedClass UW-InteractionWidget_WeaponPerkSlot.UW-InteractionWidget_WeaponPerkSlot_C
class UUW-InteractionWidget_WeaponPerkSlot_C : public UUserWidget {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248 (8)
	struct UImage Image_350; // 0x250 (8)
	struct UImage Image_585; // 0x258 (8)
	struct UImage Image_Grade_Color_Line; // 0x260 (8)

	void SetBuffInfo(struct FText BuffName, struct FText Desc, struct TSoftObjectPtr<Object> Icon, int32_t Rarity); // Function UW-InteractionWidget_WeaponPerkSlot.UW-InteractionWidget_WeaponPerkSlot_C.SetBuffInfo(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void OnLoaded_F9A8A8FB4318139B3972C6ACB5BBA1D9(struct Object Loaded); // Function UW-InteractionWidget_WeaponPerkSlot.UW-InteractionWidget_WeaponPerkSlot_C.OnLoaded_F9A8A8FB4318139B3972C6ACB5BBA1D9(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void AsyncLoadIconTexture(struct TSoftObjectPtr<Object> IconTexture); // Function UW-InteractionWidget_WeaponPerkSlot.UW-InteractionWidget_WeaponPerkSlot_C.AsyncLoadIconTexture(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void ExecuteUbergraph_UW-InteractionWidget_WeaponPerkSlot(int32_t EntryPoint); // Function UW-InteractionWidget_WeaponPerkSlot.UW-InteractionWidget_WeaponPerkSlot_C.ExecuteUbergraph_UW-InteractionWidget_WeaponPerkSlot(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
};

// Function UW-InteractionWidget_WeaponPerkSlot.UW-InteractionWidget_WeaponPerkSlot_C.SetBuffInfo
inline void UUW-InteractionWidget_WeaponPerkSlot_C::SetBuffInfo(struct FText BuffName, struct FText Desc, struct TSoftObjectPtr<Object> Icon, int32_t Rarity) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InteractionWidget_WeaponPerkSlot.UW-InteractionWidget_WeaponPerkSlot_C.SetBuffInfo");

	struct SetBuffInfo_Params {
		struct FText BuffName;
		struct FText Desc;
		struct TSoftObjectPtr<Object> Icon;
		int32_t Rarity;
	}; SetBuffInfo_Params Params;

	Params.BuffName = BuffName;
	Params.Desc = Desc;
	Params.Icon = Icon;
	Params.Rarity = Rarity;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-InteractionWidget_WeaponPerkSlot.UW-InteractionWidget_WeaponPerkSlot_C.OnLoaded_F9A8A8FB4318139B3972C6ACB5BBA1D9
inline void UUW-InteractionWidget_WeaponPerkSlot_C::OnLoaded_F9A8A8FB4318139B3972C6ACB5BBA1D9(struct Object Loaded) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InteractionWidget_WeaponPerkSlot.UW-InteractionWidget_WeaponPerkSlot_C.OnLoaded_F9A8A8FB4318139B3972C6ACB5BBA1D9");

	struct OnLoaded_F9A8A8FB4318139B3972C6ACB5BBA1D9_Params {
		struct Object Loaded;
	}; OnLoaded_F9A8A8FB4318139B3972C6ACB5BBA1D9_Params Params;

	Params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-InteractionWidget_WeaponPerkSlot.UW-InteractionWidget_WeaponPerkSlot_C.AsyncLoadIconTexture
inline void UUW-InteractionWidget_WeaponPerkSlot_C::AsyncLoadIconTexture(struct TSoftObjectPtr<Object> IconTexture) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InteractionWidget_WeaponPerkSlot.UW-InteractionWidget_WeaponPerkSlot_C.AsyncLoadIconTexture");

	struct AsyncLoadIconTexture_Params {
		struct TSoftObjectPtr<Object> IconTexture;
	}; AsyncLoadIconTexture_Params Params;

	Params.IconTexture = IconTexture;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-InteractionWidget_WeaponPerkSlot.UW-InteractionWidget_WeaponPerkSlot_C.ExecuteUbergraph_UW-InteractionWidget_WeaponPerkSlot
inline void UUW-InteractionWidget_WeaponPerkSlot_C::ExecuteUbergraph_UW-InteractionWidget_WeaponPerkSlot(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-InteractionWidget_WeaponPerkSlot.UW-InteractionWidget_WeaponPerkSlot_C.ExecuteUbergraph_UW-InteractionWidget_WeaponPerkSlot");

	struct ExecuteUbergraph_UW-InteractionWidget_WeaponPerkSlot_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_UW-InteractionWidget_WeaponPerkSlot_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

