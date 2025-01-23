#include "beispiel.h"

#include <iostream>
using namespace std;

//Operator Überladung --> Rückgabewert: links outputstream, rechts objekt das ausgegeben werden soll
ostream& operator<< (ostream& out, const Basis& basis){
    return out << basis.toString();
}

//gleichen Operator nochmal überladen
ostream& operator<<(ostream& out, const Basis* basis) {
    return out << basis->toString();
}

int main(int argc, char const *argv[]) {
    
    Basis basis;
    A a;
    B b;
    C c;

    Basis *pb = &a;
    Basis &rb = b;

    // --> cast notwendig, damit der Compiler weiß, über welche Klasse er zur Basis Klasse kommt
    cout << basis << a << b << pb << rb << (A) c << endl;

    return 0;
}
