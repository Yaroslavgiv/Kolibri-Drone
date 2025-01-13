#ifndef CONFIG_LOADER_H
#define CONFIG_LOADER_H

#include <string>
#include <map>

class ConfigLoader {
public:
    ConfigLoader();                             // Конструктор
    ~ConfigLoader();                            // Деструктор

    void loadConfig(const std::string& filepath); // Загрузить конфигурацию из файла
    std::string getValue(const std::string& key); // Получить значение по ключу

private:
    std::map<std::string, std::string> configData; // Хранилище конфигурации
    void parseConfigLine(const std::string& line); // Вспомогательная функция для разбора строки
};

#endif // CONFIG_LOADER_H
