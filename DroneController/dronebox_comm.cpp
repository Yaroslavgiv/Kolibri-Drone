#include "dronebox_comm.h"
#include <iostream>

// Подключение к дронбоксу
void DroneboxComm::connectToDronebox() {
    std::cout << "Подключение к дронбоксу..." << std::endl;

    // Заглушка: Реализация подключения по WiFi или Ethernet будет добавлена позже
}

// Отправка команды на дронбокс
void DroneboxComm::sendCommandToDronebox(const std::string& command) {
    std::cout << "Отправка команды на дронбокс: " << command << std::endl;

    // Заглушка: Реализация отправки команды
}

// Получение статуса от дронбокса
std::string DroneboxComm::getDroneboxStatus() {
    std::cout << "Получение статуса от дронбокса..." << std::endl;

    // Заглушка: Вернуть тестовый статус
    return "Dronebox Status: OK";
}
