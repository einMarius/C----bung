#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(int argc, char const *argv[]) {
    
    int n;
    cout << "Gib die Zahl N an: ";
    cin >> n;

    //Bei Vektor immer diese zweite Klammer mit angeben!
    vector<int> numbers(n);
    for (size_t i = 0; i < n; i++) {
        cin >> numbers[i];
    }

    return 0;
}
