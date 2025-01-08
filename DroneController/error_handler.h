#pragma once
#ifndef ERROR_HANDLER_H
#define ERROR_HANDLER_H

#include <string>

class ErrorHandler {
public:
    // ��������� ������ � ����������
    static void handleError(const std::string& errorMessage);

    // ������ ������ � ���
    static void logError(const std::string& errorMessage);
};

#endif
