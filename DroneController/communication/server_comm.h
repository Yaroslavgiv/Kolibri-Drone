#pragma once
#ifndef SERVER_COMM_H
#define SERVER_COMM_H

class ServerComm {
public:
    // Подключение к серверу
    void connectToServer();

    // Отправка данных на сервер
    void sendDataToServer(const std::string& data);

    // Получение команды от сервера
    std::string receiveServerCommand();
};

#endif
