<<<<<<< HEAD
#ifndef DRONEBOX_COMM_H
#define DRONEBOX_COMM_H

#include <string>

class DroneboxComm {
public:
    void establishConnection();          // Ð£ÑÑ‚Ð°Ð½Ð¾Ð²Ð¸Ñ‚ÑŒ ÑÐ¾ÐµÐ´Ð¸Ð½ÐµÐ½Ð¸Ðµ Ñ Ð´Ñ€Ð¾Ð½Ð±Ð¾ÐºÑÐ¾Ð¼
    void sendCommand(const std::string& command); // ÐžÑ‚Ð¿Ñ€Ð°Ð²Ð¸Ñ‚ÑŒ ÐºÐ¾Ð¼Ð°Ð½Ð´Ñƒ Ð´Ñ€Ð¾Ð½Ð±Ð¾ÐºÑÑƒ
    std::string getStatus();             // ÐŸÐ¾Ð»ÑƒÑ‡Ð¸Ñ‚ÑŒ ÑÑ‚Ð°Ñ‚ÑƒÑ Ð´Ñ€Ð¾Ð½Ð±Ð¾ÐºÑÐ°
};

#endif // DRONEBOX_COMM_H
=======
#pragma once
#ifndef DRONEBOX_COMM_H
#define DRONEBOX_COMM_H

class DroneboxComm {
public:
    // Ïîäêëþ÷åíèå ê äðîíáîêñó
    void connectToDronebox();

    // Îòïðàâêà êîìàíäû íà äðîíáîêñ
    void sendCommandToDronebox(const std::string& command);

    // Ïîëó÷åíèå ñòàòóñà îò äðîíáîêñà
    std::string getDroneboxStatus();
};

#endif
>>>>>>> a219246406ed763c4bc64259160dfa1b095d3212
