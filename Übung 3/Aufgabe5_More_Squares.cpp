#include <iostream>

using namespace std;

const int MAX_LENGTH = 10000000; // Maximale Seitenlänge

int main(int argc, char const *argv[]) {
    
    int n;
    cin >> n;

    // Frequenz-Array für Seitenlängen
    int* freq = new int[MAX_LENGTH + 1](); // Dynamisches Array initialisiert mit 0

    // Eingabe und Frequenzen berechnen
    for (int i = 0; i < n; i++) {
        int length;
        cin >> length;
        freq[length]++;
    }

    // Anzahl der Paare berechnen
    long long pair_count = 0; // Lang genug, da n groß sein kann
    for (int i = 0; i <= MAX_LENGTH; i++) {
        pair_count += freq[i] / 2; // Ganze Paare aus der Frequenz
    }

    // Anzahl der Rechtecke berechnen
    long long rectangles = pair_count / 2;

    // Ergebnis ausgeben
    cout << rectangles << endl;

    // Speicher freigeben
    delete[] freq;

    return 0;
}
