#pragma once
#ifndef FLIGHT_CONTROLLER_COMM_H
#define FLIGHT_CONTROLLER_COMM_H

class FlightControllerComm {
public:
    // ����������� � �������� �����������
    void connectToFlightController();

    // �������� ������� �������� �����������
    void sendFlightCommand(const std::string& command);

    // ��������� ������ ����������
    std::string getTelemetryData();
};

#endif
