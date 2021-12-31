// WidgetBlueprintGeneratedClass UW-LoginWidget.UW-LoginWidget_C
class UUW-LoginWidget_C : public UBravoHotelLoginWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown Blink; // 0x250 (8)
	struct Unknown FadeIn; // 0x258 (8)
	struct Unknown Button_480; // 0x260 (8)
	struct Unknown Button_482; // 0x268 (8)
	struct Unknown Button_483; // 0x270 (8)
	struct Unknown Button_484; // 0x278 (8)
	struct Unknown Button_485; // 0x280 (8)
	struct Unknown Button_486; // 0x288 (8)
	struct Unknown Button_ExitGame; // 0x290 (8)
	struct Unknown Button_Retry; // 0x298 (8)
	struct Unknown CanvasPanel_10; // 0x2A0 (8)
	struct Unknown CanvasPanel_143; // 0x2A8 (8)
	struct Unknown CanvasPanel_Default; // 0x2B0 (8)
	struct Unknown CanvasPanel_JuvenileRestricted; // 0x2B8 (8)
	struct Unknown CanvasPanel_RestrictedUser; // 0x2C0 (8)
	struct Unknown CanvasPanel_ServerInspection; // 0x2C8 (8)
	struct Unknown CanvasPanel_UnableToConnectServer; // 0x2D0 (8)
	struct Unknown CanvasPanel_WaitingServer; // 0x2D8 (8)
	struct Unknown HorizontalBox_1; // 0x2E0 (8)
	struct Unknown HorizontalBox_2; // 0x2E8 (8)
	struct Unknown Image_122; // 0x2F0 (8)
	struct Unknown Image_123; // 0x2F8 (8)
	struct Unknown Image_309; // 0x300 (8)
	struct Unknown Image_bg; // 0x308 (8)
	struct Unknown SizeBox; // 0x310 (8)
	struct Unknown SizeBox_2; // 0x318 (8)
	struct Unknown SizeBox_85; // 0x320 (8)
	struct Unknown TextBlock; // 0x328 (8)
	struct Unknown TextBlock_2; // 0x330 (8)
	struct Unknown TextBlock_3; // 0x338 (8)
	struct Unknown TextBlock_4; // 0x340 (8)
	struct Unknown TextBlock_544; // 0x348 (8)
	struct Unknown TextBlock_546; // 0x350 (8)
	struct Unknown TextBlock_Desc; // 0x358 (8)
	struct Unknown TextBlock_EndTime; // 0x360 (8)
	struct Unknown Throbber_1; // 0x368 (8)
	struct Unknown Throbber_979; // 0x370 (8)
	struct Unknown TXT-Waitting; // 0x378 (8)
	struct Unknown WidgetSwitcher_1; // 0x380 (8)
	struct Unknown TitleWidgetRef; // 0x388 (8)
	struct FString ErrorID; // 0x390 (16)
	int32_t ErrorIndex; // 0x3A0 (4)
	struct FString ErrorParameters; // 0x3A8 (16)
	struct Unknown MediaPlayer; // 0x3B8 (8)
	struct Unknown Media; // 0x3C0 (8)
	struct Unknown MediaTexture; // 0x3C8 (8)
	struct Unknown MediaSoundComp; // 0x3D0 (8)
	int32_t ApplyUserInfoCount; // 0x3D8 (4)
	char bServicePlatformFlow : 0; // 0x3DC (1)

	void DefaultMessage(); // Function UW-LoginWidget.UW-LoginWidget_C.DefaultMessage(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void ServicePlatformLogin(); // Function UW-LoginWidget.UW-LoginWidget_C.ServicePlatformLogin(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void ShowBlock(); // Function UW-LoginWidget.UW-LoginWidget_C.ShowBlock(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void UodateWaitingUser(int32_t UserCount, int32_t Time); // Function UW-LoginWidget.UW-LoginWidget_C.UodateWaitingUser(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void ShowNotice(int32_t Idx); // Function UW-LoginWidget.UW-LoginWidget_C.ShowNotice(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Construct(); // Function UW-LoginWidget.UW-LoginWidget_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Tick(struct Unknown MyGeometry, float InDeltaTime); // Function UW-LoginWidget.UW-LoginWidget_C.Tick(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void BndEvt__Button_479_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function UW-LoginWidget.UW-LoginWidget_C.BndEvt__Button_479_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void BndEvt__Button_481_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function UW-LoginWidget.UW-LoginWidget_C.BndEvt__Button_481_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void BndEvt__Button_485_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // Function UW-LoginWidget.UW-LoginWidget_C.BndEvt__Button_485_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void BndEvt__Button_482_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature(); // Function UW-LoginWidget.UW-LoginWidget_C.BndEvt__Button_482_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void BndEvt__Button_484_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature(); // Function UW-LoginWidget.UW-LoginWidget_C.BndEvt__Button_484_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void OnLoginSucceeded(); // Function UW-LoginWidget.UW-LoginWidget_C.OnLoginSucceeded(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void OnCreateCharacter_Event_1(); // Function UW-LoginWidget.UW-LoginWidget_C.OnCreateCharacter_Event_1(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void WaitingUserDelegate_Event_1(int32_t WaitingUserCount, int32_t WaitingTime); // Function UW-LoginWidget.UW-LoginWidget_C.WaitingUserDelegate_Event_1(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void BndEvt__Button_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature(); // Function UW-LoginWidget.UW-LoginWidget_C.BndEvt__Button_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Destruct(); // Function UW-LoginWidget.UW-LoginWidget_C.Destruct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void CustomEvent_1(int32_t ErrorIndex, struct FString ErrorID, struct FString Parameters); // Function UW-LoginWidget.UW-LoginWidget_C.CustomEvent_1(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Login(); // Function UW-LoginWidget.UW-LoginWidget_C.Login(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void PressAnyKeyDelayTime(); // Function UW-LoginWidget.UW-LoginWidget_C.PressAnyKeyDelayTime(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void BndEvt__Button_1_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature(); // Function UW-LoginWidget.UW-LoginWidget_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void CustomEvent_2(struct FString Parameters); // Function UW-LoginWidget.UW-LoginWidget_C.CustomEvent_2(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void QuitGame(float DelayTime); // Function UW-LoginWidget.UW-LoginWidget_C.QuitGame(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void ExecuteUbergraph_UW-LoginWidget(int32_t EntryPoint); // Function UW-LoginWidget.UW-LoginWidget_C.ExecuteUbergraph_UW-LoginWidget(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
};

// Function UW-LoginWidget.UW-LoginWidget_C.DefaultMessage
inline void UUW-LoginWidget_C::DefaultMessage() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-LoginWidget.UW-LoginWidget_C.DefaultMessage");

	struct DefaultMessage_Params {
		
	}; DefaultMessage_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-LoginWidget.UW-LoginWidget_C.ServicePlatformLogin
inline void UUW-LoginWidget_C::ServicePlatformLogin() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-LoginWidget.UW-LoginWidget_C.ServicePlatformLogin");

	struct ServicePlatformLogin_Params {
		
	}; ServicePlatformLogin_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-LoginWidget.UW-LoginWidget_C.ShowBlock
inline void UUW-LoginWidget_C::ShowBlock() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-LoginWidget.UW-LoginWidget_C.ShowBlock");

	struct ShowBlock_Params {
		
	}; ShowBlock_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-LoginWidget.UW-LoginWidget_C.UodateWaitingUser
inline void UUW-LoginWidget_C::UodateWaitingUser(int32_t UserCount, int32_t Time) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-LoginWidget.UW-LoginWidget_C.UodateWaitingUser");

	struct UodateWaitingUser_Params {
		int32_t UserCount;
		int32_t Time;
	}; UodateWaitingUser_Params Params;

	Params.UserCount = UserCount;
	Params.Time = Time;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-LoginWidget.UW-LoginWidget_C.ShowNotice
inline void UUW-LoginWidget_C::ShowNotice(int32_t Idx) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-LoginWidget.UW-LoginWidget_C.ShowNotice");

	struct ShowNotice_Params {
		int32_t Idx;
	}; ShowNotice_Params Params;

	Params.Idx = Idx;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-LoginWidget.UW-LoginWidget_C.Construct
inline void UUW-LoginWidget_C::Construct() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-LoginWidget.UW-LoginWidget_C.Construct");

	struct Construct_Params {
		
	}; Construct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-LoginWidget.UW-LoginWidget_C.Tick
inline void UUW-LoginWidget_C::Tick(struct Unknown MyGeometry, float InDeltaTime) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-LoginWidget.UW-LoginWidget_C.Tick");

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

// Function UW-LoginWidget.UW-LoginWidget_C.BndEvt__Button_479_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
inline void UUW-LoginWidget_C::BndEvt__Button_479_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-LoginWidget.UW-LoginWidget_C.BndEvt__Button_479_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	struct BndEvt__Button_479_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params {
		
	}; BndEvt__Button_479_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-LoginWidget.UW-LoginWidget_C.BndEvt__Button_481_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
inline void UUW-LoginWidget_C::BndEvt__Button_481_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-LoginWidget.UW-LoginWidget_C.BndEvt__Button_481_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	struct BndEvt__Button_481_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params {
		
	}; BndEvt__Button_481_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-LoginWidget.UW-LoginWidget_C.BndEvt__Button_485_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
inline void UUW-LoginWidget_C::BndEvt__Button_485_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-LoginWidget.UW-LoginWidget_C.BndEvt__Button_485_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	struct BndEvt__Button_485_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params {
		
	}; BndEvt__Button_485_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-LoginWidget.UW-LoginWidget_C.BndEvt__Button_482_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
inline void UUW-LoginWidget_C::BndEvt__Button_482_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-LoginWidget.UW-LoginWidget_C.BndEvt__Button_482_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");

	struct BndEvt__Button_482_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params {
		
	}; BndEvt__Button_482_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-LoginWidget.UW-LoginWidget_C.BndEvt__Button_484_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
inline void UUW-LoginWidget_C::BndEvt__Button_484_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-LoginWidget.UW-LoginWidget_C.BndEvt__Button_484_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");

	struct BndEvt__Button_484_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params {
		
	}; BndEvt__Button_484_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-LoginWidget.UW-LoginWidget_C.OnLoginSucceeded
inline void UUW-LoginWidget_C::OnLoginSucceeded() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-LoginWidget.UW-LoginWidget_C.OnLoginSucceeded");

	struct OnLoginSucceeded_Params {
		
	}; OnLoginSucceeded_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-LoginWidget.UW-LoginWidget_C.OnCreateCharacter_Event_1
inline void UUW-LoginWidget_C::OnCreateCharacter_Event_1() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-LoginWidget.UW-LoginWidget_C.OnCreateCharacter_Event_1");

	struct OnCreateCharacter_Event_1_Params {
		
	}; OnCreateCharacter_Event_1_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-LoginWidget.UW-LoginWidget_C.WaitingUserDelegate_Event_1
inline void UUW-LoginWidget_C::WaitingUserDelegate_Event_1(int32_t WaitingUserCount, int32_t WaitingTime) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-LoginWidget.UW-LoginWidget_C.WaitingUserDelegate_Event_1");

	struct WaitingUserDelegate_Event_1_Params {
		int32_t WaitingUserCount;
		int32_t WaitingTime;
	}; WaitingUserDelegate_Event_1_Params Params;

	Params.WaitingUserCount = WaitingUserCount;
	Params.WaitingTime = WaitingTime;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-LoginWidget.UW-LoginWidget_C.BndEvt__Button_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
inline void UUW-LoginWidget_C::BndEvt__Button_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-LoginWidget.UW-LoginWidget_C.BndEvt__Button_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature");

	struct BndEvt__Button_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params {
		
	}; BndEvt__Button_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-LoginWidget.UW-LoginWidget_C.Destruct
inline void UUW-LoginWidget_C::Destruct() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-LoginWidget.UW-LoginWidget_C.Destruct");

	struct Destruct_Params {
		
	}; Destruct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-LoginWidget.UW-LoginWidget_C.CustomEvent_1
inline void UUW-LoginWidget_C::CustomEvent_1(int32_t ErrorIndex, struct FString ErrorID, struct FString Parameters) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-LoginWidget.UW-LoginWidget_C.CustomEvent_1");

	struct CustomEvent_1_Params {
		int32_t ErrorIndex;
		struct FString ErrorID;
		struct FString Parameters;
	}; CustomEvent_1_Params Params;

	Params.ErrorIndex = ErrorIndex;
	Params.ErrorID = ErrorID;
	Params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-LoginWidget.UW-LoginWidget_C.Login
inline void UUW-LoginWidget_C::Login() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-LoginWidget.UW-LoginWidget_C.Login");

	struct Login_Params {
		
	}; Login_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-LoginWidget.UW-LoginWidget_C.PressAnyKeyDelayTime
inline void UUW-LoginWidget_C::PressAnyKeyDelayTime() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-LoginWidget.UW-LoginWidget_C.PressAnyKeyDelayTime");

	struct PressAnyKeyDelayTime_Params {
		
	}; PressAnyKeyDelayTime_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-LoginWidget.UW-LoginWidget_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
inline void UUW-LoginWidget_C::BndEvt__Button_1_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-LoginWidget.UW-LoginWidget_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature");

	struct BndEvt__Button_1_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params {
		
	}; BndEvt__Button_1_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-LoginWidget.UW-LoginWidget_C.CustomEvent_2
inline void UUW-LoginWidget_C::CustomEvent_2(struct FString Parameters) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-LoginWidget.UW-LoginWidget_C.CustomEvent_2");

	struct CustomEvent_2_Params {
		struct FString Parameters;
	}; CustomEvent_2_Params Params;

	Params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-LoginWidget.UW-LoginWidget_C.QuitGame
inline void UUW-LoginWidget_C::QuitGame(float DelayTime) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-LoginWidget.UW-LoginWidget_C.QuitGame");

	struct QuitGame_Params {
		float DelayTime;
	}; QuitGame_Params Params;

	Params.DelayTime = DelayTime;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-LoginWidget.UW-LoginWidget_C.ExecuteUbergraph_UW-LoginWidget
inline void UUW-LoginWidget_C::ExecuteUbergraph_UW-LoginWidget(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-LoginWidget.UW-LoginWidget_C.ExecuteUbergraph_UW-LoginWidget");

	struct ExecuteUbergraph_UW-LoginWidget_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_UW-LoginWidget_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

