#include <iostream>

using namespace std;

int main() {

    int x = 65535; //das hier ist das gleiche wie 0xFFFF, damit ist sie, wenn wir sie als 16bit Zahl betrachten, gerade so groß genug
    unsigned short y = x; //es werden alle 16 bit mit 1 belegt (logischerweise nur dann möglich wenn wir kein bit mit einem Vorzeichen brauchen)

    cout << x << y << endl;

    return EXIT_SUCCESS;
}