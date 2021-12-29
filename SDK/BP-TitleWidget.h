// WidgetBlueprintGeneratedClass BP-TitleWidget.BP-TitleWidget_C
class UBP-TitleWidget_C : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown UW-Title_Login; // 0x250 (8)
	struct FMulticastInlineDelegate OnTriedToLogin; // 0x258 (16)
	struct FMulticastInlineDelegate OnTriedToTestLogin; // 0x268 (16)
	char bEnableDevServer : 0; // 0x278 (1)
	struct FMulticastInlineDelegate OnMoveLobby; // 0x280 (16)
	struct FMulticastInlineDelegate OnPlayBGM; // 0x290 (16)
	struct FMulticastInlineDelegate OnSaveUserData; // 0x2A0 (16)
	char bPlayBGM : 0; // 0x2B0 (1)
	char bRememberMe : 0; // 0x2B1 (1)
	struct FMulticastInlineDelegate OnSkipTitle; // 0x2B8 (16)

	void HideExitPopup(); // Function BP-TitleWidget.BP-TitleWidget_C.HideExitPopup(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void Login(); // Function BP-TitleWidget.BP-TitleWidget_C.Login(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void ValidateUserName(struct FText InputUserName, char& ret, struct FName& UserName); // Function BP-TitleWidget.BP-TitleWidget_C.ValidateUserName(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void Construct(); // Function BP-TitleWidget.BP-TitleWidget_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void OnLogin(); // Function BP-TitleWidget.BP-TitleWidget_C.OnLogin(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void ShowMouseCursor(); // Function BP-TitleWidget.BP-TitleWidget_C.ShowMouseCursor(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void OnLoginSucceeded(); // Function BP-TitleWidget.BP-TitleWidget_C.OnLoginSucceeded(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void OnLoginFailed(int32_t ErrorIndex, struct FString ErrorID, struct FString Parameters); // Function BP-TitleWidget.BP-TitleWidget_C.OnLoginFailed(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void ExecuteUbergraph_BP-TitleWidget(int32_t EntryPoint); // Function BP-TitleWidget.BP-TitleWidget_C.ExecuteUbergraph_BP-TitleWidget(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void OnSkipTitle__DelegateSignature(); // Function BP-TitleWidget.BP-TitleWidget_C.OnSkipTitle__DelegateSignature(Public|Delegate|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void OnSaveUserData__DelegateSignature(); // Function BP-TitleWidget.BP-TitleWidget_C.OnSaveUserData__DelegateSignature(Public|Delegate|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void OnPlayBGM__DelegateSignature(); // Function BP-TitleWidget.BP-TitleWidget_C.OnPlayBGM__DelegateSignature(Public|Delegate|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void OnMoveLobby__DelegateSignature(); // Function BP-TitleWidget.BP-TitleWidget_C.OnMoveLobby__DelegateSignature(Public|Delegate|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void OnTriedToTestLogin__DelegateSignature(struct FName UserName, struct FString TestIP); // Function BP-TitleWidget.BP-TitleWidget_C.OnTriedToTestLogin__DelegateSignature(Public|Delegate|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void OnTriedToLogin__DelegateSignature(struct FName UserName, struct FString Password); // Function BP-TitleWidget.BP-TitleWidget_C.OnTriedToLogin__DelegateSignature(Public|Delegate|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
};

// Function BP-TitleWidget.BP-TitleWidget_C.HideExitPopup
inline void UBP-TitleWidget_C::HideExitPopup() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-TitleWidget.BP-TitleWidget_C.HideExitPopup");

	struct HideExitPopup_Params {
		
	}; HideExitPopup_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-TitleWidget.BP-TitleWidget_C.Login
inline void UBP-TitleWidget_C::Login() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-TitleWidget.BP-TitleWidget_C.Login");

	struct Login_Params {
		
	}; Login_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-TitleWidget.BP-TitleWidget_C.ValidateUserName
inline void UBP-TitleWidget_C::ValidateUserName(struct FText InputUserName, char& ret, struct FName& UserName) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-TitleWidget.BP-TitleWidget_C.ValidateUserName");

	struct ValidateUserName_Params {
		struct FText InputUserName;
		char& ret;
		struct FName& UserName;
	}; ValidateUserName_Params Params;

	Params.InputUserName = InputUserName;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	ret = Params.ret;
	UserName = Params.UserName;

}

// Function BP-TitleWidget.BP-TitleWidget_C.Construct
inline void UBP-TitleWidget_C::Construct() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-TitleWidget.BP-TitleWidget_C.Construct");

	struct Construct_Params {
		
	}; Construct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-TitleWidget.BP-TitleWidget_C.OnLogin
inline void UBP-TitleWidget_C::OnLogin() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-TitleWidget.BP-TitleWidget_C.OnLogin");

	struct OnLogin_Params {
		
	}; OnLogin_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-TitleWidget.BP-TitleWidget_C.ShowMouseCursor
inline void UBP-TitleWidget_C::ShowMouseCursor() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-TitleWidget.BP-TitleWidget_C.ShowMouseCursor");

	struct ShowMouseCursor_Params {
		
	}; ShowMouseCursor_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-TitleWidget.BP-TitleWidget_C.OnLoginSucceeded
inline void UBP-TitleWidget_C::OnLoginSucceeded() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-TitleWidget.BP-TitleWidget_C.OnLoginSucceeded");

	struct OnLoginSucceeded_Params {
		
	}; OnLoginSucceeded_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-TitleWidget.BP-TitleWidget_C.OnLoginFailed
inline void UBP-TitleWidget_C::OnLoginFailed(int32_t ErrorIndex, struct FString ErrorID, struct FString Parameters) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-TitleWidget.BP-TitleWidget_C.OnLoginFailed");

	struct OnLoginFailed_Params {
		int32_t ErrorIndex;
		struct FString ErrorID;
		struct FString Parameters;
	}; OnLoginFailed_Params Params;

	Params.ErrorIndex = ErrorIndex;
	Params.ErrorID = ErrorID;
	Params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-TitleWidget.BP-TitleWidget_C.ExecuteUbergraph_BP-TitleWidget
inline void UBP-TitleWidget_C::ExecuteUbergraph_BP-TitleWidget(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-TitleWidget.BP-TitleWidget_C.ExecuteUbergraph_BP-TitleWidget");

	struct ExecuteUbergraph_BP-TitleWidget_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_BP-TitleWidget_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-TitleWidget.BP-TitleWidget_C.OnSkipTitle__DelegateSignature
inline void UBP-TitleWidget_C::OnSkipTitle__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-TitleWidget.BP-TitleWidget_C.OnSkipTitle__DelegateSignature");

	struct OnSkipTitle__DelegateSignature_Params {
		
	}; OnSkipTitle__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-TitleWidget.BP-TitleWidget_C.OnSaveUserData__DelegateSignature
inline void UBP-TitleWidget_C::OnSaveUserData__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-TitleWidget.BP-TitleWidget_C.OnSaveUserData__DelegateSignature");

	struct OnSaveUserData__DelegateSignature_Params {
		
	}; OnSaveUserData__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-TitleWidget.BP-TitleWidget_C.OnPlayBGM__DelegateSignature
inline void UBP-TitleWidget_C::OnPlayBGM__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-TitleWidget.BP-TitleWidget_C.OnPlayBGM__DelegateSignature");

	struct OnPlayBGM__DelegateSignature_Params {
		
	}; OnPlayBGM__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-TitleWidget.BP-TitleWidget_C.OnMoveLobby__DelegateSignature
inline void UBP-TitleWidget_C::OnMoveLobby__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-TitleWidget.BP-TitleWidget_C.OnMoveLobby__DelegateSignature");

	struct OnMoveLobby__DelegateSignature_Params {
		
	}; OnMoveLobby__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-TitleWidget.BP-TitleWidget_C.OnTriedToTestLogin__DelegateSignature
inline void UBP-TitleWidget_C::OnTriedToTestLogin__DelegateSignature(struct FName UserName, struct FString TestIP) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-TitleWidget.BP-TitleWidget_C.OnTriedToTestLogin__DelegateSignature");

	struct OnTriedToTestLogin__DelegateSignature_Params {
		struct FName UserName;
		struct FString TestIP;
	}; OnTriedToTestLogin__DelegateSignature_Params Params;

	Params.UserName = UserName;
	Params.TestIP = TestIP;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-TitleWidget.BP-TitleWidget_C.OnTriedToLogin__DelegateSignature
inline void UBP-TitleWidget_C::OnTriedToLogin__DelegateSignature(struct FName UserName, struct FString Password) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-TitleWidget.BP-TitleWidget_C.OnTriedToLogin__DelegateSignature");

	struct OnTriedToLogin__DelegateSignature_Params {
		struct FName UserName;
		struct FString Password;
	}; OnTriedToLogin__DelegateSignature_Params Params;

	Params.UserName = UserName;
	Params.Password = Password;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

