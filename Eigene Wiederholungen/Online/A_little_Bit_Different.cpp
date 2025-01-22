#include <iostream>
#include <unordered_map>

using namespace std;

 /**
  * 
  * Erste Zeile Zahl --> Wie viele Zahlen kommen in nächsten Zeile
  * Zweite Zeile: Zahlen
  * 
  */

 int getBiggestValueOfMap(unordered_map<int, int> map) {

    int biggest = 0;
    for (const auto& pair : map) {
        if (biggest <= pair.second) {
            biggest = pair.second;
        }
    }

    return biggest;
 }

int main(int argc, char const *argv[]) {
    
    int n;
    cin >> n;

    unordered_map<int, int> haufigkeiten;

    for (size_t i = 0; i < n; i++) {
        int input;
        cin >> input;

        haufigkeiten[input]++;
    }
    
    int biggestValueInMap = getBiggestValueOfMap(haufigkeiten);

    for (const auto& map : haufigkeiten) {
        if(map.second == biggestValueInMap) {
            cout << map.first << " ";
        }
    }

    return 0;
}
