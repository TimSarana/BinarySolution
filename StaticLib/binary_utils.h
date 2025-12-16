/**
 * @file binary_utils.h
 * @brief Статическая библиотека для сериализации бинарных данных
 * @namespace BinaryIO Пространство имён для работы с бинарными данными
 */

#ifndef BINARY_UTILS_H
#define BINARY_UTILS_H

namespace BinaryIO {
    /**
     * @brief Сериализует целое число в бинарный формат
     * @param value Целое число для сериализации
     * @param buffer Буфер для записи (должен быть размером не менее sizeof(int))
     */
    void serializeInt(int value, char* buffer);

    /**
     * @brief Десериализует целое число из бинарного формата
     * @param buffer Буфер с бинарными данными
     * @return Десериализованное целое число
     */
    int deserializeInt(const char* buffer);
}

#endif