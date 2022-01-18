// WidgetBlueprintGeneratedClass UW-ListWidget_CoreInfo.UW-ListWidget_CoreInfo_C
class UUW-ListWidget_CoreInfo_C : public UUW-ListWidget_ItemBase_C {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260 (8)
	struct UWidgetAnimation Anim_AddCoreInfo; // 0x268 (8)
	struct UHorizontalBox HB_Smartping; // 0x270 (8)
	struct UImage Img_Back; // 0x278 (8)
	struct UImage Img_MarkerIcon; // 0x280 (8)
	struct UImage Img_PerkDeckIcon; // 0x288 (8)
	struct UTextBlock T_Message; // 0x290 (8)
	struct UTextBlock T_PingType; // 0x298 (8)
	struct UTextBlock T_PlayerName; // 0x2A0 (8)
	struct UWidgetSwitcher WidgetSwitcher_MessageType; // 0x2A8 (8)

	void SetCoreInfoMessageType(struct FString Type); // Function UW-ListWidget_CoreInfo.UW-ListWidget_CoreInfo_C.SetCoreInfoMessageType(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void SetResuscitationPingInfo(); // Function UW-ListWidget_CoreInfo.UW-ListWidget_CoreInfo_C.SetResuscitationPingInfo(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void SetCoreInfoResuscitation(struct ABravoHotelPlayerState PlayerState); // Function UW-ListWidget_CoreInfo.UW-ListWidget_CoreInfo_C.SetCoreInfoResuscitation(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void SetRequestMessageInfo(struct ABravoHotelPlayerState PlayerState, struct FText Message); // Function UW-ListWidget_CoreInfo.UW-ListWidget_CoreInfo_C.SetRequestMessageInfo(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void SetRequestMessage(struct ABravoHotelPlayerState Player State, struct FText Message); // Function UW-ListWidget_CoreInfo.UW-ListWidget_CoreInfo_C.SetRequestMessage(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void SetRoutePingInfo(); // Function UW-ListWidget_CoreInfo.UW-ListWidget_CoreInfo_C.SetRoutePingInfo(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void SetCoreInfoRoutePing(struct ABravoHotelPlayerState PlayerState); // Function UW-ListWidget_CoreInfo.UW-ListWidget_CoreInfo_C.SetCoreInfoRoutePing(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void SetCoreInfoMessage(struct FText Message, struct FString Type); // Function UW-ListWidget_CoreInfo.UW-ListWidget_CoreInfo_C.SetCoreInfoMessage(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void SetPlayerInfo(struct ABravoHotelPlayerState PlayerState); // Function UW-ListWidget_CoreInfo.UW-ListWidget_CoreInfo_C.SetPlayerInfo(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void SetPingType(struct FBravoHotelPingInfo PingInfo); // Function UW-ListWidget_CoreInfo.UW-ListWidget_CoreInfo_C.SetPingType(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void SetCoreInfoSmartping(struct ABravoHotelPlayerState PlayerState); // Function UW-ListWidget_CoreInfo.UW-ListWidget_CoreInfo_C.SetCoreInfoSmartping(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void PlayAddCoreInfoAnim(); // Function UW-ListWidget_CoreInfo.UW-ListWidget_CoreInfo_C.PlayAddCoreInfoAnim(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void ExecuteUbergraph_UW-ListWidget_CoreInfo(int32_t EntryPoint); // Function UW-ListWidget_CoreInfo.UW-ListWidget_CoreInfo_C.ExecuteUbergraph_UW-ListWidget_CoreInfo(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
};

// Function UW-ListWidget_CoreInfo.UW-ListWidget_CoreInfo_C.SetCoreInfoMessageType
inline void UUW-ListWidget_CoreInfo_C::SetCoreInfoMessageType(struct FString Type) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ListWidget_CoreInfo.UW-ListWidget_CoreInfo_C.SetCoreInfoMessageType");

	struct SetCoreInfoMessageType_Params {
		struct FString Type;
	}; SetCoreInfoMessageType_Params Params;

	Params.Type = Type;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ListWidget_CoreInfo.UW-ListWidget_CoreInfo_C.SetResuscitationPingInfo
inline void UUW-ListWidget_CoreInfo_C::SetResuscitationPingInfo() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ListWidget_CoreInfo.UW-ListWidget_CoreInfo_C.SetResuscitationPingInfo");

	struct SetResuscitationPingInfo_Params {
		
	}; SetResuscitationPingInfo_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ListWidget_CoreInfo.UW-ListWidget_CoreInfo_C.SetCoreInfoResuscitation
inline void UUW-ListWidget_CoreInfo_C::SetCoreInfoResuscitation(struct ABravoHotelPlayerState PlayerState) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ListWidget_CoreInfo.UW-ListWidget_CoreInfo_C.SetCoreInfoResuscitation");

	struct SetCoreInfoResuscitation_Params {
		struct ABravoHotelPlayerState PlayerState;
	}; SetCoreInfoResuscitation_Params Params;

	Params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ListWidget_CoreInfo.UW-ListWidget_CoreInfo_C.SetRequestMessageInfo
inline void UUW-ListWidget_CoreInfo_C::SetRequestMessageInfo(struct ABravoHotelPlayerState PlayerState, struct FText Message) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ListWidget_CoreInfo.UW-ListWidget_CoreInfo_C.SetRequestMessageInfo");

	struct SetRequestMessageInfo_Params {
		struct ABravoHotelPlayerState PlayerState;
		struct FText Message;
	}; SetRequestMessageInfo_Params Params;

	Params.PlayerState = PlayerState;
	Params.Message = Message;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ListWidget_CoreInfo.UW-ListWidget_CoreInfo_C.SetRequestMessage
inline void UUW-ListWidget_CoreInfo_C::SetRequestMessage(struct ABravoHotelPlayerState Player State, struct FText Message) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ListWidget_CoreInfo.UW-ListWidget_CoreInfo_C.SetRequestMessage");

	struct SetRequestMessage_Params {
		struct ABravoHotelPlayerState Player State;
		struct FText Message;
	}; SetRequestMessage_Params Params;

	Params.Player State = Player State;
	Params.Message = Message;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ListWidget_CoreInfo.UW-ListWidget_CoreInfo_C.SetRoutePingInfo
inline void UUW-ListWidget_CoreInfo_C::SetRoutePingInfo() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ListWidget_CoreInfo.UW-ListWidget_CoreInfo_C.SetRoutePingInfo");

	struct SetRoutePingInfo_Params {
		
	}; SetRoutePingInfo_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ListWidget_CoreInfo.UW-ListWidget_CoreInfo_C.SetCoreInfoRoutePing
inline void UUW-ListWidget_CoreInfo_C::SetCoreInfoRoutePing(struct ABravoHotelPlayerState PlayerState) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ListWidget_CoreInfo.UW-ListWidget_CoreInfo_C.SetCoreInfoRoutePing");

	struct SetCoreInfoRoutePing_Params {
		struct ABravoHotelPlayerState PlayerState;
	}; SetCoreInfoRoutePing_Params Params;

	Params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ListWidget_CoreInfo.UW-ListWidget_CoreInfo_C.SetCoreInfoMessage
inline void UUW-ListWidget_CoreInfo_C::SetCoreInfoMessage(struct FText Message, struct FString Type) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ListWidget_CoreInfo.UW-ListWidget_CoreInfo_C.SetCoreInfoMessage");

	struct SetCoreInfoMessage_Params {
		struct FText Message;
		struct FString Type;
	}; SetCoreInfoMessage_Params Params;

	Params.Message = Message;
	Params.Type = Type;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ListWidget_CoreInfo.UW-ListWidget_CoreInfo_C.SetPlayerInfo
inline void UUW-ListWidget_CoreInfo_C::SetPlayerInfo(struct ABravoHotelPlayerState PlayerState) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ListWidget_CoreInfo.UW-ListWidget_CoreInfo_C.SetPlayerInfo");

	struct SetPlayerInfo_Params {
		struct ABravoHotelPlayerState PlayerState;
	}; SetPlayerInfo_Params Params;

	Params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ListWidget_CoreInfo.UW-ListWidget_CoreInfo_C.SetPingType
inline void UUW-ListWidget_CoreInfo_C::SetPingType(struct FBravoHotelPingInfo PingInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ListWidget_CoreInfo.UW-ListWidget_CoreInfo_C.SetPingType");

	struct SetPingType_Params {
		struct FBravoHotelPingInfo PingInfo;
	}; SetPingType_Params Params;

	Params.PingInfo = PingInfo;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ListWidget_CoreInfo.UW-ListWidget_CoreInfo_C.SetCoreInfoSmartping
inline void UUW-ListWidget_CoreInfo_C::SetCoreInfoSmartping(struct ABravoHotelPlayerState PlayerState) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ListWidget_CoreInfo.UW-ListWidget_CoreInfo_C.SetCoreInfoSmartping");

	struct SetCoreInfoSmartping_Params {
		struct ABravoHotelPlayerState PlayerState;
	}; SetCoreInfoSmartping_Params Params;

	Params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ListWidget_CoreInfo.UW-ListWidget_CoreInfo_C.PlayAddCoreInfoAnim
inline void UUW-ListWidget_CoreInfo_C::PlayAddCoreInfoAnim() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ListWidget_CoreInfo.UW-ListWidget_CoreInfo_C.PlayAddCoreInfoAnim");

	struct PlayAddCoreInfoAnim_Params {
		
	}; PlayAddCoreInfoAnim_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ListWidget_CoreInfo.UW-ListWidget_CoreInfo_C.ExecuteUbergraph_UW-ListWidget_CoreInfo
inline void UUW-ListWidget_CoreInfo_C::ExecuteUbergraph_UW-ListWidget_CoreInfo(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ListWidget_CoreInfo.UW-ListWidget_CoreInfo_C.ExecuteUbergraph_UW-ListWidget_CoreInfo");

	struct ExecuteUbergraph_UW-ListWidget_CoreInfo_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_UW-ListWidget_CoreInfo_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

