#include "comm_manager.h"
#include <iostream>

// Конструктор
CommManager::CommManager() {
    std::cout << "Communication manager initialized." << std::endl;
}

// Управление GSM модулем
void CommManager::manageGSM(const std::string& action) {
    std::cout << "GSM module: " << action << std::endl;
    // Логика управления GSM
}

// Управление радиоканалом
void CommManager::manageRadioChannel(const std::string& action) {
    std::cout << "Radio channel: " << action << std::endl;
    // Логика управления радиоканалом
}

// Управление WiFi модулем
void CommManager::manageWiFi(const std::string& action) {
    std::cout << "WiFi module: " << action << std::endl;
    // Логика управления WiFi
}
