// BlueprintGeneratedClass BP-PlayerHUD.BP-PlayerHUD_C
class ABP-PlayerHUD_C : public ABravoHotelPlayerHUD {

public:

	struct Unknown UberGraphFrame; // 0x860 (8)
	struct Unknown DefaultSceneRoot; // 0x868 (8)
	struct TMap<Unknown, Unknown> TableInfo; // 0x870 (80)
	struct TArray<Unknown> NewVar_1; // 0x8C0 (16)
	struct TArray<Unknown> GuideWidgetStack; // 0x8D0 (16)
	enum class Unknow NewVar_2; // 0x8E0 (1)

	void IsSpectate(char& Return); // Function BP-PlayerHUD.BP-PlayerHUD_C.IsSpectate(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void OnShowMyKillInfoMessage(struct Unknown BroadCastInfo); // Function BP-PlayerHUD.BP-PlayerHUD_C.OnShowMyKillInfoMessage(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void OnShowMyKnockOutInfo(struct FText WeaponName, struct FText Victim, char IsHeadShot, char TeamKill, char SelfKill); // Function BP-PlayerHUD.BP-PlayerHUD_C.OnShowMyKnockOutInfo(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void OnShowMyKillInfo(struct FText WeaponName, struct FText Victim, int32_t KillCount, char IsHeadShot, char TeamKill, char SelfKill, char FinallyKill); // Function BP-PlayerHUD.BP-PlayerHUD_C.OnShowMyKillInfo(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void SelectTopOrBottomWidget(enum class Unknow MessageType, struct Unknown& UserWidget); // Function BP-PlayerHUD.BP-PlayerHUD_C.SelectTopOrBottomWidget(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void SelectTable(enum class Unknow TableType, struct Unknown& DataTable); // Function BP-PlayerHUD.BP-PlayerHUD_C.SelectTable(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void HideHUDMessage(enum class Unknow MessageType); // Function BP-PlayerHUD.BP-PlayerHUD_C.HideHUDMessage(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void ShowHudMessageAll(); // Function BP-PlayerHUD.BP-PlayerHUD_C.ShowHudMessageAll(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void ShowHudMessageAt(int32_t MessageTypeNum); // Function BP-PlayerHUD.BP-PlayerHUD_C.ShowHudMessageAt(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void OnAddKillMessageAll(); // Function BP-PlayerHUD.BP-PlayerHUD_C.OnAddKillMessageAll(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void ShowHUDMessageAtNum(char ShowNext, int32_t TypeNum); // Function BP-PlayerHUD.BP-PlayerHUD_C.ShowHUDMessageAtNum(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void ShowKillMessage(struct TArray<Unknown>& DamageTypeArray); // Function BP-PlayerHUD.BP-PlayerHUD_C.ShowKillMessage(HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void ShowGuideWidget(enum class Unknow GuideType); // Function BP-PlayerHUD.BP-PlayerHUD_C.ShowGuideWidget(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void HideGuideWidget(enum class Unknow GuideType); // Function BP-PlayerHUD.BP-PlayerHUD_C.HideGuideWidget(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void ShowHUDMessage(struct Unknown MessageRow); // Function BP-PlayerHUD.BP-PlayerHUD_C.ShowHUDMessage(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void K2_SetMainAndSpectatorWidgetVisiblility(char bIsVisible, char bMainWidget, char bSpectatorWidget); // Function BP-PlayerHUD.BP-PlayerHUD_C.K2_SetMainAndSpectatorWidgetVisiblility(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void ExecuteUbergraph_BP-PlayerHUD(int32_t EntryPoint); // Function BP-PlayerHUD.BP-PlayerHUD_C.ExecuteUbergraph_BP-PlayerHUD(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
};

// Function BP-PlayerHUD.BP-PlayerHUD_C.IsSpectate
inline void ABP-PlayerHUD_C::IsSpectate(char& Return) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-PlayerHUD.BP-PlayerHUD_C.IsSpectate");

	struct IsSpectate_Params {
		char& Return;
	}; IsSpectate_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Return = Params.Return;

}

// Function BP-PlayerHUD.BP-PlayerHUD_C.OnShowMyKillInfoMessage
inline void ABP-PlayerHUD_C::OnShowMyKillInfoMessage(struct Unknown BroadCastInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-PlayerHUD.BP-PlayerHUD_C.OnShowMyKillInfoMessage");

	struct OnShowMyKillInfoMessage_Params {
		struct Unknown BroadCastInfo;
	}; OnShowMyKillInfoMessage_Params Params;

	Params.BroadCastInfo = BroadCastInfo;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-PlayerHUD.BP-PlayerHUD_C.OnShowMyKnockOutInfo
inline void ABP-PlayerHUD_C::OnShowMyKnockOutInfo(struct FText WeaponName, struct FText Victim, char IsHeadShot, char TeamKill, char SelfKill) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-PlayerHUD.BP-PlayerHUD_C.OnShowMyKnockOutInfo");

	struct OnShowMyKnockOutInfo_Params {
		struct FText WeaponName;
		struct FText Victim;
		char IsHeadShot;
		char TeamKill;
		char SelfKill;
	}; OnShowMyKnockOutInfo_Params Params;

	Params.WeaponName = WeaponName;
	Params.Victim = Victim;
	Params.IsHeadShot = IsHeadShot;
	Params.TeamKill = TeamKill;
	Params.SelfKill = SelfKill;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-PlayerHUD.BP-PlayerHUD_C.OnShowMyKillInfo
inline void ABP-PlayerHUD_C::OnShowMyKillInfo(struct FText WeaponName, struct FText Victim, int32_t KillCount, char IsHeadShot, char TeamKill, char SelfKill, char FinallyKill) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-PlayerHUD.BP-PlayerHUD_C.OnShowMyKillInfo");

	struct OnShowMyKillInfo_Params {
		struct FText WeaponName;
		struct FText Victim;
		int32_t KillCount;
		char IsHeadShot;
		char TeamKill;
		char SelfKill;
		char FinallyKill;
	}; OnShowMyKillInfo_Params Params;

	Params.WeaponName = WeaponName;
	Params.Victim = Victim;
	Params.KillCount = KillCount;
	Params.IsHeadShot = IsHeadShot;
	Params.TeamKill = TeamKill;
	Params.SelfKill = SelfKill;
	Params.FinallyKill = FinallyKill;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-PlayerHUD.BP-PlayerHUD_C.SelectTopOrBottomWidget
inline void ABP-PlayerHUD_C::SelectTopOrBottomWidget(enum class Unknow MessageType, struct Unknown& UserWidget) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-PlayerHUD.BP-PlayerHUD_C.SelectTopOrBottomWidget");

	struct SelectTopOrBottomWidget_Params {
		enum class Unknow MessageType;
		struct Unknown& UserWidget;
	}; SelectTopOrBottomWidget_Params Params;

	Params.MessageType = MessageType;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	UserWidget = Params.UserWidget;

}

// Function BP-PlayerHUD.BP-PlayerHUD_C.SelectTable
inline void ABP-PlayerHUD_C::SelectTable(enum class Unknow TableType, struct Unknown& DataTable) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-PlayerHUD.BP-PlayerHUD_C.SelectTable");

	struct SelectTable_Params {
		enum class Unknow TableType;
		struct Unknown& DataTable;
	}; SelectTable_Params Params;

	Params.TableType = TableType;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	DataTable = Params.DataTable;

}

// Function BP-PlayerHUD.BP-PlayerHUD_C.HideHUDMessage
inline void ABP-PlayerHUD_C::HideHUDMessage(enum class Unknow MessageType) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-PlayerHUD.BP-PlayerHUD_C.HideHUDMessage");

	struct HideHUDMessage_Params {
		enum class Unknow MessageType;
	}; HideHUDMessage_Params Params;

	Params.MessageType = MessageType;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-PlayerHUD.BP-PlayerHUD_C.ShowHudMessageAll
inline void ABP-PlayerHUD_C::ShowHudMessageAll() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-PlayerHUD.BP-PlayerHUD_C.ShowHudMessageAll");

	struct ShowHudMessageAll_Params {
		
	}; ShowHudMessageAll_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-PlayerHUD.BP-PlayerHUD_C.ShowHudMessageAt
inline void ABP-PlayerHUD_C::ShowHudMessageAt(int32_t MessageTypeNum) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-PlayerHUD.BP-PlayerHUD_C.ShowHudMessageAt");

	struct ShowHudMessageAt_Params {
		int32_t MessageTypeNum;
	}; ShowHudMessageAt_Params Params;

	Params.MessageTypeNum = MessageTypeNum;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-PlayerHUD.BP-PlayerHUD_C.OnAddKillMessageAll
inline void ABP-PlayerHUD_C::OnAddKillMessageAll() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-PlayerHUD.BP-PlayerHUD_C.OnAddKillMessageAll");

	struct OnAddKillMessageAll_Params {
		
	}; OnAddKillMessageAll_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-PlayerHUD.BP-PlayerHUD_C.ShowHUDMessageAtNum
inline void ABP-PlayerHUD_C::ShowHUDMessageAtNum(char ShowNext, int32_t TypeNum) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-PlayerHUD.BP-PlayerHUD_C.ShowHUDMessageAtNum");

	struct ShowHUDMessageAtNum_Params {
		char ShowNext;
		int32_t TypeNum;
	}; ShowHUDMessageAtNum_Params Params;

	Params.ShowNext = ShowNext;
	Params.TypeNum = TypeNum;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-PlayerHUD.BP-PlayerHUD_C.ShowKillMessage
inline void ABP-PlayerHUD_C::ShowKillMessage(struct TArray<Unknown>& DamageTypeArray) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-PlayerHUD.BP-PlayerHUD_C.ShowKillMessage");

	struct ShowKillMessage_Params {
		struct TArray<Unknown>& DamageTypeArray;
	}; ShowKillMessage_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	DamageTypeArray = Params.DamageTypeArray;

}

// Function BP-PlayerHUD.BP-PlayerHUD_C.ShowGuideWidget
inline void ABP-PlayerHUD_C::ShowGuideWidget(enum class Unknow GuideType) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-PlayerHUD.BP-PlayerHUD_C.ShowGuideWidget");

	struct ShowGuideWidget_Params {
		enum class Unknow GuideType;
	}; ShowGuideWidget_Params Params;

	Params.GuideType = GuideType;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-PlayerHUD.BP-PlayerHUD_C.HideGuideWidget
inline void ABP-PlayerHUD_C::HideGuideWidget(enum class Unknow GuideType) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-PlayerHUD.BP-PlayerHUD_C.HideGuideWidget");

	struct HideGuideWidget_Params {
		enum class Unknow GuideType;
	}; HideGuideWidget_Params Params;

	Params.GuideType = GuideType;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-PlayerHUD.BP-PlayerHUD_C.ShowHUDMessage
inline void ABP-PlayerHUD_C::ShowHUDMessage(struct Unknown MessageRow) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-PlayerHUD.BP-PlayerHUD_C.ShowHUDMessage");

	struct ShowHUDMessage_Params {
		struct Unknown MessageRow;
	}; ShowHUDMessage_Params Params;

	Params.MessageRow = MessageRow;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-PlayerHUD.BP-PlayerHUD_C.K2_SetMainAndSpectatorWidgetVisiblility
inline void ABP-PlayerHUD_C::K2_SetMainAndSpectatorWidgetVisiblility(char bIsVisible, char bMainWidget, char bSpectatorWidget) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-PlayerHUD.BP-PlayerHUD_C.K2_SetMainAndSpectatorWidgetVisiblility");

	struct K2_SetMainAndSpectatorWidgetVisiblility_Params {
		char bIsVisible;
		char bMainWidget;
		char bSpectatorWidget;
	}; K2_SetMainAndSpectatorWidgetVisiblility_Params Params;

	Params.bIsVisible = bIsVisible;
	Params.bMainWidget = bMainWidget;
	Params.bSpectatorWidget = bSpectatorWidget;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-PlayerHUD.BP-PlayerHUD_C.ExecuteUbergraph_BP-PlayerHUD
inline void ABP-PlayerHUD_C::ExecuteUbergraph_BP-PlayerHUD(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-PlayerHUD.BP-PlayerHUD_C.ExecuteUbergraph_BP-PlayerHUD");

	struct ExecuteUbergraph_BP-PlayerHUD_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_BP-PlayerHUD_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

