#include "telemetry_logger.h"
#include <iostream>
#include <curl/curl.h>

// Конструктор
TelemetryLogger::TelemetryLogger() {
    std::cout << "TelemetryLogger initialized." << std::endl;
}

// Деструктор
TelemetryLogger::~TelemetryLogger() {
    std::cout << "TelemetryLogger resources released." << std::endl;
}

// Логирование данных
void TelemetryLogger::logData(const std::string& key, double value) {
    TelemetryData data = {key, value};
    telemetryCache.push_back(data);
    std::cout << "Logged telemetry: " << key << " = " << value << std::endl;
}

// Получить собранные данные
std::vector<TelemetryData> TelemetryLogger::getTelemetry() {
    return telemetryCache;
}

// Отправка телеметрии на сервер
void TelemetryLogger::sendToServer(const std::string& serverAddress) {
    std::cout << "Sending telemetry data to server: " << serverAddress << std::endl;

    CURL* curl = curl_easy_init();
    if (curl) {
        for (const auto& data : telemetryCache) {
            std::string payload = data.key + "=" + std::to_string(data.value);
            curl_easy_setopt(curl, CURLOPT_URL, serverAddress.c_str());
            curl_easy_setopt(curl, CURLOPT_POSTFIELDS, payload.c_str());

            CURLcode res = curl_easy_perform(curl);
            if (res != CURLE_OK) {
                std::cerr << "Failed to send telemetry: " << curl_easy_strerror(res) << std::endl;
            }
        }
        curl_easy_cleanup(curl);
    }

    clearCache();
}

// Очистить кэш данных
void TelemetryLogger::clearCache() {
    telemetryCache.clear();
    std::cout << "Telemetry cache cleared." << std::endl;
}
