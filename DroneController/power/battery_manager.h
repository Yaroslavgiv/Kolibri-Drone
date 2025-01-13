<<<<<<< HEAD
#ifndef BATTERY_MANAGER_H
#define BATTERY_MANAGER_H

#include <string>

class BatteryManager {
public:
    BatteryManager();                          // Конструктор
    ~BatteryManager();                         // Деструктор

    void initializeBatterySystem();            // Инициализация системы батарей
    float getBatteryLevel();                   // Получить уровень заряда батареи
    bool isBatteryLow();                       // Проверить низкий заряд батареи
    void startCharging();                      // Начать зарядку
    void stopCharging();                       // Остановить зарядку
    bool isCharging();                         // Проверить, идёт ли зарядка

private:
    float batteryLevel;                        // Уровень заряда батареи (в процентах)
    bool chargingStatus;                       // Статус зарядки
};

#endif // BATTERY_MANAGER_H
=======
#pragma once
#ifndef BATTERY_MANAGER_H
#define BATTERY_MANAGER_H

class BatteryManager {
public:
    // �������� ������ ������ �������
    void checkBatteryLevel();

    // ����������� � ������ ������ ������
    void notifyLowBattery();
};

#endif
>>>>>>> a219246406ed763c4bc64259160dfa1b095d3212
