// WidgetBlueprintGeneratedClass WB_ClassicToolTipDesign.WB_ClassicToolTipDesign_C
class UWB_ClassicToolTipDesign_C : public UWB_ToolTipDesign_C {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268 (8)
	struct UVerticalBox ToolTipVerticalList; // 0x270 (8)

	void Set Tool Tip Text Design(struct FText Tool Tip, char& -); // Function WB_ClassicToolTipDesign.WB_ClassicToolTipDesign_C.Set Tool Tip Text Design(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void Construct(); // Function WB_ClassicToolTipDesign.WB_ClassicToolTipDesign_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void ExecuteUbergraph_WB_ClassicToolTipDesign(int32_t EntryPoint); // Function WB_ClassicToolTipDesign.WB_ClassicToolTipDesign_C.ExecuteUbergraph_WB_ClassicToolTipDesign(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
};

// Function WB_ClassicToolTipDesign.WB_ClassicToolTipDesign_C.Set Tool Tip Text Design
inline void UWB_ClassicToolTipDesign_C::Set Tool Tip Text Design(struct FText Tool Tip, char& -) {
	static auto fn = UObject::FindObject<UFunction>("Function WB_ClassicToolTipDesign.WB_ClassicToolTipDesign_C.Set Tool Tip Text Design");

	struct Set Tool Tip Text Design_Params {
		struct FText Tool Tip;
		char& -;
	}; Set Tool Tip Text Design_Params Params;

	Params.Tool Tip = Tool Tip;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	- = Params.-;

}

// Function WB_ClassicToolTipDesign.WB_ClassicToolTipDesign_C.Construct
inline void UWB_ClassicToolTipDesign_C::Construct() {
	static auto fn = UObject::FindObject<UFunction>("Function WB_ClassicToolTipDesign.WB_ClassicToolTipDesign_C.Construct");

	struct Construct_Params {
		
	}; Construct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function WB_ClassicToolTipDesign.WB_ClassicToolTipDesign_C.ExecuteUbergraph_WB_ClassicToolTipDesign
inline void UWB_ClassicToolTipDesign_C::ExecuteUbergraph_WB_ClassicToolTipDesign(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function WB_ClassicToolTipDesign.WB_ClassicToolTipDesign_C.ExecuteUbergraph_WB_ClassicToolTipDesign");

	struct ExecuteUbergraph_WB_ClassicToolTipDesign_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_WB_ClassicToolTipDesign_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

