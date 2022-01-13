// WidgetBlueprintGeneratedClass UW-ArmoryInput.UW-ArmoryInput_C
class UUW-ArmoryInput_C : public UUserWidget {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248 (8)
	struct UImage Image_20; // 0x250 (8)
	struct FRotator TargetAccel; // 0x258 (12)
	struct FRotator CurrentAccel; // 0x264 (12)
	float TargetScale; // 0x270 (4)
	struct UOutGameArmoryDataType_C DataAsset; // 0x278 (8)
	char ResetOriginTransform : 0; // 0x280 (1)
	char MouseInputLock : 0; // 0x281 (1)
	char IsUpdatingRotation : 0; // 0x282 (1)
	char IsValidMeshActor : 0; // 0x283 (1)
	char IsPressedLeftMouse : 0; // 0x284 (1)

	void CheckValidMeshActor(char& Return); // Function UW-ArmoryInput.UW-ArmoryInput_C.CheckValidMeshActor(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void IsSubTabContains(struct FString TabName, char& State); // Function UW-ArmoryInput.UW-ArmoryInput_C.IsSubTabContains(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void UpdateMouseWheel(float Delta); // Function UW-ArmoryInput.UW-ArmoryInput_C.UpdateMouseWheel(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void UpdateMouseY(float Delta); // Function UW-ArmoryInput.UW-ArmoryInput_C.UpdateMouseY(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void UpdateMouseX(float Delta); // Function UW-ArmoryInput.UW-ArmoryInput_C.UpdateMouseX(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void Reset(char Snap); // Function UW-ArmoryInput.UW-ArmoryInput_C.Reset(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void GetLobbyWidget(struct UBP-LobbyWidget_Web_C& LobbyWidget); // Function UW-ArmoryInput.UW-ArmoryInput_C.GetLobbyWidget(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void MouseWheel(float Delta); // Function UW-ArmoryInput.UW-ArmoryInput_C.MouseWheel(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void Hide(); // Function UW-ArmoryInput.UW-ArmoryInput_C.Hide(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void Show(); // Function UW-ArmoryInput.UW-ArmoryInput_C.Show(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void Construct(); // Function UW-ArmoryInput.UW-ArmoryInput_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UW-ArmoryInput.UW-ArmoryInput_C.Tick(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void ExecuteUbergraph_UW-ArmoryInput(int32_t EntryPoint); // Function UW-ArmoryInput.UW-ArmoryInput_C.ExecuteUbergraph_UW-ArmoryInput(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
};

// Function UW-ArmoryInput.UW-ArmoryInput_C.CheckValidMeshActor
inline void UUW-ArmoryInput_C::CheckValidMeshActor(char& Return) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ArmoryInput.UW-ArmoryInput_C.CheckValidMeshActor");

	struct CheckValidMeshActor_Params {
		char& Return;
	}; CheckValidMeshActor_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Return = Params.Return;

}

// Function UW-ArmoryInput.UW-ArmoryInput_C.IsSubTabContains
inline void UUW-ArmoryInput_C::IsSubTabContains(struct FString TabName, char& State) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ArmoryInput.UW-ArmoryInput_C.IsSubTabContains");

	struct IsSubTabContains_Params {
		struct FString TabName;
		char& State;
	}; IsSubTabContains_Params Params;

	Params.TabName = TabName;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	State = Params.State;

}

// Function UW-ArmoryInput.UW-ArmoryInput_C.UpdateMouseWheel
inline void UUW-ArmoryInput_C::UpdateMouseWheel(float Delta) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ArmoryInput.UW-ArmoryInput_C.UpdateMouseWheel");

	struct UpdateMouseWheel_Params {
		float Delta;
	}; UpdateMouseWheel_Params Params;

	Params.Delta = Delta;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ArmoryInput.UW-ArmoryInput_C.UpdateMouseY
inline void UUW-ArmoryInput_C::UpdateMouseY(float Delta) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ArmoryInput.UW-ArmoryInput_C.UpdateMouseY");

	struct UpdateMouseY_Params {
		float Delta;
	}; UpdateMouseY_Params Params;

	Params.Delta = Delta;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ArmoryInput.UW-ArmoryInput_C.UpdateMouseX
inline void UUW-ArmoryInput_C::UpdateMouseX(float Delta) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ArmoryInput.UW-ArmoryInput_C.UpdateMouseX");

	struct UpdateMouseX_Params {
		float Delta;
	}; UpdateMouseX_Params Params;

	Params.Delta = Delta;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ArmoryInput.UW-ArmoryInput_C.Reset
inline void UUW-ArmoryInput_C::Reset(char Snap) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ArmoryInput.UW-ArmoryInput_C.Reset");

	struct Reset_Params {
		char Snap;
	}; Reset_Params Params;

	Params.Snap = Snap;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ArmoryInput.UW-ArmoryInput_C.GetLobbyWidget
inline void UUW-ArmoryInput_C::GetLobbyWidget(struct UBP-LobbyWidget_Web_C& LobbyWidget) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ArmoryInput.UW-ArmoryInput_C.GetLobbyWidget");

	struct GetLobbyWidget_Params {
		struct UBP-LobbyWidget_Web_C& LobbyWidget;
	}; GetLobbyWidget_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	LobbyWidget = Params.LobbyWidget;

}

// Function UW-ArmoryInput.UW-ArmoryInput_C.MouseWheel
inline void UUW-ArmoryInput_C::MouseWheel(float Delta) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ArmoryInput.UW-ArmoryInput_C.MouseWheel");

	struct MouseWheel_Params {
		float Delta;
	}; MouseWheel_Params Params;

	Params.Delta = Delta;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ArmoryInput.UW-ArmoryInput_C.Hide
inline void UUW-ArmoryInput_C::Hide() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ArmoryInput.UW-ArmoryInput_C.Hide");

	struct Hide_Params {
		
	}; Hide_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ArmoryInput.UW-ArmoryInput_C.Show
inline void UUW-ArmoryInput_C::Show() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ArmoryInput.UW-ArmoryInput_C.Show");

	struct Show_Params {
		
	}; Show_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ArmoryInput.UW-ArmoryInput_C.Construct
inline void UUW-ArmoryInput_C::Construct() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ArmoryInput.UW-ArmoryInput_C.Construct");

	struct Construct_Params {
		
	}; Construct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ArmoryInput.UW-ArmoryInput_C.Tick
inline void UUW-ArmoryInput_C::Tick(struct FGeometry MyGeometry, float InDeltaTime) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ArmoryInput.UW-ArmoryInput_C.Tick");

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

// Function UW-ArmoryInput.UW-ArmoryInput_C.ExecuteUbergraph_UW-ArmoryInput
inline void UUW-ArmoryInput_C::ExecuteUbergraph_UW-ArmoryInput(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ArmoryInput.UW-ArmoryInput_C.ExecuteUbergraph_UW-ArmoryInput");

	struct ExecuteUbergraph_UW-ArmoryInput_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_UW-ArmoryInput_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

