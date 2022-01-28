// WidgetBlueprintGeneratedClass UW-WorldMapMarkerWidget.UW-WorldMapMarkerWidget_C
class UUW-WorldMapMarkerWidget_C : public UBravoHotelPlayerMarkerWidget {

public:

	struct UImage Image_SupplyBoxMarker; // 0x248 (8)
	struct UCanvasPanel PersonalSupplyBox; // 0x250 (8)
	struct UWidgetSwitcher WidgetSwitcher_2; // 0x258 (8)
	struct FMulticastInlineDelegate OnMarkerClicked; // 0x260 (16)
	struct UImage CurrentMarker; // 0x270 (8)
	struct UUW-MapComp_C MapCompRef; // 0x278 (8)
	struct Object TmpPingTypeTexture; // 0x280 (8)

	void UpdatePersonalSupplyBox(); // Function UW-WorldMapMarkerWidget.UW-WorldMapMarkerWidget_C.UpdatePersonalSupplyBox(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void SetPersonalSupplyBox(struct UUW-MapComp_C MapCompRef); // Function UW-WorldMapMarkerWidget.UW-WorldMapMarkerWidget_C.SetPersonalSupplyBox(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void OnMarkerClicked__DelegateSignature(struct FKey Button, char mapObjectID); // Function UW-WorldMapMarkerWidget.UW-WorldMapMarkerWidget_C.OnMarkerClicked__DelegateSignature(Public|Delegate|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
};

// Function UW-WorldMapMarkerWidget.UW-WorldMapMarkerWidget_C.UpdatePersonalSupplyBox
inline void UUW-WorldMapMarkerWidget_C::UpdatePersonalSupplyBox() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-WorldMapMarkerWidget.UW-WorldMapMarkerWidget_C.UpdatePersonalSupplyBox");

	struct UpdatePersonalSupplyBox_Params {
		
	}; UpdatePersonalSupplyBox_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-WorldMapMarkerWidget.UW-WorldMapMarkerWidget_C.SetPersonalSupplyBox
inline void UUW-WorldMapMarkerWidget_C::SetPersonalSupplyBox(struct UUW-MapComp_C MapCompRef) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-WorldMapMarkerWidget.UW-WorldMapMarkerWidget_C.SetPersonalSupplyBox");

	struct SetPersonalSupplyBox_Params {
		struct UUW-MapComp_C MapCompRef;
	}; SetPersonalSupplyBox_Params Params;

	Params.MapCompRef = MapCompRef;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-WorldMapMarkerWidget.UW-WorldMapMarkerWidget_C.OnMarkerClicked__DelegateSignature
inline void UUW-WorldMapMarkerWidget_C::OnMarkerClicked__DelegateSignature(struct FKey Button, char mapObjectID) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-WorldMapMarkerWidget.UW-WorldMapMarkerWidget_C.OnMarkerClicked__DelegateSignature");

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

