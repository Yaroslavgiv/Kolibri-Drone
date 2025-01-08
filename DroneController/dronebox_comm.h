#pragma once
#ifndef DRONEBOX_COMM_H
#define DRONEBOX_COMM_H

class DroneboxComm {
public:
    // ����������� � ���������
    void connectToDronebox();

    // �������� ������� �� ��������
    void sendCommandToDronebox(const std::string& command);

    // ��������� ������� �� ���������
    std::string getDroneboxStatus();
};

#endif
