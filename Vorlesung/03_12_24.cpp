#include <iostream>

using namespace std;

void swap(double &a, double &b) {
    double t = a;
    a = b;
    b = t;
}

double pi () {
    return 3.1415;
}

int main(int argc, char const *argv[]) {

    double &&PI = pi();
    double x = 10, y = 20;

    double &&z = x*10;
        z /=5;
        z+=127;
        z-=y;

    x = z-PI;


    /* TEIL 2
    double t = 1000;
    double const *p = &t;
    // double * const p = &t; Zeile 11 würde dann nicht mehr gehen

    p = nullptr;
    /*

    TEIL 1 (bis ganz nach unten)

    const double PI = 3.1415;  

    //Das ist ein Zeiger auf einen Konstanten Wert (das const kam später dazu)  
    const double *p = (double*)  &PI;
    double t = 1000;

    p = &t;

    /*
    Man darf mit einem Pointer eine Variable nicht schreiben, auch wenn sie schreibbar wäre
    Zeile 18 wäre Fehler, obwohl Zeile 19 ganz normal geht
    *p = 0;
    t = 0;
    */

    //cout << "p: " << p << ", " << *p << endl;

    /**p = *p / 2;

    const double *q = &PI;

    cout << "p: " << p << ", " << *p << endl;

    cout << "&PI: " << &PI << ", " << PI << endl;

    cout << "q: " << *q << endl;
    */

   
    return 0;
}
