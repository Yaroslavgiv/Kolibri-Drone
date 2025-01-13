#include "diagnostics.h"
#include <iostream>

// Конструктор
Diagnostics::Diagnostics(SensorManager& sensorManager)
    : sensorManager(sensorManager) {
    std::cout << "Diagnostics module initialized." << std::endl;
}

// Деструктор
Diagnostics::~Diagnostics() {
    std::cout << "Diagnostics module resources released." << std::endl;
}

// Выполнить диагностику
bool Diagnostics::runDiagnostics() {
    std::cout << "Running diagnostics on all sensors..." << std::endl;
    faultySensors.clear();

    // Проверка всех датчиков
    auto allSensors = sensorManager.readAllSensors();
    for (const auto& sensor : allSensors) {
        if (!checkSensor(sensor)) {
            faultySensors.push_back(sensor);
        }
    }

    if (!faultySensors.empty()) {
        std::cerr << "Diagnostics completed: Some sensors are faulty." << std::endl;
        return false;
    }

    std::cout << "Diagnostics completed: All sensors are functional." << std::endl;
    return true;
}

// Получить список неисправных датчиков
std::vector<SensorData> Diagnostics::getFaultySensors() {
    return faultySensors;
}

// Проверить состояние датчика
bool Diagnostics::checkSensor(const SensorData& data) {
    // Логика проверки допустимых значений
    switch (data.type) {
        case SensorType::TEMPERATURE:
            return data.value > -40 && data.value < 85;
        case SensorType::HUMIDITY:
            return data.value >= 0 && data.value <= 100;
        case SensorType::PRESSURE:
            return data.value >= 900 && data.value <= 1100;
        case SensorType::BATTERY_LEVEL:
            return data.value > 10; // Заряд батареи должен быть больше 10%
        default:
            return false;
    }
}
