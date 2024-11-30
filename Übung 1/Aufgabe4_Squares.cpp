#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {

    int input;
    cin >> input;

    int *ergebnisse = new int[input];

    for (size_t i = 0; i < input; i++) {

        int a, b, c, d;
        cin >> a >> b >> c >> d;

        cout << a << ", " << b << ", " << c << ", " << d << endl;

        if (a == b && b == c && c == d) {
            ergebnisse[i] = 2;
        } else if ((a == b && c == d) || (a == c && b == d) || (a == d && b == c)) {
            ergebnisse[i] = 1;
        } else {
            ergebnisse[i] = 0;
        }
    }

    for(int i = 0; i < input; ++i) {
        cout << ergebnisse[i] << " ";
    }
    cout << endl;

    return 0;
}