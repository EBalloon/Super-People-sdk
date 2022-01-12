// WidgetBlueprintGeneratedClass UW-KillMessageListWidget.UW-KillMessageListWidget_C
class UUW-KillMessageListWidget_C : public UBravoHotelKillInfoSlotWidget {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x258 (8)
	struct UWidgetAnimation Anim_Hide; // 0x260 (8)
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
	struct UUW-KillMessageListItemWidget_C UW-DiedInfoWidget; // 0x2C0 (8)
	struct UUW-KillMessageListItemWidget_C UW-KillerInfoWidget; // 0x2C8 (8)
	struct FMulticastInlineDelegate OnTimeOut; // 0x2D0 (16)
	struct TMap<enum class EBroadCastKillMessageType, struct UPaperSprite> BroadcastDamageType; // 0x2E0 (80)
	struct FSlateColor MyTeamColor; // 0x330 (40)
	struct FSlateColor MyTeamKnockOutColor; // 0x358 (40)
	struct FSlateColor EnermyTeamColor; // 0x380 (40)
	struct FSlateColor EnermyTeamKnockOutColor; // 0x3A8 (40)
	struct FSlateColor DefaultColor; // 0x3D0 (40)
	struct FSlateColor DefaultKnockColor; // 0x3F8 (40)
	struct FSlateColor ResuscatedColor; // 0x420 (40)
	struct UUW-KillInfoWidget_C ParentWidgetRef; // 0x448 (8)
	struct FTimerHandle Timer_StartHideAnim; // 0x450 (8)
	struct FSlateColor CurrentInfoColor; // 0x458 (40)

	void ResetInfos(); // Function UW-KillMessageListWidget.UW-KillMessageListWidget_C.ResetInfos(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void SetBroadcastTypeIcon(enum class EBroadCastKillMessageType MessageType); // Function UW-KillMessageListWidget.UW-KillMessageListWidget_C.SetBroadcastTypeIcon(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void GetTeamType(struct ABravoHotelPlayerState PlayerState, enum class EBroadCastTeamType& TeamType); // Function UW-KillMessageListWidget.UW-KillMessageListWidget_C.GetTeamType(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <Game_BE.exe+0x2B80160>
	void GetInfoColor(struct ABravoHotelPlayerState Killer, struct ABravoHotelPlayerState Died, enum class EBroadCastKillMessageType MessageType, struct FSlateColor& OutTeamColor); // Function UW-KillMessageListWidget.UW-KillMessageListWidget_C.GetInfoColor(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <Game_BE.exe+0x2B80160>
	void SetBGColor(enum class EBroadCastKillMessageType MessageType); // Function UW-KillMessageListWidget.UW-KillMessageListWidget_C.SetBGColor(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void PlayDownAnim(); // Function UW-KillMessageListWidget.UW-KillMessageListWidget_C.PlayDownAnim(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void StartHideAnim(); // Function UW-KillMessageListWidget.UW-KillMessageListWidget_C.StartHideAnim(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void StartShow(); // Function UW-KillMessageListWidget.UW-KillMessageListWidget_C.StartShow(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void OnLoaded_E905D98740C8E2F4A90B4C89D663ACAA(struct Object Loaded); // Function UW-KillMessageListWidget.UW-KillMessageListWidget_C.OnLoaded_E905D98740C8E2F4A90B4C89D663ACAA(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void OnLoaded_342F68DF4CB26590AC0C9EA8C343CCF1(struct Object Loaded); // Function UW-KillMessageListWidget.UW-KillMessageListWidget_C.OnLoaded_342F68DF4CB26590AC0C9EA8C343CCF1(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void SetKillMessageInfo(struct FKillBroadcastUIInfo& Info); // Function UW-KillMessageListWidget.UW-KillMessageListWidget_C.SetKillMessageInfo(HasOutParms|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void ExecuteUbergraph_UW-KillMessageListWidget(int32_t EntryPoint); // Function UW-KillMessageListWidget.UW-KillMessageListWidget_C.ExecuteUbergraph_UW-KillMessageListWidget(Final|UbergraphFunction|HasDefaults) // <Game_BE.exe+0x2B80160>
	void OnTimeOut__DelegateSignature(int32_t ArrayIndex, struct UUW-KillMessageListWidget_C Slot); // Function UW-KillMessageListWidget.UW-KillMessageListWidget_C.OnTimeOut__DelegateSignature(Public|Delegate|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
};

// Function UW-KillMessageListWidget.UW-KillMessageListWidget_C.ResetInfos
inline void UUW-KillMessageListWidget_C::ResetInfos() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-KillMessageListWidget.UW-KillMessageListWidget_C.ResetInfos");

	struct ResetInfos_Params {
		
	}; ResetInfos_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-KillMessageListWidget.UW-KillMessageListWidget_C.SetBroadcastTypeIcon
inline void UUW-KillMessageListWidget_C::SetBroadcastTypeIcon(enum class EBroadCastKillMessageType MessageType) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-KillMessageListWidget.UW-KillMessageListWidget_C.SetBroadcastTypeIcon");

	struct SetBroadcastTypeIcon_Params {
		enum class EBroadCastKillMessageType MessageType;
	}; SetBroadcastTypeIcon_Params Params;

	Params.MessageType = MessageType;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-KillMessageListWidget.UW-KillMessageListWidget_C.GetTeamType
inline void UUW-KillMessageListWidget_C::GetTeamType(struct ABravoHotelPlayerState PlayerState, enum class EBroadCastTeamType& TeamType) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-KillMessageListWidget.UW-KillMessageListWidget_C.GetTeamType");

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

// Function UW-KillMessageListWidget.UW-KillMessageListWidget_C.GetInfoColor
inline void UUW-KillMessageListWidget_C::GetInfoColor(struct ABravoHotelPlayerState Killer, struct ABravoHotelPlayerState Died, enum class EBroadCastKillMessageType MessageType, struct FSlateColor& OutTeamColor) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-KillMessageListWidget.UW-KillMessageListWidget_C.GetInfoColor");

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

// Function UW-KillMessageListWidget.UW-KillMessageListWidget_C.SetBGColor
inline void UUW-KillMessageListWidget_C::SetBGColor(enum class EBroadCastKillMessageType MessageType) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-KillMessageListWidget.UW-KillMessageListWidget_C.SetBGColor");

	struct SetBGColor_Params {
		enum class EBroadCastKillMessageType MessageType;
	}; SetBGColor_Params Params;

	Params.MessageType = MessageType;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-KillMessageListWidget.UW-KillMessageListWidget_C.PlayDownAnim
inline void UUW-KillMessageListWidget_C::PlayDownAnim() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-KillMessageListWidget.UW-KillMessageListWidget_C.PlayDownAnim");

	struct PlayDownAnim_Params {
		
	}; PlayDownAnim_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-KillMessageListWidget.UW-KillMessageListWidget_C.StartHideAnim
inline void UUW-KillMessageListWidget_C::StartHideAnim() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-KillMessageListWidget.UW-KillMessageListWidget_C.StartHideAnim");

	struct StartHideAnim_Params {
		
	}; StartHideAnim_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-KillMessageListWidget.UW-KillMessageListWidget_C.StartShow
inline void UUW-KillMessageListWidget_C::StartShow() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-KillMessageListWidget.UW-KillMessageListWidget_C.StartShow");

	struct StartShow_Params {
		
	}; StartShow_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-KillMessageListWidget.UW-KillMessageListWidget_C.OnLoaded_E905D98740C8E2F4A90B4C89D663ACAA
inline void UUW-KillMessageListWidget_C::OnLoaded_E905D98740C8E2F4A90B4C89D663ACAA(struct Object Loaded) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-KillMessageListWidget.UW-KillMessageListWidget_C.OnLoaded_E905D98740C8E2F4A90B4C89D663ACAA");

	struct OnLoaded_E905D98740C8E2F4A90B4C89D663ACAA_Params {
		struct Object Loaded;
	}; OnLoaded_E905D98740C8E2F4A90B4C89D663ACAA_Params Params;

	Params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-KillMessageListWidget.UW-KillMessageListWidget_C.OnLoaded_342F68DF4CB26590AC0C9EA8C343CCF1
inline void UUW-KillMessageListWidget_C::OnLoaded_342F68DF4CB26590AC0C9EA8C343CCF1(struct Object Loaded) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-KillMessageListWidget.UW-KillMessageListWidget_C.OnLoaded_342F68DF4CB26590AC0C9EA8C343CCF1");

	struct OnLoaded_342F68DF4CB26590AC0C9EA8C343CCF1_Params {
		struct Object Loaded;
	}; OnLoaded_342F68DF4CB26590AC0C9EA8C343CCF1_Params Params;

	Params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-KillMessageListWidget.UW-KillMessageListWidget_C.SetKillMessageInfo
inline void UUW-KillMessageListWidget_C::SetKillMessageInfo(struct FKillBroadcastUIInfo& Info) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-KillMessageListWidget.UW-KillMessageListWidget_C.SetKillMessageInfo");

	struct SetKillMessageInfo_Params {
		struct FKillBroadcastUIInfo& Info;
	}; SetKillMessageInfo_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Info = Params.Info;

}

// Function UW-KillMessageListWidget.UW-KillMessageListWidget_C.ExecuteUbergraph_UW-KillMessageListWidget
inline void UUW-KillMessageListWidget_C::ExecuteUbergraph_UW-KillMessageListWidget(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-KillMessageListWidget.UW-KillMessageListWidget_C.ExecuteUbergraph_UW-KillMessageListWidget");

	struct ExecuteUbergraph_UW-KillMessageListWidget_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_UW-KillMessageListWidget_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-KillMessageListWidget.UW-KillMessageListWidget_C.OnTimeOut__DelegateSignature
inline void UUW-KillMessageListWidget_C::OnTimeOut__DelegateSignature(int32_t ArrayIndex, struct UUW-KillMessageListWidget_C Slot) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-KillMessageListWidget.UW-KillMessageListWidget_C.OnTimeOut__DelegateSignature");

	struct OnTimeOut__DelegateSignature_Params {
		int32_t ArrayIndex;
		struct UUW-KillMessageListWidget_C Slot;
	}; OnTimeOut__DelegateSignature_Params Params;

	Params.ArrayIndex = ArrayIndex;
	Params.Slot = Slot;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

