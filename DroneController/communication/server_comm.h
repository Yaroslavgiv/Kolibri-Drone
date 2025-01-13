<<<<<<< HEAD
#ifndef SERVER_COMM_H
#define SERVER_COMM_H

#include <string>

class ServerComm {
public:
    ServerComm();                          // ÐšÐ¾Ð½ÑÑ‚Ñ€ÑƒÐºÑ‚Ð¾Ñ€
    ~ServerComm();                         // Ð”ÐµÑÑ‚Ñ€ÑƒÐºÑ‚Ð¾Ñ€

    void connectToServer(const std::string& serverAddress); // Ð£ÑÑ‚Ð°Ð½Ð¾Ð²Ð¸Ñ‚ÑŒ ÑÐ¾ÐµÐ´Ð¸Ð½ÐµÐ½Ð¸Ðµ Ñ ÑÐµÑ€Ð²ÐµÑ€Ð¾Ð¼
    void sendData(const std::string& data);                 // ÐžÑ‚Ð¿Ñ€Ð°Ð²Ð¸Ñ‚ÑŒ Ð´Ð°Ð½Ð½Ñ‹Ðµ Ð½Ð° ÑÐµÑ€Ð²ÐµÑ€
    std::string receiveData();                              // ÐŸÐ¾Ð»ÑƒÑ‡Ð¸Ñ‚ÑŒ Ð´Ð°Ð½Ð½Ñ‹Ðµ Ñ ÑÐµÑ€Ð²ÐµÑ€Ð°

private:
    std::string serverAddress;            // ÐÐ´Ñ€ÐµÑ ÑÐµÑ€Ð²ÐµÑ€Ð°
    static size_t writeCallback(void* contents, size_t size, size_t nmemb, std::string* userData);
};

#endif // SERVER_COMM_H
=======
#pragma once
#ifndef SERVER_COMM_H
#define SERVER_COMM_H

class ServerComm {
public:
    // Ïîäêëþ÷åíèå ê ñåðâåðó
    void connectToServer();

    // Îòïðàâêà äàííûõ íà ñåðâåð
    void sendDataToServer(const std::string& data);

    // Ïîëó÷åíèå êîìàíäû îò ñåðâåðà
    std::string receiveServerCommand();
};

#endif
>>>>>>> a219246406ed763c4bc64259160dfa1b095d3212
