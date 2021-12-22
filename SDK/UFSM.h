// Enum UFSM.FSM_Transition
enum class FSM_Transition : uint8 {
	FSM_Transition = 0,
	FSM_Transition = 1,
	FSM_Transition = 2
};

// Enum UFSM.ESeverity
enum class ESeverity : uint8 {
	ESeverity = 0,
	ESeverity = 1,
	ESeverity = 2,
	ESeverity = 3,
	ESeverity = 4
};

// Class UFSM.FSM_SetState_Async
struct UFSM_SetState_Async : UBlueprintAsyncActionBase {
	struct Unknown Target; //  0x30 Size(8)
	struct FName StateName; //  0x38 Size(8)
	float Timer; //  0x40 Size(4)
	char Repeat; //  0x44 Size(1)
	struct Unknown TimerHandle; //  0x48 Size(8)
	struct FMulticastInlineDelegate OnSuccess; //  0x50 Size(10)
	struct FMulticastInlineDelegate OnAborted; //  0x60 Size(10)

	struct Unknown FSM_SetState_Async(struct Unknown FSM, float WaitForSeconds, struct FName Name, char Loop); // Function UFSM.FSM_SetState_Async.FSM_SetState_Async(Final|Native|Static|Public|BlueprintCallable) // <Game+0x11ee500>
};

// Class UFSM.FSM_SetStateID_Async
struct UFSM_SetStateID_Async : UBlueprintAsyncActionBase {
	struct Unknown Target; //  0x30 Size(8)
	char StateID; //  0x38 Size(1)
	float Timer; //  0x3c Size(4)
	char Repeat; //  0x40 Size(1)
	struct Unknown TimerHandle; //  0x48 Size(8)
	struct FMulticastInlineDelegate OnSuccess; //  0x50 Size(10)
	struct FMulticastInlineDelegate OnAborted; //  0x60 Size(10)

	struct Unknown FSM_SetStateID_Async(struct Unknown FSM, float WaitForSeconds, char ID, char Loop); // Function UFSM.FSM_SetStateID_Async.FSM_SetStateID_Async(Final|Native|Static|Public|BlueprintCallable) // <Game+0x11eddd0>
};

// Class UFSM.FSM_SetState_ConditionalAsync
struct UFSM_SetState_ConditionalAsync : UBlueprintAsyncActionBase {
	struct Unknown Target; //  0x30 Size(8)
	enum class Unknow Conditional; //  0x38 Size(1)
	struct FName StateName; //  0x3c Size(8)
	float Timer; //  0x44 Size(4)
	char Repeat; //  0x48 Size(1)
	struct Unknown TimerHandle; //  0x50 Size(8)
	struct FMulticastInlineDelegate OnSuccess; //  0x58 Size(10)
	struct FMulticastInlineDelegate OnAborted; //  0x68 Size(10)

	struct Unknown FSM_SetState_ConditionalAsync(struct Unknown FSM, float WaitForSeconds, struct FName Name, enum class Unknow Condition, char Loop); // Function UFSM.FSM_SetState_ConditionalAsync.FSM_SetState_ConditionalAsync(Final|Native|Static|Public|BlueprintCallable) // <Game+0x11ee850>
};

// Class UFSM.FSM_SetStateID_ConditionalAsync
struct UFSM_SetStateID_ConditionalAsync : UBlueprintAsyncActionBase {
	struct Unknown Target; //  0x30 Size(8)
	enum class Unknow Conditional; //  0x38 Size(1)
	char StateID; //  0x39 Size(1)
	float Timer; //  0x3c Size(4)
	char Repeat; //  0x40 Size(1)
	struct Unknown TimerHandle; //  0x48 Size(8)
	struct FMulticastInlineDelegate OnSuccess; //  0x50 Size(10)
	struct FMulticastInlineDelegate OnAborted; //  0x60 Size(10)

	struct Unknown FSM_SetStateID_ConditionalAsync(struct Unknown FSM, float WaitForSeconds, char ID, enum class Unknow Condition, char Loop); // Function UFSM.FSM_SetStateID_ConditionalAsync.FSM_SetStateID_ConditionalAsync(Final|Native|Static|Public|BlueprintCallable) // <Game+0x11ee130>
};

// Class UFSM.FSM_SetState_AsyncWithCallbacks
struct UFSM_SetState_AsyncWithCallbacks : UBlueprintAsyncActionBase {
	struct Unknown Target; //  0x30 Size(8)
	struct FDelegate InBegin; //  0x38 Size(10)
	struct FDelegate InExit; //  0x48 Size(10)
	struct FName StateName; //  0x58 Size(8)
	float Timer; //  0x60 Size(4)
	char Repeat; //  0x64 Size(1)
	struct Unknown TimerHandle; //  0x68 Size(8)
	struct FMulticastInlineDelegate OnSuccess; //  0x70 Size(10)
	struct FMulticastInlineDelegate OnAborted; //  0x80 Size(10)

	struct Unknown FSM_SetState_AsyncWithCallbacks(struct Unknown FSM, float WaitForSeconds, struct FName Name, char Loop, struct FDelegate& ExitPreviousStateCallback, struct FDelegate& BeginNextStateCallback); // Function UFSM.FSM_SetState_AsyncWithCallbacks.FSM_SetState_AsyncWithCallbacks(Final|Native|Static|Public|HasOutParms|BlueprintCallable) // <Game+0x11ee640>
};

// Class UFSM.FSM_SetStateID_AsyncWithCallbacks
struct UFSM_SetStateID_AsyncWithCallbacks : UBlueprintAsyncActionBase {
	struct Unknown Target; //  0x30 Size(8)
	struct FDelegate InBegin; //  0x38 Size(10)
	struct FDelegate InExit; //  0x48 Size(10)
	char StateID; //  0x58 Size(1)
	float Timer; //  0x5c Size(4)
	char Repeat; //  0x60 Size(1)
	struct Unknown TimerHandle; //  0x68 Size(8)
	struct FMulticastInlineDelegate OnSuccess; //  0x70 Size(10)
	struct FMulticastInlineDelegate OnAborted; //  0x80 Size(10)

	struct Unknown FSM_SetStateID_AsyncWithCallbacks(struct Unknown FSM, float WaitForSeconds, char ID, char Loop, struct FDelegate& ExitPreviousStateCallback, struct FDelegate& BeginNextStateCallback); // Function UFSM.FSM_SetStateID_AsyncWithCallbacks.FSM_SetStateID_AsyncWithCallbacks(Final|Native|Static|Public|HasOutParms|BlueprintCallable) // <Game+0x11edf10>
};

// Class UFSM.FSM_SetState_ConditionalAsyncWi
struct UFSM_SetState_ConditionalAsyncWi : UBlueprintAsyncActionBase {
	struct Unknown Target; //  0x30 Size(8)
	enum class Unknow Conditional; //  0x38 Size(1)
	struct FDelegate InBegin; //  0x3c Size(10)
	struct FDelegate InExit; //  0x4c Size(10)
	struct FName StateName; //  0x5c Size(8)
	float Timer; //  0x64 Size(4)
	char Repeat; //  0x68 Size(1)
	struct Unknown TimerHandle; //  0x70 Size(8)
	struct FMulticastInlineDelegate OnSuccess; //  0x78 Size(10)
	struct FMulticastInlineDelegate OnAborted; //  0x88 Size(10)

	struct Unknown FSM_SetState_ConditionalAsyncWi(struct Unknown FSM, float WaitForSeconds, struct FName Name, enum class Unknow Condition, char Loop, struct FDelegate& ExitPreviousStateCallback, struct FDelegate& BeginNextStateCallback); // Function UFSM.FSM_SetState_ConditionalAsyncWi.FSM_SetState_ConditionalAsyncWi(Final|Native|Static|Public|HasOutParms|BlueprintCallable) // <Game+0x11ee9d0>
};

// Class UFSM.FSM_SetStateID_ConditionalAsyncWithCallbacks
struct UFSM_SetStateID_ConditionalAsyncWithCallbacks : UBlueprintAsyncActionBase {
	struct Unknown Target; //  0x30 Size(8)
	enum class Unknow Conditional; //  0x38 Size(1)
	struct FDelegate InBegin; //  0x3c Size(10)
	struct FDelegate InExit; //  0x4c Size(10)
	char StateID; //  0x5c Size(1)
	float Timer; //  0x60 Size(4)
	char Repeat; //  0x64 Size(1)
	struct Unknown TimerHandle; //  0x68 Size(8)
	struct FMulticastInlineDelegate OnSuccess; //  0x70 Size(10)
	struct FMulticastInlineDelegate OnAborted; //  0x80 Size(10)

	struct Unknown FSM_SetStateID_ConditionalAsyncWithCallbacks(struct Unknown FSM, float WaitForSeconds, char ID, enum class Unknow Condition, char Loop, struct FDelegate& ExitPreviousStateCallback, struct FDelegate& BeginNextStateCallback); // Function UFSM.FSM_SetStateID_ConditionalAsyncWithCallbacks.FSM_SetStateID_ConditionalAsyncWithCallbacks(Final|Native|Static|Public|HasOutParms|BlueprintCallable) // <Game+0x11ee2b0>
};

// Class UFSM.FSM_FinishState_Async
struct UFSM_FinishState_Async : UBlueprintAsyncActionBase {
	struct Unknown Target; //  0x30 Size(8)
	float Timer; //  0x38 Size(4)
	struct Unknown TimerHandle; //  0x40 Size(8)
	struct FMulticastInlineDelegate OnSuccess; //  0x48 Size(10)
	struct FMulticastInlineDelegate OnAborted; //  0x58 Size(10)

	struct Unknown FSM_FinishState_Async(struct Unknown FSM, float WaitForSeconds); // Function UFSM.FSM_FinishState_Async.FSM_FinishState_Async(Final|Native|Static|Public|BlueprintCallable) // <Game+0x11ed7b0>
};

// Class UFSM.FSM_FinishState_ConditionalAsync
struct UFSM_FinishState_ConditionalAsync : UBlueprintAsyncActionBase {
	struct Unknown Target; //  0x30 Size(8)
	enum class Unknow Conditional; //  0x38 Size(1)
	struct FName FallbackState; //  0x3c Size(8)
	float Timer; //  0x44 Size(4)
	struct Unknown TimerHandle; //  0x48 Size(8)
	struct FMulticastInlineDelegate OnSuccess; //  0x50 Size(10)
	struct FMulticastInlineDelegate OnAborted; //  0x60 Size(10)

	struct Unknown FSM_FinishState_ConditionalAsync(struct Unknown FSM, enum class Unknow Condition, float WaitForSeconds, struct FName Fallback); // Function UFSM.FSM_FinishState_ConditionalAsync.FSM_FinishState_ConditionalAsync(Final|Native|Static|Public|BlueprintCallable) // <Game+0x11eda10>
};

// Class UFSM.FSM_FinishState_AsyncWithCallbacks
struct UFSM_FinishState_AsyncWithCallbacks : UBlueprintAsyncActionBase {
	struct Unknown Target; //  0x30 Size(8)
	struct FDelegate InBegin; //  0x38 Size(10)
	struct FDelegate InExit; //  0x48 Size(10)
	float Timer; //  0x58 Size(4)
	struct Unknown TimerHandle; //  0x60 Size(8)
	struct FMulticastInlineDelegate OnSuccess; //  0x68 Size(10)
	struct FMulticastInlineDelegate OnAborted; //  0x78 Size(10)

	struct Unknown FSM_FinishState_AsyncWithCallbacks(struct Unknown FSM, float WaitForSeconds, struct FDelegate& ExitPreviousStateCallback, struct FDelegate& BeginNextStateCallback); // Function UFSM.FSM_FinishState_AsyncWithCallbacks.FSM_FinishState_AsyncWithCallbacks(Final|Native|Static|Public|HasOutParms|BlueprintCallable) // <Game+0x11ed880>
};

// Class UFSM.FSM_FinishState_ConditionalAsyncWithCallbacks
struct UFSM_FinishState_ConditionalAsyncWithCallbacks : UBlueprintAsyncActionBase {
	struct Unknown Target; //  0x30 Size(8)
	enum class Unknow Conditional; //  0x38 Size(1)
	struct FDelegate InBegin; //  0x3c Size(10)
	struct FDelegate InExit; //  0x4c Size(10)
	struct FDelegate InFallback; //  0x5c Size(10)
	struct FName FallbackState; //  0x6c Size(8)
	float Timer; //  0x74 Size(4)
	struct Unknown TimerHandle; //  0x78 Size(8)
	struct FMulticastInlineDelegate OnSuccess; //  0x80 Size(10)
	struct FMulticastInlineDelegate OnAborted; //  0x90 Size(10)

	struct Unknown FSM_FinishState_ConditionalAsyncWithCallbacks(struct Unknown FSM, enum class Unknow Condition, float WaitForSeconds, struct FName Fallback, struct FDelegate& ExitPreviousStateCallback, struct FDelegate& BeginNextStateCallback, struct FDelegate& BeginFallbackStateCallback); // Function UFSM.FSM_FinishState_ConditionalAsyncWithCallbacks.FSM_FinishState_ConditionalAsyncWithCallbacks(Final|Native|Static|Public|HasOutParms|BlueprintCallable) // <Game+0x11edb50>
};

// Class UFSM.BTTask_FSM_AddState
struct UBTTask_FSM_AddState : UBTTask_BlackboardBase {
	struct Unknown FSM; //  0x98 Size(8)
	struct FName TargetFSM; //  0xa0 Size(8)
	struct FName NewStateName; //  0xa8 Size(8)
	char Debug; //  0xb0 Size(1)
	char ForceSuccess; //  0xb1 Size(1)
};

// Class UFSM.BTTask_FSM_SetState
struct UBTTask_FSM_SetState : UBTTask_BlackboardBase {
	struct Unknown FSM; //  0x98 Size(8)
	struct FName TargetFSM; //  0xa0 Size(8)
	struct FName StateName; //  0xa8 Size(8)
	char Debug; //  0xb0 Size(1)
	char ForceSuccess; //  0xb1 Size(1)
};

// Class UFSM.BTTask_FSM_RemoveState
struct UBTTask_FSM_RemoveState : UBTTask_BlackboardBase {
	struct Unknown FSM; //  0x98 Size(8)
	struct FName TargetFSM; //  0xa0 Size(8)
	struct FName StateName; //  0xa8 Size(8)
	char Debug; //  0xb0 Size(1)
	char ForceSuccess; //  0xb1 Size(1)
};

// Class UFSM.BTTask_FSM_CheckState
struct UBTTask_FSM_CheckState : UBTTask_BlackboardBase {
	struct Unknown FSM; //  0x98 Size(8)
	struct FName TargetFSM; //  0xa0 Size(8)
	struct FName StateName; //  0xa8 Size(8)
	char Debug; //  0xb0 Size(1)
	char ForceSuccess; //  0xb1 Size(1)
};

// Class UFSM.RSM
struct URSM : Object {
	struct Unknown SGUID; //  0x28 Size(10)
	int32_t PlayerId; //  0x38 Size(4)
	struct TWeakObjectPtr<struct Unknown> Owner; //  0x3c Size(8)
};

// Class UFSM.ReactiveStateMachine
struct UReactiveStateMachine : URSM {
	struct TArray<Unknown> StateGraph; //  0x58 Size(10)
	float MachineTime; //  0x68 Size(4)
	struct FMulticastInlineDelegate _OnEntry; //  0x70 Size(10)
	struct FMulticastInlineDelegate _OnExit; //  0x80 Size(10)
	struct TMap<{}, {}>Unknown MachineData; //  0x90 Size(50)

	void Update(float DeltaTime); // Function UFSM.ReactiveStateMachine.Update(Final|Native|Private) // <Game+0x11f32a0>
};

// Class UFSM.FSMSettings
struct UFSMSettings : Object {
	char EnableInterfaceStatePropagation; //  0x28 Size(1)
	char SuppressRPCWarnings; //  0x29 Size(1)
	float DefaultTickInterval; //  0x2c Size(4)
	struct TArray<Unknown> DefaultStates; //  0x30 Size(10)
};

// Class UFSM.RSMSubsystem
struct URSMSubsystem : ULocalPlayerSubsystem {
	struct TArray<Unknown> MachineStack; //  0x30 Size(10)
};

// Class UFSM.StateMachineABP
struct UStateMachineABP : UAnimInstance {
	struct Unknown FSM; //  0x268 Size(8)
	char OverrideFSM; //  0x270 Size(1)
	struct FName TargetFSM; //  0x274 Size(8)
	struct FName TargetASM; //  0x27c Size(8)

	struct Unknown GetFSMComponentByName(struct FName Name); // Function UFSM.StateMachineABP.GetFSMComponentByName(Final|Native|Public|BlueprintCallable|BlueprintPure) // <Game+0x11f7560>
};

// Class UFSM.StateMachineComponent
struct UStateMachineComponent : UActorComponent {
	struct Unknown FSM_ExitArguments; //  0xb8 Size(c)
	struct Unknown FSM_BeginArguments; //  0xc4 Size(c)
	struct Unknown FSM_UpdateArguments; //  0xd0 Size(8)
	char IsOverriden; //  0xe0 Size(1)
	char IsFullyInitialized; //  0xe1 Size(1)
	char StateID; //  0xe2 Size(1)
	char PreviousStateID; //  0xe3 Size(1)
	float StateTime; //  0xe4 Size(4)
	struct Unknown STATE_Null; //  0xe8 Size(40)
	struct TMap<{}, {}>Unknown State; //  0x128 Size(50)
	struct FDelegate InBegin; //  0x178 Size(10)
	struct FDelegate InUpdate; //  0x188 Size(10)
	struct FDelegate InExit; //  0x198 Size(10)
	struct FName StartupState; //  0x1a8 Size(8)
	struct TArray<Unknown> States; //  0x1b0 Size(10)
	struct TMap<{}, {}>Unknown LINKS; //  0x1c0 Size(50)
	char UseEnumFromCPP; //  0x210 Size(1)
	struct FString CPP_EnumName; //  0x218 Size(10)
	struct Unknown K2_Enumerator; //  0x228 Size(8)
	char ReplicationMode; //  0x230 Size(1)
	char BlueprintAutoFlowFSM; //  0x231 Size(1)
	char BlueprintAutoFlowTransitions; //  0x232 Size(1)
	char AlwaysTickFSM; //  0x233 Size(1)
	char ReplicateStateID; //  0x234 Size(1)
	char ReplicatePreviousStateID; //  0x235 Size(1)
	char ReplicateStateTime; //  0x236 Size(1)
	char Debug; //  0x237 Size(1)
	struct FMulticastInlineDelegate OnInitialized; //  0x238 Size(10)
	struct FMulticastInlineDelegate OnBegin; //  0x248 Size(10)
	struct FMulticastInlineDelegate OnUpdate; //  0x258 Size(10)
	struct FMulticastInlineDelegate OnExit; //  0x268 Size(10)

	void Update(char UpState, struct FDelegate& Callback); // Function UFSM.StateMachineComponent.Update(Native|Protected|HasOutParms) // <Game+0x11fa2d0>
};

