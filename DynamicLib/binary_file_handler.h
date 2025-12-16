/**
 * @file binary_file_handler.h
 * @brief Динамическая библиотека для работы с бинарными файлами
 * @namespace BinaryIO Пространство имён для работы с бинарными данными
 */

#ifndef BINARY_FILE_HANDLER_H
#define BINARY_FILE_HANDLER_H

namespace BinaryIO {
    /**
     * @brief Класс для работы с бинарными файлами
     * @details Использует функции из статической библиотеки BinaryIO
     */
    class BinaryFileHandler {
    public:
        /**
         * @brief Записывает целое число в бинарный файл
         * @param filename Имя файла
         * @param value Целое число для записи
         * @return true если запись успешна, false при ошибке
         */
        static bool writeIntToFile(const char* filename, int value);

        /**
         * @brief Читает целое число из бинарного файла
         * @param filename Имя файла
         * @return Прочитанное целое число (0 при ошибке)
         */
        static int readIntFromFile(const char* filename);
    };
}



#endif