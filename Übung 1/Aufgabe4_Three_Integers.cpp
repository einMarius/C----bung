#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int anzahl;

    cin >> anzahl;

    while(anzahl--) {

        int x, y;

        cin >> x >> y;

        if (x > y) {
            cout << "1 ";
            int a = y - 1;
            cout << a << " ";
            int b = x - a;
            cout << b << "\n";
        } else if (x < y) {
            cout << "1 ";
            int a = x - 1;
            cout << a << " ";
            int b = y - a;
            cout << b << "\n";
        } else {
            cout << "1 ";
            int a = x - 1;
            cout << a << " ";
            int b = y - a;
            cout << b << "\n";
        }
    }
    return 0;
}