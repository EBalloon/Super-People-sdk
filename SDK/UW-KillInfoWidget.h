// WidgetBlueprintGeneratedClass UW-KillInfoWidget.UW-KillInfoWidget_C
class UUW-KillInfoWidget_C : public UBravoHotelKillInfoWidget {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2C0 (8)
	struct UVerticalBox KillMessageList; // 0x2C8 (8)
	struct UUW-KillMessageListWidget_C UW-KillMessageListWidget; // 0x2D0 (8)
	struct UUW-KillMessageListWidget_C UW-KillMessageListWidget_2; // 0x2D8 (8)
	struct UUW-KillMessageListWidget_C UW-KillMessageListWidget_3; // 0x2E0 (8)
	struct UUW-KillMessageListWidget_C UW-KillMessageListWidget_4; // 0x2E8 (8)
	struct UUW-KillMessageListWidget_C UW-KillMessageListWidget_5; // 0x2F0 (8)
	struct UUW-KillMessageListWidget_C UW-KillMessageListWidget_6; // 0x2F8 (8)
	struct UUW-KillMessageListWidget_C UW-KillMessageListWidget_7; // 0x300 (8)
	struct UUW-KillMessageListWidget_C UW-KillMessageListWidget_8; // 0x308 (8)
	struct UUW-KillMessageListWidget_C UW-KillMessageListWidget_9; // 0x310 (8)
	struct UUW-KillMessageListWidget_C UW-KillMessageListWidget_10; // 0x318 (8)
	struct TArray<struct UWidget> TmpInfoList; // 0x320 (16)

	void AddKillMessage(struct FKillBroadcastUIInfo& BroadCastInfo); // Function UW-KillInfoWidget.UW-KillInfoWidget_C.AddKillMessage(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void ExecuteUbergraph_UW-KillInfoWidget(int32_t EntryPoint); // Function UW-KillInfoWidget.UW-KillInfoWidget_C.ExecuteUbergraph_UW-KillInfoWidget(Final|UbergraphFunction|HasDefaults) // <Game_BE.exe+0x2B80160>
};

// Function UW-KillInfoWidget.UW-KillInfoWidget_C.AddKillMessage
inline void UUW-KillInfoWidget_C::AddKillMessage(struct FKillBroadcastUIInfo& BroadCastInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-KillInfoWidget.UW-KillInfoWidget_C.AddKillMessage");

	struct AddKillMessage_Params {
		struct FKillBroadcastUIInfo& BroadCastInfo;
	}; AddKillMessage_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	BroadCastInfo = Params.BroadCastInfo;

}

// Function UW-KillInfoWidget.UW-KillInfoWidget_C.ExecuteUbergraph_UW-KillInfoWidget
inline void UUW-KillInfoWidget_C::ExecuteUbergraph_UW-KillInfoWidget(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-KillInfoWidget.UW-KillInfoWidget_C.ExecuteUbergraph_UW-KillInfoWidget");

	struct ExecuteUbergraph_UW-KillInfoWidget_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_UW-KillInfoWidget_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

