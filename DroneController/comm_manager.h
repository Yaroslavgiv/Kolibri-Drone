#ifndef COMM_MANAGER_H
#define COMM_MANAGER_H

#include <string>

// Класс для управления коммуникациями
class CommManager {
public:
    // Подключение к центральному серверу
    void connectToServer();

    // Подключение к дронбоксу
    void connectToDronebox();
};

#endif
