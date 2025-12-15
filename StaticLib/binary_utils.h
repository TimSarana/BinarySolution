#pragma once
// binary_utils.h
#ifndef BINARY_UTILS_H
#define BINARY_UTILS_H

namespace BinaryIO {
    void serializeInt(int value, char* buffer);
    int deserializeInt(const char* buffer);
}

#endif