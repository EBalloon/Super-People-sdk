// WidgetBlueprintGeneratedClass UW-TeamInfoWidget.UW-TeamInfoWidget_C
class UUW-TeamInfoWidget_C : public UBravoHotelTeamInfoWidget {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x258 (8)
	struct UUW-TeamInfoItemWidget_C UW-TeamInfoItemWidget; // 0x260 (8)
	struct UUW-TeamInfoItemWidget_C UW-TeamInfoItemWidget_C_2; // 0x268 (8)
	struct UVerticalBox VerticalBox_InfoList; // 0x270 (8)

	struct UBravoHotelTeamInfoSlotWidget CreateSlot(); // Function UW-TeamInfoWidget.UW-TeamInfoWidget_C.CreateSlot(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void Construct(); // Function UW-TeamInfoWidget.UW-TeamInfoWidget_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void UpdateInvalidationbox(); // Function UW-TeamInfoWidget.UW-TeamInfoWidget_C.UpdateInvalidationbox(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void ExecuteUbergraph_UW-TeamInfoWidget(int32_t EntryPoint); // Function UW-TeamInfoWidget.UW-TeamInfoWidget_C.ExecuteUbergraph_UW-TeamInfoWidget(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
};

// Function UW-TeamInfoWidget.UW-TeamInfoWidget_C.CreateSlot
inline struct UBravoHotelTeamInfoSlotWidget UUW-TeamInfoWidget_C::CreateSlot() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-TeamInfoWidget.UW-TeamInfoWidget_C.CreateSlot");

	struct CreateSlot_Params {
		
		struct UBravoHotelTeamInfoSlotWidget ReturnValue;

	}; CreateSlot_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UW-TeamInfoWidget.UW-TeamInfoWidget_C.Construct
inline void UUW-TeamInfoWidget_C::Construct() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-TeamInfoWidget.UW-TeamInfoWidget_C.Construct");

	struct Construct_Params {
		
	}; Construct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-TeamInfoWidget.UW-TeamInfoWidget_C.UpdateInvalidationbox
inline void UUW-TeamInfoWidget_C::UpdateInvalidationbox() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-TeamInfoWidget.UW-TeamInfoWidget_C.UpdateInvalidationbox");

	struct UpdateInvalidationbox_Params {
		
	}; UpdateInvalidationbox_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-TeamInfoWidget.UW-TeamInfoWidget_C.ExecuteUbergraph_UW-TeamInfoWidget
inline void UUW-TeamInfoWidget_C::ExecuteUbergraph_UW-TeamInfoWidget(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-TeamInfoWidget.UW-TeamInfoWidget_C.ExecuteUbergraph_UW-TeamInfoWidget");

	struct ExecuteUbergraph_UW-TeamInfoWidget_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_UW-TeamInfoWidget_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

