// Class ImgMediaFactory.ImgMediaSettings
class UImgMediaSettings : public Object {

public:

	struct Unknown DefaultFrameRate; // 0x28 (8)
	float CacheBehindPercentage; // 0x30 (4)
	float CacheSizeGB; // 0x34 (4)
	int32_t CacheThreads; // 0x38 (4)
	int32_t CacheThreadStackSizeKB; // 0x3C (4)
	float GlobalCacheSizeGB; // 0x40 (4)
	char UseGlobalCache : 0; // 0x44 (1)
	uint32_t ExrDecoderThreads; // 0x48 (4)
	struct FString DefaultProxy; // 0x50 (16)
	char UseDefaultProxy : 0; // 0x60 (1)
};

