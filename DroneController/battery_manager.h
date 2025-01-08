#pragma once
#ifndef BATTERY_MANAGER_H
#define BATTERY_MANAGER_H

class BatteryManager {
public:
    // Проверка уровня заряда батареи
    void checkBatteryLevel();

    // Уведомление о низком уровне заряда
    void notifyLowBattery();
};

#endif
