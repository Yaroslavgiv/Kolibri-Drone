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
