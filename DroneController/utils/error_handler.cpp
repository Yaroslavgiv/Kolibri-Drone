#include "error_handler.h"
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
}
