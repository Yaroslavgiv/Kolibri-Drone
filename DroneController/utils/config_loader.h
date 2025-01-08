#pragma once
#ifndef CONFIG_LOADER_H
#define CONFIG_LOADER_H

#include <string>

class ConfigLoader {
public:
    // Загрузка конфигурации из файла
    void loadConfig(const std::string& filepath);
};

#endif
