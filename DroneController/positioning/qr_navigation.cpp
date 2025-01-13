#include "qr_navigation.h"
#include <iostream>
#include <regex> // Для извлечения данных с помощью регулярных выражений

// Конструктор
QRNavigation::QRNavigation() {
    std::cout << "QRNavigation initialized." << std::endl;
}

// Деструктор
QRNavigation::~QRNavigation() {
    std::cout << "QRNavigation resources released." << std::endl;
}

// Сканирование QR-кода
bool QRNavigation::scanQRCode(const std::string& imagePath) {
    std::cout << "Scanning QR code from image: " << imagePath << std::endl;

    // Реализация распознавания QR-кода (можно использовать библиотеку OpenCV или ZBar)
    lastScannedData = "QR_DATA: lat=55.7558,lon=37.6173"; // Заглушка: Имитация результата сканирования
    std::cout << "QR code scanned successfully: " << lastScannedData << std::endl;
    return true;
}

// Декодирование координат из QR-кода
std::pair<double, double> QRNavigation::decodeCoordinates(const std::string& qrData) {
    std::cout << "Decoding coordinates from QR data: " << qrData << std::endl;

    // Пример использования регулярных выражений для извлечения координат
    std::regex coordRegex(R"(lat=([0-9.-]+),lon=([0-9.-]+))");
    std::smatch match;
    if (std::regex_search(qrData, match, coordRegex)) {
        double latitude = std::stod(match[1]);
        double longitude = std::stod(match[2]);
        return {latitude, longitude};
    }

    std::cerr << "Failed to decode coordinates." << std::endl;
    return {0.0, 0.0}; // Координаты по умолчанию
}
