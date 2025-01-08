# Kolibri-Drone

├── communication/            // Модуль связи\n
│   ├── server_comm.cpp       // Взаимодействие с центральным сервером.\n
│   ├── dronebox_comm.cpp     // Взаимодействие с дронбоксом.\n
│   ├── comm_manager.cpp      // Управление модулями связи (GSM, радиоканал, WiFi).\n
│   ├── flight_controller_comm.cpp // Общение с полётным контроллером.\n
├── positioning/              // Позиционирование\n
│   ├── positioning_manager.cpp // Управление позиционированием над дронбоксом.\n
│   ├── qr_navigation.cpp     // Навигация с использованием QR-кодов.\n
├── mechanisms/               // Управление механизмами\n
│   ├── actuator_control.cpp  // Управление актуаторами (отсек, ножки, фиксация аккумулятора).\n
│   ├── cargo_bay_control.cpp // Управление грузовым отсеком.\n
├── sensors/                  // Управление датчиками\n
│   ├── sensor_manager.cpp    // Управление и чтение данных с датчиков.\n
│   ├── diagnostics.cpp       // Диагностика датчиков.\n
├── power/                    // Управление питанием\n
│   ├── battery_manager.cpp   // Контроль заряда батареи.\n
│   ├── power_monitoring.cpp  // Мониторинг энергопотребления.\n
├── lighting/                 // Управление подсветкой\n
│   ├── lighting_control.cpp  // Управление внешней и внутренней подсветкой.\n
├── telemetry/                // Телеметрия и мониторинг\n
│   ├── telemetry_logger.cpp  // Запись телеметрии.\n
│   ├── equipment_monitor.cpp // Мониторинг состояния оборудования.\n
├── emergency/                // Аварийные режимы\n
│   ├── emergency_landing.cpp // Аварийная посадка.\n
│   ├── fail_safe_manager.cpp // Обработка аварийных ситуаций.\n
├── utils/                    // Утилиты\n
│   ├── config_loader.cpp     // Загрузка конфигурации.\n
│   ├── logger.cpp            // Логирование.\n
│   ├── error_handler.cpp     // Обработка ошибок.\n
│   ├── secure_channel.cpp    // Обеспечение защищённой связи.\n
└── main.cpp                  // Основной файл запуска.\n