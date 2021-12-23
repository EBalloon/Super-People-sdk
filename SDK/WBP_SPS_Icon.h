// WidgetBlueprintGeneratedClass WBP_SPS_Icon.WBP_SPS_Icon_C
class UWBP_SPS_Icon_C : UBravoHotelSmartPingIconWidget {
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

	char SetExpertWeaponPing(struct Unknown& PingInfo); // Function WBP_SPS_Icon.WBP_SPS_Icon_C.SetExpertWeaponPing(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	char SetLocalPing(struct Unknown& PingInfo); // Function WBP_SPS_Icon.WBP_SPS_Icon_C.SetLocalPing(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	char SetMaterialPing(struct Unknown& PingInfo); // Function WBP_SPS_Icon.WBP_SPS_Icon_C.SetMaterialPing(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Construct(); // Function WBP_SPS_Icon.WBP_SPS_Icon_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Set_IconSize(float Size); // Function WBP_SPS_Icon.WBP_SPS_Icon_C.Set_IconSize(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void SetWidgetComponentsRenderScale(float ScaleRate); // Function WBP_SPS_Icon.WBP_SPS_Icon_C.SetWidgetComponentsRenderScale(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void SetChangeIcon(struct Unknown Texture); // Function WBP_SPS_Icon.WBP_SPS_Icon_C.SetChangeIcon(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void SetIcon(int32_t TeamPlayerIndex, enum class Unknow ItemPingIconType, char IgnoreTeamIndex); // Function WBP_SPS_Icon.WBP_SPS_Icon_C.SetIcon(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void SetRemoveMaterialPingIcon(); // Function WBP_SPS_Icon.WBP_SPS_Icon_C.SetRemoveMaterialPingIcon(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void SetIconAlpha(float NewAlpha); // Function WBP_SPS_Icon.WBP_SPS_Icon_C.SetIconAlpha(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void SetShowDebugLightPole(char IsShow); // Function WBP_SPS_Icon.WBP_SPS_Icon_C.SetShowDebugLightPole(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void SetLightPoleValue(float Height, float RadiusCurve, float Diameter, float AlphaCurve, float ADSFOV); // Function WBP_SPS_Icon.WBP_SPS_Icon_C.SetLightPoleValue(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void SetRemoveExpertWeaponPingIcon(); // Function WBP_SPS_Icon.WBP_SPS_Icon_C.SetRemoveExpertWeaponPingIcon(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ExecuteUbergraph_WBP_SPS_Icon(int32_t EntryPoint); // Function WBP_SPS_Icon.WBP_SPS_Icon_C.ExecuteUbergraph_WBP_SPS_Icon(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
};

