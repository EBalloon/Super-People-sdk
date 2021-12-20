// Class ImgMedia.ImgMediaSource
struct UImgMediaSource : UBaseMediaSource {
	Unknown FrameRateOverride; //  0x88 Size(8)
	struct FString ProxyOverride; //  0x90 Size(10)
	Unknown SequencePath; //  0xa0 Size(10)

	void SetSequencePath(struct FString Path); // Function ImgMedia.ImgMediaSource.SetSequencePath(Final|Native|Public|BlueprintCallable) // <Game+0x10a8b20>
};
