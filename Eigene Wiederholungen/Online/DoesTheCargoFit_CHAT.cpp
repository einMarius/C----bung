#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

template <typename T>
void printVector(vector<T> &vector) {
    for (size_t i = 0; i < vector.size(); i++) {
        cout << i << ": " << vector[i] << endl;
    }
    cout << "--------------------" << endl;
}

int main() {
    int anzahlLaderaume, anzahlContainer;
    cin >> anzahlLaderaume >> anzahlContainer;

    vector<int> groesseLaderaume(anzahlLaderaume);
    vector<int> groesseContainer(anzahlContainer);

    // Eingabe: Laderäume
    for (int i = 0; i < anzahlLaderaume; i++) {
        char groesse;
        cin >> groesse;
        switch (groesse) {
        case 'L':
            groesseLaderaume[i] = 200;
            break;
        case 'M':
            groesseLaderaume[i] = 100;
            break;
        case 'S':
            groesseLaderaume[i] = 50;
            break;
        default:
            cerr << "Ungültige Eingabe für Laderaumgröße!" << endl;
            return 1;
        }
    }

    // Eingabe: Container
    for (int i = 0; i < anzahlContainer; i++) {
        cin >> groesseContainer[i];
    }

    if(anzahlContainer != anzahlLaderaume) {
        cout << "No" << endl;
        return 1;
    }

    // Sortiere Laderäume und Container absteigend
    sort(groesseLaderaume.rbegin(), groesseLaderaume.rend());
    sort(groesseContainer.rbegin(), groesseContainer.rend());

    // Verteile Container auf Laderäume
    for (int container : groesseContainer) {
        bool untergebracht = false; //container nicht untergebracht
        for (int &laderaum : groesseLaderaume) {
            if (container <= laderaum) {
                laderaum -= container;
                untergebracht = true;
                break;
            }
        }
        if (!untergebracht) {
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;
    return 0;
}
