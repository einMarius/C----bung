#include <iostream>

using namespace std;

/**
 * 
 * Du erhältst zwei ganze Zahlen \(a\) und \(b\). In einem Zug kannst du eine Zahl \(k\) aus dem Bereich von 1 bis 10 auswählen und zu \(a\) addieren oder von \(a\) subtrahieren. 
 * Mit anderen Worten: Du wählst eine ganze Zahl \(k \in [1;10]\) und führst eine der folgenden Operationen aus: \(a := a + k\) oder \(a := a - k\). 
 * Dabei kannst du in verschiedenen Zügen unterschiedliche Werte für \(k\) verwenden.
 * Deine Aufgabe ist es, die minimale Anzahl an Zügen zu finden, die erforderlich sind, um \(b\) ausgehend von \(a\) zu erreichen.
 * 
 * Du musst \(t\) unabhängige Testfälle beantworten.
 * 
 */

int main(int argc, char const *argv[]) {
    
    int testCases;
    cin >> testCases;

    while (testCases--) {
        int a, b;
        cin >> a >> b;

        // Berechne die absolute Differenz
        int diff = abs(a - b);

        // Berechne die minimalen Schritte
        int moves = diff / 10 + (diff % 10 != 0);

        cout << moves << endl;
    }

    return 0;
}
