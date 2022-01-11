// BlueprintGeneratedClass BP-BHGameInstanceWithSettings.BP-BHGameInstanceWithSettings_C
class UBP-BHGameInstanceWithSettings_C : public UBravoHotelGameInstance {

public:

	struct Unknown UberGraphFrame; // 0x550 (8)
	struct Unknown Game Settings Wrapper; // 0x558 (8)
	struct Unknown LastPCPosition; // 0x560 (12)

	void Update Audio Channel(char Audio Channel, float Volume, char& -); // Function BP-BHGameInstanceWithSettings.BP-BHGameInstanceWithSettings_C.Update Audio Channel(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void Run Console Command(struct FString Console Command, char& -); // Function BP-BHGameInstanceWithSettings.BP-BHGameInstanceWithSettings_C.Run Console Command(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void Get Settings Instance(struct Unknown& SettingsWrapper); // Function BP-BHGameInstanceWithSettings.BP-BHGameInstanceWithSettings_C.Get Settings Instance(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void StartRecordingReplay(); // Function BP-BHGameInstanceWithSettings.BP-BHGameInstanceWithSettings_C.StartRecordingReplay(Net|NetClient|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void StopRecordingReplay(); // Function BP-BHGameInstanceWithSettings.BP-BHGameInstanceWithSettings_C.StopRecordingReplay(Net|NetClient|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void ReceiveInit(); // Function BP-BHGameInstanceWithSettings.BP-BHGameInstanceWithSettings_C.ReceiveInit(Event|Public|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void ExecuteUbergraph_BP-BHGameInstanceWithSettings(int32_t EntryPoint); // Function BP-BHGameInstanceWithSettings.BP-BHGameInstanceWithSettings_C.ExecuteUbergraph_BP-BHGameInstanceWithSettings(Final|UbergraphFunction) // <Game_BE.exe+0x2B80160>
};

// Function BP-BHGameInstanceWithSettings.BP-BHGameInstanceWithSettings_C.Update Audio Channel
inline void UBP-BHGameInstanceWithSettings_C::Update Audio Channel(char Audio Channel, float Volume, char& -) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-BHGameInstanceWithSettings.BP-BHGameInstanceWithSettings_C.Update Audio Channel");

	struct Update Audio Channel_Params {
		char Audio Channel;
		float Volume;
		char& -;
	}; Update Audio Channel_Params Params;

	Params.Audio Channel = Audio Channel;
	Params.Volume = Volume;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	- = Params.-;

}

// Function BP-BHGameInstanceWithSettings.BP-BHGameInstanceWithSettings_C.Run Console Command
inline void UBP-BHGameInstanceWithSettings_C::Run Console Command(struct FString Console Command, char& -) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-BHGameInstanceWithSettings.BP-BHGameInstanceWithSettings_C.Run Console Command");

	struct Run Console Command_Params {
		struct FString Console Command;
		char& -;
	}; Run Console Command_Params Params;

	Params.Console Command = Console Command;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	- = Params.-;

}

// Function BP-BHGameInstanceWithSettings.BP-BHGameInstanceWithSettings_C.Get Settings Instance
inline void UBP-BHGameInstanceWithSettings_C::Get Settings Instance(struct Unknown& SettingsWrapper) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-BHGameInstanceWithSettings.BP-BHGameInstanceWithSettings_C.Get Settings Instance");

	struct Get Settings Instance_Params {
		struct Unknown& SettingsWrapper;
	}; Get Settings Instance_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	SettingsWrapper = Params.SettingsWrapper;

}

// Function BP-BHGameInstanceWithSettings.BP-BHGameInstanceWithSettings_C.StartRecordingReplay
inline void UBP-BHGameInstanceWithSettings_C::StartRecordingReplay() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-BHGameInstanceWithSettings.BP-BHGameInstanceWithSettings_C.StartRecordingReplay");

	struct StartRecordingReplay_Params {
		
	}; StartRecordingReplay_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-BHGameInstanceWithSettings.BP-BHGameInstanceWithSettings_C.StopRecordingReplay
inline void UBP-BHGameInstanceWithSettings_C::StopRecordingReplay() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-BHGameInstanceWithSettings.BP-BHGameInstanceWithSettings_C.StopRecordingReplay");

	struct StopRecordingReplay_Params {
		
	}; StopRecordingReplay_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-BHGameInstanceWithSettings.BP-BHGameInstanceWithSettings_C.ReceiveInit
inline void UBP-BHGameInstanceWithSettings_C::ReceiveInit() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-BHGameInstanceWithSettings.BP-BHGameInstanceWithSettings_C.ReceiveInit");

	struct ReceiveInit_Params {
		
	}; ReceiveInit_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-BHGameInstanceWithSettings.BP-BHGameInstanceWithSettings_C.ExecuteUbergraph_BP-BHGameInstanceWithSettings
inline void UBP-BHGameInstanceWithSettings_C::ExecuteUbergraph_BP-BHGameInstanceWithSettings(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-BHGameInstanceWithSettings.BP-BHGameInstanceWithSettings_C.ExecuteUbergraph_BP-BHGameInstanceWithSettings");

	struct ExecuteUbergraph_BP-BHGameInstanceWithSettings_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_BP-BHGameInstanceWithSettings_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

