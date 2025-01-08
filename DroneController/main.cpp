#include <iostream>
#include "logger.h"
#include "comm_manager.h"
#include "actuator_control.h"
#include "sensor_manager.h"
#include "error_handler.h"


int main() {
    Logger::logInfo("Запуск программы...");

    // Создание экземпляров классов
    CommManager comm_manager;
    ActuatorControl actuator_control;
    SensorManager sensor_manager;

    try {
        // Подключение к серверу
        Logger::logInfo("Подключение к серверу...");
        comm_manager.connectToServer();

        // Инициализация датчиков
        Logger::logInfo("Инициализация датчиков...");
        sensor_manager.initializeSensors();

        // Управление механизмами
        Logger::logInfo("Открытие грузового отсека...");
        actuator_control.openCargoBay();

        Logger::logInfo("Закрытие грузового отсека...");
        actuator_control.closeCargoBay();

    }
    catch (const std::exception& ex) {
        ErrorHandler::handleError(ex.what());
    }

    Logger::logInfo("Завершение программы.");
    return 0;
}
