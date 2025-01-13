<<<<<<< HEAD
#include "config_loader.h"
#include <iostream>
#include <fstream>
#include <sstream>

// Конструктор
ConfigLoader::ConfigLoader() {
    std::cout << "ConfigLoader initialized." << std::endl;
}

// Деструктор
ConfigLoader::~ConfigLoader() {
    std::cout << "ConfigLoader resources released." << std::endl;
}

// Загрузка конфигурации из файла
void ConfigLoader::loadConfig(const std::string& filepath) {
    std::ifstream file(filepath);
    if (!file.is_open()) {
        throw std::runtime_error("Unable to open config file: " + filepath);
    }

    std::string line;
    while (std::getline(file, line)) {
        parseConfigLine(line);
    }

    file.close();
    std::cout << "Configuration loaded from: " << filepath << std::endl;
}

// Получить значение по ключу
std::string ConfigLoader::getValue(const std::string& key) {
    if (configData.find(key) != configData.end()) {
        return configData[key];
    }
    throw std::runtime_error("Key not found in configuration: " + key);
}

// Разбор строки конфигурации
void ConfigLoader::parseConfigLine(const std::string& line) {
    std::istringstream stream(line);
    std::string key, value;
    if (std::getline(stream, key, '=') && std::getline(stream, value)) {
        configData[key] = value;
    }
=======

#include <iostream>
#include "config_loader.h"

// ����� �������� ������������ �� �����
void ConfigLoader::loadConfig(const std::string& filepath) {
    std::cout << "�������� ������������ �� �����: " << filepath << std::endl;

    // ��������: ���������� �������� ������������ ����� ��������� �����
>>>>>>> a219246406ed763c4bc64259160dfa1b095d3212
}
