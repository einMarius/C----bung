#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
    
    int testcases;
    cin >> testcases;

    int *kartenanzahl = new int[testcases];

    for (size_t i = 0; i < testcases; i++) {
        cin >> kartenanzahl[i];
    }
    
    

    return 0;
}
