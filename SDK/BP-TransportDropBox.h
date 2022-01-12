// BlueprintGeneratedClass BP-TransportDropBox.BP-TransportDropBox_C
class ABP-TransportDropBox_C : public ABravoHotelTransportDropBoxActor {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4A8 (8)
	float OverWater_CV_OverWater_77012AB948B572A268E63583418444D0; // 0x4B0 (4)
	char OverWater__Direction_77012AB948B572A268E63583418444D0; // 0x4B4 (1)
	struct UTimelineComponent OverWater; // 0x4B8 (8)
	float HittingWater_CV_OverWater_7E5F9D2E4D0DDDC70F2F67AD035A6212; // 0x4C0 (4)
	char HittingWater__Direction_7E5F9D2E4D0DDDC70F2F67AD035A6212; // 0x4C4 (1)
	struct UTimelineComponent HittingWater; // 0x4C8 (8)
	float LandingTimer; // 0x4D0 (4)
	struct TArray<struct FSpawnItemResult> ItemResult; // 0x4D8 (16)
	float ParachuteTimer; // 0x4E8 (4)
	float LandingDelay; // 0x4EC (4)
	float ForceLandingDelaySeconds; // 0x4F0 (4)
	char bLandedOnGround : 0; // 0x4F4 (1)

	void UserConstructionScript(); // Function BP-TransportDropBox.BP-TransportDropBox_C.UserConstructionScript(Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void OverWater__FinishedFunc(); // Function BP-TransportDropBox.BP-TransportDropBox_C.OverWater__FinishedFunc(BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void OverWater__UpdateFunc(); // Function BP-TransportDropBox.BP-TransportDropBox_C.OverWater__UpdateFunc(BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void HittingWater__FinishedFunc(); // Function BP-TransportDropBox.BP-TransportDropBox_C.HittingWater__FinishedFunc(BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void HittingWater__UpdateFunc(); // Function BP-TransportDropBox.BP-TransportDropBox_C.HittingWater__UpdateFunc(BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void NormalHitSound(); // Function BP-TransportDropBox.BP-TransportDropBox_C.NormalHitSound(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void WaterHitSound(); // Function BP-TransportDropBox.BP-TransportDropBox_C.WaterHitSound(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void OnActivated(); // Function BP-TransportDropBox.BP-TransportDropBox_C.OnActivated(Event|Public|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void SetLastPosition(struct FVector Location, struct FRotator Rotation); // Function BP-TransportDropBox.BP-TransportDropBox_C.SetLastPosition(Net|NetMulticast|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void Cutoff(); // Function BP-TransportDropBox.BP-TransportDropBox_C.Cutoff(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void OpenDropBoxEvent(); // Function BP-TransportDropBox.BP-TransportDropBox_C.OpenDropBoxEvent(Event|Protected|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void OnOverWater(); // Function BP-TransportDropBox.BP-TransportDropBox_C.OnOverWater(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void OnHittingWater(); // Function BP-TransportDropBox.BP-TransportDropBox_C.OnHittingWater(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void GenerateItems(struct FName ItemKey); // Function BP-TransportDropBox.BP-TransportDropBox_C.GenerateItems(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void SetItemInBlueprint(struct FName& ItemKey); // Function BP-TransportDropBox.BP-TransportDropBox_C.SetItemInBlueprint(Event|Public|HasOutParms|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void LandedOnWaterEvent(); // Function BP-TransportDropBox.BP-TransportDropBox_C.LandedOnWaterEvent(Event|Protected|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void ReceiveTick(float DeltaSeconds); // Function BP-TransportDropBox.BP-TransportDropBox_C.ReceiveTick(Event|Public|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void ExecuteUbergraph_BP-TransportDropBox(int32_t EntryPoint); // Function BP-TransportDropBox.BP-TransportDropBox_C.ExecuteUbergraph_BP-TransportDropBox(Final|UbergraphFunction|HasDefaults) // <Game_BE.exe+0x2B80160>
};

// Function BP-TransportDropBox.BP-TransportDropBox_C.UserConstructionScript
inline void ABP-TransportDropBox_C::UserConstructionScript() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-TransportDropBox.BP-TransportDropBox_C.UserConstructionScript");

	struct UserConstructionScript_Params {
		
	}; UserConstructionScript_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-TransportDropBox.BP-TransportDropBox_C.OverWater__FinishedFunc
inline void ABP-TransportDropBox_C::OverWater__FinishedFunc() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-TransportDropBox.BP-TransportDropBox_C.OverWater__FinishedFunc");

	struct OverWater__FinishedFunc_Params {
		
	}; OverWater__FinishedFunc_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-TransportDropBox.BP-TransportDropBox_C.OverWater__UpdateFunc
inline void ABP-TransportDropBox_C::OverWater__UpdateFunc() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-TransportDropBox.BP-TransportDropBox_C.OverWater__UpdateFunc");

	struct OverWater__UpdateFunc_Params {
		
	}; OverWater__UpdateFunc_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-TransportDropBox.BP-TransportDropBox_C.HittingWater__FinishedFunc
inline void ABP-TransportDropBox_C::HittingWater__FinishedFunc() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-TransportDropBox.BP-TransportDropBox_C.HittingWater__FinishedFunc");

	struct HittingWater__FinishedFunc_Params {
		
	}; HittingWater__FinishedFunc_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-TransportDropBox.BP-TransportDropBox_C.HittingWater__UpdateFunc
inline void ABP-TransportDropBox_C::HittingWater__UpdateFunc() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-TransportDropBox.BP-TransportDropBox_C.HittingWater__UpdateFunc");

	struct HittingWater__UpdateFunc_Params {
		
	}; HittingWater__UpdateFunc_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-TransportDropBox.BP-TransportDropBox_C.NormalHitSound
inline void ABP-TransportDropBox_C::NormalHitSound() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-TransportDropBox.BP-TransportDropBox_C.NormalHitSound");

	struct NormalHitSound_Params {
		
	}; NormalHitSound_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-TransportDropBox.BP-TransportDropBox_C.WaterHitSound
inline void ABP-TransportDropBox_C::WaterHitSound() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-TransportDropBox.BP-TransportDropBox_C.WaterHitSound");

	struct WaterHitSound_Params {
		
	}; WaterHitSound_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-TransportDropBox.BP-TransportDropBox_C.OnActivated
inline void ABP-TransportDropBox_C::OnActivated() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-TransportDropBox.BP-TransportDropBox_C.OnActivated");

	struct OnActivated_Params {
		
	}; OnActivated_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-TransportDropBox.BP-TransportDropBox_C.SetLastPosition
inline void ABP-TransportDropBox_C::SetLastPosition(struct FVector Location, struct FRotator Rotation) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-TransportDropBox.BP-TransportDropBox_C.SetLastPosition");

	struct SetLastPosition_Params {
		struct FVector Location;
		struct FRotator Rotation;
	}; SetLastPosition_Params Params;

	Params.Location = Location;
	Params.Rotation = Rotation;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-TransportDropBox.BP-TransportDropBox_C.Cutoff
inline void ABP-TransportDropBox_C::Cutoff() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-TransportDropBox.BP-TransportDropBox_C.Cutoff");

	struct Cutoff_Params {
		
	}; Cutoff_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-TransportDropBox.BP-TransportDropBox_C.OpenDropBoxEvent
inline void ABP-TransportDropBox_C::OpenDropBoxEvent() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-TransportDropBox.BP-TransportDropBox_C.OpenDropBoxEvent");

	struct OpenDropBoxEvent_Params {
		
	}; OpenDropBoxEvent_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-TransportDropBox.BP-TransportDropBox_C.OnOverWater
inline void ABP-TransportDropBox_C::OnOverWater() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-TransportDropBox.BP-TransportDropBox_C.OnOverWater");

	struct OnOverWater_Params {
		
	}; OnOverWater_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-TransportDropBox.BP-TransportDropBox_C.OnHittingWater
inline void ABP-TransportDropBox_C::OnHittingWater() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-TransportDropBox.BP-TransportDropBox_C.OnHittingWater");

	struct OnHittingWater_Params {
		
	}; OnHittingWater_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-TransportDropBox.BP-TransportDropBox_C.GenerateItems
inline void ABP-TransportDropBox_C::GenerateItems(struct FName ItemKey) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-TransportDropBox.BP-TransportDropBox_C.GenerateItems");

	struct GenerateItems_Params {
		struct FName ItemKey;
	}; GenerateItems_Params Params;

	Params.ItemKey = ItemKey;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-TransportDropBox.BP-TransportDropBox_C.SetItemInBlueprint
inline void ABP-TransportDropBox_C::SetItemInBlueprint(struct FName& ItemKey) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-TransportDropBox.BP-TransportDropBox_C.SetItemInBlueprint");

	struct SetItemInBlueprint_Params {
		struct FName& ItemKey;
	}; SetItemInBlueprint_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	ItemKey = Params.ItemKey;

}

// Function BP-TransportDropBox.BP-TransportDropBox_C.LandedOnWaterEvent
inline void ABP-TransportDropBox_C::LandedOnWaterEvent() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-TransportDropBox.BP-TransportDropBox_C.LandedOnWaterEvent");

	struct LandedOnWaterEvent_Params {
		
	}; LandedOnWaterEvent_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-TransportDropBox.BP-TransportDropBox_C.ReceiveTick
inline void ABP-TransportDropBox_C::ReceiveTick(float DeltaSeconds) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-TransportDropBox.BP-TransportDropBox_C.ReceiveTick");

	struct ReceiveTick_Params {
		float DeltaSeconds;
	}; ReceiveTick_Params Params;

	Params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-TransportDropBox.BP-TransportDropBox_C.ExecuteUbergraph_BP-TransportDropBox
inline void ABP-TransportDropBox_C::ExecuteUbergraph_BP-TransportDropBox(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-TransportDropBox.BP-TransportDropBox_C.ExecuteUbergraph_BP-TransportDropBox");

	struct ExecuteUbergraph_BP-TransportDropBox_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_BP-TransportDropBox_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

