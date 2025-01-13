#ifndef COMM_MANAGER_H
#define COMM_MANAGER_H

#include <string>

<<<<<<< HEAD
class CommManager {
public:
    CommManager();                          // ÐšÐ¾Ð½ÑÑ‚Ñ€ÑƒÐºÑ‚Ð¾Ñ€
    void manageGSM(const std::string& action); // Ð£Ð¿Ñ€Ð°Ð²Ð»ÐµÐ½Ð¸Ðµ GSM Ð¼Ð¾Ð´ÑƒÐ»ÐµÐ¼
    void manageRadioChannel(const std::string& action); // Ð£Ð¿Ñ€Ð°Ð²Ð»ÐµÐ½Ð¸Ðµ Ñ€Ð°Ð´Ð¸Ð¾ÐºÐ°Ð½Ð°Ð»Ð¾Ð¼
    void manageWiFi(const std::string& action); // Ð£Ð¿Ñ€Ð°Ð²Ð»ÐµÐ½Ð¸Ðµ WiFi Ð¼Ð¾Ð´ÑƒÐ»ÐµÐ¼
};

#endif // COMM_MANAGER_H
=======
// Êëàññ äëÿ óïðàâëåíèÿ êîììóíèêàöèÿìè
class CommManager {
public:
    // Ïîäêëþ÷åíèå ê öåíòðàëüíîìó ñåðâåðó
    void connectToServer();

    // Ïîäêëþ÷åíèå ê äðîíáîêñó
    void connectToDronebox();
};

#endif
>>>>>>> a219246406ed763c4bc64259160dfa1b095d3212
