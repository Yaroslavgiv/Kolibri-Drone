#include "actuator_control.h"
#include <iostream>

// ����� �������� ��������� ������
void ActuatorControl::openCargoBay() {
    std::cout << "�������� ��������� ������..." << std::endl;

    // ����� ����������� �������� ������� �� GPIO ��� �������� ���������
    // ��������, ����� ���������� WiringPi ��� ���������� ������
    std::cout << "�������� ����� ������." << std::endl;
}

// ����� �������� ��������� ������
void ActuatorControl::closeCargoBay() {
    std::cout << "�������� ��������� ������..." << std::endl;

    // ����� ����������� �������� ������� �� GPIO ��� �������� ���������
    std::cout << "�������� ����� ������." << std::endl;
}
