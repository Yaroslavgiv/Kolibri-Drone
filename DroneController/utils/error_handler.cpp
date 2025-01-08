#include "error_handler.h"
#include <iostream>
#include <fstream>

// Метод обработки ошибки с сообщением
void ErrorHandler::handleError(const std::string& errorMessage) {
    std::cerr << "[ERROR]: " << errorMessage << std::endl;

    // Заглушка: Дополнительно можно вызывать уведомления или аварийные процедуры
}

// Метод записи ошибки в лог
void ErrorHandler::logError(const std::string& errorMessage) {
    std::ofstream errorLog("error_log.txt", std::ios::app);
    if (errorLog.is_open()) {
        errorLog << "[ERROR]: " << errorMessage << std::endl;
        errorLog.close();
    }
    else {
        std::cerr << "[ERROR]: Не удалось записать ошибку в лог." << std::endl;
    }
}
