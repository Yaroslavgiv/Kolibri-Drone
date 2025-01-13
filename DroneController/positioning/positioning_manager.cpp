#include "positioning_manager.h"
#include <iostream>
#include <cmath> // Для математических расчётов

// Конструктор
PositioningManager::PositioningManager()
    : currentLatitude(0.0), currentLongitude(0.0),
      targetLatitude(0.0), targetLongitude(0.0) {
    std::cout << "PositioningManager initialized." << std::endl;
}

// Деструктор
PositioningManager::~PositioningManager() {
    std::cout << "PositioningManager resources released." << std::endl;
}

// Инициализация системы позиционирования
void PositioningManager::initializeSystem() {
    std::cout << "Initializing positioning system..." << std::endl;
    // Логика инициализации оборудования GPS
    // Например, проверка соединения с GPS-модулем
    std::cout << "Positioning system initialized." << std::endl;
}

// Получение текущей позиции (широта, долгота)
std::pair<double, double> PositioningManager::getCurrentPosition() {
    // Заглушка: здесь должна быть реальная логика для получения данных GPS
    std::cout << "Fetching current GPS position..." << std::endl;
    return {currentLatitude, currentLongitude};
}

// Установка целевой позиции
bool PositioningManager::setTargetPosition(double latitude, double longitude) {
    targetLatitude = latitude;
    targetLongitude = longitude;
    std::cout << "Target position set to (" << latitude << ", " << longitude << ")." << std::endl;
    return true;
}

// Обновление текущей позиции
void PositioningManager::updatePosition() {
    // Здесь должна быть логика получения актуальных данных с GPS
    std::cout << "Updating current position..." << std::endl;
    currentLatitude += 0.0001; // Имитация изменения позиции
    currentLongitude += 0.0001;
    std::cout << "Updated position: (" << currentLatitude << ", " << currentLongitude << ")." << std::endl;
}

// Расчёт расстояния до цели
double PositioningManager::calculateDistanceToTarget() {
    return calculateDistance(currentLatitude, currentLongitude, targetLatitude, targetLongitude);
}

// Вспомогательная функция для расчёта расстояния (формула Haversine)
double PositioningManager::calculateDistance(double lat1, double lon1, double lat2, double lon2) {
    const double R = 6371.0; // Радиус Земли в километрах
    double dLat = (lat2 - lat1) * M_PI / 180.0;
    double dLon = (lon2 - lon1) * M_PI / 180.0;

    lat1 = lat1 * M_PI / 180.0;
    lat2 = lat2 * M_PI / 180.0;

    double a = std::sin(dLat / 2) * std::sin(dLat / 2) +
               std::sin(dLon / 2) * std::sin(dLon / 2) * std::cos(lat1) * std::cos(lat2);
    double c = 2 * std::atan2(std::sqrt(a), std::sqrt(1 - a));
    return R * c;
}
