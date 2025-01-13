#include "telemetry_logger.h"
#include <iostream>
<<<<<<< HEAD
#include <curl/curl.h>

// –ö–æ–Ω—Å—Ç—Ä—É–∫—Ç–æ—Ä
TelemetryLogger::TelemetryLogger() {
    std::cout << "TelemetryLogger initialized." << std::endl;
}

// –î–µ—Å—Ç—Ä—É–∫—Ç–æ—Ä
TelemetryLogger::~TelemetryLogger() {
    std::cout << "TelemetryLogger resources released." << std::endl;
}

// –õ–æ–≥–∏—Ä–æ–≤–∞–Ω–∏–µ –¥–∞–Ω–Ω—ã—Ö
void TelemetryLogger::logData(const std::string& key, double value) {
    TelemetryData data = {key, value};
    telemetryCache.push_back(data);
    std::cout << "Logged telemetry: " << key << " = " << value << std::endl;
}

// –ü–æ–ª—É—á–∏—Ç—å —Å–æ–±—Ä–∞–Ω–Ω—ã–µ –¥–∞–Ω–Ω—ã–µ
std::vector<TelemetryData> TelemetryLogger::getTelemetry() {
    return telemetryCache;
}

// –û—Ç–ø—Ä–∞–≤–∫–∞ —Ç–µ–ª–µ–º–µ—Ç—Ä–∏–∏ –Ω–∞ —Å–µ—Ä–≤–µ—Ä
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

// –û—á–∏—Å—Ç–∏—Ç—å –∫—ç—à –¥–∞–Ω–Ω—ã—Ö
void TelemetryLogger::clearCache() {
    telemetryCache.clear();
    std::cout << "Telemetry cache cleared." << std::endl;
=======

// ÃÂÚÓ‰ ÎÓ„ËÓ‚‡ÌËˇ ÚÂÎÂÏÂÚËË
void TelemetryLogger::logTelemetry() {
    std::cout << "ÀÓ„ËÓ‚‡ÌËÂ ÚÂÎÂÏÂÚËË..." << std::endl;

    // «‡„ÎÛ¯Í‡: –Â‡ÎËÁ‡ˆËˇ ÒÓı‡ÌÂÌËˇ ÚÂÎÂÏÂÚËË ·Û‰ÂÚ ‰Ó·‡‚ÎÂÌ‡ ÔÓÁÊÂ
>>>>>>> a219246406ed763c4bc64259160dfa1b095d3212
}
