// Enum UFSM.FSM_Transition
enum class FSM_Transition : uint8_t {
	Aborted = 0,
	Succeeded = 1,
	FSM_MAX = 2,
};

// Enum UFSM.ESeverity
enum class ESeverity : uint8_t {
	Fatal = 0,
	Error = 1,
	Warning = 2,
	Info = 3,
	ESeverity_MAX = 4,
};

// Class UFSM.FSM_SetState_Async
class UFSM_SetState_Async : public UBlueprintAsyncActionBase {

public:

	struct UStateMachineComponent Target; // 0x30 (8)
	struct FName StateName; // 0x38 (8)
	float Timer; // 0x40 (4)
	char Repeat : 0; // 0x44 (1)
	struct FTimerHandle TimerHandle; // 0x48 (8)
	struct FMulticastInlineDelegate OnSuccess; // 0x50 (16)
	struct FMulticastInlineDelegate OnAborted; // 0x60 (16)

	struct UFSM_SetState_Async FSM_SetState_Async(struct UStateMachineComponent FSM, float WaitForSeconds, struct FName Name, char Loop); // Function UFSM.FSM_SetState_Async.FSM_SetState_Async(Final|Native|Static|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1213A80>
	void Execute(); // Function UFSM.FSM_SetState_Async.Execute(Final|Native|Private) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1212CB0>
};

// Class UFSM.FSM_SetStateID_Async
class UFSM_SetStateID_Async : public UBlueprintAsyncActionBase {

public:

	struct UStateMachineComponent Target; // 0x30 (8)
	char StateID; // 0x38 (1)
	float Timer; // 0x3C (4)
	char Repeat : 0; // 0x40 (1)
	struct FTimerHandle TimerHandle; // 0x48 (8)
	struct FMulticastInlineDelegate OnSuccess; // 0x50 (16)
	struct FMulticastInlineDelegate OnAborted; // 0x60 (16)

	struct UFSM_SetStateID_Async FSM_SetStateID_Async(struct UStateMachineComponent FSM, float WaitForSeconds, char ID, char Loop); // Function UFSM.FSM_SetStateID_Async.FSM_SetStateID_Async(Final|Native|Static|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1213350>
	void Execute(); // Function UFSM.FSM_SetStateID_Async.Execute(Final|Native|Private) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1212C30>
};

// Class UFSM.FSM_SetState_ConditionalAsync
class UFSM_SetState_ConditionalAsync : public UBlueprintAsyncActionBase {

public:

	struct UStateMachineComponent Target; // 0x30 (8)
	enum class FSM_Transition Conditional; // 0x38 (1)
	struct FName StateName; // 0x3C (8)
	float Timer; // 0x44 (4)
	char Repeat : 0; // 0x48 (1)
	struct FTimerHandle TimerHandle; // 0x50 (8)
	struct FMulticastInlineDelegate OnSuccess; // 0x58 (16)
	struct FMulticastInlineDelegate OnAborted; // 0x68 (16)

	struct UFSM_SetState_ConditionalAsync FSM_SetState_ConditionalAsync(struct UStateMachineComponent FSM, float WaitForSeconds, struct FName Name, enum class FSM_Transition Condition, char Loop); // Function UFSM.FSM_SetState_ConditionalAsync.FSM_SetState_ConditionalAsync(Final|Native|Static|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1213DD0>
	void Execute(); // Function UFSM.FSM_SetState_ConditionalAsync.Execute(Final|Native|Private) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1212CF0>
};

// Class UFSM.FSM_SetStateID_ConditionalAsync
class UFSM_SetStateID_ConditionalAsync : public UBlueprintAsyncActionBase {

public:

	struct UStateMachineComponent Target; // 0x30 (8)
	enum class FSM_Transition Conditional; // 0x38 (1)
	char StateID; // 0x39 (1)
	float Timer; // 0x3C (4)
	char Repeat : 0; // 0x40 (1)
	struct FTimerHandle TimerHandle; // 0x48 (8)
	struct FMulticastInlineDelegate OnSuccess; // 0x50 (16)
	struct FMulticastInlineDelegate OnAborted; // 0x60 (16)

	struct UFSM_SetStateID_ConditionalAsync FSM_SetStateID_ConditionalAsync(struct UStateMachineComponent FSM, float WaitForSeconds, char ID, enum class FSM_Transition Condition, char Loop); // Function UFSM.FSM_SetStateID_ConditionalAsync.FSM_SetStateID_ConditionalAsync(Final|Native|Static|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x12136B0>
	void Execute(); // Function UFSM.FSM_SetStateID_ConditionalAsync.Execute(Final|Native|Private) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1212C70>
};

// Class UFSM.FSM_SetState_AsyncWithCallbacks
class UFSM_SetState_AsyncWithCallbacks : public UBlueprintAsyncActionBase {

public:

	struct UStateMachineComponent Target; // 0x30 (8)
	struct FDelegate InBegin; // 0x38 (16)
	struct FDelegate InExit; // 0x48 (16)
	struct FName StateName; // 0x58 (8)
	float Timer; // 0x60 (4)
	char Repeat : 0; // 0x64 (1)
	struct FTimerHandle TimerHandle; // 0x68 (8)
	struct FMulticastInlineDelegate OnSuccess; // 0x70 (16)
	struct FMulticastInlineDelegate OnAborted; // 0x80 (16)

	struct UFSM_SetState_AsyncWithCallbacks FSM_SetState_AsyncWithCallbacks(struct UStateMachineComponent FSM, float WaitForSeconds, struct FName Name, char Loop, struct FDelegate& ExitPreviousStateCallback, struct FDelegate& BeginNextStateCallback); // Function UFSM.FSM_SetState_AsyncWithCallbacks.FSM_SetState_AsyncWithCallbacks(Final|Native|Static|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1213BC0>
	void Execute(); // Function UFSM.FSM_SetState_AsyncWithCallbacks.Execute(Final|Native|Private) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1212CD0>
};

// Class UFSM.FSM_SetStateID_AsyncWithCallbacks
class UFSM_SetStateID_AsyncWithCallbacks : public UBlueprintAsyncActionBase {

public:

	struct UStateMachineComponent Target; // 0x30 (8)
	struct FDelegate InBegin; // 0x38 (16)
	struct FDelegate InExit; // 0x48 (16)
	char StateID; // 0x58 (1)
	float Timer; // 0x5C (4)
	char Repeat : 0; // 0x60 (1)
	struct FTimerHandle TimerHandle; // 0x68 (8)
	struct FMulticastInlineDelegate OnSuccess; // 0x70 (16)
	struct FMulticastInlineDelegate OnAborted; // 0x80 (16)

	struct UFSM_SetStateID_AsyncWithCallbacks FSM_SetStateID_AsyncWithCallbacks(struct UStateMachineComponent FSM, float WaitForSeconds, char ID, char Loop, struct FDelegate& ExitPreviousStateCallback, struct FDelegate& BeginNextStateCallback); // Function UFSM.FSM_SetStateID_AsyncWithCallbacks.FSM_SetStateID_AsyncWithCallbacks(Final|Native|Static|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1213490>
	void Execute(); // Function UFSM.FSM_SetStateID_AsyncWithCallbacks.Execute(Final|Native|Private) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1212C50>
};

// Class UFSM.FSM_SetState_ConditionalAsyncWithCallbacks
class UFSM_SetState_ConditionalAsyncWithCallbacks : public UBlueprintAsyncActionBase {

public:

	struct UStateMachineComponent Target; // 0x30 (8)
	enum class FSM_Transition Conditional; // 0x38 (1)
	struct FDelegate InBegin; // 0x3C (16)
	struct FDelegate InExit; // 0x4C (16)
	struct FName StateName; // 0x5C (8)
	float Timer; // 0x64 (4)
	char Repeat : 0; // 0x68 (1)
	struct FTimerHandle TimerHandle; // 0x70 (8)
	struct FMulticastInlineDelegate OnSuccess; // 0x78 (16)
	struct FMulticastInlineDelegate OnAborted; // 0x88 (16)

	struct UFSM_SetState_ConditionalAsyncWithCallbacks FSM_SetState_ConditionalAsyncWithCallbacks(struct UStateMachineComponent FSM, float WaitForSeconds, struct FName Name, enum class FSM_Transition Condition, char Loop, struct FDelegate& ExitPreviousStateCallback, struct FDelegate& BeginNextStateCallback); // Function UFSM.FSM_SetState_ConditionalAsyncWithCallbacks.FSM_SetState_ConditionalAsyncWithCallbacks(Final|Native|Static|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1213F50>
	void Execute(); // Function UFSM.FSM_SetState_ConditionalAsyncWithCallbacks.Execute(Final|Native|Private) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1212D10>
};

// Class UFSM.FSM_SetStateID_ConditionalAsyncWithCallbacks
class UFSM_SetStateID_ConditionalAsyncWithCallbacks : public UBlueprintAsyncActionBase {

public:

	struct UStateMachineComponent Target; // 0x30 (8)
	enum class FSM_Transition Conditional; // 0x38 (1)
	struct FDelegate InBegin; // 0x3C (16)
	struct FDelegate InExit; // 0x4C (16)
	char StateID; // 0x5C (1)
	float Timer; // 0x60 (4)
	char Repeat : 0; // 0x64 (1)
	struct FTimerHandle TimerHandle; // 0x68 (8)
	struct FMulticastInlineDelegate OnSuccess; // 0x70 (16)
	struct FMulticastInlineDelegate OnAborted; // 0x80 (16)

	struct UFSM_SetStateID_ConditionalAsyncWithCallbacks FSM_SetStateID_ConditionalAsyncWithCallbacks(struct UStateMachineComponent FSM, float WaitForSeconds, char ID, enum class FSM_Transition Condition, char Loop, struct FDelegate& ExitPreviousStateCallback, struct FDelegate& BeginNextStateCallback); // Function UFSM.FSM_SetStateID_ConditionalAsyncWithCallbacks.FSM_SetStateID_ConditionalAsyncWithCallbacks(Final|Native|Static|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1213830>
	void Execute(); // Function UFSM.FSM_SetStateID_ConditionalAsyncWithCallbacks.Execute(Final|Native|Private) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1212C90>
};

// Class UFSM.FSM_FinishState_Async
class UFSM_FinishState_Async : public UBlueprintAsyncActionBase {

public:

	struct UStateMachineComponent Target; // 0x30 (8)
	float Timer; // 0x38 (4)
	struct FTimerHandle TimerHandle; // 0x40 (8)
	struct FMulticastInlineDelegate OnSuccess; // 0x48 (16)
	struct FMulticastInlineDelegate OnAborted; // 0x58 (16)

	struct UFSM_FinishState_Async FSM_FinishState_Async(struct UStateMachineComponent FSM, float WaitForSeconds); // Function UFSM.FSM_FinishState_Async.FSM_FinishState_Async(Final|Native|Static|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1212D30>
	void Execute(); // Function UFSM.FSM_FinishState_Async.Execute(Final|Native|Private) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1212BB0>
};

// Class UFSM.FSM_FinishState_ConditionalAsync
class UFSM_FinishState_ConditionalAsync : public UBlueprintAsyncActionBase {

public:

	struct UStateMachineComponent Target; // 0x30 (8)
	enum class FSM_Transition Conditional; // 0x38 (1)
	struct FName FallbackState; // 0x3C (8)
	float Timer; // 0x44 (4)
	struct FTimerHandle TimerHandle; // 0x48 (8)
	struct FMulticastInlineDelegate OnSuccess; // 0x50 (16)
	struct FMulticastInlineDelegate OnAborted; // 0x60 (16)

	struct UFSM_FinishState_ConditionalAsync FSM_FinishState_ConditionalAsync(struct UStateMachineComponent FSM, enum class FSM_Transition Condition, float WaitForSeconds, struct FName Fallback); // Function UFSM.FSM_FinishState_ConditionalAsync.FSM_FinishState_ConditionalAsync(Final|Native|Static|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1212F90>
	void Execute(); // Function UFSM.FSM_FinishState_ConditionalAsync.Execute(Final|Native|Private) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1212BF0>
};

// Class UFSM.FSM_FinishState_AsyncWithCallbacks
class UFSM_FinishState_AsyncWithCallbacks : public UBlueprintAsyncActionBase {

public:

	struct UStateMachineComponent Target; // 0x30 (8)
	struct FDelegate InBegin; // 0x38 (16)
	struct FDelegate InExit; // 0x48 (16)
	float Timer; // 0x58 (4)
	struct FTimerHandle TimerHandle; // 0x60 (8)
	struct FMulticastInlineDelegate OnSuccess; // 0x68 (16)
	struct FMulticastInlineDelegate OnAborted; // 0x78 (16)

	struct UFSM_FinishState_AsyncWithCallbacks FSM_FinishState_AsyncWithCallbacks(struct UStateMachineComponent FSM, float WaitForSeconds, struct FDelegate& ExitPreviousStateCallback, struct FDelegate& BeginNextStateCallback); // Function UFSM.FSM_FinishState_AsyncWithCallbacks.FSM_FinishState_AsyncWithCallbacks(Final|Native|Static|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1212E00>
	void Execute(); // Function UFSM.FSM_FinishState_AsyncWithCallbacks.Execute(Final|Native|Private) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1212BD0>
};

// Class UFSM.FSM_FinishState_ConditionalAsyncWithCallbacks
class UFSM_FinishState_ConditionalAsyncWithCallbacks : public UBlueprintAsyncActionBase {

public:

	struct UStateMachineComponent Target; // 0x30 (8)
	enum class FSM_Transition Conditional; // 0x38 (1)
	struct FDelegate InBegin; // 0x3C (16)
	struct FDelegate InExit; // 0x4C (16)
	struct FDelegate InFallback; // 0x5C (16)
	struct FName FallbackState; // 0x6C (8)
	float Timer; // 0x74 (4)
	struct FTimerHandle TimerHandle; // 0x78 (8)
	struct FMulticastInlineDelegate OnSuccess; // 0x80 (16)
	struct FMulticastInlineDelegate OnAborted; // 0x90 (16)

	struct UFSM_FinishState_ConditionalAsyncWithCallbacks FSM_FinishState_ConditionalAsyncWithCallbacks(struct UStateMachineComponent FSM, enum class FSM_Transition Condition, float WaitForSeconds, struct FName Fallback, struct FDelegate& ExitPreviousStateCallback, struct FDelegate& BeginNextStateCallback, struct FDelegate& BeginFallbackStateCallback); // Function UFSM.FSM_FinishState_ConditionalAsyncWithCallbacks.FSM_FinishState_ConditionalAsyncWithCallbacks(Final|Native|Static|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x12130D0>
	void Execute(); // Function UFSM.FSM_FinishState_ConditionalAsyncWithCallbacks.Execute(Final|Native|Private) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1212C10>
};

// Class UFSM.BTTask_FSM_AddState
class UBTTask_FSM_AddState : public UBTTask_BlackboardBase {

public:

	struct UStateMachineComponent FSM; // 0x98 (8)
	struct FName TargetFSM; // 0xA0 (8)
	struct FName NewStateName; // 0xA8 (8)
	char Debug : 0; // 0xB0 (1)
	char ForceSuccess : 0; // 0xB1 (1)
};

// Class UFSM.BTTask_FSM_SetState
class UBTTask_FSM_SetState : public UBTTask_BlackboardBase {

public:

	struct UStateMachineComponent FSM; // 0x98 (8)
	struct FName TargetFSM; // 0xA0 (8)
	struct FName StateName; // 0xA8 (8)
	char Debug : 0; // 0xB0 (1)
	char ForceSuccess : 0; // 0xB1 (1)
};

// Class UFSM.BTTask_FSM_RemoveState
class UBTTask_FSM_RemoveState : public UBTTask_BlackboardBase {

public:

	struct UStateMachineComponent FSM; // 0x98 (8)
	struct FName TargetFSM; // 0xA0 (8)
	struct FName StateName; // 0xA8 (8)
	char Debug : 0; // 0xB0 (1)
	char ForceSuccess : 0; // 0xB1 (1)
};

// Class UFSM.BTTask_FSM_CheckState
class UBTTask_FSM_CheckState : public UBTTask_BlackboardBase {

public:

	struct UStateMachineComponent FSM; // 0x98 (8)
	struct FName TargetFSM; // 0xA0 (8)
	struct FName StateName; // 0xA8 (8)
	char Debug : 0; // 0xB0 (1)
	char ForceSuccess : 0; // 0xB1 (1)
};

// Class UFSM.RSM
class URSM : public Object {

public:

	struct FGuid SGUID; // 0x28 (16)
	int32_t PlayerId; // 0x38 (4)
	struct TWeakObjectPtr<struct Object> Owner; // 0x3C (8)
};

// Class UFSM.ReactiveStateMachine
class UReactiveStateMachine : public URSM {

public:

	struct TArray<struct UStateAction> StateGraph; // 0x58 (16)
	float MachineTime; // 0x68 (4)
	struct FMulticastInlineDelegate _OnEntry; // 0x70 (16)
	struct FMulticastInlineDelegate _OnExit; // 0x80 (16)
	struct TMap<struct FGuid, struct FMachinePayloadData> MachineData; // 0x90 (80)

	void Update(float DeltaTime); // Function UFSM.ReactiveStateMachine.Update(Final|Native|Private) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1218820>
	void OnUpdate(float DeltaTime); // Function UFSM.ReactiveStateMachine.OnUpdate(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void OnExit(); // Function UFSM.ReactiveStateMachine.OnExit(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void OnEntry(); // Function UFSM.ReactiveStateMachine.OnEntry(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void OnConstruct(); // Function UFSM.ReactiveStateMachine.OnConstruct(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	char IsMachineActive(); // Function UFSM.ReactiveStateMachine.IsMachineActive(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1218400>
	void Init(); // Function UFSM.ReactiveStateMachine.Init(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x12180B0>
	float GetStateMachineUpdateTime(); // Function UFSM.ReactiveStateMachine.GetStateMachineUpdateTime(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1218050>
	struct UReactiveStateMachine GetOwnerAsStateMachine(); // Function UFSM.ReactiveStateMachine.GetOwnerAsStateMachine(Final|Native|Private|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1217EA0>
	struct AHUD GetOwnerAsHUD(); // Function UFSM.ReactiveStateMachine.GetOwnerAsHUD(Final|Native|Private|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1217FF0>
	struct AGameModeBase GetOwnerAsGameMode(); // Function UFSM.ReactiveStateMachine.GetOwnerAsGameMode(Final|Native|Private|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1217FC0>
	struct AAIController GetOwnerAsControllerAI(); // Function UFSM.ReactiveStateMachine.GetOwnerAsControllerAI(Final|Native|Private|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1217F90>
	struct APlayerController GetOwnerAsController(); // Function UFSM.ReactiveStateMachine.GetOwnerAsController(Final|Native|Private|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1217F60>
	struct UActorComponent GetOwnerAsComponent(); // Function UFSM.ReactiveStateMachine.GetOwnerAsComponent(Final|Native|Private|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1217F30>
	struct ACharacter GetOwnerAsCharacter(); // Function UFSM.ReactiveStateMachine.GetOwnerAsCharacter(Final|Native|Private|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1217F00>
	struct UActor GetOwnerAsActor(); // Function UFSM.ReactiveStateMachine.GetOwnerAsActor(Final|Native|Private|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1217ED0>
	struct Object GetOwner(); // Function UFSM.ReactiveStateMachine.GetOwner(Final|Native|Private|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1217E70>
	void Exit(); // Function UFSM.ReactiveStateMachine.Exit(Final|Native|Private) // <BravoHotelClient-Win64-Shipping.protected.exe+0x12163A0>
	void Entry(); // Function UFSM.ReactiveStateMachine.Entry(Final|Native|Private) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1216380>
	void End(); // Function UFSM.ReactiveStateMachine.End(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1216360>
};

// Class UFSM.FSMSettings
class UFSMSettings : public Object {

public:

	char EnableInterfaceStatePropagation : 0; // 0x28 (1)
	char SuppressRPCWarnings : 0; // 0x29 (1)
	float DefaultTickInterval; // 0x2C (4)
	struct TArray<struct FName> DefaultStates; // 0x30 (16)
};

// Class UFSM.RSMSubsystem
class URSMSubsystem : public ULocalPlayerSubsystem {

public:

	struct TArray<struct UReactiveStateMachine> MachineStack; // 0x30 (16)
};

// Class UFSM.StateMachineABP
class UStateMachineABP : public UAnimInstance {

public:

	struct UStateMachineComponent FSM; // 0x268 (8)
	char OverrideFSM : 0; // 0x270 (1)
	struct FName TargetFSM; // 0x274 (8)
	struct FName TargetASM; // 0x27C (8)

	struct UStateMachineComponent GetFSMComponentByName(struct FName Name); // Function UFSM.StateMachineABP.GetFSMComponentByName(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x121CAE0>
	struct UStateMachineComponent GetFSMComponent(); // Function UFSM.StateMachineABP.GetFSMComponent(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x121CAB0>
};

// Class UFSM.StateMachineComponent
class UStateMachineComponent : public UActorComponent {

public:

	struct FSM_ExitEvent FSM_ExitArguments; // 0xB8 (12)
	struct FSM_BeginEvent FSM_BeginArguments; // 0xC4 (12)
	struct FSM_UpdateEvent FSM_UpdateArguments; // 0xD0 (8)
	char IsOverriden : 0; // 0xE0 (1)
	char IsFullyInitialized : 0; // 0xE1 (1)
	char StateID; // 0xE2 (1)
	char PreviousStateID; // 0xE3 (1)
	float StateTime; // 0xE4 (4)
	struct FSM_State STATE_Null; // 0xE8 (64)
	struct TMap<char, struct FSM_State> State; // 0x128 (80)
	struct FDelegate InBegin; // 0x178 (16)
	struct FDelegate InUpdate; // 0x188 (16)
	struct FDelegate InExit; // 0x198 (16)
	struct FName StartupState; // 0x1A8 (8)
	struct TArray<struct FName> States; // 0x1B0 (16)
	struct TMap<struct FName, struct FSM_Link> LINKS; // 0x1C0 (80)
	char UseEnumFromCPP : 0; // 0x210 (1)
	struct FString CPP_EnumName; // 0x218 (16)
	struct UEnum K2_Enumerator; // 0x228 (8)
	char ReplicationMode; // 0x230 (1)
	char BlueprintAutoFlowFSM : 0; // 0x231 (1)
	char BlueprintAutoFlowTransitions : 0; // 0x232 (1)
	char AlwaysTickFSM : 0; // 0x233 (1)
	char ReplicateStateID : 0; // 0x234 (1)
	char ReplicatePreviousStateID : 0; // 0x235 (1)
	char ReplicateStateTime : 0; // 0x236 (1)
	char Debug : 0; // 0x237 (1)
	struct FMulticastInlineDelegate OnInitialized; // 0x238 (16)
	struct FMulticastInlineDelegate OnBegin; // 0x248 (16)
	struct FMulticastInlineDelegate OnUpdate; // 0x258 (16)
	struct FMulticastInlineDelegate OnExit; // 0x268 (16)

	void Update(char UpState, struct FDelegate& Callback); // Function UFSM.StateMachineComponent.Update(Native|Protected|HasOutParms) // <BravoHotelClient-Win64-Shipping.protected.exe+0x121F850>
	void SetStateWithCallbacks(struct FName Name, enum class FSM_Transition& Transition, struct FDelegate& ExitPreviousStateCallback, struct FDelegate& BeginNextStateCallback); // Function UFSM.StateMachineComponent.SetStateWithCallbacks(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x121F270>
	void SetStateValueWithCallbacks(struct FSM_State& Value, enum class FSM_Transition& Transition, struct FDelegate& ExitPreviousStateCallback, struct FDelegate& BeginNextStateCallback); // Function UFSM.StateMachineComponent.SetStateValueWithCallbacks(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x121ECA0>
	void SetStateValue_ConditionalWithCallbacks(struct FSM_State& Value, enum class FSM_Transition Condition, enum class FSM_Transition& Transition, struct FDelegate& ExitPreviousStateCallback, struct FDelegate& BeginNextStateCallback); // Function UFSM.StateMachineComponent.SetStateValue_ConditionalWithCallbacks(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x121F020>
	void SetStateValue_Conditional(struct FSM_State& Value, enum class FSM_Transition Condition, enum class FSM_Transition& Transition); // Function UFSM.StateMachineComponent.SetStateValue_Conditional(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x121EEB0>
	void SetStateValue(struct FSM_State& Value, enum class FSM_Transition& Transition); // Function UFSM.StateMachineComponent.SetStateValue(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x121EB60>
	void SetStateIDWithCallbacks(char ID, enum class FSM_Transition& Transition, struct FDelegate& ExitPreviousStateCallback, struct FDelegate& BeginNextStateCallback); // Function UFSM.StateMachineComponent.SetStateIDWithCallbacks(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x121E6D0>
	void SetStateID_ConditionalWithCallbacks(char ID, enum class FSM_Transition Condition, enum class FSM_Transition& Transition, struct FDelegate& ExitPreviousStateCallback, struct FDelegate& BeginNextStateCallback); // Function UFSM.StateMachineComponent.SetStateID_ConditionalWithCallbacks(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x121E980>
	void SetStateID_Conditional(char ID, enum class FSM_Transition Condition, enum class FSM_Transition& Transition); // Function UFSM.StateMachineComponent.SetStateID_Conditional(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x121E870>
	void SetStateID(char ID, enum class FSM_Transition& Transition); // Function UFSM.StateMachineComponent.SetStateID(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x121E600>
	void SetState_ConditionalWithCallbacks(struct FName Name, enum class FSM_Transition Condition, enum class FSM_Transition& Transition, struct FDelegate& ExitPreviousStateCallback, struct FDelegate& BeginNextStateCallback); // Function UFSM.StateMachineComponent.SetState_ConditionalWithCallbacks(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x121F520>
	void SetState_Conditional(struct FName Name, enum class FSM_Transition Condition, enum class FSM_Transition& Transition); // Function UFSM.StateMachineComponent.SetState_Conditional(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x121F410>
	void SetState(struct FName Name, enum class FSM_Transition& Transition); // Function UFSM.StateMachineComponent.SetState(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x121E530>
	void SERVER_SetStateValue(struct FSM_State Value, char Validate); // Function UFSM.StateMachineComponent.SERVER_SetStateValue(Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable|NetValidate) // <BravoHotelClient-Win64-Shipping.protected.exe+0x121E3E0>
	void SERVER_SetStateID(char ID, char Validate); // Function UFSM.StateMachineComponent.SERVER_SetStateID(Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable|NetValidate) // <BravoHotelClient-Win64-Shipping.protected.exe+0x121E2E0>
	void SERVER_SetState(struct FName Name, char Validate); // Function UFSM.StateMachineComponent.SERVER_SetState(Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable|NetValidate) // <BravoHotelClient-Win64-Shipping.protected.exe+0x121E1E0>
	void SERVER_RemoveState(struct FName Name, char Validate); // Function UFSM.StateMachineComponent.SERVER_RemoveState(Net|NetReliableNative|Event|Public|NetServer|NetValidate) // <BravoHotelClient-Win64-Shipping.protected.exe+0x121E0E0>
	void SERVER_MakeStates(struct TArray<struct FName> NewStates, char Validate); // Function UFSM.StateMachineComponent.SERVER_MakeStates(Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable|NetValidate) // <BravoHotelClient-Win64-Shipping.protected.exe+0x121DFC0>
	void SERVER_GoToFSM(struct UStateMachineComponent TargetMachine, char Validate); // Function UFSM.StateMachineComponent.SERVER_GoToFSM(Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable|NetValidate) // <BravoHotelClient-Win64-Shipping.protected.exe+0x121DEC0>
	void SERVER_FinishState(char Validate); // Function UFSM.StateMachineComponent.SERVER_FinishState(Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable|NetValidate) // <BravoHotelClient-Win64-Shipping.protected.exe+0x121DE00>
	void SERVER_AddState(char ID, struct FName Name, char Validate); // Function UFSM.StateMachineComponent.SERVER_AddState(Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable|NetValidate) // <BravoHotelClient-Win64-Shipping.protected.exe+0x121DCC0>
	void SERVER_ActivateFSM(char Validate); // Function UFSM.StateMachineComponent.SERVER_ActivateFSM(Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable|NetValidate) // <BravoHotelClient-Win64-Shipping.protected.exe+0x121DC00>
	void RemoveState(struct FName Name, enum class FSM_Transition& Transition); // Function UFSM.StateMachineComponent.RemoveState(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x121DB30>
	enum class FSM_Transition Pure_SetStateByID(char ID); // Function UFSM.StateMachineComponent.Pure_SetStateByID(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x121DAA0>
	enum class FSM_Transition Pure_SetState(struct FName Name); // Function UFSM.StateMachineComponent.Pure_SetState(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x121DA10>
	enum class FSM_Transition Pure_RemoveState(struct FName Name); // Function UFSM.StateMachineComponent.Pure_RemoveState(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x121D980>
	enum class FSM_Transition Pure_AddState(char ID, struct FName Name); // Function UFSM.StateMachineComponent.Pure_AddState(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x121D8C0>
	void OnREP_StateTime(float& Time); // Function UFSM.StateMachineComponent.OnREP_StateTime(Native|Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x121D820>
	void OnREP_StateID(char& ID); // Function UFSM.StateMachineComponent.OnREP_StateID(Native|Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x121D780>
	void OnREP_PreviousStateID(char& PreviousID); // Function UFSM.StateMachineComponent.OnREP_PreviousStateID(Native|Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x121D6E0>
	void OnInitializedFSM(struct UStateMachineComponent Context); // Function UFSM.StateMachineComponent.OnInitializedFSM(Native|Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x121D650>
	void OnAnyUpdateState(struct UStateMachineComponent Context, struct FName WithStateName, char WithStateID, float WithStateTime); // Function UFSM.StateMachineComponent.OnAnyUpdateState(Native|Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x121D510>
	void OnAnyExitState(struct UStateMachineComponent Context, struct FName WithStateName, char WithStateID); // Function UFSM.StateMachineComponent.OnAnyExitState(Native|Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x121D410>
	void OnAnyBeginState(struct UStateMachineComponent Context, struct FName WithStateName, char WithStateID, char WithPrevious); // Function UFSM.StateMachineComponent.OnAnyBeginState(Native|Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x121D2D0>
	void MULTI_SetStateValue(struct FSM_State Value); // Function UFSM.StateMachineComponent.MULTI_SetStateValue(Net|NetReliableNative|Event|NetMulticast|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x121D0F0>
	void MULTI_SetStateID(char ID); // Function UFSM.StateMachineComponent.MULTI_SetStateID(Net|NetReliableNative|Event|NetMulticast|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x121D070>
	void MULTI_SetState(struct FName Name); // Function UFSM.StateMachineComponent.MULTI_SetState(Net|NetReliableNative|Event|NetMulticast|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x121CFE0>
	void MULTI_RemoveState(struct FName Name); // Function UFSM.StateMachineComponent.MULTI_RemoveState(Net|NetReliableNative|Event|NetMulticast|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x121CF50>
	void MULTI_MakeStates(struct TArray<struct FName> NewStates); // Function UFSM.StateMachineComponent.MULTI_MakeStates(Net|NetReliableNative|Event|NetMulticast|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x121CEB0>
	void MULTI_GoToFSM(struct UStateMachineComponent TargetMachine); // Function UFSM.StateMachineComponent.MULTI_GoToFSM(Net|NetReliableNative|Event|NetMulticast|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x121CE20>
	void MULTI_FinishState(); // Function UFSM.StateMachineComponent.MULTI_FinishState(Net|NetReliableNative|Event|NetMulticast|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x121CE00>
	void MULTI_AddState(char ID, struct FName Name); // Function UFSM.StateMachineComponent.MULTI_AddState(Net|NetReliableNative|Event|NetMulticast|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x121CD30>
	void MULTI_ActivateFSM(); // Function UFSM.StateMachineComponent.MULTI_ActivateFSM(Net|NetReliableNative|Event|NetMulticast|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x121CD10>
	void MakeStates(struct TArray<struct FName>& NewStates, enum class FSM_Transition& Transition); // Function UFSM.StateMachineComponent.MakeStates(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x121D1C0>
	char IsInitializedFSM(); // Function UFSM.StateMachineComponent.IsInitializedFSM(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x121CCF0>
	void GoToFSM(struct UStateMachineComponent TargetMachine, enum class FSM_Transition& Transition); // Function UFSM.StateMachineComponent.GoToFSM(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x121CC20>
	float GetTime(); // Function UFSM.StateMachineComponent.GetTime(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x121CC00>
	struct FName GetPreviousStateName(); // Function UFSM.StateMachineComponent.GetPreviousStateName(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x121CB90>
	char GetPreviousStateID(); // Function UFSM.StateMachineComponent.GetPreviousStateID(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x121CB70>
	struct FName GetCurrentStateName(); // Function UFSM.StateMachineComponent.GetCurrentStateName(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x121CA80>
	char GetCurrentStateID(); // Function UFSM.StateMachineComponent.GetCurrentStateID(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x121CA60>
	struct FSM_State GetActiveState(); // Function UFSM.StateMachineComponent.GetActiveState(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x121C9F0>
	void FSM_UpdateArgs(struct FSM_UpdateEvent StateInfo); // Function UFSM.StateMachineComponent.FSM_UpdateArgs(Final|Native|Private) // <BravoHotelClient-Win64-Shipping.protected.exe+0x121C520>
	void FSM_TransitionRule(enum class FSM_Transition& Condition); // Function UFSM.StateMachineComponent.FSM_TransitionRule(Final|Native|Private|HasOutParms) // <BravoHotelClient-Win64-Shipping.protected.exe+0x121C4B0>
	void FSM_ExitArgs(struct FSM_ExitEvent StateInfo); // Function UFSM.StateMachineComponent.FSM_ExitArgs(Final|Native|Private) // <BravoHotelClient-Win64-Shipping.protected.exe+0x121C440>
	void FSM_BeginArgs(struct FSM_BeginEvent StateInfo); // Function UFSM.StateMachineComponent.FSM_BeginArgs(Final|Native|Private) // <BravoHotelClient-Win64-Shipping.protected.exe+0x121C440>
	void FinishStateWithCallbacks(enum class FSM_Transition& Transition, struct FDelegate& ExitPreviousStateCallback, struct FDelegate& BeginNextStateCallback); // Function UFSM.StateMachineComponent.FinishStateWithCallbacks(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x121C610>
	void FinishState_ConditionalWithCallbacks(enum class FSM_Transition Condition, enum class FSM_Transition& Transition, struct FDelegate& ExitPreviousStateCallback, struct FDelegate& BeginNextStateCallback); // Function UFSM.StateMachineComponent.FinishState_ConditionalWithCallbacks(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x121C850>
	void FinishState_Conditional(enum class FSM_Transition Condition, enum class FSM_Transition& Transition); // Function UFSM.StateMachineComponent.FinishState_Conditional(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x121C780>
	void FinishState(enum class FSM_Transition& Transition); // Function UFSM.StateMachineComponent.FinishState(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x121C580>
	char Exit(char ExitState, char NextState, enum class FSM_Transition& Transition, struct FDelegate& Callback); // Function UFSM.StateMachineComponent.Exit(Native|Protected|HasOutParms) // <BravoHotelClient-Win64-Shipping.protected.exe+0x121C1E0>
	void Event_OnUpdateState(char CurrentState, struct FName StateName, float StateTimer); // Function UFSM.StateMachineComponent.Event_OnUpdateState(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void Event_OnExitState(char CurrentState, struct FName StateName, enum class FSM_Transition Transition); // Function UFSM.StateMachineComponent.Event_OnExitState(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void Event_OnConstruct(); // Function UFSM.StateMachineComponent.Event_OnConstruct(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void Event_OnBeginState(char CurrentState, char PreviousState, struct FName StateName, enum class FSM_Transition Transition); // Function UFSM.StateMachineComponent.Event_OnBeginState(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void Enter(char InState, struct FDelegate& Callback); // Function UFSM.StateMachineComponent.Enter(Native|Protected|HasOutParms) // <BravoHotelClient-Win64-Shipping.protected.exe+0x121C030>
	void CLIENT_SetStateValue(struct FSM_State Value); // Function UFSM.StateMachineComponent.CLIENT_SetStateValue(Net|NetReliableNative|Event|Public|NetClient|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x121BF60>
	void CLIENT_SetStateID(char ID); // Function UFSM.StateMachineComponent.CLIENT_SetStateID(Net|NetReliableNative|Event|Public|NetClient|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x121BEE0>
	void CLIENT_SetState(struct FName Name); // Function UFSM.StateMachineComponent.CLIENT_SetState(Net|NetReliableNative|Event|Public|NetClient|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x121BE50>
	void CLIENT_RemoveState(struct FName Name); // Function UFSM.StateMachineComponent.CLIENT_RemoveState(Net|NetReliableNative|Event|Public|NetClient|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x121BDC0>
	void CLIENT_MakeStates(struct TArray<struct FName> NewStates); // Function UFSM.StateMachineComponent.CLIENT_MakeStates(Net|NetReliableNative|Event|Public|NetClient|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x121BD20>
	void CLIENT_GoToFSM(struct UStateMachineComponent TargetMachine); // Function UFSM.StateMachineComponent.CLIENT_GoToFSM(Net|NetReliableNative|Event|Public|NetClient|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x121BC90>
	void CLIENT_FinishState(); // Function UFSM.StateMachineComponent.CLIENT_FinishState(Net|NetReliableNative|Event|Public|NetClient|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x121BC70>
	void CLIENT_AddState(char ID, struct FName Name); // Function UFSM.StateMachineComponent.CLIENT_AddState(Net|NetReliableNative|Event|Public|NetClient|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x121BBA0>
	void CLIENT_ActivateFSM(); // Function UFSM.StateMachineComponent.CLIENT_ActivateFSM(Net|NetReliableNative|Event|Public|NetClient|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x121BB80>
	struct FSM_State AddState(char ID, struct FName Name, enum class FSM_Transition& Transition); // Function UFSM.StateMachineComponent.AddState(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x121BA30>
	void ActivateFSM(enum class FSM_Transition& Transition); // Function UFSM.StateMachineComponent.ActivateFSM(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x121B9A0>
};

// ScriptStruct UFSM.SM_SetMachineState
struct FSM_SetMachineState : FAnimNode_Base {
	struct FPoseLink BasePose; // 0x10 (16)
	struct FName FSM; // 0x20 (8)
	struct FName ASM; // 0x28 (8)
	char EveryFrame : 0; // 0x30 (1)
};

// ScriptStruct UFSM.SM_BlendStateMachines
struct FSM_BlendStateMachines : FAnimNode_Base {
	struct FPoseLink BasePose; // 0x10 (16)
	struct FPoseLink BlendPose; // 0x20 (16)
};

// ScriptStruct UFSM.MachinePayloadData
struct FMachinePayloadData {
	struct TArray<struct UClass*> Actions; // 0x0 (16)
};

// ScriptStruct UFSM.SM_Link
struct FSM_Link {
	struct FName NextState; // 0x0 (8)
	struct FName Function; // 0x8 (8)
};

// ScriptStruct UFSM.SM_State
struct FSM_State {
	struct FName Name; // 0x0 (8)
	struct UStateMachineComponent Owner; // 0x8 (8)
	struct FMulticastInlineDelegate OnBeginState; // 0x10 (16)
	struct FMulticastInlineDelegate OnUpdateState; // 0x20 (16)
	struct FMulticastInlineDelegate OnExitState; // 0x30 (16)
};

// ScriptStruct UFSM.SM_ExitEvent
struct FSM_ExitEvent {
	char StateID; // 0x0 (1)
	char NextStateID; // 0x1 (1)
	struct FName NextStateName; // 0x4 (8)
};

// ScriptStruct UFSM.SM_UpdateEvent
struct FSM_UpdateEvent {
	char StateID; // 0x0 (1)
	float StateTime; // 0x4 (4)
};

// ScriptStruct UFSM.SM_BeginEvent
struct FSM_BeginEvent {
	char StateID; // 0x0 (1)
	char PreviousStateID; // 0x1 (1)
	struct FName PreviousStateName; // 0x4 (8)
};

// Function UFSM.FSM_SetState_Async.FSM_SetState_Async
inline struct UFSM_SetState_Async UFSM_SetState_Async::FSM_SetState_Async(struct UStateMachineComponent FSM, float WaitForSeconds, struct FName Name, char Loop) {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.FSM_SetState_Async.FSM_SetState_Async");

	struct FSM_SetState_Async_Params {
		struct UStateMachineComponent FSM;
		float WaitForSeconds;
		struct FName Name;
		char Loop;
		struct UFSM_SetState_Async ReturnValue;

	}; FSM_SetState_Async_Params Params;

	Params.FSM = FSM;
	Params.WaitForSeconds = WaitForSeconds;
	Params.Name = Name;
	Params.Loop = Loop;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UFSM.FSM_SetState_Async.Execute
inline void UFSM_SetState_Async::Execute() {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.FSM_SetState_Async.Execute");

	struct Execute_Params {
		
	}; Execute_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UFSM.FSM_SetStateID_Async.FSM_SetStateID_Async
inline struct UFSM_SetStateID_Async UFSM_SetStateID_Async::FSM_SetStateID_Async(struct UStateMachineComponent FSM, float WaitForSeconds, char ID, char Loop) {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.FSM_SetStateID_Async.FSM_SetStateID_Async");

	struct FSM_SetStateID_Async_Params {
		struct UStateMachineComponent FSM;
		float WaitForSeconds;
		char ID;
		char Loop;
		struct UFSM_SetStateID_Async ReturnValue;

	}; FSM_SetStateID_Async_Params Params;

	Params.FSM = FSM;
	Params.WaitForSeconds = WaitForSeconds;
	Params.ID = ID;
	Params.Loop = Loop;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UFSM.FSM_SetStateID_Async.Execute
inline void UFSM_SetStateID_Async::Execute() {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.FSM_SetStateID_Async.Execute");

	struct Execute_Params {
		
	}; Execute_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UFSM.FSM_SetState_ConditionalAsync.FSM_SetState_ConditionalAsync
inline struct UFSM_SetState_ConditionalAsync UFSM_SetState_ConditionalAsync::FSM_SetState_ConditionalAsync(struct UStateMachineComponent FSM, float WaitForSeconds, struct FName Name, enum class FSM_Transition Condition, char Loop) {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.FSM_SetState_ConditionalAsync.FSM_SetState_ConditionalAsync");

	struct FSM_SetState_ConditionalAsync_Params {
		struct UStateMachineComponent FSM;
		float WaitForSeconds;
		struct FName Name;
		enum class FSM_Transition Condition;
		char Loop;
		struct UFSM_SetState_ConditionalAsync ReturnValue;

	}; FSM_SetState_ConditionalAsync_Params Params;

	Params.FSM = FSM;
	Params.WaitForSeconds = WaitForSeconds;
	Params.Name = Name;
	Params.Condition = Condition;
	Params.Loop = Loop;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UFSM.FSM_SetState_ConditionalAsync.Execute
inline void UFSM_SetState_ConditionalAsync::Execute() {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.FSM_SetState_ConditionalAsync.Execute");

	struct Execute_Params {
		
	}; Execute_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UFSM.FSM_SetStateID_ConditionalAsync.FSM_SetStateID_ConditionalAsync
inline struct UFSM_SetStateID_ConditionalAsync UFSM_SetStateID_ConditionalAsync::FSM_SetStateID_ConditionalAsync(struct UStateMachineComponent FSM, float WaitForSeconds, char ID, enum class FSM_Transition Condition, char Loop) {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.FSM_SetStateID_ConditionalAsync.FSM_SetStateID_ConditionalAsync");

	struct FSM_SetStateID_ConditionalAsync_Params {
		struct UStateMachineComponent FSM;
		float WaitForSeconds;
		char ID;
		enum class FSM_Transition Condition;
		char Loop;
		struct UFSM_SetStateID_ConditionalAsync ReturnValue;

	}; FSM_SetStateID_ConditionalAsync_Params Params;

	Params.FSM = FSM;
	Params.WaitForSeconds = WaitForSeconds;
	Params.ID = ID;
	Params.Condition = Condition;
	Params.Loop = Loop;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UFSM.FSM_SetStateID_ConditionalAsync.Execute
inline void UFSM_SetStateID_ConditionalAsync::Execute() {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.FSM_SetStateID_ConditionalAsync.Execute");

	struct Execute_Params {
		
	}; Execute_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UFSM.FSM_SetState_AsyncWithCallbacks.FSM_SetState_AsyncWithCallbacks
inline struct UFSM_SetState_AsyncWithCallbacks UFSM_SetState_AsyncWithCallbacks::FSM_SetState_AsyncWithCallbacks(struct UStateMachineComponent FSM, float WaitForSeconds, struct FName Name, char Loop, struct FDelegate& ExitPreviousStateCallback, struct FDelegate& BeginNextStateCallback) {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.FSM_SetState_AsyncWithCallbacks.FSM_SetState_AsyncWithCallbacks");

	struct FSM_SetState_AsyncWithCallbacks_Params {
		struct UStateMachineComponent FSM;
		float WaitForSeconds;
		struct FName Name;
		char Loop;
		struct FDelegate& ExitPreviousStateCallback;
		struct FDelegate& BeginNextStateCallback;
		struct UFSM_SetState_AsyncWithCallbacks ReturnValue;

	}; FSM_SetState_AsyncWithCallbacks_Params Params;

	Params.FSM = FSM;
	Params.WaitForSeconds = WaitForSeconds;
	Params.Name = Name;
	Params.Loop = Loop;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	ExitPreviousStateCallback = Params.ExitPreviousStateCallback;
	BeginNextStateCallback = Params.BeginNextStateCallback;


	return params.ReturnValue;
}

// Function UFSM.FSM_SetState_AsyncWithCallbacks.Execute
inline void UFSM_SetState_AsyncWithCallbacks::Execute() {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.FSM_SetState_AsyncWithCallbacks.Execute");

	struct Execute_Params {
		
	}; Execute_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UFSM.FSM_SetStateID_AsyncWithCallbacks.FSM_SetStateID_AsyncWithCallbacks
inline struct UFSM_SetStateID_AsyncWithCallbacks UFSM_SetStateID_AsyncWithCallbacks::FSM_SetStateID_AsyncWithCallbacks(struct UStateMachineComponent FSM, float WaitForSeconds, char ID, char Loop, struct FDelegate& ExitPreviousStateCallback, struct FDelegate& BeginNextStateCallback) {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.FSM_SetStateID_AsyncWithCallbacks.FSM_SetStateID_AsyncWithCallbacks");

	struct FSM_SetStateID_AsyncWithCallbacks_Params {
		struct UStateMachineComponent FSM;
		float WaitForSeconds;
		char ID;
		char Loop;
		struct FDelegate& ExitPreviousStateCallback;
		struct FDelegate& BeginNextStateCallback;
		struct UFSM_SetStateID_AsyncWithCallbacks ReturnValue;

	}; FSM_SetStateID_AsyncWithCallbacks_Params Params;

	Params.FSM = FSM;
	Params.WaitForSeconds = WaitForSeconds;
	Params.ID = ID;
	Params.Loop = Loop;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	ExitPreviousStateCallback = Params.ExitPreviousStateCallback;
	BeginNextStateCallback = Params.BeginNextStateCallback;


	return params.ReturnValue;
}

// Function UFSM.FSM_SetStateID_AsyncWithCallbacks.Execute
inline void UFSM_SetStateID_AsyncWithCallbacks::Execute() {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.FSM_SetStateID_AsyncWithCallbacks.Execute");

	struct Execute_Params {
		
	}; Execute_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UFSM.FSM_SetState_ConditionalAsyncWithCallbacks.FSM_SetState_ConditionalAsyncWithCallbacks
inline struct UFSM_SetState_ConditionalAsyncWithCallbacks UFSM_SetState_ConditionalAsyncWithCallbacks::FSM_SetState_ConditionalAsyncWithCallbacks(struct UStateMachineComponent FSM, float WaitForSeconds, struct FName Name, enum class FSM_Transition Condition, char Loop, struct FDelegate& ExitPreviousStateCallback, struct FDelegate& BeginNextStateCallback) {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.FSM_SetState_ConditionalAsyncWithCallbacks.FSM_SetState_ConditionalAsyncWithCallbacks");

	struct FSM_SetState_ConditionalAsyncWithCallbacks_Params {
		struct UStateMachineComponent FSM;
		float WaitForSeconds;
		struct FName Name;
		enum class FSM_Transition Condition;
		char Loop;
		struct FDelegate& ExitPreviousStateCallback;
		struct FDelegate& BeginNextStateCallback;
		struct UFSM_SetState_ConditionalAsyncWithCallbacks ReturnValue;

	}; FSM_SetState_ConditionalAsyncWithCallbacks_Params Params;

	Params.FSM = FSM;
	Params.WaitForSeconds = WaitForSeconds;
	Params.Name = Name;
	Params.Condition = Condition;
	Params.Loop = Loop;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	ExitPreviousStateCallback = Params.ExitPreviousStateCallback;
	BeginNextStateCallback = Params.BeginNextStateCallback;


	return params.ReturnValue;
}

// Function UFSM.FSM_SetState_ConditionalAsyncWithCallbacks.Execute
inline void UFSM_SetState_ConditionalAsyncWithCallbacks::Execute() {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.FSM_SetState_ConditionalAsyncWithCallbacks.Execute");

	struct Execute_Params {
		
	}; Execute_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UFSM.FSM_SetStateID_ConditionalAsyncWithCallbacks.FSM_SetStateID_ConditionalAsyncWithCallbacks
inline struct UFSM_SetStateID_ConditionalAsyncWithCallbacks UFSM_SetStateID_ConditionalAsyncWithCallbacks::FSM_SetStateID_ConditionalAsyncWithCallbacks(struct UStateMachineComponent FSM, float WaitForSeconds, char ID, enum class FSM_Transition Condition, char Loop, struct FDelegate& ExitPreviousStateCallback, struct FDelegate& BeginNextStateCallback) {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.FSM_SetStateID_ConditionalAsyncWithCallbacks.FSM_SetStateID_ConditionalAsyncWithCallbacks");

	struct FSM_SetStateID_ConditionalAsyncWithCallbacks_Params {
		struct UStateMachineComponent FSM;
		float WaitForSeconds;
		char ID;
		enum class FSM_Transition Condition;
		char Loop;
		struct FDelegate& ExitPreviousStateCallback;
		struct FDelegate& BeginNextStateCallback;
		struct UFSM_SetStateID_ConditionalAsyncWithCallbacks ReturnValue;

	}; FSM_SetStateID_ConditionalAsyncWithCallbacks_Params Params;

	Params.FSM = FSM;
	Params.WaitForSeconds = WaitForSeconds;
	Params.ID = ID;
	Params.Condition = Condition;
	Params.Loop = Loop;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	ExitPreviousStateCallback = Params.ExitPreviousStateCallback;
	BeginNextStateCallback = Params.BeginNextStateCallback;


	return params.ReturnValue;
}

// Function UFSM.FSM_SetStateID_ConditionalAsyncWithCallbacks.Execute
inline void UFSM_SetStateID_ConditionalAsyncWithCallbacks::Execute() {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.FSM_SetStateID_ConditionalAsyncWithCallbacks.Execute");

	struct Execute_Params {
		
	}; Execute_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UFSM.FSM_FinishState_Async.FSM_FinishState_Async
inline struct UFSM_FinishState_Async UFSM_FinishState_Async::FSM_FinishState_Async(struct UStateMachineComponent FSM, float WaitForSeconds) {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.FSM_FinishState_Async.FSM_FinishState_Async");

	struct FSM_FinishState_Async_Params {
		struct UStateMachineComponent FSM;
		float WaitForSeconds;
		struct UFSM_FinishState_Async ReturnValue;

	}; FSM_FinishState_Async_Params Params;

	Params.FSM = FSM;
	Params.WaitForSeconds = WaitForSeconds;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UFSM.FSM_FinishState_Async.Execute
inline void UFSM_FinishState_Async::Execute() {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.FSM_FinishState_Async.Execute");

	struct Execute_Params {
		
	}; Execute_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UFSM.FSM_FinishState_ConditionalAsync.FSM_FinishState_ConditionalAsync
inline struct UFSM_FinishState_ConditionalAsync UFSM_FinishState_ConditionalAsync::FSM_FinishState_ConditionalAsync(struct UStateMachineComponent FSM, enum class FSM_Transition Condition, float WaitForSeconds, struct FName Fallback) {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.FSM_FinishState_ConditionalAsync.FSM_FinishState_ConditionalAsync");

	struct FSM_FinishState_ConditionalAsync_Params {
		struct UStateMachineComponent FSM;
		enum class FSM_Transition Condition;
		float WaitForSeconds;
		struct FName Fallback;
		struct UFSM_FinishState_ConditionalAsync ReturnValue;

	}; FSM_FinishState_ConditionalAsync_Params Params;

	Params.FSM = FSM;
	Params.Condition = Condition;
	Params.WaitForSeconds = WaitForSeconds;
	Params.Fallback = Fallback;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UFSM.FSM_FinishState_ConditionalAsync.Execute
inline void UFSM_FinishState_ConditionalAsync::Execute() {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.FSM_FinishState_ConditionalAsync.Execute");

	struct Execute_Params {
		
	}; Execute_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UFSM.FSM_FinishState_AsyncWithCallbacks.FSM_FinishState_AsyncWithCallbacks
inline struct UFSM_FinishState_AsyncWithCallbacks UFSM_FinishState_AsyncWithCallbacks::FSM_FinishState_AsyncWithCallbacks(struct UStateMachineComponent FSM, float WaitForSeconds, struct FDelegate& ExitPreviousStateCallback, struct FDelegate& BeginNextStateCallback) {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.FSM_FinishState_AsyncWithCallbacks.FSM_FinishState_AsyncWithCallbacks");

	struct FSM_FinishState_AsyncWithCallbacks_Params {
		struct UStateMachineComponent FSM;
		float WaitForSeconds;
		struct FDelegate& ExitPreviousStateCallback;
		struct FDelegate& BeginNextStateCallback;
		struct UFSM_FinishState_AsyncWithCallbacks ReturnValue;

	}; FSM_FinishState_AsyncWithCallbacks_Params Params;

	Params.FSM = FSM;
	Params.WaitForSeconds = WaitForSeconds;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	ExitPreviousStateCallback = Params.ExitPreviousStateCallback;
	BeginNextStateCallback = Params.BeginNextStateCallback;


	return params.ReturnValue;
}

// Function UFSM.FSM_FinishState_AsyncWithCallbacks.Execute
inline void UFSM_FinishState_AsyncWithCallbacks::Execute() {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.FSM_FinishState_AsyncWithCallbacks.Execute");

	struct Execute_Params {
		
	}; Execute_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UFSM.FSM_FinishState_ConditionalAsyncWithCallbacks.FSM_FinishState_ConditionalAsyncWithCallbacks
inline struct UFSM_FinishState_ConditionalAsyncWithCallbacks UFSM_FinishState_ConditionalAsyncWithCallbacks::FSM_FinishState_ConditionalAsyncWithCallbacks(struct UStateMachineComponent FSM, enum class FSM_Transition Condition, float WaitForSeconds, struct FName Fallback, struct FDelegate& ExitPreviousStateCallback, struct FDelegate& BeginNextStateCallback, struct FDelegate& BeginFallbackStateCallback) {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.FSM_FinishState_ConditionalAsyncWithCallbacks.FSM_FinishState_ConditionalAsyncWithCallbacks");

	struct FSM_FinishState_ConditionalAsyncWithCallbacks_Params {
		struct UStateMachineComponent FSM;
		enum class FSM_Transition Condition;
		float WaitForSeconds;
		struct FName Fallback;
		struct FDelegate& ExitPreviousStateCallback;
		struct FDelegate& BeginNextStateCallback;
		struct FDelegate& BeginFallbackStateCallback;
		struct UFSM_FinishState_ConditionalAsyncWithCallbacks ReturnValue;

	}; FSM_FinishState_ConditionalAsyncWithCallbacks_Params Params;

	Params.FSM = FSM;
	Params.Condition = Condition;
	Params.WaitForSeconds = WaitForSeconds;
	Params.Fallback = Fallback;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	ExitPreviousStateCallback = Params.ExitPreviousStateCallback;
	BeginNextStateCallback = Params.BeginNextStateCallback;
	BeginFallbackStateCallback = Params.BeginFallbackStateCallback;


	return params.ReturnValue;
}

// Function UFSM.FSM_FinishState_ConditionalAsyncWithCallbacks.Execute
inline void UFSM_FinishState_ConditionalAsyncWithCallbacks::Execute() {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.FSM_FinishState_ConditionalAsyncWithCallbacks.Execute");

	struct Execute_Params {
		
	}; Execute_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UFSM.ReactiveStateMachine.Update
inline void UReactiveStateMachine::Update(float DeltaTime) {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.ReactiveStateMachine.Update");

	struct Update_Params {
		float DeltaTime;
	}; Update_Params Params;

	Params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UFSM.ReactiveStateMachine.OnUpdate
inline void UReactiveStateMachine::OnUpdate(float DeltaTime) {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.ReactiveStateMachine.OnUpdate");

	struct OnUpdate_Params {
		float DeltaTime;
	}; OnUpdate_Params Params;

	Params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UFSM.ReactiveStateMachine.OnExit
inline void UReactiveStateMachine::OnExit() {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.ReactiveStateMachine.OnExit");

	struct OnExit_Params {
		
	}; OnExit_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UFSM.ReactiveStateMachine.OnEntry
inline void UReactiveStateMachine::OnEntry() {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.ReactiveStateMachine.OnEntry");

	struct OnEntry_Params {
		
	}; OnEntry_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UFSM.ReactiveStateMachine.OnConstruct
inline void UReactiveStateMachine::OnConstruct() {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.ReactiveStateMachine.OnConstruct");

	struct OnConstruct_Params {
		
	}; OnConstruct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UFSM.ReactiveStateMachine.IsMachineActive
inline char UReactiveStateMachine::IsMachineActive() {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.ReactiveStateMachine.IsMachineActive");

	struct IsMachineActive_Params {
		
		char ReturnValue;

	}; IsMachineActive_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UFSM.ReactiveStateMachine.Init
inline void UReactiveStateMachine::Init() {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.ReactiveStateMachine.Init");

	struct Init_Params {
		
	}; Init_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UFSM.ReactiveStateMachine.GetStateMachineUpdateTime
inline float UReactiveStateMachine::GetStateMachineUpdateTime() {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.ReactiveStateMachine.GetStateMachineUpdateTime");

	struct GetStateMachineUpdateTime_Params {
		
		float ReturnValue;

	}; GetStateMachineUpdateTime_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UFSM.ReactiveStateMachine.GetOwnerAsStateMachine
inline struct UReactiveStateMachine UReactiveStateMachine::GetOwnerAsStateMachine() {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.ReactiveStateMachine.GetOwnerAsStateMachine");

	struct GetOwnerAsStateMachine_Params {
		
		struct UReactiveStateMachine ReturnValue;

	}; GetOwnerAsStateMachine_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UFSM.ReactiveStateMachine.GetOwnerAsHUD
inline struct AHUD UReactiveStateMachine::GetOwnerAsHUD() {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.ReactiveStateMachine.GetOwnerAsHUD");

	struct GetOwnerAsHUD_Params {
		
		struct AHUD ReturnValue;

	}; GetOwnerAsHUD_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UFSM.ReactiveStateMachine.GetOwnerAsGameMode
inline struct AGameModeBase UReactiveStateMachine::GetOwnerAsGameMode() {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.ReactiveStateMachine.GetOwnerAsGameMode");

	struct GetOwnerAsGameMode_Params {
		
		struct AGameModeBase ReturnValue;

	}; GetOwnerAsGameMode_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UFSM.ReactiveStateMachine.GetOwnerAsControllerAI
inline struct AAIController UReactiveStateMachine::GetOwnerAsControllerAI() {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.ReactiveStateMachine.GetOwnerAsControllerAI");

	struct GetOwnerAsControllerAI_Params {
		
		struct AAIController ReturnValue;

	}; GetOwnerAsControllerAI_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UFSM.ReactiveStateMachine.GetOwnerAsController
inline struct APlayerController UReactiveStateMachine::GetOwnerAsController() {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.ReactiveStateMachine.GetOwnerAsController");

	struct GetOwnerAsController_Params {
		
		struct APlayerController ReturnValue;

	}; GetOwnerAsController_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UFSM.ReactiveStateMachine.GetOwnerAsComponent
inline struct UActorComponent UReactiveStateMachine::GetOwnerAsComponent() {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.ReactiveStateMachine.GetOwnerAsComponent");

	struct GetOwnerAsComponent_Params {
		
		struct UActorComponent ReturnValue;

	}; GetOwnerAsComponent_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UFSM.ReactiveStateMachine.GetOwnerAsCharacter
inline struct ACharacter UReactiveStateMachine::GetOwnerAsCharacter() {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.ReactiveStateMachine.GetOwnerAsCharacter");

	struct GetOwnerAsCharacter_Params {
		
		struct ACharacter ReturnValue;

	}; GetOwnerAsCharacter_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UFSM.ReactiveStateMachine.GetOwnerAsActor
inline struct UActor UReactiveStateMachine::GetOwnerAsActor() {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.ReactiveStateMachine.GetOwnerAsActor");

	struct GetOwnerAsActor_Params {
		
		struct UActor ReturnValue;

	}; GetOwnerAsActor_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UFSM.ReactiveStateMachine.GetOwner
inline struct Object UReactiveStateMachine::GetOwner() {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.ReactiveStateMachine.GetOwner");

	struct GetOwner_Params {
		
		struct Object ReturnValue;

	}; GetOwner_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UFSM.ReactiveStateMachine.Exit
inline void UReactiveStateMachine::Exit() {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.ReactiveStateMachine.Exit");

	struct Exit_Params {
		
	}; Exit_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UFSM.ReactiveStateMachine.Entry
inline void UReactiveStateMachine::Entry() {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.ReactiveStateMachine.Entry");

	struct Entry_Params {
		
	}; Entry_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UFSM.ReactiveStateMachine.End
inline void UReactiveStateMachine::End() {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.ReactiveStateMachine.End");

	struct End_Params {
		
	}; End_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UFSM.StateMachineABP.GetFSMComponentByName
inline struct UStateMachineComponent UStateMachineABP::GetFSMComponentByName(struct FName Name) {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.StateMachineABP.GetFSMComponentByName");

	struct GetFSMComponentByName_Params {
		struct FName Name;
		struct UStateMachineComponent ReturnValue;

	}; GetFSMComponentByName_Params Params;

	Params.Name = Name;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UFSM.StateMachineABP.GetFSMComponent
inline struct UStateMachineComponent UStateMachineABP::GetFSMComponent() {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.StateMachineABP.GetFSMComponent");

	struct GetFSMComponent_Params {
		
		struct UStateMachineComponent ReturnValue;

	}; GetFSMComponent_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UFSM.StateMachineComponent.Update
inline void UStateMachineComponent::Update(char UpState, struct FDelegate& Callback) {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.StateMachineComponent.Update");

	struct Update_Params {
		char UpState;
		struct FDelegate& Callback;
	}; Update_Params Params;

	Params.UpState = UpState;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Callback = Params.Callback;

}

// Function UFSM.StateMachineComponent.SetStateWithCallbacks
inline void UStateMachineComponent::SetStateWithCallbacks(struct FName Name, enum class FSM_Transition& Transition, struct FDelegate& ExitPreviousStateCallback, struct FDelegate& BeginNextStateCallback) {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.StateMachineComponent.SetStateWithCallbacks");

	struct SetStateWithCallbacks_Params {
		struct FName Name;
		enum class FSM_Transition& Transition;
		struct FDelegate& ExitPreviousStateCallback;
		struct FDelegate& BeginNextStateCallback;
	}; SetStateWithCallbacks_Params Params;

	Params.Name = Name;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Transition = Params.Transition;
	ExitPreviousStateCallback = Params.ExitPreviousStateCallback;
	BeginNextStateCallback = Params.BeginNextStateCallback;

}

// Function UFSM.StateMachineComponent.SetStateValueWithCallbacks
inline void UStateMachineComponent::SetStateValueWithCallbacks(struct FSM_State& Value, enum class FSM_Transition& Transition, struct FDelegate& ExitPreviousStateCallback, struct FDelegate& BeginNextStateCallback) {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.StateMachineComponent.SetStateValueWithCallbacks");

	struct SetStateValueWithCallbacks_Params {
		struct FSM_State& Value;
		enum class FSM_Transition& Transition;
		struct FDelegate& ExitPreviousStateCallback;
		struct FDelegate& BeginNextStateCallback;
	}; SetStateValueWithCallbacks_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Value = Params.Value;
	Transition = Params.Transition;
	ExitPreviousStateCallback = Params.ExitPreviousStateCallback;
	BeginNextStateCallback = Params.BeginNextStateCallback;

}

// Function UFSM.StateMachineComponent.SetStateValue_ConditionalWithCallbacks
inline void UStateMachineComponent::SetStateValue_ConditionalWithCallbacks(struct FSM_State& Value, enum class FSM_Transition Condition, enum class FSM_Transition& Transition, struct FDelegate& ExitPreviousStateCallback, struct FDelegate& BeginNextStateCallback) {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.StateMachineComponent.SetStateValue_ConditionalWithCallbacks");

	struct SetStateValue_ConditionalWithCallbacks_Params {
		struct FSM_State& Value;
		enum class FSM_Transition Condition;
		enum class FSM_Transition& Transition;
		struct FDelegate& ExitPreviousStateCallback;
		struct FDelegate& BeginNextStateCallback;
	}; SetStateValue_ConditionalWithCallbacks_Params Params;

	Params.Condition = Condition;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Value = Params.Value;
	Transition = Params.Transition;
	ExitPreviousStateCallback = Params.ExitPreviousStateCallback;
	BeginNextStateCallback = Params.BeginNextStateCallback;

}

// Function UFSM.StateMachineComponent.SetStateValue_Conditional
inline void UStateMachineComponent::SetStateValue_Conditional(struct FSM_State& Value, enum class FSM_Transition Condition, enum class FSM_Transition& Transition) {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.StateMachineComponent.SetStateValue_Conditional");

	struct SetStateValue_Conditional_Params {
		struct FSM_State& Value;
		enum class FSM_Transition Condition;
		enum class FSM_Transition& Transition;
	}; SetStateValue_Conditional_Params Params;

	Params.Condition = Condition;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Value = Params.Value;
	Transition = Params.Transition;

}

// Function UFSM.StateMachineComponent.SetStateValue
inline void UStateMachineComponent::SetStateValue(struct FSM_State& Value, enum class FSM_Transition& Transition) {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.StateMachineComponent.SetStateValue");

	struct SetStateValue_Params {
		struct FSM_State& Value;
		enum class FSM_Transition& Transition;
	}; SetStateValue_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Value = Params.Value;
	Transition = Params.Transition;

}

// Function UFSM.StateMachineComponent.SetStateIDWithCallbacks
inline void UStateMachineComponent::SetStateIDWithCallbacks(char ID, enum class FSM_Transition& Transition, struct FDelegate& ExitPreviousStateCallback, struct FDelegate& BeginNextStateCallback) {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.StateMachineComponent.SetStateIDWithCallbacks");

	struct SetStateIDWithCallbacks_Params {
		char ID;
		enum class FSM_Transition& Transition;
		struct FDelegate& ExitPreviousStateCallback;
		struct FDelegate& BeginNextStateCallback;
	}; SetStateIDWithCallbacks_Params Params;

	Params.ID = ID;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Transition = Params.Transition;
	ExitPreviousStateCallback = Params.ExitPreviousStateCallback;
	BeginNextStateCallback = Params.BeginNextStateCallback;

}

// Function UFSM.StateMachineComponent.SetStateID_ConditionalWithCallbacks
inline void UStateMachineComponent::SetStateID_ConditionalWithCallbacks(char ID, enum class FSM_Transition Condition, enum class FSM_Transition& Transition, struct FDelegate& ExitPreviousStateCallback, struct FDelegate& BeginNextStateCallback) {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.StateMachineComponent.SetStateID_ConditionalWithCallbacks");

	struct SetStateID_ConditionalWithCallbacks_Params {
		char ID;
		enum class FSM_Transition Condition;
		enum class FSM_Transition& Transition;
		struct FDelegate& ExitPreviousStateCallback;
		struct FDelegate& BeginNextStateCallback;
	}; SetStateID_ConditionalWithCallbacks_Params Params;

	Params.ID = ID;
	Params.Condition = Condition;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Transition = Params.Transition;
	ExitPreviousStateCallback = Params.ExitPreviousStateCallback;
	BeginNextStateCallback = Params.BeginNextStateCallback;

}

// Function UFSM.StateMachineComponent.SetStateID_Conditional
inline void UStateMachineComponent::SetStateID_Conditional(char ID, enum class FSM_Transition Condition, enum class FSM_Transition& Transition) {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.StateMachineComponent.SetStateID_Conditional");

	struct SetStateID_Conditional_Params {
		char ID;
		enum class FSM_Transition Condition;
		enum class FSM_Transition& Transition;
	}; SetStateID_Conditional_Params Params;

	Params.ID = ID;
	Params.Condition = Condition;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Transition = Params.Transition;

}

// Function UFSM.StateMachineComponent.SetStateID
inline void UStateMachineComponent::SetStateID(char ID, enum class FSM_Transition& Transition) {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.StateMachineComponent.SetStateID");

	struct SetStateID_Params {
		char ID;
		enum class FSM_Transition& Transition;
	}; SetStateID_Params Params;

	Params.ID = ID;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Transition = Params.Transition;

}

// Function UFSM.StateMachineComponent.SetState_ConditionalWithCallbacks
inline void UStateMachineComponent::SetState_ConditionalWithCallbacks(struct FName Name, enum class FSM_Transition Condition, enum class FSM_Transition& Transition, struct FDelegate& ExitPreviousStateCallback, struct FDelegate& BeginNextStateCallback) {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.StateMachineComponent.SetState_ConditionalWithCallbacks");

	struct SetState_ConditionalWithCallbacks_Params {
		struct FName Name;
		enum class FSM_Transition Condition;
		enum class FSM_Transition& Transition;
		struct FDelegate& ExitPreviousStateCallback;
		struct FDelegate& BeginNextStateCallback;
	}; SetState_ConditionalWithCallbacks_Params Params;

	Params.Name = Name;
	Params.Condition = Condition;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Transition = Params.Transition;
	ExitPreviousStateCallback = Params.ExitPreviousStateCallback;
	BeginNextStateCallback = Params.BeginNextStateCallback;

}

// Function UFSM.StateMachineComponent.SetState_Conditional
inline void UStateMachineComponent::SetState_Conditional(struct FName Name, enum class FSM_Transition Condition, enum class FSM_Transition& Transition) {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.StateMachineComponent.SetState_Conditional");

	struct SetState_Conditional_Params {
		struct FName Name;
		enum class FSM_Transition Condition;
		enum class FSM_Transition& Transition;
	}; SetState_Conditional_Params Params;

	Params.Name = Name;
	Params.Condition = Condition;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Transition = Params.Transition;

}

// Function UFSM.StateMachineComponent.SetState
inline void UStateMachineComponent::SetState(struct FName Name, enum class FSM_Transition& Transition) {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.StateMachineComponent.SetState");

	struct SetState_Params {
		struct FName Name;
		enum class FSM_Transition& Transition;
	}; SetState_Params Params;

	Params.Name = Name;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Transition = Params.Transition;

}

// Function UFSM.StateMachineComponent.SERVER_SetStateValue
inline void UStateMachineComponent::SERVER_SetStateValue(struct FSM_State Value, char Validate) {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.StateMachineComponent.SERVER_SetStateValue");

	struct SERVER_SetStateValue_Params {
		struct FSM_State Value;
		char Validate;
	}; SERVER_SetStateValue_Params Params;

	Params.Value = Value;
	Params.Validate = Validate;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UFSM.StateMachineComponent.SERVER_SetStateID
inline void UStateMachineComponent::SERVER_SetStateID(char ID, char Validate) {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.StateMachineComponent.SERVER_SetStateID");

	struct SERVER_SetStateID_Params {
		char ID;
		char Validate;
	}; SERVER_SetStateID_Params Params;

	Params.ID = ID;
	Params.Validate = Validate;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UFSM.StateMachineComponent.SERVER_SetState
inline void UStateMachineComponent::SERVER_SetState(struct FName Name, char Validate) {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.StateMachineComponent.SERVER_SetState");

	struct SERVER_SetState_Params {
		struct FName Name;
		char Validate;
	}; SERVER_SetState_Params Params;

	Params.Name = Name;
	Params.Validate = Validate;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UFSM.StateMachineComponent.SERVER_RemoveState
inline void UStateMachineComponent::SERVER_RemoveState(struct FName Name, char Validate) {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.StateMachineComponent.SERVER_RemoveState");

	struct SERVER_RemoveState_Params {
		struct FName Name;
		char Validate;
	}; SERVER_RemoveState_Params Params;

	Params.Name = Name;
	Params.Validate = Validate;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UFSM.StateMachineComponent.SERVER_MakeStates
inline void UStateMachineComponent::SERVER_MakeStates(struct TArray<struct FName> NewStates, char Validate) {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.StateMachineComponent.SERVER_MakeStates");

	struct SERVER_MakeStates_Params {
		struct TArray<struct FName> NewStates;
		char Validate;
	}; SERVER_MakeStates_Params Params;

	Params.NewStates = NewStates;
	Params.Validate = Validate;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UFSM.StateMachineComponent.SERVER_GoToFSM
inline void UStateMachineComponent::SERVER_GoToFSM(struct UStateMachineComponent TargetMachine, char Validate) {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.StateMachineComponent.SERVER_GoToFSM");

	struct SERVER_GoToFSM_Params {
		struct UStateMachineComponent TargetMachine;
		char Validate;
	}; SERVER_GoToFSM_Params Params;

	Params.TargetMachine = TargetMachine;
	Params.Validate = Validate;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UFSM.StateMachineComponent.SERVER_FinishState
inline void UStateMachineComponent::SERVER_FinishState(char Validate) {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.StateMachineComponent.SERVER_FinishState");

	struct SERVER_FinishState_Params {
		char Validate;
	}; SERVER_FinishState_Params Params;

	Params.Validate = Validate;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UFSM.StateMachineComponent.SERVER_AddState
inline void UStateMachineComponent::SERVER_AddState(char ID, struct FName Name, char Validate) {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.StateMachineComponent.SERVER_AddState");

	struct SERVER_AddState_Params {
		char ID;
		struct FName Name;
		char Validate;
	}; SERVER_AddState_Params Params;

	Params.ID = ID;
	Params.Name = Name;
	Params.Validate = Validate;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UFSM.StateMachineComponent.SERVER_ActivateFSM
inline void UStateMachineComponent::SERVER_ActivateFSM(char Validate) {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.StateMachineComponent.SERVER_ActivateFSM");

	struct SERVER_ActivateFSM_Params {
		char Validate;
	}; SERVER_ActivateFSM_Params Params;

	Params.Validate = Validate;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UFSM.StateMachineComponent.RemoveState
inline void UStateMachineComponent::RemoveState(struct FName Name, enum class FSM_Transition& Transition) {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.StateMachineComponent.RemoveState");

	struct RemoveState_Params {
		struct FName Name;
		enum class FSM_Transition& Transition;
	}; RemoveState_Params Params;

	Params.Name = Name;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Transition = Params.Transition;

}

// Function UFSM.StateMachineComponent.Pure_SetStateByID
inline enum class FSM_Transition UStateMachineComponent::Pure_SetStateByID(char ID) {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.StateMachineComponent.Pure_SetStateByID");

	struct Pure_SetStateByID_Params {
		char ID;
		enum class FSM_Transition ReturnValue;

	}; Pure_SetStateByID_Params Params;

	Params.ID = ID;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UFSM.StateMachineComponent.Pure_SetState
inline enum class FSM_Transition UStateMachineComponent::Pure_SetState(struct FName Name) {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.StateMachineComponent.Pure_SetState");

	struct Pure_SetState_Params {
		struct FName Name;
		enum class FSM_Transition ReturnValue;

	}; Pure_SetState_Params Params;

	Params.Name = Name;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UFSM.StateMachineComponent.Pure_RemoveState
inline enum class FSM_Transition UStateMachineComponent::Pure_RemoveState(struct FName Name) {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.StateMachineComponent.Pure_RemoveState");

	struct Pure_RemoveState_Params {
		struct FName Name;
		enum class FSM_Transition ReturnValue;

	}; Pure_RemoveState_Params Params;

	Params.Name = Name;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UFSM.StateMachineComponent.Pure_AddState
inline enum class FSM_Transition UStateMachineComponent::Pure_AddState(char ID, struct FName Name) {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.StateMachineComponent.Pure_AddState");

	struct Pure_AddState_Params {
		char ID;
		struct FName Name;
		enum class FSM_Transition ReturnValue;

	}; Pure_AddState_Params Params;

	Params.ID = ID;
	Params.Name = Name;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UFSM.StateMachineComponent.OnREP_StateTime
inline void UStateMachineComponent::OnREP_StateTime(float& Time) {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.StateMachineComponent.OnREP_StateTime");

	struct OnREP_StateTime_Params {
		float& Time;
	}; OnREP_StateTime_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Time = Params.Time;

}

// Function UFSM.StateMachineComponent.OnREP_StateID
inline void UStateMachineComponent::OnREP_StateID(char& ID) {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.StateMachineComponent.OnREP_StateID");

	struct OnREP_StateID_Params {
		char& ID;
	}; OnREP_StateID_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	ID = Params.ID;

}

// Function UFSM.StateMachineComponent.OnREP_PreviousStateID
inline void UStateMachineComponent::OnREP_PreviousStateID(char& PreviousID) {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.StateMachineComponent.OnREP_PreviousStateID");

	struct OnREP_PreviousStateID_Params {
		char& PreviousID;
	}; OnREP_PreviousStateID_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	PreviousID = Params.PreviousID;

}

// Function UFSM.StateMachineComponent.OnInitializedFSM
inline void UStateMachineComponent::OnInitializedFSM(struct UStateMachineComponent Context) {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.StateMachineComponent.OnInitializedFSM");

	struct OnInitializedFSM_Params {
		struct UStateMachineComponent Context;
	}; OnInitializedFSM_Params Params;

	Params.Context = Context;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UFSM.StateMachineComponent.OnAnyUpdateState
inline void UStateMachineComponent::OnAnyUpdateState(struct UStateMachineComponent Context, struct FName WithStateName, char WithStateID, float WithStateTime) {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.StateMachineComponent.OnAnyUpdateState");

	struct OnAnyUpdateState_Params {
		struct UStateMachineComponent Context;
		struct FName WithStateName;
		char WithStateID;
		float WithStateTime;
	}; OnAnyUpdateState_Params Params;

	Params.Context = Context;
	Params.WithStateName = WithStateName;
	Params.WithStateID = WithStateID;
	Params.WithStateTime = WithStateTime;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UFSM.StateMachineComponent.OnAnyExitState
inline void UStateMachineComponent::OnAnyExitState(struct UStateMachineComponent Context, struct FName WithStateName, char WithStateID) {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.StateMachineComponent.OnAnyExitState");

	struct OnAnyExitState_Params {
		struct UStateMachineComponent Context;
		struct FName WithStateName;
		char WithStateID;
	}; OnAnyExitState_Params Params;

	Params.Context = Context;
	Params.WithStateName = WithStateName;
	Params.WithStateID = WithStateID;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UFSM.StateMachineComponent.OnAnyBeginState
inline void UStateMachineComponent::OnAnyBeginState(struct UStateMachineComponent Context, struct FName WithStateName, char WithStateID, char WithPrevious) {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.StateMachineComponent.OnAnyBeginState");

	struct OnAnyBeginState_Params {
		struct UStateMachineComponent Context;
		struct FName WithStateName;
		char WithStateID;
		char WithPrevious;
	}; OnAnyBeginState_Params Params;

	Params.Context = Context;
	Params.WithStateName = WithStateName;
	Params.WithStateID = WithStateID;
	Params.WithPrevious = WithPrevious;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UFSM.StateMachineComponent.MULTI_SetStateValue
inline void UStateMachineComponent::MULTI_SetStateValue(struct FSM_State Value) {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.StateMachineComponent.MULTI_SetStateValue");

	struct MULTI_SetStateValue_Params {
		struct FSM_State Value;
	}; MULTI_SetStateValue_Params Params;

	Params.Value = Value;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UFSM.StateMachineComponent.MULTI_SetStateID
inline void UStateMachineComponent::MULTI_SetStateID(char ID) {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.StateMachineComponent.MULTI_SetStateID");

	struct MULTI_SetStateID_Params {
		char ID;
	}; MULTI_SetStateID_Params Params;

	Params.ID = ID;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UFSM.StateMachineComponent.MULTI_SetState
inline void UStateMachineComponent::MULTI_SetState(struct FName Name) {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.StateMachineComponent.MULTI_SetState");

	struct MULTI_SetState_Params {
		struct FName Name;
	}; MULTI_SetState_Params Params;

	Params.Name = Name;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UFSM.StateMachineComponent.MULTI_RemoveState
inline void UStateMachineComponent::MULTI_RemoveState(struct FName Name) {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.StateMachineComponent.MULTI_RemoveState");

	struct MULTI_RemoveState_Params {
		struct FName Name;
	}; MULTI_RemoveState_Params Params;

	Params.Name = Name;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UFSM.StateMachineComponent.MULTI_MakeStates
inline void UStateMachineComponent::MULTI_MakeStates(struct TArray<struct FName> NewStates) {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.StateMachineComponent.MULTI_MakeStates");

	struct MULTI_MakeStates_Params {
		struct TArray<struct FName> NewStates;
	}; MULTI_MakeStates_Params Params;

	Params.NewStates = NewStates;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UFSM.StateMachineComponent.MULTI_GoToFSM
inline void UStateMachineComponent::MULTI_GoToFSM(struct UStateMachineComponent TargetMachine) {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.StateMachineComponent.MULTI_GoToFSM");

	struct MULTI_GoToFSM_Params {
		struct UStateMachineComponent TargetMachine;
	}; MULTI_GoToFSM_Params Params;

	Params.TargetMachine = TargetMachine;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UFSM.StateMachineComponent.MULTI_FinishState
inline void UStateMachineComponent::MULTI_FinishState() {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.StateMachineComponent.MULTI_FinishState");

	struct MULTI_FinishState_Params {
		
	}; MULTI_FinishState_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UFSM.StateMachineComponent.MULTI_AddState
inline void UStateMachineComponent::MULTI_AddState(char ID, struct FName Name) {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.StateMachineComponent.MULTI_AddState");

	struct MULTI_AddState_Params {
		char ID;
		struct FName Name;
	}; MULTI_AddState_Params Params;

	Params.ID = ID;
	Params.Name = Name;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UFSM.StateMachineComponent.MULTI_ActivateFSM
inline void UStateMachineComponent::MULTI_ActivateFSM() {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.StateMachineComponent.MULTI_ActivateFSM");

	struct MULTI_ActivateFSM_Params {
		
	}; MULTI_ActivateFSM_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UFSM.StateMachineComponent.MakeStates
inline void UStateMachineComponent::MakeStates(struct TArray<struct FName>& NewStates, enum class FSM_Transition& Transition) {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.StateMachineComponent.MakeStates");

	struct MakeStates_Params {
		struct TArray<struct FName>& NewStates;
		enum class FSM_Transition& Transition;
	}; MakeStates_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	NewStates = Params.NewStates;
	Transition = Params.Transition;

}

// Function UFSM.StateMachineComponent.IsInitializedFSM
inline char UStateMachineComponent::IsInitializedFSM() {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.StateMachineComponent.IsInitializedFSM");

	struct IsInitializedFSM_Params {
		
		char ReturnValue;

	}; IsInitializedFSM_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UFSM.StateMachineComponent.GoToFSM
inline void UStateMachineComponent::GoToFSM(struct UStateMachineComponent TargetMachine, enum class FSM_Transition& Transition) {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.StateMachineComponent.GoToFSM");

	struct GoToFSM_Params {
		struct UStateMachineComponent TargetMachine;
		enum class FSM_Transition& Transition;
	}; GoToFSM_Params Params;

	Params.TargetMachine = TargetMachine;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Transition = Params.Transition;

}

// Function UFSM.StateMachineComponent.GetTime
inline float UStateMachineComponent::GetTime() {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.StateMachineComponent.GetTime");

	struct GetTime_Params {
		
		float ReturnValue;

	}; GetTime_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UFSM.StateMachineComponent.GetPreviousStateName
inline struct FName UStateMachineComponent::GetPreviousStateName() {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.StateMachineComponent.GetPreviousStateName");

	struct GetPreviousStateName_Params {
		
		struct FName ReturnValue;

	}; GetPreviousStateName_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UFSM.StateMachineComponent.GetPreviousStateID
inline char UStateMachineComponent::GetPreviousStateID() {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.StateMachineComponent.GetPreviousStateID");

	struct GetPreviousStateID_Params {
		
		char ReturnValue;

	}; GetPreviousStateID_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UFSM.StateMachineComponent.GetCurrentStateName
inline struct FName UStateMachineComponent::GetCurrentStateName() {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.StateMachineComponent.GetCurrentStateName");

	struct GetCurrentStateName_Params {
		
		struct FName ReturnValue;

	}; GetCurrentStateName_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UFSM.StateMachineComponent.GetCurrentStateID
inline char UStateMachineComponent::GetCurrentStateID() {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.StateMachineComponent.GetCurrentStateID");

	struct GetCurrentStateID_Params {
		
		char ReturnValue;

	}; GetCurrentStateID_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UFSM.StateMachineComponent.GetActiveState
inline struct FSM_State UStateMachineComponent::GetActiveState() {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.StateMachineComponent.GetActiveState");

	struct GetActiveState_Params {
		
		struct FSM_State ReturnValue;

	}; GetActiveState_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UFSM.StateMachineComponent.FSM_UpdateArgs
inline void UStateMachineComponent::FSM_UpdateArgs(struct FSM_UpdateEvent StateInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.StateMachineComponent.FSM_UpdateArgs");

	struct FSM_UpdateArgs_Params {
		struct FSM_UpdateEvent StateInfo;
	}; FSM_UpdateArgs_Params Params;

	Params.StateInfo = StateInfo;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UFSM.StateMachineComponent.FSM_TransitionRule
inline void UStateMachineComponent::FSM_TransitionRule(enum class FSM_Transition& Condition) {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.StateMachineComponent.FSM_TransitionRule");

	struct FSM_TransitionRule_Params {
		enum class FSM_Transition& Condition;
	}; FSM_TransitionRule_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Condition = Params.Condition;

}

// Function UFSM.StateMachineComponent.FSM_ExitArgs
inline void UStateMachineComponent::FSM_ExitArgs(struct FSM_ExitEvent StateInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.StateMachineComponent.FSM_ExitArgs");

	struct FSM_ExitArgs_Params {
		struct FSM_ExitEvent StateInfo;
	}; FSM_ExitArgs_Params Params;

	Params.StateInfo = StateInfo;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UFSM.StateMachineComponent.FSM_BeginArgs
inline void UStateMachineComponent::FSM_BeginArgs(struct FSM_BeginEvent StateInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.StateMachineComponent.FSM_BeginArgs");

	struct FSM_BeginArgs_Params {
		struct FSM_BeginEvent StateInfo;
	}; FSM_BeginArgs_Params Params;

	Params.StateInfo = StateInfo;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UFSM.StateMachineComponent.FinishStateWithCallbacks
inline void UStateMachineComponent::FinishStateWithCallbacks(enum class FSM_Transition& Transition, struct FDelegate& ExitPreviousStateCallback, struct FDelegate& BeginNextStateCallback) {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.StateMachineComponent.FinishStateWithCallbacks");

	struct FinishStateWithCallbacks_Params {
		enum class FSM_Transition& Transition;
		struct FDelegate& ExitPreviousStateCallback;
		struct FDelegate& BeginNextStateCallback;
	}; FinishStateWithCallbacks_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Transition = Params.Transition;
	ExitPreviousStateCallback = Params.ExitPreviousStateCallback;
	BeginNextStateCallback = Params.BeginNextStateCallback;

}

// Function UFSM.StateMachineComponent.FinishState_ConditionalWithCallbacks
inline void UStateMachineComponent::FinishState_ConditionalWithCallbacks(enum class FSM_Transition Condition, enum class FSM_Transition& Transition, struct FDelegate& ExitPreviousStateCallback, struct FDelegate& BeginNextStateCallback) {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.StateMachineComponent.FinishState_ConditionalWithCallbacks");

	struct FinishState_ConditionalWithCallbacks_Params {
		enum class FSM_Transition Condition;
		enum class FSM_Transition& Transition;
		struct FDelegate& ExitPreviousStateCallback;
		struct FDelegate& BeginNextStateCallback;
	}; FinishState_ConditionalWithCallbacks_Params Params;

	Params.Condition = Condition;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Transition = Params.Transition;
	ExitPreviousStateCallback = Params.ExitPreviousStateCallback;
	BeginNextStateCallback = Params.BeginNextStateCallback;

}

// Function UFSM.StateMachineComponent.FinishState_Conditional
inline void UStateMachineComponent::FinishState_Conditional(enum class FSM_Transition Condition, enum class FSM_Transition& Transition) {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.StateMachineComponent.FinishState_Conditional");

	struct FinishState_Conditional_Params {
		enum class FSM_Transition Condition;
		enum class FSM_Transition& Transition;
	}; FinishState_Conditional_Params Params;

	Params.Condition = Condition;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Transition = Params.Transition;

}

// Function UFSM.StateMachineComponent.FinishState
inline void UStateMachineComponent::FinishState(enum class FSM_Transition& Transition) {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.StateMachineComponent.FinishState");

	struct FinishState_Params {
		enum class FSM_Transition& Transition;
	}; FinishState_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Transition = Params.Transition;

}

// Function UFSM.StateMachineComponent.Exit
inline char UStateMachineComponent::Exit(char ExitState, char NextState, enum class FSM_Transition& Transition, struct FDelegate& Callback) {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.StateMachineComponent.Exit");

	struct Exit_Params {
		char ExitState;
		char NextState;
		enum class FSM_Transition& Transition;
		struct FDelegate& Callback;
		char ReturnValue;

	}; Exit_Params Params;

	Params.ExitState = ExitState;
	Params.NextState = NextState;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Transition = Params.Transition;
	Callback = Params.Callback;


	return params.ReturnValue;
}

// Function UFSM.StateMachineComponent.Event_OnUpdateState
inline void UStateMachineComponent::Event_OnUpdateState(char CurrentState, struct FName StateName, float StateTimer) {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.StateMachineComponent.Event_OnUpdateState");

	struct Event_OnUpdateState_Params {
		char CurrentState;
		struct FName StateName;
		float StateTimer;
	}; Event_OnUpdateState_Params Params;

	Params.CurrentState = CurrentState;
	Params.StateName = StateName;
	Params.StateTimer = StateTimer;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UFSM.StateMachineComponent.Event_OnExitState
inline void UStateMachineComponent::Event_OnExitState(char CurrentState, struct FName StateName, enum class FSM_Transition Transition) {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.StateMachineComponent.Event_OnExitState");

	struct Event_OnExitState_Params {
		char CurrentState;
		struct FName StateName;
		enum class FSM_Transition Transition;
	}; Event_OnExitState_Params Params;

	Params.CurrentState = CurrentState;
	Params.StateName = StateName;
	Params.Transition = Transition;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UFSM.StateMachineComponent.Event_OnConstruct
inline void UStateMachineComponent::Event_OnConstruct() {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.StateMachineComponent.Event_OnConstruct");

	struct Event_OnConstruct_Params {
		
	}; Event_OnConstruct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UFSM.StateMachineComponent.Event_OnBeginState
inline void UStateMachineComponent::Event_OnBeginState(char CurrentState, char PreviousState, struct FName StateName, enum class FSM_Transition Transition) {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.StateMachineComponent.Event_OnBeginState");

	struct Event_OnBeginState_Params {
		char CurrentState;
		char PreviousState;
		struct FName StateName;
		enum class FSM_Transition Transition;
	}; Event_OnBeginState_Params Params;

	Params.CurrentState = CurrentState;
	Params.PreviousState = PreviousState;
	Params.StateName = StateName;
	Params.Transition = Transition;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UFSM.StateMachineComponent.Enter
inline void UStateMachineComponent::Enter(char InState, struct FDelegate& Callback) {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.StateMachineComponent.Enter");

	struct Enter_Params {
		char InState;
		struct FDelegate& Callback;
	}; Enter_Params Params;

	Params.InState = InState;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Callback = Params.Callback;

}

// Function UFSM.StateMachineComponent.CLIENT_SetStateValue
inline void UStateMachineComponent::CLIENT_SetStateValue(struct FSM_State Value) {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.StateMachineComponent.CLIENT_SetStateValue");

	struct CLIENT_SetStateValue_Params {
		struct FSM_State Value;
	}; CLIENT_SetStateValue_Params Params;

	Params.Value = Value;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UFSM.StateMachineComponent.CLIENT_SetStateID
inline void UStateMachineComponent::CLIENT_SetStateID(char ID) {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.StateMachineComponent.CLIENT_SetStateID");

	struct CLIENT_SetStateID_Params {
		char ID;
	}; CLIENT_SetStateID_Params Params;

	Params.ID = ID;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UFSM.StateMachineComponent.CLIENT_SetState
inline void UStateMachineComponent::CLIENT_SetState(struct FName Name) {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.StateMachineComponent.CLIENT_SetState");

	struct CLIENT_SetState_Params {
		struct FName Name;
	}; CLIENT_SetState_Params Params;

	Params.Name = Name;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UFSM.StateMachineComponent.CLIENT_RemoveState
inline void UStateMachineComponent::CLIENT_RemoveState(struct FName Name) {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.StateMachineComponent.CLIENT_RemoveState");

	struct CLIENT_RemoveState_Params {
		struct FName Name;
	}; CLIENT_RemoveState_Params Params;

	Params.Name = Name;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UFSM.StateMachineComponent.CLIENT_MakeStates
inline void UStateMachineComponent::CLIENT_MakeStates(struct TArray<struct FName> NewStates) {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.StateMachineComponent.CLIENT_MakeStates");

	struct CLIENT_MakeStates_Params {
		struct TArray<struct FName> NewStates;
	}; CLIENT_MakeStates_Params Params;

	Params.NewStates = NewStates;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UFSM.StateMachineComponent.CLIENT_GoToFSM
inline void UStateMachineComponent::CLIENT_GoToFSM(struct UStateMachineComponent TargetMachine) {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.StateMachineComponent.CLIENT_GoToFSM");

	struct CLIENT_GoToFSM_Params {
		struct UStateMachineComponent TargetMachine;
	}; CLIENT_GoToFSM_Params Params;

	Params.TargetMachine = TargetMachine;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UFSM.StateMachineComponent.CLIENT_FinishState
inline void UStateMachineComponent::CLIENT_FinishState() {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.StateMachineComponent.CLIENT_FinishState");

	struct CLIENT_FinishState_Params {
		
	}; CLIENT_FinishState_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UFSM.StateMachineComponent.CLIENT_AddState
inline void UStateMachineComponent::CLIENT_AddState(char ID, struct FName Name) {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.StateMachineComponent.CLIENT_AddState");

	struct CLIENT_AddState_Params {
		char ID;
		struct FName Name;
	}; CLIENT_AddState_Params Params;

	Params.ID = ID;
	Params.Name = Name;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UFSM.StateMachineComponent.CLIENT_ActivateFSM
inline void UStateMachineComponent::CLIENT_ActivateFSM() {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.StateMachineComponent.CLIENT_ActivateFSM");

	struct CLIENT_ActivateFSM_Params {
		
	}; CLIENT_ActivateFSM_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UFSM.StateMachineComponent.AddState
inline struct FSM_State UStateMachineComponent::AddState(char ID, struct FName Name, enum class FSM_Transition& Transition) {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.StateMachineComponent.AddState");

	struct AddState_Params {
		char ID;
		struct FName Name;
		enum class FSM_Transition& Transition;
		struct FSM_State ReturnValue;

	}; AddState_Params Params;

	Params.ID = ID;
	Params.Name = Name;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Transition = Params.Transition;


	return params.ReturnValue;
}

// Function UFSM.StateMachineComponent.ActivateFSM
inline void UStateMachineComponent::ActivateFSM(enum class FSM_Transition& Transition) {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.StateMachineComponent.ActivateFSM");

	struct ActivateFSM_Params {
		enum class FSM_Transition& Transition;
	}; ActivateFSM_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Transition = Params.Transition;

}

