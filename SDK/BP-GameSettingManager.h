// BlueprintGeneratedClass BP-GameSettingManager.BP-GameSettingManager_C
class UBP-GameSettingManager_C : public UBravoHotelGameSettingManager {

public:

	struct Unknown UberGraphFrame; // 0x38 (8)
	struct Unknown Game Settings Wrapper; // 0x40 (8)

	void Get Settings Instance(struct Unknown& SettingsWrapper); // Function BP-GameSettingManager.BP-GameSettingManager_C.Get Settings Instance(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void Run Console Command(struct FString Console Command, char& -); // Function BP-GameSettingManager.BP-GameSettingManager_C.Run Console Command(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void Update Audio Channel(char Audio Channel, float Volume, char& -); // Function BP-GameSettingManager.BP-GameSettingManager_C.Update Audio Channel(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void ReceiveInit(); // Function BP-GameSettingManager.BP-GameSettingManager_C.ReceiveInit(Event|Public|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void ExecuteUbergraph_BP-GameSettingManager(int32_t EntryPoint); // Function BP-GameSettingManager.BP-GameSettingManager_C.ExecuteUbergraph_BP-GameSettingManager(Final|UbergraphFunction) // <Game_BE.exe+0x2B80160>
};

// Function BP-GameSettingManager.BP-GameSettingManager_C.Get Settings Instance
inline void UBP-GameSettingManager_C::Get Settings Instance(struct Unknown& SettingsWrapper) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-GameSettingManager.BP-GameSettingManager_C.Get Settings Instance");

	struct Get Settings Instance_Params {
		struct Unknown& SettingsWrapper;
	}; Get Settings Instance_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	SettingsWrapper = Params.SettingsWrapper;

}

// Function BP-GameSettingManager.BP-GameSettingManager_C.Run Console Command
inline void UBP-GameSettingManager_C::Run Console Command(struct FString Console Command, char& -) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-GameSettingManager.BP-GameSettingManager_C.Run Console Command");

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

// Function BP-GameSettingManager.BP-GameSettingManager_C.Update Audio Channel
inline void UBP-GameSettingManager_C::Update Audio Channel(char Audio Channel, float Volume, char& -) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-GameSettingManager.BP-GameSettingManager_C.Update Audio Channel");

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

// Function BP-GameSettingManager.BP-GameSettingManager_C.ReceiveInit
inline void UBP-GameSettingManager_C::ReceiveInit() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-GameSettingManager.BP-GameSettingManager_C.ReceiveInit");

	struct ReceiveInit_Params {
		
	}; ReceiveInit_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-GameSettingManager.BP-GameSettingManager_C.ExecuteUbergraph_BP-GameSettingManager
inline void UBP-GameSettingManager_C::ExecuteUbergraph_BP-GameSettingManager(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-GameSettingManager.BP-GameSettingManager_C.ExecuteUbergraph_BP-GameSettingManager");

	struct ExecuteUbergraph_BP-GameSettingManager_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_BP-GameSettingManager_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

