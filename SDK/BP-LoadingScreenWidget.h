// WidgetBlueprintGeneratedClass BP-LoadingScreenWidget.BP-LoadingScreenWidget_C
class UBP-LoadingScreenWidget_C : public UBravoHotelLoadingWidget {

public:

	struct Unknown UberGraphFrame; // 0x2A0 (8)
	struct Unknown HorizontalBox_1; // 0x2A8 (8)
	struct Unknown Image_bg; // 0x2B0 (8)
	struct Unknown RichTextBlock; // 0x2B8 (8)
	struct Unknown RichTextBlock_Title; // 0x2C0 (8)
	struct Unknown Throbber_1; // 0x2C8 (8)
	struct Unknown VerticalBox_2; // 0x2D0 (8)
	struct TArray<Unknown> Textures; // 0x2D8 (16)
	struct Unknown Game Settings; // 0x2E8 (8)
	struct FString TempString; // 0x2F0 (16)
	char Key : 0; // 0x300 (1)
	int32_t RandomTemp; // 0x304 (4)
	int32_t ImageIndex; // 0x308 (4)
	int32_t TitleIndex; // 0x30C (4)

	void SetInfo(enum class Unknow Type, struct Unknown& OutData); // Function BP-LoadingScreenWidget.BP-LoadingScreenWidget_C.SetInfo(Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void OnLoaded_26F99F1744F423909EA588B7F2CD8F0A(struct Unknown Loaded); // Function BP-LoadingScreenWidget.BP-LoadingScreenWidget_C.OnLoaded_26F99F1744F423909EA588B7F2CD8F0A(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void Load(struct Unknown Texture); // Function BP-LoadingScreenWidget.BP-LoadingScreenWidget_C.Load(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void AsyncLoad(struct Unknown Texture); // Function BP-LoadingScreenWidget.BP-LoadingScreenWidget_C.AsyncLoad(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void ReceiveEndAfterLoading(); // Function BP-LoadingScreenWidget.BP-LoadingScreenWidget_C.ReceiveEndAfterLoading(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void Update(struct Unknown& Data); // Function BP-LoadingScreenWidget.BP-LoadingScreenWidget_C.Update(Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void SetDesc(struct FString Desc); // Function BP-LoadingScreenWidget.BP-LoadingScreenWidget_C.SetDesc(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void SetTitle(struct FText Title); // Function BP-LoadingScreenWidget.BP-LoadingScreenWidget_C.SetTitle(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void SetImage(struct Unknown Imgae); // Function BP-LoadingScreenWidget.BP-LoadingScreenWidget_C.SetImage(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void Destruct(); // Function BP-LoadingScreenWidget.BP-LoadingScreenWidget_C.Destruct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void ShowDesc(float DelayTime); // Function BP-LoadingScreenWidget.BP-LoadingScreenWidget_C.ShowDesc(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void ExecuteUbergraph_BP-LoadingScreenWidget(int32_t EntryPoint); // Function BP-LoadingScreenWidget.BP-LoadingScreenWidget_C.ExecuteUbergraph_BP-LoadingScreenWidget(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
};

// Function BP-LoadingScreenWidget.BP-LoadingScreenWidget_C.SetInfo
inline void UBP-LoadingScreenWidget_C::SetInfo(enum class Unknow Type, struct Unknown& OutData) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-LoadingScreenWidget.BP-LoadingScreenWidget_C.SetInfo");

	struct SetInfo_Params {
		enum class Unknow Type;
		struct Unknown& OutData;
	}; SetInfo_Params Params;

	Params.Type = Type;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	OutData = Params.OutData;

}

// Function BP-LoadingScreenWidget.BP-LoadingScreenWidget_C.OnLoaded_26F99F1744F423909EA588B7F2CD8F0A
inline void UBP-LoadingScreenWidget_C::OnLoaded_26F99F1744F423909EA588B7F2CD8F0A(struct Unknown Loaded) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-LoadingScreenWidget.BP-LoadingScreenWidget_C.OnLoaded_26F99F1744F423909EA588B7F2CD8F0A");

	struct OnLoaded_26F99F1744F423909EA588B7F2CD8F0A_Params {
		struct Unknown Loaded;
	}; OnLoaded_26F99F1744F423909EA588B7F2CD8F0A_Params Params;

	Params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-LoadingScreenWidget.BP-LoadingScreenWidget_C.Load
inline void UBP-LoadingScreenWidget_C::Load(struct Unknown Texture) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-LoadingScreenWidget.BP-LoadingScreenWidget_C.Load");

	struct Load_Params {
		struct Unknown Texture;
	}; Load_Params Params;

	Params.Texture = Texture;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-LoadingScreenWidget.BP-LoadingScreenWidget_C.AsyncLoad
inline void UBP-LoadingScreenWidget_C::AsyncLoad(struct Unknown Texture) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-LoadingScreenWidget.BP-LoadingScreenWidget_C.AsyncLoad");

	struct AsyncLoad_Params {
		struct Unknown Texture;
	}; AsyncLoad_Params Params;

	Params.Texture = Texture;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-LoadingScreenWidget.BP-LoadingScreenWidget_C.ReceiveEndAfterLoading
inline void UBP-LoadingScreenWidget_C::ReceiveEndAfterLoading() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-LoadingScreenWidget.BP-LoadingScreenWidget_C.ReceiveEndAfterLoading");

	struct ReceiveEndAfterLoading_Params {
		
	}; ReceiveEndAfterLoading_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-LoadingScreenWidget.BP-LoadingScreenWidget_C.Update
inline void UBP-LoadingScreenWidget_C::Update(struct Unknown& Data) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-LoadingScreenWidget.BP-LoadingScreenWidget_C.Update");

	struct Update_Params {
		struct Unknown& Data;
	}; Update_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Data = Params.Data;

}

// Function BP-LoadingScreenWidget.BP-LoadingScreenWidget_C.SetDesc
inline void UBP-LoadingScreenWidget_C::SetDesc(struct FString Desc) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-LoadingScreenWidget.BP-LoadingScreenWidget_C.SetDesc");

	struct SetDesc_Params {
		struct FString Desc;
	}; SetDesc_Params Params;

	Params.Desc = Desc;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-LoadingScreenWidget.BP-LoadingScreenWidget_C.SetTitle
inline void UBP-LoadingScreenWidget_C::SetTitle(struct FText Title) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-LoadingScreenWidget.BP-LoadingScreenWidget_C.SetTitle");

	struct SetTitle_Params {
		struct FText Title;
	}; SetTitle_Params Params;

	Params.Title = Title;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-LoadingScreenWidget.BP-LoadingScreenWidget_C.SetImage
inline void UBP-LoadingScreenWidget_C::SetImage(struct Unknown Imgae) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-LoadingScreenWidget.BP-LoadingScreenWidget_C.SetImage");

	struct SetImage_Params {
		struct Unknown Imgae;
	}; SetImage_Params Params;

	Params.Imgae = Imgae;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-LoadingScreenWidget.BP-LoadingScreenWidget_C.Destruct
inline void UBP-LoadingScreenWidget_C::Destruct() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-LoadingScreenWidget.BP-LoadingScreenWidget_C.Destruct");

	struct Destruct_Params {
		
	}; Destruct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-LoadingScreenWidget.BP-LoadingScreenWidget_C.ShowDesc
inline void UBP-LoadingScreenWidget_C::ShowDesc(float DelayTime) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-LoadingScreenWidget.BP-LoadingScreenWidget_C.ShowDesc");

	struct ShowDesc_Params {
		float DelayTime;
	}; ShowDesc_Params Params;

	Params.DelayTime = DelayTime;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-LoadingScreenWidget.BP-LoadingScreenWidget_C.ExecuteUbergraph_BP-LoadingScreenWidget
inline void UBP-LoadingScreenWidget_C::ExecuteUbergraph_BP-LoadingScreenWidget(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-LoadingScreenWidget.BP-LoadingScreenWidget_C.ExecuteUbergraph_BP-LoadingScreenWidget");

	struct ExecuteUbergraph_BP-LoadingScreenWidget_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_BP-LoadingScreenWidget_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

