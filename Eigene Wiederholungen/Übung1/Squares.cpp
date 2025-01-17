#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
    
    int anzahlVierecke;
    cin >> anzahlVierecke;

    int *ergebnisse = new int[anzahlVierecke];

    for (size_t i = 0; i < anzahlVierecke; i++) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        // 2 bei Quadrat
        // 1 bei Rechteck
        // 0 wenns iwas ist
        if( a == b == c == d) {
            ergebnisse[i] = 2;
        } else if((a==b && c==d) || (a==c && b==d) || (a==d && b==c)) {
            ergebnisse[i] = 1;
        } else {
            ergebnisse[i] = 0;
        }
    }

    for (size_t i = 0; i < anzahlVierecke; i++) {
        cout << ergebnisse[i] << endl;
    }
    
    

    return 0;
}
