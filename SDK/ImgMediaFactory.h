// Class ImgMediaFactory.ImgMediaSettings
struct UImgMediaSettings : Object {
	Unknown DefaultFrameRate; //  0x28 Size(8)
	float CacheBehindPercentage; //  0x30 Size(4)
	float CacheSizeGB; //  0x34 Size(4)
	int32_t CacheThreads; //  0x38 Size(4)
	int32_t CacheThreadStackSizeKB; //  0x3c Size(4)
	float Glob; //  0x40 Size(4)
	char UseGlobalCache; //  0x44 Size(1)
	uint32_t ExrDecoderThreads; //  0x48 Size(4)
	struct FString DefaultProxy; //  0x50 Size(10)
	char UseDefaultProxy; //  0x60 Size(1)
};

