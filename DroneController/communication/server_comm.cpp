#include "server_comm.h"
<<<<<<< HEAD
#include <curl/curl.h>
#include <iostream>

// РљРѕРЅСЃС‚СЂСѓРєС‚РѕСЂ
ServerComm::ServerComm() {
    curl_global_init(CURL_GLOBAL_DEFAULT);
}

// Р”РµСЃС‚СЂСѓРєС‚РѕСЂ
ServerComm::~ServerComm() {
    curl_global_cleanup();
}

// РЈСЃС‚Р°РЅРѕРІРєР° СЃРѕРµРґРёРЅРµРЅРёСЏ СЃ СЃРµСЂРІРµСЂРѕРј
void ServerComm::connectToServer(const std::string& serverAddress) {
    this->serverAddress = serverAddress;
    std::cout << "Server address set to: " << serverAddress << std::endl;
}

// РћС‚РїСЂР°РІРєР° РґР°РЅРЅС‹С… РЅР° СЃРµСЂРІРµСЂ
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

// РџРѕР»СѓС‡РµРЅРёРµ РґР°РЅРЅС‹С… СЃ СЃРµСЂРІРµСЂР°
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

// Р’СЃРїРѕРјРѕРіР°С‚РµР»СЊРЅР°СЏ С„СѓРЅРєС†РёСЏ РґР»СЏ Р·Р°РїРёСЃРё РґР°РЅРЅС‹С…
size_t ServerComm::writeCallback(void* contents, size_t size, size_t nmemb, std::string* userData) {
    size_t totalSize = size * nmemb;
    userData->append((char*)contents, totalSize);
    return totalSize;
=======
#include <iostream>

// Подключение к серверу
void ServerComm::connectToServer() {
    std::cout << "Подключение к серверу через GSM/Ethernet..." << std::endl;

    // Заглушка: Реализация соединения через TCP/IP
}

// Отправка данных на сервер
void ServerComm::sendDataToServer(const std::string& data) {
    std::cout << "Отправка данных на сервер: " << data << std::endl;

    // Заглушка: Реализация отправки данных через HTTP/TCP
}

// Получение команды от сервера
std::string ServerComm::receiveServerCommand() {
    std::cout << "Получение команды от сервера..." << std::endl;

    // Заглушка: Вернуть тестовую команду
    return "Server Command: Land Drone";
>>>>>>> a219246406ed763c4bc64259160dfa1b095d3212
}
