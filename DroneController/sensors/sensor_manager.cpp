#include "sensor_manager.h"
#include <iostream>
#include <random> // Для эмуляции данных

// Конструктор
SensorManager::SensorManager() {
    std::cout << "SensorManager initialized." << std::endl;
}

// Деструктор
SensorManager::~SensorManager() {
    std::cout << "SensorManager resources released." << std::endl;
}

// Инициализация всех датчиков
void SensorManager::initializeSensors() {
    std::cout << "Initializing sensors..." << std::endl;

    // Инициализация каждого типа датчика
    for (SensorType type : {SensorType::TEMPERATURE, SensorType::HUMIDITY, SensorType::PRESSURE, SensorType::BATTERY_LEVEL}) {
        SensorData data = {type, 0.0};
        sensorDataCache.push_back(data);
    }

    std::cout << "Sensors initialized successfully." << std::endl;
}

// Чтение данных с одного датчика
SensorData SensorManager::readSensor(SensorType type) {
    double value = fetchSensorData(type);
    for (auto& data : sensorDataCache) {
        if (data.type == type) {
            data.value = value;
            break;
        }
    }
    std::cout << "Read sensor [" << static_cast<int>(type) << "]: " << value << std::endl;
    return {type, value};
}

// Чтение данных со всех датчиков
std::vector<SensorData> SensorManager::readAllSensors() {
    std::cout << "Reading all sensors..." << std::endl;
    for (auto& data : sensorDataCache) {
        data.value = fetchSensorData(data.type);
    }
    return sensorDataCache;
}

// Калибровка датчика
bool SensorManager::calibrateSensor(SensorType type) {
    std::cout << "Calibrating sensor [" << static_cast<int>(type) << "]..." << std::endl;

    // Заглушка: логика калибровки датчиков
    std::cout << "Sensor [" << static_cast<int>(type) << "] calibrated successfully." << std::endl;
    return true;
}

// Вспомогательная функция для получения данных с датчика
double SensorManager::fetchSensorData(SensorType type) {
    // Пример реальной логики: чтение через I2C/SPI
    switch (type) {
        case SensorType::TEMPERATURE:
            return 25.0 + static_cast<double>(std::rand() % 500) / 100.0; // Эмуляция температуры
        case SensorType::HUMIDITY:
            return 50.0 + static_cast<double>(std::rand() % 200) / 10.0;  // Эмуляция влажности
        case SensorType::PRESSURE:
            return 1013.0 + static_cast<double>(std::rand() % 100) / 10.0; // Эмуляция давления
        case SensorType::BATTERY_LEVEL:
            return 75.0 + static_cast<double>(std::rand() % 25);          // Эмуляция уровня заряда батареи
        default:
            return 0.0;
    }
}
