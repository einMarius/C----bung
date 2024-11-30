#include <iostream>

using namespace std;

int main() {

    int t;
    cin >> t;

    while(t--) {
        long long x, y;
        cin >> x >> y;
        
        if (x - y == 1) {
            cout << "NO" << endl;  // Es ist nicht möglich, wenn die Differenz 1 ist
        } else {
            cout << "YES" << endl; // In allen anderen Fällen ist es möglich
        }
    }

}