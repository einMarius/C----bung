#include <iostream>
#include <vector>
#include <algorithm> // Für std::sort

using namespace std;

/**
 * Überprüft, ob alle Container in die Laderäume passen
 */
int main(int argc, char const *argv[]) {
    int anzahlLaderaume, anzahlContainer;
    cin >> anzahlLaderaume >> anzahlContainer;

    vector<int> groesseLaderaume(anzahlLaderaume);
    vector<int> groesseContainer(anzahlContainer);

    // Eingabe: Laderäume
    for (int i = 0; i < anzahlLaderaume; i++) {
        char groesse;
        cin >> groesse;
        switch (groesse) {
            case 'L': groesseLaderaume[i] = 200; break;
            case 'M': groesseLaderaume[i] = 100; break;
            case 'S': groesseLaderaume[i] = 50; break;
            default: break;
        }
    }

    // Eingabe: Container
    for (int i = 0; i < anzahlContainer; i++) {
        cin >> groesseContainer[i];
    }

    // Sortiere beide Listen in absteigender Reihenfolge
    sort(groesseLaderaume.rbegin(), groesseLaderaume.rend());
    sort(groesseContainer.rbegin(), groesseContainer.rend());

    // Überprüfe, ob alle Container zugeordnet werden können
    int j = 0; // Index für Laderäume
    for (int i = 0; i < anzahlContainer; i++) {
        // Wenn kein Laderaum mehr übrig ist oder der größte Container nicht passt
        if (j >= anzahlLaderaume || groesseContainer[i] > groesseLaderaume[j]) {
            cout << "No" << endl;
            return 0;
        }
        // Wechsle zum nächsten Laderaum
        j++;
    }

    // Alle Container wurden erfolgreich zugeordnet
    cout << "Yes" << endl;
    return 0;
}
