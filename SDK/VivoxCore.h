// Enum VivoxCore.DeviceType
enum class DeviceType : uint8_t {
	NullDevice = 0,
	SpecificDevice = 1,
	DefaultSystemDevice = 2,
	DefaultCommunicationDevice = 3,
	DeviceType_MAX = 4,
};

// Enum VivoxCore.EAudioFadeModel
enum class EAudioFadeModel : uint8_t {
	InverseByDistance = 0,
	LinearByDistance = 1,
	ExponentialByDistance = 2,
	EAudioFadeModel_MAX = 3,
};

// Enum VivoxCore.ChannelType
enum class ChannelType : uint8_t {
	NonPositional = 0,
	Positional = 1,
	Echo = 2,
	ChannelType_MAX = 3,
};

// Enum VivoxCore.ConnectionState
enum class ConnectionState : uint8_t {
	Disconnected = 0,
	Connecting = 1,
	Connected = 2,
	Disconnecting = 3,
	ConnectionState_MAX = 4,
};

// Enum VivoxCore.ParticipantSpeakingUpdateRate
enum class ParticipantSpeakingUpdateRate : uint8_t {
	StateChange = 0,
	Never = 1,
	Update1Hz = 2,
	Update5Hz = 3,
	Update10Hz = 4,
	ParticipantSpeakingUpdateRate_MAX = 5,
};

// Enum VivoxCore.TransmissionMode
enum class TransmissionMode : uint8_t {
	None = 0,
	Single = 1,
	All = 2,
	TransmissionMode_MAX = 3,
};

// Enum VivoxCore.SubscriptionReply
enum class SubscriptionReply : uint8_t {
	Allow = 0,
	Block = 1,
	SubscriptionReply_MAX = 2,
};

// Enum VivoxCore.SubscriptionMode
enum class SubscriptionMode : uint8_t {
	Accept = 0,
	Block = 1,
	Defer = 2,
	SubscriptionMode_MAX = 3,
};

// Enum VivoxCore.LoginState
enum class LoginState : uint8_t {
	LoggedOut = 0,
	LoggingIn = 1,
	LoggedIn = 2,
	LoggingOut = 3,
	LoginState_MAX = 4,
};

// Enum VivoxCore.TTSMessageState
enum class TTSMessageState : uint8_t {
	Playing = 0,
	Enqueued = 1,
	TTSMessageState_MAX = 2,
};

// Enum VivoxCore.TTSDestination
enum class TTSDestination : uint8_t {
	Default = 0,
	RemoteTransmission = 0,
	LocalPlayback = 1,
	RemoteTransmissionWithLocalPlayback = 2,
	QueuedRemoteTransmission = 3,
	QueuedLocalPlayback = 4,
	QueuedRemoteTransmissionWithLocalPlayback = 5,
	ScreenReader = 6,
	TTSDestination_MAX = 7,
};

// Enum VivoxCore.PresenceStatus
enum class PresenceStatus : uint8_t {
	Unavailable = 0,
	Available = 1,
	Chat = 2,
	DoNotDisturb = 3,
	Away = 4,
	ExtendedAway = 5,
	PresenceStatus_MAX = 6,
};

