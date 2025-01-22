#include <iostream>
#include <climits>
#include <cfloat>

using namespace std;

int main(int argc, char const *argv[]) {
    
    //char mit cin.get(input) string mit fori
    int zahl;
    cin >> zahl;

    int quersumme = 0;
    while (zahl != 0) {
        quersumme += zahl%10;
        zahl /=10;
    }
    cout << quersumme << endl;

}
