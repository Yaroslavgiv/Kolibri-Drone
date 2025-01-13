<<<<<<< HEAD
#ifndef POWER_MONITORING_H
#define POWER_MONITORING_H

#include <string>

class PowerMonitoring {
public:
    PowerMonitoring();                         // Конструктор
    ~PowerMonitoring();                        // Деструктор

    float getVoltage();                        // Получить текущее напряжение
    float getCurrent();                        // Получить текущий ток
    float calculatePowerConsumption();         // Рассчитать энергопотребление
    bool isPowerStable();                      // Проверить стабильность энергоснабжения

private:
    float voltage;                             // Напряжение (в Вольтах)
    float current;                             // Ток (в Амперах)
    float powerConsumption;                    // Энергопотребление (в Ваттах)
};

#endif // POWER_MONITORING_H
=======
#pragma once
#ifndef POWER_MONITORING_H
#define POWER_MONITORING_H

class PowerMonitoring {
public:
    // ��������� �������� ������ ������
    float getBatteryLevel();

    // ���������� �����������������
    void monitorPowerUsage();
};

#endif
>>>>>>> a219246406ed763c4bc64259160dfa1b095d3212
