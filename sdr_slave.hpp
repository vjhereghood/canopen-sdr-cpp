// CANopen Slave Implementation Header

#ifndef SDR_SLAVE_HPP
#define SDR_SLAVE_HPP

#include <cstdint>
#include <string>

// Enumeration for SDR Modes
enum class SDRMode {
    Mode1,
    Mode2,
    // Add more modes as needed
};

// Enumeration for Reset Commands
enum class ResetCommand {
    SoftReset,
    HardReset,
};

// Struct for Version Information
struct Versions {
    uint16_t versionNumber;
    std::string versionString;
};

// Struct for System Information
struct SystemInfo {
    uint32_t id;
    std::string manufacturer;
    std::string serialNumber;
};

// Struct for Transmit Settings
struct TXSettings {
    uint32_t transmissionRate;
    // Add more fields as needed
};

// Struct for Receive Settings
struct RXSettings {
    uint32_t receptionRate;
    // Add more fields as needed
};

// Struct for Sensor Readings
struct SensorReadings {
    float temperature;
    float pressure;
    // Add more sensor fields as needed
};

// Struct for Transmit Statistics
struct TXStats {
    uint32_t messagesSent;
    uint32_t errors;
};

// Struct for Receive Statistics
struct RXStats {
    uint32_t messagesReceived;
    uint32_t lostMessages;
};

class CANopenSlave {
public:
    // Mandatory Object Getters and Setters
    virtual Versions getVersions() const;
    virtual void setVersions(const Versions& versions);
    // Implement other mandatory object getters/setters

    // Optional Object Getters and Setters
    virtual void setOptionalObject1(/* params */);
    // Implement other optional object getters/setters

    // Manufacturer Object Getters and Setters
    virtual void setManufacturerObject1(/* params */);
    // Implement other manufacturer object getters/setters

    // Other methods for CANopen slave functionality
};

#endif // SDR_SLAVE_HPP