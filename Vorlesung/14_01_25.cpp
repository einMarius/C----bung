#include <iostream>
#include <string>

using namespace std;

void print(int x) {
    cout << "Hello World: " << x << endl;
}

void (*p) (int) = print; // pointer to function without parameters and no return value
//p und print zeigen jz auf gleichen maschinencode, der aufgerufen wird über p() oder (*p)();


void a(int);
auto b(int) -> void;

void b(int x) {
    if(++x < 5) a(x);
    else cout << "Ende in b" << endl;
}

void a(int x) {
    if(++x < 5) b(x);
    else cout << "Ende in a" << endl;
}

// inline funktionen sind in der regel kleiner als die aufrufenden funktionsaufrufe, da sie direkt im aufrufer eingebettet werden.
//kompilierte maschinencode wird in der geschweiften klammer eingesetzt, wenn sie inline deklariert sind. --> es wird nicht mehr gesprungen!
inline void z (int &x) { x++; }

int main(int argc, char const *argv[]) {

    /*
    string s = string("Hello World");

    //s nicht änderbar
    auto lambda = [=] () -> void{ cout << s << endl; };
    cout << s << endl;

    // s änderbar
    auto lambda2 = [=] () mutable -> void {s = "C++"; cout << s << endl;};
    cout << s << endl;

    */

    /*
    // ka was hier ist
    cout << print(10) << endl;

    string s {"ABC"};
    void (*lambda) (string) = [] (string s) {cout << s << endl;};
    lambda(s);
    */

    /*
    // Geht jz hier um Typumwandlung

    //int *z = 9;
    //int y = const_cast<int>(z);

    int i = static_cast<int>(100.5); 

    //int pointer initialisieren mit einer double
    double d = -100.501020345;
    
    int p = static_cast<int> (d);
    char* s = reinterpret_cast<char*>(&d);

    cout << p << endl;
    cout << s << endl;

    string test = "1234";
    //int p = static_cast<string> (test);
    char* s2 = reinterpret_cast<char*>(&test);

    cout << s2 << endl;
    */



    //geht jz weiter mit funktionen
    int x = -10000;
    while (x)z (x);

    x = -1;
    z(x);
    cout << x << endl;

    return EXIT_SUCCESS;
    
}
