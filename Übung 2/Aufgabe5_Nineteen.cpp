#include <iostream>
#include <unordered_map>
#include <algorithm>

using namespace std;

/**
 * 
 * Nineteen
 * 
 * n: 3 mal
 * i: 1 mal
 * t: 1 mal
 * e: 3 mal
 * 
 */

int main(int argc, char *argv[]) {

    string input;
    cin >> input;

    unordered_map<char, int> haeufigkeit;
    for(char c : input) {
        haeufigkeit[c]++;
    }

    // Berechne, wie oft "nineteen" gebildet werden kann und runde für alle Buchstaben auf
    int haeufigkeit_n = (haeufigkeit['n'] - 1) / 2; // "nineteen" hat 3 x 'n'
    int haeufigkeit_i = haeufigkeit['i'] / 1; // "nineteen" hat 1 x 'i'
    int haeufigkeit_t = haeufigkeit['t'] / 1; // "nineteen" hat 1 x 't'
    int haeufigkeit_e = haeufigkeit['e'] / 3; // "nineteen" hat 3 x 'e'

    int maxNineteen = min({haeufigkeit_n, haeufigkeit_i, haeufigkeit_t, haeufigkeit_e});

    cout << maxNineteen << endl;

    return 0;
}
