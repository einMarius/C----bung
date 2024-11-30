#include <iostream>

using namespace std;

void swap(int* pa, int* pb) {
    int tmp = *pa;
    *pa = *pb;
    *pb = tmp;
}

int main(int argc, char const *argv[]) {

    char chararry[10] = {'A', 'L', 'L', 'E', 'S', 'I', 'N', 'D', 'G', 'A'};
    cout << "Feldgröße in Byte: " << sizeof(chararry) 
        << "char-size: " << sizeof(char) << endl;

    for (size_t i = 0; i < sizeof(chararry); i++) {
        cout << chararry[i] << endl;
    }
    


    double feld[100]; //800 bytes --> bei Int sind es 400 byte
    cout << "sizeof (feld) in Byte: " << sizeof(feld) << ", sizeof (double): " << sizeof(double) << endl;

    for (size_t i = 0; i < sizeof(feld)/sizeof(double); i++) {
        feld[i] = rand();
        cout << feld[i] << endl;
    }
    


    int* pnull = NULL;
    int *null = 0;
    int *np = nullptr;
    cout << (pnull == null) << (np == null) << endl;



    int a, b;

    a = 5;
    b = 7;

    //zum Kopieren der Variable:
    int tmp = a;
    a = b;
    b = tmp;

    cout << a << b << endl;

    /*
    *
    * Fügt man die Zeilen 13-15 in eine void-Methode, funktioniert diese nicht, da es sich um eine Wertekopie handelt
    * Wie macht man es richtig: "Call by reference"
    *
    */

    swap(&a, &b);
    cout << a << b << endl;

    return 0;
}
