// BlueprintGeneratedClass BP-TitleHUD.BP-TitleHUD_C
class ABP-TitleHUD_C : public ABravoHotelTitleHUD {

public:

	struct Unknown DefaultSceneRoot; // 0x4A0 (8)
	struct Unknown MediaSoundComponent; // 0x4A8 (8)
	struct FMulticastInlineDelegate EventDispatcher_PlayLobbySound; // 0x4B0 (16)
	struct FMulticastInlineDelegate EventDispatcher_StopLobbySound; // 0x4C0 (16)

	void EventDispatcher_StopLobbySound__DelegateSignature(); // Function BP-TitleHUD.BP-TitleHUD_C.EventDispatcher_StopLobbySound__DelegateSignature(Public|Delegate|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void EventDispatcher_PlayLobbySound__DelegateSignature(); // Function BP-TitleHUD.BP-TitleHUD_C.EventDispatcher_PlayLobbySound__DelegateSignature(Public|Delegate|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
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

