#ifndef POWER_MONITORING_H
#define POWER_MONITORING_H

#include <string>

class PowerMonitoring {
public:
    PowerMonitoring();                         // Конструктор
    ~PowerMonitoring();                        // Деструктор

    float getVoltage();                        // Получить текущее напряжение
    float getCurrent();                        // Получить текущий ток
    float calculatePowerConsumption();         // Рассчитать энергопотребление
    bool isPowerStable();                      // Проверить стабильность энергоснабжения

private:
    float voltage;                             // Напряжение (в Вольтах)
    float current;                             // Ток (в Амперах)
    float powerConsumption;                    // Энергопотребление (в Ваттах)
};

#endif // POWER_MONITORING_H
