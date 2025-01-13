#include "dronebox_comm.h"
#include <iostream>
#include <thread>
#include <chrono>

// Установить соединение с дронбоксом
void DroneboxComm::establishConnection() {
    std::cout << "Attempting to establish connection with Dronebox..." << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(2));
    std::cout << "Connection established with Dronebox." << std::endl;
}

// Отправить команду дронбоксу
void DroneboxComm::sendCommand(const std::string& command) {
    std::cout << "Sending command to Dronebox: " << command << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(500));
}

// Получить статус дронбокса
std::string DroneboxComm::getStatus() {
    std::cout << "Fetching status from Dronebox..." << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(500));
    return "Dronebox status: OK";
}
