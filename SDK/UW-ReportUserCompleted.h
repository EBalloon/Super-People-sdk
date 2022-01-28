// WidgetBlueprintGeneratedClass UW-ReportUserCompleted.UW-ReportUserCompleted_C
class UUW-ReportUserCompleted_C : public UBravoHotelReportUserCompletedWidget {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x250 (8)
	struct UButton btn_confirm; // 0x258 (8)
	struct UImage popup-bg; // 0x260 (8)
	struct UTextBlock txt_description; // 0x268 (8)
	struct UImage uw-bg; // 0x270 (8)
	struct FText DescriptionText; // 0x278 (24)

	void Construct(); // Function UW-ReportUserCompleted.UW-ReportUserCompleted_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void PreConstruct(char IsDesignTime); // Function UW-ReportUserCompleted.UW-ReportUserCompleted_C.PreConstruct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void ExecuteUbergraph_UW-ReportUserCompleted(int32_t EntryPoint); // Function UW-ReportUserCompleted.UW-ReportUserCompleted_C.ExecuteUbergraph_UW-ReportUserCompleted(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
};

// Function UW-ReportUserCompleted.UW-ReportUserCompleted_C.Construct
inline void UUW-ReportUserCompleted_C::Construct() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ReportUserCompleted.UW-ReportUserCompleted_C.Construct");

	struct Construct_Params {
		
	}; Construct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ReportUserCompleted.UW-ReportUserCompleted_C.PreConstruct
inline void UUW-ReportUserCompleted_C::PreConstruct(char IsDesignTime) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ReportUserCompleted.UW-ReportUserCompleted_C.PreConstruct");

	struct PreConstruct_Params {
		char IsDesignTime;
	}; PreConstruct_Params Params;

	Params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ReportUserCompleted.UW-ReportUserCompleted_C.ExecuteUbergraph_UW-ReportUserCompleted
inline void UUW-ReportUserCompleted_C::ExecuteUbergraph_UW-ReportUserCompleted(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ReportUserCompleted.UW-ReportUserCompleted_C.ExecuteUbergraph_UW-ReportUserCompleted");

	struct ExecuteUbergraph_UW-ReportUserCompleted_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_UW-ReportUserCompleted_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

