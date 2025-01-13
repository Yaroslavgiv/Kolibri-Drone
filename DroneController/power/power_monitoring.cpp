#include "power_monitoring.h"
#include <iostream>
#include <cmath> // Для расчётов

// Конструктор
PowerMonitoring::PowerMonitoring()
    : voltage(12.0), current(0.5), powerConsumption(0.0) {
    std::cout << "PowerMonitoring initialized." << std::endl;
}

// Деструктор
PowerMonitoring::~PowerMonitoring() {
    std::cout << "PowerMonitoring resources released." << std::endl;
}

// Получить текущее напряжение
float PowerMonitoring::getVoltage() {
    // Заглушка: логика получения данных через АЦП
    std::cout << "Fetching voltage..." << std::endl;
    return voltage; // Имитация получения напряжения
}

// Получить текущий ток
float PowerMonitoring::getCurrent() {
    // Заглушка: логика получения данных через АЦП
    std::cout << "Fetching current..." << std::endl;
    return current; // Имитация получения тока
}

// Рассчитать энергопотребление
float PowerMonitoring::calculatePowerConsumption() {
    voltage = getVoltage();
    current = getCurrent();
    powerConsumption = voltage * current;
    std::cout << "Power consumption calculated: " << powerConsumption << " W" << std::endl;
    return powerConsumption;
}

// Проверить стабильность энергоснабжения
bool PowerMonitoring::isPowerStable() {
    voltage = getVoltage();
    if (voltage < 10.0 || voltage > 14.0) {
        std::cerr << "Power is unstable: " << voltage << " V" << std::endl;
        return false;
    }
    std::cout << "Power is stable: " << voltage << " V" << std::endl;
    return true;
}
