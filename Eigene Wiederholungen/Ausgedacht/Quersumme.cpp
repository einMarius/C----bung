#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(int argc, char const *argv[]) {
    
    int n;
    cout << "Gib die Anzahl der Stellen an: ";
    cin >> n;

    string zahl;
    cout << "Gib die Zahl ein: ";
    cin >> zahl;

    int quersumme = 0;
    for(char c : zahl) {
        quersumme += c - '0';
    }

    cout << quersumme << endl;

    return 0;
}
