#include <iostream>

using namespace std;

int _greater(int a, int b) {
    return a > b;
}

void g(int* p) {
    bool b = p; //wird zu true oder false eingeschränkt
    bool b2 { p != nullptr }; //expliziter Test auf nulltpr

    if(p) {

    }
}

void intval() {
    for (char c; cin >> c; ) 

        cout << "Der Wert von " << c << " lautet " << int(c) << endl;
    
}

int main() {
    bool b1 = 7;

    int i = 5;

    bool b3 { 1 != 0};

    cout << "b1: " << b1 << endl;

    b1 = _greater(5, 3);

    cout << "5 > 3" << b1 << endl;

    int i1 = true; //i1 wird 1
    int i2 = (true); //i2 wird 1

    bool a = true, b = true;

    bool x = a+b; //a+2 ist 2, sodass x zu true wird
    bool y = a||b; //a||b ist true, sodass y zu true wird
    bool z = a-b; //a-b ist 0, sodass z false wird;

    char c = 1;

    while (c) {
        cout << (int) c++ << ' ' << c++ << endl;
    }

    intval();

    return EXIT_SUCCESS;
}