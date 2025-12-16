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



}