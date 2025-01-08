#pragma once
#ifndef POWER_MONITORING_H
#define POWER_MONITORING_H

class PowerMonitoring {
public:
    // Получение текущего уровня заряда
    float getBatteryLevel();

    // Мониторинг энергопотребления
    void monitorPowerUsage();
};

#endif
