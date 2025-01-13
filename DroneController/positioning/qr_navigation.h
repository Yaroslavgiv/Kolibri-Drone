<<<<<<< HEAD
#ifndef QR_NAVIGATION_H
#define QR_NAVIGATION_H

#include <string>

class QRNavigation {
public:
    QRNavigation();                          // Конструктор
    ~QRNavigation();                         // Деструктор

    bool scanQRCode(const std::string& imagePath);  // Сканирование QR-кода
    std::pair<double, double> decodeCoordinates(const std::string& qrData); // Декодирование координат из QR-кода

private:
    std::string lastScannedData;             // Последние данные из QR-кода
};

#endif // QR_NAVIGATION_H
=======
#pragma once
#ifndef QR_NAVIGATION_H
#define QR_NAVIGATION_H

class QRNavigation {
public:
    // ���������� ��������� �� QR-�����
    void navigateByQRCode();
};

#endif
>>>>>>> a219246406ed763c4bc64259160dfa1b095d3212
