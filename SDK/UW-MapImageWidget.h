// WidgetBlueprintGeneratedClass UW-MapImageWidget.UW-MapImageWidget_C
class UUW-MapImageWidget_C : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown Anim_Hide_Ima; // 0x250 (8)
	struct Unknown Anim_Hide_text; // 0x258 (8)
	struct Unknown Anim_Show_Ima; // 0x260 (8)
	struct Unknown Anim_Show_text; // 0x268 (8)
	struct Unknown Canvas_Main; // 0x270 (8)
	struct Unknown HorizontalBox_86; // 0x278 (8)
	struct Unknown Image_130; // 0x280 (8)
	struct Unknown Image_811; // 0x288 (8)
	struct Unknown Img_MapImage; // 0x290 (8)
	struct Unknown MatchType; // 0x298 (8)
	struct Unknown MaxPlayerCount; // 0x2A0 (8)
	struct Unknown Overlay_Text; // 0x2A8 (8)
	struct Unknown PersonType; // 0x2B0 (8)
	struct Unknown T_MapImageDesc; // 0x2B8 (8)
	struct Unknown T_MapImageTitle; // 0x2C0 (8)
	struct Unknown Ultimate; // 0x2C8 (8)
	char IsShowText : 0; // 0x2D0 (1)
	struct Unknown Timer_HideMapImage; // 0x2D8 (8)
	int32_t LastZoomLevel; // 0x2E0 (4)
	float WantOpacity; // 0x2E4 (4)
	struct Unknown MainWidgetRef; // 0x2E8 (8)
	char IsShowImage : 0; // 0x2F0 (1)
	enum class Unknow LastWidgetType; // 0x2F1 (1)
	struct FText UltimateText; // 0x2F8 (24)

	void UpdateWantedOpacity(); // Function UW-MapImageWidget.UW-MapImageWidget_C.UpdateWantedOpacity(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void CheckCanTextImage(char& CanText, char& CanImage); // Function UW-MapImageWidget.UW-MapImageWidget_C.CheckCanTextImage(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void StartShowAnim(); // Function UW-MapImageWidget.UW-MapImageWidget_C.StartShowAnim(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void ChangeShowAnim(); // Function UW-MapImageWidget.UW-MapImageWidget_C.ChangeShowAnim(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void UpdateOpacity(); // Function UW-MapImageWidget.UW-MapImageWidget_C.UpdateOpacity(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void CheckWorldMapZoomLevel(char& Changed); // Function UW-MapImageWidget.UW-MapImageWidget_C.CheckWorldMapZoomLevel(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void GetWorldMapZoomLevel(int32_t& ZoomLevel); // Function UW-MapImageWidget.UW-MapImageWidget_C.GetWorldMapZoomLevel(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void CheckToggleWidgetType(char& Changed); // Function UW-MapImageWidget.UW-MapImageWidget_C.CheckToggleWidgetType(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void CheckCanHide(char& CanHide); // Function UW-MapImageWidget.UW-MapImageWidget_C.CheckCanHide(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void SetMapInfo(char& SUCCESS); // Function UW-MapImageWidget.UW-MapImageWidget_C.SetMapInfo(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void OnLoaded_199F0E9743CFA7E806886E89E49C9E00(struct Unknown Loaded); // Function UW-MapImageWidget.UW-MapImageWidget_C.OnLoaded_199F0E9743CFA7E806886E89E49C9E00(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void ShowMapImage(); // Function UW-MapImageWidget.UW-MapImageWidget_C.ShowMapImage(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void HideMapImage(char SetTimer); // Function UW-MapImageWidget.UW-MapImageWidget_C.HideMapImage(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void DoHideMapImage(); // Function UW-MapImageWidget.UW-MapImageWidget_C.DoHideMapImage(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void AsyncMapImage(struct Unknown Image); // Function UW-MapImageWidget.UW-MapImageWidget_C.AsyncMapImage(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void Tick(struct Unknown MyGeometry, float InDeltaTime); // Function UW-MapImageWidget.UW-MapImageWidget_C.Tick(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void ChangeMapImage(); // Function UW-MapImageWidget.UW-MapImageWidget_C.ChangeMapImage(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void CheckOpacity(); // Function UW-MapImageWidget.UW-MapImageWidget_C.CheckOpacity(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void ExecuteUbergraph_UW-MapImageWidget(int32_t EntryPoint); // Function UW-MapImageWidget.UW-MapImageWidget_C.ExecuteUbergraph_UW-MapImageWidget(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
};

// Function UW-MapImageWidget.UW-MapImageWidget_C.UpdateWantedOpacity
inline void UUW-MapImageWidget_C::UpdateWantedOpacity() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MapImageWidget.UW-MapImageWidget_C.UpdateWantedOpacity");

	struct UpdateWantedOpacity_Params {
		
	}; UpdateWantedOpacity_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MapImageWidget.UW-MapImageWidget_C.CheckCanTextImage
inline void UUW-MapImageWidget_C::CheckCanTextImage(char& CanText, char& CanImage) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MapImageWidget.UW-MapImageWidget_C.CheckCanTextImage");

	struct CheckCanTextImage_Params {
		char& CanText;
		char& CanImage;
	}; CheckCanTextImage_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	CanText = Params.CanText;
	CanImage = Params.CanImage;

}

// Function UW-MapImageWidget.UW-MapImageWidget_C.StartShowAnim
inline void UUW-MapImageWidget_C::StartShowAnim() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MapImageWidget.UW-MapImageWidget_C.StartShowAnim");

	struct StartShowAnim_Params {
		
	}; StartShowAnim_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MapImageWidget.UW-MapImageWidget_C.ChangeShowAnim
inline void UUW-MapImageWidget_C::ChangeShowAnim() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MapImageWidget.UW-MapImageWidget_C.ChangeShowAnim");

	struct ChangeShowAnim_Params {
		
	}; ChangeShowAnim_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MapImageWidget.UW-MapImageWidget_C.UpdateOpacity
inline void UUW-MapImageWidget_C::UpdateOpacity() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MapImageWidget.UW-MapImageWidget_C.UpdateOpacity");

	struct UpdateOpacity_Params {
		
	}; UpdateOpacity_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MapImageWidget.UW-MapImageWidget_C.CheckWorldMapZoomLevel
inline void UUW-MapImageWidget_C::CheckWorldMapZoomLevel(char& Changed) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MapImageWidget.UW-MapImageWidget_C.CheckWorldMapZoomLevel");

	struct CheckWorldMapZoomLevel_Params {
		char& Changed;
	}; CheckWorldMapZoomLevel_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Changed = Params.Changed;

}

// Function UW-MapImageWidget.UW-MapImageWidget_C.GetWorldMapZoomLevel
inline void UUW-MapImageWidget_C::GetWorldMapZoomLevel(int32_t& ZoomLevel) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MapImageWidget.UW-MapImageWidget_C.GetWorldMapZoomLevel");

	struct GetWorldMapZoomLevel_Params {
		int32_t& ZoomLevel;
	}; GetWorldMapZoomLevel_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	ZoomLevel = Params.ZoomLevel;

}

// Function UW-MapImageWidget.UW-MapImageWidget_C.CheckToggleWidgetType
inline void UUW-MapImageWidget_C::CheckToggleWidgetType(char& Changed) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MapImageWidget.UW-MapImageWidget_C.CheckToggleWidgetType");

	struct CheckToggleWidgetType_Params {
		char& Changed;
	}; CheckToggleWidgetType_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Changed = Params.Changed;

}

// Function UW-MapImageWidget.UW-MapImageWidget_C.CheckCanHide
inline void UUW-MapImageWidget_C::CheckCanHide(char& CanHide) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MapImageWidget.UW-MapImageWidget_C.CheckCanHide");

	struct CheckCanHide_Params {
		char& CanHide;
	}; CheckCanHide_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	CanHide = Params.CanHide;

}

// Function UW-MapImageWidget.UW-MapImageWidget_C.SetMapInfo
inline void UUW-MapImageWidget_C::SetMapInfo(char& SUCCESS) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MapImageWidget.UW-MapImageWidget_C.SetMapInfo");

	struct SetMapInfo_Params {
		char& SUCCESS;
	}; SetMapInfo_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	SUCCESS = Params.SUCCESS;

}

// Function UW-MapImageWidget.UW-MapImageWidget_C.OnLoaded_199F0E9743CFA7E806886E89E49C9E00
inline void UUW-MapImageWidget_C::OnLoaded_199F0E9743CFA7E806886E89E49C9E00(struct Unknown Loaded) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MapImageWidget.UW-MapImageWidget_C.OnLoaded_199F0E9743CFA7E806886E89E49C9E00");

	struct OnLoaded_199F0E9743CFA7E806886E89E49C9E00_Params {
		struct Unknown Loaded;
	}; OnLoaded_199F0E9743CFA7E806886E89E49C9E00_Params Params;

	Params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MapImageWidget.UW-MapImageWidget_C.ShowMapImage
inline void UUW-MapImageWidget_C::ShowMapImage() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MapImageWidget.UW-MapImageWidget_C.ShowMapImage");

	struct ShowMapImage_Params {
		
	}; ShowMapImage_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MapImageWidget.UW-MapImageWidget_C.HideMapImage
inline void UUW-MapImageWidget_C::HideMapImage(char SetTimer) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MapImageWidget.UW-MapImageWidget_C.HideMapImage");

	struct HideMapImage_Params {
		char SetTimer;
	}; HideMapImage_Params Params;

	Params.SetTimer = SetTimer;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MapImageWidget.UW-MapImageWidget_C.DoHideMapImage
inline void UUW-MapImageWidget_C::DoHideMapImage() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MapImageWidget.UW-MapImageWidget_C.DoHideMapImage");

	struct DoHideMapImage_Params {
		
	}; DoHideMapImage_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MapImageWidget.UW-MapImageWidget_C.AsyncMapImage
inline void UUW-MapImageWidget_C::AsyncMapImage(struct Unknown Image) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MapImageWidget.UW-MapImageWidget_C.AsyncMapImage");

	struct AsyncMapImage_Params {
		struct Unknown Image;
	}; AsyncMapImage_Params Params;

	Params.Image = Image;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MapImageWidget.UW-MapImageWidget_C.Tick
inline void UUW-MapImageWidget_C::Tick(struct Unknown MyGeometry, float InDeltaTime) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MapImageWidget.UW-MapImageWidget_C.Tick");

	struct Tick_Params {
		struct Unknown MyGeometry;
		float InDeltaTime;
	}; Tick_Params Params;

	Params.MyGeometry = MyGeometry;
	Params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MapImageWidget.UW-MapImageWidget_C.ChangeMapImage
inline void UUW-MapImageWidget_C::ChangeMapImage() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MapImageWidget.UW-MapImageWidget_C.ChangeMapImage");

	struct ChangeMapImage_Params {
		
	}; ChangeMapImage_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MapImageWidget.UW-MapImageWidget_C.CheckOpacity
inline void UUW-MapImageWidget_C::CheckOpacity() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MapImageWidget.UW-MapImageWidget_C.CheckOpacity");

	struct CheckOpacity_Params {
		
	}; CheckOpacity_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MapImageWidget.UW-MapImageWidget_C.ExecuteUbergraph_UW-MapImageWidget
inline void UUW-MapImageWidget_C::ExecuteUbergraph_UW-MapImageWidget(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MapImageWidget.UW-MapImageWidget_C.ExecuteUbergraph_UW-MapImageWidget");

	struct ExecuteUbergraph_UW-MapImageWidget_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_UW-MapImageWidget_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

