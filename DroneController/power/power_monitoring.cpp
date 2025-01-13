#include "power_monitoring.h"
#include <iostream>
<<<<<<< HEAD
#include <cmath> // –î–ª—è —Ä–∞—Å—á—ë—Ç–æ–≤

// –ö–æ–Ω—Å—Ç—Ä—É–∫—Ç–æ—Ä
PowerMonitoring::PowerMonitoring()
    : voltage(12.0), current(0.5), powerConsumption(0.0) {
    std::cout << "PowerMonitoring initialized." << std::endl;
}

// –î–µ—Å—Ç—Ä—É–∫—Ç–æ—Ä
PowerMonitoring::~PowerMonitoring() {
    std::cout << "PowerMonitoring resources released." << std::endl;
}

// –ü–æ–ª—É—á–∏—Ç—å —Ç–µ–∫—É—â–µ–µ –Ω–∞–ø—Ä—è–∂–µ–Ω–∏–µ
float PowerMonitoring::getVoltage() {
    // –ó–∞–≥–ª—É—à–∫–∞: –ª–æ–≥–∏–∫–∞ –ø–æ–ª—É—á–µ–Ω–∏—è –¥–∞–Ω–Ω—ã—Ö —á–µ—Ä–µ–∑ –ê–¶–ü
    std::cout << "Fetching voltage..." << std::endl;
    return voltage; // –ò–º–∏—Ç–∞—Ü–∏—è –ø–æ–ª—É—á–µ–Ω–∏—è –Ω–∞–ø—Ä—è–∂–µ–Ω–∏—è
}

// –ü–æ–ª—É—á–∏—Ç—å —Ç–µ–∫—É—â–∏–π —Ç–æ–∫
float PowerMonitoring::getCurrent() {
    // –ó–∞–≥–ª—É—à–∫–∞: –ª–æ–≥–∏–∫–∞ –ø–æ–ª—É—á–µ–Ω–∏—è –¥–∞–Ω–Ω—ã—Ö —á–µ—Ä–µ–∑ –ê–¶–ü
    std::cout << "Fetching current..." << std::endl;
    return current; // –ò–º–∏—Ç–∞—Ü–∏—è –ø–æ–ª—É—á–µ–Ω–∏—è —Ç–æ–∫–∞
}

// –†–∞—Å—Å—á–∏—Ç–∞—Ç—å —ç–Ω–µ—Ä–≥–æ–ø–æ—Ç—Ä–µ–±–ª–µ–Ω–∏–µ
float PowerMonitoring::calculatePowerConsumption() {
    voltage = getVoltage();
    current = getCurrent();
    powerConsumption = voltage * current;
    std::cout << "Power consumption calculated: " << powerConsumption << " W" << std::endl;
    return powerConsumption;
}

// –ü—Ä–æ–≤–µ—Ä–∏—Ç—å —Å—Ç–∞–±–∏–ª—å–Ω–æ—Å—Ç—å —ç–Ω–µ—Ä–≥–æ—Å–Ω–∞–±–∂–µ–Ω–∏—è
bool PowerMonitoring::isPowerStable() {
    voltage = getVoltage();
    if (voltage < 10.0 || voltage > 14.0) {
        std::cerr << "Power is unstable: " << voltage << " V" << std::endl;
        return false;
    }
    std::cout << "Power is stable: " << voltage << " V" << std::endl;
    return true;
=======

// œÓÎÛ˜ÂÌËÂ ÚÂÍÛ˘Â„Ó ÛÓ‚Ìˇ Á‡ˇ‰‡
float PowerMonitoring::getBatteryLevel() {
    std::cout << "œÓÎÛ˜ÂÌËÂ ÛÓ‚Ìˇ Á‡ˇ‰‡ ·‡Ú‡ÂË..." << std::endl;

    // «‡„ÎÛ¯Í‡: ¬ÓÁ‚‡Ú ÚÂÒÚÓ‚Ó„Ó ÁÌ‡˜ÂÌËˇ
    return 75.5f;
}

// ÃÓÌËÚÓËÌ„ ˝ÌÂ„ÓÔÓÚÂ·ÎÂÌËˇ
void PowerMonitoring::monitorPowerUsage() {
    std::cout << "ÃÓÌËÚÓËÌ„ ˝ÌÂ„ÓÔÓÚÂ·ÎÂÌËˇ..." << std::endl;

    // «‡„ÎÛ¯Í‡: –Â‡ÎËÁ‡ˆËˇ ÔÓ‚ÂÍË Ì‡ÔˇÊÂÌËˇ Ë ÚÓÍ‡
>>>>>>> a219246406ed763c4bc64259160dfa1b095d3212
}
