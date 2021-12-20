// WidgetBlueprintGeneratedClass Comp.Chat_Message_C
struct UChat_Message_C : UUserWidget {
	Unknown UberGraphFrame; //  0x248 Size(8)
	Unknown Message; //  0x250 Size(8)
	Unknown Username; //  0x258 Size(8)
	struct FText UserName; //  0x260 Size(18)
	struct FText Text; //  0x278 Size(18)
	Unknown Username; //  0x290 Size(10)
	Unknown Message; //  0x2a0 Size(10)

	void Construct(); // Function Comp.Chat_Message_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <Game+0x23a73f0>
};

// WidgetBlueprintGeneratedClass Comp.Chat_Tab_C
struct UChat_Tab_C : UUserWidget {
	Unknown UberGraphFrame; //  0x248 Size(8)
	Unknown Button; //  0x250 Size(8)
	Unknown Button; //  0x258 Size(8)
	struct FText Button; //  0x260 Size(18)
	Unknown Active; //  0x278 Size(10)
	Unknown Inactive; //  0x288 Size(10)
	char Tab; //  0x298 Size(1)
	Unknown Current; //  0x29c Size(10)
	Unknown Parent; //  0x2b0 Size(8)
	Unknown Chat; //  0x2b8 Size(8)
	Unknown Notification; //  0x2c0 Size(10)
	float Interp; //  0x2d0 Size(4)
	float Notification; //  0x2d4 Size(4)
	float Notification; //  0x2d8 Size(4)
	char Fading; //  0x2dc Size(1)

	Unknown OnFocusReceived(Unknown MyGeometry, Unknown InFocusEvent); // Function Comp.Chat_Tab_C.OnFocusReceived(BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game+0x23a73f0>
};

// WidgetBlueprintGeneratedClass Comp.Chat_DialogBox_C
struct UChat_DialogBox_C : UUserWidget {
	Unknown Chat; //  0x248 Size(8)
	struct FString Group; //  0x250 Size(10)
};

