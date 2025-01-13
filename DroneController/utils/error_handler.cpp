#include "error_handler.h"
<<<<<<< HEAD
#include "logger.h"
#include <iostream>

// Обработка ошибки
void ErrorHandler::handleError(const std::string& errorMessage) {
    Logger::logError(errorMessage);
    std::cerr << "Critical error occurred: " << errorMessage << std::endl;
    // Здесь можно добавить логику уведомлений (например, отправка на сервер)
=======
#include <iostream>
#include <fstream>

// ����� ��������� ������ � ����������
void ErrorHandler::handleError(const std::string& errorMessage) {
    std::cerr << "[ERROR]: " << errorMessage << std::endl;

    // ��������: ������������� ����� �������� ����������� ��� ��������� ���������
}

// ����� ������ ������ � ���
void ErrorHandler::logError(const std::string& errorMessage) {
    std::ofstream errorLog("error_log.txt", std::ios::app);
    if (errorLog.is_open()) {
        errorLog << "[ERROR]: " << errorMessage << std::endl;
        errorLog.close();
    }
    else {
        std::cerr << "[ERROR]: �� ������� �������� ������ � ���." << std::endl;
    }
>>>>>>> a219246406ed763c4bc64259160dfa1b095d3212
}
