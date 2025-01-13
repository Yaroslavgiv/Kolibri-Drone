#include "server_comm.h"
#include <curl/curl.h>
#include <iostream>

// Конструктор
ServerComm::ServerComm() {
    curl_global_init(CURL_GLOBAL_DEFAULT);
}

// Деструктор
ServerComm::~ServerComm() {
    curl_global_cleanup();
}

// Установка соединения с сервером
void ServerComm::connectToServer(const std::string& serverAddress) {
    this->serverAddress = serverAddress;
    std::cout << "Server address set to: " << serverAddress << std::endl;
}

// Отправка данных на сервер
void ServerComm::sendData(const std::string& data) {
    CURL* curl = curl_easy_init();
    if (curl) {
        curl_easy_setopt(curl, CURLOPT_URL, serverAddress.c_str());
        curl_easy_setopt(curl, CURLOPT_POSTFIELDS, data.c_str());

        CURLcode res = curl_easy_perform(curl);
        if (res != CURLE_OK) {
            std::cerr << "curl_easy_perform() failed: " << curl_easy_strerror(res) << std::endl;
        }
        curl_easy_cleanup(curl);
    }
}

// Получение данных с сервера
std::string ServerComm::receiveData() {
    CURL* curl = curl_easy_init();
    std::string response;
    if (curl) {
        curl_easy_setopt(curl, CURLOPT_URL, serverAddress.c_str());
        curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, writeCallback);
        curl_easy_setopt(curl, CURLOPT_WRITEDATA, &response);

        CURLcode res = curl_easy_perform(curl);
        if (res != CURLE_OK) {
            std::cerr << "curl_easy_perform() failed: " << curl_easy_strerror(res) << std::endl;
        }
        curl_easy_cleanup(curl);
    }
    return response;
}

// Вспомогательная функция для записи данных
size_t ServerComm::writeCallback(void* contents, size_t size, size_t nmemb, std::string* userData) {
    size_t totalSize = size * nmemb;
    userData->append((char*)contents, totalSize);
    return totalSize;
}
