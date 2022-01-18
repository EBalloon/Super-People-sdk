// WidgetBlueprintGeneratedClass UW-ClassinfoitemWidget.UW-ClassinfoitemWidget_C
class UUW-ClassinfoitemWidget_C : public UUserWidget {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248 (8)
	struct UImage Image_ClassIcon; // 0x250 (8)
	struct UTextBlock TextBlock_ClassName; // 0x258 (8)
	struct UTextBlock TextBlock_Count; // 0x260 (8)

	void SetClassCount(int32_t Count); // Function UW-ClassinfoitemWidget.UW-ClassinfoitemWidget_C.SetClassCount(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void SetClassInfo(struct FPerkDeckData& PerkDeckData); // Function UW-ClassinfoitemWidget.UW-ClassinfoitemWidget_C.SetClassInfo(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void OnLoaded_5B4CA9324370B6EF1C483DB3B88E6511(struct Object Loaded); // Function UW-ClassinfoitemWidget.UW-ClassinfoitemWidget_C.OnLoaded_5B4CA9324370B6EF1C483DB3B88E6511(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void AsyncLoadingClassIcon(struct TSoftObjectPtr<Object> Texture); // Function UW-ClassinfoitemWidget.UW-ClassinfoitemWidget_C.AsyncLoadingClassIcon(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void ExecuteUbergraph_UW-ClassinfoitemWidget(int32_t EntryPoint); // Function UW-ClassinfoitemWidget.UW-ClassinfoitemWidget_C.ExecuteUbergraph_UW-ClassinfoitemWidget(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
};

// Function UW-ClassinfoitemWidget.UW-ClassinfoitemWidget_C.SetClassCount
inline void UUW-ClassinfoitemWidget_C::SetClassCount(int32_t Count) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ClassinfoitemWidget.UW-ClassinfoitemWidget_C.SetClassCount");

	struct SetClassCount_Params {
		int32_t Count;
	}; SetClassCount_Params Params;

	Params.Count = Count;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ClassinfoitemWidget.UW-ClassinfoitemWidget_C.SetClassInfo
inline void UUW-ClassinfoitemWidget_C::SetClassInfo(struct FPerkDeckData& PerkDeckData) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ClassinfoitemWidget.UW-ClassinfoitemWidget_C.SetClassInfo");

	struct SetClassInfo_Params {
		struct FPerkDeckData& PerkDeckData;
	}; SetClassInfo_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	PerkDeckData = Params.PerkDeckData;

}

// Function UW-ClassinfoitemWidget.UW-ClassinfoitemWidget_C.OnLoaded_5B4CA9324370B6EF1C483DB3B88E6511
inline void UUW-ClassinfoitemWidget_C::OnLoaded_5B4CA9324370B6EF1C483DB3B88E6511(struct Object Loaded) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ClassinfoitemWidget.UW-ClassinfoitemWidget_C.OnLoaded_5B4CA9324370B6EF1C483DB3B88E6511");

	struct OnLoaded_5B4CA9324370B6EF1C483DB3B88E6511_Params {
		struct Object Loaded;
	}; OnLoaded_5B4CA9324370B6EF1C483DB3B88E6511_Params Params;

	Params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ClassinfoitemWidget.UW-ClassinfoitemWidget_C.AsyncLoadingClassIcon
inline void UUW-ClassinfoitemWidget_C::AsyncLoadingClassIcon(struct TSoftObjectPtr<Object> Texture) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ClassinfoitemWidget.UW-ClassinfoitemWidget_C.AsyncLoadingClassIcon");

	struct AsyncLoadingClassIcon_Params {
		struct TSoftObjectPtr<Object> Texture;
	}; AsyncLoadingClassIcon_Params Params;

	Params.Texture = Texture;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ClassinfoitemWidget.UW-ClassinfoitemWidget_C.ExecuteUbergraph_UW-ClassinfoitemWidget
inline void UUW-ClassinfoitemWidget_C::ExecuteUbergraph_UW-ClassinfoitemWidget(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ClassinfoitemWidget.UW-ClassinfoitemWidget_C.ExecuteUbergraph_UW-ClassinfoitemWidget");

	struct ExecuteUbergraph_UW-ClassinfoitemWidget_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_UW-ClassinfoitemWidget_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

