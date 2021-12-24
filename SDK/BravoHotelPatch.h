// Enum BravoHotelPatch.EPatchServiceError
enum class EPatchServiceError : uint8_t {
	EPatchServiceError = 0,
	EPatchServiceError = 1,
	EPatchServiceError = 2,
	EPatchServiceError = 3,
	EPatchServiceError = 4,
	EPatchServiceError = 5,
};

// Class BravoHotelPatch.BravoHotelPatchWidget
class UBravoHotelPatchWidget : public UUserWidget {

public:

	struct Unknown PatchService; // 0x268 (8)

	void StartPatchService(); // Function BravoHotelPatch.BravoHotelPatchWidget.StartPatchService(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2066D30>
	void ReceiveStartPatchService(); // Function BravoHotelPatch.BravoHotelPatchWidget.ReceiveStartPatchService(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ReceiveReadyToStartGame(); // Function BravoHotelPatch.BravoHotelPatchWidget.ReceiveReadyToStartGame(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ReceiveReadyToInstallPatch(); // Function BravoHotelPatch.BravoHotelPatchWidget.ReceiveReadyToInstallPatch(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ReceiveErrorPatchService(enum class Unknow ErrorCode, struct FText& ErrorText); // Function BravoHotelPatch.BravoHotelPatchWidget.ReceiveErrorPatchService(Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	struct FText GetVersionText(); // Function BravoHotelPatch.BravoHotelPatchWidget.GetVersionText(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2066C90>
	struct FString GetGameDefaultMap(); // Function BravoHotelPatch.BravoHotelPatchWidget.GetGameDefaultMap(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2066C10>
	struct FText GetDownloadText(); // Function BravoHotelPatch.BravoHotelPatchWidget.GetDownloadText(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2066B70>
};

