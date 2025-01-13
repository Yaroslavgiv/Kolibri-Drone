#ifndef POSITIONING_MANAGER_H
#define POSITIONING_MANAGER_H

#include <string>
#include <utility> // Для std::pair

class PositioningManager {
public:
    PositioningManager();                                // Конструктор
    ~PositioningManager();                               // Деструктор

    void initializeSystem();                             // Инициализация системы позиционирования
    std::pair<double, double> getCurrentPosition();      // Получение текущей позиции (широта, долгота)
    bool setTargetPosition(double latitude, double longitude); // Установка целевой позиции
    void updatePosition();                               // Обновление позиции дрона
    double calculateDistanceToTarget();                 // Расчёт расстояния до цели

private:
    double currentLatitude;                              // Текущая широта
    double currentLongitude;                             // Текущая долгота
    double targetLatitude;                               // Целевая широта
    double targetLongitude;                              // Целевая долгота
    double calculateDistance(double lat1, double lon1, double lat2, double lon2); // Вспомогательная функция
};

#endif // POSITIONING_MANAGER_H
