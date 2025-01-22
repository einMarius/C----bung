#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[]) {
    
    int laderaumeAnzahl, containerAnzahl;
    cin >> laderaumeAnzahl >> containerAnzahl;

    int *laderaumeGroessen = new int[laderaumeAnzahl];
    int *containerGroessen = new int[containerAnzahl];
    
    //Containergrößen eingeben
    for (size_t i = 0; i < containerAnzahl; i++) {
        char input;
        cin >> input;
        switch (input) {
        case 'L':
            containerGroessen[i] = 200;
            break;
        case 'M':
            containerGroessen[i] = 100;
            break;
        case 'S':
            containerGroessen[i] = 50;
            break;
        default:
            break;
        }
    }

    //Laderaumgrößen eingeben
    for (size_t i = 0; i < laderaumeAnzahl; i++) {
        cin >> laderaumeGroessen[i];
    }
    
    if(laderaumeAnzahl < containerAnzahl) {
        cout << "No" << endl;
        return 1;
    }

    // Sortieren der Arrays
    sort(laderaumeGroessen, laderaumeGroessen + laderaumeAnzahl);
    sort(containerGroessen, containerGroessen + containerAnzahl);

    // Vergleich der Container mit Laderäumen
    for (int i = containerAnzahl - 1; i > 0; i--) {
        if (laderaumeGroessen[i] > containerGroessen[i]) {
            cout << "No" << endl;
            delete[] laderaumeGroessen;
            delete[] containerGroessen;
            return 1;
        }
    }

    cout << "Yes" << endl;

    delete[] laderaumeGroessen;
    delete[] containerGroessen;

    return 0;
}
