#ifndef COMM_MANAGER_H
#define COMM_MANAGER_H

#include <string>

<<<<<<< HEAD
class CommManager {
public:
    CommManager();                          // Конструктор
    void manageGSM(const std::string& action); // Управление GSM модулем
    void manageRadioChannel(const std::string& action); // Управление радиоканалом
    void manageWiFi(const std::string& action); // Управление WiFi модулем
};

#endif // COMM_MANAGER_H
=======
// ����� ��� ���������� ��������������
class CommManager {
public:
    // ����������� � ������������ �������
    void connectToServer();

    // ����������� � ���������
    void connectToDronebox();
};

#endif
>>>>>>> a219246406ed763c4bc64259160dfa1b095d3212
