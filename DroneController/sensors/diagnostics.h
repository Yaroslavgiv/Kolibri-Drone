#ifndef DIAGNOSTICS_H
#define DIAGNOSTICS_H

#include <vector>
#include "sensor_manager.h"

class Diagnostics {
public:
    Diagnostics(SensorManager& sensorManager);   // Конструктор
    ~Diagnostics();                              // Деструктор

    bool runDiagnostics();                       // Выполнить диагностику
    std::vector<SensorData> getFaultySensors();  // Получить список неисправных датчиков

private:
    SensorManager& sensorManager;                // Ссылка на менеджер датчиков
    std::vector<SensorData> faultySensors;       // Список неисправных датчиков
    bool checkSensor(const SensorData& data);    // Проверить состояние датчика
};

#endif // DIAGNOSTICS_H
