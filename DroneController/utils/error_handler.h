#pragma once
#ifndef ERROR_HANDLER_H
#define ERROR_HANDLER_H

#include <string>

class ErrorHandler {
public:
    // Обработка ошибки с сообщением
    static void handleError(const std::string& errorMessage);

    // Запись ошибки в лог
    static void logError(const std::string& errorMessage);
};

#endif
