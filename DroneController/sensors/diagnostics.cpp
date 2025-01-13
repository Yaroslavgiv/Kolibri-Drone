#include "diagnostics.h"
#include <iostream>

<<<<<<< HEAD
// РљРѕРЅСЃС‚СЂСѓРєС‚РѕСЂ
Diagnostics::Diagnostics(SensorManager& sensorManager)
    : sensorManager(sensorManager) {
    std::cout << "Diagnostics module initialized." << std::endl;
}

// Р”РµСЃС‚СЂСѓРєС‚РѕСЂ
Diagnostics::~Diagnostics() {
    std::cout << "Diagnostics module resources released." << std::endl;
}

// Р’С‹РїРѕР»РЅРёС‚СЊ РґРёР°РіРЅРѕСЃС‚РёРєСѓ
bool Diagnostics::runDiagnostics() {
    std::cout << "Running diagnostics on all sensors..." << std::endl;
    faultySensors.clear();

    // РџСЂРѕРІРµСЂРєР° РІСЃРµС… РґР°С‚С‡РёРєРѕРІ
    auto allSensors = sensorManager.readAllSensors();
    for (const auto& sensor : allSensors) {
        if (!checkSensor(sensor)) {
            faultySensors.push_back(sensor);
        }
    }

    if (!faultySensors.empty()) {
        std::cerr << "Diagnostics completed: Some sensors are faulty." << std::endl;
        return false;
    }

    std::cout << "Diagnostics completed: All sensors are functional." << std::endl;
    return true;
}

// РџРѕР»СѓС‡РёС‚СЊ СЃРїРёСЃРѕРє РЅРµРёСЃРїСЂР°РІРЅС‹С… РґР°С‚С‡РёРєРѕРІ
std::vector<SensorData> Diagnostics::getFaultySensors() {
    return faultySensors;
}

// РџСЂРѕРІРµСЂРёС‚СЊ СЃРѕСЃС‚РѕСЏРЅРёРµ РґР°С‚С‡РёРєР°
bool Diagnostics::checkSensor(const SensorData& data) {
    // Р›РѕРіРёРєР° РїСЂРѕРІРµСЂРєРё РґРѕРїСѓСЃС‚РёРјС‹С… Р·РЅР°С‡РµРЅРёР№
    switch (data.type) {
        case SensorType::TEMPERATURE:
            return data.value > -40 && data.value < 85;
        case SensorType::HUMIDITY:
            return data.value >= 0 && data.value <= 100;
        case SensorType::PRESSURE:
            return data.value >= 900 && data.value <= 1100;
        case SensorType::BATTERY_LEVEL:
            return data.value > 10; // Р—Р°СЂСЏРґ Р±Р°С‚Р°СЂРµРё РґРѕР»Р¶РµРЅ Р±С‹С‚СЊ Р±РѕР»СЊС€Рµ 10%
        default:
            return false;
    }
=======
// Диагностика сенсоров
void Diagnostics::runDiagnostics() {
    std::cout << "Выполнение диагностики сенсоров..." << std::endl;

    // Заглушка: Реализация проверки состояния сенсоров
>>>>>>> a219246406ed763c4bc64259160dfa1b095d3212
}
