#ifndef LIGHTING_CONTROL_H
#define LIGHTING_CONTROL_H

#include <string>
#include <map>

enum class LightType {
    EXTERNAL_NAVIGATION,  // Внешняя навигационная подсветка
    EXTERNAL_SIGNAL,      // Внешняя сигнальная подсветка
    INTERNAL_MAINTENANCE  // Внутреннее освещение для обслуживания
};

class LightingControl {
public:
    LightingControl();                        // Конструктор
    ~LightingControl();                       // Деструктор

    void initializeLightingSystem();          // Инициализация системы подсветки
    void turnOn(LightType light);             // Включить подсветку указанного типа
    void turnOff(LightType light);            // Выключить подсветку указанного типа
    void setBrightness(LightType light, int level); // Установить уровень яркости для подсветки
    void blink(LightType light, int duration, int interval); // Мигание подсветки

private:
    std::map<LightType, int> lightStates;     // Хранение состояния подсветки (вкл/выкл, яркость)

    void updateHardware(LightType light);     // Вспомогательная функция для обновления состояния оборудования
};

#endif // LIGHTING_CONTROL_H
