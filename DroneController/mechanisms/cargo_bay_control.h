#ifndef CARGO_BAY_CONTROL_H
#define CARGO_BAY_CONTROL_H

class CargoBayControl {
public:
    CargoBayControl();                          // Конструктор
    ~CargoBayControl();                         // Деструктор

    void openCargoBay();                        // Открыть грузовой отсек
    void closeCargoBay();                       // Закрыть грузовой отсек
    bool isCargoBayOpen();                      // Проверить, открыт ли отсек

private:
    bool cargoBayStatus;                        // Состояние грузового отсека
};

#endif // CARGO_BAY_CONTROL_H
