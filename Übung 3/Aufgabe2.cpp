#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char const *argv[]) {
    
    cout << "Gib die Anzahl N an: ";
    int anzahl;
    cin >> anzahl;

    vector<bool> isPrime(anzahl, true);
    isPrime[0] = isPrime[1] = false;
 
    for (size_t i = 2; i*i <= anzahl; i++) {
        if(isPrime[i]) {
            // Vielfache von i, können automatisch auf false gesetzt werden!
            for (size_t j = i*i; j <= anzahl; j+=i) {
                isPrime[j] = false;
            }
        }
    }

    cout << "Primzahlen: ";
    for (size_t i = 0; i < isPrime.size(); i++) {
        if(isPrime[i]) {
            cout << i << ", ";
        }
    }
    cout << endl;

    return 0;
}
