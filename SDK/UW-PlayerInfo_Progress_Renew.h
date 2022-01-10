// WidgetBlueprintGeneratedClass UW-PlayerInfo_Progress_Renew.UW-PlayerInfo_Progress_Renew_C
class UUW-PlayerInfo_Progress_Renew_C : public UBravoHotelPlayerInfoProgressWidget {

public:

	struct Unknown UberGraphFrame; // 0x2E8 (8)
	struct Unknown Anim_Healing; // 0x2F0 (8)
	struct Unknown HorizontalBox_Health; // 0x2F8 (8)
	struct Unknown Image_eager; // 0x300 (8)
	struct Unknown SizeBox_main; // 0x308 (8)
	struct Unknown Curve_ProgressMaxSizeRatio; // 0x310 (8)
	float DefaultSlotSize; // 0x318 (4)
	float MaxHealthSize; // 0x31C (4)
	float CurrentHealthSize; // 0x320 (4)
	float CurrentMaxHealth; // 0x324 (4)

	void GetHealthPosition(float InHealth, float& PositionX); // Function UW-PlayerInfo_Progress_Renew.UW-PlayerInfo_Progress_Renew_C.GetHealthPosition(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <Game_BE.exe+0x2B812B0>
	void HiddenAllSlots(); // Function UW-PlayerInfo_Progress_Renew.UW-PlayerInfo_Progress_Renew_C.HiddenAllSlots(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void OnSetSlotWidgets(int32_t InNewMaxHealth); // Function UW-PlayerInfo_Progress_Renew.UW-PlayerInfo_Progress_Renew_C.OnSetSlotWidgets(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void SetSlotWidgets(int32_t InNewMaxHealth); // Function UW-PlayerInfo_Progress_Renew.UW-PlayerInfo_Progress_Renew_C.SetSlotWidgets(Event|Protected|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void PlayIncreaseMaxHealthAnim(int32_t InLastHealth, int32_t InNewHealth); // Function UW-PlayerInfo_Progress_Renew.UW-PlayerInfo_Progress_Renew_C.PlayIncreaseMaxHealthAnim(Event|Protected|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void ShowDecreaseCurrentHealthAnim(int32_t InNewHealth); // Function UW-PlayerInfo_Progress_Renew.UW-PlayerInfo_Progress_Renew_C.ShowDecreaseCurrentHealthAnim(Event|Protected|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void UpdateOverHealing(int32_t InNewHealth, char bFlag); // Function UW-PlayerInfo_Progress_Renew.UW-PlayerInfo_Progress_Renew_C.UpdateOverHealing(Event|Protected|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void ExecuteUbergraph_UW-PlayerInfo_Progress_Renew(int32_t EntryPoint); // Function UW-PlayerInfo_Progress_Renew.UW-PlayerInfo_Progress_Renew_C.ExecuteUbergraph_UW-PlayerInfo_Progress_Renew(Final|UbergraphFunction) // <Game_BE.exe+0x2B812B0>
};

// Function UW-PlayerInfo_Progress_Renew.UW-PlayerInfo_Progress_Renew_C.GetHealthPosition
inline void UUW-PlayerInfo_Progress_Renew_C::GetHealthPosition(float InHealth, float& PositionX) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PlayerInfo_Progress_Renew.UW-PlayerInfo_Progress_Renew_C.GetHealthPosition");

	struct GetHealthPosition_Params {
		float InHealth;
		float& PositionX;
	}; GetHealthPosition_Params Params;

	Params.InHealth = InHealth;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	PositionX = Params.PositionX;

}

// Function UW-PlayerInfo_Progress_Renew.UW-PlayerInfo_Progress_Renew_C.HiddenAllSlots
inline void UUW-PlayerInfo_Progress_Renew_C::HiddenAllSlots() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PlayerInfo_Progress_Renew.UW-PlayerInfo_Progress_Renew_C.HiddenAllSlots");

	struct HiddenAllSlots_Params {
		
	}; HiddenAllSlots_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PlayerInfo_Progress_Renew.UW-PlayerInfo_Progress_Renew_C.OnSetSlotWidgets
inline void UUW-PlayerInfo_Progress_Renew_C::OnSetSlotWidgets(int32_t InNewMaxHealth) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PlayerInfo_Progress_Renew.UW-PlayerInfo_Progress_Renew_C.OnSetSlotWidgets");

	struct OnSetSlotWidgets_Params {
		int32_t InNewMaxHealth;
	}; OnSetSlotWidgets_Params Params;

	Params.InNewMaxHealth = InNewMaxHealth;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PlayerInfo_Progress_Renew.UW-PlayerInfo_Progress_Renew_C.SetSlotWidgets
inline void UUW-PlayerInfo_Progress_Renew_C::SetSlotWidgets(int32_t InNewMaxHealth) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PlayerInfo_Progress_Renew.UW-PlayerInfo_Progress_Renew_C.SetSlotWidgets");

	struct SetSlotWidgets_Params {
		int32_t InNewMaxHealth;
	}; SetSlotWidgets_Params Params;

	Params.InNewMaxHealth = InNewMaxHealth;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PlayerInfo_Progress_Renew.UW-PlayerInfo_Progress_Renew_C.PlayIncreaseMaxHealthAnim
inline void UUW-PlayerInfo_Progress_Renew_C::PlayIncreaseMaxHealthAnim(int32_t InLastHealth, int32_t InNewHealth) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PlayerInfo_Progress_Renew.UW-PlayerInfo_Progress_Renew_C.PlayIncreaseMaxHealthAnim");

	struct PlayIncreaseMaxHealthAnim_Params {
		int32_t InLastHealth;
		int32_t InNewHealth;
	}; PlayIncreaseMaxHealthAnim_Params Params;

	Params.InLastHealth = InLastHealth;
	Params.InNewHealth = InNewHealth;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PlayerInfo_Progress_Renew.UW-PlayerInfo_Progress_Renew_C.ShowDecreaseCurrentHealthAnim
inline void UUW-PlayerInfo_Progress_Renew_C::ShowDecreaseCurrentHealthAnim(int32_t InNewHealth) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PlayerInfo_Progress_Renew.UW-PlayerInfo_Progress_Renew_C.ShowDecreaseCurrentHealthAnim");

	struct ShowDecreaseCurrentHealthAnim_Params {
		int32_t InNewHealth;
	}; ShowDecreaseCurrentHealthAnim_Params Params;

	Params.InNewHealth = InNewHealth;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PlayerInfo_Progress_Renew.UW-PlayerInfo_Progress_Renew_C.UpdateOverHealing
inline void UUW-PlayerInfo_Progress_Renew_C::UpdateOverHealing(int32_t InNewHealth, char bFlag) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PlayerInfo_Progress_Renew.UW-PlayerInfo_Progress_Renew_C.UpdateOverHealing");

	struct UpdateOverHealing_Params {
		int32_t InNewHealth;
		char bFlag;
	}; UpdateOverHealing_Params Params;

	Params.InNewHealth = InNewHealth;
	Params.bFlag = bFlag;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PlayerInfo_Progress_Renew.UW-PlayerInfo_Progress_Renew_C.ExecuteUbergraph_UW-PlayerInfo_Progress_Renew
inline void UUW-PlayerInfo_Progress_Renew_C::ExecuteUbergraph_UW-PlayerInfo_Progress_Renew(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PlayerInfo_Progress_Renew.UW-PlayerInfo_Progress_Renew_C.ExecuteUbergraph_UW-PlayerInfo_Progress_Renew");

	struct ExecuteUbergraph_UW-PlayerInfo_Progress_Renew_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_UW-PlayerInfo_Progress_Renew_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

