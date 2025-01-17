#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
    
    int number;
    cout << "Gib deine Nummer ein: ";
    cin >> number;

    int quersumme = 0;
    while (number != 0) {
        quersumme += number % 10;
        cout << "Quersumme bis jetzt: " << quersumme << endl;
        number = number / 10;
        cout << "Number bis jetzt: " << number << endl;
    }
    
    cout << "Quersumme: " << quersumme << endl;

    return 0;
}
