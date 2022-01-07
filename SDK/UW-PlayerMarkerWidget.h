// WidgetBlueprintGeneratedClass UW-PlayerMarkerWidget.UW-PlayerMarkerWidget_C
class UUW-PlayerMarkerWidget_C : public UBravoHotelPlayerMarkerWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown Anim_OnShow; // 0x250 (8)
	struct Unknown Canvas_Move; // 0x258 (8)
	struct Unknown IconImage; // 0x260 (8)
	struct Unknown Overlay_1; // 0x268 (8)
	struct Unknown PlayerMarker; // 0x270 (8)
	struct Unknown SizeBox_IconImage; // 0x278 (8)
	struct Unknown TeamIndex; // 0x280 (8)
	struct Unknown UW-CompassWidget_Item_Resuscitation; // 0x288 (8)
	struct Unknown WidgetSwitcher_Icon; // 0x290 (8)
	char IsShowingAnimReserved : 0; // 0x298 (1)
	struct FMulticastInlineDelegate OnMarkerClicked; // 0x2A0 (16)
	struct Unknown CurrentMarker; // 0x2B0 (8)
	struct TMap<Unknown, Unknown> Map_PingTypeTexture; // 0x2B8 (80)
	struct TMap<Unknown, Unknown> Map_PingItemTypeTexture; // 0x308 (80)
	struct Unknown SupplyBoxNotOpen; // 0x358 (8)
	struct Unknown SupplyBoxOpened; // 0x360 (8)
	struct Unknown PlayerState; // 0x368 (8)
	char IsOnMap : 0; // 0x370 (1)
	char Selected : 0; // 0x371 (1)
	char MyPing : 0; // 0x372 (1)
	struct FMulticastInlineDelegate OnMouseUp; // 0x378 (16)

	struct Unknown OnMouseButtonDown(struct Unknown MyGeometry, struct Unknown& MouseEvent); // Function UW-PlayerMarkerWidget.UW-PlayerMarkerWidget_C.OnMouseButtonDown(BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void GetImageFromPingType(enum class Unknow PingType, struct Unknown& Image); // Function UW-PlayerMarkerWidget.UW-PlayerMarkerWidget_C.GetImageFromPingType(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void SetGuidePingInfoForSmartpingMenu(enum class Unknow PingType); // Function UW-PlayerMarkerWidget.UW-PlayerMarkerWidget_C.SetGuidePingInfoForSmartpingMenu(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void SetPingType(struct Unknown PingInfo, char IsOpend); // Function UW-PlayerMarkerWidget.UW-PlayerMarkerWidget_C.SetPingType(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void OnResetMarkerInfo(); // Function UW-PlayerMarkerWidget.UW-PlayerMarkerWidget_C.OnResetMarkerInfo(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void SetPlayerColor(struct Unknown PlayerState); // Function UW-PlayerMarkerWidget.UW-PlayerMarkerWidget_C.SetPlayerColor(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void ReserveShowingAnimation(); // Function UW-PlayerMarkerWidget.UW-PlayerMarkerWidget_C.ReserveShowingAnimation(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	struct Unknown OnMouseButtonUp(struct Unknown MyGeometry, struct Unknown& MouseEvent); // Function UW-PlayerMarkerWidget.UW-PlayerMarkerWidget_C.OnMouseButtonUp(BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void Initialize(struct Unknown PlayerState); // Function UW-PlayerMarkerWidget.UW-PlayerMarkerWidget_C.Initialize(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void SetInfo(struct Unknown PingInfo, char UsingAnimation, char IsOpened); // Function UW-PlayerMarkerWidget.UW-PlayerMarkerWidget_C.SetInfo(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void ResetMarkerInfo(char IsUpdate); // Function UW-PlayerMarkerWidget.UW-PlayerMarkerWidget_C.ResetMarkerInfo(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void SetMaterialInfo(char UsingAnimation, struct Unknown MaterialPingInfo); // Function UW-PlayerMarkerWidget.UW-PlayerMarkerWidget_C.SetMaterialInfo(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void SetResuscitationInfo(char UsingAnimation, struct Unknown PlayerState); // Function UW-PlayerMarkerWidget.UW-PlayerMarkerWidget_C.SetResuscitationInfo(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void SetLocalPingInfo(char UsingAnimation, struct Unknown LocalPingInfo); // Function UW-PlayerMarkerWidget.UW-PlayerMarkerWidget_C.SetLocalPingInfo(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void SetExpertWeaponInfo(char UsingAnimation, struct Unknown ExpertWeaponPingInfo); // Function UW-PlayerMarkerWidget.UW-PlayerMarkerWidget_C.SetExpertWeaponInfo(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void OnMouseEnter(struct Unknown MyGeometry, struct Unknown& MouseEvent); // Function UW-PlayerMarkerWidget.UW-PlayerMarkerWidget_C.OnMouseEnter(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void OnMouseLeave(struct Unknown& MouseEvent); // Function UW-PlayerMarkerWidget.UW-PlayerMarkerWidget_C.OnMouseLeave(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void ExecuteUbergraph_UW-PlayerMarkerWidget(int32_t EntryPoint); // Function UW-PlayerMarkerWidget.UW-PlayerMarkerWidget_C.ExecuteUbergraph_UW-PlayerMarkerWidget(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void OnMouseUp__DelegateSignature(struct Unknown Mouse); // Function UW-PlayerMarkerWidget.UW-PlayerMarkerWidget_C.OnMouseUp__DelegateSignature(Public|Delegate|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void OnMarkerClicked__DelegateSignature(struct Unknown Button, char mapObjectID); // Function UW-PlayerMarkerWidget.UW-PlayerMarkerWidget_C.OnMarkerClicked__DelegateSignature(Public|Delegate|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
};

// Function UW-PlayerMarkerWidget.UW-PlayerMarkerWidget_C.OnMouseButtonDown
inline struct Unknown UUW-PlayerMarkerWidget_C::OnMouseButtonDown(struct Unknown MyGeometry, struct Unknown& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PlayerMarkerWidget.UW-PlayerMarkerWidget_C.OnMouseButtonDown");

	struct OnMouseButtonDown_Params {
		struct Unknown MyGeometry;
		struct Unknown& MouseEvent;
		struct Unknown ReturnValue;

	}; OnMouseButtonDown_Params Params;

	Params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	MouseEvent = Params.MouseEvent;


	return params.ReturnValue;
}

// Function UW-PlayerMarkerWidget.UW-PlayerMarkerWidget_C.GetImageFromPingType
inline void UUW-PlayerMarkerWidget_C::GetImageFromPingType(enum class Unknow PingType, struct Unknown& Image) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PlayerMarkerWidget.UW-PlayerMarkerWidget_C.GetImageFromPingType");

	struct GetImageFromPingType_Params {
		enum class Unknow PingType;
		struct Unknown& Image;
	}; GetImageFromPingType_Params Params;

	Params.PingType = PingType;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Image = Params.Image;

}

// Function UW-PlayerMarkerWidget.UW-PlayerMarkerWidget_C.SetGuidePingInfoForSmartpingMenu
inline void UUW-PlayerMarkerWidget_C::SetGuidePingInfoForSmartpingMenu(enum class Unknow PingType) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PlayerMarkerWidget.UW-PlayerMarkerWidget_C.SetGuidePingInfoForSmartpingMenu");

	struct SetGuidePingInfoForSmartpingMenu_Params {
		enum class Unknow PingType;
	}; SetGuidePingInfoForSmartpingMenu_Params Params;

	Params.PingType = PingType;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PlayerMarkerWidget.UW-PlayerMarkerWidget_C.SetPingType
inline void UUW-PlayerMarkerWidget_C::SetPingType(struct Unknown PingInfo, char IsOpend) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PlayerMarkerWidget.UW-PlayerMarkerWidget_C.SetPingType");

	struct SetPingType_Params {
		struct Unknown PingInfo;
		char IsOpend;
	}; SetPingType_Params Params;

	Params.PingInfo = PingInfo;
	Params.IsOpend = IsOpend;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PlayerMarkerWidget.UW-PlayerMarkerWidget_C.OnResetMarkerInfo
inline void UUW-PlayerMarkerWidget_C::OnResetMarkerInfo() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PlayerMarkerWidget.UW-PlayerMarkerWidget_C.OnResetMarkerInfo");

	struct OnResetMarkerInfo_Params {
		
	}; OnResetMarkerInfo_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PlayerMarkerWidget.UW-PlayerMarkerWidget_C.SetPlayerColor
inline void UUW-PlayerMarkerWidget_C::SetPlayerColor(struct Unknown PlayerState) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PlayerMarkerWidget.UW-PlayerMarkerWidget_C.SetPlayerColor");

	struct SetPlayerColor_Params {
		struct Unknown PlayerState;
	}; SetPlayerColor_Params Params;

	Params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PlayerMarkerWidget.UW-PlayerMarkerWidget_C.ReserveShowingAnimation
inline void UUW-PlayerMarkerWidget_C::ReserveShowingAnimation() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PlayerMarkerWidget.UW-PlayerMarkerWidget_C.ReserveShowingAnimation");

	struct ReserveShowingAnimation_Params {
		
	}; ReserveShowingAnimation_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PlayerMarkerWidget.UW-PlayerMarkerWidget_C.OnMouseButtonUp
inline struct Unknown UUW-PlayerMarkerWidget_C::OnMouseButtonUp(struct Unknown MyGeometry, struct Unknown& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PlayerMarkerWidget.UW-PlayerMarkerWidget_C.OnMouseButtonUp");

	struct OnMouseButtonUp_Params {
		struct Unknown MyGeometry;
		struct Unknown& MouseEvent;
		struct Unknown ReturnValue;

	}; OnMouseButtonUp_Params Params;

	Params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	MouseEvent = Params.MouseEvent;


	return params.ReturnValue;
}

// Function UW-PlayerMarkerWidget.UW-PlayerMarkerWidget_C.Initialize
inline void UUW-PlayerMarkerWidget_C::Initialize(struct Unknown PlayerState) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PlayerMarkerWidget.UW-PlayerMarkerWidget_C.Initialize");

	struct Initialize_Params {
		struct Unknown PlayerState;
	}; Initialize_Params Params;

	Params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PlayerMarkerWidget.UW-PlayerMarkerWidget_C.SetInfo
inline void UUW-PlayerMarkerWidget_C::SetInfo(struct Unknown PingInfo, char UsingAnimation, char IsOpened) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PlayerMarkerWidget.UW-PlayerMarkerWidget_C.SetInfo");

	struct SetInfo_Params {
		struct Unknown PingInfo;
		char UsingAnimation;
		char IsOpened;
	}; SetInfo_Params Params;

	Params.PingInfo = PingInfo;
	Params.UsingAnimation = UsingAnimation;
	Params.IsOpened = IsOpened;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PlayerMarkerWidget.UW-PlayerMarkerWidget_C.ResetMarkerInfo
inline void UUW-PlayerMarkerWidget_C::ResetMarkerInfo(char IsUpdate) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PlayerMarkerWidget.UW-PlayerMarkerWidget_C.ResetMarkerInfo");

	struct ResetMarkerInfo_Params {
		char IsUpdate;
	}; ResetMarkerInfo_Params Params;

	Params.IsUpdate = IsUpdate;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PlayerMarkerWidget.UW-PlayerMarkerWidget_C.SetMaterialInfo
inline void UUW-PlayerMarkerWidget_C::SetMaterialInfo(char UsingAnimation, struct Unknown MaterialPingInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PlayerMarkerWidget.UW-PlayerMarkerWidget_C.SetMaterialInfo");

	struct SetMaterialInfo_Params {
		char UsingAnimation;
		struct Unknown MaterialPingInfo;
	}; SetMaterialInfo_Params Params;

	Params.UsingAnimation = UsingAnimation;
	Params.MaterialPingInfo = MaterialPingInfo;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PlayerMarkerWidget.UW-PlayerMarkerWidget_C.SetResuscitationInfo
inline void UUW-PlayerMarkerWidget_C::SetResuscitationInfo(char UsingAnimation, struct Unknown PlayerState) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PlayerMarkerWidget.UW-PlayerMarkerWidget_C.SetResuscitationInfo");

	struct SetResuscitationInfo_Params {
		char UsingAnimation;
		struct Unknown PlayerState;
	}; SetResuscitationInfo_Params Params;

	Params.UsingAnimation = UsingAnimation;
	Params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PlayerMarkerWidget.UW-PlayerMarkerWidget_C.SetLocalPingInfo
inline void UUW-PlayerMarkerWidget_C::SetLocalPingInfo(char UsingAnimation, struct Unknown LocalPingInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PlayerMarkerWidget.UW-PlayerMarkerWidget_C.SetLocalPingInfo");

	struct SetLocalPingInfo_Params {
		char UsingAnimation;
		struct Unknown LocalPingInfo;
	}; SetLocalPingInfo_Params Params;

	Params.UsingAnimation = UsingAnimation;
	Params.LocalPingInfo = LocalPingInfo;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PlayerMarkerWidget.UW-PlayerMarkerWidget_C.SetExpertWeaponInfo
inline void UUW-PlayerMarkerWidget_C::SetExpertWeaponInfo(char UsingAnimation, struct Unknown ExpertWeaponPingInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PlayerMarkerWidget.UW-PlayerMarkerWidget_C.SetExpertWeaponInfo");

	struct SetExpertWeaponInfo_Params {
		char UsingAnimation;
		struct Unknown ExpertWeaponPingInfo;
	}; SetExpertWeaponInfo_Params Params;

	Params.UsingAnimation = UsingAnimation;
	Params.ExpertWeaponPingInfo = ExpertWeaponPingInfo;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PlayerMarkerWidget.UW-PlayerMarkerWidget_C.OnMouseEnter
inline void UUW-PlayerMarkerWidget_C::OnMouseEnter(struct Unknown MyGeometry, struct Unknown& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PlayerMarkerWidget.UW-PlayerMarkerWidget_C.OnMouseEnter");

	struct OnMouseEnter_Params {
		struct Unknown MyGeometry;
		struct Unknown& MouseEvent;
	}; OnMouseEnter_Params Params;

	Params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	MouseEvent = Params.MouseEvent;

}

// Function UW-PlayerMarkerWidget.UW-PlayerMarkerWidget_C.OnMouseLeave
inline void UUW-PlayerMarkerWidget_C::OnMouseLeave(struct Unknown& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PlayerMarkerWidget.UW-PlayerMarkerWidget_C.OnMouseLeave");

	struct OnMouseLeave_Params {
		struct Unknown& MouseEvent;
	}; OnMouseLeave_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	MouseEvent = Params.MouseEvent;

}

// Function UW-PlayerMarkerWidget.UW-PlayerMarkerWidget_C.ExecuteUbergraph_UW-PlayerMarkerWidget
inline void UUW-PlayerMarkerWidget_C::ExecuteUbergraph_UW-PlayerMarkerWidget(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PlayerMarkerWidget.UW-PlayerMarkerWidget_C.ExecuteUbergraph_UW-PlayerMarkerWidget");

	struct ExecuteUbergraph_UW-PlayerMarkerWidget_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_UW-PlayerMarkerWidget_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PlayerMarkerWidget.UW-PlayerMarkerWidget_C.OnMouseUp__DelegateSignature
inline void UUW-PlayerMarkerWidget_C::OnMouseUp__DelegateSignature(struct Unknown Mouse) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PlayerMarkerWidget.UW-PlayerMarkerWidget_C.OnMouseUp__DelegateSignature");

	struct OnMouseUp__DelegateSignature_Params {
		struct Unknown Mouse;
	}; OnMouseUp__DelegateSignature_Params Params;

	Params.Mouse = Mouse;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PlayerMarkerWidget.UW-PlayerMarkerWidget_C.OnMarkerClicked__DelegateSignature
inline void UUW-PlayerMarkerWidget_C::OnMarkerClicked__DelegateSignature(struct Unknown Button, char mapObjectID) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PlayerMarkerWidget.UW-PlayerMarkerWidget_C.OnMarkerClicked__DelegateSignature");

	struct OnMarkerClicked__DelegateSignature_Params {
		struct Unknown Button;
		char mapObjectID;
	}; OnMarkerClicked__DelegateSignature_Params Params;

	Params.Button = Button;
	Params.mapObjectID = mapObjectID;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

