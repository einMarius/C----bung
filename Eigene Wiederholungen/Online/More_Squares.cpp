#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

/**
 * 
 * für ein Viereck, braucht man 2x 2 gleich Lange Seiten (2, 4, 4, 2)
 * 
 */
int main(int argc, char const *argv[]) {
    
    int N;
    cin >> N;

    int *eingaben = new int[N];
    //1 2 2 1 1 2 2 1
    for (size_t i = 0; i < N; i++) {
        cin >> eingaben[i];
    }

    unordered_map<int, int> map;

    for (size_t i = 0; i < N; i++) {
        int seitenlange = eingaben[i];
        map[seitenlange]++;
    }

    int haufigkeitenSum = 0;
    /*
    1: 5
    2: 1
    3: 8
    4: 4
    */
    //Quadrate zählen
    for (size_t i = 0; i < map.size(); i++) {
        if(map[i] >= 4) {
            haufigkeitenSum +=1;
        }
    }

    for (size_t i = 0; i < map.size(); i++) {
        if(map[i] >= 2) {
            for (size_t j = i+1; j < map.size(); j++) {
                if(map[j] >= 2) {
                    haufigkeitenSum+=1;
                }
            }
        }
    }
    
    /*
    for (const auto &pair : map) {
        cout << "Key: " << pair.first << ", Value: " << pair.second << endl;
    }
    */

    cout << haufigkeitenSum << endl;

    delete[] eingaben;

    return 0;
}
