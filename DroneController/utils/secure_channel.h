#ifndef SECURE_CHANNEL_H
#define SECURE_CHANNEL_H

#include <string>

class SecureChannel {
public:
    SecureChannel();                               // Конструктор
    ~SecureChannel();                              // Деструктор

    void establishConnection(const std::string& address); // Установить защищённое соединение
    void sendData(const std::string& data);               // Отправить данные
    std::string receiveData();                            // Получить данные

private:
    std::string connectionAddress;                        // Адрес соединения
    bool isConnected;                                     // Статус соединения
};

#endif // SECURE_CHANNEL_H
