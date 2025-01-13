<<<<<<< HEAD
#ifndef DRONEBOX_COMM_H
#define DRONEBOX_COMM_H

#include <string>

class DroneboxComm {
public:
    void establishConnection();          // Установить соединение с дронбоксом
    void sendCommand(const std::string& command); // Отправить команду дронбоксу
    std::string getStatus();             // Получить статус дронбокса
};

#endif // DRONEBOX_COMM_H
=======
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
>>>>>>> a219246406ed763c4bc64259160dfa1b095d3212
