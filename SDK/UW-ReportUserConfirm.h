// WidgetBlueprintGeneratedClass UW-ReportUserConfirm.UW-ReportUserConfirm_C
class UUW-ReportUserConfirm_C : public UBravoHotelReportUserConfirmWidget {

public:

	struct Unknown UberGraphFrame; // 0x258 (8)
	struct Unknown btn_Cancel; // 0x260 (8)
	struct Unknown btn_confirm; // 0x268 (8)
	struct Unknown popup-bg; // 0x270 (8)
	struct Unknown txt_description; // 0x278 (8)
	struct Unknown uw-bg; // 0x280 (8)

	void PreConstruct(char IsDesignTime); // Function UW-ReportUserConfirm.UW-ReportUserConfirm_C.PreConstruct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void Construct(); // Function UW-ReportUserConfirm.UW-ReportUserConfirm_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void OnReportSended(enum class Unknow InWidgetType); // Function UW-ReportUserConfirm.UW-ReportUserConfirm_C.OnReportSended(Event|Public|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void ExecuteUbergraph_UW-ReportUserConfirm(int32_t EntryPoint); // Function UW-ReportUserConfirm.UW-ReportUserConfirm_C.ExecuteUbergraph_UW-ReportUserConfirm(Final|UbergraphFunction) // <Game_BE.exe+0x2B80160>
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
inline void UUW-ReportUserConfirm_C::OnReportSended(enum class Unknow InWidgetType) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ReportUserConfirm.UW-ReportUserConfirm_C.OnReportSended");

	struct OnReportSended_Params {
		enum class Unknow InWidgetType;
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

