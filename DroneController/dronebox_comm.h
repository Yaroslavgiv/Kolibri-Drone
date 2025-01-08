#pragma once
#ifndef DRONEBOX_COMM_H
#define DRONEBOX_COMM_H

class DroneboxComm {
public:
    // Подключение к дронбоксу
    void connectToDronebox();

    // Отправка команды на дронбокс
    void sendCommandToDronebox(const std::string& command);

    // Получение статуса от дронбокса
    std::string getDroneboxStatus();
};

#endif
