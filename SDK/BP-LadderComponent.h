// BlueprintGeneratedClass BP-LadderComponent.BP-LadderComponent_C
class UBP-LadderComponent_C : public ULadderComponent {

public:

	struct Unknown UberGraphFrame; // 0x210 (8)
	char NeedToChangeHand : 0; // 0x218 (1)
	float CrntAxisValue; // 0x21C (4)
	float GoalLocationZ; // 0x220 (4)
	char NeedMoveOnLadder : 0; // 0x224 (1)
	float MotionMinAlpha; // 0x228 (4)
	char CanStopMotion : 0; // 0x22C (1)
	float DirectSnapLocZ; // 0x230 (4)
	float DeltaSecond; // 0x234 (4)
	float LastSecond; // 0x238 (4)
	int32_t AdditionalStepCount; // 0x23C (4)

	void CalcLadderInteractionType(); // Function BP-LadderComponent.BP-LadderComponent_C.CalcLadderInteractionType(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void CanCancelMotion(char& CanCancel); // Function BP-LadderComponent.BP-LadderComponent_C.CanCancelMotion(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void GetEndLocation(struct Unknown& LadderRelativeLocation); // Function BP-LadderComponent.BP-LadderComponent_C.GetEndLocation(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void SetMovingInfo(); // Function BP-LadderComponent.BP-LadderComponent_C.SetMovingInfo(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void MoveInMotion(); // Function BP-LadderComponent.BP-LadderComponent_C.MoveInMotion(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void ActiveCameraInterp(); // Function BP-LadderComponent.BP-LadderComponent_C.ActiveCameraInterp(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void CalcSnappingTime(); // Function BP-LadderComponent.BP-LadderComponent_C.CalcSnappingTime(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void InitializeLadder(); // Function BP-LadderComponent.BP-LadderComponent_C.InitializeLadder(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void SetMovementOnLadder(float AxisValue); // Function BP-LadderComponent.BP-LadderComponent_C.SetMovementOnLadder(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void AddMovementOnLadder(float AxisValue); // Function BP-LadderComponent.BP-LadderComponent_C.AddMovementOnLadder(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void CheckCanExitLadder(char IsTop, char& Result); // Function BP-LadderComponent.BP-LadderComponent_C.CheckCanExitLadder(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void ChangeMovementMode(char OnLadder); // Function BP-LadderComponent.BP-LadderComponent_C.ChangeMovementMode(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void CalcTargetLocation(enum class Unknow InLadderInteractionType, struct Unknown& OutTargetLocation); // Function BP-LadderComponent.BP-LadderComponent_C.CalcTargetLocation(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void SetCharacterClimbSettings(char ClimbOn); // Function BP-LadderComponent.BP-LadderComponent_C.SetCharacterClimbSettings(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void SnapToLadder(); // Function BP-LadderComponent.BP-LadderComponent_C.SnapToLadder(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void SetSnappingInfo(float& DirectSnapLocZ); // Function BP-LadderComponent.BP-LadderComponent_C.SetSnappingInfo(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void SetLadderPos(); // Function BP-LadderComponent.BP-LadderComponent_C.SetLadderPos(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void CheckLadderEnd(float Input Scale, char& Result, char& IsTop, float& InputScale); // Function BP-LadderComponent.BP-LadderComponent_C.CheckLadderEnd(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void OnNotifyEnd_ABB5B46F49E086A9FC6EC9AE877A3650(struct FName NotifyName); // Function BP-LadderComponent.BP-LadderComponent_C.OnNotifyEnd_ABB5B46F49E086A9FC6EC9AE877A3650(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void OnNotifyBegin_ABB5B46F49E086A9FC6EC9AE877A3650(struct FName NotifyName); // Function BP-LadderComponent.BP-LadderComponent_C.OnNotifyBegin_ABB5B46F49E086A9FC6EC9AE877A3650(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void OnInterrupted_ABB5B46F49E086A9FC6EC9AE877A3650(struct FName NotifyName); // Function BP-LadderComponent.BP-LadderComponent_C.OnInterrupted_ABB5B46F49E086A9FC6EC9AE877A3650(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void OnBlendOut_ABB5B46F49E086A9FC6EC9AE877A3650(struct FName NotifyName); // Function BP-LadderComponent.BP-LadderComponent_C.OnBlendOut_ABB5B46F49E086A9FC6EC9AE877A3650(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void OnCompleted_ABB5B46F49E086A9FC6EC9AE877A3650(struct FName NotifyName); // Function BP-LadderComponent.BP-LadderComponent_C.OnCompleted_ABB5B46F49E086A9FC6EC9AE877A3650(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void ServerSetMovementOnLadder(struct Unknown LadderLocation, float AxisValue); // Function BP-LadderComponent.BP-LadderComponent_C.ServerSetMovementOnLadder(Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void StopMontage(struct Unknown StopMontage); // Function BP-LadderComponent.BP-LadderComponent_C.StopMontage(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void CompleteExitingLadder(); // Function BP-LadderComponent.BP-LadderComponent_C.CompleteExitingLadder(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void CompleteEnteringLadder(); // Function BP-LadderComponent.BP-LadderComponent_C.CompleteEnteringLadder(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void MultiStopMontage(struct Unknown StopMontage); // Function BP-LadderComponent.BP-LadderComponent_C.MultiStopMontage(Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void ServerStopMontage(struct Unknown StopMontage); // Function BP-LadderComponent.BP-LadderComponent_C.ServerStopMontage(Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void LadderStateEvent(); // Function BP-LadderComponent.BP-LadderComponent_C.LadderStateEvent(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void ServerDownLadder(enum class Unknow LadderInteractionType); // Function BP-LadderComponent.BP-LadderComponent_C.ServerDownLadder(Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void PlayLadderAnim(); // Function BP-LadderComponent.BP-LadderComponent_C.PlayLadderAnim(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void StartMoveInMotion(); // Function BP-LadderComponent.BP-LadderComponent_C.StartMoveInMotion(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void ReceiveTick(float DeltaSeconds); // Function BP-LadderComponent.BP-LadderComponent_C.ReceiveTick(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void ReceiveBeginPlay(); // Function BP-LadderComponent.BP-LadderComponent_C.ReceiveBeginPlay(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void CancelMotion(float AxisValue); // Function BP-LadderComponent.BP-LadderComponent_C.CancelMotion(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void ExceptionSetUsingLadder(struct Unknown UsingLadder); // Function BP-LadderComponent.BP-LadderComponent_C.ExceptionSetUsingLadder(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void ServerUseLadder(enum class Unknow LadderInteractionType, float SnappingTime, float DirectSnapLocZ, struct Unknown UsingLadder); // Function BP-LadderComponent.BP-LadderComponent_C.ServerUseLadder(Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void MultiUseLadder(enum class Unknow LadderInteractionType, float SnappingTime, float DirectSnapLocZ, struct Unknown UsingLadder); // Function BP-LadderComponent.BP-LadderComponent_C.MultiUseLadder(Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void MultiDownLadder(enum class Unknow LadderInteractionType); // Function BP-LadderComponent.BP-LadderComponent_C.MultiDownLadder(Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void StartStopMontage(struct Unknown StopMontage); // Function BP-LadderComponent.BP-LadderComponent_C.StartStopMontage(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void ServerSetLadderState(enum class Unknow LadderState); // Function BP-LadderComponent.BP-LadderComponent_C.ServerSetLadderState(Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void K2_StartUseladder(); // Function BP-LadderComponent.BP-LadderComponent_C.K2_StartUseladder(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void K2_StopUseLadder(); // Function BP-LadderComponent.BP-LadderComponent_C.K2_StopUseLadder(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void K2_MoveRightOnLadder(float AxisValue); // Function BP-LadderComponent.BP-LadderComponent_C.K2_MoveRightOnLadder(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void K2_MoveForwardOnLadder(float AxisValue); // Function BP-LadderComponent.BP-LadderComponent_C.K2_MoveForwardOnLadder(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void ExecuteUbergraph_BP-LadderComponent(int32_t EntryPoint); // Function BP-LadderComponent.BP-LadderComponent_C.ExecuteUbergraph_BP-LadderComponent(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
};

// Function BP-LadderComponent.BP-LadderComponent_C.CalcLadderInteractionType
inline void UBP-LadderComponent_C::CalcLadderInteractionType() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-LadderComponent.BP-LadderComponent_C.CalcLadderInteractionType");

	struct CalcLadderInteractionType_Params {
		
	}; CalcLadderInteractionType_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-LadderComponent.BP-LadderComponent_C.CanCancelMotion
inline void UBP-LadderComponent_C::CanCancelMotion(char& CanCancel) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-LadderComponent.BP-LadderComponent_C.CanCancelMotion");

	struct CanCancelMotion_Params {
		char& CanCancel;
	}; CanCancelMotion_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	CanCancel = Params.CanCancel;

}

// Function BP-LadderComponent.BP-LadderComponent_C.GetEndLocation
inline void UBP-LadderComponent_C::GetEndLocation(struct Unknown& LadderRelativeLocation) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-LadderComponent.BP-LadderComponent_C.GetEndLocation");

	struct GetEndLocation_Params {
		struct Unknown& LadderRelativeLocation;
	}; GetEndLocation_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	LadderRelativeLocation = Params.LadderRelativeLocation;

}

// Function BP-LadderComponent.BP-LadderComponent_C.SetMovingInfo
inline void UBP-LadderComponent_C::SetMovingInfo() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-LadderComponent.BP-LadderComponent_C.SetMovingInfo");

	struct SetMovingInfo_Params {
		
	}; SetMovingInfo_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-LadderComponent.BP-LadderComponent_C.MoveInMotion
inline void UBP-LadderComponent_C::MoveInMotion() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-LadderComponent.BP-LadderComponent_C.MoveInMotion");

	struct MoveInMotion_Params {
		
	}; MoveInMotion_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-LadderComponent.BP-LadderComponent_C.ActiveCameraInterp
inline void UBP-LadderComponent_C::ActiveCameraInterp() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-LadderComponent.BP-LadderComponent_C.ActiveCameraInterp");

	struct ActiveCameraInterp_Params {
		
	}; ActiveCameraInterp_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-LadderComponent.BP-LadderComponent_C.CalcSnappingTime
inline void UBP-LadderComponent_C::CalcSnappingTime() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-LadderComponent.BP-LadderComponent_C.CalcSnappingTime");

	struct CalcSnappingTime_Params {
		
	}; CalcSnappingTime_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-LadderComponent.BP-LadderComponent_C.InitializeLadder
inline void UBP-LadderComponent_C::InitializeLadder() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-LadderComponent.BP-LadderComponent_C.InitializeLadder");

	struct InitializeLadder_Params {
		
	}; InitializeLadder_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-LadderComponent.BP-LadderComponent_C.SetMovementOnLadder
inline void UBP-LadderComponent_C::SetMovementOnLadder(float AxisValue) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-LadderComponent.BP-LadderComponent_C.SetMovementOnLadder");

	struct SetMovementOnLadder_Params {
		float AxisValue;
	}; SetMovementOnLadder_Params Params;

	Params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-LadderComponent.BP-LadderComponent_C.AddMovementOnLadder
inline void UBP-LadderComponent_C::AddMovementOnLadder(float AxisValue) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-LadderComponent.BP-LadderComponent_C.AddMovementOnLadder");

	struct AddMovementOnLadder_Params {
		float AxisValue;
	}; AddMovementOnLadder_Params Params;

	Params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-LadderComponent.BP-LadderComponent_C.CheckCanExitLadder
inline void UBP-LadderComponent_C::CheckCanExitLadder(char IsTop, char& Result) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-LadderComponent.BP-LadderComponent_C.CheckCanExitLadder");

	struct CheckCanExitLadder_Params {
		char IsTop;
		char& Result;
	}; CheckCanExitLadder_Params Params;

	Params.IsTop = IsTop;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Result = Params.Result;

}

// Function BP-LadderComponent.BP-LadderComponent_C.ChangeMovementMode
inline void UBP-LadderComponent_C::ChangeMovementMode(char OnLadder) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-LadderComponent.BP-LadderComponent_C.ChangeMovementMode");

	struct ChangeMovementMode_Params {
		char OnLadder;
	}; ChangeMovementMode_Params Params;

	Params.OnLadder = OnLadder;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-LadderComponent.BP-LadderComponent_C.CalcTargetLocation
inline void UBP-LadderComponent_C::CalcTargetLocation(enum class Unknow InLadderInteractionType, struct Unknown& OutTargetLocation) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-LadderComponent.BP-LadderComponent_C.CalcTargetLocation");

	struct CalcTargetLocation_Params {
		enum class Unknow InLadderInteractionType;
		struct Unknown& OutTargetLocation;
	}; CalcTargetLocation_Params Params;

	Params.InLadderInteractionType = InLadderInteractionType;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	OutTargetLocation = Params.OutTargetLocation;

}

// Function BP-LadderComponent.BP-LadderComponent_C.SetCharacterClimbSettings
inline void UBP-LadderComponent_C::SetCharacterClimbSettings(char ClimbOn) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-LadderComponent.BP-LadderComponent_C.SetCharacterClimbSettings");

	struct SetCharacterClimbSettings_Params {
		char ClimbOn;
	}; SetCharacterClimbSettings_Params Params;

	Params.ClimbOn = ClimbOn;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-LadderComponent.BP-LadderComponent_C.SnapToLadder
inline void UBP-LadderComponent_C::SnapToLadder() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-LadderComponent.BP-LadderComponent_C.SnapToLadder");

	struct SnapToLadder_Params {
		
	}; SnapToLadder_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-LadderComponent.BP-LadderComponent_C.SetSnappingInfo
inline void UBP-LadderComponent_C::SetSnappingInfo(float& DirectSnapLocZ) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-LadderComponent.BP-LadderComponent_C.SetSnappingInfo");

	struct SetSnappingInfo_Params {
		float& DirectSnapLocZ;
	}; SetSnappingInfo_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	DirectSnapLocZ = Params.DirectSnapLocZ;

}

// Function BP-LadderComponent.BP-LadderComponent_C.SetLadderPos
inline void UBP-LadderComponent_C::SetLadderPos() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-LadderComponent.BP-LadderComponent_C.SetLadderPos");

	struct SetLadderPos_Params {
		
	}; SetLadderPos_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-LadderComponent.BP-LadderComponent_C.CheckLadderEnd
inline void UBP-LadderComponent_C::CheckLadderEnd(float Input Scale, char& Result, char& IsTop, float& InputScale) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-LadderComponent.BP-LadderComponent_C.CheckLadderEnd");

	struct CheckLadderEnd_Params {
		float Input Scale;
		char& Result;
		char& IsTop;
		float& InputScale;
	}; CheckLadderEnd_Params Params;

	Params.Input Scale = Input Scale;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Result = Params.Result;
	IsTop = Params.IsTop;
	InputScale = Params.InputScale;

}

// Function BP-LadderComponent.BP-LadderComponent_C.OnNotifyEnd_ABB5B46F49E086A9FC6EC9AE877A3650
inline void UBP-LadderComponent_C::OnNotifyEnd_ABB5B46F49E086A9FC6EC9AE877A3650(struct FName NotifyName) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-LadderComponent.BP-LadderComponent_C.OnNotifyEnd_ABB5B46F49E086A9FC6EC9AE877A3650");

	struct OnNotifyEnd_ABB5B46F49E086A9FC6EC9AE877A3650_Params {
		struct FName NotifyName;
	}; OnNotifyEnd_ABB5B46F49E086A9FC6EC9AE877A3650_Params Params;

	Params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-LadderComponent.BP-LadderComponent_C.OnNotifyBegin_ABB5B46F49E086A9FC6EC9AE877A3650
inline void UBP-LadderComponent_C::OnNotifyBegin_ABB5B46F49E086A9FC6EC9AE877A3650(struct FName NotifyName) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-LadderComponent.BP-LadderComponent_C.OnNotifyBegin_ABB5B46F49E086A9FC6EC9AE877A3650");

	struct OnNotifyBegin_ABB5B46F49E086A9FC6EC9AE877A3650_Params {
		struct FName NotifyName;
	}; OnNotifyBegin_ABB5B46F49E086A9FC6EC9AE877A3650_Params Params;

	Params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-LadderComponent.BP-LadderComponent_C.OnInterrupted_ABB5B46F49E086A9FC6EC9AE877A3650
inline void UBP-LadderComponent_C::OnInterrupted_ABB5B46F49E086A9FC6EC9AE877A3650(struct FName NotifyName) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-LadderComponent.BP-LadderComponent_C.OnInterrupted_ABB5B46F49E086A9FC6EC9AE877A3650");

	struct OnInterrupted_ABB5B46F49E086A9FC6EC9AE877A3650_Params {
		struct FName NotifyName;
	}; OnInterrupted_ABB5B46F49E086A9FC6EC9AE877A3650_Params Params;

	Params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-LadderComponent.BP-LadderComponent_C.OnBlendOut_ABB5B46F49E086A9FC6EC9AE877A3650
inline void UBP-LadderComponent_C::OnBlendOut_ABB5B46F49E086A9FC6EC9AE877A3650(struct FName NotifyName) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-LadderComponent.BP-LadderComponent_C.OnBlendOut_ABB5B46F49E086A9FC6EC9AE877A3650");

	struct OnBlendOut_ABB5B46F49E086A9FC6EC9AE877A3650_Params {
		struct FName NotifyName;
	}; OnBlendOut_ABB5B46F49E086A9FC6EC9AE877A3650_Params Params;

	Params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-LadderComponent.BP-LadderComponent_C.OnCompleted_ABB5B46F49E086A9FC6EC9AE877A3650
inline void UBP-LadderComponent_C::OnCompleted_ABB5B46F49E086A9FC6EC9AE877A3650(struct FName NotifyName) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-LadderComponent.BP-LadderComponent_C.OnCompleted_ABB5B46F49E086A9FC6EC9AE877A3650");

	struct OnCompleted_ABB5B46F49E086A9FC6EC9AE877A3650_Params {
		struct FName NotifyName;
	}; OnCompleted_ABB5B46F49E086A9FC6EC9AE877A3650_Params Params;

	Params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-LadderComponent.BP-LadderComponent_C.ServerSetMovementOnLadder
inline void UBP-LadderComponent_C::ServerSetMovementOnLadder(struct Unknown LadderLocation, float AxisValue) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-LadderComponent.BP-LadderComponent_C.ServerSetMovementOnLadder");

	struct ServerSetMovementOnLadder_Params {
		struct Unknown LadderLocation;
		float AxisValue;
	}; ServerSetMovementOnLadder_Params Params;

	Params.LadderLocation = LadderLocation;
	Params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-LadderComponent.BP-LadderComponent_C.StopMontage
inline void UBP-LadderComponent_C::StopMontage(struct Unknown StopMontage) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-LadderComponent.BP-LadderComponent_C.StopMontage");

	struct StopMontage_Params {
		struct Unknown StopMontage;
	}; StopMontage_Params Params;

	Params.StopMontage = StopMontage;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-LadderComponent.BP-LadderComponent_C.CompleteExitingLadder
inline void UBP-LadderComponent_C::CompleteExitingLadder() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-LadderComponent.BP-LadderComponent_C.CompleteExitingLadder");

	struct CompleteExitingLadder_Params {
		
	}; CompleteExitingLadder_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-LadderComponent.BP-LadderComponent_C.CompleteEnteringLadder
inline void UBP-LadderComponent_C::CompleteEnteringLadder() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-LadderComponent.BP-LadderComponent_C.CompleteEnteringLadder");

	struct CompleteEnteringLadder_Params {
		
	}; CompleteEnteringLadder_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-LadderComponent.BP-LadderComponent_C.MultiStopMontage
inline void UBP-LadderComponent_C::MultiStopMontage(struct Unknown StopMontage) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-LadderComponent.BP-LadderComponent_C.MultiStopMontage");

	struct MultiStopMontage_Params {
		struct Unknown StopMontage;
	}; MultiStopMontage_Params Params;

	Params.StopMontage = StopMontage;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-LadderComponent.BP-LadderComponent_C.ServerStopMontage
inline void UBP-LadderComponent_C::ServerStopMontage(struct Unknown StopMontage) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-LadderComponent.BP-LadderComponent_C.ServerStopMontage");

	struct ServerStopMontage_Params {
		struct Unknown StopMontage;
	}; ServerStopMontage_Params Params;

	Params.StopMontage = StopMontage;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-LadderComponent.BP-LadderComponent_C.LadderStateEvent
inline void UBP-LadderComponent_C::LadderStateEvent() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-LadderComponent.BP-LadderComponent_C.LadderStateEvent");

	struct LadderStateEvent_Params {
		
	}; LadderStateEvent_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-LadderComponent.BP-LadderComponent_C.ServerDownLadder
inline void UBP-LadderComponent_C::ServerDownLadder(enum class Unknow LadderInteractionType) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-LadderComponent.BP-LadderComponent_C.ServerDownLadder");

	struct ServerDownLadder_Params {
		enum class Unknow LadderInteractionType;
	}; ServerDownLadder_Params Params;

	Params.LadderInteractionType = LadderInteractionType;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-LadderComponent.BP-LadderComponent_C.PlayLadderAnim
inline void UBP-LadderComponent_C::PlayLadderAnim() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-LadderComponent.BP-LadderComponent_C.PlayLadderAnim");

	struct PlayLadderAnim_Params {
		
	}; PlayLadderAnim_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-LadderComponent.BP-LadderComponent_C.StartMoveInMotion
inline void UBP-LadderComponent_C::StartMoveInMotion() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-LadderComponent.BP-LadderComponent_C.StartMoveInMotion");

	struct StartMoveInMotion_Params {
		
	}; StartMoveInMotion_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-LadderComponent.BP-LadderComponent_C.ReceiveTick
inline void UBP-LadderComponent_C::ReceiveTick(float DeltaSeconds) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-LadderComponent.BP-LadderComponent_C.ReceiveTick");

	struct ReceiveTick_Params {
		float DeltaSeconds;
	}; ReceiveTick_Params Params;

	Params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-LadderComponent.BP-LadderComponent_C.ReceiveBeginPlay
inline void UBP-LadderComponent_C::ReceiveBeginPlay() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-LadderComponent.BP-LadderComponent_C.ReceiveBeginPlay");

	struct ReceiveBeginPlay_Params {
		
	}; ReceiveBeginPlay_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-LadderComponent.BP-LadderComponent_C.CancelMotion
inline void UBP-LadderComponent_C::CancelMotion(float AxisValue) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-LadderComponent.BP-LadderComponent_C.CancelMotion");

	struct CancelMotion_Params {
		float AxisValue;
	}; CancelMotion_Params Params;

	Params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-LadderComponent.BP-LadderComponent_C.ExceptionSetUsingLadder
inline void UBP-LadderComponent_C::ExceptionSetUsingLadder(struct Unknown UsingLadder) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-LadderComponent.BP-LadderComponent_C.ExceptionSetUsingLadder");

	struct ExceptionSetUsingLadder_Params {
		struct Unknown UsingLadder;
	}; ExceptionSetUsingLadder_Params Params;

	Params.UsingLadder = UsingLadder;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-LadderComponent.BP-LadderComponent_C.ServerUseLadder
inline void UBP-LadderComponent_C::ServerUseLadder(enum class Unknow LadderInteractionType, float SnappingTime, float DirectSnapLocZ, struct Unknown UsingLadder) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-LadderComponent.BP-LadderComponent_C.ServerUseLadder");

	struct ServerUseLadder_Params {
		enum class Unknow LadderInteractionType;
		float SnappingTime;
		float DirectSnapLocZ;
		struct Unknown UsingLadder;
	}; ServerUseLadder_Params Params;

	Params.LadderInteractionType = LadderInteractionType;
	Params.SnappingTime = SnappingTime;
	Params.DirectSnapLocZ = DirectSnapLocZ;
	Params.UsingLadder = UsingLadder;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-LadderComponent.BP-LadderComponent_C.MultiUseLadder
inline void UBP-LadderComponent_C::MultiUseLadder(enum class Unknow LadderInteractionType, float SnappingTime, float DirectSnapLocZ, struct Unknown UsingLadder) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-LadderComponent.BP-LadderComponent_C.MultiUseLadder");

	struct MultiUseLadder_Params {
		enum class Unknow LadderInteractionType;
		float SnappingTime;
		float DirectSnapLocZ;
		struct Unknown UsingLadder;
	}; MultiUseLadder_Params Params;

	Params.LadderInteractionType = LadderInteractionType;
	Params.SnappingTime = SnappingTime;
	Params.DirectSnapLocZ = DirectSnapLocZ;
	Params.UsingLadder = UsingLadder;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-LadderComponent.BP-LadderComponent_C.MultiDownLadder
inline void UBP-LadderComponent_C::MultiDownLadder(enum class Unknow LadderInteractionType) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-LadderComponent.BP-LadderComponent_C.MultiDownLadder");

	struct MultiDownLadder_Params {
		enum class Unknow LadderInteractionType;
	}; MultiDownLadder_Params Params;

	Params.LadderInteractionType = LadderInteractionType;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-LadderComponent.BP-LadderComponent_C.StartStopMontage
inline void UBP-LadderComponent_C::StartStopMontage(struct Unknown StopMontage) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-LadderComponent.BP-LadderComponent_C.StartStopMontage");

	struct StartStopMontage_Params {
		struct Unknown StopMontage;
	}; StartStopMontage_Params Params;

	Params.StopMontage = StopMontage;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-LadderComponent.BP-LadderComponent_C.ServerSetLadderState
inline void UBP-LadderComponent_C::ServerSetLadderState(enum class Unknow LadderState) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-LadderComponent.BP-LadderComponent_C.ServerSetLadderState");

	struct ServerSetLadderState_Params {
		enum class Unknow LadderState;
	}; ServerSetLadderState_Params Params;

	Params.LadderState = LadderState;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-LadderComponent.BP-LadderComponent_C.K2_StartUseladder
inline void UBP-LadderComponent_C::K2_StartUseladder() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-LadderComponent.BP-LadderComponent_C.K2_StartUseladder");

	struct K2_StartUseladder_Params {
		
	}; K2_StartUseladder_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-LadderComponent.BP-LadderComponent_C.K2_StopUseLadder
inline void UBP-LadderComponent_C::K2_StopUseLadder() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-LadderComponent.BP-LadderComponent_C.K2_StopUseLadder");

	struct K2_StopUseLadder_Params {
		
	}; K2_StopUseLadder_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-LadderComponent.BP-LadderComponent_C.K2_MoveRightOnLadder
inline void UBP-LadderComponent_C::K2_MoveRightOnLadder(float AxisValue) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-LadderComponent.BP-LadderComponent_C.K2_MoveRightOnLadder");

	struct K2_MoveRightOnLadder_Params {
		float AxisValue;
	}; K2_MoveRightOnLadder_Params Params;

	Params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-LadderComponent.BP-LadderComponent_C.K2_MoveForwardOnLadder
inline void UBP-LadderComponent_C::K2_MoveForwardOnLadder(float AxisValue) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-LadderComponent.BP-LadderComponent_C.K2_MoveForwardOnLadder");

	struct K2_MoveForwardOnLadder_Params {
		float AxisValue;
	}; K2_MoveForwardOnLadder_Params Params;

	Params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-LadderComponent.BP-LadderComponent_C.ExecuteUbergraph_BP-LadderComponent
inline void UBP-LadderComponent_C::ExecuteUbergraph_BP-LadderComponent(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-LadderComponent.BP-LadderComponent_C.ExecuteUbergraph_BP-LadderComponent");

	struct ExecuteUbergraph_BP-LadderComponent_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_BP-LadderComponent_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

