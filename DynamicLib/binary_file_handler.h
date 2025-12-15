#pragma once
#ifndef BINARY_FILE_HANDLER_H
#define BINARY_FILE_HANDLER_H

namespace BinaryIO {
    class BinaryFileHandler {
    public:
        // Метод, который ИСПОЛЬЗУЕТ статическую библиотеку
        static bool writeIntToFile(const char* filename, int value);

        // Метод, который ИСПОЛЬЗУЕТ статическую библиотеку
        static int readIntFromFile(const char* filename);
    };
}

#endif