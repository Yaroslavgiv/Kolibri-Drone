#pragma once
#ifndef FAIL_SAFE_MANAGER_H
#define FAIL_SAFE_MANAGER_H

class FailSafeManager {
public:
    // Запуск аварийного режима
    void activateFailSafe();

    // Деактивация аварийного режима
    void deactivateFailSafe();
};

#endif
