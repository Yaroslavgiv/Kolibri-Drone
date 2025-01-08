#include <iostream>
#include "logger.h"
#include "comm_manager.h"
#include "actuator_control.h"
#include "sensor_manager.h"
#include "error_handler.h"


int main() {
    Logger::logInfo("������ ���������...");

    // �������� ����������� �������
    CommManager comm_manager;
    ActuatorControl actuator_control;
    SensorManager sensor_manager;

    try {
        // ����������� � �������
        Logger::logInfo("����������� � �������...");
        comm_manager.connectToServer();

        // ������������� ��������
        Logger::logInfo("������������� ��������...");
        sensor_manager.initializeSensors();

        // ���������� �����������
        Logger::logInfo("�������� ��������� ������...");
        actuator_control.openCargoBay();

        Logger::logInfo("�������� ��������� ������...");
        actuator_control.closeCargoBay();

    }
    catch (const std::exception& ex) {
        ErrorHandler::handleError(ex.what());
    }

    Logger::logInfo("���������� ���������.");
    return 0;
}
