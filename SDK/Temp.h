// WidgetBlueprintGeneratedClass Temp.Temp_C
class UTemp_C : public UUserWidget {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248 (8)
	struct UImage Image_66; // 0x250 (8)
	struct UImage Image_113; // 0x258 (8)
	struct UImage Image_181; // 0x260 (8)
	struct UImage Image_246; // 0x268 (8)
	struct UImage Image_312; // 0x270 (8)
	struct UImage Image_314; // 0x278 (8)
	struct UImage Image_315; // 0x280 (8)
	struct UImage Image_316; // 0x288 (8)
	struct UImage Image_317; // 0x290 (8)
	struct UImage Image_318; // 0x298 (8)
	struct UImage Image_319; // 0x2A0 (8)

	void GetImage(int32_t Index, struct UImage& Image); // Function Temp.Temp_C.GetImage(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void Set Info(struct TArray<struct FVector2D>& List); // Function Temp.Temp_C.Set Info(HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void ExecuteUbergraph_Temp(int32_t EntryPoint); // Function Temp.Temp_C.ExecuteUbergraph_Temp(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
};

// Function Temp.Temp_C.GetImage
inline void UTemp_C::GetImage(int32_t Index, struct UImage& Image) {
	static auto fn = UObject::FindObject<UFunction>("Function Temp.Temp_C.GetImage");

	struct GetImage_Params {
		int32_t Index;
		struct UImage& Image;
	}; GetImage_Params Params;

	Params.Index = Index;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Image = Params.Image;

}

// Function Temp.Temp_C.Set Info
inline void UTemp_C::Set Info(struct TArray<struct FVector2D>& List) {
	static auto fn = UObject::FindObject<UFunction>("Function Temp.Temp_C.Set Info");

	struct Set Info_Params {
		struct TArray<struct FVector2D>& List;
	}; Set Info_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	List = Params.List;

}

// Function Temp.Temp_C.ExecuteUbergraph_Temp
inline void UTemp_C::ExecuteUbergraph_Temp(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function Temp.Temp_C.ExecuteUbergraph_Temp");

	struct ExecuteUbergraph_Temp_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_Temp_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

