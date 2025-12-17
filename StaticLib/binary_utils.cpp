#include <cstdio>
#include "binary_utils.h"
#include <cstring>

namespace BinaryIO {
    void serializeInt(int value, char* buffer) {
        memcpy(buffer, &value, sizeof(int));
    }

    int deserializeInt(const char* buffer) {
        int value;
        memcpy(&value, buffer, sizeof(int));
        return value;
    }
       /**
* @brief Конвертирует бинарный файл в текстовый
* @param binaryFilename Имя бинарного файла
* @param textFilename Имя текстового файла
* @return true если успешно, false при ошибке
*/
   bool binaryToText(const char* binaryFilename, const char* textFilename) {
       FILE* binaryFile = nullptr;
       FILE* textFile = nullptr;

       fopen_s(&binaryFile, binaryFilename, "rb");
       if (!binaryFile) return false;

       
       fopen_s(&textFile, textFilename, "w");
       if (!textFile) {
           fclose(binaryFile);
           return false;
       }

       // Читаем и конвертируем
       unsigned char buffer[1024];
       size_t bytesRead;

       fprintf(textFile, "Binary to Text Conversion:\n");
       fprintf(textFile, "==========================\n");

       while ((bytesRead = fread(buffer, 1, sizeof(buffer), binaryFile)) > 0) {
           for (size_t i = 0; i < bytesRead; i++) {
               fprintf(textFile, "%02X ", buffer[i]);  // HEX формат
               if ((i + 1) % 16 == 0) fprintf(textFile, "\n");
           }
       }

       fclose(binaryFile);
       fclose(textFile);
       return true;
   }


}
