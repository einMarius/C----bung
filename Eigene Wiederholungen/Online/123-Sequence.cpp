#include <iostream>
#include <unordered_map>

using namespace std;

int getBiggestValueeOfMap(unordered_map<int, int> &map) {
    int value = 0;
    for(const auto &mapIndex : map) {
        if(mapIndex.second >= value) {
            value = mapIndex.second;
        }
    }
    return value;
}

int main(int argc, char const *argv[]) {
    
    int N;
    cin >> N;
    int n2 = N;

    unordered_map<int, int> haufigkeiten;

    while (N--) {
        int inputNumber;
        cin >> inputNumber;

        switch (inputNumber) {
        case 1:
            haufigkeiten[1]++;
            break;
        case 2:
            haufigkeiten[2]++;
            break;
        case 3:
            haufigkeiten[3]++;
            break;
        default:
            cout << "Nur die Zahlen 1, 2 und 3 sind erlaubt!" << endl;
            return 1;
        }
    }

    int biggestMapValue = getBiggestValueeOfMap(haufigkeiten);

    cout << (n2-biggestMapValue) << endl;
    return 0;
}
