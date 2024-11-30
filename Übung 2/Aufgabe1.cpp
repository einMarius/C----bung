#include <iostream>
#include <cstdlib>

int main(int argc, char* argv[]) {

    if (argc < 2) {
        std::cout << "Bitte gib mindestens eine Zahl als Argument ein!" << std::endl;
        return 1;  // Fehlercode, wenn keine Argumente übergeben wurden
    }

    int sum = 0;

    for (int i = 1; i < argc; ++i) {
        // Umwandeln des Argument-Strings in eine Zahl
        int number = std::atoi(argv[i]);
        sum += number;
    }

    std::cout << "Die Summe ist: " << sum << std::endl;

    return 0;
}
