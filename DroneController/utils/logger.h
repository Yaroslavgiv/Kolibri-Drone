#ifndef LOGGER_H
#define LOGGER_H

#include <string>

class Logger {
public:
    static void logInfo(const std::string& message);    // Логирование информационного сообщения
    static void logWarning(const std::string& message); // Логирование предупреждения
    static void logError(const std::string& message);   // Логирование ошибки
};

#endif // LOGGER_H
