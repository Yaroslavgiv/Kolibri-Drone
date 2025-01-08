#pragma once
#ifndef SERVER_COMM_H
#define SERVER_COMM_H

class ServerComm {
public:
    // ����������� � �������
    void connectToServer();

    // �������� ������ �� ������
    void sendDataToServer(const std::string& data);

    // ��������� ������� �� �������
    std::string receiveServerCommand();
};

#endif
