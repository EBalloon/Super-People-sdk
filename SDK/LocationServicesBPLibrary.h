// Enum LocationServicesBPLibrary.ELocationAccuracy
enum class ELocationAccuracy : uint8 {
	ELocationAccuracy = 0
	ELocationAccuracy = 1
	ELocationAccuracy = 2
	ELocationAccuracy = 3
	ELocationAccuracy = 4
	ELocationAccuracy = 5
	ELocationAccuracy = 6
};

// Class LocationServicesBPLibrary.LocationServicesImpl
class ULocationServicesImpl : Object {
	struct FMulticastInlineDelegate OnLocationChanged; // 0x28 (16)
};

// ScriptStruct LocationServicesBPLibrary.LocationServicesData
struct FLocationServicesData {
	float Timestamp; // 0x0 (4)
	float Longitude; // 0x4 (4)
	float Latitude; // 0x8 (4)
	float HorizontalAccuracy; // 0xC (4)
	float VerticalAccuracy; // 0x10 (4)
	float Altitude; // 0x14 (4)
};

