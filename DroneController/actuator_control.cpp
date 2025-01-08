#include "actuator_control.h"
#include <iostream>

// Метод открытия грузового отсека
void ActuatorControl::openCargoBay() {
    std::cout << "Открытие грузового отсека..." << std::endl;

    // Здесь реализуется отправка сигнала на GPIO для открытия механизма
    // Например, вызов библиотеки WiringPi для управления пинами
    std::cout << "Грузовой отсек открыт." << std::endl;
}

// Метод закрытия грузового отсека
void ActuatorControl::closeCargoBay() {
    std::cout << "Закрытие грузового отсека..." << std::endl;

    // Здесь реализуется отправка сигнала на GPIO для закрытия механизма
    std::cout << "Грузовой отсек закрыт." << std::endl;
}
