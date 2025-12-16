#include "binary_file_handler.h"
#include "../StaticLib/binary_utils.h"  
#include <cstdio>

namespace BinaryIO {
    bool BinaryFileHandler::writeIntToFile(const char* filename, int value) {
        char buffer[4];

        
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

       
        return deserializeInt(buffer);
    }


}