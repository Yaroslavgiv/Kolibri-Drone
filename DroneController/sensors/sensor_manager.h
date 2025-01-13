#ifndef SENSOR_MANAGER_H
#define SENSOR_MANAGER_H

#include <string>
#include <vector>

enum class SensorType {
    TEMPERATURE,      // Датчик температуры
    HUMIDITY,         // Датчик влажности
    PRESSURE,         // Датчик давления
    BATTERY_LEVEL     // Датчик уровня заряда батареи
};

struct SensorData {
    SensorType type;     // Тип датчика
    double value;        // Текущее значение датчика
};

class SensorManager {
public:
    SensorManager();                            // Конструктор
    ~SensorManager();                           // Деструктор

    void initializeSensors();                   // Инициализация всех датчиков
    SensorData readSensor(SensorType type);     // Чтение данных с одного датчика
    std::vector<SensorData> readAllSensors();   // Чтение данных со всех датчиков
    bool calibrateSensor(SensorType type);      // Калибровка датчика

private:
    std::vector<SensorData> sensorDataCache;    // Кэшированные данные датчиков
    double fetchSensorData(SensorType type);    // Вспомогательная функция для получения данных
};

#endif // SENSOR_MANAGER_H
