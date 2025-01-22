#include <iostream>

using namespace std;

/**
 *
 * a, b: aktuellen Werte
 * x, y: Werte, die nicht unterschritten werden dürfen
 * n: Reduktionsschritte
 *
 */

int getMinimum(int a, int b) {
    if (a > b) {
        return b;
    } else if (b > a) {
        return a;
    }
    return a;
}

int main(int argc, char const *argv[]) {

    int testfalle;
    cin >> testfalle;

    for (size_t i = 0; i < testfalle; i++) {

        int a, b, x, y, n;
        cin >> a >> b >> x >> y >> n;

        int aKopie = a;
        int bKopie = b;
        for (size_t i = 0; i < n; i++) {
            if (aKopie == x && bKopie == y)
                break;

            if (aKopie > x) {
                aKopie--;
            } else if (aKopie == x) {
                if (bKopie > y)
                {
                    bKopie--;
                }
            }
        }
        int firstTestNumber = aKopie * bKopie;

        aKopie = a;
        bKopie = b;
        for (size_t i = 0; i < n; i++) {
            if (bKopie == x && aKopie == y)
                break;

            if (bKopie > y) {
                bKopie--;
            } else if (bKopie == y) {
                if (aKopie > x) {
                    aKopie--;
                }
            }
        }
        int secondTestNumber = aKopie * bKopie;

        cout << getMinimum(firstTestNumber, secondTestNumber) << endl;
    }
    return 0;
}
