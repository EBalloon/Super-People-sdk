// WidgetBlueprintGeneratedClass UW-KillMessageListWidget.UW-KillMessageListWidget_C
class UUW-KillMessageListWidget_C : public UBravoHotelKillInfoSlotWidget {

public:

	struct Unknown UberGraphFrame; // 0x258 (8)
	struct Unknown Anim_Hide; // 0x260 (8)
	struct Unknown Anim_Down; // 0x268 (8)
	struct Unknown CanvasPanel_Main; // 0x270 (8)
	struct Unknown Img_Back; // 0x278 (8)
	struct Unknown Img_BroadType; // 0x280 (8)
	struct Unknown Img_DamegeType; // 0x288 (8)
	struct Unknown Img_Weapon; // 0x290 (8)
	struct Unknown ScaleBox_Weapon; // 0x298 (8)
	struct Unknown SizeBox_BroadType; // 0x2A0 (8)
	struct Unknown SizeBox_DamageType; // 0x2A8 (8)
	struct Unknown SizeBox_HeadShot; // 0x2B0 (8)
	struct Unknown T_Context; // 0x2B8 (8)
	struct Unknown UW-DiedInfoWidget; // 0x2C0 (8)
	struct Unknown UW-KillerInfoWidget; // 0x2C8 (8)
	struct FMulticastInlineDelegate OnTimeOut; // 0x2D0 (16)
	struct TMap<Unknown, Unknown> BroadcastDamageType; // 0x2E0 (80)
	struct Unknown MyTeamColor; // 0x330 (40)
	struct Unknown MyTeamKnockOutColor; // 0x358 (40)
	struct Unknown EnermyTeamColor; // 0x380 (40)
	struct Unknown EnermyTeamKnockOutColor; // 0x3A8 (40)
	struct Unknown DefaultColor; // 0x3D0 (40)
	struct Unknown DefaultKnockColor; // 0x3F8 (40)
	struct Unknown ResuscatedColor; // 0x420 (40)
	struct Unknown ParentWidgetRef; // 0x448 (8)
	struct Unknown Timer_StartHideAnim; // 0x450 (8)
	struct Unknown CurrentInfoColor; // 0x458 (40)

	void ResetInfos(); // Function UW-KillMessageListWidget.UW-KillMessageListWidget_C.ResetInfos(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void SetBroadcastTypeIcon(enum class Unknow MessageType); // Function UW-KillMessageListWidget.UW-KillMessageListWidget_C.SetBroadcastTypeIcon(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void GetTeamType(struct Unknown PlayerState, enum class Unknow& TeamType); // Function UW-KillMessageListWidget.UW-KillMessageListWidget_C.GetTeamType(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void GetInfoColor(struct Unknown Killer, struct Unknown Died, enum class Unknow MessageType, struct Unknown& OutTeamColor); // Function UW-KillMessageListWidget.UW-KillMessageListWidget_C.GetInfoColor(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void SetBGColor(enum class Unknow MessageType); // Function UW-KillMessageListWidget.UW-KillMessageListWidget_C.SetBGColor(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void PlayDownAnim(); // Function UW-KillMessageListWidget.UW-KillMessageListWidget_C.PlayDownAnim(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void StartHideAnim(); // Function UW-KillMessageListWidget.UW-KillMessageListWidget_C.StartHideAnim(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void StartShow(); // Function UW-KillMessageListWidget.UW-KillMessageListWidget_C.StartShow(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void OnLoaded_E905D98740C8E2F4A90B4C89D663ACAA(struct Unknown Loaded); // Function UW-KillMessageListWidget.UW-KillMessageListWidget_C.OnLoaded_E905D98740C8E2F4A90B4C89D663ACAA(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void OnLoaded_342F68DF4CB26590AC0C9EA8C343CCF1(struct Unknown Loaded); // Function UW-KillMessageListWidget.UW-KillMessageListWidget_C.OnLoaded_342F68DF4CB26590AC0C9EA8C343CCF1(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void SetKillMessageInfo(struct Unknown& Info); // Function UW-KillMessageListWidget.UW-KillMessageListWidget_C.SetKillMessageInfo(HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void ExecuteUbergraph_UW-KillMessageListWidget(int32_t EntryPoint); // Function UW-KillMessageListWidget.UW-KillMessageListWidget_C.ExecuteUbergraph_UW-KillMessageListWidget(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void OnTimeOut__DelegateSignature(int32_t ArrayIndex, struct Unknown Slot); // Function UW-KillMessageListWidget.UW-KillMessageListWidget_C.OnTimeOut__DelegateSignature(Public|Delegate|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
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
inline void UUW-KillMessageListWidget_C::SetBroadcastTypeIcon(enum class Unknow MessageType) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-KillMessageListWidget.UW-KillMessageListWidget_C.SetBroadcastTypeIcon");

	struct SetBroadcastTypeIcon_Params {
		enum class Unknow MessageType;
	}; SetBroadcastTypeIcon_Params Params;

	Params.MessageType = MessageType;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-KillMessageListWidget.UW-KillMessageListWidget_C.GetTeamType
inline void UUW-KillMessageListWidget_C::GetTeamType(struct Unknown PlayerState, enum class Unknow& TeamType) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-KillMessageListWidget.UW-KillMessageListWidget_C.GetTeamType");

	struct GetTeamType_Params {
		struct Unknown PlayerState;
		enum class Unknow& TeamType;
	}; GetTeamType_Params Params;

	Params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	TeamType = Params.TeamType;

}

// Function UW-KillMessageListWidget.UW-KillMessageListWidget_C.GetInfoColor
inline void UUW-KillMessageListWidget_C::GetInfoColor(struct Unknown Killer, struct Unknown Died, enum class Unknow MessageType, struct Unknown& OutTeamColor) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-KillMessageListWidget.UW-KillMessageListWidget_C.GetInfoColor");

	struct GetInfoColor_Params {
		struct Unknown Killer;
		struct Unknown Died;
		enum class Unknow MessageType;
		struct Unknown& OutTeamColor;
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
inline void UUW-KillMessageListWidget_C::SetBGColor(enum class Unknow MessageType) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-KillMessageListWidget.UW-KillMessageListWidget_C.SetBGColor");

	struct SetBGColor_Params {
		enum class Unknow MessageType;
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
inline void UUW-KillMessageListWidget_C::OnLoaded_E905D98740C8E2F4A90B4C89D663ACAA(struct Unknown Loaded) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-KillMessageListWidget.UW-KillMessageListWidget_C.OnLoaded_E905D98740C8E2F4A90B4C89D663ACAA");

	struct OnLoaded_E905D98740C8E2F4A90B4C89D663ACAA_Params {
		struct Unknown Loaded;
	}; OnLoaded_E905D98740C8E2F4A90B4C89D663ACAA_Params Params;

	Params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-KillMessageListWidget.UW-KillMessageListWidget_C.OnLoaded_342F68DF4CB26590AC0C9EA8C343CCF1
inline void UUW-KillMessageListWidget_C::OnLoaded_342F68DF4CB26590AC0C9EA8C343CCF1(struct Unknown Loaded) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-KillMessageListWidget.UW-KillMessageListWidget_C.OnLoaded_342F68DF4CB26590AC0C9EA8C343CCF1");

	struct OnLoaded_342F68DF4CB26590AC0C9EA8C343CCF1_Params {
		struct Unknown Loaded;
	}; OnLoaded_342F68DF4CB26590AC0C9EA8C343CCF1_Params Params;

	Params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-KillMessageListWidget.UW-KillMessageListWidget_C.SetKillMessageInfo
inline void UUW-KillMessageListWidget_C::SetKillMessageInfo(struct Unknown& Info) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-KillMessageListWidget.UW-KillMessageListWidget_C.SetKillMessageInfo");

	struct SetKillMessageInfo_Params {
		struct Unknown& Info;
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
inline void UUW-KillMessageListWidget_C::OnTimeOut__DelegateSignature(int32_t ArrayIndex, struct Unknown Slot) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-KillMessageListWidget.UW-KillMessageListWidget_C.OnTimeOut__DelegateSignature");

	struct OnTimeOut__DelegateSignature_Params {
		int32_t ArrayIndex;
		struct Unknown Slot;
	}; OnTimeOut__DelegateSignature_Params Params;

	Params.ArrayIndex = ArrayIndex;
	Params.Slot = Slot;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

