// Enum BravoHotelPatch.EPatchServiceError
enum class EPatchServiceError : uint8_t {
	NoError = 0,
	FailedToDownloadManifestNoResponse = 1,
	FailedToDownloadManifest = 2,
	FailedToReadManifest = 3,
	FailedToInstall = 4,
	EPatchServiceError_MAX = 5,
};

// Class BravoHotelPatch.BravoHotelPatchWidget
class UBravoHotelPatchWidget : public UUserWidget {

public:

	struct Unknown PatchService; // 0x268 (8)

	void StartPatchService(); // Function BravoHotelPatch.BravoHotelPatchWidget.StartPatchService(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2077920>
	void ReceiveStartPatchService(); // Function BravoHotelPatch.BravoHotelPatchWidget.ReceiveStartPatchService(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void ReceiveReadyToStartGame(); // Function BravoHotelPatch.BravoHotelPatchWidget.ReceiveReadyToStartGame(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void ReceiveReadyToInstallPatch(); // Function BravoHotelPatch.BravoHotelPatchWidget.ReceiveReadyToInstallPatch(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void ReceiveErrorPatchService(enum class Unknow ErrorCode, struct FText& ErrorText); // Function BravoHotelPatch.BravoHotelPatchWidget.ReceiveErrorPatchService(Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	struct FText GetVersionText(); // Function BravoHotelPatch.BravoHotelPatchWidget.GetVersionText(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2077880>
	struct FString GetGameDefaultMap(); // Function BravoHotelPatch.BravoHotelPatchWidget.GetGameDefaultMap(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2077800>
	struct FText GetDownloadText(); // Function BravoHotelPatch.BravoHotelPatchWidget.GetDownloadText(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2077760>
};

// Function BravoHotelPatch.BravoHotelPatchWidget.StartPatchService
inline void UBravoHotelPatchWidget::StartPatchService() {
	static auto fn = UObject::FindObject<UFunction>("Function BravoHotelPatch.BravoHotelPatchWidget.StartPatchService");

	struct StartPatchService_Params {
		
	}; StartPatchService_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BravoHotelPatch.BravoHotelPatchWidget.ReceiveStartPatchService
inline void UBravoHotelPatchWidget::ReceiveStartPatchService() {
	static auto fn = UObject::FindObject<UFunction>("Function BravoHotelPatch.BravoHotelPatchWidget.ReceiveStartPatchService");

	struct ReceiveStartPatchService_Params {
		
	}; ReceiveStartPatchService_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BravoHotelPatch.BravoHotelPatchWidget.ReceiveReadyToStartGame
inline void UBravoHotelPatchWidget::ReceiveReadyToStartGame() {
	static auto fn = UObject::FindObject<UFunction>("Function BravoHotelPatch.BravoHotelPatchWidget.ReceiveReadyToStartGame");

	struct ReceiveReadyToStartGame_Params {
		
	}; ReceiveReadyToStartGame_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BravoHotelPatch.BravoHotelPatchWidget.ReceiveReadyToInstallPatch
inline void UBravoHotelPatchWidget::ReceiveReadyToInstallPatch() {
	static auto fn = UObject::FindObject<UFunction>("Function BravoHotelPatch.BravoHotelPatchWidget.ReceiveReadyToInstallPatch");

	struct ReceiveReadyToInstallPatch_Params {
		
	}; ReceiveReadyToInstallPatch_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BravoHotelPatch.BravoHotelPatchWidget.ReceiveErrorPatchService
inline void UBravoHotelPatchWidget::ReceiveErrorPatchService(enum class Unknow ErrorCode, struct FText& ErrorText) {
	static auto fn = UObject::FindObject<UFunction>("Function BravoHotelPatch.BravoHotelPatchWidget.ReceiveErrorPatchService");

	struct ReceiveErrorPatchService_Params {
		enum class Unknow ErrorCode;
		struct FText& ErrorText;
	}; ReceiveErrorPatchService_Params Params;

	Params.ErrorCode = ErrorCode;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	ErrorText = Params.ErrorText;

}

// Function BravoHotelPatch.BravoHotelPatchWidget.GetVersionText
inline struct FText UBravoHotelPatchWidget::GetVersionText() {
	static auto fn = UObject::FindObject<UFunction>("Function BravoHotelPatch.BravoHotelPatchWidget.GetVersionText");

	struct GetVersionText_Params {
		
		struct FText ReturnValue;

	}; GetVersionText_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function BravoHotelPatch.BravoHotelPatchWidget.GetGameDefaultMap
inline struct FString UBravoHotelPatchWidget::GetGameDefaultMap() {
	static auto fn = UObject::FindObject<UFunction>("Function BravoHotelPatch.BravoHotelPatchWidget.GetGameDefaultMap");

	struct GetGameDefaultMap_Params {
		
		struct FString ReturnValue;

	}; GetGameDefaultMap_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function BravoHotelPatch.BravoHotelPatchWidget.GetDownloadText
inline struct FText UBravoHotelPatchWidget::GetDownloadText() {
	static auto fn = UObject::FindObject<UFunction>("Function BravoHotelPatch.BravoHotelPatchWidget.GetDownloadText");

	struct GetDownloadText_Params {
		
		struct FText ReturnValue;

	}; GetDownloadText_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

