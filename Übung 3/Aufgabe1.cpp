#include <iostream>
#include <vector>
#include <unordered_set>
#include <cstdlib>
#include <ctime>

using namespace std;

double simulateBirthdayProblem(int N, int M) {
    int collisionCount = 0;
    srand(time(nullptr)); // Zufallsgenerator initialisieren
    
    //Iteration von M Versuchen, wo geschaut wird, ob ein Geburtstag zwei mal vorkommt
    for (int i = 0; i < M; ++i) {
        vector<int> birthdays(N); //hat Platz für N Elemente
        unordered_set<int> seen;
        bool collision = false;
        
        for (int j = 0; j < N; ++j) {
            birthdays[j] = rand() % 365 + 1; // Zufällige Geburtstage (modulo 365 begrenzt Werte auf 0-364)
            if (seen.find(birthdays[j]) != seen.end()) { // Prüfe, ob der Geburtstag bereits in `seen` ist
                collision = true;
                break;
            }
            seen.insert(birthdays[j]);
        }
        
        if (collision) collisionCount++;
    }
    
    return static_cast<double>(collisionCount) / M;
}

int main() {
    int N = 23; // Anzahl Personen
    int M = 1000; // Anzahl Wiederholungen
    
    double probability = simulateBirthdayProblem(N, M);
    cout << "Geschätzte Wahrscheinlichkeit: " << probability << endl;
    return 0;
}
