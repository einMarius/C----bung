#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
    
    int cases;
    cin >> cases;

    while(cases--) {
        long long x, y;
        cin >> x >> y;

        if (x-y == 1) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }
    return 0;
}
