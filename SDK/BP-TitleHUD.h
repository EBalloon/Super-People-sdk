// BlueprintGeneratedClass BP-TitleHUD.BP-TitleHUD_C
class ABP-TitleHUD_C : public ABravoHotelTitleHUD {

public:

	struct Unknown DefaultSceneRoot; // 0x4B8 (8)
	struct Unknown MediaSoundComponent; // 0x4C0 (8)
	struct FMulticastInlineDelegate EventDispatcher_PlayLobbySound; // 0x4C8 (16)
	struct FMulticastInlineDelegate EventDispatcher_StopLobbySound; // 0x4D8 (16)

	void EventDispatcher_StopLobbySound__DelegateSignature(); // Function BP-TitleHUD.BP-TitleHUD_C.EventDispatcher_StopLobbySound__DelegateSignature(Public|Delegate|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void EventDispatcher_PlayLobbySound__DelegateSignature(); // Function BP-TitleHUD.BP-TitleHUD_C.EventDispatcher_PlayLobbySound__DelegateSignature(Public|Delegate|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
};

// Function BP-TitleHUD.BP-TitleHUD_C.EventDispatcher_StopLobbySound__DelegateSignature
inline void ABP-TitleHUD_C::EventDispatcher_StopLobbySound__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-TitleHUD.BP-TitleHUD_C.EventDispatcher_StopLobbySound__DelegateSignature");

	struct EventDispatcher_StopLobbySound__DelegateSignature_Params {
		
	}; EventDispatcher_StopLobbySound__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-TitleHUD.BP-TitleHUD_C.EventDispatcher_PlayLobbySound__DelegateSignature
inline void ABP-TitleHUD_C::EventDispatcher_PlayLobbySound__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-TitleHUD.BP-TitleHUD_C.EventDispatcher_PlayLobbySound__DelegateSignature");

	struct EventDispatcher_PlayLobbySound__DelegateSignature_Params {
		
	}; EventDispatcher_PlayLobbySound__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

