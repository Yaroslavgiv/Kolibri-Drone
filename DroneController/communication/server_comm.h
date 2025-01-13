#ifndef SERVER_COMM_H
#define SERVER_COMM_H

#include <string>

class ServerComm {
public:
    ServerComm();                          // Конструктор
    ~ServerComm();                         // Деструктор

    void connectToServer(const std::string& serverAddress); // Установить соединение с сервером
    void sendData(const std::string& data);                 // Отправить данные на сервер
    std::string receiveData();                              // Получить данные с сервера

private:
    std::string serverAddress;            // Адрес сервера
    static size_t writeCallback(void* contents, size_t size, size_t nmemb, std::string* userData);
};

#endif // SERVER_COMM_H
