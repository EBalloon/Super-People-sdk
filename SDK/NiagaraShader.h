// Enum NiagaraShader.FNiagaraCompileEventSeverity
enum class FNiagaraCompileEventSeverity : uint8_t {
	Log = 0,
	Warning = 1,
	Error = 2,
	FNiagaraCompileEventSeverity_MAX = 3,
};

// ScriptStruct NiagaraShader.NiagaraDataInterfaceGPUParamInfo
struct FNiagaraDataInterfaceGPUParamInfo {
	struct FString DataInterfaceHLSLSymbol; // 0x0 (16)
	struct FString DIClassName; // 0x10 (16)
	struct TArray<struct FNiagaraDataInterfaceGeneratedFunction> GeneratedFunctions; // 0x20 (16)
};

// ScriptStruct NiagaraShader.NiagaraCompileEvent
struct FNiagaraCompileEvent {
	enum class FNiagaraCompileEventSeverity Severity; // 0x0 (1)
	struct FString Message; // 0x8 (16)
	struct FGuid NodeGuid; // 0x18 (16)
	struct FGuid PinGuid; // 0x28 (16)
	struct TArray<struct FGuid> StackGuids; // 0x38 (16)
};

