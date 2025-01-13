#include "logger.h"
#include <iostream>
#include <fstream>
<<<<<<< HEAD
#include <ctime>

// Вспомогательная функция для получения текущего времени
std::string getCurrentTime() {
    std::time_t now = std::time(nullptr);
    char buffer[20];
    std::strftime(buffer, sizeof(buffer), "%Y-%m-%d %H:%M:%S", std::localtime(&now));
    return std::string(buffer);
}

// Логирование информационного сообщения
void Logger::logInfo(const std::string& message) {
    std::cout << "[INFO] " << getCurrentTime() << ": " << message << std::endl;

    std::ofstream logFile("log.txt", std::ios::app);
    if (logFile.is_open()) {
        logFile << "[INFO] " << getCurrentTime() << ": " << message << std::endl;
=======

// ����� ������ ��������������� ���������
void Logger::logInfo(const std::string& message) {
    std::cout << "[INFO]: " << message << std::endl;

    std::ofstream logFile("log.txt", std::ios::app);
    if (logFile.is_open()) {
        logFile << "[INFO]: " << message << std::endl;
>>>>>>> a219246406ed763c4bc64259160dfa1b095d3212
        logFile.close();
    }
}

<<<<<<< HEAD
// Логирование предупреждения
void Logger::logWarning(const std::string& message) {
    std::cout << "[WARNING] " << getCurrentTime() << ": " << message << std::endl;

    std::ofstream logFile("log.txt", std::ios::app);
    if (logFile.is_open()) {
        logFile << "[WARNING] " << getCurrentTime() << ": " << message << std::endl;
        logFile.close();
    }
}

// Логирование ошибки
void Logger::logError(const std::string& message) {
    std::cerr << "[ERROR] " << getCurrentTime() << ": " << message << std::endl;

    std::ofstream logFile("log.txt", std::ios::app);
    if (logFile.is_open()) {
        logFile << "[ERROR] " << getCurrentTime() << ": " << message << std::endl;
=======
// ����� ������ ��������������
void Logger::logWarning(const std::string& message) {
    std::cout << "[WARNING]: " << message << std::endl;

    std::ofstream logFile("log.txt", std::ios::app);
    if (logFile.is_open()) {
        logFile << "[WARNING]: " << message << std::endl;
>>>>>>> a219246406ed763c4bc64259160dfa1b095d3212
        logFile.close();
    }
}
