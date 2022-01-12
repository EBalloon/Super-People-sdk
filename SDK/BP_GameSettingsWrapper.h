// BlueprintGeneratedClass BP_GameSettingsWrapper.BP_GameSettingsWrapper_C
class UBP_GameSettingsWrapper_C : public Object {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x28 (8)
	struct UBP_GameSettings_C Game Settings; // 0x30 (8)

	void ExecuteUbergraph_BP_GameSettingsWrapper(int32_t EntryPoint); // Function BP_GameSettingsWrapper.BP_GameSettingsWrapper_C.ExecuteUbergraph_BP_GameSettingsWrapper(Final|UbergraphFunction) // <Game_BE.exe+0x2B80160>
};

// Function BP_GameSettingsWrapper.BP_GameSettingsWrapper_C.ExecuteUbergraph_BP_GameSettingsWrapper
inline void UBP_GameSettingsWrapper_C::ExecuteUbergraph_BP_GameSettingsWrapper(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettingsWrapper.BP_GameSettingsWrapper_C.ExecuteUbergraph_BP_GameSettingsWrapper");

	struct ExecuteUbergraph_BP_GameSettingsWrapper_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_BP_GameSettingsWrapper_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

