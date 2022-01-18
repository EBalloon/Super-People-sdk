// Enum LocationServicesBPLibrary.ELocationAccuracy
enum class ELocationAccuracy : uint8_t {
	LA_ThreeKilometers = 0,
	LA_OneKilometer = 1,
	LA_HundredMeters = 2,
	LA_TenMeters = 3,
	LA_Best = 4,
	LA_Navigation = 5,
	LA_MAX = 6,
};

// Class LocationServicesBPLibrary.LocationServicesImpl
class ULocationServicesImpl : public Object {

public:

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

