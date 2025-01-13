#include "cargo_bay_control.h"
#include <iostream>

<<<<<<< HEAD
// ÐšÐ¾Ð½ÑÑ‚Ñ€ÑƒÐºÑ‚Ð¾Ñ€
CargoBayControl::CargoBayControl() : cargoBayStatus(false) {
    std::cout << "CargoBayControl initialized." << std::endl;
}

// Ð”ÐµÑÑ‚Ñ€ÑƒÐºÑ‚Ð¾Ñ€
CargoBayControl::~CargoBayControl() {
    std::cout << "CargoBayControl resources released." << std::endl;
}

// ÐžÑ‚ÐºÑ€Ñ‹Ñ‚ÑŒ Ð³Ñ€ÑƒÐ·Ð¾Ð²Ð¾Ð¹ Ð¾Ñ‚ÑÐµÐº
void CargoBayControl::openCargoBay() {
    if (!cargoBayStatus) {
        std::cout << "Opening cargo bay..." << std::endl;
        // Ð›Ð¾Ð³Ð¸ÐºÐ° ÑƒÐ¿Ñ€Ð°Ð²Ð»ÐµÐ½Ð¸Ñ Ð°ÐºÑ‚ÑƒÐ°Ñ‚Ð¾Ñ€Ð¾Ð¼ Ð´Ð»Ñ Ð¾Ñ‚ÐºÑ€Ñ‹Ñ‚Ð¸Ñ
        cargoBayStatus = true;
        std::cout << "Cargo bay opened." << std::endl;
    } else {
        std::cout << "Cargo bay is already open." << std::endl;
    }
}

// Ð—Ð°ÐºÑ€Ñ‹Ñ‚ÑŒ Ð³Ñ€ÑƒÐ·Ð¾Ð²Ð¾Ð¹ Ð¾Ñ‚ÑÐµÐº
void CargoBayControl::closeCargoBay() {
    if (cargoBayStatus) {
        std::cout << "Closing cargo bay..." << std::endl;
        // Ð›Ð¾Ð³Ð¸ÐºÐ° ÑƒÐ¿Ñ€Ð°Ð²Ð»ÐµÐ½Ð¸Ñ Ð°ÐºÑ‚ÑƒÐ°Ñ‚Ð¾Ñ€Ð¾Ð¼ Ð´Ð»Ñ Ð·Ð°ÐºÑ€Ñ‹Ñ‚Ð¸Ñ
        cargoBayStatus = false;
        std::cout << "Cargo bay closed." << std::endl;
    } else {
        std::cout << "Cargo bay is already closed." << std::endl;
    }
}

// ÐŸÑ€Ð¾Ð²ÐµÑ€Ð¸Ñ‚ÑŒ, Ð¾Ñ‚ÐºÑ€Ñ‹Ñ‚ Ð»Ð¸ Ð¾Ñ‚ÑÐµÐº
bool CargoBayControl::isCargoBayOpen() {
    return cargoBayStatus;
=======
// Îòêðûòèå ãðóçîâîãî îòñåêà
void CargoBayControl::openCargoBay() {
    std::cout << "Îòêðûòèå ãðóçîâîãî îòñåêà..." << std::endl;

    // Çàãëóøêà: Óïðàâëåíèå GPIO äëÿ îòêðûòèÿ
}

// Çàêðûòèå ãðóçîâîãî îòñåêà
void CargoBayControl::closeCargoBay() {
    std::cout << "Çàêðûòèå ãðóçîâîãî îòñåêà..." << std::endl;

    // Çàãëóøêà: Óïðàâëåíèå GPIO äëÿ çàêðûòèÿ
>>>>>>> a219246406ed763c4bc64259160dfa1b095d3212
}
