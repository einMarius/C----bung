#include <iostream>
#include <unordered_map>
#include <fstream>

using namespace std;

char getBiggestKeyOfMap(unordered_map<char, int> map) {
    int biggestValue = 0;
    char biggestKey;

    for(const auto &x : map) {
        if(biggestValue <= x.second) {
            biggestValue = x.second;
            biggestKey = x.first;
        }
    }

    return biggestKey;
}

int main(int argc, char const *argv[]) {
    
    fstream file("test.txt");
    char input;

    unordered_map<char, int> haufigkeiten;

    while(file.get(input)) {
        input = tolower(input);
        haufigkeiten[input]++;
    }

    for (size_t i = 0; i < 9; i++) {
        char c = getBiggestKeyOfMap(haufigkeiten);
        cout << i+1 << ": " << c << ", Häufigkeit: " << haufigkeiten[c] << endl;
        haufigkeiten[c] = 0;
    }
    

    return 0;
}
