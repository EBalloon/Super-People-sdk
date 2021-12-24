// Class ImgMedia.ImgMediaSource
class UImgMediaSource : public UBaseMediaSource {

public:

	struct Unknown FrameRateOverride; // 0x88 (8)
	struct FString ProxyOverride; // 0x90 (16)
	struct Unknown SequencePath; // 0xA0 (16)

	void SetSequencePath(struct FString Path); // Function ImgMedia.ImgMediaSource.SetSequencePath(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x10AA340>
	struct FString GetSequencePath(); // Function ImgMedia.ImgMediaSource.GetSequencePath(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x10AA250>
	void GetProxies(struct TArray<Unknown>& OutProxies); // Function ImgMedia.ImgMediaSource.GetProxies(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x10AA180>
};

