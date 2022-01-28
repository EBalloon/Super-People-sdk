// WidgetBlueprintGeneratedClass UW-MatchEnd_DamageList_Item.UW-MatchEnd_DamageList_Item_C
class UUW-MatchEnd_DamageList_Item_C : public UUserWidget {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248 (8)
	struct UHorizontalBox HorizontalBox_HitPoint_Reversible; // 0x250 (8)
	struct UHorizontalBox HorizontalBox_Main_Reversible; // 0x258 (8)
	struct UHorizontalBox HorizontalBox_Rarity; // 0x260 (8)
	struct UImage Image_DamegeType; // 0x268 (8)
	struct UImage Image_Sidebar; // 0x270 (8)
	struct UImage Image_Sidebar2; // 0x278 (8)
	struct UImage Image_Weapon; // 0x280 (8)
	struct UOverlay Overlay_HitPoint; // 0x288 (8)
	struct UTextBlock T_Damage_Reversible; // 0x290 (8)
	struct UTextBlock T_HitCount; // 0x298 (8)
	struct UTextBlock T_WeaponName_Reversible; // 0x2A0 (8)
	struct UWidgetSwitcher WidgetSwitcher_DamageIcon; // 0x2A8 (8)

	void SetDamageInfoType(enum class EDiedDamageInfoType DamageInfoType); // Function UW-MatchEnd_DamageList_Item.UW-MatchEnd_DamageList_Item_C.SetDamageInfoType(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void SetAllHitPointColor(struct FLinearColor Color); // Function UW-MatchEnd_DamageList_Item.UW-MatchEnd_DamageList_Item_C.SetAllHitPointColor(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void SetReversible(char IsReverse); // Function UW-MatchEnd_DamageList_Item.UW-MatchEnd_DamageList_Item_C.SetReversible(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void SetDiedDamageInfo(struct FDiedDamageInfo& DamageInfo, char IsLast); // Function UW-MatchEnd_DamageList_Item.UW-MatchEnd_DamageList_Item_C.SetDiedDamageInfo(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void OnLoaded_9B3493564CFAE2FB48524ABF838F2D50(struct Object Loaded); // Function UW-MatchEnd_DamageList_Item.UW-MatchEnd_DamageList_Item_C.OnLoaded_9B3493564CFAE2FB48524ABF838F2D50(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void OnLoaded_D91401814D23ECA445723FB2F97B833D(struct Object Loaded); // Function UW-MatchEnd_DamageList_Item.UW-MatchEnd_DamageList_Item_C.OnLoaded_D91401814D23ECA445723FB2F97B833D(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void AsyncLoadingWeapon(struct TSoftObjectPtr<Object> Texture); // Function UW-MatchEnd_DamageList_Item.UW-MatchEnd_DamageList_Item_C.AsyncLoadingWeapon(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void AsyncLoadingDamageType(struct TSoftObjectPtr<Object> Texture); // Function UW-MatchEnd_DamageList_Item.UW-MatchEnd_DamageList_Item_C.AsyncLoadingDamageType(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void ExecuteUbergraph_UW-MatchEnd_DamageList_Item(int32_t EntryPoint); // Function UW-MatchEnd_DamageList_Item.UW-MatchEnd_DamageList_Item_C.ExecuteUbergraph_UW-MatchEnd_DamageList_Item(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
};

// Function UW-MatchEnd_DamageList_Item.UW-MatchEnd_DamageList_Item_C.SetDamageInfoType
inline void UUW-MatchEnd_DamageList_Item_C::SetDamageInfoType(enum class EDiedDamageInfoType DamageInfoType) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MatchEnd_DamageList_Item.UW-MatchEnd_DamageList_Item_C.SetDamageInfoType");

	struct SetDamageInfoType_Params {
		enum class EDiedDamageInfoType DamageInfoType;
	}; SetDamageInfoType_Params Params;

	Params.DamageInfoType = DamageInfoType;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MatchEnd_DamageList_Item.UW-MatchEnd_DamageList_Item_C.SetAllHitPointColor
inline void UUW-MatchEnd_DamageList_Item_C::SetAllHitPointColor(struct FLinearColor Color) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MatchEnd_DamageList_Item.UW-MatchEnd_DamageList_Item_C.SetAllHitPointColor");

	struct SetAllHitPointColor_Params {
		struct FLinearColor Color;
	}; SetAllHitPointColor_Params Params;

	Params.Color = Color;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MatchEnd_DamageList_Item.UW-MatchEnd_DamageList_Item_C.SetReversible
inline void UUW-MatchEnd_DamageList_Item_C::SetReversible(char IsReverse) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MatchEnd_DamageList_Item.UW-MatchEnd_DamageList_Item_C.SetReversible");

	struct SetReversible_Params {
		char IsReverse;
	}; SetReversible_Params Params;

	Params.IsReverse = IsReverse;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MatchEnd_DamageList_Item.UW-MatchEnd_DamageList_Item_C.SetDiedDamageInfo
inline void UUW-MatchEnd_DamageList_Item_C::SetDiedDamageInfo(struct FDiedDamageInfo& DamageInfo, char IsLast) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MatchEnd_DamageList_Item.UW-MatchEnd_DamageList_Item_C.SetDiedDamageInfo");

	struct SetDiedDamageInfo_Params {
		struct FDiedDamageInfo& DamageInfo;
		char IsLast;
	}; SetDiedDamageInfo_Params Params;

	Params.IsLast = IsLast;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	DamageInfo = Params.DamageInfo;

}

// Function UW-MatchEnd_DamageList_Item.UW-MatchEnd_DamageList_Item_C.OnLoaded_9B3493564CFAE2FB48524ABF838F2D50
inline void UUW-MatchEnd_DamageList_Item_C::OnLoaded_9B3493564CFAE2FB48524ABF838F2D50(struct Object Loaded) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MatchEnd_DamageList_Item.UW-MatchEnd_DamageList_Item_C.OnLoaded_9B3493564CFAE2FB48524ABF838F2D50");

	struct OnLoaded_9B3493564CFAE2FB48524ABF838F2D50_Params {
		struct Object Loaded;
	}; OnLoaded_9B3493564CFAE2FB48524ABF838F2D50_Params Params;

	Params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MatchEnd_DamageList_Item.UW-MatchEnd_DamageList_Item_C.OnLoaded_D91401814D23ECA445723FB2F97B833D
inline void UUW-MatchEnd_DamageList_Item_C::OnLoaded_D91401814D23ECA445723FB2F97B833D(struct Object Loaded) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MatchEnd_DamageList_Item.UW-MatchEnd_DamageList_Item_C.OnLoaded_D91401814D23ECA445723FB2F97B833D");

	struct OnLoaded_D91401814D23ECA445723FB2F97B833D_Params {
		struct Object Loaded;
	}; OnLoaded_D91401814D23ECA445723FB2F97B833D_Params Params;

	Params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MatchEnd_DamageList_Item.UW-MatchEnd_DamageList_Item_C.AsyncLoadingWeapon
inline void UUW-MatchEnd_DamageList_Item_C::AsyncLoadingWeapon(struct TSoftObjectPtr<Object> Texture) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MatchEnd_DamageList_Item.UW-MatchEnd_DamageList_Item_C.AsyncLoadingWeapon");

	struct AsyncLoadingWeapon_Params {
		struct TSoftObjectPtr<Object> Texture;
	}; AsyncLoadingWeapon_Params Params;

	Params.Texture = Texture;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MatchEnd_DamageList_Item.UW-MatchEnd_DamageList_Item_C.AsyncLoadingDamageType
inline void UUW-MatchEnd_DamageList_Item_C::AsyncLoadingDamageType(struct TSoftObjectPtr<Object> Texture) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MatchEnd_DamageList_Item.UW-MatchEnd_DamageList_Item_C.AsyncLoadingDamageType");

	struct AsyncLoadingDamageType_Params {
		struct TSoftObjectPtr<Object> Texture;
	}; AsyncLoadingDamageType_Params Params;

	Params.Texture = Texture;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MatchEnd_DamageList_Item.UW-MatchEnd_DamageList_Item_C.ExecuteUbergraph_UW-MatchEnd_DamageList_Item
inline void UUW-MatchEnd_DamageList_Item_C::ExecuteUbergraph_UW-MatchEnd_DamageList_Item(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MatchEnd_DamageList_Item.UW-MatchEnd_DamageList_Item_C.ExecuteUbergraph_UW-MatchEnd_DamageList_Item");

	struct ExecuteUbergraph_UW-MatchEnd_DamageList_Item_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_UW-MatchEnd_DamageList_Item_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

