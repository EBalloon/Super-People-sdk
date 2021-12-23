// Enum BravoHotelPatch.EPatchServiceError
enum class EPatchServiceError : uint8 {
	EPatchServiceError = 0
	EPatchServiceError = 1
	EPatchServiceError = 2
	EPatchServiceError = 3
	EPatchServiceError = 4
	EPatchServiceError = 5
};

// Class BravoHotelPatch.BravoHotelPatchWidget
struct UBravoHotelPatchWidget : UUserWidget {
	struct Unknown PatchService; // 0x268 (8)

	void StartPatchService(); // Function BravoHotelPatch.BravoHotelPatchWidget.StartPatchService(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2065AA0>
	void ReceiveStartPatchService(); // Function BravoHotelPatch.BravoHotelPatchWidget.ReceiveStartPatchService(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ReceiveReadyToStartGame(); // Function BravoHotelPatch.BravoHotelPatchWidget.ReceiveReadyToStartGame(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ReceiveReadyToInstallPatch(); // Function BravoHotelPatch.BravoHotelPatchWidget.ReceiveReadyToInstallPatch(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ReceiveErrorPatchService(enum class Unknow ErrorCode, struct FText& ErrorText); // Function BravoHotelPatch.BravoHotelPatchWidget.ReceiveErrorPatchService(Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	struct FText GetVersionText(); // Function BravoHotelPatch.BravoHotelPatchWidget.GetVersionText(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2065A00>
	struct FString GetGameDefaultMap(); // Function BravoHotelPatch.BravoHotelPatchWidget.GetGameDefaultMap(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2065980>
	struct FText GetDownloadText(); // Function BravoHotelPatch.BravoHotelPatchWidget.GetDownloadText(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x20658E0>
};

