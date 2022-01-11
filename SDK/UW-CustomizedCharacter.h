// WidgetBlueprintGeneratedClass UW-CustomizedCharacter.UW-CustomizedCharacter_C
class UUW-CustomizedCharacter_C : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown CurrentAccel; // 0x250 (12)
	struct Unknown TargetAccel; // 0x25C (12)
	struct Unknown CurrentCameraActor; // 0x268 (8)
	struct Unknown OldCameraLocation; // 0x270 (12)
	struct Unknown CurrentCameraLocation; // 0x27C (12)
	struct Unknown OriginCameraLocation; // 0x288 (12)
	struct Unknown TargetCameraLocation; // 0x294 (12)
	struct Unknown DataAsset; // 0x2A0 (8)
	char ResetOriginTransform : 0; // 0x2A8 (1)
	float BeginFocusDist; // 0x2AC (4)
	float EndFocusDist; // 0x2B0 (4)
	float CurrentFocusDist; // 0x2B4 (4)

	void UpdateMouseWheel(float Delta); // Function UW-CustomizedCharacter.UW-CustomizedCharacter_C.UpdateMouseWheel(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void UpdateMouseY(float Delta); // Function UW-CustomizedCharacter.UW-CustomizedCharacter_C.UpdateMouseY(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void UpdateMouseX(float Delta); // Function UW-CustomizedCharacter.UW-CustomizedCharacter_C.UpdateMouseX(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void UpdateCharacter(float DeltaTime); // Function UW-CustomizedCharacter.UW-CustomizedCharacter_C.UpdateCharacter(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void UpdateCamera(float DeltaTime); // Function UW-CustomizedCharacter.UW-CustomizedCharacter_C.UpdateCamera(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void PercentDist(float CurDist, float& Percent); // Function UW-CustomizedCharacter.UW-CustomizedCharacter_C.PercentDist(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void MouseWheel(float Delta); // Function UW-CustomizedCharacter.UW-CustomizedCharacter_C.MouseWheel(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void Reset(char ForceSnap); // Function UW-CustomizedCharacter.UW-CustomizedCharacter_C.Reset(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void SetCameraActor(struct Unknown CurrentCamera, struct Unknown TargetCamera, float BeginFocusDist, float EndFocusDist); // Function UW-CustomizedCharacter.UW-CustomizedCharacter_C.SetCameraActor(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void GetLobbyWidget(struct Unknown& Widget); // Function UW-CustomizedCharacter.UW-CustomizedCharacter_C.GetLobbyWidget(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void Hide(); // Function UW-CustomizedCharacter.UW-CustomizedCharacter_C.Hide(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void Show(); // Function UW-CustomizedCharacter.UW-CustomizedCharacter_C.Show(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void Tick(struct Unknown MyGeometry, float InDeltaTime); // Function UW-CustomizedCharacter.UW-CustomizedCharacter_C.Tick(BlueprintCosmetic|Event|Public|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void ExecuteUbergraph_UW-CustomizedCharacter(int32_t EntryPoint); // Function UW-CustomizedCharacter.UW-CustomizedCharacter_C.ExecuteUbergraph_UW-CustomizedCharacter(Final|UbergraphFunction|HasDefaults) // <Game_BE.exe+0x2B80160>
};

// Function UW-CustomizedCharacter.UW-CustomizedCharacter_C.UpdateMouseWheel
inline void UUW-CustomizedCharacter_C::UpdateMouseWheel(float Delta) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-CustomizedCharacter.UW-CustomizedCharacter_C.UpdateMouseWheel");

	struct UpdateMouseWheel_Params {
		float Delta;
	}; UpdateMouseWheel_Params Params;

	Params.Delta = Delta;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-CustomizedCharacter.UW-CustomizedCharacter_C.UpdateMouseY
inline void UUW-CustomizedCharacter_C::UpdateMouseY(float Delta) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-CustomizedCharacter.UW-CustomizedCharacter_C.UpdateMouseY");

	struct UpdateMouseY_Params {
		float Delta;
	}; UpdateMouseY_Params Params;

	Params.Delta = Delta;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-CustomizedCharacter.UW-CustomizedCharacter_C.UpdateMouseX
inline void UUW-CustomizedCharacter_C::UpdateMouseX(float Delta) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-CustomizedCharacter.UW-CustomizedCharacter_C.UpdateMouseX");

	struct UpdateMouseX_Params {
		float Delta;
	}; UpdateMouseX_Params Params;

	Params.Delta = Delta;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-CustomizedCharacter.UW-CustomizedCharacter_C.UpdateCharacter
inline void UUW-CustomizedCharacter_C::UpdateCharacter(float DeltaTime) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-CustomizedCharacter.UW-CustomizedCharacter_C.UpdateCharacter");

	struct UpdateCharacter_Params {
		float DeltaTime;
	}; UpdateCharacter_Params Params;

	Params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-CustomizedCharacter.UW-CustomizedCharacter_C.UpdateCamera
inline void UUW-CustomizedCharacter_C::UpdateCamera(float DeltaTime) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-CustomizedCharacter.UW-CustomizedCharacter_C.UpdateCamera");

	struct UpdateCamera_Params {
		float DeltaTime;
	}; UpdateCamera_Params Params;

	Params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-CustomizedCharacter.UW-CustomizedCharacter_C.PercentDist
inline void UUW-CustomizedCharacter_C::PercentDist(float CurDist, float& Percent) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-CustomizedCharacter.UW-CustomizedCharacter_C.PercentDist");

	struct PercentDist_Params {
		float CurDist;
		float& Percent;
	}; PercentDist_Params Params;

	Params.CurDist = CurDist;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Percent = Params.Percent;

}

// Function UW-CustomizedCharacter.UW-CustomizedCharacter_C.MouseWheel
inline void UUW-CustomizedCharacter_C::MouseWheel(float Delta) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-CustomizedCharacter.UW-CustomizedCharacter_C.MouseWheel");

	struct MouseWheel_Params {
		float Delta;
	}; MouseWheel_Params Params;

	Params.Delta = Delta;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-CustomizedCharacter.UW-CustomizedCharacter_C.Reset
inline void UUW-CustomizedCharacter_C::Reset(char ForceSnap) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-CustomizedCharacter.UW-CustomizedCharacter_C.Reset");

	struct Reset_Params {
		char ForceSnap;
	}; Reset_Params Params;

	Params.ForceSnap = ForceSnap;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-CustomizedCharacter.UW-CustomizedCharacter_C.SetCameraActor
inline void UUW-CustomizedCharacter_C::SetCameraActor(struct Unknown CurrentCamera, struct Unknown TargetCamera, float BeginFocusDist, float EndFocusDist) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-CustomizedCharacter.UW-CustomizedCharacter_C.SetCameraActor");

	struct SetCameraActor_Params {
		struct Unknown CurrentCamera;
		struct Unknown TargetCamera;
		float BeginFocusDist;
		float EndFocusDist;
	}; SetCameraActor_Params Params;

	Params.CurrentCamera = CurrentCamera;
	Params.TargetCamera = TargetCamera;
	Params.BeginFocusDist = BeginFocusDist;
	Params.EndFocusDist = EndFocusDist;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-CustomizedCharacter.UW-CustomizedCharacter_C.GetLobbyWidget
inline void UUW-CustomizedCharacter_C::GetLobbyWidget(struct Unknown& Widget) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-CustomizedCharacter.UW-CustomizedCharacter_C.GetLobbyWidget");

	struct GetLobbyWidget_Params {
		struct Unknown& Widget;
	}; GetLobbyWidget_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Widget = Params.Widget;

}

// Function UW-CustomizedCharacter.UW-CustomizedCharacter_C.Hide
inline void UUW-CustomizedCharacter_C::Hide() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-CustomizedCharacter.UW-CustomizedCharacter_C.Hide");

	struct Hide_Params {
		
	}; Hide_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-CustomizedCharacter.UW-CustomizedCharacter_C.Show
inline void UUW-CustomizedCharacter_C::Show() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-CustomizedCharacter.UW-CustomizedCharacter_C.Show");

	struct Show_Params {
		
	}; Show_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-CustomizedCharacter.UW-CustomizedCharacter_C.Tick
inline void UUW-CustomizedCharacter_C::Tick(struct Unknown MyGeometry, float InDeltaTime) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-CustomizedCharacter.UW-CustomizedCharacter_C.Tick");

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

// Function UW-CustomizedCharacter.UW-CustomizedCharacter_C.ExecuteUbergraph_UW-CustomizedCharacter
inline void UUW-CustomizedCharacter_C::ExecuteUbergraph_UW-CustomizedCharacter(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-CustomizedCharacter.UW-CustomizedCharacter_C.ExecuteUbergraph_UW-CustomizedCharacter");

	struct ExecuteUbergraph_UW-CustomizedCharacter_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_UW-CustomizedCharacter_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

