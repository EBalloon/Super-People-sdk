// WidgetBlueprintGeneratedClass UW-ListWidget_KillMessage.UW-ListWidget_KillMessage_C
class UUW-ListWidget_KillMessage_C : public UUW-ListWidget_ItemBase_C {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260 (8)
	struct UWidgetAnimation Anim_Down; // 0x268 (8)
	struct UCanvasPanel CanvasPanel_Main; // 0x270 (8)
	struct UImage Img_Back; // 0x278 (8)
	struct UImage Img_BroadType; // 0x280 (8)
	struct UImage Img_DamegeType; // 0x288 (8)
	struct UImage Img_Weapon; // 0x290 (8)
	struct UScaleBox ScaleBox_Weapon; // 0x298 (8)
	struct USizeBox SizeBox_BroadType; // 0x2A0 (8)
	struct USizeBox SizeBox_DamageType; // 0x2A8 (8)
	struct USizeBox SizeBox_HeadShot; // 0x2B0 (8)
	struct UTextBlock T_Context; // 0x2B8 (8)
	struct UUW-ListWidget_KillMessage_Item_C UW-DiedInfoWidget; // 0x2C0 (8)
	struct UUW-ListWidget_KillMessage_Item_C UW-KillerInfoWidget; // 0x2C8 (8)
	struct TMap<enum class EBroadCastKillMessageType, struct UPaperSprite> BroadcastDamageType; // 0x2D0 (80)
	struct FSlateColor MyTeamColor; // 0x320 (40)
	struct FSlateColor MyTeamKnockOutColor; // 0x348 (40)
	struct FSlateColor EnermyTeamColor; // 0x370 (40)
	struct FSlateColor EnermyTeamKnockOutColor; // 0x398 (40)
	struct FSlateColor DefaultColor; // 0x3C0 (40)
	struct FSlateColor DefaultKnockColor; // 0x3E8 (40)
	struct FSlateColor ResuscatedColor; // 0x410 (40)
	struct FSlateColor CurrentInfoColor; // 0x438 (40)

	void PlayUpDownAnim(); // Function UW-ListWidget_KillMessage.UW-ListWidget_KillMessage_C.PlayUpDownAnim(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void ResetInfos(); // Function UW-ListWidget_KillMessage.UW-ListWidget_KillMessage_C.ResetInfos(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void SetBroadcastTypeIcon(enum class EBroadCastKillMessageType MessageType); // Function UW-ListWidget_KillMessage.UW-ListWidget_KillMessage_C.SetBroadcastTypeIcon(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void GetTeamType(struct ABravoHotelPlayerState PlayerState, enum class EBroadCastTeamType& TeamType); // Function UW-ListWidget_KillMessage.UW-ListWidget_KillMessage_C.GetTeamType(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void GetInfoColor(struct ABravoHotelPlayerState Killer, struct ABravoHotelPlayerState Died, enum class EBroadCastKillMessageType MessageType, struct FSlateColor& OutTeamColor); // Function UW-ListWidget_KillMessage.UW-ListWidget_KillMessage_C.GetInfoColor(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void SetBGColor(enum class EBroadCastKillMessageType MessageType); // Function UW-ListWidget_KillMessage.UW-ListWidget_KillMessage_C.SetBGColor(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void OnLoaded_E905D98740C8E2F4A90B4C89D663ACAA(struct Object Loaded); // Function UW-ListWidget_KillMessage.UW-ListWidget_KillMessage_C.OnLoaded_E905D98740C8E2F4A90B4C89D663ACAA(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void OnLoaded_342F68DF4CB26590AC0C9EA8C343CCF1(struct Object Loaded); // Function UW-ListWidget_KillMessage.UW-ListWidget_KillMessage_C.OnLoaded_342F68DF4CB26590AC0C9EA8C343CCF1(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void SetKillMessageInfo(struct FKillBroadcastUIInfo& Info); // Function UW-ListWidget_KillMessage.UW-ListWidget_KillMessage_C.SetKillMessageInfo(HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void ExecuteUbergraph_UW-ListWidget_KillMessage(int32_t EntryPoint); // Function UW-ListWidget_KillMessage.UW-ListWidget_KillMessage_C.ExecuteUbergraph_UW-ListWidget_KillMessage(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
};

// Function UW-ListWidget_KillMessage.UW-ListWidget_KillMessage_C.PlayUpDownAnim
inline void UUW-ListWidget_KillMessage_C::PlayUpDownAnim() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ListWidget_KillMessage.UW-ListWidget_KillMessage_C.PlayUpDownAnim");

	struct PlayUpDownAnim_Params {
		
	}; PlayUpDownAnim_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ListWidget_KillMessage.UW-ListWidget_KillMessage_C.ResetInfos
inline void UUW-ListWidget_KillMessage_C::ResetInfos() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ListWidget_KillMessage.UW-ListWidget_KillMessage_C.ResetInfos");

	struct ResetInfos_Params {
		
	}; ResetInfos_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ListWidget_KillMessage.UW-ListWidget_KillMessage_C.SetBroadcastTypeIcon
inline void UUW-ListWidget_KillMessage_C::SetBroadcastTypeIcon(enum class EBroadCastKillMessageType MessageType) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ListWidget_KillMessage.UW-ListWidget_KillMessage_C.SetBroadcastTypeIcon");

	struct SetBroadcastTypeIcon_Params {
		enum class EBroadCastKillMessageType MessageType;
	}; SetBroadcastTypeIcon_Params Params;

	Params.MessageType = MessageType;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ListWidget_KillMessage.UW-ListWidget_KillMessage_C.GetTeamType
inline void UUW-ListWidget_KillMessage_C::GetTeamType(struct ABravoHotelPlayerState PlayerState, enum class EBroadCastTeamType& TeamType) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ListWidget_KillMessage.UW-ListWidget_KillMessage_C.GetTeamType");

	struct GetTeamType_Params {
		struct ABravoHotelPlayerState PlayerState;
		enum class EBroadCastTeamType& TeamType;
	}; GetTeamType_Params Params;

	Params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	TeamType = Params.TeamType;

}

// Function UW-ListWidget_KillMessage.UW-ListWidget_KillMessage_C.GetInfoColor
inline void UUW-ListWidget_KillMessage_C::GetInfoColor(struct ABravoHotelPlayerState Killer, struct ABravoHotelPlayerState Died, enum class EBroadCastKillMessageType MessageType, struct FSlateColor& OutTeamColor) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ListWidget_KillMessage.UW-ListWidget_KillMessage_C.GetInfoColor");

	struct GetInfoColor_Params {
		struct ABravoHotelPlayerState Killer;
		struct ABravoHotelPlayerState Died;
		enum class EBroadCastKillMessageType MessageType;
		struct FSlateColor& OutTeamColor;
	}; GetInfoColor_Params Params;

	Params.Killer = Killer;
	Params.Died = Died;
	Params.MessageType = MessageType;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	OutTeamColor = Params.OutTeamColor;

}

// Function UW-ListWidget_KillMessage.UW-ListWidget_KillMessage_C.SetBGColor
inline void UUW-ListWidget_KillMessage_C::SetBGColor(enum class EBroadCastKillMessageType MessageType) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ListWidget_KillMessage.UW-ListWidget_KillMessage_C.SetBGColor");

	struct SetBGColor_Params {
		enum class EBroadCastKillMessageType MessageType;
	}; SetBGColor_Params Params;

	Params.MessageType = MessageType;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ListWidget_KillMessage.UW-ListWidget_KillMessage_C.OnLoaded_E905D98740C8E2F4A90B4C89D663ACAA
inline void UUW-ListWidget_KillMessage_C::OnLoaded_E905D98740C8E2F4A90B4C89D663ACAA(struct Object Loaded) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ListWidget_KillMessage.UW-ListWidget_KillMessage_C.OnLoaded_E905D98740C8E2F4A90B4C89D663ACAA");

	struct OnLoaded_E905D98740C8E2F4A90B4C89D663ACAA_Params {
		struct Object Loaded;
	}; OnLoaded_E905D98740C8E2F4A90B4C89D663ACAA_Params Params;

	Params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ListWidget_KillMessage.UW-ListWidget_KillMessage_C.OnLoaded_342F68DF4CB26590AC0C9EA8C343CCF1
inline void UUW-ListWidget_KillMessage_C::OnLoaded_342F68DF4CB26590AC0C9EA8C343CCF1(struct Object Loaded) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ListWidget_KillMessage.UW-ListWidget_KillMessage_C.OnLoaded_342F68DF4CB26590AC0C9EA8C343CCF1");

	struct OnLoaded_342F68DF4CB26590AC0C9EA8C343CCF1_Params {
		struct Object Loaded;
	}; OnLoaded_342F68DF4CB26590AC0C9EA8C343CCF1_Params Params;

	Params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ListWidget_KillMessage.UW-ListWidget_KillMessage_C.SetKillMessageInfo
inline void UUW-ListWidget_KillMessage_C::SetKillMessageInfo(struct FKillBroadcastUIInfo& Info) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ListWidget_KillMessage.UW-ListWidget_KillMessage_C.SetKillMessageInfo");

	struct SetKillMessageInfo_Params {
		struct FKillBroadcastUIInfo& Info;
	}; SetKillMessageInfo_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Info = Params.Info;

}

// Function UW-ListWidget_KillMessage.UW-ListWidget_KillMessage_C.ExecuteUbergraph_UW-ListWidget_KillMessage
inline void UUW-ListWidget_KillMessage_C::ExecuteUbergraph_UW-ListWidget_KillMessage(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ListWidget_KillMessage.UW-ListWidget_KillMessage_C.ExecuteUbergraph_UW-ListWidget_KillMessage");

	struct ExecuteUbergraph_UW-ListWidget_KillMessage_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_UW-ListWidget_KillMessage_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

