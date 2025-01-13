#ifndef EQUIPMENT_MONITOR_H
#define EQUIPMENT_MONITOR_H

#include <string>

class EquipmentMonitor {
public:
    EquipmentMonitor();                        // Конструктор
    ~EquipmentMonitor();                       // Деструктор

    bool checkBatteryHealth();                 // Проверить состояние батареи
    bool checkSensorStatus();                  // Проверить состояние датчиков
    bool checkCommunicationLinks();            // Проверить каналы связи
    void logStatus();                          // Логирование состояния системы

private:
    bool batteryStatus;                        // Состояние батареи
    bool sensorStatus;                         // Состояние датчиков
    bool communicationStatus;                  // Состояние связи
};

#endif // EQUIPMENT_MONITOR_H
