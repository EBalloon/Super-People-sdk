// Class UObjectPlugin.MyPluginObject
class UMyPluginObject : public Object {

public:

	struct FMyPluginStruct MyStruct; // 0x28 (16)
};

// ScriptStruct UObjectPlugin.MyPluginStruct
struct FMyPluginStruct {
	struct FString TestString; // 0x0 (16)
};

