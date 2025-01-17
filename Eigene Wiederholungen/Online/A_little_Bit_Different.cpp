#include <iostream>
#include <vector>

using namespace std;

 /**
  * 
  * Erste Zeile Zahl --> Wie viele Zahlen kommen in nächsten Zeile
  * Zweite Zeile: Zahlen
  * 
  */

int findBiggest(vector<int> vector) {

    int size = vector.size();
    int biggest = 0;
    for (size_t i = 0; i < size; i++) {
        if(biggest <= vector[i]) {
            biggest = vector[i];
        }
    }    

    return biggest;
}

int main(int argc, char const *argv[]) {
    
    int n;
    cout << "Gib die Zahl N an: ";
    cin >> n;

    //Bei Vektor immer diese zweite Klammer mit angeben!
    vector<int> zahlen(n);
    for (size_t i = 0; i < n; i++) {
        cin >> zahlen[i];
    }

    cout << findBiggest(zahlen) << endl;

    return 0;
}
