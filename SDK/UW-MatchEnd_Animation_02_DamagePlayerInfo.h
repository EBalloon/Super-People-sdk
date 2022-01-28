// WidgetBlueprintGeneratedClass UW-MatchEnd_Animation_02_DamagePlayerInfo.UW-MatchEnd_Animation_02_DamagePlayerInfo_C
class UUW-MatchEnd_Animation_02_DamagePlayerInfo_C : public UUserWidget {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248 (8)
	struct UHorizontalBox HorizontalBox_Equip; // 0x250 (8)
	struct UOverlay Overlay_Health; // 0x258 (8)
	struct UProgressBar ProgressBar_Health; // 0x260 (8)
	struct UTextBlock T_Class; // 0x268 (8)
	struct UTextBlock T_ExpertWeapon; // 0x270 (8)
	struct UTextBlock T_Health; // 0x278 (8)
	struct UTextBlock T_KilledBy; // 0x280 (8)
	struct UTextBlock T_Level; // 0x288 (8)
	struct UTextBlock T_MaxHealth; // 0x290 (8)
	struct UTextBlock T_Name; // 0x298 (8)
	struct UTextBlock TextBlock_21; // 0x2A0 (8)
	struct UUW-Inventory_EquippedSlot_C UW-Inventory_EquippedSlot_Armor; // 0x2A8 (8)
	struct UUW-Inventory_EquippedSlot_C UW-Inventory_EquippedSlot_Bag; // 0x2B0 (8)
	struct UUW-Inventory_EquippedSlot_C UW-Inventory_EquippedSlot_Helmet; // 0x2B8 (8)
	float TargetHealth; // 0x2C0 (4)
	float CurrentHealth; // 0x2C4 (4)
	float MaxHealth; // 0x2C8 (4)

	void SetHealthVisibility(); // Function UW-MatchEnd_Animation_02_DamagePlayerInfo.UW-MatchEnd_Animation_02_DamagePlayerInfo_C.SetHealthVisibility(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void ResetAnim(); // Function UW-MatchEnd_Animation_02_DamagePlayerInfo.UW-MatchEnd_Animation_02_DamagePlayerInfo_C.ResetAnim(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void SetDamagePlayerInfo(struct ABravoHotelPlayerState PlayerState, char bIsKiller, struct FDiedDamagePlayerInfo_Player DiedDamagePlayerInfo); // Function UW-MatchEnd_Animation_02_DamagePlayerInfo.UW-MatchEnd_Animation_02_DamagePlayerInfo_C.SetDamagePlayerInfo(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UW-MatchEnd_Animation_02_DamagePlayerInfo.UW-MatchEnd_Animation_02_DamagePlayerInfo_C.Tick(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void PlayHealthAnim(); // Function UW-MatchEnd_Animation_02_DamagePlayerInfo.UW-MatchEnd_Animation_02_DamagePlayerInfo_C.PlayHealthAnim(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void UpdateHealth(); // Function UW-MatchEnd_Animation_02_DamagePlayerInfo.UW-MatchEnd_Animation_02_DamagePlayerInfo_C.UpdateHealth(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void StopHealthAnim(); // Function UW-MatchEnd_Animation_02_DamagePlayerInfo.UW-MatchEnd_Animation_02_DamagePlayerInfo_C.StopHealthAnim(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void ExecuteUbergraph_UW-MatchEnd_Animation_02_DamagePlayerInfo(int32_t EntryPoint); // Function UW-MatchEnd_Animation_02_DamagePlayerInfo.UW-MatchEnd_Animation_02_DamagePlayerInfo_C.ExecuteUbergraph_UW-MatchEnd_Animation_02_DamagePlayerInfo(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
};

// Function UW-MatchEnd_Animation_02_DamagePlayerInfo.UW-MatchEnd_Animation_02_DamagePlayerInfo_C.SetHealthVisibility
inline void UUW-MatchEnd_Animation_02_DamagePlayerInfo_C::SetHealthVisibility() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MatchEnd_Animation_02_DamagePlayerInfo.UW-MatchEnd_Animation_02_DamagePlayerInfo_C.SetHealthVisibility");

	struct SetHealthVisibility_Params {
		
	}; SetHealthVisibility_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MatchEnd_Animation_02_DamagePlayerInfo.UW-MatchEnd_Animation_02_DamagePlayerInfo_C.ResetAnim
inline void UUW-MatchEnd_Animation_02_DamagePlayerInfo_C::ResetAnim() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MatchEnd_Animation_02_DamagePlayerInfo.UW-MatchEnd_Animation_02_DamagePlayerInfo_C.ResetAnim");

	struct ResetAnim_Params {
		
	}; ResetAnim_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MatchEnd_Animation_02_DamagePlayerInfo.UW-MatchEnd_Animation_02_DamagePlayerInfo_C.SetDamagePlayerInfo
inline void UUW-MatchEnd_Animation_02_DamagePlayerInfo_C::SetDamagePlayerInfo(struct ABravoHotelPlayerState PlayerState, char bIsKiller, struct FDiedDamagePlayerInfo_Player DiedDamagePlayerInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MatchEnd_Animation_02_DamagePlayerInfo.UW-MatchEnd_Animation_02_DamagePlayerInfo_C.SetDamagePlayerInfo");

	struct SetDamagePlayerInfo_Params {
		struct ABravoHotelPlayerState PlayerState;
		char bIsKiller;
		struct FDiedDamagePlayerInfo_Player DiedDamagePlayerInfo;
	}; SetDamagePlayerInfo_Params Params;

	Params.PlayerState = PlayerState;
	Params.bIsKiller = bIsKiller;
	Params.DiedDamagePlayerInfo = DiedDamagePlayerInfo;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MatchEnd_Animation_02_DamagePlayerInfo.UW-MatchEnd_Animation_02_DamagePlayerInfo_C.Tick
inline void UUW-MatchEnd_Animation_02_DamagePlayerInfo_C::Tick(struct FGeometry MyGeometry, float InDeltaTime) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MatchEnd_Animation_02_DamagePlayerInfo.UW-MatchEnd_Animation_02_DamagePlayerInfo_C.Tick");

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

// Function UW-MatchEnd_Animation_02_DamagePlayerInfo.UW-MatchEnd_Animation_02_DamagePlayerInfo_C.PlayHealthAnim
inline void UUW-MatchEnd_Animation_02_DamagePlayerInfo_C::PlayHealthAnim() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MatchEnd_Animation_02_DamagePlayerInfo.UW-MatchEnd_Animation_02_DamagePlayerInfo_C.PlayHealthAnim");

	struct PlayHealthAnim_Params {
		
	}; PlayHealthAnim_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MatchEnd_Animation_02_DamagePlayerInfo.UW-MatchEnd_Animation_02_DamagePlayerInfo_C.UpdateHealth
inline void UUW-MatchEnd_Animation_02_DamagePlayerInfo_C::UpdateHealth() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MatchEnd_Animation_02_DamagePlayerInfo.UW-MatchEnd_Animation_02_DamagePlayerInfo_C.UpdateHealth");

	struct UpdateHealth_Params {
		
	}; UpdateHealth_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MatchEnd_Animation_02_DamagePlayerInfo.UW-MatchEnd_Animation_02_DamagePlayerInfo_C.StopHealthAnim
inline void UUW-MatchEnd_Animation_02_DamagePlayerInfo_C::StopHealthAnim() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MatchEnd_Animation_02_DamagePlayerInfo.UW-MatchEnd_Animation_02_DamagePlayerInfo_C.StopHealthAnim");

	struct StopHealthAnim_Params {
		
	}; StopHealthAnim_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MatchEnd_Animation_02_DamagePlayerInfo.UW-MatchEnd_Animation_02_DamagePlayerInfo_C.ExecuteUbergraph_UW-MatchEnd_Animation_02_DamagePlayerInfo
inline void UUW-MatchEnd_Animation_02_DamagePlayerInfo_C::ExecuteUbergraph_UW-MatchEnd_Animation_02_DamagePlayerInfo(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MatchEnd_Animation_02_DamagePlayerInfo.UW-MatchEnd_Animation_02_DamagePlayerInfo_C.ExecuteUbergraph_UW-MatchEnd_Animation_02_DamagePlayerInfo");

	struct ExecuteUbergraph_UW-MatchEnd_Animation_02_DamagePlayerInfo_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_UW-MatchEnd_Animation_02_DamagePlayerInfo_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

