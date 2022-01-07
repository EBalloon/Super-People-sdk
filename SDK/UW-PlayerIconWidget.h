// WidgetBlueprintGeneratedClass UW-PlayerIconWidget.UW-PlayerIconWidget_C
class UUW-PlayerIconWidget_C : public UBravoHotelPlayerIconWidget {

public:

	struct Unknown UberGraphFrame; // 0x318 (8)
	struct Unknown Anim_OnNotifyPos; // 0x320 (8)
	struct Unknown Anim_OnAttacked; // 0x328 (8)
	struct Unknown Canvas_Attacked; // 0x330 (8)
	struct Unknown Canvas_Fire; // 0x338 (8)
	struct Unknown Canvas_NotifyPos; // 0x340 (8)
	struct Unknown Img_FreeCam; // 0x348 (8)
	struct Unknown PlayerState; // 0x350 (8)

	void OnClickPlayerNameButton(); // Function UW-PlayerIconWidget.UW-PlayerIconWidget_C.OnClickPlayerNameButton(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void OnAttackedWidget(); // Function UW-PlayerIconWidget.UW-PlayerIconWidget_C.OnAttackedWidget(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void OnFireWidget(struct Unknown MapComp, struct Unknown Rotation, float Length); // Function UW-PlayerIconWidget.UW-PlayerIconWidget_C.OnFireWidget(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void SetFreeCam(); // Function UW-PlayerIconWidget.UW-PlayerIconWidget_C.SetFreeCam(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void Initialize(struct Unknown PlayerState); // Function UW-PlayerIconWidget.UW-PlayerIconWidget_C.Initialize(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void OnAnimationFinished(struct Unknown Animation); // Function UW-PlayerIconWidget.UW-PlayerIconWidget_C.OnAnimationFinished(BlueprintCosmetic|Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void Rotate(float Angle); // Function UW-PlayerIconWidget.UW-PlayerIconWidget_C.Rotate(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void BndEvt__BT_UserName_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function UW-PlayerIconWidget.UW-PlayerIconWidget_C.BndEvt__BT_UserName_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void PlayTargetPosAnim(); // Function UW-PlayerIconWidget.UW-PlayerIconWidget_C.PlayTargetPosAnim(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void ExecuteUbergraph_UW-PlayerIconWidget(int32_t EntryPoint); // Function UW-PlayerIconWidget.UW-PlayerIconWidget_C.ExecuteUbergraph_UW-PlayerIconWidget(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
};

// Function UW-PlayerIconWidget.UW-PlayerIconWidget_C.OnClickPlayerNameButton
inline void UUW-PlayerIconWidget_C::OnClickPlayerNameButton() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PlayerIconWidget.UW-PlayerIconWidget_C.OnClickPlayerNameButton");

	struct OnClickPlayerNameButton_Params {
		
	}; OnClickPlayerNameButton_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PlayerIconWidget.UW-PlayerIconWidget_C.OnAttackedWidget
inline void UUW-PlayerIconWidget_C::OnAttackedWidget() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PlayerIconWidget.UW-PlayerIconWidget_C.OnAttackedWidget");

	struct OnAttackedWidget_Params {
		
	}; OnAttackedWidget_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PlayerIconWidget.UW-PlayerIconWidget_C.OnFireWidget
inline void UUW-PlayerIconWidget_C::OnFireWidget(struct Unknown MapComp, struct Unknown Rotation, float Length) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PlayerIconWidget.UW-PlayerIconWidget_C.OnFireWidget");

	struct OnFireWidget_Params {
		struct Unknown MapComp;
		struct Unknown Rotation;
		float Length;
	}; OnFireWidget_Params Params;

	Params.MapComp = MapComp;
	Params.Rotation = Rotation;
	Params.Length = Length;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PlayerIconWidget.UW-PlayerIconWidget_C.SetFreeCam
inline void UUW-PlayerIconWidget_C::SetFreeCam() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PlayerIconWidget.UW-PlayerIconWidget_C.SetFreeCam");

	struct SetFreeCam_Params {
		
	}; SetFreeCam_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PlayerIconWidget.UW-PlayerIconWidget_C.Initialize
inline void UUW-PlayerIconWidget_C::Initialize(struct Unknown PlayerState) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PlayerIconWidget.UW-PlayerIconWidget_C.Initialize");

	struct Initialize_Params {
		struct Unknown PlayerState;
	}; Initialize_Params Params;

	Params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PlayerIconWidget.UW-PlayerIconWidget_C.OnAnimationFinished
inline void UUW-PlayerIconWidget_C::OnAnimationFinished(struct Unknown Animation) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PlayerIconWidget.UW-PlayerIconWidget_C.OnAnimationFinished");

	struct OnAnimationFinished_Params {
		struct Unknown Animation;
	}; OnAnimationFinished_Params Params;

	Params.Animation = Animation;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PlayerIconWidget.UW-PlayerIconWidget_C.Rotate
inline void UUW-PlayerIconWidget_C::Rotate(float Angle) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PlayerIconWidget.UW-PlayerIconWidget_C.Rotate");

	struct Rotate_Params {
		float Angle;
	}; Rotate_Params Params;

	Params.Angle = Angle;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PlayerIconWidget.UW-PlayerIconWidget_C.BndEvt__BT_UserName_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
inline void UUW-PlayerIconWidget_C::BndEvt__BT_UserName_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PlayerIconWidget.UW-PlayerIconWidget_C.BndEvt__BT_UserName_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	struct BndEvt__BT_UserName_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params {
		
	}; BndEvt__BT_UserName_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PlayerIconWidget.UW-PlayerIconWidget_C.PlayTargetPosAnim
inline void UUW-PlayerIconWidget_C::PlayTargetPosAnim() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PlayerIconWidget.UW-PlayerIconWidget_C.PlayTargetPosAnim");

	struct PlayTargetPosAnim_Params {
		
	}; PlayTargetPosAnim_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PlayerIconWidget.UW-PlayerIconWidget_C.ExecuteUbergraph_UW-PlayerIconWidget
inline void UUW-PlayerIconWidget_C::ExecuteUbergraph_UW-PlayerIconWidget(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PlayerIconWidget.UW-PlayerIconWidget_C.ExecuteUbergraph_UW-PlayerIconWidget");

	struct ExecuteUbergraph_UW-PlayerIconWidget_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_UW-PlayerIconWidget_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

