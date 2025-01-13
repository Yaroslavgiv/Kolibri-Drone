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
