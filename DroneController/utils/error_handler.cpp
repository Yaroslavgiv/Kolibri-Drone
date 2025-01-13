#include "error_handler.h"
#include "logger.h"
#include <iostream>

// Обработка ошибки
void ErrorHandler::handleError(const std::string& errorMessage) {
    Logger::logError(errorMessage);
    std::cerr << "Critical error occurred: " << errorMessage << std::endl;
    // Здесь можно добавить логику уведомлений (например, отправка на сервер)
}
