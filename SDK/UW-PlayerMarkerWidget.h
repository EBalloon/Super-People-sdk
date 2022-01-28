// WidgetBlueprintGeneratedClass UW-PlayerMarkerWidget.UW-PlayerMarkerWidget_C
class UUW-PlayerMarkerWidget_C : public UBravoHotelPlayerMarkerWidget {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248 (8)
	struct UWidgetAnimation Anim_OnShow; // 0x250 (8)
	struct UCanvasPanel Canvas_Move; // 0x258 (8)
	struct UIconImage_C IconImage; // 0x260 (8)
	struct UOverlay Overlay_1; // 0x268 (8)
	struct UImage PlayerMarker; // 0x270 (8)
	struct USizeBox SizeBox_IconImage; // 0x278 (8)
	struct UTextBlock TeamIndex; // 0x280 (8)
	struct UUW-CompassWidget_Item_Resuscitation_C UW-CompassWidget_Item_Resuscitation; // 0x288 (8)
	struct UWidgetSwitcher WidgetSwitcher_Icon; // 0x290 (8)
	char IsShowingAnimReserved : 0; // 0x298 (1)
	struct FMulticastInlineDelegate OnMarkerClicked; // 0x2A0 (16)
	struct UImage CurrentMarker; // 0x2B0 (8)
	struct TMap<enum class EPingType, struct Object> Map_PingTypeTexture; // 0x2B8 (80)
	struct TMap<enum class EItemPingIconType, struct Object> Map_PingItemTypeTexture; // 0x308 (80)
	struct Object SupplyBoxNotOpen; // 0x358 (8)
	struct Object SupplyBoxOpened; // 0x360 (8)
	struct ABravoHotelPlayerState PlayerState; // 0x368 (8)
	char IsOnMap : 0; // 0x370 (1)
	char Selected : 0; // 0x371 (1)
	char MyPing : 0; // 0x372 (1)
	struct FMulticastInlineDelegate OnMouseUp; // 0x378 (16)

	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UW-PlayerMarkerWidget.UW-PlayerMarkerWidget_C.OnMouseButtonDown(BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void GetImageFromPingType(enum class EPingType PingType, struct UPaperSprite& Image); // Function UW-PlayerMarkerWidget.UW-PlayerMarkerWidget_C.GetImageFromPingType(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void SetGuidePingInfoForSmartpingMenu(enum class EPingType PingType); // Function UW-PlayerMarkerWidget.UW-PlayerMarkerWidget_C.SetGuidePingInfoForSmartpingMenu(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void SetPingType(struct FBravoHotelPingInfo PingInfo, char IsOpend); // Function UW-PlayerMarkerWidget.UW-PlayerMarkerWidget_C.SetPingType(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void OnResetMarkerInfo(); // Function UW-PlayerMarkerWidget.UW-PlayerMarkerWidget_C.OnResetMarkerInfo(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void SetPlayerColor(struct ABravoHotelPlayerState PlayerState); // Function UW-PlayerMarkerWidget.UW-PlayerMarkerWidget_C.SetPlayerColor(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void ReserveShowingAnimation(); // Function UW-PlayerMarkerWidget.UW-PlayerMarkerWidget_C.ReserveShowingAnimation(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	struct FEventReply OnMouseButtonUp(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UW-PlayerMarkerWidget.UW-PlayerMarkerWidget_C.OnMouseButtonUp(BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void Initialize(struct ABravoHotelPlayerState PlayerState); // Function UW-PlayerMarkerWidget.UW-PlayerMarkerWidget_C.Initialize(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void SetInfo(struct FBravoHotelPingInfo PingInfo, char UsingAnimation, char IsOpened); // Function UW-PlayerMarkerWidget.UW-PlayerMarkerWidget_C.SetInfo(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void ResetMarkerInfo(char IsUpdate); // Function UW-PlayerMarkerWidget.UW-PlayerMarkerWidget_C.ResetMarkerInfo(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void SetMaterialInfo(char UsingAnimation, struct FMaterialItemPingInfo MaterialPingInfo); // Function UW-PlayerMarkerWidget.UW-PlayerMarkerWidget_C.SetMaterialInfo(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void SetResuscitationInfo(char UsingAnimation, struct ABravoHotelPlayerState PlayerState); // Function UW-PlayerMarkerWidget.UW-PlayerMarkerWidget_C.SetResuscitationInfo(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void SetLocalPingInfo(char UsingAnimation, struct FBravoHotelLocalPingInfo LocalPingInfo); // Function UW-PlayerMarkerWidget.UW-PlayerMarkerWidget_C.SetLocalPingInfo(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void SetExpertWeaponInfo(char UsingAnimation, struct FExpertWeaponPingInfo ExpertWeaponPingInfo); // Function UW-PlayerMarkerWidget.UW-PlayerMarkerWidget_C.SetExpertWeaponInfo(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UW-PlayerMarkerWidget.UW-PlayerMarkerWidget_C.OnMouseEnter(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function UW-PlayerMarkerWidget.UW-PlayerMarkerWidget_C.OnMouseLeave(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void ExecuteUbergraph_UW-PlayerMarkerWidget(int32_t EntryPoint); // Function UW-PlayerMarkerWidget.UW-PlayerMarkerWidget_C.ExecuteUbergraph_UW-PlayerMarkerWidget(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void OnMouseUp__DelegateSignature(struct FPointerEvent Mouse); // Function UW-PlayerMarkerWidget.UW-PlayerMarkerWidget_C.OnMouseUp__DelegateSignature(Public|Delegate|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void OnMarkerClicked__DelegateSignature(struct FKey Button, char mapObjectID); // Function UW-PlayerMarkerWidget.UW-PlayerMarkerWidget_C.OnMarkerClicked__DelegateSignature(Public|Delegate|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
};

// Function UW-PlayerMarkerWidget.UW-PlayerMarkerWidget_C.OnMouseButtonDown
inline struct FEventReply UUW-PlayerMarkerWidget_C::OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PlayerMarkerWidget.UW-PlayerMarkerWidget_C.OnMouseButtonDown");

	struct OnMouseButtonDown_Params {
		struct FGeometry MyGeometry;
		struct FPointerEvent& MouseEvent;
		struct FEventReply ReturnValue;

	}; OnMouseButtonDown_Params Params;

	Params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	MouseEvent = Params.MouseEvent;


	return params.ReturnValue;
}

// Function UW-PlayerMarkerWidget.UW-PlayerMarkerWidget_C.GetImageFromPingType
inline void UUW-PlayerMarkerWidget_C::GetImageFromPingType(enum class EPingType PingType, struct UPaperSprite& Image) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PlayerMarkerWidget.UW-PlayerMarkerWidget_C.GetImageFromPingType");

	struct GetImageFromPingType_Params {
		enum class EPingType PingType;
		struct UPaperSprite& Image;
	}; GetImageFromPingType_Params Params;

	Params.PingType = PingType;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Image = Params.Image;

}

// Function UW-PlayerMarkerWidget.UW-PlayerMarkerWidget_C.SetGuidePingInfoForSmartpingMenu
inline void UUW-PlayerMarkerWidget_C::SetGuidePingInfoForSmartpingMenu(enum class EPingType PingType) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PlayerMarkerWidget.UW-PlayerMarkerWidget_C.SetGuidePingInfoForSmartpingMenu");

	struct SetGuidePingInfoForSmartpingMenu_Params {
		enum class EPingType PingType;
	}; SetGuidePingInfoForSmartpingMenu_Params Params;

	Params.PingType = PingType;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PlayerMarkerWidget.UW-PlayerMarkerWidget_C.SetPingType
inline void UUW-PlayerMarkerWidget_C::SetPingType(struct FBravoHotelPingInfo PingInfo, char IsOpend) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PlayerMarkerWidget.UW-PlayerMarkerWidget_C.SetPingType");

	struct SetPingType_Params {
		struct FBravoHotelPingInfo PingInfo;
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
inline void UUW-PlayerMarkerWidget_C::SetPlayerColor(struct ABravoHotelPlayerState PlayerState) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PlayerMarkerWidget.UW-PlayerMarkerWidget_C.SetPlayerColor");

	struct SetPlayerColor_Params {
		struct ABravoHotelPlayerState PlayerState;
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
inline struct FEventReply UUW-PlayerMarkerWidget_C::OnMouseButtonUp(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PlayerMarkerWidget.UW-PlayerMarkerWidget_C.OnMouseButtonUp");

	struct OnMouseButtonUp_Params {
		struct FGeometry MyGeometry;
		struct FPointerEvent& MouseEvent;
		struct FEventReply ReturnValue;

	}; OnMouseButtonUp_Params Params;

	Params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	MouseEvent = Params.MouseEvent;


	return params.ReturnValue;
}

// Function UW-PlayerMarkerWidget.UW-PlayerMarkerWidget_C.Initialize
inline void UUW-PlayerMarkerWidget_C::Initialize(struct ABravoHotelPlayerState PlayerState) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PlayerMarkerWidget.UW-PlayerMarkerWidget_C.Initialize");

	struct Initialize_Params {
		struct ABravoHotelPlayerState PlayerState;
	}; Initialize_Params Params;

	Params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PlayerMarkerWidget.UW-PlayerMarkerWidget_C.SetInfo
inline void UUW-PlayerMarkerWidget_C::SetInfo(struct FBravoHotelPingInfo PingInfo, char UsingAnimation, char IsOpened) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PlayerMarkerWidget.UW-PlayerMarkerWidget_C.SetInfo");

	struct SetInfo_Params {
		struct FBravoHotelPingInfo PingInfo;
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
inline void UUW-PlayerMarkerWidget_C::SetMaterialInfo(char UsingAnimation, struct FMaterialItemPingInfo MaterialPingInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PlayerMarkerWidget.UW-PlayerMarkerWidget_C.SetMaterialInfo");

	struct SetMaterialInfo_Params {
		char UsingAnimation;
		struct FMaterialItemPingInfo MaterialPingInfo;
	}; SetMaterialInfo_Params Params;

	Params.UsingAnimation = UsingAnimation;
	Params.MaterialPingInfo = MaterialPingInfo;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PlayerMarkerWidget.UW-PlayerMarkerWidget_C.SetResuscitationInfo
inline void UUW-PlayerMarkerWidget_C::SetResuscitationInfo(char UsingAnimation, struct ABravoHotelPlayerState PlayerState) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PlayerMarkerWidget.UW-PlayerMarkerWidget_C.SetResuscitationInfo");

	struct SetResuscitationInfo_Params {
		char UsingAnimation;
		struct ABravoHotelPlayerState PlayerState;
	}; SetResuscitationInfo_Params Params;

	Params.UsingAnimation = UsingAnimation;
	Params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PlayerMarkerWidget.UW-PlayerMarkerWidget_C.SetLocalPingInfo
inline void UUW-PlayerMarkerWidget_C::SetLocalPingInfo(char UsingAnimation, struct FBravoHotelLocalPingInfo LocalPingInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PlayerMarkerWidget.UW-PlayerMarkerWidget_C.SetLocalPingInfo");

	struct SetLocalPingInfo_Params {
		char UsingAnimation;
		struct FBravoHotelLocalPingInfo LocalPingInfo;
	}; SetLocalPingInfo_Params Params;

	Params.UsingAnimation = UsingAnimation;
	Params.LocalPingInfo = LocalPingInfo;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PlayerMarkerWidget.UW-PlayerMarkerWidget_C.SetExpertWeaponInfo
inline void UUW-PlayerMarkerWidget_C::SetExpertWeaponInfo(char UsingAnimation, struct FExpertWeaponPingInfo ExpertWeaponPingInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PlayerMarkerWidget.UW-PlayerMarkerWidget_C.SetExpertWeaponInfo");

	struct SetExpertWeaponInfo_Params {
		char UsingAnimation;
		struct FExpertWeaponPingInfo ExpertWeaponPingInfo;
	}; SetExpertWeaponInfo_Params Params;

	Params.UsingAnimation = UsingAnimation;
	Params.ExpertWeaponPingInfo = ExpertWeaponPingInfo;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PlayerMarkerWidget.UW-PlayerMarkerWidget_C.OnMouseEnter
inline void UUW-PlayerMarkerWidget_C::OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PlayerMarkerWidget.UW-PlayerMarkerWidget_C.OnMouseEnter");

	struct OnMouseEnter_Params {
		struct FGeometry MyGeometry;
		struct FPointerEvent& MouseEvent;
	}; OnMouseEnter_Params Params;

	Params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	MouseEvent = Params.MouseEvent;

}

// Function UW-PlayerMarkerWidget.UW-PlayerMarkerWidget_C.OnMouseLeave
inline void UUW-PlayerMarkerWidget_C::OnMouseLeave(struct FPointerEvent& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PlayerMarkerWidget.UW-PlayerMarkerWidget_C.OnMouseLeave");

	struct OnMouseLeave_Params {
		struct FPointerEvent& MouseEvent;
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
inline void UUW-PlayerMarkerWidget_C::OnMouseUp__DelegateSignature(struct FPointerEvent Mouse) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PlayerMarkerWidget.UW-PlayerMarkerWidget_C.OnMouseUp__DelegateSignature");

	struct OnMouseUp__DelegateSignature_Params {
		struct FPointerEvent Mouse;
	}; OnMouseUp__DelegateSignature_Params Params;

	Params.Mouse = Mouse;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PlayerMarkerWidget.UW-PlayerMarkerWidget_C.OnMarkerClicked__DelegateSignature
inline void UUW-PlayerMarkerWidget_C::OnMarkerClicked__DelegateSignature(struct FKey Button, char mapObjectID) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PlayerMarkerWidget.UW-PlayerMarkerWidget_C.OnMarkerClicked__DelegateSignature");

	struct OnMarkerClicked__DelegateSignature_Params {
		struct FKey Button;
		char mapObjectID;
	}; OnMarkerClicked__DelegateSignature_Params Params;

	Params.Button = Button;
	Params.mapObjectID = mapObjectID;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

