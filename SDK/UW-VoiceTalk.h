// WidgetBlueprintGeneratedClass UW-VoiceTalk.UW-VoiceTalk_C
class UUW-VoiceTalk_C : public UBravoHotelVoiceTalkWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown Image; // 0x250 (8)
	struct Unknown ScrollBox_99; // 0x258 (8)
	struct Unknown UW-VoiceTalkSlot; // 0x260 (8)
	struct Unknown UW-VoiceTalkSlot_135; // 0x268 (8)
	struct Unknown UW-VoiceTalkSlot_196; // 0x270 (8)
	struct TArray<Unknown> TempTeamPlayers; // 0x278 (16)

	void CheckCreateSlot(char& bRet); // Function UW-VoiceTalk.UW-VoiceTalk_C.CheckCreateSlot(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void Construct(); // Function UW-VoiceTalk.UW-VoiceTalk_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void ChangeVolumeState(struct Unknown VoiceTalkState); // Function UW-VoiceTalk.UW-VoiceTalk_C.ChangeVolumeState(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void ExecuteUbergraph_UW-VoiceTalk(int32_t EntryPoint); // Function UW-VoiceTalk.UW-VoiceTalk_C.ExecuteUbergraph_UW-VoiceTalk(Final|UbergraphFunction|HasDefaults) // <Game_BE.exe+0x2B812B0>
};

// Function UW-VoiceTalk.UW-VoiceTalk_C.CheckCreateSlot
inline void UUW-VoiceTalk_C::CheckCreateSlot(char& bRet) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-VoiceTalk.UW-VoiceTalk_C.CheckCreateSlot");

	struct CheckCreateSlot_Params {
		char& bRet;
	}; CheckCreateSlot_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	bRet = Params.bRet;

}

// Function UW-VoiceTalk.UW-VoiceTalk_C.Construct
inline void UUW-VoiceTalk_C::Construct() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-VoiceTalk.UW-VoiceTalk_C.Construct");

	struct Construct_Params {
		
	}; Construct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-VoiceTalk.UW-VoiceTalk_C.ChangeVolumeState
inline void UUW-VoiceTalk_C::ChangeVolumeState(struct Unknown VoiceTalkState) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-VoiceTalk.UW-VoiceTalk_C.ChangeVolumeState");

	struct ChangeVolumeState_Params {
		struct Unknown VoiceTalkState;
	}; ChangeVolumeState_Params Params;

	Params.VoiceTalkState = VoiceTalkState;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-VoiceTalk.UW-VoiceTalk_C.ExecuteUbergraph_UW-VoiceTalk
inline void UUW-VoiceTalk_C::ExecuteUbergraph_UW-VoiceTalk(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-VoiceTalk.UW-VoiceTalk_C.ExecuteUbergraph_UW-VoiceTalk");

	struct ExecuteUbergraph_UW-VoiceTalk_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_UW-VoiceTalk_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

