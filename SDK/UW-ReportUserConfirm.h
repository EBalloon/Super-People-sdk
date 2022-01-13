// WidgetBlueprintGeneratedClass UW-ReportUserConfirm.UW-ReportUserConfirm_C
class UUW-ReportUserConfirm_C : public UBravoHotelReportUserConfirmWidget {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x258 (8)
	struct UButton btn_Cancel; // 0x260 (8)
	struct UButton btn_confirm; // 0x268 (8)
	struct UImage popup-bg; // 0x270 (8)
	struct UTextBlock txt_description; // 0x278 (8)
	struct UImage uw-bg; // 0x280 (8)

	void PreConstruct(char IsDesignTime); // Function UW-ReportUserConfirm.UW-ReportUserConfirm_C.PreConstruct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void Construct(); // Function UW-ReportUserConfirm.UW-ReportUserConfirm_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void OnReportSended(enum class EBeginReportWidgetType InWidgetType); // Function UW-ReportUserConfirm.UW-ReportUserConfirm_C.OnReportSended(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void ExecuteUbergraph_UW-ReportUserConfirm(int32_t EntryPoint); // Function UW-ReportUserConfirm.UW-ReportUserConfirm_C.ExecuteUbergraph_UW-ReportUserConfirm(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
};

// Function UW-ReportUserConfirm.UW-ReportUserConfirm_C.PreConstruct
inline void UUW-ReportUserConfirm_C::PreConstruct(char IsDesignTime) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ReportUserConfirm.UW-ReportUserConfirm_C.PreConstruct");

	struct PreConstruct_Params {
		char IsDesignTime;
	}; PreConstruct_Params Params;

	Params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ReportUserConfirm.UW-ReportUserConfirm_C.Construct
inline void UUW-ReportUserConfirm_C::Construct() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ReportUserConfirm.UW-ReportUserConfirm_C.Construct");

	struct Construct_Params {
		
	}; Construct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ReportUserConfirm.UW-ReportUserConfirm_C.OnReportSended
inline void UUW-ReportUserConfirm_C::OnReportSended(enum class EBeginReportWidgetType InWidgetType) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ReportUserConfirm.UW-ReportUserConfirm_C.OnReportSended");

	struct OnReportSended_Params {
		enum class EBeginReportWidgetType InWidgetType;
	}; OnReportSended_Params Params;

	Params.InWidgetType = InWidgetType;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ReportUserConfirm.UW-ReportUserConfirm_C.ExecuteUbergraph_UW-ReportUserConfirm
inline void UUW-ReportUserConfirm_C::ExecuteUbergraph_UW-ReportUserConfirm(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ReportUserConfirm.UW-ReportUserConfirm_C.ExecuteUbergraph_UW-ReportUserConfirm");

	struct ExecuteUbergraph_UW-ReportUserConfirm_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_UW-ReportUserConfirm_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

