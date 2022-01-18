// WidgetBlueprintGeneratedClass UW-ListWidget_ItemBase.UW-ListWidget_ItemBase_C
class UUW-ListWidget_ItemBase_C : public UUserWidget {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248 (8)
	struct UWidgetAnimation Anim_Remove; // 0x250 (8)
	struct FTimerHandle Timer_StartRemove; // 0x258 (8)

	void PlayUpDownAnim(); // Function UW-ListWidget_ItemBase.UW-ListWidget_ItemBase_C.PlayUpDownAnim(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void SetRemoveTimer(float RemainTime); // Function UW-ListWidget_ItemBase.UW-ListWidget_ItemBase_C.SetRemoveTimer(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void OnAnimationFinished(struct UWidgetAnimation Animation); // Function UW-ListWidget_ItemBase.UW-ListWidget_ItemBase_C.OnAnimationFinished(BlueprintCosmetic|Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void StartRemove(); // Function UW-ListWidget_ItemBase.UW-ListWidget_ItemBase_C.StartRemove(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void ExecuteUbergraph_UW-ListWidget_ItemBase(int32_t EntryPoint); // Function UW-ListWidget_ItemBase.UW-ListWidget_ItemBase_C.ExecuteUbergraph_UW-ListWidget_ItemBase(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
};

// Function UW-ListWidget_ItemBase.UW-ListWidget_ItemBase_C.PlayUpDownAnim
inline void UUW-ListWidget_ItemBase_C::PlayUpDownAnim() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ListWidget_ItemBase.UW-ListWidget_ItemBase_C.PlayUpDownAnim");

	struct PlayUpDownAnim_Params {
		
	}; PlayUpDownAnim_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ListWidget_ItemBase.UW-ListWidget_ItemBase_C.SetRemoveTimer
inline void UUW-ListWidget_ItemBase_C::SetRemoveTimer(float RemainTime) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ListWidget_ItemBase.UW-ListWidget_ItemBase_C.SetRemoveTimer");

	struct SetRemoveTimer_Params {
		float RemainTime;
	}; SetRemoveTimer_Params Params;

	Params.RemainTime = RemainTime;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ListWidget_ItemBase.UW-ListWidget_ItemBase_C.OnAnimationFinished
inline void UUW-ListWidget_ItemBase_C::OnAnimationFinished(struct UWidgetAnimation Animation) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ListWidget_ItemBase.UW-ListWidget_ItemBase_C.OnAnimationFinished");

	struct OnAnimationFinished_Params {
		struct UWidgetAnimation Animation;
	}; OnAnimationFinished_Params Params;

	Params.Animation = Animation;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ListWidget_ItemBase.UW-ListWidget_ItemBase_C.StartRemove
inline void UUW-ListWidget_ItemBase_C::StartRemove() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ListWidget_ItemBase.UW-ListWidget_ItemBase_C.StartRemove");

	struct StartRemove_Params {
		
	}; StartRemove_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ListWidget_ItemBase.UW-ListWidget_ItemBase_C.ExecuteUbergraph_UW-ListWidget_ItemBase
inline void UUW-ListWidget_ItemBase_C::ExecuteUbergraph_UW-ListWidget_ItemBase(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ListWidget_ItemBase.UW-ListWidget_ItemBase_C.ExecuteUbergraph_UW-ListWidget_ItemBase");

	struct ExecuteUbergraph_UW-ListWidget_ItemBase_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_UW-ListWidget_ItemBase_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

