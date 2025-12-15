#include "binary_file_handler.h"
#include "../StaticLib/binary_utils.h"  // ← ВОТ! БЕРЁМ ИЗ СТАТИЧЕСКОЙ БИБЛИОТЕКИ!
#include <cstdio>

namespace BinaryIO {
    bool BinaryFileHandler::writeIntToFile(const char* filename, int value) {
        char buffer[4];

        // ВОТ! ИСПОЛЬЗУЕМ ФУНКЦИЮ ИЗ СТАТИЧЕСКОЙ БИБЛИОТЕКИ!
        serializeInt(value, buffer);

        FILE* file = nullptr;
        fopen_s(&file, filename, "wb");
        if (!file) return false;

        fwrite(buffer, 1, 4, file);
        fclose(file);
        return true;
    }

    int BinaryFileHandler::readIntFromFile(const char* filename) {
        char buffer[4];

        FILE* file = nullptr;
        fopen_s(&file, filename, "rb");
        if (!file) return 0;

        fread(buffer, 1, 4, file);
        fclose(file);

        // ВОТ! ИСПОЛЬЗУЕМ ФУНКЦИЮ ИЗ СТАТИЧЕСКОЙ БИБЛИОТЕКИ!
        return deserializeInt(buffer);
    }
}