#include <iostream>

/*int main() {
    std::cout << "Gib eine Zahl ein, um die Quersumme zu berechnen (beende mit Enter):\n";
    
    char input;
    int quersumme = 0;

    while (std::cin.get(input) && input != '\n') { 
        // Prüfen, ob das eingegebene Zeichen eine Ziffer ist
        if (isdigit(input)) {
            quersumme += input - '0';  // Ziffer in Integer umwandeln und zur Quersumme addieren; Ansonsten falsches ASCII Zeichen!
        } else {
            std::cout << "Ungültige Eingabe. Bitte nur Zahlen eingeben.\n";
            return 1;
        }
    }

    std::cout << "Die Quersumme ist: " << quersumme << std::endl;

    return 0;
}*/


//Aufgabe c)

int main(int argc, char *argv[]) {

    if(argc == 1) {
        std::cout << "Gib eine Zahl an: ";

        std::string input;
        std::cin >> input;

        int quer = 0;

        for (size_t i = 0; i < input.length(); i++) {

            quer += input[i] - '0'; // Ziffer in einen Integer umwandeln und zur Quersumme addieren, sonst hat man falschen ASCII Werte
            std::cout << quer << ",\n";

        }

        std::cout << "Die Quersumme ist: " << quer << "!\n";

        return 0;
    } else
        return 1;
} 

/*

Aufgabe a)

int main(int argc, char *argv[]) {

    if(argc == 1) {
        std::cout << "Gib eine Zahl an: ";

        int input;
        std::cin >> input;
        std::cout << "Input: " << input << "\n";

        int quer = 0;
        while (input != 0) {
            int lastNumber = input % 10;
            input /= 10;

            quer += lastNumber;
        }

        std::cout << "Die Quersumme ist: " << quer << "!\n";

        return 0;
    } else
        return 1;
}*/