#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;

    // Verwende einen Vektor für die Eingabe
    vector<int> eingaben(N);

    for (int i = 0; i < N; i++) {
        cin >> eingaben[i];
    }

    // Häufigkeiten der Seitenlängen speichern
    unordered_map<int, int> map;
    for (int i = 0; i < N; i++) {
        map[eingaben[i]]++;
    }

    long long rechtecke = 0;  // Ergebnis
    vector<int> zweiSeiten;  // Seiten mit mindestens 2 Häufigkeiten

    for (const auto& pair : map) {
        int seite = pair.first;
        int haeufigkeit = pair.second;

        // Quadrate zählen
        if (haeufigkeit >= 4) {
            rechtecke++;
        }

        // Seiten mit mindestens 2 Häufigkeiten merken
        if (haeufigkeit >= 2) {
            zweiSeiten.push_back(seite);
        }
    }


    // Rechtecke aus Paaren von Seitenlängen bilden
    int m = zweiSeiten.size();
    for (int i = 0; i < m; i++) {
        for (int j = i + 1; j < m; j++) {
            rechtecke++;
        }
    }

    cout << rechtecke << endl;

    return 0;
}
