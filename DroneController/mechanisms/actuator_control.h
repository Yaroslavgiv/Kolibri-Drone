#ifndef ACTUATOR_CONTROL_H
#define ACTUATOR_CONTROL_H

#include <string>

enum class ActuatorType {
    CARGO_BAY,      // Грузовой отсек
    LEGS,           // Управление ножками
    BATTERY_CLAMP   // Фиксация аккумулятора
};

class ActuatorControl {
public:
    ActuatorControl();                         // Конструктор
    ~ActuatorControl();                        // Деструктор

    void initializeActuators();                // Инициализация системы актуаторов
    void activate(ActuatorType actuator);      // Активация актуатора
    void deactivate(ActuatorType actuator);    // Деактивация актуатора
    bool checkStatus(ActuatorType actuator);   // Проверить состояние актуатора

private:
    void sendSignalToActuator(ActuatorType actuator, bool state); // Вспомогательная функция для управления
};

#endif // ACTUATOR_CONTROL_H
