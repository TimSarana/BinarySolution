#include <iostream>
#include "binary_utils.h"  // ← заголовок статической библиотеки

int main() {
    std::cout << "=== Testing Static Library ===\n";

    // Используем функции из статической библиотеки
    char buffer[4];
    int number = 12345;

    // Вызов функции из библиотеки
    BinaryIO::serializeInt(number, buffer);

    // Ещё вызов
    int result = BinaryIO::deserializeInt(buffer);

    std::cout << "Number: " << number << " -> " << result << "\n";

    if (number == result) {
        std::cout << "Static library works!\n";
    }

    std::cout << "\nPress Enter to exit...";
    std::cin.get();
    return 0;
}