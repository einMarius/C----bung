#include <iostream>
#include <limits> // Für die Wertebereiche der Datentypen

int main() {
    std::cout << "Ganzzahlige primitive Datentypen:\n";
    std::cout << "---------------------------------\n";
    std::cout << "char: " << sizeof(char) * 8 << " Bit, Wertebereich: " 
              << +std::numeric_limits<char>::min() << " bis " 
              << +std::numeric_limits<char>::max() << "\n";

    std::cout << "signed char: " << sizeof(signed char) * 8 << " Bit, Wertebereich: " 
              << +std::numeric_limits<signed char>::min() << " bis " 
              << +std::numeric_limits<signed char>::max() << "\n";

    std::cout << "unsigned char: " << sizeof(unsigned char) * 8 << " Bit, Wertebereich: " 
              << +std::numeric_limits<unsigned char>::min() << " bis " 
              << +std::numeric_limits<unsigned char>::max() << "\n";

    std::cout << "short: " << sizeof(short) * 8 << " Bit, Wertebereich: " 
              << std::numeric_limits<short>::min() << " bis " 
              << std::numeric_limits<short>::max() << "\n";

    std::cout << "unsigned short: " << sizeof(unsigned short) * 8 << " Bit, Wertebereich: " 
              << std::numeric_limits<unsigned short>::min() << " bis " 
              << std::numeric_limits<unsigned short>::max() << "\n";

    std::cout << "int: " << sizeof(int) * 8 << " Bit, Wertebereich: " 
              << std::numeric_limits<int>::min() << " bis " 
              << std::numeric_limits<int>::max() << "\n";

    std::cout << "unsigned int: " << sizeof(unsigned int) * 8 << " Bit, Wertebereich: " 
              << std::numeric_limits<unsigned int>::min() << " bis " 
              << std::numeric_limits<unsigned int>::max() << "\n";

    std::cout << "long: " << sizeof(long) * 8 << " Bit, Wertebereich: " 
              << std::numeric_limits<long>::min() << " bis " 
              << std::numeric_limits<long>::max() << "\n";

    std::cout << "unsigned long: " << sizeof(unsigned long) * 8 << " Bit, Wertebereich: " 
              << std::numeric_limits<unsigned long>::min() << " bis " 
              << std::numeric_limits<unsigned long>::max() << "\n";

    std::cout << "long long: " << sizeof(long long) * 8 << " Bit, Wertebereich: " 
              << std::numeric_limits<long long>::min() << " bis " 
              << std::numeric_limits<long long>::max() << "\n";

    std::cout << "unsigned long long: " << sizeof(unsigned long long) * 8 << " Bit, Wertebereich: " 
              << std::numeric_limits<unsigned long long>::min() << " bis " 
              << std::numeric_limits<unsigned long long>::max() << "\n";

    // Fließkomma-Datentypen
    std::cout << "\nFließkomma-Datentypen:\n";
    std::cout << "-----------------------\n";
    
    std::cout << "float: " << sizeof(float) * 8 << " Bit, Wertebereich: " 
              << std::numeric_limits<float>::min() << " bis " 
              << std::numeric_limits<float>::max() << "\n";

    std::cout << "double: " << sizeof(double) * 8 << " Bit, Wertebereich: " 
              << std::numeric_limits<double>::min() << " bis " 
              << std::numeric_limits<double>::max() << "\n";

    std::cout << "long double: " << sizeof(long double) * 8 << " Bit, Wertebereich: " 
              << std::numeric_limits<long double>::min() << " bis " 
              << std::numeric_limits<long double>::max() << "\n";

    return 0;
}
