<<<<<<< HEAD
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
=======
#pragma once
#ifndef EQUIPMENT_MONITOR_H
#define EQUIPMENT_MONITOR_H

class EquipmentMonitor {
public:
    // ���������� ��������� ���� ������� ������������
    void monitorEquipment();

    // ����������� ��������� �������
    void runDiagnostics();
};

#endif
>>>>>>> a219246406ed763c4bc64259160dfa1b095d3212
