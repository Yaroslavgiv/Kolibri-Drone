#include "cargo_bay_control.h"
#include <iostream>

// Конструктор
CargoBayControl::CargoBayControl() : cargoBayStatus(false) {
    std::cout << "CargoBayControl initialized." << std::endl;
}

// Деструктор
CargoBayControl::~CargoBayControl() {
    std::cout << "CargoBayControl resources released." << std::endl;
}

// Открыть грузовой отсек
void CargoBayControl::openCargoBay() {
    if (!cargoBayStatus) {
        std::cout << "Opening cargo bay..." << std::endl;
        // Логика управления актуатором для открытия
        cargoBayStatus = true;
        std::cout << "Cargo bay opened." << std::endl;
    } else {
        std::cout << "Cargo bay is already open." << std::endl;
    }
}

// Закрыть грузовой отсек
void CargoBayControl::closeCargoBay() {
    if (cargoBayStatus) {
        std::cout << "Closing cargo bay..." << std::endl;
        // Логика управления актуатором для закрытия
        cargoBayStatus = false;
        std::cout << "Cargo bay closed." << std::endl;
    } else {
        std::cout << "Cargo bay is already closed." << std::endl;
    }
}

// Проверить, открыт ли отсек
bool CargoBayControl::isCargoBayOpen() {
    return cargoBayStatus;
}
