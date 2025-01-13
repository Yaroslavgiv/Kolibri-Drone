<<<<<<< HEAD
#ifndef EMERGENCY_LANDING_H
#define EMERGENCY_LANDING_H

#include <string>

class EmergencyLanding {
public:
    EmergencyLanding();                       // Конструктор
    ~EmergencyLanding();                      // Деструктор

    void initiateLanding();                   // Инициировать аварийную посадку
    bool checkLandingConditions();            // Проверить условия для посадки
    void executeLandingSequence();            // Выполнить последовательность посадки
    void sendLandingSignal();                 // Отправить сигнал об аварийной посадке

private:
    bool areConditionsSafe;                   // Флаг безопасности условий посадки
    void stabilizeDrone();                    // Стабилизировать дрон перед посадкой
};

#endif // EMERGENCY_LANDING_H
=======
#pragma once
#ifndef EMERGENCY_LANDING_H
#define EMERGENCY_LANDING_H

class EmergencyLanding {
public:
    // ���������� ��������� �������
    void performEmergencyLanding();
};

#endif
>>>>>>> a219246406ed763c4bc64259160dfa1b095d3212
