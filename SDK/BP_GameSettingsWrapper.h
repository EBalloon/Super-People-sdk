// BlueprintGeneratedClass BP_GameSettingsWrapper.BP_GameSettingsWrapper_C
class UBP_GameSettingsWrapper_C : public Object {

public:

	struct Unknown UberGraphFrame; // 0x28 (8)
	struct Unknown Game Settings; // 0x30 (8)

	void ExecuteUbergraph_BP_GameSettingsWrapper(int32_t EntryPoint); // Function BP_GameSettingsWrapper.BP_GameSettingsWrapper_C.ExecuteUbergraph_BP_GameSettingsWrapper(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
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

