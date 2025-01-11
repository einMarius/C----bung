#include <iostream>

using namespace std;

#define MAX 255;
constexpr int val() {
    return 30*MAX;
}

constexpr int dval(int x) {
    return 2*x;
}

int main(int argc, char const *argv[]) {
    
    int x = 10, y = 20;
    //&, x: refferenziere alle variablen, kopiere das x 
    auto lambda = [&, x] () {cout << x << endl;};

    auto lambda2 = [&] (int z) -> int { y*= z; return x+y; };

    x++;
    y--;

    //--> da x bei lambda kopiert wird, ist der wert von x nach lambda() aufruf immernoch 10
    lambda();

    return 0;
}



/*

int main(int argc, char const *argv[]) {
    
    auto z = int {10};

    cout << z << endl;

    return 0;
}

*/
/*
int main(int argc, char const *argv[]) {
    
    auto feld[10] = int {1, 2, 3, 4, 5};
    //hat hier noch irgendeine for schleife drin

    return 0;
}
*/

/*

int main(int argc, char const *argv[]) {
    
    int *feld = new int[100];

    for (size_t i = 0; i < 100; i++) {
        cout << feld[i] << ' ';
    }
    cout << endl;

    feld = nullptr;

    return 0;
}
*/

/*

int main(int argc, char const *argv[]) {
    
    int y = 128;
    int x = 129;

    cout << "Bitund: " << (x & y) << endl;
    cout << "Bitoder: " << (x | y) << endl;

    cout << "XOR: " << (x ^ y) << endl;
    cout << "Bitneg: " << ~y << endl;
    cout << "log. Und: " << (x && y) << endl;
    cout << "log. Oder: " << (x || y) << endl;
    cout << "log. Neg: " << !x << endl; 

    cout << (x << 2) << endl;
    cout << (y >> 2) << endl;

    return 0;
}

*/

/*
// Constexpr Funktionen sind i.d.R. nur solche einfachen Berechnungen
constexpr int val() {
    return 30*255;
}

int main(int argc, char const *argv[]) {
    
    constexpr int value = val();

    constexpr int x = 2*value;

    cout << x << endl;

    return 0;
}

*/