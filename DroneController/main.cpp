#include <iostream>
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
        // Инициализация логгера
        Logger::logInfo("Initializing Kolibri Drone System...");

        // Загрузка конфигурации
        ConfigLoader config;
        config.loadConfig("config.txt");
        std::string serverAddress = config.getValue("server_address");

        // Установление защищённого соединения
        SecureChannel secureChannel;
        secureChannel.establishConnection(serverAddress);

        // Менеджер связи
        CommManager commManager;
        commManager.manageGSM("enable");
        commManager.manageWiFi("enable");

        // Управление механизмами
        ActuatorControl actuators;
        actuators.initializeActuators();

        CargoBayControl cargoBay;
        cargoBay.openCargoBay();
        cargoBay.closeCargoBay();

        // Управление питанием
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

        // Управление датчиками
        SensorManager sensorManager;
        sensorManager.initializeSensors();

        Diagnostics diagnostics(sensorManager);
        if (!diagnostics.runDiagnostics()) {
            Logger::logWarning("Sensor diagnostics detected issues.");
        }

        // Телеметрия
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

        // Управление полётным контроллером
        FlightControllerComm flightController;
        flightController.sendCommand("TakeOff");
        std::string telemetry = flightController.getTelemetry();
        Logger::logInfo("Flight telemetry: " + telemetry);

        Logger::logInfo("Kolibri Drone System shutdown successfully.");
    } catch (const std::exception& e) {
        // Обработка ошибок
        ErrorHandler::handleError(e.what());
    }

    return 0;
}
