// WidgetBlueprintGeneratedClass WBP_SPS_Icon.WBP_SPS_Icon_C
class UWBP_SPS_Icon_C : public UBravoHotelSmartPingIconWidget {

public:

	struct Unknown UberGraphFrame; // 0x440 (8)
	struct Unknown BgIcon; // 0x448 (8)
	struct Unknown Icon; // 0x450 (8)
	struct Unknown Image_175; // 0x458 (8)
	struct Unknown Indicator; // 0x460 (8)
	struct Unknown Overlay_1; // 0x468 (8)
	struct Unknown TeamIndex; // 0x470 (8)
	struct Unknown TextBlock; // 0x478 (8)
	struct Unknown TextBlock_2; // 0x480 (8)
	struct Unknown TextBlock_3; // 0x488 (8)
	struct Unknown TextBlock_4; // 0x490 (8)
	struct Unknown TextBlock_5; // 0x498 (8)
	struct Unknown TextBlock_6; // 0x4A0 (8)
	struct Unknown TextBlock_7; // 0x4A8 (8)
	struct Unknown TextBlock_8; // 0x4B0 (8)
	struct Unknown TextBlock_9; // 0x4B8 (8)
	struct Unknown TextBlock_10; // 0x4C0 (8)
	struct Unknown TextBlock_12; // 0x4C8 (8)
	struct Unknown VerticalBox_301; // 0x4D0 (8)
	struct Unknown PlayerCamera; // 0x4D8 (8)
	struct Unknown ParentComponent; // 0x4E0 (8)
	struct Unknown CanvasSlot; // 0x4E8 (8)
	struct Unknown MaterialPingInfo; // 0x4F0 (48)

	char SetExpertWeaponPing(struct Unknown& PingInfo); // Function WBP_SPS_Icon.WBP_SPS_Icon_C.SetExpertWeaponPing(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	char SetLocalPing(struct Unknown& PingInfo); // Function WBP_SPS_Icon.WBP_SPS_Icon_C.SetLocalPing(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	char SetMaterialPing(struct Unknown& PingInfo); // Function WBP_SPS_Icon.WBP_SPS_Icon_C.SetMaterialPing(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void Construct(); // Function WBP_SPS_Icon.WBP_SPS_Icon_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void Set_IconSize(float Size); // Function WBP_SPS_Icon.WBP_SPS_Icon_C.Set_IconSize(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void SetWidgetComponentsRenderScale(float ScaleRate); // Function WBP_SPS_Icon.WBP_SPS_Icon_C.SetWidgetComponentsRenderScale(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void SetChangeIcon(struct Unknown Texture); // Function WBP_SPS_Icon.WBP_SPS_Icon_C.SetChangeIcon(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void SetIcon(int32_t TeamPlayerIndex, enum class Unknow ItemPingIconType, char IgnoreTeamIndex); // Function WBP_SPS_Icon.WBP_SPS_Icon_C.SetIcon(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void SetRemoveMaterialPingIcon(); // Function WBP_SPS_Icon.WBP_SPS_Icon_C.SetRemoveMaterialPingIcon(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void SetIconAlpha(float NewAlpha); // Function WBP_SPS_Icon.WBP_SPS_Icon_C.SetIconAlpha(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void SetShowDebugLightPole(char IsShow); // Function WBP_SPS_Icon.WBP_SPS_Icon_C.SetShowDebugLightPole(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void SetLightPoleValue(float Height, float RadiusCurve, float Diameter, float AlphaCurve, float ADSFOV); // Function WBP_SPS_Icon.WBP_SPS_Icon_C.SetLightPoleValue(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void SetRemoveExpertWeaponPingIcon(); // Function WBP_SPS_Icon.WBP_SPS_Icon_C.SetRemoveExpertWeaponPingIcon(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void SetScale(float Scale); // Function WBP_SPS_Icon.WBP_SPS_Icon_C.SetScale(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void ExecuteUbergraph_WBP_SPS_Icon(int32_t EntryPoint); // Function WBP_SPS_Icon.WBP_SPS_Icon_C.ExecuteUbergraph_WBP_SPS_Icon(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
};

// Function WBP_SPS_Icon.WBP_SPS_Icon_C.SetExpertWeaponPing
inline char UWBP_SPS_Icon_C::SetExpertWeaponPing(struct Unknown& PingInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SPS_Icon.WBP_SPS_Icon_C.SetExpertWeaponPing");

	struct SetExpertWeaponPing_Params {
		struct Unknown& PingInfo;
		char ReturnValue;

	}; SetExpertWeaponPing_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	PingInfo = Params.PingInfo;


	return params.ReturnValue;
}

// Function WBP_SPS_Icon.WBP_SPS_Icon_C.SetLocalPing
inline char UWBP_SPS_Icon_C::SetLocalPing(struct Unknown& PingInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SPS_Icon.WBP_SPS_Icon_C.SetLocalPing");

	struct SetLocalPing_Params {
		struct Unknown& PingInfo;
		char ReturnValue;

	}; SetLocalPing_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	PingInfo = Params.PingInfo;


	return params.ReturnValue;
}

// Function WBP_SPS_Icon.WBP_SPS_Icon_C.SetMaterialPing
inline char UWBP_SPS_Icon_C::SetMaterialPing(struct Unknown& PingInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SPS_Icon.WBP_SPS_Icon_C.SetMaterialPing");

	struct SetMaterialPing_Params {
		struct Unknown& PingInfo;
		char ReturnValue;

	}; SetMaterialPing_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	PingInfo = Params.PingInfo;


	return params.ReturnValue;
}

// Function WBP_SPS_Icon.WBP_SPS_Icon_C.Construct
inline void UWBP_SPS_Icon_C::Construct() {
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SPS_Icon.WBP_SPS_Icon_C.Construct");

	struct Construct_Params {
		
	}; Construct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function WBP_SPS_Icon.WBP_SPS_Icon_C.Set_IconSize
inline void UWBP_SPS_Icon_C::Set_IconSize(float Size) {
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SPS_Icon.WBP_SPS_Icon_C.Set_IconSize");

	struct Set_IconSize_Params {
		float Size;
	}; Set_IconSize_Params Params;

	Params.Size = Size;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function WBP_SPS_Icon.WBP_SPS_Icon_C.SetWidgetComponentsRenderScale
inline void UWBP_SPS_Icon_C::SetWidgetComponentsRenderScale(float ScaleRate) {
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SPS_Icon.WBP_SPS_Icon_C.SetWidgetComponentsRenderScale");

	struct SetWidgetComponentsRenderScale_Params {
		float ScaleRate;
	}; SetWidgetComponentsRenderScale_Params Params;

	Params.ScaleRate = ScaleRate;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function WBP_SPS_Icon.WBP_SPS_Icon_C.SetChangeIcon
inline void UWBP_SPS_Icon_C::SetChangeIcon(struct Unknown Texture) {
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SPS_Icon.WBP_SPS_Icon_C.SetChangeIcon");

	struct SetChangeIcon_Params {
		struct Unknown Texture;
	}; SetChangeIcon_Params Params;

	Params.Texture = Texture;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function WBP_SPS_Icon.WBP_SPS_Icon_C.SetIcon
inline void UWBP_SPS_Icon_C::SetIcon(int32_t TeamPlayerIndex, enum class Unknow ItemPingIconType, char IgnoreTeamIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SPS_Icon.WBP_SPS_Icon_C.SetIcon");

	struct SetIcon_Params {
		int32_t TeamPlayerIndex;
		enum class Unknow ItemPingIconType;
		char IgnoreTeamIndex;
	}; SetIcon_Params Params;

	Params.TeamPlayerIndex = TeamPlayerIndex;
	Params.ItemPingIconType = ItemPingIconType;
	Params.IgnoreTeamIndex = IgnoreTeamIndex;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function WBP_SPS_Icon.WBP_SPS_Icon_C.SetRemoveMaterialPingIcon
inline void UWBP_SPS_Icon_C::SetRemoveMaterialPingIcon() {
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SPS_Icon.WBP_SPS_Icon_C.SetRemoveMaterialPingIcon");

	struct SetRemoveMaterialPingIcon_Params {
		
	}; SetRemoveMaterialPingIcon_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function WBP_SPS_Icon.WBP_SPS_Icon_C.SetIconAlpha
inline void UWBP_SPS_Icon_C::SetIconAlpha(float NewAlpha) {
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SPS_Icon.WBP_SPS_Icon_C.SetIconAlpha");

	struct SetIconAlpha_Params {
		float NewAlpha;
	}; SetIconAlpha_Params Params;

	Params.NewAlpha = NewAlpha;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function WBP_SPS_Icon.WBP_SPS_Icon_C.SetShowDebugLightPole
inline void UWBP_SPS_Icon_C::SetShowDebugLightPole(char IsShow) {
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SPS_Icon.WBP_SPS_Icon_C.SetShowDebugLightPole");

	struct SetShowDebugLightPole_Params {
		char IsShow;
	}; SetShowDebugLightPole_Params Params;

	Params.IsShow = IsShow;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function WBP_SPS_Icon.WBP_SPS_Icon_C.SetLightPoleValue
inline void UWBP_SPS_Icon_C::SetLightPoleValue(float Height, float RadiusCurve, float Diameter, float AlphaCurve, float ADSFOV) {
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SPS_Icon.WBP_SPS_Icon_C.SetLightPoleValue");

	struct SetLightPoleValue_Params {
		float Height;
		float RadiusCurve;
		float Diameter;
		float AlphaCurve;
		float ADSFOV;
	}; SetLightPoleValue_Params Params;

	Params.Height = Height;
	Params.RadiusCurve = RadiusCurve;
	Params.Diameter = Diameter;
	Params.AlphaCurve = AlphaCurve;
	Params.ADSFOV = ADSFOV;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function WBP_SPS_Icon.WBP_SPS_Icon_C.SetRemoveExpertWeaponPingIcon
inline void UWBP_SPS_Icon_C::SetRemoveExpertWeaponPingIcon() {
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SPS_Icon.WBP_SPS_Icon_C.SetRemoveExpertWeaponPingIcon");

	struct SetRemoveExpertWeaponPingIcon_Params {
		
	}; SetRemoveExpertWeaponPingIcon_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function WBP_SPS_Icon.WBP_SPS_Icon_C.SetScale
inline void UWBP_SPS_Icon_C::SetScale(float Scale) {
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SPS_Icon.WBP_SPS_Icon_C.SetScale");

	struct SetScale_Params {
		float Scale;
	}; SetScale_Params Params;

	Params.Scale = Scale;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function WBP_SPS_Icon.WBP_SPS_Icon_C.ExecuteUbergraph_WBP_SPS_Icon
inline void UWBP_SPS_Icon_C::ExecuteUbergraph_WBP_SPS_Icon(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SPS_Icon.WBP_SPS_Icon_C.ExecuteUbergraph_WBP_SPS_Icon");

	struct ExecuteUbergraph_WBP_SPS_Icon_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_WBP_SPS_Icon_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

