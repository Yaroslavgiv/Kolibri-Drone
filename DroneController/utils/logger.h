#ifndef LOGGER_H
#define LOGGER_H

#include <string>

class Logger {
public:
    // Запись информационного сообщения
    static void logInfo(const std::string& message);

    // Запись предупреждения
    static void logWarning(const std::string& message);
};

#endif
