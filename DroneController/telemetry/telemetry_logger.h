#ifndef TELEMETRY_LOGGER_H
#define TELEMETRY_LOGGER_H

#include <string>
#include <map>
#include <vector>

struct TelemetryData {
    std::string key;        // Ключ параметра (например, "altitude")
    double value;           // Значение параметра
};

class TelemetryLogger {
public:
    TelemetryLogger();                              // Конструктор
    ~TelemetryLogger();                             // Деструктор

    void logData(const std::string& key, double value); // Логирование данных
    std::vector<TelemetryData> getTelemetry();          // Получить собранные данные
    void sendToServer(const std::string& serverAddress); // Отправка телеметрии на сервер

private:
    std::vector<TelemetryData> telemetryCache;      // Кэш телеметрических данных
    void clearCache();                              // Очистить кэш данных
};

#endif // TELEMETRY_LOGGER_H
