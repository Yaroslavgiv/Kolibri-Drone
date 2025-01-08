#include "comm_manager.h"
#include <iostream>

// Метод подключения к центральному серверу
void CommManager::connectToServer() {
    std::cout << "Подключение к центральному серверу через GSM/Ethernet..." << std::endl;

    // Здесь будет реализован код подключения через сеть
    // Пример: использовать библиотеку Boost.Asio для TCP-соединения
}

// Метод подключения к дронбоксу
void CommManager::connectToDronebox() {
    std::cout << "Подключение к дронбоксу через WiFi..." << std::endl;

    // Здесь будет реализован код подключения через WiFi
    // Пример: использовать библиотеку для работы с WiFi
}
