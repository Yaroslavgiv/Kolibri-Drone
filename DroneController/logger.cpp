#include "logger.h"
#include <iostream>
#include <fstream>

// ����� ������ ��������������� ���������
void Logger::logInfo(const std::string& message) {
    std::cout << "[INFO]: " << message << std::endl;

    std::ofstream logFile("log.txt", std::ios::app);
    if (logFile.is_open()) {
        logFile << "[INFO]: " << message << std::endl;
        logFile.close();
    }
}

// ����� ������ ��������������
void Logger::logWarning(const std::string& message) {
    std::cout << "[WARNING]: " << message << std::endl;

    std::ofstream logFile("log.txt", std::ios::app);
    if (logFile.is_open()) {
        logFile << "[WARNING]: " << message << std::endl;
        logFile.close();
    }
}
