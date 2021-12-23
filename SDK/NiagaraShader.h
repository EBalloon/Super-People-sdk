// Enum NiagaraShader.FNiagaraCompileEventSeverity
enum class FNiagaraCompileEventSeverity : uint8 {
	FNiagaraCompileEventSeverity = 0
	FNiagaraCompileEventSeverity = 1
	FNiagaraCompileEventSeverity = 2
	FNiagaraCompileEventSeverity = 3
};

// ScriptStruct NiagaraShader.NiagaraDataInterfaceGPUParamInfo
struct FNiagaraDataInterfaceGPUParamInfo {
	struct FString DataInterfaceHLSLSymbol; // 0x0 (16)
	struct FString DIClassName; // 0x10 (16)
	struct TArray<Unknown> GeneratedFunctions; // 0x20 (16)
};

// ScriptStruct NiagaraShader.NiagaraCompileEvent
struct FNiagaraCompileEvent {
	enum class Unknow Severity; // 0x0 (1)
	struct FString Message; // 0x8 (16)
	struct Unknown NodeGuid; // 0x18 (16)
	struct Unknown PinGuid; // 0x28 (16)
	struct TArray<Unknown> StackGuids; // 0x38 (16)
};

