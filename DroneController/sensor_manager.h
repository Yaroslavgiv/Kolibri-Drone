#pragma once
#ifndef SENSOR_MANAGER_H
#define SENSOR_MANAGER_H

class SensorManager {
public:
    // Инициализация всех датчиков
    void initializeSensors();

    // Чтение данных с датчиков
    void readSensorData();
};

#endif
