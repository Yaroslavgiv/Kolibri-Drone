#pragma once
#ifndef CONFIG_LOADER_H
#define CONFIG_LOADER_H

#include <string>

class ConfigLoader {
public:
    // �������� ������������ �� �����
    void loadConfig(const std::string& filepath);
};

#endif
