#pragma once
#ifndef FLIGHT_CONTROLLER_COMM_H
#define FLIGHT_CONTROLLER_COMM_H

class FlightControllerComm {
public:
    // Подключение к полётному контроллеру
    void connectToFlightController();

    // Отправка команды полётному контроллеру
    void sendFlightCommand(const std::string& command);

    // Получение данных телеметрии
    std::string getTelemetryData();
};

#endif
