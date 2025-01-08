#ifndef LOGGER_H
#define LOGGER_H

#include <string>

class Logger {
public:
    // ������ ��������������� ���������
    static void logInfo(const std::string& message);

    // ������ ��������������
    static void logWarning(const std::string& message);
};

#endif
