// WidgetBlueprintGeneratedClass UW-PlayerIconWidget_OnFire.UW-PlayerIconWidget_OnFire_C
class UUW-PlayerIconWidget_OnFire_C : public UUserWidget {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248 (8)
	struct UWidgetAnimation Anim_OnFire; // 0x250 (8)
	struct UImage FireLine; // 0x258 (8)

	void SetLineInfo(float Angle, float Length); // Function UW-PlayerIconWidget_OnFire.UW-PlayerIconWidget_OnFire_C.SetLineInfo(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void OnAnimationFinished(struct UWidgetAnimation Animation); // Function UW-PlayerIconWidget_OnFire.UW-PlayerIconWidget_OnFire_C.OnAnimationFinished(BlueprintCosmetic|Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void ExecuteUbergraph_UW-PlayerIconWidget_OnFire(int32_t EntryPoint); // Function UW-PlayerIconWidget_OnFire.UW-PlayerIconWidget_OnFire_C.ExecuteUbergraph_UW-PlayerIconWidget_OnFire(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
};

// Function UW-PlayerIconWidget_OnFire.UW-PlayerIconWidget_OnFire_C.SetLineInfo
inline void UUW-PlayerIconWidget_OnFire_C::SetLineInfo(float Angle, float Length) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PlayerIconWidget_OnFire.UW-PlayerIconWidget_OnFire_C.SetLineInfo");

	struct SetLineInfo_Params {
		float Angle;
		float Length;
	}; SetLineInfo_Params Params;

	Params.Angle = Angle;
	Params.Length = Length;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PlayerIconWidget_OnFire.UW-PlayerIconWidget_OnFire_C.OnAnimationFinished
inline void UUW-PlayerIconWidget_OnFire_C::OnAnimationFinished(struct UWidgetAnimation Animation) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PlayerIconWidget_OnFire.UW-PlayerIconWidget_OnFire_C.OnAnimationFinished");

	struct OnAnimationFinished_Params {
		struct UWidgetAnimation Animation;
	}; OnAnimationFinished_Params Params;

	Params.Animation = Animation;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PlayerIconWidget_OnFire.UW-PlayerIconWidget_OnFire_C.ExecuteUbergraph_UW-PlayerIconWidget_OnFire
inline void UUW-PlayerIconWidget_OnFire_C::ExecuteUbergraph_UW-PlayerIconWidget_OnFire(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PlayerIconWidget_OnFire.UW-PlayerIconWidget_OnFire_C.ExecuteUbergraph_UW-PlayerIconWidget_OnFire");

	struct ExecuteUbergraph_UW-PlayerIconWidget_OnFire_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_UW-PlayerIconWidget_OnFire_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

