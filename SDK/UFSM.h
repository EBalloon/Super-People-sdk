// Enum UFSM.FSM_Transition
enum class FSM_Transition : uint8_t {
	FSM_Transition = 0,
	FSM_Transition = 1,
	FSM_Transition = 2,
};

// Enum UFSM.ESeverity
enum class ESeverity : uint8_t {
	ESeverity = 0,
	ESeverity = 1,
	ESeverity = 2,
	ESeverity = 3,
	ESeverity = 4,
};

// Class UFSM.FSM_SetState_Async
class UFSM_SetState_Async : public UBlueprintAsyncActionBase {

public:

	struct Unknown Target; // 0x30 (8)
	struct FName StateName; // 0x38 (8)
	float Timer; // 0x40 (4)
	char Repeat : 0; // 0x44 (1)
	struct Unknown TimerHandle; // 0x48 (8)
	struct FMulticastInlineDelegate OnSuccess; // 0x50 (16)
	struct FMulticastInlineDelegate OnAborted; // 0x60 (16)

	struct Unknown FSM_SetState_Async(struct Unknown FSM, float WaitForSeconds, struct FName Name, char Loop); // Function UFSM.FSM_SetState_Async.FSM_SetState_Async(Final|Native|Static|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11EF930>
	void Execute(); // Function UFSM.FSM_SetState_Async.Execute(Final|Native|Private) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11EEB60>
};

// Class UFSM.FSM_SetStateID_Async
class UFSM_SetStateID_Async : public UBlueprintAsyncActionBase {

public:

	struct Unknown Target; // 0x30 (8)
	char StateID; // 0x38 (1)
	float Timer; // 0x3C (4)
	char Repeat : 0; // 0x40 (1)
	struct Unknown TimerHandle; // 0x48 (8)
	struct FMulticastInlineDelegate OnSuccess; // 0x50 (16)
	struct FMulticastInlineDelegate OnAborted; // 0x60 (16)

	struct Unknown FSM_SetStateID_Async(struct Unknown FSM, float WaitForSeconds, char ID, char Loop); // Function UFSM.FSM_SetStateID_Async.FSM_SetStateID_Async(Final|Native|Static|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11EF200>
	void Execute(); // Function UFSM.FSM_SetStateID_Async.Execute(Final|Native|Private) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11EEAE0>
};

// Class UFSM.FSM_SetState_ConditionalAsync
class UFSM_SetState_ConditionalAsync : public UBlueprintAsyncActionBase {

public:

	struct Unknown Target; // 0x30 (8)
	enum class Unknow Conditional; // 0x38 (1)
	struct FName StateName; // 0x3C (8)
	float Timer; // 0x44 (4)
	char Repeat : 0; // 0x48 (1)
	struct Unknown TimerHandle; // 0x50 (8)
	struct FMulticastInlineDelegate OnSuccess; // 0x58 (16)
	struct FMulticastInlineDelegate OnAborted; // 0x68 (16)

	struct Unknown FSM_SetState_ConditionalAsync(struct Unknown FSM, float WaitForSeconds, struct FName Name, enum class Unknow Condition, char Loop); // Function UFSM.FSM_SetState_ConditionalAsync.FSM_SetState_ConditionalAsync(Final|Native|Static|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11EFC80>
	void Execute(); // Function UFSM.FSM_SetState_ConditionalAsync.Execute(Final|Native|Private) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11EEBA0>
};

// Class UFSM.FSM_SetStateID_ConditionalAsync
class UFSM_SetStateID_ConditionalAsync : public UBlueprintAsyncActionBase {

public:

	struct Unknown Target; // 0x30 (8)
	enum class Unknow Conditional; // 0x38 (1)
	char StateID; // 0x39 (1)
	float Timer; // 0x3C (4)
	char Repeat : 0; // 0x40 (1)
	struct Unknown TimerHandle; // 0x48 (8)
	struct FMulticastInlineDelegate OnSuccess; // 0x50 (16)
	struct FMulticastInlineDelegate OnAborted; // 0x60 (16)

	struct Unknown FSM_SetStateID_ConditionalAsync(struct Unknown FSM, float WaitForSeconds, char ID, enum class Unknow Condition, char Loop); // Function UFSM.FSM_SetStateID_ConditionalAsync.FSM_SetStateID_ConditionalAsync(Final|Native|Static|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11EF560>
	void Execute(); // Function UFSM.FSM_SetStateID_ConditionalAsync.Execute(Final|Native|Private) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11EEB20>
};

// Class UFSM.FSM_SetState_AsyncWithCallbacks
class UFSM_SetState_AsyncWithCallbacks : public UBlueprintAsyncActionBase {

public:

	struct Unknown Target; // 0x30 (8)
	struct FDelegate InBegin; // 0x38 (16)
	struct FDelegate InExit; // 0x48 (16)
	struct FName StateName; // 0x58 (8)
	float Timer; // 0x60 (4)
	char Repeat : 0; // 0x64 (1)
	struct Unknown TimerHandle; // 0x68 (8)
	struct FMulticastInlineDelegate OnSuccess; // 0x70 (16)
	struct FMulticastInlineDelegate OnAborted; // 0x80 (16)

	struct Unknown FSM_SetState_AsyncWithCallbacks(struct Unknown FSM, float WaitForSeconds, struct FName Name, char Loop, struct FDelegate& ExitPreviousStateCallback, struct FDelegate& BeginNextStateCallback); // Function UFSM.FSM_SetState_AsyncWithCallbacks.FSM_SetState_AsyncWithCallbacks(Final|Native|Static|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11EFA70>
	void Execute(); // Function UFSM.FSM_SetState_AsyncWithCallbacks.Execute(Final|Native|Private) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11EEB80>
};

// Class UFSM.FSM_SetStateID_AsyncWithCallbacks
class UFSM_SetStateID_AsyncWithCallbacks : public UBlueprintAsyncActionBase {

public:

	struct Unknown Target; // 0x30 (8)
	struct FDelegate InBegin; // 0x38 (16)
	struct FDelegate InExit; // 0x48 (16)
	char StateID; // 0x58 (1)
	float Timer; // 0x5C (4)
	char Repeat : 0; // 0x60 (1)
	struct Unknown TimerHandle; // 0x68 (8)
	struct FMulticastInlineDelegate OnSuccess; // 0x70 (16)
	struct FMulticastInlineDelegate OnAborted; // 0x80 (16)

	struct Unknown FSM_SetStateID_AsyncWithCallbacks(struct Unknown FSM, float WaitForSeconds, char ID, char Loop, struct FDelegate& ExitPreviousStateCallback, struct FDelegate& BeginNextStateCallback); // Function UFSM.FSM_SetStateID_AsyncWithCallbacks.FSM_SetStateID_AsyncWithCallbacks(Final|Native|Static|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11EF340>
	void Execute(); // Function UFSM.FSM_SetStateID_AsyncWithCallbacks.Execute(Final|Native|Private) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11EEB00>
};

// Class UFSM.FSM_SetState_ConditionalAsyncWithCallbacks
class UFSM_SetState_ConditionalAsyncWithCallbacks : public UBlueprintAsyncActionBase {

public:

	struct Unknown Target; // 0x30 (8)
	enum class Unknow Conditional; // 0x38 (1)
	struct FDelegate InBegin; // 0x3C (16)
	struct FDelegate InExit; // 0x4C (16)
	struct FName StateName; // 0x5C (8)
	float Timer; // 0x64 (4)
	char Repeat : 0; // 0x68 (1)
	struct Unknown TimerHandle; // 0x70 (8)
	struct FMulticastInlineDelegate OnSuccess; // 0x78 (16)
	struct FMulticastInlineDelegate OnAborted; // 0x88 (16)

	struct Unknown FSM_SetState_ConditionalAsyncWithCallbacks(struct Unknown FSM, float WaitForSeconds, struct FName Name, enum class Unknow Condition, char Loop, struct FDelegate& ExitPreviousStateCallback, struct FDelegate& BeginNextStateCallback); // Function UFSM.FSM_SetState_ConditionalAsyncWithCallbacks.FSM_SetState_ConditionalAsyncWithCallbacks(Final|Native|Static|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11EFE00>
	void Execute(); // Function UFSM.FSM_SetState_ConditionalAsyncWithCallbacks.Execute(Final|Native|Private) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11EEBC0>
};

// Class UFSM.FSM_SetStateID_ConditionalAsyncWithCallbacks
class UFSM_SetStateID_ConditionalAsyncWithCallbacks : public UBlueprintAsyncActionBase {

public:

	struct Unknown Target; // 0x30 (8)
	enum class Unknow Conditional; // 0x38 (1)
	struct FDelegate InBegin; // 0x3C (16)
	struct FDelegate InExit; // 0x4C (16)
	char StateID; // 0x5C (1)
	float Timer; // 0x60 (4)
	char Repeat : 0; // 0x64 (1)
	struct Unknown TimerHandle; // 0x68 (8)
	struct FMulticastInlineDelegate OnSuccess; // 0x70 (16)
	struct FMulticastInlineDelegate OnAborted; // 0x80 (16)

	struct Unknown FSM_SetStateID_ConditionalAsyncWithCallbacks(struct Unknown FSM, float WaitForSeconds, char ID, enum class Unknow Condition, char Loop, struct FDelegate& ExitPreviousStateCallback, struct FDelegate& BeginNextStateCallback); // Function UFSM.FSM_SetStateID_ConditionalAsyncWithCallbacks.FSM_SetStateID_ConditionalAsyncWithCallbacks(Final|Native|Static|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11EF6E0>
	void Execute(); // Function UFSM.FSM_SetStateID_ConditionalAsyncWithCallbacks.Execute(Final|Native|Private) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11EEB40>
};

// Class UFSM.FSM_FinishState_Async
class UFSM_FinishState_Async : public UBlueprintAsyncActionBase {

public:

	struct Unknown Target; // 0x30 (8)
	float Timer; // 0x38 (4)
	struct Unknown TimerHandle; // 0x40 (8)
	struct FMulticastInlineDelegate OnSuccess; // 0x48 (16)
	struct FMulticastInlineDelegate OnAborted; // 0x58 (16)

	struct Unknown FSM_FinishState_Async(struct Unknown FSM, float WaitForSeconds); // Function UFSM.FSM_FinishState_Async.FSM_FinishState_Async(Final|Native|Static|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11EEBE0>
	void Execute(); // Function UFSM.FSM_FinishState_Async.Execute(Final|Native|Private) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11EEA60>
};

// Class UFSM.FSM_FinishState_ConditionalAsync
class UFSM_FinishState_ConditionalAsync : public UBlueprintAsyncActionBase {

public:

	struct Unknown Target; // 0x30 (8)
	enum class Unknow Conditional; // 0x38 (1)
	struct FName FallbackState; // 0x3C (8)
	float Timer; // 0x44 (4)
	struct Unknown TimerHandle; // 0x48 (8)
	struct FMulticastInlineDelegate OnSuccess; // 0x50 (16)
	struct FMulticastInlineDelegate OnAborted; // 0x60 (16)

	struct Unknown FSM_FinishState_ConditionalAsync(struct Unknown FSM, enum class Unknow Condition, float WaitForSeconds, struct FName Fallback); // Function UFSM.FSM_FinishState_ConditionalAsync.FSM_FinishState_ConditionalAsync(Final|Native|Static|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11EEE40>
	void Execute(); // Function UFSM.FSM_FinishState_ConditionalAsync.Execute(Final|Native|Private) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11EEAA0>
};

// Class UFSM.FSM_FinishState_AsyncWithCallbacks
class UFSM_FinishState_AsyncWithCallbacks : public UBlueprintAsyncActionBase {

public:

	struct Unknown Target; // 0x30 (8)
	struct FDelegate InBegin; // 0x38 (16)
	struct FDelegate InExit; // 0x48 (16)
	float Timer; // 0x58 (4)
	struct Unknown TimerHandle; // 0x60 (8)
	struct FMulticastInlineDelegate OnSuccess; // 0x68 (16)
	struct FMulticastInlineDelegate OnAborted; // 0x78 (16)

	struct Unknown FSM_FinishState_AsyncWithCallbacks(struct Unknown FSM, float WaitForSeconds, struct FDelegate& ExitPreviousStateCallback, struct FDelegate& BeginNextStateCallback); // Function UFSM.FSM_FinishState_AsyncWithCallbacks.FSM_FinishState_AsyncWithCallbacks(Final|Native|Static|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11EECB0>
	void Execute(); // Function UFSM.FSM_FinishState_AsyncWithCallbacks.Execute(Final|Native|Private) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11EEA80>
};

// Class UFSM.FSM_FinishState_ConditionalAsyncWithCallbacks
class UFSM_FinishState_ConditionalAsyncWithCallbacks : public UBlueprintAsyncActionBase {

public:

	struct Unknown Target; // 0x30 (8)
	enum class Unknow Conditional; // 0x38 (1)
	struct FDelegate InBegin; // 0x3C (16)
	struct FDelegate InExit; // 0x4C (16)
	struct FDelegate InFallback; // 0x5C (16)
	struct FName FallbackState; // 0x6C (8)
	float Timer; // 0x74 (4)
	struct Unknown TimerHandle; // 0x78 (8)
	struct FMulticastInlineDelegate OnSuccess; // 0x80 (16)
	struct FMulticastInlineDelegate OnAborted; // 0x90 (16)

	struct Unknown FSM_FinishState_ConditionalAsyncWithCallbacks(struct Unknown FSM, enum class Unknow Condition, float WaitForSeconds, struct FName Fallback, struct FDelegate& ExitPreviousStateCallback, struct FDelegate& BeginNextStateCallback, struct FDelegate& BeginFallbackStateCallback); // Function UFSM.FSM_FinishState_ConditionalAsyncWithCallbacks.FSM_FinishState_ConditionalAsyncWithCallbacks(Final|Native|Static|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11EEF80>
	void Execute(); // Function UFSM.FSM_FinishState_ConditionalAsyncWithCallbacks.Execute(Final|Native|Private) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11EEAC0>
};

// Class UFSM.BTTask_FSM_AddState
class UBTTask_FSM_AddState : public UBTTask_BlackboardBase {

public:

	struct Unknown FSM; // 0x98 (8)
	struct FName TargetFSM; // 0xA0 (8)
	struct FName NewStateName; // 0xA8 (8)
	char Debug : 0; // 0xB0 (1)
	char ForceSuccess : 0; // 0xB1 (1)
};

// Class UFSM.BTTask_FSM_SetState
class UBTTask_FSM_SetState : public UBTTask_BlackboardBase {

public:

	struct Unknown FSM; // 0x98 (8)
	struct FName TargetFSM; // 0xA0 (8)
	struct FName StateName; // 0xA8 (8)
	char Debug : 0; // 0xB0 (1)
	char ForceSuccess : 0; // 0xB1 (1)
};

// Class UFSM.BTTask_FSM_RemoveState
class UBTTask_FSM_RemoveState : public UBTTask_BlackboardBase {

public:

	struct Unknown FSM; // 0x98 (8)
	struct FName TargetFSM; // 0xA0 (8)
	struct FName StateName; // 0xA8 (8)
	char Debug : 0; // 0xB0 (1)
	char ForceSuccess : 0; // 0xB1 (1)
};

// Class UFSM.BTTask_FSM_CheckState
class UBTTask_FSM_CheckState : public UBTTask_BlackboardBase {

public:

	struct Unknown FSM; // 0x98 (8)
	struct FName TargetFSM; // 0xA0 (8)
	struct FName StateName; // 0xA8 (8)
	char Debug : 0; // 0xB0 (1)
	char ForceSuccess : 0; // 0xB1 (1)
};

// Class UFSM.RSM
class URSM : public Object {

public:

	struct Unknown SGUID; // 0x28 (16)
	int32_t PlayerId; // 0x38 (4)
	struct TWeakObjectPtr<struct Unknown> Owner; // 0x3C (8)
};

// Class UFSM.ReactiveStateMachine
class UReactiveStateMachine : public URSM {

public:

	struct TArray<Unknown> StateGraph; // 0x58 (16)
	float MachineTime; // 0x68 (4)
	struct FMulticastInlineDelegate _OnEntry; // 0x70 (16)
	struct FMulticastInlineDelegate _OnExit; // 0x80 (16)
	struct TMap<Unknown, Unknown> MachineData; // 0x90 (80)

	void Update(float DeltaTime); // Function UFSM.ReactiveStateMachine.Update(Final|Native|Private) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11F46D0>
	void OnUpdate(float DeltaTime); // Function UFSM.ReactiveStateMachine.OnUpdate(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnExit(); // Function UFSM.ReactiveStateMachine.OnExit(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnEntry(); // Function UFSM.ReactiveStateMachine.OnEntry(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnConstruct(); // Function UFSM.ReactiveStateMachine.OnConstruct(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	char IsMachineActive(); // Function UFSM.ReactiveStateMachine.IsMachineActive(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11F42B0>
	void Init(); // Function UFSM.ReactiveStateMachine.Init(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11F3F60>
	float GetStateMachineUpdateTime(); // Function UFSM.ReactiveStateMachine.GetStateMachineUpdateTime(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11F3F00>
	struct Unknown GetOwnerAsStateMachine(); // Function UFSM.ReactiveStateMachine.GetOwnerAsStateMachine(Final|Native|Private|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11F3D50>
	struct Unknown GetOwnerAsHUD(); // Function UFSM.ReactiveStateMachine.GetOwnerAsHUD(Final|Native|Private|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11F3EA0>
	struct Unknown GetOwnerAsGameMode(); // Function UFSM.ReactiveStateMachine.GetOwnerAsGameMode(Final|Native|Private|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11F3E70>
	struct Unknown GetOwnerAsControllerAI(); // Function UFSM.ReactiveStateMachine.GetOwnerAsControllerAI(Final|Native|Private|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11F3E40>
	struct Unknown GetOwnerAsController(); // Function UFSM.ReactiveStateMachine.GetOwnerAsController(Final|Native|Private|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11F3E10>
	struct Unknown GetOwnerAsComponent(); // Function UFSM.ReactiveStateMachine.GetOwnerAsComponent(Final|Native|Private|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11F3DE0>
	struct Unknown GetOwnerAsCharacter(); // Function UFSM.ReactiveStateMachine.GetOwnerAsCharacter(Final|Native|Private|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11F3DB0>
	struct Unknown GetOwnerAsActor(); // Function UFSM.ReactiveStateMachine.GetOwnerAsActor(Final|Native|Private|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11F3D80>
	struct Unknown GetOwner(); // Function UFSM.ReactiveStateMachine.GetOwner(Final|Native|Private|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11F3D20>
	void Exit(); // Function UFSM.ReactiveStateMachine.Exit(Final|Native|Private) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11F2250>
	void Entry(); // Function UFSM.ReactiveStateMachine.Entry(Final|Native|Private) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11F2230>
	void End(); // Function UFSM.ReactiveStateMachine.End(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11F2210>
};

// Class UFSM.FSMSettings
class UFSMSettings : public Object {

public:

	char EnableInterfaceStatePropagation : 0; // 0x28 (1)
	char SuppressRPCWarnings : 0; // 0x29 (1)
	float DefaultTickInterval; // 0x2C (4)
	struct TArray<Unknown> DefaultStates; // 0x30 (16)
};

// Class UFSM.RSMSubsystem
class URSMSubsystem : public ULocalPlayerSubsystem {

public:

	struct TArray<Unknown> MachineStack; // 0x30 (16)
};

// Class UFSM.StateMachineABP
class UStateMachineABP : public UAnimInstance {

public:

	struct Unknown FSM; // 0x268 (8)
	char OverrideFSM : 0; // 0x270 (1)
	struct FName TargetFSM; // 0x274 (8)
	struct FName TargetASM; // 0x27C (8)

	struct Unknown GetFSMComponentByName(struct FName Name); // Function UFSM.StateMachineABP.GetFSMComponentByName(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11F8990>
	struct Unknown GetFSMComponent(); // Function UFSM.StateMachineABP.GetFSMComponent(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11F8960>
};

// Class UFSM.StateMachineComponent
class UStateMachineComponent : public UActorComponent {

public:

	struct Unknown FSM_ExitArguments; // 0xB8 (12)
	struct Unknown FSM_BeginArguments; // 0xC4 (12)
	struct Unknown FSM_UpdateArguments; // 0xD0 (8)
	char IsOverriden : 0; // 0xE0 (1)
	char IsFullyInitialized : 0; // 0xE1 (1)
	char StateID; // 0xE2 (1)
	char PreviousStateID; // 0xE3 (1)
	float StateTime; // 0xE4 (4)
	struct Unknown STATE_Null; // 0xE8 (64)
	struct TMap<Unknown, Unknown> State; // 0x128 (80)
	struct FDelegate InBegin; // 0x178 (16)
	struct FDelegate InUpdate; // 0x188 (16)
	struct FDelegate InExit; // 0x198 (16)
	struct FName StartupState; // 0x1A8 (8)
	struct TArray<Unknown> States; // 0x1B0 (16)
	struct TMap<Unknown, Unknown> LINKS; // 0x1C0 (80)
	char UseEnumFromCPP : 0; // 0x210 (1)
	struct FString CPP_EnumName; // 0x218 (16)
	struct Unknown K2_Enumerator; // 0x228 (8)
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

	void Update(char UpState, struct FDelegate& Callback); // Function UFSM.StateMachineComponent.Update(Native|Protected|HasOutParms) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11FB700>
	void SetStateWithCallbacks(struct FName Name, enum class Unknow& Transition, struct FDelegate& ExitPreviousStateCallback, struct FDelegate& BeginNextStateCallback); // Function UFSM.StateMachineComponent.SetStateWithCallbacks(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11FB120>
	void SetStateValueWithCallbacks(struct Unknown& Value, enum class Unknow& Transition, struct FDelegate& ExitPreviousStateCallback, struct FDelegate& BeginNextStateCallback); // Function UFSM.StateMachineComponent.SetStateValueWithCallbacks(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11FAB50>
	void SetStateValue_ConditionalWithCallbacks(struct Unknown& Value, enum class Unknow Condition, enum class Unknow& Transition, struct FDelegate& ExitPreviousStateCallback, struct FDelegate& BeginNextStateCallback); // Function UFSM.StateMachineComponent.SetStateValue_ConditionalWithCallbacks(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11FAED0>
	void SetStateValue_Conditional(struct Unknown& Value, enum class Unknow Condition, enum class Unknow& Transition); // Function UFSM.StateMachineComponent.SetStateValue_Conditional(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11FAD60>
	void SetStateValue(struct Unknown& Value, enum class Unknow& Transition); // Function UFSM.StateMachineComponent.SetStateValue(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11FAA10>
	void SetStateIDWithCallbacks(char ID, enum class Unknow& Transition, struct FDelegate& ExitPreviousStateCallback, struct FDelegate& BeginNextStateCallback); // Function UFSM.StateMachineComponent.SetStateIDWithCallbacks(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11FA580>
	void SetStateID_ConditionalWithCallbacks(char ID, enum class Unknow Condition, enum class Unknow& Transition, struct FDelegate& ExitPreviousStateCallback, struct FDelegate& BeginNextStateCallback); // Function UFSM.StateMachineComponent.SetStateID_ConditionalWithCallbacks(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11FA830>
	void SetStateID_Conditional(char ID, enum class Unknow Condition, enum class Unknow& Transition); // Function UFSM.StateMachineComponent.SetStateID_Conditional(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11FA720>
	void SetStateID(char ID, enum class Unknow& Transition); // Function UFSM.StateMachineComponent.SetStateID(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11FA4B0>
	void SetState_ConditionalWithCallbacks(struct FName Name, enum class Unknow Condition, enum class Unknow& Transition, struct FDelegate& ExitPreviousStateCallback, struct FDelegate& BeginNextStateCallback); // Function UFSM.StateMachineComponent.SetState_ConditionalWithCallbacks(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11FB3D0>
	void SetState_Conditional(struct FName Name, enum class Unknow Condition, enum class Unknow& Transition); // Function UFSM.StateMachineComponent.SetState_Conditional(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11FB2C0>
	void SetState(struct FName Name, enum class Unknow& Transition); // Function UFSM.StateMachineComponent.SetState(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11FA3E0>
	void SERVER_SetStateValue(struct Unknown Value, char Validate); // Function UFSM.StateMachineComponent.SERVER_SetStateValue(Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable|NetValidate) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11FA290>
	void SERVER_SetStateID(char ID, char Validate); // Function UFSM.StateMachineComponent.SERVER_SetStateID(Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable|NetValidate) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11FA190>
	void SERVER_SetState(struct FName Name, char Validate); // Function UFSM.StateMachineComponent.SERVER_SetState(Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable|NetValidate) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11FA090>
	void SERVER_RemoveState(struct FName Name, char Validate); // Function UFSM.StateMachineComponent.SERVER_RemoveState(Net|NetReliableNative|Event|Public|NetServer|NetValidate) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11F9F90>
	void SERVER_MakeStates(struct TArray<Unknown> NewStates, char Validate); // Function UFSM.StateMachineComponent.SERVER_MakeStates(Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable|NetValidate) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11F9E70>
	void SERVER_GoToFSM(struct Unknown TargetMachine, char Validate); // Function UFSM.StateMachineComponent.SERVER_GoToFSM(Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable|NetValidate) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11F9D70>
	void SERVER_FinishState(char Validate); // Function UFSM.StateMachineComponent.SERVER_FinishState(Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable|NetValidate) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11F9CB0>
	void SERVER_AddState(char ID, struct FName Name, char Validate); // Function UFSM.StateMachineComponent.SERVER_AddState(Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable|NetValidate) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11F9B70>
	void SERVER_ActivateFSM(char Validate); // Function UFSM.StateMachineComponent.SERVER_ActivateFSM(Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable|NetValidate) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11F9AB0>
	void RemoveState(struct FName Name, enum class Unknow& Transition); // Function UFSM.StateMachineComponent.RemoveState(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11F99E0>
	enum class Unknow Pure_SetStateByID(char ID); // Function UFSM.StateMachineComponent.Pure_SetStateByID(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11F9950>
	enum class Unknow Pure_SetState(struct FName Name); // Function UFSM.StateMachineComponent.Pure_SetState(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11F98C0>
	enum class Unknow Pure_RemoveState(struct FName Name); // Function UFSM.StateMachineComponent.Pure_RemoveState(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11F9830>
	enum class Unknow Pure_AddState(char ID, struct FName Name); // Function UFSM.StateMachineComponent.Pure_AddState(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11F9770>
	void OnREP_StateTime(float& Time); // Function UFSM.StateMachineComponent.OnREP_StateTime(Native|Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11F96D0>
	void OnREP_StateID(char& ID); // Function UFSM.StateMachineComponent.OnREP_StateID(Native|Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11F9630>
	void OnREP_PreviousStateID(char& PreviousID); // Function UFSM.StateMachineComponent.OnREP_PreviousStateID(Native|Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11F9590>
	void OnInitializedFSM(struct Unknown Context); // Function UFSM.StateMachineComponent.OnInitializedFSM(Native|Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11F9500>
	void OnAnyUpdateState(struct Unknown Context, struct FName WithStateName, char WithStateID, float WithStateTime); // Function UFSM.StateMachineComponent.OnAnyUpdateState(Native|Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11F93C0>
	void OnAnyExitState(struct Unknown Context, struct FName WithStateName, char WithStateID); // Function UFSM.StateMachineComponent.OnAnyExitState(Native|Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11F92C0>
	void OnAnyBeginState(struct Unknown Context, struct FName WithStateName, char WithStateID, char WithPrevious); // Function UFSM.StateMachineComponent.OnAnyBeginState(Native|Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11F9180>
	void MULTI_SetStateValue(struct Unknown Value); // Function UFSM.StateMachineComponent.MULTI_SetStateValue(Net|NetReliableNative|Event|NetMulticast|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11F8FA0>
	void MULTI_SetStateID(char ID); // Function UFSM.StateMachineComponent.MULTI_SetStateID(Net|NetReliableNative|Event|NetMulticast|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11F8F20>
	void MULTI_SetState(struct FName Name); // Function UFSM.StateMachineComponent.MULTI_SetState(Net|NetReliableNative|Event|NetMulticast|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11F8E90>
	void MULTI_RemoveState(struct FName Name); // Function UFSM.StateMachineComponent.MULTI_RemoveState(Net|NetReliableNative|Event|NetMulticast|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11F8E00>
	void MULTI_MakeStates(struct TArray<Unknown> NewStates); // Function UFSM.StateMachineComponent.MULTI_MakeStates(Net|NetReliableNative|Event|NetMulticast|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11F8D60>
	void MULTI_GoToFSM(struct Unknown TargetMachine); // Function UFSM.StateMachineComponent.MULTI_GoToFSM(Net|NetReliableNative|Event|NetMulticast|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11F8CD0>
	void MULTI_FinishState(); // Function UFSM.StateMachineComponent.MULTI_FinishState(Net|NetReliableNative|Event|NetMulticast|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11F8CB0>
	void MULTI_AddState(char ID, struct FName Name); // Function UFSM.StateMachineComponent.MULTI_AddState(Net|NetReliableNative|Event|NetMulticast|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11F8BE0>
	void MULTI_ActivateFSM(); // Function UFSM.StateMachineComponent.MULTI_ActivateFSM(Net|NetReliableNative|Event|NetMulticast|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11F8BC0>
	void MakeStates(struct TArray<Unknown>& NewStates, enum class Unknow& Transition); // Function UFSM.StateMachineComponent.MakeStates(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11F9070>
	char IsInitializedFSM(); // Function UFSM.StateMachineComponent.IsInitializedFSM(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11F8BA0>
	void GoToFSM(struct Unknown TargetMachine, enum class Unknow& Transition); // Function UFSM.StateMachineComponent.GoToFSM(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11F8AD0>
	float GetTime(); // Function UFSM.StateMachineComponent.GetTime(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11F8AB0>
	struct FName GetPreviousStateName(); // Function UFSM.StateMachineComponent.GetPreviousStateName(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11F8A40>
	char GetPreviousStateID(); // Function UFSM.StateMachineComponent.GetPreviousStateID(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11F8A20>
	struct FName GetCurrentStateName(); // Function UFSM.StateMachineComponent.GetCurrentStateName(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11F8930>
	char GetCurrentStateID(); // Function UFSM.StateMachineComponent.GetCurrentStateID(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11F8910>
	struct Unknown GetActiveState(); // Function UFSM.StateMachineComponent.GetActiveState(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11F88A0>
	void FSM_UpdateArgs(struct Unknown StateInfo); // Function UFSM.StateMachineComponent.FSM_UpdateArgs(Final|Native|Private) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11F83D0>
	void FSM_TransitionRule(enum class Unknow& Condition); // Function UFSM.StateMachineComponent.FSM_TransitionRule(Final|Native|Private|HasOutParms) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11F8360>
	void FSM_ExitArgs(struct Unknown StateInfo); // Function UFSM.StateMachineComponent.FSM_ExitArgs(Final|Native|Private) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11F82F0>
	void FSM_BeginArgs(struct Unknown StateInfo); // Function UFSM.StateMachineComponent.FSM_BeginArgs(Final|Native|Private) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11F82F0>
	void FinishStateWithCallbacks(enum class Unknow& Transition, struct FDelegate& ExitPreviousStateCallback, struct FDelegate& BeginNextStateCallback); // Function UFSM.StateMachineComponent.FinishStateWithCallbacks(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11F84C0>
	void FinishState_ConditionalWithCallbacks(enum class Unknow Condition, enum class Unknow& Transition, struct FDelegate& ExitPreviousStateCallback, struct FDelegate& BeginNextStateCallback); // Function UFSM.StateMachineComponent.FinishState_ConditionalWithCallbacks(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11F8700>
	void FinishState_Conditional(enum class Unknow Condition, enum class Unknow& Transition); // Function UFSM.StateMachineComponent.FinishState_Conditional(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11F8630>
	void FinishState(enum class Unknow& Transition); // Function UFSM.StateMachineComponent.FinishState(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11F8430>
	char Exit(char ExitState, char NextState, enum class Unknow& Transition, struct FDelegate& Callback); // Function UFSM.StateMachineComponent.Exit(Native|Protected|HasOutParms) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11F8090>
	void Event_OnUpdateState(char CurrentState, struct FName StateName, float StateTimer); // Function UFSM.StateMachineComponent.Event_OnUpdateState(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Event_OnExitState(char CurrentState, struct FName StateName, enum class Unknow Transition); // Function UFSM.StateMachineComponent.Event_OnExitState(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Event_OnConstruct(); // Function UFSM.StateMachineComponent.Event_OnConstruct(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Event_OnBeginState(char CurrentState, char PreviousState, struct FName StateName, enum class Unknow Transition); // Function UFSM.StateMachineComponent.Event_OnBeginState(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Enter(char InState, struct FDelegate& Callback); // Function UFSM.StateMachineComponent.Enter(Native|Protected|HasOutParms) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11F7EE0>
	void CLIENT_SetStateValue(struct Unknown Value); // Function UFSM.StateMachineComponent.CLIENT_SetStateValue(Net|NetReliableNative|Event|Public|NetClient|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11F7E10>
	void CLIENT_SetStateID(char ID); // Function UFSM.StateMachineComponent.CLIENT_SetStateID(Net|NetReliableNative|Event|Public|NetClient|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11F7D90>
	void CLIENT_SetState(struct FName Name); // Function UFSM.StateMachineComponent.CLIENT_SetState(Net|NetReliableNative|Event|Public|NetClient|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11F7D00>
	void CLIENT_RemoveState(struct FName Name); // Function UFSM.StateMachineComponent.CLIENT_RemoveState(Net|NetReliableNative|Event|Public|NetClient|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11F7C70>
	void CLIENT_MakeStates(struct TArray<Unknown> NewStates); // Function UFSM.StateMachineComponent.CLIENT_MakeStates(Net|NetReliableNative|Event|Public|NetClient|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11F7BD0>
	void CLIENT_GoToFSM(struct Unknown TargetMachine); // Function UFSM.StateMachineComponent.CLIENT_GoToFSM(Net|NetReliableNative|Event|Public|NetClient|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11F7B40>
	void CLIENT_FinishState(); // Function UFSM.StateMachineComponent.CLIENT_FinishState(Net|NetReliableNative|Event|Public|NetClient|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11F7B20>
	void CLIENT_AddState(char ID, struct FName Name); // Function UFSM.StateMachineComponent.CLIENT_AddState(Net|NetReliableNative|Event|Public|NetClient|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11F7A50>
	void CLIENT_ActivateFSM(); // Function UFSM.StateMachineComponent.CLIENT_ActivateFSM(Net|NetReliableNative|Event|Public|NetClient|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11F7A30>
	struct Unknown AddState(char ID, struct FName Name, enum class Unknow& Transition); // Function UFSM.StateMachineComponent.AddState(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11F78E0>
	void ActivateFSM(enum class Unknow& Transition); // Function UFSM.StateMachineComponent.ActivateFSM(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11F7850>
};

// ScriptStruct UFSM.SM_SetMachineState
struct FSM_SetMachineState : FAnimNode_Base {
	struct Unknown BasePose; // 0x10 (16)
	struct FName FSM; // 0x20 (8)
	struct FName ASM; // 0x28 (8)
	char EveryFrame : 0; // 0x30 (1)
};

// ScriptStruct UFSM.SM_BlendStateMachines
struct FSM_BlendStateMachines : FAnimNode_Base {
	struct Unknown BasePose; // 0x10 (16)
	struct Unknown BlendPose; // 0x20 (16)
};

// ScriptStruct UFSM.MachinePayloadData
struct FMachinePayloadData {
	struct TArray<Unknown> Actions; // 0x0 (16)
};

// ScriptStruct UFSM.SM_Link
struct FSM_Link {
	struct FName NextState; // 0x0 (8)
	struct FName Function; // 0x8 (8)
};

// ScriptStruct UFSM.SM_State
struct FSM_State {
	struct FName Name; // 0x0 (8)
	struct Unknown Owner; // 0x8 (8)
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

