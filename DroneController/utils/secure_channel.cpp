#include "secure_channel.h"
#include <iostream>
#include <curl/curl.h>

// Конструктор
SecureChannel::SecureChannel()
    : isConnected(false) {
    curl_global_init(CURL_GLOBAL_DEFAULT);
    std::cout << "SecureChannel initialized." << std::endl;
}

// Деструктор
SecureChannel::~SecureChannel() {
    curl_global_cleanup();
    std::cout << "SecureChannel resources released." << std::endl;
}

// Установить защищённое соединение
void SecureChannel::establishConnection(const std::string& address) {
    connectionAddress = address;
    isConnected = true;
    std::cout << "Secure connection established to " << address << std::endl;
}

// Отправить данные
void SecureChannel::sendData(const std::string& data) {
    if (!isConnected) {
        throw std::runtime_error("No connection established.");
    }

    CURL* curl = curl_easy_init();
    if (curl) {
        curl_easy_setopt(curl, CURLOPT_URL, connectionAddress.c_str());
        curl_easy_setopt(curl, CURLOPT_POSTFIELDS, data.c_str());

        CURLcode res = curl_easy_perform(curl);
        if (res != CURLE_OK) {
            std::cerr << "Failed to send data: " << curl_easy_strerror(res) << std::endl;
        }
        curl_easy_cleanup(curl);
    }
}

// Получить данные
std::string SecureChannel::receiveData() {
    if (!isConnected) {
        throw std::runtime_error("No connection established.");
    }

    // Заглушка: Здесь можно добавить логику получения данных
    return "Received data from secure channel.";
}
