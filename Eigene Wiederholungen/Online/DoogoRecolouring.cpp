#include <iostream>
#include <unordered_map>

using namespace std;

int main(int argc, char const *argv[]) {
    
    int anzahlHunde;
    cin >> anzahlHunde;
    string farben;
    cin >> farben;
    
    unordered_map<char, int> haufigkeiten;

    for (size_t i = 0; i < farben.length(); i++) {
        haufigkeiten[farben[i]]++;
    }

    if(haufigkeiten.size() == 1){
        cout << "Yes" << endl;
        return 0;
    }

    for (auto& paar : haufigkeiten) {
        if(paar.second >= 2) {
            cout << "Yes" << endl;
            return 0;
        }
    }

    cout << "No" << endl;
    return 0;
}
