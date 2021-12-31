// WidgetBlueprintGeneratedClass Chat_Message.Chat_Message_C
class UChat_Message_C : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown Message TextBlock; // 0x250 (8)
	struct Unknown Username TextBlock; // 0x258 (8)
	struct FText UserName; // 0x260 (24)
	struct FText Text; // 0x278 (24)
	struct Unknown Username Color; // 0x290 (16)
	struct Unknown Message Color; // 0x2A0 (16)

	void Construct(); // Function Chat_Message.Chat_Message_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void ExecuteUbergraph_Chat_Message(int32_t EntryPoint); // Function Chat_Message.Chat_Message_C.ExecuteUbergraph_Chat_Message(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
};

// Function Chat_Message.Chat_Message_C.Construct
inline void UChat_Message_C::Construct() {
	static auto fn = UObject::FindObject<UFunction>("Function Chat_Message.Chat_Message_C.Construct");

	struct Construct_Params {
		
	}; Construct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Chat_Message.Chat_Message_C.ExecuteUbergraph_Chat_Message
inline void UChat_Message_C::ExecuteUbergraph_Chat_Message(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function Chat_Message.Chat_Message_C.ExecuteUbergraph_Chat_Message");

	struct ExecuteUbergraph_Chat_Message_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_Chat_Message_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

