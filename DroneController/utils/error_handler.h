<<<<<<< HEAD
=======
#pragma once
>>>>>>> a219246406ed763c4bc64259160dfa1b095d3212
#ifndef ERROR_HANDLER_H
#define ERROR_HANDLER_H

#include <string>

class ErrorHandler {
public:
<<<<<<< HEAD
    static void handleError(const std::string& errorMessage); // РћР±СЂР°Р±РѕС‚Р°С‚СЊ РѕС€РёР±РєСѓ
};

#endif // ERROR_HANDLER_H
=======
    // Обработка ошибки с сообщением
    static void handleError(const std::string& errorMessage);

    // Запись ошибки в лог
    static void logError(const std::string& errorMessage);
};

#endif
>>>>>>> a219246406ed763c4bc64259160dfa1b095d3212
