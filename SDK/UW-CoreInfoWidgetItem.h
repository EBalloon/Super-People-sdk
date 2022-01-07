// WidgetBlueprintGeneratedClass UW-CoreInfoWidgetItem.UW-CoreInfoWidgetItem_C
class UUW-CoreInfoWidgetItem_C : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown Anim_KillMessage; // 0x250 (8)
	struct Unknown Anim_RemoveCoreInfo; // 0x258 (8)
	struct Unknown Anim_AddCoreInfo; // 0x260 (8)
	struct Unknown HB_Smartping; // 0x268 (8)
	struct Unknown Img_Back; // 0x270 (8)
	struct Unknown Img_Back_2; // 0x278 (8)
	struct Unknown Img_MarkerIcon; // 0x280 (8)
	struct Unknown IMG_PerkDeckIcon; // 0x288 (8)
	struct Unknown NewRichText; // 0x290 (8)
	struct Unknown T_Damage; // 0x298 (8)
	struct Unknown T_DamageCauser; // 0x2A0 (8)
	struct Unknown T_DamageResult; // 0x2A8 (8)
	struct Unknown T_HeadShot; // 0x2B0 (8)
	struct Unknown T_HitCount; // 0x2B8 (8)
	struct Unknown T_HitType; // 0x2C0 (8)
	struct Unknown T_Message; // 0x2C8 (8)
	struct Unknown T_PingType; // 0x2D0 (8)
	struct Unknown T_PlayerName; // 0x2D8 (8)
	struct Unknown T_TargetClass; // 0x2E0 (8)
	struct Unknown T_TargetLevel; // 0x2E8 (8)
	struct Unknown T_TargetName; // 0x2F0 (8)
	struct Unknown T_TargetWeapon; // 0x2F8 (8)
	struct Unknown T_WeaponLevel; // 0x300 (8)
	struct Unknown WidgetSwitcher_194; // 0x308 (8)
	struct Unknown WidgetSwitcher_Main; // 0x310 (8)
	struct Unknown ParentWidgetRef; // 0x318 (8)
	struct Unknown Timer_StartRemove; // 0x320 (8)
	struct Unknown DamageLogInfo; // 0x328 (2888)
	float LogTime; // 0xE70 (4)
	float LogStackValidTime; // 0xE74 (4)

	void DamageResultText(struct FText& Result); // Function UW-CoreInfoWidgetItem.UW-CoreInfoWidgetItem_C.DamageResultText(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void DamageText(struct FText& Result); // Function UW-CoreInfoWidgetItem.UW-CoreInfoWidgetItem_C.DamageText(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void WeaponText(struct FText& Result); // Function UW-CoreInfoWidgetItem.UW-CoreInfoWidgetItem_C.WeaponText(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void TargetText(struct FText& Result); // Function UW-CoreInfoWidgetItem.UW-CoreInfoWidgetItem_C.TargetText(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void StackDamageLog(struct Unknown& DamageLogInfo); // Function UW-CoreInfoWidgetItem.UW-CoreInfoWidgetItem_C.StackDamageLog(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void CheckCanStackDamage Log(struct Unknown& DamageLogInfo, char& CanStack); // Function UW-CoreInfoWidgetItem.UW-CoreInfoWidgetItem_C.CheckCanStackDamage Log(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void SetHitDamageLogInfo(struct Unknown& DamageLogInfo); // Function UW-CoreInfoWidgetItem.UW-CoreInfoWidgetItem_C.SetHitDamageLogInfo(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void SetCoreInfoKillMessage(struct FText Message); // Function UW-CoreInfoWidgetItem.UW-CoreInfoWidgetItem_C.SetCoreInfoKillMessage(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void SetCoreInfoMessageType(struct FString Type); // Function UW-CoreInfoWidgetItem.UW-CoreInfoWidgetItem_C.SetCoreInfoMessageType(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void SetResuscitationPingInfo(); // Function UW-CoreInfoWidgetItem.UW-CoreInfoWidgetItem_C.SetResuscitationPingInfo(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void SetCoreInfoResuscitation(struct Unknown PlayerState); // Function UW-CoreInfoWidgetItem.UW-CoreInfoWidgetItem_C.SetCoreInfoResuscitation(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void SetRequestMessageInfo(struct Unknown PlayerState, struct FText Message); // Function UW-CoreInfoWidgetItem.UW-CoreInfoWidgetItem_C.SetRequestMessageInfo(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void SetRequestMessage(struct Unknown Player State, struct FText Message); // Function UW-CoreInfoWidgetItem.UW-CoreInfoWidgetItem_C.SetRequestMessage(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void SetRoutePingInfo(); // Function UW-CoreInfoWidgetItem.UW-CoreInfoWidgetItem_C.SetRoutePingInfo(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void SetCoreInfoRoutePing(struct Unknown PlayerState); // Function UW-CoreInfoWidgetItem.UW-CoreInfoWidgetItem_C.SetCoreInfoRoutePing(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void SetCoreInfoMessage(struct FText Message, struct FString Type); // Function UW-CoreInfoWidgetItem.UW-CoreInfoWidgetItem_C.SetCoreInfoMessage(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void SetRemoveTimer(float RemainTime); // Function UW-CoreInfoWidgetItem.UW-CoreInfoWidgetItem_C.SetRemoveTimer(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void SetPlayerInfo(struct Unknown PlayerState); // Function UW-CoreInfoWidgetItem.UW-CoreInfoWidgetItem_C.SetPlayerInfo(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void SetPingType(struct Unknown PingInfo); // Function UW-CoreInfoWidgetItem.UW-CoreInfoWidgetItem_C.SetPingType(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void SetCoreInfoSmartping(struct Unknown PlayerState); // Function UW-CoreInfoWidgetItem.UW-CoreInfoWidgetItem_C.SetCoreInfoSmartping(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void OnAnimationFinished(struct Unknown Animation); // Function UW-CoreInfoWidgetItem.UW-CoreInfoWidgetItem_C.OnAnimationFinished(BlueprintCosmetic|Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void PlayAddCoreInfoAnim(); // Function UW-CoreInfoWidgetItem.UW-CoreInfoWidgetItem_C.PlayAddCoreInfoAnim(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void PlayKillMessageAnim(); // Function UW-CoreInfoWidgetItem.UW-CoreInfoWidgetItem_C.PlayKillMessageAnim(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void StartRemove(); // Function UW-CoreInfoWidgetItem.UW-CoreInfoWidgetItem_C.StartRemove(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void ExecuteUbergraph_UW-CoreInfoWidgetItem(int32_t EntryPoint); // Function UW-CoreInfoWidgetItem.UW-CoreInfoWidgetItem_C.ExecuteUbergraph_UW-CoreInfoWidgetItem(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
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
inline void UUW-CoreInfoWidgetItem_C::StackDamageLog(struct Unknown& DamageLogInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-CoreInfoWidgetItem.UW-CoreInfoWidgetItem_C.StackDamageLog");

	struct StackDamageLog_Params {
		struct Unknown& DamageLogInfo;
	}; StackDamageLog_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	DamageLogInfo = Params.DamageLogInfo;

}

// Function UW-CoreInfoWidgetItem.UW-CoreInfoWidgetItem_C.CheckCanStackDamage Log
inline void UUW-CoreInfoWidgetItem_C::CheckCanStackDamage Log(struct Unknown& DamageLogInfo, char& CanStack) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-CoreInfoWidgetItem.UW-CoreInfoWidgetItem_C.CheckCanStackDamage Log");

	struct CheckCanStackDamage Log_Params {
		struct Unknown& DamageLogInfo;
		char& CanStack;
	}; CheckCanStackDamage Log_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	DamageLogInfo = Params.DamageLogInfo;
	CanStack = Params.CanStack;

}

// Function UW-CoreInfoWidgetItem.UW-CoreInfoWidgetItem_C.SetHitDamageLogInfo
inline void UUW-CoreInfoWidgetItem_C::SetHitDamageLogInfo(struct Unknown& DamageLogInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-CoreInfoWidgetItem.UW-CoreInfoWidgetItem_C.SetHitDamageLogInfo");

	struct SetHitDamageLogInfo_Params {
		struct Unknown& DamageLogInfo;
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
inline void UUW-CoreInfoWidgetItem_C::SetCoreInfoResuscitation(struct Unknown PlayerState) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-CoreInfoWidgetItem.UW-CoreInfoWidgetItem_C.SetCoreInfoResuscitation");

	struct SetCoreInfoResuscitation_Params {
		struct Unknown PlayerState;
	}; SetCoreInfoResuscitation_Params Params;

	Params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-CoreInfoWidgetItem.UW-CoreInfoWidgetItem_C.SetRequestMessageInfo
inline void UUW-CoreInfoWidgetItem_C::SetRequestMessageInfo(struct Unknown PlayerState, struct FText Message) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-CoreInfoWidgetItem.UW-CoreInfoWidgetItem_C.SetRequestMessageInfo");

	struct SetRequestMessageInfo_Params {
		struct Unknown PlayerState;
		struct FText Message;
	}; SetRequestMessageInfo_Params Params;

	Params.PlayerState = PlayerState;
	Params.Message = Message;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-CoreInfoWidgetItem.UW-CoreInfoWidgetItem_C.SetRequestMessage
inline void UUW-CoreInfoWidgetItem_C::SetRequestMessage(struct Unknown Player State, struct FText Message) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-CoreInfoWidgetItem.UW-CoreInfoWidgetItem_C.SetRequestMessage");

	struct SetRequestMessage_Params {
		struct Unknown Player State;
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
inline void UUW-CoreInfoWidgetItem_C::SetCoreInfoRoutePing(struct Unknown PlayerState) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-CoreInfoWidgetItem.UW-CoreInfoWidgetItem_C.SetCoreInfoRoutePing");

	struct SetCoreInfoRoutePing_Params {
		struct Unknown PlayerState;
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
inline void UUW-CoreInfoWidgetItem_C::SetPlayerInfo(struct Unknown PlayerState) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-CoreInfoWidgetItem.UW-CoreInfoWidgetItem_C.SetPlayerInfo");

	struct SetPlayerInfo_Params {
		struct Unknown PlayerState;
	}; SetPlayerInfo_Params Params;

	Params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-CoreInfoWidgetItem.UW-CoreInfoWidgetItem_C.SetPingType
inline void UUW-CoreInfoWidgetItem_C::SetPingType(struct Unknown PingInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-CoreInfoWidgetItem.UW-CoreInfoWidgetItem_C.SetPingType");

	struct SetPingType_Params {
		struct Unknown PingInfo;
	}; SetPingType_Params Params;

	Params.PingInfo = PingInfo;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-CoreInfoWidgetItem.UW-CoreInfoWidgetItem_C.SetCoreInfoSmartping
inline void UUW-CoreInfoWidgetItem_C::SetCoreInfoSmartping(struct Unknown PlayerState) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-CoreInfoWidgetItem.UW-CoreInfoWidgetItem_C.SetCoreInfoSmartping");

	struct SetCoreInfoSmartping_Params {
		struct Unknown PlayerState;
	}; SetCoreInfoSmartping_Params Params;

	Params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-CoreInfoWidgetItem.UW-CoreInfoWidgetItem_C.OnAnimationFinished
inline void UUW-CoreInfoWidgetItem_C::OnAnimationFinished(struct Unknown Animation) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-CoreInfoWidgetItem.UW-CoreInfoWidgetItem_C.OnAnimationFinished");

	struct OnAnimationFinished_Params {
		struct Unknown Animation;
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

