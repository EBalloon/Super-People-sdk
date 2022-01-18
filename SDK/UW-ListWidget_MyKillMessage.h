// WidgetBlueprintGeneratedClass UW-ListWidget_MyKillMessage.UW-ListWidget_MyKillMessage_C
class UUW-ListWidget_MyKillMessage_C : public UUW-ListWidget_ItemBase_C {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260 (8)
	struct UWidgetAnimation Anim_KillMessage; // 0x268 (8)
	struct UTextBlock T_Message; // 0x270 (8)

	void SetMyKillMessage(struct FText Message); // Function UW-ListWidget_MyKillMessage.UW-ListWidget_MyKillMessage_C.SetMyKillMessage(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void PlayKillMessageAnim(); // Function UW-ListWidget_MyKillMessage.UW-ListWidget_MyKillMessage_C.PlayKillMessageAnim(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void ExecuteUbergraph_UW-ListWidget_MyKillMessage(int32_t EntryPoint); // Function UW-ListWidget_MyKillMessage.UW-ListWidget_MyKillMessage_C.ExecuteUbergraph_UW-ListWidget_MyKillMessage(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
};

// Function UW-ListWidget_MyKillMessage.UW-ListWidget_MyKillMessage_C.SetMyKillMessage
inline void UUW-ListWidget_MyKillMessage_C::SetMyKillMessage(struct FText Message) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ListWidget_MyKillMessage.UW-ListWidget_MyKillMessage_C.SetMyKillMessage");

	struct SetMyKillMessage_Params {
		struct FText Message;
	}; SetMyKillMessage_Params Params;

	Params.Message = Message;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ListWidget_MyKillMessage.UW-ListWidget_MyKillMessage_C.PlayKillMessageAnim
inline void UUW-ListWidget_MyKillMessage_C::PlayKillMessageAnim() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ListWidget_MyKillMessage.UW-ListWidget_MyKillMessage_C.PlayKillMessageAnim");

	struct PlayKillMessageAnim_Params {
		
	}; PlayKillMessageAnim_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ListWidget_MyKillMessage.UW-ListWidget_MyKillMessage_C.ExecuteUbergraph_UW-ListWidget_MyKillMessage
inline void UUW-ListWidget_MyKillMessage_C::ExecuteUbergraph_UW-ListWidget_MyKillMessage(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ListWidget_MyKillMessage.UW-ListWidget_MyKillMessage_C.ExecuteUbergraph_UW-ListWidget_MyKillMessage");

	struct ExecuteUbergraph_UW-ListWidget_MyKillMessage_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_UW-ListWidget_MyKillMessage_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

