#include <iostream>
<<<<<<< HEAD
#include "communication/server_comm.h"
#include "communication/dronebox_comm.h"
#include "communication/comm_manager.h"
#include "communication/flight_controller_comm.h"
#include "mechanisms/actuator_control.h"
#include "mechanisms/cargo_bay_control.h"
#include "power/battery_manager.h"
#include "power/power_monitoring.h"
#include "sensors/sensor_manager.h"
#include "sensors/diagnostics.h"
#include "telemetry/telemetry_logger.h"
#include "telemetry/equipment_monitor.h"
#include "utils/config_loader.h"
#include "utils/logger.h"
#include "utils/error_handler.h"
#include "utils/secure_channel.h"

int main() {
    try {
        // Ð˜Ð½Ð¸Ñ†Ð¸Ð°Ð»Ð¸Ð·Ð°Ñ†Ð¸Ñ Ð»Ð¾Ð³Ð³ÐµÑ€Ð°
        Logger::logInfo("Initializing Kolibri Drone System...");

        // Ð—Ð°Ð³Ñ€ÑƒÐ·ÐºÐ° ÐºÐ¾Ð½Ñ„Ð¸Ð³ÑƒÑ€Ð°Ñ†Ð¸Ð¸
        ConfigLoader config;
        config.loadConfig("config.txt");
        std::string serverAddress = config.getValue("server_address");

        // Ð£ÑÑ‚Ð°Ð½Ð¾Ð²Ð»ÐµÐ½Ð¸Ðµ Ð·Ð°Ñ‰Ð¸Ñ‰Ñ‘Ð½Ð½Ð¾Ð³Ð¾ ÑÐ¾ÐµÐ´Ð¸Ð½ÐµÐ½Ð¸Ñ
        SecureChannel secureChannel;
        secureChannel.establishConnection(serverAddress);

        // ÐœÐµÐ½ÐµÐ´Ð¶ÐµÑ€ ÑÐ²ÑÐ·Ð¸
        CommManager commManager;
        commManager.manageGSM("enable");
        commManager.manageWiFi("enable");

        // Ð£Ð¿Ñ€Ð°Ð²Ð»ÐµÐ½Ð¸Ðµ Ð¼ÐµÑ…Ð°Ð½Ð¸Ð·Ð¼Ð°Ð¼Ð¸
        ActuatorControl actuators;
        actuators.initializeActuators();

        CargoBayControl cargoBay;
        cargoBay.openCargoBay();
        cargoBay.closeCargoBay();

        // Ð£Ð¿Ñ€Ð°Ð²Ð»ÐµÐ½Ð¸Ðµ Ð¿Ð¸Ñ‚Ð°Ð½Ð¸ÐµÐ¼
        BatteryManager batteryManager;
        batteryManager.initializeBatterySystem();
        if (batteryManager.isBatteryLow()) {
            batteryManager.startCharging();
        }

        PowerMonitoring powerMonitoring;
        powerMonitoring.calculatePowerConsumption();
        if (!powerMonitoring.isPowerStable()) {
            Logger::logWarning("Power instability detected!");
        }

        // Ð£Ð¿Ñ€Ð°Ð²Ð»ÐµÐ½Ð¸Ðµ Ð´Ð°Ñ‚Ñ‡Ð¸ÐºÐ°Ð¼Ð¸
        SensorManager sensorManager;
        sensorManager.initializeSensors();

        Diagnostics diagnostics(sensorManager);
        if (!diagnostics.runDiagnostics()) {
            Logger::logWarning("Sensor diagnostics detected issues.");
        }

        // Ð¢ÐµÐ»ÐµÐ¼ÐµÑ‚Ñ€Ð¸Ñ
        TelemetryLogger telemetryLogger;
        telemetryLogger.logData("altitude", 120.5);
        telemetryLogger.logData("speed", 25.3);
        telemetryLogger.logData("temperature", 36.7);

        telemetryLogger.sendToServer(serverAddress);

        EquipmentMonitor equipmentMonitor;
        equipmentMonitor.checkBatteryHealth();
        equipmentMonitor.checkSensorStatus();
        equipmentMonitor.checkCommunicationLinks();
        equipmentMonitor.logStatus();

        // Ð£Ð¿Ñ€Ð°Ð²Ð»ÐµÐ½Ð¸Ðµ Ð¿Ð¾Ð»Ñ‘Ñ‚Ð½Ñ‹Ð¼ ÐºÐ¾Ð½Ñ‚Ñ€Ð¾Ð»Ð»ÐµÑ€Ð¾Ð¼
        FlightControllerComm flightController;
        flightController.sendCommand("TakeOff");
        std::string telemetry = flightController.getTelemetry();
        Logger::logInfo("Flight telemetry: " + telemetry);

        Logger::logInfo("Kolibri Drone System shutdown successfully.");
    } catch (const std::exception& e) {
        // ÐžÐ±Ñ€Ð°Ð±Ð¾Ñ‚ÐºÐ° Ð¾ÑˆÐ¸Ð±Ð¾Ðº
        ErrorHandler::handleError(e.what());
    }

=======
#include "logger.h"
#include "comm_manager.h"
#include "actuator_control.h"
#include "sensor_manager.h"
#include "error_handler.h"


int main() {
    Logger::logInfo("Çàïóñê ïðîãðàììû...");

    // Ñîçäàíèå ýêçåìïëÿðîâ êëàññîâ
    CommManager comm_manager;
    ActuatorControl actuator_control;
    SensorManager sensor_manager;

    try {
        // Ïîäêëþ÷åíèå ê ñåðâåðó
        Logger::logInfo("Ïîäêëþ÷åíèå ê ñåðâåðó...");
        comm_manager.connectToServer();

        // Èíèöèàëèçàöèÿ äàò÷èêîâ
        Logger::logInfo("Èíèöèàëèçàöèÿ äàò÷èêîâ...");
        sensor_manager.initializeSensors();

        // Óïðàâëåíèå ìåõàíèçìàìè
        Logger::logInfo("Îòêðûòèå ãðóçîâîãî îòñåêà...");
        actuator_control.openCargoBay();

        Logger::logInfo("Çàêðûòèå ãðóçîâîãî îòñåêà...");
        actuator_control.closeCargoBay();

    }
    catch (const std::exception& ex) {
        ErrorHandler::handleError(ex.what());
    }

    Logger::logInfo("Çàâåðøåíèå ïðîãðàììû.");
>>>>>>> a219246406ed763c4bc64259160dfa1b095d3212
    return 0;
}
