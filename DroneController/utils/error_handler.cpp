#include "error_handler.h"
<<<<<<< HEAD
#include "logger.h"
#include <iostream>

// РћР±СЂР°Р±РѕС‚РєР° РѕС€РёР±РєРё
void ErrorHandler::handleError(const std::string& errorMessage) {
    Logger::logError(errorMessage);
    std::cerr << "Critical error occurred: " << errorMessage << std::endl;
    // Р—РґРµСЃСЊ РјРѕР¶РЅРѕ РґРѕР±Р°РІРёС‚СЊ Р»РѕРіРёРєСѓ СѓРІРµРґРѕРјР»РµРЅРёР№ (РЅР°РїСЂРёРјРµСЂ, РѕС‚РїСЂР°РІРєР° РЅР° СЃРµСЂРІРµСЂ)
=======
#include <iostream>
#include <fstream>

// Метод обработки ошибки с сообщением
void ErrorHandler::handleError(const std::string& errorMessage) {
    std::cerr << "[ERROR]: " << errorMessage << std::endl;

    // Заглушка: Дополнительно можно вызывать уведомления или аварийные процедуры
}

// Метод записи ошибки в лог
void ErrorHandler::logError(const std::string& errorMessage) {
    std::ofstream errorLog("error_log.txt", std::ios::app);
    if (errorLog.is_open()) {
        errorLog << "[ERROR]: " << errorMessage << std::endl;
        errorLog.close();
    }
    else {
        std::cerr << "[ERROR]: Не удалось записать ошибку в лог." << std::endl;
    }
>>>>>>> a219246406ed763c4bc64259160dfa1b095d3212
}
