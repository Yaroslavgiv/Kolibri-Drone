#ifndef FAIL_SAFE_MANAGER_H
#define FAIL_SAFE_MANAGER_H

#include <string>

class FailSafeManager {
public:
    FailSafeManager();                        // Конструктор
    ~FailSafeManager();                       // Деструктор

    void detectFailure();                     // Обнаружить аварийную ситуацию
    void handleFailure();                     // Обработать аварийную ситуацию
    void resetFailSafe();                     // Сброс аварийного режима

private:
    bool failureDetected;                     // Флаг обнаруженной аварийной ситуации
    std::string failureType;                  // Тип аварийной ситуации
    void logFailure(const std::string& message); // Логирование аварии
};

#endif // FAIL_SAFE_MANAGER_H
