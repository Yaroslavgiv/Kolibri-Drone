#ifndef FLIGHT_CONTROLLER_COMM_H
#define FLIGHT_CONTROLLER_COMM_H

#include <string>

class FlightControllerComm {
public:
    FlightControllerComm();                          // Конструктор
    ~FlightControllerComm();                         // Деструктор

    void connect();                                  // Установить соединение с полётным контроллером
    void sendCommand(const std::string& command);    // Отправить команду полётному контроллеру
    std::string getTelemetry();                      // Получить данные телеметрии
    bool checkConnection();                          // Проверить соединение с контроллером

private:
    bool isConnected;                                // Состояние соединения
    void handleResponse(const std::string& response); // Обработка ответа от контроллера
};

#endif // FLIGHT_CONTROLLER_COMM_H
