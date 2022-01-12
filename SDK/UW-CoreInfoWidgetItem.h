// WidgetBlueprintGeneratedClass UW-CoreInfoWidgetItem.UW-CoreInfoWidgetItem_C
class UUW-CoreInfoWidgetItem_C : public UUserWidget {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248 (8)
	struct UWidgetAnimation Anim_KillMessage; // 0x250 (8)
	struct UWidgetAnimation Anim_RemoveCoreInfo; // 0x258 (8)
	struct UWidgetAnimation Anim_AddCoreInfo; // 0x260 (8)
	struct UHorizontalBox HB_Smartping; // 0x268 (8)
	struct UImage Img_Back; // 0x270 (8)
	struct UImage Img_Back_2; // 0x278 (8)
	struct UImage Img_MarkerIcon; // 0x280 (8)
	struct UImage Img_PerkDeckIcon; // 0x288 (8)
	struct URichTextBlock NewRichText; // 0x290 (8)
	struct UTextBlock T_Damage; // 0x298 (8)
	struct UTextBlock T_DamageCauser; // 0x2A0 (8)
	struct UTextBlock T_DamageResult; // 0x2A8 (8)
	struct UTextBlock T_HeadShot; // 0x2B0 (8)
	struct UTextBlock T_HitCount; // 0x2B8 (8)
	struct UTextBlock T_HitType; // 0x2C0 (8)
	struct UTextBlock T_Message; // 0x2C8 (8)
	struct UTextBlock T_PingType; // 0x2D0 (8)
	struct UTextBlock T_PlayerName; // 0x2D8 (8)
	struct UTextBlock T_TargetClass; // 0x2E0 (8)
	struct UTextBlock T_TargetLevel; // 0x2E8 (8)
	struct UTextBlock T_TargetName; // 0x2F0 (8)
	struct UTextBlock T_TargetWeapon; // 0x2F8 (8)
	struct UTextBlock T_WeaponLevel; // 0x300 (8)
	struct UWidgetSwitcher WidgetSwitcher_194; // 0x308 (8)
	struct UWidgetSwitcher WidgetSwitcher_Main; // 0x310 (8)
	struct UUW-CoreInfoWidget_C ParentWidgetRef; // 0x318 (8)
	struct FTimerHandle Timer_StartRemove; // 0x320 (8)
	struct FHitDamageLogInfo DamageLogInfo; // 0x328 (2904)
	float LogTime; // 0xE80 (4)
	float LogStackValidTime; // 0xE84 (4)

	void DamageResultText(struct FText& Result); // Function UW-CoreInfoWidgetItem.UW-CoreInfoWidgetItem_C.DamageResultText(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <Game_BE.exe+0x2B80160>
	void DamageText(struct FText& Result); // Function UW-CoreInfoWidgetItem.UW-CoreInfoWidgetItem_C.DamageText(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <Game_BE.exe+0x2B80160>
	void WeaponText(struct FText& Result); // Function UW-CoreInfoWidgetItem.UW-CoreInfoWidgetItem_C.WeaponText(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <Game_BE.exe+0x2B80160>
	void TargetText(struct FText& Result); // Function UW-CoreInfoWidgetItem.UW-CoreInfoWidgetItem_C.TargetText(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <Game_BE.exe+0x2B80160>
	void StackDamageLog(struct FHitDamageLogInfo& DamageLogInfo); // Function UW-CoreInfoWidgetItem.UW-CoreInfoWidgetItem_C.StackDamageLog(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void CheckCanStackDamage Log(struct FHitDamageLogInfo& DamageLogInfo, char& CanStack); // Function UW-CoreInfoWidgetItem.UW-CoreInfoWidgetItem_C.CheckCanStackDamage Log(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void SetHitDamageLogInfo(struct FHitDamageLogInfo& DamageLogInfo); // Function UW-CoreInfoWidgetItem.UW-CoreInfoWidgetItem_C.SetHitDamageLogInfo(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void SetCoreInfoKillMessage(struct FText Message); // Function UW-CoreInfoWidgetItem.UW-CoreInfoWidgetItem_C.SetCoreInfoKillMessage(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void SetCoreInfoMessageType(struct FString Type); // Function UW-CoreInfoWidgetItem.UW-CoreInfoWidgetItem_C.SetCoreInfoMessageType(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void SetResuscitationPingInfo(); // Function UW-CoreInfoWidgetItem.UW-CoreInfoWidgetItem_C.SetResuscitationPingInfo(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void SetCoreInfoResuscitation(struct ABravoHotelPlayerState PlayerState); // Function UW-CoreInfoWidgetItem.UW-CoreInfoWidgetItem_C.SetCoreInfoResuscitation(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void SetRequestMessageInfo(struct ABravoHotelPlayerState PlayerState, struct FText Message); // Function UW-CoreInfoWidgetItem.UW-CoreInfoWidgetItem_C.SetRequestMessageInfo(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void SetRequestMessage(struct ABravoHotelPlayerState Player State, struct FText Message); // Function UW-CoreInfoWidgetItem.UW-CoreInfoWidgetItem_C.SetRequestMessage(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void SetRoutePingInfo(); // Function UW-CoreInfoWidgetItem.UW-CoreInfoWidgetItem_C.SetRoutePingInfo(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void SetCoreInfoRoutePing(struct ABravoHotelPlayerState PlayerState); // Function UW-CoreInfoWidgetItem.UW-CoreInfoWidgetItem_C.SetCoreInfoRoutePing(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void SetCoreInfoMessage(struct FText Message, struct FString Type); // Function UW-CoreInfoWidgetItem.UW-CoreInfoWidgetItem_C.SetCoreInfoMessage(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void SetRemoveTimer(float RemainTime); // Function UW-CoreInfoWidgetItem.UW-CoreInfoWidgetItem_C.SetRemoveTimer(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void SetPlayerInfo(struct ABravoHotelPlayerState PlayerState); // Function UW-CoreInfoWidgetItem.UW-CoreInfoWidgetItem_C.SetPlayerInfo(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void SetPingType(struct FBravoHotelPingInfo PingInfo); // Function UW-CoreInfoWidgetItem.UW-CoreInfoWidgetItem_C.SetPingType(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void SetCoreInfoSmartping(struct ABravoHotelPlayerState PlayerState); // Function UW-CoreInfoWidgetItem.UW-CoreInfoWidgetItem_C.SetCoreInfoSmartping(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void OnAnimationFinished(struct UWidgetAnimation Animation); // Function UW-CoreInfoWidgetItem.UW-CoreInfoWidgetItem_C.OnAnimationFinished(BlueprintCosmetic|Event|Protected|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void PlayAddCoreInfoAnim(); // Function UW-CoreInfoWidgetItem.UW-CoreInfoWidgetItem_C.PlayAddCoreInfoAnim(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void PlayKillMessageAnim(); // Function UW-CoreInfoWidgetItem.UW-CoreInfoWidgetItem_C.PlayKillMessageAnim(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void StartRemove(); // Function UW-CoreInfoWidgetItem.UW-CoreInfoWidgetItem_C.StartRemove(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void ExecuteUbergraph_UW-CoreInfoWidgetItem(int32_t EntryPoint); // Function UW-CoreInfoWidgetItem.UW-CoreInfoWidgetItem_C.ExecuteUbergraph_UW-CoreInfoWidgetItem(Final|UbergraphFunction) // <Game_BE.exe+0x2B80160>
};

// Function UW-CoreInfoWidgetItem.UW-CoreInfoWidgetItem_C.DamageResultText
inline void UUW-CoreInfoWidgetItem_C::DamageResultText(struct FText& Result) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-CoreInfoWidgetItem.UW-CoreInfoWidgetItem_C.DamageResultText");

	struct DamageResultText_Params {
		struct FText& Result;
	}; DamageResultText_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Result = Params.Result;

}

// Function UW-CoreInfoWidgetItem.UW-CoreInfoWidgetItem_C.DamageText
inline void UUW-CoreInfoWidgetItem_C::DamageText(struct FText& Result) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-CoreInfoWidgetItem.UW-CoreInfoWidgetItem_C.DamageText");

	struct DamageText_Params {
		struct FText& Result;
	}; DamageText_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Result = Params.Result;

}

// Function UW-CoreInfoWidgetItem.UW-CoreInfoWidgetItem_C.WeaponText
inline void UUW-CoreInfoWidgetItem_C::WeaponText(struct FText& Result) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-CoreInfoWidgetItem.UW-CoreInfoWidgetItem_C.WeaponText");

	struct WeaponText_Params {
		struct FText& Result;
	}; WeaponText_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Result = Params.Result;

}

// Function UW-CoreInfoWidgetItem.UW-CoreInfoWidgetItem_C.TargetText
inline void UUW-CoreInfoWidgetItem_C::TargetText(struct FText& Result) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-CoreInfoWidgetItem.UW-CoreInfoWidgetItem_C.TargetText");

	struct TargetText_Params {
		struct FText& Result;
	}; TargetText_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Result = Params.Result;

}

// Function UW-CoreInfoWidgetItem.UW-CoreInfoWidgetItem_C.StackDamageLog
inline void UUW-CoreInfoWidgetItem_C::StackDamageLog(struct FHitDamageLogInfo& DamageLogInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-CoreInfoWidgetItem.UW-CoreInfoWidgetItem_C.StackDamageLog");

	struct StackDamageLog_Params {
		struct FHitDamageLogInfo& DamageLogInfo;
	}; StackDamageLog_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	DamageLogInfo = Params.DamageLogInfo;

}

// Function UW-CoreInfoWidgetItem.UW-CoreInfoWidgetItem_C.CheckCanStackDamage Log
inline void UUW-CoreInfoWidgetItem_C::CheckCanStackDamage Log(struct FHitDamageLogInfo& DamageLogInfo, char& CanStack) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-CoreInfoWidgetItem.UW-CoreInfoWidgetItem_C.CheckCanStackDamage Log");

	struct CheckCanStackDamage Log_Params {
		struct FHitDamageLogInfo& DamageLogInfo;
		char& CanStack;
	}; CheckCanStackDamage Log_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	DamageLogInfo = Params.DamageLogInfo;
	CanStack = Params.CanStack;

}

// Function UW-CoreInfoWidgetItem.UW-CoreInfoWidgetItem_C.SetHitDamageLogInfo
inline void UUW-CoreInfoWidgetItem_C::SetHitDamageLogInfo(struct FHitDamageLogInfo& DamageLogInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-CoreInfoWidgetItem.UW-CoreInfoWidgetItem_C.SetHitDamageLogInfo");

	struct SetHitDamageLogInfo_Params {
		struct FHitDamageLogInfo& DamageLogInfo;
	}; SetHitDamageLogInfo_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	DamageLogInfo = Params.DamageLogInfo;

}

// Function UW-CoreInfoWidgetItem.UW-CoreInfoWidgetItem_C.SetCoreInfoKillMessage
inline void UUW-CoreInfoWidgetItem_C::SetCoreInfoKillMessage(struct FText Message) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-CoreInfoWidgetItem.UW-CoreInfoWidgetItem_C.SetCoreInfoKillMessage");

	struct SetCoreInfoKillMessage_Params {
		struct FText Message;
	}; SetCoreInfoKillMessage_Params Params;

	Params.Message = Message;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-CoreInfoWidgetItem.UW-CoreInfoWidgetItem_C.SetCoreInfoMessageType
inline void UUW-CoreInfoWidgetItem_C::SetCoreInfoMessageType(struct FString Type) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-CoreInfoWidgetItem.UW-CoreInfoWidgetItem_C.SetCoreInfoMessageType");

	struct SetCoreInfoMessageType_Params {
		struct FString Type;
	}; SetCoreInfoMessageType_Params Params;

	Params.Type = Type;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-CoreInfoWidgetItem.UW-CoreInfoWidgetItem_C.SetResuscitationPingInfo
inline void UUW-CoreInfoWidgetItem_C::SetResuscitationPingInfo() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-CoreInfoWidgetItem.UW-CoreInfoWidgetItem_C.SetResuscitationPingInfo");

	struct SetResuscitationPingInfo_Params {
		
	}; SetResuscitationPingInfo_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-CoreInfoWidgetItem.UW-CoreInfoWidgetItem_C.SetCoreInfoResuscitation
inline void UUW-CoreInfoWidgetItem_C::SetCoreInfoResuscitation(struct ABravoHotelPlayerState PlayerState) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-CoreInfoWidgetItem.UW-CoreInfoWidgetItem_C.SetCoreInfoResuscitation");

	struct SetCoreInfoResuscitation_Params {
		struct ABravoHotelPlayerState PlayerState;
	}; SetCoreInfoResuscitation_Params Params;

	Params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-CoreInfoWidgetItem.UW-CoreInfoWidgetItem_C.SetRequestMessageInfo
inline void UUW-CoreInfoWidgetItem_C::SetRequestMessageInfo(struct ABravoHotelPlayerState PlayerState, struct FText Message) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-CoreInfoWidgetItem.UW-CoreInfoWidgetItem_C.SetRequestMessageInfo");

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

// Function UW-CoreInfoWidgetItem.UW-CoreInfoWidgetItem_C.SetRequestMessage
inline void UUW-CoreInfoWidgetItem_C::SetRequestMessage(struct ABravoHotelPlayerState Player State, struct FText Message) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-CoreInfoWidgetItem.UW-CoreInfoWidgetItem_C.SetRequestMessage");

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

// Function UW-CoreInfoWidgetItem.UW-CoreInfoWidgetItem_C.SetRoutePingInfo
inline void UUW-CoreInfoWidgetItem_C::SetRoutePingInfo() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-CoreInfoWidgetItem.UW-CoreInfoWidgetItem_C.SetRoutePingInfo");

	struct SetRoutePingInfo_Params {
		
	}; SetRoutePingInfo_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-CoreInfoWidgetItem.UW-CoreInfoWidgetItem_C.SetCoreInfoRoutePing
inline void UUW-CoreInfoWidgetItem_C::SetCoreInfoRoutePing(struct ABravoHotelPlayerState PlayerState) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-CoreInfoWidgetItem.UW-CoreInfoWidgetItem_C.SetCoreInfoRoutePing");

	struct SetCoreInfoRoutePing_Params {
		struct ABravoHotelPlayerState PlayerState;
	}; SetCoreInfoRoutePing_Params Params;

	Params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-CoreInfoWidgetItem.UW-CoreInfoWidgetItem_C.SetCoreInfoMessage
inline void UUW-CoreInfoWidgetItem_C::SetCoreInfoMessage(struct FText Message, struct FString Type) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-CoreInfoWidgetItem.UW-CoreInfoWidgetItem_C.SetCoreInfoMessage");

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

// Function UW-CoreInfoWidgetItem.UW-CoreInfoWidgetItem_C.SetRemoveTimer
inline void UUW-CoreInfoWidgetItem_C::SetRemoveTimer(float RemainTime) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-CoreInfoWidgetItem.UW-CoreInfoWidgetItem_C.SetRemoveTimer");

	struct SetRemoveTimer_Params {
		float RemainTime;
	}; SetRemoveTimer_Params Params;

	Params.RemainTime = RemainTime;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-CoreInfoWidgetItem.UW-CoreInfoWidgetItem_C.SetPlayerInfo
inline void UUW-CoreInfoWidgetItem_C::SetPlayerInfo(struct ABravoHotelPlayerState PlayerState) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-CoreInfoWidgetItem.UW-CoreInfoWidgetItem_C.SetPlayerInfo");

	struct SetPlayerInfo_Params {
		struct ABravoHotelPlayerState PlayerState;
	}; SetPlayerInfo_Params Params;

	Params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-CoreInfoWidgetItem.UW-CoreInfoWidgetItem_C.SetPingType
inline void UUW-CoreInfoWidgetItem_C::SetPingType(struct FBravoHotelPingInfo PingInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-CoreInfoWidgetItem.UW-CoreInfoWidgetItem_C.SetPingType");

	struct SetPingType_Params {
		struct FBravoHotelPingInfo PingInfo;
	}; SetPingType_Params Params;

	Params.PingInfo = PingInfo;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-CoreInfoWidgetItem.UW-CoreInfoWidgetItem_C.SetCoreInfoSmartping
inline void UUW-CoreInfoWidgetItem_C::SetCoreInfoSmartping(struct ABravoHotelPlayerState PlayerState) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-CoreInfoWidgetItem.UW-CoreInfoWidgetItem_C.SetCoreInfoSmartping");

	struct SetCoreInfoSmartping_Params {
		struct ABravoHotelPlayerState PlayerState;
	}; SetCoreInfoSmartping_Params Params;

	Params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-CoreInfoWidgetItem.UW-CoreInfoWidgetItem_C.OnAnimationFinished
inline void UUW-CoreInfoWidgetItem_C::OnAnimationFinished(struct UWidgetAnimation Animation) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-CoreInfoWidgetItem.UW-CoreInfoWidgetItem_C.OnAnimationFinished");

	struct OnAnimationFinished_Params {
		struct UWidgetAnimation Animation;
	}; OnAnimationFinished_Params Params;

	Params.Animation = Animation;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-CoreInfoWidgetItem.UW-CoreInfoWidgetItem_C.PlayAddCoreInfoAnim
inline void UUW-CoreInfoWidgetItem_C::PlayAddCoreInfoAnim() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-CoreInfoWidgetItem.UW-CoreInfoWidgetItem_C.PlayAddCoreInfoAnim");

	struct PlayAddCoreInfoAnim_Params {
		
	}; PlayAddCoreInfoAnim_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-CoreInfoWidgetItem.UW-CoreInfoWidgetItem_C.PlayKillMessageAnim
inline void UUW-CoreInfoWidgetItem_C::PlayKillMessageAnim() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-CoreInfoWidgetItem.UW-CoreInfoWidgetItem_C.PlayKillMessageAnim");

	struct PlayKillMessageAnim_Params {
		
	}; PlayKillMessageAnim_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-CoreInfoWidgetItem.UW-CoreInfoWidgetItem_C.StartRemove
inline void UUW-CoreInfoWidgetItem_C::StartRemove() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-CoreInfoWidgetItem.UW-CoreInfoWidgetItem_C.StartRemove");

	struct StartRemove_Params {
		
	}; StartRemove_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-CoreInfoWidgetItem.UW-CoreInfoWidgetItem_C.ExecuteUbergraph_UW-CoreInfoWidgetItem
inline void UUW-CoreInfoWidgetItem_C::ExecuteUbergraph_UW-CoreInfoWidgetItem(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-CoreInfoWidgetItem.UW-CoreInfoWidgetItem_C.ExecuteUbergraph_UW-CoreInfoWidgetItem");

	struct ExecuteUbergraph_UW-CoreInfoWidgetItem_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_UW-CoreInfoWidgetItem_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

