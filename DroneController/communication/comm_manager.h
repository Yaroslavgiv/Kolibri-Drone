#ifndef COMM_MANAGER_H
#define COMM_MANAGER_H

#include <string>

class CommManager {
public:
    CommManager();                          // Конструктор
    void manageGSM(const std::string& action); // Управление GSM модулем
    void manageRadioChannel(const std::string& action); // Управление радиоканалом
    void manageWiFi(const std::string& action); // Управление WiFi модулем
};

#endif // COMM_MANAGER_H
