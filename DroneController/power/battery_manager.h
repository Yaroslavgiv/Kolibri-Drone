#pragma once
#ifndef BATTERY_MANAGER_H
#define BATTERY_MANAGER_H

class BatteryManager {
public:
    // �������� ������ ������ �������
    void checkBatteryLevel();

    // ����������� � ������ ������ ������
    void notifyLowBattery();
};

#endif
